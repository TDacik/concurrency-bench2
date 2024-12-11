// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$9;

// tag-#anon#ST[S32's'||U32'$pad0'||*{cV}$cV$'p'||*{cS8}$cS8$'f'|]
// file vamps.c line 143
struct anonymous$8;

// tag-#anon#ST[S8'dmv'||U8'len'|]
// file getvlc.h line 43
struct anonymous$3;

// tag-#anon#ST[U8'cbp'||U8'len'|]
// file getvlc.h line 48
struct anonymous$4;

// tag-#anon#ST[U8'code'||S8'len'|]
// file putvlc.h line 5
struct anonymous$0;

// tag-#anon#ST[U8'delta'||U8'len'|]
// file getvlc.h line 38
struct anonymous$2;

// tag-#anon#ST[U8'mba'||U8'len'|]
// file getvlc.h line 64
struct anonymous$7;

// tag-#anon#ST[U8'modes'||U8'len'|]
// file getvlc.h line 33
struct anonymous$1;

// tag-#anon#ST[U8'run'||U8'$pad0'||S16'level'|]
// file requant.c line 225
struct anonymous;

// tag-#anon#ST[U8'run'||U8'level'||U8'len'|]
// file getvlc.h line 58
struct anonymous$6;

// tag-#anon#ST[U8'size'||U8'len'|]
// file getvlc.h line 53
struct anonymous$5;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$10;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$11;

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

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

#ifndef NULL
#define NULL ((void*)0)
#endif

// Copy_Bits
// file requant.c line 445
static inline unsigned int Copy_Bits(unsigned int n);
// Flush_Bits
// file requant.c line 421
static inline void Flush_Bits(unsigned int n);
// Get_Bits
// file requant.c line 438
static inline unsigned int Get_Bits(unsigned int n);
// Refill_bits
// file requant.c line 413
static inline void Refill_bits(void);
// Show_Bits
// file requant.c line 433
static inline unsigned int Show_Bits(unsigned int n);
// _IO_putc
// file /usr/include/libio.h line 435
extern signed int _IO_putc(signed int, struct _IO_FILE *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __fxstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 409
extern signed int __fxstat(signed int, signed int, struct stat *);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// check_pack
// file vamps.c line 473
static inline void check_pack(unsigned char *ptr);
// check_video_packet
// file vamps.c line 501
static inline signed int check_video_packet(unsigned char *ptr);
// copy
// file vamps.c line 413
static inline void copy(signed int size);
// copy_mpeg_audio
// file vamps.c line 713
static inline void copy_mpeg_audio(unsigned char *ptr);
// copy_private_1
// file vamps.c line 675
static inline void copy_private_1(unsigned char *ptr);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fatal
// file vamps.c line 1357
void fatal(char *fmt, ...);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// floor
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 184
extern double floor(double);
// flush
// file vamps.c line 437
static void flush(void);
// flush_read_buffer
// file requant.c line 452
static inline void flush_read_buffer();
// flush_write_buffer
// file requant.c line 470
static inline void flush_write_buffer();
// fopen
// file /usr/include/stdio.h line 283
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat(signed int __fd, struct stat *__statbuf);
// gen_video_packet
// file vamps.c line 1025
static inline signed int gen_video_packet(unsigned char *ptr, unsigned char *voptr, signed int avail);
// getNewQuant
// file requant.c line 569
static signed int getNewQuant(signed int curQuant, signed int intra);
// get_chroma_dc_dct_diff
// file requant.c line 938
static inline signed int get_chroma_dc_dct_diff();
// get_coded_block_pattern
// file requant.c line 877
static inline signed int get_coded_block_pattern();
// get_dmv
// file requant.c line 869
static inline void get_dmv();
// get_intra_block_B14
// file requant.c line 978
static void get_intra_block_B14();
// get_intra_block_B15
// file requant.c line 1071
static void get_intra_block_B15();
// get_luma_dc_dct_diff
// file requant.c line 896
static inline signed int get_luma_dc_dct_diff();
// get_macroblock_modes
// file requant.c line 724
static inline signed int get_macroblock_modes();
// get_motion_delta
// file requant.c line 840
static inline void get_motion_delta(const signed int f_code);
// get_non_intra_block_rq
// file requant.c line 1163
static signed int get_non_intra_block_rq(struct anonymous *blk);
// get_non_intra_block_sav
// file requant.c line 1314
static signed int get_non_intra_block_sav(struct anonymous *blk, signed int cc);
// get_quantizer_scale
// file requant.c line 822
static inline signed int get_quantizer_scale();
// getopt_long_only
// file /usr/include/getopt.h line 177
extern signed int getopt_long_only(signed int, char * const *, const char *, struct option *, signed int *);
// increment_quant
// file requant.c line 522
static signed int increment_quant(signed int quant);
// intmax
// file requant.c line 562
static inline signed int intmax(signed int x, signed int y);
// isNotEmpty
// file requant.c line 608
static inline signed int isNotEmpty(struct anonymous *blk);
// lock
// file vamps.c line 383
static inline signed int lock(signed int size);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// motion_fi_16x8
// file requant.c line 1701
static void motion_fi_16x8(unsigned int *f_code);
// motion_fi_conceal
// file requant.c line 1723
static void motion_fi_conceal();
// motion_fi_dmv
// file requant.c line 1714
static void motion_fi_dmv(unsigned int *f_code);
// motion_fi_field
// file requant.c line 1693
static void motion_fi_field(unsigned int *f_code);
// motion_fr_conceal
// file requant.c line 1685
static void motion_fr_conceal();
// motion_fr_dmv
// file requant.c line 1676
static void motion_fr_dmv(unsigned int *f_code);
// motion_fr_field
// file requant.c line 1665
static void motion_fr_field(unsigned int *f_code);
// motion_fr_frame
// file requant.c line 1659
static void motion_fr_frame(unsigned int *f_code);
// mpeg2_slice
// file requant.c line 1910
void mpeg2_slice(const signed int code);
// new_mpeg_audio_id
// file vamps.c line 700
static inline signed int new_mpeg_audio_id(signed int id);
// new_private_1_type
// file vamps.c line 629
static inline signed int new_private_1_type(unsigned char *ptr);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$10 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$10 *, union anonymous$11 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$11 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$11 *);
// putAC
// file requant.c line 616
signed int putAC(signed int run, signed int signed_level, signed int vlcformat);
// putACfirst
// file requant.c line 668
static inline signed int putACfirst(signed int run, signed int val);
// put_quantiser
// file requant.c line 1821
static inline void put_quantiser(signed int quantiser);
// putaddrinc
// file requant.c line 1827
static void putaddrinc(signed int addrinc);
// putbits
// file requant.c line 388
static inline void putbits(unsigned int val, signed int n);
// putcbp
// file requant.c line 694
static inline void putcbp(signed int cbp);
// putmbdata
// file requant.c line 1752
void putmbdata(signed int macroblock_modes);
// putmbtype
// file requant.c line 700
static void putmbtype(signed int mb_type);
// putnonintrablk
// file requant.c line 678
void putnonintrablk(struct anonymous *blk);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// read_injections
// file vamps.c line 1270
void read_injections(const char *filename);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// requant
// file vamps.c line 582
static inline signed int requant(unsigned char *dst, unsigned char *src, signed int n, float fact);
// requant_thread
// file requant.c line 2184
void * requant_thread(void *p);
// rtell
// file vamps.c line 456
static inline unsigned long int rtell(unsigned char *ptr);
// scale_quant
// file requant.c line 493
static signed int scale_quant(double quant);
// scan_track_map
// file vamps.c line 360
void scan_track_map(signed int *map, unsigned int ntracks);
// skip
// file vamps.c line 429
static inline void skip(signed int size);
// slice_init
// file requant.c line 1845
static inline signed int slice_init(signed int code);
// slice_intra_DCT
// file requant.c line 1595
static inline void slice_intra_DCT(const signed int cc);
// slice_non_intra_DCT
// file requant.c line 1639
static inline void slice_non_intra_DCT(signed int cur_block);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strtof
// file /usr/include/stdlib.h line 172
extern float strtof(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoull
// file /usr/include/stdlib.h line 214
extern unsigned long long int strtoull(const char *, char ** restrict , signed int);
// usage
// file vamps.c line 1335
void usage(void);
// vap_leader
// file vamps.c line 740
static void vap_leader(void);
// vap_phase1
// file vamps.c line 885
static inline signed int vap_phase1(void);
// vap_phase2
// file vamps.c line 1089
static inline void vap_phase2(signed int seq_length);
// vap_trailer
// file vamps.c line 825
static void vap_trailer(signed int length);
// vaporize
// file vamps.c line 1177
void vaporize(void);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// write_injections
// file vamps.c line 1292
void write_injections(const char *filename);

struct anonymous$9
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

struct anonymous$8
{
  // s
  signed int s;
  // p
  const void *p;
  // f
  const char *f;
};

struct anonymous$3
{
  // dmv
  signed char dmv;
  // len
  unsigned char len;
};

struct anonymous$4
{
  // cbp
  unsigned char cbp;
  // len
  unsigned char len;
};

struct anonymous$0
{
  // code
  unsigned char code;
  // len
  char len;
};

struct anonymous$2
{
  // delta
  unsigned char delta;
  // len
  unsigned char len;
};

struct anonymous$7
{
  // mba
  unsigned char mba;
  // len
  unsigned char len;
};

struct anonymous$1
{
  // modes
  unsigned char modes;
  // len
  unsigned char len;
};

struct anonymous
{
  // run
  unsigned char run;
  // level
  signed short int level;
};

struct anonymous$6
{
  // run
  unsigned char run;
  // level
  unsigned char level;
  // len
  unsigned char len;
};

struct anonymous$5
{
  // size
  unsigned char size;
  // len
  unsigned char len;
};

union anonymous$10
{
  // __data
  struct anonymous$9 __data;
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

union anonymous$11
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


// CBP_7
// file getvlc.h line 144
static const struct anonymous$4 CBP_7[112l] = { { .cbp=(unsigned char)0x22, .len=(unsigned char)7 },
    { .cbp=(unsigned char)0x12, .len=(unsigned char)7 },
    { .cbp=(unsigned char)0x0a, .len=(unsigned char)7 },
    { .cbp=(unsigned char)0x06, .len=(unsigned char)7 },
    { .cbp=(unsigned char)0x21, .len=(unsigned char)7 },
    { .cbp=(unsigned char)0x11, .len=(unsigned char)7 },
    { .cbp=(unsigned char)0x09, .len=(unsigned char)7 },
    { .cbp=(unsigned char)0x05, .len=(unsigned char)7 },
    { .cbp=(unsigned char)0x3f, .len=(unsigned char)6 },
    { .cbp=(unsigned char)0x3f, .len=(unsigned char)6 },
    { .cbp=(unsigned char)0x03, .len=(unsigned char)6 },
    { .cbp=(unsigned char)0x03, .len=(unsigned char)6 },
    { .cbp=(unsigned char)0x24, .len=(unsigned char)6 },
    { .cbp=(unsigned char)0x24, .len=(unsigned char)6 },
    { .cbp=(unsigned char)0x18, .len=(unsigned char)6 },
    { .cbp=(unsigned char)0x18, .len=(unsigned char)6 },
    { .cbp=(unsigned char)0x3e, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x3e, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x3e, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x3e, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x02, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x02, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x02, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x02, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x3d, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x3d, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x3d, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x3d, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x01, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x01, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x01, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x01, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x38, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x38, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x38, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x38, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x34, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x34, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x34, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x34, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x2c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x2c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x2c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x2c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x1c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x1c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x1c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x1c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x28, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x28, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x28, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x28, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x14, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x14, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x14, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x14, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x30, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x30, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x30, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x30, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x0c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x0c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x0c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x0c, .len=(unsigned char)5 },
    { .cbp=(unsigned char)0x20, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x20, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x20, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x20, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x20, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x20, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x20, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x20, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x10, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x10, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x10, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x10, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x10, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x10, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x10, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x10, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x08, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x08, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x08, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x08, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x08, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x08, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x08, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x08, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x04, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x04, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x04, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x04, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x04, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x04, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x04, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x04, .len=(unsigned char)4 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 },
    { .cbp=(unsigned char)0x3c, .len=(unsigned char)3 } };
// CBP_9
// file getvlc.h line 175
static const struct anonymous$4 CBP_9[64l] = { { .cbp=(unsigned char)0, .len=(unsigned char)0 },
    { .cbp=(unsigned char)0x00, .len=(unsigned char)9 },
    { .cbp=(unsigned char)0x27, .len=(unsigned char)9 },
    { .cbp=(unsigned char)0x1b, .len=(unsigned char)9 },
    { .cbp=(unsigned char)0x3b, .len=(unsigned char)9 },
    { .cbp=(unsigned char)0x37, .len=(unsigned char)9 },
    { .cbp=(unsigned char)0x2f, .len=(unsigned char)9 },
    { .cbp=(unsigned char)0x1f, .len=(unsigned char)9 },
    { .cbp=(unsigned char)0x3a, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x3a, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x36, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x36, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x2e, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x2e, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x1e, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x1e, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x39, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x39, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x35, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x35, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x2d, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x2d, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x1d, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x1d, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x26, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x26, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x1a, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x1a, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x25, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x25, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x19, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x19, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x2b, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x2b, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x17, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x17, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x33, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x33, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x0f, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x0f, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x2a, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x2a, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x16, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x16, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x32, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x32, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x0e, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x0e, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x29, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x29, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x15, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x15, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x31, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x31, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x0d, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x0d, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x23, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x23, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x13, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x13, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x0b, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x0b, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x07, .len=(unsigned char)8 },
    { .cbp=(unsigned char)0x07, .len=(unsigned char)8 } };
// DCT_13
// file getvlc.h line 243
static const struct anonymous$6 DCT_13[48l] = { { .run=(unsigned char)11, .level=(unsigned char)2, .len=(unsigned char)13 },
    { .run=(unsigned char)10, .level=(unsigned char)2, .len=(unsigned char)13 },
    { .run=(unsigned char)6, .level=(unsigned char)3, .len=(unsigned char)13 },
    { .run=(unsigned char)4, .level=(unsigned char)4, .len=(unsigned char)13 },
    { .run=(unsigned char)3, .level=(unsigned char)5, .len=(unsigned char)13 },
    { .run=(unsigned char)2, .level=(unsigned char)7, .len=(unsigned char)13 },
    { .run=(unsigned char)2, .level=(unsigned char)6, .len=(unsigned char)13 },
    { .run=(unsigned char)1, .level=(unsigned char)15, .len=(unsigned char)13 },
    { .run=(unsigned char)1, .level=(unsigned char)14, .len=(unsigned char)13 },
    { .run=(unsigned char)1, .level=(unsigned char)13, .len=(unsigned char)13 },
    { .run=(unsigned char)1, .level=(unsigned char)12, .len=(unsigned char)13 },
    { .run=(unsigned char)27, .level=(unsigned char)1, .len=(unsigned char)13 },
    { .run=(unsigned char)26, .level=(unsigned char)1, .len=(unsigned char)13 },
    { .run=(unsigned char)25, .level=(unsigned char)1, .len=(unsigned char)13 },
    { .run=(unsigned char)24, .level=(unsigned char)1, .len=(unsigned char)13 },
    { .run=(unsigned char)23, .level=(unsigned char)1, .len=(unsigned char)13 },
    { .run=(unsigned char)1, .level=(unsigned char)11, .len=(unsigned char)12 },
    { .run=(unsigned char)1, .level=(unsigned char)11, .len=(unsigned char)12 },
    { .run=(unsigned char)9, .level=(unsigned char)2, .len=(unsigned char)12 },
    { .run=(unsigned char)9, .level=(unsigned char)2, .len=(unsigned char)12 },
    { .run=(unsigned char)5, .level=(unsigned char)3, .len=(unsigned char)12 },
    { .run=(unsigned char)5, .level=(unsigned char)3, .len=(unsigned char)12 },
    { .run=(unsigned char)1, .level=(unsigned char)10, .len=(unsigned char)12 },
    { .run=(unsigned char)1, .level=(unsigned char)10, .len=(unsigned char)12 },
    { .run=(unsigned char)3, .level=(unsigned char)4, .len=(unsigned char)12 },
    { .run=(unsigned char)3, .level=(unsigned char)4, .len=(unsigned char)12 },
    { .run=(unsigned char)8, .level=(unsigned char)2, .len=(unsigned char)12 },
    { .run=(unsigned char)8, .level=(unsigned char)2, .len=(unsigned char)12 },
    { .run=(unsigned char)22, .level=(unsigned char)1, .len=(unsigned char)12 },
    { .run=(unsigned char)22, .level=(unsigned char)1, .len=(unsigned char)12 },
    { .run=(unsigned char)21, .level=(unsigned char)1, .len=(unsigned char)12 },
    { .run=(unsigned char)21, .level=(unsigned char)1, .len=(unsigned char)12 },
    { .run=(unsigned char)1, .level=(unsigned char)9, .len=(unsigned char)12 },
    { .run=(unsigned char)1, .level=(unsigned char)9, .len=(unsigned char)12 },
    { .run=(unsigned char)20, .level=(unsigned char)1, .len=(unsigned char)12 },
    { .run=(unsigned char)20, .level=(unsigned char)1, .len=(unsigned char)12 },
    { .run=(unsigned char)19, .level=(unsigned char)1, .len=(unsigned char)12 },
    { .run=(unsigned char)19, .level=(unsigned char)1, .len=(unsigned char)12 },
    { .run=(unsigned char)2, .level=(unsigned char)5, .len=(unsigned char)12 },
    { .run=(unsigned char)2, .level=(unsigned char)5, .len=(unsigned char)12 },
    { .run=(unsigned char)4, .level=(unsigned char)3, .len=(unsigned char)12 },
    { .run=(unsigned char)4, .level=(unsigned char)3, .len=(unsigned char)12 },
    { .run=(unsigned char)1, .level=(unsigned char)8, .len=(unsigned char)12 },
    { .run=(unsigned char)1, .level=(unsigned char)8, .len=(unsigned char)12 },
    { .run=(unsigned char)7, .level=(unsigned char)2, .len=(unsigned char)12 },
    { .run=(unsigned char)7, .level=(unsigned char)2, .len=(unsigned char)12 },
    { .run=(unsigned char)18, .level=(unsigned char)1, .len=(unsigned char)12 },
    { .run=(unsigned char)18, .level=(unsigned char)1, .len=(unsigned char)12 } };
// DCT_15
// file getvlc.h line 228
static const struct anonymous$6 DCT_15[48l] = { { .run=(unsigned char)1, .level=(unsigned char)40, .len=(unsigned char)15 },
    { .run=(unsigned char)1, .level=(unsigned char)39, .len=(unsigned char)15 },
    { .run=(unsigned char)1, .level=(unsigned char)38, .len=(unsigned char)15 },
    { .run=(unsigned char)1, .level=(unsigned char)37, .len=(unsigned char)15 },
    { .run=(unsigned char)1, .level=(unsigned char)36, .len=(unsigned char)15 },
    { .run=(unsigned char)1, .level=(unsigned char)35, .len=(unsigned char)15 },
    { .run=(unsigned char)1, .level=(unsigned char)34, .len=(unsigned char)15 },
    { .run=(unsigned char)1, .level=(unsigned char)33, .len=(unsigned char)15 },
    { .run=(unsigned char)1, .level=(unsigned char)32, .len=(unsigned char)15 },
    { .run=(unsigned char)2, .level=(unsigned char)14, .len=(unsigned char)15 },
    { .run=(unsigned char)2, .level=(unsigned char)13, .len=(unsigned char)15 },
    { .run=(unsigned char)2, .level=(unsigned char)12, .len=(unsigned char)15 },
    { .run=(unsigned char)2, .level=(unsigned char)11, .len=(unsigned char)15 },
    { .run=(unsigned char)2, .level=(unsigned char)10, .len=(unsigned char)15 },
    { .run=(unsigned char)2, .level=(unsigned char)9, .len=(unsigned char)15 },
    { .run=(unsigned char)2, .level=(unsigned char)8, .len=(unsigned char)15 },
    { .run=(unsigned char)1, .level=(unsigned char)31, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)31, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)30, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)30, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)29, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)29, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)28, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)28, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)27, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)27, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)26, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)26, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)25, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)25, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)24, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)24, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)23, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)23, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)22, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)22, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)21, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)21, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)20, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)20, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)19, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)19, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)18, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)18, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)17, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)17, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)16, .len=(unsigned char)14 },
    { .run=(unsigned char)1, .level=(unsigned char)16, .len=(unsigned char)14 } };
// DCT_16
// file getvlc.h line 217
static const struct anonymous$6 DCT_16[32l] = { { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)0 },
    { .run=(unsigned char)2, .level=(unsigned char)18, .len=(unsigned char)0 },
    { .run=(unsigned char)2, .level=(unsigned char)17, .len=(unsigned char)0 },
    { .run=(unsigned char)2, .level=(unsigned char)16, .len=(unsigned char)0 },
    { .run=(unsigned char)2, .level=(unsigned char)15, .len=(unsigned char)0 },
    { .run=(unsigned char)7, .level=(unsigned char)3, .len=(unsigned char)0 },
    { .run=(unsigned char)17, .level=(unsigned char)2, .len=(unsigned char)0 },
    { .run=(unsigned char)16, .level=(unsigned char)2, .len=(unsigned char)0 },
    { .run=(unsigned char)15, .level=(unsigned char)2, .len=(unsigned char)0 },
    { .run=(unsigned char)14, .level=(unsigned char)2, .len=(unsigned char)0 },
    { .run=(unsigned char)13, .level=(unsigned char)2, .len=(unsigned char)0 },
    { .run=(unsigned char)12, .level=(unsigned char)2, .len=(unsigned char)0 },
    { .run=(unsigned char)32, .level=(unsigned char)1, .len=(unsigned char)0 },
    { .run=(unsigned char)31, .level=(unsigned char)1, .len=(unsigned char)0 },
    { .run=(unsigned char)30, .level=(unsigned char)1, .len=(unsigned char)0 },
    { .run=(unsigned char)29, .level=(unsigned char)1, .len=(unsigned char)0 },
    { .run=(unsigned char)28, .level=(unsigned char)1, .len=(unsigned char)0 } };
// DCT_B14AC_5
// file getvlc.h line 275
static const struct anonymous$6 DCT_B14AC_5[27l] = { { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)5 },
    { .run=(unsigned char)5, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)4 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)4 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)4 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)2 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)2 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)2 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)2 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)2 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)2 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)2 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 } };
// DCT_B14DC_5
// file getvlc.h line 285
static const struct anonymous$6 DCT_B14DC_5[27l] = { { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)5 },
    { .run=(unsigned char)5, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)4 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)4 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)4 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)1 } };
// DCT_B14_10
// file getvlc.h line 258
static const struct anonymous$6 DCT_B14_10[8l] = { { .run=(unsigned char)17, .level=(unsigned char)1, .len=(unsigned char)10 },
    { .run=(unsigned char)6, .level=(unsigned char)2, .len=(unsigned char)10 },
    { .run=(unsigned char)1, .level=(unsigned char)7, .len=(unsigned char)10 },
    { .run=(unsigned char)3, .level=(unsigned char)3, .len=(unsigned char)10 },
    { .run=(unsigned char)2, .level=(unsigned char)4, .len=(unsigned char)10 },
    { .run=(unsigned char)16, .level=(unsigned char)1, .len=(unsigned char)10 },
    { .run=(unsigned char)15, .level=(unsigned char)1, .len=(unsigned char)10 },
    { .run=(unsigned char)5, .level=(unsigned char)2, .len=(unsigned char)10 } };
// DCT_B14_8
// file getvlc.h line 263
static const struct anonymous$6 DCT_B14_8[36l] = { { .run=(unsigned char)65, .level=(unsigned char)0, .len=(unsigned char)6 },
    { .run=(unsigned char)65, .level=(unsigned char)0, .len=(unsigned char)6 },
    { .run=(unsigned char)65, .level=(unsigned char)0, .len=(unsigned char)6 },
    { .run=(unsigned char)65, .level=(unsigned char)0, .len=(unsigned char)6 },
    { .run=(unsigned char)3, .level=(unsigned char)2, .len=(unsigned char)7 },
    { .run=(unsigned char)3, .level=(unsigned char)2, .len=(unsigned char)7 },
    { .run=(unsigned char)10, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)10, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)7 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)7 },
    { .run=(unsigned char)9, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)9, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)8, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)8, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)8, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)8, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)7, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)7, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)7, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)7, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)6 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)6 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)6 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)6 },
    { .run=(unsigned char)6, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)6, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)6, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)6, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)14, .level=(unsigned char)1, .len=(unsigned char)8 },
    { .run=(unsigned char)1, .level=(unsigned char)6, .len=(unsigned char)8 },
    { .run=(unsigned char)13, .level=(unsigned char)1, .len=(unsigned char)8 },
    { .run=(unsigned char)12, .level=(unsigned char)1, .len=(unsigned char)8 },
    { .run=(unsigned char)4, .level=(unsigned char)2, .len=(unsigned char)8 },
    { .run=(unsigned char)2, .level=(unsigned char)3, .len=(unsigned char)8 },
    { .run=(unsigned char)1, .level=(unsigned char)5, .len=(unsigned char)8 },
    { .run=(unsigned char)11, .level=(unsigned char)1, .len=(unsigned char)8 } };
// DCT_B15_10
// file getvlc.h line 295
static const struct anonymous$6 DCT_B15_10[8l] = { { .run=(unsigned char)6, .level=(unsigned char)2, .len=(unsigned char)9 },
    { .run=(unsigned char)6, .level=(unsigned char)2, .len=(unsigned char)9 },
    { .run=(unsigned char)15, .level=(unsigned char)1, .len=(unsigned char)9 },
    { .run=(unsigned char)15, .level=(unsigned char)1, .len=(unsigned char)9 },
    { .run=(unsigned char)3, .level=(unsigned char)4, .len=(unsigned char)10 },
    { .run=(unsigned char)17, .level=(unsigned char)1, .len=(unsigned char)10 },
    { .run=(unsigned char)16, .level=(unsigned char)1, .len=(unsigned char)9 },
    { .run=(unsigned char)16, .level=(unsigned char)1, .len=(unsigned char)9 } };
// DCT_B15_8
// file getvlc.h line 300
static const struct anonymous$6 DCT_B15_8[252l] = { { .run=(unsigned char)65, .level=(unsigned char)0, .len=(unsigned char)6 },
    { .run=(unsigned char)65, .level=(unsigned char)0, .len=(unsigned char)6 },
    { .run=(unsigned char)65, .level=(unsigned char)0, .len=(unsigned char)6 },
    { .run=(unsigned char)65, .level=(unsigned char)0, .len=(unsigned char)6 },
    { .run=(unsigned char)8, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)8, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)9, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)9, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)7, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)7, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)3, .level=(unsigned char)2, .len=(unsigned char)7 },
    { .run=(unsigned char)3, .level=(unsigned char)2, .len=(unsigned char)7 },
    { .run=(unsigned char)1, .level=(unsigned char)7, .len=(unsigned char)6 },
    { .run=(unsigned char)1, .level=(unsigned char)7, .len=(unsigned char)6 },
    { .run=(unsigned char)1, .level=(unsigned char)7, .len=(unsigned char)6 },
    { .run=(unsigned char)1, .level=(unsigned char)7, .len=(unsigned char)6 },
    { .run=(unsigned char)1, .level=(unsigned char)6, .len=(unsigned char)6 },
    { .run=(unsigned char)1, .level=(unsigned char)6, .len=(unsigned char)6 },
    { .run=(unsigned char)1, .level=(unsigned char)6, .len=(unsigned char)6 },
    { .run=(unsigned char)1, .level=(unsigned char)6, .len=(unsigned char)6 },
    { .run=(unsigned char)5, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)5, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)5, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)5, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)6, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)6, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)6, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)6, .level=(unsigned char)1, .len=(unsigned char)6 },
    { .run=(unsigned char)2, .level=(unsigned char)5, .len=(unsigned char)8 },
    { .run=(unsigned char)12, .level=(unsigned char)1, .len=(unsigned char)8 },
    { .run=(unsigned char)1, .level=(unsigned char)11, .len=(unsigned char)8 },
    { .run=(unsigned char)1, .level=(unsigned char)10, .len=(unsigned char)8 },
    { .run=(unsigned char)14, .level=(unsigned char)1, .len=(unsigned char)8 },
    { .run=(unsigned char)13, .level=(unsigned char)1, .len=(unsigned char)8 },
    { .run=(unsigned char)4, .level=(unsigned char)2, .len=(unsigned char)8 },
    { .run=(unsigned char)2, .level=(unsigned char)4, .len=(unsigned char)8 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)3, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)5 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)5 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)5 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)5 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)5 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)5 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)5 },
    { .run=(unsigned char)2, .level=(unsigned char)2, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)4, .level=(unsigned char)1, .len=(unsigned char)5 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)2, .level=(unsigned char)1, .len=(unsigned char)3 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)129, .level=(unsigned char)0, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)3, .len=(unsigned char)4 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)1, .len=(unsigned char)2 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)2, .len=(unsigned char)3 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)4, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)5, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)5, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)5, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)5, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)5, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)5, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)5, .len=(unsigned char)5 },
    { .run=(unsigned char)1, .level=(unsigned char)5, .len=(unsigned char)5 },
    { .run=(unsigned char)10, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)10, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)2, .level=(unsigned char)3, .len=(unsigned char)7 },
    { .run=(unsigned char)2, .level=(unsigned char)3, .len=(unsigned char)7 },
    { .run=(unsigned char)11, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)11, .level=(unsigned char)1, .len=(unsigned char)7 },
    { .run=(unsigned char)1, .level=(unsigned char)8, .len=(unsigned char)7 },
    { .run=(unsigned char)1, .level=(unsigned char)8, .len=(unsigned char)7 },
    { .run=(unsigned char)1, .level=(unsigned char)9, .len=(unsigned char)7 },
    { .run=(unsigned char)1, .level=(unsigned char)9, .len=(unsigned char)7 },
    { .run=(unsigned char)1, .level=(unsigned char)12, .len=(unsigned char)8 },
    { .run=(unsigned char)1, .level=(unsigned char)13, .len=(unsigned char)8 },
    { .run=(unsigned char)3, .level=(unsigned char)3, .len=(unsigned char)8 },
    { .run=(unsigned char)5, .level=(unsigned char)2, .len=(unsigned char)8 },
    { .run=(unsigned char)1, .level=(unsigned char)14, .len=(unsigned char)8 },
    { .run=(unsigned char)1, .level=(unsigned char)15, .len=(unsigned char)8 } };
// DC_chrom_5
// file getvlc.h line 202
static const struct anonymous$5 DC_chrom_5[31l] = { { .size=(unsigned char)0, .len=(unsigned char)2 },
    { .size=(unsigned char)0, .len=(unsigned char)2 },
    { .size=(unsigned char)0, .len=(unsigned char)2 },
    { .size=(unsigned char)0, .len=(unsigned char)2 },
    { .size=(unsigned char)0, .len=(unsigned char)2 },
    { .size=(unsigned char)0, .len=(unsigned char)2 },
    { .size=(unsigned char)0, .len=(unsigned char)2 },
    { .size=(unsigned char)0, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)3, .len=(unsigned char)3 },
    { .size=(unsigned char)3, .len=(unsigned char)3 },
    { .size=(unsigned char)3, .len=(unsigned char)3 },
    { .size=(unsigned char)3, .len=(unsigned char)3 },
    { .size=(unsigned char)4, .len=(unsigned char)4 },
    { .size=(unsigned char)4, .len=(unsigned char)4 },
    { .size=(unsigned char)5, .len=(unsigned char)5 } };
// DC_long
// file getvlc.h line 209
static const struct anonymous$5 DC_long[32l] = { { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)6, .len=(unsigned char)5 },
    { .size=(unsigned char)7, .len=(unsigned char)6 },
    { .size=(unsigned char)7, .len=(unsigned char)6 },
    { .size=(unsigned char)7, .len=(unsigned char)6 },
    { .size=(unsigned char)7, .len=(unsigned char)6 },
    { .size=(unsigned char)7, .len=(unsigned char)6 },
    { .size=(unsigned char)7, .len=(unsigned char)6 },
    { .size=(unsigned char)7, .len=(unsigned char)6 },
    { .size=(unsigned char)7, .len=(unsigned char)6 },
    { .size=(unsigned char)8, .len=(unsigned char)7 },
    { .size=(unsigned char)8, .len=(unsigned char)7 },
    { .size=(unsigned char)8, .len=(unsigned char)7 },
    { .size=(unsigned char)8, .len=(unsigned char)7 },
    { .size=(unsigned char)9, .len=(unsigned char)8 },
    { .size=(unsigned char)9, .len=(unsigned char)8 },
    { .size=(unsigned char)10, .len=(unsigned char)9 },
    { .size=(unsigned char)11, .len=(unsigned char)9 } };
// DC_lum_5
// file getvlc.h line 195
static const struct anonymous$5 DC_lum_5[31l] = { { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)1, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)2, .len=(unsigned char)2 },
    { .size=(unsigned char)0, .len=(unsigned char)3 },
    { .size=(unsigned char)0, .len=(unsigned char)3 },
    { .size=(unsigned char)0, .len=(unsigned char)3 },
    { .size=(unsigned char)0, .len=(unsigned char)3 },
    { .size=(unsigned char)3, .len=(unsigned char)3 },
    { .size=(unsigned char)3, .len=(unsigned char)3 },
    { .size=(unsigned char)3, .len=(unsigned char)3 },
    { .size=(unsigned char)3, .len=(unsigned char)3 },
    { .size=(unsigned char)4, .len=(unsigned char)3 },
    { .size=(unsigned char)4, .len=(unsigned char)3 },
    { .size=(unsigned char)4, .len=(unsigned char)3 },
    { .size=(unsigned char)4, .len=(unsigned char)3 },
    { .size=(unsigned char)5, .len=(unsigned char)4 },
    { .size=(unsigned char)5, .len=(unsigned char)4 },
    { .size=(unsigned char)6, .len=(unsigned char)5 } };
// DMV_2
// file getvlc.h line 139
static const struct anonymous$3 DMV_2[4l] = { { .dmv=(signed char)0, .len=(unsigned char)1 },
    { .dmv=(signed char)0, .len=(unsigned char)1 },
    { .dmv=(signed char)1, .len=(unsigned char)2 },
    { .dmv=(signed char)-1, .len=(unsigned char)2 } };
// MBA_11
// file getvlc.h line 374
static const struct anonymous$7 MBA_11[104l] = { { .mba=(unsigned char)32, .len=(unsigned char)11 },
    { .mba=(unsigned char)31, .len=(unsigned char)11 },
    { .mba=(unsigned char)30, .len=(unsigned char)11 },
    { .mba=(unsigned char)29, .len=(unsigned char)11 },
    { .mba=(unsigned char)28, .len=(unsigned char)11 },
    { .mba=(unsigned char)27, .len=(unsigned char)11 },
    { .mba=(unsigned char)26, .len=(unsigned char)11 },
    { .mba=(unsigned char)25, .len=(unsigned char)11 },
    { .mba=(unsigned char)24, .len=(unsigned char)11 },
    { .mba=(unsigned char)23, .len=(unsigned char)11 },
    { .mba=(unsigned char)22, .len=(unsigned char)11 },
    { .mba=(unsigned char)21, .len=(unsigned char)11 },
    { .mba=(unsigned char)20, .len=(unsigned char)10 },
    { .mba=(unsigned char)20, .len=(unsigned char)10 },
    { .mba=(unsigned char)19, .len=(unsigned char)10 },
    { .mba=(unsigned char)19, .len=(unsigned char)10 },
    { .mba=(unsigned char)18, .len=(unsigned char)10 },
    { .mba=(unsigned char)18, .len=(unsigned char)10 },
    { .mba=(unsigned char)17, .len=(unsigned char)10 },
    { .mba=(unsigned char)17, .len=(unsigned char)10 },
    { .mba=(unsigned char)16, .len=(unsigned char)10 },
    { .mba=(unsigned char)16, .len=(unsigned char)10 },
    { .mba=(unsigned char)15, .len=(unsigned char)10 },
    { .mba=(unsigned char)15, .len=(unsigned char)10 },
    { .mba=(unsigned char)14, .len=(unsigned char)8 },
    { .mba=(unsigned char)14, .len=(unsigned char)8 },
    { .mba=(unsigned char)14, .len=(unsigned char)8 },
    { .mba=(unsigned char)14, .len=(unsigned char)8 },
    { .mba=(unsigned char)14, .len=(unsigned char)8 },
    { .mba=(unsigned char)14, .len=(unsigned char)8 },
    { .mba=(unsigned char)14, .len=(unsigned char)8 },
    { .mba=(unsigned char)14, .len=(unsigned char)8 },
    { .mba=(unsigned char)13, .len=(unsigned char)8 },
    { .mba=(unsigned char)13, .len=(unsigned char)8 },
    { .mba=(unsigned char)13, .len=(unsigned char)8 },
    { .mba=(unsigned char)13, .len=(unsigned char)8 },
    { .mba=(unsigned char)13, .len=(unsigned char)8 },
    { .mba=(unsigned char)13, .len=(unsigned char)8 },
    { .mba=(unsigned char)13, .len=(unsigned char)8 },
    { .mba=(unsigned char)13, .len=(unsigned char)8 },
    { .mba=(unsigned char)12, .len=(unsigned char)8 },
    { .mba=(unsigned char)12, .len=(unsigned char)8 },
    { .mba=(unsigned char)12, .len=(unsigned char)8 },
    { .mba=(unsigned char)12, .len=(unsigned char)8 },
    { .mba=(unsigned char)12, .len=(unsigned char)8 },
    { .mba=(unsigned char)12, .len=(unsigned char)8 },
    { .mba=(unsigned char)12, .len=(unsigned char)8 },
    { .mba=(unsigned char)12, .len=(unsigned char)8 },
    { .mba=(unsigned char)11, .len=(unsigned char)8 },
    { .mba=(unsigned char)11, .len=(unsigned char)8 },
    { .mba=(unsigned char)11, .len=(unsigned char)8 },
    { .mba=(unsigned char)11, .len=(unsigned char)8 },
    { .mba=(unsigned char)11, .len=(unsigned char)8 },
    { .mba=(unsigned char)11, .len=(unsigned char)8 },
    { .mba=(unsigned char)11, .len=(unsigned char)8 },
    { .mba=(unsigned char)11, .len=(unsigned char)8 },
    { .mba=(unsigned char)10, .len=(unsigned char)8 },
    { .mba=(unsigned char)10, .len=(unsigned char)8 },
    { .mba=(unsigned char)10, .len=(unsigned char)8 },
    { .mba=(unsigned char)10, .len=(unsigned char)8 },
    { .mba=(unsigned char)10, .len=(unsigned char)8 },
    { .mba=(unsigned char)10, .len=(unsigned char)8 },
    { .mba=(unsigned char)10, .len=(unsigned char)8 },
    { .mba=(unsigned char)10, .len=(unsigned char)8 },
    { .mba=(unsigned char)9, .len=(unsigned char)8 },
    { .mba=(unsigned char)9, .len=(unsigned char)8 },
    { .mba=(unsigned char)9, .len=(unsigned char)8 },
    { .mba=(unsigned char)9, .len=(unsigned char)8 },
    { .mba=(unsigned char)9, .len=(unsigned char)8 },
    { .mba=(unsigned char)9, .len=(unsigned char)8 },
    { .mba=(unsigned char)9, .len=(unsigned char)8 },
    { .mba=(unsigned char)9, .len=(unsigned char)8 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)8, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 },
    { .mba=(unsigned char)7, .len=(unsigned char)7 } };
// MBA_5
// file getvlc.h line 367
static const struct anonymous$7 MBA_5[30l] = { { .mba=(unsigned char)6, .len=(unsigned char)5 },
    { .mba=(unsigned char)5, .len=(unsigned char)5 },
    { .mba=(unsigned char)4, .len=(unsigned char)4 },
    { .mba=(unsigned char)4, .len=(unsigned char)4 },
    { .mba=(unsigned char)3, .len=(unsigned char)4 },
    { .mba=(unsigned char)3, .len=(unsigned char)4 },
    { .mba=(unsigned char)2, .len=(unsigned char)3 },
    { .mba=(unsigned char)2, .len=(unsigned char)3 },
    { .mba=(unsigned char)2, .len=(unsigned char)3 },
    { .mba=(unsigned char)2, .len=(unsigned char)3 },
    { .mba=(unsigned char)1, .len=(unsigned char)3 },
    { .mba=(unsigned char)1, .len=(unsigned char)3 },
    { .mba=(unsigned char)1, .len=(unsigned char)3 },
    { .mba=(unsigned char)1, .len=(unsigned char)3 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 },
    { .mba=(unsigned char)0, .len=(unsigned char)1 } };
// MB_B
// file getvlc.h line 95
static const struct anonymous$1 MB_B[64l] = { { .modes=(unsigned char)0, .len=(unsigned char)0 },
    { .modes=(unsigned char)(1 | 16), .len=(unsigned char)6 },
    { .modes=(unsigned char)(4 | 2 | 16), .len=(unsigned char)6 },
    { .modes=(unsigned char)(8 | 2 | 16), .len=(unsigned char)6 },
    { .modes=(unsigned char)(8 | 4 | 2 | 16), .len=(unsigned char)5 },
    { .modes=(unsigned char)(8 | 4 | 2 | 16), .len=(unsigned char)5 },
    { .modes=(unsigned char)1, .len=(unsigned char)5 },
    { .modes=(unsigned char)1, .len=(unsigned char)5 },
    { .modes=(unsigned char)8, .len=(unsigned char)4 },
    { .modes=(unsigned char)8, .len=(unsigned char)4 },
    { .modes=(unsigned char)8, .len=(unsigned char)4 },
    { .modes=(unsigned char)8, .len=(unsigned char)4 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)4 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)4 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)4 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)4 },
    { .modes=(unsigned char)4, .len=(unsigned char)3 },
    { .modes=(unsigned char)4, .len=(unsigned char)3 },
    { .modes=(unsigned char)4, .len=(unsigned char)3 },
    { .modes=(unsigned char)4, .len=(unsigned char)3 },
    { .modes=(unsigned char)4, .len=(unsigned char)3 },
    { .modes=(unsigned char)4, .len=(unsigned char)3 },
    { .modes=(unsigned char)4, .len=(unsigned char)3 },
    { .modes=(unsigned char)4, .len=(unsigned char)3 },
    { .modes=(unsigned char)(4 | 2), .len=(unsigned char)3 },
    { .modes=(unsigned char)(4 | 2), .len=(unsigned char)3 },
    { .modes=(unsigned char)(4 | 2), .len=(unsigned char)3 },
    { .modes=(unsigned char)(4 | 2), .len=(unsigned char)3 },
    { .modes=(unsigned char)(4 | 2), .len=(unsigned char)3 },
    { .modes=(unsigned char)(4 | 2), .len=(unsigned char)3 },
    { .modes=(unsigned char)(4 | 2), .len=(unsigned char)3 },
    { .modes=(unsigned char)(4 | 2), .len=(unsigned char)3 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 4 | 2), .len=(unsigned char)2 } };
// MB_I
// file getvlc.h line 73
static const struct anonymous$1 MB_I[2l] = { { .modes=(unsigned char)(1 | 16), .len=(unsigned char)2 },
    { .modes=(unsigned char)1, .len=(unsigned char)1 } };
// MB_P
// file getvlc.h line 80
static const struct anonymous$1 MB_P[32l] = { { .modes=(unsigned char)(1 | 16), .len=(unsigned char)6 },
    { .modes=(unsigned char)(2 | 16), .len=(unsigned char)5 },
    { .modes=(unsigned char)(8 | 2 | 16), .len=(unsigned char)5 },
    { .modes=(unsigned char)1, .len=(unsigned char)5 },
    { .modes=(unsigned char)8, .len=(unsigned char)3 },
    { .modes=(unsigned char)8, .len=(unsigned char)3 },
    { .modes=(unsigned char)8, .len=(unsigned char)3 },
    { .modes=(unsigned char)8, .len=(unsigned char)3 },
    { .modes=(unsigned char)2, .len=(unsigned char)2 },
    { .modes=(unsigned char)2, .len=(unsigned char)2 },
    { .modes=(unsigned char)2, .len=(unsigned char)2 },
    { .modes=(unsigned char)2, .len=(unsigned char)2 },
    { .modes=(unsigned char)2, .len=(unsigned char)2 },
    { .modes=(unsigned char)2, .len=(unsigned char)2 },
    { .modes=(unsigned char)2, .len=(unsigned char)2 },
    { .modes=(unsigned char)2, .len=(unsigned char)2 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 },
    { .modes=(unsigned char)(8 | 2), .len=(unsigned char)1 } };
// MV_10
// file getvlc.h line 129
static const struct anonymous$2 MV_10[48l] = { { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)0, .len=(unsigned char)10 },
    { .delta=(unsigned char)15, .len=(unsigned char)10 },
    { .delta=(unsigned char)14, .len=(unsigned char)10 },
    { .delta=(unsigned char)13, .len=(unsigned char)10 },
    { .delta=(unsigned char)12, .len=(unsigned char)10 },
    { .delta=(unsigned char)11, .len=(unsigned char)10 },
    { .delta=(unsigned char)10, .len=(unsigned char)10 },
    { .delta=(unsigned char)9, .len=(unsigned char)9 },
    { .delta=(unsigned char)9, .len=(unsigned char)9 },
    { .delta=(unsigned char)8, .len=(unsigned char)9 },
    { .delta=(unsigned char)8, .len=(unsigned char)9 },
    { .delta=(unsigned char)7, .len=(unsigned char)9 },
    { .delta=(unsigned char)7, .len=(unsigned char)9 },
    { .delta=(unsigned char)6, .len=(unsigned char)7 },
    { .delta=(unsigned char)6, .len=(unsigned char)7 },
    { .delta=(unsigned char)6, .len=(unsigned char)7 },
    { .delta=(unsigned char)6, .len=(unsigned char)7 },
    { .delta=(unsigned char)6, .len=(unsigned char)7 },
    { .delta=(unsigned char)6, .len=(unsigned char)7 },
    { .delta=(unsigned char)6, .len=(unsigned char)7 },
    { .delta=(unsigned char)6, .len=(unsigned char)7 },
    { .delta=(unsigned char)5, .len=(unsigned char)7 },
    { .delta=(unsigned char)5, .len=(unsigned char)7 },
    { .delta=(unsigned char)5, .len=(unsigned char)7 },
    { .delta=(unsigned char)5, .len=(unsigned char)7 },
    { .delta=(unsigned char)5, .len=(unsigned char)7 },
    { .delta=(unsigned char)5, .len=(unsigned char)7 },
    { .delta=(unsigned char)5, .len=(unsigned char)7 },
    { .delta=(unsigned char)5, .len=(unsigned char)7 },
    { .delta=(unsigned char)4, .len=(unsigned char)7 },
    { .delta=(unsigned char)4, .len=(unsigned char)7 },
    { .delta=(unsigned char)4, .len=(unsigned char)7 },
    { .delta=(unsigned char)4, .len=(unsigned char)7 },
    { .delta=(unsigned char)4, .len=(unsigned char)7 },
    { .delta=(unsigned char)4, .len=(unsigned char)7 },
    { .delta=(unsigned char)4, .len=(unsigned char)7 },
    { .delta=(unsigned char)4, .len=(unsigned char)7 } };
// MV_4
// file getvlc.h line 125
static const struct anonymous$2 MV_4[8l] = { { .delta=(unsigned char)3, .len=(unsigned char)6 },
    { .delta=(unsigned char)2, .len=(unsigned char)4 },
    { .delta=(unsigned char)1, .len=(unsigned char)3 },
    { .delta=(unsigned char)1, .len=(unsigned char)3 },
    { .delta=(unsigned char)0, .len=(unsigned char)2 },
    { .delta=(unsigned char)0, .len=(unsigned char)2 },
    { .delta=(unsigned char)0, .len=(unsigned char)2 },
    { .delta=(unsigned char)0, .len=(unsigned char)2 } };
// addrinctab
// file putvlc.h line 231
static const struct anonymous$0 addrinctab[33l] = { { .code=(unsigned char)0x01, .len=(char)1 },
    { .code=(unsigned char)0x03, .len=(char)3 },
    { .code=(unsigned char)0x02, .len=(char)3 },
    { .code=(unsigned char)0x03, .len=(char)4 },
    { .code=(unsigned char)0x02, .len=(char)4 },
    { .code=(unsigned char)0x03, .len=(char)5 },
    { .code=(unsigned char)0x02, .len=(char)5 },
    { .code=(unsigned char)0x07, .len=(char)7 },
    { .code=(unsigned char)0x06, .len=(char)7 },
    { .code=(unsigned char)0x0b, .len=(char)8 },
    { .code=(unsigned char)0x0a, .len=(char)8 },
    { .code=(unsigned char)0x09, .len=(char)8 },
    { .code=(unsigned char)0x08, .len=(char)8 },
    { .code=(unsigned char)0x07, .len=(char)8 },
    { .code=(unsigned char)0x06, .len=(char)8 },
    { .code=(unsigned char)0x17, .len=(char)10 },
    { .code=(unsigned char)0x16, .len=(char)10 },
    { .code=(unsigned char)0x15, .len=(char)10 },
    { .code=(unsigned char)0x14, .len=(char)10 },
    { .code=(unsigned char)0x13, .len=(char)10 },
    { .code=(unsigned char)0x12, .len=(char)10 },
    { .code=(unsigned char)0x23, .len=(char)11 },
    { .code=(unsigned char)0x22, .len=(char)11 },
    { .code=(unsigned char)0x21, .len=(char)11 },
    { .code=(unsigned char)0x20, .len=(char)11 },
    { .code=(unsigned char)0x1f, .len=(char)11 },
    { .code=(unsigned char)0x1e, .len=(char)11 },
    { .code=(unsigned char)0x1d, .len=(char)11 },
    { .code=(unsigned char)0x1c, .len=(char)11 },
    { .code=(unsigned char)0x1b, .len=(char)11 },
    { .code=(unsigned char)0x1a, .len=(char)11 },
    { .code=(unsigned char)0x19, .len=(char)11 },
    { .code=(unsigned char)0x18, .len=(char)11 } };
// alternate_scan
// file requant.c line 205
static unsigned int alternate_scan;
// audio_track_map
// file vamps.c line 130
signed int audio_track_map[8l];
// aux_packs
// file vamps.c line 115
signed int aux_packs;
// b_factor
// file requant.c line 155
static signed int b_factor;
// b_factors
// file requant.c line 51
static const signed int b_factors[3l] = { 25, 45, 105 };
// b_min_stress
// file requant.c line 158
static double b_min_stress;
// b_min_stresses
// file requant.c line 55
static const double b_min_stresses[3l] = { 0.00, 0.00, 0.00 };
// block
// file requant.c line 231
static struct anonymous block[6l][65l];
// bytediff
// file requant.c line 150
static signed long long int bytediff;
// bytes_read
// file vamps.c line 103
unsigned long int bytes_read;
// bytes_written
// file vamps.c line 104
unsigned long int bytes_written;
// calc_ps_vap
// file vamps.c line 132
signed int calc_ps_vap;
// cbptable
// file putvlc.h line 61
static const struct anonymous$0 cbptable[64l] = { { .code=(unsigned char)0x01, .len=(char)9 },
    { .code=(unsigned char)0x0b, .len=(char)5 },
    { .code=(unsigned char)0x09, .len=(char)5 },
    { .code=(unsigned char)0x0d, .len=(char)6 },
    { .code=(unsigned char)0x0d, .len=(char)4 },
    { .code=(unsigned char)0x17, .len=(char)7 },
    { .code=(unsigned char)0x13, .len=(char)7 },
    { .code=(unsigned char)0x1f, .len=(char)8 },
    { .code=(unsigned char)0x0c, .len=(char)4 },
    { .code=(unsigned char)0x16, .len=(char)7 },
    { .code=(unsigned char)0x12, .len=(char)7 },
    { .code=(unsigned char)0x1e, .len=(char)8 },
    { .code=(unsigned char)0x13, .len=(char)5 },
    { .code=(unsigned char)0x1b, .len=(char)8 },
    { .code=(unsigned char)0x17, .len=(char)8 },
    { .code=(unsigned char)0x13, .len=(char)8 },
    { .code=(unsigned char)0x0b, .len=(char)4 },
    { .code=(unsigned char)0x15, .len=(char)7 },
    { .code=(unsigned char)0x11, .len=(char)7 },
    { .code=(unsigned char)0x1d, .len=(char)8 },
    { .code=(unsigned char)0x11, .len=(char)5 },
    { .code=(unsigned char)0x19, .len=(char)8 },
    { .code=(unsigned char)0x15, .len=(char)8 },
    { .code=(unsigned char)0x11, .len=(char)8 },
    { .code=(unsigned char)0x0f, .len=(char)6 },
    { .code=(unsigned char)0x0f, .len=(char)8 },
    { .code=(unsigned char)0x0d, .len=(char)8 },
    { .code=(unsigned char)0x03, .len=(char)9 },
    { .code=(unsigned char)0x0f, .len=(char)5 },
    { .code=(unsigned char)0x0b, .len=(char)8 },
    { .code=(unsigned char)0x07, .len=(char)8 },
    { .code=(unsigned char)0x07, .len=(char)9 },
    { .code=(unsigned char)0x0a, .len=(char)4 },
    { .code=(unsigned char)0x14, .len=(char)7 },
    { .code=(unsigned char)0x10, .len=(char)7 },
    { .code=(unsigned char)0x1c, .len=(char)8 },
    { .code=(unsigned char)0x0e, .len=(char)6 },
    { .code=(unsigned char)0x0e, .len=(char)8 },
    { .code=(unsigned char)0x0c, .len=(char)8 },
    { .code=(unsigned char)0x02, .len=(char)9 },
    { .code=(unsigned char)0x10, .len=(char)5 },
    { .code=(unsigned char)0x18, .len=(char)8 },
    { .code=(unsigned char)0x14, .len=(char)8 },
    { .code=(unsigned char)0x10, .len=(char)8 },
    { .code=(unsigned char)0x0e, .len=(char)5 },
    { .code=(unsigned char)0x0a, .len=(char)8 },
    { .code=(unsigned char)0x06, .len=(char)8 },
    { .code=(unsigned char)0x06, .len=(char)9 },
    { .code=(unsigned char)0x12, .len=(char)5 },
    { .code=(unsigned char)0x1a, .len=(char)8 },
    { .code=(unsigned char)0x16, .len=(char)8 },
    { .code=(unsigned char)0x12, .len=(char)8 },
    { .code=(unsigned char)0x0d, .len=(char)5 },
    { .code=(unsigned char)0x09, .len=(char)8 },
    { .code=(unsigned char)0x05, .len=(char)8 },
    { .code=(unsigned char)0x05, .len=(char)9 },
    { .code=(unsigned char)0x0c, .len=(char)5 },
    { .code=(unsigned char)0x08, .len=(char)8 },
    { .code=(unsigned char)0x04, .len=(char)8 },
    { .code=(unsigned char)0x04, .len=(char)9 },
    { .code=(unsigned char)0x07, .len=(char)3 },
    { .code=(unsigned char)0x0a, .len=(char)5 },
    { .code=(unsigned char)0x08, .len=(char)5 },
    { .code=(unsigned char)0x0c, .len=(char)6 } };
// cbuf
// file requant.c line 135
static unsigned char *cbuf;
// cell_gap_packs
// file vamps.c line 117
signed int cell_gap_packs;
// concealment_motion_vectors
// file requant.c line 202
static unsigned int concealment_motion_vectors;
// condr
// file vamps.c line 166
union anonymous$10 condr = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// condw
// file vamps.c line 167
union anonymous$10 condw = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// curTable
// file requant.c line 222
static signed short int *curTable;
// dct_code_tab1
// file putvlc.h line 91
static const struct anonymous$0 dct_code_tab1[2l][40l] = { { { .code=(unsigned char)0x03, .len=(char)2 },
    { .code=(unsigned char)0x04, .len=(char)4 },
    { .code=(unsigned char)0x05, .len=(char)5 },
    { .code=(unsigned char)0x06, .len=(char)7 },
    { .code=(unsigned char)0x26, .len=(char)8 },
    { .code=(unsigned char)0x21, .len=(char)8 },
    { .code=(unsigned char)0x0a, .len=(char)10 },
    { .code=(unsigned char)0x1d, .len=(char)12 },
    { .code=(unsigned char)0x18, .len=(char)12 },
    { .code=(unsigned char)0x13, .len=(char)12 },
    { .code=(unsigned char)0x10, .len=(char)12 },
    { .code=(unsigned char)0x1a, .len=(char)13 },
    { .code=(unsigned char)0x19, .len=(char)13 },
    { .code=(unsigned char)0x18, .len=(char)13 },
    { .code=(unsigned char)0x17, .len=(char)13 },
    { .code=(unsigned char)0x1f, .len=(char)14 },
    { .code=(unsigned char)0x1e, .len=(char)14 },
    { .code=(unsigned char)0x1d, .len=(char)14 },
    { .code=(unsigned char)0x1c, .len=(char)14 },
    { .code=(unsigned char)0x1b, .len=(char)14 },
    { .code=(unsigned char)0x1a, .len=(char)14 },
    { .code=(unsigned char)0x19, .len=(char)14 },
    { .code=(unsigned char)0x18, .len=(char)14 },
    { .code=(unsigned char)0x17, .len=(char)14 },
    { .code=(unsigned char)0x16, .len=(char)14 },
    { .code=(unsigned char)0x15, .len=(char)14 },
    { .code=(unsigned char)0x14, .len=(char)14 },
    { .code=(unsigned char)0x13, .len=(char)14 },
    { .code=(unsigned char)0x12, .len=(char)14 },
    { .code=(unsigned char)0x11, .len=(char)14 },
    { .code=(unsigned char)0x10, .len=(char)14 },
    { .code=(unsigned char)0x18, .len=(char)15 },
    { .code=(unsigned char)0x17, .len=(char)15 },
    { .code=(unsigned char)0x16, .len=(char)15 },
    { .code=(unsigned char)0x15, .len=(char)15 },
    { .code=(unsigned char)0x14, .len=(char)15 },
    { .code=(unsigned char)0x13, .len=(char)15 },
    { .code=(unsigned char)0x12, .len=(char)15 },
    { .code=(unsigned char)0x11, .len=(char)15 },
    { .code=(unsigned char)0x10, .len=(char)15 } },
    { { .code=(unsigned char)0x03, .len=(char)3 },
    { .code=(unsigned char)0x06, .len=(char)6 },
    { .code=(unsigned char)0x25, .len=(char)8 },
    { .code=(unsigned char)0x0c, .len=(char)10 },
    { .code=(unsigned char)0x1b, .len=(char)12 },
    { .code=(unsigned char)0x16, .len=(char)13 },
    { .code=(unsigned char)0x15, .len=(char)13 },
    { .code=(unsigned char)0x1f, .len=(char)15 },
    { .code=(unsigned char)0x1e, .len=(char)15 },
    { .code=(unsigned char)0x1d, .len=(char)15 },
    { .code=(unsigned char)0x1c, .len=(char)15 },
    { .code=(unsigned char)0x1b, .len=(char)15 },
    { .code=(unsigned char)0x1a, .len=(char)15 },
    { .code=(unsigned char)0x19, .len=(char)15 },
    { .code=(unsigned char)0x13, .len=(char)16 },
    { .code=(unsigned char)0x12, .len=(char)16 },
    { .code=(unsigned char)0x11, .len=(char)16 },
    { .code=(unsigned char)0x10, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } } };
// dct_code_tab1a
// file putvlc.h line 165
static const struct anonymous$0 dct_code_tab1a[2l][40l] = { { { .code=(unsigned char)0x02, .len=(char)2 },
    { .code=(unsigned char)0x06, .len=(char)3 },
    { .code=(unsigned char)0x07, .len=(char)4 },
    { .code=(unsigned char)0x1c, .len=(char)5 },
    { .code=(unsigned char)0x1d, .len=(char)5 },
    { .code=(unsigned char)0x05, .len=(char)6 },
    { .code=(unsigned char)0x04, .len=(char)6 },
    { .code=(unsigned char)0x7b, .len=(char)7 },
    { .code=(unsigned char)0x7c, .len=(char)7 },
    { .code=(unsigned char)0x23, .len=(char)8 },
    { .code=(unsigned char)0x22, .len=(char)8 },
    { .code=(unsigned char)0xfa, .len=(char)8 },
    { .code=(unsigned char)0xfb, .len=(char)8 },
    { .code=(unsigned char)0xfe, .len=(char)8 },
    { .code=(unsigned char)0xff, .len=(char)8 },
    { .code=(unsigned char)0x1f, .len=(char)14 },
    { .code=(unsigned char)0x1e, .len=(char)14 },
    { .code=(unsigned char)0x1d, .len=(char)14 },
    { .code=(unsigned char)0x1c, .len=(char)14 },
    { .code=(unsigned char)0x1b, .len=(char)14 },
    { .code=(unsigned char)0x1a, .len=(char)14 },
    { .code=(unsigned char)0x19, .len=(char)14 },
    { .code=(unsigned char)0x18, .len=(char)14 },
    { .code=(unsigned char)0x17, .len=(char)14 },
    { .code=(unsigned char)0x16, .len=(char)14 },
    { .code=(unsigned char)0x15, .len=(char)14 },
    { .code=(unsigned char)0x14, .len=(char)14 },
    { .code=(unsigned char)0x13, .len=(char)14 },
    { .code=(unsigned char)0x12, .len=(char)14 },
    { .code=(unsigned char)0x11, .len=(char)14 },
    { .code=(unsigned char)0x10, .len=(char)14 },
    { .code=(unsigned char)0x18, .len=(char)15 },
    { .code=(unsigned char)0x17, .len=(char)15 },
    { .code=(unsigned char)0x16, .len=(char)15 },
    { .code=(unsigned char)0x15, .len=(char)15 },
    { .code=(unsigned char)0x14, .len=(char)15 },
    { .code=(unsigned char)0x13, .len=(char)15 },
    { .code=(unsigned char)0x12, .len=(char)15 },
    { .code=(unsigned char)0x11, .len=(char)15 },
    { .code=(unsigned char)0x10, .len=(char)15 } },
    { { .code=(unsigned char)0x02, .len=(char)3 },
    { .code=(unsigned char)0x06, .len=(char)5 },
    { .code=(unsigned char)0x79, .len=(char)7 },
    { .code=(unsigned char)0x27, .len=(char)8 },
    { .code=(unsigned char)0x20, .len=(char)8 },
    { .code=(unsigned char)0x16, .len=(char)13 },
    { .code=(unsigned char)0x15, .len=(char)13 },
    { .code=(unsigned char)0x1f, .len=(char)15 },
    { .code=(unsigned char)0x1e, .len=(char)15 },
    { .code=(unsigned char)0x1d, .len=(char)15 },
    { .code=(unsigned char)0x1c, .len=(char)15 },
    { .code=(unsigned char)0x1b, .len=(char)15 },
    { .code=(unsigned char)0x1a, .len=(char)15 },
    { .code=(unsigned char)0x19, .len=(char)15 },
    { .code=(unsigned char)0x13, .len=(char)16 },
    { .code=(unsigned char)0x12, .len=(char)16 },
    { .code=(unsigned char)0x11, .len=(char)16 },
    { .code=(unsigned char)0x10, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } } };
// dct_code_tab2
// file putvlc.h line 121
static const struct anonymous$0 dct_code_tab2[30l][5l] = { { { .code=(unsigned char)0x05, .len=(char)4 },
    { .code=(unsigned char)0x04, .len=(char)7 },
    { .code=(unsigned char)0x0b, .len=(char)10 },
    { .code=(unsigned char)0x14, .len=(char)12 },
    { .code=(unsigned char)0x14, .len=(char)13 } },
    { { .code=(unsigned char)0x07, .len=(char)5 },
    { .code=(unsigned char)0x24, .len=(char)8 },
    { .code=(unsigned char)0x1c, .len=(char)12 },
    { .code=(unsigned char)0x13, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x06, .len=(char)5 },
    { .code=(unsigned char)0x0f, .len=(char)10 },
    { .code=(unsigned char)0x12, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x07, .len=(char)6 },
    { .code=(unsigned char)0x09, .len=(char)10 },
    { .code=(unsigned char)0x12, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x05, .len=(char)6 },
    { .code=(unsigned char)0x1e, .len=(char)12 },
    { .code=(unsigned char)0x14, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x04, .len=(char)6 },
    { .code=(unsigned char)0x15, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x07, .len=(char)7 },
    { .code=(unsigned char)0x11, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x05, .len=(char)7 },
    { .code=(unsigned char)0x11, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x27, .len=(char)8 },
    { .code=(unsigned char)0x10, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x23, .len=(char)8 },
    { .code=(unsigned char)0x1a, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x22, .len=(char)8 },
    { .code=(unsigned char)0x19, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x20, .len=(char)8 },
    { .code=(unsigned char)0x18, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x0e, .len=(char)10 },
    { .code=(unsigned char)0x17, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x0d, .len=(char)10 },
    { .code=(unsigned char)0x16, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x08, .len=(char)10 },
    { .code=(unsigned char)0x15, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1f, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1a, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x19, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x17, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x16, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1f, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1e, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1d, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1c, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1b, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1f, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1e, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1d, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1c, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1b, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } } };
// dct_code_tab2a
// file putvlc.h line 195
static const struct anonymous$0 dct_code_tab2a[30l][5l] = { { { .code=(unsigned char)0x05, .len=(char)5 },
    { .code=(unsigned char)0x07, .len=(char)7 },
    { .code=(unsigned char)0xfc, .len=(char)8 },
    { .code=(unsigned char)0x0c, .len=(char)10 },
    { .code=(unsigned char)0x14, .len=(char)13 } },
    { { .code=(unsigned char)0x07, .len=(char)5 },
    { .code=(unsigned char)0x26, .len=(char)8 },
    { .code=(unsigned char)0x1c, .len=(char)12 },
    { .code=(unsigned char)0x13, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x06, .len=(char)6 },
    { .code=(unsigned char)0xfd, .len=(char)8 },
    { .code=(unsigned char)0x12, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x07, .len=(char)6 },
    { .code=(unsigned char)0x04, .len=(char)9 },
    { .code=(unsigned char)0x12, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x06, .len=(char)7 },
    { .code=(unsigned char)0x1e, .len=(char)12 },
    { .code=(unsigned char)0x14, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x04, .len=(char)7 },
    { .code=(unsigned char)0x15, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x05, .len=(char)7 },
    { .code=(unsigned char)0x11, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x78, .len=(char)7 },
    { .code=(unsigned char)0x11, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x7a, .len=(char)7 },
    { .code=(unsigned char)0x10, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x21, .len=(char)8 },
    { .code=(unsigned char)0x1a, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x25, .len=(char)8 },
    { .code=(unsigned char)0x19, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x24, .len=(char)8 },
    { .code=(unsigned char)0x18, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x05, .len=(char)9 },
    { .code=(unsigned char)0x17, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x07, .len=(char)9 },
    { .code=(unsigned char)0x16, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x0d, .len=(char)10 },
    { .code=(unsigned char)0x15, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1f, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1a, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x19, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x17, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x16, .len=(char)12 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1f, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1e, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1d, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1c, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1b, .len=(char)13 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1f, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1e, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1d, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1c, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } },
    { { .code=(unsigned char)0x1b, .len=(char)16 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 },
    { .code=(unsigned char)0x00, .len=(char)0 } } };
// eof
// file vamps.c line 120
signed int eof;
// eof$link1
// file requant.c line 147
static signed int eof$link1;
// f_code
// file requant.c line 198
static unsigned int f_code[2l][2l];
// fact_x
// file requant.c line 146
static float fact_x;
// frame_pred_frame_dct
// file requant.c line 201
static unsigned int frame_pred_frame_dct;
// h_offset
// file requant.c line 217
static signed int h_offset;
// horizontal_size_value
// file requant.c line 191
static unsigned int horizontal_size_value;
// i_factor
// file requant.c line 153
static signed int i_factor;
// i_factors
// file requant.c line 49
static const signed int i_factors[3l] = { 5, 15, 65 };
// i_min_stress
// file requant.c line 156
static double i_min_stress;
// i_min_stresses
// file requant.c line 53
static const double i_min_stresses[3l] = { 0.80, 0.50, 0.00 };
// inbitbuf
// file requant.c line 143
static unsigned int inbitbuf;
// inbitcnt
// file requant.c line 142
static signed int inbitcnt;
// inbytecnt
// file requant.c line 145
static unsigned long long int inbytecnt;
// injections
// file vamps.c line 148
struct anonymous$8 injections[13l];
// nav_packs
// file vamps.c line 119
signed int nav_packs;
// padding_bytes
// file vamps.c line 105
unsigned long int padding_bytes;
// sequence_headers
// file vamps.c line 118
signed int sequence_headers;
// skipped_aux_packs
// file vamps.c line 116
signed int skipped_aux_packs;
// skipped_video_packs
// file vamps.c line 114
signed int skipped_video_packs;
// total_packs
// file vamps.c line 112
signed int total_packs;
// video_packs
// file vamps.c line 113
signed int video_packs;
// vin_bytes
// file vamps.c line 106
unsigned long int vin_bytes;
// vout_bytes
// file vamps.c line 107
unsigned long int vout_bytes;
// injections
// file vamps.c line 148
struct anonymous$8 injections[13l] = { { .s=(signed int)sizeof(unsigned long int) /*8ul*/ , .p=(const void *)&bytes_read,
    .f="%llu" },
    { .s=(signed int)sizeof(unsigned long int) /*8ul*/ , .p=(const void *)&bytes_written,
    .f="%llu" },
    { .s=(signed int)sizeof(unsigned long int) /*8ul*/ , .p=(const void *)&padding_bytes,
    .f="%llu" },
    { .s=(signed int)sizeof(unsigned long int) /*8ul*/ , .p=(const void *)&vin_bytes,
    .f="%llu" },
    { .s=(signed int)sizeof(unsigned long int) /*8ul*/ , .p=(const void *)&vout_bytes,
    .f="%llu" },
    { .s=(signed int)sizeof(signed int) /*4ul*/ , .p=(const void *)&total_packs,
    .f="%d" },
    { .s=(signed int)sizeof(signed int) /*4ul*/ , .p=(const void *)&video_packs,
    .f="%d" },
    { .s=(signed int)sizeof(signed int) /*4ul*/ , .p=(const void *)&skipped_video_packs,
    .f="%d" },
    { .s=(signed int)sizeof(signed int) /*4ul*/ , .p=(const void *)&aux_packs,
    .f="%d" },
    { .s=(signed int)sizeof(signed int) /*4ul*/ , .p=(const void *)&skipped_aux_packs,
    .f="%d" },
    { .s=(signed int)sizeof(signed int) /*4ul*/ , .p=(const void *)&cell_gap_packs,
    .f="%d" },
    { .s=(signed int)sizeof(signed int) /*4ul*/ , .p=(const void *)&sequence_headers,
    .f="%d" },
    { .s=(signed int)sizeof(signed int) /*4ul*/ , .p=(const void *)&nav_packs,
    .f="%d" } };
// injections_file
// file vamps.c line 135
const char *injections_file;
// intra_dc_precision
// file requant.c line 199
static unsigned int intra_dc_precision;
// intra_vlc_format
// file requant.c line 204
static unsigned int intra_vlc_format;
// last_coded_scale
// file requant.c line 216
static unsigned int last_coded_scale;
// map_non_linear_mquant
// file requant.c line 484
const unsigned char map_non_linear_mquant[113l] = { (const unsigned char)0, (const unsigned char)1, (const unsigned char)2, (const unsigned char)3, (const unsigned char)4, (const unsigned char)5, (const unsigned char)6, (const unsigned char)7, (const unsigned char)8, (const unsigned char)8, (const unsigned char)9, (const unsigned char)9, (const unsigned char)10, (const unsigned char)10, (const unsigned char)11, (const unsigned char)11, (const unsigned char)12, (const unsigned char)12, (const unsigned char)13, (const unsigned char)13, (const unsigned char)14, (const unsigned char)14, (const unsigned char)15, (const unsigned char)15, (const unsigned char)16, (const unsigned char)16, (const unsigned char)16, (const unsigned char)17, (const unsigned char)17, (const unsigned char)17, (const unsigned char)18, (const unsigned char)18, (const unsigned char)18, (const unsigned char)18, (const unsigned char)19, (const unsigned char)19, (const unsigned char)19, (const unsigned char)19, (const unsigned char)20, (const unsigned char)20, (const unsigned char)20, (const unsigned char)20, (const unsigned char)21, (const unsigned char)21, (const unsigned char)21, (const unsigned char)21, (const unsigned char)22, (const unsigned char)22, (const unsigned char)22, (const unsigned char)22, (const unsigned char)23, (const unsigned char)23, (const unsigned char)23, (const unsigned char)23, (const unsigned char)24, (const unsigned char)24, (const unsigned char)24, (const unsigned char)24, (const unsigned char)24, (const unsigned char)24, (const unsigned char)24, (const unsigned char)25, (const unsigned char)25, (const unsigned char)25, (const unsigned char)25, (const unsigned char)25, (const unsigned char)25, (const unsigned char)25, (const unsigned char)26, (const unsigned char)26, (const unsigned char)26, (const unsigned char)26, (const unsigned char)26, (const unsigned char)26, (const unsigned char)26, (const unsigned char)26, (const unsigned char)27, (const unsigned char)27, (const unsigned char)27, (const unsigned char)27, (const unsigned char)27, (const unsigned char)27, (const unsigned char)27, (const unsigned char)27, (const unsigned char)28, (const unsigned char)28, (const unsigned char)28, (const unsigned char)28, (const unsigned char)28, (const unsigned char)28, (const unsigned char)28, (const unsigned char)29, (const unsigned char)29, (const unsigned char)29, (const unsigned char)29, (const unsigned char)29, (const unsigned char)29, (const unsigned char)29, (const unsigned char)29, (const unsigned char)29, (const unsigned char)29, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)31, (const unsigned char)31, (const unsigned char)31, (const unsigned char)31, (const unsigned char)31 };
// max_alt_table
// file requant.c line 61
static const double max_alt_table = 0.00;
// mb_add
// file requant.c line 218
static signed int mb_add;
// mb_out
// file requant.c line 219
static signed int mb_out;
// mb_sav_c
// file requant.c line 221
static signed int mb_sav_c;
// mb_sav_lev
// file requant.c line 221
static signed int mb_sav_lev;
// mb_sav_run
// file requant.c line 221
static signed int mb_sav_run;
// mb_skip
// file requant.c line 218
static signed int mb_skip;
// mbtypetab
// file putvlc.h line 24
static const struct anonymous$0 mbtypetab[3l][32l] = { { { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)1, .len=(char)1 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)1, .len=(char)2 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 } },
    { { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)3, .len=(char)5 },
    { .code=(unsigned char)1, .len=(char)2 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)1, .len=(char)3 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)1, .len=(char)1 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)1, .len=(char)6 },
    { .code=(unsigned char)1, .len=(char)5 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)2, .len=(char)5 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 } },
    { { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)3, .len=(char)5 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)2, .len=(char)3 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)3, .len=(char)3 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)2, .len=(char)4 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)3, .len=(char)4 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)2, .len=(char)2 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)3, .len=(char)2 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)1, .len=(char)6 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)2, .len=(char)6 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)3, .len=(char)6 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)0, .len=(char)0 },
    { .code=(unsigned char)2, .len=(char)5 },
    { .code=(unsigned char)0, .len=(char)0 } } };
// mloka1
// file requant.c line 147
static signed int mloka1;
// mloka2
// file requant.c line 147
static signed int mloka2;
// mutr
// file vamps.c line 168
union anonymous$11 mutr = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// mutw
// file vamps.c line 169
union anonymous$11 mutw = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// new_quantizer_scale
// file requant.c line 215
static unsigned int new_quantizer_scale;
// non_linear_mquant_table
// file requant.c line 477
const unsigned char non_linear_mquant_table[32l] = { (const unsigned char)0, (const unsigned char)1, (const unsigned char)2, (const unsigned char)3, (const unsigned char)4, (const unsigned char)5, (const unsigned char)6, (const unsigned char)7, (const unsigned char)8, (const unsigned char)10, (const unsigned char)12, (const unsigned char)14, (const unsigned char)16, (const unsigned char)18, (const unsigned char)20, (const unsigned char)22, (const unsigned char)24, (const unsigned char)28, (const unsigned char)32, (const unsigned char)36, (const unsigned char)40, (const unsigned char)44, (const unsigned char)48, (const unsigned char)52, (const unsigned char)56, (const unsigned char)64, (const unsigned char)72, (const unsigned char)80, (const unsigned char)88, (const unsigned char)96, (const unsigned char)104, (const unsigned char)112 };
// non_linear_quantizer_scale
// file requant.c line 716
static signed int non_linear_quantizer_scale[32l] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 14, 16, 18, 20, 22, 24, 28, 32, 36, 40, 44, 48, 52, 56, 64, 72, 80, 88, 96, 104, 112 };
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opterr
// file /usr/include/getopt.h line 76
extern signed int opterr;
// orbuf
// file requant.c line 135
static unsigned char *orbuf;
// orim2vsize
// file requant.c line 149
static signed long long int orim2vsize;
// outbitbuf
// file requant.c line 143
static unsigned int outbitbuf;
// outbitcnt
// file requant.c line 142
static signed int outbitcnt;
// outbytecnt
// file requant.c line 145
static unsigned long long int outbytecnt;
// owbuf
// file requant.c line 135
static unsigned char *owbuf;
// p_factor
// file requant.c line 154
static signed int p_factor;
// p_factors
// file requant.c line 50
static const signed int p_factors[3l] = { 5, 25, 85 };
// p_min_stress
// file requant.c line 157
static double p_min_stress;
// p_min_stresses
// file requant.c line 54
static const double p_min_stresses[3l] = { 0.60, 0.35, 0.00 };
// picture_coding_type
// file requant.c line 195
static unsigned int picture_coding_type;
// picture_structure
// file requant.c line 200
static unsigned int picture_structure;
// preserve
// file vamps.c line 133
signed int preserve;
// progname
// file vamps.c line 136
const char progname[6l] = { 'v', 'a', 'm', 'p', 's', 0 };
// ps_size
// file vamps.c line 108
unsigned long int ps_size;
// q_scale_type
// file requant.c line 203
static unsigned int q_scale_type;
// quant_equ
// file qTable.h line 1
static signed short int quant_equ[113l] = { (signed short int)0, (signed short int)0, (signed short int)1, (signed short int)2, (signed short int)3, (signed short int)4, (signed short int)5, (signed short int)6, (signed short int)7, (signed short int)8, (signed short int)8, (signed short int)9, (signed short int)9, (signed short int)10, (signed short int)10, (signed short int)11, (signed short int)11, (signed short int)12, (signed short int)12, (signed short int)13, (signed short int)13, (signed short int)14, (signed short int)14, (signed short int)15, (signed short int)15, (signed short int)16, (signed short int)16, (signed short int)17, (signed short int)17, (signed short int)18, (signed short int)18, (signed short int)19, (signed short int)19, (signed short int)20, (signed short int)20, (signed short int)21, (signed short int)21, (signed short int)22, (signed short int)22, (signed short int)23, (signed short int)23, (signed short int)24, (signed short int)24, (signed short int)25, (signed short int)25, (signed short int)26, (signed short int)26, (signed short int)27, (signed short int)27, (signed short int)28, (signed short int)28, (signed short int)29, (signed short int)29, (signed short int)30, (signed short int)30, (signed short int)31, (signed short int)31, (signed short int)32, (signed short int)32, (signed short int)33, (signed short int)33, (signed short int)34, (signed short int)34, (signed short int)35, (signed short int)35, (signed short int)36, (signed short int)36, (signed short int)36, (signed short int)36, (signed short int)36, (signed short int)36, (signed short int)36, (signed short int)36, (signed short int)37, (signed short int)37, (signed short int)37, (signed short int)37, (signed short int)37, (signed short int)37, (signed short int)37, (signed short int)37, (signed short int)38, (signed short int)38, (signed short int)38, (signed short int)38, (signed short int)38, (signed short int)38, (signed short int)38, (signed short int)38, (signed short int)39, (signed short int)39, (signed short int)39, (signed short int)39, (signed short int)39, (signed short int)39, (signed short int)39, (signed short int)39, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)41, (signed short int)41, (signed short int)41, (signed short int)41, (signed short int)41, (signed short int)41, (signed short int)41, (signed short int)41 };
// quant_table_104_to_112
// file qTable.h line 876
static signed short int quant_table_104_to_112[4096l];
// quant_table_10_to_104
// file qTable.h line 347
static signed short int quant_table_10_to_104[4096l];
// quant_table_10_to_112
// file qTable.h line 348
static signed short int quant_table_10_to_112[4096l];
// quant_table_10_to_12
// file qTable.h line 316
static signed short int quant_table_10_to_12[4096l];
// quant_table_10_to_14
// file qTable.h line 317
static signed short int quant_table_10_to_14[4096l];
// quant_table_10_to_16
// file qTable.h line 318
static signed short int quant_table_10_to_16[4096l];
// quant_table_10_to_18
// file qTable.h line 319
static signed short int quant_table_10_to_18[4096l];
// quant_table_10_to_20
// file qTable.h line 320
static signed short int quant_table_10_to_20[4096l];
// quant_table_10_to_22
// file qTable.h line 321
static signed short int quant_table_10_to_22[4096l];
// quant_table_10_to_24
// file qTable.h line 322
static signed short int quant_table_10_to_24[4096l];
// quant_table_10_to_26
// file qTable.h line 323
static signed short int quant_table_10_to_26[4096l];
// quant_table_10_to_28
// file qTable.h line 324
static signed short int quant_table_10_to_28[4096l];
// quant_table_10_to_30
// file qTable.h line 325
static signed short int quant_table_10_to_30[4096l];
// quant_table_10_to_32
// file qTable.h line 326
static signed short int quant_table_10_to_32[4096l];
// quant_table_10_to_34
// file qTable.h line 327
static signed short int quant_table_10_to_34[4096l];
// quant_table_10_to_36
// file qTable.h line 328
static signed short int quant_table_10_to_36[4096l];
// quant_table_10_to_38
// file qTable.h line 329
static signed short int quant_table_10_to_38[4096l];
// quant_table_10_to_40
// file qTable.h line 330
static signed short int quant_table_10_to_40[4096l];
// quant_table_10_to_42
// file qTable.h line 331
static signed short int quant_table_10_to_42[4096l];
// quant_table_10_to_44
// file qTable.h line 332
static signed short int quant_table_10_to_44[4096l];
// quant_table_10_to_46
// file qTable.h line 333
static signed short int quant_table_10_to_46[4096l];
// quant_table_10_to_48
// file qTable.h line 334
static signed short int quant_table_10_to_48[4096l];
// quant_table_10_to_50
// file qTable.h line 335
static signed short int quant_table_10_to_50[4096l];
// quant_table_10_to_52
// file qTable.h line 336
static signed short int quant_table_10_to_52[4096l];
// quant_table_10_to_54
// file qTable.h line 337
static signed short int quant_table_10_to_54[4096l];
// quant_table_10_to_56
// file qTable.h line 338
static signed short int quant_table_10_to_56[4096l];
// quant_table_10_to_58
// file qTable.h line 339
static signed short int quant_table_10_to_58[4096l];
// quant_table_10_to_60
// file qTable.h line 340
static signed short int quant_table_10_to_60[4096l];
// quant_table_10_to_62
// file qTable.h line 341
static signed short int quant_table_10_to_62[4096l];
// quant_table_10_to_64
// file qTable.h line 342
static signed short int quant_table_10_to_64[4096l];
// quant_table_10_to_72
// file qTable.h line 343
static signed short int quant_table_10_to_72[4096l];
// quant_table_10_to_80
// file qTable.h line 344
static signed short int quant_table_10_to_80[4096l];
// quant_table_10_to_88
// file qTable.h line 345
static signed short int quant_table_10_to_88[4096l];
// quant_table_10_to_96
// file qTable.h line 346
static signed short int quant_table_10_to_96[4096l];
// quant_table_12_to_104
// file qTable.h line 379
static signed short int quant_table_12_to_104[4096l];
// quant_table_12_to_112
// file qTable.h line 380
static signed short int quant_table_12_to_112[4096l];
// quant_table_12_to_14
// file qTable.h line 349
static signed short int quant_table_12_to_14[4096l];
// quant_table_12_to_16
// file qTable.h line 350
static signed short int quant_table_12_to_16[4096l];
// quant_table_12_to_18
// file qTable.h line 351
static signed short int quant_table_12_to_18[4096l];
// quant_table_12_to_20
// file qTable.h line 352
static signed short int quant_table_12_to_20[4096l];
// quant_table_12_to_22
// file qTable.h line 353
static signed short int quant_table_12_to_22[4096l];
// quant_table_12_to_24
// file qTable.h line 354
static signed short int quant_table_12_to_24[4096l];
// quant_table_12_to_26
// file qTable.h line 355
static signed short int quant_table_12_to_26[4096l];
// quant_table_12_to_28
// file qTable.h line 356
static signed short int quant_table_12_to_28[4096l];
// quant_table_12_to_30
// file qTable.h line 357
static signed short int quant_table_12_to_30[4096l];
// quant_table_12_to_32
// file qTable.h line 358
static signed short int quant_table_12_to_32[4096l];
// quant_table_12_to_34
// file qTable.h line 359
static signed short int quant_table_12_to_34[4096l];
// quant_table_12_to_36
// file qTable.h line 360
static signed short int quant_table_12_to_36[4096l];
// quant_table_12_to_38
// file qTable.h line 361
static signed short int quant_table_12_to_38[4096l];
// quant_table_12_to_40
// file qTable.h line 362
static signed short int quant_table_12_to_40[4096l];
// quant_table_12_to_42
// file qTable.h line 363
static signed short int quant_table_12_to_42[4096l];
// quant_table_12_to_44
// file qTable.h line 364
static signed short int quant_table_12_to_44[4096l];
// quant_table_12_to_46
// file qTable.h line 365
static signed short int quant_table_12_to_46[4096l];
// quant_table_12_to_48
// file qTable.h line 366
static signed short int quant_table_12_to_48[4096l];
// quant_table_12_to_50
// file qTable.h line 367
static signed short int quant_table_12_to_50[4096l];
// quant_table_12_to_52
// file qTable.h line 368
static signed short int quant_table_12_to_52[4096l];
// quant_table_12_to_54
// file qTable.h line 369
static signed short int quant_table_12_to_54[4096l];
// quant_table_12_to_56
// file qTable.h line 370
static signed short int quant_table_12_to_56[4096l];
// quant_table_12_to_58
// file qTable.h line 371
static signed short int quant_table_12_to_58[4096l];
// quant_table_12_to_60
// file qTable.h line 372
static signed short int quant_table_12_to_60[4096l];
// quant_table_12_to_62
// file qTable.h line 373
static signed short int quant_table_12_to_62[4096l];
// quant_table_12_to_64
// file qTable.h line 374
static signed short int quant_table_12_to_64[4096l];
// quant_table_12_to_72
// file qTable.h line 375
static signed short int quant_table_12_to_72[4096l];
// quant_table_12_to_80
// file qTable.h line 376
static signed short int quant_table_12_to_80[4096l];
// quant_table_12_to_88
// file qTable.h line 377
static signed short int quant_table_12_to_88[4096l];
// quant_table_12_to_96
// file qTable.h line 378
static signed short int quant_table_12_to_96[4096l];
// quant_table_14_to_104
// file qTable.h line 410
static signed short int quant_table_14_to_104[4096l];
// quant_table_14_to_112
// file qTable.h line 411
static signed short int quant_table_14_to_112[4096l];
// quant_table_14_to_16
// file qTable.h line 381
static signed short int quant_table_14_to_16[4096l];
// quant_table_14_to_18
// file qTable.h line 382
static signed short int quant_table_14_to_18[4096l];
// quant_table_14_to_20
// file qTable.h line 383
static signed short int quant_table_14_to_20[4096l];
// quant_table_14_to_22
// file qTable.h line 384
static signed short int quant_table_14_to_22[4096l];
// quant_table_14_to_24
// file qTable.h line 385
static signed short int quant_table_14_to_24[4096l];
// quant_table_14_to_26
// file qTable.h line 386
static signed short int quant_table_14_to_26[4096l];
// quant_table_14_to_28
// file qTable.h line 387
static signed short int quant_table_14_to_28[4096l];
// quant_table_14_to_30
// file qTable.h line 388
static signed short int quant_table_14_to_30[4096l];
// quant_table_14_to_32
// file qTable.h line 389
static signed short int quant_table_14_to_32[4096l];
// quant_table_14_to_34
// file qTable.h line 390
static signed short int quant_table_14_to_34[4096l];
// quant_table_14_to_36
// file qTable.h line 391
static signed short int quant_table_14_to_36[4096l];
// quant_table_14_to_38
// file qTable.h line 392
static signed short int quant_table_14_to_38[4096l];
// quant_table_14_to_40
// file qTable.h line 393
static signed short int quant_table_14_to_40[4096l];
// quant_table_14_to_42
// file qTable.h line 394
static signed short int quant_table_14_to_42[4096l];
// quant_table_14_to_44
// file qTable.h line 395
static signed short int quant_table_14_to_44[4096l];
// quant_table_14_to_46
// file qTable.h line 396
static signed short int quant_table_14_to_46[4096l];
// quant_table_14_to_48
// file qTable.h line 397
static signed short int quant_table_14_to_48[4096l];
// quant_table_14_to_50
// file qTable.h line 398
static signed short int quant_table_14_to_50[4096l];
// quant_table_14_to_52
// file qTable.h line 399
static signed short int quant_table_14_to_52[4096l];
// quant_table_14_to_54
// file qTable.h line 400
static signed short int quant_table_14_to_54[4096l];
// quant_table_14_to_56
// file qTable.h line 401
static signed short int quant_table_14_to_56[4096l];
// quant_table_14_to_58
// file qTable.h line 402
static signed short int quant_table_14_to_58[4096l];
// quant_table_14_to_60
// file qTable.h line 403
static signed short int quant_table_14_to_60[4096l];
// quant_table_14_to_62
// file qTable.h line 404
static signed short int quant_table_14_to_62[4096l];
// quant_table_14_to_64
// file qTable.h line 405
static signed short int quant_table_14_to_64[4096l];
// quant_table_14_to_72
// file qTable.h line 406
static signed short int quant_table_14_to_72[4096l];
// quant_table_14_to_80
// file qTable.h line 407
static signed short int quant_table_14_to_80[4096l];
// quant_table_14_to_88
// file qTable.h line 408
static signed short int quant_table_14_to_88[4096l];
// quant_table_14_to_96
// file qTable.h line 409
static signed short int quant_table_14_to_96[4096l];
// quant_table_16_to_104
// file qTable.h line 440
static signed short int quant_table_16_to_104[4096l];
// quant_table_16_to_112
// file qTable.h line 441
static signed short int quant_table_16_to_112[4096l];
// quant_table_16_to_18
// file qTable.h line 412
static signed short int quant_table_16_to_18[4096l];
// quant_table_16_to_20
// file qTable.h line 413
static signed short int quant_table_16_to_20[4096l];
// quant_table_16_to_22
// file qTable.h line 414
static signed short int quant_table_16_to_22[4096l];
// quant_table_16_to_24
// file qTable.h line 415
static signed short int quant_table_16_to_24[4096l];
// quant_table_16_to_26
// file qTable.h line 416
static signed short int quant_table_16_to_26[4096l];
// quant_table_16_to_28
// file qTable.h line 417
static signed short int quant_table_16_to_28[4096l];
// quant_table_16_to_30
// file qTable.h line 418
static signed short int quant_table_16_to_30[4096l];
// quant_table_16_to_32
// file qTable.h line 419
static signed short int quant_table_16_to_32[4096l];
// quant_table_16_to_34
// file qTable.h line 420
static signed short int quant_table_16_to_34[4096l];
// quant_table_16_to_36
// file qTable.h line 421
static signed short int quant_table_16_to_36[4096l];
// quant_table_16_to_38
// file qTable.h line 422
static signed short int quant_table_16_to_38[4096l];
// quant_table_16_to_40
// file qTable.h line 423
static signed short int quant_table_16_to_40[4096l];
// quant_table_16_to_42
// file qTable.h line 424
static signed short int quant_table_16_to_42[4096l];
// quant_table_16_to_44
// file qTable.h line 425
static signed short int quant_table_16_to_44[4096l];
// quant_table_16_to_46
// file qTable.h line 426
static signed short int quant_table_16_to_46[4096l];
// quant_table_16_to_48
// file qTable.h line 427
static signed short int quant_table_16_to_48[4096l];
// quant_table_16_to_50
// file qTable.h line 428
static signed short int quant_table_16_to_50[4096l];
// quant_table_16_to_52
// file qTable.h line 429
static signed short int quant_table_16_to_52[4096l];
// quant_table_16_to_54
// file qTable.h line 430
static signed short int quant_table_16_to_54[4096l];
// quant_table_16_to_56
// file qTable.h line 431
static signed short int quant_table_16_to_56[4096l];
// quant_table_16_to_58
// file qTable.h line 432
static signed short int quant_table_16_to_58[4096l];
// quant_table_16_to_60
// file qTable.h line 433
static signed short int quant_table_16_to_60[4096l];
// quant_table_16_to_62
// file qTable.h line 434
static signed short int quant_table_16_to_62[4096l];
// quant_table_16_to_64
// file qTable.h line 435
static signed short int quant_table_16_to_64[4096l];
// quant_table_16_to_72
// file qTable.h line 436
static signed short int quant_table_16_to_72[4096l];
// quant_table_16_to_80
// file qTable.h line 437
static signed short int quant_table_16_to_80[4096l];
// quant_table_16_to_88
// file qTable.h line 438
static signed short int quant_table_16_to_88[4096l];
// quant_table_16_to_96
// file qTable.h line 439
static signed short int quant_table_16_to_96[4096l];
// quant_table_18_to_104
// file qTable.h line 469
static signed short int quant_table_18_to_104[4096l];
// quant_table_18_to_112
// file qTable.h line 470
static signed short int quant_table_18_to_112[4096l];
// quant_table_18_to_20
// file qTable.h line 442
static signed short int quant_table_18_to_20[4096l];
// quant_table_18_to_22
// file qTable.h line 443
static signed short int quant_table_18_to_22[4096l];
// quant_table_18_to_24
// file qTable.h line 444
static signed short int quant_table_18_to_24[4096l];
// quant_table_18_to_26
// file qTable.h line 445
static signed short int quant_table_18_to_26[4096l];
// quant_table_18_to_28
// file qTable.h line 446
static signed short int quant_table_18_to_28[4096l];
// quant_table_18_to_30
// file qTable.h line 447
static signed short int quant_table_18_to_30[4096l];
// quant_table_18_to_32
// file qTable.h line 448
static signed short int quant_table_18_to_32[4096l];
// quant_table_18_to_34
// file qTable.h line 449
static signed short int quant_table_18_to_34[4096l];
// quant_table_18_to_36
// file qTable.h line 450
static signed short int quant_table_18_to_36[4096l];
// quant_table_18_to_38
// file qTable.h line 451
static signed short int quant_table_18_to_38[4096l];
// quant_table_18_to_40
// file qTable.h line 452
static signed short int quant_table_18_to_40[4096l];
// quant_table_18_to_42
// file qTable.h line 453
static signed short int quant_table_18_to_42[4096l];
// quant_table_18_to_44
// file qTable.h line 454
static signed short int quant_table_18_to_44[4096l];
// quant_table_18_to_46
// file qTable.h line 455
static signed short int quant_table_18_to_46[4096l];
// quant_table_18_to_48
// file qTable.h line 456
static signed short int quant_table_18_to_48[4096l];
// quant_table_18_to_50
// file qTable.h line 457
static signed short int quant_table_18_to_50[4096l];
// quant_table_18_to_52
// file qTable.h line 458
static signed short int quant_table_18_to_52[4096l];
// quant_table_18_to_54
// file qTable.h line 459
static signed short int quant_table_18_to_54[4096l];
// quant_table_18_to_56
// file qTable.h line 460
static signed short int quant_table_18_to_56[4096l];
// quant_table_18_to_58
// file qTable.h line 461
static signed short int quant_table_18_to_58[4096l];
// quant_table_18_to_60
// file qTable.h line 462
static signed short int quant_table_18_to_60[4096l];
// quant_table_18_to_62
// file qTable.h line 463
static signed short int quant_table_18_to_62[4096l];
// quant_table_18_to_64
// file qTable.h line 464
static signed short int quant_table_18_to_64[4096l];
// quant_table_18_to_72
// file qTable.h line 465
static signed short int quant_table_18_to_72[4096l];
// quant_table_18_to_80
// file qTable.h line 466
static signed short int quant_table_18_to_80[4096l];
// quant_table_18_to_88
// file qTable.h line 467
static signed short int quant_table_18_to_88[4096l];
// quant_table_18_to_96
// file qTable.h line 468
static signed short int quant_table_18_to_96[4096l];
// quant_table_1_to_10
// file qTable.h line 23
static signed short int quant_table_1_to_10[4096l];
// quant_table_1_to_104
// file qTable.h line 55
static signed short int quant_table_1_to_104[4096l];
// quant_table_1_to_112
// file qTable.h line 56
static signed short int quant_table_1_to_112[4096l];
// quant_table_1_to_12
// file qTable.h line 24
static signed short int quant_table_1_to_12[4096l];
// quant_table_1_to_14
// file qTable.h line 25
static signed short int quant_table_1_to_14[4096l];
// quant_table_1_to_16
// file qTable.h line 26
static signed short int quant_table_1_to_16[4096l];
// quant_table_1_to_18
// file qTable.h line 27
static signed short int quant_table_1_to_18[4096l];
// quant_table_1_to_2
// file qTable.h line 16
static signed short int quant_table_1_to_2[4096l];
// quant_table_1_to_20
// file qTable.h line 28
static signed short int quant_table_1_to_20[4096l];
// quant_table_1_to_22
// file qTable.h line 29
static signed short int quant_table_1_to_22[4096l];
// quant_table_1_to_24
// file qTable.h line 30
static signed short int quant_table_1_to_24[4096l];
// quant_table_1_to_26
// file qTable.h line 31
static signed short int quant_table_1_to_26[4096l];
// quant_table_1_to_28
// file qTable.h line 32
static signed short int quant_table_1_to_28[4096l];
// quant_table_1_to_3
// file qTable.h line 17
static signed short int quant_table_1_to_3[4096l];
// quant_table_1_to_30
// file qTable.h line 33
static signed short int quant_table_1_to_30[4096l];
// quant_table_1_to_32
// file qTable.h line 34
static signed short int quant_table_1_to_32[4096l];
// quant_table_1_to_34
// file qTable.h line 35
static signed short int quant_table_1_to_34[4096l];
// quant_table_1_to_36
// file qTable.h line 36
static signed short int quant_table_1_to_36[4096l];
// quant_table_1_to_38
// file qTable.h line 37
static signed short int quant_table_1_to_38[4096l];
// quant_table_1_to_4
// file qTable.h line 18
static signed short int quant_table_1_to_4[4096l];
// quant_table_1_to_40
// file qTable.h line 38
static signed short int quant_table_1_to_40[4096l];
// quant_table_1_to_42
// file qTable.h line 39
static signed short int quant_table_1_to_42[4096l];
// quant_table_1_to_44
// file qTable.h line 40
static signed short int quant_table_1_to_44[4096l];
// quant_table_1_to_46
// file qTable.h line 41
static signed short int quant_table_1_to_46[4096l];
// quant_table_1_to_48
// file qTable.h line 42
static signed short int quant_table_1_to_48[4096l];
// quant_table_1_to_5
// file qTable.h line 19
static signed short int quant_table_1_to_5[4096l];
// quant_table_1_to_50
// file qTable.h line 43
static signed short int quant_table_1_to_50[4096l];
// quant_table_1_to_52
// file qTable.h line 44
static signed short int quant_table_1_to_52[4096l];
// quant_table_1_to_54
// file qTable.h line 45
static signed short int quant_table_1_to_54[4096l];
// quant_table_1_to_56
// file qTable.h line 46
static signed short int quant_table_1_to_56[4096l];
// quant_table_1_to_58
// file qTable.h line 47
static signed short int quant_table_1_to_58[4096l];
// quant_table_1_to_6
// file qTable.h line 20
static signed short int quant_table_1_to_6[4096l];
// quant_table_1_to_60
// file qTable.h line 48
static signed short int quant_table_1_to_60[4096l];
// quant_table_1_to_62
// file qTable.h line 49
static signed short int quant_table_1_to_62[4096l];
// quant_table_1_to_64
// file qTable.h line 50
static signed short int quant_table_1_to_64[4096l];
// quant_table_1_to_7
// file qTable.h line 21
static signed short int quant_table_1_to_7[4096l];
// quant_table_1_to_72
// file qTable.h line 51
static signed short int quant_table_1_to_72[4096l];
// quant_table_1_to_8
// file qTable.h line 22
static signed short int quant_table_1_to_8[4096l];
// quant_table_1_to_80
// file qTable.h line 52
static signed short int quant_table_1_to_80[4096l];
// quant_table_1_to_88
// file qTable.h line 53
static signed short int quant_table_1_to_88[4096l];
// quant_table_1_to_96
// file qTable.h line 54
static signed short int quant_table_1_to_96[4096l];
// quant_table_20_to_104
// file qTable.h line 497
static signed short int quant_table_20_to_104[4096l];
// quant_table_20_to_112
// file qTable.h line 498
static signed short int quant_table_20_to_112[4096l];
// quant_table_20_to_22
// file qTable.h line 471
static signed short int quant_table_20_to_22[4096l];
// quant_table_20_to_24
// file qTable.h line 472
static signed short int quant_table_20_to_24[4096l];
// quant_table_20_to_26
// file qTable.h line 473
static signed short int quant_table_20_to_26[4096l];
// quant_table_20_to_28
// file qTable.h line 474
static signed short int quant_table_20_to_28[4096l];
// quant_table_20_to_30
// file qTable.h line 475
static signed short int quant_table_20_to_30[4096l];
// quant_table_20_to_32
// file qTable.h line 476
static signed short int quant_table_20_to_32[4096l];
// quant_table_20_to_34
// file qTable.h line 477
static signed short int quant_table_20_to_34[4096l];
// quant_table_20_to_36
// file qTable.h line 478
static signed short int quant_table_20_to_36[4096l];
// quant_table_20_to_38
// file qTable.h line 479
static signed short int quant_table_20_to_38[4096l];
// quant_table_20_to_40
// file qTable.h line 480
static signed short int quant_table_20_to_40[4096l];
// quant_table_20_to_42
// file qTable.h line 481
static signed short int quant_table_20_to_42[4096l];
// quant_table_20_to_44
// file qTable.h line 482
static signed short int quant_table_20_to_44[4096l];
// quant_table_20_to_46
// file qTable.h line 483
static signed short int quant_table_20_to_46[4096l];
// quant_table_20_to_48
// file qTable.h line 484
static signed short int quant_table_20_to_48[4096l];
// quant_table_20_to_50
// file qTable.h line 485
static signed short int quant_table_20_to_50[4096l];
// quant_table_20_to_52
// file qTable.h line 486
static signed short int quant_table_20_to_52[4096l];
// quant_table_20_to_54
// file qTable.h line 487
static signed short int quant_table_20_to_54[4096l];
// quant_table_20_to_56
// file qTable.h line 488
static signed short int quant_table_20_to_56[4096l];
// quant_table_20_to_58
// file qTable.h line 489
static signed short int quant_table_20_to_58[4096l];
// quant_table_20_to_60
// file qTable.h line 490
static signed short int quant_table_20_to_60[4096l];
// quant_table_20_to_62
// file qTable.h line 491
static signed short int quant_table_20_to_62[4096l];
// quant_table_20_to_64
// file qTable.h line 492
static signed short int quant_table_20_to_64[4096l];
// quant_table_20_to_72
// file qTable.h line 493
static signed short int quant_table_20_to_72[4096l];
// quant_table_20_to_80
// file qTable.h line 494
static signed short int quant_table_20_to_80[4096l];
// quant_table_20_to_88
// file qTable.h line 495
static signed short int quant_table_20_to_88[4096l];
// quant_table_20_to_96
// file qTable.h line 496
static signed short int quant_table_20_to_96[4096l];
// quant_table_22_to_104
// file qTable.h line 524
static signed short int quant_table_22_to_104[4096l];
// quant_table_22_to_112
// file qTable.h line 525
static signed short int quant_table_22_to_112[4096l];
// quant_table_22_to_24
// file qTable.h line 499
static signed short int quant_table_22_to_24[4096l];
// quant_table_22_to_26
// file qTable.h line 500
static signed short int quant_table_22_to_26[4096l];
// quant_table_22_to_28
// file qTable.h line 501
static signed short int quant_table_22_to_28[4096l];
// quant_table_22_to_30
// file qTable.h line 502
static signed short int quant_table_22_to_30[4096l];
// quant_table_22_to_32
// file qTable.h line 503
static signed short int quant_table_22_to_32[4096l];
// quant_table_22_to_34
// file qTable.h line 504
static signed short int quant_table_22_to_34[4096l];
// quant_table_22_to_36
// file qTable.h line 505
static signed short int quant_table_22_to_36[4096l];
// quant_table_22_to_38
// file qTable.h line 506
static signed short int quant_table_22_to_38[4096l];
// quant_table_22_to_40
// file qTable.h line 507
static signed short int quant_table_22_to_40[4096l];
// quant_table_22_to_42
// file qTable.h line 508
static signed short int quant_table_22_to_42[4096l];
// quant_table_22_to_44
// file qTable.h line 509
static signed short int quant_table_22_to_44[4096l];
// quant_table_22_to_46
// file qTable.h line 510
static signed short int quant_table_22_to_46[4096l];
// quant_table_22_to_48
// file qTable.h line 511
static signed short int quant_table_22_to_48[4096l];
// quant_table_22_to_50
// file qTable.h line 512
static signed short int quant_table_22_to_50[4096l];
// quant_table_22_to_52
// file qTable.h line 513
static signed short int quant_table_22_to_52[4096l];
// quant_table_22_to_54
// file qTable.h line 514
static signed short int quant_table_22_to_54[4096l];
// quant_table_22_to_56
// file qTable.h line 515
static signed short int quant_table_22_to_56[4096l];
// quant_table_22_to_58
// file qTable.h line 516
static signed short int quant_table_22_to_58[4096l];
// quant_table_22_to_60
// file qTable.h line 517
static signed short int quant_table_22_to_60[4096l];
// quant_table_22_to_62
// file qTable.h line 518
static signed short int quant_table_22_to_62[4096l];
// quant_table_22_to_64
// file qTable.h line 519
static signed short int quant_table_22_to_64[4096l];
// quant_table_22_to_72
// file qTable.h line 520
static signed short int quant_table_22_to_72[4096l];
// quant_table_22_to_80
// file qTable.h line 521
static signed short int quant_table_22_to_80[4096l];
// quant_table_22_to_88
// file qTable.h line 522
static signed short int quant_table_22_to_88[4096l];
// quant_table_22_to_96
// file qTable.h line 523
static signed short int quant_table_22_to_96[4096l];
// quant_table_24_to_104
// file qTable.h line 550
static signed short int quant_table_24_to_104[4096l];
// quant_table_24_to_112
// file qTable.h line 551
static signed short int quant_table_24_to_112[4096l];
// quant_table_24_to_26
// file qTable.h line 526
static signed short int quant_table_24_to_26[4096l];
// quant_table_24_to_28
// file qTable.h line 527
static signed short int quant_table_24_to_28[4096l];
// quant_table_24_to_30
// file qTable.h line 528
static signed short int quant_table_24_to_30[4096l];
// quant_table_24_to_32
// file qTable.h line 529
static signed short int quant_table_24_to_32[4096l];
// quant_table_24_to_34
// file qTable.h line 530
static signed short int quant_table_24_to_34[4096l];
// quant_table_24_to_36
// file qTable.h line 531
static signed short int quant_table_24_to_36[4096l];
// quant_table_24_to_38
// file qTable.h line 532
static signed short int quant_table_24_to_38[4096l];
// quant_table_24_to_40
// file qTable.h line 533
static signed short int quant_table_24_to_40[4096l];
// quant_table_24_to_42
// file qTable.h line 534
static signed short int quant_table_24_to_42[4096l];
// quant_table_24_to_44
// file qTable.h line 535
static signed short int quant_table_24_to_44[4096l];
// quant_table_24_to_46
// file qTable.h line 536
static signed short int quant_table_24_to_46[4096l];
// quant_table_24_to_48
// file qTable.h line 537
static signed short int quant_table_24_to_48[4096l];
// quant_table_24_to_50
// file qTable.h line 538
static signed short int quant_table_24_to_50[4096l];
// quant_table_24_to_52
// file qTable.h line 539
static signed short int quant_table_24_to_52[4096l];
// quant_table_24_to_54
// file qTable.h line 540
static signed short int quant_table_24_to_54[4096l];
// quant_table_24_to_56
// file qTable.h line 541
static signed short int quant_table_24_to_56[4096l];
// quant_table_24_to_58
// file qTable.h line 542
static signed short int quant_table_24_to_58[4096l];
// quant_table_24_to_60
// file qTable.h line 543
static signed short int quant_table_24_to_60[4096l];
// quant_table_24_to_62
// file qTable.h line 544
static signed short int quant_table_24_to_62[4096l];
// quant_table_24_to_64
// file qTable.h line 545
static signed short int quant_table_24_to_64[4096l];
// quant_table_24_to_72
// file qTable.h line 546
static signed short int quant_table_24_to_72[4096l];
// quant_table_24_to_80
// file qTable.h line 547
static signed short int quant_table_24_to_80[4096l];
// quant_table_24_to_88
// file qTable.h line 548
static signed short int quant_table_24_to_88[4096l];
// quant_table_24_to_96
// file qTable.h line 549
static signed short int quant_table_24_to_96[4096l];
// quant_table_26_to_104
// file qTable.h line 575
static signed short int quant_table_26_to_104[4096l];
// quant_table_26_to_112
// file qTable.h line 576
static signed short int quant_table_26_to_112[4096l];
// quant_table_26_to_28
// file qTable.h line 552
static signed short int quant_table_26_to_28[4096l];
// quant_table_26_to_30
// file qTable.h line 553
static signed short int quant_table_26_to_30[4096l];
// quant_table_26_to_32
// file qTable.h line 554
static signed short int quant_table_26_to_32[4096l];
// quant_table_26_to_34
// file qTable.h line 555
static signed short int quant_table_26_to_34[4096l];
// quant_table_26_to_36
// file qTable.h line 556
static signed short int quant_table_26_to_36[4096l];
// quant_table_26_to_38
// file qTable.h line 557
static signed short int quant_table_26_to_38[4096l];
// quant_table_26_to_40
// file qTable.h line 558
static signed short int quant_table_26_to_40[4096l];
// quant_table_26_to_42
// file qTable.h line 559
static signed short int quant_table_26_to_42[4096l];
// quant_table_26_to_44
// file qTable.h line 560
static signed short int quant_table_26_to_44[4096l];
// quant_table_26_to_46
// file qTable.h line 561
static signed short int quant_table_26_to_46[4096l];
// quant_table_26_to_48
// file qTable.h line 562
static signed short int quant_table_26_to_48[4096l];
// quant_table_26_to_50
// file qTable.h line 563
static signed short int quant_table_26_to_50[4096l];
// quant_table_26_to_52
// file qTable.h line 564
static signed short int quant_table_26_to_52[4096l];
// quant_table_26_to_54
// file qTable.h line 565
static signed short int quant_table_26_to_54[4096l];
// quant_table_26_to_56
// file qTable.h line 566
static signed short int quant_table_26_to_56[4096l];
// quant_table_26_to_58
// file qTable.h line 567
static signed short int quant_table_26_to_58[4096l];
// quant_table_26_to_60
// file qTable.h line 568
static signed short int quant_table_26_to_60[4096l];
// quant_table_26_to_62
// file qTable.h line 569
static signed short int quant_table_26_to_62[4096l];
// quant_table_26_to_64
// file qTable.h line 570
static signed short int quant_table_26_to_64[4096l];
// quant_table_26_to_72
// file qTable.h line 571
static signed short int quant_table_26_to_72[4096l];
// quant_table_26_to_80
// file qTable.h line 572
static signed short int quant_table_26_to_80[4096l];
// quant_table_26_to_88
// file qTable.h line 573
static signed short int quant_table_26_to_88[4096l];
// quant_table_26_to_96
// file qTable.h line 574
static signed short int quant_table_26_to_96[4096l];
// quant_table_28_to_104
// file qTable.h line 599
static signed short int quant_table_28_to_104[4096l];
// quant_table_28_to_112
// file qTable.h line 600
static signed short int quant_table_28_to_112[4096l];
// quant_table_28_to_30
// file qTable.h line 577
static signed short int quant_table_28_to_30[4096l];
// quant_table_28_to_32
// file qTable.h line 578
static signed short int quant_table_28_to_32[4096l];
// quant_table_28_to_34
// file qTable.h line 579
static signed short int quant_table_28_to_34[4096l];
// quant_table_28_to_36
// file qTable.h line 580
static signed short int quant_table_28_to_36[4096l];
// quant_table_28_to_38
// file qTable.h line 581
static signed short int quant_table_28_to_38[4096l];
// quant_table_28_to_40
// file qTable.h line 582
static signed short int quant_table_28_to_40[4096l];
// quant_table_28_to_42
// file qTable.h line 583
static signed short int quant_table_28_to_42[4096l];
// quant_table_28_to_44
// file qTable.h line 584
static signed short int quant_table_28_to_44[4096l];
// quant_table_28_to_46
// file qTable.h line 585
static signed short int quant_table_28_to_46[4096l];
// quant_table_28_to_48
// file qTable.h line 586
static signed short int quant_table_28_to_48[4096l];
// quant_table_28_to_50
// file qTable.h line 587
static signed short int quant_table_28_to_50[4096l];
// quant_table_28_to_52
// file qTable.h line 588
static signed short int quant_table_28_to_52[4096l];
// quant_table_28_to_54
// file qTable.h line 589
static signed short int quant_table_28_to_54[4096l];
// quant_table_28_to_56
// file qTable.h line 590
static signed short int quant_table_28_to_56[4096l];
// quant_table_28_to_58
// file qTable.h line 591
static signed short int quant_table_28_to_58[4096l];
// quant_table_28_to_60
// file qTable.h line 592
static signed short int quant_table_28_to_60[4096l];
// quant_table_28_to_62
// file qTable.h line 593
static signed short int quant_table_28_to_62[4096l];
// quant_table_28_to_64
// file qTable.h line 594
static signed short int quant_table_28_to_64[4096l];
// quant_table_28_to_72
// file qTable.h line 595
static signed short int quant_table_28_to_72[4096l];
// quant_table_28_to_80
// file qTable.h line 596
static signed short int quant_table_28_to_80[4096l];
// quant_table_28_to_88
// file qTable.h line 597
static signed short int quant_table_28_to_88[4096l];
// quant_table_28_to_96
// file qTable.h line 598
static signed short int quant_table_28_to_96[4096l];
// quant_table_2_to_10
// file qTable.h line 63
static signed short int quant_table_2_to_10[4096l];
// quant_table_2_to_104
// file qTable.h line 95
static signed short int quant_table_2_to_104[4096l];
// quant_table_2_to_112
// file qTable.h line 96
static signed short int quant_table_2_to_112[4096l];
// quant_table_2_to_12
// file qTable.h line 64
static signed short int quant_table_2_to_12[4096l];
// quant_table_2_to_14
// file qTable.h line 65
static signed short int quant_table_2_to_14[4096l];
// quant_table_2_to_16
// file qTable.h line 66
static signed short int quant_table_2_to_16[4096l];
// quant_table_2_to_18
// file qTable.h line 67
static signed short int quant_table_2_to_18[4096l];
// quant_table_2_to_20
// file qTable.h line 68
static signed short int quant_table_2_to_20[4096l];
// quant_table_2_to_22
// file qTable.h line 69
static signed short int quant_table_2_to_22[4096l];
// quant_table_2_to_24
// file qTable.h line 70
static signed short int quant_table_2_to_24[4096l];
// quant_table_2_to_26
// file qTable.h line 71
static signed short int quant_table_2_to_26[4096l];
// quant_table_2_to_28
// file qTable.h line 72
static signed short int quant_table_2_to_28[4096l];
// quant_table_2_to_3
// file qTable.h line 57
static signed short int quant_table_2_to_3[4096l];
// quant_table_2_to_30
// file qTable.h line 73
static signed short int quant_table_2_to_30[4096l];
// quant_table_2_to_32
// file qTable.h line 74
static signed short int quant_table_2_to_32[4096l];
// quant_table_2_to_34
// file qTable.h line 75
static signed short int quant_table_2_to_34[4096l];
// quant_table_2_to_36
// file qTable.h line 76
static signed short int quant_table_2_to_36[4096l];
// quant_table_2_to_38
// file qTable.h line 77
static signed short int quant_table_2_to_38[4096l];
// quant_table_2_to_4
// file qTable.h line 58
static signed short int quant_table_2_to_4[4096l];
// quant_table_2_to_40
// file qTable.h line 78
static signed short int quant_table_2_to_40[4096l];
// quant_table_2_to_42
// file qTable.h line 79
static signed short int quant_table_2_to_42[4096l];
// quant_table_2_to_44
// file qTable.h line 80
static signed short int quant_table_2_to_44[4096l];
// quant_table_2_to_46
// file qTable.h line 81
static signed short int quant_table_2_to_46[4096l];
// quant_table_2_to_48
// file qTable.h line 82
static signed short int quant_table_2_to_48[4096l];
// quant_table_2_to_5
// file qTable.h line 59
static signed short int quant_table_2_to_5[4096l];
// quant_table_2_to_50
// file qTable.h line 83
static signed short int quant_table_2_to_50[4096l];
// quant_table_2_to_52
// file qTable.h line 84
static signed short int quant_table_2_to_52[4096l];
// quant_table_2_to_54
// file qTable.h line 85
static signed short int quant_table_2_to_54[4096l];
// quant_table_2_to_56
// file qTable.h line 86
static signed short int quant_table_2_to_56[4096l];
// quant_table_2_to_58
// file qTable.h line 87
static signed short int quant_table_2_to_58[4096l];
// quant_table_2_to_6
// file qTable.h line 60
static signed short int quant_table_2_to_6[4096l];
// quant_table_2_to_60
// file qTable.h line 88
static signed short int quant_table_2_to_60[4096l];
// quant_table_2_to_62
// file qTable.h line 89
static signed short int quant_table_2_to_62[4096l];
// quant_table_2_to_64
// file qTable.h line 90
static signed short int quant_table_2_to_64[4096l];
// quant_table_2_to_7
// file qTable.h line 61
static signed short int quant_table_2_to_7[4096l];
// quant_table_2_to_72
// file qTable.h line 91
static signed short int quant_table_2_to_72[4096l];
// quant_table_2_to_8
// file qTable.h line 62
static signed short int quant_table_2_to_8[4096l];
// quant_table_2_to_80
// file qTable.h line 92
static signed short int quant_table_2_to_80[4096l];
// quant_table_2_to_88
// file qTable.h line 93
static signed short int quant_table_2_to_88[4096l];
// quant_table_2_to_96
// file qTable.h line 94
static signed short int quant_table_2_to_96[4096l];
// quant_table_30_to_104
// file qTable.h line 622
static signed short int quant_table_30_to_104[4096l];
// quant_table_30_to_112
// file qTable.h line 623
static signed short int quant_table_30_to_112[4096l];
// quant_table_30_to_32
// file qTable.h line 601
static signed short int quant_table_30_to_32[4096l];
// quant_table_30_to_34
// file qTable.h line 602
static signed short int quant_table_30_to_34[4096l];
// quant_table_30_to_36
// file qTable.h line 603
static signed short int quant_table_30_to_36[4096l];
// quant_table_30_to_38
// file qTable.h line 604
static signed short int quant_table_30_to_38[4096l];
// quant_table_30_to_40
// file qTable.h line 605
static signed short int quant_table_30_to_40[4096l];
// quant_table_30_to_42
// file qTable.h line 606
static signed short int quant_table_30_to_42[4096l];
// quant_table_30_to_44
// file qTable.h line 607
static signed short int quant_table_30_to_44[4096l];
// quant_table_30_to_46
// file qTable.h line 608
static signed short int quant_table_30_to_46[4096l];
// quant_table_30_to_48
// file qTable.h line 609
static signed short int quant_table_30_to_48[4096l];
// quant_table_30_to_50
// file qTable.h line 610
static signed short int quant_table_30_to_50[4096l];
// quant_table_30_to_52
// file qTable.h line 611
static signed short int quant_table_30_to_52[4096l];
// quant_table_30_to_54
// file qTable.h line 612
static signed short int quant_table_30_to_54[4096l];
// quant_table_30_to_56
// file qTable.h line 613
static signed short int quant_table_30_to_56[4096l];
// quant_table_30_to_58
// file qTable.h line 614
static signed short int quant_table_30_to_58[4096l];
// quant_table_30_to_60
// file qTable.h line 615
static signed short int quant_table_30_to_60[4096l];
// quant_table_30_to_62
// file qTable.h line 616
static signed short int quant_table_30_to_62[4096l];
// quant_table_30_to_64
// file qTable.h line 617
static signed short int quant_table_30_to_64[4096l];
// quant_table_30_to_72
// file qTable.h line 618
static signed short int quant_table_30_to_72[4096l];
// quant_table_30_to_80
// file qTable.h line 619
static signed short int quant_table_30_to_80[4096l];
// quant_table_30_to_88
// file qTable.h line 620
static signed short int quant_table_30_to_88[4096l];
// quant_table_30_to_96
// file qTable.h line 621
static signed short int quant_table_30_to_96[4096l];
// quant_table_32_to_104
// file qTable.h line 644
static signed short int quant_table_32_to_104[4096l];
// quant_table_32_to_112
// file qTable.h line 645
static signed short int quant_table_32_to_112[4096l];
// quant_table_32_to_34
// file qTable.h line 624
static signed short int quant_table_32_to_34[4096l];
// quant_table_32_to_36
// file qTable.h line 625
static signed short int quant_table_32_to_36[4096l];
// quant_table_32_to_38
// file qTable.h line 626
static signed short int quant_table_32_to_38[4096l];
// quant_table_32_to_40
// file qTable.h line 627
static signed short int quant_table_32_to_40[4096l];
// quant_table_32_to_42
// file qTable.h line 628
static signed short int quant_table_32_to_42[4096l];
// quant_table_32_to_44
// file qTable.h line 629
static signed short int quant_table_32_to_44[4096l];
// quant_table_32_to_46
// file qTable.h line 630
static signed short int quant_table_32_to_46[4096l];
// quant_table_32_to_48
// file qTable.h line 631
static signed short int quant_table_32_to_48[4096l];
// quant_table_32_to_50
// file qTable.h line 632
static signed short int quant_table_32_to_50[4096l];
// quant_table_32_to_52
// file qTable.h line 633
static signed short int quant_table_32_to_52[4096l];
// quant_table_32_to_54
// file qTable.h line 634
static signed short int quant_table_32_to_54[4096l];
// quant_table_32_to_56
// file qTable.h line 635
static signed short int quant_table_32_to_56[4096l];
// quant_table_32_to_58
// file qTable.h line 636
static signed short int quant_table_32_to_58[4096l];
// quant_table_32_to_60
// file qTable.h line 637
static signed short int quant_table_32_to_60[4096l];
// quant_table_32_to_62
// file qTable.h line 638
static signed short int quant_table_32_to_62[4096l];
// quant_table_32_to_64
// file qTable.h line 639
static signed short int quant_table_32_to_64[4096l];
// quant_table_32_to_72
// file qTable.h line 640
static signed short int quant_table_32_to_72[4096l];
// quant_table_32_to_80
// file qTable.h line 641
static signed short int quant_table_32_to_80[4096l];
// quant_table_32_to_88
// file qTable.h line 642
static signed short int quant_table_32_to_88[4096l];
// quant_table_32_to_96
// file qTable.h line 643
static signed short int quant_table_32_to_96[4096l];
// quant_table_34_to_104
// file qTable.h line 665
static signed short int quant_table_34_to_104[4096l];
// quant_table_34_to_112
// file qTable.h line 666
static signed short int quant_table_34_to_112[4096l];
// quant_table_34_to_36
// file qTable.h line 646
static signed short int quant_table_34_to_36[4096l];
// quant_table_34_to_38
// file qTable.h line 647
static signed short int quant_table_34_to_38[4096l];
// quant_table_34_to_40
// file qTable.h line 648
static signed short int quant_table_34_to_40[4096l];
// quant_table_34_to_42
// file qTable.h line 649
static signed short int quant_table_34_to_42[4096l];
// quant_table_34_to_44
// file qTable.h line 650
static signed short int quant_table_34_to_44[4096l];
// quant_table_34_to_46
// file qTable.h line 651
static signed short int quant_table_34_to_46[4096l];
// quant_table_34_to_48
// file qTable.h line 652
static signed short int quant_table_34_to_48[4096l];
// quant_table_34_to_50
// file qTable.h line 653
static signed short int quant_table_34_to_50[4096l];
// quant_table_34_to_52
// file qTable.h line 654
static signed short int quant_table_34_to_52[4096l];
// quant_table_34_to_54
// file qTable.h line 655
static signed short int quant_table_34_to_54[4096l];
// quant_table_34_to_56
// file qTable.h line 656
static signed short int quant_table_34_to_56[4096l];
// quant_table_34_to_58
// file qTable.h line 657
static signed short int quant_table_34_to_58[4096l];
// quant_table_34_to_60
// file qTable.h line 658
static signed short int quant_table_34_to_60[4096l];
// quant_table_34_to_62
// file qTable.h line 659
static signed short int quant_table_34_to_62[4096l];
// quant_table_34_to_64
// file qTable.h line 660
static signed short int quant_table_34_to_64[4096l];
// quant_table_34_to_72
// file qTable.h line 661
static signed short int quant_table_34_to_72[4096l];
// quant_table_34_to_80
// file qTable.h line 662
static signed short int quant_table_34_to_80[4096l];
// quant_table_34_to_88
// file qTable.h line 663
static signed short int quant_table_34_to_88[4096l];
// quant_table_34_to_96
// file qTable.h line 664
static signed short int quant_table_34_to_96[4096l];
// quant_table_36_to_104
// file qTable.h line 685
static signed short int quant_table_36_to_104[4096l];
// quant_table_36_to_112
// file qTable.h line 686
static signed short int quant_table_36_to_112[4096l];
// quant_table_36_to_38
// file qTable.h line 667
static signed short int quant_table_36_to_38[4096l];
// quant_table_36_to_40
// file qTable.h line 668
static signed short int quant_table_36_to_40[4096l];
// quant_table_36_to_42
// file qTable.h line 669
static signed short int quant_table_36_to_42[4096l];
// quant_table_36_to_44
// file qTable.h line 670
static signed short int quant_table_36_to_44[4096l];
// quant_table_36_to_46
// file qTable.h line 671
static signed short int quant_table_36_to_46[4096l];
// quant_table_36_to_48
// file qTable.h line 672
static signed short int quant_table_36_to_48[4096l];
// quant_table_36_to_50
// file qTable.h line 673
static signed short int quant_table_36_to_50[4096l];
// quant_table_36_to_52
// file qTable.h line 674
static signed short int quant_table_36_to_52[4096l];
// quant_table_36_to_54
// file qTable.h line 675
static signed short int quant_table_36_to_54[4096l];
// quant_table_36_to_56
// file qTable.h line 676
static signed short int quant_table_36_to_56[4096l];
// quant_table_36_to_58
// file qTable.h line 677
static signed short int quant_table_36_to_58[4096l];
// quant_table_36_to_60
// file qTable.h line 678
static signed short int quant_table_36_to_60[4096l];
// quant_table_36_to_62
// file qTable.h line 679
static signed short int quant_table_36_to_62[4096l];
// quant_table_36_to_64
// file qTable.h line 680
static signed short int quant_table_36_to_64[4096l];
// quant_table_36_to_72
// file qTable.h line 681
static signed short int quant_table_36_to_72[4096l];
// quant_table_36_to_80
// file qTable.h line 682
static signed short int quant_table_36_to_80[4096l];
// quant_table_36_to_88
// file qTable.h line 683
static signed short int quant_table_36_to_88[4096l];
// quant_table_36_to_96
// file qTable.h line 684
static signed short int quant_table_36_to_96[4096l];
// quant_table_38_to_104
// file qTable.h line 704
static signed short int quant_table_38_to_104[4096l];
// quant_table_38_to_112
// file qTable.h line 705
static signed short int quant_table_38_to_112[4096l];
// quant_table_38_to_40
// file qTable.h line 687
static signed short int quant_table_38_to_40[4096l];
// quant_table_38_to_42
// file qTable.h line 688
static signed short int quant_table_38_to_42[4096l];
// quant_table_38_to_44
// file qTable.h line 689
static signed short int quant_table_38_to_44[4096l];
// quant_table_38_to_46
// file qTable.h line 690
static signed short int quant_table_38_to_46[4096l];
// quant_table_38_to_48
// file qTable.h line 691
static signed short int quant_table_38_to_48[4096l];
// quant_table_38_to_50
// file qTable.h line 692
static signed short int quant_table_38_to_50[4096l];
// quant_table_38_to_52
// file qTable.h line 693
static signed short int quant_table_38_to_52[4096l];
// quant_table_38_to_54
// file qTable.h line 694
static signed short int quant_table_38_to_54[4096l];
// quant_table_38_to_56
// file qTable.h line 695
static signed short int quant_table_38_to_56[4096l];
// quant_table_38_to_58
// file qTable.h line 696
static signed short int quant_table_38_to_58[4096l];
// quant_table_38_to_60
// file qTable.h line 697
static signed short int quant_table_38_to_60[4096l];
// quant_table_38_to_62
// file qTable.h line 698
static signed short int quant_table_38_to_62[4096l];
// quant_table_38_to_64
// file qTable.h line 699
static signed short int quant_table_38_to_64[4096l];
// quant_table_38_to_72
// file qTable.h line 700
static signed short int quant_table_38_to_72[4096l];
// quant_table_38_to_80
// file qTable.h line 701
static signed short int quant_table_38_to_80[4096l];
// quant_table_38_to_88
// file qTable.h line 702
static signed short int quant_table_38_to_88[4096l];
// quant_table_38_to_96
// file qTable.h line 703
static signed short int quant_table_38_to_96[4096l];
// quant_table_3_to_10
// file qTable.h line 102
static signed short int quant_table_3_to_10[4096l];
// quant_table_3_to_104
// file qTable.h line 134
static signed short int quant_table_3_to_104[4096l];
// quant_table_3_to_112
// file qTable.h line 135
static signed short int quant_table_3_to_112[4096l];
// quant_table_3_to_12
// file qTable.h line 103
static signed short int quant_table_3_to_12[4096l];
// quant_table_3_to_14
// file qTable.h line 104
static signed short int quant_table_3_to_14[4096l];
// quant_table_3_to_16
// file qTable.h line 105
static signed short int quant_table_3_to_16[4096l];
// quant_table_3_to_18
// file qTable.h line 106
static signed short int quant_table_3_to_18[4096l];
// quant_table_3_to_20
// file qTable.h line 107
static signed short int quant_table_3_to_20[4096l];
// quant_table_3_to_22
// file qTable.h line 108
static signed short int quant_table_3_to_22[4096l];
// quant_table_3_to_24
// file qTable.h line 109
static signed short int quant_table_3_to_24[4096l];
// quant_table_3_to_26
// file qTable.h line 110
static signed short int quant_table_3_to_26[4096l];
// quant_table_3_to_28
// file qTable.h line 111
static signed short int quant_table_3_to_28[4096l];
// quant_table_3_to_30
// file qTable.h line 112
static signed short int quant_table_3_to_30[4096l];
// quant_table_3_to_32
// file qTable.h line 113
static signed short int quant_table_3_to_32[4096l];
// quant_table_3_to_34
// file qTable.h line 114
static signed short int quant_table_3_to_34[4096l];
// quant_table_3_to_36
// file qTable.h line 115
static signed short int quant_table_3_to_36[4096l];
// quant_table_3_to_38
// file qTable.h line 116
static signed short int quant_table_3_to_38[4096l];
// quant_table_3_to_4
// file qTable.h line 97
static signed short int quant_table_3_to_4[4096l];
// quant_table_3_to_40
// file qTable.h line 117
static signed short int quant_table_3_to_40[4096l];
// quant_table_3_to_42
// file qTable.h line 118
static signed short int quant_table_3_to_42[4096l];
// quant_table_3_to_44
// file qTable.h line 119
static signed short int quant_table_3_to_44[4096l];
// quant_table_3_to_46
// file qTable.h line 120
static signed short int quant_table_3_to_46[4096l];
// quant_table_3_to_48
// file qTable.h line 121
static signed short int quant_table_3_to_48[4096l];
// quant_table_3_to_5
// file qTable.h line 98
static signed short int quant_table_3_to_5[4096l];
// quant_table_3_to_50
// file qTable.h line 122
static signed short int quant_table_3_to_50[4096l];
// quant_table_3_to_52
// file qTable.h line 123
static signed short int quant_table_3_to_52[4096l];
// quant_table_3_to_54
// file qTable.h line 124
static signed short int quant_table_3_to_54[4096l];
// quant_table_3_to_56
// file qTable.h line 125
static signed short int quant_table_3_to_56[4096l];
// quant_table_3_to_58
// file qTable.h line 126
static signed short int quant_table_3_to_58[4096l];
// quant_table_3_to_6
// file qTable.h line 99
static signed short int quant_table_3_to_6[4096l];
// quant_table_3_to_60
// file qTable.h line 127
static signed short int quant_table_3_to_60[4096l];
// quant_table_3_to_62
// file qTable.h line 128
static signed short int quant_table_3_to_62[4096l];
// quant_table_3_to_64
// file qTable.h line 129
static signed short int quant_table_3_to_64[4096l];
// quant_table_3_to_7
// file qTable.h line 100
static signed short int quant_table_3_to_7[4096l];
// quant_table_3_to_72
// file qTable.h line 130
static signed short int quant_table_3_to_72[4096l];
// quant_table_3_to_8
// file qTable.h line 101
static signed short int quant_table_3_to_8[4096l];
// quant_table_3_to_80
// file qTable.h line 131
static signed short int quant_table_3_to_80[4096l];
// quant_table_3_to_88
// file qTable.h line 132
static signed short int quant_table_3_to_88[4096l];
// quant_table_3_to_96
// file qTable.h line 133
static signed short int quant_table_3_to_96[4096l];
// quant_table_40_to_104
// file qTable.h line 722
static signed short int quant_table_40_to_104[4096l];
// quant_table_40_to_112
// file qTable.h line 723
static signed short int quant_table_40_to_112[4096l];
// quant_table_40_to_42
// file qTable.h line 706
static signed short int quant_table_40_to_42[4096l];
// quant_table_40_to_44
// file qTable.h line 707
static signed short int quant_table_40_to_44[4096l];
// quant_table_40_to_46
// file qTable.h line 708
static signed short int quant_table_40_to_46[4096l];
// quant_table_40_to_48
// file qTable.h line 709
static signed short int quant_table_40_to_48[4096l];
// quant_table_40_to_50
// file qTable.h line 710
static signed short int quant_table_40_to_50[4096l];
// quant_table_40_to_52
// file qTable.h line 711
static signed short int quant_table_40_to_52[4096l];
// quant_table_40_to_54
// file qTable.h line 712
static signed short int quant_table_40_to_54[4096l];
// quant_table_40_to_56
// file qTable.h line 713
static signed short int quant_table_40_to_56[4096l];
// quant_table_40_to_58
// file qTable.h line 714
static signed short int quant_table_40_to_58[4096l];
// quant_table_40_to_60
// file qTable.h line 715
static signed short int quant_table_40_to_60[4096l];
// quant_table_40_to_62
// file qTable.h line 716
static signed short int quant_table_40_to_62[4096l];
// quant_table_40_to_64
// file qTable.h line 717
static signed short int quant_table_40_to_64[4096l];
// quant_table_40_to_72
// file qTable.h line 718
static signed short int quant_table_40_to_72[4096l];
// quant_table_40_to_80
// file qTable.h line 719
static signed short int quant_table_40_to_80[4096l];
// quant_table_40_to_88
// file qTable.h line 720
static signed short int quant_table_40_to_88[4096l];
// quant_table_40_to_96
// file qTable.h line 721
static signed short int quant_table_40_to_96[4096l];
// quant_table_42_to_104
// file qTable.h line 739
static signed short int quant_table_42_to_104[4096l];
// quant_table_42_to_112
// file qTable.h line 740
static signed short int quant_table_42_to_112[4096l];
// quant_table_42_to_44
// file qTable.h line 724
static signed short int quant_table_42_to_44[4096l];
// quant_table_42_to_46
// file qTable.h line 725
static signed short int quant_table_42_to_46[4096l];
// quant_table_42_to_48
// file qTable.h line 726
static signed short int quant_table_42_to_48[4096l];
// quant_table_42_to_50
// file qTable.h line 727
static signed short int quant_table_42_to_50[4096l];
// quant_table_42_to_52
// file qTable.h line 728
static signed short int quant_table_42_to_52[4096l];
// quant_table_42_to_54
// file qTable.h line 729
static signed short int quant_table_42_to_54[4096l];
// quant_table_42_to_56
// file qTable.h line 730
static signed short int quant_table_42_to_56[4096l];
// quant_table_42_to_58
// file qTable.h line 731
static signed short int quant_table_42_to_58[4096l];
// quant_table_42_to_60
// file qTable.h line 732
static signed short int quant_table_42_to_60[4096l];
// quant_table_42_to_62
// file qTable.h line 733
static signed short int quant_table_42_to_62[4096l];
// quant_table_42_to_64
// file qTable.h line 734
static signed short int quant_table_42_to_64[4096l];
// quant_table_42_to_72
// file qTable.h line 735
static signed short int quant_table_42_to_72[4096l];
// quant_table_42_to_80
// file qTable.h line 736
static signed short int quant_table_42_to_80[4096l];
// quant_table_42_to_88
// file qTable.h line 737
static signed short int quant_table_42_to_88[4096l];
// quant_table_42_to_96
// file qTable.h line 738
static signed short int quant_table_42_to_96[4096l];
// quant_table_44_to_104
// file qTable.h line 755
static signed short int quant_table_44_to_104[4096l];
// quant_table_44_to_112
// file qTable.h line 756
static signed short int quant_table_44_to_112[4096l];
// quant_table_44_to_46
// file qTable.h line 741
static signed short int quant_table_44_to_46[4096l];
// quant_table_44_to_48
// file qTable.h line 742
static signed short int quant_table_44_to_48[4096l];
// quant_table_44_to_50
// file qTable.h line 743
static signed short int quant_table_44_to_50[4096l];
// quant_table_44_to_52
// file qTable.h line 744
static signed short int quant_table_44_to_52[4096l];
// quant_table_44_to_54
// file qTable.h line 745
static signed short int quant_table_44_to_54[4096l];
// quant_table_44_to_56
// file qTable.h line 746
static signed short int quant_table_44_to_56[4096l];
// quant_table_44_to_58
// file qTable.h line 747
static signed short int quant_table_44_to_58[4096l];
// quant_table_44_to_60
// file qTable.h line 748
static signed short int quant_table_44_to_60[4096l];
// quant_table_44_to_62
// file qTable.h line 749
static signed short int quant_table_44_to_62[4096l];
// quant_table_44_to_64
// file qTable.h line 750
static signed short int quant_table_44_to_64[4096l];
// quant_table_44_to_72
// file qTable.h line 751
static signed short int quant_table_44_to_72[4096l];
// quant_table_44_to_80
// file qTable.h line 752
static signed short int quant_table_44_to_80[4096l];
// quant_table_44_to_88
// file qTable.h line 753
static signed short int quant_table_44_to_88[4096l];
// quant_table_44_to_96
// file qTable.h line 754
static signed short int quant_table_44_to_96[4096l];
// quant_table_46_to_104
// file qTable.h line 770
static signed short int quant_table_46_to_104[4096l];
// quant_table_46_to_112
// file qTable.h line 771
static signed short int quant_table_46_to_112[4096l];
// quant_table_46_to_48
// file qTable.h line 757
static signed short int quant_table_46_to_48[4096l];
// quant_table_46_to_50
// file qTable.h line 758
static signed short int quant_table_46_to_50[4096l];
// quant_table_46_to_52
// file qTable.h line 759
static signed short int quant_table_46_to_52[4096l];
// quant_table_46_to_54
// file qTable.h line 760
static signed short int quant_table_46_to_54[4096l];
// quant_table_46_to_56
// file qTable.h line 761
static signed short int quant_table_46_to_56[4096l];
// quant_table_46_to_58
// file qTable.h line 762
static signed short int quant_table_46_to_58[4096l];
// quant_table_46_to_60
// file qTable.h line 763
static signed short int quant_table_46_to_60[4096l];
// quant_table_46_to_62
// file qTable.h line 764
static signed short int quant_table_46_to_62[4096l];
// quant_table_46_to_64
// file qTable.h line 765
static signed short int quant_table_46_to_64[4096l];
// quant_table_46_to_72
// file qTable.h line 766
static signed short int quant_table_46_to_72[4096l];
// quant_table_46_to_80
// file qTable.h line 767
static signed short int quant_table_46_to_80[4096l];
// quant_table_46_to_88
// file qTable.h line 768
static signed short int quant_table_46_to_88[4096l];
// quant_table_46_to_96
// file qTable.h line 769
static signed short int quant_table_46_to_96[4096l];
// quant_table_48_to_104
// file qTable.h line 784
static signed short int quant_table_48_to_104[4096l];
// quant_table_48_to_112
// file qTable.h line 785
static signed short int quant_table_48_to_112[4096l];
// quant_table_48_to_50
// file qTable.h line 772
static signed short int quant_table_48_to_50[4096l];
// quant_table_48_to_52
// file qTable.h line 773
static signed short int quant_table_48_to_52[4096l];
// quant_table_48_to_54
// file qTable.h line 774
static signed short int quant_table_48_to_54[4096l];
// quant_table_48_to_56
// file qTable.h line 775
static signed short int quant_table_48_to_56[4096l];
// quant_table_48_to_58
// file qTable.h line 776
static signed short int quant_table_48_to_58[4096l];
// quant_table_48_to_60
// file qTable.h line 777
static signed short int quant_table_48_to_60[4096l];
// quant_table_48_to_62
// file qTable.h line 778
static signed short int quant_table_48_to_62[4096l];
// quant_table_48_to_64
// file qTable.h line 779
static signed short int quant_table_48_to_64[4096l];
// quant_table_48_to_72
// file qTable.h line 780
static signed short int quant_table_48_to_72[4096l];
// quant_table_48_to_80
// file qTable.h line 781
static signed short int quant_table_48_to_80[4096l];
// quant_table_48_to_88
// file qTable.h line 782
static signed short int quant_table_48_to_88[4096l];
// quant_table_48_to_96
// file qTable.h line 783
static signed short int quant_table_48_to_96[4096l];
// quant_table_4_to_10
// file qTable.h line 140
static signed short int quant_table_4_to_10[4096l];
// quant_table_4_to_104
// file qTable.h line 172
static signed short int quant_table_4_to_104[4096l];
// quant_table_4_to_112
// file qTable.h line 173
static signed short int quant_table_4_to_112[4096l];
// quant_table_4_to_12
// file qTable.h line 141
static signed short int quant_table_4_to_12[4096l];
// quant_table_4_to_14
// file qTable.h line 142
static signed short int quant_table_4_to_14[4096l];
// quant_table_4_to_16
// file qTable.h line 143
static signed short int quant_table_4_to_16[4096l];
// quant_table_4_to_18
// file qTable.h line 144
static signed short int quant_table_4_to_18[4096l];
// quant_table_4_to_20
// file qTable.h line 145
static signed short int quant_table_4_to_20[4096l];
// quant_table_4_to_22
// file qTable.h line 146
static signed short int quant_table_4_to_22[4096l];
// quant_table_4_to_24
// file qTable.h line 147
static signed short int quant_table_4_to_24[4096l];
// quant_table_4_to_26
// file qTable.h line 148
static signed short int quant_table_4_to_26[4096l];
// quant_table_4_to_28
// file qTable.h line 149
static signed short int quant_table_4_to_28[4096l];
// quant_table_4_to_30
// file qTable.h line 150
static signed short int quant_table_4_to_30[4096l];
// quant_table_4_to_32
// file qTable.h line 151
static signed short int quant_table_4_to_32[4096l];
// quant_table_4_to_34
// file qTable.h line 152
static signed short int quant_table_4_to_34[4096l];
// quant_table_4_to_36
// file qTable.h line 153
static signed short int quant_table_4_to_36[4096l];
// quant_table_4_to_38
// file qTable.h line 154
static signed short int quant_table_4_to_38[4096l];
// quant_table_4_to_40
// file qTable.h line 155
static signed short int quant_table_4_to_40[4096l];
// quant_table_4_to_42
// file qTable.h line 156
static signed short int quant_table_4_to_42[4096l];
// quant_table_4_to_44
// file qTable.h line 157
static signed short int quant_table_4_to_44[4096l];
// quant_table_4_to_46
// file qTable.h line 158
static signed short int quant_table_4_to_46[4096l];
// quant_table_4_to_48
// file qTable.h line 159
static signed short int quant_table_4_to_48[4096l];
// quant_table_4_to_5
// file qTable.h line 136
static signed short int quant_table_4_to_5[4096l];
// quant_table_4_to_50
// file qTable.h line 160
static signed short int quant_table_4_to_50[4096l];
// quant_table_4_to_52
// file qTable.h line 161
static signed short int quant_table_4_to_52[4096l];
// quant_table_4_to_54
// file qTable.h line 162
static signed short int quant_table_4_to_54[4096l];
// quant_table_4_to_56
// file qTable.h line 163
static signed short int quant_table_4_to_56[4096l];
// quant_table_4_to_58
// file qTable.h line 164
static signed short int quant_table_4_to_58[4096l];
// quant_table_4_to_6
// file qTable.h line 137
static signed short int quant_table_4_to_6[4096l];
// quant_table_4_to_60
// file qTable.h line 165
static signed short int quant_table_4_to_60[4096l];
// quant_table_4_to_62
// file qTable.h line 166
static signed short int quant_table_4_to_62[4096l];
// quant_table_4_to_64
// file qTable.h line 167
static signed short int quant_table_4_to_64[4096l];
// quant_table_4_to_7
// file qTable.h line 138
static signed short int quant_table_4_to_7[4096l];
// quant_table_4_to_72
// file qTable.h line 168
static signed short int quant_table_4_to_72[4096l];
// quant_table_4_to_8
// file qTable.h line 139
static signed short int quant_table_4_to_8[4096l];
// quant_table_4_to_80
// file qTable.h line 169
static signed short int quant_table_4_to_80[4096l];
// quant_table_4_to_88
// file qTable.h line 170
static signed short int quant_table_4_to_88[4096l];
// quant_table_4_to_96
// file qTable.h line 171
static signed short int quant_table_4_to_96[4096l];
// quant_table_50_to_104
// file qTable.h line 797
static signed short int quant_table_50_to_104[4096l];
// quant_table_50_to_112
// file qTable.h line 798
static signed short int quant_table_50_to_112[4096l];
// quant_table_50_to_52
// file qTable.h line 786
static signed short int quant_table_50_to_52[4096l];
// quant_table_50_to_54
// file qTable.h line 787
static signed short int quant_table_50_to_54[4096l];
// quant_table_50_to_56
// file qTable.h line 788
static signed short int quant_table_50_to_56[4096l];
// quant_table_50_to_58
// file qTable.h line 789
static signed short int quant_table_50_to_58[4096l];
// quant_table_50_to_60
// file qTable.h line 790
static signed short int quant_table_50_to_60[4096l];
// quant_table_50_to_62
// file qTable.h line 791
static signed short int quant_table_50_to_62[4096l];
// quant_table_50_to_64
// file qTable.h line 792
static signed short int quant_table_50_to_64[4096l];
// quant_table_50_to_72
// file qTable.h line 793
static signed short int quant_table_50_to_72[4096l];
// quant_table_50_to_80
// file qTable.h line 794
static signed short int quant_table_50_to_80[4096l];
// quant_table_50_to_88
// file qTable.h line 795
static signed short int quant_table_50_to_88[4096l];
// quant_table_50_to_96
// file qTable.h line 796
static signed short int quant_table_50_to_96[4096l];
// quant_table_52_to_104
// file qTable.h line 809
static signed short int quant_table_52_to_104[4096l];
// quant_table_52_to_112
// file qTable.h line 810
static signed short int quant_table_52_to_112[4096l];
// quant_table_52_to_54
// file qTable.h line 799
static signed short int quant_table_52_to_54[4096l];
// quant_table_52_to_56
// file qTable.h line 800
static signed short int quant_table_52_to_56[4096l];
// quant_table_52_to_58
// file qTable.h line 801
static signed short int quant_table_52_to_58[4096l];
// quant_table_52_to_60
// file qTable.h line 802
static signed short int quant_table_52_to_60[4096l];
// quant_table_52_to_62
// file qTable.h line 803
static signed short int quant_table_52_to_62[4096l];
// quant_table_52_to_64
// file qTable.h line 804
static signed short int quant_table_52_to_64[4096l];
// quant_table_52_to_72
// file qTable.h line 805
static signed short int quant_table_52_to_72[4096l];
// quant_table_52_to_80
// file qTable.h line 806
static signed short int quant_table_52_to_80[4096l];
// quant_table_52_to_88
// file qTable.h line 807
static signed short int quant_table_52_to_88[4096l];
// quant_table_52_to_96
// file qTable.h line 808
static signed short int quant_table_52_to_96[4096l];
// quant_table_54_to_104
// file qTable.h line 820
static signed short int quant_table_54_to_104[4096l];
// quant_table_54_to_112
// file qTable.h line 821
static signed short int quant_table_54_to_112[4096l];
// quant_table_54_to_56
// file qTable.h line 811
static signed short int quant_table_54_to_56[4096l];
// quant_table_54_to_58
// file qTable.h line 812
static signed short int quant_table_54_to_58[4096l];
// quant_table_54_to_60
// file qTable.h line 813
static signed short int quant_table_54_to_60[4096l];
// quant_table_54_to_62
// file qTable.h line 814
static signed short int quant_table_54_to_62[4096l];
// quant_table_54_to_64
// file qTable.h line 815
static signed short int quant_table_54_to_64[4096l];
// quant_table_54_to_72
// file qTable.h line 816
static signed short int quant_table_54_to_72[4096l];
// quant_table_54_to_80
// file qTable.h line 817
static signed short int quant_table_54_to_80[4096l];
// quant_table_54_to_88
// file qTable.h line 818
static signed short int quant_table_54_to_88[4096l];
// quant_table_54_to_96
// file qTable.h line 819
static signed short int quant_table_54_to_96[4096l];
// quant_table_56_to_104
// file qTable.h line 830
static signed short int quant_table_56_to_104[4096l];
// quant_table_56_to_112
// file qTable.h line 831
static signed short int quant_table_56_to_112[4096l];
// quant_table_56_to_58
// file qTable.h line 822
static signed short int quant_table_56_to_58[4096l];
// quant_table_56_to_60
// file qTable.h line 823
static signed short int quant_table_56_to_60[4096l];
// quant_table_56_to_62
// file qTable.h line 824
static signed short int quant_table_56_to_62[4096l];
// quant_table_56_to_64
// file qTable.h line 825
static signed short int quant_table_56_to_64[4096l];
// quant_table_56_to_72
// file qTable.h line 826
static signed short int quant_table_56_to_72[4096l];
// quant_table_56_to_80
// file qTable.h line 827
static signed short int quant_table_56_to_80[4096l];
// quant_table_56_to_88
// file qTable.h line 828
static signed short int quant_table_56_to_88[4096l];
// quant_table_56_to_96
// file qTable.h line 829
static signed short int quant_table_56_to_96[4096l];
// quant_table_58_to_104
// file qTable.h line 839
static signed short int quant_table_58_to_104[4096l];
// quant_table_58_to_112
// file qTable.h line 840
static signed short int quant_table_58_to_112[4096l];
// quant_table_58_to_60
// file qTable.h line 832
static signed short int quant_table_58_to_60[4096l];
// quant_table_58_to_62
// file qTable.h line 833
static signed short int quant_table_58_to_62[4096l];
// quant_table_58_to_64
// file qTable.h line 834
static signed short int quant_table_58_to_64[4096l];
// quant_table_58_to_72
// file qTable.h line 835
static signed short int quant_table_58_to_72[4096l];
// quant_table_58_to_80
// file qTable.h line 836
static signed short int quant_table_58_to_80[4096l];
// quant_table_58_to_88
// file qTable.h line 837
static signed short int quant_table_58_to_88[4096l];
// quant_table_58_to_96
// file qTable.h line 838
static signed short int quant_table_58_to_96[4096l];
// quant_table_5_to_10
// file qTable.h line 177
static signed short int quant_table_5_to_10[4096l];
// quant_table_5_to_104
// file qTable.h line 209
static signed short int quant_table_5_to_104[4096l];
// quant_table_5_to_112
// file qTable.h line 210
static signed short int quant_table_5_to_112[4096l];
// quant_table_5_to_12
// file qTable.h line 178
static signed short int quant_table_5_to_12[4096l];
// quant_table_5_to_14
// file qTable.h line 179
static signed short int quant_table_5_to_14[4096l];
// quant_table_5_to_16
// file qTable.h line 180
static signed short int quant_table_5_to_16[4096l];
// quant_table_5_to_18
// file qTable.h line 181
static signed short int quant_table_5_to_18[4096l];
// quant_table_5_to_20
// file qTable.h line 182
static signed short int quant_table_5_to_20[4096l];
// quant_table_5_to_22
// file qTable.h line 183
static signed short int quant_table_5_to_22[4096l];
// quant_table_5_to_24
// file qTable.h line 184
static signed short int quant_table_5_to_24[4096l];
// quant_table_5_to_26
// file qTable.h line 185
static signed short int quant_table_5_to_26[4096l];
// quant_table_5_to_28
// file qTable.h line 186
static signed short int quant_table_5_to_28[4096l];
// quant_table_5_to_30
// file qTable.h line 187
static signed short int quant_table_5_to_30[4096l];
// quant_table_5_to_32
// file qTable.h line 188
static signed short int quant_table_5_to_32[4096l];
// quant_table_5_to_34
// file qTable.h line 189
static signed short int quant_table_5_to_34[4096l];
// quant_table_5_to_36
// file qTable.h line 190
static signed short int quant_table_5_to_36[4096l];
// quant_table_5_to_38
// file qTable.h line 191
static signed short int quant_table_5_to_38[4096l];
// quant_table_5_to_40
// file qTable.h line 192
static signed short int quant_table_5_to_40[4096l];
// quant_table_5_to_42
// file qTable.h line 193
static signed short int quant_table_5_to_42[4096l];
// quant_table_5_to_44
// file qTable.h line 194
static signed short int quant_table_5_to_44[4096l];
// quant_table_5_to_46
// file qTable.h line 195
static signed short int quant_table_5_to_46[4096l];
// quant_table_5_to_48
// file qTable.h line 196
static signed short int quant_table_5_to_48[4096l];
// quant_table_5_to_50
// file qTable.h line 197
static signed short int quant_table_5_to_50[4096l];
// quant_table_5_to_52
// file qTable.h line 198
static signed short int quant_table_5_to_52[4096l];
// quant_table_5_to_54
// file qTable.h line 199
static signed short int quant_table_5_to_54[4096l];
// quant_table_5_to_56
// file qTable.h line 200
static signed short int quant_table_5_to_56[4096l];
// quant_table_5_to_58
// file qTable.h line 201
static signed short int quant_table_5_to_58[4096l];
// quant_table_5_to_6
// file qTable.h line 174
static signed short int quant_table_5_to_6[4096l];
// quant_table_5_to_60
// file qTable.h line 202
static signed short int quant_table_5_to_60[4096l];
// quant_table_5_to_62
// file qTable.h line 203
static signed short int quant_table_5_to_62[4096l];
// quant_table_5_to_64
// file qTable.h line 204
static signed short int quant_table_5_to_64[4096l];
// quant_table_5_to_7
// file qTable.h line 175
static signed short int quant_table_5_to_7[4096l];
// quant_table_5_to_72
// file qTable.h line 205
static signed short int quant_table_5_to_72[4096l];
// quant_table_5_to_8
// file qTable.h line 176
static signed short int quant_table_5_to_8[4096l];
// quant_table_5_to_80
// file qTable.h line 206
static signed short int quant_table_5_to_80[4096l];
// quant_table_5_to_88
// file qTable.h line 207
static signed short int quant_table_5_to_88[4096l];
// quant_table_5_to_96
// file qTable.h line 208
static signed short int quant_table_5_to_96[4096l];
// quant_table_60_to_104
// file qTable.h line 847
static signed short int quant_table_60_to_104[4096l];
// quant_table_60_to_112
// file qTable.h line 848
static signed short int quant_table_60_to_112[4096l];
// quant_table_60_to_62
// file qTable.h line 841
static signed short int quant_table_60_to_62[4096l];
// quant_table_60_to_64
// file qTable.h line 842
static signed short int quant_table_60_to_64[4096l];
// quant_table_60_to_72
// file qTable.h line 843
static signed short int quant_table_60_to_72[4096l];
// quant_table_60_to_80
// file qTable.h line 844
static signed short int quant_table_60_to_80[4096l];
// quant_table_60_to_88
// file qTable.h line 845
static signed short int quant_table_60_to_88[4096l];
// quant_table_60_to_96
// file qTable.h line 846
static signed short int quant_table_60_to_96[4096l];
// quant_table_62_to_104
// file qTable.h line 854
static signed short int quant_table_62_to_104[4096l];
// quant_table_62_to_112
// file qTable.h line 855
static signed short int quant_table_62_to_112[4096l];
// quant_table_62_to_64
// file qTable.h line 849
static signed short int quant_table_62_to_64[4096l];
// quant_table_62_to_72
// file qTable.h line 850
static signed short int quant_table_62_to_72[4096l];
// quant_table_62_to_80
// file qTable.h line 851
static signed short int quant_table_62_to_80[4096l];
// quant_table_62_to_88
// file qTable.h line 852
static signed short int quant_table_62_to_88[4096l];
// quant_table_62_to_96
// file qTable.h line 853
static signed short int quant_table_62_to_96[4096l];
// quant_table_64_to_104
// file qTable.h line 860
static signed short int quant_table_64_to_104[4096l];
// quant_table_64_to_112
// file qTable.h line 861
static signed short int quant_table_64_to_112[4096l];
// quant_table_64_to_72
// file qTable.h line 856
static signed short int quant_table_64_to_72[4096l];
// quant_table_64_to_80
// file qTable.h line 857
static signed short int quant_table_64_to_80[4096l];
// quant_table_64_to_88
// file qTable.h line 858
static signed short int quant_table_64_to_88[4096l];
// quant_table_64_to_96
// file qTable.h line 859
static signed short int quant_table_64_to_96[4096l];
// quant_table_6_to_10
// file qTable.h line 213
static signed short int quant_table_6_to_10[4096l];
// quant_table_6_to_104
// file qTable.h line 245
static signed short int quant_table_6_to_104[4096l];
// quant_table_6_to_112
// file qTable.h line 246
static signed short int quant_table_6_to_112[4096l];
// quant_table_6_to_12
// file qTable.h line 214
static signed short int quant_table_6_to_12[4096l];
// quant_table_6_to_14
// file qTable.h line 215
static signed short int quant_table_6_to_14[4096l];
// quant_table_6_to_16
// file qTable.h line 216
static signed short int quant_table_6_to_16[4096l];
// quant_table_6_to_18
// file qTable.h line 217
static signed short int quant_table_6_to_18[4096l];
// quant_table_6_to_20
// file qTable.h line 218
static signed short int quant_table_6_to_20[4096l];
// quant_table_6_to_22
// file qTable.h line 219
static signed short int quant_table_6_to_22[4096l];
// quant_table_6_to_24
// file qTable.h line 220
static signed short int quant_table_6_to_24[4096l];
// quant_table_6_to_26
// file qTable.h line 221
static signed short int quant_table_6_to_26[4096l];
// quant_table_6_to_28
// file qTable.h line 222
static signed short int quant_table_6_to_28[4096l];
// quant_table_6_to_30
// file qTable.h line 223
static signed short int quant_table_6_to_30[4096l];
// quant_table_6_to_32
// file qTable.h line 224
static signed short int quant_table_6_to_32[4096l];
// quant_table_6_to_34
// file qTable.h line 225
static signed short int quant_table_6_to_34[4096l];
// quant_table_6_to_36
// file qTable.h line 226
static signed short int quant_table_6_to_36[4096l];
// quant_table_6_to_38
// file qTable.h line 227
static signed short int quant_table_6_to_38[4096l];
// quant_table_6_to_40
// file qTable.h line 228
static signed short int quant_table_6_to_40[4096l];
// quant_table_6_to_42
// file qTable.h line 229
static signed short int quant_table_6_to_42[4096l];
// quant_table_6_to_44
// file qTable.h line 230
static signed short int quant_table_6_to_44[4096l];
// quant_table_6_to_46
// file qTable.h line 231
static signed short int quant_table_6_to_46[4096l];
// quant_table_6_to_48
// file qTable.h line 232
static signed short int quant_table_6_to_48[4096l];
// quant_table_6_to_50
// file qTable.h line 233
static signed short int quant_table_6_to_50[4096l];
// quant_table_6_to_52
// file qTable.h line 234
static signed short int quant_table_6_to_52[4096l];
// quant_table_6_to_54
// file qTable.h line 235
static signed short int quant_table_6_to_54[4096l];
// quant_table_6_to_56
// file qTable.h line 236
static signed short int quant_table_6_to_56[4096l];
// quant_table_6_to_58
// file qTable.h line 237
static signed short int quant_table_6_to_58[4096l];
// quant_table_6_to_60
// file qTable.h line 238
static signed short int quant_table_6_to_60[4096l];
// quant_table_6_to_62
// file qTable.h line 239
static signed short int quant_table_6_to_62[4096l];
// quant_table_6_to_64
// file qTable.h line 240
static signed short int quant_table_6_to_64[4096l];
// quant_table_6_to_7
// file qTable.h line 211
static signed short int quant_table_6_to_7[4096l];
// quant_table_6_to_72
// file qTable.h line 241
static signed short int quant_table_6_to_72[4096l];
// quant_table_6_to_8
// file qTable.h line 212
static signed short int quant_table_6_to_8[4096l];
// quant_table_6_to_80
// file qTable.h line 242
static signed short int quant_table_6_to_80[4096l];
// quant_table_6_to_88
// file qTable.h line 243
static signed short int quant_table_6_to_88[4096l];
// quant_table_6_to_96
// file qTable.h line 244
static signed short int quant_table_6_to_96[4096l];
// quant_table_72_to_104
// file qTable.h line 865
static signed short int quant_table_72_to_104[4096l];
// quant_table_72_to_112
// file qTable.h line 866
static signed short int quant_table_72_to_112[4096l];
// quant_table_72_to_80
// file qTable.h line 862
static signed short int quant_table_72_to_80[4096l];
// quant_table_72_to_88
// file qTable.h line 863
static signed short int quant_table_72_to_88[4096l];
// quant_table_72_to_96
// file qTable.h line 864
static signed short int quant_table_72_to_96[4096l];
// quant_table_7_to_10
// file qTable.h line 248
static signed short int quant_table_7_to_10[4096l];
// quant_table_7_to_104
// file qTable.h line 280
static signed short int quant_table_7_to_104[4096l];
// quant_table_7_to_112
// file qTable.h line 281
static signed short int quant_table_7_to_112[4096l];
// quant_table_7_to_12
// file qTable.h line 249
static signed short int quant_table_7_to_12[4096l];
// quant_table_7_to_14
// file qTable.h line 250
static signed short int quant_table_7_to_14[4096l];
// quant_table_7_to_16
// file qTable.h line 251
static signed short int quant_table_7_to_16[4096l];
// quant_table_7_to_18
// file qTable.h line 252
static signed short int quant_table_7_to_18[4096l];
// quant_table_7_to_20
// file qTable.h line 253
static signed short int quant_table_7_to_20[4096l];
// quant_table_7_to_22
// file qTable.h line 254
static signed short int quant_table_7_to_22[4096l];
// quant_table_7_to_24
// file qTable.h line 255
static signed short int quant_table_7_to_24[4096l];
// quant_table_7_to_26
// file qTable.h line 256
static signed short int quant_table_7_to_26[4096l];
// quant_table_7_to_28
// file qTable.h line 257
static signed short int quant_table_7_to_28[4096l];
// quant_table_7_to_30
// file qTable.h line 258
static signed short int quant_table_7_to_30[4096l];
// quant_table_7_to_32
// file qTable.h line 259
static signed short int quant_table_7_to_32[4096l];
// quant_table_7_to_34
// file qTable.h line 260
static signed short int quant_table_7_to_34[4096l];
// quant_table_7_to_36
// file qTable.h line 261
static signed short int quant_table_7_to_36[4096l];
// quant_table_7_to_38
// file qTable.h line 262
static signed short int quant_table_7_to_38[4096l];
// quant_table_7_to_40
// file qTable.h line 263
static signed short int quant_table_7_to_40[4096l];
// quant_table_7_to_42
// file qTable.h line 264
static signed short int quant_table_7_to_42[4096l];
// quant_table_7_to_44
// file qTable.h line 265
static signed short int quant_table_7_to_44[4096l];
// quant_table_7_to_46
// file qTable.h line 266
static signed short int quant_table_7_to_46[4096l];
// quant_table_7_to_48
// file qTable.h line 267
static signed short int quant_table_7_to_48[4096l];
// quant_table_7_to_50
// file qTable.h line 268
static signed short int quant_table_7_to_50[4096l];
// quant_table_7_to_52
// file qTable.h line 269
static signed short int quant_table_7_to_52[4096l];
// quant_table_7_to_54
// file qTable.h line 270
static signed short int quant_table_7_to_54[4096l];
// quant_table_7_to_56
// file qTable.h line 271
static signed short int quant_table_7_to_56[4096l];
// quant_table_7_to_58
// file qTable.h line 272
static signed short int quant_table_7_to_58[4096l];
// quant_table_7_to_60
// file qTable.h line 273
static signed short int quant_table_7_to_60[4096l];
// quant_table_7_to_62
// file qTable.h line 274
static signed short int quant_table_7_to_62[4096l];
// quant_table_7_to_64
// file qTable.h line 275
static signed short int quant_table_7_to_64[4096l];
// quant_table_7_to_72
// file qTable.h line 276
static signed short int quant_table_7_to_72[4096l];
// quant_table_7_to_8
// file qTable.h line 247
static signed short int quant_table_7_to_8[4096l];
// quant_table_7_to_80
// file qTable.h line 277
static signed short int quant_table_7_to_80[4096l];
// quant_table_7_to_88
// file qTable.h line 278
static signed short int quant_table_7_to_88[4096l];
// quant_table_7_to_96
// file qTable.h line 279
static signed short int quant_table_7_to_96[4096l];
// quant_table_80_to_104
// file qTable.h line 869
static signed short int quant_table_80_to_104[4096l];
// quant_table_80_to_112
// file qTable.h line 870
static signed short int quant_table_80_to_112[4096l];
// quant_table_80_to_88
// file qTable.h line 867
static signed short int quant_table_80_to_88[4096l];
// quant_table_80_to_96
// file qTable.h line 868
static signed short int quant_table_80_to_96[4096l];
// quant_table_88_to_104
// file qTable.h line 872
static signed short int quant_table_88_to_104[4096l];
// quant_table_88_to_112
// file qTable.h line 873
static signed short int quant_table_88_to_112[4096l];
// quant_table_88_to_96
// file qTable.h line 871
static signed short int quant_table_88_to_96[4096l];
// quant_table_8_to_10
// file qTable.h line 282
static signed short int quant_table_8_to_10[4096l];
// quant_table_8_to_104
// file qTable.h line 314
static signed short int quant_table_8_to_104[4096l];
// quant_table_8_to_112
// file qTable.h line 315
static signed short int quant_table_8_to_112[4096l];
// quant_table_8_to_12
// file qTable.h line 283
static signed short int quant_table_8_to_12[4096l];
// quant_table_8_to_14
// file qTable.h line 284
static signed short int quant_table_8_to_14[4096l];
// quant_table_8_to_16
// file qTable.h line 285
static signed short int quant_table_8_to_16[4096l];
// quant_table_8_to_18
// file qTable.h line 286
static signed short int quant_table_8_to_18[4096l];
// quant_table_8_to_20
// file qTable.h line 287
static signed short int quant_table_8_to_20[4096l];
// quant_table_8_to_22
// file qTable.h line 288
static signed short int quant_table_8_to_22[4096l];
// quant_table_8_to_24
// file qTable.h line 289
static signed short int quant_table_8_to_24[4096l];
// quant_table_8_to_26
// file qTable.h line 290
static signed short int quant_table_8_to_26[4096l];
// quant_table_8_to_28
// file qTable.h line 291
static signed short int quant_table_8_to_28[4096l];
// quant_table_8_to_30
// file qTable.h line 292
static signed short int quant_table_8_to_30[4096l];
// quant_table_8_to_32
// file qTable.h line 293
static signed short int quant_table_8_to_32[4096l];
// quant_table_8_to_34
// file qTable.h line 294
static signed short int quant_table_8_to_34[4096l];
// quant_table_8_to_36
// file qTable.h line 295
static signed short int quant_table_8_to_36[4096l];
// quant_table_8_to_38
// file qTable.h line 296
static signed short int quant_table_8_to_38[4096l];
// quant_table_8_to_40
// file qTable.h line 297
static signed short int quant_table_8_to_40[4096l];
// quant_table_8_to_42
// file qTable.h line 298
static signed short int quant_table_8_to_42[4096l];
// quant_table_8_to_44
// file qTable.h line 299
static signed short int quant_table_8_to_44[4096l];
// quant_table_8_to_46
// file qTable.h line 300
static signed short int quant_table_8_to_46[4096l];
// quant_table_8_to_48
// file qTable.h line 301
static signed short int quant_table_8_to_48[4096l];
// quant_table_8_to_50
// file qTable.h line 302
static signed short int quant_table_8_to_50[4096l];
// quant_table_8_to_52
// file qTable.h line 303
static signed short int quant_table_8_to_52[4096l];
// quant_table_8_to_54
// file qTable.h line 304
static signed short int quant_table_8_to_54[4096l];
// quant_table_8_to_56
// file qTable.h line 305
static signed short int quant_table_8_to_56[4096l];
// quant_table_8_to_58
// file qTable.h line 306
static signed short int quant_table_8_to_58[4096l];
// quant_table_8_to_60
// file qTable.h line 307
static signed short int quant_table_8_to_60[4096l];
// quant_table_8_to_62
// file qTable.h line 308
static signed short int quant_table_8_to_62[4096l];
// quant_table_8_to_64
// file qTable.h line 309
static signed short int quant_table_8_to_64[4096l];
// quant_table_8_to_72
// file qTable.h line 310
static signed short int quant_table_8_to_72[4096l];
// quant_table_8_to_80
// file qTable.h line 311
static signed short int quant_table_8_to_80[4096l];
// quant_table_8_to_88
// file qTable.h line 312
static signed short int quant_table_8_to_88[4096l];
// quant_table_8_to_96
// file qTable.h line 313
static signed short int quant_table_8_to_96[4096l];
// quant_table_96_to_104
// file qTable.h line 874
static signed short int quant_table_96_to_104[4096l];
// quant_table_96_to_112
// file qTable.h line 875
static signed short int quant_table_96_to_112[4096l];
// quant_table_id
// file requant.c line 161
static signed short int *quant_table_id;
// quant_table_id_data
// file requant.c line 160
static signed short int quant_table_id_data[4096l];
// quant_table_id
// file requant.c line 161
static signed short int *quant_table_id = &quant_table_id_data[(signed long int)2048];
// quant_tables
// file qTable.h line 877
static signed short int *quant_tables[42l][42l];
// quant_tables
// file qTable.h line 877
static signed short int *quant_tables[42l][42l] = { { ((signed short int *)NULL), &quant_table_1_to_2[(signed long int)2048],
    &quant_table_1_to_3[(signed long int)2048],
    &quant_table_1_to_4[(signed long int)2048],
    &quant_table_1_to_5[(signed long int)2048],
    &quant_table_1_to_6[(signed long int)2048],
    &quant_table_1_to_7[(signed long int)2048],
    &quant_table_1_to_8[(signed long int)2048],
    &quant_table_1_to_10[(signed long int)2048],
    &quant_table_1_to_12[(signed long int)2048],
    &quant_table_1_to_14[(signed long int)2048],
    &quant_table_1_to_16[(signed long int)2048],
    &quant_table_1_to_18[(signed long int)2048],
    &quant_table_1_to_20[(signed long int)2048],
    &quant_table_1_to_22[(signed long int)2048],
    &quant_table_1_to_24[(signed long int)2048],
    &quant_table_1_to_26[(signed long int)2048],
    &quant_table_1_to_28[(signed long int)2048],
    &quant_table_1_to_30[(signed long int)2048],
    &quant_table_1_to_32[(signed long int)2048],
    &quant_table_1_to_34[(signed long int)2048],
    &quant_table_1_to_36[(signed long int)2048],
    &quant_table_1_to_38[(signed long int)2048],
    &quant_table_1_to_40[(signed long int)2048],
    &quant_table_1_to_42[(signed long int)2048],
    &quant_table_1_to_44[(signed long int)2048],
    &quant_table_1_to_46[(signed long int)2048],
    &quant_table_1_to_48[(signed long int)2048],
    &quant_table_1_to_50[(signed long int)2048],
    &quant_table_1_to_52[(signed long int)2048],
    &quant_table_1_to_54[(signed long int)2048],
    &quant_table_1_to_56[(signed long int)2048],
    &quant_table_1_to_58[(signed long int)2048],
    &quant_table_1_to_60[(signed long int)2048],
    &quant_table_1_to_62[(signed long int)2048],
    &quant_table_1_to_64[(signed long int)2048],
    &quant_table_1_to_72[(signed long int)2048],
    &quant_table_1_to_80[(signed long int)2048],
    &quant_table_1_to_88[(signed long int)2048],
    &quant_table_1_to_96[(signed long int)2048],
    &quant_table_1_to_104[(signed long int)2048],
    &quant_table_1_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_2_to_3[(signed long int)2048],
    &quant_table_2_to_4[(signed long int)2048],
    &quant_table_2_to_5[(signed long int)2048],
    &quant_table_2_to_6[(signed long int)2048],
    &quant_table_2_to_7[(signed long int)2048],
    &quant_table_2_to_8[(signed long int)2048],
    &quant_table_2_to_10[(signed long int)2048],
    &quant_table_2_to_12[(signed long int)2048],
    &quant_table_2_to_14[(signed long int)2048],
    &quant_table_2_to_16[(signed long int)2048],
    &quant_table_2_to_18[(signed long int)2048],
    &quant_table_2_to_20[(signed long int)2048],
    &quant_table_2_to_22[(signed long int)2048],
    &quant_table_2_to_24[(signed long int)2048],
    &quant_table_2_to_26[(signed long int)2048],
    &quant_table_2_to_28[(signed long int)2048],
    &quant_table_2_to_30[(signed long int)2048],
    &quant_table_2_to_32[(signed long int)2048],
    &quant_table_2_to_34[(signed long int)2048],
    &quant_table_2_to_36[(signed long int)2048],
    &quant_table_2_to_38[(signed long int)2048],
    &quant_table_2_to_40[(signed long int)2048],
    &quant_table_2_to_42[(signed long int)2048],
    &quant_table_2_to_44[(signed long int)2048],
    &quant_table_2_to_46[(signed long int)2048],
    &quant_table_2_to_48[(signed long int)2048],
    &quant_table_2_to_50[(signed long int)2048],
    &quant_table_2_to_52[(signed long int)2048],
    &quant_table_2_to_54[(signed long int)2048],
    &quant_table_2_to_56[(signed long int)2048],
    &quant_table_2_to_58[(signed long int)2048],
    &quant_table_2_to_60[(signed long int)2048],
    &quant_table_2_to_62[(signed long int)2048],
    &quant_table_2_to_64[(signed long int)2048],
    &quant_table_2_to_72[(signed long int)2048],
    &quant_table_2_to_80[(signed long int)2048],
    &quant_table_2_to_88[(signed long int)2048],
    &quant_table_2_to_96[(signed long int)2048],
    &quant_table_2_to_104[(signed long int)2048],
    &quant_table_2_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_3_to_4[(signed long int)2048],
    &quant_table_3_to_5[(signed long int)2048],
    &quant_table_3_to_6[(signed long int)2048],
    &quant_table_3_to_7[(signed long int)2048],
    &quant_table_3_to_8[(signed long int)2048],
    &quant_table_3_to_10[(signed long int)2048],
    &quant_table_3_to_12[(signed long int)2048],
    &quant_table_3_to_14[(signed long int)2048],
    &quant_table_3_to_16[(signed long int)2048],
    &quant_table_3_to_18[(signed long int)2048],
    &quant_table_3_to_20[(signed long int)2048],
    &quant_table_3_to_22[(signed long int)2048],
    &quant_table_3_to_24[(signed long int)2048],
    &quant_table_3_to_26[(signed long int)2048],
    &quant_table_3_to_28[(signed long int)2048],
    &quant_table_3_to_30[(signed long int)2048],
    &quant_table_3_to_32[(signed long int)2048],
    &quant_table_3_to_34[(signed long int)2048],
    &quant_table_3_to_36[(signed long int)2048],
    &quant_table_3_to_38[(signed long int)2048],
    &quant_table_3_to_40[(signed long int)2048],
    &quant_table_3_to_42[(signed long int)2048],
    &quant_table_3_to_44[(signed long int)2048],
    &quant_table_3_to_46[(signed long int)2048],
    &quant_table_3_to_48[(signed long int)2048],
    &quant_table_3_to_50[(signed long int)2048],
    &quant_table_3_to_52[(signed long int)2048],
    &quant_table_3_to_54[(signed long int)2048],
    &quant_table_3_to_56[(signed long int)2048],
    &quant_table_3_to_58[(signed long int)2048],
    &quant_table_3_to_60[(signed long int)2048],
    &quant_table_3_to_62[(signed long int)2048],
    &quant_table_3_to_64[(signed long int)2048],
    &quant_table_3_to_72[(signed long int)2048],
    &quant_table_3_to_80[(signed long int)2048],
    &quant_table_3_to_88[(signed long int)2048],
    &quant_table_3_to_96[(signed long int)2048],
    &quant_table_3_to_104[(signed long int)2048],
    &quant_table_3_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_4_to_5[(signed long int)2048],
    &quant_table_4_to_6[(signed long int)2048],
    &quant_table_4_to_7[(signed long int)2048],
    &quant_table_4_to_8[(signed long int)2048],
    &quant_table_4_to_10[(signed long int)2048],
    &quant_table_4_to_12[(signed long int)2048],
    &quant_table_4_to_14[(signed long int)2048],
    &quant_table_4_to_16[(signed long int)2048],
    &quant_table_4_to_18[(signed long int)2048],
    &quant_table_4_to_20[(signed long int)2048],
    &quant_table_4_to_22[(signed long int)2048],
    &quant_table_4_to_24[(signed long int)2048],
    &quant_table_4_to_26[(signed long int)2048],
    &quant_table_4_to_28[(signed long int)2048],
    &quant_table_4_to_30[(signed long int)2048],
    &quant_table_4_to_32[(signed long int)2048],
    &quant_table_4_to_34[(signed long int)2048],
    &quant_table_4_to_36[(signed long int)2048],
    &quant_table_4_to_38[(signed long int)2048],
    &quant_table_4_to_40[(signed long int)2048],
    &quant_table_4_to_42[(signed long int)2048],
    &quant_table_4_to_44[(signed long int)2048],
    &quant_table_4_to_46[(signed long int)2048],
    &quant_table_4_to_48[(signed long int)2048],
    &quant_table_4_to_50[(signed long int)2048],
    &quant_table_4_to_52[(signed long int)2048],
    &quant_table_4_to_54[(signed long int)2048],
    &quant_table_4_to_56[(signed long int)2048],
    &quant_table_4_to_58[(signed long int)2048],
    &quant_table_4_to_60[(signed long int)2048],
    &quant_table_4_to_62[(signed long int)2048],
    &quant_table_4_to_64[(signed long int)2048],
    &quant_table_4_to_72[(signed long int)2048],
    &quant_table_4_to_80[(signed long int)2048],
    &quant_table_4_to_88[(signed long int)2048],
    &quant_table_4_to_96[(signed long int)2048],
    &quant_table_4_to_104[(signed long int)2048],
    &quant_table_4_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_5_to_6[(signed long int)2048],
    &quant_table_5_to_7[(signed long int)2048],
    &quant_table_5_to_8[(signed long int)2048],
    &quant_table_5_to_10[(signed long int)2048],
    &quant_table_5_to_12[(signed long int)2048],
    &quant_table_5_to_14[(signed long int)2048],
    &quant_table_5_to_16[(signed long int)2048],
    &quant_table_5_to_18[(signed long int)2048],
    &quant_table_5_to_20[(signed long int)2048],
    &quant_table_5_to_22[(signed long int)2048],
    &quant_table_5_to_24[(signed long int)2048],
    &quant_table_5_to_26[(signed long int)2048],
    &quant_table_5_to_28[(signed long int)2048],
    &quant_table_5_to_30[(signed long int)2048],
    &quant_table_5_to_32[(signed long int)2048],
    &quant_table_5_to_34[(signed long int)2048],
    &quant_table_5_to_36[(signed long int)2048],
    &quant_table_5_to_38[(signed long int)2048],
    &quant_table_5_to_40[(signed long int)2048],
    &quant_table_5_to_42[(signed long int)2048],
    &quant_table_5_to_44[(signed long int)2048],
    &quant_table_5_to_46[(signed long int)2048],
    &quant_table_5_to_48[(signed long int)2048],
    &quant_table_5_to_50[(signed long int)2048],
    &quant_table_5_to_52[(signed long int)2048],
    &quant_table_5_to_54[(signed long int)2048],
    &quant_table_5_to_56[(signed long int)2048],
    &quant_table_5_to_58[(signed long int)2048],
    &quant_table_5_to_60[(signed long int)2048],
    &quant_table_5_to_62[(signed long int)2048],
    &quant_table_5_to_64[(signed long int)2048],
    &quant_table_5_to_72[(signed long int)2048],
    &quant_table_5_to_80[(signed long int)2048],
    &quant_table_5_to_88[(signed long int)2048],
    &quant_table_5_to_96[(signed long int)2048],
    &quant_table_5_to_104[(signed long int)2048],
    &quant_table_5_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_6_to_7[(signed long int)2048],
    &quant_table_6_to_8[(signed long int)2048],
    &quant_table_6_to_10[(signed long int)2048],
    &quant_table_6_to_12[(signed long int)2048],
    &quant_table_6_to_14[(signed long int)2048],
    &quant_table_6_to_16[(signed long int)2048],
    &quant_table_6_to_18[(signed long int)2048],
    &quant_table_6_to_20[(signed long int)2048],
    &quant_table_6_to_22[(signed long int)2048],
    &quant_table_6_to_24[(signed long int)2048],
    &quant_table_6_to_26[(signed long int)2048],
    &quant_table_6_to_28[(signed long int)2048],
    &quant_table_6_to_30[(signed long int)2048],
    &quant_table_6_to_32[(signed long int)2048],
    &quant_table_6_to_34[(signed long int)2048],
    &quant_table_6_to_36[(signed long int)2048],
    &quant_table_6_to_38[(signed long int)2048],
    &quant_table_6_to_40[(signed long int)2048],
    &quant_table_6_to_42[(signed long int)2048],
    &quant_table_6_to_44[(signed long int)2048],
    &quant_table_6_to_46[(signed long int)2048],
    &quant_table_6_to_48[(signed long int)2048],
    &quant_table_6_to_50[(signed long int)2048],
    &quant_table_6_to_52[(signed long int)2048],
    &quant_table_6_to_54[(signed long int)2048],
    &quant_table_6_to_56[(signed long int)2048],
    &quant_table_6_to_58[(signed long int)2048],
    &quant_table_6_to_60[(signed long int)2048],
    &quant_table_6_to_62[(signed long int)2048],
    &quant_table_6_to_64[(signed long int)2048],
    &quant_table_6_to_72[(signed long int)2048],
    &quant_table_6_to_80[(signed long int)2048],
    &quant_table_6_to_88[(signed long int)2048],
    &quant_table_6_to_96[(signed long int)2048],
    &quant_table_6_to_104[(signed long int)2048],
    &quant_table_6_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_7_to_8[(signed long int)2048],
    &quant_table_7_to_10[(signed long int)2048],
    &quant_table_7_to_12[(signed long int)2048],
    &quant_table_7_to_14[(signed long int)2048],
    &quant_table_7_to_16[(signed long int)2048],
    &quant_table_7_to_18[(signed long int)2048],
    &quant_table_7_to_20[(signed long int)2048],
    &quant_table_7_to_22[(signed long int)2048],
    &quant_table_7_to_24[(signed long int)2048],
    &quant_table_7_to_26[(signed long int)2048],
    &quant_table_7_to_28[(signed long int)2048],
    &quant_table_7_to_30[(signed long int)2048],
    &quant_table_7_to_32[(signed long int)2048],
    &quant_table_7_to_34[(signed long int)2048],
    &quant_table_7_to_36[(signed long int)2048],
    &quant_table_7_to_38[(signed long int)2048],
    &quant_table_7_to_40[(signed long int)2048],
    &quant_table_7_to_42[(signed long int)2048],
    &quant_table_7_to_44[(signed long int)2048],
    &quant_table_7_to_46[(signed long int)2048],
    &quant_table_7_to_48[(signed long int)2048],
    &quant_table_7_to_50[(signed long int)2048],
    &quant_table_7_to_52[(signed long int)2048],
    &quant_table_7_to_54[(signed long int)2048],
    &quant_table_7_to_56[(signed long int)2048],
    &quant_table_7_to_58[(signed long int)2048],
    &quant_table_7_to_60[(signed long int)2048],
    &quant_table_7_to_62[(signed long int)2048],
    &quant_table_7_to_64[(signed long int)2048],
    &quant_table_7_to_72[(signed long int)2048],
    &quant_table_7_to_80[(signed long int)2048],
    &quant_table_7_to_88[(signed long int)2048],
    &quant_table_7_to_96[(signed long int)2048],
    &quant_table_7_to_104[(signed long int)2048],
    &quant_table_7_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_8_to_10[(signed long int)2048],
    &quant_table_8_to_12[(signed long int)2048],
    &quant_table_8_to_14[(signed long int)2048],
    &quant_table_8_to_16[(signed long int)2048],
    &quant_table_8_to_18[(signed long int)2048],
    &quant_table_8_to_20[(signed long int)2048],
    &quant_table_8_to_22[(signed long int)2048],
    &quant_table_8_to_24[(signed long int)2048],
    &quant_table_8_to_26[(signed long int)2048],
    &quant_table_8_to_28[(signed long int)2048],
    &quant_table_8_to_30[(signed long int)2048],
    &quant_table_8_to_32[(signed long int)2048],
    &quant_table_8_to_34[(signed long int)2048],
    &quant_table_8_to_36[(signed long int)2048],
    &quant_table_8_to_38[(signed long int)2048],
    &quant_table_8_to_40[(signed long int)2048],
    &quant_table_8_to_42[(signed long int)2048],
    &quant_table_8_to_44[(signed long int)2048],
    &quant_table_8_to_46[(signed long int)2048],
    &quant_table_8_to_48[(signed long int)2048],
    &quant_table_8_to_50[(signed long int)2048],
    &quant_table_8_to_52[(signed long int)2048],
    &quant_table_8_to_54[(signed long int)2048],
    &quant_table_8_to_56[(signed long int)2048],
    &quant_table_8_to_58[(signed long int)2048],
    &quant_table_8_to_60[(signed long int)2048],
    &quant_table_8_to_62[(signed long int)2048],
    &quant_table_8_to_64[(signed long int)2048],
    &quant_table_8_to_72[(signed long int)2048],
    &quant_table_8_to_80[(signed long int)2048],
    &quant_table_8_to_88[(signed long int)2048],
    &quant_table_8_to_96[(signed long int)2048],
    &quant_table_8_to_104[(signed long int)2048],
    &quant_table_8_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_10_to_12[(signed long int)2048],
    &quant_table_10_to_14[(signed long int)2048],
    &quant_table_10_to_16[(signed long int)2048],
    &quant_table_10_to_18[(signed long int)2048],
    &quant_table_10_to_20[(signed long int)2048],
    &quant_table_10_to_22[(signed long int)2048],
    &quant_table_10_to_24[(signed long int)2048],
    &quant_table_10_to_26[(signed long int)2048],
    &quant_table_10_to_28[(signed long int)2048],
    &quant_table_10_to_30[(signed long int)2048],
    &quant_table_10_to_32[(signed long int)2048],
    &quant_table_10_to_34[(signed long int)2048],
    &quant_table_10_to_36[(signed long int)2048],
    &quant_table_10_to_38[(signed long int)2048],
    &quant_table_10_to_40[(signed long int)2048],
    &quant_table_10_to_42[(signed long int)2048],
    &quant_table_10_to_44[(signed long int)2048],
    &quant_table_10_to_46[(signed long int)2048],
    &quant_table_10_to_48[(signed long int)2048],
    &quant_table_10_to_50[(signed long int)2048],
    &quant_table_10_to_52[(signed long int)2048],
    &quant_table_10_to_54[(signed long int)2048],
    &quant_table_10_to_56[(signed long int)2048],
    &quant_table_10_to_58[(signed long int)2048],
    &quant_table_10_to_60[(signed long int)2048],
    &quant_table_10_to_62[(signed long int)2048],
    &quant_table_10_to_64[(signed long int)2048],
    &quant_table_10_to_72[(signed long int)2048],
    &quant_table_10_to_80[(signed long int)2048],
    &quant_table_10_to_88[(signed long int)2048],
    &quant_table_10_to_96[(signed long int)2048],
    &quant_table_10_to_104[(signed long int)2048],
    &quant_table_10_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_12_to_14[(signed long int)2048],
    &quant_table_12_to_16[(signed long int)2048],
    &quant_table_12_to_18[(signed long int)2048],
    &quant_table_12_to_20[(signed long int)2048],
    &quant_table_12_to_22[(signed long int)2048],
    &quant_table_12_to_24[(signed long int)2048],
    &quant_table_12_to_26[(signed long int)2048],
    &quant_table_12_to_28[(signed long int)2048],
    &quant_table_12_to_30[(signed long int)2048],
    &quant_table_12_to_32[(signed long int)2048],
    &quant_table_12_to_34[(signed long int)2048],
    &quant_table_12_to_36[(signed long int)2048],
    &quant_table_12_to_38[(signed long int)2048],
    &quant_table_12_to_40[(signed long int)2048],
    &quant_table_12_to_42[(signed long int)2048],
    &quant_table_12_to_44[(signed long int)2048],
    &quant_table_12_to_46[(signed long int)2048],
    &quant_table_12_to_48[(signed long int)2048],
    &quant_table_12_to_50[(signed long int)2048],
    &quant_table_12_to_52[(signed long int)2048],
    &quant_table_12_to_54[(signed long int)2048],
    &quant_table_12_to_56[(signed long int)2048],
    &quant_table_12_to_58[(signed long int)2048],
    &quant_table_12_to_60[(signed long int)2048],
    &quant_table_12_to_62[(signed long int)2048],
    &quant_table_12_to_64[(signed long int)2048],
    &quant_table_12_to_72[(signed long int)2048],
    &quant_table_12_to_80[(signed long int)2048],
    &quant_table_12_to_88[(signed long int)2048],
    &quant_table_12_to_96[(signed long int)2048],
    &quant_table_12_to_104[(signed long int)2048],
    &quant_table_12_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_14_to_16[(signed long int)2048],
    &quant_table_14_to_18[(signed long int)2048],
    &quant_table_14_to_20[(signed long int)2048],
    &quant_table_14_to_22[(signed long int)2048],
    &quant_table_14_to_24[(signed long int)2048],
    &quant_table_14_to_26[(signed long int)2048],
    &quant_table_14_to_28[(signed long int)2048],
    &quant_table_14_to_30[(signed long int)2048],
    &quant_table_14_to_32[(signed long int)2048],
    &quant_table_14_to_34[(signed long int)2048],
    &quant_table_14_to_36[(signed long int)2048],
    &quant_table_14_to_38[(signed long int)2048],
    &quant_table_14_to_40[(signed long int)2048],
    &quant_table_14_to_42[(signed long int)2048],
    &quant_table_14_to_44[(signed long int)2048],
    &quant_table_14_to_46[(signed long int)2048],
    &quant_table_14_to_48[(signed long int)2048],
    &quant_table_14_to_50[(signed long int)2048],
    &quant_table_14_to_52[(signed long int)2048],
    &quant_table_14_to_54[(signed long int)2048],
    &quant_table_14_to_56[(signed long int)2048],
    &quant_table_14_to_58[(signed long int)2048],
    &quant_table_14_to_60[(signed long int)2048],
    &quant_table_14_to_62[(signed long int)2048],
    &quant_table_14_to_64[(signed long int)2048],
    &quant_table_14_to_72[(signed long int)2048],
    &quant_table_14_to_80[(signed long int)2048],
    &quant_table_14_to_88[(signed long int)2048],
    &quant_table_14_to_96[(signed long int)2048],
    &quant_table_14_to_104[(signed long int)2048],
    &quant_table_14_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_16_to_18[(signed long int)2048],
    &quant_table_16_to_20[(signed long int)2048],
    &quant_table_16_to_22[(signed long int)2048],
    &quant_table_16_to_24[(signed long int)2048],
    &quant_table_16_to_26[(signed long int)2048],
    &quant_table_16_to_28[(signed long int)2048],
    &quant_table_16_to_30[(signed long int)2048],
    &quant_table_16_to_32[(signed long int)2048],
    &quant_table_16_to_34[(signed long int)2048],
    &quant_table_16_to_36[(signed long int)2048],
    &quant_table_16_to_38[(signed long int)2048],
    &quant_table_16_to_40[(signed long int)2048],
    &quant_table_16_to_42[(signed long int)2048],
    &quant_table_16_to_44[(signed long int)2048],
    &quant_table_16_to_46[(signed long int)2048],
    &quant_table_16_to_48[(signed long int)2048],
    &quant_table_16_to_50[(signed long int)2048],
    &quant_table_16_to_52[(signed long int)2048],
    &quant_table_16_to_54[(signed long int)2048],
    &quant_table_16_to_56[(signed long int)2048],
    &quant_table_16_to_58[(signed long int)2048],
    &quant_table_16_to_60[(signed long int)2048],
    &quant_table_16_to_62[(signed long int)2048],
    &quant_table_16_to_64[(signed long int)2048],
    &quant_table_16_to_72[(signed long int)2048],
    &quant_table_16_to_80[(signed long int)2048],
    &quant_table_16_to_88[(signed long int)2048],
    &quant_table_16_to_96[(signed long int)2048],
    &quant_table_16_to_104[(signed long int)2048],
    &quant_table_16_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_18_to_20[(signed long int)2048],
    &quant_table_18_to_22[(signed long int)2048],
    &quant_table_18_to_24[(signed long int)2048],
    &quant_table_18_to_26[(signed long int)2048],
    &quant_table_18_to_28[(signed long int)2048],
    &quant_table_18_to_30[(signed long int)2048],
    &quant_table_18_to_32[(signed long int)2048],
    &quant_table_18_to_34[(signed long int)2048],
    &quant_table_18_to_36[(signed long int)2048],
    &quant_table_18_to_38[(signed long int)2048],
    &quant_table_18_to_40[(signed long int)2048],
    &quant_table_18_to_42[(signed long int)2048],
    &quant_table_18_to_44[(signed long int)2048],
    &quant_table_18_to_46[(signed long int)2048],
    &quant_table_18_to_48[(signed long int)2048],
    &quant_table_18_to_50[(signed long int)2048],
    &quant_table_18_to_52[(signed long int)2048],
    &quant_table_18_to_54[(signed long int)2048],
    &quant_table_18_to_56[(signed long int)2048],
    &quant_table_18_to_58[(signed long int)2048],
    &quant_table_18_to_60[(signed long int)2048],
    &quant_table_18_to_62[(signed long int)2048],
    &quant_table_18_to_64[(signed long int)2048],
    &quant_table_18_to_72[(signed long int)2048],
    &quant_table_18_to_80[(signed long int)2048],
    &quant_table_18_to_88[(signed long int)2048],
    &quant_table_18_to_96[(signed long int)2048],
    &quant_table_18_to_104[(signed long int)2048],
    &quant_table_18_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_20_to_22[(signed long int)2048],
    &quant_table_20_to_24[(signed long int)2048],
    &quant_table_20_to_26[(signed long int)2048],
    &quant_table_20_to_28[(signed long int)2048],
    &quant_table_20_to_30[(signed long int)2048],
    &quant_table_20_to_32[(signed long int)2048],
    &quant_table_20_to_34[(signed long int)2048],
    &quant_table_20_to_36[(signed long int)2048],
    &quant_table_20_to_38[(signed long int)2048],
    &quant_table_20_to_40[(signed long int)2048],
    &quant_table_20_to_42[(signed long int)2048],
    &quant_table_20_to_44[(signed long int)2048],
    &quant_table_20_to_46[(signed long int)2048],
    &quant_table_20_to_48[(signed long int)2048],
    &quant_table_20_to_50[(signed long int)2048],
    &quant_table_20_to_52[(signed long int)2048],
    &quant_table_20_to_54[(signed long int)2048],
    &quant_table_20_to_56[(signed long int)2048],
    &quant_table_20_to_58[(signed long int)2048],
    &quant_table_20_to_60[(signed long int)2048],
    &quant_table_20_to_62[(signed long int)2048],
    &quant_table_20_to_64[(signed long int)2048],
    &quant_table_20_to_72[(signed long int)2048],
    &quant_table_20_to_80[(signed long int)2048],
    &quant_table_20_to_88[(signed long int)2048],
    &quant_table_20_to_96[(signed long int)2048],
    &quant_table_20_to_104[(signed long int)2048],
    &quant_table_20_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_22_to_24[(signed long int)2048],
    &quant_table_22_to_26[(signed long int)2048],
    &quant_table_22_to_28[(signed long int)2048],
    &quant_table_22_to_30[(signed long int)2048],
    &quant_table_22_to_32[(signed long int)2048],
    &quant_table_22_to_34[(signed long int)2048],
    &quant_table_22_to_36[(signed long int)2048],
    &quant_table_22_to_38[(signed long int)2048],
    &quant_table_22_to_40[(signed long int)2048],
    &quant_table_22_to_42[(signed long int)2048],
    &quant_table_22_to_44[(signed long int)2048],
    &quant_table_22_to_46[(signed long int)2048],
    &quant_table_22_to_48[(signed long int)2048],
    &quant_table_22_to_50[(signed long int)2048],
    &quant_table_22_to_52[(signed long int)2048],
    &quant_table_22_to_54[(signed long int)2048],
    &quant_table_22_to_56[(signed long int)2048],
    &quant_table_22_to_58[(signed long int)2048],
    &quant_table_22_to_60[(signed long int)2048],
    &quant_table_22_to_62[(signed long int)2048],
    &quant_table_22_to_64[(signed long int)2048],
    &quant_table_22_to_72[(signed long int)2048],
    &quant_table_22_to_80[(signed long int)2048],
    &quant_table_22_to_88[(signed long int)2048],
    &quant_table_22_to_96[(signed long int)2048],
    &quant_table_22_to_104[(signed long int)2048],
    &quant_table_22_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_24_to_26[(signed long int)2048],
    &quant_table_24_to_28[(signed long int)2048],
    &quant_table_24_to_30[(signed long int)2048],
    &quant_table_24_to_32[(signed long int)2048],
    &quant_table_24_to_34[(signed long int)2048],
    &quant_table_24_to_36[(signed long int)2048],
    &quant_table_24_to_38[(signed long int)2048],
    &quant_table_24_to_40[(signed long int)2048],
    &quant_table_24_to_42[(signed long int)2048],
    &quant_table_24_to_44[(signed long int)2048],
    &quant_table_24_to_46[(signed long int)2048],
    &quant_table_24_to_48[(signed long int)2048],
    &quant_table_24_to_50[(signed long int)2048],
    &quant_table_24_to_52[(signed long int)2048],
    &quant_table_24_to_54[(signed long int)2048],
    &quant_table_24_to_56[(signed long int)2048],
    &quant_table_24_to_58[(signed long int)2048],
    &quant_table_24_to_60[(signed long int)2048],
    &quant_table_24_to_62[(signed long int)2048],
    &quant_table_24_to_64[(signed long int)2048],
    &quant_table_24_to_72[(signed long int)2048],
    &quant_table_24_to_80[(signed long int)2048],
    &quant_table_24_to_88[(signed long int)2048],
    &quant_table_24_to_96[(signed long int)2048],
    &quant_table_24_to_104[(signed long int)2048],
    &quant_table_24_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_26_to_28[(signed long int)2048],
    &quant_table_26_to_30[(signed long int)2048],
    &quant_table_26_to_32[(signed long int)2048],
    &quant_table_26_to_34[(signed long int)2048],
    &quant_table_26_to_36[(signed long int)2048],
    &quant_table_26_to_38[(signed long int)2048],
    &quant_table_26_to_40[(signed long int)2048],
    &quant_table_26_to_42[(signed long int)2048],
    &quant_table_26_to_44[(signed long int)2048],
    &quant_table_26_to_46[(signed long int)2048],
    &quant_table_26_to_48[(signed long int)2048],
    &quant_table_26_to_50[(signed long int)2048],
    &quant_table_26_to_52[(signed long int)2048],
    &quant_table_26_to_54[(signed long int)2048],
    &quant_table_26_to_56[(signed long int)2048],
    &quant_table_26_to_58[(signed long int)2048],
    &quant_table_26_to_60[(signed long int)2048],
    &quant_table_26_to_62[(signed long int)2048],
    &quant_table_26_to_64[(signed long int)2048],
    &quant_table_26_to_72[(signed long int)2048],
    &quant_table_26_to_80[(signed long int)2048],
    &quant_table_26_to_88[(signed long int)2048],
    &quant_table_26_to_96[(signed long int)2048],
    &quant_table_26_to_104[(signed long int)2048],
    &quant_table_26_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_28_to_30[(signed long int)2048],
    &quant_table_28_to_32[(signed long int)2048],
    &quant_table_28_to_34[(signed long int)2048],
    &quant_table_28_to_36[(signed long int)2048],
    &quant_table_28_to_38[(signed long int)2048],
    &quant_table_28_to_40[(signed long int)2048],
    &quant_table_28_to_42[(signed long int)2048],
    &quant_table_28_to_44[(signed long int)2048],
    &quant_table_28_to_46[(signed long int)2048],
    &quant_table_28_to_48[(signed long int)2048],
    &quant_table_28_to_50[(signed long int)2048],
    &quant_table_28_to_52[(signed long int)2048],
    &quant_table_28_to_54[(signed long int)2048],
    &quant_table_28_to_56[(signed long int)2048],
    &quant_table_28_to_58[(signed long int)2048],
    &quant_table_28_to_60[(signed long int)2048],
    &quant_table_28_to_62[(signed long int)2048],
    &quant_table_28_to_64[(signed long int)2048],
    &quant_table_28_to_72[(signed long int)2048],
    &quant_table_28_to_80[(signed long int)2048],
    &quant_table_28_to_88[(signed long int)2048],
    &quant_table_28_to_96[(signed long int)2048],
    &quant_table_28_to_104[(signed long int)2048],
    &quant_table_28_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_30_to_32[(signed long int)2048],
    &quant_table_30_to_34[(signed long int)2048],
    &quant_table_30_to_36[(signed long int)2048],
    &quant_table_30_to_38[(signed long int)2048],
    &quant_table_30_to_40[(signed long int)2048],
    &quant_table_30_to_42[(signed long int)2048],
    &quant_table_30_to_44[(signed long int)2048],
    &quant_table_30_to_46[(signed long int)2048],
    &quant_table_30_to_48[(signed long int)2048],
    &quant_table_30_to_50[(signed long int)2048],
    &quant_table_30_to_52[(signed long int)2048],
    &quant_table_30_to_54[(signed long int)2048],
    &quant_table_30_to_56[(signed long int)2048],
    &quant_table_30_to_58[(signed long int)2048],
    &quant_table_30_to_60[(signed long int)2048],
    &quant_table_30_to_62[(signed long int)2048],
    &quant_table_30_to_64[(signed long int)2048],
    &quant_table_30_to_72[(signed long int)2048],
    &quant_table_30_to_80[(signed long int)2048],
    &quant_table_30_to_88[(signed long int)2048],
    &quant_table_30_to_96[(signed long int)2048],
    &quant_table_30_to_104[(signed long int)2048],
    &quant_table_30_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_32_to_34[(signed long int)2048],
    &quant_table_32_to_36[(signed long int)2048],
    &quant_table_32_to_38[(signed long int)2048],
    &quant_table_32_to_40[(signed long int)2048],
    &quant_table_32_to_42[(signed long int)2048],
    &quant_table_32_to_44[(signed long int)2048],
    &quant_table_32_to_46[(signed long int)2048],
    &quant_table_32_to_48[(signed long int)2048],
    &quant_table_32_to_50[(signed long int)2048],
    &quant_table_32_to_52[(signed long int)2048],
    &quant_table_32_to_54[(signed long int)2048],
    &quant_table_32_to_56[(signed long int)2048],
    &quant_table_32_to_58[(signed long int)2048],
    &quant_table_32_to_60[(signed long int)2048],
    &quant_table_32_to_62[(signed long int)2048],
    &quant_table_32_to_64[(signed long int)2048],
    &quant_table_32_to_72[(signed long int)2048],
    &quant_table_32_to_80[(signed long int)2048],
    &quant_table_32_to_88[(signed long int)2048],
    &quant_table_32_to_96[(signed long int)2048],
    &quant_table_32_to_104[(signed long int)2048],
    &quant_table_32_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_34_to_36[(signed long int)2048],
    &quant_table_34_to_38[(signed long int)2048],
    &quant_table_34_to_40[(signed long int)2048],
    &quant_table_34_to_42[(signed long int)2048],
    &quant_table_34_to_44[(signed long int)2048],
    &quant_table_34_to_46[(signed long int)2048],
    &quant_table_34_to_48[(signed long int)2048],
    &quant_table_34_to_50[(signed long int)2048],
    &quant_table_34_to_52[(signed long int)2048],
    &quant_table_34_to_54[(signed long int)2048],
    &quant_table_34_to_56[(signed long int)2048],
    &quant_table_34_to_58[(signed long int)2048],
    &quant_table_34_to_60[(signed long int)2048],
    &quant_table_34_to_62[(signed long int)2048],
    &quant_table_34_to_64[(signed long int)2048],
    &quant_table_34_to_72[(signed long int)2048],
    &quant_table_34_to_80[(signed long int)2048],
    &quant_table_34_to_88[(signed long int)2048],
    &quant_table_34_to_96[(signed long int)2048],
    &quant_table_34_to_104[(signed long int)2048],
    &quant_table_34_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_36_to_38[(signed long int)2048],
    &quant_table_36_to_40[(signed long int)2048],
    &quant_table_36_to_42[(signed long int)2048],
    &quant_table_36_to_44[(signed long int)2048],
    &quant_table_36_to_46[(signed long int)2048],
    &quant_table_36_to_48[(signed long int)2048],
    &quant_table_36_to_50[(signed long int)2048],
    &quant_table_36_to_52[(signed long int)2048],
    &quant_table_36_to_54[(signed long int)2048],
    &quant_table_36_to_56[(signed long int)2048],
    &quant_table_36_to_58[(signed long int)2048],
    &quant_table_36_to_60[(signed long int)2048],
    &quant_table_36_to_62[(signed long int)2048],
    &quant_table_36_to_64[(signed long int)2048],
    &quant_table_36_to_72[(signed long int)2048],
    &quant_table_36_to_80[(signed long int)2048],
    &quant_table_36_to_88[(signed long int)2048],
    &quant_table_36_to_96[(signed long int)2048],
    &quant_table_36_to_104[(signed long int)2048],
    &quant_table_36_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_38_to_40[(signed long int)2048],
    &quant_table_38_to_42[(signed long int)2048],
    &quant_table_38_to_44[(signed long int)2048],
    &quant_table_38_to_46[(signed long int)2048],
    &quant_table_38_to_48[(signed long int)2048],
    &quant_table_38_to_50[(signed long int)2048],
    &quant_table_38_to_52[(signed long int)2048],
    &quant_table_38_to_54[(signed long int)2048],
    &quant_table_38_to_56[(signed long int)2048],
    &quant_table_38_to_58[(signed long int)2048],
    &quant_table_38_to_60[(signed long int)2048],
    &quant_table_38_to_62[(signed long int)2048],
    &quant_table_38_to_64[(signed long int)2048],
    &quant_table_38_to_72[(signed long int)2048],
    &quant_table_38_to_80[(signed long int)2048],
    &quant_table_38_to_88[(signed long int)2048],
    &quant_table_38_to_96[(signed long int)2048],
    &quant_table_38_to_104[(signed long int)2048],
    &quant_table_38_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_40_to_42[(signed long int)2048],
    &quant_table_40_to_44[(signed long int)2048],
    &quant_table_40_to_46[(signed long int)2048],
    &quant_table_40_to_48[(signed long int)2048],
    &quant_table_40_to_50[(signed long int)2048],
    &quant_table_40_to_52[(signed long int)2048],
    &quant_table_40_to_54[(signed long int)2048],
    &quant_table_40_to_56[(signed long int)2048],
    &quant_table_40_to_58[(signed long int)2048],
    &quant_table_40_to_60[(signed long int)2048],
    &quant_table_40_to_62[(signed long int)2048],
    &quant_table_40_to_64[(signed long int)2048],
    &quant_table_40_to_72[(signed long int)2048],
    &quant_table_40_to_80[(signed long int)2048],
    &quant_table_40_to_88[(signed long int)2048],
    &quant_table_40_to_96[(signed long int)2048],
    &quant_table_40_to_104[(signed long int)2048],
    &quant_table_40_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_42_to_44[(signed long int)2048],
    &quant_table_42_to_46[(signed long int)2048],
    &quant_table_42_to_48[(signed long int)2048],
    &quant_table_42_to_50[(signed long int)2048],
    &quant_table_42_to_52[(signed long int)2048],
    &quant_table_42_to_54[(signed long int)2048],
    &quant_table_42_to_56[(signed long int)2048],
    &quant_table_42_to_58[(signed long int)2048],
    &quant_table_42_to_60[(signed long int)2048],
    &quant_table_42_to_62[(signed long int)2048],
    &quant_table_42_to_64[(signed long int)2048],
    &quant_table_42_to_72[(signed long int)2048],
    &quant_table_42_to_80[(signed long int)2048],
    &quant_table_42_to_88[(signed long int)2048],
    &quant_table_42_to_96[(signed long int)2048],
    &quant_table_42_to_104[(signed long int)2048],
    &quant_table_42_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_44_to_46[(signed long int)2048],
    &quant_table_44_to_48[(signed long int)2048],
    &quant_table_44_to_50[(signed long int)2048],
    &quant_table_44_to_52[(signed long int)2048],
    &quant_table_44_to_54[(signed long int)2048],
    &quant_table_44_to_56[(signed long int)2048],
    &quant_table_44_to_58[(signed long int)2048],
    &quant_table_44_to_60[(signed long int)2048],
    &quant_table_44_to_62[(signed long int)2048],
    &quant_table_44_to_64[(signed long int)2048],
    &quant_table_44_to_72[(signed long int)2048],
    &quant_table_44_to_80[(signed long int)2048],
    &quant_table_44_to_88[(signed long int)2048],
    &quant_table_44_to_96[(signed long int)2048],
    &quant_table_44_to_104[(signed long int)2048],
    &quant_table_44_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_46_to_48[(signed long int)2048],
    &quant_table_46_to_50[(signed long int)2048],
    &quant_table_46_to_52[(signed long int)2048],
    &quant_table_46_to_54[(signed long int)2048],
    &quant_table_46_to_56[(signed long int)2048],
    &quant_table_46_to_58[(signed long int)2048],
    &quant_table_46_to_60[(signed long int)2048],
    &quant_table_46_to_62[(signed long int)2048],
    &quant_table_46_to_64[(signed long int)2048],
    &quant_table_46_to_72[(signed long int)2048],
    &quant_table_46_to_80[(signed long int)2048],
    &quant_table_46_to_88[(signed long int)2048],
    &quant_table_46_to_96[(signed long int)2048],
    &quant_table_46_to_104[(signed long int)2048],
    &quant_table_46_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_48_to_50[(signed long int)2048],
    &quant_table_48_to_52[(signed long int)2048],
    &quant_table_48_to_54[(signed long int)2048],
    &quant_table_48_to_56[(signed long int)2048],
    &quant_table_48_to_58[(signed long int)2048],
    &quant_table_48_to_60[(signed long int)2048],
    &quant_table_48_to_62[(signed long int)2048],
    &quant_table_48_to_64[(signed long int)2048],
    &quant_table_48_to_72[(signed long int)2048],
    &quant_table_48_to_80[(signed long int)2048],
    &quant_table_48_to_88[(signed long int)2048],
    &quant_table_48_to_96[(signed long int)2048],
    &quant_table_48_to_104[(signed long int)2048],
    &quant_table_48_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_50_to_52[(signed long int)2048],
    &quant_table_50_to_54[(signed long int)2048],
    &quant_table_50_to_56[(signed long int)2048],
    &quant_table_50_to_58[(signed long int)2048],
    &quant_table_50_to_60[(signed long int)2048],
    &quant_table_50_to_62[(signed long int)2048],
    &quant_table_50_to_64[(signed long int)2048],
    &quant_table_50_to_72[(signed long int)2048],
    &quant_table_50_to_80[(signed long int)2048],
    &quant_table_50_to_88[(signed long int)2048],
    &quant_table_50_to_96[(signed long int)2048],
    &quant_table_50_to_104[(signed long int)2048],
    &quant_table_50_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_52_to_54[(signed long int)2048],
    &quant_table_52_to_56[(signed long int)2048],
    &quant_table_52_to_58[(signed long int)2048],
    &quant_table_52_to_60[(signed long int)2048],
    &quant_table_52_to_62[(signed long int)2048],
    &quant_table_52_to_64[(signed long int)2048],
    &quant_table_52_to_72[(signed long int)2048],
    &quant_table_52_to_80[(signed long int)2048],
    &quant_table_52_to_88[(signed long int)2048],
    &quant_table_52_to_96[(signed long int)2048],
    &quant_table_52_to_104[(signed long int)2048],
    &quant_table_52_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_54_to_56[(signed long int)2048],
    &quant_table_54_to_58[(signed long int)2048],
    &quant_table_54_to_60[(signed long int)2048],
    &quant_table_54_to_62[(signed long int)2048],
    &quant_table_54_to_64[(signed long int)2048],
    &quant_table_54_to_72[(signed long int)2048],
    &quant_table_54_to_80[(signed long int)2048],
    &quant_table_54_to_88[(signed long int)2048],
    &quant_table_54_to_96[(signed long int)2048],
    &quant_table_54_to_104[(signed long int)2048],
    &quant_table_54_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_56_to_58[(signed long int)2048],
    &quant_table_56_to_60[(signed long int)2048],
    &quant_table_56_to_62[(signed long int)2048],
    &quant_table_56_to_64[(signed long int)2048],
    &quant_table_56_to_72[(signed long int)2048],
    &quant_table_56_to_80[(signed long int)2048],
    &quant_table_56_to_88[(signed long int)2048],
    &quant_table_56_to_96[(signed long int)2048],
    &quant_table_56_to_104[(signed long int)2048],
    &quant_table_56_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_58_to_60[(signed long int)2048],
    &quant_table_58_to_62[(signed long int)2048],
    &quant_table_58_to_64[(signed long int)2048],
    &quant_table_58_to_72[(signed long int)2048],
    &quant_table_58_to_80[(signed long int)2048],
    &quant_table_58_to_88[(signed long int)2048],
    &quant_table_58_to_96[(signed long int)2048],
    &quant_table_58_to_104[(signed long int)2048],
    &quant_table_58_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_60_to_62[(signed long int)2048],
    &quant_table_60_to_64[(signed long int)2048],
    &quant_table_60_to_72[(signed long int)2048],
    &quant_table_60_to_80[(signed long int)2048],
    &quant_table_60_to_88[(signed long int)2048],
    &quant_table_60_to_96[(signed long int)2048],
    &quant_table_60_to_104[(signed long int)2048],
    &quant_table_60_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_62_to_64[(signed long int)2048],
    &quant_table_62_to_72[(signed long int)2048],
    &quant_table_62_to_80[(signed long int)2048],
    &quant_table_62_to_88[(signed long int)2048],
    &quant_table_62_to_96[(signed long int)2048],
    &quant_table_62_to_104[(signed long int)2048],
    &quant_table_62_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_64_to_72[(signed long int)2048],
    &quant_table_64_to_80[(signed long int)2048],
    &quant_table_64_to_88[(signed long int)2048],
    &quant_table_64_to_96[(signed long int)2048],
    &quant_table_64_to_104[(signed long int)2048],
    &quant_table_64_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_72_to_80[(signed long int)2048],
    &quant_table_72_to_88[(signed long int)2048],
    &quant_table_72_to_96[(signed long int)2048],
    &quant_table_72_to_104[(signed long int)2048],
    &quant_table_72_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_80_to_88[(signed long int)2048],
    &quant_table_80_to_96[(signed long int)2048],
    &quant_table_80_to_104[(signed long int)2048],
    &quant_table_80_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_88_to_96[(signed long int)2048],
    &quant_table_88_to_104[(signed long int)2048],
    &quant_table_88_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_96_to_104[(signed long int)2048],
    &quant_table_96_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), &quant_table_104_to_112[(signed long int)2048] },
    { ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL), ((signed short int *)NULL) } };
// quantisers
// file requant.c line 2176
signed int quantisers[42l] = { 1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 72, 80, 88, 96, 104, 112 };
// quantizer_scale
// file requant.c line 214
static unsigned int quantizer_scale;
// rbuf
// file vamps.c line 96
unsigned char rbuf[4194304l];
// rbuf$link1
// file requant.c line 135
static unsigned char *rbuf$link1;
// rhwp
// file vamps.c line 101
unsigned char *rhwp;
// rhwp
// file vamps.c line 101
unsigned char *rhwp = rbuf;
// rptr
// file vamps.c line 100
unsigned char *rptr;
// rptr
// file vamps.c line 100
unsigned char *rptr = rbuf;
// rqt_fact
// file vamps.c line 128
float rqt_fact;
// rqt_inbytes
// file vamps.c line 125
unsigned long int rqt_inbytes;
// rqt_outbytes
// file vamps.c line 126
unsigned long int rqt_outbytes;
// rqt_rcnt
// file vamps.c line 123
signed int rqt_rcnt;
// rqt_rptr
// file vamps.c line 121
unsigned char *rqt_rptr;
// rqt_visize
// file vamps.c line 127
unsigned long int rqt_visize;
// rqt_wcnt
// file vamps.c line 124
signed int rqt_wcnt;
// rqt_wptr
// file vamps.c line 122
unsigned char *rqt_wptr;
// sliceError
// file requant.c line 211
static signed int sliceError;
// spu_track_map
// file vamps.c line 129
signed int spu_track_map[32l];
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stress_factor
// file requant.c line 151
static double stress_factor;
// v_offset
// file requant.c line 217
static signed int v_offset;
// validExtHeader
// file requant.c line 210
static signed int validExtHeader;
// validPicHeader
// file requant.c line 208
static signed int validPicHeader;
// validSeqHeader
// file requant.c line 209
static signed int validSeqHeader;
// vap_fact
// file vamps.c line 134
float vap_fact = 1.0f;
// vbuf_size
// file vamps.c line 109
signed int vbuf_size = 1024 * 1024;
// verbose
// file vamps.c line 131
signed int verbose;
// vertical_size_value
// file requant.c line 192
static unsigned int vertical_size_value;
// vibuf
// file vamps.c line 98
unsigned char *vibuf;
// vilen
// file vamps.c line 110
signed int vilen;
// vobuf
// file vamps.c line 99
unsigned char *vobuf;
// volen
// file vamps.c line 111
signed int volen;
// wbuf
// file vamps.c line 97
unsigned char wbuf[4194304l];
// wbuf$link1
// file requant.c line 135
static unsigned char *wbuf$link1;
// wptr
// file vamps.c line 102
unsigned char *wptr;
// wptr
// file vamps.c line 102
unsigned char *wptr = wbuf;

// Copy_Bits
// file requant.c line 445
static inline unsigned int Copy_Bits(unsigned int n)
{
  unsigned int Val;
  Val=Get_Bits(n);
  putbits(Val, (signed int)n);
  return Val;
}

// Flush_Bits
// file requant.c line 421
static inline void Flush_Bits(unsigned int n)
{
  inbitbuf = inbitbuf << n;
  inbitcnt = inbitcnt - (signed int)n;
  while(!(inbitcnt >= 24))
    Refill_bits();
}

// Get_Bits
// file requant.c line 438
static inline unsigned int Get_Bits(unsigned int n)
{
  unsigned int Val;
  Val=Show_Bits(n);
  Flush_Bits(n);
  return Val;
}

// Refill_bits
// file requant.c line 413
static inline void Refill_bits(void)
{
  inbitbuf = inbitbuf | (unsigned int)((signed int)cbuf[(signed long int)0] << 24 - inbitcnt);
  inbitcnt = inbitcnt + 8;
  cbuf = cbuf + (signed long int)1;
}

// Show_Bits
// file requant.c line 433
static inline unsigned int Show_Bits(unsigned int n)
{
  return (unsigned int)inbitbuf >> (unsigned int)32 - n;
}

// check_pack
// file vamps.c line 473
static inline void check_pack(unsigned char *ptr)
{
  unsigned int pack_start_code;
  signed int pack_stuffing_length;
  pack_start_code = (unsigned int)ptr[(signed long int)0] << 24;
  pack_start_code = pack_start_code | (unsigned int)ptr[(signed long int)1] << 16;
  pack_start_code = pack_start_code | (unsigned int)ptr[(signed long int)2] << 8;
  pack_start_code = pack_start_code | (unsigned int)ptr[(signed long int)3];
  unsigned long int return_value_rtell$1;
  if(!(pack_start_code == 442u))
  {
    return_value_rtell$1=rtell(ptr);
    fatal("Bad pack start code at %llu: %08lx", return_value_rtell$1, pack_start_code);
  }

  unsigned long int return_value_rtell$2;
  if(!((0xc0 & (signed int)ptr[4l]) == 0x40))
  {
    return_value_rtell$2=rtell(ptr);
    fatal("Not an MPEG2 program stream pack at %llu", return_value_rtell$2);
  }

  pack_stuffing_length = (signed int)ptr[(signed long int)13] & 7;
  unsigned long int return_value_rtell$3;
  if(!(pack_stuffing_length == 0))
  {
    return_value_rtell$3=rtell(ptr);
    fatal("Non-zero pack stuffing length at %llu: %d\n", return_value_rtell$3, pack_stuffing_length);
  }

}

// check_video_packet
// file vamps.c line 501
static inline signed int check_video_packet(unsigned char *ptr)
{
  signed int vid_packet_length;
  signed int pad_packet_length;
  signed int rc = 0;
  unsigned int vid_packet_start_code;
  unsigned int pad_packet_start_code;
  unsigned int sequence_header_code;
  vid_packet_start_code = (unsigned int)ptr[(signed long int)0] << 24;
  vid_packet_start_code = vid_packet_start_code | (unsigned int)ptr[(signed long int)1] << 16;
  vid_packet_start_code = vid_packet_start_code | (unsigned int)ptr[(signed long int)2] << 8;
  vid_packet_start_code = vid_packet_start_code | (unsigned int)ptr[(signed long int)3];
  unsigned long int return_value_rtell$1;
  if(!(vid_packet_start_code == 480u))
  {
    return_value_rtell$1=rtell(ptr);
    fatal("Bad video packet start code at %llu: %08lx", return_value_rtell$1, vid_packet_start_code);
  }

  vid_packet_length = (signed int)ptr[(signed long int)4] << 8;
  vid_packet_length = vid_packet_length | (signed int)ptr[(signed long int)5];
  vid_packet_length = vid_packet_length + 6;
  unsigned long int return_value_rtell$2;
  if(!((0xc0 & (signed int)ptr[6l]) == 0x80))
  {
    return_value_rtell$2=rtell(ptr);
    fatal("Not an MPEG2 video packet at %llu", return_value_rtell$2);
  }

  unsigned long int return_value_rtell$3;
  if(!(ptr[7l] == 0))
  {
    if(!((0xc0 & (signed int)ptr[7l]) == 0xc0))
    {
      return_value_rtell$3=rtell(ptr);
      fatal("First video packet in sequence starting at %llu misses PTS or DTS, flags=%02x", return_value_rtell$3, ptr[(signed long int)7]);
    }

    sequence_header_code = (unsigned int)ptr[(signed long int)(6 + 3 + (signed int)ptr[(signed long int)8] + 0)] << 24;
    sequence_header_code = sequence_header_code | (unsigned int)ptr[(signed long int)(6 + 3 + (signed int)ptr[(signed long int)8] + 1)] << 16;
    sequence_header_code = sequence_header_code | (unsigned int)ptr[(signed long int)(6 + 3 + (signed int)ptr[(signed long int)8] + 2)] << 8;
    sequence_header_code = sequence_header_code | (unsigned int)ptr[(signed long int)(6 + 3 + (signed int)ptr[(signed long int)8] + 3)];
    if(sequence_header_code == 435u)
      rc = 1;

    else
      sequence_headers = sequence_headers + 1;
  }

  pad_packet_length = 0;
  unsigned long int return_value_rtell$4;
  if(!(14 + vid_packet_length >= 2048))
  {
    ptr = ptr + (signed long int)vid_packet_length;
    pad_packet_start_code = (unsigned int)ptr[(signed long int)0] << 24;
    pad_packet_start_code = pad_packet_start_code | (unsigned int)ptr[(signed long int)1] << 16;
    pad_packet_start_code = pad_packet_start_code | (unsigned int)ptr[(signed long int)2] << 8;
    pad_packet_start_code = pad_packet_start_code | (unsigned int)ptr[(signed long int)3];
    if(!(pad_packet_start_code == 446u))
    {
      return_value_rtell$4=rtell(ptr + (signed long int)vid_packet_length);
      fatal("Bad padding packet start code at %llu: %08lx", return_value_rtell$4, pad_packet_start_code);
    }

    pad_packet_length = (signed int)ptr[(signed long int)4] << 8;
    pad_packet_length = pad_packet_length | (signed int)ptr[(signed long int)5];
    pad_packet_length = pad_packet_length + 6;
  }

  unsigned long int return_value_rtell$5;
  if(!(pad_packet_length + vid_packet_length == 2034))
  {
    return_value_rtell$5=rtell(ptr);
    fatal("Bad video packet length at %llu: %d", return_value_rtell$5, vid_packet_length);
  }

  return rc;
}

// copy
// file vamps.c line 413
static inline void copy(signed int size)
{
  if(!(size == 0))
  {
    if((wptr - wbuf) + (signed long int)size >= 4194305l)
      fatal("Write buffer overflow");

    memcpy((void *)wptr, (const void *)rptr, (unsigned long int)size);
    rptr = rptr + (signed long int)size;
    wptr = wptr + (signed long int)size;
  }

}

// copy_mpeg_audio
// file vamps.c line 713
static inline void copy_mpeg_audio(unsigned char *ptr)
{
  signed int id;
  id=new_mpeg_audio_id((signed int)ptr[(signed long int)3]);
  if(!(id == 0))
  {
    if(preserve == 0)
      ptr[(signed long int)3] = (unsigned char)id;

    copy(2048);
  }

  else
    skip(2048);
}

// copy_private_1
// file vamps.c line 675
static inline void copy_private_1(unsigned char *ptr)
{
  signed int type;
  type=new_private_1_type(ptr);
  if(!(type == 0))
  {
    if(preserve == 0)
      ptr[(signed long int)(6 + 3 + (signed int)ptr[(signed long int)8])] = (unsigned char)type;

    copy(2048);
  }

  else
    skip(2048);
}

// fatal
// file vamps.c line 1357
void fatal(char *fmt, ...)
{
  void **ap;
  fprintf(stderr, "%s: Fatal: ", (const void *)progname);
  ap = (void **)&fmt;
  vfprintf(stderr, fmt, ap);
  ap = ((void **)NULL);
  _IO_putc(10, stderr);
  exit(1);
}

// flush
// file vamps.c line 437
static void flush(void)
{
  signed int size = (signed int)(wptr - wbuf);
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  if(!(size == 0))
  {
    signed long int return_value_write$3;
    return_value_write$3=write(1, (const void *)wbuf, (unsigned long int)size);
    if(!(return_value_write$3 == (signed long int)size))
    {
      return_value___errno_location$1=__errno_location();
      return_value_strerror$2=strerror(*return_value___errno_location$1);
      fatal("write to stdout: %s", return_value_strerror$2);
    }

    wptr = wbuf;
    bytes_written = bytes_written + (unsigned long int)size;
  }

}

// flush_read_buffer
// file requant.c line 452
static inline void flush_read_buffer()
{
  signed int i = inbitcnt & 0x7;
  if(!(i == 0))
  {
    if(!(inbitbuf >> 32 + -i == 0u))
      sliceError = sliceError + 1;

    inbitbuf = inbitbuf << i;
    inbitcnt = inbitcnt - i;
  }

  cbuf = cbuf + (signed long int)(-1 * (inbitcnt >> 3));
  inbitcnt = 0;
}

// flush_write_buffer
// file requant.c line 470
static inline void flush_write_buffer()
{
  if(!(outbitcnt == 8))
    putbits((unsigned int)0, outbitcnt);

}

// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat(signed int __fd, struct stat *__statbuf)
{
  signed int return_value___fxstat$1;
  return_value___fxstat$1=__fxstat(1, __fd, __statbuf);
  return return_value___fxstat$1;
}

// gen_video_packet
// file vamps.c line 1025
static inline signed int gen_video_packet(unsigned char *ptr, unsigned char *voptr, signed int avail)
{
  signed int i;
  signed int header_data_length;
  signed int data_length;
  signed int padding_length;
  signed int tmp_if_expr$1;
  if((0xc0 & (signed int)ptr[7l]) == 0xc0)
    tmp_if_expr$1 = (signed int)ptr[(signed long int)8];

  else
    tmp_if_expr$1 = 0;
  header_data_length = tmp_if_expr$1;
  data_length = 2048 - (14 + 6 + 3 + header_data_length);
  if(avail >= data_length)
  {
    memcpy((void *)(ptr + (signed long int)6 + (signed long int)3 + (signed long int)header_data_length), (const void *)voptr, (unsigned long int)data_length);
    ptr[(signed long int)4] = (unsigned char)(2048 - (14 + 6) >> 8);
    ptr[(signed long int)5] = (unsigned char)(2048 - (14 + 6) & 0xff);
    ptr[(signed long int)8] = (unsigned char)header_data_length;
    return data_length;
  }

  else
    if(!(avail >= data_length + -6))
    {
      memcpy((void *)(ptr + (signed long int)6 + (signed long int)3 + (signed long int)header_data_length), (const void *)voptr, (unsigned long int)avail);
      ptr[(signed long int)4] = (unsigned char)(3 + header_data_length + avail >> 8);
      ptr[(signed long int)5] = (unsigned char)(3 + header_data_length + avail);
      ptr[(signed long int)8] = (unsigned char)header_data_length;
      ptr = ptr + (signed long int)(6 + 3 + header_data_length + avail);
      padding_length = data_length - (avail + 6);
      padding_bytes = padding_bytes + (unsigned long int)(padding_length + 6);
      ptr[(signed long int)0] = (unsigned char)0;
      ptr[(signed long int)1] = (unsigned char)0;
      ptr[(signed long int)2] = (unsigned char)1;
      ptr[(signed long int)3] = (unsigned char)0xbe;
      ptr[(signed long int)4] = (unsigned char)(padding_length >> 8);
      ptr[(signed long int)5] = (unsigned char)padding_length;
      i = 0;
      for( ; !(i >= padding_length); i = i + 1)
        ptr[(signed long int)(6 + i)] = (unsigned char)0xff;
      return avail;
    }

    else
    {
      padding_length = data_length - avail;
      padding_bytes = padding_bytes + (unsigned long int)padding_length;
      memset((void *)(ptr + (signed long int)6 + (signed long int)3 + (signed long int)header_data_length), 0xff, (unsigned long int)padding_length);
      header_data_length = header_data_length + padding_length;
      memcpy((void *)(ptr + (signed long int)6 + (signed long int)3 + (signed long int)header_data_length), (const void *)voptr, (unsigned long int)avail);
      ptr[(signed long int)4] = (unsigned char)(2048 - (14 + 6) >> 8);
      ptr[(signed long int)5] = (unsigned char)(2048 - (14 + 6) & 0xff);
      ptr[(signed long int)8] = (unsigned char)header_data_length;
      return avail;
    }
}

// getNewQuant
// file requant.c line 569
static signed int getNewQuant(signed int curQuant, signed int intra)
{
  signed int mquant = 0;
  double cStress;
  signed int return_value_scale_quant$1;
  signed int return_value_increment_quant$2;
  signed int return_value_scale_quant$3;
  signed int return_value_increment_quant$4;
  signed int return_value_scale_quant$5;
  signed int return_value_increment_quant$6;
  signed int return_value_scale_quant$7;
  signed int return_value_increment_quant$8;
  switch(picture_coding_type)
  {
    case (unsigned int)1:
    {
      cStress = (stress_factor - i_min_stress) / (1.0 - i_min_stress);
      return_value_scale_quant$1=scale_quant((double)curQuant + (double)i_factor * cStress);
      return_value_increment_quant$2=increment_quant(curQuant);
      mquant=intmax(return_value_scale_quant$1, return_value_increment_quant$2);
      break;
    }
    case (unsigned int)2:
    {
      cStress = (stress_factor - p_min_stress) / (1.0 - p_min_stress);
      if(!(intra == 0))
      {
        return_value_scale_quant$3=scale_quant((double)curQuant + (double)i_factor * cStress);
        return_value_increment_quant$4=increment_quant(curQuant);
        mquant=intmax(return_value_scale_quant$3, return_value_increment_quant$4);
      }

      else
      {
        return_value_scale_quant$5=scale_quant((double)curQuant + (double)p_factor * cStress);
        return_value_increment_quant$6=increment_quant(curQuant);
        mquant=intmax(return_value_scale_quant$5, return_value_increment_quant$6);
      }
      break;
    }
    case (unsigned int)3:
    {
      cStress = (stress_factor - b_min_stress) / (1.0 - b_min_stress);
      return_value_scale_quant$7=scale_quant((double)curQuant + (double)b_factor * cStress);
      return_value_increment_quant$8=increment_quant(curQuant);
      mquant=intmax(return_value_scale_quant$7, return_value_increment_quant$8);
      break;
    }
    default:
      ;
  }
  return mquant;
}

// get_chroma_dc_dct_diff
// file requant.c line 938
static inline signed int get_chroma_dc_dct_diff()
{
  const struct anonymous$5 *tab;
  signed int size;
  signed int dc_diff;
  if(!(inbitbuf >= 0xf8000000))
  {
    tab = DC_chrom_5 + (signed long int)((unsigned int)inbitbuf >> 32 - 5);
    size = (signed int)tab->size;
    if(!(size == 0))
    {
      Copy_Bits((unsigned int)tab->len);
      dc_diff = (signed int)((unsigned int)inbitbuf >> 32 - size);
      if(dc_diff >> size + -1 == 0)
        dc_diff = (dc_diff + 1) - (1 << size);

      Copy_Bits((unsigned int)size);
      return dc_diff;
    }

    else
    {
      Copy_Bits((unsigned int)2);
      return 0;
    }
  }

  else
  {
    tab = DC_long + (signed long int)(((unsigned int)inbitbuf >> 32 - 10) - (unsigned int)0x3e0);
    size = (signed int)tab->size;
    Copy_Bits((unsigned int)((signed int)tab->len + 1));
    dc_diff = (signed int)((unsigned int)inbitbuf >> 32 - size);
    if(dc_diff >> size + -1 == 0)
      dc_diff = (dc_diff + 1) - (1 << size);

    Copy_Bits((unsigned int)size);
    return dc_diff;
  }
}

// get_coded_block_pattern
// file requant.c line 877
static inline signed int get_coded_block_pattern()
{
  const struct anonymous$4 *tab;
  if(inbitbuf >= 536870912u)
  {
    tab = CBP_7 + (signed long int)(((unsigned int)inbitbuf >> 32 - 7) - (unsigned int)16);
    Flush_Bits((unsigned int)tab->len);
    return (signed int)tab->cbp;
  }

  else
  {
    tab = CBP_9 + (signed long int)((unsigned int)inbitbuf >> 32 - 9);
    Flush_Bits((unsigned int)tab->len);
    return (signed int)tab->cbp;
  }
}

// get_dmv
// file requant.c line 869
static inline void get_dmv()
{
  const struct anonymous$3 *tab = DMV_2 + (signed long int)((unsigned int)inbitbuf >> 32 - 2);
  Copy_Bits((unsigned int)tab->len);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// get_intra_block_B14
// file requant.c line 978
static void get_intra_block_B14()
{
  signed int i;
  signed int li;
  signed int val;
  const struct anonymous$6 *tab;
  i = 0;
  li = i;
  while((_Bool)1)
  {
    if(inbitbuf >= 671088640u)
    {
      tab = DCT_B14AC_5 + (signed long int)(((unsigned int)inbitbuf >> 32 - 5) - (unsigned int)5);
      i = i + (signed int)tab->run;
      if(i >= 64)
        break;


    normal_code:
      ;
      Flush_Bits((unsigned int)tab->len);
      val = (signed int)tab->level;
      val = (val ^ (signed int)inbitbuf >> 32 - 1) - ((signed int)inbitbuf >> 32 - 1);
      val = (signed int)curTable[(signed long int)val];
      if(!(val == 0))
      {
        signed int return_value_putAC$1;
        return_value_putAC$1=putAC((i - li) - 1, val, 0);
        if(!(return_value_putAC$1 == 0))
          break;

        li = i;
      }

      Flush_Bits((unsigned int)1);
      continue;
    }

    else
      if(inbitbuf >= 67108864u)
      {
        tab = DCT_B14_8 + (signed long int)(((unsigned int)inbitbuf >> 32 - 8) - (unsigned int)4);
        i = i + (signed int)tab->run;
        if(!(i >= 64))
          goto normal_code;

        i = i + (signed int)(((unsigned int)inbitbuf >> 32 - 12 & (unsigned int)0x3F) - (unsigned int)64);
        if(i >= 64)
        {
          sliceError = sliceError + 1;
          break;
        }

        Flush_Bits((unsigned int)12);
        val = (signed int)inbitbuf >> 32 - 12;
        val = (signed int)curTable[(signed long int)val];
        if(!(val == 0))
        {
          signed int return_value_putAC$2;
          return_value_putAC$2=putAC((i - li) - 1, val, 0);
          if(!(return_value_putAC$2 == 0))
            break;

          li = i;
        }

        Flush_Bits((unsigned int)12);
        continue;
      }

      else
        if(inbitbuf >= 33554432u)
        {
          tab = DCT_B14_10 + (signed long int)(((unsigned int)inbitbuf >> 32 - 10) - (unsigned int)8);
          i = i + (signed int)tab->run;
          if(!(i >= 64))
            goto normal_code;

        }

        else
          if(inbitbuf >= 8388608u)
          {
            tab = DCT_13 + (signed long int)(((unsigned int)inbitbuf >> 32 - 13) - (unsigned int)16);
            i = i + (signed int)tab->run;
            if(!(i >= 64))
              goto normal_code;

          }

          else
            if(inbitbuf >= 2097152u)
            {
              tab = DCT_15 + (signed long int)(((unsigned int)inbitbuf >> 32 - 15) - (unsigned int)16);
              i = i + (signed int)tab->run;
              if(!(i >= 64))
                goto normal_code;

            }

            else
            {
              tab = DCT_16 + (signed long int)((unsigned int)inbitbuf >> 32 - 16);
              Flush_Bits((unsigned int)16);
              i = i + (signed int)tab->run;
              if(!(i >= 64))
                goto normal_code;

            }
    sliceError = sliceError + 1;
    break;
  }
  Copy_Bits((unsigned int)2);
}

// get_intra_block_B15
// file requant.c line 1071
static void get_intra_block_B15()
{
  signed int i;
  signed int li;
  signed int val;
  const struct anonymous$6 *tab;
  i = 0;
  li = i;
  while((_Bool)1)
  {
    if(inbitbuf >= 67108864u)
    {
      tab = DCT_B15_8 + (signed long int)(((unsigned int)inbitbuf >> 32 - 8) - (unsigned int)4);
      i = i + (signed int)tab->run;
      if(!(i >= 64))
      {

      normal_code:
        ;
        Flush_Bits((unsigned int)tab->len);
        val = (signed int)tab->level;
        val = (val ^ (signed int)inbitbuf >> 32 - 1) - ((signed int)inbitbuf >> 32 - 1);
        val = (signed int)curTable[(signed long int)val];
        if(!(val == 0))
        {
          signed int return_value_putAC$1;
          return_value_putAC$1=putAC((i - li) - 1, val, 1);
          if(!(return_value_putAC$1 == 0))
            break;

          li = i;
        }

        Flush_Bits((unsigned int)1);
        continue;
      }

      else
      {
        if(i >= 128)
          break;

        i = i + (signed int)(((unsigned int)inbitbuf >> 32 - 12 & (unsigned int)0x3F) - (unsigned int)64);
        if(i >= 64)
        {
          sliceError = sliceError + 1;
          break;
        }

        Flush_Bits((unsigned int)12);
        val = (signed int)inbitbuf >> 32 - 12;
        val = (signed int)curTable[(signed long int)val];
        if(!(val == 0))
        {
          signed int return_value_putAC$2;
          return_value_putAC$2=putAC((i - li) - 1, val, 1);
          if(!(return_value_putAC$2 == 0))
            break;

          li = i;
        }

        Flush_Bits((unsigned int)12);
        continue;
      }
    }

    else
      if(inbitbuf >= 33554432u)
      {
        tab = DCT_B15_10 + (signed long int)(((unsigned int)inbitbuf >> 32 - 10) - (unsigned int)8);
        i = i + (signed int)tab->run;
        if(!(i >= 64))
          goto normal_code;

      }

      else
        if(inbitbuf >= 8388608u)
        {
          tab = DCT_13 + (signed long int)(((unsigned int)inbitbuf >> 32 - 13) - (unsigned int)16);
          i = i + (signed int)tab->run;
          if(!(i >= 64))
            goto normal_code;

        }

        else
          if(inbitbuf >= 2097152u)
          {
            tab = DCT_15 + (signed long int)(((unsigned int)inbitbuf >> 32 - 15) - (unsigned int)16);
            i = i + (signed int)tab->run;
            if(!(i >= 64))
              goto normal_code;

          }

          else
          {
            tab = DCT_16 + (signed long int)((unsigned int)inbitbuf >> 32 - 16);
            Flush_Bits((unsigned int)16);
            i = i + (signed int)tab->run;
            if(!(i >= 64))
              goto normal_code;

          }
    sliceError = sliceError + 1;
    break;
  }
  Copy_Bits((unsigned int)4);
}

// get_luma_dc_dct_diff
// file requant.c line 896
static inline signed int get_luma_dc_dct_diff()
{
  const struct anonymous$5 *tab;
  signed int size;
  signed int dc_diff;
  if(!(inbitbuf >= 0xf8000000))
  {
    tab = DC_lum_5 + (signed long int)((unsigned int)inbitbuf >> 32 - 5);
    size = (signed int)tab->size;
    if(!(size == 0))
    {
      Copy_Bits((unsigned int)tab->len);
      dc_diff = (signed int)((unsigned int)inbitbuf >> 32 - size);
      if(dc_diff >> size + -1 == 0)
        dc_diff = (dc_diff + 1) - (1 << size);

      Copy_Bits((unsigned int)size);
      return dc_diff;
    }

    else
    {
      Copy_Bits((unsigned int)3);
      return 0;
    }
  }

  else
  {
    tab = DC_long + (signed long int)(((unsigned int)inbitbuf >> 32 - 9) - (unsigned int)0x1e0);
    size = (signed int)tab->size;
    Copy_Bits((unsigned int)tab->len);
    dc_diff = (signed int)((unsigned int)inbitbuf >> 32 - size);
    if(dc_diff >> size + -1 == 0)
      dc_diff = (dc_diff + 1) - (1 << size);

    Copy_Bits((unsigned int)size);
    return dc_diff;
  }
}

// get_macroblock_modes
// file requant.c line 724
static inline signed int get_macroblock_modes()
{
  signed int macroblock_modes;
  const struct anonymous$1 *tab;
  switch(picture_coding_type)
  {
    case (unsigned int)1:
    {
      tab = MB_I + (signed long int)((unsigned int)inbitbuf >> 32 - 1);
      Flush_Bits((unsigned int)tab->len);
      macroblock_modes = (signed int)tab->modes;
      if(frame_pred_frame_dct == 0u && picture_structure == 3u)
      {
        macroblock_modes = macroblock_modes | (signed int)(((unsigned int)inbitbuf >> 32 - 1) * (unsigned int)32);
        Flush_Bits((unsigned int)1);
      }

      return macroblock_modes;
    }
    case (unsigned int)2:
    {
      tab = MB_P + (signed long int)((unsigned int)inbitbuf >> 32 - 5);
      Flush_Bits((unsigned int)tab->len);
      macroblock_modes = (signed int)tab->modes;
      if(!(picture_structure == 3u))
      {
        if(!((8 & macroblock_modes) == 0))
        {
          macroblock_modes = macroblock_modes | (signed int)(((unsigned int)inbitbuf >> 32 - 2) * (unsigned int)64);
          Flush_Bits((unsigned int)2);
        }

        return macroblock_modes;
      }

      else
        if(!(frame_pred_frame_dct == 0u))
        {
          if(!((8 & macroblock_modes) == 0))
            macroblock_modes = macroblock_modes | 2 * 64;

          return macroblock_modes;
        }

        else
        {
          if(!((8 & macroblock_modes) == 0))
          {
            macroblock_modes = macroblock_modes | (signed int)(((unsigned int)inbitbuf >> 32 - 2) * (unsigned int)64);
            Flush_Bits((unsigned int)2);
          }

          if(!((3 & macroblock_modes) == 0))
          {
            macroblock_modes = macroblock_modes | (signed int)(((unsigned int)inbitbuf >> 32 - 1) * (unsigned int)32);
            Flush_Bits((unsigned int)1);
          }

          return macroblock_modes;
        }
    }
    case (unsigned int)3:
    {
      tab = MB_B + (signed long int)((unsigned int)inbitbuf >> 32 - 6);
      Flush_Bits((unsigned int)tab->len);
      macroblock_modes = (signed int)tab->modes;
      if(!(picture_structure == 3u))
      {
        if((1 & macroblock_modes) == 0)
        {
          macroblock_modes = macroblock_modes | (signed int)(((unsigned int)inbitbuf >> 32 - 2) * (unsigned int)64);
          Flush_Bits((unsigned int)2);
        }

        return macroblock_modes;
      }

      else
        if(!(frame_pred_frame_dct == 0u))
        {
          macroblock_modes = macroblock_modes | 2 * 64;
          return macroblock_modes;
        }

        else
        {
          if((1 & macroblock_modes) == 0)
          {
            macroblock_modes = macroblock_modes | (signed int)(((unsigned int)inbitbuf >> 32 - 2) * (unsigned int)64);
            Flush_Bits((unsigned int)2);
            if((3 & macroblock_modes) == 0)
              goto __CPROVER_DUMP_L15;

          }


        intra:
          ;
          macroblock_modes = macroblock_modes | (signed int)(((unsigned int)inbitbuf >> 32 - 1) * (unsigned int)32);
          Flush_Bits((unsigned int)1);

        __CPROVER_DUMP_L15:
          ;
          return macroblock_modes;
        }
    }
    default:
      return 0;
  }
}

// get_motion_delta
// file requant.c line 840
static inline void get_motion_delta(const signed int f_code)
{
  const struct anonymous$2 *tab;
  if(!((0x80000000 & inbitbuf) == 0u))
  {
    Copy_Bits((unsigned int)1);
    goto __CPROVER_DUMP_L6;
  }

  else
    if(inbitbuf >= 201326592u)
    {
      tab = MV_4 + (signed long int)((unsigned int)inbitbuf >> 32 - 4);
      Copy_Bits((unsigned int)((signed int)tab->len + 1));
      if(!(f_code == 0))
        Copy_Bits((unsigned int)f_code);

      goto __CPROVER_DUMP_L6;
    }

    else
    {
      tab = MV_10 + (signed long int)((unsigned int)inbitbuf >> 32 - 10);
      Copy_Bits((unsigned int)((signed int)tab->len + 1));
      if(!(f_code == 0))
        Copy_Bits((unsigned int)f_code);

      goto __CPROVER_DUMP_L6;
    }

__CPROVER_DUMP_L6:
  ;
}

// get_non_intra_block_rq
// file requant.c line 1163
static signed int get_non_intra_block_rq(struct anonymous *blk)
{
  signed int i;
  signed int li;
  signed int val;
  const struct anonymous$6 *tab;
  i = -1;
  li = i;
  if(inbitbuf >= 671088640u)
  {
    tab = DCT_B14DC_5 + (signed long int)(((unsigned int)inbitbuf >> 32 - 5) - (unsigned int)5);
    goto entry_1;
  }

  else
    goto entry_2;

__CPROVER_DUMP_L2:
  ;
  if(inbitbuf >= 671088640u)
  {
    tab = DCT_B14AC_5 + (signed long int)(((unsigned int)inbitbuf >> 32 - 5) - (unsigned int)5);

  entry_1:
    ;
    i = i + (signed int)tab->run;
    if(i >= 64)
      goto __CPROVER_DUMP_L15;


  normal_code:
    ;
    Flush_Bits((unsigned int)tab->len);
    val = (signed int)tab->level;
    val = (val ^ (signed int)inbitbuf >> 32 - 1) - ((signed int)inbitbuf >> 32 - 1);
    val = (signed int)curTable[(signed long int)val];
    if(!(val == 0))
    {
      blk->level = (signed short int)val;
      blk->run = (unsigned char)((i - li) - 1);
      li = i;
      blk = blk + 1l;
    }

    Flush_Bits((unsigned int)1);
  }

  else
  {

  entry_2:
    ;
    if(inbitbuf >= 67108864u)
    {
      tab = DCT_B14_8 + (signed long int)(((unsigned int)inbitbuf >> 32 - 8) - (unsigned int)4);
      i = i + (signed int)tab->run;
      if(!(i >= 64))
        goto normal_code;

      i = i + (signed int)(((unsigned int)inbitbuf >> 32 - 12 & (unsigned int)0x3F) - (unsigned int)64);
      if(i >= 64)
      {
        sliceError = sliceError + 1;
        goto __CPROVER_DUMP_L15;
      }

      Flush_Bits((unsigned int)12);
      val = (signed int)inbitbuf >> 32 - 12;
      val = (signed int)curTable[(signed long int)val];
      if(!(val == 0))
      {
        blk->level = (signed short int)val;
        blk->run = (unsigned char)((i - li) - 1);
        li = i;
        blk = blk + 1l;
      }

      Flush_Bits((unsigned int)12);
      goto __CPROVER_DUMP_L14;
    }

    else
      if(inbitbuf >= 33554432u)
      {
        tab = DCT_B14_10 + (signed long int)(((unsigned int)inbitbuf >> 32 - 10) - (unsigned int)8);
        i = i + (signed int)tab->run;
        if(!(i >= 64))
          goto normal_code;

      }

      else
        if(inbitbuf >= 8388608u)
        {
          tab = DCT_13 + (signed long int)(((unsigned int)inbitbuf >> 32 - 13) - (unsigned int)16);
          i = i + (signed int)tab->run;
          if(!(i >= 64))
            goto normal_code;

        }

        else
          if(inbitbuf >= 2097152u)
          {
            tab = DCT_15 + (signed long int)(((unsigned int)inbitbuf >> 32 - 15) - (unsigned int)16);
            i = i + (signed int)tab->run;
            if(!(i >= 64))
              goto normal_code;

          }

          else
          {
            tab = DCT_16 + (signed long int)((unsigned int)inbitbuf >> 32 - 16);
            Flush_Bits((unsigned int)16);
            i = i + (signed int)tab->run;
            if(!(i >= 64))
              goto normal_code;

          }
    sliceError = sliceError + 1;
    goto __CPROVER_DUMP_L15;
  }

__CPROVER_DUMP_L14:
  ;
  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L15:
  ;
  Flush_Bits((unsigned int)2);
  blk->level = (signed short int)0;
  return i;
}

// get_non_intra_block_sav
// file requant.c line 1314
static signed int get_non_intra_block_sav(struct anonymous *blk, signed int cc)
{
  signed int i;
  signed int li;
  signed int val;
  const struct anonymous$6 *tab;
  i = -1;
  li = i;
  if(inbitbuf >= 671088640u)
  {
    tab = DCT_B14DC_5 + (signed long int)(((unsigned int)inbitbuf >> 32 - 5) - (unsigned int)5);
    goto entry_1;
  }

  else
    goto entry_2;

__CPROVER_DUMP_L2:
  ;
  if(inbitbuf >= 671088640u)
  {
    tab = DCT_B14AC_5 + (signed long int)(((unsigned int)inbitbuf >> 32 - 5) - (unsigned int)5);

  entry_1:
    ;
    i = i + (signed int)tab->run;
    if(i >= 64)
      goto __CPROVER_DUMP_L19;


  normal_code:
    ;
    Flush_Bits((unsigned int)tab->len);
    val = (signed int)tab->level;
    val = (val ^ (signed int)inbitbuf >> 32 - 1) - ((signed int)inbitbuf >> 32 - 1);
    if(li == -1)
    {
      signed int return_value_abs$1;
      return_value_abs$1=abs(val);
      signed int return_value_abs$2;
      return_value_abs$2=abs(mb_sav_lev);
      if(!(return_value_abs$1 >= return_value_abs$2))
      {
        mb_sav_c = cc;
        mb_sav_lev = val;
        mb_sav_run = (i - li) - 1;
      }

    }

    val = (signed int)curTable[(signed long int)val];
    if(!(val == 0))
    {
      blk->level = (signed short int)val;
      blk->run = (unsigned char)((i - li) - 1);
      li = i;
      blk = blk + 1l;
    }

    Flush_Bits((unsigned int)1);
  }

  else
  {

  entry_2:
    ;
    if(inbitbuf >= 67108864u)
    {
      tab = DCT_B14_8 + (signed long int)(((unsigned int)inbitbuf >> 32 - 8) - (unsigned int)4);
      i = i + (signed int)tab->run;
      if(!(i >= 64))
        goto normal_code;

      i = i + (signed int)(((unsigned int)inbitbuf >> 32 - 12 & (unsigned int)0x3F) - (unsigned int)64);
      if(i >= 64)
      {
        sliceError = sliceError + 1;
        goto __CPROVER_DUMP_L19;
      }

      Flush_Bits((unsigned int)12);
      val = (signed int)inbitbuf >> 32 - 12;
      if(li == -1)
      {
        signed int return_value_abs$3;
        return_value_abs$3=abs(val);
        signed int return_value_abs$4;
        return_value_abs$4=abs(mb_sav_lev);
        if(!(return_value_abs$3 >= return_value_abs$4))
        {
          mb_sav_c = cc;
          mb_sav_lev = val;
          mb_sav_run = (i - li) - 1;
        }

      }

      val = (signed int)curTable[(signed long int)val];
      if(!(val == 0))
      {
        blk->level = (signed short int)val;
        blk->run = (unsigned char)((i - li) - 1);
        li = i;
        blk = blk + 1l;
      }

      Flush_Bits((unsigned int)12);
      goto __CPROVER_DUMP_L18;
    }

    else
      if(inbitbuf >= 33554432u)
      {
        tab = DCT_B14_10 + (signed long int)(((unsigned int)inbitbuf >> 32 - 10) - (unsigned int)8);
        i = i + (signed int)tab->run;
        if(!(i >= 64))
          goto normal_code;

      }

      else
        if(inbitbuf >= 8388608u)
        {
          tab = DCT_13 + (signed long int)(((unsigned int)inbitbuf >> 32 - 13) - (unsigned int)16);
          i = i + (signed int)tab->run;
          if(!(i >= 64))
            goto normal_code;

        }

        else
          if(inbitbuf >= 2097152u)
          {
            tab = DCT_15 + (signed long int)(((unsigned int)inbitbuf >> 32 - 15) - (unsigned int)16);
            i = i + (signed int)tab->run;
            if(!(i >= 64))
              goto normal_code;

          }

          else
          {
            tab = DCT_16 + (signed long int)((unsigned int)inbitbuf >> 32 - 16);
            Flush_Bits((unsigned int)16);
            i = i + (signed int)tab->run;
            if(!(i >= 64))
              goto normal_code;

          }
    sliceError = sliceError + 1;
    goto __CPROVER_DUMP_L19;
  }

__CPROVER_DUMP_L18:
  ;
  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L19:
  ;
  Flush_Bits((unsigned int)2);
  blk->level = (signed short int)0;
  return i;
}

// get_quantizer_scale
// file requant.c line 822
static inline signed int get_quantizer_scale()
{
  signed int quantizer_scale_code = (signed int)((unsigned int)inbitbuf >> 32 - 5);
  Flush_Bits((unsigned int)5);
  if(quantizer_scale_code == 0)
  {
    sliceError = sliceError + 1;
    quantizer_scale_code = quantizer_scale_code + 1;
  }

  if(!(q_scale_type == 0u))
    return non_linear_quantizer_scale[(signed long int)quantizer_scale_code];

  else
    return quantizer_scale_code << 1;
}

// increment_quant
// file requant.c line 522
static signed int increment_quant(signed int quant)
{
  if(!(q_scale_type == 0u))
  {
    if(quant >= 113 || !(quant >= 1))
    {
      if(quant >= 113)
        quant = 112;

      else
        if(!(quant >= 1))
          quant = 1;

      sliceError = sliceError + 1;
    }

    quant = (signed int)map_non_linear_mquant[(signed long int)quant] + 1;
    if(quant >= 32)
      quant = 31;

    quant = (signed int)non_linear_mquant_table[(signed long int)quant];
  }

  else
  {
    if(quant >= 63 || !((1 & quant) == 0) || !(quant >= 2))
    {
      if(!((1 & quant) == 0))
        quant = quant - 1;

      if(quant >= 63)
        quant = 62;

      else
        if(!(quant >= 2))
          quant = 2;

      sliceError = sliceError + 1;
    }

    quant = quant + 2;
    if(quant >= 63)
      quant = 62;

  }
  return quant;
}

// intmax
// file requant.c line 562
static inline signed int intmax(signed int x, signed int y)
{
  return x < y ? y : x;
}

// isNotEmpty
// file requant.c line 608
static inline signed int isNotEmpty(struct anonymous *blk)
{
  return (signed int)blk->level;
}

// lock
// file vamps.c line 383
static inline signed int lock(signed int size)
{
  signed int avail;
  signed int n;
  avail = (signed int)(rhwp - rptr);
  if(avail >= size)
    return 0;

  else
  {
    if(!(avail == 0))
    {
      memcpy((void *)rbuf, (const void *)rptr, (unsigned long int)avail);
      rptr = rbuf;
      rhwp = rptr + (signed long int)avail;
    }

    signed long int return_value_read$1;
    return_value_read$1=read(0, (void *)rhwp, (unsigned long int)(0x1000 * 1024 - avail));
    n = (signed int)return_value_read$1;
    if(!(n % 2048 == 0))
      fatal("Premature EOF");

    rhwp = rhwp + (signed long int)n;
    bytes_read = bytes_read + (unsigned long int)n;
    return (signed int)!(n != 0);
  }
}

// main
// file vamps.c line 185
signed int main(signed int argc, char * const *argv)
{
  signed int c;
  char *s;
  struct stat st;
  unsigned long int thread;
  opterr = 1;
  do
  {
    static struct option long_options[9l] = { { .name="audio", .has_arg=1, .flag=(signed int *)(void *)0, .val=97 },
    { .name="subpictures", .has_arg=1, .flag=(signed int *)(void *)0, .val=115 },
    { .name="evaporate", .has_arg=1, .flag=(signed int *)(void *)0, .val=101 },
    { .name="ps-evaporate", .has_arg=1, .flag=(signed int *)(void *)0, .val=69 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="inject", .has_arg=1, .flag=(signed int *)(void *)0, .val=105 },
    { .name="preserve", .has_arg=0, .flag=(signed int *)(void *)0, .val=112 },
    { .name="ps-size", .has_arg=1, .flag=(signed int *)(void *)0, .val=83 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
    c=getopt_long_only(argc, argv, "a:s:e:E:vi:pS:", long_options, (signed int *)(void *)0);
    if(!(c >= 0))
      break;

    switch(c)
    {
      case 97:
      {
        scan_track_map(audio_track_map, (unsigned int)8);
        break;
      }
      case 115:
      {
        scan_track_map(spu_track_map, (unsigned int)32);
        break;
      }
      case 101:
      {
        calc_ps_vap = 0;
        vap_fact=strtof(optarg, &s);
        if(!(*s == 0))
        {
          fprintf(stderr, "%s: Bad factor. You have to supply a floating point number, e.g. `1.5'.\n\n", optarg);
          usage();
        }

        break;
      }
      case 69:
      {
        calc_ps_vap = 1;
        vap_fact=strtof(optarg, &s);
        if(!(*s == 0))
        {
          fprintf(stderr, "%s: Bad factor. You have to supply a floating point number, e.g. `1.5'.\n\n", optarg);
          usage();
        }

        break;
      }
      case 118:
      {
        verbose = verbose + 1;
        break;
      }
      case 105:
      {
        injections_file = optarg;
        break;
      }
      case 112:
      {
        preserve = 1;
        break;
      }
      case 83:
      {
        ps_size=strtoull(optarg, &s, 10);
        if(ps_size == 0ul || !(*s == 0))
        {
          fprintf(stderr, "%s: Bad program stream size. Please give size in bytes.\n\n", optarg);
          usage();
        }

        break;
      }
      default:
      {
        _IO_putc(10, stderr);
        usage();
      }
    }
  }
  while((_Bool)1);
  if(!(injections_file == ((const char *)NULL)))
    read_injections(injections_file);

  if(ps_size == 0ul)
  {
    signed int return_value_fstat$1;
    return_value_fstat$1=fstat(0, &st);
    if(!((61440u & st.st_mode) == 32768u) || !(return_value_fstat$1 >= 0))
    {
      fputs("Standard input is not a regular file and -S option not given.\n\n", stderr);
      usage();
    }

    ps_size = (unsigned long int)st.st_size;
  }

  void *return_value_malloc$2;
  return_value_malloc$2=malloc((unsigned long int)vbuf_size);
  vibuf = (unsigned char *)return_value_malloc$2;
  void *return_value_malloc$3;
  return_value_malloc$3=malloc((unsigned long int)vbuf_size);
  vobuf = (unsigned char *)return_value_malloc$3;
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  if(vibuf == ((unsigned char *)NULL) || vobuf == ((unsigned char *)NULL))
  {
    return_value___errno_location$4=__errno_location();
    return_value_strerror$5=strerror(*return_value___errno_location$4);
    fatal("Allocation of video buffers failed: %s", return_value_strerror$5);
  }

  signed int return_value_pthread_create$8;
  return_value_pthread_create$8=pthread_create(&thread, (const union pthread_attr_t *)(void *)0, requant_thread, (void *)0);
  signed int *return_value___errno_location$6;
  char *return_value_strerror$7;
  if(!(return_value_pthread_create$8 == 0))
  {
    return_value___errno_location$6=__errno_location();
    return_value_strerror$7=strerror(*return_value___errno_location$6);
    fatal("pthread_create: %s", return_value_strerror$7);
  }

  vaporize();
  if(!(injections_file == ((const char *)NULL)))
    write_injections(injections_file);

  if(verbose >= 1)
  {
    fprintf(stderr, "Info: Total bytes read: %llu\n", bytes_read);
    fprintf(stderr, "Info: Total bytes written: %llu\n", bytes_written);
    fprintf(stderr, "Info: Total sequence headers in video stream: %d\n", sequence_headers);
    fprintf(stderr, "Info: Total navigation packs (system headers/PCI/DSI): %d\n", nav_packs);
    fprintf(stderr, "Info: Total bytes vaporized in audio and subpicture streams: %llu (%.2f%%)\n", (unsigned long int)skipped_aux_packs * (unsigned long int)2048, ((double)skipped_aux_packs / (double)(bytes_read / (unsigned long int)2048)) * 100.0);
    fprintf(stderr, "Info: Total bytes vaporized in cell gaps: %llu (%.2f%%)\n", (unsigned long int)cell_gap_packs * (unsigned long int)2048, ((double)cell_gap_packs / (double)(bytes_read / (unsigned long int)2048)) * 100.0);
    fprintf(stderr, "Info: Total bytes vaporized in video stream: %llu (%.2f%%)\n", (unsigned long int)skipped_video_packs * (unsigned long int)2048, ((double)skipped_video_packs / (double)(bytes_read / (unsigned long int)2048)) * 100.0);
    fprintf(stderr, "Info: Total padding bytes in video stream: %llu (%.2f%%)\n", padding_bytes, ((double)padding_bytes / (double)bytes_written) * 100.0);
    fprintf(stderr, "Info: Total vaporization factor: %.3f\n", (double)bytes_read / (double)bytes_written);
    fprintf(stderr, "Info: Average actual video ES vaporization factor: %.3f\n", (double)vin_bytes / (double)vout_bytes);
  }

  return 0;
}

// motion_fi_16x8
// file requant.c line 1701
static void motion_fi_16x8(unsigned int *f_code)
{
  Copy_Bits((unsigned int)1);
  get_motion_delta((const signed int)f_code[(signed long int)0]);
  get_motion_delta((const signed int)f_code[(signed long int)1]);
  Copy_Bits((unsigned int)1);
  get_motion_delta((const signed int)f_code[(signed long int)0]);
  get_motion_delta((const signed int)f_code[(signed long int)1]);
}

// motion_fi_conceal
// file requant.c line 1723
static void motion_fi_conceal()
{
  Copy_Bits((unsigned int)1);
  get_motion_delta((const signed int)f_code[(signed long int)0][(signed long int)0]);
  get_motion_delta((const signed int)f_code[(signed long int)0][(signed long int)1]);
  Copy_Bits((unsigned int)1);
}

// motion_fi_dmv
// file requant.c line 1714
static void motion_fi_dmv(unsigned int *f_code)
{
  get_motion_delta((const signed int)f_code[(signed long int)0]);
  get_dmv();
  get_motion_delta((const signed int)f_code[(signed long int)1]);
  get_dmv();
}

// motion_fi_field
// file requant.c line 1693
static void motion_fi_field(unsigned int *f_code)
{
  Copy_Bits((unsigned int)1);
  get_motion_delta((const signed int)f_code[(signed long int)0]);
  get_motion_delta((const signed int)f_code[(signed long int)1]);
}

// motion_fr_conceal
// file requant.c line 1685
static void motion_fr_conceal()
{
  get_motion_delta((const signed int)f_code[(signed long int)0][(signed long int)0]);
  get_motion_delta((const signed int)f_code[(signed long int)0][(signed long int)1]);
  Copy_Bits((unsigned int)1);
}

// motion_fr_dmv
// file requant.c line 1676
static void motion_fr_dmv(unsigned int *f_code)
{
  get_motion_delta((const signed int)f_code[(signed long int)0]);
  get_dmv();
  get_motion_delta((const signed int)f_code[(signed long int)1]);
  get_dmv();
}

// motion_fr_field
// file requant.c line 1665
static void motion_fr_field(unsigned int *f_code)
{
  Copy_Bits((unsigned int)1);
  get_motion_delta((const signed int)f_code[(signed long int)0]);
  get_motion_delta((const signed int)f_code[(signed long int)1]);
  Copy_Bits((unsigned int)1);
  get_motion_delta((const signed int)f_code[(signed long int)0]);
  get_motion_delta((const signed int)f_code[(signed long int)1]);
}

// motion_fr_frame
// file requant.c line 1659
static void motion_fr_frame(unsigned int *f_code)
{
  get_motion_delta((const signed int)f_code[(signed long int)0]);
  get_motion_delta((const signed int)f_code[(signed long int)1]);
}

// mpeg2_slice
// file requant.c line 1910
void mpeg2_slice(const signed int code)
{
  signed int return_value_slice_init$1;
  return_value_slice_init$1=slice_init(code);
  signed int return_value_get_quantizer_scale$2;
  if(return_value_slice_init$1 == 0)
    while((_Bool)1)
    {
      signed int macroblock_modes;
      signed int mba_inc;
      const struct anonymous$7 *mba;
      macroblock_modes=get_macroblock_modes();
      if(!((16 & macroblock_modes) == 0))
      {
        return_value_get_quantizer_scale$2=get_quantizer_scale();
        quantizer_scale = (unsigned int)return_value_get_quantizer_scale$2;
      }

      if(!((1 & macroblock_modes) == 0))
      {
        signed int return_value_getNewQuant$3;
        return_value_getNewQuant$3=getNewQuant((signed int)quantizer_scale, 1);
        new_quantizer_scale = (unsigned int)return_value_getNewQuant$3;
        if(last_coded_scale == new_quantizer_scale)
          macroblock_modes = macroblock_modes & (signed int)0xFFFFFFEF;

        else
          macroblock_modes = macroblock_modes | 16;
        putaddrinc(mb_add + mb_skip);
        mb_skip = 0;
        putmbdata(macroblock_modes);
        if(!((16 & macroblock_modes) == 0))
          put_quantiser((signed int)new_quantizer_scale);

        if(!(concealment_motion_vectors == 0u))
        {
          if(picture_structure == 3u)
            motion_fr_conceal();

          else
            motion_fi_conceal();
        }

        curTable = quant_tables[(signed long int)quant_equ[(signed long int)quantizer_scale]][(signed long int)quant_equ[(signed long int)new_quantizer_scale]];
        if(curTable == ((signed short int *)NULL))
          curTable = quant_table_id;

        slice_intra_DCT(0);
        slice_intra_DCT(0);
        slice_intra_DCT(0);
        slice_intra_DCT(0);
        slice_intra_DCT(1);
        slice_intra_DCT(2);
      }

      else
      {
        signed int new_coded_block_pattern = 0;
        signed int batb;
        unsigned char n_owbuf[32l];
        unsigned char *n_wbuf;
        unsigned char *o_owbuf;
        unsigned char *o_wbuf;
        unsigned int n_outbitcnt;
        unsigned int n_outbitbuf;
        unsigned int o_outbitcnt;
        unsigned int o_outbitbuf;
        o_owbuf = owbuf;
        o_wbuf = wbuf$link1;
        o_outbitcnt = (unsigned int)outbitcnt;
        o_outbitbuf = outbitbuf;
        wbuf$link1 = n_owbuf;
        owbuf = wbuf$link1;
        outbitcnt = 8;
        outbitbuf = (unsigned int)0;
        if(picture_structure == 3u)
        {
          if(!((3 & macroblock_modes) == 2))
          {
            if((3 & macroblock_modes) == 1)
              goto __CPROVER_DUMP_L13;

            if((3 & macroblock_modes) == 3)
              goto __CPROVER_DUMP_L16;

          }

          else
          {
            do
            {
              if(!((8 & macroblock_modes) == 0))
                motion_fr_frame(f_code[(signed long int)0]);

              if(!((4 & macroblock_modes) == 0))
                motion_fr_frame(f_code[(signed long int)1]);

            }
            while((_Bool)0);
            goto __CPROVER_DUMP_L19;

          __CPROVER_DUMP_L13:
            ;
            do
            {
              if(!((8 & macroblock_modes) == 0))
                motion_fr_field(f_code[(signed long int)0]);

              if(!((4 & macroblock_modes) == 0))
                motion_fr_field(f_code[(signed long int)1]);

            }
            while((_Bool)0);
            goto __CPROVER_DUMP_L19;

          __CPROVER_DUMP_L16:
            ;
            do
              motion_fr_dmv(f_code[(signed long int)0]);
            while((_Bool)0);
          }
        }

        else
          if(!((3 & macroblock_modes) == 1))
          {
            if((3 & macroblock_modes) == 2)
              goto __CPROVER_DUMP_L24;

            if((3 & macroblock_modes) == 3)
              goto __CPROVER_DUMP_L27;

          }

          else
          {
            do
            {
              if(!((8 & macroblock_modes) == 0))
                motion_fi_field(f_code[(signed long int)0]);

              if(!((4 & macroblock_modes) == 0))
                motion_fi_field(f_code[(signed long int)1]);

            }
            while((_Bool)0);
            goto __CPROVER_DUMP_L30;

          __CPROVER_DUMP_L24:
            ;
            do
            {
              if(!((8 & macroblock_modes) == 0))
                motion_fi_16x8(f_code[(signed long int)0]);

              if(!((4 & macroblock_modes) == 0))
                motion_fi_16x8(f_code[(signed long int)1]);

            }
            while((_Bool)0);
            goto __CPROVER_DUMP_L30;

          __CPROVER_DUMP_L27:
            ;
            do
              motion_fi_dmv(f_code[(signed long int)0]);
            while((_Bool)0);
          }

      __CPROVER_DUMP_L19:
        ;

      __CPROVER_DUMP_L30:
        ;
        n_wbuf = wbuf$link1;
        n_outbitcnt = (unsigned int)outbitcnt;
        n_outbitbuf = outbitbuf;
        owbuf = o_owbuf;
        wbuf$link1 = o_wbuf;
        outbitcnt = (signed int)o_outbitcnt;
        outbitbuf = o_outbitbuf;
        signed int return_value_getNewQuant$4;
        return_value_getNewQuant$4=getNewQuant((signed int)quantizer_scale, 0);
        new_quantizer_scale = (unsigned int)return_value_getNewQuant$4;
        if(!((2 & macroblock_modes) == 0))
        {
          signed int coded_block_pattern;
          coded_block_pattern=get_coded_block_pattern();
          mb_sav_lev = 0xFFFF;
          curTable = quant_tables[(signed long int)quant_equ[(signed long int)quantizer_scale]][(signed long int)quant_equ[(signed long int)new_quantizer_scale]];
          if(curTable == ((signed short int *)NULL))
            curTable = quant_table_id;

          if(!((0x20 & coded_block_pattern) == 0))
          {
            slice_non_intra_DCT(0);
            signed int return_value_isNotEmpty$5;
            return_value_isNotEmpty$5=isNotEmpty(block[(signed long int)0]);
            if(!(return_value_isNotEmpty$5 == 0))
              new_coded_block_pattern = new_coded_block_pattern | 0x20;

          }

          if(!((0x10 & coded_block_pattern) == 0))
          {
            slice_non_intra_DCT(1);
            signed int return_value_isNotEmpty$6;
            return_value_isNotEmpty$6=isNotEmpty(block[(signed long int)1]);
            if(!(return_value_isNotEmpty$6 == 0))
              new_coded_block_pattern = new_coded_block_pattern | 0x10;

          }

          if(!((0x08 & coded_block_pattern) == 0))
          {
            slice_non_intra_DCT(2);
            signed int return_value_isNotEmpty$7;
            return_value_isNotEmpty$7=isNotEmpty(block[(signed long int)2]);
            if(!(return_value_isNotEmpty$7 == 0))
              new_coded_block_pattern = new_coded_block_pattern | 0x08;

          }

          if(!((0x04 & coded_block_pattern) == 0))
          {
            slice_non_intra_DCT(3);
            signed int return_value_isNotEmpty$8;
            return_value_isNotEmpty$8=isNotEmpty(block[(signed long int)3]);
            if(!(return_value_isNotEmpty$8 == 0))
              new_coded_block_pattern = new_coded_block_pattern | 0x04;

          }

          if(!((0x02 & coded_block_pattern) == 0))
          {
            slice_non_intra_DCT(4);
            signed int return_value_isNotEmpty$9;
            return_value_isNotEmpty$9=isNotEmpty(block[(signed long int)4]);
            if(!(return_value_isNotEmpty$9 == 0))
              new_coded_block_pattern = new_coded_block_pattern | 0x02;

          }

          if(!((0x01 & coded_block_pattern) == 0))
          {
            slice_non_intra_DCT(5);
            signed int return_value_isNotEmpty$10;
            return_value_isNotEmpty$10=isNotEmpty(block[(signed long int)5]);
            if(!(return_value_isNotEmpty$10 == 0))
              new_coded_block_pattern = new_coded_block_pattern | 0x01;

          }

          if(new_coded_block_pattern == 0)
          {
            macroblock_modes = macroblock_modes & (signed int)0xFFFFFFED;
            if((8 & macroblock_modes) == 0 && picture_coding_type == 2u)
            {
              if(h_offset == 0 || (unsigned int)h_offset == horizontal_size_value + 4294967280u)
              {
                new_coded_block_pattern = 1 << 5 - mb_sav_c;
                macroblock_modes = macroblock_modes | 2;
                new_quantizer_scale = quantizer_scale;
                block[(signed long int)mb_sav_c][(signed long int)0].run = (unsigned char)mb_sav_run;
                block[(signed long int)mb_sav_c][(signed long int)0].level = (signed short int)mb_sav_lev;
                block[(signed long int)mb_sav_c][(signed long int)1].run = (unsigned char)0;
                block[(signed long int)mb_sav_c][(signed long int)1].level = (signed short int)0;
              }

              else
              {
                mb_skip = mb_skip + mb_add;
                goto skip_mb;
              }
            }

          }

        }

        if(last_coded_scale == new_quantizer_scale)
          macroblock_modes = macroblock_modes & (signed int)0xFFFFFFEF;

        else
          if(!((2 & macroblock_modes) == 0))
            macroblock_modes = macroblock_modes | 16;

        putaddrinc(mb_add + mb_skip);
        mb_skip = 0;
        putmbdata(macroblock_modes);
        if(!((16 & macroblock_modes) == 0))
          put_quantiser((signed int)new_quantizer_scale);

        batb = 0;
        for( ; !((signed long int)batb >= n_wbuf - n_owbuf); batb = batb + 1)
          putbits((unsigned int)n_owbuf[(signed long int)batb], 8);
        putbits(n_outbitbuf, (signed int)((unsigned int)8 - n_outbitcnt));
        if(!((2 & macroblock_modes) == 0))
        {
          putcbp(new_coded_block_pattern);
          if(!((0x20 & new_coded_block_pattern) == 0))
            putnonintrablk(block[(signed long int)0]);

          if(!((0x10 & new_coded_block_pattern) == 0))
            putnonintrablk(block[(signed long int)1]);

          if(!((0x08 & new_coded_block_pattern) == 0))
            putnonintrablk(block[(signed long int)2]);

          if(!((0x04 & new_coded_block_pattern) == 0))
            putnonintrablk(block[(signed long int)3]);

          if(!((0x02 & new_coded_block_pattern) == 0))
            putnonintrablk(block[(signed long int)4]);

          if(!((0x01 & new_coded_block_pattern) == 0))
            putnonintrablk(block[(signed long int)5]);

        }

      }
      do
      {

      skip_mb:
        ;
        h_offset = h_offset + 16;
        if((unsigned int)h_offset == horizontal_size_value)
        {
          v_offset = v_offset + 16;
          if(!(vertical_size_value + 4294967280u >= (unsigned int)v_offset))
            goto __CPROVER_DUMP_L74;

          h_offset = 0;
        }

      }
      while((_Bool)0);
      mba_inc = 0;
      while((_Bool)1)
        if(inbitbuf >= 268435456u)
        {
          mba = MBA_5 + (signed long int)(((unsigned int)inbitbuf >> 32 - 5) - (unsigned int)2);
          break;
        }

        else
          if(inbitbuf >= 50331648u)
          {
            mba = MBA_11 + (signed long int)(((unsigned int)inbitbuf >> 32 - 11) - (unsigned int)24);
            break;
          }

          else
          {
            if(inbitbuf >> 32 == 8u)
            {
              mba_inc = mba_inc + 33;
              Flush_Bits((unsigned int)11);
              continue;
            }

            if(!(h_offset == 0))
              sliceError = sliceError + 1;

            goto __CPROVER_DUMP_L74;
          }
      Flush_Bits((unsigned int)mba->len);
      mba_inc = mba_inc + (signed int)mba->mba;
      mb_add = mba_inc + 1;
      if(!(mba_inc == 0))
        do
        {

        __CPROVER_DUMP_L69:
          ;
          h_offset = h_offset + 16;
          if((unsigned int)h_offset == horizontal_size_value)
          {
            v_offset = v_offset + 16;
            if(!(vertical_size_value + 4294967280u >= (unsigned int)v_offset))
              goto __CPROVER_DUMP_L74;

            h_offset = 0;
          }

          mba_inc = mba_inc - 1;
        }
        while(!(mba_inc == 0));

    }


__CPROVER_DUMP_L74:
  ;
}

// new_mpeg_audio_id
// file vamps.c line 700
static inline signed int new_mpeg_audio_id(signed int id)
{
  signed int track = audio_track_map[(signed long int)(id - 0xc0)];
  return track != 0 ? (track - 1) + 0xc0 : 0;
}

// new_private_1_type
// file vamps.c line 629
static inline signed int new_private_1_type(unsigned char *ptr)
{
  signed int type;
  signed int track;
  signed int abase;
  type = (signed int)ptr[(signed long int)(6 + 3 + (signed int)ptr[(signed long int)8])];
  if(type >= 0x20 && !(type >= 64))
  {
    track = spu_track_map[(signed long int)(type - 0x20)];
    return track != 0 ? (track - 1) + 0x20 : 0;
  }

  else
  {
    if(type >= 0x80 && !(type >= 136))
      abase = 0x80;

    else
      if(type >= 0x88 && !(type >= 144))
        abase = 0x88;

      else
        if(type >= 0xa0 && !(type >= 168))
          abase = 0xa0;

        else
        {
          unsigned long int return_value_rtell$1;
          return_value_rtell$1=rtell(ptr);
          fatal("Unknown private stream 1 type at %llu: %02x", return_value_rtell$1, type);
          abase = 0;
        }
    track = audio_track_map[(signed long int)(type - abase)];
    return track != 0 ? (track - 1) + abase : 0;
  }
}

// putAC
// file requant.c line 616
signed int putAC(signed int run, signed int signed_level, signed int vlcformat)
{
  signed int level;
  signed int len;
  const struct anonymous$0 *ptab = (const struct anonymous$0 *)(void *)0;
  level = signed_level < 0 ? -signed_level : signed_level;
  if(run >= 64 || !(run >= 0))
  {
    sliceError = sliceError + 1;
    return 1;
  }

  else
    if(level == 0 || level >= 2048)
    {
      sliceError = sliceError + 1;
      return 1;
    }

    else
    {
      len = 0;
      if(!(level >= 41) && !(run >= 2))
      {
        if(!(vlcformat == 0))
          ptab = &dct_code_tab1a[(signed long int)run][(signed long int)(level - 1)];

        else
          ptab = &dct_code_tab1[(signed long int)run][(signed long int)(level - 1)];
        len = (signed int)ptab->len;
      }

      else
        if(!(level >= 6) && !(run >= 32))
        {
          if(!(vlcformat == 0))
            ptab = &dct_code_tab2a[(signed long int)(run - 2)][(signed long int)(level - 1)];

          else
            ptab = &dct_code_tab2[(signed long int)(run - 2)][(signed long int)(level - 1)];
          len = (signed int)ptab->len;
        }

      if(!(len == 0))
      {
        putbits((unsigned int)ptab->code, len);
        putbits((unsigned int)(signed_level < 0), 1);
      }

      else
      {
        putbits((unsigned int)1l, 6);
        putbits((unsigned int)run, 6);
        putbits((unsigned int)signed_level & (unsigned int)0xFFF, 12);
      }
      return 0;
    }
}

// putACfirst
// file requant.c line 668
static inline signed int putACfirst(signed int run, signed int val)
{
  signed int return_value_putAC$1;
  if(run == 0 && (val == 1 || val == -1))
  {
    putbits((unsigned int)(2 | (val < 0 ? 1 : 0)), 2);
    return 0;
  }

  else
  {
    return_value_putAC$1=putAC(run, val, 0);
    return return_value_putAC$1;
  }
}

// put_quantiser
// file requant.c line 1821
static inline void put_quantiser(signed int quantiser)
{
  signed int tmp_if_expr$1;
  if(!(q_scale_type == 0u))
    tmp_if_expr$1 = (signed int)map_non_linear_mquant[(signed long int)quantiser];

  else
    tmp_if_expr$1 = quantiser >> 1;
  putbits((unsigned int)tmp_if_expr$1, 5);
  last_coded_scale = (unsigned int)quantiser;
}

// putaddrinc
// file requant.c line 1827
static void putaddrinc(signed int addrinc)
{
  mb_out = mb_out + addrinc;
  if(!(horizontal_size_value >> 4 >= (unsigned int)mb_out))
    sliceError = sliceError + 1;

  for( ; addrinc >= 34; addrinc = addrinc - 33)
    putbits((unsigned int)0x08, 11);
  putbits((unsigned int)addrinctab[(signed long int)(addrinc - 1)].code, (signed int)addrinctab[(signed long int)(addrinc - 1)].len);
}

// putbits
// file requant.c line 388
static inline void putbits(unsigned int val, signed int n)
{
  for( ; n >= outbitcnt; outbitcnt = 8)
  {
    wbuf$link1[(signed long int)0] = (unsigned char)(outbitbuf << outbitcnt | val >> n - outbitcnt);
    wbuf$link1 = wbuf$link1 + (signed long int)1;
    n = n - outbitcnt;
    outbitbuf = (unsigned int)0;
    val = val & ~(0xffffffffU << n);
  }
  if(!(n == 0))
  {
    outbitbuf = outbitbuf << n | val;
    outbitcnt = outbitcnt - n;
  }

}

// putcbp
// file requant.c line 694
static inline void putcbp(signed int cbp)
{
  putbits((unsigned int)cbptable[(signed long int)cbp].code, (signed int)cbptable[(signed long int)cbp].len);
}

// putmbdata
// file requant.c line 1752
void putmbdata(signed int macroblock_modes)
{
  putmbtype(macroblock_modes & 0x1F);
  if(!((12 & macroblock_modes) == 0))
  {
    if(picture_structure == 3u)
    {
      if(frame_pred_frame_dct == 0u)
        putbits((unsigned int)((macroblock_modes & 3 * 64) / 64), 2);

    }

    else
      putbits((unsigned int)((macroblock_modes & 3 * 64) / 64), 2);
  }

  if(frame_pred_frame_dct == 0u && picture_structure == 3u && !((3 & macroblock_modes) == 0))
    putbits((unsigned int)((macroblock_modes & 32) != 0 ? 1 : 0), 1);

}

// putmbtype
// file requant.c line 700
static void putmbtype(signed int mb_type)
{
  putbits((unsigned int)mbtypetab[(signed long int)(picture_coding_type - (unsigned int)1)][(signed long int)mb_type].code, (signed int)mbtypetab[(signed long int)(picture_coding_type - (unsigned int)1)][(signed long int)mb_type].len);
}

// putnonintrablk
// file requant.c line 678
void putnonintrablk(struct anonymous *blk)
{
  signed int return_value_putACfirst$1;
  return_value_putACfirst$1=putACfirst((signed int)blk->run, (signed int)blk->level);
  if(return_value_putACfirst$1 == 0)
  {
    blk = blk + 1l;
    while(!(blk->level == 0))
    {
      signed int return_value_putAC$2;
      return_value_putAC$2=putAC((signed int)blk->run, (signed int)blk->level, 0);
      if(!(return_value_putAC$2 == 0))
        goto __CPROVER_DUMP_L4;

      blk = blk + 1l;
    }
    putbits((unsigned int)2, 2);
  }


__CPROVER_DUMP_L4:
  ;
}

// read_injections
// file vamps.c line 1270
void read_injections(const char *filename)
{
  unsigned int i;
  struct _IO_FILE *fp;
  fp=fopen(filename, "r");
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    i = (unsigned int)0;
    for( ; !((unsigned long int)i >= 13ul); i = i + 1u)
    {
      signed int return_value_fscanf$1;
      return_value_fscanf$1=fscanf(fp, injections[(signed long int)i].f, injections[(signed long int)i].p);
      if(!(return_value_fscanf$1 == 1))
        fatal("Bad format of injections file: %s", filename);

    }
    fclose(fp);
  }

}

// requant
// file vamps.c line 582
static inline signed int requant(unsigned char *dst, unsigned char *src, signed int n, float fact)
{
  signed int rv;
  memcpy((void *)(src + (signed long int)n), (const void *)"\0\0\001", (unsigned long int)3);
  pthread_mutex_lock(&mutr);
  rqt_rptr = src;
  rqt_wptr = dst;
  rqt_rcnt = n;
  rqt_wcnt = 0;
  rqt_fact = fact;
  rqt_inbytes = vin_bytes;
  rqt_outbytes = vout_bytes;
  rqt_visize = (unsigned long int)(((float)ps_size * (float)vin_bytes) / ((float)total_packs * (float)2048));
  pthread_cond_signal(&condr);
  pthread_mutex_unlock(&mutr);
  pthread_mutex_lock(&mutw);
  while(rqt_wcnt == 0)
    pthread_cond_wait(&condw, &mutw);
  rv = rqt_wcnt;
  pthread_mutex_unlock(&mutw);
  if(verbose >= 2)
    fprintf(stderr, "Info: Actual video ES vaporization factor: %.3f\n", (double)n / (double)rv);

  return rv;
}

// requant_thread
// file requant.c line 2184
void * requant_thread(void *p)
{
  unsigned char ID;
  unsigned char found;
  signed long long int greedyFactor;
  signed long long int greedyFactor2;
  signed int i;
  validPicHeader = 0;
  validSeqHeader = 0;
  validExtHeader = 0;
  greedyFactor = orim2vsize / (signed long int)100;
  greedyFactor2 = orim2vsize / (signed long int)50;
  if(fact_x <= 1.000000f)
  {
    i_factor = i_factors[(signed long int)0];
    p_factor = p_factors[(signed long int)0];
    b_factor = b_factors[(signed long int)0];
    i_min_stress = i_min_stresses[(signed long int)0];
    p_min_stress = p_min_stresses[(signed long int)0];
    b_min_stress = b_min_stresses[(signed long int)0];
  }

  else
    if(fact_x >= 10.000000f)
    {
      i_factor = i_factors[(signed long int)2];
      p_factor = p_factors[(signed long int)2];
      b_factor = b_factors[(signed long int)2];
      i_min_stress = i_min_stresses[(signed long int)2];
      p_min_stress = p_min_stresses[(signed long int)2];
      b_min_stress = b_min_stresses[(signed long int)2];
    }

    else
      if(fact_x <= 3.000000f)
      {
        double requant_thread$$1$$3$$inter = ((double)fact_x - 1.0) / (3.0 - 1.0);
        i_factor = (signed int)((double)i_factors[(signed long int)0] + requant_thread$$1$$3$$inter * (double)(i_factors[(signed long int)1] - i_factors[(signed long int)0]));
        p_factor = (signed int)((double)p_factors[(signed long int)0] + requant_thread$$1$$3$$inter * (double)(p_factors[(signed long int)1] - p_factors[(signed long int)0]));
        b_factor = (signed int)((double)b_factors[(signed long int)0] + requant_thread$$1$$3$$inter * (double)(b_factors[(signed long int)1] - b_factors[(signed long int)0]));
        i_min_stress = i_min_stresses[(signed long int)0] + requant_thread$$1$$3$$inter * (i_min_stresses[(signed long int)1] - i_min_stresses[(signed long int)0]);
        p_min_stress = p_min_stresses[(signed long int)0] + requant_thread$$1$$3$$inter * (p_min_stresses[(signed long int)1] - p_min_stresses[(signed long int)0]);
        b_min_stress = b_min_stresses[(signed long int)0] + requant_thread$$1$$3$$inter * (b_min_stresses[(signed long int)1] - b_min_stresses[(signed long int)0]);
      }

      else
      {
        double inter = ((double)fact_x - 3.0) / (10.0 - 3.0);
        i_factor = (signed int)((double)i_factors[(signed long int)1] + inter * (double)(i_factors[(signed long int)2] - i_factors[(signed long int)1]));
        p_factor = (signed int)((double)p_factors[(signed long int)1] + inter * (double)(p_factors[(signed long int)2] - p_factors[(signed long int)1]));
        b_factor = (signed int)((double)b_factors[(signed long int)1] + inter * (double)(b_factors[(signed long int)2] - b_factors[(signed long int)1]));
        i_min_stress = i_min_stresses[(signed long int)1] + inter * (i_min_stresses[(signed long int)2] - i_min_stresses[(signed long int)1]);
        p_min_stress = p_min_stresses[(signed long int)1] + inter * (p_min_stresses[(signed long int)2] - p_min_stresses[(signed long int)1]);
        b_min_stress = b_min_stresses[(signed long int)1] + inter * (b_min_stresses[(signed long int)2] - b_min_stresses[(signed long int)1]);
      }
  i = -2048;
  for( ; !(i >= 2048); i = i + 1)
    quant_table_id[(signed long int)i] = (signed short int)i;
  i = 0;
  for( ; !(i >= 42); i = i + 1)
  {
    signed int q = quantisers[(signed long int)i];
    signed int j = i + 1;
    for( ; !(j >= 42); j = j + 1)
    {
      signed int nq = quantisers[(signed long int)j];
      signed int k;
      signed short int *cTab = quant_tables[(signed long int)quant_equ[(signed long int)q]][(signed long int)quant_equ[(signed long int)nq]];
      k = -2048;
      for( ; !(k >= 2048); k = k + 1)
      {
        signed int ov = k * q;
        signed int t = ov / nq;
        if((double)fact_x <= max_alt_table)
        {
          signed int t2;
          signed int t3;
          signed int d;
          signed int d2;
          signed int d3;
          signed int nv;
          signed int nv2;
          signed int nv3;
          t2 = t + 1;
          t3 = t - 1;
          nv = t * nq;
          nv2 = t2 * nq;
          nv3 = t3 * nq;
          d=abs(nv - ov);
          d2=abs(nv2 - ov);
          d3=abs(nv3 - ov);
          if(!(d2 >= d))
          {
            d = d2;
            t = t2;
          }

          if(!(d3 >= d))
            t = t3;

        }

        if(t >= 2048)
          t = 2047;

        else
          if(!(t >= -2048))
            t = -2048;

        cTab[(signed long int)k] = (signed short int)t;
      }
    }
  }
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$14;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$16;
  _Bool tmp_if_expr$15;
  while((_Bool)1)
  {
    found = (unsigned char)0;
    while(found == 0)
    {
      if(!(rbuf$link1 - cbuf >= 8l))
      {
        if(!(wbuf$link1 == ((unsigned char *)NULL)))
        {
          pthread_mutex_lock(&mutw);
          rqt_wcnt = (signed int)(wbuf$link1 - owbuf);
          pthread_cond_signal(&condw);
          pthread_mutex_unlock(&mutw);
        }

        pthread_mutex_lock(&mutr);
        while(rqt_rcnt == 0)
          pthread_cond_wait(&condr, &mutr);
        cbuf = rqt_rptr;
        rbuf$link1 = cbuf;
        rbuf$link1 = rbuf$link1 + (signed long int)(rqt_rcnt + 3);
        rqt_rcnt = 0;
        owbuf = rqt_wptr;
        fact_x = rqt_fact;
        inbytecnt = rqt_inbytes;
        outbytecnt = rqt_outbytes;
        orim2vsize = (signed long long int)rqt_visize;
        pthread_mutex_unlock(&mutr);
        wbuf$link1 = owbuf;
      }

      if((signed int)cbuf[7l] == 0)
        tmp_if_expr$3 = (signed int)cbuf[(signed long int)6] == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$3 = (_Bool)0;
      if(tmp_if_expr$3)
        tmp_if_expr$4 = (signed int)cbuf[(signed long int)5] == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$4 = (_Bool)0;
      if(tmp_if_expr$4)
        tmp_if_expr$5 = (signed int)cbuf[(signed long int)4] == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$5 = (_Bool)0;
      if(tmp_if_expr$5)
        tmp_if_expr$6 = (signed int)cbuf[(signed long int)3] == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$6 = (_Bool)0;
      if(tmp_if_expr$6)
        tmp_if_expr$7 = (signed int)cbuf[(signed long int)2] == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$7 = (_Bool)0;
      if(tmp_if_expr$7)
        tmp_if_expr$8 = (signed int)cbuf[(signed long int)1] == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$8 = (_Bool)0;
      if(tmp_if_expr$8)
        tmp_if_expr$9 = (signed int)cbuf[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$9 = (_Bool)0;
      if(tmp_if_expr$9)
        cbuf = cbuf + (signed long int)1;

      else
      {
        if((signed int)*cbuf == 0)
          tmp_if_expr$1 = (signed int)cbuf[(signed long int)1] == 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$1 = (_Bool)0;
        if(tmp_if_expr$1)
          tmp_if_expr$2 = (signed int)cbuf[(signed long int)2] == 1 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        if(tmp_if_expr$2)
          found = (unsigned char)1;

        else
        {
          memcpy((void *)wbuf$link1, (const void *)cbuf, (unsigned long int)1);
          cbuf = cbuf + (signed long int)1;
          wbuf$link1 = wbuf$link1 + (signed long int)1;
        }
      }
    }
    memcpy((void *)wbuf$link1, (const void *)cbuf, (unsigned long int)3);
    cbuf = cbuf + (signed long int)3;
    wbuf$link1 = wbuf$link1 + (signed long int)3;
    if(!(rbuf$link1 - cbuf >= 1l))
    {
      if(!(wbuf$link1 == ((unsigned char *)NULL)))
      {
        pthread_mutex_lock(&mutw);
        rqt_wcnt = (signed int)(wbuf$link1 - owbuf);
        pthread_cond_signal(&condw);
        pthread_mutex_unlock(&mutw);
      }

      pthread_mutex_lock(&mutr);
      while(rqt_rcnt == 0)
        pthread_cond_wait(&condr, &mutr);
      cbuf = rqt_rptr;
      rbuf$link1 = cbuf;
      rbuf$link1 = rbuf$link1 + (signed long int)(rqt_rcnt + 3);
      rqt_rcnt = 0;
      owbuf = rqt_wptr;
      fact_x = rqt_fact;
      inbytecnt = rqt_inbytes;
      outbytecnt = rqt_outbytes;
      orim2vsize = (signed long long int)rqt_visize;
      pthread_mutex_unlock(&mutr);
      wbuf$link1 = owbuf;
    }

    ID = cbuf[(signed long int)0];
    memcpy((void *)wbuf$link1, (const void *)cbuf, (unsigned long int)1);
    cbuf = cbuf + (signed long int)1;
    wbuf$link1 = wbuf$link1 + (signed long int)1;
    if((signed int)ID == 0x00)
    {
      if(!(rbuf$link1 - cbuf >= 4l))
      {
        if(!(wbuf$link1 == ((unsigned char *)NULL)))
        {
          pthread_mutex_lock(&mutw);
          rqt_wcnt = (signed int)(wbuf$link1 - owbuf);
          pthread_cond_signal(&condw);
          pthread_mutex_unlock(&mutw);
        }

        pthread_mutex_lock(&mutr);
        while(rqt_rcnt == 0)
          pthread_cond_wait(&condr, &mutr);
        cbuf = rqt_rptr;
        rbuf$link1 = cbuf;
        rbuf$link1 = rbuf$link1 + (signed long int)(rqt_rcnt + 3);
        rqt_rcnt = 0;
        owbuf = rqt_wptr;
        fact_x = rqt_fact;
        inbytecnt = rqt_inbytes;
        outbytecnt = rqt_outbytes;
        orim2vsize = (signed long long int)rqt_visize;
        pthread_mutex_unlock(&mutr);
        wbuf$link1 = owbuf;
      }

      picture_coding_type = (unsigned int)((signed int)cbuf[(signed long int)1] >> 3 & 0x7);
      if(picture_coding_type >= 4u || !(picture_coding_type >= 1u))
        validPicHeader = 0;

      else
      {
        validPicHeader = 1;
        cbuf[(signed long int)1] = cbuf[(signed long int)1] | (unsigned char)0x7;
        cbuf[(signed long int)2] = (unsigned char)0xFF;
        cbuf[(signed long int)3] = cbuf[(signed long int)3] | (unsigned char)0xF8;
      }
      validExtHeader = 0;
      memcpy((void *)wbuf$link1, (const void *)cbuf, (unsigned long int)4);
      cbuf = cbuf + (signed long int)4;
      wbuf$link1 = wbuf$link1 + (signed long int)4;
    }

    else
      if((signed int)ID == 0xB3)
      {
        if(!(rbuf$link1 - cbuf >= 8l))
        {
          if(!(wbuf$link1 == ((unsigned char *)NULL)))
          {
            pthread_mutex_lock(&mutw);
            rqt_wcnt = (signed int)(wbuf$link1 - owbuf);
            pthread_cond_signal(&condw);
            pthread_mutex_unlock(&mutw);
          }

          pthread_mutex_lock(&mutr);
          while(rqt_rcnt == 0)
            pthread_cond_wait(&condr, &mutr);
          cbuf = rqt_rptr;
          rbuf$link1 = cbuf;
          rbuf$link1 = rbuf$link1 + (signed long int)(rqt_rcnt + 3);
          rqt_rcnt = 0;
          owbuf = rqt_wptr;
          fact_x = rqt_fact;
          inbytecnt = rqt_inbytes;
          outbytecnt = rqt_outbytes;
          orim2vsize = (signed long long int)rqt_visize;
          pthread_mutex_unlock(&mutr);
          wbuf$link1 = owbuf;
        }

        horizontal_size_value = (unsigned int)((signed int)cbuf[(signed long int)0] << 4 | (signed int)cbuf[(signed long int)1] >> 4);
        vertical_size_value = (unsigned int)(((signed int)cbuf[(signed long int)1] & 0xF) << 8 | (signed int)cbuf[(signed long int)2]);
        if(horizontal_size_value >= 721u || vertical_size_value >= 577u || !((15u & horizontal_size_value) == 0u) || !((15u & vertical_size_value) == 0u) || !(horizontal_size_value >= 352u) || !(vertical_size_value >= 480u))
          validSeqHeader = 0;

        else
          validSeqHeader = 1;
        validPicHeader = 0;
        validExtHeader = 0;
        memcpy((void *)wbuf$link1, (const void *)cbuf, (unsigned long int)8);
        cbuf = cbuf + (signed long int)8;
        wbuf$link1 = wbuf$link1 + (signed long int)8;
      }

      else
        if((signed int)ID == 0xB5)
        {
          if(!(rbuf$link1 - cbuf >= 1l))
          {
            if(!(wbuf$link1 == ((unsigned char *)NULL)))
            {
              pthread_mutex_lock(&mutw);
              rqt_wcnt = (signed int)(wbuf$link1 - owbuf);
              pthread_cond_signal(&condw);
              pthread_mutex_unlock(&mutw);
            }

            pthread_mutex_lock(&mutr);
            while(rqt_rcnt == 0)
              pthread_cond_wait(&condr, &mutr);
            cbuf = rqt_rptr;
            rbuf$link1 = cbuf;
            rbuf$link1 = rbuf$link1 + (signed long int)(rqt_rcnt + 3);
            rqt_rcnt = 0;
            owbuf = rqt_wptr;
            fact_x = rqt_fact;
            inbytecnt = rqt_inbytes;
            outbytecnt = rqt_outbytes;
            orim2vsize = (signed long long int)rqt_visize;
            pthread_mutex_unlock(&mutr);
            wbuf$link1 = owbuf;
          }

          if((signed int)*cbuf >> 4 == 0x8)
          {
            if(!(rbuf$link1 - cbuf >= 5l))
            {
              if(!(wbuf$link1 == ((unsigned char *)NULL)))
              {
                pthread_mutex_lock(&mutw);
                rqt_wcnt = (signed int)(wbuf$link1 - owbuf);
                pthread_cond_signal(&condw);
                pthread_mutex_unlock(&mutw);
              }

              pthread_mutex_lock(&mutr);
              while(rqt_rcnt == 0)
                pthread_cond_wait(&condr, &mutr);
              cbuf = rqt_rptr;
              rbuf$link1 = cbuf;
              rbuf$link1 = rbuf$link1 + (signed long int)(rqt_rcnt + 3);
              rqt_rcnt = 0;
              owbuf = rqt_wptr;
              fact_x = rqt_fact;
              inbytecnt = rqt_inbytes;
              outbytecnt = rqt_outbytes;
              orim2vsize = (signed long long int)rqt_visize;
              pthread_mutex_unlock(&mutr);
              wbuf$link1 = owbuf;
            }

            f_code[(signed long int)0][(signed long int)0] = (unsigned int)(((signed int)cbuf[(signed long int)0] & 0xF) - 1);
            f_code[(signed long int)0][(signed long int)1] = (unsigned int)(((signed int)cbuf[(signed long int)1] >> 4) - 1);
            f_code[(signed long int)1][(signed long int)0] = (unsigned int)(((signed int)cbuf[(signed long int)1] & 0xF) - 1);
            f_code[(signed long int)1][(signed long int)1] = (unsigned int)(((signed int)cbuf[(signed long int)2] >> 4) - 1);
            intra_dc_precision = (unsigned int)((signed int)cbuf[(signed long int)2] >> 2 & 0x3);
            picture_structure = (unsigned int)((signed int)cbuf[(signed long int)2] & 0x3);
            frame_pred_frame_dct = (unsigned int)((signed int)cbuf[(signed long int)3] >> 6 & 0x1);
            concealment_motion_vectors = (unsigned int)((signed int)cbuf[(signed long int)3] >> 5 & 0x1);
            q_scale_type = (unsigned int)((signed int)cbuf[(signed long int)3] >> 4 & 0x1);
            intra_vlc_format = (unsigned int)((signed int)cbuf[(signed long int)3] >> 3 & 0x1);
            alternate_scan = (unsigned int)((signed int)cbuf[(signed long int)3] >> 2 & 0x1);
            if(f_code[0l][0l] >= 9u)
              tmp_if_expr$10 = f_code[(signed long int)0][(signed long int)0] < (unsigned int)14 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$10 = (_Bool)0;
            if(tmp_if_expr$10)
              tmp_if_expr$12 = (_Bool)1;

            else
            {
              if(f_code[0l][1l] >= 9u)
                tmp_if_expr$11 = f_code[(signed long int)0][(signed long int)1] < (unsigned int)14 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$11 = (_Bool)0;
              tmp_if_expr$12 = tmp_if_expr$11 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$12)
              tmp_if_expr$14 = (_Bool)1;

            else
            {
              if(f_code[1l][0l] >= 9u)
                tmp_if_expr$13 = f_code[(signed long int)1][(signed long int)0] < (unsigned int)14 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$13 = (_Bool)0;
              tmp_if_expr$14 = tmp_if_expr$13 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$14)
              tmp_if_expr$16 = (_Bool)1;

            else
            {
              if(f_code[1l][1l] >= 9u)
                tmp_if_expr$15 = f_code[(signed long int)1][(signed long int)1] < (unsigned int)14 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$15 = (_Bool)0;
              tmp_if_expr$16 = tmp_if_expr$15 ? (_Bool)1 : (_Bool)0;
            }
            if(picture_structure == 0u || tmp_if_expr$16)
              validExtHeader = 0;

            else
              validExtHeader = 1;
            memcpy((void *)wbuf$link1, (const void *)cbuf, (unsigned long int)5);
            cbuf = cbuf + (signed long int)5;
            wbuf$link1 = wbuf$link1 + (signed long int)5;
          }

          else
          {
            memcpy((void *)wbuf$link1, (const void *)cbuf, (unsigned long int)1);
            cbuf = cbuf + (signed long int)1;
            wbuf$link1 = wbuf$link1 + (signed long int)1;
          }
        }

        else
          if((signed int)ID == 0xB8)
          {
            if(!(rbuf$link1 - cbuf >= 4l))
            {
              if(!(wbuf$link1 == ((unsigned char *)NULL)))
              {
                pthread_mutex_lock(&mutw);
                rqt_wcnt = (signed int)(wbuf$link1 - owbuf);
                pthread_cond_signal(&condw);
                pthread_mutex_unlock(&mutw);
              }

              pthread_mutex_lock(&mutr);
              while(rqt_rcnt == 0)
                pthread_cond_wait(&condr, &mutr);
              cbuf = rqt_rptr;
              rbuf$link1 = cbuf;
              rbuf$link1 = rbuf$link1 + (signed long int)(rqt_rcnt + 3);
              rqt_rcnt = 0;
              owbuf = rqt_wptr;
              fact_x = rqt_fact;
              inbytecnt = rqt_inbytes;
              outbytecnt = rqt_outbytes;
              orim2vsize = (signed long long int)rqt_visize;
              pthread_mutex_unlock(&mutr);
              wbuf$link1 = owbuf;
            }

            memcpy((void *)wbuf$link1, (const void *)cbuf, (unsigned long int)4);
            cbuf = cbuf + (signed long int)4;
            wbuf$link1 = wbuf$link1 + (signed long int)4;
          }

          else
            if((signed int)ID >= 0x01 && !(validExtHeader == 0) && !(validPicHeader == 0) && !(validSeqHeader == 0) && !((signed int)ID >= 176))
            {
              unsigned char *outTemp = wbuf$link1;
              unsigned char *inTemp = cbuf;
              signed long long int threshold;
              bytediff = (signed long long int)((float)(outbytecnt + (unsigned long int)(wbuf$link1 - owbuf)) - (float)(inbytecnt - (unsigned long int)(rbuf$link1 - cbuf)) / fact_x);
              if(!(inbytecnt >= (unsigned long int)greedyFactor2))
                threshold = (signed long long int)(inbytecnt >> 1);

              else
                if(!((unsigned long int)orim2vsize + -inbytecnt >= (unsigned long int)greedyFactor2))
                  threshold = (signed long long int)((unsigned long int)orim2vsize - inbytecnt >> 1);

                else
                  threshold = greedyFactor;
              if(!(threshold >= 1024l))
                threshold = (signed long long int)1024;

              stress_factor = (double)((float)(bytediff + threshold) / (float)(threshold << 1));
              if(stress_factor > 1.000000)
                stress_factor = (double)1.0f;

              else
                if(stress_factor < 0.000000)
                  stress_factor = (double)0.0f;

              if(picture_coding_type == 1u && stress_factor > i_min_stress || picture_coding_type == 2u && stress_factor > p_min_stress || picture_coding_type == 3u && stress_factor > b_min_stress)
              {
                sliceError = 0;
                inbitbuf = (unsigned int)0;
                inbitcnt = 0;
                outbitbuf = (unsigned int)0;
                outbitcnt = 8;
                Refill_bits();
                Refill_bits();
                Refill_bits();
                Refill_bits();
                mpeg2_slice((const signed int)ID);
                flush_read_buffer();
                flush_write_buffer();
                if(sliceError >= 1 || !(cbuf - inTemp >= wbuf$link1 - outTemp))
                {
                  memcpy((void *)outTemp, (const void *)inTemp, (unsigned long int)(cbuf - inTemp));
                  wbuf$link1 = outTemp + (cbuf - inTemp);
                  outbytecnt = outbytecnt - (unsigned long long int)((wbuf$link1 - outTemp) - (cbuf - inTemp));
                }

              }

            }

    if(wbuf$link1 - owbuf >= 1l)
    {
      orbuf = orbuf;
      mloka1 = mloka1;
      mloka2 = mloka2;
      eof$link1 = eof$link1;
    }

  }
  return NULL;
}

// rtell
// file vamps.c line 456
static inline unsigned long int rtell(unsigned char *ptr)
{
  return bytes_read - (unsigned long int)(rhwp - ptr);
}

// scale_quant
// file requant.c line 493
static signed int scale_quant(double quant)
{
  signed int iquant;
  if(!(q_scale_type == 0u))
  {
    double return_value_floor$1;
    return_value_floor$1=floor(quant + 0.5);
    iquant = (signed int)return_value_floor$1;
    if(!(iquant >= 1))
      iquant = 1;

    if(iquant >= 113)
      iquant = 112;

    iquant = (signed int)non_linear_mquant_table[(signed long int)map_non_linear_mquant[(signed long int)iquant]];
  }

  else
  {
    double return_value_floor$2;
    return_value_floor$2=floor(quant + 0.5);
    iquant = (signed int)return_value_floor$2;
    if(!(iquant >= 2))
      iquant = 2;

    if(iquant >= 63)
      iquant = 62;

    iquant = (iquant / 2) * 2;
  }
  return iquant;
}

// scan_track_map
// file vamps.c line 360
void scan_track_map(signed int *map, unsigned int ntracks)
{
  unsigned int i = (unsigned int)1;
  unsigned int track;
  char *op = optarg;
  unsigned int tmp_post$1;
  _Bool tmp_if_expr$3;
  char *tmp_post$2;
  do
  {
    signed long int return_value_strtol$4;
    return_value_strtol$4=strtol(op, &op, 10);
    track = (unsigned int)(return_value_strtol$4 - (signed long int)1);
    if(track >= ntracks)
      usage();

    map[(signed long int)track] = (signed int)i;
    tmp_post$1 = i;
    i = i + 1u;
    if(ntracks >= tmp_post$1)
    {
      tmp_post$2 = op;
      op = op + 1l;
      tmp_if_expr$3 = *tmp_post$2 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$3 = (_Bool)0;
  }
  while(tmp_if_expr$3);
}

// skip
// file vamps.c line 429
static inline void skip(signed int size)
{
  rptr = rptr + (signed long int)size;
}

// slice_init
// file requant.c line 1845
static inline signed int slice_init(signed int code)
{
  signed int offset;
  const struct anonymous$7 *mba;
  mb_out = 0;
  v_offset = (code - 1) * 16;
  signed int return_value_get_quantizer_scale$1;
  return_value_get_quantizer_scale$1=get_quantizer_scale();
  quantizer_scale = (unsigned int)return_value_get_quantizer_scale$1;
  signed int return_value_getNewQuant$2;
  return_value_getNewQuant$2=getNewQuant((signed int)quantizer_scale, 0);
  new_quantizer_scale = (unsigned int)return_value_getNewQuant$2;
  put_quantiser((signed int)new_quantizer_scale);
  while(!((0x80000000 & inbitbuf) == 0u))
    Flush_Bits((unsigned int)9);
  offset = 0;
  while((_Bool)1)
    if(inbitbuf >= 134217728u)
    {
      mba = MBA_5 + (signed long int)(((unsigned int)inbitbuf >> 32 - 6) - (unsigned int)2);
      break;
    }

    else
      if(inbitbuf >= 25165824u)
      {
        mba = MBA_11 + (signed long int)(((unsigned int)inbitbuf >> 32 - 12) - (unsigned int)24);
        break;
      }

      else
      {
        if(inbitbuf >> 32 == 8u)
        {
          offset = offset + 33;
          Flush_Bits((unsigned int)11);
          continue;
        }

        sliceError = sliceError + 1;
        return 1;
      }
  mb_add = offset + (signed int)mba->mba + 1;
  mb_skip = 0;
  Copy_Bits((unsigned int)1);
  Flush_Bits((unsigned int)mba->len);
  h_offset = offset + (signed int)mba->mba << 4;
  for( ; h_offset + -((signed int)horizontal_size_value) >= 0; v_offset = v_offset + 16)
    h_offset = h_offset - (signed int)horizontal_size_value;
  if(!(vertical_size_value + 4294967280u >= (unsigned int)v_offset))
    return 1;

  else
    return 0;
}

// slice_intra_DCT
// file requant.c line 1595
static inline void slice_intra_DCT(const signed int cc)
{
  if(cc == 0)
    get_luma_dc_dct_diff();

  else
    get_chroma_dc_dct_diff();
  if(!(intra_vlc_format == 0u))
    get_intra_block_B15();

  else
    get_intra_block_B14();
}

// slice_non_intra_DCT
// file requant.c line 1639
static inline void slice_non_intra_DCT(signed int cur_block)
{
  if(picture_coding_type == 2u && (h_offset == 0 || (unsigned int)h_offset == horizontal_size_value + 4294967280u))
    get_non_intra_block_sav(block[(signed long int)cur_block], cur_block);

  else
    get_non_intra_block_rq(block[(signed long int)cur_block]);
}

// usage
// file vamps.c line 1335
void usage(void)
{
  fputs("Vamps V0.99.2\n\nUsage: vamps [--evaporate|-e factor] [--ps-evaporate|-E factor]\n             [--audio|-a a-stream,a-stream,...]\n             [--subpictures|-s s-stream,s-stream,...] [--verbose|-v]\n             [--inject|-i injections-file]\n             [--preserve|-p] [--ps-size|-S input-bytes]\n\nVamps evaporates DVD compliant MPEG2 program streams by\nselectively copying audio and subpicture streams and by re-quantizing\nthe embedded elementary video stream. The shrink factor may be either\nspecified for the video ES only (-e) or for the full PS (-E).\n", stderr);
  exit(1);
}

// vap_leader
// file vamps.c line 740
static void vap_leader(void)
{
  unsigned char *ptr;
  signed int id;
  signed int data_length;
  signed int return_value_lock$1;
  signed int return_value_check_video_packet$2;
  unsigned long int return_value_rtell$3;
  signed int tmp_statement_expression$5;
  _Bool tmp_if_expr$7;
  unsigned long int return_value_rtell$4;
  do
  {
    return_value_lock$1=lock(2048);
    if(!(return_value_lock$1 == 0))
      break;

    ptr = rptr;
    check_pack(ptr);
    ptr = ptr + (signed long int)14;
    id = (signed int)ptr[(signed long int)3];
    switch(id)
    {
      case 0xe0:
      {
        return_value_check_video_packet$2=check_video_packet(ptr);
        if(!(return_value_check_video_packet$2 == 0))
          goto __CPROVER_DUMP_L17;

        copy(2048);
        break;
      }
      case 0xbd:
      {
        copy_private_1(ptr);
        break;
      }
      case 0xc0:

      case 0xc1:

      case 0xc2:

      case 0xc3:

      case 0xc4:

      case 0xc5:

      case 0xc6:

      case 0xc7:
      {
        copy_mpeg_audio(ptr);
        break;
      }
      case 0xbb:
      {
        copy(2048);
        break;
      }
      case 0xbe:
      {
        data_length = (signed int)ptr[(signed long int)4] << 8;
        data_length = data_length | (signed int)ptr[(signed long int)5];
        if(!(data_length == 2028))
        {
          return_value_rtell$3=rtell(ptr);
          fatal("Bad padding packet length at %llu: %d", return_value_rtell$3, data_length);
        }

        break;
      }
      case 0xbf:
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp$6;
        return_value___builtin_strcmp$6=__builtin_strcmp((char *)(ptr + (signed long int)6), "Vamps-data");
        tmp_statement_expression$5 = return_value___builtin_strcmp$6;
        if(!(tmp_statement_expression$5 == 0))
          tmp_if_expr$7 = (_Bool)1;

        else
          tmp_if_expr$7 = (signed int)ptr[(signed long int)17] != 0x01 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$7)
        {
          return_value_rtell$4=rtell(ptr);
          fatal("Misplaced private stream 2 pack at %llu", return_value_rtell$4);
        }

        skip(2048);
        break;
      }
      default:
      {
        unsigned long int return_value_rtell$8;
        return_value_rtell$8=rtell(ptr);
        fatal("Encountered stream ID %02x at %llu, probably bad MPEG2 program stream", id, return_value_rtell$8);
      }
    }
    if(wptr == wbuf + 4194304l)
      flush();

  }
  while((_Bool)1);
  eof = 1;
  flush();
  goto __CPROVER_DUMP_L17;

__CPROVER_DUMP_L17:
  ;
}

// vap_phase1
// file vamps.c line 885
static inline signed int vap_phase1(void)
{
  unsigned char *ptr;
  unsigned char *viptr = vibuf;
  signed int seq_length;
  signed int id;
  signed int data_length;
  signed int opt_length;
  signed int seqhdr;
  signed int cell_gap;
  seq_length = 0;
  signed int return_value_lock$1;
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  signed int return_value_new_private_1_type$6;
  signed int return_value_new_mpeg_audio_id$7;
  unsigned long int return_value_rtell$8;
  signed int tmp_statement_expression$10;
  _Bool tmp_if_expr$12;
  unsigned long int return_value_rtell$9;
  signed int tmp_post$13;
  do
  {
    return_value_lock$1=lock(seq_length + 2048);
    if(!(return_value_lock$1 == 0))
      break;

    ptr = rptr + (signed long int)seq_length;
    check_pack(ptr);
    if(!(seq_length == 0))
      total_packs = total_packs + 1;

    ptr = ptr + (signed long int)14;
    id = (signed int)ptr[(signed long int)3];
    switch(id)
    {
      case 0xe0:
      {
        seqhdr=check_video_packet(ptr);
        if(!(seq_length == 0))
        {
          video_packs = video_packs + 1;
          if(!(seqhdr == 0))
          {
            sequence_headers = sequence_headers + 1;
            vilen = (signed int)(viptr - vibuf);
            return seq_length;
          }

        }

        data_length = (signed int)ptr[(signed long int)4] << 8;
        data_length = data_length | (signed int)ptr[(signed long int)5];
        opt_length = 3 + (signed int)ptr[(signed long int)8];
        data_length = data_length - opt_length;
        if(!((signed long int)(vbuf_size + -3) >= (viptr - vibuf) + (signed long int)data_length))
        {
          signed int i = (signed int)(viptr - vibuf);
          vbuf_size = vbuf_size + 1024 * 1024;
          void *return_value_realloc$2;
          return_value_realloc$2=realloc((void *)vibuf, (unsigned long int)vbuf_size);
          vibuf = (unsigned char *)return_value_realloc$2;
          void *return_value_realloc$3;
          return_value_realloc$3=realloc((void *)vobuf, (unsigned long int)vbuf_size);
          vobuf = (unsigned char *)return_value_realloc$3;
          if(vibuf == ((unsigned char *)NULL) || vobuf == ((unsigned char *)NULL))
          {
            return_value___errno_location$4=__errno_location();
            return_value_strerror$5=strerror(*return_value___errno_location$4);
            fatal("Reallocation of video buffers failed: %s", return_value_strerror$5);
          }

          viptr = vibuf + (signed long int)i;
        }

        memcpy((void *)viptr, (const void *)(ptr + (signed long int)6 + (signed long int)opt_length), (unsigned long int)data_length);
        viptr = viptr + (signed long int)data_length;
        break;
      }
      case 0xbd:
      {
        aux_packs = aux_packs + 1;
        return_value_new_private_1_type$6=new_private_1_type(ptr);
        if(return_value_new_private_1_type$6 == 0)
          skipped_aux_packs = skipped_aux_packs + 1;

        break;
      }
      case 0xc0:

      case 0xc1:

      case 0xc2:

      case 0xc3:

      case 0xc4:

      case 0xc5:

      case 0xc6:

      case 0xc7:
      {
        aux_packs = aux_packs + 1;
        return_value_new_mpeg_audio_id$7=new_mpeg_audio_id(id);
        if(return_value_new_mpeg_audio_id$7 == 0)
          skipped_aux_packs = skipped_aux_packs + 1;

        break;
      }
      case 0xbb:
      {
        nav_packs = nav_packs + 1;
        break;
      }
      case 0xbe:
      {
        skipped_aux_packs = skipped_aux_packs + 1;
        data_length = (signed int)ptr[(signed long int)4] << 8;
        data_length = data_length | (signed int)ptr[(signed long int)5];
        if(!(data_length == 2028))
        {
          return_value_rtell$8=rtell(ptr);
          fatal("Bad padding packet length at %llu: %d", return_value_rtell$8, data_length);
        }

        break;
      }
      case 0xbf:
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp$11;
        return_value___builtin_strcmp$11=__builtin_strcmp((char *)(ptr + (signed long int)6), "Vamps-data");
        tmp_statement_expression$10 = return_value___builtin_strcmp$11;
        if(!(tmp_statement_expression$10 == 0))
          tmp_if_expr$12 = (_Bool)1;

        else
          tmp_if_expr$12 = (signed int)ptr[(signed long int)17] != 0x01 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$12)
        {
          return_value_rtell$9=rtell(ptr);
          fatal("Misplaced private stream 2 pack at %llu", return_value_rtell$9);
        }

        cell_gap = (signed int)ptr[(signed long int)18] << 8;
        cell_gap = cell_gap | (signed int)ptr[(signed long int)19];
        tmp_post$13 = cell_gap;
        cell_gap = cell_gap - 1;
        cell_gap_packs = cell_gap_packs + tmp_post$13;
        total_packs = total_packs + cell_gap;
        bytes_read = bytes_read + (unsigned long int)(cell_gap * 2048);
        break;
      }
      default:
      {
        unsigned long int return_value_rtell$14;
        return_value_rtell$14=rtell(ptr);
        fatal("Encountered stream ID %02x at %llu, probably bad MPEG2 program stream", id, return_value_rtell$14);
      }
    }
    seq_length = seq_length + 2048;
  }
  while((_Bool)1);
  eof = 1;
  return seq_length;
}

// vap_phase2
// file vamps.c line 1089
static inline void vap_phase2(signed int seq_length)
{
  signed int i;
  signed int id;
  signed int avail;
  signed int data_length;
  unsigned char *ptr;
  unsigned char *voptr = vobuf;
  unsigned char *vohwp = vobuf + (signed long int)volen;
  i = 0;
  unsigned long int return_value_rtell$2;
  signed int tmp_statement_expression$4;
  _Bool tmp_if_expr$6;
  unsigned long int return_value_rtell$3;
  for( ; !(i >= seq_length); i = i + 2048)
  {
    ptr = rptr + (signed long int)14;
    id = (signed int)ptr[(signed long int)3];
    switch(id)
    {
      case 0xe0:
      {
        avail = (signed int)(vohwp - voptr);
        if(!(avail == 0))
        {
          signed int return_value_gen_video_packet$1;
          return_value_gen_video_packet$1=gen_video_packet(ptr, voptr, avail);
          voptr = voptr + (signed long int)return_value_gen_video_packet$1;
          copy(2048);
        }

        else
        {
          skip(2048);
          skipped_video_packs = skipped_video_packs + 1;
        }
        break;
      }
      case 0xbd:
      {
        copy_private_1(ptr);
        break;
      }
      case 0xc0:

      case 0xc1:

      case 0xc2:

      case 0xc3:

      case 0xc4:

      case 0xc5:

      case 0xc6:

      case 0xc7:
      {
        copy_mpeg_audio(ptr);
        break;
      }
      case 0xbb:
      {
        copy(2048);
        break;
      }
      case 0xbe:
      {
        data_length = (signed int)ptr[(signed long int)4] << 8;
        data_length = data_length | (signed int)ptr[(signed long int)5];
        if(!(data_length == 2028))
        {
          return_value_rtell$2=rtell(ptr);
          fatal("Bad padding packet length at %llu: %d", return_value_rtell$2, data_length);
        }

        break;
      }
      case 0xbf:
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp$5;
        return_value___builtin_strcmp$5=__builtin_strcmp((char *)(ptr + (signed long int)6), "Vamps-data");
        tmp_statement_expression$4 = return_value___builtin_strcmp$5;
        if(!(tmp_statement_expression$4 == 0))
          tmp_if_expr$6 = (_Bool)1;

        else
          tmp_if_expr$6 = (signed int)ptr[(signed long int)17] != 0x01 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$6)
        {
          return_value_rtell$3=rtell(ptr);
          fatal("Misplaced private stream 2 pack at %llu", return_value_rtell$3);
        }

        skip(2048);
        break;
      }
      default:
      {
        unsigned long int return_value_rtell$7;
        return_value_rtell$7=rtell(ptr);
        fatal("Encountered stream ID %02x at %llu, probably bad MPEG2 program stream", id, return_value_rtell$7);
      }
    }
    if(wptr == wbuf + 4194304l)
      flush();

  }
}

// vap_trailer
// file vamps.c line 825
static void vap_trailer(signed int length)
{
  unsigned char *ptr;
  signed int i;
  signed int id;
  signed int data_length;
  i = 0;
  unsigned long int return_value_rtell$1;
  signed int tmp_statement_expression$3;
  _Bool tmp_if_expr$5;
  unsigned long int return_value_rtell$2;
  for( ; !(i >= length); i = i + 2048)
  {
    ptr = rptr + (signed long int)14;
    id = (signed int)ptr[(signed long int)3];
    if(id == 0xbd)
      copy_private_1(ptr);

    else
      if(id >= 0xc0 && !(id >= 200))
        copy_mpeg_audio(ptr);

      else
        if(id == 0xbe)
        {
          data_length = (signed int)ptr[(signed long int)4] << 8;
          data_length = data_length | (signed int)ptr[(signed long int)5];
          if(!(data_length == 2028))
          {
            return_value_rtell$1=rtell(ptr);
            fatal("Bad padding packet length at %llu: %d", return_value_rtell$1, data_length);
          }

        }

        else
          if(id == 0xbf)
          {
            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$4;
            return_value___builtin_strcmp$4=__builtin_strcmp((char *)(ptr + (signed long int)6), "Vamps-data");
            tmp_statement_expression$3 = return_value___builtin_strcmp$4;
            if(!(tmp_statement_expression$3 == 0))
              tmp_if_expr$5 = (_Bool)1;

            else
              tmp_if_expr$5 = (signed int)ptr[(signed long int)17] != 0x01 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$5)
            {
              return_value_rtell$2=rtell(ptr);
              fatal("Misplaced private stream 2 pack at %llu", return_value_rtell$2);
            }

            skip(2048);
          }

          else
            copy(2048);
    if(wptr == wbuf + 4194304l)
      flush();

  }
  flush();
}

// vaporize
// file vamps.c line 1177
void vaporize(void)
{
  signed int seq_length;
  float fact = vap_fact;
  vap_leader();
  if(eof == 0)
  {
    total_packs = total_packs + 1;
    nav_packs = nav_packs + 1;
    total_packs = total_packs + 1;
    video_packs = video_packs + 1;
    while((_Bool)1)
    {
      seq_length=vap_phase1();
      if(!(eof == 0))
      {
        vap_trailer(seq_length);
        goto __CPROVER_DUMP_L10;
      }

      if(vap_fact > 1.0f && !(calc_ps_vap == 0))
      {
        float vop;
        float net = (float)(2048 - (14 + 9));
        vop = (float)(video_packs + skipped_aux_packs + cell_gap_packs) - (float)total_packs * (1.0f - 1.0f / vap_fact);
        fact = ((float)video_packs * net - (((float)sequence_headers * net) / 2.0f + 10.0f)) / (vop * net - (((float)sequence_headers * net) / 2.0f + 10.0f));
        if(fact < 1.0f)
          fact = 1.0f;

        if(verbose >= 2)
          fprintf(stderr, "Info: Target video ES vaporization factor: %.3f\n", fact);

      }

      vin_bytes = vin_bytes + (unsigned long int)vilen;
      if(fact > 1.0f)
        volen=requant(vobuf, vibuf, vilen, fact);

      else
      {
        memcpy((void *)vobuf, (const void *)vibuf, (unsigned long int)vilen);
        volen = vilen;
      }
      vout_bytes = vout_bytes + (unsigned long int)volen;
      vap_phase2(seq_length);
    }
  }


__CPROVER_DUMP_L10:
  ;
}

// write_injections
// file vamps.c line 1292
void write_injections(const char *filename)
{
  unsigned int i;
  struct _IO_FILE *fp;
  fp=fopen(filename, "w");
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    return_value___errno_location$1=__errno_location();
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    fatal("Failed creating injections file: %s: %s", filename, return_value_strerror$2);
  }

  i = (unsigned int)0;
  for( ; !((unsigned long int)i >= 13ul); i = i + 1u)
  {
    switch(injections[(signed long int)i].s)
    {
      case 4:
      {
        fprintf(fp, injections[(signed long int)i].f, *((unsigned int *)injections[(signed long int)i].p));
        break;
      }
      case 8:
      {
        fprintf(fp, injections[(signed long int)i].f, *((unsigned long int *)injections[(signed long int)i].p));
        break;
      }
      default:
        abort();
    }
    _IO_putc(10, fp);
  }
  signed int return_value_fclose$3;
  return_value_fclose$3=fclose(fp);
  if(!(return_value_fclose$3 == 0))
    fatal("Failed writing injections file: %s: %s");

}

