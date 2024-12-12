// #anon_enum_LZMA_MF_HC3=3_LZMA_MF_HC4=4_LZMA_MF_BT2=18_LZMA_MF_BT3=19_LZMA_MF_BT4=20
// file /usr/include/lzma/lzma.h line 58
enum anonymous_4 { LZMA_MF_HC3=3, LZMA_MF_HC4=4, LZMA_MF_BT2=18, LZMA_MF_BT3=19, LZMA_MF_BT4=20 };

// #anon_enum_LZMA_MODE_FAST=1_LZMA_MODE_NORMAL=2
// file /usr/include/lzma/lzma.h line 138
enum anonymous_3 { LZMA_MODE_FAST=1, LZMA_MODE_NORMAL=2 };

// #anon_enum_LZMA_OK=0_LZMA_STREAM_END=1_LZMA_NO_CHECK=2_LZMA_UNSUPPORTED_CHECK=3_LZMA_GET_CHECK=4_LZMA_MEM_ERROR=5_LZMA_MEMLIMIT_ERROR=6_LZMA_FORMAT_ERROR=7_LZMA_OPTIONS_ERROR=8_LZMA_DATA_ERROR=9_LZMA_BUF_ERROR=10_LZMA_PROG_ERROR=11
// file /usr/include/lzma/base.h line 57
enum anonymous_9 { LZMA_OK=0, LZMA_STREAM_END=1, LZMA_NO_CHECK=2, LZMA_UNSUPPORTED_CHECK=3, LZMA_GET_CHECK=4, LZMA_MEM_ERROR=5, LZMA_MEMLIMIT_ERROR=6, LZMA_FORMAT_ERROR=7, LZMA_OPTIONS_ERROR=8, LZMA_DATA_ERROR=9, LZMA_BUF_ERROR=10, LZMA_PROG_ERROR=11 };

// #anon_enum_LZMA_RESERVED_ENUM=0
// file /usr/include/lzma/base.h line 44
enum anonymous_5 { LZMA_RESERVED_ENUM=0 };

// #anon_enum_LZMA_RUN=0_LZMA_SYNC_FLUSH=1_LZMA_FULL_FLUSH=2_LZMA_FINISH=3
// file /usr/include/lzma/base.h line 250
enum anonymous { LZMA_RUN=0, LZMA_SYNC_FLUSH=1, LZMA_FULL_FLUSH=2, LZMA_FINISH=3 };

// tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'||*{V}_V_'opaque'|]
// file /usr/include/lzma/base.h line 349
struct anonymous_7;

// tag-#anon#ST[*{cU8}_cU8_'next_in'||U64'avail_in'||U64'total_in'||*{U8}_U8_'next_out'||U64'avail_out'||U64'total_out'||*{SYM#tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'||*{V}_V_'opaque'|]#}_SYM#tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'||*{V}_V_'opaque'|]#_'allocator'||*{SYM#tag-lzma_internal_s#}_SYM#tag-lzma_internal_s#_'internal'||*{V}_V_'reserved_ptr1'||*{V}_V_'reserved_ptr2'||*{V}_V_'reserved_ptr3'||*{V}_V_'reserved_ptr4'||U64'reserved_int1'||U64'reserved_int2'||U64'reserved_int3'||U64'reserved_int4'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'|]
// file /usr/include/lzma/base.h line 461
struct anonymous_8;

// tag-#anon#ST[U32'dict_size'||U32'_pad0'||*{cU8}_cU8_'preset_dict'||U32'preset_dict_size'||U32'lc'||U32'lp'||U32'pb'||EN#anon_enum_LZMA_MODE_FAST=1_LZMA_MODE_NORMAL=2#{U32}_U32_'mode'||U32'nice_len'||EN#anon_enum_LZMA_MF_HC3=3_LZMA_MF_HC4=4_LZMA_MF_BT2=18_LZMA_MF_BT3=19_LZMA_MF_BT4=20#{U32}_U32_'mf'||U32'depth'||U32'reserved_int1'||U32'reserved_int2'||U32'reserved_int3'||U32'reserved_int4'||U32'reserved_int5'||U32'reserved_int6'||U32'reserved_int7'||U32'reserved_int8'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum3'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum4'||*{V}_V_'reserved_ptr1'||*{V}_V_'reserved_ptr2'|]
// file /usr/include/lzma/lzma.h line 185
struct anonymous_6;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_0;

// tag-XDR
// file /usr/include/rpc/xdr.h line 109
struct XDR;

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

// tag-gzFile_s
// file /usr/include/zlib.h line 1224
struct gzFile_s;

// tag-lzma_handle_t
// file ./../liblzma/LzmaLib.c line 42
struct lzma_handle_t;

// tag-lzma_internal_s
// file /usr/include/lzma/base.h line 419
struct lzma_internal_s;

// tag-lzma_state_t
// file ./../liblzma/LzmaLib.c line 39
enum lzma_state_t { LZMA_STATE_WRITE=0, LZMA_STATE_READ_ERROR=1, LZMA_STATE_READ_INIT=2, LZMA_STATE_READ_GETBLOCK=3, LZMA_STATE_READ_GETBYTES=4 };

// tag-namehier
// file scopenav.c line 28
struct namehier;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-vzt_ncycle_autosort
// file vzt_read.c line 55
struct vzt_ncycle_autosort;

// tag-vzt_pth_args
// file vzt_read.c line 60
struct vzt_pth_args;

// tag-vzt_rd_block
// file vzt_read.h line 147
struct vzt_rd_block;

// tag-vzt_rd_facname_cache
// file vzt_read.h line 189
struct vzt_rd_facname_cache;

// tag-vzt_rd_geometry
// file vzt_read.h line 181
struct vzt_rd_geometry;

// tag-vzt_rd_trace
// file vzt_read.h line 198
struct vzt_rd_trace;

// tag-vzt_synvec_chain
// file vzt_read.c line 66
struct vzt_synvec_chain;

// tag-xdr_op
// file /usr/include/rpc/xdr.h line 81
enum xdr_op { XDR_ENCODE=0, XDR_DECODE=1, XDR_FREE=2 };

// tag-xdr_ops
// file /usr/include/rpc/xdr.h line 113
struct xdr_ops;

#ifndef NULL
#define NULL ((void*)0)
#endif

// BZ2_bzclose
// file /usr/include/bzlib.h line 264
extern void BZ2_bzclose(void *);
// BZ2_bzdopen
// file /usr/include/bzlib.h line 243
extern void * BZ2_bzdopen(signed int, const char *);
// BZ2_bzread
// file /usr/include/bzlib.h line 248
extern signed int BZ2_bzread(void *, void *, signed int);
// LZMA_close
// file ./../liblzma/LzmaLib.h line 33
void LZMA_close(void *handle);
// LZMA_fdopen
// file ./../liblzma/LzmaLib.h line 32
void * LZMA_fdopen(signed int fd, const char *mode);
// LZMA_flush
// file ./../liblzma/LzmaLib.c line 208
unsigned long int LZMA_flush(void *handle);
// LZMA_read
// file ./../liblzma/LzmaLib.h line 36
unsigned long int LZMA_read(void *handle, void *mem, unsigned long int len);
// LZMA_read_varint
// file ./../liblzma/LzmaLib.c line 73
static unsigned long int LZMA_read_varint(struct lzma_handle_t *h);
// LZMA_write
// file ./../liblzma/LzmaLib.c line 244
unsigned long int LZMA_write(void *handle, void *mem, unsigned long int len);
// LZMA_write_compress
// file ./../liblzma/LzmaLib.c line 97
static unsigned long int LZMA_write_compress(struct lzma_handle_t *h, unsigned char *mem, unsigned long int len);
// LZMA_write_varint
// file ./../liblzma/LzmaLib.c line 54
static void LZMA_write_varint(struct lzma_handle_t *h, unsigned long int v);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// asctime
// file /usr/include/time.h line 261
extern char * asctime(struct tm *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// diff_hier
// file scopenav.c line 55
static void diff_hier(struct _IO_FILE *fv, struct namehier *nh1, struct namehier *nh2);
// dup
// file /usr/include/unistd.h line 531
extern signed int dup(signed int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
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
// free_hier
// file scopenav.c line 38
void free_hier(void);
// fseeko
// file /usr/include/stdio.h line 773
extern signed int fseeko(struct _IO_FILE *, signed long int, signed int);
// ftello
// file /usr/include/stdio.h line 778
extern signed long int ftello(struct _IO_FILE *);
// fv_output_hier
// file scopenav.c line 121
char * fv_output_hier(struct _IO_FILE *fv, char *name);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gzclose
// file /usr/include/zlib.h line 1511
extern signed int gzclose(struct gzFile_s *);
// gzdopen
// file /usr/include/zlib.h line 1264
extern struct gzFile_s * gzdopen(signed int, const char *);
// gzread
// file /usr/include/zlib.h line 1313
extern signed int gzread(struct gzFile_s *, void *, unsigned int);
// is_big_endian
// file vzt_read.c line 41
static signed int is_big_endian(void);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// lzma_alone_decoder
// file /usr/include/lzma/container.h line 377
extern enum anonymous_9 lzma_alone_decoder(struct anonymous_8 *, unsigned long int);
// lzma_alone_encoder
// file /usr/include/lzma/container.h line 213
extern enum anonymous_9 lzma_alone_encoder(struct anonymous_8 *, const struct anonymous_6 *);
// lzma_code
// file /usr/include/lzma/base.h line 537
extern enum anonymous_9 lzma_code(struct anonymous_8 *, enum anonymous);
// lzma_end
// file /usr/include/lzma/base.h line 554
extern void lzma_end(struct anonymous_8 *);
// lzma_lzma_preset
// file /usr/include/lzma/lzma.h line 419
extern unsigned char lzma_lzma_preset(struct anonymous_6 *, unsigned int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// print_help
// file vzt2vcd.c line 317
void print_help(char *nam);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_vzt
// file vzt2vcd.c line 168
signed int process_vzt(char *fname);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_0 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_0 *, const union anonymous_2 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_0 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// setenv
// file /usr/include/stdlib.h line 584
extern signed int setenv(const char *, const char *, signed int);
// setvbuf
// file /usr/include/stdio.h line 336
extern signed int setvbuf(struct _IO_FILE *, char *, signed int, unsigned long int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// unsetenv
// file /usr/include/stdlib.h line 588
extern signed int unsetenv(const char *);
// vcd_callback
// file vzt2vcd.c line 114
void vcd_callback(struct vzt_rd_trace **lt, unsigned long int *pnt_time, unsigned int *pnt_facidx, char **pnt_value);
// vcd_truncate_bitvec
// file vzt2vcd.c line 82
static char * vcd_truncate_bitvec(char *s);
// vcdid
// file vzt2vcd.c line 47
static char * vcdid(unsigned int value);
// vzt_rd_block_vch_decode
// file vzt_read.c line 307
static void vzt_rd_block_vch_decode(struct vzt_rd_trace *lt, struct vzt_rd_block *b);
// vzt_rd_block_vch_free
// file vzt_read.c line 475
static signed int vzt_rd_block_vch_free(struct vzt_rd_trace *lt, struct vzt_rd_block *b, signed int killed);
// vzt_rd_close
// file vzt_read.c line 2204
void vzt_rd_close(struct vzt_rd_trace *lt);
// vzt_rd_decompress_blk
// file vzt_read.c line 1363
static void vzt_rd_decompress_blk(struct vzt_rd_trace *lt, struct vzt_rd_block *b, signed int reopen);
// vzt_rd_decompress_blk_pth
// file vzt_read.c line 1438
static void vzt_rd_decompress_blk_pth(struct vzt_rd_trace *lt, struct vzt_rd_block *b);
// vzt_rd_decompress_blk_pth_actual
// file vzt_read.c line 1428
static void * vzt_rd_decompress_blk_pth_actual(void *args);
// vzt_rd_det_gzip_type
// file vzt_read.c line 1340
static signed int vzt_rd_det_gzip_type(struct _IO_FILE *handle);
// vzt_rd_double_xdr
// file vzt_read.c line 673
static void vzt_rd_double_xdr(char *pnt, char *buf);
// vzt_rd_expand_bits_to_integer
// file vzt_read.c line 287
unsigned int vzt_rd_expand_bits_to_integer(signed int len, char *s);
// vzt_rd_fac_value
// file vzt_read.c line 589
signed int vzt_rd_fac_value(struct vzt_rd_trace *lt, struct vzt_rd_block *b, unsigned int time_offset, unsigned int facidx, char *value);
// vzt_rd_get_16
// file vzt_read.c line 135
static unsigned int vzt_rd_get_16(void *mm, signed int offset);
// vzt_rd_get_32
// file vzt_read.c line 143
static unsigned int vzt_rd_get_32(void *mm, signed int offset);
// vzt_rd_get_32r
// file vzt_read.c line 163
static unsigned int vzt_rd_get_32r(void *mm, signed int offset);
// vzt_rd_get_64
// file vzt_read.c line 153
static unsigned long int vzt_rd_get_64(void *mm, signed int offset);
// vzt_rd_get_alias_root
// file vzt_read.c line 1060
static inline unsigned int vzt_rd_get_alias_root(struct vzt_rd_trace *lt, unsigned int facidx);
// vzt_rd_get_alias_root_link1
// file vzt_read.h line 267
unsigned int vzt_rd_get_alias_root_link1(struct vzt_rd_trace *, unsigned int);
// vzt_rd_get_block_mem_usage
// file vzt_read.c line 1293
unsigned long int vzt_rd_get_block_mem_usage(struct vzt_rd_trace *lt);
// vzt_rd_get_end_time
// file vzt_read.h line 271
unsigned long int vzt_rd_get_end_time(struct vzt_rd_trace *);
// vzt_rd_get_fac_geometry
// file vzt_read.c line 974
struct vzt_rd_geometry * vzt_rd_get_fac_geometry(struct vzt_rd_trace *lt, unsigned int facidx);
// vzt_rd_get_facname
// file vzt_read.c line 1109
char * vzt_rd_get_facname(struct vzt_rd_trace *lt, unsigned int facidx);
// vzt_rd_get_num_active_blocks
// file vzt_read.c line 1316
unsigned int vzt_rd_get_num_active_blocks(struct vzt_rd_trace *lt);
// vzt_rd_get_num_facs
// file vzt_read.h line 259
unsigned int vzt_rd_get_num_facs(struct vzt_rd_trace *);
// vzt_rd_get_start_time
// file vzt_read.h line 270
unsigned long int vzt_rd_get_start_time(struct vzt_rd_trace *);
// vzt_rd_get_timescale
// file vzt_read.h line 269
char vzt_rd_get_timescale(struct vzt_rd_trace *);
// vzt_rd_get_timezero
// file vzt_read.h line 272
signed long int vzt_rd_get_timezero(struct vzt_rd_trace *);
// vzt_rd_get_v32
// file vzt_read.c line 174
static unsigned int vzt_rd_get_v32(char **mmx);
// vzt_rd_get_v64
// file vzt_read.c line 205
static unsigned long int vzt_rd_get_v64(char **mmx);
// vzt_rd_init
// file vzt_read.c line 2192
struct vzt_rd_trace * vzt_rd_init(const char *name);
// vzt_rd_init_smp
// file vzt_read.c line 1675
struct vzt_rd_trace * vzt_rd_init_smp(const char *name, unsigned int num_cpus);
// vzt_rd_iter_blocks
// file vzt_read.c line 1452
signed int vzt_rd_iter_blocks(struct vzt_rd_trace *lt, void (*value_change_callback)(struct vzt_rd_trace **, unsigned long int *, unsigned int *, char **), void *user_callback_data_pointer);

//

// vzt_rd_limit_time_range
// file vzt_read.c line 1571
unsigned int vzt_rd_limit_time_range(struct vzt_rd_trace *lt, unsigned long int strt_time, unsigned long int end_time);
// vzt_rd_make_sindex
// file vzt_read.c line 720
static unsigned int vzt_rd_make_sindex(char *pnt);
// vzt_rd_next_value_chg_time
// file vzt_read.c line 500
unsigned int vzt_rd_next_value_chg_time(struct vzt_rd_trace *lt, struct vzt_rd_block *b, unsigned int time_offset, unsigned int facidx);
// vzt_rd_null_callback
// file vzt_read.c line 950
void vzt_rd_null_callback(struct vzt_rd_trace **lt, unsigned long int *pnt_time, unsigned int *pnt_facidx, char **pnt_value);
// vzt_rd_ones_cnt
// file vzt_read.c line 262
static inline unsigned int vzt_rd_ones_cnt(unsigned int x);
// vzt_rd_process_block
// file vzt_read.c line 805
signed int vzt_rd_process_block(struct vzt_rd_trace *lt, struct vzt_rd_block *b);
// vzt_rd_process_block_linear
// file vzt_read.c line 738
signed int vzt_rd_process_block_linear(struct vzt_rd_trace *lt, struct vzt_rd_block *b);
// vzt_rd_process_block_single_factime
// file vzt_read.c line 2260
static char * vzt_rd_process_block_single_factime(struct vzt_rd_trace *lt, struct vzt_rd_block *b, unsigned long int simtime, unsigned int idx);
// vzt_rd_process_blocks_linearly
// file vzt_read.c line 1661
void vzt_rd_process_blocks_linearly(struct vzt_rd_trace *lt, signed int doit);
// vzt_rd_pthread_create
// file vzt_read.c line 95
static inline void vzt_rd_pthread_create(struct vzt_rd_trace *lt, unsigned long int *thread, union pthread_attr_t *attr, void * (*start_routine)(void *), void *arg);
// vzt_rd_pthread_create::start_routine_object
//
void * start_routine_object(void *);
// vzt_rd_pthread_mutex_destroy
// file vzt_read.c line 90
static inline void vzt_rd_pthread_mutex_destroy(struct vzt_rd_trace *lt, union anonymous_0 *mutex);
// vzt_rd_pthread_mutex_init
// file vzt_read.c line 74
static inline signed int vzt_rd_pthread_mutex_init(struct vzt_rd_trace *lt, union anonymous_0 *mutex, const union anonymous_2 *mutexattr);
// vzt_rd_pthread_mutex_lock
// file vzt_read.c line 80
static inline void vzt_rd_pthread_mutex_lock(struct vzt_rd_trace *lt, union anonymous_0 *mx);
// vzt_rd_pthread_mutex_unlock
// file vzt_read.c line 85
static inline void vzt_rd_pthread_mutex_unlock(struct vzt_rd_trace *lt, union anonymous_0 *mx);
// vzt_rd_set_fac_process_mask_all
// file vzt_read.h line 277
signed int vzt_rd_set_fac_process_mask_all(struct vzt_rd_trace *);
// vzt_rd_set_max_block_mem_usage
// file vzt_read.h line 254
unsigned long int vzt_rd_set_max_block_mem_usage(struct vzt_rd_trace *, unsigned long int);
// vzt_rd_tzc
// file vzt_read.c line 277
static inline unsigned int vzt_rd_tzc(unsigned int x);
// vzt_rd_unlimit_time_range
// file vzt_read.c line 1633
unsigned int vzt_rd_unlimit_time_range(struct vzt_rd_trace *lt);
// vzt_rd_value
// file vzt_read.c line 2320
char * vzt_rd_value(struct vzt_rd_trace *lt, unsigned long int simtime, unsigned int idx);
// vzt_rd_vectorize
// file vzt_read.c line 2005
void vzt_rd_vectorize(struct vzt_rd_trace *lt);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// xdr_double
// file /usr/include/rpc/xdr.h line 323
extern signed int xdr_double(struct XDR *, double *);
// xdrmem_create
// file /usr/include/rpc/xdr.h line 350
extern void xdrmem_create(struct XDR *, char *, unsigned int, enum xdr_op);

struct anonymous_7
{
  // alloc
  void * (*alloc)(void *, unsigned long int, unsigned long int);
  // free
  void (*free)(void *, void *);
  // opaque
  void *opaque;
};

struct anonymous_8
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
  struct anonymous_7 *allocator;
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
  enum anonymous_5 reserved_enum1;
  // reserved_enum2
  enum anonymous_5 reserved_enum2;
};

struct anonymous_6
{
  // dict_size
  unsigned int dict_size;
  // preset_dict
  const unsigned char *preset_dict;
  // preset_dict_size
  unsigned int preset_dict_size;
  // lc
  unsigned int lc;
  // lp
  unsigned int lp;
  // pb
  unsigned int pb;
  // mode
  enum anonymous_3 mode;
  // nice_len
  unsigned int nice_len;
  // mf
  enum anonymous_4 mf;
  // depth
  unsigned int depth;
  // reserved_int1
  unsigned int reserved_int1;
  // reserved_int2
  unsigned int reserved_int2;
  // reserved_int3
  unsigned int reserved_int3;
  // reserved_int4
  unsigned int reserved_int4;
  // reserved_int5
  unsigned int reserved_int5;
  // reserved_int6
  unsigned int reserved_int6;
  // reserved_int7
  unsigned int reserved_int7;
  // reserved_int8
  unsigned int reserved_int8;
  // reserved_enum1
  enum anonymous_5 reserved_enum1;
  // reserved_enum2
  enum anonymous_5 reserved_enum2;
  // reserved_enum3
  enum anonymous_5 reserved_enum3;
  // reserved_enum4
  enum anonymous_5 reserved_enum4;
  // reserved_ptr1
  void *reserved_ptr1;
  // reserved_ptr2
  void *reserved_ptr2;
};

union anonymous_2
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

struct XDR
{
  // x_op
  enum xdr_op x_op;
  // x_ops
  struct xdr_ops *x_ops;
  // x_public
  char *x_public;
  // x_private
  char *x_private;
  // x_base
  char *x_base;
  // x_handy
  unsigned int x_handy;
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

struct gzFile_s
{
  // have
  unsigned int have;
  // next
  unsigned char *next;
  // pos
  signed long int pos;
};

struct lzma_handle_t
{
  // fd
  signed int fd;
  // offs
  unsigned int offs;
  // blklen
  unsigned int blklen;
  // depth
  unsigned int depth;
  // state
  enum lzma_state_t state;
  // blksiz
  unsigned int blksiz;
  // mem
  unsigned char *mem;
  // dmem
  unsigned char *dmem;
  // write_cnt
  unsigned long int write_cnt;
  // read_cnt
  unsigned long int read_cnt;
};

struct namehier
{
  // next
  struct namehier *next;
  // name
  char *name;
  // not_final
  char not_final;
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

struct tm
{
  // tm_sec
  signed int tm_sec;
  // tm_min
  signed int tm_min;
  // tm_hour
  signed int tm_hour;
  // tm_mday
  signed int tm_mday;
  // tm_mon
  signed int tm_mon;
  // tm_year
  signed int tm_year;
  // tm_wday
  signed int tm_wday;
  // tm_yday
  signed int tm_yday;
  // tm_isdst
  signed int tm_isdst;
  // tm_gmtoff
  signed long int tm_gmtoff;
  // tm_zone
  const char *tm_zone;
};

struct vzt_ncycle_autosort
{
  // next
  struct vzt_ncycle_autosort *next;
};

struct vzt_pth_args
{
  // lt
  struct vzt_rd_trace *lt;
  // b
  struct vzt_rd_block *b;
};

struct vzt_rd_block
{
  // mem
  char *mem;
  // next
  struct vzt_rd_block *next;
  // prev
  struct vzt_rd_block *prev;
  // uncompressed_siz
  unsigned int uncompressed_siz;
  // compressed_siz
  unsigned int compressed_siz;
  // num_rle_bytes
  unsigned int num_rle_bytes;
  // start
  unsigned long int start;
  // end
  unsigned long int end;
  // vindex
  unsigned int *vindex;
  // times
  unsigned long int *times;
  // change_dict
  unsigned int *change_dict;
  // val_dict
  unsigned int *val_dict;
  // sindex
  char **sindex;
  // num_time_ticks
  unsigned int num_time_ticks;
  // num_sections
  unsigned int num_sections;
  // num_dict_entries
  unsigned int num_dict_entries;
  // num_str_entries
  unsigned int num_str_entries;
  // filepos
  signed long int filepos;
  // short_read_ignore
  unsigned int short_read_ignore : 1;
  // exclude_block
  unsigned int exclude_block : 1;
  // multi_state
  unsigned int multi_state : 1;
  // killed
  unsigned int killed : 1;
  // ztype
  unsigned int ztype : 2;
  // rle
  unsigned int rle : 1;
  // pth
  unsigned long int pth;
  // pth_attr
  union pthread_attr_t pth_attr;
  // mutex
  union anonymous_0 mutex;
  // last_rd_value_simtime
  unsigned long int last_rd_value_simtime;
  // last_rd_value_idx
  unsigned int last_rd_value_idx;
};

struct vzt_rd_facname_cache
{
  // n
  char *n;
  // bufprev
  char *bufprev;
  // bufcurr
  char *bufcurr;
  // old_facidx
  unsigned int old_facidx;
};

struct vzt_rd_geometry
{
  // rows
  unsigned int rows;
  // msb
  signed int msb;
  // lsb
  signed int lsb;
  // flags
  unsigned int flags;
  // len
  unsigned int len;
};

struct vzt_rd_trace
{
  // rows
  unsigned int *rows;
  // msb
  signed int *msb;
  // lsb
  signed int *lsb;
  // flags
  unsigned int *flags;
  // len
  unsigned int *len;
  // vindex_offset
  unsigned int *vindex_offset;
  // timezero
  signed long int timezero;
  // value_current_sector
  char *value_current_sector;
  // value_previous_sector
  char *value_previous_sector;
  // longest_len
  unsigned int longest_len;
  // total_values
  unsigned int total_values;
  // process_mask
  char *process_mask;
  // value_change_callback
  void (*value_change_callback)(struct vzt_rd_trace **, unsigned long int *, unsigned int *, char **);
  // user_callback_data_pointer
  void *user_callback_data_pointer;
  // granule_size
  unsigned char granule_size;
  // numfacs
  unsigned int numfacs;
  // numrealfacs
  unsigned int numrealfacs;
  // numfacbytes
  unsigned int numfacbytes;
  // longestname
  unsigned int longestname;
  // zfacnamesize
  unsigned int zfacnamesize;
  // zfacname_predec_size
  unsigned int zfacname_predec_size;
  // zfacgeometrysize
  unsigned int zfacgeometrysize;
  // timescale
  unsigned char timescale;
  // zfacnames
  char *zfacnames;
  // numblocks
  unsigned int numblocks;
  // block_head
  struct vzt_rd_block *block_head;
  // block_curr
  struct vzt_rd_block *block_curr;
  // start
  unsigned long int start;
  // end
  unsigned long int end;
  // geometry
  struct vzt_rd_geometry geometry;
  // faccache
  struct vzt_rd_facname_cache *faccache;
  // last_rd_value_simtime
  unsigned long int last_rd_value_simtime;
  // last_rd_value_block
  struct vzt_rd_block *last_rd_value_block;
  // filename
  char *filename;
  // handle
  struct _IO_FILE *handle;
  // zhandle
  void *zhandle;
  // block_mem_consumed
  unsigned long int block_mem_consumed;
  // block_mem_max
  unsigned long int block_mem_max;
  // mutex
  union anonymous_0 mutex;
  // pthreads
  unsigned int pthreads;
  // process_linear
  unsigned int process_linear : 1;
  // vectorize
  unsigned int vectorize : 1;
};

struct vzt_synvec_chain
{
  // num_entries
  unsigned int num_entries;
  // chain
  unsigned int chain[1l];
};

struct xdr_ops
{
  // x_getlong
  signed int (*x_getlong)(struct XDR *, signed long int *);
  // x_putlong
  signed int (*x_putlong)(struct XDR *, const signed long int *);
  // x_getbytes
  signed int (*x_getbytes)(struct XDR *, char *, unsigned int);
  // x_putbytes
  signed int (*x_putbytes)(struct XDR *, const char *, unsigned int);
  // x_getpostn
  unsigned int (*x_getpostn)(const struct XDR *);
  // x_setpostn
  signed int (*x_setpostn)(struct XDR *, unsigned int);
  // x_inline
  signed int * (*x_inline)(struct XDR *, unsigned int);
  // x_destroy
  void (*x_destroy)(struct XDR *);
  // x_getint32
  signed int (*x_getint32)(struct XDR *, signed int *);
  // x_putint32
  signed int (*x_putint32)(struct XDR *, const signed int *);
};


// flat_earth
// file vzt2vcd.c line 36
static signed int flat_earth = 0;
// fv
// file vzt2vcd.c line 39
static struct _IO_FILE *fv = (struct _IO_FILE *)(void *)0;
// nhold
// file scopenav.c line 35
static struct namehier *nhold = (struct namehier *)(void *)0;
// notruncate
// file vzt2vcd.c line 38
static signed int notruncate = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// vcd_blackout
// file vzt2vcd.c line 112
char vcd_blackout;
// vcd_prevtime
// file vzt2vcd.c line 111
static unsigned long int vcd_prevtime;
// vectorize
// file vzt2vcd.c line 37
static signed int vectorize = 0;

// LZMA_close
// file ./../liblzma/LzmaLib.h line 33
void LZMA_close(void *handle)
{
  struct lzma_handle_t *h = (struct lzma_handle_t *)handle;
  if(!(h == ((struct lzma_handle_t *)NULL)))
  {
    if((signed int)h->state == LZMA_STATE_WRITE)
    {
      LZMA_flush((void *)h);
      LZMA_write_varint(h, (unsigned long int)0);
    }

    if(!(h->dmem == ((unsigned char *)NULL)))
      free((void *)h->dmem);

    if(!(h->mem == ((unsigned char *)NULL)))
      free((void *)h->mem);

    close(h->fd);
    free((void *)h);
  }

}

// LZMA_fdopen
// file ./../liblzma/LzmaLib.h line 32
void * LZMA_fdopen(signed int fd, const char *mode)
{
  struct lzma_handle_t *h;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct lzma_handle_t) /*56ul*/ );
  h = (struct lzma_handle_t *)return_value_calloc_1;
  h->fd = fd;
  h->offs = (unsigned int)0;
  h->depth = (unsigned int)4;
  if((signed int)*mode == 119)
  {
    h->blksiz = (unsigned int)(4 * 1024 * 1024);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)h->blksiz);
    h->mem = (unsigned char *)return_value_malloc_2;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)h->blksiz);
    h->dmem = (unsigned char *)return_value_malloc_3;
    if(!(mode[1l] == 0))
    {
      const unsigned short int **return_value___ctype_b_loc_5;
      return_value___ctype_b_loc_5=__ctype_b_loc();
      if(!((2048 & (signed int)(*return_value___ctype_b_loc_5)[(signed long int)(signed int)(unsigned char)mode[1l]]) == 0))
        h->depth = (unsigned int)((signed int)mode[(signed long int)1] - 48);

      else
        if(!(mode[2l] == 0))
        {
          const unsigned short int **return_value___ctype_b_loc_4;
          return_value___ctype_b_loc_4=__ctype_b_loc();
          if(!((2048 & (signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)(unsigned char)mode[2l]]) == 0))
            h->depth = (unsigned int)((signed int)mode[(signed long int)2] - 48);

        }

    }

    h->state = (enum lzma_state_t)LZMA_STATE_WRITE;
    signed long int return_value_write_6;
    static const char z7[3l] = { 'z', '7', 0 };
    return_value_write_6=write(h->fd, (const void *)z7, (unsigned long int)2);
    h->write_cnt = h->write_cnt + (unsigned long int)return_value_write_6;
    return (void *)h;
  }

  else
    if((signed int)*mode == 114)
    {
      h->blksiz = (unsigned int)0;
      h->mem = (unsigned char *)(void *)0;
      h->dmem = (unsigned char *)(void *)0;
      h->state = (enum lzma_state_t)LZMA_STATE_READ_INIT;
      return (void *)h;
    }

    else
    {
      close(h->fd);
      free((void *)h->dmem);
      free((void *)h->mem);
      free((void *)h);
      return (void *)0;
    }
}

