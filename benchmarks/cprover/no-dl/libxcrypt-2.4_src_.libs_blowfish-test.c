// tag-#anon#ST[*{S8}_S8_'hash'||*{S8}_S8_'pw'|]
// file blowfish-test.c line 18
struct anonymous_5;

// tag-#anon#ST[ARR4{ARR256{U32}_U32_}_ARR256{U32}_U32__'S'||ARR18{U32}_U32_'P'|]
// file crypt_blowfish.c line 65
struct anonymous_3;

// tag-#anon#ST[ARR5{U32}_U32_'state'||ARR2{U32}_U32_'count'||ARR64{U8}_U8_'buffer'|]
// file xcrypt.h line 189
struct anonymous_1;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_0;

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

// tag-crypt_data
// file xcrypt.h line 45
struct crypt_data;

// tag-itimerval
// file /usr/include/x86_64-linux-gnu/sys/time.h line 107
struct itimerval;

// tag-md5_ctx
// file xcrypt.h line 110
struct md5_ctx;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-tms
// file /usr/include/x86_64-linux-gnu/sys/times.h line 34
struct tms;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// BF_decode
// file crypt_blowfish.c line 389
static signed int BF_decode(unsigned int *dst, const char *src, signed int size);
// BF_encode
// file crypt_blowfish.c line 413
static void BF_encode(char *dst, const unsigned int *src, signed int size);
// BF_set_key
// file crypt_blowfish.c line 547
static void BF_set_key(const char *key, unsigned int *expanded, unsigned int *initial);
// BF_swap
// file crypt_blowfish.c line 445
static void BF_swap(unsigned int *x, signed int count);
// __SHA1Final
// file sha.c line 231
extern void __SHA1Final(unsigned char *digest, struct anonymous_1 *context);
// __SHA1Init
// file sha.c line 187
extern void __SHA1Init(struct anonymous_1 *context);
// __SHA1Transform
// file sha.c line 70
extern void __SHA1Transform(unsigned int *state, unsigned char *buffer);
// __SHA1Update
// file sha.c line 203
extern void __SHA1Update(struct anonymous_1 *context, unsigned char *data, unsigned int len);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __bigcrypt
// file wrapper.c line 161
char * __bigcrypt(const char *key, const char *salt);
// __bigcrypt_r
// file crypt-private.h line 60
extern char * __bigcrypt_r(const char *key, const char *salt, struct crypt_data * restrict data);
// __des_crypt_r
// file crypt-entry.c line 61
extern char * __des_crypt_r(const char *key, const char *salt, struct crypt_data * restrict data);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __init_des
// file crypt_util.c line 540
extern void __init_des(void);
// __init_des_r
// file crypt_util.c line 342
extern void __init_des_r(struct crypt_data * restrict __data);
// __md5_buffer
// file md5.c line 179
extern void * __md5_buffer(const char *buffer, unsigned long int len, void *resblock);
// __md5_crypt
// file md5-crypt.c line 237
extern char * __md5_crypt(const char *key, const char *salt);
// __md5_crypt_r
// file md5-crypt.c line 46
extern char * __md5_crypt_r(const char *key, const char *salt, char *buffer, signed int buflen);
// __md5_finish_ctx
// file xcrypt.h line 152
extern void * __md5_finish_ctx(struct md5_ctx *ctx, void *resbuf);
// __md5_init_ctx
// file xcrypt.h line 129
extern void __md5_init_ctx(struct md5_ctx *ctx);
// __md5_process_block
// file md5.c line 287
extern void __md5_process_block(const void *buffer, unsigned long int len, struct md5_ctx *ctx);
// __md5_process_bytes
// file xcrypt.h line 142
extern void __md5_process_bytes(const void *buffer, unsigned long int len, struct md5_ctx *ctx);
// __md5_read_ctx
// file md5.c line 73
extern void * __md5_read_ctx(struct md5_ctx *ctx, void *resbuf);
// __md5_stream
// file md5.c line 122
extern signed int __md5_stream(struct _IO_FILE *stream, void *resblock);
// __sha_crypt
// file sha-crypt.c line 89
extern char * __sha_crypt(const char *key, const char *salt);
// __sha_crypt_r
// file xcrypt.h line 203
extern char * __sha_crypt_r(const char *key, const char *salt, char *buffer, signed int buflen);
// __stpncpy
// file /usr/include/string.h line 573
extern char * __stpncpy(char *, const char *, unsigned long int);
// __xcrypt
// file wrapper.c line 152
char * __xcrypt(const char *key, const char *salt);
// __xcrypt_gensalt
// file wrapper.c line 223
char * __xcrypt_gensalt(const char *prefix, unsigned long int count, const char *input, signed int size);
// __xcrypt_gensalt_ra
// file wrapper.c line 205
char * __xcrypt_gensalt_ra(const char *prefix, unsigned long int count, const char *input, signed int size);
// __xcrypt_gensalt_rn
// file wrapper.c line 167
char * __xcrypt_gensalt_rn(const char *prefix, unsigned long int count, const char *input, signed int size, char *output, signed int output_size);
// __xcrypt_gensalt_rn::1::use_object
//
char * use_object(unsigned long int, const char *, signed int, char *, signed int);
// __xcrypt_r
// file wrapper.c line 145
char * __xcrypt_r(const char *key, const char *salt, struct crypt_data *data);
// __xcrypt_ra
// file wrapper.c line 110
char * __xcrypt_ra(const char *key, const char *salt, void **data, signed int *size);
// __xcrypt_rn
// file wrapper.c line 86
char * __xcrypt_rn(const char *key, const char *salt, void *data, signed int size);
// __xencrypt
// file crypt_util.c line 868
void __xencrypt(char *__block, signed int __edflag);
// __xencrypt_r
// file crypt_util.c line 773
void __xencrypt_r(char *__block, signed int __edflag, struct crypt_data * restrict __data);
// __xsetkey
// file crypt_util.c line 900
void __xsetkey(const char *__key);
// __xsetkey_r
// file crypt_util.c line 881
void __xsetkey_r(const char *__key, struct crypt_data * restrict __data);
// _ufc_dofinalperm_r
// file crypt-private.h line 44
extern void _ufc_dofinalperm_r(unsigned long int *res, struct crypt_data * restrict __data);
// _ufc_doit_r
// file crypt-private.h line 32
extern void _ufc_doit_r(unsigned long int itr, struct crypt_data * restrict __data, unsigned long int *res);
// _ufc_mk_keytab_r
// file crypt-private.h line 42
extern void _ufc_mk_keytab_r(const char *key, struct crypt_data * restrict __data);
// _ufc_output_conversion_r
// file crypt-private.h line 46
extern void _ufc_output_conversion_r(unsigned long int v1, unsigned long int v2, const char *salt, struct crypt_data * restrict __data);
// _ufc_setup_salt_r
// file crypt-private.h line 40
extern void _ufc_setup_salt_r(const char *s, struct crypt_data * restrict __data);
// _xcrypt_blowfish_rn
// file crypt_blowfish.c line 567
char * _xcrypt_blowfish_rn(const char *key, const char *setting, char *output, signed int size);
// _xcrypt_data_alloc
// file wrapper.c line 34
static signed int _xcrypt_data_alloc(void **data, signed int *size, signed int need);
// _xcrypt_gensalt_blowfish_rn
// file crypt_blowfish.c line 719
char * _xcrypt_gensalt_blowfish_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size);
// _xcrypt_gensalt_extended_rn
// file crypt_gensalt.c line 45
char * _xcrypt_gensalt_extended_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size);
// _xcrypt_gensalt_md5_rn
// file crypt_gensalt.c line 78
char * _xcrypt_gensalt_md5_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size);
// _xcrypt_gensalt_sha_rn
// file crypt_gensalt.c line 116
char * _xcrypt_gensalt_sha_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size);
// _xcrypt_gensalt_traditional_rn
// file crypt_gensalt.c line 29
char * _xcrypt_gensalt_traditional_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size);
// _xcrypt_retval_magic
// file wrapper.c line 58
static char * _xcrypt_retval_magic(char *retval, const char *salt, char *output);
// base64encode
// file sha-crypt.c line 20
static signed int base64encode(char *encoded, const unsigned char *string, signed int len);
// clean
// file crypt_blowfish.c line 369
static void clean(void *data, signed int size);
// ferror
// file /usr/include/stdio.h line 830
extern signed int ferror(struct _IO_FILE *);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// handle_timer
// file blowfish-test.c line 40
static void handle_timer(signed int signum);
// memchr
// file /usr/include/string.h line 96
extern void * memchr(const void *, signed int, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_0 *);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// run
// file blowfish-test.c line 45
static void * run(void *arg);
// setitimer
// file /usr/include/x86_64-linux-gnu/sys/time.h line 131
extern signed int setitimer(signed int, struct itimerval *, struct itimerval *);
// shuffle_sb
// file crypt_util.c line 568
static void shuffle_sb(unsigned long int *k, unsigned long int saltbits);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strcspn
// file /usr/include/string.h line 284
extern unsigned long int strcspn(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// times
// file /usr/include/x86_64-linux-gnu/sys/times.h line 48
extern signed long int times(struct tms *);
// xcrypt
// file xcrypt.h line 33
extern char * xcrypt(const char *, const char *);
// xcrypt_gensalt
// file xcrypt.h line 78
extern char * xcrypt_gensalt(const char *, unsigned long int, const char *, signed int);
// xcrypt_gensalt_ra
// file xcrypt.h line 87
extern char * xcrypt_gensalt_ra(const char *, unsigned long int, const char *, signed int);
// xcrypt_ra
// file xcrypt.h line 74
extern char * xcrypt_ra(const char *, const char *, void **, signed int *);

struct anonymous_5
{
  // hash
  char *hash;
  // pw
  char *pw;
};

struct anonymous_3
{
  // S
  unsigned int S[4l][256l];
  // P
  unsigned int P[18l];
};

struct anonymous_1
{
  // state
  unsigned int state[5l];
  // count
  unsigned int count[2l];
  // buffer
  unsigned char buffer[64l];
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

struct crypt_data
{
  // keysched
  char keysched[128l];
  // sb0
  char sb0[32768l];
  // sb1
  char sb1[32768l];
  // sb2
  char sb2[32768l];
  // sb3
  char sb3[32768l];
  // crypt_3_buf
  char crypt_3_buf[14l];
  // current_salt
  char current_salt[2l];
  // current_saltbits
  signed long int current_saltbits;
  // direction
  signed int direction;
  // initialized
  signed int initialized;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct itimerval
{
  // it_interval
  struct timeval it_interval;
  // it_value
  struct timeval it_value;
};

struct md5_ctx
{
  // A
  unsigned int A;
  // B
  unsigned int B;
  // C
  unsigned int C;
  // D
  unsigned int D;
  // total
  unsigned int total[2l];
  // buflen
  unsigned int buflen;
  // buffer
  char buffer[128l];
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct tms
{
  // tms_utime
  signed long int tms_utime;
  // tms_stime
  signed long int tms_stime;
  // tms_cutime
  signed long int tms_cutime;
  // tms_cstime
  signed long int tms_cstime;
};


// BF_atoi64
// file crypt_blowfish.c line 357
static unsigned char BF_atoi64[96l] = { (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)0, (unsigned char)1, (unsigned char)54, (unsigned char)55, (unsigned char)56, (unsigned char)57, (unsigned char)58, (unsigned char)59, (unsigned char)60, (unsigned char)61, (unsigned char)62, (unsigned char)63, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)2, (unsigned char)3, (unsigned char)4, (unsigned char)5, (unsigned char)6, (unsigned char)7, (unsigned char)8, (unsigned char)9, (unsigned char)10, (unsigned char)11, (unsigned char)12, (unsigned char)13, (unsigned char)14, (unsigned char)15, (unsigned char)16, (unsigned char)17, (unsigned char)18, (unsigned char)19, (unsigned char)20, (unsigned char)21, (unsigned char)22, (unsigned char)23, (unsigned char)24, (unsigned char)25, (unsigned char)26, (unsigned char)27, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)28, (unsigned char)29, (unsigned char)30, (unsigned char)31, (unsigned char)32, (unsigned char)33, (unsigned char)34, (unsigned char)35, (unsigned char)36, (unsigned char)37, (unsigned char)38, (unsigned char)39, (unsigned char)40, (unsigned char)41, (unsigned char)42, (unsigned char)43, (unsigned char)44, (unsigned char)45, (unsigned char)46, (unsigned char)47, (unsigned char)48, (unsigned char)49, (unsigned char)50, (unsigned char)51, (unsigned char)52, (unsigned char)53, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64, (unsigned char)64 };
// BF_init_state
// file crypt_blowfish.c line 82
static struct anonymous_3 BF_init_state = { .S={ { 0xd1310ba6, 0x98dfb5ac, (unsigned int)0x2ffd72db, 0xd01adfb7, 0xb8e1afed, (unsigned int)0x6a267e96, 0xba7c9045, 0xf12c7f99, (unsigned int)0x24a19947, 0xb3916cf7, (unsigned int)0x0801f2e2, 0x858efc16, (unsigned int)0x636920d8, (unsigned int)0x71574e69, 0xa458fea3, 0xf4933d7e, (unsigned int)0x0d95748f, (unsigned int)0x728eb658, (unsigned int)0x718bcd58, 0x82154aee, (unsigned int)0x7b54a41d, 0xc25a59b5, 0x9c30d539, (unsigned int)0x2af26013, 0xc5d1b023, (unsigned int)0x286085f0, 0xca417918, 0xb8db38ef, 0x8e79dcb0, (unsigned int)0x603a180e, (unsigned int)0x6c9e0e8b, 0xb01e8a3e, 0xd71577c1, 0xbd314b27, (unsigned int)0x78af2fda, (unsigned int)0x55605c60, 0xe65525f3, 0xaa55ab94, (unsigned int)0x57489862, (unsigned int)0x63e81440, (unsigned int)0x55ca396a, (unsigned int)0x2aab10b6, 0xb4cc5c34, (unsigned int)0x1141e8ce, 0xa15486af, (unsigned int)0x7c72e993, 0xb3ee1411, (unsigned int)0x636fbc2a, (unsigned int)0x2ba9c55d, (unsigned int)0x741831f6, 0xce5c3e16, 0x9b87931e, 0xafd6ba33, (unsigned int)0x6c24cf5c, (unsigned int)0x7a325381, (unsigned int)0x28958677, (unsigned int)0x3b8f4898, (unsigned int)0x6b4bb9af, 0xc4bfe81b, (unsigned int)0x66282193, (unsigned int)0x61d809cc, 0xfb21a991, (unsigned int)0x487cac60, (unsigned int)0x5dec8032, 0xef845d5d, 0xe98575b1, 0xdc262302, 0xeb651b88, (unsigned int)0x23893e81, 0xd396acc5, (unsigned int)0x0f6d6ff3, 0x83f44239, (unsigned int)0x2e0b4482, 0xa4842004, (unsigned int)0x69c8f04a, 0x9e1f9b5e, (unsigned int)0x21c66842, 0xf6e96c9a, (unsigned int)0x670c9c61, 0xabd388f0, (unsigned int)0x6a51a0d2, 0xd8542f68, 0x960fa728, 0xab5133a3, (unsigned int)0x6eef0b6c, (unsigned int)0x137a3be4, 0xba3bf050, (unsigned int)0x7efb2a98, 0xa1f1651d, (unsigned int)0x39af0176, (unsigned int)0x66ca593e, 0x82430e88, 0x8cee8619, (unsigned int)0x456f9fb4, (unsigned int)0x7d84a5c3, (unsigned int)0x3b8b5ebe, 0xe06f75d8, 0x85c12073, (unsigned int)0x401a449f, (unsigned int)0x56c16aa6, (unsigned int)0x4ed3aa62, (unsigned int)0x363f7706, (unsigned int)0x1bfedf72, (unsigned int)0x429b023d, (unsigned int)0x37d0d724, 0xd00a1248, 0xdb0fead3, (unsigned int)0x49f1c09b, (unsigned int)0x075372c9, 0x80991b7b, (unsigned int)0x25d479d8, 0xf6e8def7, 0xe3fe501a, 0xb6794c3b, 0x976ce0bd, (unsigned int)0x04c006ba, 0xc1a94fb6, (unsigned int)0x409f60c4, (unsigned int)0x5e5c9ec2, (unsigned int)0x196a2463, (unsigned int)0x68fb6faf, (unsigned int)0x3e6c53b5, (unsigned int)0x1339b2eb, (unsigned int)0x3b52ec6f, (unsigned int)0x6dfc511f, 0x9b30952c, 0xcc814544, 0xaf5ebd09, 0xbee3d004, 0xde334afd, (unsigned int)0x660f2807, (unsigned int)0x192e4bb3, 0xc0cba857, (unsigned int)0x45c8740f, 0xd20b5f39, 0xb9d3fbdb, (unsigned int)0x5579c0bd, (unsigned int)0x1a60320a, 0xd6a100c6, (unsigned int)0x402c7279, (unsigned int)0x679f25fe, 0xfb1fa3cc, 0x8ea5e9f8, 0xdb3222f8, (unsigned int)0x3c7516df, 0xfd616b15, (unsigned int)0x2f501ec8, 0xad0552ab, (unsigned int)0x323db5fa, 0xfd238760, (unsigned int)0x53317b48, (unsigned int)0x3e00df82, 0x9e5c57bb, 0xca6f8ca0, (unsigned int)0x1a87562e, 0xdf1769db, 0xd542a8f6, (unsigned int)0x287effc3, 0xac6732c6, 0x8c4f5573, (unsigned int)0x695b27b0, 0xbbca58c8, 0xe1ffa35d, 0xb8f011a0, (unsigned int)0x10fa3d98, 0xfd2183b8, (unsigned int)0x4afcb56c, (unsigned int)0x2dd1d35b, 0x9a53e479, 0xb6f84565, 0xd28e49bc, (unsigned int)0x4bfb9790, 0xe1ddf2da, 0xa4cb7e33, (unsigned int)0x62fb1341, 0xcee4c6e8, 0xef20cada, (unsigned int)0x36774c01, 0xd07e9efe, (unsigned int)0x2bf11fb4, 0x95dbda4d, 0xae909198, 0xeaad8e71, (unsigned int)0x6b93d5a0, 0xd08ed1d0, 0xafc725e0, 0x8e3c5b2f, 0x8e7594b7, 0x8ff6e2fb, 0xf2122b64, 0x8888b812, 0x900df01c, (unsigned int)0x4fad5ea0, (unsigned int)0x688fc31c, 0xd1cff191, 0xb3a8c1ad, (unsigned int)0x2f2f2218, 0xbe0e1777, 0xea752dfe, 0x8b021fa1, 0xe5a0cc0f, 0xb56f74e8, (unsigned int)0x18acf3d6, 0xce89e299, 0xb4a84fe0, 0xfd13e0b7, (unsigned int)0x7cc43b81, 0xd2ada8d9, (unsigned int)0x165fa266, 0x80957705, 0x93cc7314, (unsigned int)0x211a1477, 0xe6ad2065, (unsigned int)0x77b5fa86, 0xc75442f5, 0xfb9d35cf, 0xebcdaf0c, (unsigned int)0x7b3e89a0, 0xd6411bd3, 0xae1e7e49, (unsigned int)0x00250e2d, (unsigned int)0x2071b35e, (unsigned int)0x226800bb, (unsigned int)0x57b8e0af, (unsigned int)0x2464369b, 0xf009b91e, (unsigned int)0x5563911d, (unsigned int)0x59dfa6aa, (unsigned int)0x78c14389, 0xd95a537f, (unsigned int)0x207d5ba2, (unsigned int)0x02e5b9c5, 0x83260376, (unsigned int)0x6295cfa9, (unsigned int)0x11c81968, (unsigned int)0x4e734a41, 0xb3472dca, (unsigned int)0x7b14a94a, (unsigned int)0x1b510052, 0x9a532915, 0xd60f573f, 0xbc9bc6e4, (unsigned int)0x2b60a476, 0x81e67400, (unsigned int)0x08ba6fb5, (unsigned int)0x571be91f, 0xf296ec6b, (unsigned int)0x2a0dd915, 0xb6636521, 0xe7b9f9b6, 0xff34052e, 0xc5855664, (unsigned int)0x53b02d5d, 0xa99f8fa1, (unsigned int)0x08ba4799, (unsigned int)0x6e85076a },
    { (unsigned int)0x4b7a70e9, 0xb5b32944, 0xdb75092e, 0xc4192623, 0xad6ea6b0, (unsigned int)0x49a7df7d, 0x9cee60b8, 0x8fedb266, 0xecaa8c71, (unsigned int)0x699a17ff, (unsigned int)0x5664526c, 0xc2b19ee1, (unsigned int)0x193602a5, (unsigned int)0x75094c29, 0xa0591340, 0xe4183a3e, (unsigned int)0x3f54989a, (unsigned int)0x5b429d65, (unsigned int)0x6b8fe4d6, 0x99f73fd6, 0xa1d29c07, 0xefe830f5, (unsigned int)0x4d2d38e6, 0xf0255dc1, (unsigned int)0x4cdd2086, 0x8470eb26, (unsigned int)0x6382e9c6, (unsigned int)0x021ecc5e, (unsigned int)0x09686b3f, (unsigned int)0x3ebaefc9, (unsigned int)0x3c971814, (unsigned int)0x6b6a70a1, (unsigned int)0x687f3584, (unsigned int)0x52a0e286, 0xb79c5305, 0xaa500737, (unsigned int)0x3e07841c, (unsigned int)0x7fdeae5c, 0x8e7d44ec, (unsigned int)0x5716f2b8, 0xb03ada37, 0xf0500c0d, 0xf01c1f04, (unsigned int)0x0200b3ff, 0xae0cf51a, (unsigned int)0x3cb574b2, (unsigned int)0x25837a58, 0xdc0921bd, 0xd19113f9, (unsigned int)0x7ca92ff6, 0x94324773, (unsigned int)0x22f54701, (unsigned int)0x3ae5e581, (unsigned int)0x37c2dadc, 0xc8b57634, 0x9af3dda7, 0xa9446146, (unsigned int)0x0fd0030e, 0xecc8c73e, 0xa4751e41, 0xe238cd99, (unsigned int)0x3bea0e2f, (unsigned int)0x3280bba1, (unsigned int)0x183eb331, (unsigned int)0x4e548b38, (unsigned int)0x4f6db908, (unsigned int)0x6f420d03, 0xf60a04bf, (unsigned int)0x2cb81290, (unsigned int)0x24977c79, (unsigned int)0x5679b072, 0xbcaf89af, 0xde9a771f, 0xd9930810, 0xb38bae12, 0xdccf3f2e, (unsigned int)0x5512721f, (unsigned int)0x2e6b7124, (unsigned int)0x501adde6, 0x9f84cd87, (unsigned int)0x7a584718, (unsigned int)0x7408da17, 0xbc9f9abc, 0xe94b7d8c, 0xec7aec3a, 0xdb851dfa, (unsigned int)0x63094366, 0xc464c3d2, 0xef1c1847, (unsigned int)0x3215d908, 0xdd433b37, (unsigned int)0x24c2ba16, (unsigned int)0x12a14d43, (unsigned int)0x2a65c451, (unsigned int)0x50940002, (unsigned int)0x133ae4dd, (unsigned int)0x71dff89e, (unsigned int)0x10314e55, 0x81ac77d6, (unsigned int)0x5f11199b, (unsigned int)0x043556f1, 0xd7a3c76b, (unsigned int)0x3c11183b, (unsigned int)0x5924a509, 0xf28fe6ed, 0x97f1fbfa, 0x9ebabf2c, (unsigned int)0x1e153c6e, 0x86e34570, 0xeae96fb1, 0x860e5e0a, (unsigned int)0x5a3e2ab3, (unsigned int)0x771fe71c, (unsigned int)0x4e3d06fa, (unsigned int)0x2965dcb9, 0x99e71d0f, 0x803e89d6, (unsigned int)0x5266c825, (unsigned int)0x2e4cc978, 0x9c10b36a, 0xc6150eba, 0x94e2ea78, 0xa5fc3c53, (unsigned int)0x1e0a2df4, 0xf2f74ea7, (unsigned int)0x361d2b3d, (unsigned int)0x1939260f, (unsigned int)0x19c27960, (unsigned int)0x5223a708, 0xf71312b6, 0xebadfe6e, 0xeac31f66, 0xe3bc4595, 0xa67bc883, 0xb17f37d1, (unsigned int)0x018cff28, 0xc332ddef, 0xbe6c5aa5, (unsigned int)0x65582185, (unsigned int)0x68ab9802, 0xeecea50f, 0xdb2f953b, (unsigned int)0x2aef7dad, (unsigned int)0x5b6e2f84, (unsigned int)0x1521b628, (unsigned int)0x29076170, 0xecdd4775, (unsigned int)0x619f1510, (unsigned int)0x13cca830, 0xeb61bd96, (unsigned int)0x0334fe1e, 0xaa0363cf, 0xb5735c90, (unsigned int)0x4c70a239, 0xd59e9e0b, 0xcbaade14, 0xeecc86bc, (unsigned int)0x60622ca7, 0x9cab5cab, 0xb2f3846e, (unsigned int)0x648b1eaf, (unsigned int)0x19bdf0ca, 0xa02369b9, (unsigned int)0x655abb50, (unsigned int)0x40685a32, (unsigned int)0x3c2ab4b3, (unsigned int)0x319ee9d5, 0xc021b8f7, 0x9b540b19, 0x875fa099, 0x95f7997e, (unsigned int)0x623d7da8, 0xf837889a, 0x97e32d77, (unsigned int)0x11ed935f, (unsigned int)0x16681281, (unsigned int)0x0e358829, 0xc7e61fd6, 0x96dedfa1, (unsigned int)0x7858ba99, (unsigned int)0x57f584a5, (unsigned int)0x1b227263, 0x9b83c3ff, (unsigned int)0x1ac24696, 0xcdb30aeb, (unsigned int)0x532e3054, 0x8fd948e4, (unsigned int)0x6dbc3128, (unsigned int)0x58ebf2ef, (unsigned int)0x34c6ffea, 0xfe28ed61, 0xee7c3c73, (unsigned int)0x5d4a14d9, 0xe864b7e3, (unsigned int)0x42105d14, (unsigned int)0x203e13e0, (unsigned int)0x45eee2b6, 0xa3aaabea, 0xdb6c4f15, 0xfacb4fd0, 0xc742f442, 0xef6abbb5, (unsigned int)0x654f3b1d, (unsigned int)0x41cd2105, 0xd81e799e, 0x86854dc7, 0xe44b476a, (unsigned int)0x3d816250, 0xcf62a1f2, (unsigned int)0x5b8d2646, 0xfc8883a0, 0xc1c7b6a3, (unsigned int)0x7f1524c3, (unsigned int)0x69cb7492, (unsigned int)0x47848a0b, (unsigned int)0x5692b285, (unsigned int)0x095bbf00, 0xad19489d, (unsigned int)0x1462b174, (unsigned int)0x23820e00, (unsigned int)0x58428d2a, (unsigned int)0x0c55f5ea, (unsigned int)0x1dadf43e, (unsigned int)0x233f7061, (unsigned int)0x3372f092, 0x8d937e41, 0xd65fecf1, (unsigned int)0x6c223bdb, (unsigned int)0x7cde3759, 0xcbee7460, (unsigned int)0x4085f2a7, 0xce77326e, 0xa6078084, (unsigned int)0x19f8509e, 0xe8efd855, (unsigned int)0x61d99735, 0xa969a7aa, 0xc50c06c2, (unsigned int)0x5a04abfc, 0x800bcadc, 0x9e447a2e, 0xc3453484, 0xfdd56705, (unsigned int)0x0e1e9ec9, 0xdb73dbd3, (unsigned int)0x105588cd, (unsigned int)0x675fda79, 0xe3674340, 0xc5c43465, (unsigned int)0x713e38d8, (unsigned int)0x3d28f89e, 0xf16dff20, (unsigned int)0x153e21e7, 0x8fb03d4a, 0xe6e39f2b, 0xdb83adf7 },
    { 0xe93d5a68, 0x948140f7, 0xf64c261c, 0x94692934, (unsigned int)0x411520f7, (unsigned int)0x7602d4f7, 0xbcf46b2e, 0xd4a20068, 0xd4082471, (unsigned int)0x3320f46a, (unsigned int)0x43b7d4b7, (unsigned int)0x500061af, (unsigned int)0x1e39f62e, 0x97244546, (unsigned int)0x14214f74, 0xbf8b8840, (unsigned int)0x4d95fc1d, 0x96b591af, (unsigned int)0x70f4ddd3, (unsigned int)0x66a02f45, 0xbfbc09ec, (unsigned int)0x03bd9785, (unsigned int)0x7fac6dd0, (unsigned int)0x31cb8504, 0x96eb27b3, (unsigned int)0x55fd3941, 0xda2547e6, 0xabca0a9a, (unsigned int)0x28507825, (unsigned int)0x530429f4, (unsigned int)0x0a2c86da, 0xe9b66dfb, (unsigned int)0x68dc1462, 0xd7486900, (unsigned int)0x680ec0a4, (unsigned int)0x27a18dee, (unsigned int)0x4f3ffea2, 0xe887ad8c, 0xb58ce006, (unsigned int)0x7af4d6b6, 0xaace1e7c, 0xd3375fec, 0xce78a399, (unsigned int)0x406b2a42, (unsigned int)0x20fe9e35, 0xd9f385b9, 0xee39d7ab, (unsigned int)0x3b124e8b, (unsigned int)0x1dc9faf7, (unsigned int)0x4b6d1856, (unsigned int)0x26a36631, 0xeae397b2, (unsigned int)0x3a6efa74, 0xdd5b4332, (unsigned int)0x6841e7f7, 0xca7820fb, 0xfb0af54e, 0xd8feb397, (unsigned int)0x454056ac, 0xba489527, (unsigned int)0x55533a3a, (unsigned int)0x20838d87, 0xfe6ba9b7, 0xd096954b, (unsigned int)0x55a867bc, 0xa1159a58, 0xcca92963, 0x99e1db33, 0xa62a4a56, (unsigned int)0x3f3125f9, (unsigned int)0x5ef47e1c, 0x9029317c, 0xfdf8e802, (unsigned int)0x04272f70, 0x80bb155c, (unsigned int)0x05282ce3, 0x95c11548, 0xe4c66d22, (unsigned int)0x48c1133f, 0xc70f86dc, (unsigned int)0x07f9c9ee, (unsigned int)0x41041f0f, (unsigned int)0x404779a4, (unsigned int)0x5d886e17, (unsigned int)0x325f51eb, 0xd59bc0d1, 0xf2bcc18f, (unsigned int)0x41113564, (unsigned int)0x257b7834, (unsigned int)0x602a9c60, 0xdff8e8a3, (unsigned int)0x1f636c1b, (unsigned int)0x0e12b4c2, (unsigned int)0x02e1329e, 0xaf664fd1, 0xcad18115, (unsigned int)0x6b2395e0, (unsigned int)0x333e92e1, (unsigned int)0x3b240b62, 0xeebeb922, 0x85b2a20e, 0xe6ba0d99, 0xde720c8c, (unsigned int)0x2da2f728, 0xd0127845, 0x95b794fd, (unsigned int)0x647d0862, 0xe7ccf5f0, (unsigned int)0x5449a36f, 0x877d48fa, 0xc39dfd27, 0xf33e8d1e, (unsigned int)0x0a476341, 0x992eff74, (unsigned int)0x3a6f6eab, 0xf4f8fd37, 0xa812dc60, 0xa1ebddf8, 0x991be14c, 0xdb6e6b0d, 0xc67b5510, (unsigned int)0x6d672c37, (unsigned int)0x2765d43b, 0xdcd0e804, 0xf1290dc7, 0xcc00ffa3, 0xb5390f92, (unsigned int)0x690fed0b, (unsigned int)0x667b9ffb, 0xcedb7d9c, 0xa091cf0b, 0xd9155ea3, 0xbb132f88, (unsigned int)0x515bad24, (unsigned int)0x7b9479bf, (unsigned int)0x763bd6eb, (unsigned int)0x37392eb3, 0xcc115979, 0x8026e297, 0xf42e312d, (unsigned int)0x6842ada7, 0xc66a2b3b, (unsigned int)0x12754ccc, (unsigned int)0x782ef11c, (unsigned int)0x6a124237, 0xb79251e7, (unsigned int)0x06a1bbe6, (unsigned int)0x4bfb6350, (unsigned int)0x1a6b1018, (unsigned int)0x11caedfa, (unsigned int)0x3d25bdd8, 0xe2e1c3c9, (unsigned int)0x44421659, (unsigned int)0x0a121386, 0xd90cec6e, 0xd5abea2a, (unsigned int)0x64af674e, 0xda86a85f, 0xbebfe988, (unsigned int)0x64e4c3fe, 0x9dbc8057, 0xf0f7c086, (unsigned int)0x60787bf8, (unsigned int)0x6003604d, 0xd1fd8346, 0xf6381fb0, (unsigned int)0x7745ae04, 0xd736fccc, 0x83426b33, 0xf01eab71, 0xb0804187, (unsigned int)0x3c005e5f, (unsigned int)0x77a057be, 0xbde8ae24, (unsigned int)0x55464299, 0xbf582e61, (unsigned int)0x4e58f48f, 0xf2ddfda2, 0xf474ef38, 0x8789bdc2, (unsigned int)0x5366f9c3, 0xc8b38e74, 0xb475f255, (unsigned int)0x46fcd9b9, (unsigned int)0x7aeb2661, 0x8b1ddf84, 0x846a0e79, 0x915f95e2, (unsigned int)0x466e598e, (unsigned int)0x20b45770, 0x8cd55591, 0xc902de4c, 0xb90bace1, 0xbb8205d0, (unsigned int)0x11a86248, (unsigned int)0x7574a99e, 0xb77f19b6, 0xe0a9dc09, (unsigned int)0x662d09a1, 0xc4324633, 0xe85a1f02, (unsigned int)0x09f0be8c, (unsigned int)0x4a99a025, (unsigned int)0x1d6efe10, (unsigned int)0x1ab93d1d, (unsigned int)0x0ba5a4df, 0xa186f20f, (unsigned int)0x2868f169, 0xdcb7da83, (unsigned int)0x573906fe, 0xa1e2ce9b, (unsigned int)0x4fcd7f52, (unsigned int)0x50115e01, 0xa70683fa, 0xa002b5c4, (unsigned int)0x0de6d027, 0x9af88c27, (unsigned int)0x773f8641, 0xc3604c06, (unsigned int)0x61a806b5, 0xf0177a28, 0xc0f586e0, (unsigned int)0x006058aa, (unsigned int)0x30dc7d62, (unsigned int)0x11e69ed7, (unsigned int)0x2338ea63, (unsigned int)0x53c2dd94, 0xc2c21634, 0xbbcbee56, 0x90bcb6de, 0xebfc7da1, 0xce591d76, (unsigned int)0x6f05e409, (unsigned int)0x4b7c0188, (unsigned int)0x39720a3d, (unsigned int)0x7c927c24, 0x86e3725f, (unsigned int)0x724d9db9, (unsigned int)0x1ac15bb4, 0xd39eb8fc, 0xed545578, (unsigned int)0x08fca5b5, 0xd83d7cd3, (unsigned int)0x4dad0fc4, (unsigned int)0x1e50ef5e, 0xb161e6f8, 0xa28514d9, (unsigned int)0x6c51133c, (unsigned int)0x6fd5c7e7, (unsigned int)0x56e14ec4, (unsigned int)0x362abfce, 0xddc6c837, 0xd79a3234, 0x92638212, (unsigned int)0x670efa8e, (unsigned int)0x406000e0 },
    { (unsigned int)0x3a39ce37, 0xd3faf5cf, 0xabc27737, (unsigned int)0x5ac52d1b, (unsigned int)0x5cb0679e, (unsigned int)0x4fa33742, 0xd3822740, 0x99bc9bbe, 0xd5118e9d, 0xbf0f7315, 0xd62d1c7e, 0xc700c47b, 0xb78c1b6b, (unsigned int)0x21a19045, 0xb26eb1be, (unsigned int)0x6a366eb4, (unsigned int)0x5748ab2f, 0xbc946e79, 0xc6a376d2, (unsigned int)0x6549c2c8, (unsigned int)0x530ff8ee, (unsigned int)0x468dde7d, 0xd5730a1d, (unsigned int)0x4cd04dc6, (unsigned int)0x2939bbdb, 0xa9ba4650, 0xac9526e8, 0xbe5ee304, 0xa1fad5f0, (unsigned int)0x6a2d519a, (unsigned int)0x63ef8ce2, 0x9a86ee22, 0xc089c2b8, (unsigned int)0x43242ef6, 0xa51e03aa, 0x9cf2d0a4, 0x83c061ba, 0x9be96a4d, 0x8fe51550, 0xba645bd6, (unsigned int)0x2826a2f9, 0xa73a3ae1, (unsigned int)0x4ba99586, 0xef5562e9, 0xc72fefd3, 0xf752f7da, (unsigned int)0x3f046f69, (unsigned int)0x77fa0a59, 0x80e4a915, 0x87b08601, 0x9b09e6ad, (unsigned int)0x3b3ee593, 0xe990fd5a, 0x9e34d797, (unsigned int)0x2cf0b7d9, (unsigned int)0x022b8b51, 0x96d5ac3a, (unsigned int)0x017da67d, 0xd1cf3ed6, (unsigned int)0x7c7d2d28, (unsigned int)0x1f9f25cf, 0xadf2b89b, (unsigned int)0x5ad6b472, (unsigned int)0x5a88f54c, 0xe029ac71, 0xe019a5e6, (unsigned int)0x47b0acfd, 0xed93fa9b, 0xe8d3c48d, (unsigned int)0x283b57cc, 0xf8d56629, (unsigned int)0x79132e28, (unsigned int)0x785f0191, 0xed756055, 0xf7960e44, 0xe3d35e8c, (unsigned int)0x15056dd4, 0x88f46dba, (unsigned int)0x03a16125, (unsigned int)0x0564f0bd, 0xc3eb9e15, (unsigned int)0x3c9057a2, 0x97271aec, 0xa93a072a, (unsigned int)0x1b3f6d9b, (unsigned int)0x1e6321f5, 0xf59c66fb, (unsigned int)0x26dcf319, (unsigned int)0x7533d928, 0xb155fdf5, (unsigned int)0x03563482, 0x8aba3cbb, (unsigned int)0x28517711, 0xc20ad9f8, 0xabcc5167, 0xccad925f, (unsigned int)0x4de81751, (unsigned int)0x3830dc8e, (unsigned int)0x379d5862, 0x9320f991, 0xea7a90c2, 0xfb3e7bce, (unsigned int)0x5121ce64, (unsigned int)0x774fbe32, 0xa8b6e37e, 0xc3293d46, (unsigned int)0x48de5369, (unsigned int)0x6413e680, 0xa2ae0810, 0xdd6db224, (unsigned int)0x69852dfd, (unsigned int)0x09072166, 0xb39a460a, (unsigned int)0x6445c0dd, (unsigned int)0x586cdecf, (unsigned int)0x1c20c8ae, (unsigned int)0x5bbef7dd, (unsigned int)0x1b588d40, 0xccd2017f, (unsigned int)0x6bb4e3bb, 0xdda26a7e, (unsigned int)0x3a59ff45, (unsigned int)0x3e350a44, 0xbcb4cdd5, (unsigned int)0x72eacea8, 0xfa6484bb, 0x8d6612ae, 0xbf3c6f47, 0xd29be463, (unsigned int)0x542f5d9e, 0xaec2771b, 0xf64e6370, (unsigned int)0x740e0d8d, 0xe75b1357, 0xf8721671, 0xaf537d5d, (unsigned int)0x4040cb08, (unsigned int)0x4eb4e2cc, (unsigned int)0x34d2466a, (unsigned int)0x0115af84, 0xe1b00428, 0x95983a1d, (unsigned int)0x06b89fb4, 0xce6ea048, (unsigned int)0x6f3f3b82, (unsigned int)0x3520ab82, (unsigned int)0x011a1d4b, (unsigned int)0x277227f8, (unsigned int)0x611560b1, 0xe7933fdc, 0xbb3a792b, (unsigned int)0x344525bd, 0xa08839e1, (unsigned int)0x51ce794b, (unsigned int)0x2f32c9b7, 0xa01fbac9, 0xe01cc87e, 0xbcc7d1f6, 0xcf0111c3, 0xa1e8aac7, (unsigned int)0x1a908749, 0xd44fbd9a, 0xd0dadecb, 0xd50ada38, (unsigned int)0x0339c32a, 0xc6913667, 0x8df9317c, 0xe0b12b4f, 0xf79e59b7, (unsigned int)0x43f5bb3a, 0xf2d519ff, (unsigned int)0x27d9459c, 0xbf97222c, (unsigned int)0x15e6fc2a, (unsigned int)0x0f91fc71, 0x9b941525, 0xfae59361, 0xceb69ceb, 0xc2a86459, (unsigned int)0x12baa8d1, 0xb6c1075e, 0xe3056a0c, (unsigned int)0x10d25065, 0xcb03a442, 0xe0ec6e0e, (unsigned int)0x1698db3b, (unsigned int)0x4c98a0be, (unsigned int)0x3278e964, 0x9f1f9532, 0xe0d392df, 0xd3a0342b, 0x8971f21e, (unsigned int)0x1b0a7441, (unsigned int)0x4ba3348c, 0xc5be7120, 0xc37632d8, 0xdf359f8d, 0x9b992f2e, 0xe60b6f47, (unsigned int)0x0fe3f11d, 0xe54cda54, (unsigned int)0x1edad891, 0xce6279cf, 0xcd3e7e6f, (unsigned int)0x1618b166, 0xfd2c1d05, 0x848fd2c5, 0xf6fb2299, 0xf523f357, 0xa6327623, 0x93a83531, (unsigned int)0x56cccd02, 0xacf08162, (unsigned int)0x5a75ebb5, (unsigned int)0x6e163697, 0x88d273cc, 0xde966292, 0x81b949d0, (unsigned int)0x4c50901b, (unsigned int)0x71c65614, 0xe6c6c7bd, (unsigned int)0x327a140a, (unsigned int)0x45e1d006, 0xc3f27b9a, 0xc9aa53fd, (unsigned int)0x62a80f00, 0xbb25bfe2, (unsigned int)0x35bdd2f6, (unsigned int)0x71126905, 0xb2040222, 0xb6cbcf7c, 0xcd769c2b, (unsigned int)0x53113ec0, (unsigned int)0x1640e3d3, (unsigned int)0x38abbd60, (unsigned int)0x2547adf0, 0xba38209c, 0xf746ce76, (unsigned int)0x77afa1c5, (unsigned int)0x20756060, 0x85cbfe4e, 0x8ae88dd8, (unsigned int)0x7aaaf9b0, (unsigned int)0x4cf9aa7e, (unsigned int)0x1948c25c, (unsigned int)0x02fb8a8c, (unsigned int)0x01c36ae4, 0xd6ebe1f9, 0x90d4f869, 0xa65cdea0, (unsigned int)0x3f09252d, 0xc208e69f, 0xb74e6132, 0xce77e25b, (unsigned int)0x578fdfe3, (unsigned int)0x3ac372e6 } }, .P={ (unsigned int)0x243f6a88, 0x85a308d3, (unsigned int)0x13198a2e, (unsigned int)0x03707344, 0xa4093822, (unsigned int)0x299f31d0, (unsigned int)0x082efa98, 0xec4e6c89, (unsigned int)0x452821e6, (unsigned int)0x38d01377, 0xbe5466cf, (unsigned int)0x34e90c6c, 0xc0ac29b7, 0xc97c50dd, (unsigned int)0x3f84d5b5, 0xb5470917, 0x9216d5d9, 0x8979fb1b } };
// BF_itoa64
// file crypt_blowfish.c line 354
static unsigned char BF_itoa64[65l] = { '.', '/', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0 };
// BF_magic_w
// file crypt_blowfish.c line 74
static unsigned int BF_magic_w[6l] = { (unsigned int)0x4F727068, (unsigned int)0x65616E42, (unsigned int)0x65686F6C, (unsigned int)0x64657253, (unsigned int)0x63727944, (unsigned int)0x6F756274 };
// BITMASK
// file crypt_util.c line 193
static const unsigned long int BITMASK[24l] = { (const unsigned long int)0x40000000, (const unsigned long int)0x20000000, (const unsigned long int)0x10000000, (const unsigned long int)0x08000000, (const unsigned long int)0x04000000, (const unsigned long int)0x02000000, (const unsigned long int)0x01000000, (const unsigned long int)0x00800000, (const unsigned long int)0x00400000, (const unsigned long int)0x00200000, (const unsigned long int)0x00100000, (const unsigned long int)0x00080000, (const unsigned long int)0x00004000, (const unsigned long int)0x00002000, (const unsigned long int)0x00001000, (const unsigned long int)0x00000800, (const unsigned long int)0x00000400, (const unsigned long int)0x00000200, (const unsigned long int)0x00000100, (const unsigned long int)0x00000080, (const unsigned long int)0x00000040, (const unsigned long int)0x00000020, (const unsigned long int)0x00000010, (const unsigned long int)0x00000008 };
// _ufc_foobar
// file crypt_util.c line 264
struct crypt_data _ufc_foobar;
// _ufc_tables_lock
// file crypt_util.c line 266
static union anonymous_0 _ufc_tables_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// _xcrypt_itoa64
// file crypt_gensalt.c line 26
unsigned char _xcrypt_itoa64[65l] = { '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0 };
// b64
// file sha-crypt.c line 16
static const char *b64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
// b64t
// file md5-crypt.c line 39
static const char b64t[64l] = { '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
// buffer
// file md5-crypt.c line 234
static char *buffer;
// bytemask
// file crypt_util.c line 200
static const unsigned char bytemask[8l] = { (const unsigned char)0x80, (const unsigned char)0x40, (const unsigned char)0x20, (const unsigned char)0x10, (const unsigned char)0x08, (const unsigned char)0x04, (const unsigned char)0x02, (const unsigned char)0x01 };
// do_pc1
// file crypt_util.c line 225
static unsigned long int do_pc1[8l][2l][128l];
// do_pc2
// file crypt_util.c line 238
static unsigned long int do_pc2[8l][128l];
// efp
// file crypt_util.c line 258
static unsigned long int efp[16l][64l][2l];
// eperm32tab
// file crypt_util.c line 249
static unsigned long int eperm32tab[4l][256l][2l];
// esel
// file crypt_util.c line 99
static const signed int esel[48l] = { 32, 1, 2, 3, 4, 5, 4, 5, 6, 7, 8, 9, 8, 9, 10, 11, 12, 13, 12, 13, 14, 15, 16, 17, 16, 17, 18, 19, 20, 21, 20, 21, 22, 23, 24, 25, 24, 25, 26, 27, 28, 29, 28, 29, 30, 31, 32, 1 };
// fillbuf
// file md5.c line 49
static const unsigned char fillbuf[64l] = { (const unsigned char)0x80, (const unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// final_perm
// file crypt_util.c line 183
static const signed int final_perm[64l] = { 40, 8, 48, 16, 56, 24, 64, 32, 39, 7, 47, 15, 55, 23, 63, 31, 38, 6, 46, 14, 54, 22, 62, 30, 37, 5, 45, 13, 53, 21, 61, 29, 36, 4, 44, 12, 52, 20, 60, 28, 35, 3, 43, 11, 51, 19, 59, 27, 34, 2, 42, 10, 50, 18, 58, 26, 33, 1, 41, 9, 49, 17, 57, 25 };
// initial_perm
// file crypt_util.c line 172
static const signed int initial_perm[64l] = { 58, 50, 42, 34, 26, 18, 10, 2, 60, 52, 44, 36, 28, 20, 12, 4, 62, 54, 46, 38, 30, 22, 14, 6, 64, 56, 48, 40, 32, 24, 16, 8, 57, 49, 41, 33, 25, 17, 9, 1, 59, 51, 43, 35, 27, 19, 11, 3, 61, 53, 45, 37, 29, 21, 13, 5, 63, 55, 47, 39, 31, 23, 15, 7 };
// longmask
// file crypt_util.c line 204
static const unsigned long int longmask[32l] = { (const unsigned long int)0x80000000, (const unsigned long int)0x40000000, (const unsigned long int)0x20000000, (const unsigned long int)0x10000000, (const unsigned long int)0x08000000, (const unsigned long int)0x04000000, (const unsigned long int)0x02000000, (const unsigned long int)0x01000000, (const unsigned long int)0x00800000, (const unsigned long int)0x00400000, (const unsigned long int)0x00200000, (const unsigned long int)0x00100000, (const unsigned long int)0x00080000, (const unsigned long int)0x00040000, (const unsigned long int)0x00020000, (const unsigned long int)0x00010000, (const unsigned long int)0x00008000, (const unsigned long int)0x00004000, (const unsigned long int)0x00002000, (const unsigned long int)0x00001000, (const unsigned long int)0x00000800, (const unsigned long int)0x00000400, (const unsigned long int)0x00000200, (const unsigned long int)0x00000100, (const unsigned long int)0x00000080, (const unsigned long int)0x00000040, (const unsigned long int)0x00000020, (const unsigned long int)0x00000010, (const unsigned long int)0x00000008, (const unsigned long int)0x00000004, (const unsigned long int)0x00000002, (const unsigned long int)0x00000001 };
// md5_salt_prefix
// file md5-crypt.c line 36
static const char md5_salt_prefix[4l] = { '_', '1', '_', 0 };
// pc1
// file crypt_util.c line 69
static const signed int pc1[56l] = { 57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18, 10, 2, 59, 51, 43, 35, 27, 19, 11, 3, 60, 52, 44, 36, 63, 55, 47, 39, 31, 23, 15, 7, 62, 54, 46, 38, 30, 22, 14, 6, 61, 53, 45, 37, 29, 21, 13, 5, 28, 20, 12, 4 };
// pc2
// file crypt_util.c line 88
static const signed int pc2[48l] = { 14, 17, 11, 24, 1, 5, 3, 28, 15, 6, 21, 10, 23, 19, 12, 4, 26, 8, 16, 7, 27, 20, 13, 2, 41, 52, 31, 37, 47, 55, 30, 40, 51, 45, 33, 48, 44, 49, 39, 56, 34, 53, 46, 42, 50, 36, 29, 32 };
// perm32
// file crypt_util.c line 110
static const signed int perm32[32l] = { 16, 7, 20, 21, 29, 12, 28, 17, 1, 15, 23, 26, 5, 18, 31, 10, 2, 8, 24, 14, 32, 27, 3, 9, 19, 13, 30, 6, 22, 11, 4, 25 };
// rots
// file crypt_util.c line 80
static const signed int rots[16l] = { 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1 };
// running
// file blowfish-test.c line 38
static volatile signed int running;
// sbox
// file crypt_util.c line 118
static const signed int sbox[8l][4l][16l] = { { { 14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7 },
    { 0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8 },
    { 4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0 },
    { 15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13 } },
    { { 15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10 },
    { 3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5 },
    { 0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15 },
    { 13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9 } },
    { { 10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8 },
    { 13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1 },
    { 13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7 },
    { 1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12 } },
    { { 7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15 },
    { 13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9 },
    { 10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4 },
    { 3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14 } },
    { { 2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9 },
    { 14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6 },
    { 4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14 },
    { 11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3 } },
    { { 12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11 },
    { 10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8 },
    { 9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6 },
    { 4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13 } },
    { { 4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1 },
    { 13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6 },
    { 1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2 },
    { 6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12 } },
    { { 13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7 },
    { 1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2 },
    { 7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8 },
    { 2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11 } } };
// sha_salt_prefix
// file sha-crypt.c line 13
const char *sha_salt_prefix = "{SHA}";
// tests
// file blowfish-test.c line 21
static struct anonymous_5 tests[6l] = { { .hash="_2a_05_CCCCCCCCCCCCCCCCCCCCC.E5YPO9kmyuRGyh0XouQYb4YMJKvyOeW", .pw="U*U" },
    { .hash="_2a_05_CCCCCCCCCCCCCCCCCCCCC.VGOzA784oUp/Z0DY336zx7pLYAy0lwK", .pw="U*U*" },
    { .hash="_2a_05_XXXXXXXXXXXXXXXXXXXXXOAcXxm9kjPGEMsLznoKqmqw7tc8WCx4a", .pw="U*U*U" },
    { .hash="_2a_05_CCCCCCCCCCCCCCCCCCCCC.7uG0VCzI2bS7j6ymqJi9CdcdxiRTWNy", .pw="" },
    { .hash="_2a_05_abcdefghijklmnopqrstuu5s2v8.iXieOjg/.AySBTTZIIVFJeBui", .pw="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789" },
    { .hash=(char *)(void *)0, .pw=(char *)(void *)0 } };

// BF_decode
// file crypt_blowfish.c line 389
static signed int BF_decode(unsigned int *dst, const char *src, signed int size)
{
  unsigned char *dptr = (unsigned char *)dst;
  unsigned char *end = dptr + (signed long int)size;
  unsigned char *sptr = (unsigned char *)src;
  unsigned int tmp;
  unsigned int c1;
  unsigned int c2;
  unsigned int c3;
  unsigned int c4;
  unsigned char *tmp_post_1;
  unsigned char *tmp_post_2;
  unsigned char *tmp_post_3;
  unsigned char *tmp_post_4;
  unsigned char *tmp_post_5;
  unsigned char *tmp_post_6;
  unsigned char *tmp_post_7;
  do
  {
    tmp_post_1 = sptr;
    sptr = sptr + 1l;
    tmp = (unsigned int)(unsigned char)*tmp_post_1;
    tmp = tmp - (unsigned int)0x20;
    if(tmp >= 96u)
      return -1;

    tmp = (unsigned int)BF_atoi64[(signed long int)tmp];
    if(tmp >= 64u)
      return -1;

    c1 = tmp;
    tmp_post_2 = sptr;
    sptr = sptr + 1l;
    tmp = (unsigned int)(unsigned char)*tmp_post_2;
    tmp = tmp - (unsigned int)0x20;
    if(tmp >= 96u)
      return -1;

    tmp = (unsigned int)BF_atoi64[(signed long int)tmp];
    if(tmp >= 64u)
      return -1;

    c2 = tmp;
    tmp_post_3 = dptr;
    dptr = dptr + 1l;
    *tmp_post_3 = (unsigned char)(c1 << 2 | (c2 & (unsigned int)0x30) >> 4);
    if(dptr >= end)
      break;

    tmp_post_4 = sptr;
    sptr = sptr + 1l;
    tmp = (unsigned int)(unsigned char)*tmp_post_4;
    tmp = tmp - (unsigned int)0x20;
    if(tmp >= 96u)
      return -1;

    tmp = (unsigned int)BF_atoi64[(signed long int)tmp];
    if(tmp >= 64u)
      return -1;

    c3 = tmp;
    tmp_post_5 = dptr;
    dptr = dptr + 1l;
    *tmp_post_5 = (unsigned char)((c2 & (unsigned int)0x0F) << 4 | (c3 & (unsigned int)0x3C) >> 2);
    if(dptr >= end)
      break;

    tmp_post_6 = sptr;
    sptr = sptr + 1l;
    tmp = (unsigned int)(unsigned char)*tmp_post_6;
    tmp = tmp - (unsigned int)0x20;
    if(tmp >= 96u)
      return -1;

    tmp = (unsigned int)BF_atoi64[(signed long int)tmp];
    if(tmp >= 64u)
      return -1;

    c4 = tmp;
    tmp_post_7 = dptr;
    dptr = dptr + 1l;
    *tmp_post_7 = (unsigned char)((c3 & (unsigned int)0x03) << 6 | c4);
  }
  while(!(dptr >= end));
  return 0;
}

// BF_encode
// file crypt_blowfish.c line 413
static void BF_encode(char *dst, const unsigned int *src, signed int size)
{
  unsigned char *sptr = (unsigned char *)src;
  unsigned char *end = sptr + (signed long int)size;
  unsigned char *dptr = (unsigned char *)dst;
  unsigned int c1;
  unsigned int c2;
  unsigned char *tmp_post_1;
  unsigned char *tmp_post_2;
  unsigned char *tmp_post_3;
  unsigned char *tmp_post_4;
  unsigned char *tmp_post_5;
  unsigned char *tmp_post_6;
  unsigned char *tmp_post_7;
  unsigned char *tmp_post_8;
  unsigned char *tmp_post_9;
  do
  {
    tmp_post_1 = sptr;
    sptr = sptr + 1l;
    c1 = (unsigned int)*tmp_post_1;
    tmp_post_2 = dptr;
    dptr = dptr + 1l;
    *tmp_post_2 = BF_itoa64[(signed long int)(c1 >> 2)];
    c1 = (c1 & (unsigned int)0x03) << 4;
    if(sptr >= end)
    {
      tmp_post_3 = dptr;
      dptr = dptr + 1l;
      *tmp_post_3 = BF_itoa64[(signed long int)c1];
      break;
    }

    tmp_post_4 = sptr;
    sptr = sptr + 1l;
    c2 = (unsigned int)*tmp_post_4;
    c1 = c1 | c2 >> 4;
    tmp_post_5 = dptr;
    dptr = dptr + 1l;
    *tmp_post_5 = BF_itoa64[(signed long int)c1];
    c1 = (c2 & (unsigned int)0x0f) << 2;
    if(sptr >= end)
    {
      tmp_post_6 = dptr;
      dptr = dptr + 1l;
      *tmp_post_6 = BF_itoa64[(signed long int)c1];
      break;
    }

    tmp_post_7 = sptr;
    sptr = sptr + 1l;
    c2 = (unsigned int)*tmp_post_7;
    c1 = c1 | c2 >> 6;
    tmp_post_8 = dptr;
    dptr = dptr + 1l;
    *tmp_post_8 = BF_itoa64[(signed long int)c1];
    tmp_post_9 = dptr;
    dptr = dptr + 1l;
    *tmp_post_9 = BF_itoa64[(signed long int)(c2 & (unsigned int)0x3f)];
  }
  while(!(sptr >= end));
}

// BF_set_key
// file crypt_blowfish.c line 547
static void BF_set_key(const char *key, unsigned int *expanded, unsigned int *initial)
{
  const char *ptr = key;
  signed int i;
  signed int j;
  unsigned int tmp;
  i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    tmp = (unsigned int)0;
    j = 0;
    for( ; !(j >= 4); j = j + 1)
    {
      tmp = tmp << 8;
      tmp = tmp | (unsigned int)(unsigned char)*ptr;
      if(*ptr == 0)
        ptr = key;

      else
        ptr = ptr + 1l;
    }
    expanded[(signed long int)i] = tmp;
    initial[(signed long int)i] = BF_init_state.P[(signed long int)i] ^ tmp;
  }
}

// BF_swap
// file crypt_blowfish.c line 445
static void BF_swap(unsigned int *x, signed int count)
{
  static signed int endianness_check = 1;
  char *is_little_endian = (char *)&endianness_check;
  unsigned int tmp;
  unsigned int *tmp_post_1;
  if(!(*is_little_endian == 0))
    do
    {
      tmp = *x;
      tmp = tmp << 16 | tmp >> 16;
      tmp_post_1 = x;
      x = x + 1l;
      *tmp_post_1 = (tmp & (unsigned int)0x00FF00FF) << 8 | tmp >> 8 & (unsigned int)0x00FF00FF;
      count = count - 1;
    }
    while(!(count == 0));

}

// __SHA1Final
// file sha.c line 231
extern void __SHA1Final(unsigned char *digest, struct anonymous_1 *context)
{
  unsigned int i;
  unsigned char finalcount[8l];
  i = (unsigned int)0;
  for( ; !(i >= 8u); i = i + 1u)
    finalcount[(signed long int)i] = (unsigned char)(context->count[(signed long int)(i >= (unsigned int)4 ? 0 : 1)] >> ((unsigned int)3 - (i & (unsigned int)3)) * (unsigned int)8 & (unsigned int)255);
  __SHA1Update(context, (unsigned char *)"€", (unsigned int)1);
  while(!((504u & context->count[0l]) == 448u))
    __SHA1Update(context, (unsigned char *)"\0", (unsigned int)1);
  __SHA1Update(context, finalcount, (unsigned int)8);
  if(!(digest == ((unsigned char *)NULL)))
  {
    i = (unsigned int)0;
    for( ; !(i >= 20u); i = i + 1u)
      digest[(signed long int)i] = (unsigned char)(context->state[(signed long int)(i >> 2)] >> ((unsigned int)3 - (i & (unsigned int)3)) * (unsigned int)8 & (unsigned int)255);
  }

}

// __SHA1Init
// file sha.c line 187
extern void __SHA1Init(struct anonymous_1 *context)
{
  context->state[(signed long int)0] = (unsigned int)0x67452301;
  context->state[(signed long int)1] = 0xEFCDAB89;
  context->state[(signed long int)2] = 0x98BADCFE;
  context->state[(signed long int)3] = (unsigned int)0x10325476;
  context->state[(signed long int)4] = 0xC3D2E1F0;
  context->count[(signed long int)1] = (unsigned int)0;
  context->count[(signed long int)0] = context->count[(signed long int)1];
}

// __SHA1Transform
// file sha.c line 70
extern void __SHA1Transform(unsigned int *state, unsigned char *buffer)
{
  unsigned int a;
  unsigned int b;
  unsigned int c;
  unsigned int d;
  unsigned int e;
  /* tag-#anon#lUN[lARR64{U8}_U8_'c'||lARR16{U32}_U32_'l'|] */
union anonymous_2
{
  // c
  unsigned char c[64l];
  // l
  unsigned int l[16l];
};

/* */
  ;
  union anonymous_2 *block = (union anonymous_2 *)buffer;
  a = state[(signed long int)0];
  b = state[(signed long int)1];
  c = state[(signed long int)2];
  d = state[(signed long int)3];
  e = state[(signed long int)4];
  block->l[(signed long int)0] = (block->l[(signed long int)0] << 24 | block->l[(signed long int)0] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)0] << 8 | block->l[(signed long int)0] >> 32 - 8) & (unsigned int)0x00FF00FF;
  e = e + (b & (c ^ d) ^ d) + block->l[(signed long int)0] + (unsigned int)0x5A827999 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)1] = (block->l[(signed long int)1] << 24 | block->l[(signed long int)1] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)1] << 8 | block->l[(signed long int)1] >> 32 - 8) & (unsigned int)0x00FF00FF;
  d = d + (a & (b ^ c) ^ c) + block->l[(signed long int)1] + (unsigned int)0x5A827999 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)2] = (block->l[(signed long int)2] << 24 | block->l[(signed long int)2] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)2] << 8 | block->l[(signed long int)2] >> 32 - 8) & (unsigned int)0x00FF00FF;
  c = c + (e & (a ^ b) ^ b) + block->l[(signed long int)2] + (unsigned int)0x5A827999 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)3] = (block->l[(signed long int)3] << 24 | block->l[(signed long int)3] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)3] << 8 | block->l[(signed long int)3] >> 32 - 8) & (unsigned int)0x00FF00FF;
  b = b + (d & (e ^ a) ^ a) + block->l[(signed long int)3] + (unsigned int)0x5A827999 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)4] = (block->l[(signed long int)4] << 24 | block->l[(signed long int)4] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)4] << 8 | block->l[(signed long int)4] >> 32 - 8) & (unsigned int)0x00FF00FF;
  a = a + (c & (d ^ e) ^ e) + block->l[(signed long int)4] + (unsigned int)0x5A827999 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)5] = (block->l[(signed long int)5] << 24 | block->l[(signed long int)5] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)5] << 8 | block->l[(signed long int)5] >> 32 - 8) & (unsigned int)0x00FF00FF;
  e = e + (b & (c ^ d) ^ d) + block->l[(signed long int)5] + (unsigned int)0x5A827999 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)6] = (block->l[(signed long int)6] << 24 | block->l[(signed long int)6] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)6] << 8 | block->l[(signed long int)6] >> 32 - 8) & (unsigned int)0x00FF00FF;
  d = d + (a & (b ^ c) ^ c) + block->l[(signed long int)6] + (unsigned int)0x5A827999 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)7] = (block->l[(signed long int)7] << 24 | block->l[(signed long int)7] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)7] << 8 | block->l[(signed long int)7] >> 32 - 8) & (unsigned int)0x00FF00FF;
  c = c + (e & (a ^ b) ^ b) + block->l[(signed long int)7] + (unsigned int)0x5A827999 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)8] = (block->l[(signed long int)8] << 24 | block->l[(signed long int)8] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)8] << 8 | block->l[(signed long int)8] >> 32 - 8) & (unsigned int)0x00FF00FF;
  b = b + (d & (e ^ a) ^ a) + block->l[(signed long int)8] + (unsigned int)0x5A827999 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)9] = (block->l[(signed long int)9] << 24 | block->l[(signed long int)9] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)9] << 8 | block->l[(signed long int)9] >> 32 - 8) & (unsigned int)0x00FF00FF;
  a = a + (c & (d ^ e) ^ e) + block->l[(signed long int)9] + (unsigned int)0x5A827999 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)10] = (block->l[(signed long int)10] << 24 | block->l[(signed long int)10] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)10] << 8 | block->l[(signed long int)10] >> 32 - 8) & (unsigned int)0x00FF00FF;
  e = e + (b & (c ^ d) ^ d) + block->l[(signed long int)10] + (unsigned int)0x5A827999 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)11] = (block->l[(signed long int)11] << 24 | block->l[(signed long int)11] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)11] << 8 | block->l[(signed long int)11] >> 32 - 8) & (unsigned int)0x00FF00FF;
  d = d + (a & (b ^ c) ^ c) + block->l[(signed long int)11] + (unsigned int)0x5A827999 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)12] = (block->l[(signed long int)12] << 24 | block->l[(signed long int)12] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)12] << 8 | block->l[(signed long int)12] >> 32 - 8) & (unsigned int)0x00FF00FF;
  c = c + (e & (a ^ b) ^ b) + block->l[(signed long int)12] + (unsigned int)0x5A827999 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)13] = (block->l[(signed long int)13] << 24 | block->l[(signed long int)13] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)13] << 8 | block->l[(signed long int)13] >> 32 - 8) & (unsigned int)0x00FF00FF;
  b = b + (d & (e ^ a) ^ a) + block->l[(signed long int)13] + (unsigned int)0x5A827999 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)14] = (block->l[(signed long int)14] << 24 | block->l[(signed long int)14] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)14] << 8 | block->l[(signed long int)14] >> 32 - 8) & (unsigned int)0x00FF00FF;
  a = a + (c & (d ^ e) ^ e) + block->l[(signed long int)14] + (unsigned int)0x5A827999 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)15] = (block->l[(signed long int)15] << 24 | block->l[(signed long int)15] >> 32 - 24) & 0xFF00FF00 | (block->l[(signed long int)15] << 8 | block->l[(signed long int)15] >> 32 - 8) & (unsigned int)0x00FF00FF;
  e = e + (b & (c ^ d) ^ d) + block->l[(signed long int)15] + (unsigned int)0x5A827999 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(16 & 15)] = (block->l[(signed long int)(16 + 13 & 15)] ^ block->l[(signed long int)(16 + 8 & 15)] ^ block->l[(signed long int)(16 + 2 & 15)] ^ block->l[(signed long int)(16 & 15)]) << 1 | (block->l[(signed long int)(16 + 13 & 15)] ^ block->l[(signed long int)(16 + 8 & 15)] ^ block->l[(signed long int)(16 + 2 & 15)] ^ block->l[(signed long int)(16 & 15)]) >> 32 - 1;
  d = d + (a & (b ^ c) ^ c) + block->l[(signed long int)(16 & 15)] + (unsigned int)0x5A827999 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(17 & 15)] = (block->l[(signed long int)(17 + 13 & 15)] ^ block->l[(signed long int)(17 + 8 & 15)] ^ block->l[(signed long int)(17 + 2 & 15)] ^ block->l[(signed long int)(17 & 15)]) << 1 | (block->l[(signed long int)(17 + 13 & 15)] ^ block->l[(signed long int)(17 + 8 & 15)] ^ block->l[(signed long int)(17 + 2 & 15)] ^ block->l[(signed long int)(17 & 15)]) >> 32 - 1;
  c = c + (e & (a ^ b) ^ b) + block->l[(signed long int)(17 & 15)] + (unsigned int)0x5A827999 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(18 & 15)] = (block->l[(signed long int)(18 + 13 & 15)] ^ block->l[(signed long int)(18 + 8 & 15)] ^ block->l[(signed long int)(18 + 2 & 15)] ^ block->l[(signed long int)(18 & 15)]) << 1 | (block->l[(signed long int)(18 + 13 & 15)] ^ block->l[(signed long int)(18 + 8 & 15)] ^ block->l[(signed long int)(18 + 2 & 15)] ^ block->l[(signed long int)(18 & 15)]) >> 32 - 1;
  b = b + (d & (e ^ a) ^ a) + block->l[(signed long int)(18 & 15)] + (unsigned int)0x5A827999 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(19 & 15)] = (block->l[(signed long int)(19 + 13 & 15)] ^ block->l[(signed long int)(19 + 8 & 15)] ^ block->l[(signed long int)(19 + 2 & 15)] ^ block->l[(signed long int)(19 & 15)]) << 1 | (block->l[(signed long int)(19 + 13 & 15)] ^ block->l[(signed long int)(19 + 8 & 15)] ^ block->l[(signed long int)(19 + 2 & 15)] ^ block->l[(signed long int)(19 & 15)]) >> 32 - 1;
  a = a + (c & (d ^ e) ^ e) + block->l[(signed long int)(19 & 15)] + (unsigned int)0x5A827999 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(20 & 15)] = (block->l[(signed long int)(20 + 13 & 15)] ^ block->l[(signed long int)(20 + 8 & 15)] ^ block->l[(signed long int)(20 + 2 & 15)] ^ block->l[(signed long int)(20 & 15)]) << 1 | (block->l[(signed long int)(20 + 13 & 15)] ^ block->l[(signed long int)(20 + 8 & 15)] ^ block->l[(signed long int)(20 + 2 & 15)] ^ block->l[(signed long int)(20 & 15)]) >> 32 - 1;
  e = e + (b ^ c ^ d) + block->l[(signed long int)(20 & 15)] + (unsigned int)0x6ED9EBA1 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(21 & 15)] = (block->l[(signed long int)(21 + 13 & 15)] ^ block->l[(signed long int)(21 + 8 & 15)] ^ block->l[(signed long int)(21 + 2 & 15)] ^ block->l[(signed long int)(21 & 15)]) << 1 | (block->l[(signed long int)(21 + 13 & 15)] ^ block->l[(signed long int)(21 + 8 & 15)] ^ block->l[(signed long int)(21 + 2 & 15)] ^ block->l[(signed long int)(21 & 15)]) >> 32 - 1;
  d = d + (a ^ b ^ c) + block->l[(signed long int)(21 & 15)] + (unsigned int)0x6ED9EBA1 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(22 & 15)] = (block->l[(signed long int)(22 + 13 & 15)] ^ block->l[(signed long int)(22 + 8 & 15)] ^ block->l[(signed long int)(22 + 2 & 15)] ^ block->l[(signed long int)(22 & 15)]) << 1 | (block->l[(signed long int)(22 + 13 & 15)] ^ block->l[(signed long int)(22 + 8 & 15)] ^ block->l[(signed long int)(22 + 2 & 15)] ^ block->l[(signed long int)(22 & 15)]) >> 32 - 1;
  c = c + (e ^ a ^ b) + block->l[(signed long int)(22 & 15)] + (unsigned int)0x6ED9EBA1 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(23 & 15)] = (block->l[(signed long int)(23 + 13 & 15)] ^ block->l[(signed long int)(23 + 8 & 15)] ^ block->l[(signed long int)(23 + 2 & 15)] ^ block->l[(signed long int)(23 & 15)]) << 1 | (block->l[(signed long int)(23 + 13 & 15)] ^ block->l[(signed long int)(23 + 8 & 15)] ^ block->l[(signed long int)(23 + 2 & 15)] ^ block->l[(signed long int)(23 & 15)]) >> 32 - 1;
  b = b + (d ^ e ^ a) + block->l[(signed long int)(23 & 15)] + (unsigned int)0x6ED9EBA1 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(24 & 15)] = (block->l[(signed long int)(24 + 13 & 15)] ^ block->l[(signed long int)(24 + 8 & 15)] ^ block->l[(signed long int)(24 + 2 & 15)] ^ block->l[(signed long int)(24 & 15)]) << 1 | (block->l[(signed long int)(24 + 13 & 15)] ^ block->l[(signed long int)(24 + 8 & 15)] ^ block->l[(signed long int)(24 + 2 & 15)] ^ block->l[(signed long int)(24 & 15)]) >> 32 - 1;
  a = a + (c ^ d ^ e) + block->l[(signed long int)(24 & 15)] + (unsigned int)0x6ED9EBA1 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(25 & 15)] = (block->l[(signed long int)(25 + 13 & 15)] ^ block->l[(signed long int)(25 + 8 & 15)] ^ block->l[(signed long int)(25 + 2 & 15)] ^ block->l[(signed long int)(25 & 15)]) << 1 | (block->l[(signed long int)(25 + 13 & 15)] ^ block->l[(signed long int)(25 + 8 & 15)] ^ block->l[(signed long int)(25 + 2 & 15)] ^ block->l[(signed long int)(25 & 15)]) >> 32 - 1;
  e = e + (b ^ c ^ d) + block->l[(signed long int)(25 & 15)] + (unsigned int)0x6ED9EBA1 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(26 & 15)] = (block->l[(signed long int)(26 + 13 & 15)] ^ block->l[(signed long int)(26 + 8 & 15)] ^ block->l[(signed long int)(26 + 2 & 15)] ^ block->l[(signed long int)(26 & 15)]) << 1 | (block->l[(signed long int)(26 + 13 & 15)] ^ block->l[(signed long int)(26 + 8 & 15)] ^ block->l[(signed long int)(26 + 2 & 15)] ^ block->l[(signed long int)(26 & 15)]) >> 32 - 1;
  d = d + (a ^ b ^ c) + block->l[(signed long int)(26 & 15)] + (unsigned int)0x6ED9EBA1 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(27 & 15)] = (block->l[(signed long int)(27 + 13 & 15)] ^ block->l[(signed long int)(27 + 8 & 15)] ^ block->l[(signed long int)(27 + 2 & 15)] ^ block->l[(signed long int)(27 & 15)]) << 1 | (block->l[(signed long int)(27 + 13 & 15)] ^ block->l[(signed long int)(27 + 8 & 15)] ^ block->l[(signed long int)(27 + 2 & 15)] ^ block->l[(signed long int)(27 & 15)]) >> 32 - 1;
  c = c + (e ^ a ^ b) + block->l[(signed long int)(27 & 15)] + (unsigned int)0x6ED9EBA1 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(28 & 15)] = (block->l[(signed long int)(28 + 13 & 15)] ^ block->l[(signed long int)(28 + 8 & 15)] ^ block->l[(signed long int)(28 + 2 & 15)] ^ block->l[(signed long int)(28 & 15)]) << 1 | (block->l[(signed long int)(28 + 13 & 15)] ^ block->l[(signed long int)(28 + 8 & 15)] ^ block->l[(signed long int)(28 + 2 & 15)] ^ block->l[(signed long int)(28 & 15)]) >> 32 - 1;
  b = b + (d ^ e ^ a) + block->l[(signed long int)(28 & 15)] + (unsigned int)0x6ED9EBA1 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(29 & 15)] = (block->l[(signed long int)(29 + 13 & 15)] ^ block->l[(signed long int)(29 + 8 & 15)] ^ block->l[(signed long int)(29 + 2 & 15)] ^ block->l[(signed long int)(29 & 15)]) << 1 | (block->l[(signed long int)(29 + 13 & 15)] ^ block->l[(signed long int)(29 + 8 & 15)] ^ block->l[(signed long int)(29 + 2 & 15)] ^ block->l[(signed long int)(29 & 15)]) >> 32 - 1;
  a = a + (c ^ d ^ e) + block->l[(signed long int)(29 & 15)] + (unsigned int)0x6ED9EBA1 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(30 & 15)] = (block->l[(signed long int)(30 + 13 & 15)] ^ block->l[(signed long int)(30 + 8 & 15)] ^ block->l[(signed long int)(30 + 2 & 15)] ^ block->l[(signed long int)(30 & 15)]) << 1 | (block->l[(signed long int)(30 + 13 & 15)] ^ block->l[(signed long int)(30 + 8 & 15)] ^ block->l[(signed long int)(30 + 2 & 15)] ^ block->l[(signed long int)(30 & 15)]) >> 32 - 1;
  e = e + (b ^ c ^ d) + block->l[(signed long int)(30 & 15)] + (unsigned int)0x6ED9EBA1 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(31 & 15)] = (block->l[(signed long int)(31 + 13 & 15)] ^ block->l[(signed long int)(31 + 8 & 15)] ^ block->l[(signed long int)(31 + 2 & 15)] ^ block->l[(signed long int)(31 & 15)]) << 1 | (block->l[(signed long int)(31 + 13 & 15)] ^ block->l[(signed long int)(31 + 8 & 15)] ^ block->l[(signed long int)(31 + 2 & 15)] ^ block->l[(signed long int)(31 & 15)]) >> 32 - 1;
  d = d + (a ^ b ^ c) + block->l[(signed long int)(31 & 15)] + (unsigned int)0x6ED9EBA1 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(32 & 15)] = (block->l[(signed long int)(32 + 13 & 15)] ^ block->l[(signed long int)(32 + 8 & 15)] ^ block->l[(signed long int)(32 + 2 & 15)] ^ block->l[(signed long int)(32 & 15)]) << 1 | (block->l[(signed long int)(32 + 13 & 15)] ^ block->l[(signed long int)(32 + 8 & 15)] ^ block->l[(signed long int)(32 + 2 & 15)] ^ block->l[(signed long int)(32 & 15)]) >> 32 - 1;
  c = c + (e ^ a ^ b) + block->l[(signed long int)(32 & 15)] + (unsigned int)0x6ED9EBA1 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(33 & 15)] = (block->l[(signed long int)(33 + 13 & 15)] ^ block->l[(signed long int)(33 + 8 & 15)] ^ block->l[(signed long int)(33 + 2 & 15)] ^ block->l[(signed long int)(33 & 15)]) << 1 | (block->l[(signed long int)(33 + 13 & 15)] ^ block->l[(signed long int)(33 + 8 & 15)] ^ block->l[(signed long int)(33 + 2 & 15)] ^ block->l[(signed long int)(33 & 15)]) >> 32 - 1;
  b = b + (d ^ e ^ a) + block->l[(signed long int)(33 & 15)] + (unsigned int)0x6ED9EBA1 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(34 & 15)] = (block->l[(signed long int)(34 + 13 & 15)] ^ block->l[(signed long int)(34 + 8 & 15)] ^ block->l[(signed long int)(34 + 2 & 15)] ^ block->l[(signed long int)(34 & 15)]) << 1 | (block->l[(signed long int)(34 + 13 & 15)] ^ block->l[(signed long int)(34 + 8 & 15)] ^ block->l[(signed long int)(34 + 2 & 15)] ^ block->l[(signed long int)(34 & 15)]) >> 32 - 1;
  a = a + (c ^ d ^ e) + block->l[(signed long int)(34 & 15)] + (unsigned int)0x6ED9EBA1 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(35 & 15)] = (block->l[(signed long int)(35 + 13 & 15)] ^ block->l[(signed long int)(35 + 8 & 15)] ^ block->l[(signed long int)(35 + 2 & 15)] ^ block->l[(signed long int)(35 & 15)]) << 1 | (block->l[(signed long int)(35 + 13 & 15)] ^ block->l[(signed long int)(35 + 8 & 15)] ^ block->l[(signed long int)(35 + 2 & 15)] ^ block->l[(signed long int)(35 & 15)]) >> 32 - 1;
  e = e + (b ^ c ^ d) + block->l[(signed long int)(35 & 15)] + (unsigned int)0x6ED9EBA1 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(36 & 15)] = (block->l[(signed long int)(36 + 13 & 15)] ^ block->l[(signed long int)(36 + 8 & 15)] ^ block->l[(signed long int)(36 + 2 & 15)] ^ block->l[(signed long int)(36 & 15)]) << 1 | (block->l[(signed long int)(36 + 13 & 15)] ^ block->l[(signed long int)(36 + 8 & 15)] ^ block->l[(signed long int)(36 + 2 & 15)] ^ block->l[(signed long int)(36 & 15)]) >> 32 - 1;
  d = d + (a ^ b ^ c) + block->l[(signed long int)(36 & 15)] + (unsigned int)0x6ED9EBA1 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(37 & 15)] = (block->l[(signed long int)(37 + 13 & 15)] ^ block->l[(signed long int)(37 + 8 & 15)] ^ block->l[(signed long int)(37 + 2 & 15)] ^ block->l[(signed long int)(37 & 15)]) << 1 | (block->l[(signed long int)(37 + 13 & 15)] ^ block->l[(signed long int)(37 + 8 & 15)] ^ block->l[(signed long int)(37 + 2 & 15)] ^ block->l[(signed long int)(37 & 15)]) >> 32 - 1;
  c = c + (e ^ a ^ b) + block->l[(signed long int)(37 & 15)] + (unsigned int)0x6ED9EBA1 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(38 & 15)] = (block->l[(signed long int)(38 + 13 & 15)] ^ block->l[(signed long int)(38 + 8 & 15)] ^ block->l[(signed long int)(38 + 2 & 15)] ^ block->l[(signed long int)(38 & 15)]) << 1 | (block->l[(signed long int)(38 + 13 & 15)] ^ block->l[(signed long int)(38 + 8 & 15)] ^ block->l[(signed long int)(38 + 2 & 15)] ^ block->l[(signed long int)(38 & 15)]) >> 32 - 1;
  b = b + (d ^ e ^ a) + block->l[(signed long int)(38 & 15)] + (unsigned int)0x6ED9EBA1 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(39 & 15)] = (block->l[(signed long int)(39 + 13 & 15)] ^ block->l[(signed long int)(39 + 8 & 15)] ^ block->l[(signed long int)(39 + 2 & 15)] ^ block->l[(signed long int)(39 & 15)]) << 1 | (block->l[(signed long int)(39 + 13 & 15)] ^ block->l[(signed long int)(39 + 8 & 15)] ^ block->l[(signed long int)(39 + 2 & 15)] ^ block->l[(signed long int)(39 & 15)]) >> 32 - 1;
  a = a + (c ^ d ^ e) + block->l[(signed long int)(39 & 15)] + (unsigned int)0x6ED9EBA1 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(40 & 15)] = (block->l[(signed long int)(40 + 13 & 15)] ^ block->l[(signed long int)(40 + 8 & 15)] ^ block->l[(signed long int)(40 + 2 & 15)] ^ block->l[(signed long int)(40 & 15)]) << 1 | (block->l[(signed long int)(40 + 13 & 15)] ^ block->l[(signed long int)(40 + 8 & 15)] ^ block->l[(signed long int)(40 + 2 & 15)] ^ block->l[(signed long int)(40 & 15)]) >> 32 - 1;
  e = e + ((b | c) & d | b & c) + block->l[(signed long int)(40 & 15)] + 0x8F1BBCDC + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(41 & 15)] = (block->l[(signed long int)(41 + 13 & 15)] ^ block->l[(signed long int)(41 + 8 & 15)] ^ block->l[(signed long int)(41 + 2 & 15)] ^ block->l[(signed long int)(41 & 15)]) << 1 | (block->l[(signed long int)(41 + 13 & 15)] ^ block->l[(signed long int)(41 + 8 & 15)] ^ block->l[(signed long int)(41 + 2 & 15)] ^ block->l[(signed long int)(41 & 15)]) >> 32 - 1;
  d = d + ((a | b) & c | a & b) + block->l[(signed long int)(41 & 15)] + 0x8F1BBCDC + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(42 & 15)] = (block->l[(signed long int)(42 + 13 & 15)] ^ block->l[(signed long int)(42 + 8 & 15)] ^ block->l[(signed long int)(42 + 2 & 15)] ^ block->l[(signed long int)(42 & 15)]) << 1 | (block->l[(signed long int)(42 + 13 & 15)] ^ block->l[(signed long int)(42 + 8 & 15)] ^ block->l[(signed long int)(42 + 2 & 15)] ^ block->l[(signed long int)(42 & 15)]) >> 32 - 1;
  c = c + ((e | a) & b | e & a) + block->l[(signed long int)(42 & 15)] + 0x8F1BBCDC + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(43 & 15)] = (block->l[(signed long int)(43 + 13 & 15)] ^ block->l[(signed long int)(43 + 8 & 15)] ^ block->l[(signed long int)(43 + 2 & 15)] ^ block->l[(signed long int)(43 & 15)]) << 1 | (block->l[(signed long int)(43 + 13 & 15)] ^ block->l[(signed long int)(43 + 8 & 15)] ^ block->l[(signed long int)(43 + 2 & 15)] ^ block->l[(signed long int)(43 & 15)]) >> 32 - 1;
  b = b + ((d | e) & a | d & e) + block->l[(signed long int)(43 & 15)] + 0x8F1BBCDC + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(44 & 15)] = (block->l[(signed long int)(44 + 13 & 15)] ^ block->l[(signed long int)(44 + 8 & 15)] ^ block->l[(signed long int)(44 + 2 & 15)] ^ block->l[(signed long int)(44 & 15)]) << 1 | (block->l[(signed long int)(44 + 13 & 15)] ^ block->l[(signed long int)(44 + 8 & 15)] ^ block->l[(signed long int)(44 + 2 & 15)] ^ block->l[(signed long int)(44 & 15)]) >> 32 - 1;
  a = a + ((c | d) & e | c & d) + block->l[(signed long int)(44 & 15)] + 0x8F1BBCDC + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(45 & 15)] = (block->l[(signed long int)(45 + 13 & 15)] ^ block->l[(signed long int)(45 + 8 & 15)] ^ block->l[(signed long int)(45 + 2 & 15)] ^ block->l[(signed long int)(45 & 15)]) << 1 | (block->l[(signed long int)(45 + 13 & 15)] ^ block->l[(signed long int)(45 + 8 & 15)] ^ block->l[(signed long int)(45 + 2 & 15)] ^ block->l[(signed long int)(45 & 15)]) >> 32 - 1;
  e = e + ((b | c) & d | b & c) + block->l[(signed long int)(45 & 15)] + 0x8F1BBCDC + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(46 & 15)] = (block->l[(signed long int)(46 + 13 & 15)] ^ block->l[(signed long int)(46 + 8 & 15)] ^ block->l[(signed long int)(46 + 2 & 15)] ^ block->l[(signed long int)(46 & 15)]) << 1 | (block->l[(signed long int)(46 + 13 & 15)] ^ block->l[(signed long int)(46 + 8 & 15)] ^ block->l[(signed long int)(46 + 2 & 15)] ^ block->l[(signed long int)(46 & 15)]) >> 32 - 1;
  d = d + ((a | b) & c | a & b) + block->l[(signed long int)(46 & 15)] + 0x8F1BBCDC + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(47 & 15)] = (block->l[(signed long int)(47 + 13 & 15)] ^ block->l[(signed long int)(47 + 8 & 15)] ^ block->l[(signed long int)(47 + 2 & 15)] ^ block->l[(signed long int)(47 & 15)]) << 1 | (block->l[(signed long int)(47 + 13 & 15)] ^ block->l[(signed long int)(47 + 8 & 15)] ^ block->l[(signed long int)(47 + 2 & 15)] ^ block->l[(signed long int)(47 & 15)]) >> 32 - 1;
  c = c + ((e | a) & b | e & a) + block->l[(signed long int)(47 & 15)] + 0x8F1BBCDC + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(48 & 15)] = (block->l[(signed long int)(48 + 13 & 15)] ^ block->l[(signed long int)(48 + 8 & 15)] ^ block->l[(signed long int)(48 + 2 & 15)] ^ block->l[(signed long int)(48 & 15)]) << 1 | (block->l[(signed long int)(48 + 13 & 15)] ^ block->l[(signed long int)(48 + 8 & 15)] ^ block->l[(signed long int)(48 + 2 & 15)] ^ block->l[(signed long int)(48 & 15)]) >> 32 - 1;
  b = b + ((d | e) & a | d & e) + block->l[(signed long int)(48 & 15)] + 0x8F1BBCDC + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(49 & 15)] = (block->l[(signed long int)(49 + 13 & 15)] ^ block->l[(signed long int)(49 + 8 & 15)] ^ block->l[(signed long int)(49 + 2 & 15)] ^ block->l[(signed long int)(49 & 15)]) << 1 | (block->l[(signed long int)(49 + 13 & 15)] ^ block->l[(signed long int)(49 + 8 & 15)] ^ block->l[(signed long int)(49 + 2 & 15)] ^ block->l[(signed long int)(49 & 15)]) >> 32 - 1;
  a = a + ((c | d) & e | c & d) + block->l[(signed long int)(49 & 15)] + 0x8F1BBCDC + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(50 & 15)] = (block->l[(signed long int)(50 + 13 & 15)] ^ block->l[(signed long int)(50 + 8 & 15)] ^ block->l[(signed long int)(50 + 2 & 15)] ^ block->l[(signed long int)(50 & 15)]) << 1 | (block->l[(signed long int)(50 + 13 & 15)] ^ block->l[(signed long int)(50 + 8 & 15)] ^ block->l[(signed long int)(50 + 2 & 15)] ^ block->l[(signed long int)(50 & 15)]) >> 32 - 1;
  e = e + ((b | c) & d | b & c) + block->l[(signed long int)(50 & 15)] + 0x8F1BBCDC + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(51 & 15)] = (block->l[(signed long int)(51 + 13 & 15)] ^ block->l[(signed long int)(51 + 8 & 15)] ^ block->l[(signed long int)(51 + 2 & 15)] ^ block->l[(signed long int)(51 & 15)]) << 1 | (block->l[(signed long int)(51 + 13 & 15)] ^ block->l[(signed long int)(51 + 8 & 15)] ^ block->l[(signed long int)(51 + 2 & 15)] ^ block->l[(signed long int)(51 & 15)]) >> 32 - 1;
  d = d + ((a | b) & c | a & b) + block->l[(signed long int)(51 & 15)] + 0x8F1BBCDC + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(52 & 15)] = (block->l[(signed long int)(52 + 13 & 15)] ^ block->l[(signed long int)(52 + 8 & 15)] ^ block->l[(signed long int)(52 + 2 & 15)] ^ block->l[(signed long int)(52 & 15)]) << 1 | (block->l[(signed long int)(52 + 13 & 15)] ^ block->l[(signed long int)(52 + 8 & 15)] ^ block->l[(signed long int)(52 + 2 & 15)] ^ block->l[(signed long int)(52 & 15)]) >> 32 - 1;
  c = c + ((e | a) & b | e & a) + block->l[(signed long int)(52 & 15)] + 0x8F1BBCDC + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(53 & 15)] = (block->l[(signed long int)(53 + 13 & 15)] ^ block->l[(signed long int)(53 + 8 & 15)] ^ block->l[(signed long int)(53 + 2 & 15)] ^ block->l[(signed long int)(53 & 15)]) << 1 | (block->l[(signed long int)(53 + 13 & 15)] ^ block->l[(signed long int)(53 + 8 & 15)] ^ block->l[(signed long int)(53 + 2 & 15)] ^ block->l[(signed long int)(53 & 15)]) >> 32 - 1;
  b = b + ((d | e) & a | d & e) + block->l[(signed long int)(53 & 15)] + 0x8F1BBCDC + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(54 & 15)] = (block->l[(signed long int)(54 + 13 & 15)] ^ block->l[(signed long int)(54 + 8 & 15)] ^ block->l[(signed long int)(54 + 2 & 15)] ^ block->l[(signed long int)(54 & 15)]) << 1 | (block->l[(signed long int)(54 + 13 & 15)] ^ block->l[(signed long int)(54 + 8 & 15)] ^ block->l[(signed long int)(54 + 2 & 15)] ^ block->l[(signed long int)(54 & 15)]) >> 32 - 1;
  a = a + ((c | d) & e | c & d) + block->l[(signed long int)(54 & 15)] + 0x8F1BBCDC + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(55 & 15)] = (block->l[(signed long int)(55 + 13 & 15)] ^ block->l[(signed long int)(55 + 8 & 15)] ^ block->l[(signed long int)(55 + 2 & 15)] ^ block->l[(signed long int)(55 & 15)]) << 1 | (block->l[(signed long int)(55 + 13 & 15)] ^ block->l[(signed long int)(55 + 8 & 15)] ^ block->l[(signed long int)(55 + 2 & 15)] ^ block->l[(signed long int)(55 & 15)]) >> 32 - 1;
  e = e + ((b | c) & d | b & c) + block->l[(signed long int)(55 & 15)] + 0x8F1BBCDC + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(56 & 15)] = (block->l[(signed long int)(56 + 13 & 15)] ^ block->l[(signed long int)(56 + 8 & 15)] ^ block->l[(signed long int)(56 + 2 & 15)] ^ block->l[(signed long int)(56 & 15)]) << 1 | (block->l[(signed long int)(56 + 13 & 15)] ^ block->l[(signed long int)(56 + 8 & 15)] ^ block->l[(signed long int)(56 + 2 & 15)] ^ block->l[(signed long int)(56 & 15)]) >> 32 - 1;
  d = d + ((a | b) & c | a & b) + block->l[(signed long int)(56 & 15)] + 0x8F1BBCDC + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(57 & 15)] = (block->l[(signed long int)(57 + 13 & 15)] ^ block->l[(signed long int)(57 + 8 & 15)] ^ block->l[(signed long int)(57 + 2 & 15)] ^ block->l[(signed long int)(57 & 15)]) << 1 | (block->l[(signed long int)(57 + 13 & 15)] ^ block->l[(signed long int)(57 + 8 & 15)] ^ block->l[(signed long int)(57 + 2 & 15)] ^ block->l[(signed long int)(57 & 15)]) >> 32 - 1;
  c = c + ((e | a) & b | e & a) + block->l[(signed long int)(57 & 15)] + 0x8F1BBCDC + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(58 & 15)] = (block->l[(signed long int)(58 + 13 & 15)] ^ block->l[(signed long int)(58 + 8 & 15)] ^ block->l[(signed long int)(58 + 2 & 15)] ^ block->l[(signed long int)(58 & 15)]) << 1 | (block->l[(signed long int)(58 + 13 & 15)] ^ block->l[(signed long int)(58 + 8 & 15)] ^ block->l[(signed long int)(58 + 2 & 15)] ^ block->l[(signed long int)(58 & 15)]) >> 32 - 1;
  b = b + ((d | e) & a | d & e) + block->l[(signed long int)(58 & 15)] + 0x8F1BBCDC + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(59 & 15)] = (block->l[(signed long int)(59 + 13 & 15)] ^ block->l[(signed long int)(59 + 8 & 15)] ^ block->l[(signed long int)(59 + 2 & 15)] ^ block->l[(signed long int)(59 & 15)]) << 1 | (block->l[(signed long int)(59 + 13 & 15)] ^ block->l[(signed long int)(59 + 8 & 15)] ^ block->l[(signed long int)(59 + 2 & 15)] ^ block->l[(signed long int)(59 & 15)]) >> 32 - 1;
  a = a + ((c | d) & e | c & d) + block->l[(signed long int)(59 & 15)] + 0x8F1BBCDC + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(60 & 15)] = (block->l[(signed long int)(60 + 13 & 15)] ^ block->l[(signed long int)(60 + 8 & 15)] ^ block->l[(signed long int)(60 + 2 & 15)] ^ block->l[(signed long int)(60 & 15)]) << 1 | (block->l[(signed long int)(60 + 13 & 15)] ^ block->l[(signed long int)(60 + 8 & 15)] ^ block->l[(signed long int)(60 + 2 & 15)] ^ block->l[(signed long int)(60 & 15)]) >> 32 - 1;
  e = e + (b ^ c ^ d) + block->l[(signed long int)(60 & 15)] + 0xCA62C1D6 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(61 & 15)] = (block->l[(signed long int)(61 + 13 & 15)] ^ block->l[(signed long int)(61 + 8 & 15)] ^ block->l[(signed long int)(61 + 2 & 15)] ^ block->l[(signed long int)(61 & 15)]) << 1 | (block->l[(signed long int)(61 + 13 & 15)] ^ block->l[(signed long int)(61 + 8 & 15)] ^ block->l[(signed long int)(61 + 2 & 15)] ^ block->l[(signed long int)(61 & 15)]) >> 32 - 1;
  d = d + (a ^ b ^ c) + block->l[(signed long int)(61 & 15)] + 0xCA62C1D6 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(62 & 15)] = (block->l[(signed long int)(62 + 13 & 15)] ^ block->l[(signed long int)(62 + 8 & 15)] ^ block->l[(signed long int)(62 + 2 & 15)] ^ block->l[(signed long int)(62 & 15)]) << 1 | (block->l[(signed long int)(62 + 13 & 15)] ^ block->l[(signed long int)(62 + 8 & 15)] ^ block->l[(signed long int)(62 + 2 & 15)] ^ block->l[(signed long int)(62 & 15)]) >> 32 - 1;
  c = c + (e ^ a ^ b) + block->l[(signed long int)(62 & 15)] + 0xCA62C1D6 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(63 & 15)] = (block->l[(signed long int)(63 + 13 & 15)] ^ block->l[(signed long int)(63 + 8 & 15)] ^ block->l[(signed long int)(63 + 2 & 15)] ^ block->l[(signed long int)(63 & 15)]) << 1 | (block->l[(signed long int)(63 + 13 & 15)] ^ block->l[(signed long int)(63 + 8 & 15)] ^ block->l[(signed long int)(63 + 2 & 15)] ^ block->l[(signed long int)(63 & 15)]) >> 32 - 1;
  b = b + (d ^ e ^ a) + block->l[(signed long int)(63 & 15)] + 0xCA62C1D6 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(64 & 15)] = (block->l[(signed long int)(64 + 13 & 15)] ^ block->l[(signed long int)(64 + 8 & 15)] ^ block->l[(signed long int)(64 + 2 & 15)] ^ block->l[(signed long int)(64 & 15)]) << 1 | (block->l[(signed long int)(64 + 13 & 15)] ^ block->l[(signed long int)(64 + 8 & 15)] ^ block->l[(signed long int)(64 + 2 & 15)] ^ block->l[(signed long int)(64 & 15)]) >> 32 - 1;
  a = a + (c ^ d ^ e) + block->l[(signed long int)(64 & 15)] + 0xCA62C1D6 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(65 & 15)] = (block->l[(signed long int)(65 + 13 & 15)] ^ block->l[(signed long int)(65 + 8 & 15)] ^ block->l[(signed long int)(65 + 2 & 15)] ^ block->l[(signed long int)(65 & 15)]) << 1 | (block->l[(signed long int)(65 + 13 & 15)] ^ block->l[(signed long int)(65 + 8 & 15)] ^ block->l[(signed long int)(65 + 2 & 15)] ^ block->l[(signed long int)(65 & 15)]) >> 32 - 1;
  e = e + (b ^ c ^ d) + block->l[(signed long int)(65 & 15)] + 0xCA62C1D6 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(66 & 15)] = (block->l[(signed long int)(66 + 13 & 15)] ^ block->l[(signed long int)(66 + 8 & 15)] ^ block->l[(signed long int)(66 + 2 & 15)] ^ block->l[(signed long int)(66 & 15)]) << 1 | (block->l[(signed long int)(66 + 13 & 15)] ^ block->l[(signed long int)(66 + 8 & 15)] ^ block->l[(signed long int)(66 + 2 & 15)] ^ block->l[(signed long int)(66 & 15)]) >> 32 - 1;
  d = d + (a ^ b ^ c) + block->l[(signed long int)(66 & 15)] + 0xCA62C1D6 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(67 & 15)] = (block->l[(signed long int)(67 + 13 & 15)] ^ block->l[(signed long int)(67 + 8 & 15)] ^ block->l[(signed long int)(67 + 2 & 15)] ^ block->l[(signed long int)(67 & 15)]) << 1 | (block->l[(signed long int)(67 + 13 & 15)] ^ block->l[(signed long int)(67 + 8 & 15)] ^ block->l[(signed long int)(67 + 2 & 15)] ^ block->l[(signed long int)(67 & 15)]) >> 32 - 1;
  c = c + (e ^ a ^ b) + block->l[(signed long int)(67 & 15)] + 0xCA62C1D6 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(68 & 15)] = (block->l[(signed long int)(68 + 13 & 15)] ^ block->l[(signed long int)(68 + 8 & 15)] ^ block->l[(signed long int)(68 + 2 & 15)] ^ block->l[(signed long int)(68 & 15)]) << 1 | (block->l[(signed long int)(68 + 13 & 15)] ^ block->l[(signed long int)(68 + 8 & 15)] ^ block->l[(signed long int)(68 + 2 & 15)] ^ block->l[(signed long int)(68 & 15)]) >> 32 - 1;
  b = b + (d ^ e ^ a) + block->l[(signed long int)(68 & 15)] + 0xCA62C1D6 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(69 & 15)] = (block->l[(signed long int)(69 + 13 & 15)] ^ block->l[(signed long int)(69 + 8 & 15)] ^ block->l[(signed long int)(69 + 2 & 15)] ^ block->l[(signed long int)(69 & 15)]) << 1 | (block->l[(signed long int)(69 + 13 & 15)] ^ block->l[(signed long int)(69 + 8 & 15)] ^ block->l[(signed long int)(69 + 2 & 15)] ^ block->l[(signed long int)(69 & 15)]) >> 32 - 1;
  a = a + (c ^ d ^ e) + block->l[(signed long int)(69 & 15)] + 0xCA62C1D6 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(70 & 15)] = (block->l[(signed long int)(70 + 13 & 15)] ^ block->l[(signed long int)(70 + 8 & 15)] ^ block->l[(signed long int)(70 + 2 & 15)] ^ block->l[(signed long int)(70 & 15)]) << 1 | (block->l[(signed long int)(70 + 13 & 15)] ^ block->l[(signed long int)(70 + 8 & 15)] ^ block->l[(signed long int)(70 + 2 & 15)] ^ block->l[(signed long int)(70 & 15)]) >> 32 - 1;
  e = e + (b ^ c ^ d) + block->l[(signed long int)(70 & 15)] + 0xCA62C1D6 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(71 & 15)] = (block->l[(signed long int)(71 + 13 & 15)] ^ block->l[(signed long int)(71 + 8 & 15)] ^ block->l[(signed long int)(71 + 2 & 15)] ^ block->l[(signed long int)(71 & 15)]) << 1 | (block->l[(signed long int)(71 + 13 & 15)] ^ block->l[(signed long int)(71 + 8 & 15)] ^ block->l[(signed long int)(71 + 2 & 15)] ^ block->l[(signed long int)(71 & 15)]) >> 32 - 1;
  d = d + (a ^ b ^ c) + block->l[(signed long int)(71 & 15)] + 0xCA62C1D6 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(72 & 15)] = (block->l[(signed long int)(72 + 13 & 15)] ^ block->l[(signed long int)(72 + 8 & 15)] ^ block->l[(signed long int)(72 + 2 & 15)] ^ block->l[(signed long int)(72 & 15)]) << 1 | (block->l[(signed long int)(72 + 13 & 15)] ^ block->l[(signed long int)(72 + 8 & 15)] ^ block->l[(signed long int)(72 + 2 & 15)] ^ block->l[(signed long int)(72 & 15)]) >> 32 - 1;
  c = c + (e ^ a ^ b) + block->l[(signed long int)(72 & 15)] + 0xCA62C1D6 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(73 & 15)] = (block->l[(signed long int)(73 + 13 & 15)] ^ block->l[(signed long int)(73 + 8 & 15)] ^ block->l[(signed long int)(73 + 2 & 15)] ^ block->l[(signed long int)(73 & 15)]) << 1 | (block->l[(signed long int)(73 + 13 & 15)] ^ block->l[(signed long int)(73 + 8 & 15)] ^ block->l[(signed long int)(73 + 2 & 15)] ^ block->l[(signed long int)(73 & 15)]) >> 32 - 1;
  b = b + (d ^ e ^ a) + block->l[(signed long int)(73 & 15)] + 0xCA62C1D6 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(74 & 15)] = (block->l[(signed long int)(74 + 13 & 15)] ^ block->l[(signed long int)(74 + 8 & 15)] ^ block->l[(signed long int)(74 + 2 & 15)] ^ block->l[(signed long int)(74 & 15)]) << 1 | (block->l[(signed long int)(74 + 13 & 15)] ^ block->l[(signed long int)(74 + 8 & 15)] ^ block->l[(signed long int)(74 + 2 & 15)] ^ block->l[(signed long int)(74 & 15)]) >> 32 - 1;
  a = a + (c ^ d ^ e) + block->l[(signed long int)(74 & 15)] + 0xCA62C1D6 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  block->l[(signed long int)(75 & 15)] = (block->l[(signed long int)(75 + 13 & 15)] ^ block->l[(signed long int)(75 + 8 & 15)] ^ block->l[(signed long int)(75 + 2 & 15)] ^ block->l[(signed long int)(75 & 15)]) << 1 | (block->l[(signed long int)(75 + 13 & 15)] ^ block->l[(signed long int)(75 + 8 & 15)] ^ block->l[(signed long int)(75 + 2 & 15)] ^ block->l[(signed long int)(75 & 15)]) >> 32 - 1;
  e = e + (b ^ c ^ d) + block->l[(signed long int)(75 & 15)] + 0xCA62C1D6 + (a << 5 | a >> 32 - 5);
  b = b << 30 | b >> 32 - 30;
  block->l[(signed long int)(76 & 15)] = (block->l[(signed long int)(76 + 13 & 15)] ^ block->l[(signed long int)(76 + 8 & 15)] ^ block->l[(signed long int)(76 + 2 & 15)] ^ block->l[(signed long int)(76 & 15)]) << 1 | (block->l[(signed long int)(76 + 13 & 15)] ^ block->l[(signed long int)(76 + 8 & 15)] ^ block->l[(signed long int)(76 + 2 & 15)] ^ block->l[(signed long int)(76 & 15)]) >> 32 - 1;
  d = d + (a ^ b ^ c) + block->l[(signed long int)(76 & 15)] + 0xCA62C1D6 + (e << 5 | e >> 32 - 5);
  a = a << 30 | a >> 32 - 30;
  block->l[(signed long int)(77 & 15)] = (block->l[(signed long int)(77 + 13 & 15)] ^ block->l[(signed long int)(77 + 8 & 15)] ^ block->l[(signed long int)(77 + 2 & 15)] ^ block->l[(signed long int)(77 & 15)]) << 1 | (block->l[(signed long int)(77 + 13 & 15)] ^ block->l[(signed long int)(77 + 8 & 15)] ^ block->l[(signed long int)(77 + 2 & 15)] ^ block->l[(signed long int)(77 & 15)]) >> 32 - 1;
  c = c + (e ^ a ^ b) + block->l[(signed long int)(77 & 15)] + 0xCA62C1D6 + (d << 5 | d >> 32 - 5);
  e = e << 30 | e >> 32 - 30;
  block->l[(signed long int)(78 & 15)] = (block->l[(signed long int)(78 + 13 & 15)] ^ block->l[(signed long int)(78 + 8 & 15)] ^ block->l[(signed long int)(78 + 2 & 15)] ^ block->l[(signed long int)(78 & 15)]) << 1 | (block->l[(signed long int)(78 + 13 & 15)] ^ block->l[(signed long int)(78 + 8 & 15)] ^ block->l[(signed long int)(78 + 2 & 15)] ^ block->l[(signed long int)(78 & 15)]) >> 32 - 1;
  b = b + (d ^ e ^ a) + block->l[(signed long int)(78 & 15)] + 0xCA62C1D6 + (c << 5 | c >> 32 - 5);
  d = d << 30 | d >> 32 - 30;
  block->l[(signed long int)(79 & 15)] = (block->l[(signed long int)(79 + 13 & 15)] ^ block->l[(signed long int)(79 + 8 & 15)] ^ block->l[(signed long int)(79 + 2 & 15)] ^ block->l[(signed long int)(79 & 15)]) << 1 | (block->l[(signed long int)(79 + 13 & 15)] ^ block->l[(signed long int)(79 + 8 & 15)] ^ block->l[(signed long int)(79 + 2 & 15)] ^ block->l[(signed long int)(79 & 15)]) >> 32 - 1;
  a = a + (c ^ d ^ e) + block->l[(signed long int)(79 & 15)] + 0xCA62C1D6 + (b << 5 | b >> 32 - 5);
  c = c << 30 | c >> 32 - 30;
  state[(signed long int)0] = state[(signed long int)0] + a;
  state[(signed long int)1] = state[(signed long int)1] + b;
  state[(signed long int)2] = state[(signed long int)2] + c;
  state[(signed long int)3] = state[(signed long int)3] + d;
  state[(signed long int)4] = state[(signed long int)4] + e;
  e = (unsigned int)0;
  d = e;
  c = d;
  b = c;
  a = b;
}

