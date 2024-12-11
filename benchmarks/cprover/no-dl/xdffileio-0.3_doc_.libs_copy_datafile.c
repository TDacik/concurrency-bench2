// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_0;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_3;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_1;

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

// tag-convertion_data
// file xdffile.h line 89
struct convertion_data;

// tag-convprm
// file xdftypes.h line 63
struct convprm;

// tag-data_batch
// file xdffile.h line 91
struct data_batch;

// tag-data_information
// file xdftypes.h line 39
struct data_information;

// tag-dataformat_entry
// file formatdecl.c line 29
struct dataformat_entry;

// tag-ebdf_channel
// file ebdffile.c line 54
struct ebdf_channel;

// tag-ebdf_file
// file ebdffile.c line 64
struct ebdf_file;

// tag-eventbatch
// file xdfevent.h line 29
struct eventbatch;

// tag-evententry
// file xdfevent.h line 34
struct evententry;

// tag-eventtable
// file xdffile.h line 95
struct eventtable;

// tag-format_operations
// file xdffile.h line 48
struct format_operations;

// tag-gdf1_channel
// file gdf1.c line 59
struct gdf1_channel;

// tag-gdf1_file
// file gdf1.c line 69
struct gdf1_file;

// tag-gdf2_channel
// file gdf2.c line 58
struct gdf2_channel;

// tag-gdf2_file
// file gdf2.c line 72
struct gdf2_file;

// tag-generic_data
// file xdftypes.h line 47
union generic_data;

// tag-opt_detail
// file xdfconfig.c line 41
struct opt_detail;

// tag-optval
// file xdffile.h line 38
union optval;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-scaling_param
// file xdftypes.h line 52
struct scaling_param;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-ui24
// file xdftypes.c line 31
union ui24;

// tag-xdf
// file xdfio.h line 117
struct xdf;

// tag-xdfch
// file xdfio.h line 118
struct xdfch;

// tag-xdfevent
// file xdfevent.h line 24
struct xdfevent;

// tag-xdffield
// file ../src/xdfio.h line 60
enum xdffield { XDF_NOF=0, XDF_F_REC_DURATION=1, XDF_F_REC_NSAMPLE=2, XDF_F_SAMPLING_FREQ=3, XDF_F_NCHANNEL=4, XDF_F_FILEFMT=5, XDF_F_NEVTTYPE=6, XDF_F_NEVENT=7, XDF_F_SUBJ_DESC=5000, XDF_F_SESS_DESC=5001, XDF_F_RECTIME=5002, XDF_F_ADDICTION=5003, XDF_F_BIRTHDAY=5004, XDF_F_HEIGHT=5005, XDF_F_WEIGHT=5006, XDF_F_GENDER=5007, XDF_F_HANDNESS=5008, XDF_F_VISUAL_IMP=5009, XDF_F_HEART_IMP=5010, XDF_F_LOCATION=5011, XDF_F_ICD_CLASS=5012, XDF_F_HEADSIZE=5013, XDF_F_REF_POS=5014, XDF_F_GND_POS=5015, XDF_CF_ARRINDEX=10001, XDF_CF_ARROFFSET=10002, XDF_CF_ARRDIGITAL=10003, XDF_CF_ARRTYPE=10004, XDF_CF_STOTYPE=10005, XDF_CF_LABEL=10006, XDF_CF_PMIN=10007, XDF_CF_PMAX=10008, XDF_CF_DMIN=10009, XDF_CF_DMAX=10010, XDF_CF_UNIT=20000, XDF_CF_TRANSDUCTER=20001, XDF_CF_PREFILTERING=20002, XDF_CF_RESERVED=20003, XDF_CF_ELECPOS=20004, XDF_CF_IMPEDANCE=20005 };

// tag-xdffiletype
// file ../src/xdfio.h line 46
enum xdffiletype { XDF_ANY=0, XDF_EDF=1, XDF_EDFP=2, XDF_BDF=3, XDF_GDF1=4, XDF_GDF2=5, XDF_NUM_FILE_TYPES=6 };

// tag-xdftype
// file xdfio.h line 29
enum xdftype { XDFINT8=0, XDFUINT8=1, XDFINT16=2, XDFUINT16=3, XDFINT24=4, XDFUINT24=5, XDFINT32=6, XDFUINT32=7, XDFFLOAT=8, XDFDOUBLE=9, XDFINT64=10, XDFUINT64=11, XDF_NUM_DATA_TYPES=12 };

#include <assert.h>
#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// add_event
// file xdfevent.h line 49
signed int add_event(struct eventtable *table, struct xdfevent *evt);
// add_event_entry
// file xdfevent.h line 52
signed int add_event_entry(struct eventtable *table, signed int code, const char *label);
// add_to_batch
// file xdffile.c line 317
static signed int add_to_batch(struct data_batch *curr, struct xdfch *ch, signed int foff);
// alloc_ebdffile
// file ebdffile.c line 167
static struct xdf * alloc_ebdffile(struct format_operations *ops, struct ebdf_channel *defch);
// alloc_transfer_objects
// file xdffile.c line 435
static signed int alloc_transfer_objects(struct xdf *xdf);
// block_signals
// file xdffile.c line 46
static void block_signals(struct anonymous_0 *oldmask);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// complete_file_content
// file xdffile.c line 630
static signed int complete_file_content(struct xdf *xdf);
// compute_batches
// file xdffile.c line 366
static signed int compute_batches(struct xdf *xdf, signed int assign);
// compute_sample_size
// file xdffile.c line 411
static unsigned int compute_sample_size(struct xdf *xdf, signed int inmem);
// conv_d_d
// file xdftypes.c line 240
static void conv_d_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_f
// file xdftypes.c line 210
static void conv_d_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_i16
// file xdftypes.c line 188
static void conv_d_i16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_i24
// file xdftypes.c line 252
static void conv_d_i24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_i32
// file xdftypes.c line 190
static void conv_d_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_i64
// file xdftypes.c line 225
static void conv_d_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_i8
// file xdftypes.c line 186
static void conv_d_i8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_u16
// file xdftypes.c line 194
static void conv_d_u16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_u24
// file xdftypes.c line 253
static void conv_d_u24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_u32
// file xdftypes.c line 196
static void conv_d_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_u64
// file xdftypes.c line 229
static void conv_d_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_d_u8
// file xdftypes.c line 192
static void conv_d_u8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_d
// file xdftypes.c line 209
static void conv_f_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_f
// file xdftypes.c line 239
static void conv_f_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_i16
// file xdftypes.c line 200
static void conv_f_i16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_i24
// file xdftypes.c line 248
static void conv_f_i24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_i32
// file xdftypes.c line 202
static void conv_f_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_i64
// file xdftypes.c line 223
static void conv_f_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_i8
// file xdftypes.c line 198
static void conv_f_i8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_u16
// file xdftypes.c line 206
static void conv_f_u16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_u24
// file xdftypes.c line 249
static void conv_f_u24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_u32
// file xdftypes.c line 208
static void conv_f_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_u64
// file xdftypes.c line 227
static void conv_f_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_f_u8
// file xdftypes.c line 204
static void conv_f_u8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i16_d
// file xdftypes.c line 187
static void conv_i16_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i16_f
// file xdftypes.c line 199
static void conv_i16_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i16_i32
// file xdftypes.c line 236
static void conv_i16_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i16_i64
// file xdftypes.c line 213
static void conv_i16_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i24_d
// file xdftypes.c line 254
static void conv_i24_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i24_f
// file xdftypes.c line 250
static void conv_i24_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i24_i32
// file xdftypes.c line 246
static void conv_i24_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i24_i64
// file xdftypes.c line 243
static void conv_i24_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i32_d
// file xdftypes.c line 189
static void conv_i32_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i32_f
// file xdftypes.c line 201
static void conv_i32_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i32_i16
// file xdftypes.c line 235
static void conv_i32_i16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i32_i64
// file xdftypes.c line 215
static void conv_i32_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i64_d
// file xdftypes.c line 226
static void conv_i64_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i64_f
// file xdftypes.c line 224
static void conv_i64_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i64_i16
// file xdftypes.c line 214
static void conv_i64_i16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i64_i32
// file xdftypes.c line 216
static void conv_i64_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i64_i8
// file xdftypes.c line 212
static void conv_i64_i8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i8_d
// file xdftypes.c line 185
static void conv_i8_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i8_f
// file xdftypes.c line 197
static void conv_i8_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_i8_i64
// file xdftypes.c line 211
static void conv_i8_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u16_d
// file xdftypes.c line 193
static void conv_u16_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u16_f
// file xdftypes.c line 205
static void conv_u16_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u16_u32
// file xdftypes.c line 238
static void conv_u16_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u16_u64
// file xdftypes.c line 219
static void conv_u16_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u24_d
// file xdftypes.c line 255
static void conv_u24_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u24_f
// file xdftypes.c line 251
static void conv_u24_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u24_u32
// file xdftypes.c line 247
static void conv_u24_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u24_u64
// file xdftypes.c line 244
static void conv_u24_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u32_d
// file xdftypes.c line 195
static void conv_u32_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u32_f
// file xdftypes.c line 207
static void conv_u32_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u32_u16
// file xdftypes.c line 237
static void conv_u32_u16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u32_u64
// file xdftypes.c line 221
static void conv_u32_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u64_d
// file xdftypes.c line 230
static void conv_u64_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u64_f
// file xdftypes.c line 228
static void conv_u64_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u64_u16
// file xdftypes.c line 220
static void conv_u64_u16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u64_u32
// file xdftypes.c line 222
static void conv_u64_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u64_u8
// file xdftypes.c line 218
static void conv_u64_u8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u8_d
// file xdftypes.c line 191
static void conv_u8_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u8_f
// file xdftypes.c line 203
static void conv_u8_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_u8_u64
// file xdftypes.c line 217
static void conv_u8_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_ui16_ui16
// file xdftypes.c line 232
static void conv_ui16_ui16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_ui24_ui24
// file xdftypes.c line 257
static void conv_ui24_ui24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_ui32_ui24
// file xdftypes.c line 245
static void conv_ui32_ui24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_ui32_ui32
// file xdftypes.c line 233
static void conv_ui32_ui32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_ui64_ui24
// file xdftypes.c line 242
static void conv_ui64_ui24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_ui64_ui64
// file xdftypes.c line 234
static void conv_ui64_ui64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// conv_ui8_ui8
// file xdftypes.c line 231
static void conv_ui8_ui8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts);
// convert_recduration
// file gdf1.c line 347
static void convert_recduration(double len, unsigned int *ratio);
// convert_recduration_link1
// file gdf2.c line 459
static void convert_recduration_link1(double len_link1, unsigned int *ratio_link1);
// copy_configuration
// file example/copy_datafile.c line 47
signed int copy_configuration(struct xdf *dst, struct xdf *src);
// copy_datastream
// file example/copy_datafile.c line 74
signed int copy_datastream(struct xdf *dst, struct xdf *src);
// copy_eventtable
// file example/copy_datafile.c line 109
signed int copy_eventtable(struct xdf *dst, struct xdf *src);
// copy_xdf
// file example/copy_datafile.c line 127
signed int copy_xdf(const char *genfilename, const char *reffilename, signed int dstfmt);
// create_event_table
// file xdfevent.c line 119
struct eventtable * create_event_table(void);
// create_read_xdf
// file xdfconfig.c line 260
static struct xdf * create_read_xdf(enum xdffiletype type, const char *filename);
// create_write_xdf
// file xdfconfig.c line 313
static struct xdf * create_write_xdf(enum xdffiletype type, const char *filename);
// destroy_event_table
// file xdfevent.h line 48
void destroy_event_table(struct eventtable *table);
// disk_transfer
// file xdffile.c line 267
static signed int disk_transfer(struct xdf *xdf);
// dup
// file /usr/include/unistd.h line 531
extern signed int dup(signed int);
// dup_cloexec
// file streamops.c line 35
signed int dup_cloexec(signed int fd);
// ebdf_complete_file
// file ebdffile.c line 626
static signed int ebdf_complete_file(struct xdf *xdf);
// ebdf_get_channel
// file ebdffile.c line 271
static signed int ebdf_get_channel(struct xdfch *ch, enum xdffield field, union optval *val, signed int prevretval);
// ebdf_get_conf
// file ebdffile.c line 332
static signed int ebdf_get_conf(struct xdf *xdf, enum xdffield field, union optval *val, signed int prevretval);
// ebdf_read_channels_header
// file ebdffile.c line 528
static signed int ebdf_read_channels_header(struct ebdf_file *ebdf, struct _IO_FILE *file);
// ebdf_read_file_header
// file ebdffile.c line 486
static signed int ebdf_read_file_header(struct ebdf_file *bdf, struct _IO_FILE *file);
// ebdf_read_header
// file ebdffile.c line 591
static signed int ebdf_read_header(struct xdf *xdf);
// ebdf_set_channel
// file ebdffile.c line 238
static signed int ebdf_set_channel(struct xdfch *ch, enum xdffield field, union optval val, signed int prevretval);
// ebdf_set_conf
// file ebdffile.c line 304
static signed int ebdf_set_conf(struct xdf *xdf, enum xdffield field, union optval val, signed int prevretval);
// ebdf_write_channels_header
// file ebdffile.c line 404
static signed int ebdf_write_channels_header(struct ebdf_file *bdf, struct _IO_FILE *file);
// ebdf_write_file_header
// file ebdffile.c line 361
static signed int ebdf_write_file_header(struct ebdf_file *ebdf, struct _IO_FILE *file);
// ebdf_write_header
// file ebdffile.c line 459
static signed int ebdf_write_header(struct xdf *xdf);
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
// find_entry
// file xdfevent.c line 31
static signed int find_entry(struct eventtable *table, signed int code, const char *s);
// find_match
// file xdftypes.c line 507
static _Bool find_match(enum xdftype *match, struct data_information *tinfo, const enum xdftype *tp, signed int ntypes, unsigned int criterions);
// finish_record
// file xdffile.c line 590
static signed int finish_record(struct xdf *xdf);
// finish_transfer_thread
// file xdffile.c line 562
static signed int finish_transfer_thread(struct xdf *xdf);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_transfer_objects
// file xdffile.c line 458
static void free_transfer_objects(struct xdf *xdf);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// fseek
// file /usr/include/stdio.h line 749
extern signed int fseek(struct _IO_FILE *, signed long int, signed int);
// fsync
// file /usr/include/unistd.h line 956
extern signed int fsync(signed int);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// gdf1_complete_file
// file gdf1.c line 874
static signed int gdf1_complete_file(struct xdf *xdf);
// gdf1_get_channel
// file gdf1.c line 264
static signed int gdf1_get_channel(struct xdfch *ch, enum xdffield field, union optval *val, signed int prevretval);
// gdf1_get_conf
// file gdf1.c line 325
static signed int gdf1_get_conf(struct xdf *xdf, enum xdffield field, union optval *val, signed int prevretval);
// gdf1_interpret_events
// file gdf1.c line 767
static signed int gdf1_interpret_events(struct gdf1_file *gdf1, unsigned int nevent, double fs, unsigned int *pos, unsigned short int *code, unsigned short int *channel, unsigned int *dur);
// gdf1_read_channels_header
// file gdf1.c line 650
static signed int gdf1_read_channels_header(struct gdf1_file *gdf1, struct _IO_FILE *file);
// gdf1_read_event_hdr
// file gdf1.c line 736
static signed int gdf1_read_event_hdr(struct gdf1_file *gdf1, struct _IO_FILE *file, unsigned int *nevent, unsigned char *mode, double *fs);
// gdf1_read_event_table
// file gdf1.c line 797
static signed int gdf1_read_event_table(struct gdf1_file *gdf1, struct _IO_FILE *file);
// gdf1_read_file_header
// file gdf1.c line 585
static signed int gdf1_read_file_header(struct gdf1_file *gdf1, struct _IO_FILE *file);
// gdf1_read_header
// file gdf1.c line 837
static signed int gdf1_read_header(struct xdf *xdf);
// gdf1_set_channel
// file gdf1.c line 231
static signed int gdf1_set_channel(struct xdfch *ch, enum xdffield field, union optval val, signed int prevretval);
// gdf1_set_conf
// file gdf1.c line 297
static signed int gdf1_set_conf(struct xdf *xdf, enum xdffield field, union optval val, signed int prevretval);
// gdf1_setup_events
// file gdf1.c line 503
static signed int gdf1_setup_events(struct eventtable *table, double fs, unsigned char *mode, unsigned int *pos, unsigned short int *code, unsigned short int *ch, unsigned int *dur);
// gdf1_write_channels_header
// file gdf1.c line 413
static signed int gdf1_write_channels_header(struct gdf1_file *gdf1, struct _IO_FILE *file);
// gdf1_write_event_table
// file gdf1.c line 536
static signed int gdf1_write_event_table(struct gdf1_file *gdf1, struct _IO_FILE *file);
// gdf1_write_file_header
// file gdf1.c line 366
static signed int gdf1_write_file_header(struct gdf1_file *gdf1, struct _IO_FILE *file);
// gdf1_write_header
// file gdf1.c line 480
static signed int gdf1_write_header(struct xdf *xdf);
// gdf2_complete_file
// file gdf2.c line 1028
static signed int gdf2_complete_file(struct xdf *xdf);
// gdf2_get_channel
// file gdf2.c line 316
static signed int gdf2_get_channel(struct xdfch *ch, enum xdffield field, union optval *val, signed int prevretval);
// gdf2_get_conf
// file gdf2.c line 409
static signed int gdf2_get_conf(struct xdf *xdf, enum xdffield field, union optval *val, signed int prevretval);
// gdf2_interpret_events
// file gdf2.c line 921
static signed int gdf2_interpret_events(struct gdf2_file *gdf2, unsigned int nevent, double fs, unsigned int *pos, unsigned short int *code, unsigned short int *channel, unsigned int *dur);
// gdf2_read_channels_header
// file gdf2.c line 788
static signed int gdf2_read_channels_header(struct gdf2_file *gdf2, struct _IO_FILE *file);
// gdf2_read_event_hdr
// file gdf2.c line 890
static signed int gdf2_read_event_hdr(struct gdf2_file *gdf2, struct _IO_FILE *file, unsigned int *nevent, unsigned char *mode, float *fs);
// gdf2_read_event_table
// file gdf2.c line 951
static signed int gdf2_read_event_table(struct gdf2_file *gdf2, struct _IO_FILE *file);
// gdf2_read_file_header
// file gdf2.c line 722
static signed int gdf2_read_file_header(struct gdf2_file *gdf2, struct _IO_FILE *file);
// gdf2_read_header
// file gdf2.c line 991
static signed int gdf2_read_header(struct xdf *xdf);
// gdf2_set_channel
// file gdf2.c line 280
static signed int gdf2_set_channel(struct xdfch *ch, enum xdffield field, union optval val, signed int prevretval);
// gdf2_set_conf
// file gdf2.c line 353
static signed int gdf2_set_conf(struct xdf *xdf, enum xdffield field, union optval val, signed int prevretval);
// gdf2_setup_events
// file gdf2.c line 639
static signed int gdf2_setup_events(struct eventtable *table, double fs, unsigned char *mode, unsigned int *pos, unsigned short int *code, unsigned short int *ch, unsigned int *dur);
// gdf2_write_channels_header
// file gdf2.c line 529
static signed int gdf2_write_channels_header(struct gdf2_file *gdf2, struct _IO_FILE *file);
// gdf2_write_event_table
// file gdf2.c line 672
static signed int gdf2_write_event_table(struct gdf2_file *gdf2, struct _IO_FILE *file);
// gdf2_write_file_header
// file gdf2.c line 478
static signed int gdf2_write_file_header(struct gdf2_file *gdf2, struct _IO_FILE *file);
// gdf2_write_header
// file gdf2.c line 616
static signed int gdf2_write_header(struct xdf *xdf);
// gdf2time_to_time
// file gdf2.c line 132
static double gdf2time_to_time(unsigned long int gdf2time);
// get_closest_type
// file xdftypes.h line 82
enum xdftype get_closest_type(enum xdftype target, const _Bool *supported_type);
// get_event
// file xdfevent.h line 50
struct xdfevent * get_event(struct eventtable *table, unsigned int index);
// get_event_entry
// file xdfevent.c line 82
signed int get_event_entry(struct eventtable *table, unsigned int ind, signed int *code, const char **label);
// get_field_type
// file xdfconfig.c line 91
static signed int get_field_type(signed int field);
// get_xdfch_type
// file gdf1.c line 626
static enum xdftype get_xdfch_type(unsigned int gdf1type);
// get_xdfch_type_link1
// file gdf2.c line 764
static enum xdftype get_xdfch_type_link1(unsigned int gdf2type);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// init_file_content
// file xdffile.c line 612
static signed int init_file_content(struct xdf *xdf);
// init_transfer_thread
// file xdffile.c line 527
static signed int init_transfer_thread(struct xdf *xdf);
// init_xdf_struct
// file xdfconfig.c line 162
static void init_xdf_struct(struct xdf *xdf, signed int fd, signed int mode);
// interpret_type
// file example/copy_datafile.c line 167
signed int interpret_type(const char *req);
// link_batches
// file xdffile.c line 345
static void link_batches(struct xdf *xdf, unsigned int nb);
// localtime_r
// file /usr/include/time.h line 254
extern struct tm * localtime_r(const signed long int *, struct tm *);
// lseek
// file /usr/include/unistd.h line 334
extern signed long int lseek(signed int, signed long int, signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mktime
// file /usr/include/time.h line 199
extern signed long int mktime(struct tm *);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// open_cloexec
// file xdfconfig.c line 200
static signed int open_cloexec(const char *filename, signed int flags, unsigned int mode);
// print_usage
// file example/copy_datafile.c line 181
void print_usage(struct _IO_FILE *f, const char *execname);
// proceed_get_chconf
// file xdfconfig.c line 590
static signed int proceed_get_chconf(struct xdfch *ch, enum xdffield field, union optval *val);
// proceed_get_conf
// file xdfconfig.c line 822
static signed int proceed_get_conf(struct xdf *xdf, enum xdffield field, union optval *val);
// proceed_set_chconf
// file xdfconfig.c line 466
static signed int proceed_set_chconf(struct xdfch *ch, enum xdffield field, union optval val);
// proceed_set_conf
// file xdfconfig.c line 735
static signed int proceed_set_conf(struct xdf *xdf, enum xdffield field, union optval val);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_2 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_2 *, const union anonymous *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_2 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_2 *, union anonymous_1 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_1 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_1 *, const union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_1 *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous_0 *, struct anonymous_0 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// read16bval
// file streamops.c line 46
signed int read16bval(struct _IO_FILE *file, unsigned int num, void *value);
// read24bval
// file streamops.c line 79
signed int read24bval(struct _IO_FILE *file, unsigned int num, void *value);
// read32bval
// file streamops.c line 119
signed int read32bval(struct _IO_FILE *file, unsigned int num, void *value);
// read64bval
// file streamops.c line 152
signed int read64bval(struct _IO_FILE *file, unsigned int num, void *value);
// read_diskrec
// file xdffile.c line 168
static signed int read_diskrec(struct xdf *xdf);
// read_int_field
// file streamops.c line 187
signed int read_int_field(struct _IO_FILE *file, signed int *val, unsigned int nch);
// read_string_field
// file streamops.c line 205
signed int read_string_field(struct _IO_FILE *file, char *val, unsigned int nch);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// reset_batch
// file xdffile.c line 308
static void reset_batch(struct data_batch *batch, unsigned int iarray, unsigned int foff);
// scale_data_d
// file xdftypes.c line 118
static void scale_data_d(unsigned int ns, void *data, struct scaling_param *scaling);
// scale_data_f
// file xdftypes.c line 130
static void scale_data_f(unsigned int ns, void *data, struct scaling_param *scaling);
// set_arg_to_val
// file xdfconfig.c line 102
static signed int set_arg_to_val(signed int field, void ***ap, union optval *val);
// set_binary_mode
// file ../lib/binary-io.h line 53
inline signed int set_binary_mode(signed int fd, signed int mode);
// set_val_to_arg
// file xdfconfig.c line 127
static signed int set_val_to_arg(signed int field, union optval val, void ***ap);
// setup_convdata
// file xdffile.c line 477
static void setup_convdata(struct xdf *xdf);
// setup_read_xdf
// file xdfconfig.c line 232
static signed int setup_read_xdf(struct xdf *xdf, signed int fd);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous_0 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous_0 *);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// time_to_gdf2time
// file gdf2.c line 124
static unsigned long int time_to_gdf2time(double posixtime);
// transfer_thread_fn
// file xdffile.c line 220
static void * transfer_thread_fn(void *ptr);
// unblock_signals
// file xdffile.c line 54
static void unblock_signals(struct anonymous_0 *oldmask);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// write16bval
// file streamops.c line 61
signed int write16bval(struct _IO_FILE *file, unsigned int num, const void *value);
// write24bval
// file streamops.c line 98
signed int write24bval(struct _IO_FILE *file, unsigned int num, const void *value);
// write32bval
// file streamops.c line 134
signed int write32bval(struct _IO_FILE *file, unsigned int num, const void *value);
// write64bval
// file streamops.c line 167
signed int write64bval(struct _IO_FILE *file, unsigned int num, const void *value);
// write_diskrec
// file xdffile.c line 115
static signed int write_diskrec(struct xdf *xdf);
// xdf_add_channel
// file ../src/xdfio.h line 138
struct xdfch * xdf_add_channel(struct xdf *xdf, const char *label);
// xdf_add_event
// file ../src/xdfio.h line 131
signed int xdf_add_event(struct xdf *xdf, signed int evttype, double onset, double duration);
// xdf_add_evttype
// file ../src/xdfio.h line 128
signed int xdf_add_evttype(struct xdf *xdf, signed int code, const char *desc);
// xdf_alloc_bdffile
// file ebdf.h line 23
struct xdf * xdf_alloc_bdffile(void);
// xdf_alloc_channel
// file xdfconfig.c line 376
struct xdfch * xdf_alloc_channel(struct xdf *xdf);
// xdf_alloc_edffile
// file ebdf.h line 26
struct xdf * xdf_alloc_edffile(void);
// xdf_alloc_file
// file xdffile.h line 109
struct xdf * xdf_alloc_file(enum xdffiletype type);
// xdf_alloc_gdf1file
// file gdf1.h line 22
struct xdf * xdf_alloc_gdf1file(void);
// xdf_alloc_gdf2file
// file gdf2.h line 22
struct xdf * xdf_alloc_gdf2file(void);
// xdf_close
// file ../src/xdfio.h line 122
signed int xdf_close(struct xdf *xdf);
// xdf_closest_type
// file xdfconfig.c line 946
signed int xdf_closest_type(struct xdf *xdf, enum xdftype type);
// xdf_copy_chconf
// file ../src/xdfio.h line 141
signed int xdf_copy_chconf(struct xdfch *dst, struct xdfch *src);
// xdf_copy_conf
// file ../src/xdfio.h line 126
signed int xdf_copy_conf(struct xdf *dst, struct xdf *src);
// xdf_datinfo
// file xdftypes.h line 75
struct data_information * xdf_datinfo(enum xdftype type);
// xdf_define_arrays
// file ../src/xdfio.h line 143
signed int xdf_define_arrays(struct xdf *xdf, unsigned int numarrays, const unsigned long int *strides);
// xdf_get_channel
// file ../src/xdfio.h line 136
struct xdfch * xdf_get_channel(struct xdf *xdf, unsigned int index);
// xdf_get_chconf
// file xdfconfig.c line 643
signed int xdf_get_chconf(struct xdfch *ch, enum xdffield field, ...);
// xdf_get_conf
// file ../src/xdfio.h line 125
signed int xdf_get_conf(struct xdf *xdf, enum xdffield field, ...);
// xdf_get_datasize
// file xdftypes.h line 77
signed int xdf_get_datasize(enum xdftype type);
// xdf_get_event
// file ../src/xdfio.h line 133
signed int xdf_get_event(struct xdf *xdf, unsigned int index, unsigned int *evttype, double *start, double *dur);
// xdf_get_evttype
// file ../src/xdfio.h line 129
signed int xdf_get_evttype(struct xdf *xdf, unsigned int evttype, signed int *code, const char **desc);
// xdf_get_string
// file xdffile.c line 941
const char * xdf_get_string(void);
// xdf_guess_filetype
// file xdffile.h line 108
enum xdffiletype xdf_guess_filetype(const unsigned char *magickey);
// xdf_is_bdffile
// file ebdf.h line 24
signed int xdf_is_bdffile(const unsigned char *magickey);
// xdf_is_edffile
// file ebdf.h line 27
signed int xdf_is_edffile(const unsigned char *magickey);
// xdf_is_gdf1file
// file gdf1.h line 23
signed int xdf_is_gdf1file(const unsigned char *magickey);
// xdf_is_gdf2file
// file gdf2.h line 23
signed int xdf_is_gdf2file(const unsigned char *magickey);
// xdf_open
// file ../src/xdfio.h line 120
struct xdf * xdf_open(const char *filename, signed int mode, enum xdffiletype type);
// xdf_prepare_transfer
// file ../src/xdfio.h line 145
signed int xdf_prepare_transfer(struct xdf *xdf);
// xdf_read
// file ../src/xdfio.h line 148
signed long int xdf_read(struct xdf *xdf, unsigned long int ns, ...);
// xdf_seek
// file xdffile.c line 881
signed long int xdf_seek(struct xdf *xdf, signed long int offset, signed int whence);
// xdf_set_chconf
// file xdfconfig.c line 545
signed int xdf_set_chconf(struct xdfch *ch, enum xdffield field, ...);
// xdf_set_conf
// file xdfconfig.c line 778
signed int xdf_set_conf(struct xdf *xdf, enum xdffield field, ...);
// xdf_set_error
// file xdffile.c line 94
signed int xdf_set_error(signed int error);
// xdf_setup_transform
// file xdftypes.h line 78
signed int xdf_setup_transform(struct convprm *prm, signed int swaptype, unsigned int in_str, enum xdftype in_tp, const double *in_mm, unsigned int out_str, enum xdftype out_tp, const double *out_mm);
// xdf_transconv_data
// file xdftypes.h line 76
void xdf_transconv_data(unsigned int ns, void * restrict dst, void * restrict src, struct convprm *prm, void * restrict tmpbuff);
// xdf_write
// file ../src/xdfio.h line 147
signed long int xdf_write(struct xdf *xdf, unsigned long int ns, ...);

struct anonymous_0
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_3
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