// LZMA_flush
// file ./../liblzma/LzmaLib.c line 208
unsigned long int LZMA_flush(void *handle)
{
  struct lzma_handle_t *h = (struct lzma_handle_t *)handle;
  if(!(h == ((struct lzma_handle_t *)NULL)))
  {
    if(!(h->offs == 0u))
    {
      LZMA_write_compress(h, h->mem, (unsigned long int)h->offs);
      h->offs = (unsigned int)0;
    }

  }

  return (unsigned long int)0;
}

// LZMA_read
// file ./../liblzma/LzmaLib.h line 36
unsigned long int LZMA_read(void *handle, void *mem, unsigned long int len)
{
  struct lzma_handle_t *h = (struct lzma_handle_t *)handle;
  unsigned long int rc = (unsigned long int)0;
  char hdr[2l] = { (char)0, (char)0 };
  unsigned long int srclen;
  unsigned long int dstlen;
  signed long int return_value_read_1;
  _Bool tmp_if_expr_2;
  struct anonymous_8 strm;
  enum anonymous_9 lrc;
  signed long int return_value_read_6;
  if(!(h == ((struct lzma_handle_t *)NULL)))
  {

  top:
    ;
    for( ; (_Bool)1; h->state = (enum lzma_state_t)LZMA_STATE_READ_ERROR)
    {
      if(!((signed int)h->state == LZMA_STATE_READ_INIT))
      {
        if((signed int)h->state == LZMA_STATE_READ_GETBLOCK)
          goto __CPROVER_DUMP_L7;

        if((signed int)h->state == LZMA_STATE_READ_GETBYTES)
          goto __CPROVER_DUMP_L19;

        if((signed int)h->state == LZMA_STATE_READ_ERROR)
          goto __CPROVER_DUMP_L23;

        goto __CPROVER_DUMP_L23;
      }

      return_value_read_1=read(h->fd, (void *)hdr, (unsigned long int)2);
      h->read_cnt = h->read_cnt + (unsigned long int)return_value_read_1;
      if((signed int)hdr[0l] == 122)
        tmp_if_expr_2 = (signed int)hdr[(signed long int)1] == 55 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        h->state = (enum lzma_state_t)LZMA_STATE_READ_GETBLOCK;

      else
        h->state = (enum lzma_state_t)LZMA_STATE_READ_ERROR;
      goto top;

    __CPROVER_DUMP_L7:
      ;
      dstlen=LZMA_read_varint(h);
      if(dstlen == 0ul)
        return (unsigned long int)0;

      if(!((unsigned long int)h->blksiz >= dstlen))
      {
        if(!(h->dmem == ((unsigned char *)NULL)))
          free((void *)h->dmem);

        if(!(h->mem == ((unsigned char *)NULL)))
          free((void *)h->mem);

        h->blksiz = (unsigned int)dstlen;
        void *return_value_malloc_3;
        return_value_malloc_3=malloc((unsigned long int)h->blksiz);
        h->mem = (unsigned char *)return_value_malloc_3;
        void *return_value_malloc_4;
        return_value_malloc_4=malloc((unsigned long int)h->blksiz);
        h->dmem = (unsigned char *)return_value_malloc_4;
      }

      srclen=LZMA_read_varint(h);
      if(srclen == 0ul)
      {
        signed long int return_value_read_5;
        return_value_read_5=read(h->fd, (void *)h->mem, dstlen);
        rc = (unsigned long int)return_value_read_5;
        h->read_cnt = h->read_cnt + rc;
        h->blklen = (unsigned int)rc;
        h->offs = (unsigned int)0;
        goto __CPROVER_DUMP_L16;
      }

      strm = (struct anonymous_8){ .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_7 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_5)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_5)LZMA_RESERVED_ENUM };
      return_value_read_6=read(h->fd, (void *)h->dmem, srclen);
      rc = (unsigned long int)return_value_read_6;
      h->read_cnt = h->read_cnt + rc;
      lrc=lzma_alone_decoder(&strm, (unsigned long int)(256 * 1024 * 1024));
      if(!((signed int)lrc == LZMA_OK))
      {
        fprintf(stderr, "Error in lzma_alone_decoder(), exiting!\n");
        exit(255);
      }

      strm.next_in = h->dmem;
      strm.avail_in = srclen;
      strm.next_out = h->mem;
      strm.avail_out = (unsigned long int)h->blksiz;
      lrc=lzma_code(&strm, (enum anonymous)LZMA_RUN);
      lzma_end(&strm);
      if((signed int)lrc == LZMA_OK || (signed int)lrc == LZMA_STREAM_END)
      {
        dstlen = strm.total_out;
        h->blklen = (unsigned int)dstlen;
        h->offs = (unsigned int)0;
        break;
      }

    }

  __CPROVER_DUMP_L16:
    ;
    if(dstlen >= len)
    {
      memcpy(mem, (const void *)h->mem, len);
      h->offs = (unsigned int)len;
      rc = len;
      h->state = (enum lzma_state_t)LZMA_STATE_READ_GETBYTES;
    }

    else
    {
      memcpy(mem, (const void *)h->mem, dstlen);
      unsigned long int return_value_LZMA_read_7;
      return_value_LZMA_read_7=LZMA_read((void *)h, (void *)((char *)mem + (signed long int)dstlen), len - dstlen);
      rc = dstlen + return_value_LZMA_read_7;
    }
    goto __CPROVER_DUMP_L24;

  __CPROVER_DUMP_L19:
    ;
    if(!(len + (unsigned long int)h->offs >= (unsigned long int)h->blklen))
    {
      memcpy(mem, (const void *)(h->mem + (signed long int)h->offs), len);
      h->offs = h->offs + (unsigned int)len;
      rc = len;
    }

    else
      if(len + (unsigned long int)h->offs == (unsigned long int)h->blklen)
      {
        memcpy(mem, (const void *)(h->mem + (signed long int)h->offs), len);
        h->offs = (unsigned int)0;
        rc = len;
        h->state = (enum lzma_state_t)LZMA_STATE_READ_GETBLOCK;
      }

      else
      {
        unsigned long int cpylen = (unsigned long int)(h->blklen - h->offs);
        memcpy(mem, (const void *)(h->mem + (signed long int)h->offs), cpylen);
        h->state = (enum lzma_state_t)LZMA_STATE_READ_GETBLOCK;
        unsigned long int return_value_LZMA_read_8;
        return_value_LZMA_read_8=LZMA_read((void *)h, (void *)((char *)mem + (signed long int)cpylen), len - cpylen);
        rc = cpylen + return_value_LZMA_read_8;
      }
    goto __CPROVER_DUMP_L24;

  __CPROVER_DUMP_L23:
    ;
    goto __CPROVER_DUMP_L24;
  }


__CPROVER_DUMP_L24:
  ;
  return rc;
}

// LZMA_read_varint
// file ./../liblzma/LzmaLib.c line 73
static unsigned long int LZMA_read_varint(struct lzma_handle_t *h)
{
  unsigned char buf[16l];
  signed int idx = 0;
  unsigned long int rc = (unsigned long int)0;
  signed int tmp_post_2;
  do
  {
    signed long int return_value_read_1;
    return_value_read_1=read(h->fd, (void *)(buf + (signed long int)idx), (unsigned long int)1);
    h->read_cnt = h->read_cnt + (unsigned long int)return_value_read_1;
    tmp_post_2 = idx;
    idx = idx + 1;
    if(!((0x80 & (signed int)buf[(signed long int)tmp_post_2]) == 0))
      break;

  }
  while((_Bool)1);
  do
  {
    idx = idx - 1;
    rc = rc << 7;
    rc = rc | (unsigned long int)((signed int)buf[(signed long int)idx] & 0x7f);
  }
  while(!(idx == 0));
  return rc;
}

// LZMA_write
// file ./../liblzma/LzmaLib.c line 244
unsigned long int LZMA_write(void *handle, void *mem, unsigned long int len)
{
  struct lzma_handle_t *h = (struct lzma_handle_t *)handle;
  if((signed int)h->state == LZMA_STATE_WRITE)
    while(!(h == ((struct lzma_handle_t *)NULL)) && !(len == 0ul))
      if((unsigned long int)h->blksiz >= len + (unsigned long int)h->offs)
      {
        memcpy((void *)(h->mem + (signed long int)h->offs), mem, len);
        h->offs = h->offs + (unsigned int)len;
        break;
      }

      else
      {
        unsigned long int new_len = (unsigned long int)(h->blksiz - h->offs);
        if(!(new_len == 0ul))
          memcpy((void *)(h->mem + (signed long int)h->offs), mem, new_len);

        LZMA_write_compress(h, h->mem, (unsigned long int)h->blksiz);
        h->offs = (unsigned int)0;
        len = len - new_len;
        mem = (void *)((char *)mem + (signed long int)new_len);
      }

  return len;
}