// __SHA1Update
// file sha.c line 203
extern void __SHA1Update(struct anonymous_1 *context, unsigned char *data, unsigned int len)
{
  unsigned int i;
  unsigned int j = context->count[(signed long int)0];
  context->count[(signed long int)0] = context->count[(signed long int)0] + (len << 3);
  if(!(context->count[0l] >= j))
    context->count[(signed long int)1] = context->count[(signed long int)1] + (len >> 29) + (unsigned int)1;

  j = j >> 3 & (unsigned int)63;
  if(j + len >= 64u)
  {
    i = (unsigned int)64 - j;
    memcpy((void *)&context->buffer[(signed long int)j], (const void *)data, (unsigned long int)i);
    __SHA1Transform(context->state, context->buffer);
    for( ; !(63u + i >= len); i = i + (unsigned int)64)
      __SHA1Transform(context->state, &data[(signed long int)i]);
    j = (unsigned int)0;
  }

  else
    i = (unsigned int)0;
  memcpy((void *)&context->buffer[(signed long int)j], (const void *)&data[(signed long int)i], (unsigned long int)(len - i));
}

// __bigcrypt
// file wrapper.c line 161
char * __bigcrypt(const char *key, const char *salt)
{
  char *return_value___bigcrypt_r_1;
  return_value___bigcrypt_r_1=__bigcrypt_r(key, salt, &_ufc_foobar);
  return return_value___bigcrypt_r_1;
}