union anonymous
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_2
{
  // __data
  struct anonymous_3 __data;
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

union anonymous_1
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

union generic_data
{
  // d
  double d;
  // f
  float f;
};

struct scaling_param
{
  // scale
  union generic_data scale;
  // offset
  union generic_data offset;
};

struct convprm
{
  // stride1
  unsigned int stride1;
  // stride2
  unsigned int stride2;
  // stride3
  unsigned int stride3;
  // scaling
  struct scaling_param scaling;
  // cvfn1
  void (*cvfn1)(unsigned int, void *, unsigned int, const void *, unsigned int);
  // scfn2
  void (*scfn2)(unsigned int, void *, struct scaling_param *);
  // cvfn3
  void (*cvfn3)(unsigned int, void *, unsigned int, const void *, unsigned int);
};

struct convertion_data
{
  // prm
  struct convprm prm;
  // filetypesize
  unsigned int filetypesize;
  // memtypesize
  unsigned int memtypesize;
  // skip
  signed int skip;
};

struct data_batch
{
  // len
  signed int len;
  // iarray
  signed int iarray;
  // foff
  signed int foff;
  // moff
  signed int moff;
  // mskip
  signed int mskip;
};

struct data_information
{
  // size
  unsigned char size;
  // is_int
  _Bool is_int;
  // is_signed
  _Bool is_signed;
  // lim
  double lim[2l];
};

struct dataformat_entry
{
  // type
  enum xdffiletype type;
  // alloc_file
  struct xdf * (*alloc_file)(void);
  // is_same_type
  signed int (*is_same_type)(const unsigned char *);
};

struct xdfch
{
  // iarray
  signed int iarray;
  // offset
  signed int offset;
  // digital_inmem
  signed int digital_inmem;
  // inmemtype
  enum xdftype inmemtype;
  // infiletype
  enum xdftype infiletype;
  // physical_mm
  double physical_mm[2l];
  // digital_mm
  double digital_mm[2l];
  // next
  struct xdfch *next;
  // owner
  struct xdf *owner;
};

struct ebdf_channel
{
  // xdfch
  struct xdfch xdfch;
  // label
  char label[17l];
  // transducter
  char transducter[81l];
  // unit
  char unit[9l];
  // prefiltering
  char prefiltering[81l];
  // reserved
  char reserved[33l];
};

struct xdf
{
  // fd
  signed int fd;
  // hdr_offset
  signed long int hdr_offset;
  // ready
  unsigned int ready;
  // mode
  unsigned int mode;
  // pointer
  signed long int pointer;
  // rec_duration
  double rec_duration;
  // ns_buff
  unsigned int ns_buff;
  // ns_per_rec
  unsigned int ns_per_rec;
  // sample_size
  unsigned int sample_size;
  // filerec_size
  unsigned int filerec_size;
  // nrecord
  signed int nrecord;
  // nrecread
  signed int nrecread;
  // buff
  char *buff;
  // backbuff
  char *backbuff;
  // tmpbuff
  void *tmpbuff[2l];
  // reportval
  signed int reportval;
  // numch
  unsigned int numch;
  // channels
  struct xdfch *channels;
  // convdata
  struct convertion_data *convdata;
  // nbatch
  unsigned int nbatch;
  // batch
  struct data_batch *batch;
  // narrays
  unsigned int narrays;
  // array_stride
  unsigned long int *array_stride;
  // table
  struct eventtable *table;
  // defaultch
  struct xdfch *defaultch;
  // ops
  struct format_operations *ops;
  // thid
  unsigned long int thid;
  // mtx
  union anonymous_1 mtx;
  // cond
  union anonymous_2 cond;
  // order
  signed int order;
};

struct ebdf_file
{
  // xdf
  struct xdf xdf;
  // default_ebdfch
  struct ebdf_channel default_ebdfch;
  // subjstr
  char subjstr[81l];
  // recstr
  char recstr[81l];
  // rectime
  signed long int rectime;
};

struct xdfevent
{
  // onset
  double onset;
  // duration
  double duration;
  // evttype
  signed int evttype;
};

struct eventbatch
{
  // evt
  struct xdfevent evt[50l];
  // next
  struct eventbatch *next;
};

struct evententry
{
  // code
  signed int code;
  // label
  char *label;
};

struct eventtable
{
  // nentry
  unsigned int nentry;
  // entry
  struct evententry *entry;
  // nevent
  unsigned int nevent;
  // first
  struct eventbatch *first;
  // last
  struct eventbatch *last;
};

struct format_operations
{
  // set_channel
  signed int (*set_channel)(struct xdfch *, enum xdffield, union optval, signed int);
  // get_channel
  signed int (*get_channel)(struct xdfch *, enum xdffield, union optval *, signed int);
  // set_conf
  signed int (*set_conf)(struct xdf *, enum xdffield, union optval, signed int);
  // get_conf
  signed int (*get_conf)(struct xdf *, enum xdffield, union optval *, signed int);
  // write_header
  signed int (*write_header)(struct xdf *);
  // read_header
  signed int (*read_header)(struct xdf *);
  // complete_file
  signed int (*complete_file)(struct xdf *);
  // type
  enum xdffiletype type;
  // supported_type
  _Bool supported_type[12l];
  // choff
  signed int choff;
  // fileoff
  signed int fileoff;
  // chlen
  unsigned long int chlen;
  // filelen
  unsigned long int filelen;
  // chfields
  const enum xdffield *chfields;
  // filefields
  const enum xdffield *filefields;
};

struct gdf1_channel
{
  // xdfch
  struct xdfch xdfch;
  // label
  char label[17l];
  // transducter
  char transducter[81l];
  // unit
  char unit[9l];
  // prefiltering
  char prefiltering[81l];
  // reserved
  char reserved[33l];
};

struct gdf1_file
{
  // xdf
  struct xdf xdf;
  // default_gdf1ch
  struct gdf1_channel default_gdf1ch;
  // subjstr
  char subjstr[81l];
  // recstr
  char recstr[81l];
  // rectime
  signed long int rectime;
  // epid
  unsigned long int epid;
  // lid
  unsigned long int lid;
  // tid
  unsigned long int tid;
  // sn
  char sn[21l];
  // version
  unsigned int version;
};

struct gdf2_channel
{
  // xdfch
  struct xdfch xdfch;
  // label
  char label[17l];
  // transducter
  char transducter[81l];
  // unit
  char unit[7l];
  // dimcode
  unsigned short int dimcode;
  // filtering
  char filtering[69l];
  // lp
  float lp;
  // hp
  float hp;
  // sp
  float sp;
  // pos
  float pos[3l];
  // impedance
  unsigned char impedance;
  // reserved
  char reserved[20l];
};

struct gdf2_file
{
  // xdf
  struct xdf xdf;
  // default_gdf2ch
  struct gdf2_channel default_gdf2ch;
  // subjstr
  char subjstr[67l];
  // addiction
  unsigned char addiction;
  // weight
  unsigned char weight;
  // height
  unsigned char height;
  // ghv
  unsigned char ghv;
  // recstr
  char recstr[65l];
  // location
  signed int location[4l];
  // rectime
  unsigned long int rectime;
  // birthday
  unsigned long int birthday;
  // pclass
  unsigned char pclass[6l];
  // headsize
  unsigned short int headsize[3l];
  // refpos
  float refpos[3l];
  // gndpos
  float gndpos[3l];
  // epid
  unsigned long int epid;
  // version
  unsigned int version;
};

struct opt_detail
{
  // field
  signed int field;
  // type
  unsigned int type;
};

union optval
{
  // i
  signed int i;
  // str
  const char *str;
  // type
  enum xdftype type;
  // d
  double d;
  // ui
  unsigned int ui;
  // icd
  char icd[6l];
  // pos
  double pos[3l];
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

union ui24
{
  // i32
  signed int i32;
  // u32
  unsigned int u32;
  // p24
  unsigned char p24[4l];
};


// bdf_magickey
// file ebdffile.c line 129
static const unsigned char bdf_magickey[8l] = { (const unsigned char)255, (const unsigned char)66, (const unsigned char)73, (const unsigned char)79, (const unsigned char)83, (const unsigned char)69, (const unsigned char)77, (const unsigned char)73 };
// bdf_ops
// file ebdffile.c line 111
static struct format_operations bdf_ops;
// ch_supported_fields
// file ebdffile.c line 84
static const enum xdffield ch_supported_fields[15l] = { (const enum xdffield)10004, (const enum xdffield)10007, (const enum xdffield)10008, (const enum xdffield)10005, (const enum xdffield)10009, (const enum xdffield)10010, (const enum xdffield)10003, (const enum xdffield)10002, (const enum xdffield)10001, (const enum xdffield)10006, (const enum xdffield)20000, (const enum xdffield)20001, (const enum xdffield)20002, (const enum xdffield)20003, (const enum xdffield)0 };
// file_supported_fields
// file ebdffile.c line 102
static const enum xdffield file_supported_fields[6l] = { (const enum xdffield)1, (const enum xdffield)2, (const enum xdffield)5000, (const enum xdffield)5001, (const enum xdffield)5002, (const enum xdffield)0 };
// bdf_ops
// file ebdffile.c line 111
static struct format_operations bdf_ops = { .set_channel=ebdf_set_channel, .get_channel=ebdf_get_channel, .set_conf=ebdf_set_conf,
    .get_conf=ebdf_get_conf, .write_header=ebdf_write_header,
    .read_header=ebdf_read_header, .complete_file=ebdf_complete_file,
    .type=(enum xdffiletype)3, .supported_type={ (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)1, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0 },
    .choff=(signed int)0ul,
    .fileoff=(signed int)0ul, .chlen=sizeof(struct ebdf_channel) /*296ul*/ ,
    .filelen=sizeof(struct ebdf_file) /*752ul*/ ,
    .chfields=ch_supported_fields,
    .filefields=file_supported_fields };
// bdfch_def
// file ebdffile.c line 132
static struct ebdf_channel bdfch_def = { .xdfch={ .iarray=0, .offset=0, .digital_inmem=0, .inmemtype=(enum xdftype)0,
    .infiletype=(enum xdftype)4, .physical_mm={ 0.000000, 0.000000 },
    .digital_mm={ 0.000000, 0.000000 },
    .next=((struct xdfch *)NULL), .owner=((struct xdf *)NULL) }, .label={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .transducter={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .unit={ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .prefiltering={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .reserved={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
// convtable
// file xdftypes.c line 274
static void (* const convtable[12l][12l])(unsigned int, void *, unsigned int, const void *, unsigned int);
// convtable
// file xdftypes.c line 274
static void (* const convtable[12l][12l])(unsigned int, void *, unsigned int, const void *, unsigned int) = { { conv_ui8_ui8, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i8_f, conv_i8_d, conv_i8_i64, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL) },
    { ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui8_ui8, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u8_f, conv_u8_d, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u8_u64 },
    { ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui16_ui16, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i16_i32, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i16_f, conv_i16_d, conv_i16_i64, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL) },
    { ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui16_ui16, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u16_u32, conv_u16_f, conv_u16_d, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u16_u64 },
    { ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui24_ui24, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i24_i32, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i24_f, conv_i24_d, conv_i24_i64, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL) },
    { ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui24_ui24, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u24_u32, conv_u24_f, conv_u24_d, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u24_u64 },
    { ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i32_i16, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui32_ui24, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui32_ui32, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i32_f, conv_i32_d, conv_i32_i64, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL) },
    { ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u32_u16, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui32_ui24, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui32_ui32, conv_u32_f, conv_u32_d, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u32_u64 },
    { conv_f_i8, conv_f_u8, conv_f_i16, conv_f_u16, conv_f_i24, conv_f_u24, conv_f_i32, conv_f_u32, conv_f_f, conv_f_d, conv_f_i64, conv_f_u64 },
    { conv_d_i8, conv_d_u8, conv_d_i16, conv_d_u16, conv_d_i24, conv_d_u24, conv_d_i32, conv_d_u32, conv_d_f, conv_d_d, conv_d_i64, conv_d_u64 },
    { conv_i64_i8, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i64_i16, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui64_ui24, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i64_i32, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_i64_f, conv_i64_d, conv_ui64_ui64, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL) },
    { ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u64_u8, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u64_u16, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui64_ui24, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_u64_u32, conv_u64_f, conv_u64_d, ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL),
    conv_ui64_ui64 } };
// data_info
// file xdftypes.c line 88
static struct data_information data_info[12l] = { { .size=(unsigned char)sizeof(signed char) /*1ul*/ , .is_int=(_Bool)1,
    .is_signed=(_Bool)0, .lim={ (double)-128, (double)127 } },
    { .size=(unsigned char)sizeof(unsigned char) /*1ul*/ , .is_int=(_Bool)1,
    .is_signed=(_Bool)0, .lim={ (double)0, (double)255 } },
    { .size=(unsigned char)sizeof(signed short int) /*2ul*/ , .is_int=(_Bool)1,
    .is_signed=(_Bool)1, .lim={ (double)(-32767 - 1), (double)32767 } },
    { .size=(unsigned char)sizeof(unsigned short int) /*2ul*/ , .is_int=(_Bool)1,
    .is_signed=(_Bool)0, .lim={ (double)0, (double)65535 } },
    { .size=(unsigned char)3, .is_int=(_Bool)1, .is_signed=(_Bool)1,
    .lim={ (double)-8388608, (double)8388607 } },
    { .size=(unsigned char)3, .is_int=(_Bool)1, .is_signed=(_Bool)0,
    .lim={ (double)0, (double)16777216 } },
    { .size=(unsigned char)sizeof(signed int) /*4ul*/ , .is_int=(_Bool)1,
    .is_signed=(_Bool)1, .lim={ (double)(-2147483647 - 1), (double)2147483647 } },
    { .size=(unsigned char)sizeof(unsigned int) /*4ul*/ , .is_int=(_Bool)1,
    .is_signed=(_Bool)0, .lim={ (double)0, (double)4294967295U } },
    { .size=(unsigned char)sizeof(float) /*4ul*/ , .is_int=(_Bool)0,
    .is_signed=(_Bool)1, .lim={ (double)-3.40282346638528859812e+38F, (double)3.40282346638528859812e+38F } },
    { .size=(unsigned char)sizeof(double) /*8ul*/ , .is_int=(_Bool)0,
    .is_signed=(_Bool)1, .lim={ -((double)1.79769313486231570815e+308L),
    (double)1.79769313486231570815e+308L } },
    { .size=(unsigned char)sizeof(signed long int) /*8ul*/ , .is_int=(_Bool)1,
    .is_signed=(_Bool)1, .lim={ (double)(-9223372036854775807L - (signed long int)1),
    (double)9223372036854775807L } },
    { .size=(unsigned char)sizeof(unsigned long int) /*8ul*/ , .is_int=(_Bool)1,
    .is_signed=(_Bool)0, .lim={ (double)0, (double)18446744073709551615UL } } };
// edf_magickey
// file ebdffile.c line 154
static const unsigned char edf_magickey[8l] = { (const unsigned char)48, (const unsigned char)32, (const unsigned char)32, (const unsigned char)32, (const unsigned char)32, (const unsigned char)32, (const unsigned char)32, (const unsigned char)32 };
// edf_ops
// file ebdffile.c line 136
static struct format_operations edf_ops;
// edf_ops
// file ebdffile.c line 136
static struct format_operations edf_ops = { .set_channel=ebdf_set_channel, .get_channel=ebdf_get_channel, .set_conf=ebdf_set_conf,
    .get_conf=ebdf_get_conf, .write_header=ebdf_write_header,
    .read_header=ebdf_read_header, .complete_file=ebdf_complete_file,
    .type=(enum xdffiletype)1, .supported_type={ (_Bool)0, (_Bool)0, (_Bool)1, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0, (_Bool)0 },
    .choff=(signed int)0ul,
    .fileoff=(signed int)0ul, .chlen=sizeof(struct ebdf_channel) /*296ul*/ ,
    .filelen=sizeof(struct ebdf_file) /*752ul*/ ,
    .chfields=ch_supported_fields,
    .filefields=file_supported_fields };
// edfch_def
// file ebdffile.c line 157
static struct ebdf_channel edfch_def = { .xdfch={ .iarray=0, .offset=0, .digital_inmem=0, .inmemtype=(enum xdftype)0,
    .infiletype=(enum xdftype)2, .physical_mm={ 0.000000, 0.000000 },
    .digital_mm={ 0.000000, 0.000000 },
    .next=((struct xdfch *)NULL), .owner=((struct xdf *)NULL) }, .label={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .transducter={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .unit={ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .prefiltering={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .reserved={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
// field_table
// file xdfconfig.c line 47
static struct opt_detail field_table[38l] = { { .field=1, .type=(unsigned int)2 }, { .field=2, .type=(unsigned int)0 }, { .field=3, .type=(unsigned int)0 }, { .field=4, .type=(unsigned int)0 }, { .field=5, .type=(unsigned int)0 }, { .field=6, .type=(unsigned int)0 }, { .field=7, .type=(unsigned int)0 }, { .field=5000, .type=(unsigned int)3 }, { .field=5001, .type=(unsigned int)3 }, { .field=5002, .type=(unsigned int)2 }, { .field=5004, .type=(unsigned int)2 }, { .field=5003, .type=(unsigned int)1 }, { .field=5005, .type=(unsigned int)2 }, { .field=5006, .type=(unsigned int)2 }, { .field=5007, .type=(unsigned int)1 }, { .field=5008, .type=(unsigned int)1 }, { .field=5009, .type=(unsigned int)1 }, { .field=5011, .type=(unsigned int)5 }, { .field=5012, .type=(unsigned int)6 }, { .field=5013, .type=(unsigned int)5 }, { .field=5014, .type=(unsigned int)5 }, { .field=5015, .type=(unsigned int)5 }, { .field=10001, .type=(unsigned int)0 },
    { .field=10002, .type=(unsigned int)0 },
    { .field=10003, .type=(unsigned int)0 },
    { .field=10004, .type=(unsigned int)4 },
    { .field=10005, .type=(unsigned int)4 },
    { .field=10006, .type=(unsigned int)3 },
    { .field=10007, .type=(unsigned int)2 },
    { .field=10008, .type=(unsigned int)2 },
    { .field=10009, .type=(unsigned int)2 },
    { .field=10010, .type=(unsigned int)2 },
    { .field=20000, .type=(unsigned int)3 },
    { .field=20001, .type=(unsigned int)3 },
    { .field=20002, .type=(unsigned int)3 },
    { .field=20003, .type=(unsigned int)3 },
    { .field=20004, .type=(unsigned int)5 },
    { .field=20005, .type=(unsigned int)2 } };
// filetype_args
// file example/copy_datafile.c line 38
const char filetype_args[6l][8l] = { { 's', 'a', 'm', 'e', 0, 0, 0, 0 }, { 'E', 'D', 'F', 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 'B', 'D', 'F', 0, 0, 0, 0, 0 }, { 'G', 'D', 'F', '1', 0, 0, 0, 0 }, { 'G', 'D', 'F', '2', 0, 0, 0, 0 } };
// gdf1_ch_supported_fields
// file gdf1.c line 107
static const enum xdffield gdf1_ch_supported_fields[15l] = { (const enum xdffield)10004, (const enum xdffield)10007, (const enum xdffield)10008, (const enum xdffield)10005, (const enum xdffield)10009, (const enum xdffield)10010, (const enum xdffield)10003, (const enum xdffield)10002, (const enum xdffield)10001, (const enum xdffield)10006, (const enum xdffield)20000, (const enum xdffield)20001, (const enum xdffield)20002, (const enum xdffield)20003, (const enum xdffield)0 };
// gdf1_file_supported_fields
// file gdf1.c line 125
static const enum xdffield gdf1_file_supported_fields[6l] = { (const enum xdffield)1, (const enum xdffield)2, (const enum xdffield)5000, (const enum xdffield)5001, (const enum xdffield)5002, (const enum xdffield)0 };
// gdf1_ops
// file gdf1.c line 134
static struct format_operations gdf1_ops;
// gdf1_ops
// file gdf1.c line 134
static struct format_operations gdf1_ops = { .set_channel=gdf1_set_channel, .get_channel=gdf1_get_channel, .set_conf=gdf1_set_conf,
    .get_conf=gdf1_get_conf, .write_header=gdf1_write_header,
    .read_header=gdf1_read_header, .complete_file=gdf1_complete_file,
    .type=(enum xdffiletype)4, .supported_type={ (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1 },
    .choff=(signed int)0ul,
    .fileoff=(signed int)0ul, .chlen=sizeof(struct gdf1_channel) /*296ul*/ ,
    .filelen=sizeof(struct gdf1_file) /*808ul*/ ,
    .chfields=gdf1_ch_supported_fields,
    .filefields=gdf1_file_supported_fields };
// gdf1_types
// file gdf1.c line 88
static const unsigned int gdf1_types[12l] = { (const unsigned int)1, (const unsigned int)2, (const unsigned int)3, (const unsigned int)4, (const unsigned int)279, (const unsigned int)525, (const unsigned int)5, (const unsigned int)6, (const unsigned int)16, (const unsigned int)17, (const unsigned int)7, (const unsigned int)8 };
// gdf1ch_def
// file gdf1.c line 165
static struct gdf1_channel gdf1ch_def = { .xdfch={ .iarray=0, .offset=0, .digital_inmem=0, .inmemtype=(enum xdftype)0,
    .infiletype=(enum xdftype)8, .physical_mm={ 0.000000, 0.000000 },
    .digital_mm={ 0.000000, 0.000000 },
    .next=((struct xdfch *)NULL), .owner=((struct xdf *)NULL) }, .label={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .transducter={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .unit={ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .prefiltering={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .reserved={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
// gdf2_ch_supported_fields
// file gdf2.c line 142
static const enum xdffield gdf2_ch_supported_fields[17l] = { (const enum xdffield)10004, (const enum xdffield)10007, (const enum xdffield)10008, (const enum xdffield)10005, (const enum xdffield)10009, (const enum xdffield)10010, (const enum xdffield)10003, (const enum xdffield)10002, (const enum xdffield)10001, (const enum xdffield)10006, (const enum xdffield)20000, (const enum xdffield)20001, (const enum xdffield)20002, (const enum xdffield)20003, (const enum xdffield)20004, (const enum xdffield)20005, (const enum xdffield)0 };
// gdf2_file_supported_fields
// file gdf2.c line 162
static const enum xdffield gdf2_file_supported_fields[19l] = { (const enum xdffield)1, (const enum xdffield)2, (const enum xdffield)5000, (const enum xdffield)5001, (const enum xdffield)5002, (const enum xdffield)5003, (const enum xdffield)5004, (const enum xdffield)5005, (const enum xdffield)5006, (const enum xdffield)5007, (const enum xdffield)5008, (const enum xdffield)5009, (const enum xdffield)5010, (const enum xdffield)5011, (const enum xdffield)5012, (const enum xdffield)5013, (const enum xdffield)5014, (const enum xdffield)5015, (const enum xdffield)0 };
// gdf2_ops
// file gdf2.c line 184
static struct format_operations gdf2_ops;
// gdf2_ops
// file gdf2.c line 184
static struct format_operations gdf2_ops = { .set_channel=gdf2_set_channel, .get_channel=gdf2_get_channel, .set_conf=gdf2_set_conf,
    .get_conf=gdf2_get_conf, .write_header=gdf2_write_header,
    .read_header=gdf2_read_header, .complete_file=gdf2_complete_file,
    .type=(enum xdffiletype)5, .supported_type={ (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1, (_Bool)1 },
    .choff=(signed int)0ul,
    .fileoff=(signed int)0ul, .chlen=sizeof(struct gdf2_channel) /*304ul*/ ,
    .filelen=sizeof(struct gdf2_file) /*808ul*/ ,
    .chfields=gdf2_ch_supported_fields,
    .filefields=gdf2_file_supported_fields };
// gdf2_types
// file gdf2.c line 100
static const unsigned int gdf2_types[12l] = { (const unsigned int)1, (const unsigned int)2, (const unsigned int)3, (const unsigned int)4, (const unsigned int)279, (const unsigned int)525, (const unsigned int)5, (const unsigned int)6, (const unsigned int)16, (const unsigned int)17, (const unsigned int)7, (const unsigned int)8 };
// gdf2ch_def
// file gdf2.c line 215
static struct gdf2_channel gdf2ch_def = { .xdfch={ .iarray=0, .offset=0, .digital_inmem=0, .inmemtype=(enum xdftype)0,
    .infiletype=(enum xdftype)8, .physical_mm={ 0.000000, 0.000000 },
    .digital_mm={ 0.000000, 0.000000 },
    .next=((struct xdfch *)NULL), .owner=((struct xdf *)NULL) }, .label={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .transducter={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .unit={ 0, 0, 0, 0, 0, 0, 0 },
    .dimcode=0, .filtering={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .lp=0.000000f,
    .hp=0.000000f, .sp=0.000000f, .pos={ 0.000000f, 0.000000f, 0.000000f },
    .impedance=0,
    .reserved={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
// num_support_datafmt
// file formatdecl.c line 59
static unsigned int num_support_datafmt = (unsigned int)(sizeof(struct dataformat_entry [4l]) /*96ul*/  / sizeof(struct dataformat_entry) /*24ul*/ );
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// sortedlst
// file xdftypes.c line 72
static const enum xdftype sortedlst[12l] = { (const enum xdftype)0, (const enum xdftype)1, (const enum xdftype)2, (const enum xdftype)3, (const enum xdftype)4, (const enum xdftype)5, (const enum xdftype)6, (const enum xdftype)7, (const enum xdftype)8, (const enum xdftype)10, (const enum xdftype)11, (const enum xdftype)9 };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// support_datafmt
// file formatdecl.c line 36
static struct dataformat_entry support_datafmt[4l];
// support_datafmt
// file formatdecl.c line 36
static struct dataformat_entry support_datafmt[4l] = { { .type=(enum xdffiletype)3, .alloc_file=xdf_alloc_bdffile, .is_same_type=xdf_is_bdffile },
    { .type=(enum xdffiletype)1, .alloc_file=xdf_alloc_edffile, .is_same_type=xdf_is_edffile },
    { .type=(enum xdffiletype)4, .alloc_file=xdf_alloc_gdf1file, .is_same_type=xdf_is_gdf1file },
    { .type=(enum xdffiletype)5, .alloc_file=xdf_alloc_gdf2file, .is_same_type=xdf_is_gdf2file } };
// xdffileio_string
// file xdffile.c line 936
static const char xdffileio_string[14l] = { 'x', 'd', 'f', 'f', 'i', 'l', 'e', 'i', 'o', ' ', '0', '.', '3', 0 };

// add_event
// file xdfevent.h line 49
signed int add_event(struct eventtable *table, struct xdfevent *evt)
{
  struct eventbatch *batch = table->last;
  signed int index = (signed int)(table->nevent % (unsigned int)50);
  if(index == 0)
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct eventbatch) /*1208ul*/ );
    batch = (struct eventbatch *)return_value_malloc_1;
    if(batch == ((struct eventbatch *)NULL))
      return -1;

    batch->next = (struct eventbatch *)(void *)0;
    if(!(table->last == ((struct eventbatch *)NULL)))
      table->last->next = batch;

    else
      table->first = batch;
    table->last = batch;
  }

  memcpy((void *)(batch->evt + (signed long int)index), (const void *)evt, sizeof(struct xdfevent) /*24ul*/ );
  table->nevent = table->nevent + 1u;
  return 0;
}

// add_event_entry
// file xdfevent.h line 52
signed int add_event_entry(struct eventtable *table, signed int code, const char *label)
{
  struct evententry *entry;
  unsigned int roundup;
  unsigned int nentry = table->nentry;
  signed int evttype;
  char *elabel = (char *)(void *)0;
  evttype=find_entry(table, code, label);
  if(!(evttype >= 0))
  {
    roundup = ((table->nentry + (unsigned int)1) / (unsigned int)64 + (unsigned int)1) * (unsigned int)64;
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)table->entry, (unsigned long int)roundup * sizeof(struct evententry) /*16ul*/ );
    entry = (struct evententry *)return_value_realloc_1;
    if(entry == ((struct evententry *)NULL))
      return -1;

    table->entry = entry;
    if(!(label == ((const char *)NULL)))
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(label);
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(return_value_strlen_2 + (unsigned long int)1);
      elabel = (char *)return_value_malloc_3;
      if(elabel == ((char *)NULL))
        return -1;

      strcpy(elabel, label);
    }

    evttype = (signed int)nentry;
    (entry + (signed long int)evttype)->code = code;
    (entry + (signed long int)evttype)->label = elabel;
    table->nentry = table->nentry + 1u;
  }

  return evttype;
}

// add_to_batch
// file xdffile.c line 317
static signed int add_to_batch(struct data_batch *curr, struct xdfch *ch, signed int foff)
{
  unsigned int datalen;
  signed int return_value_xdf_get_datasize_1;
  return_value_xdf_get_datasize_1=xdf_get_datasize(ch->inmemtype);
  datalen = (unsigned int)return_value_xdf_get_datasize_1;
  _Bool tmp_if_expr_2;
  if(curr == ((struct data_batch *)NULL))
    return 0;

  else
  {
    if(curr->iarray == ch->iarray)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = curr->len == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
    {
      if(curr->len == 0)
      {
        curr->iarray = ch->iarray;
        curr->foff = foff;
        curr->moff = ch->offset;
        curr->len = (signed int)datalen;
        return 1;
      }

      if(!(curr->foff + curr->len == foff))
        goto __CPROVER_DUMP_L5;

      if(!(curr->len + curr->moff == ch->offset))
        goto __CPROVER_DUMP_L5;

      curr->len = curr->len + (signed int)datalen;
      return 1;
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      return 0;
    }
  }
}

// alloc_ebdffile
// file ebdffile.c line 167
static struct xdf * alloc_ebdffile(struct format_operations *ops, struct ebdf_channel *defch)
{
  struct ebdf_file *ebdf;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct ebdf_file) /*752ul*/ );
  ebdf = (struct ebdf_file *)return_value_calloc_1;
  if(ebdf == ((struct ebdf_file *)NULL))
    return (struct xdf *)(void *)0;

  else
  {
    ebdf->xdf.ops = ops;
    ebdf->xdf.defaultch = &ebdf->default_ebdfch.xdfch;
    memcpy((void *)&ebdf->default_ebdfch, (const void *)defch, sizeof(struct ebdf_channel) /*296ul*/ );
    ebdf->default_ebdfch.xdfch.owner = &ebdf->xdf;
    ebdf->xdf.rec_duration = 1.0;
    ebdf->rectime=time((signed long int *)(void *)0);
    return &ebdf->xdf;
  }
}

// alloc_transfer_objects
// file xdffile.c line 435
static signed int alloc_transfer_objects(struct xdf *xdf)
{
  unsigned int samsize;
  samsize=compute_sample_size(xdf, 1);
  xdf->sample_size = samsize;
  unsigned int return_value_compute_sample_size_1;
  return_value_compute_sample_size_1=compute_sample_size(xdf, 0);
  xdf->filerec_size = return_value_compute_sample_size_1 * xdf->ns_per_rec;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc((unsigned long int)xdf->numch * sizeof(struct convertion_data) /*72ul*/ );
  xdf->convdata = (struct convertion_data *)return_value_malloc_2;
  _Bool tmp_if_expr_4;
  void *return_value_malloc_3;
  if(xdf->convdata == ((struct convertion_data *)NULL))
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_malloc_3=malloc((unsigned long int)xdf->nbatch * sizeof(struct data_batch) /*20ul*/ );
    xdf->batch = (struct data_batch *)return_value_malloc_3;
    tmp_if_expr_4 = !(xdf->batch != ((struct data_batch *)NULL)) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_6;
  void *return_value_malloc_5;
  if(tmp_if_expr_4)
    tmp_if_expr_6 = (_Bool)1;

  else
  {
    return_value_malloc_5=malloc((unsigned long int)(xdf->ns_per_rec * samsize));
    xdf->buff = (char *)return_value_malloc_5;
    tmp_if_expr_6 = !(xdf->buff != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_8;
  void *return_value_malloc_7;
  if(tmp_if_expr_6)
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    return_value_malloc_7=malloc((unsigned long int)(xdf->ns_per_rec * samsize));
    xdf->backbuff = (char *)return_value_malloc_7;
    tmp_if_expr_8 = !(xdf->backbuff != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  if(tmp_if_expr_8)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    xdf->tmpbuff[(signed long int)0]=malloc((unsigned long int)(xdf->ns_per_rec * (unsigned int)8));
    tmp_if_expr_9 = !(xdf->tmpbuff[(signed long int)0] != NULL) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_10;
  if(tmp_if_expr_9)
    tmp_if_expr_10 = (_Bool)1;

  else
  {
    xdf->tmpbuff[(signed long int)1]=malloc((unsigned long int)(xdf->ns_per_rec * (unsigned int)8));
    tmp_if_expr_10 = !(xdf->tmpbuff[(signed long int)1] != NULL) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_10)
    return -1;

  else
    return 0;
}

// block_signals
// file xdffile.c line 46
static void block_signals(struct anonymous_0 *oldmask)
{
  struct anonymous_0 mask;
  sigemptyset(&mask);
  sigaddset(&mask, 25);
  pthread_sigmask(0, &mask, oldmask);
}

// complete_file_content
// file xdffile.c line 630
static signed int complete_file_content(struct xdf *xdf)
{
  signed int retval = 0;
  struct anonymous_0 oldmask;
  block_signals(&oldmask);
  signed int return_value;
  return_value=xdf->ops->complete_file(xdf);
  _Bool tmp_if_expr_2;
  signed int return_value_fsync_1;
  if(!(return_value == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_fsync_1=fsync(xdf->fd);
    tmp_if_expr_2 = return_value_fsync_1 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    retval = -1;

  unblock_signals(&oldmask);
  return retval;
}

// compute_batches
// file xdffile.c line 366
static signed int compute_batches(struct xdf *xdf, signed int assign)
{
  struct data_batch curr;
  struct data_batch *currb;
  unsigned int nbatch = (unsigned int)1;
  unsigned int iarr;
  unsigned int foff;
  unsigned int dlen;
  struct xdfch *ch;
  struct data_batch *tmp_if_expr_1;
  if(!(assign == 0))
    tmp_if_expr_1 = xdf->batch;

  else
    tmp_if_expr_1 = &curr;
  currb = tmp_if_expr_1;
  reset_batch(currb, (unsigned int)0, (unsigned int)0);
  iarr = (unsigned int)0;
  _Bool tmp_if_expr_3;
  signed int return_value_add_to_batch_4;
  for( ; !(iarr >= xdf->narrays); iarr = iarr + 1u)
  {
    foff = (unsigned int)0;
    ch = xdf->channels;
    for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
      if(ch->iarray >= 0)
      {
        signed int return_value_xdf_get_datasize_2;
        return_value_xdf_get_datasize_2=xdf_get_datasize(ch->inmemtype);
        dlen = (unsigned int)return_value_xdf_get_datasize_2;
        if(!(xdf->narrays >= (unsigned int)ch->iarray))
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = (unsigned long int)((unsigned int)ch->offset + dlen) > xdf->array_stride[(signed long int)ch->iarray] ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          return -1;

        if(iarr == (unsigned int)ch->iarray)
        {
          return_value_add_to_batch_4=add_to_batch(currb, ch, (signed int)foff);
          if(return_value_add_to_batch_4 == 0)
          {
            nbatch = nbatch + 1u;
            if(!(assign == 0))
              currb = currb + 1l;

            reset_batch(currb, iarr, foff);
            add_to_batch(currb, ch, (signed int)foff);
          }

        }

        foff = foff + dlen;
      }

  }
  if(!(assign == 0))
    link_batches(xdf, nbatch);

  return (signed int)nbatch;
}

// compute_sample_size
// file xdffile.c line 411
static unsigned int compute_sample_size(struct xdf *xdf, signed int inmem)
{
  unsigned int sample_size = (unsigned int)0;
  enum xdftype type;
  struct xdfch *ch = xdf->channels;
  ch = xdf->channels;
  signed int tmp_if_expr_1;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
    if(ch->iarray >= 0)
    {
      if(!(inmem == 0))
        tmp_if_expr_1 = (signed int)ch->inmemtype;

      else
        tmp_if_expr_1 = (signed int)ch->infiletype;
      type = (enum xdftype)tmp_if_expr_1;
      signed int return_value_xdf_get_datasize_2;
      return_value_xdf_get_datasize_2=xdf_get_datasize(type);
      sample_size = sample_size + (unsigned int)return_value_xdf_get_datasize_2;
    }

  return sample_size;
}

// conv_d_d
// file xdftypes.c line 240
static void conv_d_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = *src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_d_f
// file xdftypes.c line 210
static void conv_d_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (float)*src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_d_i16
// file xdftypes.c line 188
static void conv_d_i16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  signed short int *dst = (signed short int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed short int)*src;
    dst = (signed short int *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_d_i24
// file xdftypes.c line 252
static void conv_d_i24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  signed char *dst = (signed char *)d;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    tmp.i32 = (signed int)*src;
    do
    {
      dst[(signed long int)0] = (signed char)tmp.p24[(signed long int)0];
      dst[(signed long int)1] = (signed char)tmp.p24[(signed long int)1];
      dst[(signed long int)2] = (signed char)tmp.p24[(signed long int)2];
    }
    while((_Bool)0);
    src = (const double *)((const char *)src + (signed long int)sts);
    dst = dst + (signed long int)std;
  }
  while((_Bool)1);
}

// conv_d_i32
// file xdftypes.c line 190
static void conv_d_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  signed int *dst = (signed int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed int)*src;
    dst = (signed int *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_d_i64
// file xdftypes.c line 225
static void conv_d_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  signed long int *dst = (signed long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed long int)*src;
    dst = (signed long int *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_d_i8
// file xdftypes.c line 186
static void conv_d_i8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  signed char *dst = (signed char *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed char)*src;
    dst = (signed char *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_d_u16
// file xdftypes.c line 194
static void conv_d_u16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  unsigned short int *dst = (unsigned short int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned short int)*src;
    dst = (unsigned short int *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_d_u24
// file xdftypes.c line 253
static void conv_d_u24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  signed char *dst = (signed char *)d;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    tmp.u32 = (unsigned int)*src;
    do
    {
      dst[(signed long int)0] = (signed char)tmp.p24[(signed long int)0];
      dst[(signed long int)1] = (signed char)tmp.p24[(signed long int)1];
      dst[(signed long int)2] = (signed char)tmp.p24[(signed long int)2];
    }
    while((_Bool)0);
    src = (const double *)((const char *)src + (signed long int)sts);
    dst = dst + (signed long int)std;
  }
  while((_Bool)1);
}

// conv_d_u32
// file xdftypes.c line 196
static void conv_d_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  unsigned int *dst = (unsigned int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned int)*src;
    dst = (unsigned int *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_d_u64
// file xdftypes.c line 229
static void conv_d_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  unsigned long int *dst = (unsigned long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned long int)*src;
    dst = (unsigned long int *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_d_u8
// file xdftypes.c line 192
static void conv_d_u8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const double *src = (const double *)s;
  unsigned char *dst = (unsigned char *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned char)*src;
    dst = (unsigned char *)((char *)dst + (signed long int)std);
    src = (const double *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_d
// file xdftypes.c line 209
static void conv_f_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (double)*src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_f
// file xdftypes.c line 239
static void conv_f_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = *src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_i16
// file xdftypes.c line 200
static void conv_f_i16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  signed short int *dst = (signed short int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed short int)*src;
    dst = (signed short int *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_i24
// file xdftypes.c line 248
static void conv_f_i24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  signed char *dst = (signed char *)d;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    tmp.i32 = (signed int)*src;
    do
    {
      dst[(signed long int)0] = (signed char)tmp.p24[(signed long int)0];
      dst[(signed long int)1] = (signed char)tmp.p24[(signed long int)1];
      dst[(signed long int)2] = (signed char)tmp.p24[(signed long int)2];
    }
    while((_Bool)0);
    src = (const float *)((const char *)src + (signed long int)sts);
    dst = dst + (signed long int)std;
  }
  while((_Bool)1);
}

// conv_f_i32
// file xdftypes.c line 202
static void conv_f_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  signed int *dst = (signed int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed int)*src;
    dst = (signed int *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_i64
// file xdftypes.c line 223
static void conv_f_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  signed long int *dst = (signed long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed long int)*src;
    dst = (signed long int *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_i8
// file xdftypes.c line 198
static void conv_f_i8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  signed char *dst = (signed char *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed char)*src;
    dst = (signed char *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_u16
// file xdftypes.c line 206
static void conv_f_u16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  unsigned short int *dst = (unsigned short int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned short int)*src;
    dst = (unsigned short int *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_u24
// file xdftypes.c line 249
static void conv_f_u24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  signed char *dst = (signed char *)d;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    tmp.u32 = (unsigned int)*src;
    do
    {
      dst[(signed long int)0] = (signed char)tmp.p24[(signed long int)0];
      dst[(signed long int)1] = (signed char)tmp.p24[(signed long int)1];
      dst[(signed long int)2] = (signed char)tmp.p24[(signed long int)2];
    }
    while((_Bool)0);
    src = (const float *)((const char *)src + (signed long int)sts);
    dst = dst + (signed long int)std;
  }
  while((_Bool)1);
}

// conv_f_u32
// file xdftypes.c line 208
static void conv_f_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  unsigned int *dst = (unsigned int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned int)*src;
    dst = (unsigned int *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_u64
// file xdftypes.c line 227
static void conv_f_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  unsigned long int *dst = (unsigned long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned long int)*src;
    dst = (unsigned long int *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_f_u8
// file xdftypes.c line 204
static void conv_f_u8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const float *src = (const float *)s;
  unsigned char *dst = (unsigned char *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned char)*src;
    dst = (unsigned char *)((char *)dst + (signed long int)std);
    src = (const float *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i16_d
// file xdftypes.c line 187
static void conv_i16_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed short int *src = (const signed short int *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (double)*src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const signed short int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i16_f
// file xdftypes.c line 199
static void conv_i16_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed short int *src = (const signed short int *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (float)*src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const signed short int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i16_i32
// file xdftypes.c line 236
static void conv_i16_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed short int *src = (const signed short int *)s;
  signed int *dst = (signed int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed int)*src;
    dst = (signed int *)((char *)dst + (signed long int)std);
    src = (const signed short int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i16_i64
// file xdftypes.c line 213
static void conv_i16_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed short int *src = (const signed short int *)s;
  signed long int *dst = (signed long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed long int)*src;
    dst = (signed long int *)((char *)dst + (signed long int)std);
    src = (const signed short int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i24_d
// file xdftypes.c line 254
static void conv_i24_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  double *dst = (double *)d;
  const signed char *src = (const signed char *)s;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    do
    {
      tmp.p24[(signed long int)0] = (unsigned char)src[(signed long int)0];
      tmp.p24[(signed long int)1] = (unsigned char)src[(signed long int)1];
      tmp.p24[(signed long int)2] = (unsigned char)src[(signed long int)2];
    }
    while((_Bool)0);
    *dst = (double)((tmp.i32 << 8) >> 8);
    src = src + (signed long int)sts;
    dst = (double *)((char *)dst + (signed long int)std);
  }
  while((_Bool)1);
}

// conv_i24_f
// file xdftypes.c line 250
static void conv_i24_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  float *dst = (float *)d;
  const signed char *src = (const signed char *)s;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    do
    {
      tmp.p24[(signed long int)0] = (unsigned char)src[(signed long int)0];
      tmp.p24[(signed long int)1] = (unsigned char)src[(signed long int)1];
      tmp.p24[(signed long int)2] = (unsigned char)src[(signed long int)2];
    }
    while((_Bool)0);
    *dst = (float)((tmp.i32 << 8) >> 8);
    src = src + (signed long int)sts;
    dst = (float *)((char *)dst + (signed long int)std);
  }
  while((_Bool)1);
}

// conv_i24_i32
// file xdftypes.c line 246
static void conv_i24_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  signed int *dst = (signed int *)d;
  const signed char *src = (const signed char *)s;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    do
    {
      tmp.p24[(signed long int)0] = (unsigned char)src[(signed long int)0];
      tmp.p24[(signed long int)1] = (unsigned char)src[(signed long int)1];
      tmp.p24[(signed long int)2] = (unsigned char)src[(signed long int)2];
    }
    while((_Bool)0);
    *dst = (tmp.i32 << 8) >> 8;
    src = src + (signed long int)sts;
    dst = (signed int *)((char *)dst + (signed long int)std);
  }
  while((_Bool)1);
}

// conv_i24_i64
// file xdftypes.c line 243
static void conv_i24_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  signed long int *dst = (signed long int *)d;
  const signed char *src = (const signed char *)s;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    do
    {
      tmp.p24[(signed long int)0] = (unsigned char)src[(signed long int)0];
      tmp.p24[(signed long int)1] = (unsigned char)src[(signed long int)1];
      tmp.p24[(signed long int)2] = (unsigned char)src[(signed long int)2];
    }
    while((_Bool)0);
    *dst = (signed long int)((tmp.i32 << 8) >> 8);
    src = src + (signed long int)sts;
    dst = (signed long int *)((char *)dst + (signed long int)std);
  }
  while((_Bool)1);
}

// conv_i32_d
// file xdftypes.c line 189
static void conv_i32_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed int *src = (const signed int *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (double)*src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const signed int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i32_f
// file xdftypes.c line 201
static void conv_i32_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed int *src = (const signed int *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (float)*src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const signed int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i32_i16
// file xdftypes.c line 235
static void conv_i32_i16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed int *src = (const signed int *)s;
  signed short int *dst = (signed short int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed short int)*src;
    dst = (signed short int *)((char *)dst + (signed long int)std);
    src = (const signed int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i32_i64
// file xdftypes.c line 215
static void conv_i32_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed int *src = (const signed int *)s;
  signed long int *dst = (signed long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed long int)*src;
    dst = (signed long int *)((char *)dst + (signed long int)std);
    src = (const signed int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i64_d
// file xdftypes.c line 226
static void conv_i64_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed long int *src = (const signed long int *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (double)*src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const signed long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i64_f
// file xdftypes.c line 224
static void conv_i64_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed long int *src = (const signed long int *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (float)*src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const signed long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i64_i16
// file xdftypes.c line 214
static void conv_i64_i16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed long int *src = (const signed long int *)s;
  signed short int *dst = (signed short int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed short int)*src;
    dst = (signed short int *)((char *)dst + (signed long int)std);
    src = (const signed long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i64_i32
// file xdftypes.c line 216
static void conv_i64_i32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed long int *src = (const signed long int *)s;
  signed int *dst = (signed int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed int)*src;
    dst = (signed int *)((char *)dst + (signed long int)std);
    src = (const signed long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i64_i8
// file xdftypes.c line 212
static void conv_i64_i8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed long int *src = (const signed long int *)s;
  signed char *dst = (signed char *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed char)*src;
    dst = (signed char *)((char *)dst + (signed long int)std);
    src = (const signed long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i8_d
// file xdftypes.c line 185
static void conv_i8_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed char *src = (const signed char *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (double)*src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const signed char *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i8_f
// file xdftypes.c line 197
static void conv_i8_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed char *src = (const signed char *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (float)*src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const signed char *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_i8_i64
// file xdftypes.c line 211
static void conv_i8_i64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed char *src = (const signed char *)s;
  signed long int *dst = (signed long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (signed long int)*src;
    dst = (signed long int *)((char *)dst + (signed long int)std);
    src = (const signed char *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u16_d
// file xdftypes.c line 193
static void conv_u16_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned short int *src = (const unsigned short int *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (double)*src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const unsigned short int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u16_f
// file xdftypes.c line 205
static void conv_u16_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned short int *src = (const unsigned short int *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (float)*src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const unsigned short int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u16_u32
// file xdftypes.c line 238
static void conv_u16_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned short int *src = (const unsigned short int *)s;
  unsigned int *dst = (unsigned int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned int)*src;
    dst = (unsigned int *)((char *)dst + (signed long int)std);
    src = (const unsigned short int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u16_u64
// file xdftypes.c line 219
static void conv_u16_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned short int *src = (const unsigned short int *)s;
  unsigned long int *dst = (unsigned long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned long int)*src;
    dst = (unsigned long int *)((char *)dst + (signed long int)std);
    src = (const unsigned short int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u24_d
// file xdftypes.c line 255
static void conv_u24_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  double *dst = (double *)d;
  const signed char *src = (const signed char *)s;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    do
    {
      tmp.p24[(signed long int)0] = (unsigned char)src[(signed long int)0];
      tmp.p24[(signed long int)1] = (unsigned char)src[(signed long int)1];
      tmp.p24[(signed long int)2] = (unsigned char)src[(signed long int)2];
    }
    while((_Bool)0);
    *dst = (double)((tmp.u32 << 8) >> 8);
    src = src + (signed long int)sts;
    dst = (double *)((char *)dst + (signed long int)std);
  }
  while((_Bool)1);
}

// conv_u24_f
// file xdftypes.c line 251
static void conv_u24_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  float *dst = (float *)d;
  const signed char *src = (const signed char *)s;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    do
    {
      tmp.p24[(signed long int)0] = (unsigned char)src[(signed long int)0];
      tmp.p24[(signed long int)1] = (unsigned char)src[(signed long int)1];
      tmp.p24[(signed long int)2] = (unsigned char)src[(signed long int)2];
    }
    while((_Bool)0);
    *dst = (float)((tmp.u32 << 8) >> 8);
    src = src + (signed long int)sts;
    dst = (float *)((char *)dst + (signed long int)std);
  }
  while((_Bool)1);
}

// conv_u24_u32
// file xdftypes.c line 247
static void conv_u24_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  unsigned int *dst = (unsigned int *)d;
  const signed char *src = (const signed char *)s;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    do
    {
      tmp.p24[(signed long int)0] = (unsigned char)src[(signed long int)0];
      tmp.p24[(signed long int)1] = (unsigned char)src[(signed long int)1];
      tmp.p24[(signed long int)2] = (unsigned char)src[(signed long int)2];
    }
    while((_Bool)0);
    *dst = (tmp.u32 << 8) >> 8;
    src = src + (signed long int)sts;
    dst = (unsigned int *)((char *)dst + (signed long int)std);
  }
  while((_Bool)1);
}

// conv_u24_u64
// file xdftypes.c line 244
static void conv_u24_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  unsigned long int *dst = (unsigned long int *)d;
  const signed char *src = (const signed char *)s;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    do
    {
      tmp.p24[(signed long int)0] = (unsigned char)src[(signed long int)0];
      tmp.p24[(signed long int)1] = (unsigned char)src[(signed long int)1];
      tmp.p24[(signed long int)2] = (unsigned char)src[(signed long int)2];
    }
    while((_Bool)0);
    *dst = (unsigned long int)((tmp.u32 << 8) >> 8);
    src = src + (signed long int)sts;
    dst = (unsigned long int *)((char *)dst + (signed long int)std);
  }
  while((_Bool)1);
}

// conv_u32_d
// file xdftypes.c line 195
static void conv_u32_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned int *src = (const unsigned int *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (double)*src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const unsigned int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u32_f
// file xdftypes.c line 207
static void conv_u32_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned int *src = (const unsigned int *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (float)*src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const unsigned int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u32_u16
// file xdftypes.c line 237
static void conv_u32_u16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned int *src = (const unsigned int *)s;
  unsigned short int *dst = (unsigned short int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned short int)*src;
    dst = (unsigned short int *)((char *)dst + (signed long int)std);
    src = (const unsigned int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u32_u64
// file xdftypes.c line 221
static void conv_u32_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned int *src = (const unsigned int *)s;
  unsigned long int *dst = (unsigned long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned long int)*src;
    dst = (unsigned long int *)((char *)dst + (signed long int)std);
    src = (const unsigned int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u64_d
// file xdftypes.c line 230
static void conv_u64_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned long int *src = (const unsigned long int *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (double)*src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const unsigned long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u64_f
// file xdftypes.c line 228
static void conv_u64_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned long int *src = (const unsigned long int *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (float)*src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const unsigned long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u64_u16
// file xdftypes.c line 220
static void conv_u64_u16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned long int *src = (const unsigned long int *)s;
  unsigned short int *dst = (unsigned short int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned short int)*src;
    dst = (unsigned short int *)((char *)dst + (signed long int)std);
    src = (const unsigned long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u64_u32
// file xdftypes.c line 222
static void conv_u64_u32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned long int *src = (const unsigned long int *)s;
  unsigned int *dst = (unsigned int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned int)*src;
    dst = (unsigned int *)((char *)dst + (signed long int)std);
    src = (const unsigned long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u64_u8
// file xdftypes.c line 218
static void conv_u64_u8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned long int *src = (const unsigned long int *)s;
  unsigned char *dst = (unsigned char *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned char)*src;
    dst = (unsigned char *)((char *)dst + (signed long int)std);
    src = (const unsigned long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u8_d
// file xdftypes.c line 191
static void conv_u8_d(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned char *src = (const unsigned char *)s;
  double *dst = (double *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (double)*src;
    dst = (double *)((char *)dst + (signed long int)std);
    src = (const unsigned char *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u8_f
// file xdftypes.c line 203
static void conv_u8_f(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned char *src = (const unsigned char *)s;
  float *dst = (float *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (float)*src;
    dst = (float *)((char *)dst + (signed long int)std);
    src = (const unsigned char *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_u8_u64
// file xdftypes.c line 217
static void conv_u8_u64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const unsigned char *src = (const unsigned char *)s;
  unsigned long int *dst = (unsigned long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = (unsigned long int)*src;
    dst = (unsigned long int *)((char *)dst + (signed long int)std);
    src = (const unsigned char *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_ui16_ui16
// file xdftypes.c line 232
static void conv_ui16_ui16(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed short int *src = (const signed short int *)s;
  signed short int *dst = (signed short int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = *src;
    dst = (signed short int *)((char *)dst + (signed long int)std);
    src = (const signed short int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_ui24_ui24
// file xdftypes.c line 257
static void conv_ui24_ui24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  unsigned char *dstc = (unsigned char *)d;
  const unsigned char *srcc = (const unsigned char *)s;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    dstc[(signed long int)0] = srcc[(signed long int)0];
    dstc[(signed long int)1] = srcc[(signed long int)1];
    dstc[(signed long int)2] = srcc[(signed long int)2];
    dstc = dstc + (signed long int)std;
    srcc = srcc + (signed long int)sts;
  }
  while((_Bool)1);
}

// conv_ui32_ui24
// file xdftypes.c line 245
static void conv_ui32_ui24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed int *src = (const signed int *)s;
  signed char *dst = (signed char *)d;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    tmp.i32 = *src;
    do
    {
      dst[(signed long int)0] = (signed char)tmp.p24[(signed long int)0];
      dst[(signed long int)1] = (signed char)tmp.p24[(signed long int)1];
      dst[(signed long int)2] = (signed char)tmp.p24[(signed long int)2];
    }
    while((_Bool)0);
    src = (const signed int *)((const char *)src + (signed long int)sts);
    dst = dst + (signed long int)std;
  }
  while((_Bool)1);
}

// conv_ui32_ui32
// file xdftypes.c line 233
static void conv_ui32_ui32(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed int *src = (const signed int *)s;
  signed int *dst = (signed int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = *src;
    dst = (signed int *)((char *)dst + (signed long int)std);
    src = (const signed int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_ui64_ui24
// file xdftypes.c line 242
static void conv_ui64_ui24(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed long int *src = (const signed long int *)s;
  signed char *dst = (signed char *)d;
  union ui24 tmp;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    tmp.i32 = (signed int)*src;
    do
    {
      dst[(signed long int)0] = (signed char)tmp.p24[(signed long int)0];
      dst[(signed long int)1] = (signed char)tmp.p24[(signed long int)1];
      dst[(signed long int)2] = (signed char)tmp.p24[(signed long int)2];
    }
    while((_Bool)0);
    src = (const signed long int *)((const char *)src + (signed long int)sts);
    dst = dst + (signed long int)std;
  }
  while((_Bool)1);
}

// conv_ui64_ui64
// file xdftypes.c line 234
static void conv_ui64_ui64(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed long int *src = (const signed long int *)s;
  signed long int *dst = (signed long int *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = *src;
    dst = (signed long int *)((char *)dst + (signed long int)std);
    src = (const signed long int *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// conv_ui8_ui8
// file xdftypes.c line 231
static void conv_ui8_ui8(unsigned int ns, void * restrict d, unsigned int std, const void * restrict s, unsigned int sts)
{
  const signed char *src = (const signed char *)s;
  signed char *dst = (signed char *)d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *dst = *src;
    dst = (signed char *)((char *)dst + (signed long int)std);
    src = (const signed char *)((const char *)src + (signed long int)sts);
  }
  while((_Bool)1);
}

// convert_recduration
// file gdf1.c line 347
static void convert_recduration(double len, unsigned int *ratio)
{
  if(len >= 1.0)
  {
    ratio[(signed long int)0] = (unsigned int)len;
    ratio[(signed long int)1] = (unsigned int)1;
  }

  else
  {
    ratio[(signed long int)0] = (unsigned int)1;
    ratio[(signed long int)1] = (unsigned int)(1.0 / len);
  }
}

// convert_recduration_link1
// file gdf2.c line 459
static void convert_recduration_link1(double len_link1, unsigned int *ratio_link1)
{
  if(len_link1 >= 1.0)
  {
    ratio_link1[(signed long int)0] = (unsigned int)len_link1;
    ratio_link1[(signed long int)1] = (unsigned int)1;
  }

  else
  {
    ratio_link1[(signed long int)0] = (unsigned int)1;
    ratio_link1[(signed long int)1] = (unsigned int)(1.0 / len_link1);
  }
}

// copy_configuration
// file example/copy_datafile.c line 47
signed int copy_configuration(struct xdf *dst, struct xdf *src)
{
  struct xdfch *dstch;
  struct xdfch *srcch;
  signed int i;
  signed int nch;
  signed int nevtcode;
  signed int evtcode;
  const char *desc;
  xdf_copy_conf(dst, src);
  nch = 0;
  signed int tmp_post_1;
  do
  {
    tmp_post_1 = nch;
    nch = nch + 1;
    srcch=xdf_get_channel(src, (unsigned int)tmp_post_1);
    if(srcch == ((struct xdfch *)NULL))
      break;

    dstch=xdf_add_channel(dst, (const char *)(void *)0);
    signed int return_value_xdf_copy_chconf_2;
    return_value_xdf_copy_chconf_2=xdf_copy_chconf(dstch, srcch);
    if(!(return_value_xdf_copy_chconf_2 == 0))
      return -1;

  }
  while((_Bool)1);
  xdf_get_conf(src, (enum xdffield)XDF_F_NEVTTYPE, &nevtcode, XDF_NOF);
  i = 0;
  _Bool tmp_if_expr_5;
  signed int return_value_xdf_add_evttype_4;
  for( ; !(i >= nevtcode); i = i + 1)
  {
    signed int return_value_xdf_get_evttype_3;
    return_value_xdf_get_evttype_3=xdf_get_evttype(src, (unsigned int)i, &evtcode, &desc);
    if(!(return_value_xdf_get_evttype_3 >= 0))
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_xdf_add_evttype_4=xdf_add_evttype(dst, evtcode, desc);
      tmp_if_expr_5 = return_value_xdf_add_evttype_4 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_5)
      return -1;

  }
  return 0;
}

// copy_datastream
// file example/copy_datafile.c line 74
signed int copy_datastream(struct xdf *dst, struct xdf *src)
{
  void *buffer = (void *)0;
  signed int nch;
  signed long int nssrc;
  signed long int nsdst = (signed long int)0;
  unsigned long int samplesize;
  unsigned long int stride[1l];
  xdf_get_conf(src, (enum xdffield)XDF_F_NCHANNEL, &nch, XDF_NOF);
  samplesize = (unsigned long int)nch * sizeof(double) /*8ul*/ ;
  buffer=malloc(samplesize * (unsigned long int)32);
  stride[(signed long int)0] = samplesize;
  xdf_define_arrays(src, (unsigned int)1, stride);
  xdf_define_arrays(dst, (unsigned int)1, stride);
  xdf_prepare_transfer(src);
  xdf_prepare_transfer(dst);
  while((_Bool)1)
  {
    nssrc=xdf_read(src, (unsigned long int)32, buffer);
    if(!(nssrc >= 1l))
      break;

    nsdst=xdf_write(dst, (unsigned long int)nssrc, buffer);
    if(!(nsdst >= 0l))
      break;

  }
  free(buffer);
  return nssrc < (signed long int)0 || nsdst < (signed long int)0 ? -1 : 0;
}

// copy_eventtable
// file example/copy_datafile.c line 109
signed int copy_eventtable(struct xdf *dst, struct xdf *src)
{
  signed int nevent;
  signed int i;
  unsigned int evttype;
  double onset;
  double duration;
  xdf_get_conf(src, (enum xdffield)XDF_F_NEVENT, &nevent, XDF_NOF);
  i = 0;
  _Bool tmp_if_expr_3;
  signed int return_value_xdf_add_event_2;
  for( ; !(i >= nevent); i = i + 1)
  {
    signed int return_value_xdf_get_event_1;
    return_value_xdf_get_event_1=xdf_get_event(src, (unsigned int)i, &evttype, &onset, &duration);
    if(!(return_value_xdf_get_event_1 >= 0))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value_xdf_add_event_2=xdf_add_event(dst, (signed int)evttype, onset, duration);
      tmp_if_expr_3 = return_value_xdf_add_event_2 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      return -1;

  }
  return 0;
}

// copy_xdf
// file example/copy_datafile.c line 127
signed int copy_xdf(const char *genfilename, const char *reffilename, signed int dstfmt)
{
  struct xdf *dst = (struct xdf *)(void *)0;
  struct xdf *src = (struct xdf *)(void *)0;
  signed int srcfmt;
  signed int retcode = -1;
  src=xdf_open(reffilename, 1, (enum xdffiletype)XDF_ANY);
  signed int return_value_copy_configuration_1;
  signed int return_value_copy_datastream_2;
  signed int return_value_copy_eventtable_3;
  if(!(src == ((struct xdf *)NULL)))
  {
    xdf_get_conf(src, (enum xdffield)XDF_F_FILEFMT, &srcfmt, XDF_NOF);
    if(dstfmt == XDF_ANY)
      dstfmt = srcfmt;

    dst=xdf_open(genfilename, 0, (enum xdffiletype)dstfmt);
    if(!(dst == ((struct xdf *)NULL)))
    {
      return_value_copy_configuration_1=copy_configuration(dst, src);
      if(return_value_copy_configuration_1 == 0)
      {
        return_value_copy_datastream_2=copy_datastream(dst, src);
        if(return_value_copy_datastream_2 == 0)
        {
          return_value_copy_eventtable_3=copy_eventtable(dst, src);
          if(return_value_copy_eventtable_3 == 0)
            retcode = 0;

        }

      }

    }

  }


exit:
  ;
  xdf_close(src);
  xdf_close(dst);
  return retcode;
}

// create_event_table
// file xdfevent.c line 119
struct eventtable * create_event_table(void)
{
  struct eventtable *table = (struct eventtable *)(void *)0;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct eventtable) /*40ul*/ );
  table = (struct eventtable *)return_value_malloc_1;
  if(table == ((struct eventtable *)NULL))
    return (struct eventtable *)(void *)0;

  else
  {
    table->nentry = (unsigned int)0;
    table->entry = (struct evententry *)(void *)0;
    table->nevent = (unsigned int)0;
    table->last = (struct eventbatch *)(void *)0;
    table->first = table->last;
    return table;
  }
}

// create_read_xdf
// file xdfconfig.c line 260
static struct xdf * create_read_xdf(enum xdffiletype type, const char *filename)
{
  unsigned char magickey[8l];
  enum xdffiletype gtype;
  struct xdf *xdf = (struct xdf *)(void *)0;
  signed int fd;
  signed int errnum = 0;
  fd=open_cloexec(filename, 00 | 0, (unsigned int)0);
  _Bool tmp_if_expr_4;
  signed long int return_value_lseek_3;
  signed int return_value_setup_read_xdf_6;
  signed int *return_value___errno_location_7;
  signed int *return_value___errno_location_8;
  if(fd == -1)
    return (struct xdf *)(void *)0;

  else
  {
    signed long int return_value_read_2;
    return_value_read_2=read(fd, (void *)magickey, sizeof(unsigned char [8l]) /*8ul*/ );
    if(return_value_read_2 == -1l)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_lseek_3=lseek(fd, (signed long int)0, 0);
      tmp_if_expr_4 = return_value_lseek_3 == (signed long int)-1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      errnum = *return_value___errno_location_1;
      goto error;
    }

    gtype=xdf_guess_filetype(magickey);
    if((signed int)gtype == XDF_ANY || !(type == gtype) && !((signed int)type == XDF_ANY))
      errnum = 84;

    else
    {
      xdf=xdf_alloc_file(gtype);
      if(xdf == ((struct xdf *)NULL))
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        errnum = *return_value___errno_location_5;
        goto error;
      }

      return_value_setup_read_xdf_6=setup_read_xdf(xdf, fd);
      if(return_value_setup_read_xdf_6 == 0)
        return xdf;

      return_value___errno_location_7=__errno_location();
      errnum = *return_value___errno_location_7;
      xdf_close(xdf);
      return_value___errno_location_8=__errno_location();
      *return_value___errno_location_8 = errnum;
      return (struct xdf *)(void *)0;
    }

  error:
    ;
    close(fd);
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    *return_value___errno_location_9 = errnum;
    return (struct xdf *)(void *)0;
  }
}

// create_write_xdf
// file xdfconfig.c line 313
static struct xdf * create_write_xdf(enum xdffiletype type, const char *filename)
{
  struct xdf *xdf = (struct xdf *)(void *)0;
  signed int fd = -1;
  signed int errnum;
  unsigned int mode = (unsigned int)(0400 | 0200);
  fd=open_cloexec(filename, 0 | 01 | 0100 | 0200, mode);
  if(fd == -1)
    return (struct xdf *)(void *)0;

  else
  {
    xdf=xdf_alloc_file(type);
    if(xdf == ((struct xdf *)NULL))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      errnum = *return_value___errno_location_1;
      close(fd);
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = errnum;
      return (struct xdf *)(void *)0;
    }

    init_xdf_struct(xdf, fd, 0);
    return xdf;
  }
}

// destroy_event_table
// file xdfevent.h line 48
void destroy_event_table(struct eventtable *table)
{
  struct eventbatch *curr_batch;
  struct eventbatch *next_batch;
  unsigned int i;
  if(!(table == ((struct eventtable *)NULL)))
  {
    next_batch = table->first;
    while(!(next_batch == ((struct eventbatch *)NULL)))
    {
      curr_batch = next_batch;
      next_batch = next_batch->next;
      free((void *)curr_batch);
    }
    i = (unsigned int)0;
    for( ; !(i >= table->nentry); i = i + 1u)
      free((void *)(table->entry + (signed long int)i)->label);
    free((void *)table->entry);
    free((void *)table);
  }

}

// disk_transfer
// file xdffile.c line 267
static signed int disk_transfer(struct xdf *xdf)
{
  signed int retval = 0;
  void *buffer;
  pthread_mutex_lock(&xdf->mtx);
  while(!(xdf->order == 0))
  {
    if(!(xdf->reportval == 0))
      break;

    pthread_cond_wait(&xdf->cond, &xdf->mtx);
  }
  if(!(xdf->reportval == 0))
  {
    if(!(xdf->reportval >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = -xdf->reportval;
      retval = -1;
    }

    else
      retval = 1;
  }

  else
  {
    buffer = (void *)xdf->backbuff;
    xdf->backbuff = xdf->buff;
    xdf->buff = (char *)buffer;
    xdf->order = 1;
    pthread_cond_signal(&xdf->cond);
  }
  pthread_mutex_unlock(&xdf->mtx);
  return retval;
}

// dup_cloexec
// file streamops.c line 35
signed int dup_cloexec(signed int fd)
{
  signed int newfd;
  newfd=dup(fd);
  signed int flags;
  flags=fcntl(newfd, 1);
  fcntl(newfd, 2, flags | 1);
  return newfd;
}

// ebdf_complete_file
// file ebdffile.c line 626
static signed int ebdf_complete_file(struct xdf *xdf)
{
  signed int retval = 0;
  char numrecstr[9l];
  snprintf(numrecstr, (unsigned long int)9, "%-8i", xdf->nrecord);
  signed long int return_value_lseek_1;
  return_value_lseek_1=lseek(xdf->fd, (signed long int)236, 0);
  _Bool tmp_if_expr_3;
  signed long int return_value_write_2;
  if(!(return_value_lseek_1 >= 0l))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_write_2=write(xdf->fd, (const void *)numrecstr, (unsigned long int)8);
    tmp_if_expr_3 = return_value_write_2 < (signed long int)0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
    retval = -1;

  return retval;
}

// ebdf_get_channel
// file ebdffile.c line 271
static signed int ebdf_get_channel(struct xdfch *ch, enum xdffield field, union optval *val, signed int prevretval)
{
  struct ebdf_channel *ebdfch = (struct ebdf_channel *)((char *)ch - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_CF_LABEL)
      val->str = ebdfch->label;

    else
      if((signed int)field == XDF_CF_UNIT)
        val->str = ebdfch->unit;

      else
        if((signed int)field == XDF_CF_TRANSDUCTER)
          val->str = ebdfch->transducter;

        else
          if((signed int)field == XDF_CF_PREFILTERING)
            val->str = ebdfch->prefiltering;

          else
            if((signed int)field == XDF_CF_RESERVED)
              val->str = ebdfch->reserved;

            else
              retval = prevretval;
    return retval;
  }
}

// ebdf_get_conf
// file ebdffile.c line 332
static signed int ebdf_get_conf(struct xdf *xdf, enum xdffield field, union optval *val, signed int prevretval)
{
  struct ebdf_file *ebdf = (struct ebdf_file *)((char *)xdf - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_F_SUBJ_DESC)
      val->str = ebdf->subjstr;

    else
      if((signed int)field == XDF_F_SESS_DESC)
        val->str = ebdf->recstr;

      else
        if((signed int)field == XDF_F_RECTIME)
          val->d = (double)ebdf->rectime;

        else
          retval = prevretval;
    return retval;
  }
}

// ebdf_read_channels_header
// file ebdffile.c line 528
static signed int ebdf_read_channels_header(struct ebdf_file *ebdf, struct _IO_FILE *file)
{
  struct xdfch *ch;
  signed int ival;
  ch = ebdf->xdf.channels;
  signed int return_value_read_string_field_1;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_1=read_string_field(file, ((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->label, (unsigned int)16);
    if(!(return_value_read_string_field_1 == 0))
      return -1;

  }
  ch = ebdf->xdf.channels;
  signed int return_value_read_string_field_2;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_2=read_string_field(file, ((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->transducter, (unsigned int)80);
    if(!(return_value_read_string_field_2 == 0))
      return -1;

  }
  ch = ebdf->xdf.channels;
  signed int return_value_read_string_field_3;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_3=read_string_field(file, ((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->unit, (unsigned int)8);
    if(!(return_value_read_string_field_3 == 0))
      return -1;

  }
  ch = ebdf->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int return_value_read_int_field_4;
    return_value_read_int_field_4=read_int_field(file, &ival, (unsigned int)8);
    if(!(return_value_read_int_field_4 == 0))
      return -1;

    ch->physical_mm[(signed long int)0] = (double)ival;
  }
  ch = ebdf->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int return_value_read_int_field_5;
    return_value_read_int_field_5=read_int_field(file, &ival, (unsigned int)8);
    if(!(return_value_read_int_field_5 == 0))
      return -1;

    ch->physical_mm[(signed long int)1] = (double)ival;
  }
  ch = ebdf->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int return_value_read_int_field_6;
    return_value_read_int_field_6=read_int_field(file, &ival, (unsigned int)8);
    if(!(return_value_read_int_field_6 == 0))
      return -1;

    ch->digital_mm[(signed long int)0] = (double)ival;
  }
  ch = ebdf->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int return_value_read_int_field_7;
    return_value_read_int_field_7=read_int_field(file, &ival, (unsigned int)8);
    if(!(return_value_read_int_field_7 == 0))
      return -1;

    ch->digital_mm[(signed long int)1] = (double)ival;
  }
  ch = ebdf->xdf.channels;
  signed int return_value_read_string_field_8;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_8=read_string_field(file, ((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->prefiltering, (unsigned int)80);
    if(!(return_value_read_string_field_8 == 0))
      return -1;

  }
  ch = ebdf->xdf.channels;
  signed int return_value_read_int_field_9;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_int_field_9=read_int_field(file, (signed int *)&ebdf->xdf.ns_per_rec, (unsigned int)8);
    if(!(return_value_read_int_field_9 == 0))
      return -1;

  }
  ch = ebdf->xdf.channels;
  signed int return_value_read_string_field_10;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_10=read_string_field(file, ((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->reserved, (unsigned int)32);
    if(!(return_value_read_string_field_10 == 0))
      return -1;

  }
  return 0;
}

// ebdf_read_file_header
// file ebdffile.c line 486
static signed int ebdf_read_file_header(struct ebdf_file *bdf, struct _IO_FILE *file)
{
  char timestring[17l];
  char type[45l];
  signed int recdur;
  signed int hdrsize;
  signed int retval = 0;
  struct tm ltm = { .tm_sec=0, .tm_min=0, .tm_hour=0, .tm_mday=0, .tm_mon=0,
    .tm_year=0, .tm_wday=0, .tm_yday=0, .tm_isdst=-1,
    .tm_gmtoff=0l, .tm_zone=((const char *)NULL) };
  fseek(file, (signed long int)8, 0);
  signed int return_value_read_string_field_1;
  return_value_read_string_field_1=read_string_field(file, bdf->subjstr, (unsigned int)80);
  _Bool tmp_if_expr_3;
  signed int return_value_read_string_field_2;
  if(!(return_value_read_string_field_1 == 0))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_read_string_field_2=read_string_field(file, bdf->recstr, (unsigned int)80);
    tmp_if_expr_3 = return_value_read_string_field_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  signed int return_value_read_string_field_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_read_string_field_4=read_string_field(file, timestring, (unsigned int)16);
    tmp_if_expr_5 = return_value_read_string_field_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_read_int_field_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_read_int_field_6=read_int_field(file, &hdrsize, (unsigned int)8);
    tmp_if_expr_7 = return_value_read_int_field_6 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  signed int return_value_read_string_field_8;
  if(tmp_if_expr_7)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_read_string_field_8=read_string_field(file, type, (unsigned int)44);
    tmp_if_expr_9 = return_value_read_string_field_8 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_11;
  signed int return_value_read_int_field_10;
  if(tmp_if_expr_9)
    tmp_if_expr_11 = (_Bool)1;

  else
  {
    return_value_read_int_field_10=read_int_field(file, &bdf->xdf.nrecord, (unsigned int)8);
    tmp_if_expr_11 = return_value_read_int_field_10 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_13;
  signed int return_value_read_int_field_12;
  if(tmp_if_expr_11)
    tmp_if_expr_13 = (_Bool)1;

  else
  {
    return_value_read_int_field_12=read_int_field(file, &recdur, (unsigned int)8);
    tmp_if_expr_13 = return_value_read_int_field_12 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_15;
  signed int return_value_read_int_field_14;
  if(tmp_if_expr_13)
    tmp_if_expr_15 = (_Bool)1;

  else
  {
    return_value_read_int_field_14=read_int_field(file, (signed int *)&bdf->xdf.numch, (unsigned int)4);
    tmp_if_expr_15 = return_value_read_int_field_14 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_15)
    return -1;

  else
  {
    bdf->xdf.rec_duration = (double)recdur;
    bdf->xdf.hdr_offset = (signed long int)hdrsize;
    sscanf(timestring, "%2i.%2i.%2i%2i.%2i.%2i", &ltm.tm_mday, &ltm.tm_mon, &ltm.tm_year, &ltm.tm_hour, &ltm.tm_min, &ltm.tm_sec);
    ltm.tm_mon = ltm.tm_mon - 1;
    if(!(ltm.tm_year >= 80))
      ltm.tm_year = ltm.tm_year + 100;

    bdf->rectime=mktime(&ltm);
    return retval;
  }
}

// ebdf_read_header
// file ebdffile.c line 591
static signed int ebdf_read_header(struct xdf *xdf)
{
  signed int retval = -1;
  unsigned int i;
  struct ebdf_file *ebdf = (struct ebdf_file *)((char *)xdf - (signed long int)0ul);
  struct _IO_FILE *file;
  signed int return_value_dup_cloexec_1;
  return_value_dup_cloexec_1=dup_cloexec(xdf->fd);
  file=fdopen(return_value_dup_cloexec_1, "rb");
  signed int return_value_ebdf_read_channels_header_4;
  if(file == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    signed int return_value_ebdf_read_file_header_2;
    return_value_ebdf_read_file_header_2=ebdf_read_file_header(ebdf, file);
    if(return_value_ebdf_read_file_header_2 == 0)
    {
      i = (unsigned int)0;
      for( ; !(i >= xdf->numch); i = i + 1u)
      {
        struct xdfch *return_value_xdf_alloc_channel_3;
        return_value_xdf_alloc_channel_3=xdf_alloc_channel(xdf);
        if(return_value_xdf_alloc_channel_3 == ((struct xdfch *)NULL))
          goto exit;

      }
      return_value_ebdf_read_channels_header_4=ebdf_read_channels_header(ebdf, file);
      if(return_value_ebdf_read_channels_header_4 == 0)
        retval = 0;

    }


  exit:
    ;
    fclose(file);
    lseek(xdf->fd, (signed long int)((xdf->numch + (unsigned int)1) * (unsigned int)256), 0);
    return retval;
  }
}

// ebdf_set_channel
// file ebdffile.c line 238
static signed int ebdf_set_channel(struct xdfch *ch, enum xdffield field, union optval val, signed int prevretval)
{
  struct ebdf_channel *ebdfch = (struct ebdf_channel *)((char *)ch - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_CF_LABEL)
      strncpy(ebdfch->label, val.str, sizeof(char [17l]) /*17ul*/  - (unsigned long int)1);

    else
      if((signed int)field == XDF_CF_UNIT)
        strncpy(ebdfch->unit, val.str, sizeof(char [9l]) /*9ul*/  - (unsigned long int)1);

      else
        if((signed int)field == XDF_CF_TRANSDUCTER)
          strncpy(ebdfch->transducter, val.str, sizeof(char [81l]) /*81ul*/  - (unsigned long int)1);

        else
          if((signed int)field == XDF_CF_PREFILTERING)
            strncpy(ebdfch->prefiltering, val.str, sizeof(char [81l]) /*81ul*/  - (unsigned long int)1);

          else
            if((signed int)field == XDF_CF_RESERVED)
              strncpy(ebdfch->reserved, val.str, sizeof(char [33l]) /*33ul*/  - (unsigned long int)1);

            else
              retval = prevretval;
    return retval;
  }
}

// ebdf_set_conf
// file ebdffile.c line 304
static signed int ebdf_set_conf(struct xdf *xdf, enum xdffield field, union optval val, signed int prevretval)
{
  struct ebdf_file *ebdf = (struct ebdf_file *)((char *)xdf - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_F_SUBJ_DESC)
      strncpy(ebdf->subjstr, val.str, sizeof(char [81l]) /*81ul*/  - (unsigned long int)1);

    else
      if((signed int)field == XDF_F_SESS_DESC)
        strncpy(ebdf->recstr, val.str, sizeof(char [81l]) /*81ul*/  - (unsigned long int)1);

      else
        if((signed int)field == XDF_F_RECTIME)
          ebdf->rectime = (signed long int)val.d;

        else
          retval = prevretval;
    return retval;
  }
}

// ebdf_write_channels_header
// file ebdffile.c line 404
static signed int ebdf_write_channels_header(struct ebdf_file *bdf, struct _IO_FILE *file)
{
  struct xdfch *ch = bdf->xdf.channels;
  signed int return_value_fprintf_1;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_1=fprintf(file, "%-16.16s", (const void *)((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->label);
    if(!(return_value_fprintf_1 >= 0))
      return -1;

  }
  ch = bdf->xdf.channels;
  signed int return_value_fprintf_2;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_2=fprintf(file, "%-80.80s", (const void *)((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->transducter);
    if(!(return_value_fprintf_2 >= 0))
      return -1;

  }
  ch = bdf->xdf.channels;
  signed int return_value_fprintf_3;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_3=fprintf(file, "%-8.8s", (const void *)((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->unit);
    if(!(return_value_fprintf_3 >= 0))
      return -1;

  }
  ch = bdf->xdf.channels;
  signed int return_value_fprintf_4;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_4=fprintf(file, "%-8i", (signed int)ch->physical_mm[(signed long int)0]);
    if(!(return_value_fprintf_4 >= 0))
      return -1;

  }
  ch = bdf->xdf.channels;
  signed int return_value_fprintf_5;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_5=fprintf(file, "%-8i", (signed int)ch->physical_mm[(signed long int)1]);
    if(!(return_value_fprintf_5 >= 0))
      return -1;

  }
  ch = bdf->xdf.channels;
  signed int return_value_fprintf_6;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_6=fprintf(file, "%-8i", (signed int)ch->digital_mm[(signed long int)0]);
    if(!(return_value_fprintf_6 >= 0))
      return -1;

  }
  ch = bdf->xdf.channels;
  signed int return_value_fprintf_7;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_7=fprintf(file, "%-8i", (signed int)ch->digital_mm[(signed long int)1]);
    if(!(return_value_fprintf_7 >= 0))
      return -1;

  }
  ch = bdf->xdf.channels;
  signed int return_value_fprintf_8;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_8=fprintf(file, "%-80.80s", (const void *)((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->prefiltering);
    if(!(return_value_fprintf_8 >= 0))
      return -1;

  }
  ch = bdf->xdf.channels;
  signed int return_value_fprintf_9;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_9=fprintf(file, "%-8u", bdf->xdf.ns_per_rec);
    if(!(return_value_fprintf_9 >= 0))
      return -1;

  }
  ch = bdf->xdf.channels;
  signed int return_value_fprintf_10;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_10=fprintf(file, "%-32.32s", (const void *)((struct ebdf_channel *)((char *)ch - (signed long int)0ul))->reserved);
    if(!(return_value_fprintf_10 >= 0))
      return -1;

  }
  return 0;
}

// ebdf_write_file_header
// file ebdffile.c line 361
static signed int ebdf_write_file_header(struct ebdf_file *ebdf, struct _IO_FILE *file)
{
  char timestring[17l];
  unsigned int headersize = (unsigned int)256 + ebdf->xdf.numch * (unsigned int)256;
  signed int retval;
  const unsigned char *mkey;
  enum xdffiletype type = ebdf->xdf.ops->type;
  struct tm ltm;
  const unsigned char *tmp_if_expr_1;
  if((signed int)type == XDF_BDF)
    tmp_if_expr_1 = bdf_magickey;

  else
    tmp_if_expr_1 = edf_magickey;
  mkey = tmp_if_expr_1;
  localtime_r(&ebdf->rectime, &ltm);
  strftime(timestring, sizeof(char [17l]) /*17ul*/ , "%d.%m.%y%H.%M.%S", &ltm);
  unsigned long int return_value_fwrite_2;
  return_value_fwrite_2=fwrite((const void *)mkey, (unsigned long int)8, (unsigned long int)1, file);
  if(!(return_value_fwrite_2 >= 1ul))
    return -1;

  else
  {
    retval=fprintf(file, "%-80.80s%-80.80s%16s%-8u%-44.44s%-8i%-8u%-4u", (const void *)ebdf->subjstr, (const void *)ebdf->recstr, (const void *)timestring, headersize, (signed int)type == XDF_BDF ? "24BIT" : "EDF", (signed int)-1, (unsigned int)1, ebdf->xdf.numch);
    if(!(retval >= 0))
      return -1;

    else
      return 0;
  }
}

// ebdf_write_header
// file ebdffile.c line 459
static signed int ebdf_write_header(struct xdf *xdf)
{
  signed int retval = 0;
  struct ebdf_file *bdf = (struct ebdf_file *)((char *)xdf - (signed long int)0ul);
  struct _IO_FILE *file;
  signed int return_value_dup_cloexec_1;
  return_value_dup_cloexec_1=dup_cloexec(xdf->fd);
  file=fdopen(return_value_dup_cloexec_1, "wb");
  _Bool tmp_if_expr_4;
  signed int return_value_ebdf_write_channels_header_3;
  _Bool tmp_if_expr_7;
  signed int return_value_fclose_6;
  if(file == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    signed int return_value_ebdf_write_file_header_2;
    return_value_ebdf_write_file_header_2=ebdf_write_file_header(bdf, file);
    if(!(return_value_ebdf_write_file_header_2 == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_ebdf_write_channels_header_3=ebdf_write_channels_header(bdf, file);
      tmp_if_expr_4 = return_value_ebdf_write_channels_header_3 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      retval = -1;

    signed int return_value_fflush_5;
    return_value_fflush_5=fflush(file);
    if(!(return_value_fflush_5 == 0))
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      return_value_fclose_6=fclose(file);
      tmp_if_expr_7 = return_value_fclose_6 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
      retval = -1;

    lseek(xdf->fd, (signed long int)((xdf->numch + (unsigned int)1) * (unsigned int)256), 0);
    return retval;
  }
}

// find_entry
// file xdfevent.c line 31
static signed int find_entry(struct eventtable *table, signed int code, const char *s)
{
  unsigned int i = (unsigned int)0;
  signed int return_value_strcmp_1;
  for( ; !(i >= table->nentry); i = i + 1u)
    if((table->entry + (signed long int)i)->code == code)
    {
      if((s == ((const char *)NULL)) == ((table->entry + (signed long int)i)->label == ((char *)NULL)))
      {
        if(!(s == ((const char *)NULL)))
        {
          return_value_strcmp_1=strcmp((table->entry + (signed long int)i)->label, s);
          if(return_value_strcmp_1 == 0)
            return (signed int)i;

        }

      }

    }

  return -1;
}

// find_match
// file xdftypes.c line 507
static _Bool find_match(enum xdftype *match, struct data_information *tinfo, const enum xdftype *tp, signed int ntypes, unsigned int criterions)
{
  struct data_information *info;
  signed int i;
  signed int inc = 1;
  signed int initval = 1;
  signed int m_int = 1;
  signed int m_signed = 1;
  signed int m_size = 1;
  _Bool tint = tinfo->is_int;
  _Bool tsigned = tinfo->is_signed;
  unsigned char tsize = tinfo->size;
  m_int = (signed int)!((criterions & (unsigned int)1) != 0u);
  m_signed = (signed int)!((criterions & (unsigned int)2) != 0u);
  m_size = (signed int)!((criterions & (unsigned int)4) != 0u);
  if((4u & criterions) == 0u)
  {
    initval = ntypes - 1;
    inc = -1;
  }

  i = initval;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  for( ; i >= 0 && !(i >= ntypes); i = i + inc)
  {
    info = &data_info[(signed long int)tp[(signed long int)i]];
    if(!(m_int == 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = info->is_int == tint ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
    {
      if(!(m_signed == 0))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = info->is_signed == tsigned ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
      {
        if(!(m_size == 0))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = (signed int)info->size >= (signed int)tsize ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
        {
          *match = tp[(signed long int)i];
          return (_Bool)1;
        }

      }

    }

  }
  return (_Bool)0;
}

// finish_record
// file xdffile.c line 590
static signed int finish_record(struct xdf *xdf)
{
  char *buffer = xdf->buff + (signed long int)(xdf->sample_size * xdf->ns_buff);
  unsigned int ns = xdf->ns_per_rec - xdf->ns_buff;
  unsigned int tmp_post_1;
  if(xdf->ns_buff == 0u)
    return 0;

  else
  {
    do
    {
      tmp_post_1 = ns;
      ns = ns - 1u;
      if(tmp_post_1 == 0u)
        break;

      memset((void *)buffer, 0, (unsigned long int)xdf->sample_size);
      buffer = buffer + (signed long int)xdf->sample_size;
    }
    while((_Bool)1);
    signed int return_value_disk_transfer_2;
    return_value_disk_transfer_2=disk_transfer(xdf);
    return return_value_disk_transfer_2;
  }
}

// finish_transfer_thread
// file xdffile.c line 562
static signed int finish_transfer_thread(struct xdf *xdf)
{
  pthread_mutex_lock(&xdf->mtx);
  while(!(xdf->order == 0))
  {
    if(!(xdf->reportval == 0))
      break;

    pthread_cond_wait(&xdf->cond, &xdf->mtx);
  }
  xdf->order = 2;
  pthread_cond_signal(&xdf->cond);
  pthread_mutex_unlock(&xdf->mtx);
  pthread_join(xdf->thid, (void **)(void *)0);
  pthread_mutex_destroy(&xdf->mtx);
  pthread_cond_destroy(&xdf->cond);
  return 0;
}

// free_transfer_objects
// file xdffile.c line 458
static void free_transfer_objects(struct xdf *xdf)
{
  free((void *)xdf->convdata);
  free((void *)xdf->batch);
  free((void *)xdf->buff);
  free((void *)xdf->backbuff);
  free(xdf->tmpbuff[(signed long int)0]);
  free(xdf->tmpbuff[(signed long int)1]);
  xdf->convdata = (struct convertion_data *)(void *)0;
  xdf->batch = (struct data_batch *)(void *)0;
  xdf->backbuff = (char *)(void *)0;
  xdf->buff = xdf->backbuff;
  xdf->tmpbuff[(signed long int)1] = (void *)0;
  xdf->tmpbuff[(signed long int)0] = xdf->tmpbuff[(signed long int)1];
}

// gdf1_complete_file
// file gdf1.c line 874
static signed int gdf1_complete_file(struct xdf *xdf)
{
  signed int retval = 0;
  signed long int numrec = (signed long int)xdf->nrecord;
  struct _IO_FILE *file;
  signed int return_value_dup_cloexec_1;
  return_value_dup_cloexec_1=dup_cloexec(xdf->fd);
  file=fdopen(return_value_dup_cloexec_1, "wb");
  signed long int evt_sect = xdf->hdr_offset + (signed long int)((unsigned int)xdf->nrecord * xdf->filerec_size);
  _Bool tmp_if_expr_3;
  signed int return_value_fseek_2;
  if(file == ((struct _IO_FILE *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_fseek_2=fseek(file, evt_sect, 0);
    tmp_if_expr_3 = return_value_fseek_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  signed int return_value_gdf1_write_event_table_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_gdf1_write_event_table_4=gdf1_write_event_table((struct gdf1_file *)((char *)xdf - (signed long int)0ul), file);
    tmp_if_expr_5 = return_value_gdf1_write_event_table_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_fseek_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_fseek_6=fseek(file, (signed long int)236, 0);
    tmp_if_expr_7 = return_value_fseek_6 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  signed int return_value_write64bval_8;
  if(tmp_if_expr_7)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_write64bval_8=write64bval(file, (unsigned int)1, (const void *)&numrec);
    tmp_if_expr_9 = return_value_write64bval_8 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_11;
  signed int return_value_fclose_10;
  if(tmp_if_expr_9)
    tmp_if_expr_11 = (_Bool)1;

  else
  {
    return_value_fclose_10=fclose(file);
    tmp_if_expr_11 = return_value_fclose_10 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_11)
    retval = -1;

  return retval;
}

// gdf1_get_channel
// file gdf1.c line 264
static signed int gdf1_get_channel(struct xdfch *ch, enum xdffield field, union optval *val, signed int prevretval)
{
  struct gdf1_channel *gdf1ch = (struct gdf1_channel *)((char *)ch - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_CF_LABEL)
      val->str = gdf1ch->label;

    else
      if((signed int)field == XDF_CF_UNIT)
        val->str = gdf1ch->unit;

      else
        if((signed int)field == XDF_CF_TRANSDUCTER)
          val->str = gdf1ch->transducter;

        else
          if((signed int)field == XDF_CF_PREFILTERING)
            val->str = gdf1ch->prefiltering;

          else
            if((signed int)field == XDF_CF_RESERVED)
              val->str = gdf1ch->reserved;

            else
              retval = prevretval;
    return retval;
  }
}

// gdf1_get_conf
// file gdf1.c line 325
static signed int gdf1_get_conf(struct xdf *xdf, enum xdffield field, union optval *val, signed int prevretval)
{
  struct gdf1_file *gdf1 = (struct gdf1_file *)((char *)xdf - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_F_SUBJ_DESC)
      val->str = gdf1->subjstr;

    else
      if((signed int)field == XDF_F_SESS_DESC)
        val->str = gdf1->recstr;

      else
        if((signed int)field == XDF_F_RECTIME)
          val->d = (double)gdf1->rectime;

        else
          retval = prevretval;
    return retval;
  }
}

// gdf1_interpret_events
// file gdf1.c line 767
static signed int gdf1_interpret_events(struct gdf1_file *gdf1, unsigned int nevent, double fs, unsigned int *pos, unsigned short int *code, unsigned short int *channel, unsigned int *dur)
{
  unsigned int i;
  signed int evttype;
  char desc[32l];
  struct xdfevent evt;
  i = (unsigned int)0;
  double tmp_if_expr_1;
  for( ; !(i >= nevent); i = i + 1u)
  {
    if(!(channel[(signed long int)i] == 0))
      snprintf(desc, sizeof(char [32l]) /*32ul*/ , "ch:%u", (unsigned int)channel[(signed long int)i]);

    else
      strcpy(desc, "ch:all");
    evttype=add_event_entry(gdf1->xdf.table, (signed int)code[(signed long int)i], desc);
    if(!(evttype >= 0))
      return -1;

    evt.onset = (double)pos[(signed long int)i] / fs;
    if(dur == ((unsigned int *)NULL))
      tmp_if_expr_1 = (double)-1;

    else
      tmp_if_expr_1 = (double)dur[(signed long int)i] / fs;
    evt.duration = tmp_if_expr_1;
    evt.evttype = evttype;
    signed int return_value_add_event_2;
    return_value_add_event_2=add_event(gdf1->xdf.table, &evt);
    if(!(return_value_add_event_2 == 0))
      return -1;

  }
  return 0;
}

// gdf1_read_channels_header
// file gdf1.c line 650
static signed int gdf1_read_channels_header(struct gdf1_file *gdf1, struct _IO_FILE *file)
{
  struct xdfch *ch;
  signed int i;
  unsigned int offset = (unsigned int)0;
  ch = gdf1->xdf.channels;
  signed int return_value_read_string_field_1;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_1=read_string_field(file, ((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->label, (unsigned int)16);
    if(!(return_value_read_string_field_1 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  signed int return_value_read_string_field_2;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_2=read_string_field(file, ((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->transducter, (unsigned int)80);
    if(!(return_value_read_string_field_2 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  signed int return_value_read_string_field_3;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_3=read_string_field(file, ((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->unit, (unsigned int)8);
    if(!(return_value_read_string_field_3 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int return_value_read64bval_4;
    return_value_read64bval_4=read64bval(file, (unsigned int)1, (void *)&ch->physical_mm[(signed long int)0]);
    if(!(return_value_read64bval_4 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int return_value_read64bval_5;
    return_value_read64bval_5=read64bval(file, (unsigned int)1, (void *)&ch->physical_mm[(signed long int)1]);
    if(!(return_value_read64bval_5 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed long int gdf1_read_channels_header__1__6__1__val;
    signed int return_value_read64bval_6;
    return_value_read64bval_6=read64bval(file, (unsigned int)1, (void *)&gdf1_read_channels_header__1__6__1__val);
    if(!(return_value_read64bval_6 == 0))
      return -1;

    ch->digital_mm[(signed long int)0] = (double)gdf1_read_channels_header__1__6__1__val;
  }
  ch = gdf1->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed long int val;
    signed int return_value_read64bval_7;
    return_value_read64bval_7=read64bval(file, (unsigned int)1, (void *)&val);
    if(!(return_value_read64bval_7 == 0))
      return -1;

    ch->digital_mm[(signed long int)1] = (double)val;
  }
  ch = gdf1->xdf.channels;
  signed int return_value_read_string_field_8;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_8=read_string_field(file, ((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->prefiltering, (unsigned int)80);
    if(!(return_value_read_string_field_8 == 0))
      return -1;

  }
  i = 0;
  ch = gdf1->xdf.channels;
  signed int tmp_post_11;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    unsigned int gdf1_read_channels_header__1__9__1__val;
    signed int return_value_read32bval_9;
    return_value_read32bval_9=read32bval(file, (unsigned int)1, (void *)&gdf1_read_channels_header__1__9__1__val);
    if(!(return_value_read32bval_9 == 0))
      return -1;

    tmp_post_11 = i;
    i = i + 1;
    if(tmp_post_11 == 0)
      ch->owner->ns_per_rec = gdf1_read_channels_header__1__9__1__val;

    else
      if(!(ch->owner->ns_per_rec == gdf1_read_channels_header__1__9__1__val))
      {
        signed int *return_value___errno_location_10;
        return_value___errno_location_10=__errno_location();
        *return_value___errno_location_10 = 1;
        return -1;
      }

  }
  ch = gdf1->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    unsigned int type;
    signed int xdftype;
    signed int return_value_read32bval_12;
    return_value_read32bval_12=read32bval(file, (unsigned int)1, (void *)&type);
    if(!(return_value_read32bval_12 == 0))
      return -1;

    enum xdftype return_value_get_xdfch_type_14;
    return_value_get_xdfch_type_14=get_xdfch_type(type);
    xdftype = (signed int)return_value_get_xdfch_type_14;
    if(xdftype == -1)
    {
      signed int *return_value___errno_location_13;
      return_value___errno_location_13=__errno_location();
      *return_value___errno_location_13 = 84;
      return -1;
    }

    ch->infiletype = (enum xdftype)xdftype;
    ch->inmemtype = ch->infiletype;
    ch->digital_inmem = 1;
    ch->offset = (signed int)offset;
    signed int return_value_xdf_get_datasize_15;
    return_value_xdf_get_datasize_15=xdf_get_datasize(ch->inmemtype);
    offset = offset + (unsigned int)return_value_xdf_get_datasize_15;
  }
  gdf1->xdf.filerec_size = offset * gdf1->xdf.ns_per_rec;
  ch = gdf1->xdf.channels;
  signed int return_value_read_string_field_16;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_16=read_string_field(file, ((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->reserved, (unsigned int)32);
    if(!(return_value_read_string_field_16 == 0))
      return -1;

  }
  return 0;
}

// gdf1_read_event_hdr
// file gdf1.c line 736
static signed int gdf1_read_event_hdr(struct gdf1_file *gdf1, struct _IO_FILE *file, unsigned int *nevent, unsigned char *mode, double *fs)
{
  signed long int flen;
  signed long int evt_sect;
  unsigned char fs24[8l];
  signed int return_value_fseek_1;
  return_value_fseek_1=fseek(file, 0L, 2);
  _Bool tmp_if_expr_2;
  if(!(return_value_fseek_1 == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    flen=ftell(file);
    tmp_if_expr_2 = flen < (signed long int)0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  unsigned long int return_value_fread_4;
  _Bool tmp_if_expr_7;
  signed int return_value_read24bval_6;
  _Bool tmp_if_expr_9;
  signed int return_value_read32bval_8;
  if(tmp_if_expr_2)
    return -1;

  else
  {
    evt_sect = gdf1->xdf.hdr_offset + (signed long int)((unsigned int)gdf1->xdf.nrecord * gdf1->xdf.filerec_size);
    if(evt_sect >= flen || !(gdf1->xdf.nrecord >= 0))
    {
      *nevent = (unsigned int)0;
      return 0;
    }

    else
    {
      signed int return_value_fseek_3;
      return_value_fseek_3=fseek(file, evt_sect, 0);
      if(!(return_value_fseek_3 == 0))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_fread_4=fread((void *)mode, (unsigned long int)1, (unsigned long int)1, file);
        tmp_if_expr_5 = (return_value_fread_4 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        tmp_if_expr_7 = (_Bool)1;

      else
      {
        return_value_read24bval_6=read24bval(file, (unsigned int)1, (void *)fs24);
        tmp_if_expr_7 = return_value_read24bval_6 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_7)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        return_value_read32bval_8=read32bval(file, (unsigned int)1, (void *)nevent);
        tmp_if_expr_9 = return_value_read32bval_8 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_9)
        return -1;

      else
      {
        *fs = (double)((signed int)fs24[(signed long int)0] + 256 * (signed int)fs24[(signed long int)1] + 65536 * (signed int)fs24[(signed long int)2]);
        return 0;
      }
    }
  }
}

// gdf1_read_event_table
// file gdf1.c line 797
static signed int gdf1_read_event_table(struct gdf1_file *gdf1, struct _IO_FILE *file)
{
  signed int retcode = 0;
  unsigned char mode;
  double fs;
  unsigned int nevt;
  unsigned int *onset = (unsigned int *)(void *)0;
  unsigned int *dur = (unsigned int *)(void *)0;
  unsigned short int *code = (unsigned short int *)(void *)0;
  unsigned short int *ch = (unsigned short int *)(void *)0;
  signed int return_value_gdf1_read_event_hdr_1;
  return_value_gdf1_read_event_hdr_1=gdf1_read_event_hdr(gdf1, file, &nevt, &mode, &fs);
  _Bool tmp_if_expr_7;
  signed int return_value_read32bval_6;
  _Bool tmp_if_expr_9;
  signed int return_value_read16bval_8;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_11;
  signed int return_value_read16bval_10;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_14;
  signed int return_value_read16bval_13;
  _Bool tmp_if_expr_17;
  signed int return_value_gdf1_interpret_events_16;
  if(!(return_value_gdf1_read_event_hdr_1 == 0))
    return -1;

  else
    if(nevt == 0u)
      return 0;

    else
    {
      void *return_value_calloc_2;
      return_value_calloc_2=calloc((unsigned long int)nevt, sizeof(unsigned int) /*4ul*/ );
      onset = (unsigned int *)return_value_calloc_2;
      void *return_value_calloc_3;
      return_value_calloc_3=calloc((unsigned long int)nevt, sizeof(unsigned short int) /*2ul*/ );
      code = (unsigned short int *)return_value_calloc_3;
      void *return_value_calloc_4;
      return_value_calloc_4=calloc((unsigned long int)nevt, sizeof(unsigned short int) /*2ul*/ );
      ch = (unsigned short int *)return_value_calloc_4;
      void *return_value_calloc_5;
      return_value_calloc_5=calloc((unsigned long int)nevt, sizeof(unsigned int) /*4ul*/ );
      dur = (unsigned int *)return_value_calloc_5;
      if(ch == ((unsigned short int *)NULL) || code == ((unsigned short int *)NULL) || dur == ((unsigned int *)NULL) || onset == ((unsigned int *)NULL))
        tmp_if_expr_7 = (_Bool)1;

      else
      {
        return_value_read32bval_6=read32bval(file, nevt, (void *)onset);
        tmp_if_expr_7 = return_value_read32bval_6 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_7)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        return_value_read16bval_8=read16bval(file, nevt, (void *)code);
        tmp_if_expr_9 = return_value_read16bval_8 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_9)
        tmp_if_expr_12 = (_Bool)1;

      else
      {
        if((signed int)mode == 3)
        {
          return_value_read16bval_10=read16bval(file, nevt, (void *)ch);
          tmp_if_expr_11 = return_value_read16bval_10 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_11 = (_Bool)0;
        tmp_if_expr_12 = tmp_if_expr_11 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_12)
        tmp_if_expr_15 = (_Bool)1;

      else
      {
        if((signed int)mode == 3)
        {
          return_value_read16bval_13=read16bval(file, nevt, (void *)dur);
          tmp_if_expr_14 = return_value_read16bval_13 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_14 = (_Bool)0;
        tmp_if_expr_15 = tmp_if_expr_14 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_15)
        tmp_if_expr_17 = (_Bool)1;

      else
      {
        return_value_gdf1_interpret_events_16=gdf1_interpret_events(gdf1, nevt, fs, onset, code, ch, dur);
        tmp_if_expr_17 = return_value_gdf1_interpret_events_16 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_17)
        retcode = -1;

      free((void *)onset);
      free((void *)code);
      free((void *)ch);
      free((void *)dur);
      return retcode;
    }
}

// gdf1_read_file_header
// file gdf1.c line 585
static signed int gdf1_read_file_header(struct gdf1_file *gdf1, struct _IO_FILE *file)
{
  char timestring[17l];
  unsigned int nch;
  unsigned int recduration[2l];
  signed long int nrec;
  signed long int hdrsize;
  struct tm ltm = { .tm_sec=0, .tm_min=0, .tm_hour=0, .tm_mday=0, .tm_mon=0,
    .tm_year=0, .tm_wday=0, .tm_yday=0, .tm_isdst=-1,
    .tm_gmtoff=0l, .tm_zone=((const char *)NULL) };
  fseek(file, (signed long int)8, 0);
  signed int return_value_read_string_field_1;
  return_value_read_string_field_1=read_string_field(file, gdf1->subjstr, (unsigned int)80);
  _Bool tmp_if_expr_3;
  signed int return_value_read_string_field_2;
  if(!(return_value_read_string_field_1 == 0))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_read_string_field_2=read_string_field(file, gdf1->recstr, (unsigned int)80);
    tmp_if_expr_3 = return_value_read_string_field_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  signed int return_value_read_string_field_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_read_string_field_4=read_string_field(file, timestring, (unsigned int)16);
    tmp_if_expr_5 = return_value_read_string_field_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_read64bval_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_read64bval_6=read64bval(file, (unsigned int)1, (void *)&hdrsize);
    tmp_if_expr_7 = return_value_read64bval_6 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  signed int return_value_read64bval_8;
  if(tmp_if_expr_7)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_read64bval_8=read64bval(file, (unsigned int)1, (void *)&gdf1->epid);
    tmp_if_expr_9 = return_value_read64bval_8 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_11;
  signed int return_value_read64bval_10;
  if(tmp_if_expr_9)
    tmp_if_expr_11 = (_Bool)1;

  else
  {
    return_value_read64bval_10=read64bval(file, (unsigned int)1, (void *)&gdf1->lid);
    tmp_if_expr_11 = return_value_read64bval_10 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_13;
  signed int return_value_read64bval_12;
  if(tmp_if_expr_11)
    tmp_if_expr_13 = (_Bool)1;

  else
  {
    return_value_read64bval_12=read64bval(file, (unsigned int)1, (void *)&gdf1->tid);
    tmp_if_expr_13 = return_value_read64bval_12 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_15;
  signed int return_value_read_string_field_14;
  if(tmp_if_expr_13)
    tmp_if_expr_15 = (_Bool)1;

  else
  {
    return_value_read_string_field_14=read_string_field(file, gdf1->sn, (unsigned int)20);
    tmp_if_expr_15 = return_value_read_string_field_14 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_17;
  signed int return_value_read64bval_16;
  if(tmp_if_expr_15)
    tmp_if_expr_17 = (_Bool)1;

  else
  {
    return_value_read64bval_16=read64bval(file, (unsigned int)1, (void *)&nrec);
    tmp_if_expr_17 = return_value_read64bval_16 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_19;
  signed int return_value_read32bval_18;
  if(tmp_if_expr_17)
    tmp_if_expr_19 = (_Bool)1;

  else
  {
    return_value_read32bval_18=read32bval(file, (unsigned int)2, (void *)recduration);
    tmp_if_expr_19 = return_value_read32bval_18 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_21;
  signed int return_value_read32bval_20;
  if(tmp_if_expr_19)
    tmp_if_expr_21 = (_Bool)1;

  else
  {
    return_value_read32bval_20=read32bval(file, (unsigned int)1, (void *)&nch);
    tmp_if_expr_21 = return_value_read32bval_20 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_21)
    return -1;

  else
  {
    gdf1->xdf.rec_duration = (double)recduration[(signed long int)0] / (double)recduration[(signed long int)1];
    gdf1->xdf.hdr_offset = hdrsize;
    gdf1->xdf.nrecord = (signed int)nrec;
    gdf1->xdf.numch = nch;
    sscanf(timestring, "%4i%2i%2i%2i%2i%2i", &ltm.tm_year, &ltm.tm_mon, &ltm.tm_mday, &ltm.tm_hour, &ltm.tm_min, &ltm.tm_sec);
    ltm.tm_mon = ltm.tm_mon - 1;
    ltm.tm_year = ltm.tm_year - 1900;
    gdf1->rectime=mktime(&ltm);
    return 0;
  }
}

// gdf1_read_header
// file gdf1.c line 837
static signed int gdf1_read_header(struct xdf *xdf)
{
  signed int retval = -1;
  unsigned int i;
  struct xdfch **curr = &xdf->channels;
  struct gdf1_file *gdf1 = (struct gdf1_file *)((char *)xdf - (signed long int)0ul);
  struct _IO_FILE *file;
  signed int return_value_dup_cloexec_1;
  return_value_dup_cloexec_1=dup_cloexec(xdf->fd);
  file=fdopen(return_value_dup_cloexec_1, "rb");
  signed int return_value_gdf1_read_channels_header_3;
  _Bool tmp_if_expr_5;
  signed int return_value_gdf1_read_event_table_4;
  if(file == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    signed int return_value_gdf1_read_file_header_2;
    return_value_gdf1_read_file_header_2=gdf1_read_file_header(gdf1, file);
    if(return_value_gdf1_read_file_header_2 == 0)
    {
      i = (unsigned int)0;
      for( ; !(i >= xdf->numch); i = i + 1u)
      {
        *curr=xdf_alloc_channel(xdf);
        if(*curr == ((struct xdfch *)NULL))
          goto exit;

        curr = &(*curr)->next;
      }
      return_value_gdf1_read_channels_header_3=gdf1_read_channels_header(gdf1, file);
      if(!(return_value_gdf1_read_channels_header_3 == 0))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_gdf1_read_event_table_4=gdf1_read_event_table(gdf1, file);
        tmp_if_expr_5 = return_value_gdf1_read_event_table_4 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_5)
        retval = 0;

    }


  exit:
    ;
    fclose(file);
    lseek(xdf->fd, (signed long int)((xdf->numch + (unsigned int)1) * (unsigned int)256), 0);
    return retval;
  }
}

// gdf1_set_channel
// file gdf1.c line 231
static signed int gdf1_set_channel(struct xdfch *ch, enum xdffield field, union optval val, signed int prevretval)
{
  struct gdf1_channel *gdf1ch = (struct gdf1_channel *)((char *)ch - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_CF_LABEL)
      strncpy(gdf1ch->label, val.str, sizeof(char [17l]) /*17ul*/  - (unsigned long int)1);

    else
      if((signed int)field == XDF_CF_UNIT)
        strncpy(gdf1ch->unit, val.str, sizeof(char [9l]) /*9ul*/  - (unsigned long int)1);

      else
        if((signed int)field == XDF_CF_TRANSDUCTER)
          strncpy(gdf1ch->transducter, val.str, sizeof(char [81l]) /*81ul*/  - (unsigned long int)1);

        else
          if((signed int)field == XDF_CF_PREFILTERING)
            strncpy(gdf1ch->prefiltering, val.str, sizeof(char [81l]) /*81ul*/  - (unsigned long int)1);

          else
            if((signed int)field == XDF_CF_RESERVED)
              strncpy(gdf1ch->reserved, val.str, sizeof(char [33l]) /*33ul*/  - (unsigned long int)1);

            else
              retval = prevretval;
    return retval;
  }
}

// gdf1_set_conf
// file gdf1.c line 297
static signed int gdf1_set_conf(struct xdf *xdf, enum xdffield field, union optval val, signed int prevretval)
{
  struct gdf1_file *gdf1 = (struct gdf1_file *)((char *)xdf - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_F_SUBJ_DESC)
      strncpy(gdf1->subjstr, val.str, sizeof(char [81l]) /*81ul*/  - (unsigned long int)1);

    else
      if((signed int)field == XDF_F_SESS_DESC)
        strncpy(gdf1->recstr, val.str, sizeof(char [81l]) /*81ul*/  - (unsigned long int)1);

      else
        if((signed int)field == XDF_F_RECTIME)
          gdf1->rectime = (signed long int)val.d;

        else
          retval = prevretval;
    return retval;
  }
}

// gdf1_setup_events
// file gdf1.c line 503
static signed int gdf1_setup_events(struct eventtable *table, double fs, unsigned char *mode, unsigned int *pos, unsigned short int *code, unsigned short int *ch, unsigned int *dur)
{
  unsigned int i;
  unsigned int nevent = table->nevent;
  signed int codeval;
  signed int use_extevt = 0;
  unsigned int chval;
  const char *desc;
  struct xdfevent *evt;
  i = (unsigned int)0;
  _Bool tmp_if_expr_2;
  signed int return_value_sscanf_1;
  for( ; !(i >= nevent); i = i + 1u)
  {
    evt=get_event(table, i);
    pos[(signed long int)i] = (unsigned int)(fs * evt->onset);
    if(evt->duration > 0.000000)
    {
      dur[(signed long int)i] = (unsigned int)(fs * evt->duration);
      use_extevt = 1;
    }

    else
      dur[(signed long int)i] = (unsigned int)0;
    get_event_entry(table, (unsigned int)evt->evttype, &codeval, &desc);
    code[(signed long int)i] = (unsigned short int)codeval;
    ch[(signed long int)i] = (unsigned short int)0;
    if(!(desc == ((const char *)NULL)))
    {
      return_value_sscanf_1=sscanf(desc, "ch:%u", &chval);
      tmp_if_expr_2 = return_value_sscanf_1 >= 1 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      ch[(signed long int)i] = (unsigned short int)chval;
      use_extevt = 1;
    }

    else
      ch[(signed long int)i] = (unsigned short int)0;
  }
  *mode = (unsigned char)(use_extevt != 0 ? 3 : 1);
  return 0;
}

// gdf1_write_channels_header
// file gdf1.c line 413
static signed int gdf1_write_channels_header(struct gdf1_file *gdf1, struct _IO_FILE *file)
{
  struct xdfch *ch = gdf1->xdf.channels;
  signed int return_value_fprintf_1;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_1=fprintf(file, "%-16.16s", (const void *)((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->label);
    if(!(return_value_fprintf_1 >= 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  signed int return_value_fprintf_2;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_2=fprintf(file, "%-80.80s", (const void *)((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->transducter);
    if(!(return_value_fprintf_2 >= 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  signed int return_value_fprintf_3;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_3=fprintf(file, "%-8.8s", (const void *)((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->unit);
    if(!(return_value_fprintf_3 >= 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  signed int return_value_write64bval_4;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write64bval_4=write64bval(file, (unsigned int)1, (const void *)&ch->physical_mm[(signed long int)0]);
    if(!(return_value_write64bval_4 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  signed int return_value_write64bval_5;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write64bval_5=write64bval(file, (unsigned int)1, (const void *)&ch->physical_mm[(signed long int)1]);
    if(!(return_value_write64bval_5 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed long int val = (signed long int)ch->digital_mm[(signed long int)0];
    signed int return_value_write64bval_6;
    return_value_write64bval_6=write64bval(file, (unsigned int)1, (const void *)&val);
    if(!(return_value_write64bval_6 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed long int gdf1_write_channels_header__1__7__1__val = (signed long int)ch->digital_mm[(signed long int)1];
    signed int return_value_write64bval_7;
    return_value_write64bval_7=write64bval(file, (unsigned int)1, (const void *)&gdf1_write_channels_header__1__7__1__val);
    if(!(return_value_write64bval_7 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  signed int return_value_fprintf_8;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_8=fprintf(file, "%-80.80s", (const void *)((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->prefiltering);
    if(!(return_value_fprintf_8 >= 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int nsprec = (signed int)gdf1->xdf.ns_per_rec;
    signed int return_value_write32bval_9;
    return_value_write32bval_9=write32bval(file, (unsigned int)1, (const void *)&nsprec);
    if(!(return_value_write32bval_9 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int type = (signed int)gdf1_types[(signed long int)ch->infiletype];
    signed int return_value_write32bval_10;
    return_value_write32bval_10=write32bval(file, (unsigned int)1, (const void *)&type);
    if(!(return_value_write32bval_10 == 0))
      return -1;

  }
  ch = gdf1->xdf.channels;
  signed int return_value_fprintf_11;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_11=fprintf(file, "%-32.32s", (const void *)((struct gdf1_channel *)((char *)ch - (signed long int)0ul))->reserved);
    if(!(return_value_fprintf_11 >= 0))
      return -1;

  }
  return 0;
}

// gdf1_write_event_table
// file gdf1.c line 536
static signed int gdf1_write_event_table(struct gdf1_file *gdf1, struct _IO_FILE *file)
{
  struct eventtable *table = gdf1->xdf.table;
  signed int retcode = 0;
  unsigned char mode;
  unsigned char fs24[3l];
  double fs = (double)gdf1->xdf.ns_per_rec / gdf1->xdf.rec_duration;
  unsigned int nevt = table->nevent;
  unsigned int *onset = (unsigned int *)(void *)0;
  unsigned int *dur = (unsigned int *)(void *)0;
  unsigned short int *code = (unsigned short int *)(void *)0;
  unsigned short int *ch = (unsigned short int *)(void *)0;
  _Bool tmp_if_expr_6;
  unsigned long int return_value_fwrite_5;
  _Bool tmp_if_expr_8;
  signed int return_value_write24bval_7;
  _Bool tmp_if_expr_10;
  signed int return_value_write32bval_9;
  _Bool tmp_if_expr_12;
  signed int return_value_write32bval_11;
  _Bool tmp_if_expr_14;
  signed int return_value_write16bval_13;
  _Bool tmp_if_expr_17;
  _Bool tmp_if_expr_16;
  signed int return_value_write16bval_15;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_19;
  signed int return_value_write16bval_18;
  if(nevt == 0u)
    return 0;

  else
  {
    fs24[(signed long int)0] = (unsigned char)((unsigned int)fs & (unsigned int)0x000000FF);
    fs24[(signed long int)1] = (unsigned char)(((unsigned int)fs & (unsigned int)0x0000FF00) / (unsigned int)256);
    fs24[(signed long int)2] = (unsigned char)(((unsigned int)fs & (unsigned int)0x00FF0000) / (unsigned int)65536);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)nevt * sizeof(unsigned int) /*4ul*/ );
    onset = (unsigned int *)return_value_malloc_1;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)nevt * sizeof(unsigned short int) /*2ul*/ );
    code = (unsigned short int *)return_value_malloc_2;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)nevt * sizeof(unsigned short int) /*2ul*/ );
    ch = (unsigned short int *)return_value_malloc_3;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc((unsigned long int)nevt * sizeof(unsigned int) /*4ul*/ );
    dur = (unsigned int *)return_value_malloc_4;
    if(ch == ((unsigned short int *)NULL) || code == ((unsigned short int *)NULL) || dur == ((unsigned int *)NULL) || onset == ((unsigned int *)NULL))
      retcode = -1;

    gdf1_setup_events(table, fs, &mode, onset, code, ch, dur);
    if(!(retcode == 0))
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_fwrite_5=fwrite((const void *)&mode, (unsigned long int)1, (unsigned long int)1, file);
      tmp_if_expr_6 = (return_value_fwrite_5 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
      tmp_if_expr_8 = (_Bool)1;

    else
    {
      return_value_write24bval_7=write24bval(file, (unsigned int)1, (const void *)fs24);
      tmp_if_expr_8 = return_value_write24bval_7 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_8)
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      return_value_write32bval_9=write32bval(file, (unsigned int)1, (const void *)&nevt);
      tmp_if_expr_10 = return_value_write32bval_9 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_10)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value_write32bval_11=write32bval(file, nevt, (const void *)onset);
      tmp_if_expr_12 = return_value_write32bval_11 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_12)
      tmp_if_expr_14 = (_Bool)1;

    else
    {
      return_value_write16bval_13=write16bval(file, nevt, (const void *)code);
      tmp_if_expr_14 = return_value_write16bval_13 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_14)
      tmp_if_expr_17 = (_Bool)1;

    else
    {
      if((signed int)mode == 3)
      {
        return_value_write16bval_15=write16bval(file, nevt, (const void *)ch);
        tmp_if_expr_16 = return_value_write16bval_15 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_16 = (_Bool)0;
      tmp_if_expr_17 = tmp_if_expr_16 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_17)
      tmp_if_expr_20 = (_Bool)1;

    else
    {
      if((signed int)mode == 3)
      {
        return_value_write16bval_18=write16bval(file, nevt, (const void *)dur);
        tmp_if_expr_19 = return_value_write16bval_18 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_19 = (_Bool)0;
      tmp_if_expr_20 = tmp_if_expr_19 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_20)
      retcode = -1;

    free((void *)onset);
    free((void *)code);
    free((void *)ch);
    free((void *)dur);
    return retcode;
  }
}

// gdf1_write_file_header
// file gdf1.c line 366
static signed int gdf1_write_file_header(struct gdf1_file *gdf1, struct _IO_FILE *file)
{
  char timestring[17l];
  unsigned int nch;
  unsigned int recduration[2l];
  signed long int nrec = (signed long int)-1;
  signed long int hdrsize;
  struct tm ltm;
  char key[9l];
  convert_recduration(gdf1->xdf.rec_duration, recduration);
  nrec = (signed long int)gdf1->xdf.nrecord;
  nch = gdf1->xdf.numch;
  hdrsize = (signed long int)((unsigned int)256 + gdf1->xdf.numch * (unsigned int)256);
  localtime_r(&gdf1->rectime, &ltm);
  strftime(timestring, sizeof(char [17l]) /*17ul*/ , "%Y%m%d%H%M%S00", &ltm);
  snprintf(key, sizeof(char [9l]) /*9ul*/ , "GDF 1.%02u", gdf1->version);
  unsigned long int return_value_fwrite_1;
  return_value_fwrite_1=fwrite((const void *)key, (unsigned long int)8, (unsigned long int)1, file);
  _Bool tmp_if_expr_4;
  signed int return_value_write64bval_3;
  _Bool tmp_if_expr_6;
  signed int return_value_write64bval_5;
  _Bool tmp_if_expr_8;
  signed int return_value_write64bval_7;
  _Bool tmp_if_expr_10;
  signed int return_value_write64bval_9;
  _Bool tmp_if_expr_12;
  signed int return_value_fprintf_11;
  _Bool tmp_if_expr_14;
  signed int return_value_write64bval_13;
  _Bool tmp_if_expr_16;
  signed int return_value_write32bval_15;
  _Bool tmp_if_expr_18;
  signed int return_value_write32bval_17;
  if(!(return_value_fwrite_1 >= 1ul))
    return -1;

  else
  {
    signed int return_value_fprintf_2;
    return_value_fprintf_2=fprintf(file, "%-80.80s%-80.80s%16s", (const void *)gdf1->subjstr, (const void *)gdf1->recstr, (const void *)timestring);
    if(!(return_value_fprintf_2 >= 0))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_write64bval_3=write64bval(file, (unsigned int)1, (const void *)&hdrsize);
      tmp_if_expr_4 = return_value_write64bval_3 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_write64bval_5=write64bval(file, (unsigned int)1, (const void *)&gdf1->epid);
      tmp_if_expr_6 = return_value_write64bval_5 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
      tmp_if_expr_8 = (_Bool)1;

    else
    {
      return_value_write64bval_7=write64bval(file, (unsigned int)1, (const void *)&gdf1->lid);
      tmp_if_expr_8 = return_value_write64bval_7 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_8)
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      return_value_write64bval_9=write64bval(file, (unsigned int)1, (const void *)&gdf1->tid);
      tmp_if_expr_10 = return_value_write64bval_9 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_10)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value_fprintf_11=fprintf(file, "%-20.20s", (const void *)gdf1->sn);
      tmp_if_expr_12 = return_value_fprintf_11 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_12)
      tmp_if_expr_14 = (_Bool)1;

    else
    {
      return_value_write64bval_13=write64bval(file, (unsigned int)1, (const void *)&nrec);
      tmp_if_expr_14 = return_value_write64bval_13 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_14)
      tmp_if_expr_16 = (_Bool)1;

    else
    {
      return_value_write32bval_15=write32bval(file, (unsigned int)2, (const void *)recduration);
      tmp_if_expr_16 = return_value_write32bval_15 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_16)
      tmp_if_expr_18 = (_Bool)1;

    else
    {
      return_value_write32bval_17=write32bval(file, (unsigned int)1, (const void *)&nch);
      tmp_if_expr_18 = return_value_write32bval_17 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_18)
      return -1;

    else
    {
      gdf1->xdf.hdr_offset = hdrsize;
      return 0;
    }
  }
}

// gdf1_write_header
// file gdf1.c line 480
static signed int gdf1_write_header(struct xdf *xdf)
{
  signed int retval = 0;
  struct gdf1_file *gdf1 = (struct gdf1_file *)((char *)xdf - (signed long int)0ul);
  struct _IO_FILE *file;
  signed int return_value_dup_cloexec_1;
  return_value_dup_cloexec_1=dup_cloexec(xdf->fd);
  file=fdopen(return_value_dup_cloexec_1, "wb");
  _Bool tmp_if_expr_4;
  signed int return_value_gdf1_write_channels_header_3;
  _Bool tmp_if_expr_7;
  signed int return_value_fclose_6;
  if(file == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    signed int return_value_gdf1_write_file_header_2;
    return_value_gdf1_write_file_header_2=gdf1_write_file_header(gdf1, file);
    if(!(return_value_gdf1_write_file_header_2 == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_gdf1_write_channels_header_3=gdf1_write_channels_header(gdf1, file);
      tmp_if_expr_4 = return_value_gdf1_write_channels_header_3 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      retval = -1;

    signed int return_value_fflush_5;
    return_value_fflush_5=fflush(file);
    if(!(return_value_fflush_5 == 0))
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      return_value_fclose_6=fclose(file);
      tmp_if_expr_7 = return_value_fclose_6 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
      retval = -1;

    lseek(xdf->fd, (signed long int)((xdf->numch + (unsigned int)1) * (unsigned int)256), 0);
    return retval;
  }
}

// gdf2_complete_file
// file gdf2.c line 1028
static signed int gdf2_complete_file(struct xdf *xdf)
{
  signed int retval = 0;
  signed long int numrec = (signed long int)xdf->nrecord;
  struct _IO_FILE *file;
  signed int return_value_dup_cloexec_1;
  return_value_dup_cloexec_1=dup_cloexec(xdf->fd);
  file=fdopen(return_value_dup_cloexec_1, "wb");
  signed long int evt_sect = xdf->hdr_offset + (signed long int)((unsigned int)xdf->nrecord * xdf->filerec_size);
  _Bool tmp_if_expr_3;
  signed int return_value_fseek_2;
  if(file == ((struct _IO_FILE *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_fseek_2=fseek(file, evt_sect, 0);
    tmp_if_expr_3 = return_value_fseek_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  signed int return_value_gdf2_write_event_table_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_gdf2_write_event_table_4=gdf2_write_event_table((struct gdf2_file *)((char *)xdf - (signed long int)0ul), file);
    tmp_if_expr_5 = return_value_gdf2_write_event_table_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_fseek_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_fseek_6=fseek(file, (signed long int)236, 0);
    tmp_if_expr_7 = return_value_fseek_6 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  signed int return_value_write64bval_8;
  if(tmp_if_expr_7)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_write64bval_8=write64bval(file, (unsigned int)1, (const void *)&numrec);
    tmp_if_expr_9 = return_value_write64bval_8 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_11;
  signed int return_value_fclose_10;
  if(tmp_if_expr_9)
    tmp_if_expr_11 = (_Bool)1;

  else
  {
    return_value_fclose_10=fclose(file);
    tmp_if_expr_11 = return_value_fclose_10 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_11)
    retval = -1;

  return retval;
}

// gdf2_get_channel
// file gdf2.c line 316
static signed int gdf2_get_channel(struct xdfch *ch, enum xdffield field, union optval *val, signed int prevretval)
{
  struct gdf2_channel *gdf2ch = (struct gdf2_channel *)((char *)ch - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_CF_LABEL)
      val->str = gdf2ch->label;

    else
      if((signed int)field == XDF_CF_UNIT)
        val->str = gdf2ch->unit;

      else
        if((signed int)field == XDF_CF_TRANSDUCTER)
          val->str = gdf2ch->transducter;

        else
          if((signed int)field == XDF_CF_PREFILTERING)
            val->str = gdf2ch->filtering;

          else
            if((signed int)field == XDF_CF_RESERVED)
              val->str = gdf2ch->reserved;

            else
              if((signed int)field == XDF_CF_ELECPOS)
                do
                {
                  val->pos[(signed long int)0] = (double)gdf2ch->pos[(signed long int)0];
                  val->pos[(signed long int)1] = (double)gdf2ch->pos[(signed long int)1];
                  val->pos[(signed long int)2] = (double)gdf2ch->pos[(signed long int)2];
                }
                while((_Bool)0);

              else
                if((signed int)field == XDF_CF_IMPEDANCE)
                  val->d = (double)gdf2ch->impedance;

                else
                  retval = prevretval;
    return retval;
  }
}

// gdf2_get_conf
// file gdf2.c line 409
static signed int gdf2_get_conf(struct xdf *xdf, enum xdffield field, union optval *val, signed int prevretval)
{
  struct gdf2_file *gdf2 = (struct gdf2_file *)((char *)xdf - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_F_SUBJ_DESC)
      val->str = gdf2->subjstr;

    else
      if((signed int)field == XDF_F_SESS_DESC)
        val->str = gdf2->recstr;

      else
        if((signed int)field == XDF_F_RECTIME)
          val->d=gdf2time_to_time(gdf2->rectime);

        else
          if((signed int)field == XDF_F_BIRTHDAY)
            val->d=gdf2time_to_time(gdf2->birthday);

          else
            if((signed int)field == XDF_F_ADDICTION)
              val->ui = (unsigned int)gdf2->addiction;

            else
              if((signed int)field == XDF_F_HEIGHT)
                val->d = (double)gdf2->height;

              else
                if((signed int)field == XDF_F_WEIGHT)
                  val->d = (double)gdf2->weight;

                else
                  if((signed int)field == XDF_F_GENDER)
                    val->ui = (unsigned int)((signed int)gdf2->ghv & 0x3);

                  else
                    if((signed int)field == XDF_F_HANDNESS)
                      val->ui = (unsigned int)((signed int)gdf2->ghv >> 2 & 0x3);

                    else
                      if((signed int)field == XDF_F_VISUAL_IMP)
                        val->ui = (unsigned int)((signed int)gdf2->ghv >> 4 & 0x3);

                      else
                        if((signed int)field == XDF_F_HEART_IMP)
                          val->ui = (unsigned int)((signed int)gdf2->ghv >> 8 & 0x3);

                        else
                          if((signed int)field == XDF_F_LOCATION)
                          {
                            val->pos[(signed long int)0] = (double)gdf2->location[(signed long int)1] / 3600000.0;
                            val->pos[(signed long int)1] = (double)gdf2->location[(signed long int)2] / 3600000.0;
                            val->pos[(signed long int)2] = (double)gdf2->location[(signed long int)3] / 100.0;
                          }

                          else
                            if((signed int)field == XDF_F_ICD_CLASS)
                              memcpy((void *)val->icd, (const void *)gdf2->pclass, sizeof(unsigned char [6l]) /*6ul*/ );

                            else
                              if((signed int)field == XDF_F_HEADSIZE)
                                do
                                {
                                  val->pos[(signed long int)0] = (double)gdf2->headsize[(signed long int)0];
                                  val->pos[(signed long int)1] = (double)gdf2->headsize[(signed long int)1];
                                  val->pos[(signed long int)2] = (double)gdf2->headsize[(signed long int)2];
                                }
                                while((_Bool)0);

                              else
                                if((signed int)field == XDF_F_REF_POS)
                                  do
                                  {
                                    val->pos[(signed long int)0] = (double)gdf2->refpos[(signed long int)0];
                                    val->pos[(signed long int)1] = (double)gdf2->refpos[(signed long int)1];
                                    val->pos[(signed long int)2] = (double)gdf2->refpos[(signed long int)2];
                                  }
                                  while((_Bool)0);

                                else
                                  if((signed int)field == XDF_F_GND_POS)
                                    do
                                    {
                                      val->pos[(signed long int)0] = (double)gdf2->gndpos[(signed long int)0];
                                      val->pos[(signed long int)1] = (double)gdf2->gndpos[(signed long int)1];
                                      val->pos[(signed long int)2] = (double)gdf2->gndpos[(signed long int)2];
                                    }
                                    while((_Bool)0);

                                  else
                                    retval = prevretval;
    return retval;
  }
}

// gdf2_interpret_events
// file gdf2.c line 921
static signed int gdf2_interpret_events(struct gdf2_file *gdf2, unsigned int nevent, double fs, unsigned int *pos, unsigned short int *code, unsigned short int *channel, unsigned int *dur)
{
  unsigned int i;
  signed int evttype;
  char desc[32l];
  struct xdfevent evt;
  i = (unsigned int)0;
  double tmp_if_expr_1;
  for( ; !(i >= nevent); i = i + 1u)
  {
    if(!(channel[(signed long int)i] == 0))
      snprintf(desc, sizeof(char [32l]) /*32ul*/ , "ch:%u", (unsigned int)channel[(signed long int)i]);

    else
      strcpy(desc, "ch:all");
    evttype=add_event_entry(gdf2->xdf.table, (signed int)code[(signed long int)i], desc);
    if(!(evttype >= 0))
      return -1;

    evt.onset = (double)pos[(signed long int)i] / fs;
    if(dur == ((unsigned int *)NULL))
      tmp_if_expr_1 = (double)-1;

    else
      tmp_if_expr_1 = (double)dur[(signed long int)i] / fs;
    evt.duration = tmp_if_expr_1;
    evt.evttype = evttype;
    signed int return_value_add_event_2;
    return_value_add_event_2=add_event(gdf2->xdf.table, &evt);
    if(!(return_value_add_event_2 == 0))
      return -1;

  }
  return 0;
}

// gdf2_read_channels_header
// file gdf2.c line 788
static signed int gdf2_read_channels_header(struct gdf2_file *gdf2, struct _IO_FILE *file)
{
  struct xdfch *ch;
  signed int i;
  unsigned int offset = (unsigned int)0;
  ch = gdf2->xdf.channels;
  signed int return_value_read_string_field_1;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_1=read_string_field(file, ((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->label, (unsigned int)16);
    if(!(return_value_read_string_field_1 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read_string_field_2;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_2=read_string_field(file, ((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->transducter, (unsigned int)80);
    if(!(return_value_read_string_field_2 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read_string_field_3;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_3=read_string_field(file, ((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->unit, (unsigned int)6);
    if(!(return_value_read_string_field_3 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read16bval_4;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read16bval_4=read16bval(file, (unsigned int)1, (void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->dimcode);
    if(!(return_value_read16bval_4 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read64bval_5;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read64bval_5=read64bval(file, (unsigned int)1, (void *)&ch->physical_mm[(signed long int)0]);
    if(!(return_value_read64bval_5 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read64bval_6;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read64bval_6=read64bval(file, (unsigned int)1, (void *)&ch->physical_mm[(signed long int)1]);
    if(!(return_value_read64bval_6 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read64bval_7;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read64bval_7=read64bval(file, (unsigned int)1, (void *)&ch->digital_mm[(signed long int)0]);
    if(!(return_value_read64bval_7 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read64bval_8;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read64bval_8=read64bval(file, (unsigned int)1, (void *)&ch->digital_mm[(signed long int)1]);
    if(!(return_value_read64bval_8 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read_string_field_9;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_9=read_string_field(file, ((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->filtering, (unsigned int)68);
    if(!(return_value_read_string_field_9 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read32bval_10;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read32bval_10=read32bval(file, (unsigned int)1, (void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->lp);
    if(!(return_value_read32bval_10 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read32bval_11;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read32bval_11=read32bval(file, (unsigned int)1, (void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->hp);
    if(!(return_value_read32bval_11 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read32bval_12;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read32bval_12=read32bval(file, (unsigned int)1, (void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->sp);
    if(!(return_value_read32bval_12 == 0))
      return -1;

  }
  i = 0;
  ch = gdf2->xdf.channels;
  signed int tmp_post_15;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    unsigned int val;
    signed int return_value_read32bval_13;
    return_value_read32bval_13=read32bval(file, (unsigned int)1, (void *)&val);
    if(!(return_value_read32bval_13 == 0))
      return -1;

    tmp_post_15 = i;
    i = i + 1;
    if(tmp_post_15 == 0)
      ch->owner->ns_per_rec = val;

    else
      if(!(ch->owner->ns_per_rec == val))
      {
        signed int *return_value___errno_location_14;
        return_value___errno_location_14=__errno_location();
        *return_value___errno_location_14 = 1;
        return -1;
      }

  }
  ch = gdf2->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    unsigned int type;
    signed int xdftype;
    signed int return_value_read32bval_16;
    return_value_read32bval_16=read32bval(file, (unsigned int)1, (void *)&type);
    if(!(return_value_read32bval_16 == 0))
      return -1;

    enum xdftype return_value_get_xdfch_type_18;
    return_value_get_xdfch_type_18=get_xdfch_type_link1(type);
    xdftype = (signed int)return_value_get_xdfch_type_18;
    if(xdftype == -1)
    {
      signed int *return_value___errno_location_17;
      return_value___errno_location_17=__errno_location();
      *return_value___errno_location_17 = 84;
      return -1;
    }

    ch->infiletype = (enum xdftype)xdftype;
    ch->inmemtype = ch->infiletype;
    ch->digital_inmem = 1;
    ch->offset = (signed int)offset;
    signed int return_value_xdf_get_datasize_19;
    return_value_xdf_get_datasize_19=xdf_get_datasize(ch->inmemtype);
    offset = offset + (unsigned int)return_value_xdf_get_datasize_19;
  }
  gdf2->xdf.filerec_size = offset * gdf2->xdf.ns_per_rec;
  ch = gdf2->xdf.channels;
  signed int return_value_read32bval_20;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read32bval_20=read32bval(file, (unsigned int)3, (void *)((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->pos);
    if(!(return_value_read32bval_20 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  unsigned long int return_value_fread_21;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fread_21=fread((void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->impedance, (unsigned long int)1, (unsigned long int)1, file);
    if(!(return_value_fread_21 >= 1ul))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_read_string_field_22;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_read_string_field_22=read_string_field(file, ((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->reserved, (unsigned int)19);
    if(!(return_value_read_string_field_22 == 0))
      return -1;

  }
  return 0;
}

// gdf2_read_event_hdr
// file gdf2.c line 890
static signed int gdf2_read_event_hdr(struct gdf2_file *gdf2, struct _IO_FILE *file, unsigned int *nevent, unsigned char *mode, float *fs)
{
  signed long int flen;
  signed long int evt_sect;
  unsigned char nevt24[3l];
  signed int return_value_fseek_1;
  return_value_fseek_1=fseek(file, 0L, 2);
  _Bool tmp_if_expr_2;
  if(!(return_value_fseek_1 == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    flen=ftell(file);
    tmp_if_expr_2 = flen < (signed long int)0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  unsigned long int return_value_fread_4;
  _Bool tmp_if_expr_7;
  signed int return_value_read24bval_6;
  _Bool tmp_if_expr_9;
  signed int return_value_read32bval_8;
  if(tmp_if_expr_2)
    return -1;

  else
  {
    evt_sect = gdf2->xdf.hdr_offset + (signed long int)((unsigned int)gdf2->xdf.nrecord * gdf2->xdf.filerec_size);
    if(evt_sect >= flen || !(gdf2->xdf.nrecord >= 0))
    {
      *nevent = (unsigned int)0;
      return 0;
    }

    else
    {
      signed int return_value_fseek_3;
      return_value_fseek_3=fseek(file, evt_sect, 0);
      if(!(return_value_fseek_3 == 0))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_fread_4=fread((void *)mode, (unsigned long int)1, (unsigned long int)1, file);
        tmp_if_expr_5 = (return_value_fread_4 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        tmp_if_expr_7 = (_Bool)1;

      else
      {
        return_value_read24bval_6=read24bval(file, (unsigned int)1, (void *)nevt24);
        tmp_if_expr_7 = return_value_read24bval_6 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_7)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        return_value_read32bval_8=read32bval(file, (unsigned int)1, (void *)fs);
        tmp_if_expr_9 = return_value_read32bval_8 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_9)
        return -1;

      else
      {
        *nevent = (unsigned int)((signed int)nevt24[(signed long int)0] + 256 * (signed int)nevt24[(signed long int)1] + 65536 * (signed int)nevt24[(signed long int)2]);
        return 0;
      }
    }
  }
}

// gdf2_read_event_table
// file gdf2.c line 951
static signed int gdf2_read_event_table(struct gdf2_file *gdf2, struct _IO_FILE *file)
{
  signed int retcode = 0;
  unsigned char mode;
  float fs;
  unsigned int nevt;
  unsigned int *onset = (unsigned int *)(void *)0;
  unsigned int *dur = (unsigned int *)(void *)0;
  unsigned short int *code = (unsigned short int *)(void *)0;
  unsigned short int *ch = (unsigned short int *)(void *)0;
  signed int return_value_gdf2_read_event_hdr_1;
  return_value_gdf2_read_event_hdr_1=gdf2_read_event_hdr(gdf2, file, &nevt, &mode, &fs);
  _Bool tmp_if_expr_7;
  signed int return_value_read32bval_6;
  _Bool tmp_if_expr_9;
  signed int return_value_read16bval_8;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_11;
  signed int return_value_read16bval_10;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_14;
  signed int return_value_read16bval_13;
  _Bool tmp_if_expr_17;
  signed int return_value_gdf2_interpret_events_16;
  if(!(return_value_gdf2_read_event_hdr_1 == 0))
    return -1;

  else
    if(nevt == 0u)
      return 0;

    else
    {
      void *return_value_calloc_2;
      return_value_calloc_2=calloc((unsigned long int)nevt, sizeof(unsigned int) /*4ul*/ );
      onset = (unsigned int *)return_value_calloc_2;
      void *return_value_calloc_3;
      return_value_calloc_3=calloc((unsigned long int)nevt, sizeof(unsigned short int) /*2ul*/ );
      code = (unsigned short int *)return_value_calloc_3;
      void *return_value_calloc_4;
      return_value_calloc_4=calloc((unsigned long int)nevt, sizeof(unsigned short int) /*2ul*/ );
      ch = (unsigned short int *)return_value_calloc_4;
      void *return_value_calloc_5;
      return_value_calloc_5=calloc((unsigned long int)nevt, sizeof(unsigned int) /*4ul*/ );
      dur = (unsigned int *)return_value_calloc_5;
      if(ch == ((unsigned short int *)NULL) || code == ((unsigned short int *)NULL) || dur == ((unsigned int *)NULL) || onset == ((unsigned int *)NULL))
        tmp_if_expr_7 = (_Bool)1;

      else
      {
        return_value_read32bval_6=read32bval(file, nevt, (void *)onset);
        tmp_if_expr_7 = return_value_read32bval_6 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_7)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        return_value_read16bval_8=read16bval(file, nevt, (void *)code);
        tmp_if_expr_9 = return_value_read16bval_8 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_9)
        tmp_if_expr_12 = (_Bool)1;

      else
      {
        if((signed int)mode == 3)
        {
          return_value_read16bval_10=read16bval(file, nevt, (void *)ch);
          tmp_if_expr_11 = return_value_read16bval_10 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_11 = (_Bool)0;
        tmp_if_expr_12 = tmp_if_expr_11 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_12)
        tmp_if_expr_15 = (_Bool)1;

      else
      {
        if((signed int)mode == 3)
        {
          return_value_read16bval_13=read16bval(file, nevt, (void *)dur);
          tmp_if_expr_14 = return_value_read16bval_13 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_14 = (_Bool)0;
        tmp_if_expr_15 = tmp_if_expr_14 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_15)
        tmp_if_expr_17 = (_Bool)1;

      else
      {
        return_value_gdf2_interpret_events_16=gdf2_interpret_events(gdf2, nevt, (double)fs, onset, code, ch, dur);
        tmp_if_expr_17 = return_value_gdf2_interpret_events_16 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_17)
        retcode = -1;

      free((void *)onset);
      free((void *)code);
      free((void *)ch);
      free((void *)dur);
      return retcode;
    }
}

// gdf2_read_file_header
// file gdf2.c line 722
static signed int gdf2_read_file_header(struct gdf2_file *gdf2, struct _IO_FILE *file)
{
  unsigned int recduration[2l];
  unsigned short int nch;
  unsigned short int nhdr_blk;
  signed long int nrec;
  fseek(file, (signed long int)8, 0);
  signed int return_value_read_string_field_1;
  return_value_read_string_field_1=read_string_field(file, gdf2->subjstr, (unsigned int)66);
  _Bool tmp_if_expr_3;
  signed int return_value_fseek_2;
  if(!(return_value_read_string_field_1 == 0))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_fseek_2=fseek(file, (signed long int)10, 1);
    tmp_if_expr_3 = return_value_fseek_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  unsigned long int return_value_fread_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_fread_4=fread((void *)&gdf2->addiction, (unsigned long int)1, (unsigned long int)1, file);
    tmp_if_expr_5 = (return_value_fread_4 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  unsigned long int return_value_fread_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_fread_6=fread((void *)&gdf2->weight, (unsigned long int)1, (unsigned long int)1, file);
    tmp_if_expr_7 = (return_value_fread_6 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  unsigned long int return_value_fread_8;
  if(tmp_if_expr_7)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_fread_8=fread((void *)&gdf2->height, (unsigned long int)1, (unsigned long int)1, file);
    tmp_if_expr_9 = (return_value_fread_8 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_11;
  unsigned long int return_value_fread_10;
  if(tmp_if_expr_9)
    tmp_if_expr_11 = (_Bool)1;

  else
  {
    return_value_fread_10=fread((void *)&gdf2->ghv, (unsigned long int)1, (unsigned long int)1, file);
    tmp_if_expr_11 = (return_value_fread_10 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_13;
  signed int return_value_read_string_field_12;
  if(tmp_if_expr_11)
    tmp_if_expr_13 = (_Bool)1;

  else
  {
    return_value_read_string_field_12=read_string_field(file, gdf2->recstr, (unsigned int)64);
    tmp_if_expr_13 = return_value_read_string_field_12 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_15;
  signed int return_value_read32bval_14;
  if(tmp_if_expr_13)
    tmp_if_expr_15 = (_Bool)1;

  else
  {
    return_value_read32bval_14=read32bval(file, (unsigned int)4, (void *)gdf2->location);
    tmp_if_expr_15 = return_value_read32bval_14 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_17;
  signed int return_value_read64bval_16;
  if(tmp_if_expr_15)
    tmp_if_expr_17 = (_Bool)1;

  else
  {
    return_value_read64bval_16=read64bval(file, (unsigned int)1, (void *)&gdf2->rectime);
    tmp_if_expr_17 = return_value_read64bval_16 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_19;
  signed int return_value_read64bval_18;
  if(tmp_if_expr_17)
    tmp_if_expr_19 = (_Bool)1;

  else
  {
    return_value_read64bval_18=read64bval(file, (unsigned int)1, (void *)&gdf2->birthday);
    tmp_if_expr_19 = return_value_read64bval_18 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_21;
  signed int return_value_read16bval_20;
  if(tmp_if_expr_19)
    tmp_if_expr_21 = (_Bool)1;

  else
  {
    return_value_read16bval_20=read16bval(file, (unsigned int)1, (void *)&nhdr_blk);
    tmp_if_expr_21 = return_value_read16bval_20 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_23;
  unsigned long int return_value_fread_22;
  if(tmp_if_expr_21)
    tmp_if_expr_23 = (_Bool)1;

  else
  {
    return_value_fread_22=fread((void *)gdf2->pclass, (unsigned long int)6, (unsigned long int)1, file);
    tmp_if_expr_23 = return_value_fread_22 < (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_25;
  signed int return_value_read64bval_24;
  if(tmp_if_expr_23)
    tmp_if_expr_25 = (_Bool)1;

  else
  {
    return_value_read64bval_24=read64bval(file, (unsigned int)1, (void *)&gdf2->epid);
    tmp_if_expr_25 = return_value_read64bval_24 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_27;
  signed int return_value_fseek_26;
  if(tmp_if_expr_25)
    tmp_if_expr_27 = (_Bool)1;

  else
  {
    return_value_fseek_26=fseek(file, (signed long int)6, 1);
    tmp_if_expr_27 = return_value_fseek_26 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_29;
  signed int return_value_read16bval_28;
  if(tmp_if_expr_27)
    tmp_if_expr_29 = (_Bool)1;

  else
  {
    return_value_read16bval_28=read16bval(file, (unsigned int)3, (void *)gdf2->headsize);
    tmp_if_expr_29 = return_value_read16bval_28 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_31;
  signed int return_value_read32bval_30;
  if(tmp_if_expr_29)
    tmp_if_expr_31 = (_Bool)1;

  else
  {
    return_value_read32bval_30=read32bval(file, (unsigned int)3, (void *)gdf2->refpos);
    tmp_if_expr_31 = return_value_read32bval_30 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_33;
  signed int return_value_read32bval_32;
  if(tmp_if_expr_31)
    tmp_if_expr_33 = (_Bool)1;

  else
  {
    return_value_read32bval_32=read32bval(file, (unsigned int)3, (void *)gdf2->gndpos);
    tmp_if_expr_33 = return_value_read32bval_32 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_35;
  signed int return_value_read64bval_34;
  if(tmp_if_expr_33)
    tmp_if_expr_35 = (_Bool)1;

  else
  {
    return_value_read64bval_34=read64bval(file, (unsigned int)1, (void *)&nrec);
    tmp_if_expr_35 = return_value_read64bval_34 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_37;
  signed int return_value_read32bval_36;
  if(tmp_if_expr_35)
    tmp_if_expr_37 = (_Bool)1;

  else
  {
    return_value_read32bval_36=read32bval(file, (unsigned int)2, (void *)recduration);
    tmp_if_expr_37 = return_value_read32bval_36 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_39;
  signed int return_value_read16bval_38;
  if(tmp_if_expr_37)
    tmp_if_expr_39 = (_Bool)1;

  else
  {
    return_value_read16bval_38=read16bval(file, (unsigned int)1, (void *)&nch);
    tmp_if_expr_39 = return_value_read16bval_38 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_41;
  signed int return_value_fseek_40;
  if(tmp_if_expr_39)
    tmp_if_expr_41 = (_Bool)1;

  else
  {
    return_value_fseek_40=fseek(file, (signed long int)2, 1);
    tmp_if_expr_41 = return_value_fseek_40 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_41)
    return -1;

  else
  {
    gdf2->xdf.rec_duration = (double)recduration[(signed long int)0] / (double)recduration[(signed long int)1];
    gdf2->xdf.hdr_offset = (signed long int)((signed int)nhdr_blk * 256);
    gdf2->xdf.nrecord = (signed int)nrec;
    gdf2->xdf.numch = (unsigned int)nch;
    return 0;
  }
}

// gdf2_read_header
// file gdf2.c line 991
static signed int gdf2_read_header(struct xdf *xdf)
{
  signed int retval = -1;
  unsigned int i;
  struct xdfch **curr = &xdf->channels;
  struct gdf2_file *gdf2 = (struct gdf2_file *)((char *)xdf - (signed long int)0ul);
  struct _IO_FILE *file;
  signed int return_value_dup_cloexec_1;
  return_value_dup_cloexec_1=dup_cloexec(xdf->fd);
  file=fdopen(return_value_dup_cloexec_1, "rb");
  signed int return_value_gdf2_read_channels_header_3;
  _Bool tmp_if_expr_5;
  signed int return_value_gdf2_read_event_table_4;
  if(file == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    signed int return_value_gdf2_read_file_header_2;
    return_value_gdf2_read_file_header_2=gdf2_read_file_header(gdf2, file);
    if(return_value_gdf2_read_file_header_2 == 0)
    {
      i = (unsigned int)0;
      for( ; !(i >= xdf->numch); i = i + 1u)
      {
        *curr=xdf_alloc_channel(xdf);
        if(*curr == ((struct xdfch *)NULL))
          goto exit;

        curr = &(*curr)->next;
      }
      return_value_gdf2_read_channels_header_3=gdf2_read_channels_header(gdf2, file);
      if(!(return_value_gdf2_read_channels_header_3 == 0))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_gdf2_read_event_table_4=gdf2_read_event_table(gdf2, file);
        tmp_if_expr_5 = return_value_gdf2_read_event_table_4 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_5)
        retval = 0;

    }


  exit:
    ;
    fclose(file);
    lseek(xdf->fd, (signed long int)((xdf->numch + (unsigned int)1) * (unsigned int)256), 0);
    return retval;
  }
}

// gdf2_set_channel
// file gdf2.c line 280
static signed int gdf2_set_channel(struct xdfch *ch, enum xdffield field, union optval val, signed int prevretval)
{
  struct gdf2_channel *gdf2ch = (struct gdf2_channel *)((char *)ch - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_CF_LABEL)
      strncpy(gdf2ch->label, val.str, sizeof(char [17l]) /*17ul*/  - (unsigned long int)1);

    else
      if((signed int)field == XDF_CF_UNIT)
        strncpy(gdf2ch->unit, val.str, sizeof(char [7l]) /*7ul*/  - (unsigned long int)1);

      else
        if((signed int)field == XDF_CF_TRANSDUCTER)
          strncpy(gdf2ch->transducter, val.str, sizeof(char [81l]) /*81ul*/  - (unsigned long int)1);

        else
          if((signed int)field == XDF_CF_PREFILTERING)
            strncpy(gdf2ch->filtering, val.str, sizeof(char [69l]) /*69ul*/  - (unsigned long int)1);

          else
            if((signed int)field == XDF_CF_RESERVED)
              strncpy(gdf2ch->reserved, val.str, sizeof(char [20l]) /*20ul*/  - (unsigned long int)1);

            else
              if((signed int)field == XDF_CF_ELECPOS)
                do
                {
                  gdf2ch->pos[(signed long int)0] = (float)val.pos[(signed long int)0];
                  gdf2ch->pos[(signed long int)1] = (float)val.pos[(signed long int)1];
                  gdf2ch->pos[(signed long int)2] = (float)val.pos[(signed long int)2];
                }
                while((_Bool)0);

              else
                if((signed int)field == XDF_CF_IMPEDANCE)
                  gdf2ch->impedance = (unsigned char)val.d;

                else
                  retval = prevretval;
    return retval;
  }
}

// gdf2_set_conf
// file gdf2.c line 353
static signed int gdf2_set_conf(struct xdf *xdf, enum xdffield field, union optval val, signed int prevretval)
{
  struct gdf2_file *gdf2 = (struct gdf2_file *)((char *)xdf - (signed long int)0ul);
  signed int retval = 0;
  if(!(prevretval >= 0))
    return -1;

  else
  {
    if((signed int)field == XDF_F_SUBJ_DESC)
      strncpy(gdf2->subjstr, val.str, sizeof(char [67l]) /*67ul*/  - (unsigned long int)1);

    else
      if((signed int)field == XDF_F_SESS_DESC)
        strncpy(gdf2->recstr, val.str, sizeof(char [65l]) /*65ul*/  - (unsigned long int)1);

      else
        if((signed int)field == XDF_F_RECTIME)
          gdf2->rectime=time_to_gdf2time(val.d);

        else
          if((signed int)field == XDF_F_BIRTHDAY)
            gdf2->birthday=time_to_gdf2time(val.d);

          else
            if((signed int)field == XDF_F_ADDICTION)
              gdf2->addiction = (unsigned char)val.ui;

            else
              if((signed int)field == XDF_F_HEIGHT)
                gdf2->height = (unsigned char)val.d;

              else
                if((signed int)field == XDF_F_WEIGHT)
                  gdf2->weight = (unsigned char)val.d;

                else
                  if((signed int)field == XDF_F_GENDER)
                    gdf2->ghv = (unsigned char)(val.ui & (unsigned int)0x03 | (unsigned int)((signed int)gdf2->ghv & ~0x03));

                  else
                    if((signed int)field == XDF_F_HANDNESS)
                      gdf2->ghv = (unsigned char)(val.ui << 2 & (unsigned int)0x0C | (unsigned int)((signed int)gdf2->ghv & ~0x0C));

                    else
                      if((signed int)field == XDF_F_VISUAL_IMP)
                        gdf2->ghv = (unsigned char)(val.ui << 4 & (unsigned int)0x30 | (unsigned int)((signed int)gdf2->ghv & ~0x30));

                      else
                        if((signed int)field == XDF_F_HEART_IMP)
                          gdf2->ghv = (unsigned char)(val.ui << 6 & (unsigned int)0xC0 | (unsigned int)((signed int)gdf2->ghv & ~0xC0));

                        else
                          if((signed int)field == XDF_F_LOCATION)
                          {
                            gdf2->location[(signed long int)1] = (signed int)(val.pos[(signed long int)0] * (double)3600000);
                            gdf2->location[(signed long int)2] = (signed int)(val.pos[(signed long int)1] * (double)3600000);
                            gdf2->location[(signed long int)3] = (signed int)(val.pos[(signed long int)2] * (double)100);
                          }

                          else
                            if((signed int)field == XDF_F_ICD_CLASS)
                              memcpy((void *)gdf2->pclass, (const void *)val.icd, sizeof(unsigned char [6l]) /*6ul*/ );

                            else
                              if((signed int)field == XDF_F_HEADSIZE)
                                do
                                {
                                  gdf2->headsize[(signed long int)0] = (unsigned short int)val.pos[(signed long int)0];
                                  gdf2->headsize[(signed long int)1] = (unsigned short int)val.pos[(signed long int)1];
                                  gdf2->headsize[(signed long int)2] = (unsigned short int)val.pos[(signed long int)2];
                                }
                                while((_Bool)0);

                              else
                                if((signed int)field == XDF_F_REF_POS)
                                  do
                                  {
                                    gdf2->refpos[(signed long int)0] = (float)val.pos[(signed long int)0];
                                    gdf2->refpos[(signed long int)1] = (float)val.pos[(signed long int)1];
                                    gdf2->refpos[(signed long int)2] = (float)val.pos[(signed long int)2];
                                  }
                                  while((_Bool)0);

                                else
                                  if((signed int)field == XDF_F_GND_POS)
                                    do
                                    {
                                      gdf2->gndpos[(signed long int)0] = (float)val.pos[(signed long int)0];
                                      gdf2->gndpos[(signed long int)1] = (float)val.pos[(signed long int)1];
                                      gdf2->gndpos[(signed long int)2] = (float)val.pos[(signed long int)2];
                                    }
                                    while((_Bool)0);

                                  else
                                    retval = prevretval;
    return retval;
  }
}

// gdf2_setup_events
// file gdf2.c line 639
static signed int gdf2_setup_events(struct eventtable *table, double fs, unsigned char *mode, unsigned int *pos, unsigned short int *code, unsigned short int *ch, unsigned int *dur)
{
  unsigned int i;
  unsigned int nevent = table->nevent;
  signed int codeval;
  signed int use_extevt = 0;
  unsigned int chval;
  const char *desc;
  struct xdfevent *evt;
  i = (unsigned int)0;
  _Bool tmp_if_expr_2;
  signed int return_value_sscanf_1;
  for( ; !(i >= nevent); i = i + 1u)
  {
    evt=get_event(table, i);
    pos[(signed long int)i] = (unsigned int)(fs * evt->onset);
    if(evt->duration > 0.000000)
    {
      dur[(signed long int)i] = (unsigned int)(fs * evt->duration);
      use_extevt = 1;
    }

    else
      dur[(signed long int)i] = (unsigned int)0;
    get_event_entry(table, (unsigned int)evt->evttype, &codeval, &desc);
    code[(signed long int)i] = (unsigned short int)codeval;
    ch[(signed long int)i] = (unsigned short int)0;
    if(!(desc == ((const char *)NULL)))
    {
      return_value_sscanf_1=sscanf(desc, "ch:%u", &chval);
      tmp_if_expr_2 = return_value_sscanf_1 >= 1 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      ch[(signed long int)i] = (unsigned short int)chval;
      use_extevt = 1;
    }

    else
      ch[(signed long int)i] = (unsigned short int)0;
  }
  *mode = (unsigned char)(use_extevt != 0 ? 3 : 1);
  return 0;
}

// gdf2_write_channels_header
// file gdf2.c line 529
static signed int gdf2_write_channels_header(struct gdf2_file *gdf2, struct _IO_FILE *file)
{
  struct xdfch *ch = gdf2->xdf.channels;
  signed int return_value_fprintf_1;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_1=fprintf(file, "%-16.16s", (const void *)((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->label);
    if(!(return_value_fprintf_1 >= 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_fprintf_2;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_2=fprintf(file, "%-80.80s", (const void *)((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->transducter);
    if(!(return_value_fprintf_2 >= 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_fprintf_3;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_3=fprintf(file, "%-6.6s", (const void *)((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->unit);
    if(!(return_value_fprintf_3 >= 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_write16bval_4;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write16bval_4=write16bval(file, (unsigned int)1, (const void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->dimcode);
    if(!(return_value_write16bval_4 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_write64bval_5;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write64bval_5=write64bval(file, (unsigned int)1, (const void *)&ch->physical_mm[(signed long int)0]);
    if(!(return_value_write64bval_5 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_write64bval_6;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write64bval_6=write64bval(file, (unsigned int)1, (const void *)&ch->physical_mm[(signed long int)1]);
    if(!(return_value_write64bval_6 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_write64bval_7;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write64bval_7=write64bval(file, (unsigned int)1, (const void *)&ch->digital_mm[(signed long int)0]);
    if(!(return_value_write64bval_7 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_write64bval_8;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write64bval_8=write64bval(file, (unsigned int)1, (const void *)&ch->digital_mm[(signed long int)1]);
    if(!(return_value_write64bval_8 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_fprintf_9;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_9=fprintf(file, "%-68.68s", (const void *)((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->filtering);
    if(!(return_value_fprintf_9 >= 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_write32bval_10;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write32bval_10=write32bval(file, (unsigned int)1, (const void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->lp);
    if(!(return_value_write32bval_10 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_write32bval_11;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write32bval_11=write32bval(file, (unsigned int)1, (const void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->hp);
    if(!(return_value_write32bval_11 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_write32bval_12;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write32bval_12=write32bval(file, (unsigned int)1, (const void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->sp);
    if(!(return_value_write32bval_12 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int nsprec = (signed int)gdf2->xdf.ns_per_rec;
    signed int return_value_write32bval_13;
    return_value_write32bval_13=write32bval(file, (unsigned int)1, (const void *)&nsprec);
    if(!(return_value_write32bval_13 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    signed int type = (signed int)gdf2_types[(signed long int)ch->infiletype];
    signed int return_value_write32bval_14;
    return_value_write32bval_14=write32bval(file, (unsigned int)1, (const void *)&type);
    if(!(return_value_write32bval_14 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_write32bval_15;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_write32bval_15=write32bval(file, (unsigned int)3, (const void *)((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->pos);
    if(!(return_value_write32bval_15 == 0))
      return -1;

  }
  ch = gdf2->xdf.channels;
  unsigned long int return_value_fwrite_16;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fwrite_16=fwrite((const void *)&((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->impedance, (unsigned long int)1, (unsigned long int)1, file);
    if(!(return_value_fwrite_16 >= 1ul))
      return -1;

  }
  ch = gdf2->xdf.channels;
  signed int return_value_fprintf_17;
  for( ; !(ch == ((struct xdfch *)NULL)); ch = ch->next)
  {
    return_value_fprintf_17=fprintf(file, "%-19.19s", (const void *)((struct gdf2_channel *)((char *)ch - (signed long int)0ul))->reserved);
    if(!(return_value_fprintf_17 >= 0))
      return -1;

  }
  return 0;
}

// gdf2_write_event_table
// file gdf2.c line 672
static signed int gdf2_write_event_table(struct gdf2_file *gdf2, struct _IO_FILE *file)
{
  struct eventtable *table = gdf2->xdf.table;
  signed int retcode = 0;
  unsigned int nevt = table->nevent;
  unsigned char mode;
  unsigned char nevt24[3l];
  float fs = (float)gdf2->xdf.ns_per_rec / (float)gdf2->xdf.rec_duration;
  unsigned int *onset = (unsigned int *)(void *)0;
  unsigned int *dur = (unsigned int *)(void *)0;
  unsigned short int *code = (unsigned short int *)(void *)0;
  unsigned short int *ch = (unsigned short int *)(void *)0;
  _Bool tmp_if_expr_6;
  unsigned long int return_value_fwrite_5;
  _Bool tmp_if_expr_8;
  signed int return_value_write24bval_7;
  _Bool tmp_if_expr_10;
  signed int return_value_write32bval_9;
  _Bool tmp_if_expr_12;
  signed int return_value_write32bval_11;
  _Bool tmp_if_expr_14;
  signed int return_value_write16bval_13;
  _Bool tmp_if_expr_17;
  _Bool tmp_if_expr_16;
  signed int return_value_write16bval_15;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_19;
  signed int return_value_write32bval_18;
  if(nevt == 0u)
    return 0;

  else
  {
    nevt24[(signed long int)0] = (unsigned char)(nevt & (unsigned int)0x000000FF);
    nevt24[(signed long int)1] = (unsigned char)((nevt & (unsigned int)0x0000FF00) / (unsigned int)256);
    nevt24[(signed long int)2] = (unsigned char)((nevt & (unsigned int)0x00FF0000) / (unsigned int)65536);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)nevt * sizeof(unsigned int) /*4ul*/ );
    onset = (unsigned int *)return_value_malloc_1;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)nevt * sizeof(unsigned short int) /*2ul*/ );
    code = (unsigned short int *)return_value_malloc_2;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)nevt * sizeof(unsigned short int) /*2ul*/ );
    ch = (unsigned short int *)return_value_malloc_3;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc((unsigned long int)nevt * sizeof(unsigned int) /*4ul*/ );
    dur = (unsigned int *)return_value_malloc_4;
    if(ch == ((unsigned short int *)NULL) || code == ((unsigned short int *)NULL) || dur == ((unsigned int *)NULL) || onset == ((unsigned int *)NULL))
      retcode = -1;

    gdf2_setup_events(table, (double)fs, &mode, onset, code, ch, dur);
    if(!(retcode == 0))
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_fwrite_5=fwrite((const void *)&mode, (unsigned long int)1, (unsigned long int)1, file);
      tmp_if_expr_6 = (return_value_fwrite_5 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
      tmp_if_expr_8 = (_Bool)1;

    else
    {
      return_value_write24bval_7=write24bval(file, (unsigned int)1, (const void *)nevt24);
      tmp_if_expr_8 = return_value_write24bval_7 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_8)
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      return_value_write32bval_9=write32bval(file, (unsigned int)1, (const void *)&fs);
      tmp_if_expr_10 = return_value_write32bval_9 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_10)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value_write32bval_11=write32bval(file, nevt, (const void *)onset);
      tmp_if_expr_12 = return_value_write32bval_11 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_12)
      tmp_if_expr_14 = (_Bool)1;

    else
    {
      return_value_write16bval_13=write16bval(file, nevt, (const void *)code);
      tmp_if_expr_14 = return_value_write16bval_13 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_14)
      tmp_if_expr_17 = (_Bool)1;

    else
    {
      if((signed int)mode == 3)
      {
        return_value_write16bval_15=write16bval(file, nevt, (const void *)ch);
        tmp_if_expr_16 = return_value_write16bval_15 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_16 = (_Bool)0;
      tmp_if_expr_17 = tmp_if_expr_16 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_17)
      tmp_if_expr_20 = (_Bool)1;

    else
    {
      if((signed int)mode == 3)
      {
        return_value_write32bval_18=write32bval(file, nevt, (const void *)dur);
        tmp_if_expr_19 = return_value_write32bval_18 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_19 = (_Bool)0;
      tmp_if_expr_20 = tmp_if_expr_19 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_20)
      retcode = -1;

    free((void *)onset);
    free((void *)code);
    free((void *)ch);
    free((void *)dur);
    return retcode;
  }
}

// gdf2_write_file_header
// file gdf2.c line 478
static signed int gdf2_write_file_header(struct gdf2_file *gdf2, struct _IO_FILE *file)
{
  unsigned int recduration[2l];
  signed long int nrec = (signed long int)-1;
  unsigned short int nch;
  unsigned short int nhdr_blk = (unsigned short int)(gdf2->xdf.numch + (unsigned int)1);
  unsigned char reserved[10l] = { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char key[9l];
  convert_recduration_link1(gdf2->xdf.rec_duration, recduration);
  nrec = (signed long int)gdf2->xdf.nrecord;
  nch = (unsigned short int)gdf2->xdf.numch;
  snprintf(key, sizeof(char [9l]) /*9ul*/ , "GDF 2.%02u", gdf2->version);
  unsigned long int return_value_fwrite_1;
  return_value_fwrite_1=fwrite((const void *)key, (unsigned long int)8, (unsigned long int)1, file);
  _Bool tmp_if_expr_4;
  unsigned long int return_value_fwrite_3;
  _Bool tmp_if_expr_6;
  unsigned long int return_value_fwrite_5;
  _Bool tmp_if_expr_8;
  unsigned long int return_value_fwrite_7;
  _Bool tmp_if_expr_10;
  unsigned long int return_value_fwrite_9;
  _Bool tmp_if_expr_12;
  unsigned long int return_value_fwrite_11;
  _Bool tmp_if_expr_14;
  signed int return_value_fprintf_13;
  _Bool tmp_if_expr_16;
  signed int return_value_write32bval_15;
  _Bool tmp_if_expr_18;
  signed int return_value_write64bval_17;
  _Bool tmp_if_expr_20;
  signed int return_value_write64bval_19;
  _Bool tmp_if_expr_22;
  signed int return_value_write16bval_21;
  _Bool tmp_if_expr_24;
  unsigned long int return_value_fwrite_23;
  _Bool tmp_if_expr_26;
  signed int return_value_write64bval_25;
  _Bool tmp_if_expr_28;
  unsigned long int return_value_fwrite_27;
  _Bool tmp_if_expr_30;
  signed int return_value_write16bval_29;
  _Bool tmp_if_expr_32;
  signed int return_value_write32bval_31;
  _Bool tmp_if_expr_34;
  signed int return_value_write32bval_33;
  _Bool tmp_if_expr_36;
  signed int return_value_write64bval_35;
  _Bool tmp_if_expr_38;
  signed int return_value_write32bval_37;
  _Bool tmp_if_expr_40;
  signed int return_value_write16bval_39;
  _Bool tmp_if_expr_42;
  unsigned long int return_value_fwrite_41;
  if(!(return_value_fwrite_1 >= 1ul))
    return -1;

  else
  {
    signed int return_value_fprintf_2;
    return_value_fprintf_2=fprintf(file, "%-66.66s", (const void *)gdf2->subjstr);
    if(!(return_value_fprintf_2 >= 0))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_fwrite_3=fwrite((const void *)reserved, (unsigned long int)10, (unsigned long int)1, file);
      tmp_if_expr_4 = (return_value_fwrite_3 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_fwrite_5=fwrite((const void *)&gdf2->addiction, (unsigned long int)1, (unsigned long int)1, file);
      tmp_if_expr_6 = (return_value_fwrite_5 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
      tmp_if_expr_8 = (_Bool)1;

    else
    {
      return_value_fwrite_7=fwrite((const void *)&gdf2->weight, (unsigned long int)1, (unsigned long int)1, file);
      tmp_if_expr_8 = (return_value_fwrite_7 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_8)
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      return_value_fwrite_9=fwrite((const void *)&gdf2->height, (unsigned long int)1, (unsigned long int)1, file);
      tmp_if_expr_10 = (return_value_fwrite_9 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_10)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value_fwrite_11=fwrite((const void *)&gdf2->ghv, (unsigned long int)1, (unsigned long int)1, file);
      tmp_if_expr_12 = (return_value_fwrite_11 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_12)
      tmp_if_expr_14 = (_Bool)1;

    else
    {
      return_value_fprintf_13=fprintf(file, "%-64.64s", (const void *)gdf2->recstr);
      tmp_if_expr_14 = return_value_fprintf_13 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_14)
      tmp_if_expr_16 = (_Bool)1;

    else
    {
      return_value_write32bval_15=write32bval(file, (unsigned int)4, (const void *)gdf2->location);
      tmp_if_expr_16 = return_value_write32bval_15 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_16)
      tmp_if_expr_18 = (_Bool)1;

    else
    {
      return_value_write64bval_17=write64bval(file, (unsigned int)1, (const void *)&gdf2->rectime);
      tmp_if_expr_18 = return_value_write64bval_17 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_18)
      tmp_if_expr_20 = (_Bool)1;

    else
    {
      return_value_write64bval_19=write64bval(file, (unsigned int)1, (const void *)&gdf2->birthday);
      tmp_if_expr_20 = return_value_write64bval_19 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_20)
      tmp_if_expr_22 = (_Bool)1;

    else
    {
      return_value_write16bval_21=write16bval(file, (unsigned int)1, (const void *)&nhdr_blk);
      tmp_if_expr_22 = return_value_write16bval_21 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_22)
      tmp_if_expr_24 = (_Bool)1;

    else
    {
      return_value_fwrite_23=fwrite((const void *)gdf2->pclass, (unsigned long int)6, (unsigned long int)1, file);
      tmp_if_expr_24 = return_value_fwrite_23 < (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_24)
      tmp_if_expr_26 = (_Bool)1;

    else
    {
      return_value_write64bval_25=write64bval(file, (unsigned int)1, (const void *)&gdf2->epid);
      tmp_if_expr_26 = return_value_write64bval_25 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_26)
      tmp_if_expr_28 = (_Bool)1;

    else
    {
      return_value_fwrite_27=fwrite((const void *)reserved, (unsigned long int)6, (unsigned long int)1, file);
      tmp_if_expr_28 = (return_value_fwrite_27 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_28)
      tmp_if_expr_30 = (_Bool)1;

    else
    {
      return_value_write16bval_29=write16bval(file, (unsigned int)3, (const void *)gdf2->headsize);
      tmp_if_expr_30 = return_value_write16bval_29 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_30)
      tmp_if_expr_32 = (_Bool)1;

    else
    {
      return_value_write32bval_31=write32bval(file, (unsigned int)3, (const void *)gdf2->refpos);
      tmp_if_expr_32 = return_value_write32bval_31 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_32)
      tmp_if_expr_34 = (_Bool)1;

    else
    {
      return_value_write32bval_33=write32bval(file, (unsigned int)3, (const void *)gdf2->gndpos);
      tmp_if_expr_34 = return_value_write32bval_33 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_34)
      tmp_if_expr_36 = (_Bool)1;

    else
    {
      return_value_write64bval_35=write64bval(file, (unsigned int)1, (const void *)&nrec);
      tmp_if_expr_36 = return_value_write64bval_35 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_36)
      tmp_if_expr_38 = (_Bool)1;

    else
    {
      return_value_write32bval_37=write32bval(file, (unsigned int)2, (const void *)recduration);
      tmp_if_expr_38 = return_value_write32bval_37 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_38)
      tmp_if_expr_40 = (_Bool)1;

    else
    {
      return_value_write16bval_39=write16bval(file, (unsigned int)1, (const void *)&nch);
      tmp_if_expr_40 = return_value_write16bval_39 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_40)
      tmp_if_expr_42 = (_Bool)1;

    else
    {
      return_value_fwrite_41=fwrite((const void *)reserved, (unsigned long int)2, (unsigned long int)1, file);
      tmp_if_expr_42 = (return_value_fwrite_41 < (unsigned long int)1 ? -1 : 0) != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_42)
      return -1;

    else
    {
      gdf2->xdf.hdr_offset = (signed long int)(256 * (signed int)nhdr_blk);
      return 0;
    }
  }
}

// gdf2_write_header
// file gdf2.c line 616
static signed int gdf2_write_header(struct xdf *xdf)
{
  signed int retval = 0;
  struct gdf2_file *gdf2 = (struct gdf2_file *)((char *)xdf - (signed long int)0ul);
  struct _IO_FILE *file;
  signed int return_value_dup_cloexec_1;
  return_value_dup_cloexec_1=dup_cloexec(xdf->fd);
  file=fdopen(return_value_dup_cloexec_1, "wb");
  _Bool tmp_if_expr_4;
  signed int return_value_gdf2_write_channels_header_3;
  _Bool tmp_if_expr_7;
  signed int return_value_fclose_6;
  if(file == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    signed int return_value_gdf2_write_file_header_2;
    return_value_gdf2_write_file_header_2=gdf2_write_file_header(gdf2, file);
    if(!(return_value_gdf2_write_file_header_2 == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_gdf2_write_channels_header_3=gdf2_write_channels_header(gdf2, file);
      tmp_if_expr_4 = return_value_gdf2_write_channels_header_3 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      retval = -1;

    signed int return_value_fflush_5;
    return_value_fflush_5=fflush(file);
    if(!(return_value_fflush_5 == 0))
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      return_value_fclose_6=fclose(file);
      tmp_if_expr_7 = return_value_fclose_6 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
      retval = -1;

    lseek(xdf->fd, xdf->hdr_offset, 0);
    return retval;
  }
}

// gdf2time_to_time
// file gdf2.c line 132
static double gdf2time_to_time(unsigned long int gdf2time)
{
  double posixtime = ((double)gdf2time / 4294967296.0 - 719529.0) * 86400.0;
  return posixtime;
}

// get_closest_type
// file xdftypes.h line 82
enum xdftype get_closest_type(enum xdftype target, const _Bool *supported_type)
{
  unsigned int i;
  enum xdftype match;
  enum xdftype tp[12l];
  struct data_information *tinfo;
  unsigned int nt = (unsigned int)0;
  unsigned int tmp_post_1;
  _Bool tmp_if_expr_4;
  _Bool return_value_find_match_3;
  _Bool tmp_if_expr_6;
  _Bool return_value_find_match_5;
  _Bool tmp_if_expr_8;
  _Bool return_value_find_match_7;
  _Bool tmp_if_expr_10;
  _Bool return_value_find_match_9;
  _Bool tmp_if_expr_12;
  _Bool return_value_find_match_11;
  _Bool tmp_if_expr_14;
  _Bool return_value_find_match_13;
  _Bool tmp_if_expr_16;
  _Bool return_value_find_match_15;
  if(!(supported_type[(signed long int)target] == (_Bool)0))
    return target;

  else
  {
    i = (unsigned int)0;
    for( ; !((unsigned long int)i >= 12ul); i = i + 1u)
      if(!(supported_type[(signed long int)sortedlst[(signed long int)i]] == (_Bool)0))
      {
        tmp_post_1 = nt;
        nt = nt + 1u;
        tp[(signed long int)tmp_post_1] = sortedlst[(signed long int)i];
      }

    /* assertion nt > 0 */
    assert(nt > (unsigned int)0);
    tinfo = &data_info[(signed long int)target];
    _Bool return_value_find_match_2;
    return_value_find_match_2=find_match(&match, tinfo, tp, (signed int)nt, (unsigned int)(1 | 2 | 4));
    if(!(return_value_find_match_2 == (_Bool)0))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_find_match_3=find_match(&match, tinfo, tp, (signed int)nt, (unsigned int)(2 | 4));
      tmp_if_expr_4 = return_value_find_match_3 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_find_match_5=find_match(&match, tinfo, tp, (signed int)nt, (unsigned int)(1 | 4));
      tmp_if_expr_6 = return_value_find_match_5 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
      tmp_if_expr_8 = (_Bool)1;

    else
    {
      return_value_find_match_7=find_match(&match, tinfo, tp, (signed int)nt, (unsigned int)4);
      tmp_if_expr_8 = return_value_find_match_7 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_8)
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      return_value_find_match_9=find_match(&match, tinfo, tp, (signed int)nt, (unsigned int)(1 | 2));
      tmp_if_expr_10 = return_value_find_match_9 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_10)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value_find_match_11=find_match(&match, tinfo, tp, (signed int)nt, (unsigned int)2);
      tmp_if_expr_12 = return_value_find_match_11 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_12)
      tmp_if_expr_14 = (_Bool)1;

    else
    {
      return_value_find_match_13=find_match(&match, tinfo, tp, (signed int)nt, (unsigned int)1);
      tmp_if_expr_14 = return_value_find_match_13 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_14)
      tmp_if_expr_16 = (_Bool)1;

    else
    {
      return_value_find_match_15=find_match(&match, tinfo, tp, (signed int)nt, (unsigned int)0);
      tmp_if_expr_16 = return_value_find_match_15 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_16)
      return match;

    else
      return (enum xdftype)0;
  }
}

// get_event
// file xdfevent.h line 50
struct xdfevent * get_event(struct eventtable *table, unsigned int index)
{
  struct eventbatch *batch = table->first;
  for( ; index >= 50u; index = index - (unsigned int)50)
    batch = batch->next;
  return batch->evt + (signed long int)index;
}

// get_event_entry
// file xdfevent.c line 82
signed int get_event_entry(struct eventtable *table, unsigned int ind, signed int *code, const char **label)
{
  *code = (table->entry + (signed long int)ind)->code;
  *label = (table->entry + (signed long int)ind)->label;
  return 0;
}

// get_field_type
// file xdfconfig.c line 91
static signed int get_field_type(signed int field)
{
  signed int i = (signed int)(sizeof(struct opt_detail [38l]) /*304ul*/  / sizeof(struct opt_detail) /*8ul*/  - (unsigned long int)1);
  signed int tmp_post_1;
  while((_Bool)1)
  {
    if(field_table[(signed long int)i].field == field)
      return (signed int)field_table[(signed long int)i].type;

    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

  }
  return -1;
}

// get_xdfch_type
// file gdf1.c line 626
static enum xdftype get_xdfch_type(unsigned int gdf1type)
{
  unsigned int i;
  if(gdf1type == 0u)
    return (enum xdftype)XDFUINT8;

  else
  {
    i = (unsigned int)0;
    for( ; !((unsigned long int)i >= 12ul); i = i + 1u)
      if(gdf1_types[(signed long int)i] == gdf1type)
        return (enum xdftype)i;

    return (enum xdftype)-1;
  }
}

// get_xdfch_type_link1
// file gdf2.c line 764
static enum xdftype get_xdfch_type_link1(unsigned int gdf2type)
{
  unsigned int i_link1;
  if(gdf2type == 0u)
    return (enum xdftype)XDFUINT8;

  else
  {
    i_link1 = (unsigned int)0;
    for( ; !((unsigned long int)i_link1 >= 12ul); i_link1 = i_link1 + 1u)
      if(gdf2_types[(signed long int)i_link1] == gdf2type)
        return (enum xdftype)i_link1;

    return (enum xdftype)-1;
  }
}

// init_file_content
// file xdffile.c line 612
static signed int init_file_content(struct xdf *xdf)
{
  signed int retval = 0;
  struct anonymous_0 oldmask;
  block_signals(&oldmask);
  signed int return_value;
  return_value=xdf->ops->write_header(xdf);
  _Bool tmp_if_expr_2;
  signed int return_value_fsync_1;
  if(!(return_value == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_fsync_1=fsync(xdf->fd);
    tmp_if_expr_2 = return_value_fsync_1 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    retval = -1;

  unblock_signals(&oldmask);
  return retval;
}

// init_transfer_thread
// file xdffile.c line 527
static signed int init_transfer_thread(struct xdf *xdf)
{
  signed int ret;
  signed int done = 0;
  ret=pthread_mutex_init(&xdf->mtx, (const union anonymous *)(void *)0);
  signed int tmp_post_1;
  signed int tmp_post_2;
  if(ret == 0)
  {
    done = done + 1;
    ret=pthread_cond_init(&xdf->cond, (const union anonymous *)(void *)0);
    if(!(ret == 0))
      goto error;

    done = done + 1;
    xdf->reportval = 0;
    xdf->order = 3;
    ret=pthread_create(&xdf->thid, (const union pthread_attr_t *)(void *)0, transfer_thread_fn, (void *)xdf);
    if(!(ret == 0))
      goto error;

    return 0;
  }

  else
  {

  error:
    ;
    tmp_post_1 = done;
    done = done - 1;
    if(tmp_post_1 >= 1)
      pthread_cond_destroy(&xdf->cond);

    tmp_post_2 = done;
    done = done - 1;
    if(tmp_post_2 >= 1)
      pthread_mutex_destroy(&xdf->mtx);

    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = ret;
    return -1;
  }
}

// init_xdf_struct
// file xdfconfig.c line 162
static void init_xdf_struct(struct xdf *xdf, signed int fd, signed int mode)
{
  struct xdfch *ch = xdf->defaultch;
  const double *lim;
  xdf->ready = (unsigned int)0;
  xdf->reportval = 0;
  xdf->mode = (unsigned int)mode;
  xdf->fd = fd;
  xdf->backbuff = (char *)(void *)0;
  xdf->buff = xdf->backbuff;
  xdf->tmpbuff[(signed long int)1] = (void *)0;
  xdf->tmpbuff[(signed long int)0] = xdf->tmpbuff[(signed long int)1];
  xdf->channels = (struct xdfch *)(void *)0;
  xdf->convdata = (struct convertion_data *)(void *)0;
  xdf->batch = (struct data_batch *)(void *)0;
  xdf->array_stride = (unsigned long int *)(void *)0;
  ch->inmemtype = ch->infiletype;
  struct data_information *return_value_xdf_datinfo_1;
  return_value_xdf_datinfo_1=xdf_datinfo(ch->infiletype);
  lim = return_value_xdf_datinfo_1->lim;
  memcpy((void *)ch->digital_mm, (const void *)lim, sizeof(double [2l]) /*16ul*/ );
  memcpy((void *)ch->physical_mm, (const void *)lim, sizeof(double [2l]) /*16ul*/ );
  ch->digital_inmem = 0;
  ch->iarray = 0;
  ch->offset = 0;
}

// interpret_type
// file example/copy_datafile.c line 167
signed int interpret_type(const char *req)
{
  signed int i = 0;
  for( ; !(i >= XDF_NUM_FILE_TYPES); i = i + 1)
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(filetype_args[(signed long int)i], req);
    if(return_value_strcmp_1 == 0)
      return i;

  }
  fprintf(stderr, "Unknown filetype, use same filetype than the source\n");
  return XDF_ANY;
}

// link_batches
// file xdffile.c line 345
static void link_batches(struct xdf *xdf, unsigned int nb)
{
  unsigned int i;
  signed int ia;
  struct data_batch *batch = xdf->batch;
  unsigned long int *stride = xdf->array_stride;
  if(!(nb == 0u))
  {
    i = (unsigned int)0;
    for( ; !(i >= nb + 4294967295u); i = i + 1u)
    {
      ia = (batch + (signed long int)i)->iarray;
      if(ia == (batch + (signed long int)(1u + i))->iarray)
        (batch + (signed long int)i)->mskip = (batch + (signed long int)(i + (unsigned int)1))->moff - (batch + (signed long int)i)->moff;

      else
        (batch + (signed long int)i)->mskip = (signed int)(stride[(signed long int)ia] - (unsigned long int)(batch + (signed long int)i)->moff);
    }
    (batch + (signed long int)(nb - (unsigned int)1))->mskip = (signed int)(stride[(signed long int)(batch + (signed long int)(nb - (unsigned int)1))->iarray] - (unsigned long int)(batch + (signed long int)(nb - (unsigned int)1))->moff);
  }

}

// main
// file example/copy_datafile.c line 200
signed int main(signed int argc, char **argv)
{
  signed int dstfmt;
  signed int opt;
  signed int ret;
  dstfmt = XDF_ANY;
  do
  {
    opt=getopt(argc, argv, "t:h");
    if(opt == -1)
      break;

    if(opt == 116)
    {
      dstfmt=interpret_type(optarg);
      continue;
    }

    print_usage(stdout, argv[(signed long int)0]);
    return opt == 104 ? 0 : 1;
  }
  while((_Bool)1);
  if(!(argc + -optind == 2))
  {
    print_usage(stdout, argv[(signed long int)0]);
    return 1;
  }

  else
  {
    ret=copy_xdf(argv[(signed long int)(optind + 1)], argv[(signed long int)optind], dstfmt);
    return ret == 0 ? 0 : 1;
  }
}

// open_cloexec
// file xdfconfig.c line 200
static signed int open_cloexec(const char *filename, signed int flags, unsigned int mode)
{
  signed int fd;
  flags = flags | 02000000;
  if(!((0100 & flags) == 0))
    fd=open(filename, flags, mode);

  else
    fd=open(filename, flags);
  return fd;
}

// print_usage
// file example/copy_datafile.c line 181
void print_usage(struct _IO_FILE *f, const char *execname)
{
  fprintf(f, "Syntax:\n\t%s [-t filetype] srcfilename dstfilename\n\t%s -h\nThe first forms copy srcfilename into dstfilename\nfiletype is the file format of the destination and can be one of these types:\n\t\t- same \tuse the same type of the source\n\t\t- EDF \tEuropean Data Format\n\t\t- BDF \tBiosemi Data Format\n\t\t- GDF1 \tGeneral Data Format version 1\n\t\t- GDF2 \tGeneral Data Format version 2\nThe second forms displays this help\n", execname, execname);
}

// proceed_get_chconf
// file xdfconfig.c line 590
static signed int proceed_get_chconf(struct xdfch *ch, enum xdffield field, union optval *val)
{
  signed int retval = 0;
  if((signed int)field == XDF_CF_DMIN)
    val->d = ch->digital_mm[(signed long int)0];

  else
    if((signed int)field == XDF_CF_DMAX)
      val->d = ch->digital_mm[(signed long int)1];

    else
      if((signed int)field == XDF_CF_PMIN)
        val->d = ch->physical_mm[(signed long int)0];

      else
        if((signed int)field == XDF_CF_PMAX)
          val->d = ch->physical_mm[(signed long int)1];

        else
          if((signed int)field == XDF_CF_ARRINDEX)
            val->i = ch->iarray;

          else
            if((signed int)field == XDF_CF_ARROFFSET)
              val->i = ch->offset;

            else
              if((signed int)field == XDF_CF_ARRDIGITAL)
                val->i = ch->digital_inmem;

              else
                if((signed int)field == XDF_CF_ARRTYPE)
                  val->type = ch->inmemtype;

                else
                  if((signed int)field == XDF_CF_STOTYPE)
                    val->type = ch->infiletype;

                  else
                    retval = 1;
  retval=ch->owner->ops->get_channel(ch, field, val, retval);
  if(retval >= 1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    retval = -1;
  }

  return retval;
}

// proceed_get_conf
// file xdfconfig.c line 822
static signed int proceed_get_conf(struct xdf *xdf, enum xdffield field, union optval *val)
{
  signed int retval = 0;
  unsigned int tmp_if_expr_1;
  unsigned int tmp_if_expr_2;
  if((signed int)field == XDF_F_REC_NSAMPLE)
    val->i = (signed int)xdf->ns_per_rec;

  else
    if((signed int)field == XDF_F_SAMPLING_FREQ)
      val->i = (signed int)((double)xdf->ns_per_rec / xdf->rec_duration);

    else
      if((signed int)field == XDF_F_REC_DURATION)
        val->d = xdf->rec_duration;

      else
        if((signed int)field == XDF_F_NCHANNEL)
          val->i = (signed int)xdf->numch;

        else
          if((signed int)field == XDF_F_FILEFMT)
            val->i = (signed int)xdf->ops->type;

          else
            if((signed int)field == XDF_F_NEVTTYPE)
            {
              if(!(xdf->table == ((struct eventtable *)NULL)))
                tmp_if_expr_1 = xdf->table->nentry;

              else
                tmp_if_expr_1 = (unsigned int)0;
              val->i = (signed int)tmp_if_expr_1;
            }

            else
              if((signed int)field == XDF_F_NEVENT)
              {
                if(!(xdf->table == ((struct eventtable *)NULL)))
                  tmp_if_expr_2 = xdf->table->nevent;

                else
                  tmp_if_expr_2 = (unsigned int)0;
                val->i = (signed int)tmp_if_expr_2;
              }

              else
                retval = 1;
  retval=xdf->ops->get_conf(xdf, field, val, retval);
  if(retval >= 1)
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 22;
    retval = -1;
  }

  return retval;
}

// proceed_set_chconf
// file xdfconfig.c line 466
static signed int proceed_set_chconf(struct xdfch *ch, enum xdffield field, union optval val)
{
  signed int retval = 0;
  _Bool tmp_if_expr_4;
  struct data_information *return_value_xdf_datinfo_3;
  _Bool tmp_if_expr_6;
  struct data_information *return_value_xdf_datinfo_5;
  _Bool tmp_if_expr_7;
  if((signed int)field == XDF_CF_DMIN)
  {
    struct data_information *return_value_xdf_datinfo_1;
    return_value_xdf_datinfo_1=xdf_datinfo(ch->infiletype);
    if(return_value_xdf_datinfo_1->lim[0l] > val.d)
      retval=xdf_set_error(33);

    else
      ch->digital_mm[(signed long int)0] = val.d;
  }

  else
    if((signed int)field == XDF_CF_DMAX)
    {
      struct data_information *return_value_xdf_datinfo_2;
      return_value_xdf_datinfo_2=xdf_datinfo(ch->infiletype);
      if(return_value_xdf_datinfo_2->lim[1l] < val.d)
        retval=xdf_set_error(33);

      else
        ch->digital_mm[(signed long int)1] = val.d;
    }

    else
      if((signed int)field == XDF_CF_PMIN)
      {
        if(ch->digital_inmem == 0)
        {
          return_value_xdf_datinfo_3=xdf_datinfo(ch->inmemtype);
          tmp_if_expr_4 = return_value_xdf_datinfo_3->lim[(signed long int)0] > val.d ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          retval=xdf_set_error(33);

        else
          ch->physical_mm[(signed long int)0] = val.d;
      }

      else
        if((signed int)field == XDF_CF_PMAX)
        {
          if(ch->digital_inmem == 0)
          {
            return_value_xdf_datinfo_5=xdf_datinfo(ch->inmemtype);
            tmp_if_expr_6 = return_value_xdf_datinfo_5->lim[(signed long int)1] < val.d ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_6 = (_Bool)0;
          if(tmp_if_expr_6)
            retval=xdf_set_error(33);

          else
            ch->physical_mm[(signed long int)1] = val.d;
        }

        else
          if((signed int)field == XDF_CF_ARRINDEX)
          {
            if(!(val.i >= 0))
              tmp_if_expr_7 = ch->owner->mode == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_7 = (_Bool)0;
            if(tmp_if_expr_7)
              retval=xdf_set_error(1);

            else
              ch->iarray = val.i;
          }

          else
            if((signed int)field == XDF_CF_ARROFFSET)
              ch->offset = val.i;

            else
              if((signed int)field == XDF_CF_ARRTYPE)
                ch->inmemtype = (enum xdftype)val.i;

              else
                if((signed int)field == XDF_CF_ARRDIGITAL)
                  ch->digital_inmem = val.i;

                else
                  if((signed int)field == XDF_CF_STOTYPE)
                  {
                    if(!(ch->owner->ops->supported_type[(signed long int)val.i] == (_Bool)0))
                    {
                      ch->infiletype = (enum xdftype)val.i;
                      struct data_information *return_value_xdf_datinfo_8;
                      return_value_xdf_datinfo_8=xdf_datinfo((enum xdftype)val.i);
                      memcpy((void *)ch->digital_mm, (const void *)return_value_xdf_datinfo_8->lim, sizeof(double [2l]) /*16ul*/ );
                    }

                    else
                      retval=xdf_set_error(1);
                  }

                  else
                    retval = 1;
  retval=ch->owner->ops->set_channel(ch, field, val, retval);
  if(retval >= 1)
  {
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    *return_value___errno_location_9 = 22;
    retval = -1;
  }

  return retval;
}

// proceed_set_conf
// file xdfconfig.c line 735
static signed int proceed_set_conf(struct xdf *xdf, enum xdffield field, union optval val)
{
  signed int retval = 0;
  signed int return_value_xdf_set_error_1;
  if(!(xdf->mode == 0u))
  {
    return_value_xdf_set_error_1=xdf_set_error(1);
    return return_value_xdf_set_error_1;
  }

  else
  {
    if((signed int)field == XDF_F_REC_NSAMPLE)
      xdf->ns_per_rec = (unsigned int)val.i;

    else
      if((signed int)field == XDF_F_SAMPLING_FREQ)
        xdf->ns_per_rec = (unsigned int)(xdf->rec_duration * (double)val.i);

      else
        if((signed int)field == XDF_F_REC_DURATION)
          xdf->rec_duration = val.d;

        else
          retval = 1;
    retval=xdf->ops->set_conf(xdf, field, val, retval);
    if(retval >= 1)
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = 22;
      retval = -1;
    }

    return retval;
  }
}

// read16bval
// file streamops.c line 46
signed int read16bval(struct _IO_FILE *file, unsigned int num, void *value)
{
  unsigned long int return_value_fread_1;
  return_value_fread_1=fread(value, sizeof(unsigned short int) /*2ul*/ , (unsigned long int)num, file);
  if(return_value_fread_1 == 0ul)
    return -1;

  else
    return 0;
}

// read24bval
// file streamops.c line 79
signed int read24bval(struct _IO_FILE *file, unsigned int num, void *value)
{
  unsigned long int return_value_fread_1;
  return_value_fread_1=fread(value, (unsigned long int)3, (unsigned long int)num, file);
  if(return_value_fread_1 == 0ul)
    return -1;

  else
    return 0;
}

// read32bval
// file streamops.c line 119
signed int read32bval(struct _IO_FILE *file, unsigned int num, void *value)
{
  unsigned long int return_value_fread_1;
  return_value_fread_1=fread(value, sizeof(unsigned int) /*4ul*/ , (unsigned long int)num, file);
  if(return_value_fread_1 == 0ul)
    return -1;

  else
    return 0;
}

// read64bval
// file streamops.c line 152
signed int read64bval(struct _IO_FILE *file, unsigned int num, void *value)
{
  unsigned long int return_value_fread_1;
  return_value_fread_1=fread(value, sizeof(unsigned long int) /*8ul*/ , (unsigned long int)num, file);
  if(return_value_fread_1 == 0ul)
    return -1;

  else
    return 0;
}

// read_diskrec
// file xdffile.c line 168
static signed int read_diskrec(struct xdf *xdf)
{
  signed long int rsize;
  unsigned long int reqsize;
  unsigned int ich;
  struct convertion_data *ch;
  char *fbuff;
  char *dst = xdf->backbuff;
  void *src = xdf->tmpbuff[(signed long int)0];
  void *buff = xdf->tmpbuff[(signed long int)1];
  ich = (unsigned int)0;
  signed int tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  for( ; !(ich >= xdf->numch); ich = ich + 1u)
  {
    ch = xdf->convdata + (signed long int)ich;
    reqsize = (unsigned long int)(xdf->ns_per_rec * ch->filetypesize);
    fbuff = (char *)src;
    do
    {
      rsize=read(xdf->fd, (void *)fbuff, reqsize);
      if(rsize == 0l || rsize == -1l)
      {
        if(rsize == 0l)
          tmp_if_expr_2 = 1;

        else
        {
          return_value___errno_location_1=__errno_location();
          tmp_if_expr_2 = -(*return_value___errno_location_1);
        }
        xdf->reportval = tmp_if_expr_2;
        return -1;
      }

      reqsize = reqsize - (unsigned long int)rsize;
      fbuff = fbuff + rsize;
    }
    while(!(reqsize == 0ul));
    if(ch->skip == 0)
    {
      xdf_transconv_data(xdf->ns_per_rec, (void *)dst, src, &ch->prm, buff);
      dst = dst + (signed long int)ch->memtypesize;
    }

  }
  return 0;
}

// read_int_field
// file streamops.c line 187
signed int read_int_field(struct _IO_FILE *file, signed int *val, unsigned int nch)
{
  char format[8l];
  signed long int pos;
  pos=ftell(file);
  snprintf(format, sizeof(char [8l]) /*8ul*/ , "%%%ui", nch);
  signed int return_value_fscanf_1;
  return_value_fscanf_1=fscanf(file, format, val);
  _Bool tmp_if_expr_3;
  signed int return_value_fseek_2;
  if(!(return_value_fscanf_1 >= 1))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_fseek_2=fseek(file, pos + (signed long int)nch, 0);
    tmp_if_expr_3 = return_value_fseek_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
    return -1;

  else
    return 0;
}

// read_string_field
// file streamops.c line 205
signed int read_string_field(struct _IO_FILE *file, char *val, unsigned int nch)
{
  signed int pos;
  val[(signed long int)nch] = (char)0;
  unsigned long int return_value_fread_1;
  return_value_fread_1=fread((void *)val, (unsigned long int)nch, (unsigned long int)1, file);
  if(!(return_value_fread_1 >= 1ul))
    return -1;

  else
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(val);
    pos = (signed int)return_value_strlen_2;
    for( ; !(pos == 0); pos = pos - 1)
      if(!((signed int)val[(signed long int)(pos + -1)] == 32))
        break;

    val[(signed long int)pos] = (char)0;
    return 0;
  }
}

// reset_batch
// file xdffile.c line 308
static void reset_batch(struct data_batch *batch, unsigned int iarray, unsigned int foff)
{
  memset((void *)batch, 0, sizeof(struct data_batch) /*20ul*/ );
  batch->iarray = (signed int)iarray;
  batch->foff = (signed int)foff;
  batch->len = 0;
}

// scale_data_d
// file xdftypes.c line 118
static void scale_data_d(unsigned int ns, void *data, struct scaling_param *scaling)
{
  double *tdata = (double *)data;
  double sc = scaling->scale.d;
  double off = scaling->offset.d;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *tdata = *tdata * sc;
    *tdata = *tdata + off;
    tdata = tdata + 1l;
  }
  while((_Bool)1);
}

// scale_data_f
// file xdftypes.c line 130
static void scale_data_f(unsigned int ns, void *data, struct scaling_param *scaling)
{
  float *tdata = (float *)data;
  float sc = scaling->scale.f;
  float off = scaling->offset.f;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = ns;
    ns = ns - 1u;
    if(tmp_post_1 == 0u)
      break;

    *tdata = *tdata * sc;
    *tdata = *tdata + off;
    tdata = tdata + 1l;
  }
  while((_Bool)1);
}

// set_arg_to_val
// file xdfconfig.c line 102
static signed int set_arg_to_val(signed int field, void ***ap, union optval *val)
{
  signed int argtype;
  argtype=get_field_type(field);
  double *return_value_gcc_builtin_va_arg_1;
  char *return_value_gcc_builtin_va_arg_2;
  if(argtype == 0)
    val->i=va_arg(*ap, __typeof__(val->i));

  else
    if(argtype == 4)
      val->type=va_arg(*ap, __typeof__(val->type));

    else
      if(argtype == 3)
        val->str=va_arg(*ap, __typeof__(val->str));

      else
        if(argtype == 2)
          val->d=va_arg(*ap, __typeof__(val->d));

        else
          if(argtype == 1)
            val->ui=va_arg(*ap, __typeof__(val->ui));

          else
            if(argtype == 5)
            {
              return_value_gcc_builtin_va_arg_1=va_arg(*ap, __typeof__(return_value_gcc_builtin_va_arg_1));
              memcpy((void *)val->pos, (const void *)return_value_gcc_builtin_va_arg_1, sizeof(double [3l]) /*24ul*/ );
            }

            else
              if(argtype == 6)
              {
                return_value_gcc_builtin_va_arg_2=va_arg(*ap, __typeof__(return_value_gcc_builtin_va_arg_2));
                memcpy((void *)val->icd, (const void *)return_value_gcc_builtin_va_arg_2, sizeof(char [6l]) /*6ul*/ );
              }

              else
                return -1;
  return 0;
}

// set_binary_mode
// file ../lib/binary-io.h line 53
inline signed int set_binary_mode(signed int fd, signed int mode)
{
  (void)fd;
  (void)mode;
  return 0;
}

// set_val_to_arg
// file xdfconfig.c line 127
static signed int set_val_to_arg(signed int field, union optval val, void ***ap)
{
  signed int argtype;
  argtype=get_field_type(field);
  signed int *return_value_gcc_builtin_va_arg_1;
  enum xdftype *return_value_gcc_builtin_va_arg_2;
  const char **return_value_gcc_builtin_va_arg_3;
  double *return_value_gcc_builtin_va_arg_4;
  unsigned int *return_value_gcc_builtin_va_arg_5;
  double *return_value_gcc_builtin_va_arg_6;
  char *return_value_gcc_builtin_va_arg_7;
  if(argtype == 0)
  {
    return_value_gcc_builtin_va_arg_1=va_arg(*ap, __typeof__(return_value_gcc_builtin_va_arg_1));
    *return_value_gcc_builtin_va_arg_1 = val.i;
  }

  else
    if(argtype == 4)
    {
      return_value_gcc_builtin_va_arg_2=va_arg(*ap, __typeof__(return_value_gcc_builtin_va_arg_2));
      *return_value_gcc_builtin_va_arg_2 = val.type;
    }

    else
      if(argtype == 3)
      {
        return_value_gcc_builtin_va_arg_3=va_arg(*ap, __typeof__(return_value_gcc_builtin_va_arg_3));
        *return_value_gcc_builtin_va_arg_3 = val.str;
      }

      else
        if(argtype == 2)
        {
          return_value_gcc_builtin_va_arg_4=va_arg(*ap, __typeof__(return_value_gcc_builtin_va_arg_4));
          *return_value_gcc_builtin_va_arg_4 = val.d;
        }

        else
          if(argtype == 1)
          {
            return_value_gcc_builtin_va_arg_5=va_arg(*ap, __typeof__(return_value_gcc_builtin_va_arg_5));
            *return_value_gcc_builtin_va_arg_5 = val.ui;
          }

          else
            if(argtype == 5)
            {
              return_value_gcc_builtin_va_arg_6=va_arg(*ap, __typeof__(return_value_gcc_builtin_va_arg_6));
              memcpy((void *)return_value_gcc_builtin_va_arg_6, (const void *)val.pos, sizeof(double [3l]) /*24ul*/ );
            }

            else
              if(argtype == 6)
              {
                return_value_gcc_builtin_va_arg_7=va_arg(*ap, __typeof__(return_value_gcc_builtin_va_arg_7));
                memcpy((void *)return_value_gcc_builtin_va_arg_7, (const void *)val.icd, sizeof(char [6l]) /*6ul*/ );
              }

              else
                return -1;
  return 0;
}

// setup_convdata
// file xdffile.c line 477
static void setup_convdata(struct xdf *xdf)
{
  unsigned int i;
  unsigned int in_str;
  unsigned int out_str;
  enum xdftype in_tp;
  enum xdftype out_tp;
  const double *in_mm;
  const double *out_mm;
  struct xdfch *ch = xdf->channels;
  signed int swaptype = 0;
  i = (unsigned int)0;
  for( ; !(i >= xdf->numch); i = i + 1u)
  {
    if(xdf->mode == 0u)
    {
      in_tp = ch->inmemtype;
      in_str = xdf->sample_size;
      in_mm = ch->physical_mm;
      out_tp = ch->infiletype;
      signed int return_value_xdf_get_datasize_1;
      return_value_xdf_get_datasize_1=xdf_get_datasize(out_tp);
      out_str = (unsigned int)return_value_xdf_get_datasize_1;
      out_mm = ch->digital_mm;
      swaptype = 2;
    }

    else
    {
      in_tp = ch->infiletype;
      signed int return_value_xdf_get_datasize_2;
      return_value_xdf_get_datasize_2=xdf_get_datasize(in_tp);
      in_str = (unsigned int)return_value_xdf_get_datasize_2;
      in_mm = ch->digital_mm;
      out_tp = ch->inmemtype;
      out_str = xdf->sample_size;
      out_mm = ch->physical_mm;
      swaptype = 1;
    }
    if(!(ch->digital_inmem == 0))
    {
      out_mm = (const double *)(void *)0;
      in_mm = out_mm;
    }

    (xdf->convdata + (signed long int)i)->skip = ch->iarray < 0 ? 1 : 0;
    signed int return_value_xdf_get_datasize_3;
    return_value_xdf_get_datasize_3=xdf_get_datasize(ch->infiletype);
    (xdf->convdata + (signed long int)i)->filetypesize = (unsigned int)return_value_xdf_get_datasize_3;
    signed int return_value_xdf_get_datasize_4;
    return_value_xdf_get_datasize_4=xdf_get_datasize(ch->inmemtype);
    (xdf->convdata + (signed long int)i)->memtypesize = (unsigned int)return_value_xdf_get_datasize_4;
    xdf_setup_transform(&(xdf->convdata + (signed long int)i)->prm, swaptype, in_str, in_tp, in_mm, out_str, out_tp, out_mm);
    ch = ch->next;
  }
}

// setup_read_xdf
// file xdfconfig.c line 232
static signed int setup_read_xdf(struct xdf *xdf, signed int fd)
{
  struct xdfch *ch;
  signed int offset = 0;
  init_xdf_struct(xdf, fd, 1);
  signed int return_value;
  return_value=xdf->ops->read_header(xdf);
  if(!(return_value == 0))
    return -1;

  else
  {
    ch = xdf->channels;
    if(!(ch == ((struct xdfch *)NULL)))
    {
      ch->inmemtype = ch->infiletype;
      ch->digital_inmem = 1;
      ch->iarray = 0;
      ch->offset = offset;
      signed int return_value_xdf_get_datasize_1;
      return_value_xdf_get_datasize_1=xdf_get_datasize(ch->inmemtype);
      offset = offset + return_value_xdf_get_datasize_1;
      ch = ch->next;
    }

    return 0;
  }
}

// time_to_gdf2time
// file gdf2.c line 124
static unsigned long int time_to_gdf2time(double posixtime)
{
  double gdf2time = (posixtime / 86400.0 + 719529.0) * 4294967296.0;
  return (unsigned long int)gdf2time;
}

// transfer_thread_fn
// file xdffile.c line 220
static void * transfer_thread_fn(void *ptr)
{
  struct xdf *xdf = (struct xdf *)ptr;
  signed int wmode = xdf->mode == (unsigned int)0 ? 1 : 0;
  block_signals((struct anonymous_0 *)(void *)0);
  pthread_mutex_lock(&xdf->mtx);
  while((_Bool)1)
  {
    xdf->order = 0;
    pthread_cond_signal(&xdf->cond);
    while(xdf->order == 0)
      pthread_cond_wait(&xdf->cond, &xdf->mtx);
    if(xdf->order == 2)
      break;

    if(!(wmode == 0))
      write_diskrec(xdf);

    else
      read_diskrec(xdf);
  }
  pthread_mutex_unlock(&xdf->mtx);
  return (void *)0;
}

// unblock_signals
// file xdffile.c line 54
static void unblock_signals(struct anonymous_0 *oldmask)
{
  pthread_sigmask(2, oldmask, (struct anonymous_0 *)(void *)0);
}

// write16bval
// file streamops.c line 61
signed int write16bval(struct _IO_FILE *file, unsigned int num, const void *value)
{
  unsigned long int return_value_fwrite_1;
  return_value_fwrite_1=fwrite(value, sizeof(unsigned short int) /*2ul*/ , (unsigned long int)num, file);
  if(return_value_fwrite_1 == 0ul)
    return -1;

  else
    return 0;
}

// write24bval
// file streamops.c line 98
signed int write24bval(struct _IO_FILE *file, unsigned int num, const void *value)
{
  unsigned long int return_value_fwrite_1;
  return_value_fwrite_1=fwrite(value, (unsigned long int)3, (unsigned long int)num, file);
  if(return_value_fwrite_1 == 0ul)
    return -1;

  else
    return 0;
}

// write32bval
// file streamops.c line 134
signed int write32bval(struct _IO_FILE *file, unsigned int num, const void *value)
{
  unsigned long int return_value_fwrite_1;
  return_value_fwrite_1=fwrite(value, sizeof(unsigned int) /*4ul*/ , (unsigned long int)num, file);
  if(return_value_fwrite_1 == 0ul)
    return -1;

  else
    return 0;
}

// write64bval
// file streamops.c line 167
signed int write64bval(struct _IO_FILE *file, unsigned int num, const void *value)
{
  unsigned long int return_value_fwrite_1;
  return_value_fwrite_1=fwrite(value, sizeof(unsigned long int) /*8ul*/ , (unsigned long int)num, file);
  if(return_value_fwrite_1 == 0ul)
    return -1;

  else
    return 0;
}

// write_diskrec
// file xdffile.c line 115
static signed int write_diskrec(struct xdf *xdf)
{
  signed long int wsize;
  unsigned long int reqsize;
  unsigned int ich;
  struct convertion_data *ch;
  char *fbuff;
  char *src = xdf->backbuff;
  void *dst = xdf->tmpbuff[(signed long int)0];
  void *buff = xdf->tmpbuff[(signed long int)1];
  ich = (unsigned int)0;
  for( ; !(ich >= xdf->numch); ich = ich + 1u)
  {
    ch = xdf->convdata + (signed long int)ich;
    xdf_transconv_data(xdf->ns_per_rec, dst, (void *)src, &ch->prm, buff);
    reqsize = (unsigned long int)(xdf->ns_per_rec * ch->filetypesize);
    fbuff = (char *)dst;
    do
    {
      wsize=write(xdf->fd, (const void *)fbuff, reqsize);
      if(wsize == -1l)
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        xdf->reportval = -(*return_value___errno_location_1);
        return -1;
      }

      reqsize = reqsize - (unsigned long int)wsize;
      fbuff = fbuff + wsize;
    }
    while(!(reqsize == 0ul));
    src = src + (signed long int)ch->memtypesize;
  }
  signed int return_value_fsync_3;
  return_value_fsync_3=fsync(xdf->fd);
  if(!(return_value_fsync_3 == 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    xdf->reportval = -(*return_value___errno_location_2);
    return -1;
  }

  xdf->nrecord = xdf->nrecord + 1;
  return 0;
}

// xdf_add_channel
// file ../src/xdfio.h line 138
struct xdfch * xdf_add_channel(struct xdf *xdf, const char *label)
{
  struct xdfch *ch;
  _Bool tmp_if_expr_2;
  if(xdf == ((struct xdf *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = xdf->mode != (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = xdf == (struct xdf *)(void *)0 ? 22 : 1;
    return (struct xdfch *)(void *)0;
  }

  ch=xdf_alloc_channel(xdf);
  if(ch == ((struct xdfch *)NULL))
    return (struct xdfch *)(void *)0;

  else
  {
    xdf->numch = xdf->numch + 1u;
    if(!(label == ((const char *)NULL)))
      xdf_set_chconf(ch, (enum xdffield)XDF_CF_LABEL, label, XDF_NOF);

    return ch;
  }
}

// xdf_add_event
// file ../src/xdfio.h line 131
signed int xdf_add_event(struct xdf *xdf, signed int evttype, double onset, double duration)
{
  struct xdfevent evt = { .onset=onset, .duration=duration, .evttype=evttype };
  if(xdf == ((struct xdf *)NULL) || !(evttype >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  _Bool tmp_if_expr_3;
  if(xdf->table == ((struct eventtable *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = evttype >= (signed int)xdf->table->nentry ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = xdf->table == (struct eventtable *)(void *)0 ? 1 : 22;
    return -1;
  }

  signed int return_value_add_event_4;
  return_value_add_event_4=add_event(xdf->table, &evt);
  return return_value_add_event_4;
}

// xdf_add_evttype
// file ../src/xdfio.h line 128
signed int xdf_add_evttype(struct xdf *xdf, signed int code, const char *desc)
{
  signed int evttype;
  _Bool tmp_if_expr_2;
  if(xdf == ((struct xdf *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = xdf->table == (struct eventtable *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = xdf == (struct xdf *)(void *)0 ? 22 : 1;
    return -1;
  }

  evttype=add_event_entry(xdf->table, code, desc);
  signed int *return_value___errno_location_3;
  if(!(evttype >= 0))
  {
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 12;
  }

  return evttype;
}

// xdf_alloc_bdffile
// file ebdf.h line 23
struct xdf * xdf_alloc_bdffile(void)
{
  struct xdf *return_value_alloc_ebdffile_1;
  return_value_alloc_ebdffile_1=alloc_ebdffile(&bdf_ops, &bdfch_def);
  return return_value_alloc_ebdffile_1;
}

// xdf_alloc_channel
// file xdfconfig.c line 376
struct xdfch * xdf_alloc_channel(struct xdf *xdf)
{
  struct format_operations *ops = xdf->ops;
  struct xdfch *ch;
  struct xdfch **plastch;
  char *data;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(ops->chlen);
  data = (char *)return_value_malloc_1;
  if(data == ((char *)NULL))
    return (struct xdfch *)(void *)0;

  else
  {
    memcpy((void *)data, (const void *)((char *)xdf->defaultch - (signed long int)ops->choff), ops->chlen);
    ch = (struct xdfch *)(data + (signed long int)ops->choff);
    ch->owner = xdf;
    ch->next = (struct xdfch *)(void *)0;
    plastch = &xdf->channels;
    for( ; !(*plastch == ((struct xdfch *)NULL)); plastch = &(*plastch)->next)
      ;
    *plastch = ch;
    signed int return_value_xdf_get_datasize_2;
    return_value_xdf_get_datasize_2=xdf_get_datasize(ch->inmemtype);
    xdf->defaultch->offset = xdf->defaultch->offset + return_value_xdf_get_datasize_2;
    return ch;
  }
}

// xdf_alloc_edffile
// file ebdf.h line 26
struct xdf * xdf_alloc_edffile(void)
{
  struct xdf *return_value_alloc_ebdffile_1;
  return_value_alloc_ebdffile_1=alloc_ebdffile(&edf_ops, &edfch_def);
  return return_value_alloc_ebdffile_1;
}

// xdf_alloc_file
// file xdffile.h line 109
struct xdf * xdf_alloc_file(enum xdffiletype type)
{
  unsigned int i = (unsigned int)0;
  struct xdf *return_value;
  for( ; !(i >= num_support_datafmt); i = i + 1u)
    if(type == support_datafmt[(signed long int)i].type)
    {
      return_value=support_datafmt[(signed long int)i].alloc_file();
      return return_value;
    }

  return (struct xdf *)(void *)0;
}

// xdf_alloc_gdf1file
// file gdf1.h line 22
struct xdf * xdf_alloc_gdf1file(void)
{
  struct gdf1_file *gdf1;
  struct eventtable *table;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct gdf1_file) /*808ul*/ );
  gdf1 = (struct gdf1_file *)return_value_calloc_1;
  table=create_event_table();
  if(table == ((struct eventtable *)NULL) || gdf1 == ((struct gdf1_file *)NULL))
  {
    free((void *)gdf1);
    destroy_event_table(table);
    return (struct xdf *)(void *)0;
  }

  else
  {
    gdf1->xdf.ops = &gdf1_ops;
    gdf1->xdf.defaultch = &gdf1->default_gdf1ch.xdfch;
    gdf1->xdf.table = table;
    memcpy((void *)&gdf1->default_gdf1ch, (const void *)&gdf1ch_def, sizeof(struct gdf1_channel) /*296ul*/ );
    gdf1->default_gdf1ch.xdfch.owner = &gdf1->xdf;
    gdf1->xdf.rec_duration = 1.0;
    gdf1->version = (unsigned int)0;
    gdf1->rectime=time((signed long int *)(void *)0);
    return &gdf1->xdf;
  }
}

// xdf_alloc_gdf2file
// file gdf2.h line 22
struct xdf * xdf_alloc_gdf2file(void)
{
  struct gdf2_file *gdf2;
  struct eventtable *table;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct gdf2_file) /*808ul*/ );
  gdf2 = (struct gdf2_file *)return_value_calloc_1;
  table=create_event_table();
  if(table == ((struct eventtable *)NULL) || gdf2 == ((struct gdf2_file *)NULL))
  {
    free((void *)gdf2);
    destroy_event_table(table);
    return (struct xdf *)(void *)0;
  }

  else
  {
    gdf2->xdf.ops = &gdf2_ops;
    gdf2->xdf.defaultch = &gdf2->default_gdf2ch.xdfch;
    gdf2->xdf.table = table;
    memcpy((void *)&gdf2->default_gdf2ch, (const void *)&gdf2ch_def, sizeof(struct gdf2_channel) /*304ul*/ );
    gdf2->default_gdf2ch.xdfch.owner = &gdf2->xdf;
    gdf2->xdf.rec_duration = 1.0;
    gdf2->version = (unsigned int)0;
    signed long int return_value_time_2;
    return_value_time_2=time((signed long int *)(void *)0);
    gdf2->rectime=time_to_gdf2time((double)return_value_time_2);
    return &gdf2->xdf;
  }
}

// xdf_close
// file ../src/xdfio.h line 122
signed int xdf_close(struct xdf *xdf)
{
  signed int retval = 0;
  struct xdfch *ch;
  struct xdfch *prev;
  signed int return_value_xdf_set_error_1;
  signed int return_value_finish_record_2;
  signed int return_value_complete_file_content_3;
  signed int return_value_close_4;
  if(xdf == ((struct xdf *)NULL))
  {
    return_value_xdf_set_error_1=xdf_set_error(22);
    return return_value_xdf_set_error_1;
  }

  else
  {
    if(!(xdf->ready == 0u))
    {
      if(xdf->mode == 0u)
      {
        return_value_finish_record_2=finish_record(xdf);
        if(!(return_value_finish_record_2 == 0))
          retval = -1;

      }

      finish_transfer_thread(xdf);
      free_transfer_objects(xdf);
      if(xdf->mode == 0u)
      {
        return_value_complete_file_content_3=complete_file_content(xdf);
        if(!(return_value_complete_file_content_3 == 0))
          retval = -1;

      }

    }

    if(xdf->fd >= 0)
    {
      return_value_close_4=close(xdf->fd);
      if(!(return_value_close_4 == 0))
        retval = -1;

    }

    free((void *)xdf->array_stride);
    destroy_event_table(xdf->table);
    ch = xdf->channels;
    while(!(ch == ((struct xdfch *)NULL)))
    {
      prev = ch;
      ch = ch->next;
      free((void *)((char *)prev - (signed long int)xdf->ops->choff));
    }
    free((void *)((char *)xdf - (signed long int)xdf->ops->fileoff));
    return retval;
  }
}

// xdf_closest_type
// file xdfconfig.c line 946
signed int xdf_closest_type(struct xdf *xdf, enum xdftype type)
{
  if(xdf == ((struct xdf *)NULL) || (signed int)type >= XDF_NUM_DATA_TYPES)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  enum xdftype return_value_get_closest_type_2;
  return_value_get_closest_type_2=get_closest_type(type, xdf->ops->supported_type);
  return (signed int)return_value_get_closest_type_2;
}

// xdf_copy_chconf
// file ../src/xdfio.h line 141
signed int xdf_copy_chconf(struct xdfch *dst, struct xdfch *src)
{
  signed int return_value_xdf_set_error_1;
  enum xdftype return_value_get_closest_type_4;
  if(dst == ((struct xdfch *)NULL) || src == ((struct xdfch *)NULL))
  {
    return_value_xdf_set_error_1=xdf_set_error(22);
    return return_value_xdf_set_error_1;
  }

  else
  {
    struct format_operations *ops = dst->owner->ops;
    const enum xdffield *req;
    union optval val;
    signed int errnum;
    if(src->owner->ops->type == dst->owner->ops->type)
    {
      struct xdfch *next = dst->next;
      struct xdf *owner = dst->owner;
      memcpy((void *)((char *)dst - (signed long int)ops->choff), (const void *)((const char *)src - (signed long int)ops->choff), ops->chlen);
      dst->owner = owner;
      dst->next = next;
      return 0;
    }

    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    errnum = *return_value___errno_location_2;
    req = ops->chfields;
    for( ; !((signed int)*req == XDF_NOF); req = req + 1l)
    {
      signed int return_value_proceed_get_chconf_3;
      return_value_proceed_get_chconf_3=proceed_get_chconf(src, *req, &val);
      if(return_value_proceed_get_chconf_3 == 0)
      {
        if((signed int)*req == XDF_CF_STOTYPE)
        {
          return_value_get_closest_type_4=get_closest_type((enum xdftype)val.i, ops->supported_type);
          val.i = (signed int)return_value_get_closest_type_4;
        }

        proceed_set_chconf(dst, *req, val);
      }

    }
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    *return_value___errno_location_5 = errnum;
    return 0;
  }
}

// xdf_copy_conf
// file ../src/xdfio.h line 126
signed int xdf_copy_conf(struct xdf *dst, struct xdf *src)
{
  signed int return_value_xdf_set_error_1;
  enum xdftype return_value_get_closest_type_4;
  if(dst == ((struct xdf *)NULL) || src == ((struct xdf *)NULL))
  {
    return_value_xdf_set_error_1=xdf_set_error(22);
    return return_value_xdf_set_error_1;
  }

  else
  {
    struct format_operations *ops = dst->ops;
    const enum xdffield *req;
    union optval val;
    signed int errnum;
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    errnum = *return_value___errno_location_2;
    req = ops->filefields;
    for( ; !((signed int)*req == XDF_NOF); req = req + 1l)
    {
      signed int return_value_proceed_get_conf_3;
      return_value_proceed_get_conf_3=proceed_get_conf(src, *req, &val);
      if(return_value_proceed_get_conf_3 == 0)
      {
        if((signed int)*req == XDF_CF_STOTYPE)
        {
          return_value_get_closest_type_4=get_closest_type((enum xdftype)val.i, ops->supported_type);
          val.i = (signed int)return_value_get_closest_type_4;
        }

        proceed_set_conf(dst, *req, val);
      }

    }
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    *return_value___errno_location_5 = errnum;
    return 0;
  }
}

// xdf_datinfo
// file xdftypes.h line 75
struct data_information * xdf_datinfo(enum xdftype type)
{
  struct data_information *tmp_if_expr_1;
  if(!((signed int)type >= XDF_NUM_DATA_TYPES))
    tmp_if_expr_1 = &data_info[(signed long int)type];

  else
    tmp_if_expr_1 = (struct data_information *)(void *)0;
  return tmp_if_expr_1;
}

// xdf_define_arrays
// file ../src/xdfio.h line 143
signed int xdf_define_arrays(struct xdf *xdf, unsigned int numarrays, const unsigned long int *strides)
{
  unsigned long int *newstrides;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)numarrays * sizeof(unsigned long int) /*8ul*/ );
  newstrides = (unsigned long int *)return_value_malloc_1;
  if(newstrides == ((unsigned long int *)NULL))
    return -1;

  else
  {
    free((void *)xdf->array_stride);
    xdf->array_stride = newstrides;
    xdf->narrays = numarrays;
    memcpy((void *)xdf->array_stride, (const void *)strides, (unsigned long int)numarrays * sizeof(unsigned long int) /*8ul*/ );
    return 0;
  }
}

// xdf_get_channel
// file ../src/xdfio.h line 136
struct xdfch * xdf_get_channel(struct xdf *xdf, unsigned int index)
{
  struct xdfch *ch = xdf->channels;
  unsigned int ich = (unsigned int)0;
  _Bool tmp_if_expr_2;
  if(xdf == ((struct xdf *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = index >= xdf->numch ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (struct xdfch *)(void *)0;
  }

  for( ; !(ch == ((struct xdfch *)NULL)) && !(ich >= index); ch = ch->next)
    ich = ich + 1u;
  return ch;
}

// xdf_get_chconf
// file xdfconfig.c line 643
signed int xdf_get_chconf(struct xdfch *ch, enum xdffield field, ...)
{
  __builtin_va_list ap;
  signed int retval = 0;
  union optval val;
  signed int return_value_xdf_set_error_1;
  if(ch == ((struct xdfch *)NULL))
  {
    return_value_xdf_set_error_1=xdf_set_error(14);
    return return_value_xdf_set_error_1;
  }

  else
  {
    va_start(ap, field);
    while(!((signed int)field == XDF_NOF))
    {
      if((signed int)field >= 10001)
        retval=proceed_get_chconf(ch, field, &val);

      else
        retval=xdf_set_error(22);
      if(!(retval == 0))
        break;

      signed int return_value_set_val_to_arg_2;
      return_value_set_val_to_arg_2=set_val_to_arg((signed int)field, val, &ap);
      if(!(return_value_set_val_to_arg_2 == 0))
      {
        retval=xdf_set_error(22);
        break;
      }

      field=va_arg(ap, __typeof__(field));
    }
    va_end(ap);
    return retval;
  }
}

// xdf_get_conf
// file ../src/xdfio.h line 125
signed int xdf_get_conf(struct xdf *xdf, enum xdffield field, ...)
{
  __builtin_va_list ap;
  signed int retval = 0;
  union optval val;
  struct xdfch *defch;
  signed int return_value_xdf_set_error_1;
  if(xdf == ((struct xdf *)NULL))
  {
    return_value_xdf_set_error_1=xdf_set_error(14);
    return return_value_xdf_set_error_1;
  }

  else
  {
    defch = xdf->defaultch;
    va_start(ap, field);
    while(!((signed int)field == XDF_NOF))
    {
      if(!((signed int)field >= 10001))
        retval=proceed_get_conf(xdf, field, &val);

      else
        retval=proceed_get_chconf(defch, field, &val);
      if(!(retval == 0))
        break;

      signed int return_value_set_val_to_arg_2;
      return_value_set_val_to_arg_2=set_val_to_arg((signed int)field, val, &ap);
      if(!(return_value_set_val_to_arg_2 == 0))
      {
        retval=xdf_set_error(22);
        break;
      }

      field=va_arg(ap, __typeof__(field));
    }
    va_end(ap);
    return retval;
  }
}

// xdf_get_datasize
// file xdftypes.h line 77
signed int xdf_get_datasize(enum xdftype type)
{
  signed int tmp_if_expr_1;
  if(!((signed int)type >= XDF_NUM_DATA_TYPES))
    tmp_if_expr_1 = (signed int)data_info[(signed long int)type].size;

  else
    tmp_if_expr_1 = -1;
  return tmp_if_expr_1;
}

// xdf_get_event
// file ../src/xdfio.h line 133
signed int xdf_get_event(struct xdf *xdf, unsigned int index, unsigned int *evttype, double *start, double *dur)
{
  struct xdfevent *evt;
  if(start == ((double *)NULL) || xdf == ((struct xdf *)NULL) || evttype == ((unsigned int *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  _Bool tmp_if_expr_3;
  if(xdf->table == ((struct eventtable *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = index >= xdf->table->nevent ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = xdf->table == (struct eventtable *)(void *)0 ? 1 : 34;
    return -1;
  }

  evt=get_event(xdf->table, index);
  *evttype = (unsigned int)evt->evttype;
  *start = evt->onset;
  *dur = evt->duration;
  return 0;
}

// xdf_get_evttype
// file ../src/xdfio.h line 129
signed int xdf_get_evttype(struct xdf *xdf, unsigned int evttype, signed int *code, const char **desc)
{
  struct evententry *entry;
  if(desc == ((const char **)NULL) || code == ((signed int *)NULL) || xdf == ((struct xdf *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  _Bool tmp_if_expr_3;
  if(xdf->table == ((struct eventtable *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = evttype >= xdf->table->nentry ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = xdf->table == (struct eventtable *)(void *)0 ? 1 : 34;
    return -1;
  }

  entry = xdf->table->entry + (signed long int)evttype;
  *code = entry->code;
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(entry->label);
  char *tmp_if_expr_5;
  if(!(return_value_strlen_4 == 0ul))
    tmp_if_expr_5 = entry->label;

  else
    tmp_if_expr_5 = (char *)(void *)0;
  *desc = tmp_if_expr_5;
  return 0;
}

// xdf_get_string
// file xdffile.c line 941
const char * xdf_get_string(void)
{
  return xdffileio_string;
}

// xdf_guess_filetype
// file xdffile.h line 108
enum xdffiletype xdf_guess_filetype(const unsigned char *magickey)
{
  unsigned int i;
  enum xdffiletype type = (enum xdffiletype)XDF_ANY;
  i = (unsigned int)0;
  if(!(i >= num_support_datafmt))
  {
    signed int return_value;
    return_value=support_datafmt[(signed long int)i].is_same_type(magickey);
    if(!(return_value == 0))
      type = support_datafmt[(signed long int)i].type;

    else
      i = i + 1u;
  }

  return type;
}

// xdf_is_bdffile
// file ebdf.h line 24
signed int xdf_is_bdffile(const unsigned char *magickey)
{
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)magickey, (const void *)bdf_magickey, sizeof(const unsigned char [8l]) /*8ul*/ );
  if(return_value_memcmp_1 == 0)
    return 1;

  else
    return 0;
}

// xdf_is_edffile
// file ebdf.h line 27
signed int xdf_is_edffile(const unsigned char *magickey)
{
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)magickey, (const void *)edf_magickey, sizeof(const unsigned char [8l]) /*8ul*/ );
  if(return_value_memcmp_1 == 0)
    return 1;

  else
    return 0;
}

// xdf_is_gdf1file
// file gdf1.h line 23
signed int xdf_is_gdf1file(const unsigned char *magickey)
{
  char key[9l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned int version;
  strncpy(key, (const char *)magickey, (unsigned long int)8);
  signed int return_value_sscanf_1;
  return_value_sscanf_1=sscanf(key, "GDF 1.%u", &version);
  if(return_value_sscanf_1 == 1)
    return 1;

  else
    return 0;
}

// xdf_is_gdf2file
// file gdf2.h line 23
signed int xdf_is_gdf2file(const unsigned char *magickey)
{
  char key[9l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned int version;
  strncpy(key, (const char *)magickey, (unsigned long int)8);
  signed int return_value_sscanf_1;
  return_value_sscanf_1=sscanf(key, "GDF 2.%u", &version);
  if(return_value_sscanf_1 == 1)
    return 1;

  else
    return 0;
}

// xdf_open
// file ../src/xdfio.h line 120
struct xdf * xdf_open(const char *filename, signed int mode, enum xdffiletype type)
{
  struct xdf *xdf = (struct xdf *)(void *)0;
  if(filename == ((const char *)NULL) || !(mode == 0) && !(mode == 1))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (struct xdf *)(void *)0;
  }

  if(mode == 1)
    xdf=create_read_xdf(type, filename);

  else
    xdf=create_write_xdf(type, filename);
  return xdf;
}

// xdf_prepare_transfer
// file ../src/xdfio.h line 145
signed int xdf_prepare_transfer(struct xdf *xdf)
{
  signed int nbatch;
  signed int return_value_alloc_transfer_objects_1;
  signed int return_value_init_transfer_thread_3;
  if(!(xdf->ready == 0u))
    return -1;

  else
  {
    nbatch=compute_batches(xdf, 0);
    if(nbatch >= 0)
    {
      xdf->nbatch = (unsigned int)nbatch;
      return_value_alloc_transfer_objects_1=alloc_transfer_objects(xdf);
      if(!(return_value_alloc_transfer_objects_1 == 0))
        goto error;

      compute_batches(xdf, 1);
      setup_convdata(xdf);
      if(xdf->mode == 0u)
      {
        signed int return_value_init_file_content_2;
        return_value_init_file_content_2=init_file_content(xdf);
        if(!(return_value_init_file_content_2 == 0))
          goto error;

      }

      return_value_init_transfer_thread_3=init_transfer_thread(xdf);
      if(!(return_value_init_transfer_thread_3 == 0))
        goto error;

      if(xdf->mode == 1u)
      {
        disk_transfer(xdf);
        xdf->nrecread = -1;
      }

      xdf->ready = (unsigned int)1;
      return 0;
    }

    else
    {

    error:
      ;
      free_transfer_objects(xdf);
      xdf->nbatch = (unsigned int)0;
      return -1;
    }
  }
}

// xdf_read
// file ../src/xdfio.h line 148
signed long int xdf_read(struct xdf *xdf, unsigned long int ns, ...)
{
  _Bool tmp_if_expr_2;
  if(xdf == ((struct xdf *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(xdf->ready != 0u) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = xdf->mode == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = xdf == (struct xdf *)(void *)0 ? 22 : 1;
    return (signed long int)-1;
  }

  unsigned int i;
  unsigned int k;
  unsigned int ia;
  unsigned int nbatch = xdf->nbatch;
  unsigned int samsize = xdf->sample_size;
  char * restrict buff = xdf->buff + (signed long int)(samsize * (xdf->ns_per_rec - xdf->ns_buff));
  struct data_batch *batch = xdf->batch;
  const signed long int batch_array_size0 = (signed long int)xdf->narrays;
  char * restrict out[batch_array_size0];
  __builtin_va_list ap;
  signed int ret;
  va_start(ap, ns);
  ia = (unsigned int)0;
  for( ; !(ia >= xdf->narrays); ia = ia + 1u)
    out[(signed long int)ia]=va_arg(ap, __typeof__(out[(signed long int)ia]));
  va_end(ap);
  i = (unsigned int)0;
  for( ; !((unsigned long int)i >= ns); i = i + 1u)
  {
    if(xdf->ns_buff == 0u)
    {
      ret=disk_transfer(xdf);
      if(!(ret == 0))
        return ret < 0 && i == (unsigned int)0 ? (signed long int)-1 : (signed long int)i;

      buff = xdf->buff;
      xdf->ns_buff = xdf->ns_per_rec;
      xdf->nrecread = xdf->nrecread + 1;
    }

    k = (unsigned int)0;
    for( ; !(k >= nbatch); k = k + 1u)
    {
      ia = (unsigned int)(batch + (signed long int)k)->iarray;
      memcpy((void *)out[(signed long int)ia], (const void *)(buff + (signed long int)(batch + (signed long int)k)->foff), (unsigned long int)(batch + (signed long int)k)->len);
      out[(signed long int)ia] = out[(signed long int)ia] + (signed long int)(batch + (signed long int)k)->mskip;
    }
    buff = buff + (signed long int)samsize;
    xdf->ns_buff = xdf->ns_buff - 1u;
  }
  return (signed long int)ns;
}

// xdf_seek
// file xdffile.c line 881
signed long int xdf_seek(struct xdf *xdf, signed long int offset, signed int whence)
{
  signed long int curpoint;
  signed long int reqpoint;
  signed long int fileoff;
  signed int irec;
  signed int errnum = 0;
  unsigned int nsprec = xdf->ns_per_rec;
  _Bool tmp_if_expr_2;
  if(xdf == ((struct xdf *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = xdf->mode != (unsigned int)1 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = !(xdf->ready != 0u) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = xdf != ((struct xdf *)NULL) ? 1 : 22;
    return (signed long int)-1;
  }

  signed int tmp_if_expr_4;
  if(!(xdf->nrecread >= 0))
    tmp_if_expr_4 = 0;

  else
    tmp_if_expr_4 = xdf->nrecread;
  curpoint = (signed long int)((unsigned int)tmp_if_expr_4 * nsprec - xdf->ns_buff);
  signed int return_value_xdf_set_error_5;
  if(whence == 1)
    reqpoint = curpoint + offset;

  else
    if(whence == 0)
      reqpoint = offset;

    else
      if(whence == 2)
        reqpoint = (signed long int)((unsigned int)xdf->nrecord * nsprec) + offset;

      else
      {
        return_value_xdf_set_error_5=xdf_set_error(22);
        return (signed long int)return_value_xdf_set_error_5;
      }
  _Bool tmp_if_expr_7;
  if(!(reqpoint >= 0l))
    tmp_if_expr_7 = (_Bool)1;

  else
    tmp_if_expr_7 = reqpoint >= (signed long int)((unsigned int)xdf->nrecord * nsprec) ? (_Bool)1 : (_Bool)0;
  signed int return_value_xdf_set_error_6;
  _Bool tmp_if_expr_11;
  signed int return_value_read_diskrec_10;
  signed int *return_value___errno_location_8;
  signed int return_value_xdf_set_error_12;
  if(tmp_if_expr_7)
  {
    return_value_xdf_set_error_6=xdf_set_error(34);
    return (signed long int)return_value_xdf_set_error_6;
  }

  else
  {
    irec = (signed int)(reqpoint / (signed long int)nsprec);
    if(!(irec == xdf->nrecread))
    {
      if(!(irec == 1 + xdf->nrecread))
      {
        pthread_mutex_lock(&xdf->mtx);
        while(!(xdf->order == 0))
        {
          if(!(xdf->reportval == 0))
            break;

          pthread_cond_wait(&xdf->cond, &xdf->mtx);
        }
        fileoff = (signed long int)((unsigned int)irec * xdf->filerec_size) + xdf->hdr_offset;
        signed long int return_value_lseek_9;
        return_value_lseek_9=lseek(xdf->fd, fileoff, 0);
        if(!(return_value_lseek_9 >= 0l))
          tmp_if_expr_11 = (_Bool)1;

        else
        {
          return_value_read_diskrec_10=read_diskrec(xdf);
          tmp_if_expr_11 = return_value_read_diskrec_10 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_11)
        {
          return_value___errno_location_8=__errno_location();
          errnum = *return_value___errno_location_8;
        }

        pthread_mutex_unlock(&xdf->mtx);
        if(!(errnum == 0))
        {
          return_value_xdf_set_error_12=xdf_set_error(errnum);
          return (signed long int)return_value_xdf_set_error_12;
        }

      }

      signed int return_value_disk_transfer_13;
      return_value_disk_transfer_13=disk_transfer(xdf);
      if(!(return_value_disk_transfer_13 == 0))
        return (signed long int)-1;

      xdf->nrecread = irec;
    }

    xdf->ns_buff = (unsigned int)((signed long int)nsprec - reqpoint % (signed long int)nsprec);
    return reqpoint;
  }
}

// xdf_set_chconf
// file xdfconfig.c line 545
signed int xdf_set_chconf(struct xdfch *ch, enum xdffield field, ...)
{
  __builtin_va_list ap;
  signed int retval = 0;
  union optval val;
  signed int return_value_xdf_set_error_1;
  if(ch == ((struct xdfch *)NULL))
  {
    return_value_xdf_set_error_1=xdf_set_error(22);
    return return_value_xdf_set_error_1;
  }

  else
  {
    va_start(ap, field);
    while(!((signed int)field == XDF_NOF))
    {
      if(!((signed int)field >= 10001))
      {
        retval=xdf_set_error(22);
        break;
      }

      signed int return_value_set_arg_to_val_2;
      return_value_set_arg_to_val_2=set_arg_to_val((signed int)field, &ap, &val);
      if(!(return_value_set_arg_to_val_2 == 0))
      {
        retval=xdf_set_error(22);
        break;
      }

      retval=proceed_set_chconf(ch, field, val);
      if(!(retval == 0))
        break;

      field=va_arg(ap, __typeof__(field));
    }
    va_end(ap);
    return retval;
  }
}

// xdf_set_conf
// file xdfconfig.c line 778
signed int xdf_set_conf(struct xdf *xdf, enum xdffield field, ...)
{
  __builtin_va_list ap;
  signed int retval = 0;
  union optval val;
  struct xdfch *defch;
  signed int return_value_xdf_set_error_1;
  if(xdf == ((struct xdf *)NULL))
  {
    return_value_xdf_set_error_1=xdf_set_error(22);
    return return_value_xdf_set_error_1;
  }

  else
  {
    defch = xdf->defaultch;
    va_start(ap, field);
    while(!((signed int)field == XDF_NOF))
    {
      signed int return_value_set_arg_to_val_2;
      return_value_set_arg_to_val_2=set_arg_to_val((signed int)field, &ap, &val);
      if(!(return_value_set_arg_to_val_2 == 0))
      {
        retval=xdf_set_error(22);
        break;
      }

      if(!((signed int)field >= 10001))
        retval=proceed_set_conf(xdf, field, val);

      else
        retval=proceed_set_chconf(defch, field, val);
      if(!(retval == 0))
        break;

      field=va_arg(ap, __typeof__(field));
    }
    va_end(ap);
    return retval;
  }
}

// xdf_set_error
// file xdffile.c line 94
signed int xdf_set_error(signed int error)
{
  if(!(error == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = error;
    return -1;
  }

  return 0;
}

// xdf_setup_transform
// file xdftypes.h line 78
signed int xdf_setup_transform(struct convprm *prm, signed int swaptype, unsigned int in_str, enum xdftype in_tp, const double *in_mm, unsigned int out_str, enum xdftype out_tp, const double *out_mm)
{
  signed int scaling = 1;
  enum xdftype ti;
  double sc;
  double off;
  memset((void *)prm, 0, sizeof(struct convprm) /*56ul*/ );
  prm->stride1 = in_str;
  prm->stride3 = out_str;
  _Bool tmp_if_expr_2;
  signed int return_value_memcmp_1;
  if(in_mm == ((const double *)NULL) || out_mm == ((const double *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_memcmp_1=memcmp((const void *)in_mm, (const void *)out_mm, (unsigned long int)2 * sizeof(const double) /*8ul*/ );
    tmp_if_expr_2 = !(return_value_memcmp_1 != 0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    scaling = 0;

  ti = (enum xdftype)(data_info[(signed long int)out_tp].is_int != (_Bool)0 ? (signed int)in_tp : (signed int)out_tp);
  if(!(scaling == 0))
  {
    if(!(data_info[(signed long int)ti].is_int == (_Bool)0))
      ti = (enum xdftype)XDFDOUBLE;

  }

  _Bool tmp_if_expr_3;
  if(scaling == 0)
  {
    if(convtable[(signed long int)ti][(signed long int)out_tp] == ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = !(convtable[(signed long int)in_tp][(signed long int)ti] != ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL)) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      ti = (enum xdftype)(data_info[(signed long int)in_tp].is_signed != (_Bool)0 ? XDFINT64 : XDFUINT64);

  }

  prm->stride2 = (unsigned int)data_info[(signed long int)ti].size;
  _Bool tmp_if_expr_4;
  if(!(in_tp == ti))
    tmp_if_expr_4 = (_Bool)1;

  else
    tmp_if_expr_4 = (unsigned int)data_info[(signed long int)in_tp].size != in_str ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_4)
  {
    prm->cvfn1 = convtable[(signed long int)in_tp][(signed long int)ti];
    /* assertion prm->cvfn1 != ((void *)0) */
    assert(prm->cvfn1 != (void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))(void *)0);
  }

  _Bool tmp_if_expr_5;
  if(!(ti == out_tp))
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = (unsigned int)data_info[(signed long int)out_tp].size != out_str ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_5)
  {
    prm->cvfn3 = convtable[(signed long int)ti][(signed long int)out_tp];
    /* assertion prm->cvfn3 != ((void *)0) */
    assert(prm->cvfn3 != (void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))(void *)0);
  }

  if(!(scaling == 0))
  {
    sc = (out_mm[(signed long int)1] - out_mm[(signed long int)0]) / (in_mm[(signed long int)1] - in_mm[(signed long int)0]);
    off = out_mm[(signed long int)0] - sc * in_mm[(signed long int)0];
    if((signed int)ti == XDFDOUBLE)
    {
      prm->scaling.scale.d = sc;
      prm->scaling.offset.d = off;
      prm->scfn2 = scale_data_d;
    }

    else
      if((signed int)ti == XDFFLOAT)
      {
        prm->scaling.scale.f = (float)sc;
        prm->scaling.offset.f = (float)off;
        prm->scfn2 = scale_data_f;
      }

    /* assertion prm->scfn2 != ((void *)0) */
    assert(prm->scfn2 != (void (*)(unsigned int, void *, struct scaling_param *))(void *)0);
  }

  (void)swaptype;
  return 0;
}

// xdf_transconv_data
// file xdftypes.h line 76
void xdf_transconv_data(unsigned int ns, void * restrict dst, void * restrict src, struct convprm *prm, void * restrict tmpbuff)
{
  void *in = src;
  void *out = dst;
  if(!(prm->cvfn1 == ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL)))
  {
    if(!(prm->cvfn3 == ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL)))
      out = tmpbuff;

    prm->cvfn1(ns, out, prm->stride2, in, prm->stride1);
    in = out;
  }

  if(!(prm->scfn2 == ((void (*)(unsigned int, void *, struct scaling_param *))NULL)))
    prm->scfn2(ns, in, &prm->scaling);

  if(!(prm->cvfn3 == ((void (*)(unsigned int, void *, unsigned int, const void *, unsigned int))NULL)))
  {
    out = dst;
    prm->cvfn3(ns, out, prm->stride3, in, prm->stride2);
  }

}

// xdf_write
// file ../src/xdfio.h line 147
signed long int xdf_write(struct xdf *xdf, unsigned long int ns, ...)
{
  _Bool tmp_if_expr_2;
  if(xdf == ((struct xdf *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(xdf->ready != 0u) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = xdf->mode == (unsigned int)1 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = xdf == (struct xdf *)(void *)0 ? 22 : 1;
    return (signed long int)-1;
  }

  unsigned int i;
  unsigned int k;
  unsigned int ia;
  unsigned int nsrec = xdf->ns_per_rec;
  unsigned int nbatch = xdf->nbatch;
  unsigned int samsize = xdf->sample_size;
  char * restrict buff = xdf->buff + (signed long int)(samsize * xdf->ns_buff);
  struct data_batch *batch = xdf->batch;
  const signed long int batch_array_size0 = (signed long int)xdf->narrays;
  const char * restrict in[batch_array_size0];
  __builtin_va_list ap;
  va_start(ap, ns);
  ia = (unsigned int)0;
  for( ; !(ia >= xdf->narrays); ia = ia + 1u)
    in[(signed long int)ia]=va_arg(ap, __typeof__(in[(signed long int)ia]));
  va_end(ap);
  i = (unsigned int)0;
  for( ; !((unsigned long int)i >= ns); i = i + 1u)
  {
    if(xdf->ns_buff == nsrec)
    {
      signed int return_value_disk_transfer_4;
      return_value_disk_transfer_4=disk_transfer(xdf);
      if(!(return_value_disk_transfer_4 == 0))
        return i == (unsigned int)0 ? (signed long int)-1 : (signed long int)i;

      buff = xdf->buff;
      xdf->ns_buff = (unsigned int)0;
    }

    k = (unsigned int)0;
    for( ; !(k >= nbatch); k = k + 1u)
    {
      ia = (unsigned int)(batch + (signed long int)k)->iarray;
      memcpy((void *)(buff + (signed long int)(batch + (signed long int)k)->foff), (const void *)in[(signed long int)ia], (unsigned long int)(batch + (signed long int)k)->len);
      in[(signed long int)ia] = in[(signed long int)ia] + (signed long int)(batch + (signed long int)k)->mskip;
    }
    buff = buff + (signed long int)samsize;
    xdf->ns_buff = xdf->ns_buff + 1u;
  }
  return (signed long int)ns;
}