// LZMA_write_compress
// file ./../liblzma/LzmaLib.c line 97
static unsigned long int LZMA_write_compress(struct lzma_handle_t *h, unsigned char *mem, unsigned long int len)
{
  unsigned long int srclen = len;
  unsigned long int destlen = (unsigned long int)h->blksiz;
  struct anonymous_8 strm = { .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_7 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_5)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_5)LZMA_RESERVED_ENUM };
  struct anonymous_6 preset;
  enum anonymous_9 lrc;
  unsigned long int wcnt;
  lzma_lzma_preset(&preset, h->depth);
  lrc=lzma_alone_encoder(&strm, &preset);
  if(!((signed int)lrc == LZMA_OK))
  {
    fprintf(stderr, "Error in lzma_alone_encoder(), exiting!\n");
    exit(255);
  }

  strm.next_in = mem;
  strm.avail_in = len;
  strm.next_out = h->dmem;
  strm.avail_out = destlen;
  lrc=lzma_code(&strm, (enum anonymous)LZMA_FINISH);
  lzma_end(&strm);
  if(!(strm.total_out >= srclen) && ((signed int)lrc == LZMA_OK || (signed int)lrc == LZMA_STREAM_END))
  {
    LZMA_write_varint(h, srclen);
    LZMA_write_varint(h, strm.total_out);
    signed long int return_value_write_1;
    return_value_write_1=write(h->fd, (const void *)h->dmem, strm.total_out);
    wcnt = (unsigned long int)return_value_write_1;
    h->write_cnt = h->write_cnt + wcnt;
    return wcnt;
  }

  else
  {
    LZMA_write_varint(h, srclen);
    LZMA_write_varint(h, (unsigned long int)0);
    signed long int return_value_write_2;
    return_value_write_2=write(h->fd, (const void *)mem, len);
    wcnt = (unsigned long int)return_value_write_2;
    h->write_cnt = h->write_cnt + wcnt;
    return wcnt;
  }
}

// LZMA_write_varint
// file ./../liblzma/LzmaLib.c line 54
static void LZMA_write_varint(struct lzma_handle_t *h, unsigned long int v)
{
  unsigned long int nxt;
  unsigned char buf[16l];
  unsigned char *pnt = buf;
  unsigned char *tmp_post_1;
  do
  {
    nxt = v >> 7;
    if(nxt == 0ul)
      break;

    tmp_post_1 = pnt;
    pnt = pnt + 1l;
    *tmp_post_1 = (unsigned char)(v & (unsigned long int)0x7f);
    v = nxt;
  }
  while((_Bool)1);
  unsigned char *tmp_post_2 = pnt;
  pnt = pnt + 1l;
  *tmp_post_2 = (unsigned char)(v & (unsigned long int)0x7f | (unsigned long int)0x80);
  signed long int return_value_write_3;
  return_value_write_3=write(h->fd, (const void *)buf, (unsigned long int)(pnt - buf));
  h->write_cnt = h->write_cnt + (unsigned long int)return_value_write_3;
}

// diff_hier
// file scopenav.c line 55
static void diff_hier(struct _IO_FILE *fv, struct namehier *nh1, struct namehier *nh2)
{
  if(nh2 == ((struct namehier *)NULL))
    for( ; !(nh1 == ((struct namehier *)NULL)); nh1 = nh1->next)
    {
      if(nh1->not_final == 0)
        break;

      fprintf(fv, "_scope module %s _end\n", nh1->name);
    }

  else
    while((_Bool)1)
    {
      if((signed int)nh1->not_final == 0)
      {
        if((signed int)nh2->not_final == 0)
          goto __CPROVER_DUMP_L15;

      }

      if((signed int)nh2->not_final == 0)
      {
        for( ; !(nh1 == ((struct namehier *)NULL)); nh1 = nh1->next)
        {
          if(nh1->not_final == 0)
            break;

          fprintf(fv, "_scope module %s _end\n", nh1->name);
        }
        break;
      }

      if((signed int)nh1->not_final == 0)
      {
        for( ; !(nh2 == ((struct namehier *)NULL)); nh2 = nh2->next)
        {
          if(nh2->not_final == 0)
            break;

          fprintf(fv, "_upscope _end\n");
        }
        break;
      }

      signed int return_value_strcmp_1;
      return_value_strcmp_1=strcmp(nh1->name, nh2->name);
      if(!(return_value_strcmp_1 == 0))
      {
        for( ; !(nh2 == ((struct namehier *)NULL)); nh2 = nh2->next)
        {
          if(nh2->not_final == 0)
            break;

          fprintf(fv, "_upscope _end\n");
        }
        for( ; !(nh1 == ((struct namehier *)NULL)); nh1 = nh1->next)
        {
          if(nh1->not_final == 0)
            break;

          fprintf(fv, "_scope module %s _end\n", nh1->name);
        }
        break;
      }

      nh1 = nh1->next;
      nh2 = nh2->next;
    }

__CPROVER_DUMP_L15:
  ;
}

// free_hier
// file scopenav.c line 38
void free_hier(void)
{
  struct namehier *nhtemp;
  for( ; !(nhold == ((struct namehier *)NULL)); nhold = nhtemp)
  {
    nhtemp = nhold->next;
    free((void *)nhold->name);
    free((void *)nhold);
  }
}

// fv_output_hier
// file scopenav.c line 121
char * fv_output_hier(struct _IO_FILE *fv, char *name)
{
  char *pnt;
  char *pnt2;
  char *s;
  signed int len;
  struct namehier *nh_head = (struct namehier *)(void *)0;
  struct namehier *nh_curr = (struct namehier *)(void *)0;
  struct namehier *nhtemp;
  char esc = (char)46;
  pnt2 = name;
  pnt = pnt2;

__CPROVER_DUMP_L1:
  ;
  while((_Bool)1)
  {
    if(!(*pnt2 == esc))
    {
      if(!(*pnt2 == 0))
      {
        if((signed int)*pnt2 == 92)
          esc = (char)0;

        pnt2 = pnt2 + 1l;
        goto __CPROVER_DUMP_L1;
      }

    }

    len = (signed int)(pnt2 - pnt);
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, (unsigned long int)(len + 1));
    s = (char *)return_value_calloc_1;
    memcpy((void *)s, (const void *)pnt, (unsigned long int)len);
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct namehier) /*24ul*/ );
    nhtemp = (struct namehier *)return_value_calloc_2;
    nhtemp->name = s;
    if(nh_curr == ((struct namehier *)NULL))
    {
      nh_curr = nhtemp;
      nh_head = nh_curr;
    }

    else
    {
      nh_curr->next = nhtemp;
      nh_curr->not_final = (char)1;
      nh_curr = nhtemp;
    }
    if(*pnt2 == 0)
      break;

    pnt2 = pnt2 + 1l;
    pnt = pnt2;
  }
  diff_hier(fv, nh_head, nhold);
  free_hier();
  nhold = nh_head;
  return nh_curr->name;
}

// is_big_endian
// file vzt_read.c line 41
static signed int is_big_endian(void)
{
  /* tag-#anon#lUN[U32'u32'||lARR4{U8}_U8_'c'|] */
union anonymous_1
{
  // u32
  unsigned int u32;
  // c
  unsigned char c[(signed long int)sizeof(unsigned int) /*4l*/ ];
};

/* */
  ;
  union anonymous_1 u;
  u.u32 = (unsigned int)1;
  return (signed int)((signed int)u.c[(signed long int)(sizeof(unsigned int) /*4ul*/  - (unsigned long int)1)] == 1);
}