// __bigcrypt_r
// file crypt-private.h line 60
extern char * __bigcrypt_r(const char *key, const char *salt, struct crypt_data * restrict data)
{
  unsigned long int keylen;
  unsigned long int n_seg;
  unsigned long int j;
  char *cipher_ptr;
  char *plaintext_ptr;
  char *tmp_ptr;
  char *salt_ptr;
  char keybuf[131l];
  memset((void *)keybuf, 0, (unsigned long int)(16 * 8 + 2 + 1));
  static char dec_c2_cryptbuf[179l];
  memset((void *)dec_c2_cryptbuf, 0, (unsigned long int)(16 * 11 + 2 + 1));
  strncpy(keybuf, key, (unsigned long int)(16 * 8 + 2));
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(salt);
  if(return_value_strlen_1 == 13ul)
    keybuf[(signed long int)8] = (char)0;

  keylen=strlen(keybuf);
  if(keylen == 0ul)
    n_seg = (unsigned long int)1;

  else
    n_seg = (unsigned long int)1 + (keylen - (unsigned long int)1) / (unsigned long int)8;
  if(n_seg >= 17ul)
    n_seg = (unsigned long int)16;

  cipher_ptr = dec_c2_cryptbuf;
  plaintext_ptr = keybuf;
  tmp_ptr=__des_crypt_r(plaintext_ptr, salt, data);
  strncpy(cipher_ptr, tmp_ptr, (unsigned long int)13);
  cipher_ptr = cipher_ptr + (signed long int)(11 + 2);
  plaintext_ptr = plaintext_ptr + (signed long int)8;
  salt_ptr = cipher_ptr - (signed long int)11;
  if(n_seg >= 2ul)
  {
    j = (unsigned long int)2;
    for( ; n_seg >= j; j = j + 1ul)
    {
      tmp_ptr=__des_crypt_r(plaintext_ptr, salt_ptr, data);
      strncpy(cipher_ptr, tmp_ptr + (signed long int)2, (unsigned long int)11);
      cipher_ptr = cipher_ptr + (signed long int)11;
      plaintext_ptr = plaintext_ptr + (signed long int)8;
      salt_ptr = cipher_ptr - (signed long int)11;
    }
  }

  return dec_c2_cryptbuf;
}

// __des_crypt_r
// file crypt-entry.c line 61
extern char * __des_crypt_r(const char *key, const char *salt, struct crypt_data * restrict data)
{
  unsigned long int res[4l];
  char ktab[9l];
  unsigned long int xx = (unsigned long int)25;
  _ufc_setup_salt_r(salt, data);
  memset((void *)ktab, 0, (unsigned long int)(signed int)sizeof(char [9l]) /*9ul*/ );
  strncpy(ktab, key, (unsigned long int)8);
  _ufc_mk_keytab_r(ktab, data);
  memset((void *)(char *)res, 0, (unsigned long int)(signed int)sizeof(unsigned long int [4l]) /*32ul*/ );
  _ufc_doit_r(xx, data, &res[(signed long int)0]);
  _ufc_dofinalperm_r(res, data);
  _ufc_output_conversion_r(res[(signed long int)0], res[(signed long int)1], salt, data);
  return data->crypt_3_buf;
}

// __init_des
// file crypt_util.c line 540
extern void __init_des(void)
{
  __init_des_r(&_ufc_foobar);
}

// __init_des_r
// file crypt_util.c line 342
extern void __init_des_r(struct crypt_data * restrict __data)
{
  signed int comes_from_bit;
  signed int bit;
  signed int sg;
  unsigned long int j;
  unsigned long int __init_des_r__1__mask1;
  unsigned long int __init_des_r__1__mask2;
  signed int e_inverse[64l];
  unsigned long int *sb[4l];
  sb[(signed long int)0] = (unsigned long int *)__data->sb0;
  sb[(signed long int)1] = (unsigned long int *)__data->sb1;
  sb[(signed long int)2] = (unsigned long int *)__data->sb2;
  sb[(signed long int)3] = (unsigned long int *)__data->sb3;
  unsigned long int tmp_post_1;
  signed int tmp_post_2;
  unsigned long int tmp_post_3;
  static volatile signed int small_tables_initialized = 0;
  if(small_tables_initialized == 0)
  {
    pthread_mutex_lock(&_ufc_tables_lock);
    if(small_tables_initialized == 0)
    {
      memset((void *)(char *)do_pc1, 0, (unsigned long int)(signed int)sizeof(unsigned long int [8l][2l][128l]) /*16384ul*/ );
      bit = 0;
      for( ; !(bit >= 56); bit = bit + 1)
      {
        comes_from_bit = pc1[(signed long int)bit] - 1;
        __init_des_r__1__mask1 = (unsigned long int)bytemask[(signed long int)(comes_from_bit % 8 + 1)];
        __init_des_r__1__mask2 = longmask[(signed long int)(bit % 28 + 4)];
        j = (unsigned long int)0;
        for( ; !(j >= 128ul); j = j + 1ul)
          if(!((j & __init_des_r__1__mask1) == 0ul))
            do_pc1[(signed long int)(comes_from_bit / 8)][(signed long int)(bit / 28)][(signed long int)j] = do_pc1[(signed long int)(comes_from_bit / 8)][(signed long int)(bit / 28)][(signed long int)j] | __init_des_r__1__mask2;

      }
      memset((void *)(char *)do_pc2, 0, (unsigned long int)(signed int)sizeof(unsigned long int [8l][128l]) /*8192ul*/ );
      bit = 0;
      for( ; !(bit >= 48); bit = bit + 1)
      {
        comes_from_bit = pc2[(signed long int)bit] - 1;
        __init_des_r__1__mask1 = (unsigned long int)bytemask[(signed long int)(comes_from_bit % 7 + 1)];
        __init_des_r__1__mask2 = BITMASK[(signed long int)(bit % 24)];
        j = (unsigned long int)0;
        for( ; !(j >= 128ul); j = j + 1ul)
          if(!((j & __init_des_r__1__mask1) == 0ul))
            do_pc2[(signed long int)(comes_from_bit / 7)][(signed long int)j] = do_pc2[(signed long int)(comes_from_bit / 7)][(signed long int)j] | __init_des_r__1__mask2;

      }
      memset((void *)(char *)eperm32tab, 0, (unsigned long int)(signed int)sizeof(unsigned long int [4l][256l][2l]) /*16384ul*/ );
      bit = 0;
      for( ; !(bit >= 48); bit = bit + 1)
      {
        unsigned long int mask1;
        unsigned long int comes_from = (unsigned long int)(perm32[(signed long int)(esel[(signed long int)bit] - 1)] - 1);
        mask1 = (unsigned long int)bytemask[(signed long int)(comes_from % (unsigned long int)8)];
        j = (unsigned long int)256;
        do
        {
          tmp_post_1 = j;
          j = j - 1ul;
          if(tmp_post_1 == 0ul)
            break;

          if(!((mask1 & j) == 0ul))
            eperm32tab[(signed long int)(comes_from / (unsigned long int)8)][(signed long int)j][(signed long int)(bit / 24)] = eperm32tab[(signed long int)(comes_from / (unsigned long int)8)][(signed long int)j][(signed long int)(bit / 24)] | BITMASK[(signed long int)(bit % 24)];

        }
        while((_Bool)1);
      }
      bit = 48;
      do
      {
        tmp_post_2 = bit;
        bit = bit - 1;
        if(tmp_post_2 == 0)
          break;

        e_inverse[(signed long int)(esel[(signed long int)bit] - 1)] = bit;
        e_inverse[(signed long int)((esel[(signed long int)bit] - 1) + 32)] = bit + 48;
      }
      while((_Bool)1);
      memset((void *)(char *)efp, 0, (unsigned long int)(signed int)sizeof(unsigned long int [16l][64l][2l]) /*16384ul*/ );
      bit = 0;
      for( ; !(bit >= 64); bit = bit + 1)
      {
        signed int o_bit;
        signed int o_long;
        unsigned long int word_value;
        unsigned long int __init_des_r__1__1__5__1__mask1;
        unsigned long int mask2;
        signed int comes_from_f_bit;
        signed int comes_from_e_bit;
        signed int comes_from_word;
        signed int bit_within_word;
        o_long = bit / 32;
        o_bit = bit % 32;
        comes_from_f_bit = final_perm[(signed long int)bit] - 1;
        comes_from_e_bit = e_inverse[(signed long int)comes_from_f_bit];
        comes_from_word = comes_from_e_bit / 6;
        bit_within_word = comes_from_e_bit % 6;
        __init_des_r__1__1__5__1__mask1 = longmask[(signed long int)(bit_within_word + 26)];
        mask2 = longmask[(signed long int)o_bit];
        word_value = (unsigned long int)64;
        do
        {
          tmp_post_3 = word_value;
          word_value = word_value - 1ul;
          if(tmp_post_3 == 0ul)
            break;

          if(!((__init_des_r__1__1__5__1__mask1 & word_value) == 0ul))
            efp[(signed long int)comes_from_word][(signed long int)word_value][(signed long int)o_long] = efp[(signed long int)comes_from_word][(signed long int)word_value][(signed long int)o_long] | mask2;

        }
        while((_Bool)1);
      }
      small_tables_initialized = 1;
    }


  small_tables_done:
    ;
    pthread_mutex_unlock(&_ufc_tables_lock);
  }

  memset((void *)(char *)__data->sb0, 0, (unsigned long int)(signed int)sizeof(char [32768l]) /*32768ul*/ );
  memset((void *)(char *)__data->sb1, 0, (unsigned long int)(signed int)sizeof(char [32768l]) /*32768ul*/ );
  memset((void *)(char *)__data->sb2, 0, (unsigned long int)(signed int)sizeof(char [32768l]) /*32768ul*/ );
  memset((void *)(char *)__data->sb3, 0, (unsigned long int)(signed int)sizeof(char [32768l]) /*32768ul*/ );
  sg = 0;
  for( ; !(sg >= 4); sg = sg + 1)
  {
    signed int j1;
    signed int j2;
    signed int s1;
    signed int s2;
    j1 = 0;
    for( ; !(j1 >= 64); j1 = j1 + 1)
    {
      s1 = sbox[(signed long int)(2 * sg)][(signed long int)(j1 >> 4 & 0x2 | j1 & 0x1)][(signed long int)(j1 >> 1 & 0xf)];
      j2 = 0;
      for( ; !(j2 >= 64); j2 = j2 + 1)
      {
        unsigned long int to_permute;
        unsigned long int inx;
        s2 = sbox[(signed long int)(2 * sg + 1)][(signed long int)(j2 >> 4 & 0x2 | j2 & 0x1)][(signed long int)(j2 >> 1 & 0xf)];
        to_permute = ((unsigned long int)s1 << 4 | (unsigned long int)s2) << (unsigned long int)24 - (unsigned long int)8 * (unsigned long int)sg;
        inx = (unsigned long int)(j1 << 6 | j2);
        sb[(signed long int)sg][(signed long int)inx] = (unsigned long int)eperm32tab[(signed long int)0][(signed long int)(to_permute >> 24 & (unsigned long int)0xff)][(signed long int)0] << 32 | (unsigned long int)eperm32tab[(signed long int)0][(signed long int)(to_permute >> 24 & (unsigned long int)0xff)][(signed long int)1];
        sb[(signed long int)sg][(signed long int)inx] = sb[(signed long int)sg][(signed long int)inx] | (unsigned long int)eperm32tab[(signed long int)1][(signed long int)(to_permute >> 16 & (unsigned long int)0xff)][(signed long int)0] << 32 | (unsigned long int)eperm32tab[(signed long int)1][(signed long int)(to_permute >> 16 & (unsigned long int)0xff)][(signed long int)1];
        sb[(signed long int)sg][(signed long int)inx] = sb[(signed long int)sg][(signed long int)inx] | (unsigned long int)eperm32tab[(signed long int)2][(signed long int)(to_permute >> 8 & (unsigned long int)0xff)][(signed long int)0] << 32 | (unsigned long int)eperm32tab[(signed long int)2][(signed long int)(to_permute >> 8 & (unsigned long int)0xff)][(signed long int)1];
        sb[(signed long int)sg][(signed long int)inx] = sb[(signed long int)sg][(signed long int)inx] | (unsigned long int)eperm32tab[(signed long int)3][(signed long int)(to_permute & (unsigned long int)0xff)][(signed long int)0] << 32 | (unsigned long int)eperm32tab[(signed long int)3][(signed long int)(to_permute & (unsigned long int)0xff)][(signed long int)1];
      }
    }
  }
  __data->current_saltbits = (signed long int)0;
  __data->current_salt[(signed long int)0] = (char)0;
  __data->current_salt[(signed long int)1] = (char)0;
  __data->initialized = __data->initialized + 1;
}