// main
// file vzt2vcd.c line 347
signed int main(signed int argc, char **argv)
{
  char opt_errors_encountered = (char)0;
  char *lxname = (char *)(void *)0;
  char *outname = (char *)(void *)0;
  char *fvbuf = (char *)(void *)0;
  signed int c;
  signed int rc;
  char *wlve;
  wlve=getenv("LANG");
  if(!(wlve == ((char *)NULL)))
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(wlve, "C");
    if(!(return_value_strcmp_1 == 0))
    {
      setenv("LC_NUMERIC", "C", 1);
      setenv("LC_COLLATE", "C", 1);
      setenv("LC_CTYPE", "C", 1);
    }

  }

  wlve=getenv("LC_ALL");
  if(!(wlve == ((char *)NULL)))
  {
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(wlve, "C");
    if(!(return_value_strcmp_2 == 0))
      unsetenv("LC_ALL");

  }

  unsigned long int return_value_strlen_3;
  void *return_value_malloc_4;
  unsigned long int return_value_strlen_5;
  void *return_value_malloc_6;
  while((_Bool)1)
  {
    signed int option_index = 0;
    static struct option long_options[7l] = { { .name="vztname", .has_arg=1, .flag=((signed int *)NULL), .val=118 },
    { .name="output", .has_arg=1, .flag=((signed int *)NULL), .val=111 },
    { .name="coalesce", .has_arg=0, .flag=((signed int *)NULL), .val=99 },
    { .name="flatearth", .has_arg=0, .flag=((signed int *)NULL), .val=102 },
    { .name="notruncate", .has_arg=0, .flag=((signed int *)NULL), .val=110 },
    { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
    c=getopt_long(argc, argv, "v:o:cfnh", long_options, &option_index);
    if(c == -1)
      break;

    switch(c)
    {
      case 118:
      {
        if(!(lxname == ((char *)NULL)))
          free((void *)lxname);

        return_value_strlen_3=strlen(optarg);
        return_value_malloc_4=malloc(return_value_strlen_3 + (unsigned long int)1);
        lxname = (char *)return_value_malloc_4;
        strcpy(lxname, optarg);
        break;
      }
      case 111:
      {
        if(!(outname == ((char *)NULL)))
          free((void *)outname);

        return_value_strlen_5=strlen(optarg);
        return_value_malloc_6=malloc(return_value_strlen_5 + (unsigned long int)1);
        outname = (char *)return_value_malloc_6;
        strcpy(outname, optarg);
        break;
      }
      case 99:
      {
        vectorize = 1;
        break;
      }
      case 110:
      {
        notruncate = 1;
        break;
      }
      case 102:
      {
        flat_earth = 1;
        break;
      }
      case 104:
      {
        print_help(argv[(signed long int)0]);
        break;
      }
      case 63:
      {
        opt_errors_encountered = (char)1;
        break;
      }
      default:
        ;
    }
  }
  if(!(opt_errors_encountered == 0))
    print_help(argv[(signed long int)0]);

  signed int tmp_post_9;
  if(!(optind >= argc))
    while(!(optind >= argc))
      if(lxname == ((char *)NULL))
      {
        unsigned long int return_value_strlen_7;
        return_value_strlen_7=strlen(argv[(signed long int)optind]);
        void *return_value_malloc_8;
        return_value_malloc_8=malloc(return_value_strlen_7 + (unsigned long int)1);
        lxname = (char *)return_value_malloc_8;
        tmp_post_9 = optind;
        optind = optind + 1;
        strcpy(lxname, argv[(signed long int)tmp_post_9]);
      }

      else
        break;

  if(lxname == ((char *)NULL))
    print_help(argv[(signed long int)0]);

  if(!(outname == ((char *)NULL)))
  {
    fv=fopen(outname, "wb");
    if(fv == ((struct _IO_FILE *)NULL))
    {
      fprintf(stderr, "Could not open '%s', exiting.\n", outname);
      perror("Why");
      exit(255);
    }

    void *return_value_malloc_10;
    return_value_malloc_10=malloc((unsigned long int)(2 * 1024 * 1024));
    fvbuf = (char *)return_value_malloc_10;
    setvbuf(fv, fvbuf, 0, (unsigned long int)(2 * 1024 * 1024));
  }

  else
    fv = stdout;
  rc=process_vzt(lxname);
  if(!(outname == ((char *)NULL)))
  {
    free((void *)outname);
    fclose(fv);
  }

  free((void *)fvbuf);
  free((void *)lxname);
  return rc;
}

// print_help
// file vzt2vcd.c line 317
void print_help(char *nam)
{
  printf("Usage: %s [OPTION]... [VZTFILE]\n\n  -v, --vztname=FILE         specify VZT input filename\n  -o, --output=FILE          specify output filename\n  -f, --flatearth            emit flattened hierarchies\n  -c, --coalesce             coalesce bitblasted vectors\n  -n, --notruncate           do not shorten bitvectors\n  -h, --help                 display this help then exit\n\nVCD is emitted to stdout if output filename is unspecified.\n\nReport bugs to <bybell@rocketmail.com>.\n", nam);
  exit(0);
}

// process_vzt
// file vzt2vcd.c line 168
signed int process_vzt(char *fname)
{
  struct vzt_rd_trace *lt;
  char *netname;
  lt=vzt_rd_init(fname);
  char *return_value_vcdid_9;
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
  {
    signed int i;
    signed int numfacs;
    char time_dimension;
    signed int time_scale = 1;
    signed char scale;
    signed long int walltime;
    signed long int timezero;
    if(!(vectorize == 0))
      vzt_rd_vectorize(lt);

    unsigned int return_value_vzt_rd_get_num_facs_1;
    return_value_vzt_rd_get_num_facs_1=vzt_rd_get_num_facs(lt);
    numfacs = (signed int)return_value_vzt_rd_get_num_facs_1;
    vzt_rd_set_fac_process_mask_all(lt);
    vzt_rd_set_max_block_mem_usage(lt, (unsigned long int)0);
    scale=vzt_rd_get_timescale(lt);
    if(!((signed int)scale == 0))
    {
      if((signed int)scale == -1)
        goto __CPROVER_DUMP_L3;

      if((signed int)scale == -2)
        goto __CPROVER_DUMP_L4;

      if((signed int)scale == -3)
        goto __CPROVER_DUMP_L5;

      if((signed int)scale == -4)
        goto __CPROVER_DUMP_L6;

      if((signed int)scale == -5)
        goto __CPROVER_DUMP_L7;

      if((signed int)scale == -6)
        goto __CPROVER_DUMP_L8;

      if((signed int)scale == -10)
        goto __CPROVER_DUMP_L9;

      if((signed int)scale == -11)
        goto __CPROVER_DUMP_L10;

      if((signed int)scale == -12)
        goto __CPROVER_DUMP_L11;

      if((signed int)scale == -13)
        goto __CPROVER_DUMP_L12;

      if((signed int)scale == -14)
        goto __CPROVER_DUMP_L13;

      if((signed int)scale == -15)
        goto __CPROVER_DUMP_L14;

      if((signed int)scale == -7)
        goto __CPROVER_DUMP_L15;

      if((signed int)scale == -8)
        goto __CPROVER_DUMP_L16;

      if((signed int)scale == -9)
        goto __CPROVER_DUMP_L17;

    }

    else
    {
      time_dimension = (char)115;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L3:
      ;
      time_scale = 100;
      time_dimension = (char)109;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L4:
      ;
      time_scale = 10;

    __CPROVER_DUMP_L5:
      ;
      time_dimension = (char)109;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L6:
      ;
      time_scale = 100;
      time_dimension = (char)117;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L7:
      ;
      time_scale = 10;

    __CPROVER_DUMP_L8:
      ;
      time_dimension = (char)117;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L9:
      ;
      time_scale = 100;
      time_dimension = (char)112;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L10:
      ;
      time_scale = 10;

    __CPROVER_DUMP_L11:
      ;
      time_dimension = (char)112;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L12:
      ;
      time_scale = 100;
      time_dimension = (char)102;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L13:
      ;
      time_scale = 10;

    __CPROVER_DUMP_L14:
      ;
      time_dimension = (char)102;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L15:
      ;
      time_scale = 100;
      time_dimension = (char)110;
      goto __CPROVER_DUMP_L18;

    __CPROVER_DUMP_L16:
      ;
      time_scale = 10;
    }

  __CPROVER_DUMP_L17:
    ;
    time_dimension = (char)110;

  __CPROVER_DUMP_L18:
    ;
    time(&walltime);
    fprintf(fv, "_date\n");
    struct tm *return_value_localtime_2;
    return_value_localtime_2=localtime(&walltime);
    char *return_value_asctime_3;
    return_value_asctime_3=asctime(return_value_localtime_2);
    fprintf(fv, "\t%s", return_value_asctime_3);
    fprintf(fv, "_end\n");
    fprintf(fv, "_version\n\tvzt2vcd\n_end\n");
    fprintf(fv, "_timescale %d%c%c _end\n", time_scale, time_dimension, !(scale != 0) ? 32 : 115);
    timezero=vzt_rd_get_timezero(lt);
    if(!(timezero == 0l))
      fprintf(fv, "_timezero %ld _end\n", timezero);

    i = 0;
    for( ; !(i >= numfacs); i = i + 1)
    {
      struct vzt_rd_geometry *g;
      g=vzt_rd_get_fac_geometry(lt, (unsigned int)i);
      unsigned int newindx;
      newindx=vzt_rd_get_alias_root_link1(lt, (unsigned int)i);
      if(!(vectorize == 0))
      {
        if(!(g->len == 0u))
          goto __CPROVER_DUMP_L21;

      }

      else
      {

      __CPROVER_DUMP_L21:
        ;
        if(flat_earth == 0)
        {
          char *return_value_vzt_rd_get_facname_4;
          return_value_vzt_rd_get_facname_4=vzt_rd_get_facname(lt, (unsigned int)i);
          netname=fv_output_hier(fv, return_value_vzt_rd_get_facname_4);
        }

        else
          netname=vzt_rd_get_facname(lt, (unsigned int)i);
        if(!((2u & g->flags) == 0u))
        {
          char *return_value_vcdid_5;
          return_value_vcdid_5=vcdid(newindx);
          fprintf(fv, "_var real 1 %s %s _end\n", return_value_vcdid_5, netname);
        }

        else
          if(!((4u & g->flags) == 0u))
          {
            char *return_value_vcdid_6;
            return_value_vcdid_6=vcdid(newindx);
            fprintf(fv, "_var real 1 %s %s _end\n", return_value_vcdid_6, netname);
          }

          else
            if(g->len == 1u)
            {
              if(!(g->msb == -1))
              {
                char *return_value_vcdid_7;
                return_value_vcdid_7=vcdid(newindx);
                fprintf(fv, "_var wire 1 %s %s [%d] _end\n", return_value_vcdid_7, netname, g->msb);
              }

              else
              {
                char *return_value_vcdid_8;
                return_value_vcdid_8=vcdid(newindx);
                fprintf(fv, "_var wire 1 %s %s _end\n", return_value_vcdid_8, netname);
              }
            }

            else
              if((1u & g->flags) == 0u)
              {
                if(!(g->len == 0u))
                {
                  return_value_vcdid_9=vcdid(newindx);
                  fprintf(fv, "_var wire %d %s %s [%d:%d] _end\n", g->len, return_value_vcdid_9, netname, g->msb, g->lsb);
                }

              }

              else
              {
                char *return_value_vcdid_10;
                return_value_vcdid_10=vcdid(newindx);
                fprintf(fv, "_var integer %d %s %s _end\n", g->len, return_value_vcdid_10, netname);
              }
      }
    }
    if(flat_earth == 0)
    {
      fv_output_hier(fv, "");
      free_hier();
    }

    fprintf(fv, "_enddefinitions _end\n");
    fprintf(fv, "_dumpvars\n");
    unsigned long int return_value_vzt_rd_get_start_time_11;
    return_value_vzt_rd_get_start_time_11=vzt_rd_get_start_time(lt);
    vcd_prevtime = return_value_vzt_rd_get_start_time_11 - (unsigned long int)1;
    vzt_rd_iter_blocks(lt, vcd_callback, (void *)0);
    unsigned long int return_value_vzt_rd_get_end_time_13;
    return_value_vzt_rd_get_end_time_13=vzt_rd_get_end_time(lt);
    if(!(vcd_prevtime == return_value_vzt_rd_get_end_time_13))
    {
      unsigned long int return_value_vzt_rd_get_end_time_12;
      return_value_vzt_rd_get_end_time_12=vzt_rd_get_end_time(lt);
      fprintf(fv, "#%ld\n", return_value_vzt_rd_get_end_time_12);
    }

    vzt_rd_close(lt);
  }

  else
  {
    fprintf(stderr, "vzt_rd_init failed\n");
    return 255;
  }
  return 0;
}

// vcd_callback
// file vzt2vcd.c line 114
void vcd_callback(struct vzt_rd_trace **lt, unsigned long int *pnt_time, unsigned int *pnt_facidx, char **pnt_value)
{
  struct vzt_rd_geometry *g;
  g=vzt_rd_get_fac_geometry(*lt, *pnt_facidx);
  if(!(vcd_prevtime == *pnt_time))
  {
    vcd_prevtime = *pnt_time;
    fprintf(fv, "#%ld\n", *pnt_time);
  }

  if(*(*pnt_value) == 0)
  {
    if(vcd_blackout == 0)
    {
      vcd_blackout = (char)1;
      fprintf(fv, "_dumpoff\n");
    }

    goto __CPROVER_DUMP_L9;
  }

  else
    if(!(vcd_blackout == 0))
    {
      vcd_blackout = (char)0;
      fprintf(fv, "_dumpon\n");
    }

  if(!((2u & g->flags) == 0u))
  {
    char *return_value_vcdid_1;
    return_value_vcdid_1=vcdid(*pnt_facidx);
    fprintf(fv, "r%s %s\n", *pnt_value, return_value_vcdid_1);
  }

  else
    if(!((4u & g->flags) == 0u))
    {
      char *return_value_vcdid_2;
      return_value_vcdid_2=vcdid(*pnt_facidx);
      fprintf(fv, "s%s %s\n", *pnt_value, return_value_vcdid_2);
    }

    else
      if(g->len == 1u)
      {
        char *return_value_vcdid_3;
        return_value_vcdid_3=vcdid(*pnt_facidx);
        fprintf(fv, "%c%s\n", (*pnt_value)[(signed long int)0], return_value_vcdid_3);
      }

      else
      {
        char *return_value_vcd_truncate_bitvec_4;
        return_value_vcd_truncate_bitvec_4=vcd_truncate_bitvec(*pnt_value);
        char *return_value_vcdid_5;
        return_value_vcdid_5=vcdid(*pnt_facidx);
        fprintf(fv, "b%s %s\n", return_value_vcd_truncate_bitvec_4, return_value_vcdid_5);
      }

__CPROVER_DUMP_L9:
  ;
}

// vcd_truncate_bitvec
// file vzt2vcd.c line 82
static char * vcd_truncate_bitvec(char *s)
{
  char l;
  char r;
  if(!(notruncate == 0))
    return s;

  else
  {
    r = *s;
    if((signed int)r == 49)
      return s;

    else
      s = s + 1l;
    do
    {
      l = r;
      r = *s;
      if(r == 0)
        return s - (signed long int)1;

      if(!(l == r))
        return (signed int)l == 48 && (signed int)r == 49 ? s : s - (signed long int)1;

      s = s + 1l;
    }
    while((_Bool)1);
  }
}

// vcdid
// file vzt2vcd.c line 47
static char * vcdid(unsigned int value)
{
  static char buf[16l];
  char *pnt = buf;
  value = value + 1u;
  char *tmp_post_1;
  for( ; !(value == 0u); value = value / (unsigned int)94)
  {
    value = value - 1u;
    tmp_post_1 = pnt;
    pnt = pnt + 1l;
    *tmp_post_1 = (char)((unsigned int)33 + value % (unsigned int)94);
  }
  *pnt = (char)0;
  return buf;
}

// vzt_rd_block_vch_decode
// file vzt_read.c line 307
static void vzt_rd_block_vch_decode(struct vzt_rd_trace *lt, struct vzt_rd_block *b)
{
  vzt_rd_pthread_mutex_lock(lt, &b->mutex);
  unsigned long int tmp_post_3;
  unsigned int tmp_post_9;
  if(b->times == ((unsigned long int *)NULL))
  {
    if(!(b->mem == ((char *)NULL)))
    {
      unsigned long int *times = (unsigned long int *)(void *)0;
      unsigned int *change_dict = (unsigned int *)(void *)0;
      unsigned int *val_dict = (unsigned int *)(void *)0;
      unsigned int num_time_ticks;
      unsigned int num_sections;
      unsigned int num_dict_entries;
      char *pnt = b->mem;
      unsigned int i;
      unsigned int j;
      unsigned int m;
      unsigned int num_dict_words;
      unsigned int *val_tmp;
      unsigned int num_bitplanes;
      unsigned long int padskip;
      num_time_ticks=vzt_rd_get_v32(&pnt);
      if(!(num_time_ticks == 0u))
      {
        unsigned long int vzt_rd_block_vch_decode__1__1__1__cur_time;
        void *return_value_malloc_1;
        return_value_malloc_1=malloc((unsigned long int)num_time_ticks * sizeof(unsigned long int) /*8ul*/ );
        times = (unsigned long int *)return_value_malloc_1;
        vzt_rd_block_vch_decode__1__1__1__cur_time=vzt_rd_get_v64(&pnt);
        times[(signed long int)0] = vzt_rd_block_vch_decode__1__1__1__cur_time;
        i = (unsigned int)1;
        for( ; !(i >= num_time_ticks); i = i + 1u)
        {
          unsigned long int delta;
          delta=vzt_rd_get_v64(&pnt);
          vzt_rd_block_vch_decode__1__1__1__cur_time = vzt_rd_block_vch_decode__1__1__1__cur_time + delta;
          times[(signed long int)i] = vzt_rd_block_vch_decode__1__1__1__cur_time;
        }
      }

      else
      {
        unsigned long int cur_time = b->start;
        num_time_ticks = (unsigned int)((b->end - b->start) + (unsigned long int)1);
        void *return_value_malloc_2;
        return_value_malloc_2=malloc((unsigned long int)num_time_ticks * sizeof(unsigned long int) /*8ul*/ );
        times = (unsigned long int *)return_value_malloc_2;
        i = (unsigned int)0;
        for( ; !(i >= num_time_ticks); i = i + 1u)
        {
          tmp_post_3 = cur_time;
          cur_time = cur_time + 1ul;
          times[(signed long int)i] = tmp_post_3;
        }
      }
      num_sections=vzt_rd_get_v32(&pnt);
      num_dict_entries=vzt_rd_get_v32(&pnt);
      padskip = (unsigned long int)pnt & (unsigned long int)3;
      pnt = pnt + (signed long int)(padskip != 0ul ? (unsigned long int)4 - padskip : (unsigned long int)0);
      if(!(b->rle == 0u))
      {
        unsigned int *curr_dec_dict;
        unsigned int first_bit = (unsigned int)0;
        unsigned int curr_bit = (unsigned int)0;
        unsigned int runlen;
        num_dict_words = num_sections * num_dict_entries;
        b->num_rle_bytes = (unsigned int)((unsigned long int)num_dict_words * sizeof(unsigned int) /*4ul*/ );
        void *return_value_calloc_4;
        return_value_calloc_4=calloc((unsigned long int)1, (unsigned long int)b->num_rle_bytes);
        val_dict = (unsigned int *)return_value_calloc_4;
        curr_dec_dict = val_dict;
        vzt_rd_pthread_mutex_lock(lt, &lt->mutex);
        lt->block_mem_consumed = lt->block_mem_consumed + (unsigned long int)b->num_rle_bytes;
        vzt_rd_pthread_mutex_unlock(lt, &lt->mutex);
        i = (unsigned int)0;
        for( ; !(i >= num_dict_entries); i = i + 1u)
        {
          unsigned int curr_dec_bit = (unsigned int)0;
          unsigned int curr_dec_word = (unsigned int)0;
          do
          {
            runlen=vzt_rd_get_v32(&pnt);
            if(runlen == 0u)
              first_bit = first_bit ^ (unsigned int)1;

            curr_bit = curr_bit ^ (unsigned int)1;
            if(curr_dec_bit == 0u && curr_dec_word == 0u)
              curr_bit = first_bit;

            j = (unsigned int)0;
            for( ; !(j >= runlen); j = j + 1u)
            {
              if(!(curr_bit == 0u))
                *curr_dec_dict = *curr_dec_dict | (unsigned int)(1 << curr_dec_bit);

              curr_dec_bit = curr_dec_bit + 1u;
              if(curr_dec_bit == 32u)
              {
                curr_dec_bit = (unsigned int)0;
                curr_dec_dict = curr_dec_dict + 1l;
                curr_dec_word = curr_dec_word + 1u;
                if(curr_dec_word == num_sections)
                  goto iloop;

              }

            }
          }
          while((_Bool)1);

        iloop:
          ;
          i = i + (unsigned int)0;
        }
        goto bpcalc;
      }

      val_dict = (unsigned int *)pnt;
      num_dict_words = num_dict_entries * num_sections;
      pnt = (char *)(val_dict + (signed long int)num_dict_words);

    bpcalc:
      ;
      num_bitplanes = (unsigned int)((unsigned char *)pnt)[(signed long int)0] + (unsigned int)1;
      pnt = pnt + 1l;
      b->multi_state = (unsigned int)(num_bitplanes > (unsigned int)1);
      padskip = (unsigned long int)pnt & (unsigned long int)3;
      pnt = pnt + (signed long int)(padskip != 0ul ? (unsigned long int)4 - padskip : (unsigned long int)0);
      b->vindex = (unsigned int *)pnt;
      signed int return_value_is_big_endian_5;
      return_value_is_big_endian_5=is_big_endian();
      if(!(return_value_is_big_endian_5 == 0))
      {
        if(b->rle == 0u)
        {
          i = (unsigned int)0;
          for( ; !(i >= num_dict_words); i = i + 1u)
            val_dict[(signed long int)i]=vzt_rd_get_32r((void *)(val_dict + (signed long int)i), 0);
        }

        val_tmp = b->vindex;
        i = (unsigned int)0;
        for( ; !(i >= num_bitplanes); i = i + 1u)
        {
          j = (unsigned int)0;
          for( ; !(j >= lt->total_values); j = j + 1u)
          {
            *val_tmp=vzt_rd_get_32r((void *)val_tmp, 0);
            val_tmp = val_tmp + 1l;
          }
        }
      }

      pnt = (char *)(b->vindex + (signed long int)(num_bitplanes * lt->total_values));
      b->num_str_entries=vzt_rd_get_v32(&pnt);
      if(!(b->num_str_entries == 0u))
      {
        void *return_value_calloc_6;
        return_value_calloc_6=calloc((unsigned long int)b->num_str_entries, sizeof(char *) /*8ul*/ );
        b->sindex = (char **)return_value_calloc_6;
        i = (unsigned int)0;
        for( ; !(i >= b->num_str_entries); i = i + 1u)
        {
          b->sindex[(signed long int)i] = pnt;
          unsigned long int return_value_strlen_7;
          return_value_strlen_7=strlen(pnt);
          pnt = pnt + (signed long int)(return_value_strlen_7 + (unsigned long int)1);
        }
      }

      num_dict_words = (unsigned int)((unsigned long int)(num_sections * num_dict_entries) * sizeof(unsigned int) /*4ul*/ );
      void *return_value_malloc_8;
      return_value_malloc_8=malloc(num_dict_words != 0u ? (unsigned long int)num_dict_words : sizeof(unsigned int) /*4ul*/ );
      change_dict = (unsigned int *)return_value_malloc_8;
      m = (unsigned int)0;
      i = (unsigned int)0;
      for( ; !(i >= num_dict_entries); i = i + 1u)
      {
        unsigned int pbit = (unsigned int)0;
        j = (unsigned int)0;
        for( ; !(j >= num_sections); j = j + 1u)
        {
          unsigned int k = val_dict[(signed long int)m];
          unsigned int l = k ^ k << 1 ^ pbit;
          tmp_post_9 = m;
          m = m + 1u;
          change_dict[(signed long int)tmp_post_9] = l;
          pbit = k >> 31;
        }
      }
      b->val_dict = val_dict;
      b->change_dict = change_dict;
      b->times = times;
      b->num_time_ticks = num_time_ticks;
      b->num_dict_entries = num_dict_entries;
      b->num_sections = num_sections;
    }

  }

  vzt_rd_pthread_mutex_unlock(lt, &b->mutex);
}

// vzt_rd_block_vch_free
// file vzt_read.c line 475
static signed int vzt_rd_block_vch_free(struct vzt_rd_trace *lt, struct vzt_rd_block *b, signed int killed)
{
  vzt_rd_pthread_mutex_lock(lt, &b->mutex);
  if(!(killed == 0))
    b->killed = (unsigned int)killed;

  if(!(b->rle == 0u))
  {
    if(!(b->val_dict == ((unsigned int *)NULL)))
    {
      free((void *)b->val_dict);
      b->val_dict = (unsigned int *)(void *)0;
      vzt_rd_pthread_mutex_lock(lt, &lt->mutex);
      lt->block_mem_consumed = lt->block_mem_consumed - (unsigned long int)b->num_rle_bytes;
      vzt_rd_pthread_mutex_unlock(lt, &lt->mutex);
    }

  }

  if(!(b->mem == ((char *)NULL)))
  {
    free((void *)b->mem);
    b->mem = (char *)(void *)0;
  }

  if(!(b->change_dict == ((unsigned int *)NULL)))
  {
    free((void *)b->change_dict);
    b->change_dict = (unsigned int *)(void *)0;
  }

  if(!(b->times == ((unsigned long int *)NULL)))
  {
    free((void *)b->times);
    b->times = (unsigned long int *)(void *)0;
  }

  if(!(b->sindex == ((char **)NULL)))
  {
    free((void *)b->sindex);
    b->sindex = (char **)(void *)0;
  }

  vzt_rd_pthread_mutex_unlock(lt, &b->mutex);
  return 1;
}

// vzt_rd_close
// file vzt_read.c line 2204
void vzt_rd_close(struct vzt_rd_trace *lt)
{
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
  {
    struct vzt_rd_block *b;
    struct vzt_rd_block *bt;
    if(!(lt->process_mask == ((char *)NULL)))
    {
      free((void *)lt->process_mask);
      lt->process_mask = (char *)(void *)0;
    }

    if(!(lt->rows == ((unsigned int *)NULL)))
    {
      free((void *)lt->rows);
      lt->rows = (unsigned int *)(void *)0;
    }

    if(!(lt->msb == ((signed int *)NULL)))
    {
      free((void *)lt->msb);
      lt->msb = (signed int *)(void *)0;
    }

    if(!(lt->lsb == ((signed int *)NULL)))
    {
      free((void *)lt->lsb);
      lt->lsb = (signed int *)(void *)0;
    }

    if(!(lt->flags == ((unsigned int *)NULL)))
    {
      free((void *)lt->flags);
      lt->flags = (unsigned int *)(void *)0;
    }

    if(!(lt->len == ((unsigned int *)NULL)))
    {
      free((void *)lt->len);
      lt->len = (unsigned int *)(void *)0;
    }

    if(!(lt->vindex_offset == ((unsigned int *)NULL)))
    {
      free((void *)lt->vindex_offset);
      lt->vindex_offset = (unsigned int *)(void *)0;
    }

    if(!(lt->zfacnames == ((char *)NULL)))
    {
      free((void *)lt->zfacnames);
      lt->zfacnames = (char *)(void *)0;
    }

    if(!(lt->value_current_sector == ((char *)NULL)))
    {
      free((void *)lt->value_current_sector);
      lt->value_current_sector = (char *)(void *)0;
    }

    if(!(lt->value_previous_sector == ((char *)NULL)))
    {
      free((void *)lt->value_previous_sector);
      lt->value_previous_sector = (char *)(void *)0;
    }

    if(!(lt->faccache == ((struct vzt_rd_facname_cache *)NULL)))
    {
      if(!(lt->faccache->bufprev == ((char *)NULL)))
      {
        free((void *)lt->faccache->bufprev);
        lt->faccache->bufprev = (char *)(void *)0;
      }

      if(!(lt->faccache->bufcurr == ((char *)NULL)))
      {
        free((void *)lt->faccache->bufcurr);
        lt->faccache->bufcurr = (char *)(void *)0;
      }

      free((void *)lt->faccache);
      lt->faccache = (struct vzt_rd_facname_cache *)(void *)0;
    }

    b = lt->block_head;
    for( ; !(b == ((struct vzt_rd_block *)NULL)); b = bt)
    {
      bt = b->next;
      vzt_rd_block_vch_free(lt, b, 1);
      vzt_rd_pthread_mutex_destroy(lt, &b->mutex);
      free((void *)b);
    }
    lt->block_curr = (struct vzt_rd_block *)(void *)0;
    lt->block_head = lt->block_curr;
    if(!(lt->zhandle == NULL))
    {
      gzclose((struct gzFile_s *)lt->zhandle);
      lt->zhandle = (void *)0;
    }

    if(!(lt->handle == ((struct _IO_FILE *)NULL)))
    {
      fclose(lt->handle);
      lt->handle = (struct _IO_FILE *)(void *)0;
    }

    if(!(lt->filename == ((char *)NULL)))
    {
      free((void *)lt->filename);
      lt->filename = (char *)(void *)0;
    }

    vzt_rd_pthread_mutex_destroy(lt, &lt->mutex);
    free((void *)lt);
  }

}

// vzt_rd_decompress_blk
// file vzt_read.c line 1363
static void vzt_rd_decompress_blk(struct vzt_rd_trace *lt, struct vzt_rd_block *b, signed int reopen)
{
  unsigned int rc;
  void *zhandle;
  struct _IO_FILE *handle;
  if(!(reopen == 0))
    handle=fopen(lt->filename, "rb");

  else
    handle = lt->handle;
  fseeko(handle, b->filepos, 0);
  vzt_rd_pthread_mutex_lock(lt, &b->mutex);
  signed int return_value_fileno_2;
  signed int return_value_dup_3;
  struct gzFile_s *return_value_gzdopen_4;
  signed int return_value_gzread_5;
  signed int return_value_fileno_6;
  signed int return_value_dup_7;
  signed int return_value_BZ2_bzread_8;
  signed int return_value_fileno_9;
  signed int return_value_dup_10;
  unsigned long int return_value_LZMA_read_11;
  if(b->killed == 0u)
  {
    if(b->mem == ((char *)NULL))
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)b->uncompressed_siz);
      b->mem = (char *)return_value_malloc_1;
      switch((signed int)b->ztype)
      {
        case 0:
        {
          return_value_fileno_2=fileno(handle);
          return_value_dup_3=dup(return_value_fileno_2);
          return_value_gzdopen_4=gzdopen(return_value_dup_3, "rb");
          zhandle = (void *)return_value_gzdopen_4;
          return_value_gzread_5=gzread((struct gzFile_s *)zhandle, (void *)b->mem, b->uncompressed_siz);
          rc = (unsigned int)return_value_gzread_5;
          gzclose((struct gzFile_s *)zhandle);
          break;
        }
        case 1:
        {
          return_value_fileno_6=fileno(handle);
          return_value_dup_7=dup(return_value_fileno_6);
          zhandle=BZ2_bzdopen(return_value_dup_7, "rb");
          return_value_BZ2_bzread_8=BZ2_bzread(zhandle, (void *)b->mem, (signed int)b->uncompressed_siz);
          rc = (unsigned int)return_value_BZ2_bzread_8;
          BZ2_bzclose(zhandle);
          break;
        }
        case 2:

        default:
        {
          return_value_fileno_9=fileno(handle);
          return_value_dup_10=dup(return_value_fileno_9);
          zhandle=LZMA_fdopen(return_value_dup_10, "rb");
          return_value_LZMA_read_11=LZMA_read(zhandle, (void *)b->mem, (unsigned long int)b->uncompressed_siz);
          rc = (unsigned int)return_value_LZMA_read_11;
          LZMA_close(zhandle);
        }
      }
      if(!(rc == b->uncompressed_siz))
      {
        fprintf(stderr, "VZTLOAD | short read on block %p %d vs %d (exp), ignoring\n", (void *)b, rc, b->uncompressed_siz);
        free((void *)b->mem);
        b->mem = (char *)(void *)0;
        b->short_read_ignore = (unsigned int)1;
      }

      else
      {
        vzt_rd_pthread_mutex_lock(lt, &lt->mutex);
        lt->block_mem_consumed = lt->block_mem_consumed + (unsigned long int)b->uncompressed_siz;
        vzt_rd_pthread_mutex_unlock(lt, &lt->mutex);
      }
    }

  }

  vzt_rd_pthread_mutex_unlock(lt, &b->mutex);
  if(!(reopen == 0))
    fclose(handle);

}

// vzt_rd_decompress_blk_pth
// file vzt_read.c line 1438
static void vzt_rd_decompress_blk_pth(struct vzt_rd_trace *lt, struct vzt_rd_block *b)
{
  struct vzt_pth_args *vpa;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct vzt_pth_args) /*16ul*/ );
  vpa = (struct vzt_pth_args *)return_value_malloc_1;
  vpa->lt = lt;
  vpa->b = b;
  vzt_rd_pthread_create(lt, &b->pth, &b->pth_attr, vzt_rd_decompress_blk_pth_actual, (void *)vpa);
}

// vzt_rd_decompress_blk_pth_actual
// file vzt_read.c line 1428
static void * vzt_rd_decompress_blk_pth_actual(void *args)
{
  struct vzt_pth_args *vpa = (struct vzt_pth_args *)args;
  vzt_rd_decompress_blk(vpa->lt, vpa->b, 1);
  vzt_rd_block_vch_decode(vpa->lt, vpa->b);
  free((void *)vpa);
  return (void *)0;
}