// __md5_buffer
// file md5.c line 179
extern void * __md5_buffer(const char *buffer, unsigned long int len, void *resblock)
{
  struct md5_ctx ctx;
  __md5_init_ctx(&ctx);
  __md5_process_bytes((const void *)buffer, len, &ctx);
  void *return_value___md5_finish_ctx_1;
  return_value___md5_finish_ctx_1=__md5_finish_ctx(&ctx, resblock);
  return return_value___md5_finish_ctx_1;
}

// __md5_crypt
// file md5-crypt.c line 237
extern char * __md5_crypt(const char *key, const char *salt)
{
  signed int needed;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(salt);
  needed = (signed int)((unsigned long int)3 + return_value_strlen_1 + (unsigned long int)1 + (unsigned long int)26 + (unsigned long int)1);
  static signed int buflen;
  if(!(buflen >= needed))
  {
    char *new_buffer;
    void *return_value_realloc_2;
    return_value_realloc_2=realloc((void *)buffer, (unsigned long int)needed);
    new_buffer = (char *)return_value_realloc_2;
    if(new_buffer == ((char *)NULL))
      return (char *)(void *)0;

    buffer = new_buffer;
    buflen = needed;
  }

  char *return_value___md5_crypt_r_3;
  return_value___md5_crypt_r_3=__md5_crypt_r(key, salt, buffer, buflen);
  return return_value___md5_crypt_r_3;
}

// __md5_crypt_r
// file md5-crypt.c line 46
extern char * __md5_crypt_r(const char *key, const char *salt, char *buffer, signed int buflen)
{
  unsigned char alt_result[16l];
  struct md5_ctx ctx;
  struct md5_ctx alt_ctx;
  unsigned long int salt_len;
  unsigned long int key_len;
  unsigned long int cnt;
  char *cp;
  char *copied_key = (char *)(void *)0;
  char *copied_salt = (char *)(void *)0;
  signed int return_value_strncmp_1;
  return_value_strncmp_1=strncmp(md5_salt_prefix, salt, sizeof(const char [4l]) /*4ul*/  - (unsigned long int)1);
  if(return_value_strncmp_1 == 0)
    salt = salt + (signed long int)(sizeof(const char [4l]) /*4ul*/  - (unsigned long int)1);

  unsigned long int return_value_strcspn_2;
  return_value_strcspn_2=strcspn(salt, "_");
  unsigned long int tmp_if_expr_4;
  unsigned long int return_value_strcspn_3;
  if(!(return_value_strcspn_2 >= 8ul))
  {
    return_value_strcspn_3=strcspn(salt, "_");
    tmp_if_expr_4 = return_value_strcspn_3;
  }

  else
    tmp_if_expr_4 = (unsigned long int)8;
  salt_len = tmp_if_expr_4;
  key_len=strlen(key);
  if(!((unsigned long int)(key - ((char *)NULL)) % 4ul == 0ul))
  {
    char *tmp;
    void *return_value___builtin_alloca_5;
    return_value___builtin_alloca_5=__builtin_alloca(key_len + 4ul);
    tmp = (char *)return_value___builtin_alloca_5;
    void *return_value_memcpy_6;
    return_value_memcpy_6=memcpy((void *)((tmp + (signed long int)4ul) - (signed long int)((unsigned long int)(tmp - (char *)0) % 4ul)), (const void *)key, key_len);
    copied_key = (char *)return_value_memcpy_6;
    key = copied_key;
    /* assertion (key - (char *) 0) % __alignof__ (md5_uint32) == 0 */
    assert((unsigned long int)(key - (char *)0) % 4ul == (unsigned long int)0);
  }

  if(!((unsigned long int)(salt - ((char *)NULL)) % 4ul == 0ul))
  {
    char *__md5_crypt_r__1__2__tmp;
    void *return_value___builtin_alloca_7;
    return_value___builtin_alloca_7=__builtin_alloca(salt_len + 4ul);
    __md5_crypt_r__1__2__tmp = (char *)return_value___builtin_alloca_7;
    void *return_value_memcpy_8;
    return_value_memcpy_8=memcpy((void *)((__md5_crypt_r__1__2__tmp + (signed long int)4ul) - (signed long int)((unsigned long int)(__md5_crypt_r__1__2__tmp - (char *)0) % 4ul)), (const void *)salt, salt_len);
    copied_salt = (char *)return_value_memcpy_8;
    salt = copied_salt;
    /* assertion (salt - (char *) 0) % __alignof__ (md5_uint32) == 0 */
    assert((unsigned long int)(salt - (char *)0) % 4ul == (unsigned long int)0);
  }

  __md5_init_ctx(&ctx);
  __md5_process_bytes((const void *)key, key_len, &ctx);
  __md5_process_bytes((const void *)md5_salt_prefix, sizeof(const char [4l]) /*4ul*/  - (unsigned long int)1, &ctx);
  __md5_process_bytes((const void *)salt, salt_len, &ctx);
  __md5_init_ctx(&alt_ctx);
  __md5_process_bytes((const void *)key, key_len, &alt_ctx);
  __md5_process_bytes((const void *)salt, salt_len, &alt_ctx);
  __md5_process_bytes((const void *)key, key_len, &alt_ctx);
  __md5_finish_ctx(&alt_ctx, (void *)alt_result);
  cnt = key_len;
  for( ; cnt >= 17ul; cnt = cnt - (unsigned long int)16)
    __md5_process_bytes((const void *)alt_result, (unsigned long int)16, &ctx);
  __md5_process_bytes((const void *)alt_result, cnt, &ctx);
  alt_result[0l] = (unsigned char)0;
  cnt = key_len;
  const char *tmp_if_expr_9;
  for( ; cnt >= 1ul; cnt = cnt >> 1)
  {
    if(!((1ul & cnt) == 0ul))
      tmp_if_expr_9 = (const char *)alt_result;

    else
      tmp_if_expr_9 = key;
    __md5_process_bytes((const void *)tmp_if_expr_9, (unsigned long int)1, &ctx);
  }
  __md5_finish_ctx(&ctx, (void *)alt_result);
  cnt = (unsigned long int)0;
  for( ; !(cnt >= 1000ul); cnt = cnt + 1ul)
  {
    __md5_init_ctx(&ctx);
    if(!((1ul & cnt) == 0ul))
      __md5_process_bytes((const void *)key, key_len, &ctx);

    else
      __md5_process_bytes((const void *)alt_result, (unsigned long int)16, &ctx);
    if(!(cnt % 3ul == 0ul))
      __md5_process_bytes((const void *)salt, salt_len, &ctx);

    if(!(cnt % 7ul == 0ul))
      __md5_process_bytes((const void *)key, key_len, &ctx);

    if(!((1ul & cnt) == 0ul))
      __md5_process_bytes((const void *)alt_result, (unsigned long int)16, &ctx);

    else
      __md5_process_bytes((const void *)key, key_len, &ctx);
    __md5_finish_ctx(&ctx, (void *)alt_result);
  }
  cp=__stpncpy(buffer, md5_salt_prefix, (unsigned long int)(0 > buflen ? 0 : buflen));
  buflen = buflen - (signed int)(sizeof(const char [4l]) /*4ul*/  - (unsigned long int)1);
  cp=__stpncpy(cp, salt, (unsigned long int)(0 > buflen ? 0 : buflen) < salt_len ? (unsigned long int)(0 > buflen ? 0 : buflen) : salt_len);
  buflen = buflen - (signed int)((unsigned long int)(0 > buflen ? 0 : buflen) < salt_len ? (unsigned long int)(0 > buflen ? 0 : buflen) : salt_len);
  char *tmp_post_10;
  if(buflen >= 1)
  {
    tmp_post_10 = cp;
    cp = cp + 1l;
    *tmp_post_10 = (char)36;
    buflen = buflen - 1;
  }

  signed int tmp_post_11;
  char *tmp_post_12;
  do
  {
    unsigned int w = (unsigned int)((signed int)alt_result[(signed long int)0] << 16 | (signed int)alt_result[(signed long int)6] << 8 | (signed int)alt_result[(signed long int)12]);
    signed int __md5_crypt_r__1__7__n = 4;
    do
    {
      tmp_post_11 = __md5_crypt_r__1__7__n;
      __md5_crypt_r__1__7__n = __md5_crypt_r__1__7__n - 1;
      if(!(tmp_post_11 >= 1))
        break;

      if(!(buflen >= 1))
        break;

      tmp_post_12 = cp;
      cp = cp + 1l;
      *tmp_post_12 = b64t[(signed long int)(w & (unsigned int)0x3f)];
      buflen = buflen - 1;
      w = w >> 6;
    }
    while((_Bool)1);
  }
  while((_Bool)0);
  signed int tmp_post_13;
  char *tmp_post_14;
  do
  {
    unsigned int __md5_crypt_r__1__8__w = (unsigned int)((signed int)alt_result[(signed long int)1] << 16 | (signed int)alt_result[(signed long int)7] << 8 | (signed int)alt_result[(signed long int)13]);
    signed int __md5_crypt_r__1__8__n = 4;
    do
    {
      tmp_post_13 = __md5_crypt_r__1__8__n;
      __md5_crypt_r__1__8__n = __md5_crypt_r__1__8__n - 1;
      if(!(tmp_post_13 >= 1))
        break;

      if(!(buflen >= 1))
        break;

      tmp_post_14 = cp;
      cp = cp + 1l;
      *tmp_post_14 = b64t[(signed long int)(__md5_crypt_r__1__8__w & (unsigned int)0x3f)];
      buflen = buflen - 1;
      __md5_crypt_r__1__8__w = __md5_crypt_r__1__8__w >> 6;
    }
    while((_Bool)1);
  }
  while((_Bool)0);
  signed int tmp_post_15;
  char *tmp_post_16;
  do
  {
    unsigned int __md5_crypt_r__1__9__w = (unsigned int)((signed int)alt_result[(signed long int)2] << 16 | (signed int)alt_result[(signed long int)8] << 8 | (signed int)alt_result[(signed long int)14]);
    signed int __md5_crypt_r__1__9__n = 4;
    do
    {
      tmp_post_15 = __md5_crypt_r__1__9__n;
      __md5_crypt_r__1__9__n = __md5_crypt_r__1__9__n - 1;
      if(!(tmp_post_15 >= 1))
        break;

      if(!(buflen >= 1))
        break;

      tmp_post_16 = cp;
      cp = cp + 1l;
      *tmp_post_16 = b64t[(signed long int)(__md5_crypt_r__1__9__w & (unsigned int)0x3f)];
      buflen = buflen - 1;
      __md5_crypt_r__1__9__w = __md5_crypt_r__1__9__w >> 6;
    }
    while((_Bool)1);
  }
  while((_Bool)0);
  signed int tmp_post_17;
  char *tmp_post_18;
  do
  {
    unsigned int __md5_crypt_r__1__10__w = (unsigned int)((signed int)alt_result[(signed long int)3] << 16 | (signed int)alt_result[(signed long int)9] << 8 | (signed int)alt_result[(signed long int)15]);
    signed int n = 4;
    do
    {
      tmp_post_17 = n;
      n = n - 1;
      if(!(tmp_post_17 >= 1))
        break;

      if(!(buflen >= 1))
        break;

      tmp_post_18 = cp;
      cp = cp + 1l;
      *tmp_post_18 = b64t[(signed long int)(__md5_crypt_r__1__10__w & (unsigned int)0x3f)];
      buflen = buflen - 1;
      __md5_crypt_r__1__10__w = __md5_crypt_r__1__10__w >> 6;
    }
    while((_Bool)1);
  }
  while((_Bool)0);
  signed int tmp_post_19;
  char *tmp_post_20;
  do
  {
    unsigned int __md5_crypt_r__1__11__w = (unsigned int)((signed int)alt_result[(signed long int)4] << 16 | (signed int)alt_result[(signed long int)10] << 8 | (signed int)alt_result[(signed long int)5]);
    signed int __md5_crypt_r__1__11__n = 4;
    do
    {
      tmp_post_19 = __md5_crypt_r__1__11__n;
      __md5_crypt_r__1__11__n = __md5_crypt_r__1__11__n - 1;
      if(!(tmp_post_19 >= 1))
        break;

      if(!(buflen >= 1))
        break;

      tmp_post_20 = cp;
      cp = cp + 1l;
      *tmp_post_20 = b64t[(signed long int)(__md5_crypt_r__1__11__w & (unsigned int)0x3f)];
      buflen = buflen - 1;
      __md5_crypt_r__1__11__w = __md5_crypt_r__1__11__w >> 6;
    }
    while((_Bool)1);
  }
  while((_Bool)0);
  signed int tmp_post_21;
  char *tmp_post_22;
  do
  {
    unsigned int __md5_crypt_r__1__12__w = (unsigned int)(0 << 16 | 0 << 8 | (signed int)alt_result[(signed long int)11]);
    signed int __md5_crypt_r__1__12__n = 2;
    do
    {
      tmp_post_21 = __md5_crypt_r__1__12__n;
      __md5_crypt_r__1__12__n = __md5_crypt_r__1__12__n - 1;
      if(!(tmp_post_21 >= 1))
        break;

      if(!(buflen >= 1))
        break;

      tmp_post_22 = cp;
      cp = cp + 1l;
      *tmp_post_22 = b64t[(signed long int)(__md5_crypt_r__1__12__w & (unsigned int)0x3f)];
      buflen = buflen - 1;
      __md5_crypt_r__1__12__w = __md5_crypt_r__1__12__w >> 6;
    }
    while((_Bool)1);
  }
  while((_Bool)0);
  if(!(buflen >= 1))
  {
    signed int *return_value___errno_location_23;
    return_value___errno_location_23=__errno_location();
    *return_value___errno_location_23 = 34;
    buffer = (char *)(void *)0;
  }

  else
    *cp = (char)0;
  __md5_init_ctx(&ctx);
  __md5_finish_ctx(&ctx, (void *)alt_result);
  memset((void *)&ctx, 0, sizeof(struct md5_ctx) /*156ul*/ );
  memset((void *)&alt_ctx, 0, sizeof(struct md5_ctx) /*156ul*/ );
  if(!(copied_key == ((char *)NULL)))
    memset((void *)copied_key, 0, key_len);

  if(!(copied_salt == ((char *)NULL)))
    memset((void *)copied_salt, 0, salt_len);

  return buffer;
}

// __md5_finish_ctx
// file xcrypt.h line 152
extern void * __md5_finish_ctx(struct md5_ctx *ctx, void *resbuf)
{
  unsigned int bytes = ctx->buflen;
  unsigned long int pad;
  ctx->total[(signed long int)0] = ctx->total[(signed long int)0] + bytes;
  if(!(ctx->total[0l] >= bytes))
    ctx->total[(signed long int)1] = ctx->total[(signed long int)1] + 1u;

  pad = (unsigned long int)(bytes >= (unsigned int)56 ? (unsigned int)(64 + 56) - bytes : (unsigned int)56 - bytes);
  memcpy((void *)&ctx->buffer[(signed long int)bytes], (const void *)fillbuf, pad);
  *((unsigned int *)&ctx->buffer[(signed long int)((unsigned long int)bytes + pad)]) = ctx->total[(signed long int)0] << 3;
  *((unsigned int *)&ctx->buffer[(signed long int)((unsigned long int)bytes + pad + (unsigned long int)4)]) = ctx->total[(signed long int)1] << 3 | ctx->total[(signed long int)0] >> 29;
  __md5_process_block((const void *)ctx->buffer, (unsigned long int)bytes + pad + (unsigned long int)8, ctx);
  void *return_value___md5_read_ctx_1;
  return_value___md5_read_ctx_1=__md5_read_ctx(ctx, resbuf);
  return return_value___md5_read_ctx_1;
}

// __md5_init_ctx
// file xcrypt.h line 129
extern void __md5_init_ctx(struct md5_ctx *ctx)
{
  ctx->A = (unsigned int)0x67452301;
  ctx->B = 0xefcdab89;
  ctx->C = 0x98badcfe;
  ctx->D = (unsigned int)0x10325476;
  ctx->total[(signed long int)1] = (unsigned int)0;
  ctx->total[(signed long int)0] = ctx->total[(signed long int)1];
  ctx->buflen = (unsigned int)0;
}

// __md5_process_block
// file md5.c line 287
extern void __md5_process_block(const void *buffer, unsigned long int len, struct md5_ctx *ctx)
{
  unsigned int correct_words[16l];
  const unsigned int *words = (const unsigned int *)buffer;
  unsigned long int nwords = len / sizeof(unsigned int) /*4ul*/ ;
  const unsigned int *endp = words + (signed long int)nwords;
  unsigned int A = ctx->A;
  unsigned int B = ctx->B;
  unsigned int C = ctx->C;
  unsigned int D = ctx->D;
  ctx->total[(signed long int)0] = ctx->total[(signed long int)0] + (unsigned int)len;
  if(!((unsigned long int)ctx->total[0l] >= len))
    ctx->total[(signed long int)1] = ctx->total[(signed long int)1] + 1u;

  unsigned int *tmp_post_1;
  unsigned int *tmp_post_2;
  unsigned int *tmp_post_3;
  unsigned int *tmp_post_4;
  unsigned int *tmp_post_5;
  unsigned int *tmp_post_6;
  unsigned int *tmp_post_7;
  unsigned int *tmp_post_8;
  unsigned int *tmp_post_9;
  unsigned int *tmp_post_10;
  unsigned int *tmp_post_11;
  unsigned int *tmp_post_12;
  unsigned int *tmp_post_13;
  unsigned int *tmp_post_14;
  unsigned int *tmp_post_15;
  unsigned int *tmp_post_16;
  while(!(words >= endp))
  {
    unsigned int *cwp = correct_words;
    unsigned int A_save = A;
    unsigned int B_save = B;
    unsigned int C_save = C;
    unsigned int D_save = D;
    do
    {
      tmp_post_1 = cwp;
      cwp = cwp + 1l;
      *tmp_post_1 = *words;
      A = A + (D ^ B & (C ^ D)) + *tmp_post_1 + 0xd76aa478;
      words = words + 1l;
      A = A << 7 | A >> 32 - 7;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      tmp_post_2 = cwp;
      cwp = cwp + 1l;
      *tmp_post_2 = *words;
      D = D + (C ^ A & (B ^ C)) + *tmp_post_2 + 0xe8c7b756;
      words = words + 1l;
      D = D << 12 | D >> 32 - 12;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      tmp_post_3 = cwp;
      cwp = cwp + 1l;
      *tmp_post_3 = *words;
      C = C + (B ^ D & (A ^ B)) + *tmp_post_3 + (unsigned int)0x242070db;
      words = words + 1l;
      C = C << 17 | C >> 32 - 17;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      tmp_post_4 = cwp;
      cwp = cwp + 1l;
      *tmp_post_4 = *words;
      B = B + (A ^ C & (D ^ A)) + *tmp_post_4 + 0xc1bdceee;
      words = words + 1l;
      B = B << 22 | B >> 32 - 22;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      tmp_post_5 = cwp;
      cwp = cwp + 1l;
      *tmp_post_5 = *words;
      A = A + (D ^ B & (C ^ D)) + *tmp_post_5 + 0xf57c0faf;
      words = words + 1l;
      A = A << 7 | A >> 32 - 7;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      tmp_post_6 = cwp;
      cwp = cwp + 1l;
      *tmp_post_6 = *words;
      D = D + (C ^ A & (B ^ C)) + *tmp_post_6 + (unsigned int)0x4787c62a;
      words = words + 1l;
      D = D << 12 | D >> 32 - 12;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      tmp_post_7 = cwp;
      cwp = cwp + 1l;
      *tmp_post_7 = *words;
      C = C + (B ^ D & (A ^ B)) + *tmp_post_7 + 0xa8304613;
      words = words + 1l;
      C = C << 17 | C >> 32 - 17;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      tmp_post_8 = cwp;
      cwp = cwp + 1l;
      *tmp_post_8 = *words;
      B = B + (A ^ C & (D ^ A)) + *tmp_post_8 + 0xfd469501;
      words = words + 1l;
      B = B << 22 | B >> 32 - 22;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      tmp_post_9 = cwp;
      cwp = cwp + 1l;
      *tmp_post_9 = *words;
      A = A + (D ^ B & (C ^ D)) + *tmp_post_9 + (unsigned int)0x698098d8;
      words = words + 1l;
      A = A << 7 | A >> 32 - 7;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      tmp_post_10 = cwp;
      cwp = cwp + 1l;
      *tmp_post_10 = *words;
      D = D + (C ^ A & (B ^ C)) + *tmp_post_10 + 0x8b44f7af;
      words = words + 1l;
      D = D << 12 | D >> 32 - 12;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      tmp_post_11 = cwp;
      cwp = cwp + 1l;
      *tmp_post_11 = *words;
      C = C + (B ^ D & (A ^ B)) + *tmp_post_11 + 0xffff5bb1;
      words = words + 1l;
      C = C << 17 | C >> 32 - 17;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      tmp_post_12 = cwp;
      cwp = cwp + 1l;
      *tmp_post_12 = *words;
      B = B + (A ^ C & (D ^ A)) + *tmp_post_12 + 0x895cd7be;
      words = words + 1l;
      B = B << 22 | B >> 32 - 22;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      tmp_post_13 = cwp;
      cwp = cwp + 1l;
      *tmp_post_13 = *words;
      A = A + (D ^ B & (C ^ D)) + *tmp_post_13 + (unsigned int)0x6b901122;
      words = words + 1l;
      A = A << 7 | A >> 32 - 7;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      tmp_post_14 = cwp;
      cwp = cwp + 1l;
      *tmp_post_14 = *words;
      D = D + (C ^ A & (B ^ C)) + *tmp_post_14 + 0xfd987193;
      words = words + 1l;
      D = D << 12 | D >> 32 - 12;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      tmp_post_15 = cwp;
      cwp = cwp + 1l;
      *tmp_post_15 = *words;
      C = C + (B ^ D & (A ^ B)) + *tmp_post_15 + 0xa679438e;
      words = words + 1l;
      C = C << 17 | C >> 32 - 17;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      tmp_post_16 = cwp;
      cwp = cwp + 1l;
      *tmp_post_16 = *words;
      B = B + (A ^ C & (D ^ A)) + *tmp_post_16 + (unsigned int)0x49b40821;
      words = words + 1l;
      B = B << 22 | B >> 32 - 22;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ D & (B ^ C)) + correct_words[(signed long int)1] + 0xf61e2562;
      A = A << 5 | A >> 32 - 5;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ C & (A ^ B)) + correct_words[(signed long int)6] + 0xc040b340;
      D = D << 9 | D >> 32 - 9;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ B & (D ^ A)) + correct_words[(signed long int)11] + (unsigned int)0x265e5a51;
      C = C << 14 | C >> 32 - 14;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ A & (C ^ D)) + correct_words[(signed long int)0] + 0xe9b6c7aa;
      B = B << 20 | B >> 32 - 20;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ D & (B ^ C)) + correct_words[(signed long int)5] + 0xd62f105d;
      A = A << 5 | A >> 32 - 5;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ C & (A ^ B)) + correct_words[(signed long int)10] + (unsigned int)0x02441453;
      D = D << 9 | D >> 32 - 9;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ B & (D ^ A)) + correct_words[(signed long int)15] + 0xd8a1e681;
      C = C << 14 | C >> 32 - 14;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ A & (C ^ D)) + correct_words[(signed long int)4] + 0xe7d3fbc8;
      B = B << 20 | B >> 32 - 20;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ D & (B ^ C)) + correct_words[(signed long int)9] + (unsigned int)0x21e1cde6;
      A = A << 5 | A >> 32 - 5;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ C & (A ^ B)) + correct_words[(signed long int)14] + 0xc33707d6;
      D = D << 9 | D >> 32 - 9;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ B & (D ^ A)) + correct_words[(signed long int)3] + 0xf4d50d87;
      C = C << 14 | C >> 32 - 14;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ A & (C ^ D)) + correct_words[(signed long int)8] + (unsigned int)0x455a14ed;
      B = B << 20 | B >> 32 - 20;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ D & (B ^ C)) + correct_words[(signed long int)13] + 0xa9e3e905;
      A = A << 5 | A >> 32 - 5;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ C & (A ^ B)) + correct_words[(signed long int)2] + 0xfcefa3f8;
      D = D << 9 | D >> 32 - 9;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ B & (D ^ A)) + correct_words[(signed long int)7] + (unsigned int)0x676f02d9;
      C = C << 14 | C >> 32 - 14;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ A & (C ^ D)) + correct_words[(signed long int)12] + 0x8d2a4c8a;
      B = B << 20 | B >> 32 - 20;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (B ^ C ^ D) + correct_words[(signed long int)5] + 0xfffa3942;
      A = A << 4 | A >> 32 - 4;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (A ^ B ^ C) + correct_words[(signed long int)8] + 0x8771f681;
      D = D << 11 | D >> 32 - 11;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (D ^ A ^ B) + correct_words[(signed long int)11] + (unsigned int)0x6d9d6122;
      C = C << 16 | C >> 32 - 16;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (C ^ D ^ A) + correct_words[(signed long int)14] + 0xfde5380c;
      B = B << 23 | B >> 32 - 23;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (B ^ C ^ D) + correct_words[(signed long int)1] + 0xa4beea44;
      A = A << 4 | A >> 32 - 4;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (A ^ B ^ C) + correct_words[(signed long int)4] + (unsigned int)0x4bdecfa9;
      D = D << 11 | D >> 32 - 11;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (D ^ A ^ B) + correct_words[(signed long int)7] + 0xf6bb4b60;
      C = C << 16 | C >> 32 - 16;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (C ^ D ^ A) + correct_words[(signed long int)10] + 0xbebfbc70;
      B = B << 23 | B >> 32 - 23;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (B ^ C ^ D) + correct_words[(signed long int)13] + (unsigned int)0x289b7ec6;
      A = A << 4 | A >> 32 - 4;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (A ^ B ^ C) + correct_words[(signed long int)0] + 0xeaa127fa;
      D = D << 11 | D >> 32 - 11;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (D ^ A ^ B) + correct_words[(signed long int)3] + 0xd4ef3085;
      C = C << 16 | C >> 32 - 16;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (C ^ D ^ A) + correct_words[(signed long int)6] + (unsigned int)0x04881d05;
      B = B << 23 | B >> 32 - 23;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (B ^ C ^ D) + correct_words[(signed long int)9] + 0xd9d4d039;
      A = A << 4 | A >> 32 - 4;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (A ^ B ^ C) + correct_words[(signed long int)12] + 0xe6db99e5;
      D = D << 11 | D >> 32 - 11;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (D ^ A ^ B) + correct_words[(signed long int)15] + (unsigned int)0x1fa27cf8;
      C = C << 16 | C >> 32 - 16;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (C ^ D ^ A) + correct_words[(signed long int)2] + 0xc4ac5665;
      B = B << 23 | B >> 32 - 23;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ (B | ~D)) + correct_words[(signed long int)0] + 0xf4292244;
      A = A << 6 | A >> 32 - 6;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ (A | ~C)) + correct_words[(signed long int)7] + (unsigned int)0x432aff97;
      D = D << 10 | D >> 32 - 10;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ (D | ~B)) + correct_words[(signed long int)14] + 0xab9423a7;
      C = C << 15 | C >> 32 - 15;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ (C | ~A)) + correct_words[(signed long int)5] + 0xfc93a039;
      B = B << 21 | B >> 32 - 21;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ (B | ~D)) + correct_words[(signed long int)12] + (unsigned int)0x655b59c3;
      A = A << 6 | A >> 32 - 6;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ (A | ~C)) + correct_words[(signed long int)3] + 0x8f0ccc92;
      D = D << 10 | D >> 32 - 10;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ (D | ~B)) + correct_words[(signed long int)10] + 0xffeff47d;
      C = C << 15 | C >> 32 - 15;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ (C | ~A)) + correct_words[(signed long int)1] + 0x85845dd1;
      B = B << 21 | B >> 32 - 21;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ (B | ~D)) + correct_words[(signed long int)8] + (unsigned int)0x6fa87e4f;
      A = A << 6 | A >> 32 - 6;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ (A | ~C)) + correct_words[(signed long int)15] + 0xfe2ce6e0;
      D = D << 10 | D >> 32 - 10;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ (D | ~B)) + correct_words[(signed long int)6] + 0xa3014314;
      C = C << 15 | C >> 32 - 15;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ (C | ~A)) + correct_words[(signed long int)13] + (unsigned int)0x4e0811a1;
      B = B << 21 | B >> 32 - 21;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ (B | ~D)) + correct_words[(signed long int)4] + 0xf7537e82;
      A = A << 6 | A >> 32 - 6;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ (A | ~C)) + correct_words[(signed long int)11] + 0xbd3af235;
      D = D << 10 | D >> 32 - 10;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ (D | ~B)) + correct_words[(signed long int)2] + (unsigned int)0x2ad7d2bb;
      C = C << 15 | C >> 32 - 15;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ (C | ~A)) + correct_words[(signed long int)9] + 0xeb86d391;
      B = B << 21 | B >> 32 - 21;
      B = B + C;
    }
    while((_Bool)0);
    A = A + A_save;
    B = B + B_save;
    C = C + C_save;
    D = D + D_save;
  }
  ctx->A = A;
  ctx->B = B;
  ctx->C = C;
  ctx->D = D;
}

// __md5_process_bytes
// file xcrypt.h line 142
extern void __md5_process_bytes(const void *buffer, unsigned long int len, struct md5_ctx *ctx)
{
  if(!(ctx->buflen == 0u))
  {
    unsigned long int __md5_process_bytes__1__1__left_over = (unsigned long int)ctx->buflen;
    unsigned long int add = (unsigned long int)128 - __md5_process_bytes__1__1__left_over > len ? len : (unsigned long int)128 - __md5_process_bytes__1__1__left_over;
    memcpy((void *)&ctx->buffer[(signed long int)__md5_process_bytes__1__1__left_over], buffer, add);
    ctx->buflen = ctx->buflen + (unsigned int)add;
    if(ctx->buflen >= 65u)
    {
      __md5_process_block((const void *)ctx->buffer, (unsigned long int)(ctx->buflen & (unsigned int)~63), ctx);
      ctx->buflen = ctx->buflen & (unsigned int)63;
      memcpy((void *)ctx->buffer, (const void *)&ctx->buffer[(signed long int)(__md5_process_bytes__1__1__left_over + add & (unsigned long int)~63)], (unsigned long int)ctx->buflen);
    }

    buffer = (const void *)((const char *)buffer + (signed long int)add);
    len = len - add;
  }

  if(len >= 64ul)
  {
    __md5_process_block(buffer, len & (unsigned long int)~63, ctx);
    buffer = (const void *)((const char *)buffer + (signed long int)(len & (unsigned long int)~63));
    len = len & (unsigned long int)63;
  }

  if(len >= 1ul)
  {
    unsigned long int left_over = (unsigned long int)ctx->buflen;
    memcpy((void *)&ctx->buffer[(signed long int)left_over], buffer, len);
    left_over = left_over + len;
    if(left_over >= 64ul)
    {
      __md5_process_block((const void *)ctx->buffer, (unsigned long int)64, ctx);
      left_over = left_over - (unsigned long int)64;
      memcpy((void *)ctx->buffer, (const void *)&ctx->buffer[(signed long int)64], left_over);
    }

    ctx->buflen = (unsigned int)left_over;
  }

}

// __md5_read_ctx
// file md5.c line 73
extern void * __md5_read_ctx(struct md5_ctx *ctx, void *resbuf)
{
  ((unsigned int *)resbuf)[(signed long int)0] = ctx->A;
  ((unsigned int *)resbuf)[(signed long int)1] = ctx->B;
  ((unsigned int *)resbuf)[(signed long int)2] = ctx->C;
  ((unsigned int *)resbuf)[(signed long int)3] = ctx->D;
  return resbuf;
}

// __md5_stream
// file md5.c line 122
extern signed int __md5_stream(struct _IO_FILE *stream, void *resblock)
{
  struct md5_ctx ctx;
  char __md5_stream__1__buffer[4168l];
  unsigned long int sum;
  __md5_init_ctx(&ctx);
  signed int return_value_ferror_1;
  while((_Bool)1)
  {
    unsigned long int n;
    sum = (unsigned long int)0;
    do
    {
      n=fread((void *)(__md5_stream__1__buffer + (signed long int)sum), (unsigned long int)1, (unsigned long int)4096 - sum, stream);
      sum = sum + n;
    }
    while(!(n == 0ul) && !(sum >= 4096ul));
    if(n == 0ul)
    {
      return_value_ferror_1=ferror(stream);
      if(!(return_value_ferror_1 == 0))
        return 1;

    }

    if(n == 0ul)
      break;

    __md5_process_block((const void *)__md5_stream__1__buffer, (unsigned long int)4096, &ctx);
  }
  if(sum >= 1ul)
    __md5_process_bytes((const void *)__md5_stream__1__buffer, sum, &ctx);

  __md5_finish_ctx(&ctx, resblock);
  return 0;
}

// __sha_crypt
// file sha-crypt.c line 89
extern char * __sha_crypt(const char *key, const char *salt)
{
  char *return_value___sha_crypt_r_1;
  static signed int buflen = (signed int)sizeof(char [36l]) /*36ul*/ ;
  static char __sha_crypt__1__buffer[(signed long int)(sizeof(const char *) * 4 + 4) /*36l*/ ];
  return_value___sha_crypt_r_1=__sha_crypt_r(key, salt, __sha_crypt__1__buffer, buflen);
  return return_value___sha_crypt_r_1;
}

// __sha_crypt_r
// file xcrypt.h line 203
extern char * __sha_crypt_r(const char *key, const char *salt, char *buffer, signed int buflen)
{
  struct anonymous_1 c;
  unsigned char md[20l];
  signed int l;
  if(!((unsigned long int)buflen >= sizeof(const char *) * 4 + 4 /*36ul*/ ))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 34;
    return (char *)(void *)0;
  }

  memset((void *)md, 0, (unsigned long int)20);
  __SHA1Init(&c);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(key);
  __SHA1Update(&c, (unsigned char *)key, (unsigned int)return_value_strlen_2);
  __SHA1Final(md, &c);
  memcpy((void *)buffer, (const void *)sha_salt_prefix, sizeof(const char *) /*8ul*/ );
  l=base64encode(&buffer[(signed long int)sizeof(const char *) /*8ul*/ ], md, (signed int)sizeof(unsigned char [20l]) /*20ul*/ );
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(sha_salt_prefix);
  buffer[(signed long int)((unsigned long int)l + return_value_strlen_3)] = (char)0;
  return buffer;
}

// __xcrypt
// file wrapper.c line 152
char * __xcrypt(const char *key, const char *salt)
{
  char *return_value___xcrypt_rn_1;
  return_value___xcrypt_rn_1=__xcrypt_rn(key, salt, (void *)&_ufc_foobar, (signed int)sizeof(struct crypt_data) /*131232ul*/ );
  char *return_value__xcrypt_retval_magic_2;
  return_value__xcrypt_retval_magic_2=_xcrypt_retval_magic(return_value___xcrypt_rn_1, salt, (char *)&_ufc_foobar);
  return return_value__xcrypt_retval_magic_2;
}

// __xcrypt_gensalt
// file wrapper.c line 223
char * __xcrypt_gensalt(const char *prefix, unsigned long int count, const char *input, signed int size)
{
  char *return_value___xcrypt_gensalt_rn_1;
  static char output[30l];
  return_value___xcrypt_gensalt_rn_1=__xcrypt_gensalt_rn(prefix, count, input, size, output, (signed int)sizeof(char [30l]) /*30ul*/ );
  return return_value___xcrypt_gensalt_rn_1;
}

// __xcrypt_gensalt_ra
// file wrapper.c line 205
char * __xcrypt_gensalt_ra(const char *prefix, unsigned long int count, const char *input, signed int size)
{
  char output[30l];
  char *retval;
  retval=__xcrypt_gensalt_rn(prefix, count, input, size, output, (signed int)sizeof(char [30l]) /*30ul*/ );
  if(!(retval == ((char *)NULL)))
    retval=strdup(retval);

  return retval;
}

// __xcrypt_gensalt_rn
// file wrapper.c line 167
char * __xcrypt_gensalt_rn(const char *prefix, unsigned long int count, const char *input, signed int size, char *output, signed int output_size)
{
  char * (*use)(unsigned long int, const char *, signed int, char *, signed int);
  if(input == ((const char *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (char *)(void *)0;
  }

  signed int return_value_strncmp_12;
  return_value_strncmp_12=strncmp(prefix, "_2a_", (unsigned long int)4);
  signed int return_value_strncmp_11;
  unsigned long int return_value_strlen_9;
  signed int return_value_strncmp_10;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  void *return_value_memchr_4;
  _Bool tmp_if_expr_7;
  void *return_value_memchr_6;
  if(return_value_strncmp_12 == 0)
    use = _xcrypt_gensalt_blowfish_rn;

  else
  {
    return_value_strncmp_11=strncmp(prefix, "_1_", (unsigned long int)3);
    if(return_value_strncmp_11 == 0)
      use = _xcrypt_gensalt_md5_rn;

    else
    {
      return_value_strlen_9=strlen(sha_salt_prefix);
      return_value_strncmp_10=strncmp(prefix, sha_salt_prefix, return_value_strlen_9);
      if(return_value_strncmp_10 == 0)
        use = _xcrypt_gensalt_sha_rn;

      else
        if((signed int)*prefix == 95)
          use = _xcrypt_gensalt_extended_rn;

        else
        {
          if(*prefix == 0)
            tmp_if_expr_8 = (_Bool)1;

          else
          {
            if(!(*prefix == 0))
              tmp_if_expr_3 = prefix[(signed long int)1] != 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_3 = (_Bool)0;
            if(tmp_if_expr_3)
            {
              return_value_memchr_4=memchr((const void *)_xcrypt_itoa64, (signed int)prefix[(signed long int)0], (unsigned long int)64);
              tmp_if_expr_5 = return_value_memchr_4 != NULL ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_5 = (_Bool)0;
            if(tmp_if_expr_5)
            {
              return_value_memchr_6=memchr((const void *)_xcrypt_itoa64, (signed int)prefix[(signed long int)1], (unsigned long int)64);
              tmp_if_expr_7 = return_value_memchr_6 != NULL ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_7 = (_Bool)0;
            tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_8)
            use = _xcrypt_gensalt_traditional_rn;

          else
          {
            signed int *return_value___errno_location_2;
            return_value___errno_location_2=__errno_location();
            *return_value___errno_location_2 = 22;
            return (char *)(void *)0;
          }
        }
    }
  }
  char *return_value;
  return_value=use(count, input, size, output, output_size);
  return return_value;
}

// __xcrypt_r
// file wrapper.c line 145
char * __xcrypt_r(const char *key, const char *salt, struct crypt_data *data)
{
  char *return_value___xcrypt_rn_1;
  return_value___xcrypt_rn_1=__xcrypt_rn(key, salt, (void *)data, (signed int)sizeof(struct crypt_data) /*131232ul*/ );
  char *return_value__xcrypt_retval_magic_2;
  return_value__xcrypt_retval_magic_2=_xcrypt_retval_magic(return_value___xcrypt_rn_1, salt, (char *)data);
  return return_value__xcrypt_retval_magic_2;
}

// __xcrypt_ra
// file wrapper.c line 110
char * __xcrypt_ra(const char *key, const char *salt, void **data, signed int *size)
{
  if((signed int)*salt == 36)
  {
    if((signed int)salt[1l] == 50)
    {
      signed int return_value__xcrypt_data_alloc_1;
      return_value__xcrypt_data_alloc_1=_xcrypt_data_alloc(data, size, 7 + 22 + 31 + 1);
      if(!(return_value__xcrypt_data_alloc_1 == 0))
        return (char *)(void *)0;

      char *return_value__xcrypt_blowfish_rn_2;
      return_value__xcrypt_blowfish_rn_2=_xcrypt_blowfish_rn(key, salt, (char *)*data, *size);
      return return_value__xcrypt_blowfish_rn_2;
    }

  }

  if((signed int)*salt == 36)
  {
    if((signed int)salt[1l] == 49)
    {
      signed int return_value__xcrypt_data_alloc_3;
      return_value__xcrypt_data_alloc_3=_xcrypt_data_alloc(data, size, 7 + 22 + 31 + 1);
      if(!(return_value__xcrypt_data_alloc_3 == 0))
        return (char *)(void *)0;

      char *return_value___md5_crypt_r_4;
      return_value___md5_crypt_r_4=__md5_crypt_r(key, salt, (char *)*data, *size);
      return return_value___md5_crypt_r_4;
    }

  }

  _Bool tmp_if_expr_6;
  if((signed int)*salt == 36)
    tmp_if_expr_6 = (_Bool)1;

  else
    tmp_if_expr_6 = (signed int)salt[(signed long int)0] == 95 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_6)
  {
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    *return_value___errno_location_5 = 22;
    return (char *)(void *)0;
  }

  unsigned long int return_value_strlen_9;
  return_value_strlen_9=strlen(sha_salt_prefix);
  signed int return_value_strncmp_10;
  return_value_strncmp_10=strncmp(salt, sha_salt_prefix, return_value_strlen_9);
  if(return_value_strncmp_10 == 0)
  {
    signed int return_value__xcrypt_data_alloc_7;
    return_value__xcrypt_data_alloc_7=_xcrypt_data_alloc(data, size, 7 + 22 + 31 + 1);
    if(!(return_value__xcrypt_data_alloc_7 == 0))
      return (char *)(void *)0;

    char *return_value___sha_crypt_r_8;
    return_value___sha_crypt_r_8=__sha_crypt_r(key, salt, (char *)*data, *size);
    return return_value___sha_crypt_r_8;
  }

  signed int return_value__xcrypt_data_alloc_11;
  return_value__xcrypt_data_alloc_11=_xcrypt_data_alloc(data, size, (signed int)sizeof(struct crypt_data) /*131232ul*/ );
  char *return_value___bigcrypt_r_12;
  char *return_value___des_crypt_r_13;
  if(!(return_value__xcrypt_data_alloc_11 == 0))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen_14;
    return_value_strlen_14=strlen(salt);
    if(return_value_strlen_14 >= 14ul)
    {
      return_value___bigcrypt_r_12=__bigcrypt_r(key, salt, (struct crypt_data *)*data);
      return return_value___bigcrypt_r_12;
    }

    else
    {
      return_value___des_crypt_r_13=__des_crypt_r(key, salt, (struct crypt_data *)*data);
      return return_value___des_crypt_r_13;
    }
  }
}

// __xcrypt_rn
// file wrapper.c line 86
char * __xcrypt_rn(const char *key, const char *salt, void *data, signed int size)
{
  char *return_value__xcrypt_blowfish_rn_1;
  char *return_value___md5_crypt_r_2;
  _Bool tmp_if_expr_4;
  char *return_value___bigcrypt_r_5;
  char *return_value___des_crypt_r_6;
  if((signed int)*salt == 36)
  {
    if(!((signed int)salt[1l] == 50))
      goto __CPROVER_DUMP_L1;

    return_value__xcrypt_blowfish_rn_1=_xcrypt_blowfish_rn(key, salt, (char *)data, size);
    return return_value__xcrypt_blowfish_rn_1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if((signed int)*salt == 36)
    {
      if(!((signed int)salt[1l] == 49))
        goto __CPROVER_DUMP_L2;

      return_value___md5_crypt_r_2=__md5_crypt_r(key, salt, (char *)data, size);
      return return_value___md5_crypt_r_2;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if((signed int)*salt == 36)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)salt[(signed long int)0] == 95 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = 22;
        return (char *)(void *)0;
      }

      if((unsigned long int)size >= sizeof(struct crypt_data) /*131232ul*/ )
      {
        unsigned long int return_value_strlen_7;
        return_value_strlen_7=strlen(salt);
        if(return_value_strlen_7 >= 14ul)
        {
          return_value___bigcrypt_r_5=__bigcrypt_r(key, salt, (struct crypt_data *)data);
          return return_value___bigcrypt_r_5;
        }

        else
        {
          return_value___des_crypt_r_6=__des_crypt_r(key, salt, (struct crypt_data *)data);
          return return_value___des_crypt_r_6;
        }
      }

      signed int *return_value___errno_location_8;
      return_value___errno_location_8=__errno_location();
      *return_value___errno_location_8 = 34;
      return (char *)(void *)0;
    }
  }
}