// vzt_rd_det_gzip_type
// file vzt_read.c line 1340
static signed int vzt_rd_det_gzip_type(struct _IO_FILE *handle)
{
  unsigned char cbuf[2l] = { (unsigned char)0, (unsigned char)0 };
  signed long int off;
  off=ftello(handle);
  unsigned long int return_value_fread_1;
  return_value_fread_1=fread((void *)cbuf, (unsigned long int)1, (unsigned long int)2, handle);
  if(return_value_fread_1 == 0ul)
  {
    cbuf[(signed long int)1] = (unsigned char)0;
    cbuf[(signed long int)0] = cbuf[(signed long int)1];
  }

  fseeko(handle, off, 0);
  if((signed int)cbuf[0l] == 0x1f)
  {
    if(!((signed int)cbuf[1l] == 0x8b))
      goto __CPROVER_DUMP_L2;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    if((signed int)cbuf[0l] == 122)
    {
      if(!((signed int)cbuf[1l] == 55))
        goto __CPROVER_DUMP_L3;

      return 2;
    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      return 1;
    }
  }
}

// vzt_rd_double_xdr
// file vzt_read.c line 673
static void vzt_rd_double_xdr(char *pnt, char *buf)
{
  signed int j;
  struct XDR x;
  double d;
  char xdrdata[8l] = { (char)0, (char)0, (char)0, (char)0, (char)0, (char)0, (char)0, (char)0 };
  j = 0;
  for( ; !(j >= 64); j = j + 1)
  {
    signed int byte = j / 8;
    signed int bit = 7 - (j & 7);
    if((signed int)pnt[(signed long int)j] == 49)
      xdrdata[(signed long int)byte] = xdrdata[(signed long int)byte] | (char)(1 << bit);

    else
      xdrdata[(signed long int)byte] = xdrdata[(signed long int)byte] & (char)~(1 << bit);
  }
  xdrmem_create(&x, xdrdata, (unsigned int)sizeof(char [8l]) /*8ul*/ , (enum xdr_op)XDR_DECODE);
  xdr_double(&x, &d);
  sprintf(buf, "%.16g", d);
}

// vzt_rd_expand_bits_to_integer
// file vzt_read.c line 287
unsigned int vzt_rd_expand_bits_to_integer(signed int len, char *s)
{
  unsigned int v = (unsigned int)0;
  signed int i = 0;
  for( ; !(i >= len); i = i + 1)
  {
    v = v << 1;
    v = v | (unsigned int)((signed int)*s & 1);
    s = s + 1l;
  }
  return v;
}

// vzt_rd_fac_value
// file vzt_read.c line 589
signed int vzt_rd_fac_value(struct vzt_rd_trace *lt, struct vzt_rd_block *b, unsigned int time_offset, unsigned int facidx, char *value)
{
  unsigned int len = lt->len[(signed long int)facidx];
  unsigned int i;
  signed int word = (signed int)(time_offset / (unsigned int)32);
  signed int bit = (signed int)(time_offset & (unsigned int)31);
  signed int row_size = (signed int)b->num_sections;
  unsigned int *valpnt;
  unsigned int *val_base;
  _Bool tmp_if_expr_1;
  if(!(b->num_time_ticks >= time_offset))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = facidx > lt->numrealfacs ? (_Bool)1 : (_Bool)0;
  unsigned int tmp_post_2;
  unsigned int tmp_post_3;
  unsigned int tmp_post_4;
  if(tmp_if_expr_1)
    return 0;

  else
  {
    val_base = b->val_dict + (signed long int)word;
    if((131072u & lt->flags[(signed long int)facidx]) == 0u)
    {
      unsigned int vindex_offset = lt->vindex_offset[(signed long int)facidx];
      if(!(b->multi_state == 0u))
      {
        unsigned int vzt_rd_fac_value__1__1__1__vindex_offset_x = vindex_offset + lt->total_values;
        unsigned int *vzt_rd_fac_value__1__1__1__valpnt_x;
        signed int which;
        i = (unsigned int)0;
        for( ; !(i >= len); i = i + 1u)
        {
          tmp_post_2 = vindex_offset;
          vindex_offset = vindex_offset + 1u;
          valpnt = val_base + (signed long int)(b->vindex[(signed long int)tmp_post_2] * (unsigned int)row_size);
          tmp_post_3 = vzt_rd_fac_value__1__1__1__vindex_offset_x;
          vzt_rd_fac_value__1__1__1__vindex_offset_x = vzt_rd_fac_value__1__1__1__vindex_offset_x + 1u;
          vzt_rd_fac_value__1__1__1__valpnt_x = val_base + (signed long int)(b->vindex[(signed long int)tmp_post_3] * (unsigned int)row_size);
          which = (signed int)((*vzt_rd_fac_value__1__1__1__valpnt_x >> bit & (unsigned int)1) << 1 | *valpnt >> bit & (unsigned int)1);
          value[(signed long int)i] = "01xz"[(signed long int)which];
        }
      }

      else
      {
        i = (unsigned int)0;
        for( ; !(i >= len); i = i + 1u)
        {
          tmp_post_4 = vindex_offset;
          vindex_offset = vindex_offset + 1u;
          valpnt = val_base + (signed long int)(b->vindex[(signed long int)tmp_post_4] * (unsigned int)row_size);
          value[(signed long int)i] = (char)((unsigned int)48 | *valpnt >> bit & (unsigned int)1);
        }
      }
    }

    else
    {
      unsigned int vzt_rd_fac_value__1__2__vindex_offset;
      if(!(b->multi_state == 0u))
      {
        unsigned int vindex_offset_x;
        unsigned int *valpnt_x;
        signed int vzt_rd_fac_value__1__2__1__which;
        i = (unsigned int)0;
        for( ; !(i >= len); i = i + 1u)
        {
          if(i + facidx >= lt->numfacs)
            break;

          vzt_rd_fac_value__1__2__vindex_offset = lt->vindex_offset[(signed long int)(facidx + i)];
          vindex_offset_x = vzt_rd_fac_value__1__2__vindex_offset + lt->total_values;
          valpnt = val_base + (signed long int)(b->vindex[(signed long int)vzt_rd_fac_value__1__2__vindex_offset] * (unsigned int)row_size);
          valpnt_x = val_base + (signed long int)(b->vindex[(signed long int)vindex_offset_x] * (unsigned int)row_size);
          vzt_rd_fac_value__1__2__1__which = (signed int)((*valpnt_x >> bit & (unsigned int)1) << 1 | *valpnt >> bit & (unsigned int)1);
          value[(signed long int)i] = "01xz"[(signed long int)vzt_rd_fac_value__1__2__1__which];
        }
      }

      else
      {
        i = (unsigned int)0;
        for( ; !(i >= len); i = i + 1u)
        {
          if(i + facidx >= lt->numfacs)
            break;

          vzt_rd_fac_value__1__2__vindex_offset = lt->vindex_offset[(signed long int)(facidx + i)];
          valpnt = val_base + (signed long int)(b->vindex[(signed long int)vzt_rd_fac_value__1__2__vindex_offset] * (unsigned int)row_size);
          value[(signed long int)i] = (char)((unsigned int)48 | *valpnt >> bit & (unsigned int)1);
        }
      }
    }
    value[(signed long int)i] = (char)0;
    return 1;
  }
}

// vzt_rd_get_16
// file vzt_read.c line 135
static unsigned int vzt_rd_get_16(void *mm, signed int offset)
{
  unsigned char *nn = (unsigned char *)mm + (signed long int)offset;
  unsigned int m1;
  unsigned char *tmp_post_1 = nn;
  nn = nn + 1l;
  m1 = (unsigned int)*((unsigned char *)tmp_post_1);
  unsigned int m2 = (unsigned int)*((unsigned char *)nn);
  return m1 << 8 | m2;
}

// vzt_rd_get_32
// file vzt_read.c line 143
static unsigned int vzt_rd_get_32(void *mm, signed int offset)
{
  unsigned char *nn = (unsigned char *)mm + (signed long int)offset;
  unsigned int m1;
  unsigned char *tmp_post_1 = nn;
  nn = nn + 1l;
  m1 = (unsigned int)*((unsigned char *)tmp_post_1);
  unsigned int m2;
  unsigned char *tmp_post_2 = nn;
  nn = nn + 1l;
  m2 = (unsigned int)*((unsigned char *)tmp_post_2);
  unsigned int m3;
  unsigned char *tmp_post_3 = nn;
  nn = nn + 1l;
  m3 = (unsigned int)*((unsigned char *)tmp_post_3);
  unsigned int m4 = (unsigned int)*((unsigned char *)nn);
  return m1 << 24 | m2 << 16 | m3 << 8 | m4;
}

// vzt_rd_get_32r
// file vzt_read.c line 163
static unsigned int vzt_rd_get_32r(void *mm, signed int offset)
{
  unsigned char *nn = (unsigned char *)mm + (signed long int)offset;
  unsigned int m4;
  unsigned char *tmp_post_1 = nn;
  nn = nn + 1l;
  m4 = (unsigned int)*((unsigned char *)tmp_post_1);
  unsigned int m3;
  unsigned char *tmp_post_2 = nn;
  nn = nn + 1l;
  m3 = (unsigned int)*((unsigned char *)tmp_post_2);
  unsigned int m2;
  unsigned char *tmp_post_3 = nn;
  nn = nn + 1l;
  m2 = (unsigned int)*((unsigned char *)tmp_post_3);
  unsigned int m1 = (unsigned int)*((unsigned char *)nn);
  return m1 << 24 | m2 << 16 | m3 << 8 | m4;
}

// vzt_rd_get_64
// file vzt_read.c line 153
static unsigned long int vzt_rd_get_64(void *mm, signed int offset)
{
  unsigned int return_value_vzt_rd_get_32_1;
  return_value_vzt_rd_get_32_1=vzt_rd_get_32(mm, offset);
  unsigned int return_value_vzt_rd_get_32_2;
  return_value_vzt_rd_get_32_2=vzt_rd_get_32(mm, offset + 4);
  return (unsigned long int)return_value_vzt_rd_get_32_1 << 32 | (unsigned long int)return_value_vzt_rd_get_32_2;
}

// vzt_rd_get_alias_root
// file vzt_read.c line 1060
static inline unsigned int vzt_rd_get_alias_root(struct vzt_rd_trace *lt, unsigned int facidx)
{
  _Bool tmp_if_expr_1;
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
    tmp_if_expr_1 = facidx < lt->numfacs ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  if(tmp_if_expr_1)
  {
    for( ; !((8u & lt->flags[(signed long int)facidx]) == 0u); facidx = lt->rows[(signed long int)facidx])
      ;
    return facidx;
  }

  else
    return ~((unsigned int)0);
}

// vzt_rd_get_block_mem_usage
// file vzt_read.c line 1293
unsigned long int vzt_rd_get_block_mem_usage(struct vzt_rd_trace *lt)
{
  unsigned long int mem;
  vzt_rd_pthread_mutex_lock(lt, &lt->mutex);
  mem = lt->block_mem_consumed;
  vzt_rd_pthread_mutex_unlock(lt, &lt->mutex);
  return mem;
}

// vzt_rd_get_fac_geometry
// file vzt_read.c line 974
struct vzt_rd_geometry * vzt_rd_get_fac_geometry(struct vzt_rd_trace *lt, unsigned int facidx)
{
  _Bool tmp_if_expr_1;
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
    tmp_if_expr_1 = facidx < lt->numfacs ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  if(tmp_if_expr_1)
  {
    lt->geometry.rows = lt->rows[(signed long int)facidx];
    lt->geometry.msb = lt->msb[(signed long int)facidx];
    lt->geometry.lsb = lt->lsb[(signed long int)facidx];
    lt->geometry.flags = lt->flags[(signed long int)facidx];
    lt->geometry.len = lt->len[(signed long int)facidx];
    return &lt->geometry;
  }

  else
    return (struct vzt_rd_geometry *)(void *)0;
}

// vzt_rd_get_facname
// file vzt_read.c line 1109
char * vzt_rd_get_facname(struct vzt_rd_trace *lt, unsigned int facidx)
{
  char *pnt;
  unsigned int clonecnt;
  unsigned int j;
  char *tmp_post_1;
  char *tmp_post_2;
  char *tmp_post_3;
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
  {
    if(facidx == 1u + lt->faccache->old_facidx || facidx == 0u)
    {
      if(facidx == 0u)
      {
        lt->faccache->n = lt->zfacnames;
        lt->faccache->bufcurr[(signed long int)0] = (char)0;
        lt->faccache->bufprev[(signed long int)0] = (char)0;
      }

      if(!(facidx == lt->numfacs))
      {
        pnt = lt->faccache->bufcurr;
        lt->faccache->bufcurr = lt->faccache->bufprev;
        lt->faccache->bufprev = pnt;
        clonecnt=vzt_rd_get_16((void *)lt->faccache->n, 0);
        lt->faccache->n = lt->faccache->n + (signed long int)2;
        pnt = lt->faccache->bufcurr;
        j = (unsigned int)0;
        for( ; !(j >= clonecnt); j = j + 1u)
        {
          tmp_post_1 = pnt;
          pnt = pnt + 1l;
          *tmp_post_1 = lt->faccache->bufprev[(signed long int)j];
        }
        do
        {
          tmp_post_2 = pnt;
          pnt = pnt + 1l;
          tmp_post_3 = lt->faccache->n;
          lt->faccache->n = lt->faccache->n + 1l;
          *tmp_post_2 = (char)(unsigned int)((unsigned char *)tmp_post_3)[(signed long int)0];
          if(*tmp_post_2 == 0)
            break;

        }
        while((_Bool)1);
        lt->faccache->old_facidx = facidx;
        return lt->faccache->bufcurr;
      }

      else
        return (char *)(void *)0;
    }

    else
      if(!(facidx >= lt->numfacs))
      {
        signed int strt;
        if(facidx == lt->faccache->old_facidx)
          return lt->faccache->bufcurr;

        if(!(1u + lt->faccache->old_facidx >= facidx))
          strt = (signed int)(lt->faccache->old_facidx + (unsigned int)1);

        else
          strt = 0;
        j = (unsigned int)strt;
        for( ; !(j >= facidx); j = j + 1u)
          vzt_rd_get_facname(lt, j);
        char *return_value_vzt_rd_get_facname_4;
        return_value_vzt_rd_get_facname_4=vzt_rd_get_facname(lt, j);
        return return_value_vzt_rd_get_facname_4;
      }

  }

  return (char *)(void *)0;
}

// vzt_rd_get_num_active_blocks
// file vzt_read.c line 1316
unsigned int vzt_rd_get_num_active_blocks(struct vzt_rd_trace *lt)
{
  signed int blk = 0;
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
  {
    struct vzt_rd_block *b = lt->block_head;
    for( ; !(b == ((struct vzt_rd_block *)NULL)); b = b->next)
      if(b->short_read_ignore == 0u)
      {
        if(b->exclude_block == 0u)
          blk = blk + 1;

      }

  }

  return (unsigned int)blk;
}

// vzt_rd_get_v32
// file vzt_read.c line 174
static unsigned int vzt_rd_get_v32(char **mmx)
{
  signed char *c;
  signed char *beg;
  unsigned int val;
  signed char **mm = (signed char **)mmx;
  c = *mm;
  beg = c;
  if((signed int)*c >= 0)
  {
    for( ; (signed int)*c >= 0; c = c + 1l)
      ;
    *mm = c + (signed long int)1;
    val = (unsigned int)((signed int)*c & 0x7f);
    do
    {
      val = val << 7;
      c = c - 1l;
      val = val | (unsigned int)*c;
    }
    while(!(c == beg));
  }

  else
  {
    *mm = c + (signed long int)1;
    val = (unsigned int)((signed int)*c & 0x7f);
  }
  return val;
}

// vzt_rd_get_v64
// file vzt_read.c line 205
static unsigned long int vzt_rd_get_v64(char **mmx)
{
  signed char *c;
  signed char *beg;
  unsigned long int val;
  signed char **mm = (signed char **)mmx;
  c = *mm;
  beg = c;
  if((signed int)*c >= 0)
  {
    for( ; (signed int)*c >= 0; c = c + 1l)
      ;
    *mm = c + (signed long int)1;
    val = (unsigned long int)((signed int)*c & 0x7f);
    do
    {
      val = val << 7;
      c = c - 1l;
      val = val | (unsigned long int)*c;
    }
    while(!(c == beg));
  }

  else
  {
    val = (unsigned long int)((signed int)*c & 0x7f);
    *mm = c + (signed long int)1;
  }
  return val;
}

// vzt_rd_init
// file vzt_read.c line 2192
struct vzt_rd_trace * vzt_rd_init(const char *name)
{
  struct vzt_rd_trace *return_value_vzt_rd_init_smp_1;
  return_value_vzt_rd_init_smp_1=vzt_rd_init_smp(name, (unsigned int)1);
  return return_value_vzt_rd_init_smp_1;
}