// __xencrypt
// file crypt_util.c line 868
void __xencrypt(char *__block, signed int __edflag)
{
  __xencrypt_r(__block, __edflag, &_ufc_foobar);
}

// __xencrypt_r
// file crypt_util.c line 773
void __xencrypt_r(char *__block, signed int __edflag, struct crypt_data * restrict __data)
{
  unsigned long int l1;
  unsigned long int l2;
  unsigned long int r1;
  unsigned long int r2;
  unsigned long int res[4l];
  signed int i;
  unsigned long int *kt = (unsigned long int *)__data->keysched;
  _ufc_setup_salt_r("..", __data);
  if(!((__edflag == 0) == (__data->direction == 0)))
  {
    i = 0;
    for( ; !(i >= 8); i = i + 1)
    {
      unsigned long int x = kt[(signed long int)(15 - i)];
      kt[(signed long int)(15 - i)] = kt[(signed long int)i];
      kt[(signed long int)i] = x;
    }
    __data->direction = __edflag;
  }

  i = 0;
  l1 = (unsigned long int)0;
  for( ; !(i >= 24); i = i + 1)
    if(!(__block[(signed long int)(initial_perm[(signed long int)(esel[(signed long int)i] + -1)] + -1)] == 0))
      l1 = l1 | BITMASK[(signed long int)i];

  l2 = (unsigned long int)0;
  for( ; !(i >= 48); i = i + 1)
    if(!(__block[(signed long int)(initial_perm[(signed long int)(esel[(signed long int)i] + -1)] + -1)] == 0))
      l2 = l2 | BITMASK[(signed long int)(i - 24)];

  i = 0;
  r1 = (unsigned long int)0;
  for( ; !(i >= 24); i = i + 1)
    if(!(__block[(signed long int)(initial_perm[(signed long int)(32 + esel[(signed long int)i])] + -1)] == 0))
      r1 = r1 | BITMASK[(signed long int)i];

  r2 = (unsigned long int)0;
  for( ; !(i >= 48); i = i + 1)
    if(!(__block[(signed long int)(initial_perm[(signed long int)(32 + esel[(signed long int)i])] + -1)] == 0))
      r2 = r2 | BITMASK[(signed long int)(i - 24)];

  res[(signed long int)0] = l1;
  res[(signed long int)1] = l2;
  res[(signed long int)2] = r1;
  res[(signed long int)3] = r2;
  _ufc_doit_r((unsigned long int)1, __data, &res[(signed long int)0]);
  _ufc_dofinalperm_r(res, __data);
  l1 = res[(signed long int)0];
  r1 = res[(signed long int)1];
  i = 0;
  char *tmp_post_1;
  for( ; !(i >= 32); i = i + 1)
  {
    tmp_post_1 = __block;
    __block = __block + 1l;
    *tmp_post_1 = (char)((l1 & longmask[(signed long int)i]) != (unsigned long int)0);
  }
  i = 0;
  char *tmp_post_2;
  for( ; !(i >= 32); i = i + 1)
  {
    tmp_post_2 = __block;
    __block = __block + 1l;
    *tmp_post_2 = (char)((r1 & longmask[(signed long int)i]) != (unsigned long int)0);
  }
}

// __xsetkey
// file crypt_util.c line 900
void __xsetkey(const char *__key)
{
  __xsetkey_r(__key, &_ufc_foobar);
}

// __xsetkey_r
// file crypt_util.c line 881
void __xsetkey_r(const char *__key, struct crypt_data * restrict __data)
{
  signed int i;
  signed int j;
  unsigned char c;
  char ktab[8l];
  _ufc_setup_salt_r("..", __data);
  i = 0;
  const char *tmp_post_1;
  for( ; !(i >= 8); i = i + 1)
  {
    j = 0;
    c = (unsigned char)0;
    for( ; !(j >= 8); j = j + 1)
    {
      tmp_post_1 = __key;
      __key = __key + 1l;
      c = (unsigned char)((signed int)c << 1 | (signed int)*tmp_post_1);
    }
    ktab[(signed long int)i] = (char)((signed int)c >> 1);
  }
  _ufc_mk_keytab_r(ktab, __data);
}

// _ufc_dofinalperm_r
// file crypt-private.h line 44
extern void _ufc_dofinalperm_r(unsigned long int *res, struct crypt_data * restrict __data)
{
  unsigned long int v1;
  unsigned long int v2;
  unsigned long int x;
  unsigned long int l1;
  unsigned long int l2;
  unsigned long int r1;
  unsigned long int r2;
  l1 = res[(signed long int)0];
  l2 = res[(signed long int)1];
  r1 = res[(signed long int)2];
  r2 = res[(signed long int)3];
  x = (l1 ^ l2) & (unsigned long int)__data->current_saltbits;
  l1 = l1 ^ x;
  l2 = l2 ^ x;
  x = (r1 ^ r2) & (unsigned long int)__data->current_saltbits;
  r1 = r1 ^ x;
  r2 = r2 ^ x;
  v2 = (unsigned long int)0;
  v1 = v2;
  l1 = l1 >> 3;
  l2 = l2 >> 3;
  r1 = r1 >> 3;
  r2 = r2 >> 3;
  v1 = v1 | efp[(signed long int)15][(signed long int)(r2 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)15][(signed long int)(r2 & (unsigned long int)0x3f)][(signed long int)1];
  r2 = r2 >> 6;
  v1 = v1 | efp[(signed long int)14][(signed long int)(r2 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)14][(signed long int)(r2 & (unsigned long int)0x3f)][(signed long int)1];
  r2 = r2 >> 10;
  v1 = v1 | efp[(signed long int)13][(signed long int)(r2 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)13][(signed long int)(r2 & (unsigned long int)0x3f)][(signed long int)1];
  r2 = r2 >> 6;
  v1 = v1 | efp[(signed long int)12][(signed long int)(r2 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)12][(signed long int)(r2 & (unsigned long int)0x3f)][(signed long int)1];
  v1 = v1 | efp[(signed long int)11][(signed long int)(r1 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)11][(signed long int)(r1 & (unsigned long int)0x3f)][(signed long int)1];
  r1 = r1 >> 6;
  v1 = v1 | efp[(signed long int)10][(signed long int)(r1 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)10][(signed long int)(r1 & (unsigned long int)0x3f)][(signed long int)1];
  r1 = r1 >> 10;
  v1 = v1 | efp[(signed long int)9][(signed long int)(r1 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)9][(signed long int)(r1 & (unsigned long int)0x3f)][(signed long int)1];
  r1 = r1 >> 6;
  v1 = v1 | efp[(signed long int)8][(signed long int)(r1 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)8][(signed long int)(r1 & (unsigned long int)0x3f)][(signed long int)1];
  v1 = v1 | efp[(signed long int)7][(signed long int)(l2 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)7][(signed long int)(l2 & (unsigned long int)0x3f)][(signed long int)1];
  l2 = l2 >> 6;
  v1 = v1 | efp[(signed long int)6][(signed long int)(l2 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)6][(signed long int)(l2 & (unsigned long int)0x3f)][(signed long int)1];
  l2 = l2 >> 10;
  v1 = v1 | efp[(signed long int)5][(signed long int)(l2 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)5][(signed long int)(l2 & (unsigned long int)0x3f)][(signed long int)1];
  l2 = l2 >> 6;
  v1 = v1 | efp[(signed long int)4][(signed long int)(l2 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)4][(signed long int)(l2 & (unsigned long int)0x3f)][(signed long int)1];
  v1 = v1 | efp[(signed long int)3][(signed long int)(l1 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)3][(signed long int)(l1 & (unsigned long int)0x3f)][(signed long int)1];
  l1 = l1 >> 6;
  v1 = v1 | efp[(signed long int)2][(signed long int)(l1 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)2][(signed long int)(l1 & (unsigned long int)0x3f)][(signed long int)1];
  l1 = l1 >> 10;
  v1 = v1 | efp[(signed long int)1][(signed long int)(l1 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)1][(signed long int)(l1 & (unsigned long int)0x3f)][(signed long int)1];
  l1 = l1 >> 6;
  v1 = v1 | efp[(signed long int)0][(signed long int)(l1 & (unsigned long int)0x3f)][(signed long int)0];
  v2 = v2 | efp[(signed long int)0][(signed long int)(l1 & (unsigned long int)0x3f)][(signed long int)1];
  res[(signed long int)0] = v1;
  res[(signed long int)1] = v2;
}

// _ufc_doit_r
// file crypt-private.h line 32
extern void _ufc_doit_r(unsigned long int itr, struct crypt_data * restrict __data, unsigned long int *res)
{
  signed int i;
  unsigned long int l;
  unsigned long int r;
  unsigned long int s;
  unsigned long int *k;
  unsigned long int *sb01 = (unsigned long int *)__data->sb0;
  unsigned long int *sb23 = (unsigned long int *)__data->sb2;
  l = (unsigned long int)res[(signed long int)0] << 32 | (unsigned long int)res[(signed long int)1];
  r = (unsigned long int)res[(signed long int)2] << 32 | (unsigned long int)res[(signed long int)3];
  unsigned long int tmp_post_1;
  signed int tmp_post_2;
  unsigned long int *tmp_post_3;
  unsigned long int *tmp_post_4;
  do
  {
    tmp_post_1 = itr;
    itr = itr - 1ul;
    if(tmp_post_1 == 0ul)
      break;

    k = (unsigned long int *)__data->keysched;
    i = 8;
    do
    {
      tmp_post_2 = i;
      i = i - 1;
      if(tmp_post_2 == 0)
        break;

      tmp_post_3 = k;
      k = k + 1l;
      s = *tmp_post_3 ^ r;
      l = l ^ *((unsigned long int *)((char *)sb23 + (signed long int)(s & (unsigned long int)0xffff)));
      s = s >> 16;
      l = l ^ *((unsigned long int *)((char *)sb23 + (signed long int)(s & (unsigned long int)0xffff)));
      s = s >> 16;
      l = l ^ *((unsigned long int *)((char *)sb01 + (signed long int)(s & (unsigned long int)0xffff)));
      s = s >> 16;
      l = l ^ *((unsigned long int *)((char *)sb01 + (signed long int)s));
      tmp_post_4 = k;
      k = k + 1l;
      s = *tmp_post_4 ^ l;
      r = r ^ *((unsigned long int *)((char *)sb23 + (signed long int)(s & (unsigned long int)0xffff)));
      s = s >> 16;
      r = r ^ *((unsigned long int *)((char *)sb23 + (signed long int)(s & (unsigned long int)0xffff)));
      s = s >> 16;
      r = r ^ *((unsigned long int *)((char *)sb01 + (signed long int)(s & (unsigned long int)0xffff)));
      s = s >> 16;
      r = r ^ *((unsigned long int *)((char *)sb01 + (signed long int)s));
    }
    while((_Bool)1);
    s = l;
    l = r;
    r = s;
  }
  while((_Bool)1);
  res[(signed long int)0] = l >> 32;
  res[(signed long int)1] = l & (unsigned long int)0xffffffff;
  res[(signed long int)2] = r >> 32;
  res[(signed long int)3] = r & (unsigned long int)0xffffffff;
}

// _ufc_mk_keytab_r
// file crypt-private.h line 42
extern void _ufc_mk_keytab_r(const char *key, struct crypt_data * restrict __data)
{
  unsigned long int v1;
  unsigned long int v2;
  unsigned long int *k1;
  signed int i;
  unsigned long int v;
  unsigned long int *k2 = (unsigned long int *)__data->keysched;
  v2 = (unsigned long int)0;
  v1 = v2;
  k1 = &do_pc1[(signed long int)0][(signed long int)0][(signed long int)0];
  i = 8;
  signed int tmp_post_1;
  const char *tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    v1 = v1 | k1[(signed long int)((signed int)*key & 0x7f)];
    k1 = k1 + (signed long int)128;
    tmp_post_2 = key;
    key = key + 1l;
    v2 = v2 | k1[(signed long int)((signed int)*tmp_post_2 & 0x7f)];
    k1 = k1 + (signed long int)128;
  }
  while((_Bool)1);
  i = 0;
  unsigned long int *tmp_post_3;
  for( ; !(i >= 16); i = i + 1)
  {
    k1 = &do_pc2[(signed long int)0][(signed long int)0];
    v1 = v1 << rots[(signed long int)i] | v1 >> 28 - rots[(signed long int)i];
    v = k1[(signed long int)(v1 >> 21 & (unsigned long int)0x7f)];
    k1 = k1 + (signed long int)128;
    v = v | k1[(signed long int)(v1 >> 14 & (unsigned long int)0x7f)];
    k1 = k1 + (signed long int)128;
    v = v | k1[(signed long int)(v1 >> 7 & (unsigned long int)0x7f)];
    k1 = k1 + (signed long int)128;
    v = v | k1[(signed long int)(v1 & (unsigned long int)0x7f)];
    k1 = k1 + (signed long int)128;
    v = v << 32;
    v2 = v2 << rots[(signed long int)i] | v2 >> 28 - rots[(signed long int)i];
    v = v | k1[(signed long int)(v2 >> 21 & (unsigned long int)0x7f)];
    k1 = k1 + (signed long int)128;
    v = v | k1[(signed long int)(v2 >> 14 & (unsigned long int)0x7f)];
    k1 = k1 + (signed long int)128;
    v = v | k1[(signed long int)(v2 >> 7 & (unsigned long int)0x7f)];
    k1 = k1 + (signed long int)128;
    v = v | k1[(signed long int)(v2 & (unsigned long int)0x7f)];
    tmp_post_3 = k2;
    k2 = k2 + 1l;
    *tmp_post_3 = v | (unsigned long int)0x0000800000008000l;
  }
  __data->direction = 0;
}

// _ufc_output_conversion_r
// file crypt-private.h line 46
extern void _ufc_output_conversion_r(unsigned long int v1, unsigned long int v2, const char *salt, struct crypt_data * restrict __data)
{
  signed int i;
  signed int s;
  signed int shf;
  __data->crypt_3_buf[(signed long int)0] = salt[(signed long int)0];
  signed int tmp_if_expr_1;
  if(!(salt[1l] == 0))
    tmp_if_expr_1 = (signed int)salt[(signed long int)1];

  else
    tmp_if_expr_1 = (signed int)salt[(signed long int)0];
  __data->crypt_3_buf[(signed long int)1] = (char)tmp_if_expr_1;
  i = 0;
  for( ; !(i >= 5); i = i + 1)
  {
    shf = 26 - 6 * i;
    __data->crypt_3_buf[(signed long int)(i + 2)] = (char)((v1 >> shf & (unsigned long int)0x3f) >= (unsigned long int)38 ? ((v1 >> shf & (unsigned long int)0x3f) - (unsigned long int)38) + (unsigned long int)97 : ((v1 >> shf & (unsigned long int)0x3f) >= (unsigned long int)12 ? ((v1 >> shf & (unsigned long int)0x3f) - (unsigned long int)12) + (unsigned long int)65 : (v1 >> shf & (unsigned long int)0x3f) + (unsigned long int)46));
  }
  s = (signed int)((v2 & (unsigned long int)0xf) << 2);
  v2 = v2 >> 2 | (v1 & (unsigned long int)0x3) << 30;
  i = 5;
  for( ; !(i >= 10); i = i + 1)
  {
    shf = 56 - 6 * i;
    __data->crypt_3_buf[(signed long int)(i + 2)] = (char)((v2 >> shf & (unsigned long int)0x3f) >= (unsigned long int)38 ? ((v2 >> shf & (unsigned long int)0x3f) - (unsigned long int)38) + (unsigned long int)97 : ((v2 >> shf & (unsigned long int)0x3f) >= (unsigned long int)12 ? ((v2 >> shf & (unsigned long int)0x3f) - (unsigned long int)12) + (unsigned long int)65 : (v2 >> shf & (unsigned long int)0x3f) + (unsigned long int)46));
  }
  __data->crypt_3_buf[(signed long int)12] = (char)(s >= 38 ? (s - 38) + 97 : (s >= 12 ? (s - 12) + 65 : s + 46));
  __data->crypt_3_buf[(signed long int)13] = (char)0;
}

// _ufc_setup_salt_r
// file crypt-private.h line 40
extern void _ufc_setup_salt_r(const char *s, struct crypt_data * restrict __data)
{
  unsigned long int i;
  unsigned long int j;
  unsigned long int saltbits;
  if(__data->initialized == 0)
    __init_des_r(__data);

  signed int tmp_if_expr_2;
  signed int tmp_if_expr_1;
  if(*s == __data->current_salt[0l])
  {
    if(!(s[1l] == __data->current_salt[1l]))
      goto __CPROVER_DUMP_L2;

  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    __data->current_salt[(signed long int)0] = s[(signed long int)0];
    __data->current_salt[(signed long int)1] = s[(signed long int)1];
    saltbits = (unsigned long int)0;
    i = (unsigned long int)0;
    for( ; !(i >= 2ul); i = i + 1ul)
    {
      signed long int c;
      if((signed int)s[(signed long int)i] >= 97)
        tmp_if_expr_2 = (signed int)s[(signed long int)i] - 59;

      else
      {
        if((signed int)s[(signed long int)i] >= 65)
          tmp_if_expr_1 = (signed int)s[(signed long int)i] - 53;

        else
          tmp_if_expr_1 = (signed int)s[(signed long int)i] - 46;
        tmp_if_expr_2 = tmp_if_expr_1;
      }
      c = (signed long int)tmp_if_expr_2;
      j = (unsigned long int)0;
      for( ; !(j >= 6ul); j = j + 1ul)
        if(!((c >> j & 1l) == 0l))
          saltbits = saltbits | BITMASK[(signed long int)((unsigned long int)6 * i + j)];

    }
    shuffle_sb((unsigned long int *)__data->sb0, (unsigned long int)__data->current_saltbits ^ saltbits);
    shuffle_sb((unsigned long int *)__data->sb1, (unsigned long int)__data->current_saltbits ^ saltbits);
    shuffle_sb((unsigned long int *)__data->sb2, (unsigned long int)__data->current_saltbits ^ saltbits);
    shuffle_sb((unsigned long int *)__data->sb3, (unsigned long int)__data->current_saltbits ^ saltbits);
    __data->current_saltbits = (signed long int)saltbits;
  }
}

// _xcrypt_blowfish_rn
// file crypt_blowfish.c line 567
char * _xcrypt_blowfish_rn(const char *key, const char *setting, char *output, signed int size)
{
  /* tag-#anon#lUN[lARR4{U32}_U32_'salt'||lARR6{U32}_U32_'output'|] */
union anonymous_4
{
  // salt
  unsigned int salt[4l];
  // output
  unsigned int output[6l];
};

/* */
  ;
  /* tag-#anon#lST[SYM#tag-#anon#ST[ARR4{ARR256{U32}_U32_}_ARR256{U32}_U32__'S'||ARR18{U32}_U32_'P'|]#'ctx'||ARR18{U32}_U32_'expanded_key'||lSYM#tag-#anon#lUN[lARR4{U32}_U32_'salt'||lARR6{U32}_U32_'output'|]#'binary'|] */
struct anonymous
{
  // ctx
  struct anonymous_3 ctx;
  // expanded_key
  unsigned int expanded_key[18l];
  // binary
  union anonymous_4 binary;
};

/* */
  ;
  struct anonymous data;
  unsigned int L;
  unsigned int R;
  unsigned int tmp1;
  unsigned int tmp2;
  unsigned int tmp3;
  unsigned int tmp4;
  unsigned int *ptr;
  unsigned int count;
  signed int i;
  if(!(size >= 1))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 34;
    return (char *)(void *)0;
  }

  _Bool tmp_if_expr_3;
  if(!((signed int)*setting == 36))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = (signed int)setting[(signed long int)1] != 50 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = (_Bool)1;

  else
    tmp_if_expr_4 = (signed int)setting[(signed long int)2] != 97 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_4)
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = (signed int)setting[(signed long int)3] != 36 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_6;
  if(tmp_if_expr_5)
    tmp_if_expr_6 = (_Bool)1;

  else
    tmp_if_expr_6 = (signed int)setting[(signed long int)4] < 48 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_7;
  if(tmp_if_expr_6)
    tmp_if_expr_7 = (_Bool)1;

  else
    tmp_if_expr_7 = (signed int)setting[(signed long int)4] > 51 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_8;
  if(tmp_if_expr_7)
    tmp_if_expr_8 = (_Bool)1;

  else
    tmp_if_expr_8 = (signed int)setting[(signed long int)5] < 48 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_9;
  if(tmp_if_expr_8)
    tmp_if_expr_9 = (_Bool)1;

  else
    tmp_if_expr_9 = (signed int)setting[(signed long int)5] > 57 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_10;
  if(tmp_if_expr_9)
    tmp_if_expr_10 = (_Bool)1;

  else
    tmp_if_expr_10 = (signed int)setting[(signed long int)6] != 36 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_10)
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 22;
    return (char *)(void *)0;
  }

  count = (unsigned int)1 << ((signed int)setting[(signed long int)4] - 48) * 10 + ((signed int)setting[(signed long int)5] - 48);
  _Bool tmp_if_expr_13;
  signed int return_value_BF_decode_12;
  if(!(count >= 16u))
    tmp_if_expr_13 = (_Bool)1;

  else
  {
    return_value_BF_decode_12=BF_decode(data.binary.salt, &setting[(signed long int)7], 16);
    tmp_if_expr_13 = return_value_BF_decode_12 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_13)
  {
    clean((void *)data.binary.salt, (signed int)sizeof(unsigned int [4l]) /*16ul*/ );
    signed int *return_value___errno_location_11;
    return_value___errno_location_11=__errno_location();
    *return_value___errno_location_11 = 22;
    return (char *)(void *)0;
  }

  BF_swap(data.binary.salt, 4);
  BF_set_key(key, data.expanded_key, data.ctx.P);
  memcpy((void *)data.ctx.S, (const void *)BF_init_state.S, sizeof(unsigned int [4l][256l]) /*4096ul*/ );
  R = (unsigned int)0;
  L = R;
  i = 0;
  for( ; !(i >= 2); i = i + 2)
  {
    L = L ^ data.binary.salt[(signed long int)(i & 2)];
    R = R ^ data.binary.salt[(signed long int)((i & 2) + 1)];
    L = L ^ data.ctx.P[(signed long int)0];
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(0 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(1 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(2 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(3 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(4 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(5 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(6 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(7 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(8 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(9 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(10 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(11 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(12 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(13 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(14 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(15 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp4 = R;
    R = L;
    L = tmp4 ^ data.ctx.P[(signed long int)(16 + 1)];
    data.ctx.P[(signed long int)i] = L;
    data.ctx.P[(signed long int)(i + 1)] = R;
  }
  ptr = data.ctx.S[(signed long int)0];
  do
  {
    ptr = ptr + (signed long int)4;
    L = L ^ data.binary.salt[(signed long int)(16 + 2 & 3)];
    R = R ^ data.binary.salt[(signed long int)(16 + 3 & 3)];
    L = L ^ data.ctx.P[(signed long int)0];
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(0 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(1 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(2 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(3 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(4 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(5 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(6 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(7 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(8 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(9 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(10 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(11 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(12 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(13 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(14 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(15 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp4 = R;
    R = L;
    L = tmp4 ^ data.ctx.P[(signed long int)(16 + 1)];
    *(ptr - (signed long int)4) = L;
    *(ptr - (signed long int)3) = R;
    L = L ^ data.binary.salt[(signed long int)(16 + 4 & 3)];
    R = R ^ data.binary.salt[(signed long int)(16 + 5 & 3)];
    L = L ^ data.ctx.P[(signed long int)0];
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(0 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(1 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(2 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(3 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(4 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(5 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(6 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(7 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(8 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(9 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(10 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(11 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(12 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(13 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp1 = L & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = L >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = L >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = L >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    R = R ^ data.ctx.P[(signed long int)(14 + 1)];
    tmp3 = tmp3 + tmp1;
    R = R ^ tmp3;
    tmp1 = R & (unsigned int)0xFF;
    tmp1 = tmp1 << 2;
    tmp2 = R >> 6;
    tmp2 = tmp2 & (unsigned int)0x3FC;
    tmp3 = R >> 14;
    tmp3 = tmp3 & (unsigned int)0x3FC;
    tmp4 = R >> 22;
    tmp4 = tmp4 & (unsigned int)0x3FC;
    tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
    tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
    tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
    tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
    tmp3 = tmp3 ^ tmp2;
    L = L ^ data.ctx.P[(signed long int)(15 + 1)];
    tmp3 = tmp3 + tmp1;
    L = L ^ tmp3;
    tmp4 = R;
    R = L;
    L = tmp4 ^ data.ctx.P[(signed long int)(16 + 1)];
    *(ptr - (signed long int)2) = L;
    *(ptr - (signed long int)1) = R;
  }
  while(!(ptr >= data.ctx.S[3l] + 255l));
  do
  {
    data.ctx.P[(signed long int)0] = data.ctx.P[(signed long int)0] ^ data.expanded_key[(signed long int)0];
    data.ctx.P[(signed long int)1] = data.ctx.P[(signed long int)1] ^ data.expanded_key[(signed long int)1];
    data.ctx.P[(signed long int)2] = data.ctx.P[(signed long int)2] ^ data.expanded_key[(signed long int)2];
    data.ctx.P[(signed long int)3] = data.ctx.P[(signed long int)3] ^ data.expanded_key[(signed long int)3];
    data.ctx.P[(signed long int)4] = data.ctx.P[(signed long int)4] ^ data.expanded_key[(signed long int)4];
    data.ctx.P[(signed long int)5] = data.ctx.P[(signed long int)5] ^ data.expanded_key[(signed long int)5];
    data.ctx.P[(signed long int)6] = data.ctx.P[(signed long int)6] ^ data.expanded_key[(signed long int)6];
    data.ctx.P[(signed long int)7] = data.ctx.P[(signed long int)7] ^ data.expanded_key[(signed long int)7];
    data.ctx.P[(signed long int)8] = data.ctx.P[(signed long int)8] ^ data.expanded_key[(signed long int)8];
    data.ctx.P[(signed long int)9] = data.ctx.P[(signed long int)9] ^ data.expanded_key[(signed long int)9];
    data.ctx.P[(signed long int)10] = data.ctx.P[(signed long int)10] ^ data.expanded_key[(signed long int)10];
    data.ctx.P[(signed long int)11] = data.ctx.P[(signed long int)11] ^ data.expanded_key[(signed long int)11];
    data.ctx.P[(signed long int)12] = data.ctx.P[(signed long int)12] ^ data.expanded_key[(signed long int)12];
    data.ctx.P[(signed long int)13] = data.ctx.P[(signed long int)13] ^ data.expanded_key[(signed long int)13];
    data.ctx.P[(signed long int)14] = data.ctx.P[(signed long int)14] ^ data.expanded_key[(signed long int)14];
    data.ctx.P[(signed long int)15] = data.ctx.P[(signed long int)15] ^ data.expanded_key[(signed long int)15];
    data.ctx.P[(signed long int)16] = data.ctx.P[(signed long int)16] ^ data.expanded_key[(signed long int)16];
    data.ctx.P[(signed long int)17] = data.ctx.P[(signed long int)17] ^ data.expanded_key[(signed long int)17];
    R = (unsigned int)0;
    L = R;
    ptr = data.ctx.P;
    do
    {
      ptr = ptr + (signed long int)2;
      L = L ^ data.ctx.P[(signed long int)0];
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(0 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(1 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(2 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(3 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(4 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(5 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(6 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(7 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(8 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(9 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(10 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(11 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(12 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(13 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(14 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(15 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp4 = R;
      R = L;
      L = tmp4 ^ data.ctx.P[(signed long int)(16 + 1)];
      *(ptr - (signed long int)2) = L;
      *(ptr - (signed long int)1) = R;
    }
    while(!(ptr >= data.ctx.P + 18l));
    ptr = data.ctx.S[(signed long int)0];
    do
    {
      ptr = ptr + (signed long int)2;
      L = L ^ data.ctx.P[(signed long int)0];
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(0 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(1 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(2 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(3 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(4 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(5 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(6 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(7 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(8 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(9 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(10 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(11 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(12 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(13 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(14 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(15 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp4 = R;
      R = L;
      L = tmp4 ^ data.ctx.P[(signed long int)(16 + 1)];
      *(ptr - (signed long int)2) = L;
      *(ptr - (signed long int)1) = R;
    }
    while(!(ptr >= data.ctx.S[3l] + 255l));
    tmp1 = data.binary.salt[(signed long int)0];
    tmp2 = data.binary.salt[(signed long int)1];
    tmp3 = data.binary.salt[(signed long int)2];
    tmp4 = data.binary.salt[(signed long int)3];
    data.ctx.P[(signed long int)0] = data.ctx.P[(signed long int)0] ^ tmp1;
    data.ctx.P[(signed long int)1] = data.ctx.P[(signed long int)1] ^ tmp2;
    data.ctx.P[(signed long int)2] = data.ctx.P[(signed long int)2] ^ tmp3;
    data.ctx.P[(signed long int)3] = data.ctx.P[(signed long int)3] ^ tmp4;
    data.ctx.P[(signed long int)4] = data.ctx.P[(signed long int)4] ^ tmp1;
    data.ctx.P[(signed long int)5] = data.ctx.P[(signed long int)5] ^ tmp2;
    data.ctx.P[(signed long int)6] = data.ctx.P[(signed long int)6] ^ tmp3;
    data.ctx.P[(signed long int)7] = data.ctx.P[(signed long int)7] ^ tmp4;
    data.ctx.P[(signed long int)8] = data.ctx.P[(signed long int)8] ^ tmp1;
    data.ctx.P[(signed long int)9] = data.ctx.P[(signed long int)9] ^ tmp2;
    data.ctx.P[(signed long int)10] = data.ctx.P[(signed long int)10] ^ tmp3;
    data.ctx.P[(signed long int)11] = data.ctx.P[(signed long int)11] ^ tmp4;
    data.ctx.P[(signed long int)12] = data.ctx.P[(signed long int)12] ^ tmp1;
    data.ctx.P[(signed long int)13] = data.ctx.P[(signed long int)13] ^ tmp2;
    data.ctx.P[(signed long int)14] = data.ctx.P[(signed long int)14] ^ tmp3;
    data.ctx.P[(signed long int)15] = data.ctx.P[(signed long int)15] ^ tmp4;
    data.ctx.P[(signed long int)16] = data.ctx.P[(signed long int)16] ^ tmp1;
    data.ctx.P[(signed long int)17] = data.ctx.P[(signed long int)17] ^ tmp2;
    R = (unsigned int)0;
    L = R;
    ptr = data.ctx.P;
    do
    {
      ptr = ptr + (signed long int)2;
      L = L ^ data.ctx.P[(signed long int)0];
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(0 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(1 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(2 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(3 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(4 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(5 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(6 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(7 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(8 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(9 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(10 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(11 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(12 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(13 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(14 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(15 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp4 = R;
      R = L;
      L = tmp4 ^ data.ctx.P[(signed long int)(16 + 1)];
      *(ptr - (signed long int)2) = L;
      *(ptr - (signed long int)1) = R;
    }
    while(!(ptr >= data.ctx.P + 18l));
    ptr = data.ctx.S[(signed long int)0];
    do
    {
      ptr = ptr + (signed long int)2;
      L = L ^ data.ctx.P[(signed long int)0];
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(0 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(1 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(2 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(3 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(4 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(5 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(6 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(7 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(8 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(9 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(10 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(11 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(12 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(13 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(14 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(15 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp4 = R;
      R = L;
      L = tmp4 ^ data.ctx.P[(signed long int)(16 + 1)];
      *(ptr - (signed long int)2) = L;
      *(ptr - (signed long int)1) = R;
    }
    while(!(ptr >= data.ctx.S[3l] + 255l));
    count = count - 1u;
  }
  while(!(count == 0u));
  i = 0;
  for( ; !(i >= 6); i = i + 2)
  {
    L = BF_magic_w[(signed long int)i];
    R = BF_magic_w[(signed long int)(i + 1)];
    count = (unsigned int)64;
    do
    {
      L = L ^ data.ctx.P[(signed long int)0];
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(0 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(1 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(2 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(3 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(4 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(5 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(6 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(7 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(8 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(9 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(10 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(11 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(12 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(13 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp1 = L & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = L >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = L >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = L >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      R = R ^ data.ctx.P[(signed long int)(14 + 1)];
      tmp3 = tmp3 + tmp1;
      R = R ^ tmp3;
      tmp1 = R & (unsigned int)0xFF;
      tmp1 = tmp1 << 2;
      tmp2 = R >> 6;
      tmp2 = tmp2 & (unsigned int)0x3FC;
      tmp3 = R >> 14;
      tmp3 = tmp3 & (unsigned int)0x3FC;
      tmp4 = R >> 22;
      tmp4 = tmp4 & (unsigned int)0x3FC;
      tmp1 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)3] + (signed long int)tmp1));
      tmp2 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)2] + (signed long int)tmp2));
      tmp3 = *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)1] + (signed long int)tmp3));
      tmp3 = tmp3 + *((unsigned int *)((unsigned char *)data.ctx.S[(signed long int)0] + (signed long int)tmp4));
      tmp3 = tmp3 ^ tmp2;
      L = L ^ data.ctx.P[(signed long int)(15 + 1)];
      tmp3 = tmp3 + tmp1;
      L = L ^ tmp3;
      tmp4 = R;
      R = L;
      L = tmp4 ^ data.ctx.P[(signed long int)(16 + 1)];
      count = count - 1u;
    }
    while(!(count == 0u));
    data.binary.output[(signed long int)i] = L;
    data.binary.output[(signed long int)(i + 1)] = R;
  }
  memcpy((void *)output, (const void *)setting, (unsigned long int)((7 + 22) - 1));
  output[(signed long int)((7 + 22) - 1)] = (char)BF_itoa64[(signed long int)((signed int)BF_atoi64[(signed long int)((signed int)setting[(signed long int)((7 + 22) - 1)] - 0x20)] & 0x30)];
  BF_swap(data.binary.output, 6);
  BF_encode(&output[(signed long int)(7 + 22)], data.binary.output, 23);
  output[(signed long int)(7 + 22 + 31)] = (char)0;
  clean((void *)&data, (signed int)sizeof(struct anonymous) /*4264ul*/ );
  return output;
}

// _xcrypt_data_alloc
// file wrapper.c line 34
static signed int _xcrypt_data_alloc(void **data, signed int *size, signed int need)
{
  void *updated;
  if(!(*data == NULL))
  {
    if(!(*size >= need))
      goto __CPROVER_DUMP_L1;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    updated=realloc(*data, (unsigned long int)need);
    if(updated == NULL)
      return -1;

    else
    {
      if((unsigned long int)need >= sizeof(struct crypt_data) /*131232ul*/ )
        ((struct crypt_data *)updated)->initialized = 0;

      *data = updated;
      *size = need;
      return 0;
    }
  }
}

// _xcrypt_gensalt_blowfish_rn
// file crypt_blowfish.c line 719
char * _xcrypt_gensalt_blowfish_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size)
{
  if(!(count == 0ul) && (count >= 32ul || !(count >= 4ul)) || !(output_size >= 1) || !(size >= 16))
  {
    if(output_size >= 1)
      output[(signed long int)0] = (char)0;

    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = output_size < 7 + 22 + 1 ? 34 : 22;
    return (char *)(void *)0;
  }

  if(count == 0ul)
    count = (unsigned long int)5;

  output[(signed long int)0] = (char)36;
  output[(signed long int)1] = (char)50;
  output[(signed long int)2] = (char)97;
  output[(signed long int)3] = (char)36;
  output[(signed long int)4] = (char)((unsigned long int)48 + count / (unsigned long int)10);
  output[(signed long int)5] = (char)((unsigned long int)48 + count % (unsigned long int)10);
  output[(signed long int)6] = (char)36;
  BF_encode(&output[(signed long int)7], (unsigned int *)input, 16);
  output[(signed long int)(7 + 22)] = (char)0;
  return output;
}

// _xcrypt_gensalt_extended_rn
// file crypt_gensalt.c line 45
char * _xcrypt_gensalt_extended_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size)
{
  unsigned long int value;
  if(!(count == 0ul) && ((1ul & count) == 0ul || count >= 16777216ul) || !(output_size >= 1) || !(size >= 3))
  {
    if(output_size >= 1)
      output[(signed long int)0] = (char)0;

    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = output_size < 1 + 4 + 4 + 1 ? 34 : 22;
    return (char *)(void *)0;
  }

  if(count == 0ul)
    count = (unsigned long int)725;

  output[(signed long int)0] = (char)95;
  output[(signed long int)1] = (char)_xcrypt_itoa64[(signed long int)(count & (unsigned long int)0x3f)];
  output[(signed long int)2] = (char)_xcrypt_itoa64[(signed long int)(count >> 6 & (unsigned long int)0x3f)];
  output[(signed long int)3] = (char)_xcrypt_itoa64[(signed long int)(count >> 12 & (unsigned long int)0x3f)];
  output[(signed long int)4] = (char)_xcrypt_itoa64[(signed long int)(count >> 18 & (unsigned long int)0x3f)];
  value = (unsigned long int)(unsigned char)input[(signed long int)0] | (unsigned long int)(unsigned char)input[(signed long int)1] << 8 | (unsigned long int)(unsigned char)input[(signed long int)2] << 16;
  output[(signed long int)5] = (char)_xcrypt_itoa64[(signed long int)(value & (unsigned long int)0x3f)];
  output[(signed long int)6] = (char)_xcrypt_itoa64[(signed long int)(value >> 6 & (unsigned long int)0x3f)];
  output[(signed long int)7] = (char)_xcrypt_itoa64[(signed long int)(value >> 12 & (unsigned long int)0x3f)];
  output[(signed long int)8] = (char)_xcrypt_itoa64[(signed long int)(value >> 18 & (unsigned long int)0x3f)];
  output[(signed long int)9] = (char)0;
  return output;
}

// _xcrypt_gensalt_md5_rn
// file crypt_gensalt.c line 78
char * _xcrypt_gensalt_md5_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size)
{
  unsigned long int value;
  if(!(count == 0ul) && !(count == 1000ul) || !(output_size >= 1) || !(size >= 3))
  {
    if(output_size >= 1)
      output[(signed long int)0] = (char)0;

    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = output_size < 3 + 4 + 1 ? 34 : 22;
    return (char *)(void *)0;
  }

  output[(signed long int)0] = (char)36;
  output[(signed long int)1] = (char)49;
  output[(signed long int)2] = (char)36;
  value = (unsigned long int)(unsigned char)input[(signed long int)0] | (unsigned long int)(unsigned char)input[(signed long int)1] << 8 | (unsigned long int)(unsigned char)input[(signed long int)2] << 16;
  output[(signed long int)3] = (char)_xcrypt_itoa64[(signed long int)(value & (unsigned long int)0x3f)];
  output[(signed long int)4] = (char)_xcrypt_itoa64[(signed long int)(value >> 6 & (unsigned long int)0x3f)];
  output[(signed long int)5] = (char)_xcrypt_itoa64[(signed long int)(value >> 12 & (unsigned long int)0x3f)];
  output[(signed long int)6] = (char)_xcrypt_itoa64[(signed long int)(value >> 18 & (unsigned long int)0x3f)];
  output[(signed long int)7] = (char)0;
  if(output_size >= 1 && size >= 6)
  {
    value = (unsigned long int)(unsigned char)input[(signed long int)3] | (unsigned long int)(unsigned char)input[(signed long int)4] << 8 | (unsigned long int)(unsigned char)input[(signed long int)5] << 16;
    output[(signed long int)7] = (char)_xcrypt_itoa64[(signed long int)(value & (unsigned long int)0x3f)];
    output[(signed long int)8] = (char)_xcrypt_itoa64[(signed long int)(value >> 6 & (unsigned long int)0x3f)];
    output[(signed long int)9] = (char)_xcrypt_itoa64[(signed long int)(value >> 12 & (unsigned long int)0x3f)];
    output[(signed long int)10] = (char)_xcrypt_itoa64[(signed long int)(value >> 18 & (unsigned long int)0x3f)];
    output[(signed long int)11] = (char)0;
  }

  return output;
}

// _xcrypt_gensalt_sha_rn
// file crypt_gensalt.c line 116
char * _xcrypt_gensalt_sha_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size)
{
  if(!((unsigned long int)output_size >= sizeof(const char *) /*8ul*/ ))
  {
    if(output_size >= 1)
      output[(signed long int)0] = (char)0;

    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 34;
    return (char *)(void *)0;
  }

  strcpy(output, sha_salt_prefix);
  return output;
}

// _xcrypt_gensalt_traditional_rn
// file crypt_gensalt.c line 29
char * _xcrypt_gensalt_traditional_rn(unsigned long int count, const char *input, signed int size, char *output, signed int output_size)
{
  if(!(count == 0ul) && !(count == 25ul) || !(output_size >= 1) || !(size >= 2))
  {
    if(output_size >= 1)
      output[(signed long int)0] = (char)0;

    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = output_size < 2 + 1 ? 34 : 22;
    return (char *)(void *)0;
  }

  output[(signed long int)0] = (char)_xcrypt_itoa64[(signed long int)((unsigned int)input[(signed long int)0] & (unsigned int)0x3f)];
  output[(signed long int)1] = (char)_xcrypt_itoa64[(signed long int)((unsigned int)input[(signed long int)1] & (unsigned int)0x3f)];
  output[(signed long int)2] = (char)0;
  return output;
}

// _xcrypt_retval_magic
// file wrapper.c line 58
static char * _xcrypt_retval_magic(char *retval, const char *salt, char *output)
{
  if(!(retval == ((char *)NULL)))
    return retval;

  else
  {
    output[(signed long int)0] = (char)42;
    output[(signed long int)1] = (char)48;
    output[(signed long int)2] = (char)0;
    if((signed int)*salt == 42)
    {
      if((signed int)salt[1l] == 48)
        output[(signed long int)1] = (char)49;

    }

    return output;
  }
}

// base64encode
// file sha-crypt.c line 20
static signed int base64encode(char *encoded, const unsigned char *string, signed int len)
{
  signed int i;
  char *p = encoded;
  i = 0;
  char *tmp_post_1;
  char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  for( ; !(i >= len + -2); i = i + 3)
  {
    tmp_post_1 = p;
    p = p + 1l;
    *tmp_post_1 = b64[(signed long int)((signed int)string[(signed long int)i] >> 2 & 0x3F)];
    tmp_post_2 = p;
    p = p + 1l;
    *tmp_post_2 = b64[(signed long int)(((signed int)string[(signed long int)i] & 0x3) << 4 | (signed int)((signed int)string[(signed long int)(i + 1)] & 0xF0) >> 4)];
    tmp_post_3 = p;
    p = p + 1l;
    *tmp_post_3 = b64[(signed long int)(((signed int)string[(signed long int)(i + 1)] & 0xF) << 2 | (signed int)((signed int)string[(signed long int)(i + 2)] & 0xC0) >> 6)];
    tmp_post_4 = p;
    p = p + 1l;
    *tmp_post_4 = b64[(signed long int)((signed int)string[(signed long int)(i + 2)] & 0x3F)];
  }
  char *tmp_post_5;
  char *tmp_post_6;
  char *tmp_post_7;
  char *tmp_post_8;
  char *tmp_post_9;
  char *tmp_post_10;
  if(!(i >= len))
  {
    tmp_post_5 = p;
    p = p + 1l;
    *tmp_post_5 = b64[(signed long int)((signed int)string[(signed long int)i] >> 2 & 0x3F)];
    if(i == len + -1)
    {
      tmp_post_6 = p;
      p = p + 1l;
      *tmp_post_6 = b64[(signed long int)(((signed int)string[(signed long int)i] & 0x3) << 4)];
      tmp_post_7 = p;
      p = p + 1l;
      *tmp_post_7 = (char)61;
    }

    else
    {
      tmp_post_8 = p;
      p = p + 1l;
      *tmp_post_8 = b64[(signed long int)(((signed int)string[(signed long int)i] & 0x3) << 4 | (signed int)((signed int)string[(signed long int)(i + 1)] & 0xF0) >> 4)];
      tmp_post_9 = p;
      p = p + 1l;
      *tmp_post_9 = b64[(signed long int)(((signed int)string[(signed long int)(i + 1)] & 0xF) << 2)];
    }
    tmp_post_10 = p;
    p = p + 1l;
    *tmp_post_10 = (char)61;
  }

  char *tmp_post_11 = p;
  p = p + 1l;
  *tmp_post_11 = (char)0;
  return (signed int)(p - encoded);
}

// clean
// file crypt_blowfish.c line 369
static void clean(void *data, signed int size)
{
  memset(data, 0, (unsigned long int)size);
}

// handle_timer
// file blowfish-test.c line 40
static void handle_timer(signed int signum)
{
  running = 0;
}

// main
// file blowfish-test.c line 70
signed int main(void)
{
  struct itimerval it;
  struct tms buf;
  signed long int start_real;
  signed long int start_virtual;
  signed long int end_real;
  signed long int end_virtual;
  unsigned long int count;
  void *data;
  signed int size;
  char *setting1;
  char *setting2;
  signed int i;
  unsigned long int t[10l];
  void *t_retval;
  i = 0;
  char *return_value_xcrypt_1;
  signed int return_value_strcmp_2;
  for( ; !(tests[(signed long int)i].hash == ((char *)NULL)); i = i + 1)
  {
    return_value_xcrypt_1=xcrypt(tests[(signed long int)i].pw, tests[(signed long int)i].hash);
    return_value_strcmp_2=strcmp(return_value_xcrypt_1, tests[(signed long int)i].hash);
    if(!(return_value_strcmp_2 == 0))
    {
      printf("FAILED (crypt/%d)\n", i);
      return 1;
    }

  }
  data = (void *)0;
  size = 0x12345678;
  i = 0;
  char *return_value_xcrypt_ra_3;
  signed int return_value_strcmp_4;
  for( ; !(tests[(signed long int)i].hash == ((char *)NULL)); i = i + 1)
  {
    return_value_xcrypt_ra_3=xcrypt_ra(tests[(signed long int)i].pw, tests[(signed long int)i].hash, &data, &size);
    return_value_strcmp_4=strcmp(return_value_xcrypt_ra_3, tests[(signed long int)i].hash);
    if(!(return_value_strcmp_4 == 0))
    {
      printf("FAILED (crypt_ra/%d)\n", i);
      return 1;
    }

  }
  setting1=xcrypt_gensalt(tests[(signed long int)0].hash, (unsigned long int)12, (const char *)data, size);
  _Bool tmp_if_expr_6;
  signed int return_value_strncmp_5;
  if(setting1 == ((char *)NULL))
    tmp_if_expr_6 = (_Bool)1;

  else
  {
    return_value_strncmp_5=strncmp(setting1, "_2a_12_", (unsigned long int)7);
    tmp_if_expr_6 = return_value_strncmp_5 != 0 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_pthread_create_12;
  if(tmp_if_expr_6)
  {
    puts("FAILED (crypt_gensalt)\n");
    return 1;
  }

  else
  {
    setting2=xcrypt_gensalt_ra(setting1, (unsigned long int)12, (const char *)data, size);
    signed int return_value_strcmp_7;
    return_value_strcmp_7=strcmp(setting1, setting2);
    if(!(return_value_strcmp_7 == 0))
    {
      puts("FAILED (crypt_gensalt_ra/1)\n");
      return 1;
    }

    else
    {
      *((char *)data) = *((char *)data) + 1;
      setting1=xcrypt_gensalt_ra(setting2, (unsigned long int)12, (const char *)data, size);
      signed int return_value_strcmp_8;
      return_value_strcmp_8=strcmp(setting1, setting2);
      if(return_value_strcmp_8 == 0)
      {
        puts("FAILED (crypt_gensalt_ra/2)\n");
        return 1;
      }

      else
      {
        free((void *)setting1);
        free((void *)setting2);
        free(data);
        running = 1;
        signal(14, handle_timer);
        memset((void *)&it, 0, sizeof(struct itimerval) /*32ul*/ );
        it.it_value.tv_sec = (signed long int)5;
        setitimer(0, &it, (struct itimerval *)(void *)0);
        start_real=times(&buf);
        start_virtual = buf.tms_utime + buf.tms_stime;
        void *return_value_run_9;
        return_value_run_9=run((void *)(char *)0);
        count = (unsigned long int)((char *)return_value_run_9 - (char *)0);
        end_real=times(&buf);
        end_virtual = buf.tms_utime + buf.tms_stime;
        if(end_virtual == start_virtual)
          end_virtual = end_virtual + 1l;

        signed long int return_value_sysconf_10;
        return_value_sysconf_10=sysconf(2);
        signed long int return_value_sysconf_11;
        return_value_sysconf_11=sysconf(2);
        printf("%.1f c/s real, %.1f c/s virtual\n", ((float)count * (float)return_value_sysconf_10) / (float)(end_real - start_real), ((float)count * (float)return_value_sysconf_11) / (float)(end_virtual - start_virtual));
        running = 1;
        it.it_value.tv_sec = (signed long int)60;
        setitimer(0, &it, (struct itimerval *)(void *)0);
        start_real=times(&buf);
        i = 0;
        for( ; !(i >= 10); i = i + 1)
        {
          return_value_pthread_create_12=pthread_create(&t[(signed long int)i], (const union pthread_attr_t *)(void *)0, run, (void *)((signed long int)i + (char *)0));
          if(!(return_value_pthread_create_12 == 0))
          {
            perror("pthread_create");
            return 1;
          }

        }
        i = 0;
        for( ; !(i >= 10); i = i + 1)
        {
          signed int return_value_pthread_join_13;
          return_value_pthread_join_13=pthread_join(t[(signed long int)i], &t_retval);
          if(!(return_value_pthread_join_13 == 0))
            perror("pthread_join");

          else
            if(!(t_retval == NULL))
            {
              count = (unsigned long int)((char *)t_retval - (char *)0);
              end_real=times(&buf);
              signed long int return_value_sysconf_14;
              return_value_sysconf_14=sysconf(2);
              printf("%d: %.1f c/s real\n", i, ((float)count * (float)return_value_sysconf_14) / (float)(end_real - start_real));
            }

        }
        return 0;
      }
    }
  }
}

// run
// file blowfish-test.c line 45
static void * run(void *arg)
{
  unsigned long int count = (unsigned long int)0;
  signed int i = 0;
  void *data = (void *)0;
  signed int size = 0x12345678;
  do
  {
    char *return_value_xcrypt_ra_1;
    return_value_xcrypt_ra_1=xcrypt_ra(tests[(signed long int)i].pw, tests[(signed long int)i].hash, &data, &size);
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(return_value_xcrypt_ra_1, tests[(signed long int)i].hash);
    if(!(return_value_strcmp_2 == 0))
    {
      printf("%d: FAILED (crypt_ra/%d/%lu)\n", (char *)arg - (char *)0, i, count);
      free(data);
      return (void *)0;
    }

    i = i + 1;
    if(tests[(signed long int)i].hash == ((char *)NULL))
      i = 0;

    count = count + 1ul;
  }
  while(!(running == 0));
  free(data);
  return (void *)((signed long int)count + (char *)0);
}

// shuffle_sb
// file crypt_util.c line 568
static void shuffle_sb(unsigned long int *k, unsigned long int saltbits)
{
  unsigned long int j;
  unsigned long int x;
  j = (unsigned long int)4096;
  unsigned long int tmp_post_1;
  unsigned long int *tmp_post_2;
  do
  {
    tmp_post_1 = j;
    j = j - 1ul;
    if(tmp_post_1 == 0ul)
      break;

    x = (*k >> 32 ^ *k) & (unsigned long int)saltbits;
    tmp_post_2 = k;
    k = k + 1l;
    *tmp_post_2 = *tmp_post_2 ^ (x << 32 | x);
  }
  while((_Bool)1);
}