// vzt_rd_init_smp
// file vzt_read.c line 1675
struct vzt_rd_trace * vzt_rd_init_smp(const char *name, unsigned int num_cpus)
{
  struct vzt_rd_trace *lt;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct vzt_rd_trace) /*328ul*/ );
  lt = (struct vzt_rd_trace *)return_value_calloc_1;
  unsigned int i;
  unsigned int vindex_offset;
  lt->handle=fopen(name, "rb");
  unsigned int return_value_vzt_rd_get_16_81;
  unsigned int tmp_if_expr_6;
  unsigned int return_value_vzt_rd_get_32_5;
  unsigned int tmp_if_expr_8;
  unsigned int return_value_vzt_rd_get_32_7;
  unsigned int tmp_if_expr_10;
  unsigned int return_value_vzt_rd_get_32_9;
  unsigned long int tmp_if_expr_12;
  unsigned long int return_value_vzt_rd_get_64_11;
  unsigned int tmp_if_expr_14;
  unsigned int return_value_vzt_rd_get_32_13;
  unsigned int tmp_if_expr_16;
  unsigned int return_value_vzt_rd_get_32_15;
  unsigned int tmp_if_expr_18;
  unsigned int return_value_vzt_rd_get_32_17;
  unsigned int tmp_if_expr_20;
  unsigned int return_value_vzt_rd_get_32_19;
  unsigned int tmp_if_expr_22;
  unsigned int return_value_vzt_rd_get_32_21;
  signed int return_value_fileno_25;
  signed int return_value_dup_26;
  struct gzFile_s *return_value_gzdopen_27;
  void *return_value_malloc_28;
  signed int return_value_gzread_29;
  signed int return_value_fileno_30;
  signed int return_value_dup_31;
  void *return_value_malloc_32;
  signed int return_value_BZ2_bzread_33;
  signed int return_value_fileno_34;
  signed int return_value_dup_35;
  void *return_value_malloc_36;
  unsigned long int return_value_LZMA_read_37;
  signed int return_value_fileno_42;
  signed int return_value_dup_43;
  struct gzFile_s *return_value_gzdopen_44;
  void *return_value_malloc_45;
  signed int return_value_gzread_46;
  signed int return_value_fileno_47;
  signed int return_value_dup_48;
  void *return_value_malloc_49;
  signed int return_value_BZ2_bzread_50;
  signed int return_value_fileno_51;
  signed int return_value_dup_52;
  void *return_value_malloc_53;
  unsigned long int return_value_LZMA_read_54;
  unsigned int tmp_if_expr_65;
  unsigned int return_value_vzt_rd_get_alias_root_64;
  signed int tmp_if_expr_66;
  unsigned int tmp_if_expr_71;
  unsigned int return_value_vzt_rd_get_32_70;
  unsigned int tmp_if_expr_73;
  unsigned int return_value_vzt_rd_get_32_72;
  unsigned long int tmp_if_expr_75;
  unsigned long int return_value_vzt_rd_get_64_74;
  unsigned long int tmp_if_expr_77;
  unsigned long int return_value_vzt_rd_get_64_76;
  _Bool tmp_if_expr_79;
  _Bool tmp_if_expr_80;
  if(lt->handle == ((struct _IO_FILE *)NULL))
  {
    vzt_rd_close(lt);
    lt = (struct vzt_rd_trace *)(void *)0;
  }

  else
  {
    unsigned short int id = (unsigned short int)0;
    unsigned short int version = (unsigned short int)0;
    lt->filename=strdup(name);
    lt->block_mem_max = (unsigned long int)(64 * 1024 * 1024);
    if(!(num_cpus >= 1u))
      num_cpus = (unsigned int)1;

    if(num_cpus >= 9u)
      num_cpus = (unsigned int)8;

    lt->pthreads = num_cpus - (unsigned int)1;
    setvbuf(lt->handle, (char *)(void *)0, 2, (unsigned long int)0);
    unsigned long int return_value_fread_2;
    return_value_fread_2=fread((void *)&id, (unsigned long int)2, (unsigned long int)1, lt->handle);
    if(return_value_fread_2 == 0ul)
      id = (unsigned short int)0;

    unsigned long int return_value_fread_3;
    return_value_fread_3=fread((void *)&version, (unsigned long int)2, (unsigned long int)1, lt->handle);
    if(return_value_fread_3 == 0ul)
      id = (unsigned short int)0;

    unsigned long int return_value_fread_4;
    return_value_fread_4=fread((void *)&lt->granule_size, (unsigned long int)1, (unsigned long int)1, lt->handle);
    if(return_value_fread_4 == 0ul)
      id = (unsigned short int)0;

    unsigned int return_value_vzt_rd_get_16_82;
    return_value_vzt_rd_get_16_82=vzt_rd_get_16((void *)&id, 0);
    if(!(return_value_vzt_rd_get_16_82 == 22106u))
    {
      fprintf(stderr, "VZTLOAD | *** Not a vzt file ***\n");
      vzt_rd_close(lt);
      lt = (struct vzt_rd_trace *)(void *)0;
    }

    else
    {
      return_value_vzt_rd_get_16_81=vzt_rd_get_16((void *)&version, 0);
      version = (unsigned short int)return_value_vzt_rd_get_16_81;
      if((signed int)version >= 2)
      {
        fprintf(stderr, "VZTLOAD | *** Version %d vzt not supported ***\n", version);
        vzt_rd_close(lt);
        lt = (struct vzt_rd_trace *)(void *)0;
      }

      else
        if((signed int)lt->granule_size >= 33)
        {
          fprintf(stderr, "VZTLOAD | *** Granule size of %d (>%d) not supported ***\n", lt->granule_size, 32);
          vzt_rd_close(lt);
          lt = (struct vzt_rd_trace *)(void *)0;
        }

        else
        {
          unsigned long int rcf;
          unsigned int rc;
          char *m;
          signed long int pos;
          signed long int fend;
          unsigned int t;
          struct vzt_rd_block *b;
          vzt_rd_pthread_mutex_init(lt, &lt->mutex, (const union anonymous_2 *)(void *)0);
          rcf=fread((void *)&lt->numfacs, (unsigned long int)4, (unsigned long int)1, lt->handle);
          if(!(rcf == 0ul))
          {
            return_value_vzt_rd_get_32_5=vzt_rd_get_32((void *)&lt->numfacs, 0);
            tmp_if_expr_6 = return_value_vzt_rd_get_32_5;
          }

          else
            tmp_if_expr_6 = (unsigned int)0;
          lt->numfacs = tmp_if_expr_6;
          if(lt->numfacs == 0u)
          {
            unsigned int num_expansion_bytes;
            rcf=fread((void *)&num_expansion_bytes, (unsigned long int)4, (unsigned long int)1, lt->handle);
            if(!(rcf == 0ul))
            {
              return_value_vzt_rd_get_32_7=vzt_rd_get_32((void *)&num_expansion_bytes, 0);
              tmp_if_expr_8 = return_value_vzt_rd_get_32_7;
            }

            else
              tmp_if_expr_8 = (unsigned int)0;
            num_expansion_bytes = tmp_if_expr_8;
            rcf=fread((void *)&lt->numfacs, (unsigned long int)4, (unsigned long int)1, lt->handle);
            if(!(rcf == 0ul))
            {
              return_value_vzt_rd_get_32_9=vzt_rd_get_32((void *)&lt->numfacs, 0);
              tmp_if_expr_10 = return_value_vzt_rd_get_32_9;
            }

            else
              tmp_if_expr_10 = (unsigned int)0;
            lt->numfacs = tmp_if_expr_10;
            if(num_expansion_bytes >= 8u)
            {
              rcf=fread((void *)&lt->timezero, (unsigned long int)8, (unsigned long int)1, lt->handle);
              if(!(rcf == 0ul))
              {
                return_value_vzt_rd_get_64_11=vzt_rd_get_64((void *)&lt->timezero, 0);
                tmp_if_expr_12 = return_value_vzt_rd_get_64_11;
              }

              else
                tmp_if_expr_12 = (unsigned long int)0;
              lt->timezero = (signed long int)tmp_if_expr_12;
              if(num_expansion_bytes >= 9u)
                fseeko(lt->handle, (signed long int)(num_expansion_bytes - (unsigned int)8), 1);

            }

            else
              fseeko(lt->handle, (signed long int)num_expansion_bytes, 1);
          }

          rcf=fread((void *)&lt->numfacbytes, (unsigned long int)4, (unsigned long int)1, lt->handle);
          if(!(rcf == 0ul))
          {
            return_value_vzt_rd_get_32_13=vzt_rd_get_32((void *)&lt->numfacbytes, 0);
            tmp_if_expr_14 = return_value_vzt_rd_get_32_13;
          }

          else
            tmp_if_expr_14 = (unsigned int)0;
          lt->numfacbytes = tmp_if_expr_14;
          rcf=fread((void *)&lt->longestname, (unsigned long int)4, (unsigned long int)1, lt->handle);
          if(!(rcf == 0ul))
          {
            return_value_vzt_rd_get_32_15=vzt_rd_get_32((void *)&lt->longestname, 0);
            tmp_if_expr_16 = return_value_vzt_rd_get_32_15;
          }

          else
            tmp_if_expr_16 = (unsigned int)0;
          lt->longestname = tmp_if_expr_16;
          rcf=fread((void *)&lt->zfacnamesize, (unsigned long int)4, (unsigned long int)1, lt->handle);
          if(!(rcf == 0ul))
          {
            return_value_vzt_rd_get_32_17=vzt_rd_get_32((void *)&lt->zfacnamesize, 0);
            tmp_if_expr_18 = return_value_vzt_rd_get_32_17;
          }

          else
            tmp_if_expr_18 = (unsigned int)0;
          lt->zfacnamesize = tmp_if_expr_18;
          rcf=fread((void *)&lt->zfacname_predec_size, (unsigned long int)4, (unsigned long int)1, lt->handle);
          if(!(rcf == 0ul))
          {
            return_value_vzt_rd_get_32_19=vzt_rd_get_32((void *)&lt->zfacname_predec_size, 0);
            tmp_if_expr_20 = return_value_vzt_rd_get_32_19;
          }

          else
            tmp_if_expr_20 = (unsigned int)0;
          lt->zfacname_predec_size = tmp_if_expr_20;
          rcf=fread((void *)&lt->zfacgeometrysize, (unsigned long int)4, (unsigned long int)1, lt->handle);
          if(!(rcf == 0ul))
          {
            return_value_vzt_rd_get_32_21=vzt_rd_get_32((void *)&lt->zfacgeometrysize, 0);
            tmp_if_expr_22 = return_value_vzt_rd_get_32_21;
          }

          else
            tmp_if_expr_22 = (unsigned int)0;
          lt->zfacgeometrysize = tmp_if_expr_22;
          rcf=fread((void *)&lt->timescale, (unsigned long int)1, (unsigned long int)1, lt->handle);
          if(rcf == 0ul)
            lt->timescale = (unsigned char)0;

          fprintf(stderr, "VZTLOAD | %d facilities\n", lt->numfacs);
          pos=ftello(lt->handle);
          void *return_value_calloc_23;
          return_value_calloc_23=calloc((unsigned long int)1, (unsigned long int)(lt->numfacs / (unsigned int)8 + (unsigned int)1));
          lt->process_mask = (char *)return_value_calloc_23;
          signed int return_value_vzt_rd_det_gzip_type_24;
          return_value_vzt_rd_det_gzip_type_24=vzt_rd_det_gzip_type(lt->handle);
          switch(return_value_vzt_rd_det_gzip_type_24)
          {
            case 0:
            {
              return_value_fileno_25=fileno(lt->handle);
              return_value_dup_26=dup(return_value_fileno_25);
              return_value_gzdopen_27=gzdopen(return_value_dup_26, "rb");
              lt->zhandle = (void *)return_value_gzdopen_27;
              return_value_malloc_28=malloc((unsigned long int)lt->zfacname_predec_size);
              m = (char *)return_value_malloc_28;
              return_value_gzread_29=gzread((struct gzFile_s *)lt->zhandle, (void *)m, lt->zfacname_predec_size);
              rc = (unsigned int)return_value_gzread_29;
              gzclose((struct gzFile_s *)lt->zhandle);
              lt->zhandle = (void *)0;
              break;
            }
            case 1:
            {
              return_value_fileno_30=fileno(lt->handle);
              return_value_dup_31=dup(return_value_fileno_30);
              lt->zhandle=BZ2_bzdopen(return_value_dup_31, "rb");
              return_value_malloc_32=malloc((unsigned long int)lt->zfacname_predec_size);
              m = (char *)return_value_malloc_32;
              return_value_BZ2_bzread_33=BZ2_bzread(lt->zhandle, (void *)m, (signed int)lt->zfacname_predec_size);
              rc = (unsigned int)return_value_BZ2_bzread_33;
              BZ2_bzclose(lt->zhandle);
              lt->zhandle = (void *)0;
              break;
            }
            case 2:

            default:
            {
              return_value_fileno_34=fileno(lt->handle);
              return_value_dup_35=dup(return_value_fileno_34);
              lt->zhandle=LZMA_fdopen(return_value_dup_35, "rb");
              return_value_malloc_36=malloc((unsigned long int)lt->zfacname_predec_size);
              m = (char *)return_value_malloc_36;
              return_value_LZMA_read_37=LZMA_read(lt->zhandle, (void *)m, (unsigned long int)lt->zfacname_predec_size);
              rc = (unsigned int)return_value_LZMA_read_37;
              LZMA_close(lt->zhandle);
              lt->zhandle = (void *)0;
            }
          }
          if(!(rc == lt->zfacname_predec_size))
          {
            fprintf(stderr, "VZTLOAD | *** name section mangled %d (act) vs %d (exp)\n", rc, lt->zfacname_predec_size);
            free((void *)m);
            vzt_rd_close(lt);
            lt = (struct vzt_rd_trace *)(void *)0;
            return lt;
          }

          lt->zfacnames = m;
          void *return_value_calloc_38;
          return_value_calloc_38=calloc((unsigned long int)1, sizeof(struct vzt_rd_facname_cache) /*32ul*/ );
          lt->faccache = (struct vzt_rd_facname_cache *)return_value_calloc_38;
          lt->faccache->old_facidx = lt->numfacs;
          void *return_value_malloc_39;
          return_value_malloc_39=malloc((unsigned long int)(lt->longestname + (unsigned int)1));
          lt->faccache->bufcurr = (char *)return_value_malloc_39;
          void *return_value_malloc_40;
          return_value_malloc_40=malloc((unsigned long int)(lt->longestname + (unsigned int)1));
          lt->faccache->bufprev = (char *)return_value_malloc_40;
          pos = pos + (signed long int)lt->zfacnamesize;
          fseeko(lt->handle, pos, 0);
          signed int return_value_vzt_rd_det_gzip_type_41;
          return_value_vzt_rd_det_gzip_type_41=vzt_rd_det_gzip_type(lt->handle);
          switch(return_value_vzt_rd_det_gzip_type_41)
          {
            case 0:
            {
              return_value_fileno_42=fileno(lt->handle);
              return_value_dup_43=dup(return_value_fileno_42);
              return_value_gzdopen_44=gzdopen(return_value_dup_43, "rb");
              lt->zhandle = (void *)return_value_gzdopen_44;
              t = (unsigned int)((unsigned long int)(lt->numfacs * (unsigned int)4) * sizeof(unsigned int) /*4ul*/ );
              return_value_malloc_45=malloc((unsigned long int)t);
              m = (char *)return_value_malloc_45;
              return_value_gzread_46=gzread((struct gzFile_s *)lt->zhandle, (void *)m, t);
              rc = (unsigned int)return_value_gzread_46;
              gzclose((struct gzFile_s *)lt->zhandle);
              lt->zhandle = (void *)0;
              break;
            }
            case 1:
            {
              return_value_fileno_47=fileno(lt->handle);
              return_value_dup_48=dup(return_value_fileno_47);
              lt->zhandle=BZ2_bzdopen(return_value_dup_48, "rb");
              t = (unsigned int)((unsigned long int)(lt->numfacs * (unsigned int)4) * sizeof(unsigned int) /*4ul*/ );
              return_value_malloc_49=malloc((unsigned long int)t);
              m = (char *)return_value_malloc_49;
              return_value_BZ2_bzread_50=BZ2_bzread(lt->zhandle, (void *)m, (signed int)t);
              rc = (unsigned int)return_value_BZ2_bzread_50;
              BZ2_bzclose(lt->zhandle);
              lt->zhandle = (void *)0;
              break;
            }
            case 2:

            default:
            {
              return_value_fileno_51=fileno(lt->handle);
              return_value_dup_52=dup(return_value_fileno_51);
              lt->zhandle=LZMA_fdopen(return_value_dup_52, "rb");
              t = (unsigned int)((unsigned long int)(lt->numfacs * (unsigned int)4) * sizeof(unsigned int) /*4ul*/ );
              return_value_malloc_53=malloc((unsigned long int)t);
              m = (char *)return_value_malloc_53;
              return_value_LZMA_read_54=LZMA_read(lt->zhandle, (void *)m, (unsigned long int)t);
              rc = (unsigned int)return_value_LZMA_read_54;
              LZMA_close(lt->zhandle);
              lt->zhandle = (void *)0;
            }
          }
          if(!(rc == t))
          {
            fprintf(stderr, "VZTLOAD | *** geometry section mangled %d (act) vs %d (exp)\n", rc, t);
            free((void *)m);
            vzt_rd_close(lt);
            lt = (struct vzt_rd_trace *)(void *)0;
            return lt;
          }

          pos = pos + (signed long int)lt->zfacgeometrysize;
          void *return_value_malloc_55;
          return_value_malloc_55=malloc((unsigned long int)lt->numfacs * sizeof(unsigned int) /*4ul*/ );
          lt->rows = (unsigned int *)return_value_malloc_55;
          void *return_value_malloc_56;
          return_value_malloc_56=malloc((unsigned long int)lt->numfacs * sizeof(signed int) /*4ul*/ );
          lt->msb = (signed int *)return_value_malloc_56;
          void *return_value_malloc_57;
          return_value_malloc_57=malloc((unsigned long int)lt->numfacs * sizeof(signed int) /*4ul*/ );
          lt->lsb = (signed int *)return_value_malloc_57;
          void *return_value_malloc_58;
          return_value_malloc_58=malloc((unsigned long int)lt->numfacs * sizeof(unsigned int) /*4ul*/ );
          lt->flags = (unsigned int *)return_value_malloc_58;
          void *return_value_malloc_59;
          return_value_malloc_59=malloc((unsigned long int)lt->numfacs * sizeof(unsigned int) /*4ul*/ );
          lt->len = (unsigned int *)return_value_malloc_59;
          void *return_value_malloc_60;
          return_value_malloc_60=malloc((unsigned long int)lt->numfacs * sizeof(unsigned int) /*4ul*/ );
          lt->vindex_offset = (unsigned int *)return_value_malloc_60;
          lt->longest_len = (unsigned int)32;
          i = (unsigned int)0;
          for( ; !(i >= lt->numfacs); i = i + 1u)
          {
            signed int j;
            lt->rows[(signed long int)i]=vzt_rd_get_32((void *)(m + (signed long int)(i * (unsigned int)16)), 0);
            unsigned int return_value_vzt_rd_get_32_61;
            return_value_vzt_rd_get_32_61=vzt_rd_get_32((void *)(m + (signed long int)(i * (unsigned int)16)), 4);
            lt->msb[(signed long int)i] = (signed int)return_value_vzt_rd_get_32_61;
            unsigned int return_value_vzt_rd_get_32_62;
            return_value_vzt_rd_get_32_62=vzt_rd_get_32((void *)(m + (signed long int)(i * (unsigned int)16)), 8);
            lt->lsb[(signed long int)i] = (signed int)return_value_vzt_rd_get_32_62;
            unsigned int return_value_vzt_rd_get_32_63;
            return_value_vzt_rd_get_32_63=vzt_rd_get_32((void *)(m + (signed long int)(i * (unsigned int)16)), 12);
            lt->flags[(signed long int)i] = return_value_vzt_rd_get_32_63 & (unsigned int)(0 | 1 << 0 | 1 << 1 | 1 << 2 | 1 << 2 | 1 << 3 | 1 << 4 | 1 << 5 | 1 << 6 | 1 << 0 | 1 << 7 | 1 << 0 | 1 << 8 | 1 << 9 | 1 << 10 | 1 << 11 | 1 << 12 | 1 << 13 | 1 << 14 | 1 << 15 | 1 << 16);
            if((8u & lt->flags[(signed long int)i]) == 0u)
              tmp_if_expr_65 = i;

            else
            {
              return_value_vzt_rd_get_alias_root_64=vzt_rd_get_alias_root(lt, i);
              tmp_if_expr_65 = return_value_vzt_rd_get_alias_root_64;
            }
            j = (signed int)tmp_if_expr_65;
            if((7u & lt->flags[(signed long int)i]) == 0u)
            {
              if(lt->lsb[(signed long int)j] >= lt->msb[(signed long int)j])
                tmp_if_expr_66 = (lt->lsb[(signed long int)j] - lt->msb[(signed long int)j]) + 1;

              else
                tmp_if_expr_66 = (lt->msb[(signed long int)j] - lt->lsb[(signed long int)j]) + 1;
              lt->len[(signed long int)i] = (unsigned int)tmp_if_expr_66;
            }

            else
              lt->len[(signed long int)i] = (unsigned int)((lt->flags[(signed long int)j] & (unsigned int)(1 << 0 | 1 << 2)) != 0u ? 32 : 64);
            if(!(lt->longest_len >= lt->len[(signed long int)i]))
              lt->longest_len = lt->len[(signed long int)i];

          }
          vindex_offset = (unsigned int)0;
          lt->numrealfacs = (unsigned int)0;
          for( ; !(lt->numrealfacs >= lt->numfacs); lt->numrealfacs = lt->numrealfacs + 1u)
          {
            if(!((8u & lt->flags[(signed long int)lt->numrealfacs]) == 0u))
              break;

            lt->vindex_offset[(signed long int)lt->numrealfacs] = vindex_offset;
            vindex_offset = vindex_offset + lt->len[(signed long int)lt->numrealfacs];
          }
          lt->total_values = vindex_offset;
          fprintf(stderr, "VZTLOAD | Total value bits: %d\n", lt->total_values);
          if(!(lt->numfacs >= lt->numrealfacs))
            lt->numrealfacs = lt->numfacs;

          void *return_value_malloc_67;
          return_value_malloc_67=malloc((unsigned long int)(lt->longest_len + (unsigned int)1));
          lt->value_current_sector = (char *)return_value_malloc_67;
          void *return_value_malloc_68;
          return_value_malloc_68=malloc((unsigned long int)(lt->longest_len + (unsigned int)1));
          lt->value_previous_sector = (char *)return_value_malloc_68;
          free((void *)m);
          do
          {
            fseeko(lt->handle, 0L, 2);
            fend=ftello(lt->handle);
            if(pos >= fend)
              break;

            fseeko(lt->handle, pos, 0);
            void *return_value_calloc_69;
            return_value_calloc_69=calloc((unsigned long int)1, sizeof(struct vzt_rd_block) /*248ul*/ );
            b = (struct vzt_rd_block *)return_value_calloc_69;
            b->last_rd_value_idx = (unsigned int)~0;
            rcf=fread((void *)&b->uncompressed_siz, (unsigned long int)4, (unsigned long int)1, lt->handle);
            if(!(rcf == 0ul))
            {
              return_value_vzt_rd_get_32_70=vzt_rd_get_32((void *)&b->uncompressed_siz, 0);
              tmp_if_expr_71 = return_value_vzt_rd_get_32_70;
            }

            else
              tmp_if_expr_71 = (unsigned int)0;
            b->uncompressed_siz = tmp_if_expr_71;
            rcf=fread((void *)&b->compressed_siz, (unsigned long int)4, (unsigned long int)1, lt->handle);
            if(!(rcf == 0ul))
            {
              return_value_vzt_rd_get_32_72=vzt_rd_get_32((void *)&b->compressed_siz, 0);
              tmp_if_expr_73 = return_value_vzt_rd_get_32_72;
            }

            else
              tmp_if_expr_73 = (unsigned int)0;
            b->compressed_siz = tmp_if_expr_73;
            rcf=fread((void *)&b->start, (unsigned long int)8, (unsigned long int)1, lt->handle);
            if(!(rcf == 0ul))
            {
              return_value_vzt_rd_get_64_74=vzt_rd_get_64((void *)&b->start, 0);
              tmp_if_expr_75 = return_value_vzt_rd_get_64_74;
            }

            else
              tmp_if_expr_75 = (unsigned long int)0;
            b->start = tmp_if_expr_75;
            rcf=fread((void *)&b->end, (unsigned long int)8, (unsigned long int)1, lt->handle);
            if(!(rcf == 0ul))
            {
              return_value_vzt_rd_get_64_76=vzt_rd_get_64((void *)&b->end, 0);
              tmp_if_expr_77 = return_value_vzt_rd_get_64_76;
            }

            else
              tmp_if_expr_77 = (unsigned long int)0;
            b->end = tmp_if_expr_77;
            pos=ftello(lt->handle);
            b->rle = (unsigned int)(b->start > b->end);
            if(!((unsigned int)b->rle == 0u))
            {
              unsigned long int tb = b->start;
              b->start = b->end;
              b->end = tb;
            }

            signed int return_value_vzt_rd_det_gzip_type_78;
            return_value_vzt_rd_det_gzip_type_78=vzt_rd_det_gzip_type(lt->handle);
            b->ztype = (unsigned int)return_value_vzt_rd_det_gzip_type_78;
            if(pos >= fend)
            {
              free((void *)b);
              break;
            }

            b->filepos = pos;
            if(!(b->uncompressed_siz == 0u))
              tmp_if_expr_79 = b->compressed_siz != 0u ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_79 = (_Bool)0;
            if(tmp_if_expr_79)
              tmp_if_expr_80 = b->end != 0ul ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_80 = (_Bool)0;
            if(tmp_if_expr_80)
            {
              fseeko(lt->handle, (signed long int)b->compressed_siz, 1);
              lt->numblocks = lt->numblocks + 1u;
              if(lt->pthreads >= lt->numblocks)
              {
                vzt_rd_pthread_mutex_init(lt, &b->mutex, (const union anonymous_2 *)(void *)0);
                vzt_rd_decompress_blk_pth(lt, b);
              }

              if(!(lt->block_curr == ((struct vzt_rd_block *)NULL)))
              {
                b->prev = lt->block_curr;
                lt->block_curr->next = b;
                lt->block_curr = b;
                lt->end = b->end;
              }

              else
              {
                lt->block_curr = b;
                lt->block_head = lt->block_curr;
                lt->start = b->start;
                lt->end = b->end;
              }
            }

            else
            {
              free((void *)b);
              break;
            }
            pos = pos + (signed long int)b->compressed_siz;
          }
          while((_Bool)1);
          if(!(lt->numblocks == 0u))
          {
            fprintf(stderr, "VZTLOAD | Read %d block header%s OK\n", lt->numblocks, lt->numblocks != (unsigned int)1 ? "s" : "");
            fprintf(stderr, "VZTLOAD | [%ld] start time\n", lt->start);
            fprintf(stderr, "VZTLOAD | [%ld] end time\n", lt->end);
            fprintf(stderr, "VZTLOAD | \n");
            lt->value_change_callback = vzt_rd_null_callback;
          }

          else
          {
            vzt_rd_close(lt);
            lt = (struct vzt_rd_trace *)(void *)0;
          }
        }
    }
  }
  return lt;
}

// vzt_rd_iter_blocks
// file vzt_read.c line 1452
signed int vzt_rd_iter_blocks(struct vzt_rd_trace *lt, void (*value_change_callback)(struct vzt_rd_trace **, unsigned long int *, unsigned int *, char **), void *user_callback_data_pointer)
{
  struct vzt_rd_block *b;
  struct vzt_rd_block *bpre;
  signed int blk = 0;
  signed int blkfinal = 0;
  signed int processed = 0;
  struct vzt_rd_block *bcutoff = (struct vzt_rd_block *)(void *)0;
  struct vzt_rd_block *bfinal = (struct vzt_rd_block *)(void *)0;
  _Bool tmp_if_expr_1;
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
  {
    lt->value_change_callback = value_change_callback != ((void (*)(struct vzt_rd_trace **, unsigned long int *, unsigned int *, char **))NULL) ? value_change_callback : vzt_rd_null_callback;
    lt->user_callback_data_pointer = user_callback_data_pointer;
    b = lt->block_head;
    blk = 0;
    for( ; !(b == ((struct vzt_rd_block *)NULL)); b = b->next)
    {
      if(b->mem == ((char *)NULL))
      {
        if(b->short_read_ignore == 0u)
        {
          if(b->exclude_block == 0u)
          {
            if(!(processed >= 5))
            {
              signed int gate;
              if(processed == 4)
                tmp_if_expr_1 = b->next != ((struct vzt_rd_block *)NULL) ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_1 = (_Bool)0;
              gate = (signed int)tmp_if_expr_1;
              fprintf(stderr, "VZTLOAD | block [%d] processing %ld / %ld%s\n", blk, b->start, b->end, gate != 0 ? " ..." : "");
              if(!(gate == 0))
                bcutoff = b;

            }

            processed = processed + 1;
            if(!(lt->pthreads == 0u))
            {
              signed int count = (signed int)lt->pthreads;
              bpre = b->next;
              for( ; !(bpre == ((struct vzt_rd_block *)NULL)); bpre = bpre->next)
                if(bpre->mem == ((char *)NULL))
                {
                  if(bpre->short_read_ignore == 0u)
                  {
                    if(bpre->exclude_block == 0u)
                    {
                      vzt_rd_decompress_blk_pth(lt, bpre);
                      count = count - 1;
                      if(count == 0)
                        break;

                    }

                  }

                }

            }

            vzt_rd_decompress_blk(lt, b, 0);
            bfinal = b;
            blkfinal = blk;
          }

        }

      }

      if(!(b->mem == ((char *)NULL)))
      {
        if(!(lt->process_linear == 0u))
          vzt_rd_process_block_linear(lt, b);

        else
          vzt_rd_process_block(lt, b);
        if(lt->numblocks >= 3u)
        {
          unsigned long int block_mem_consumed;
          vzt_rd_pthread_mutex_lock(lt, &lt->mutex);
          block_mem_consumed = lt->block_mem_consumed;
          vzt_rd_pthread_mutex_unlock(lt, &lt->mutex);
          if(!(lt->block_mem_max >= block_mem_consumed))
          {
            if(!(b->prev == ((struct vzt_rd_block *)NULL)))
            {
              vzt_rd_pthread_mutex_lock(lt, &lt->mutex);
              lt->block_mem_consumed = lt->block_mem_consumed - (unsigned long int)b->prev->uncompressed_siz;
              vzt_rd_pthread_mutex_unlock(lt, &lt->mutex);
              vzt_rd_block_vch_free(lt, b->prev, 0);
            }

          }

        }

      }

      blk = blk + 1;
    }
  }

  if(!(bcutoff == ((struct vzt_rd_block *)NULL)) && !(bfinal == bcutoff))
    fprintf(stderr, "VZTLOAD | block [%d] processed %ld / %ld\n", blkfinal, bfinal->start, bfinal->end);

  return blk;
}

// vzt_rd_limit_time_range
// file vzt_read.c line 1571
unsigned int vzt_rd_limit_time_range(struct vzt_rd_trace *lt, unsigned long int strt_time, unsigned long int end_time)
{
  unsigned long int tmp_time;
  signed int blk = 0;
  _Bool tmp_if_expr_1;
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
  {
    struct vzt_rd_block *b = lt->block_head;
    struct vzt_rd_block *bprev = (struct vzt_rd_block *)(void *)0;
    signed int state = 0;
    if(!(end_time >= strt_time))
    {
      tmp_time = strt_time;
      strt_time = end_time;
      end_time = tmp_time;
    }

    for( ; !(b == ((struct vzt_rd_block *)NULL)); b = b->next)
    {
      switch(state)
      {
        case 0:
        {
          if(b->end >= strt_time)
          {
            state = 1;
            if(!(strt_time >= b->start))
            {
              if(!(bprev == ((struct vzt_rd_block *)NULL)))
              {
                bprev->exclude_block = (unsigned int)0;
                blk = blk + 1;
              }

            }

          }

          break;
        }
        case 1:
          if(!(end_time >= b->start))
            state = 2;

      }
      if(state == 1)
        tmp_if_expr_1 = !(b->short_read_ignore != 0u) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        b->exclude_block = (unsigned int)0;
        blk = blk + 1;
      }

      else
        b->exclude_block = (unsigned int)1;
      bprev = b;
    }
  }

  return (unsigned int)blk;
}

// vzt_rd_make_sindex
// file vzt_read.c line 720
static unsigned int vzt_rd_make_sindex(char *pnt)
{
  unsigned int spnt = (unsigned int)0;
  unsigned int bpos = (unsigned int)0;
  for( ; !(bpos >= 32u); bpos = bpos + 1u)
  {
    spnt = spnt << 1;
    spnt = spnt | (unsigned int)((signed int)pnt[(signed long int)bpos] & 1);
  }
  return spnt;
}

// vzt_rd_next_value_chg_time
// file vzt_read.c line 500
unsigned int vzt_rd_next_value_chg_time(struct vzt_rd_trace *lt, struct vzt_rd_block *b, unsigned int time_offset, unsigned int facidx)
{
  unsigned int i;
  unsigned int len = lt->len[(signed long int)facidx];
  unsigned int vindex_offset = lt->vindex_offset[(signed long int)facidx];
  unsigned int vindex_offset_x = vindex_offset + lt->total_values;
  unsigned int old_time_offset = time_offset;
  signed int word = (signed int)(time_offset / (unsigned int)32);
  signed int bit = (signed int)((time_offset & (unsigned int)31) + (unsigned int)1);
  signed int row_size = (signed int)b->num_sections;
  unsigned int *valpnt;
  unsigned int *valpnt_x;
  unsigned int change_msk;
  _Bool tmp_if_expr_1;
  if(time_offset >= b->num_time_ticks + 4294967295u)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = facidx > lt->numrealfacs ? (_Bool)1 : (_Bool)0;
  unsigned int tmp_if_expr_3;
  unsigned int return_value_vzt_rd_tzc_2;
  if(tmp_if_expr_1)
    return time_offset;

  else
  {
    time_offset = time_offset & (unsigned int)~31;
    for( ; !(word >= row_size); word = word + 1)
    {
      if(!(bit == 32))
      {
        change_msk = (unsigned int)0;
        if((131072u & lt->flags[(signed long int)facidx]) == 0u)
        {
          if(!(b->multi_state == 0u))
          {
            i = (unsigned int)0;
            for( ; !(i >= len); i = i + 1u)
            {
              valpnt = b->change_dict + (signed long int)(b->vindex[(signed long int)(vindex_offset + i)] * (unsigned int)row_size + (unsigned int)word);
              valpnt_x = b->change_dict + (signed long int)(b->vindex[(signed long int)(vindex_offset_x + i)] * (unsigned int)row_size + (unsigned int)word);
              change_msk = change_msk | *valpnt;
              change_msk = change_msk | *valpnt_x;
            }
          }

          else
          {
            i = (unsigned int)0;
            for( ; !(i >= len); i = i + 1u)
            {
              valpnt = b->change_dict + (signed long int)(b->vindex[(signed long int)(vindex_offset + i)] * (unsigned int)row_size + (unsigned int)word);
              change_msk = change_msk | *valpnt;
            }
          }
        }

        else
          if(!(b->multi_state == 0u))
          {
            i = (unsigned int)0;
            for( ; !(i >= len); i = i + 1u)
            {
              if(i + facidx >= lt->numfacs)
                break;

              vindex_offset = lt->vindex_offset[(signed long int)(facidx + i)];
              vindex_offset_x = vindex_offset + lt->total_values;
              valpnt = b->change_dict + (signed long int)(b->vindex[(signed long int)vindex_offset] * (unsigned int)row_size + (unsigned int)word);
              valpnt_x = b->change_dict + (signed long int)(b->vindex[(signed long int)vindex_offset_x] * (unsigned int)row_size + (unsigned int)word);
              change_msk = change_msk | *valpnt;
              change_msk = change_msk | *valpnt_x;
            }
          }

          else
          {
            i = (unsigned int)0;
            for( ; !(i >= len); i = i + 1u)
            {
              if(i + facidx >= lt->numfacs)
                break;

              vindex_offset = lt->vindex_offset[(signed long int)(facidx + i)];
              valpnt = b->change_dict + (signed long int)(b->vindex[(signed long int)vindex_offset] * (unsigned int)row_size + (unsigned int)word);
              change_msk = change_msk | *valpnt;
            }
          }
        change_msk = change_msk >> bit;
        if(!(change_msk == 0u))
        {
          if(!((1u & change_msk) == 0u))
            tmp_if_expr_3 = (unsigned int)0;

          else
          {
            return_value_vzt_rd_tzc_2=vzt_rd_tzc(change_msk);
            tmp_if_expr_3 = return_value_vzt_rd_tzc_2;
          }
          return tmp_if_expr_3 + time_offset + (unsigned int)bit;
        }

      }

      time_offset = time_offset + (unsigned int)32;
      bit = 0;
    }
    return old_time_offset;
  }
}

// vzt_rd_null_callback
// file vzt_read.c line 950
void vzt_rd_null_callback(struct vzt_rd_trace **lt, unsigned long int *pnt_time, unsigned int *pnt_facidx, char **pnt_value)
{
  (void)lt;
  (void)pnt_time;
  (void)pnt_facidx;
  (void)pnt_value;
}

// vzt_rd_ones_cnt
// file vzt_read.c line 262
static inline unsigned int vzt_rd_ones_cnt(unsigned int x)
{
  x = x - (x >> 1 & (unsigned int)0x55555555);
  x = (x >> 2 & (unsigned int)0x33333333) + (x & (unsigned int)0x33333333);
  x = (x >> 4) + x & (unsigned int)0x0f0f0f0f;
  return x * (unsigned int)0x01010101 >> 24;
}

// vzt_rd_process_block
// file vzt_read.c line 805
signed int vzt_rd_process_block(struct vzt_rd_trace *lt, struct vzt_rd_block *b)
{
  unsigned int i;
  unsigned int i2;
  unsigned int idx;
  char *pnt = lt->value_current_sector;
  char *pnt2 = lt->value_previous_sector;
  char buf[32l];
  char *bufpnt;
  struct vzt_ncycle_autosort **autosort;
  struct vzt_ncycle_autosort *deadlist = (struct vzt_ncycle_autosort *)(void *)0;
  struct vzt_ncycle_autosort *autofacs;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)lt->numrealfacs, sizeof(struct vzt_ncycle_autosort) /*8ul*/ );
  autofacs = (struct vzt_ncycle_autosort *)return_value_calloc_1;
  vzt_rd_block_vch_decode(lt, b);
  vzt_rd_pthread_mutex_lock(lt, &b->mutex);
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)b->num_time_ticks, sizeof(struct vzt_ncycle_autosort *) /*8ul*/ );
  autosort = (struct vzt_ncycle_autosort **)return_value_calloc_2;
  i = (unsigned int)0;
  for( ; !(i >= b->num_time_ticks); i = i + 1u)
    autosort[(signed long int)i] = (struct vzt_ncycle_autosort *)(void *)0;
  deadlist = (struct vzt_ncycle_autosort *)(void *)0;
  idx = (unsigned int)0;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  char *tmp_if_expr_4;
  for( ; !(idx >= lt->numrealfacs); idx = idx + 1u)
  {
    signed int process_idx = (signed int)(idx / (unsigned int)8);
    signed int process_bit = (signed int)(idx & (unsigned int)7);
    if(!((1 << process_bit & (signed int)lt->process_mask[(signed long int)process_idx]) == 0))
    {
      i = (unsigned int)0;
      vzt_rd_fac_value(lt, b, i, idx, pnt);
      if(i == 0u)
        tmp_if_expr_5 = b->prev != ((struct vzt_rd_block *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
        tmp_if_expr_6 = !(b->prev->exclude_block != 0u) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      if(tmp_if_expr_6)
      {
        vzt_rd_fac_value(lt, b->prev, b->prev->num_time_ticks - (unsigned int)1, idx, pnt2);
        signed int return_value_strcmp_3;
        return_value_strcmp_3=strcmp(pnt, pnt2);
        if(!(return_value_strcmp_3 == 0))
          goto do_vch_0;

      }

      else
      {

      do_vch_0:
        ;
        if((6u & lt->flags[(signed long int)idx]) == 0u)
          lt->value_change_callback(&lt, &b->times[(signed long int)i], &idx, &pnt);

        else
          if(!((2u & lt->flags[(signed long int)idx]) == 0u))
          {
            bufpnt = buf;
            vzt_rd_double_xdr(pnt, buf);
            lt->value_change_callback(&lt, &b->times[(signed long int)i], &idx, &bufpnt);
          }

          else
          {
            unsigned int spnt;
            spnt=vzt_rd_make_sindex(pnt);
            char *msg;
            if(b->prev == ((struct vzt_rd_block *)NULL) && i == 0u)
              tmp_if_expr_4 = "UNDEF";

            else
              tmp_if_expr_4 = b->sindex[(signed long int)spnt];
            msg = tmp_if_expr_4;
            lt->value_change_callback(&lt, &b->times[(signed long int)i], &idx, &msg);
          }
      }
      i2=vzt_rd_next_value_chg_time(lt, b, i, idx);
      if(!(i2 == 0u))
      {
        struct vzt_ncycle_autosort *t = autosort[(signed long int)i2];
        (autofacs + (signed long int)idx)->next = t;
        autosort[(signed long int)i2] = autofacs + (signed long int)idx;
      }

      else
      {
        struct vzt_ncycle_autosort *vzt_rd_process_block__1__2__1__1__4__t = deadlist;
        (autofacs + (signed long int)idx)->next = vzt_rd_process_block__1__2__1__1__4__t;
        deadlist = autofacs + (signed long int)idx;
      }
    }

  }
  i = (unsigned int)1;
  char *tmp_if_expr_7;
  for( ; !(i >= b->num_time_ticks); i = i + 1u)
  {
    struct vzt_ncycle_autosort *vzt_rd_process_block__1__3__1__t = autosort[(signed long int)i];
    if(!(vzt_rd_process_block__1__3__1__t == ((struct vzt_ncycle_autosort *)NULL)))
    {
      if(!(vzt_rd_process_block__1__3__1__t == ((struct vzt_ncycle_autosort *)NULL)))
      {
        struct vzt_ncycle_autosort *tn = vzt_rd_process_block__1__3__1__t->next;
        idx = (unsigned int)(vzt_rd_process_block__1__3__1__t - autofacs);
        vzt_rd_fac_value(lt, b, i, idx, pnt);
        if((6u & lt->flags[(signed long int)idx]) == 0u)
          lt->value_change_callback(&lt, &b->times[(signed long int)i], &idx, &pnt);

        else
          if(!((2u & lt->flags[(signed long int)idx]) == 0u))
          {
            bufpnt = buf;
            vzt_rd_double_xdr(pnt, buf);
            lt->value_change_callback(&lt, &b->times[(signed long int)i], &idx, &bufpnt);
          }

          else
          {
            unsigned int vzt_rd_process_block__1__3__1__1__1__2__2__spnt;
            vzt_rd_process_block__1__3__1__1__1__2__2__spnt=vzt_rd_make_sindex(pnt);
            char *vzt_rd_process_block__1__3__1__1__1__2__2__msg;
            if(b->prev == ((struct vzt_rd_block *)NULL) && i == 0u)
              tmp_if_expr_7 = "UNDEF";

            else
              tmp_if_expr_7 = b->sindex[(signed long int)vzt_rd_process_block__1__3__1__1__1__2__2__spnt];
            vzt_rd_process_block__1__3__1__1__1__2__2__msg = tmp_if_expr_7;
            lt->value_change_callback(&lt, &b->times[(signed long int)i], &idx, &vzt_rd_process_block__1__3__1__1__1__2__2__msg);
          }
        i2=vzt_rd_next_value_chg_time(lt, b, i, idx);
        if(!(i2 == i))
        {
          struct vzt_ncycle_autosort *vzt_rd_process_block__1__3__1__1__1__3__ta = autosort[(signed long int)i2];
          (autofacs + (signed long int)idx)->next = vzt_rd_process_block__1__3__1__1__1__3__ta;
          autosort[(signed long int)i2] = autofacs + (signed long int)idx;
        }

        else
        {
          struct vzt_ncycle_autosort *ta = deadlist;
          (autofacs + (signed long int)idx)->next = ta;
          deadlist = autofacs + (signed long int)idx;
        }
        vzt_rd_process_block__1__3__1__t = tn;
      }

    }

  }
  vzt_rd_pthread_mutex_unlock(lt, &b->mutex);
  free((void *)autofacs);
  free((void *)autosort);
  return 1;
}

// vzt_rd_process_block_linear
// file vzt_read.c line 738
signed int vzt_rd_process_block_linear(struct vzt_rd_trace *lt, struct vzt_rd_block *b)
{
  signed int i;
  signed int i2;
  unsigned int idx;
  char *pnt = lt->value_current_sector;
  char *pnt2 = lt->value_previous_sector;
  char buf[32l];
  char *bufpnt;
  vzt_rd_block_vch_decode(lt, b);
  vzt_rd_pthread_mutex_lock(lt, &b->mutex);
  idx = (unsigned int)0;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  char *tmp_if_expr_2;
  for( ; !(idx >= lt->numrealfacs); idx = idx + 1u)
  {
    signed int process_idx = (signed int)(idx / (unsigned int)8);
    signed int process_bit = (signed int)(idx & (unsigned int)7);
    if(!((1 << process_bit & (signed int)lt->process_mask[(signed long int)process_idx]) == 0))
    {
      i = 0;
      do
      {
        vzt_rd_fac_value(lt, b, (unsigned int)i, idx, pnt);
        if(i == 0)
          tmp_if_expr_3 = b->prev != ((struct vzt_rd_block *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = !(b->prev->exclude_block != 0u) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
        {
          vzt_rd_fac_value(lt, b->prev, b->prev->num_time_ticks - (unsigned int)1, idx, pnt2);
          signed int return_value_strcmp_1;
          return_value_strcmp_1=strcmp(pnt, pnt2);
          if(!(return_value_strcmp_1 == 0))
            goto do_vch;

        }

        else
        {

        do_vch:
          ;
          if((6u & lt->flags[(signed long int)idx]) == 0u)
            lt->value_change_callback(&lt, &b->times[(signed long int)i], &idx, &pnt);

          else
            if(!((2u & lt->flags[(signed long int)idx]) == 0u))
            {
              bufpnt = buf;
              vzt_rd_double_xdr(pnt, buf);
              lt->value_change_callback(&lt, &b->times[(signed long int)i], &idx, &bufpnt);
            }

            else
            {
              unsigned int spnt;
              spnt=vzt_rd_make_sindex(pnt);
              char *msg;
              if(b->prev == ((struct vzt_rd_block *)NULL) && i == 0)
                tmp_if_expr_2 = "UNDEF";

              else
                tmp_if_expr_2 = b->sindex[(signed long int)spnt];
              msg = tmp_if_expr_2;
              lt->value_change_callback(&lt, &b->times[(signed long int)i], &idx, &msg);
            }
        }
        unsigned int return_value_vzt_rd_next_value_chg_time_5;
        return_value_vzt_rd_next_value_chg_time_5=vzt_rd_next_value_chg_time(lt, b, (unsigned int)i, idx);
        i2 = (signed int)return_value_vzt_rd_next_value_chg_time_5;
        if(i == i2)
          break;

        i = i2;
      }
      while((_Bool)1);
    }

  }
  vzt_rd_pthread_mutex_unlock(lt, &b->mutex);
  return 1;
}

// vzt_rd_process_block_single_factime
// file vzt_read.c line 2260
static char * vzt_rd_process_block_single_factime(struct vzt_rd_trace *lt, struct vzt_rd_block *b, unsigned long int simtime, unsigned int idx)
{
  unsigned int i;
  char *pnt = lt->value_current_sector;
  char *buf = lt->value_previous_sector;
  char *rcval = (char *)(void *)0;
  vzt_rd_block_vch_decode(lt, b);
  vzt_rd_pthread_mutex_lock(lt, &b->mutex);
  _Bool tmp_if_expr_1;
  if(b->last_rd_value_simtime == simtime)
    tmp_if_expr_1 = b->last_rd_value_idx != (unsigned int)~0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  if(tmp_if_expr_1)
    i = b->last_rd_value_idx;

  else
  {
    signed int i_ok = 0;
    i = (unsigned int)0;
    for( ; !(i >= b->num_time_ticks); i = i + 1u)
    {
      if(simtime == b->times[(signed long int)i])
      {
        i_ok = (signed int)i;
        break;
      }

      if(!(simtime >= b->times[(signed long int)i]))
        break;

      i_ok = (signed int)i;
    }
    b->last_rd_value_idx = (unsigned int)i_ok;
    b->last_rd_value_simtime = simtime;
  }
  vzt_rd_fac_value(lt, b, i, idx, pnt);
  if((6u & lt->flags[(signed long int)idx]) == 0u)
    rcval = pnt;

  else
    if(!((2u & lt->flags[(signed long int)idx]) == 0u))
    {
      vzt_rd_double_xdr(pnt, buf);
      rcval = buf;
    }

    else
    {
      unsigned int spnt;
      spnt=vzt_rd_make_sindex(pnt);
      rcval = b->sindex[(signed long int)spnt];
    }
  vzt_rd_pthread_mutex_unlock(lt, &b->mutex);
  return rcval;
}

// vzt_rd_process_blocks_linearly
// file vzt_read.c line 1661
void vzt_rd_process_blocks_linearly(struct vzt_rd_trace *lt, signed int doit)
{
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
    lt->process_linear = (unsigned int)(doit != 0);

}

// vzt_rd_pthread_create
// file vzt_read.c line 95
static inline void vzt_rd_pthread_create(struct vzt_rd_trace *lt, unsigned long int *thread, union pthread_attr_t *attr, void * (*start_routine)(void *), void *arg)
{
  if(!(lt->pthreads == 0u))
  {
    pthread_attr_init(attr);
    pthread_attr_setdetachstate(attr, 1);
    pthread_create(thread, attr, start_routine, arg);
  }

}

// vzt_rd_pthread_mutex_destroy
// file vzt_read.c line 90
static inline void vzt_rd_pthread_mutex_destroy(struct vzt_rd_trace *lt, union anonymous_0 *mutex)
{
  if(!(lt->pthreads == 0u))
    pthread_mutex_destroy(mutex);

}

// vzt_rd_pthread_mutex_init
// file vzt_read.c line 74
static inline signed int vzt_rd_pthread_mutex_init(struct vzt_rd_trace *lt, union anonymous_0 *mutex, const union anonymous_2 *mutexattr)
{
  if(!(lt->pthreads == 0u))
    pthread_mutex_init(mutex, mutexattr);

  return 0;
}

// vzt_rd_pthread_mutex_lock
// file vzt_read.c line 80
static inline void vzt_rd_pthread_mutex_lock(struct vzt_rd_trace *lt, union anonymous_0 *mx)
{
  if(!(lt->pthreads == 0u))
    pthread_mutex_lock(mx);

}

// vzt_rd_pthread_mutex_unlock
// file vzt_read.c line 85
static inline void vzt_rd_pthread_mutex_unlock(struct vzt_rd_trace *lt, union anonymous_0 *mx)
{
  if(!(lt->pthreads == 0u))
    pthread_mutex_unlock(mx);

}

// vzt_rd_tzc
// file vzt_read.c line 277
static inline unsigned int vzt_rd_tzc(unsigned int x)
{
  unsigned int return_value_vzt_rd_ones_cnt_1;
  return_value_vzt_rd_ones_cnt_1=vzt_rd_ones_cnt((x & -x) - (unsigned int)1);
  return return_value_vzt_rd_ones_cnt_1;
}

// vzt_rd_unlimit_time_range
// file vzt_read.c line 1633
unsigned int vzt_rd_unlimit_time_range(struct vzt_rd_trace *lt)
{
  signed int blk = 0;
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
  {
    struct vzt_rd_block *b = lt->block_head;
    for( ; !(b == ((struct vzt_rd_block *)NULL)); b = b->next)
    {
      b->exclude_block = (unsigned int)0;
      if(b->short_read_ignore == 0u)
        blk = blk + 1;

    }
  }

  return (unsigned int)blk;
}

// vzt_rd_value
// file vzt_read.c line 2320
char * vzt_rd_value(struct vzt_rd_trace *lt, unsigned long int simtime, unsigned int idx)
{
  struct vzt_rd_block *b;
  struct vzt_rd_block *b2;
  char *rcval = (char *)(void *)0;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  if(!(lt == ((struct vzt_rd_trace *)NULL)))
  {
    b = lt->block_head;
    if(simtime == lt->last_rd_value_simtime)
      tmp_if_expr_1 = lt->last_rd_value_block != ((struct vzt_rd_block *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
    {
      b = lt->last_rd_value_block;
      goto b_chk;
    }

    else
      lt->last_rd_value_simtime = simtime;

  __CPROVER_DUMP_L4:
    ;
    if(!(b == ((struct vzt_rd_block *)NULL)))
    {
      if(!(simtime >= b->start))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = b->end < simtime ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        b = b->next;

      else
      {
        lt->last_rd_value_block = b;

      b_chk:
        ;
        if(b->mem == ((char *)NULL))
        {
          if(b->short_read_ignore == 0u)
            vzt_rd_decompress_blk(lt, b, 0);

        }

        if(!(b->mem == ((char *)NULL)))
        {
          rcval=vzt_rd_process_block_single_factime(lt, b, simtime, idx);
          goto __CPROVER_DUMP_L12;
        }

        b = b->next;
      }
      goto __CPROVER_DUMP_L4;
    }

  }

  else
    return (char *)(void *)0;

__CPROVER_DUMP_L12:
  ;
  if(!(b == ((struct vzt_rd_block *)NULL)))
  {
    if(lt->numblocks >= 3u)
    {
      unsigned long int block_mem_consumed;
      vzt_rd_pthread_mutex_lock(lt, &lt->mutex);
      block_mem_consumed = lt->block_mem_consumed;
      vzt_rd_pthread_mutex_unlock(lt, &lt->mutex);
      if(!(lt->block_mem_max >= block_mem_consumed))
      {
        b2 = lt->block_head;
        for( ; !(b2 == ((struct vzt_rd_block *)NULL)); b2 = b2->next)
          if(!(lt->block_mem_max >= block_mem_consumed))
          {
            if(!(b2 == b))
            {
              vzt_rd_pthread_mutex_lock(lt, &lt->mutex);
              lt->block_mem_consumed = lt->block_mem_consumed - (unsigned long int)b2->uncompressed_siz;
              vzt_rd_pthread_mutex_unlock(lt, &lt->mutex);
              vzt_rd_block_vch_free(lt, b2, 0);
            }

          }

      }

    }

  }

  return rcval;
}

// vzt_rd_vectorize
// file vzt_read.c line 2005
void vzt_rd_vectorize(struct vzt_rd_trace *lt)
{
  _Bool tmp_if_expr_17;
  if(lt == ((struct vzt_rd_trace *)NULL))
    tmp_if_expr_17 = (_Bool)1;

  else
    tmp_if_expr_17 = lt->vectorize != 0u ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_18;
  if(tmp_if_expr_17)
    tmp_if_expr_18 = (_Bool)1;

  else
    tmp_if_expr_18 = lt->numfacs < (unsigned int)2 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_7;
  signed int return_value_strcmp_6;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_9;
  unsigned int tmp_post_13;
  if(tmp_if_expr_18)
    goto __CPROVER_DUMP_L47;

  else
  {
    unsigned int old_longest_len = lt->longest_len;
    signed int pmxlen = 31;
    char *pbuff;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)(pmxlen + 1));
    pbuff = (char *)return_value_malloc_1;
    char *pname;
    signed int plen;
    signed int plen2;
    unsigned int i;
    signed int pidx;
    signed int num_after_combine = (signed int)lt->numfacs;
    signed int num_synvecs = 0;
    signed int num_synalias = 0;
    struct vzt_synvec_chain **synvec_chain;
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)lt->numfacs, sizeof(struct vzt_synvec_chain *) /*8ul*/ );
    synvec_chain = (struct vzt_synvec_chain **)return_value_calloc_2;
    i = (unsigned int)0;
    for( ; !(i >= lt->numfacs + 4294967295u); i = i + 1u)
    {
      unsigned int j;
      if(lt->len[(signed long int)i] == 1u)
      {
        pname=vzt_rd_get_facname(lt, i);
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(pname);
        plen = (signed int)return_value_strlen_3;
        if(!(pmxlen >= plen))
        {
          free((void *)pbuff);
          void *return_value_malloc_4;
          return_value_malloc_4=malloc((unsigned long int)(plen + 1));
          pbuff = (char *)return_value_malloc_4;
        }

        memcpy((void *)pbuff, (const void *)pname, (unsigned long int)plen);
        pbuff[(signed long int)plen] = (char)0;
        pidx = lt->msb[(signed long int)i];
        j = i + (unsigned int)1;
        for( ; !(j >= lt->numfacs + 4294967295u); j = j + 1u)
        {
          pname=vzt_rd_get_facname(lt, j);
          unsigned long int return_value_strlen_5;
          return_value_strlen_5=strlen(pname);
          plen2 = (signed int)return_value_strlen_5;
          if(!(plen == plen2))
            tmp_if_expr_7 = (_Bool)1;

          else
          {
            return_value_strcmp_6=strcmp(pbuff, pname);
            tmp_if_expr_7 = return_value_strcmp_6 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_7)
            tmp_if_expr_8 = (_Bool)1;

          else
            tmp_if_expr_8 = lt->len[(signed long int)j] != (unsigned int)1 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_8)
            tmp_if_expr_10 = (_Bool)1;

          else
          {
            if(!(pidx == lt->msb[(signed long int)j] + -1))
              tmp_if_expr_9 = pidx != lt->msb[(signed long int)j] + 1 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_9 = (_Bool)0;
            tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_10)
          {
            i = j - (unsigned int)1;
            break;
          }

          pidx = lt->msb[(signed long int)j];
          lt->len[(signed long int)i] = lt->len[(signed long int)i] + lt->len[(signed long int)j];
          lt->lsb[(signed long int)i] = lt->lsb[(signed long int)j];
          lt->len[(signed long int)j] = (unsigned int)0;
          num_after_combine = num_after_combine - 1;
          if(!(lt->longest_len >= lt->len[(signed long int)i]))
            lt->longest_len = lt->len[(signed long int)i];

        }
      }

    }
    free((void *)pbuff);
    i = lt->numrealfacs;
    for( ; !(i >= lt->numfacs); i = i + 1u)
    {
      if(!((8u & lt->flags[(signed long int)i]) == 0u))
      {
        unsigned int vzt_rd_vectorize__1__2__2__1__1__j;
        vzt_rd_vectorize__1__2__2__1__1__j=vzt_rd_get_alias_root(lt, i);
        unsigned int k;
        unsigned int l;
        if(!(lt->len[(signed long int)i] == 0u))
        {
          if(lt->len[(signed long int)i] == 1u)
          {
            if(lt->len[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j] == 1u)
              goto __CPROVER_DUMP_L40;

          }

          if(lt->len[(signed long int)i] == lt->len[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j])
          {
            unsigned int nfm1 = lt->numfacs - (unsigned int)1;
            if(!(vzt_rd_vectorize__1__2__2__1__1__j == nfm1) && !(i == nfm1))
            {
              if(!(lt->len[(signed long int)(1u + i)] == 0u))
              {
                if(!(lt->len[(signed long int)(1u + vzt_rd_vectorize__1__2__2__1__1__j)] == 0u))
                  goto __CPROVER_DUMP_L40;

              }

            }

          }

          lt->vindex_offset[(signed long int)i] = lt->vindex_offset[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j];
          k = (unsigned int)1;
          for( ; !(k >= lt->len[(signed long int)i]); k = k + 1u)
            if(lt->numfacs + 4294967295u >= k + i)
            {
              unsigned int return_value_vzt_rd_get_alias_root_11;
              return_value_vzt_rd_get_alias_root_11=vzt_rd_get_alias_root(lt, k + i);
              lt->vindex_offset[(signed long int)(k + i)] = lt->vindex_offset[(signed long int)return_value_vzt_rd_get_alias_root_11];
            }

          if(!(synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j] == ((struct vzt_synvec_chain *)NULL)))
          {
            signed int alias_found = 0;
            k = (unsigned int)0;
            for( ; !(k >= synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j]->num_entries); k = k + 1u)
            {
              unsigned int idx = synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j]->chain[(signed long int)k];
              if(lt->len[(signed long int)i] == lt->len[(signed long int)idx])
              {
                l = (unsigned int)0;
                for( ; !(l >= lt->len[(signed long int)i]); l = l + 1u)
                  if(lt->numfacs + 4294967295u >= idx + l)
                  {
                    if(!(lt->vindex_offset[(signed long int)(idx + l)] == lt->vindex_offset[(signed long int)(l + i)]))
                      break;

                  }

                if(l == lt->len[(signed long int)i])
                {
                  lt->rows[(signed long int)i] = idx;
                  num_synalias = num_synalias + 1;
                  alias_found = 1;
                  break;
                }

              }

            }
            if(alias_found == 0)
            {
              void *return_value_realloc_12;
              return_value_realloc_12=realloc((void *)synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j], sizeof(struct vzt_synvec_chain) /*8ul*/  + (unsigned long int)synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j]->num_entries * sizeof(unsigned int) /*4ul*/ );
              synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j] = (struct vzt_synvec_chain *)return_value_realloc_12;
              tmp_post_13 = synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j]->num_entries;
              synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j]->num_entries = synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j]->num_entries + 1u;
              synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j]->chain[(signed long int)tmp_post_13] = i;
              lt->flags[(signed long int)i] = lt->flags[(signed long int)i] | (unsigned int)(1 << 17);
              lt->flags[(signed long int)i] = lt->flags[(signed long int)i] & (unsigned int)~(1 << 3);
              lt->numrealfacs = i + (unsigned int)1;
              num_synvecs = num_synvecs + 1;
            }

          }

          else
          {
            void *return_value_malloc_14;
            return_value_malloc_14=malloc(sizeof(struct vzt_synvec_chain) /*8ul*/ );
            synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j] = (struct vzt_synvec_chain *)return_value_malloc_14;
            if(!(synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j] == ((struct vzt_synvec_chain *)NULL)))
            {
              synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j]->num_entries = (unsigned int)1;
              synvec_chain[(signed long int)vzt_rd_vectorize__1__2__2__1__1__j]->chain[(signed long int)0] = i;
            }

            lt->flags[(signed long int)i] = lt->flags[(signed long int)i] | (unsigned int)(1 << 17);
            lt->flags[(signed long int)i] = lt->flags[(signed long int)i] & (unsigned int)~(1 << 3);
            lt->numrealfacs = i + (unsigned int)1;
            num_synvecs = num_synvecs + 1;
          }
        }

      }


    __CPROVER_DUMP_L40:
      ;
    }
    i = (unsigned int)0;
    for( ; !(i >= lt->numfacs); i = i + 1u)
      if(!(synvec_chain[(signed long int)i] == ((struct vzt_synvec_chain *)NULL)))
        free((void *)synvec_chain[(signed long int)i]);

    free((void *)synvec_chain);
    fprintf(stderr, "VZTLOAD | %d facilities (after vectorization)\n", num_after_combine);
    if(!(num_synvecs == 0))
    {
      fprintf(stderr, "VZTLOAD | %d complex vectors synthesized\n", num_synvecs);
      if(!(num_synalias == 0))
        fprintf(stderr, "VZTLOAD | %d complex aliases synthesized\n", num_synalias);

    }

    fprintf(stderr, "VZTLOAD | \n");
    if(!(lt->longest_len == old_longest_len))
    {
      free((void *)lt->value_current_sector);
      free((void *)lt->value_previous_sector);
      void *return_value_malloc_15;
      return_value_malloc_15=malloc((unsigned long int)(lt->longest_len + (unsigned int)1));
      lt->value_current_sector = (char *)return_value_malloc_15;
      void *return_value_malloc_16;
      return_value_malloc_16=malloc((unsigned long int)(lt->longest_len + (unsigned int)1));
      lt->value_previous_sector = (char *)return_value_malloc_16;
    }

  }

__CPROVER_DUMP_L47:
  ;
}

