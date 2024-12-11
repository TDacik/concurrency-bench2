// #anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22
// file printf-args.h line 49
enum anonymous_5 { TYPE_NONE=0, TYPE_SCHAR=1, TYPE_UCHAR=2, TYPE_SHORT=3, TYPE_USHORT=4, TYPE_INT=5, TYPE_UINT=6, TYPE_LONGINT=7, TYPE_ULONGINT=8, TYPE_LONGLONGINT=9, TYPE_ULONGLONGINT=10, TYPE_DOUBLE=11, TYPE_LONGDOUBLE=12, TYPE_CHAR=13, TYPE_WIDE_CHAR=14, TYPE_STRING=15, TYPE_WIDE_STRING=16, TYPE_POINTER=17, TYPE_COUNT_SCHAR_POINTER=18, TYPE_COUNT_SHORT_POINTER=19, TYPE_COUNT_INT_POINTER=20, TYPE_COUNT_LONGINT_POINTER=21, TYPE_COUNT_LONGLONGINT_POINTER=22 };

// tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]
// file printf-parse.h line 53
struct anonymous_8;

// tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]
// file printf-args.h line 91
struct anonymous_1;

// tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}_U8_'__pad1'||U64'__pad2'||U32'__flags'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 177
struct anonymous;

// tag-#anon#ST[U64'count'||*{SYM#tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]#}_SYM#tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]#_'dir'||U64'max_width_length'||U64'max_precision_length'||ARR7{SYM#tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]#}_SYM#tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]#_'direct_alloc_dir'|]
// file printf-parse.h line 70
struct anonymous_3;

// tag-#anon#ST[U64'count'||*{SYM#tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]#}_SYM#tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]#_'arg'||ARR7{SYM#tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]#}_SYM#tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]#_'direct_alloc_arg'|]
// file printf-args.h line 141
struct anonymous_4;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_6;

// tag-#anon#UN[ARR8{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 224
union anonymous_2;

// tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]
// file printf-args.h line 94
union anonymous_9;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}_U8_'__pad1'||U64'__pad2'||U32'__flags'||U32'_pad0'|]#'__data'||ARR56{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 174
union anonymous_0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_7;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__locale_data
// file /usr/include/xlocale.h line 30
struct __locale_data;

// tag-__locale_struct
// file /usr/include/xlocale.h line 27
struct __locale_struct;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-hash_node
// file localename.c line 2534
struct hash_node;

// tag-header
// file malloca.c line 56
struct header;

// tag-preliminary_header
// file malloca.c line 52
struct preliminary_header;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

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
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// asnprintf
// file asnprintf.c line 25
extern char * asnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, ...);
// c_isalnum
// file c-ctype.c line 33
extern _Bool c_isalnum(signed int c);
// c_isalpha
// file c-ctype.c line 68
extern _Bool c_isalpha(signed int c);
// c_isascii
// file c-ctype.c line 27
extern _Bool c_isascii(signed int c);
// c_isblank
// file c-ctype.c line 97
extern _Bool c_isblank(signed int c);
// c_iscntrl
// file c-ctype.c line 103
extern _Bool c_iscntrl(signed int c);
// c_isdigit
// file c-ctype.c line 137
extern _Bool c_isdigit(signed int c);
// c_isgraph
// file c-ctype.c line 174
extern _Bool c_isgraph(signed int c);
// c_islower
// file c-ctype.c line 154
extern _Bool c_islower(signed int c);
// c_isprint
// file c-ctype.c line 208
extern _Bool c_isprint(signed int c);
// c_ispunct
// file c-ctype.c line 242
extern _Bool c_ispunct(signed int c);
// c_isspace
// file c-ctype.c line 266
extern _Bool c_isspace(signed int c);
// c_isupper
// file c-ctype.c line 273
extern _Bool c_isupper(signed int c);
// c_isxdigit
// file c-ctype.c line 293
extern _Bool c_isxdigit(signed int c);
// c_strcasecmp
// file c-strcasecmp.c line 27
extern signed int c_strcasecmp(const char *s1, const char *s2);
// c_strncasecmp
// file c-strncasecmp.c line 27
extern signed int c_strncasecmp(const char *s1, const char *s2, unsigned long int n);
// c_tolower
// file c-ctype.c line 320
extern signed int c_tolower(signed int c);
// c_toupper
// file c-ctype.c line 359
extern signed int c_toupper(signed int c);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_accounts
// file test-lock.c line 117
static void check_accounts(void);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgetfilecon
// file getfilecon.c line 38
signed int fgetfilecon(signed int, char **);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freea
// file malloca.c line 109
extern void freea(void *p);
// freecon
// file /usr/include/selinux/selinux.h line 20
extern void freecon(char *);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// gen_tempname
// file tempname.c line 196
extern signed int gen_tempname(char *tmpl, signed int suffixlen, signed int flags, signed int kind);
// get_charset_aliases
// file localcharset.c line 118
static const char * get_charset_aliases(void);
// getc_unlocked
// file /usr/include/stdio.h line 550
extern signed int getc_unlocked(struct _IO_FILE *);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getfilecon
// file getfilecon.c line 36
signed int getfilecon(const char *, char **);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// gl_locale_name
// file localename.c line 2944
extern const char * gl_locale_name(signed int category, const char *categoryname);
// gl_locale_name_default
// file localename.c line 2839
extern const char * gl_locale_name_default(void);
// gl_locale_name_environ
// file localename.c line 2806
extern const char * gl_locale_name_environ(signed int category, const char *categoryname);
// gl_locale_name_posix
// file localename.c line 2777
extern const char * gl_locale_name_posix(signed int category, const char *categoryname);
// gl_locale_name_thread
// file localename.c line 2756
extern const char * gl_locale_name_thread(signed int category, const char *categoryname);
// gl_locale_name_thread_unsafe
// file localename.c line 2601
static const char * gl_locale_name_thread_unsafe(signed int category, const char *categoryname);
// gl_locale_name_thread_unsafe_link1
// file localename.c line 2601
static const char * gl_locale_name_thread_unsafe_link1(signed int category_link1, const char *categoryname_link1);
// gl_thread_create
// file glthread/thread.h line 364
static inline unsigned long int gl_thread_create(void * (*func)(void *), void *arg);
// gl_thread_create::func_object
//
void * func_object(void *);
// glthread_once_singlethreaded
// file glthread/lock.h line 369
extern signed int glthread_once_singlethreaded(signed int *once_control);
// glthread_recursive_lock_init_multithreaded
// file glthread/lock.c line 284
extern signed int glthread_recursive_lock_init_multithreaded(union anonymous_7 *lock);
// lgetfilecon
// file getfilecon.c line 37
signed int lgetfilecon(const char *, char **);
// locale_charset
// file localcharset.c line 357
extern const char * locale_charset(void);
// lock_checker_thread
// file test-lock.c line 176
static void * lock_checker_thread(void *arg);
// lock_mutator_thread
// file test-lock.c line 138
static void * lock_mutator_thread(void *arg);
// lstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 262
extern signed int lstat(const char *, struct stat *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// map_to_failure
// file getfilecon.c line 49
static inline signed int map_to_failure(signed int ret, char **con);
// memchr
// file /usr/include/string.h line 96
extern void * memchr(const void *, signed int, unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// mmalloca
// file malloca.c line 68
extern void * mmalloca(unsigned long int n);
// nl_langinfo
// file /usr/include/langinfo.h line 583
extern char * nl_langinfo(signed int);
// once_contender_thread
// file test-lock.c line 431
static void * once_contender_thread(void *arg);
// once_execute
// file test-lock.c line 423
static void once_execute(void);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// printf_fetchargs
// file printf-args.c line 36
extern signed int printf_fetchargs(__builtin_va_list args, struct anonymous_4 *a);
// printf_parse
// file printf-parse.c line 83
extern signed int printf_parse(const char *format, struct anonymous_3 *d, struct anonymous_4 *a);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_7 *, const union anonymous_6 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_7 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_7 *);
// pthread_mutexattr_destroy
// file /usr/include/pthread.h line 812
extern signed int pthread_mutexattr_destroy(union anonymous_6 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous_6 *);
// pthread_mutexattr_settype
// file /usr/include/pthread.h line 835
extern signed int pthread_mutexattr_settype(union anonymous_6 *, signed int);
// pthread_once
// file /usr/include/pthread.h line 496
extern signed int pthread_once(signed int *, void (*)(void));
// pthread_rwlock_init
// file /usr/include/pthread.h line 890
extern signed int pthread_rwlock_init(union anonymous_0 *, const union anonymous_2 *);
// pthread_rwlock_rdlock
// file /usr/include/pthread.h line 899
extern signed int pthread_rwlock_rdlock(union anonymous_0 *);
// pthread_rwlock_unlock
// file /usr/include/pthread.h line 929
extern signed int pthread_rwlock_unlock(union anonymous_0 *);
// pthread_rwlock_wrlock
// file /usr/include/pthread.h line 914
extern signed int pthread_rwlock_wrlock(union anonymous_0 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// random_account
// file test-lock.c line 111
static signed int random_account(void);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// reclock_checker_thread
// file test-lock.c line 362
static void * reclock_checker_thread(void *arg);
// reclock_mutator_thread
// file test-lock.c line 338
static void * reclock_mutator_thread(void *arg);
// recshuffle
// file test-lock.c line 314
static void recshuffle(void);
// rpl_fgetfilecon
// file getfilecon.c line 82
extern signed int rpl_fgetfilecon(signed int fd, char **con);
// rpl_getfilecon
// file getfilecon.c line 68
extern signed int rpl_getfilecon(const char *file, char **con);
// rpl_lgetfilecon
// file getfilecon.c line 75
extern signed int rpl_lgetfilecon(const char *file, char **con);
// rwlock_checker_thread
// file test-lock.c line 260
static void * rwlock_checker_thread(void *arg);
// rwlock_mutator_thread
// file test-lock.c line 228
static void * rwlock_mutator_thread(void *arg);
// safe_alloc_alloc_n
// file safe-alloc.c line 63
signed int safe_alloc_alloc_n(void *ptrptr, unsigned long int size, unsigned long int count, signed int zeroed);
// safe_alloc_realloc_n
// file safe-alloc.c line 102
signed int safe_alloc_realloc_n(void *ptrptr, unsigned long int size, unsigned long int count);
// sched_yield
// file /usr/include/sched.h line 65
extern signed int sched_yield(void);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// string_hash
// file localename.c line 2519
static unsigned long int string_hash(const void *x);
// string_hash_link1
// file localename.c line 2519
static unsigned long int string_hash_link1(const void *x_link1);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strnlen1
// file strnlen1.c line 28
extern unsigned long int strnlen1(const char *string, unsigned long int maxlen);
// struniq
// file localename.c line 2551
static const char * struniq(const char *string);
// struniq_link1
// file localename.c line 2551
static const char * struniq_link1(const char *string_link1);
// test_lock
// file test-lock.c line 194
static void test_lock(void);
// test_once
// file test-lock.c line 469
static void test_once(void);
// test_recursive_lock
// file test-lock.c line 380
static void test_recursive_lock(void);
// test_rwlock
// file test-lock.c line 278
static void test_rwlock(void);
// ungetc
// file /usr/include/stdio.h line 702
extern signed int ungetc(signed int, struct _IO_FILE *);
// uselocale
// file /usr/include/locale.h line 197
extern struct __locale_struct * uselocale(struct __locale_struct *);
// vasnprintf
// file vasnprintf.h line 72
extern char * vasnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, void **args);
// xmax
// file xsize.h line 86
static inline unsigned long int xmax(unsigned long int size1, unsigned long int size2);
// xsum
// file xsize.h line 55
static inline unsigned long int xsum(unsigned long int size1, unsigned long int size2);
// xsum_link1
// file xsize.h line 55
static inline unsigned long int xsum_link1(unsigned long int size1_link1, unsigned long int size2_link1);
// xsum4
// file xsize.h line 76
static inline unsigned long int xsum4(unsigned long int size1, unsigned long int size2, unsigned long int size3, unsigned long int size4);

struct anonymous_8
{
  // dir_start
  const char *dir_start;
  // dir_end
  const char *dir_end;
  // flags
  signed int flags;
  // width_start
  const char *width_start;
  // width_end
  const char *width_end;
  // width_arg_index
  unsigned long int width_arg_index;
  // precision_start
  const char *precision_start;
  // precision_end
  const char *precision_end;
  // precision_arg_index
  unsigned long int precision_arg_index;
  // conversion
  char conversion;
  // arg_index
  unsigned long int arg_index;
};

union anonymous_9
{
  // a_schar
  signed char a_schar;
  // a_uchar
  unsigned char a_uchar;
  // a_short
  signed short int a_short;
  // a_ushort
  unsigned short int a_ushort;
  // a_int
  signed int a_int;
  // a_uint
  unsigned int a_uint;
  // a_longint
  signed long int a_longint;
  // a_ulongint
  unsigned long int a_ulongint;
  // a_longlongint
  signed long long int a_longlongint;
  // a_ulonglongint
  unsigned long long int a_ulonglongint;
  // a_float
  float a_float;
  // a_double
  double a_double;
  // a_longdouble
  long double a_longdouble;
  // a_char
  signed int a_char;
  // a_wide_char
  unsigned int a_wide_char;
  // a_string
  const char *a_string;
  // a_wide_string
  const signed int *a_wide_string;
  // a_pointer
  void *a_pointer;
  // a_count_schar_pointer
  signed char *a_count_schar_pointer;
  // a_count_short_pointer
  signed short int *a_count_short_pointer;
  // a_count_int_pointer
  signed int *a_count_int_pointer;
  // a_count_longint_pointer
  signed long int *a_count_longint_pointer;
  // a_count_longlongint_pointer
  signed long long int *a_count_longlongint_pointer;
};

struct anonymous_1
{
  // type
  enum anonymous_5 type;
  // a
  union anonymous_9 a;
};

struct anonymous
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

struct anonymous_3
{
  // count
  unsigned long int count;
  // dir
  struct anonymous_8 *dir;
  // max_width_length
  unsigned long int max_width_length;
  // max_precision_length
  unsigned long int max_precision_length;
  // direct_alloc_dir
  struct anonymous_8 direct_alloc_dir[7l];
};

struct anonymous_4
{
  // count
  unsigned long int count;
  // arg
  struct anonymous_1 *arg;
  // direct_alloc_arg
  struct anonymous_1 direct_alloc_arg[7l];
};

union anonymous_6
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_2
{
  // __size
  char __size[8l];
  // __align
  signed long int __align;
};

union anonymous_0
{
  // __data
  struct anonymous __data;
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

struct __locale_struct
{
  // __locales
  struct __locale_data *__locales[13l];
  // __ctype_b
  const unsigned short int *__ctype_b;
  // __ctype_tolower
  const signed int *__ctype_tolower;
  // __ctype_toupper
  const signed int *__ctype_toupper;
  // __names
  const char *__names[13l];
};

struct hash_node
{
  // next
  struct hash_node * volatile next;
  // contents
  char contents[100l];
};

struct header
{
  // next
  void *next;
  // room
  char room[4l];
};

struct preliminary_header
{
  // next
  void *next;
  // room
  char room[(signed long int)sizeof(signed int) /*4l*/ ];
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


// account
// file test-lock.c line 108
static signed int account[4l];
// charset_aliases
// file localcharset.c line 114
static const char * volatile charset_aliases;
// fire_signal
// file test-lock.c line 414
static union anonymous_0 fire_signal[50000l];
// fresh_once
// file test-lock.c line 410
static signed int fresh_once = 0;
// fresh_once_link1
// file glthread/lock.c line 454
static const signed int fresh_once_link1 = 0;
// fresh_once_link2
// file glthread/lock.c line 454
static const signed int fresh_once_link2 = 0;
// letters
// file tempname.c line 179
static const char letters[63l] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0 };
// lock_checker_done
// file test-lock.c line 173
static volatile signed int lock_checker_done;
// mmalloca_results
// file malloca.c line 63
static void *mmalloca_results[257l];
// my_lock
// file test-lock.c line 135
static union anonymous_7 my_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// my_reclock
// file test-lock.c line 311
static union anonymous_7 my_reclock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=1, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// my_rwlock
// file test-lock.c line 225
static union anonymous_0 my_rwlock = { .__data={ .__lock=0, .__nr_readers=(unsigned int)0, .__readers_wakeup=(unsigned int)0,
    .__writer_wakeup=(unsigned int)0, .__nr_readers_queued=(unsigned int)0,
    .__nr_writers_queued=(unsigned int)0,
    .__writer=0,
    .__shared=0, .__rwelision=(signed char)0, .__pad1={ (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 },
    .__pad2=(unsigned long int)0,
    .__flags=(unsigned int)0 } };
// once_control
// file test-lock.c line 418
static signed int once_control;
// performed
// file test-lock.c line 419
static signed int performed;
// performed_lock
// file test-lock.c line 420
static union anonymous_7 performed_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// ready
// file test-lock.c line 411
static signed int ready[10l];
// ready_lock
// file test-lock.c line 412
static union anonymous_7 ready_lock[10l];
// reclock_checker_done
// file test-lock.c line 359
static volatile signed int reclock_checker_done;
// rwlock_checker_done
// file test-lock.c line 257
static volatile signed int rwlock_checker_done;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// struniq_hash_table
// file localename.c line 2541
static struct hash_node * volatile struniq_hash_table[257l];
// struniq_hash_table_link1
// file localename.c line 2541
static struct hash_node * volatile struniq_hash_table_link1[257l];
// struniq_lock
// file localename.c line 2546
static union anonymous_7 struniq_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// struniq_lock_link1
// file localename.c line 2546
static union anonymous_7 struniq_lock_link1 = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };

// asnprintf
// file asnprintf.c line 25
extern char * asnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, ...)
{
  void **args;
  char *result;
  args = (void **)&format;
  result=vasnprintf(resultbuf, lengthp, format, args);
  args = ((void **)NULL);
  return result;
}

// c_isalnum
// file c-ctype.c line 33
extern _Bool c_isalnum(signed int c)
{
  return c >= 48 && c <= 57 || (c & ~0x20) >= 65 && (c & ~0x20) <= 90;
}

// c_isalpha
// file c-ctype.c line 68
extern _Bool c_isalpha(signed int c)
{
  return (c & ~0x20) >= 65 && (c & ~0x20) <= 90;
}

// c_isascii
// file c-ctype.c line 27
extern _Bool c_isascii(signed int c)
{
  return c >= 0x00 && c <= 0x7f;
}

// c_isblank
// file c-ctype.c line 97
extern _Bool c_isblank(signed int c)
{
  return c == 32 || c == 9;
}

// c_iscntrl
// file c-ctype.c line 103
extern _Bool c_iscntrl(signed int c)
{
  return (c & ~0x1f) == 0 || c == 0x7f;
}

// c_isdigit
// file c-ctype.c line 137
extern _Bool c_isdigit(signed int c)
{
  return c >= 48 && c <= 57;
}

// c_isgraph
// file c-ctype.c line 174
extern _Bool c_isgraph(signed int c)
{
  return c >= 33 && c <= 126;
}

// c_islower
// file c-ctype.c line 154
extern _Bool c_islower(signed int c)
{
  return c >= 97 && c <= 122;
}

// c_isprint
// file c-ctype.c line 208
extern _Bool c_isprint(signed int c)
{
  return c >= 32 && c <= 126;
}

// c_ispunct
// file c-ctype.c line 242
extern _Bool c_ispunct(signed int c)
{
  return c >= 33 && c <= 126 && !(c >= 48 && c <= 57 || (c & ~0x20) >= 65 && (c & ~0x20) <= 90);
}

// c_isspace
// file c-ctype.c line 266
extern _Bool c_isspace(signed int c)
{
  return c == 32 || c == 9 || c == 10 || c == 11 || c == 12 || c == 13;
}

// c_isupper
// file c-ctype.c line 273
extern _Bool c_isupper(signed int c)
{
  return c >= 65 && c <= 90;
}

// c_isxdigit
// file c-ctype.c line 293
extern _Bool c_isxdigit(signed int c)
{
  return c >= 48 && c <= 57 || (c & ~0x20) >= 65 && (c & ~0x20) <= 70;
}

// c_strcasecmp
// file c-strcasecmp.c line 27
extern signed int c_strcasecmp(const char *s1, const char *s2)
{
  const unsigned char *p1 = (const unsigned char *)s1;
  const unsigned char *p2 = (const unsigned char *)s2;
  unsigned char c1;
  unsigned char c2;
  if(p1 == p2)
    return 0;

  else
  {
    do
    {
      signed int return_value_c_tolower_1;
      return_value_c_tolower_1=c_tolower((signed int)*p1);
      c1 = (unsigned char)return_value_c_tolower_1;
      signed int return_value_c_tolower_2;
      return_value_c_tolower_2=c_tolower((signed int)*p2);
      c2 = (unsigned char)return_value_c_tolower_2;
      if((signed int)c1 == 0)
        break;

      p1 = p1 + 1l;
      p2 = p2 + 1l;
    }
    while(c1 == c2);
    return (signed int)c1 - (signed int)c2;
  }
}

// c_strncasecmp
// file c-strncasecmp.c line 27
extern signed int c_strncasecmp(const char *s1, const char *s2, unsigned long int n)
{
  const unsigned char *p1 = (const unsigned char *)s1;
  const unsigned char *p2 = (const unsigned char *)s2;
  unsigned char c1;
  unsigned char c2;
  if(p1 == p2 || n == 0ul)
    return 0;

  else
  {
    do
    {
      signed int return_value_c_tolower_1;
      return_value_c_tolower_1=c_tolower((signed int)*p1);
      c1 = (unsigned char)return_value_c_tolower_1;
      signed int return_value_c_tolower_2;
      return_value_c_tolower_2=c_tolower((signed int)*p2);
      c2 = (unsigned char)return_value_c_tolower_2;
      n = n - 1ul;
      if(n == 0ul || (signed int)c1 == 0)
        break;

      p1 = p1 + 1l;
      p2 = p2 + 1l;
    }
    while(c1 == c2);
    return (signed int)c1 - (signed int)c2;
  }
}

// c_tolower
// file c-ctype.c line 320
extern signed int c_tolower(signed int c)
{
  return c >= 65 && c <= 90 ? (c - 65) + 97 : c;
}

// c_toupper
// file c-ctype.c line 359
extern signed int c_toupper(signed int c)
{
  return c >= 97 && c <= 122 ? (c - 97) + 65 : c;
}

// check_accounts
// file test-lock.c line 117
static void check_accounts(void)
{
  signed int i;
  signed int sum = 0;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    sum = sum + account[(signed long int)i];
  if(!(sum == 4))
    abort();

}

// freea
// file malloca.c line 109
extern void freea(void *p)
{
  if(!(p == NULL))
  {
    if(((signed int *)p)[-1l] == 0x1415fb4a)
    {
      unsigned long int slot = (unsigned long int)p % (unsigned long int)257;
      void **chain = &mmalloca_results[(signed long int)slot];
      for( ; !(*chain == NULL); chain = &((struct header *)((char *)*chain - (signed long int)((((sizeof(struct preliminary_header) /*16ul*/  + (unsigned long int)16) - (unsigned long int)1) / (unsigned long int)16) * (unsigned long int)16)))->next)
        if(*chain == p)
        {
          char *p_begin = (char *)p - (signed long int)((((sizeof(struct preliminary_header) /*16ul*/  + (unsigned long int)16) - (unsigned long int)1) / (unsigned long int)16) * (unsigned long int)16);
          *chain = ((struct header *)p_begin)->next;
          free((void *)p_begin);
          goto __CPROVER_DUMP_L4;
        }

    }

  }


__CPROVER_DUMP_L4:
  ;
}

// gen_tempname
// file tempname.c line 196
extern signed int gen_tempname(char *tmpl, signed int suffixlen, signed int flags, signed int kind)
{
  signed int len;
  char *XXXXXX;
  unsigned long int random_time_bits;
  unsigned int count;
  signed int fd = -1;
  signed int save_errno;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  save_errno = *return_value___errno_location_1;
  struct stat st;
  unsigned int attempts = (unsigned int)(62 * 62 * 62);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(tmpl);
  len = (signed int)return_value_strlen_2;
  _Bool tmp_if_expr_5;
  signed int return_value_memcmp_4;
  if(!(len >= 6 + suffixlen))
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_memcmp_4=memcmp((const void *)&tmpl[(signed long int)((len - 6) - suffixlen)], (const void *)"XXXXXX", (unsigned long int)6);
    tmp_if_expr_5 = return_value_memcmp_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_5)
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 22;
    return -1;
  }

  XXXXXX = &tmpl[(signed long int)((len - 6) - suffixlen)];
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  random_time_bits = (unsigned long int)tv.tv_usec << 16 ^ (unsigned long int)tv.tv_sec;
  signed int return_value_getpid_6;
  return_value_getpid_6=getpid();
  static unsigned long int value;
  value = value + (random_time_bits ^ (unsigned long int)return_value_getpid_6);
  count = (unsigned int)0;
  signed int return_value_lstat_9;
  signed int *return_value___errno_location_11;
  for( ; !(count >= attempts); count = count + 1u)
  {
    unsigned long int v = value;
    XXXXXX[(signed long int)0] = letters[(signed long int)(v % (unsigned long int)62)];
    v = v / (unsigned long int)62;
    XXXXXX[(signed long int)1] = letters[(signed long int)(v % (unsigned long int)62)];
    v = v / (unsigned long int)62;
    XXXXXX[(signed long int)2] = letters[(signed long int)(v % (unsigned long int)62)];
    v = v / (unsigned long int)62;
    XXXXXX[(signed long int)3] = letters[(signed long int)(v % (unsigned long int)62)];
    v = v / (unsigned long int)62;
    XXXXXX[(signed long int)4] = letters[(signed long int)(v % (unsigned long int)62)];
    v = v / (unsigned long int)62;
    XXXXXX[(signed long int)5] = letters[(signed long int)(v % (unsigned long int)62)];
    switch(kind)
    {
      case 0:
      {
        fd=open(tmpl, flags & ~0003 | 02 | 0100 | 0200, 0400 | 0200);
        break;
      }
      case 1:
      {
        fd=mkdir(tmpl, (unsigned int)(0400 | 0200 | 0100));
        break;
      }
      case 2:
      {
        return_value_lstat_9=lstat(tmpl, &st);
        if(!(return_value_lstat_9 >= 0))
        {
          signed int *return_value___errno_location_8;
          return_value___errno_location_8=__errno_location();
          if(*return_value___errno_location_8 == 2)
          {
            signed int *return_value___errno_location_7;
            return_value___errno_location_7=__errno_location();
            *return_value___errno_location_7 = save_errno;
            return 0;
          }

          else
            return -1;
        }

        goto __CPROVER_DUMP_L15;
      }
      default:
      {
        /* assertion ! "invalid KIND in __gen_tempname" */
        assert(!((_Bool)"invalid KIND in __gen_tempname"));
        abort();
      }
    }
    if(fd >= 0)
    {
      signed int *return_value___errno_location_10;
      return_value___errno_location_10=__errno_location();
      *return_value___errno_location_10 = save_errno;
      return fd;
    }

    else
    {
      return_value___errno_location_11=__errno_location();
      if(!(*return_value___errno_location_11 == 17))
        return -1;

    }

  __CPROVER_DUMP_L15:
    ;
    value = value + (unsigned long int)7777;
  }
  signed int *return_value___errno_location_12;
  return_value___errno_location_12=__errno_location();
  *return_value___errno_location_12 = 17;
  return -1;
}

// get_charset_aliases
// file localcharset.c line 118
static const char * get_charset_aliases(void)
{
  const char *cp = charset_aliases;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  if(cp == ((const char *)NULL))
  {
    const char *dir;
    const char *base = "charset.alias";
    char *file_name;
    dir=getenv("CHARSETALIASDIR");
    if(dir == ((const char *)NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)dir[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      dir = "/usr/lib/x86_64-linux-gnu";

    unsigned long int dir_len;
    dir_len=strlen(dir);
    unsigned long int base_len;
    base_len=strlen(base);
    signed int add_slash;
    if(dir_len >= 1ul)
      tmp_if_expr_2 = !((signed int)dir[(signed long int)(dir_len - (unsigned long int)1)] == 47) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    add_slash = (signed int)tmp_if_expr_2;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc(dir_len + (unsigned long int)add_slash + base_len + (unsigned long int)1);
    file_name = (char *)return_value_malloc_3;
    if(!(file_name == ((char *)NULL)))
    {
      memcpy((void *)file_name, (const void *)dir, dir_len);
      if(!(add_slash == 0))
        file_name[(signed long int)dir_len] = (char)47;

      memcpy((void *)(file_name + (signed long int)dir_len + (signed long int)add_slash), (const void *)base, base_len + (unsigned long int)1);
    }

    if(file_name == ((char *)NULL))
      cp = "";

    else
    {
      signed int fd;
      fd=open(file_name, 00 | (1 != 0 ? 0400000 : 0));
      if(!(fd >= 0))
        cp = "";

      else
      {
        struct _IO_FILE *fp;
        fp=fdopen(fd, "r");
        if(fp == ((struct _IO_FILE *)NULL))
        {
          close(fd);
          cp = "";
        }

        else
        {
          char *res_ptr = (char *)(void *)0;
          unsigned long int res_size = (unsigned long int)0;
          do
          {
            signed int c;
            char buf1[51l];
            char buf2[51l];
            unsigned long int l1;
            unsigned long int l2;
            char *old_res_ptr;
            c=getc_unlocked(fp);
            if(c == -1)
              break;

            if(!(c == 9) && !(c == 10) && !(c == 32))
            {
              if(c == 35)
              {
                do
                  c=getc_unlocked(fp);
                while(!(c == 10) && !(c == -1));
                if(c == -1)
                  break;

              }

              else
              {
                ungetc(c, fp);
                signed int return_value_fscanf_4;
                return_value_fscanf_4=fscanf(fp, "%50s %50s", (const void *)buf1, (const void *)buf2);
                if(!(return_value_fscanf_4 >= 2))
                  break;

                l1=strlen(buf1);
                l2=strlen(buf2);
                old_res_ptr = res_ptr;
                if(res_size == 0ul)
                {
                  res_size = l1 + (unsigned long int)1 + l2 + (unsigned long int)1;
                  void *return_value_malloc_5;
                  return_value_malloc_5=malloc(res_size + (unsigned long int)1);
                  res_ptr = (char *)return_value_malloc_5;
                }

                else
                {
                  res_size = res_size + l1 + (unsigned long int)1 + l2 + (unsigned long int)1;
                  void *return_value_realloc_6;
                  return_value_realloc_6=realloc((void *)res_ptr, res_size + (unsigned long int)1);
                  res_ptr = (char *)return_value_realloc_6;
                }
                if(res_ptr == ((char *)NULL))
                {
                  res_size = (unsigned long int)0;
                  free((void *)old_res_ptr);
                  break;
                }

                strcpy(((res_ptr + (signed long int)res_size) - (signed long int)(l2 + (unsigned long int)1)) - (signed long int)(l1 + (unsigned long int)1), buf1);
                strcpy((res_ptr + (signed long int)res_size) - (signed long int)(l2 + (unsigned long int)1), buf2);
              }
            }

          }
          while((_Bool)1);
          fclose(fp);
          if(res_size == 0ul)
            cp = "";

          else
          {
            res_ptr[(signed long int)res_size] = (char)0;
            cp = res_ptr;
          }
        }
      }
      free((void *)file_name);
    }
    charset_aliases = cp;
  }

  return cp;
}

// gl_locale_name
// file localename.c line 2944
extern const char * gl_locale_name(signed int category, const char *categoryname)
{
  const char *retval;
  retval=gl_locale_name_thread(category, categoryname);
  if(!(retval == ((const char *)NULL)))
    return retval;

  else
  {
    retval=gl_locale_name_posix(category, categoryname);
    if(!(retval == ((const char *)NULL)))
      return retval;

    else
    {
      const char *return_value_gl_locale_name_default_1;
      return_value_gl_locale_name_default_1=gl_locale_name_default();
      return return_value_gl_locale_name_default_1;
    }
  }
}

// gl_locale_name_default
// file localename.c line 2839
extern const char * gl_locale_name_default(void)
{
  return "C";
}

// gl_locale_name_environ
// file localename.c line 2806
extern const char * gl_locale_name_environ(signed int category, const char *categoryname)
{
  const char *retval;
  retval=getenv("LC_ALL");
  if(!(retval == ((const char *)NULL)))
  {
    if((signed int)*retval == 0)
      goto __CPROVER_DUMP_L1;

    return retval;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    retval=getenv(categoryname);
    if(!(retval == ((const char *)NULL)))
    {
      if((signed int)*retval == 0)
        goto __CPROVER_DUMP_L2;

      return retval;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      retval=getenv("LANG");
      if(!(retval == ((const char *)NULL)))
      {
        if((signed int)*retval == 0)
          goto __CPROVER_DUMP_L3;

        return retval;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        return (const char *)(void *)0;
      }
    }
  }
}

// gl_locale_name_posix
// file localename.c line 2777
extern const char * gl_locale_name_posix(signed int category, const char *categoryname)
{
  char *return_value_setlocale_1;
  return_value_setlocale_1=setlocale(category, (const char *)(void *)0);
  return return_value_setlocale_1;
}

// gl_locale_name_thread
// file localename.c line 2756
extern const char * gl_locale_name_thread(signed int category, const char *categoryname)
{
  const char *name;
  name=gl_locale_name_thread_unsafe(category, categoryname);
  const char *return_value_struniq_1;
  if(!(name == ((const char *)NULL)))
  {
    return_value_struniq_1=struniq(name);
    return return_value_struniq_1;
  }

  else
    return (const char *)(void *)0;
}

// gl_locale_name_thread_unsafe
// file localename.c line 2601
static const char * gl_locale_name_thread_unsafe(signed int category, const char *categoryname)
{
  struct __locale_struct *thread_locale;
  thread_locale=uselocale((struct __locale_struct *)(void *)0);
  if(!(thread_locale == (struct __locale_struct *)-1l))
  {
    const char *name;
    name=nl_langinfo(category << 16 | (signed int)-1 & 0xffff);
    if((signed int)*name == 0)
      name = thread_locale->__names[(signed long int)category];

    return name;
  }

  return (const char *)(void *)0;
}

// gl_locale_name_thread_unsafe_link1
// file localename.c line 2601
static const char * gl_locale_name_thread_unsafe_link1(signed int category_link1, const char *categoryname_link1)
{
  struct __locale_struct *thread_locale_link1;
  thread_locale_link1=uselocale((struct __locale_struct *)(void *)0);
  if(!(thread_locale_link1 == (struct __locale_struct *)-1l))
  {
    const char *name_link1;
    name_link1=nl_langinfo(category_link1 << 16 | (signed int)-1 & 0xffff);
    if((signed int)*name_link1 == 0)
      name_link1 = thread_locale_link1->__names[(signed long int)category_link1];

    return name_link1;
  }

  return (const char *)(void *)0;
}

// gl_thread_create
// file glthread/thread.h line 364
static inline unsigned long int gl_thread_create(void * (*func)(void *), void *arg)
{
  unsigned long int thread;
  signed int ret;
  signed int return_value_pthread_create_1;
  return_value_pthread_create_1=pthread_create(&thread, (const union pthread_attr_t *)(void *)0, func, arg);
  ret = return_value_pthread_create_1;
  if(!(ret == 0))
    abort();

  return thread;
}

// glthread_once_singlethreaded
// file glthread/lock.h line 369
extern signed int glthread_once_singlethreaded(signed int *once_control)
{
  char *firstbyte = (char *)once_control;
  if(*firstbyte == *((const char *)&fresh_once_link1))
  {
    *firstbyte = (char)~((signed int)*((const char *)&fresh_once_link1));
    return 1;
  }

  else
    return 0;
}

// glthread_recursive_lock_init_multithreaded
// file glthread/lock.c line 284
extern signed int glthread_recursive_lock_init_multithreaded(union anonymous_7 *lock)
{
  union anonymous_6 attributes;
  signed int err;
  err=pthread_mutexattr_init(&attributes);
  if(!(err == 0))
    return err;

  else
  {
    err=pthread_mutexattr_settype(&attributes, 1);
    if(!(err == 0))
    {
      pthread_mutexattr_destroy(&attributes);
      return err;
    }

    else
    {
      err=pthread_mutex_init(lock, &attributes);
      if(!(err == 0))
      {
        pthread_mutexattr_destroy(&attributes);
        return err;
      }

      else
      {
        err=pthread_mutexattr_destroy(&attributes);
        if(!(err == 0))
          return err;

        else
          return 0;
      }
    }
  }
}

// locale_charset
// file localcharset.c line 357
extern const char * locale_charset(void)
{
  const char *codeset;
  const char *aliases;
  codeset=nl_langinfo(14);
  if(codeset == ((const char *)NULL))
    codeset = "";

  aliases=get_charset_aliases();
  signed int return_value_strcmp_4;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  unsigned long int return_value_strlen_1;
  unsigned long int return_value_strlen_2;
  for( ; !((signed int)*aliases == 0); aliases = aliases + (signed long int)(return_value_strlen_2 + (unsigned long int)1))
  {
    return_value_strcmp_4=strcmp(codeset, aliases);
    if(return_value_strcmp_4 == 0)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      if((signed int)*aliases == 42)
        tmp_if_expr_5 = (signed int)aliases[(signed long int)1] == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
    {
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(aliases);
      codeset = aliases + (signed long int)return_value_strlen_3 + (signed long int)1;
      break;
    }

    return_value_strlen_1=strlen(aliases);
    aliases = aliases + (signed long int)(return_value_strlen_1 + (unsigned long int)1);
    return_value_strlen_2=strlen(aliases);
  }
  if((signed int)*codeset == 0)
    codeset = "ASCII";

  return codeset;
}

// lock_checker_thread
// file test-lock.c line 176
static void * lock_checker_thread(void *arg)
{
  unsigned long int return_value_pthread_self_1;
  unsigned long int return_value_pthread_self_4;
  while(lock_checker_done == 0)
  {
    do
    {
      signed int return_value_pthread_mutex_lock_2;
      return_value_pthread_mutex_lock_2=pthread_mutex_lock(&my_lock);
      if(!(return_value_pthread_mutex_lock_2 == 0))
        abort();

    }
    while((_Bool)0);
    check_accounts();
    do
    {
      signed int return_value_pthread_mutex_unlock_3;
      return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&my_lock);
      if(!(return_value_pthread_mutex_unlock_3 == 0))
        abort();

    }
    while((_Bool)0);
    sched_yield();
  }
  unsigned long int return_value_pthread_self_5;
  return (void *)0;
}

// lock_mutator_thread
// file test-lock.c line 138
static void * lock_mutator_thread(void *arg)
{
  signed int repeat = 50000;
  unsigned long int return_value_pthread_self_1;
  unsigned long int return_value_pthread_self_3;
  unsigned long int return_value_pthread_self_5;
  unsigned long int return_value_pthread_self_7;
  unsigned long int return_value_pthread_self_8;
  unsigned long int return_value_pthread_self_11;
  for( ; repeat >= 1; repeat = repeat - 1)
  {
    signed int i1;
    signed int i2;
    signed int value;
    do
    {
      signed int return_value_pthread_mutex_lock_2;
      return_value_pthread_mutex_lock_2=pthread_mutex_lock(&my_lock);
      if(!(return_value_pthread_mutex_lock_2 == 0))
        abort();

    }
    while((_Bool)0);
    i1=random_account();
    i2=random_account();
    signed int return_value_rand_4;
    return_value_rand_4=rand();
    value = (signed int)(((unsigned int)return_value_rand_4 >> 3) % (unsigned int)10);
    account[(signed long int)i1] = account[(signed long int)i1] + value;
    account[(signed long int)i2] = account[(signed long int)i2] - value;
    do
    {
      signed int return_value_pthread_mutex_unlock_6;
      return_value_pthread_mutex_unlock_6=pthread_mutex_unlock(&my_lock);
      if(!(return_value_pthread_mutex_unlock_6 == 0))
        abort();

    }
    while((_Bool)0);
    do
    {
      signed int return_value_pthread_mutex_lock_9;
      return_value_pthread_mutex_lock_9=pthread_mutex_lock(&my_lock);
      if(!(return_value_pthread_mutex_lock_9 == 0))
        abort();

    }
    while((_Bool)0);
    check_accounts();
    do
    {
      signed int return_value_pthread_mutex_unlock_10;
      return_value_pthread_mutex_unlock_10=pthread_mutex_unlock(&my_lock);
      if(!(return_value_pthread_mutex_unlock_10 == 0))
        abort();

    }
    while((_Bool)0);
    sched_yield();
  }
  unsigned long int return_value_pthread_self_12;
  return (void *)0;
}

// main
// file test-lock.c line 557
signed int main()
{
  printf("Starting test_lock ...");
  fflush(stdout);
  test_lock();
  printf(" OK\n");
  fflush(stdout);
  printf("Starting test_rwlock ...");
  fflush(stdout);
  test_rwlock();
  printf(" OK\n");
  fflush(stdout);
  printf("Starting test_recursive_lock ...");
  fflush(stdout);
  test_recursive_lock();
  printf(" OK\n");
  fflush(stdout);
  printf("Starting test_once ...");
  fflush(stdout);
  test_once();
  printf(" OK\n");
  fflush(stdout);
  return 0;
}

// map_to_failure
// file getfilecon.c line 49
static inline signed int map_to_failure(signed int ret, char **con)
{
  if(ret == 0)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 95;
    return -1;
  }

  signed int return_value_strcmp_3;
  if(ret == 10)
  {
    return_value_strcmp_3=strcmp(*con, "unlabeled");
    if(return_value_strcmp_3 == 0)
    {
      freecon(*con);
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = 61;
      return -1;
    }

  }

  return ret;
}

// mmalloca
// file malloca.c line 68
extern void * mmalloca(unsigned long int n)
{
  unsigned long int nplus = n + (((sizeof(struct preliminary_header) /*16ul*/  + (unsigned long int)16) - (unsigned long int)1) / (unsigned long int)16) * (unsigned long int)16;
  if(nplus >= n)
  {
    char *p;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(nplus);
    p = (char *)return_value_malloc_1;
    if(!(p == ((char *)NULL)))
    {
      unsigned long int slot;
      p = p + (signed long int)((((sizeof(struct preliminary_header) /*16ul*/  + (unsigned long int)16) - (unsigned long int)1) / (unsigned long int)16) * (unsigned long int)16);
      ((signed int *)p)[(signed long int)-1] = 0x1415fb4a;
      slot = (unsigned long int)p % (unsigned long int)257;
      ((struct header *)(p - (signed long int)((((sizeof(struct preliminary_header) /*16ul*/  + (unsigned long int)16) - (unsigned long int)1) / (unsigned long int)16) * (unsigned long int)16)))->next = mmalloca_results[(signed long int)slot];
      mmalloca_results[(signed long int)slot] = (void *)p;
      return (void *)p;
    }

  }

  return (void *)0;
}

// once_contender_thread
// file test-lock.c line 431
static void * once_contender_thread(void *arg)
{
  signed int id = (signed int)(signed long int)arg;
  signed int repeat = 0;
  unsigned long int return_value_pthread_self_3;
  unsigned long int return_value_pthread_self_6;
  for( ; !(repeat >= 50001); repeat = repeat + 1)
  {
    do
    {
      signed int return_value_pthread_mutex_lock_1;
      return_value_pthread_mutex_lock_1=pthread_mutex_lock(&ready_lock[(signed long int)id]);
      if(!(return_value_pthread_mutex_lock_1 == 0))
        abort();

    }
    while((_Bool)0);
    ready[(signed long int)id] = 1;
    do
    {
      signed int return_value_pthread_mutex_unlock_2;
      return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&ready_lock[(signed long int)id]);
      if(!(return_value_pthread_mutex_unlock_2 == 0))
        abort();

    }
    while((_Bool)0);
    if(repeat == 50000)
      break;

    do
    {
      signed int return_value_pthread_rwlock_rdlock_4;
      return_value_pthread_rwlock_rdlock_4=pthread_rwlock_rdlock(&fire_signal[(signed long int)repeat]);
      if(!(return_value_pthread_rwlock_rdlock_4 == 0))
        abort();

    }
    while((_Bool)0);
    do
    {
      signed int return_value_pthread_rwlock_unlock_5;
      return_value_pthread_rwlock_unlock_5=pthread_rwlock_unlock(&fire_signal[(signed long int)repeat]);
      if(!(return_value_pthread_rwlock_unlock_5 == 0))
        abort();

    }
    while((_Bool)0);
    do
    {
      signed int return_value_pthread_once_7;
      return_value_pthread_once_7=pthread_once(&once_control, once_execute);
      if(!(return_value_pthread_once_7 == 0))
        abort();

    }
    while((_Bool)0);
  }
  return (void *)0;
}

// once_execute
// file test-lock.c line 423
static void once_execute(void)
{
  do
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&performed_lock);
    if(!(return_value_pthread_mutex_lock_1 == 0))
      abort();

  }
  while((_Bool)0);
  performed = performed + 1;
  do
  {
    signed int return_value_pthread_mutex_unlock_2;
    return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&performed_lock);
    if(!(return_value_pthread_mutex_unlock_2 == 0))
      abort();

  }
  while((_Bool)0);
}

// printf_fetchargs
// file printf-args.c line 36
extern signed int printf_fetchargs(__builtin_va_list args, struct anonymous_4 *a)
{
  unsigned long int i;
  struct anonymous_1 *ap;
  i = (unsigned long int)0;
  ap = &a->arg[(signed long int)0];
  signed int return_value_gcc_builtin_va_arg_1;
  signed int return_value_gcc_builtin_va_arg_2;
  signed int return_value_gcc_builtin_va_arg_3;
  signed int return_value_gcc_builtin_va_arg_4;
  unsigned int return_value_gcc_builtin_va_arg_5;
  for( ; !(i >= a->count); ap = ap + 1l)
  {
    switch((signed int)ap->type)
    {
      case TYPE_SCHAR:
      {
        return_value_gcc_builtin_va_arg_1=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_1));
        ap->a.a_schar = (signed char)return_value_gcc_builtin_va_arg_1;
        break;
      }
      case TYPE_UCHAR:
      {
        return_value_gcc_builtin_va_arg_2=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_2));
        ap->a.a_uchar = (unsigned char)return_value_gcc_builtin_va_arg_2;
        break;
      }
      case TYPE_SHORT:
      {
        return_value_gcc_builtin_va_arg_3=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_3));
        ap->a.a_short = (signed short int)return_value_gcc_builtin_va_arg_3;
        break;
      }
      case TYPE_USHORT:
      {
        return_value_gcc_builtin_va_arg_4=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_4));
        ap->a.a_ushort = (unsigned short int)return_value_gcc_builtin_va_arg_4;
        break;
      }
      case TYPE_INT:
      {
        ap->a.a_int=va_arg(args, __typeof__(ap->a.a_int));
        break;
      }
      case TYPE_UINT:
      {
        ap->a.a_uint=va_arg(args, __typeof__(ap->a.a_uint));
        break;
      }
      case TYPE_LONGINT:
      {
        ap->a.a_longint=va_arg(args, __typeof__(ap->a.a_longint));
        break;
      }
      case TYPE_ULONGINT:
      {
        ap->a.a_ulongint=va_arg(args, __typeof__(ap->a.a_ulongint));
        break;
      }
      case TYPE_LONGLONGINT:
      {
        ap->a.a_longlongint=va_arg(args, __typeof__(ap->a.a_longlongint));
        break;
      }
      case TYPE_ULONGLONGINT:
      {
        ap->a.a_ulonglongint=va_arg(args, __typeof__(ap->a.a_ulonglongint));
        break;
      }
      case TYPE_DOUBLE:
      {
        ap->a.a_double=va_arg(args, __typeof__(ap->a.a_double));
        break;
      }
      case TYPE_LONGDOUBLE:
      {
        ap->a.a_longdouble=va_arg(args, __typeof__(ap->a.a_longdouble));
        break;
      }
      case TYPE_CHAR:
      {
        ap->a.a_char=va_arg(args, __typeof__(ap->a.a_char));
        break;
      }
      case TYPE_WIDE_CHAR:
      {
        return_value_gcc_builtin_va_arg_5=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_5));
        ap->a.a_wide_char = return_value_gcc_builtin_va_arg_5;
        break;
      }
      case TYPE_STRING:
      {
        ap->a.a_string=va_arg(args, __typeof__(ap->a.a_string));
        if(ap->a.a_string == ((const char *)NULL))
          ap->a.a_string = "(NULL)";

        break;
      }
      case TYPE_WIDE_STRING:
      {
        ap->a.a_wide_string=va_arg(args, __typeof__(ap->a.a_wide_string));
        static const signed int wide_null_string[7l] = { (signed int)40, (signed int)78, (signed int)85, (signed int)76, (signed int)76, (signed int)41, (signed int)0 };
        if(ap->a.a_wide_string == ((const signed int *)NULL))
          ap->a.a_wide_string = wide_null_string;

        break;
      }
      case TYPE_POINTER:
      {
        ap->a.a_pointer=va_arg(args, __typeof__(ap->a.a_pointer));
        break;
      }
      case TYPE_COUNT_SCHAR_POINTER:
      {
        ap->a.a_count_schar_pointer=va_arg(args, __typeof__(ap->a.a_count_schar_pointer));
        break;
      }
      case TYPE_COUNT_SHORT_POINTER:
      {
        ap->a.a_count_short_pointer=va_arg(args, __typeof__(ap->a.a_count_short_pointer));
        break;
      }
      case TYPE_COUNT_INT_POINTER:
      {
        ap->a.a_count_int_pointer=va_arg(args, __typeof__(ap->a.a_count_int_pointer));
        break;
      }
      case TYPE_COUNT_LONGINT_POINTER:
      {
        ap->a.a_count_longint_pointer=va_arg(args, __typeof__(ap->a.a_count_longint_pointer));
        break;
      }
      case TYPE_COUNT_LONGLONGINT_POINTER:
      {
        ap->a.a_count_longlongint_pointer=va_arg(args, __typeof__(ap->a.a_count_longlongint_pointer));
        break;
      }
      default:
        return -1;
    }
    i = i + 1ul;
  }
  return 0;
}

// printf_parse
// file printf-parse.c line 83
extern signed int printf_parse(const char *format, struct anonymous_3 *d, struct anonymous_4 *a)
{
  const char *cp = format;
  unsigned long int arg_posn = (unsigned long int)0;
  unsigned long int d_allocated;
  unsigned long int a_allocated;
  unsigned long int max_width_length = (unsigned long int)0;
  unsigned long int max_precision_length = (unsigned long int)0;
  d->count = (unsigned long int)0;
  d_allocated = (unsigned long int)7;
  d->dir = d->direct_alloc_dir;
  a->count = (unsigned long int)0;
  a_allocated = (unsigned long int)7;
  a->arg = a->direct_alloc_arg;
  const char *tmp_post_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  unsigned long int tmp_post_6;
  void *tmp_if_expr_9;
  void *return_value_realloc_7;
  void *return_value_malloc_8;
  unsigned long int tmp_post_10;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  unsigned long int tmp_post_14;
  void *tmp_if_expr_17;
  void *return_value_realloc_15;
  void *return_value_malloc_16;
  unsigned long int tmp_post_18;
  _Bool tmp_if_expr_19;
  _Bool tmp_if_expr_20;
  const char *tmp_post_21;
  unsigned long int tmp_post_22;
  void *tmp_if_expr_25;
  void *return_value_realloc_23;
  void *return_value_malloc_24;
  unsigned long int tmp_post_26;
  void *tmp_if_expr_29;
  void *return_value_realloc_27;
  void *return_value_malloc_28;
  while(!((signed int)*cp == 0))
  {
    char c;
    tmp_post_1 = cp;
    cp = cp + 1l;
    c = *tmp_post_1;
    if((signed int)c == 37)
    {
      unsigned long int arg_index = ~((unsigned long int)0);
      struct anonymous_8 *dp = &d->dir[(signed long int)d->count];
      dp->dir_start = cp - (signed long int)1;
      dp->flags = 0;
      dp->width_start = (const char *)(void *)0;
      dp->width_end = (const char *)(void *)0;
      dp->width_arg_index = ~((unsigned long int)0);
      dp->precision_start = (const char *)(void *)0;
      dp->precision_end = (const char *)(void *)0;
      dp->precision_arg_index = ~((unsigned long int)0);
      dp->arg_index = ~((unsigned long int)0);
      if((signed int)*cp >= 48)
      {
        if(!((signed int)*cp >= 58))
        {
          const char *printf_parse__1__1__1__1__np = cp;
          do
          {
            if((signed int)*printf_parse__1__1__1__1__np >= 48)
              tmp_if_expr_2 = (signed int)*printf_parse__1__1__1__1__np <= 57 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_2 = (_Bool)0;
            if(!tmp_if_expr_2)
              break;

            printf_parse__1__1__1__1__np = printf_parse__1__1__1__1__np + 1l;
          }
          while((_Bool)1);
          if((signed int)*printf_parse__1__1__1__1__np == 36)
          {
            unsigned long int printf_parse__1__1__1__1__2__n = (unsigned long int)0;
            printf_parse__1__1__1__1__np = cp;
            do
            {
              if((signed int)*printf_parse__1__1__1__1__np >= 48)
                tmp_if_expr_3 = (signed int)*printf_parse__1__1__1__1__np <= 57 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_3 = (_Bool)0;
              if(!tmp_if_expr_3)
                break;

              printf_parse__1__1__1__1__2__n=xsum(printf_parse__1__1__1__1__2__n <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)printf_parse__1__1__1__1__2__n * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*printf_parse__1__1__1__1__np - 48));
              printf_parse__1__1__1__1__np = printf_parse__1__1__1__1__np + 1l;
            }
            while((_Bool)1);
            if(printf_parse__1__1__1__1__2__n == 0ul)
              goto error;

            if(printf_parse__1__1__1__1__2__n == 18446744073709551615UL)
              goto error;

            arg_index = printf_parse__1__1__1__1__2__n - (unsigned long int)1;
            cp = printf_parse__1__1__1__1__np + (signed long int)1;
          }

        }

      }

      while((_Bool)1)
        if((signed int)*cp == 39)
        {
          dp->flags = dp->flags | 1;
          cp = cp + 1l;
        }

        else
          if((signed int)*cp == 45)
          {
            dp->flags = dp->flags | 2;
            cp = cp + 1l;
          }

          else
            if((signed int)*cp == 43)
            {
              dp->flags = dp->flags | 4;
              cp = cp + 1l;
            }

            else
              if((signed int)*cp == 32)
              {
                dp->flags = dp->flags | 8;
                cp = cp + 1l;
              }

              else
                if((signed int)*cp == 35)
                {
                  dp->flags = dp->flags | 16;
                  cp = cp + 1l;
                }

                else
                  if((signed int)*cp == 48)
                  {
                    dp->flags = dp->flags | 32;
                    cp = cp + 1l;
                  }

                  else
                    if((signed int)*cp == 73)
                    {
                      dp->flags = dp->flags | 64;
                      cp = cp + 1l;
                    }

                    else
                      goto __CPROVER_DUMP_L20;

    __CPROVER_DUMP_L20:
      ;
      if((signed int)*cp == 42)
      {
        dp->width_start = cp;
        cp = cp + 1l;
        dp->width_end = cp;
        if(!(max_width_length >= 1ul))
          max_width_length = (unsigned long int)1;

        if((signed int)*cp >= 48)
        {
          if(!((signed int)*cp >= 58))
          {
            const char *printf_parse__1__1__1__3__1__np = cp;
            do
            {
              if((signed int)*printf_parse__1__1__1__3__1__np >= 48)
                tmp_if_expr_4 = (signed int)*printf_parse__1__1__1__3__1__np <= 57 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_4 = (_Bool)0;
              if(!tmp_if_expr_4)
                break;

              printf_parse__1__1__1__3__1__np = printf_parse__1__1__1__3__1__np + 1l;
            }
            while((_Bool)1);
            if((signed int)*printf_parse__1__1__1__3__1__np == 36)
            {
              unsigned long int printf_parse__1__1__1__3__1__2__n = (unsigned long int)0;
              printf_parse__1__1__1__3__1__np = cp;
              do
              {
                if((signed int)*printf_parse__1__1__1__3__1__np >= 48)
                  tmp_if_expr_5 = (signed int)*printf_parse__1__1__1__3__1__np <= 57 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_5 = (_Bool)0;
                if(!tmp_if_expr_5)
                  break;

                printf_parse__1__1__1__3__1__2__n=xsum(printf_parse__1__1__1__3__1__2__n <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)printf_parse__1__1__1__3__1__2__n * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*printf_parse__1__1__1__3__1__np - 48));
                printf_parse__1__1__1__3__1__np = printf_parse__1__1__1__3__1__np + 1l;
              }
              while((_Bool)1);
              if(printf_parse__1__1__1__3__1__2__n == 0ul)
                goto error;

              if(printf_parse__1__1__1__3__1__2__n == 18446744073709551615UL)
                goto error;

              dp->width_arg_index = printf_parse__1__1__1__3__1__2__n - (unsigned long int)1;
              cp = printf_parse__1__1__1__3__1__np + (signed long int)1;
            }

          }

        }

        if(dp->width_arg_index == 18446744073709551615ul)
        {
          tmp_post_6 = arg_posn;
          arg_posn = arg_posn + 1ul;
          dp->width_arg_index = tmp_post_6;
          if(dp->width_arg_index == 18446744073709551615ul)
            goto error;

        }

        unsigned long int printf_parse__1__1__1__3__3__n = dp->width_arg_index;
        if(printf_parse__1__1__1__3__3__n >= a_allocated)
        {
          unsigned long int printf_parse__1__1__1__3__3__1__memory_size;
          struct anonymous_1 *printf_parse__1__1__1__3__3__1__memory;
          a_allocated = a_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)a_allocated * (unsigned long int)2 : 18446744073709551615UL;
          if(printf_parse__1__1__1__3__3__n >= a_allocated)
            a_allocated=xsum(printf_parse__1__1__1__3__3__n, (unsigned long int)1);

          printf_parse__1__1__1__3__3__1__memory_size = a_allocated <= 18446744073709551615UL / sizeof(struct anonymous_1) /*32ul*/  ? (unsigned long int)a_allocated * sizeof(struct anonymous_1) /*32ul*/  : 18446744073709551615UL;
          if(printf_parse__1__1__1__3__3__1__memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(!(a->arg == a->direct_alloc_arg))
          {
            return_value_realloc_7=realloc((void *)a->arg, printf_parse__1__1__1__3__3__1__memory_size);
            tmp_if_expr_9 = return_value_realloc_7;
          }

          else
          {
            return_value_malloc_8=malloc(printf_parse__1__1__1__3__3__1__memory_size);
            tmp_if_expr_9 = return_value_malloc_8;
          }
          printf_parse__1__1__1__3__3__1__memory = (struct anonymous_1 *)tmp_if_expr_9;
          if(printf_parse__1__1__1__3__3__1__memory == ((struct anonymous_1 *)NULL))
            goto out_of_memory;

          if(a->arg == a->direct_alloc_arg)
            memcpy((void *)printf_parse__1__1__1__3__3__1__memory, (const void *)a->arg, a->count * sizeof(struct anonymous_1) /*32ul*/ );

          a->arg = printf_parse__1__1__1__3__3__1__memory;
        }

        for( ; printf_parse__1__1__1__3__3__n >= a->count; (a->arg + (signed long int)tmp_post_10)->type = (enum anonymous_5)TYPE_NONE)
        {
          tmp_post_10 = a->count;
          a->count = a->count + 1ul;
        }
        if((signed int)(a->arg + (signed long int)printf_parse__1__1__1__3__3__n)->type == TYPE_NONE)
          (a->arg + (signed long int)printf_parse__1__1__1__3__3__n)->type = (enum anonymous_5)TYPE_INT;

        else
          if(!((signed int)(a->arg + (signed long int)printf_parse__1__1__1__3__3__n)->type == TYPE_INT))
            goto error;

      }

      else
        if((signed int)*cp >= 48)
        {
          if(!((signed int)*cp >= 58))
          {
            unsigned long int width_length;
            dp->width_start = cp;
            do
            {
              if((signed int)*cp >= 48)
                tmp_if_expr_11 = (signed int)*cp <= 57 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_11 = (_Bool)0;
              if(!tmp_if_expr_11)
                break;

              cp = cp + 1l;
            }
            while((_Bool)1);
            dp->width_end = cp;
            width_length = (unsigned long int)(dp->width_end - dp->width_start);
            if(!(max_width_length >= width_length))
              max_width_length = width_length;

          }

        }

      if((signed int)*cp == 46)
      {
        cp = cp + 1l;
        if((signed int)*cp == 42)
        {
          dp->precision_start = cp - (signed long int)1;
          cp = cp + 1l;
          dp->precision_end = cp;
          if(!(max_precision_length >= 2ul))
            max_precision_length = (unsigned long int)2;

          if((signed int)*cp >= 48)
          {
            if(!((signed int)*cp >= 58))
            {
              const char *np = cp;
              do
              {
                if((signed int)*np >= 48)
                  tmp_if_expr_12 = (signed int)*np <= 57 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_12 = (_Bool)0;
                if(!tmp_if_expr_12)
                  break;

                np = np + 1l;
              }
              while((_Bool)1);
              if((signed int)*np == 36)
              {
                unsigned long int n = (unsigned long int)0;
                np = cp;
                do
                {
                  if((signed int)*np >= 48)
                    tmp_if_expr_13 = (signed int)*np <= 57 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr_13 = (_Bool)0;
                  if(!tmp_if_expr_13)
                    break;

                  n=xsum(n <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)n * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*np - 48));
                  np = np + 1l;
                }
                while((_Bool)1);
                if(n == 0ul)
                  goto error;

                if(n == 18446744073709551615UL)
                  goto error;

                dp->precision_arg_index = n - (unsigned long int)1;
                cp = np + (signed long int)1;
              }

            }

          }

          if(dp->precision_arg_index == 18446744073709551615ul)
          {
            tmp_post_14 = arg_posn;
            arg_posn = arg_posn + 1ul;
            dp->precision_arg_index = tmp_post_14;
            if(dp->precision_arg_index == 18446744073709551615ul)
              goto error;

          }

          unsigned long int printf_parse__1__1__1__5__1__3__n = dp->precision_arg_index;
          if(printf_parse__1__1__1__5__1__3__n >= a_allocated)
          {
            unsigned long int memory_size;
            struct anonymous_1 *memory;
            a_allocated = a_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)a_allocated * (unsigned long int)2 : 18446744073709551615UL;
            if(printf_parse__1__1__1__5__1__3__n >= a_allocated)
              a_allocated=xsum(printf_parse__1__1__1__5__1__3__n, (unsigned long int)1);

            memory_size = a_allocated <= 18446744073709551615UL / sizeof(struct anonymous_1) /*32ul*/  ? (unsigned long int)a_allocated * sizeof(struct anonymous_1) /*32ul*/  : 18446744073709551615UL;
            if(memory_size == 18446744073709551615UL)
              goto out_of_memory;

            if(!(a->arg == a->direct_alloc_arg))
            {
              return_value_realloc_15=realloc((void *)a->arg, memory_size);
              tmp_if_expr_17 = return_value_realloc_15;
            }

            else
            {
              return_value_malloc_16=malloc(memory_size);
              tmp_if_expr_17 = return_value_malloc_16;
            }
            memory = (struct anonymous_1 *)tmp_if_expr_17;
            if(memory == ((struct anonymous_1 *)NULL))
              goto out_of_memory;

            if(a->arg == a->direct_alloc_arg)
              memcpy((void *)memory, (const void *)a->arg, a->count * sizeof(struct anonymous_1) /*32ul*/ );

            a->arg = memory;
          }

          for( ; printf_parse__1__1__1__5__1__3__n >= a->count; (a->arg + (signed long int)tmp_post_18)->type = (enum anonymous_5)TYPE_NONE)
          {
            tmp_post_18 = a->count;
            a->count = a->count + 1ul;
          }
          if((signed int)(a->arg + (signed long int)printf_parse__1__1__1__5__1__3__n)->type == TYPE_NONE)
            (a->arg + (signed long int)printf_parse__1__1__1__5__1__3__n)->type = (enum anonymous_5)TYPE_INT;

          else
            if(!((signed int)(a->arg + (signed long int)printf_parse__1__1__1__5__1__3__n)->type == TYPE_INT))
              goto error;

        }

        else
        {
          unsigned long int precision_length;
          dp->precision_start = cp - (signed long int)1;
          do
          {
            if((signed int)*cp >= 48)
              tmp_if_expr_19 = (signed int)*cp <= 57 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_19 = (_Bool)0;
            if(!tmp_if_expr_19)
              break;

            cp = cp + 1l;
          }
          while((_Bool)1);
          dp->precision_end = cp;
          precision_length = (unsigned long int)(dp->precision_end - dp->precision_start);
          if(!(max_precision_length >= precision_length))
            max_precision_length = precision_length;

        }
      }

      enum anonymous_5 type;
      signed int flags = 0;
      while((_Bool)1)
        if((signed int)*cp == 104)
        {
          flags = flags | 1 << (flags & 1);
          cp = cp + 1l;
        }

        else
          if((signed int)*cp == 76)
          {
            flags = flags | 4;
            cp = cp + 1l;
          }

          else
            if((signed int)*cp == 108)
            {
              flags = flags + 8;
              cp = cp + 1l;
            }

            else
              if((signed int)*cp == 106)
              {
                flags = flags + 8;
                cp = cp + 1l;
              }

              else
              {
                if((signed int)*cp == 122)
                  tmp_if_expr_20 = (_Bool)1;

                else
                  tmp_if_expr_20 = (signed int)*cp == 90 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_20)
                {
                  flags = flags + 8;
                  cp = cp + 1l;
                }

                else
                  if((signed int)*cp == 116)
                  {
                    flags = flags + 8;
                    cp = cp + 1l;
                  }

                  else
                    goto __CPROVER_DUMP_L91;
              }

    __CPROVER_DUMP_L91:
      ;
      tmp_post_21 = cp;
      cp = cp + 1l;
      c = *tmp_post_21;
      switch((signed int)c)
      {
        case 100:

        case 105:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous_5)TYPE_LONGLONGINT;

          else
            if(flags >= 8)
              type = (enum anonymous_5)TYPE_LONGINT;

            else
              if(!((2 & flags) == 0))
                type = (enum anonymous_5)TYPE_SCHAR;

              else
                if(!((1 & flags) == 0))
                  type = (enum anonymous_5)TYPE_SHORT;

                else
                  type = (enum anonymous_5)TYPE_INT;
          break;
        }
        case 111:

        case 117:

        case 120:

        case 88:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous_5)TYPE_ULONGLONGINT;

          else
            if(flags >= 8)
              type = (enum anonymous_5)TYPE_ULONGINT;

            else
              if(!((2 & flags) == 0))
                type = (enum anonymous_5)TYPE_UCHAR;

              else
                if(!((1 & flags) == 0))
                  type = (enum anonymous_5)TYPE_USHORT;

                else
                  type = (enum anonymous_5)TYPE_UINT;
          break;
        }
        case 102:

        case 70:

        case 101:

        case 69:

        case 103:

        case 71:

        case 97:

        case 65:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous_5)TYPE_LONGDOUBLE;

          else
            type = (enum anonymous_5)TYPE_DOUBLE;
          break;
        }
        case 99:
        {
          if(flags >= 8)
            type = (enum anonymous_5)TYPE_WIDE_CHAR;

          else
            type = (enum anonymous_5)TYPE_CHAR;
          break;
        }
        case 67:
        {
          type = (enum anonymous_5)TYPE_WIDE_CHAR;
          c = (char)99;
          break;
        }
        case 115:
        {
          if(flags >= 8)
            type = (enum anonymous_5)TYPE_WIDE_STRING;

          else
            type = (enum anonymous_5)TYPE_STRING;
          break;
        }
        case 83:
        {
          type = (enum anonymous_5)TYPE_WIDE_STRING;
          c = (char)115;
          break;
        }
        case 112:
        {
          type = (enum anonymous_5)TYPE_POINTER;
          break;
        }
        case 110:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous_5)TYPE_COUNT_LONGLONGINT_POINTER;

          else
            if(flags >= 8)
              type = (enum anonymous_5)TYPE_COUNT_LONGINT_POINTER;

            else
              if(!((2 & flags) == 0))
                type = (enum anonymous_5)TYPE_COUNT_SCHAR_POINTER;

              else
                if(!((1 & flags) == 0))
                  type = (enum anonymous_5)TYPE_COUNT_SHORT_POINTER;

                else
                  type = (enum anonymous_5)TYPE_COUNT_INT_POINTER;
          break;
        }
        case 37:
        {
          type = (enum anonymous_5)TYPE_NONE;
          break;
        }
        default:
          goto error;
      }
      if(!((signed int)type == TYPE_NONE))
      {
        dp->arg_index = arg_index;
        if(dp->arg_index == 18446744073709551615ul)
        {
          tmp_post_22 = arg_posn;
          arg_posn = arg_posn + 1ul;
          dp->arg_index = tmp_post_22;
          if(dp->arg_index == 18446744073709551615ul)
            goto error;

        }

        unsigned long int printf_parse__1__1__1__6__2__2__n = dp->arg_index;
        if(printf_parse__1__1__1__6__2__2__n >= a_allocated)
        {
          unsigned long int printf_parse__1__1__1__6__2__2__1__memory_size;
          struct anonymous_1 *printf_parse__1__1__1__6__2__2__1__memory;
          a_allocated = a_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)a_allocated * (unsigned long int)2 : 18446744073709551615UL;
          if(printf_parse__1__1__1__6__2__2__n >= a_allocated)
            a_allocated=xsum(printf_parse__1__1__1__6__2__2__n, (unsigned long int)1);

          printf_parse__1__1__1__6__2__2__1__memory_size = a_allocated <= 18446744073709551615UL / sizeof(struct anonymous_1) /*32ul*/  ? (unsigned long int)a_allocated * sizeof(struct anonymous_1) /*32ul*/  : 18446744073709551615UL;
          if(printf_parse__1__1__1__6__2__2__1__memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(!(a->arg == a->direct_alloc_arg))
          {
            return_value_realloc_23=realloc((void *)a->arg, printf_parse__1__1__1__6__2__2__1__memory_size);
            tmp_if_expr_25 = return_value_realloc_23;
          }

          else
          {
            return_value_malloc_24=malloc(printf_parse__1__1__1__6__2__2__1__memory_size);
            tmp_if_expr_25 = return_value_malloc_24;
          }
          printf_parse__1__1__1__6__2__2__1__memory = (struct anonymous_1 *)tmp_if_expr_25;
          if(printf_parse__1__1__1__6__2__2__1__memory == ((struct anonymous_1 *)NULL))
            goto out_of_memory;

          if(a->arg == a->direct_alloc_arg)
            memcpy((void *)printf_parse__1__1__1__6__2__2__1__memory, (const void *)a->arg, a->count * sizeof(struct anonymous_1) /*32ul*/ );

          a->arg = printf_parse__1__1__1__6__2__2__1__memory;
        }

        for( ; printf_parse__1__1__1__6__2__2__n >= a->count; (a->arg + (signed long int)tmp_post_26)->type = (enum anonymous_5)TYPE_NONE)
        {
          tmp_post_26 = a->count;
          a->count = a->count + 1ul;
        }
        if((signed int)(a->arg + (signed long int)printf_parse__1__1__1__6__2__2__n)->type == TYPE_NONE)
          (a->arg + (signed long int)printf_parse__1__1__1__6__2__2__n)->type = type;

        else
          if(!((a->arg + (signed long int)printf_parse__1__1__1__6__2__2__n)->type == type))
            goto error;

      }

      dp->conversion = c;
      dp->dir_end = cp;
      d->count = d->count + 1ul;
      if(d->count >= d_allocated)
      {
        unsigned long int printf_parse__1__1__1__7__memory_size;
        struct anonymous_8 *printf_parse__1__1__1__7__memory;
        d_allocated = d_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)d_allocated * (unsigned long int)2 : 18446744073709551615UL;
        printf_parse__1__1__1__7__memory_size = d_allocated <= 18446744073709551615UL / sizeof(struct anonymous_8) /*88ul*/  ? (unsigned long int)d_allocated * sizeof(struct anonymous_8) /*88ul*/  : 18446744073709551615UL;
        if(printf_parse__1__1__1__7__memory_size == 18446744073709551615UL)
          goto out_of_memory;

        if(!(d->dir == d->direct_alloc_dir))
        {
          return_value_realloc_27=realloc((void *)d->dir, printf_parse__1__1__1__7__memory_size);
          tmp_if_expr_29 = return_value_realloc_27;
        }

        else
        {
          return_value_malloc_28=malloc(printf_parse__1__1__1__7__memory_size);
          tmp_if_expr_29 = return_value_malloc_28;
        }
        printf_parse__1__1__1__7__memory = (struct anonymous_8 *)tmp_if_expr_29;
        if(printf_parse__1__1__1__7__memory == ((struct anonymous_8 *)NULL))
          goto out_of_memory;

        if(d->dir == d->direct_alloc_dir)
          memcpy((void *)printf_parse__1__1__1__7__memory, (const void *)d->dir, d->count * sizeof(struct anonymous_8) /*88ul*/ );

        d->dir = printf_parse__1__1__1__7__memory;
      }

    }

  }
  (d->dir + (signed long int)d->count)->dir_start = cp;
  d->max_width_length = max_width_length;
  d->max_precision_length = max_precision_length;
  return 0;

error:
  ;
  if(!(a->arg == a->direct_alloc_arg))
    free((void *)a->arg);

  if(!(d->dir == d->direct_alloc_dir))
    free((void *)d->dir);

  signed int *return_value___errno_location_30;
  return_value___errno_location_30=__errno_location();
  *return_value___errno_location_30 = 22;
  return -1;

out_of_memory:
  ;
  if(!(a->arg == a->direct_alloc_arg))
    free((void *)a->arg);

  if(!(d->dir == d->direct_alloc_dir))
    free((void *)d->dir);

  signed int *return_value___errno_location_31;
  return_value___errno_location_31=__errno_location();
  *return_value___errno_location_31 = 12;
  return -1;
}

// random_account
// file test-lock.c line 111
static signed int random_account(void)
{
  signed int return_value_rand_1;
  return_value_rand_1=rand();
  return (signed int)(((unsigned int)return_value_rand_1 >> 3) % (unsigned int)4);
}

// reclock_checker_thread
// file test-lock.c line 362
static void * reclock_checker_thread(void *arg)
{
  unsigned long int return_value_pthread_self_1;
  unsigned long int return_value_pthread_self_4;
  while(reclock_checker_done == 0)
  {
    do
    {
      signed int return_value_pthread_mutex_lock_2;
      return_value_pthread_mutex_lock_2=pthread_mutex_lock(&my_reclock);
      if(!(return_value_pthread_mutex_lock_2 == 0))
        abort();

    }
    while((_Bool)0);
    check_accounts();
    do
    {
      signed int return_value_pthread_mutex_unlock_3;
      return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&my_reclock);
      if(!(return_value_pthread_mutex_unlock_3 == 0))
        abort();

    }
    while((_Bool)0);
    sched_yield();
  }
  unsigned long int return_value_pthread_self_5;
  return (void *)0;
}

// reclock_mutator_thread
// file test-lock.c line 338
static void * reclock_mutator_thread(void *arg)
{
  signed int repeat = 50000;
  unsigned long int return_value_pthread_self_1;
  unsigned long int return_value_pthread_self_4;
  for( ; repeat >= 1; repeat = repeat - 1)
  {
    recshuffle();
    do
    {
      signed int return_value_pthread_mutex_lock_2;
      return_value_pthread_mutex_lock_2=pthread_mutex_lock(&my_reclock);
      if(!(return_value_pthread_mutex_lock_2 == 0))
        abort();

    }
    while((_Bool)0);
    check_accounts();
    do
    {
      signed int return_value_pthread_mutex_unlock_3;
      return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&my_reclock);
      if(!(return_value_pthread_mutex_unlock_3 == 0))
        abort();

    }
    while((_Bool)0);
    sched_yield();
  }
  unsigned long int return_value_pthread_self_5;
  return (void *)0;
}

// recshuffle
// file test-lock.c line 314
static void recshuffle(void)
{
  signed int i1;
  signed int i2;
  signed int value;
  unsigned long int return_value_pthread_self_1;
  do
  {
    signed int return_value_pthread_mutex_lock_2;
    return_value_pthread_mutex_lock_2=pthread_mutex_lock(&my_reclock);
    if(!(return_value_pthread_mutex_lock_2 == 0))
      abort();

  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self_3;
  i1=random_account();
  i2=random_account();
  signed int return_value_rand_4;
  return_value_rand_4=rand();
  value = (signed int)(((unsigned int)return_value_rand_4 >> 3) % (unsigned int)10);
  account[(signed long int)i1] = account[(signed long int)i1] + value;
  account[(signed long int)i2] = account[(signed long int)i2] - value;
  signed int return_value_rand_5;
  return_value_rand_5=rand();
  if(!(((unsigned int)return_value_rand_5 >> 3) % 2u == 0u))
    recshuffle();

  unsigned long int return_value_pthread_self_6;
  do
  {
    signed int return_value_pthread_mutex_unlock_7;
    return_value_pthread_mutex_unlock_7=pthread_mutex_unlock(&my_reclock);
    if(!(return_value_pthread_mutex_unlock_7 == 0))
      abort();

  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self_8;
}

// rpl_fgetfilecon
// file getfilecon.c line 82
extern signed int rpl_fgetfilecon(signed int fd, char **con)
{
  signed int ret;
  ret=fgetfilecon(fd, con);
  signed int return_value_map_to_failure_1;
  return_value_map_to_failure_1=map_to_failure(ret, con);
  return return_value_map_to_failure_1;
}

// rpl_getfilecon
// file getfilecon.c line 68
extern signed int rpl_getfilecon(const char *file, char **con)
{
  signed int ret;
  ret=getfilecon(file, con);
  signed int return_value_map_to_failure_1;
  return_value_map_to_failure_1=map_to_failure(ret, con);
  return return_value_map_to_failure_1;
}

// rpl_lgetfilecon
// file getfilecon.c line 75
extern signed int rpl_lgetfilecon(const char *file, char **con)
{
  signed int ret;
  ret=lgetfilecon(file, con);
  signed int return_value_map_to_failure_1;
  return_value_map_to_failure_1=map_to_failure(ret, con);
  return return_value_map_to_failure_1;
}

// rwlock_checker_thread
// file test-lock.c line 260
static void * rwlock_checker_thread(void *arg)
{
  unsigned long int return_value_pthread_self_1;
  unsigned long int return_value_pthread_self_4;
  while(rwlock_checker_done == 0)
  {
    do
    {
      signed int return_value_pthread_rwlock_rdlock_2;
      return_value_pthread_rwlock_rdlock_2=pthread_rwlock_rdlock(&my_rwlock);
      if(!(return_value_pthread_rwlock_rdlock_2 == 0))
        abort();

    }
    while((_Bool)0);
    check_accounts();
    do
    {
      signed int return_value_pthread_rwlock_unlock_3;
      return_value_pthread_rwlock_unlock_3=pthread_rwlock_unlock(&my_rwlock);
      if(!(return_value_pthread_rwlock_unlock_3 == 0))
        abort();

    }
    while((_Bool)0);
    sched_yield();
  }
  unsigned long int return_value_pthread_self_5;
  return (void *)0;
}

// rwlock_mutator_thread
// file test-lock.c line 228
static void * rwlock_mutator_thread(void *arg)
{
  signed int repeat = 50000;
  unsigned long int return_value_pthread_self_1;
  unsigned long int return_value_pthread_self_3;
  unsigned long int return_value_pthread_self_5;
  unsigned long int return_value_pthread_self_7;
  for( ; repeat >= 1; repeat = repeat - 1)
  {
    signed int i1;
    signed int i2;
    signed int value;
    do
    {
      signed int return_value_pthread_rwlock_wrlock_2;
      return_value_pthread_rwlock_wrlock_2=pthread_rwlock_wrlock(&my_rwlock);
      if(!(return_value_pthread_rwlock_wrlock_2 == 0))
        abort();

    }
    while((_Bool)0);
    i1=random_account();
    i2=random_account();
    signed int return_value_rand_4;
    return_value_rand_4=rand();
    value = (signed int)(((unsigned int)return_value_rand_4 >> 3) % (unsigned int)10);
    account[(signed long int)i1] = account[(signed long int)i1] + value;
    account[(signed long int)i2] = account[(signed long int)i2] - value;
    do
    {
      signed int return_value_pthread_rwlock_unlock_6;
      return_value_pthread_rwlock_unlock_6=pthread_rwlock_unlock(&my_rwlock);
      if(!(return_value_pthread_rwlock_unlock_6 == 0))
        abort();

    }
    while((_Bool)0);
    sched_yield();
  }
  unsigned long int return_value_pthread_self_8;
  return (void *)0;
}

// safe_alloc_alloc_n
// file safe-alloc.c line 63
signed int safe_alloc_alloc_n(void *ptrptr, unsigned long int size, unsigned long int count, signed int zeroed)
{
  if(count == 0ul || size == 0ul)
  {
    *((void **)ptrptr) = (void *)0;
    return 0;
  }

  else
  {
    if(!(18446744073709551615ul / size >= count))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = 12;
      return -1;
    }

    if(!(zeroed == 0))
      *((void **)ptrptr)=calloc(count, size);

    else
      *((void **)ptrptr)=malloc(count * size);
    if(*((void **)ptrptr) == NULL)
      return -1;

    else
      return 0;
  }
}

// safe_alloc_realloc_n
// file safe-alloc.c line 102
signed int safe_alloc_realloc_n(void *ptrptr, unsigned long int size, unsigned long int count)
{
  void *tmp;
  if(count == 0ul || size == 0ul)
  {
    free(*((void **)ptrptr));
    *((void **)ptrptr) = (void *)0;
    return 0;
  }

  else
  {
    if(!(18446744073709551615ul / size >= count))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = 12;
      return -1;
    }

    tmp=realloc(*((void **)ptrptr), size * count);
    if(tmp == NULL)
      return -1;

    else
    {
      *((void **)ptrptr) = tmp;
      return 0;
    }
  }
}

// string_hash
// file localename.c line 2519
static unsigned long int string_hash(const void *x)
{
  const char *s = (const char *)x;
  unsigned long int h = (unsigned long int)0;
  for( ; !(*s == 0); s = s + 1l)
    h = (unsigned long int)*s + (h << 9 | h >> sizeof(unsigned long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)9);
  return h;
}

// string_hash_link1
// file localename.c line 2519
static unsigned long int string_hash_link1(const void *x_link1)
{
  const char *s_link1 = (const char *)x_link1;
  unsigned long int h_link1 = (unsigned long int)0;
  for( ; !(*s_link1 == 0); s_link1 = s_link1 + 1l)
    h_link1 = (unsigned long int)*s_link1 + (h_link1 << 9 | h_link1 >> sizeof(unsigned long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)9);
  return h_link1;
}

// strnlen1
// file strnlen1.c line 28
extern unsigned long int strnlen1(const char *string, unsigned long int maxlen)
{
  const char *end;
  void *return_value_memchr_1;
  return_value_memchr_1=memchr((const void *)string, 0, maxlen);
  end = (const char *)return_value_memchr_1;
  if(!(end == ((const char *)NULL)))
    return (unsigned long int)((end - string) + (signed long int)1);

  else
    return maxlen;
}

// struniq
// file localename.c line 2551
static const char * struniq(const char *string)
{
  unsigned long int hashcode;
  hashcode=string_hash((const void *)string);
  unsigned long int slot = hashcode % (unsigned long int)257;
  unsigned long int size;
  struct hash_node *new_node;
  struct hash_node *p = struniq_hash_table[(signed long int)slot];
  signed int return_value_strcmp_1;
  for( ; !(p == ((struct hash_node *)NULL)); p = p->next)
  {
    return_value_strcmp_1=strcmp(p->contents, string);
    if(return_value_strcmp_1 == 0)
      return p->contents;

  }
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(string);
  size = return_value_strlen_2 + (unsigned long int)1;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(8ul + size);
  new_node = (struct hash_node *)return_value_malloc_3;
  signed int return_value_strcmp_5;
  if(new_node == ((struct hash_node *)NULL))
    return "C";

  else
  {
    memcpy((void *)new_node->contents, (const void *)string, size);
    do
    {
      signed int return_value_pthread_mutex_lock_4;
      return_value_pthread_mutex_lock_4=pthread_mutex_lock(&struniq_lock);
      if(!(return_value_pthread_mutex_lock_4 == 0))
        abort();

    }
    while((_Bool)0);
    p = struniq_hash_table[(signed long int)slot];
    for( ; !(p == ((struct hash_node *)NULL)); p = p->next)
    {
      return_value_strcmp_5=strcmp(p->contents, string);
      if(return_value_strcmp_5 == 0)
      {
        free((void *)new_node);
        new_node = p;
        goto done;
      }

    }
    new_node->next = struniq_hash_table[(signed long int)slot];
    struniq_hash_table[(signed long int)slot] = new_node;
    do
    {

    done:
      ;
      signed int return_value_pthread_mutex_unlock_6;
      return_value_pthread_mutex_unlock_6=pthread_mutex_unlock(&struniq_lock);
      if(!(return_value_pthread_mutex_unlock_6 == 0))
        abort();

    }
    while((_Bool)0);
    return new_node->contents;
  }
}

// struniq_link1
// file localename.c line 2551
static const char * struniq_link1(const char *string_link1)
{
  unsigned long int hashcode_link1;
  hashcode_link1=string_hash_link1((const void *)string_link1);
  unsigned long int slot_link1 = hashcode_link1 % (unsigned long int)257;
  unsigned long int size_link1;
  struct hash_node *new_node_link1;
  struct hash_node *p_link1 = struniq_hash_table_link1[(signed long int)slot_link1];
  signed int return_value_strcmp_1_link1;
  for( ; !(p_link1 == ((struct hash_node *)NULL)); p_link1 = p_link1->next)
  {
    return_value_strcmp_1_link1=strcmp(p_link1->contents, string_link1);
    if(return_value_strcmp_1_link1 == 0)
      return p_link1->contents;

  }
  unsigned long int return_value_strlen_2_link1;
  return_value_strlen_2_link1=strlen(string_link1);
  size_link1 = return_value_strlen_2_link1 + (unsigned long int)1;
  void *return_value_malloc_3_link1;
  return_value_malloc_3_link1=malloc(8ul + size_link1);
  new_node_link1 = (struct hash_node *)return_value_malloc_3_link1;
  signed int return_value_strcmp_5_link1;
  if(new_node_link1 == ((struct hash_node *)NULL))
    return "C";

  else
  {
    memcpy((void *)new_node_link1->contents, (const void *)string_link1, size_link1);
    do
    {
      signed int return_value_pthread_mutex_lock_4_link1;
      return_value_pthread_mutex_lock_4_link1=pthread_mutex_lock(&struniq_lock_link1);
      if(!(return_value_pthread_mutex_lock_4_link1 == 0))
        abort();

    }
    while((_Bool)0);
    p_link1 = struniq_hash_table_link1[(signed long int)slot_link1];
    for( ; !(p_link1 == ((struct hash_node *)NULL)); p_link1 = p_link1->next)
    {
      return_value_strcmp_5_link1=strcmp(p_link1->contents, string_link1);
      if(return_value_strcmp_5_link1 == 0)
      {
        free((void *)new_node_link1);
        new_node_link1 = p_link1;
        goto done;
      }

    }
    new_node_link1->next = struniq_hash_table_link1[(signed long int)slot_link1];
    struniq_hash_table_link1[(signed long int)slot_link1] = new_node_link1;
    do
    {

    done:
      ;
      signed int return_value_pthread_mutex_unlock_6_link1;
      return_value_pthread_mutex_unlock_6_link1=pthread_mutex_unlock(&struniq_lock_link1);
      if(!(return_value_pthread_mutex_unlock_6_link1 == 0))
        abort();

    }
    while((_Bool)0);
    return new_node_link1->contents;
  }
}

// test_lock
// file test-lock.c line 194
static void test_lock(void)
{
  signed int i;
  unsigned long int checkerthread;
  unsigned long int threads[10l];
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    account[(signed long int)i] = 1000;
  lock_checker_done = 0;
  checkerthread=gl_thread_create(lock_checker_thread, (void *)0);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    threads[(signed long int)i]=gl_thread_create(lock_mutator_thread, (void *)0);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    do
    {
      signed int return_value_pthread_join_1;
      return_value_pthread_join_1=pthread_join(threads[(signed long int)i], (void **)(void *)0);
      if(!(return_value_pthread_join_1 == 0))
        abort();

    }
    while((_Bool)0);
  lock_checker_done = 1;
  do
  {
    signed int return_value_pthread_join_2;
    return_value_pthread_join_2=pthread_join(checkerthread, (void **)(void *)0);
    if(!(return_value_pthread_join_2 == 0))
      abort();

  }
  while((_Bool)0);
  check_accounts();
}

// test_once
// file test-lock.c line 469
static void test_once(void)
{
  signed int i;
  signed int repeat;
  unsigned long int threads[10l];
  i = 0;
  for( ; !(i >= 10); i = i + 1)
  {
    ready[(signed long int)i] = 0;
    do
    {
      signed int return_value_pthread_mutex_init_1;
      return_value_pthread_mutex_init_1=pthread_mutex_init(&ready_lock[(signed long int)i], (const union anonymous_6 *)(void *)0);
      if(!(return_value_pthread_mutex_init_1 == 0))
        abort();

    }
    while((_Bool)0);
  }
  i = 0;
  for( ; !(i >= 50000); i = i + 1)
    do
    {
      signed int return_value_pthread_rwlock_init_2;
      return_value_pthread_rwlock_init_2=pthread_rwlock_init(&fire_signal[(signed long int)i], (const union anonymous_2 *)(void *)0);
      if(!(return_value_pthread_rwlock_init_2 == 0))
        abort();

    }
    while((_Bool)0);
  i = 50000 - 1;
  for( ; i >= 0; i = i - 1)
    do
    {
      signed int return_value_pthread_rwlock_wrlock_3;
      return_value_pthread_rwlock_wrlock_3=pthread_rwlock_wrlock(&fire_signal[(signed long int)i]);
      if(!(return_value_pthread_rwlock_wrlock_3 == 0))
        abort();

    }
    while((_Bool)0);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    threads[(signed long int)i]=gl_thread_create(once_contender_thread, (void *)(signed long int)i);
  repeat = 0;
  for( ; !(repeat >= 50001); repeat = repeat + 1)
  {
    do
    {
      signed int ready_count = 0;
      i = 0;
      for( ; !(i >= 10); i = i + 1)
      {
        do
        {
          signed int return_value_pthread_mutex_lock_4;
          return_value_pthread_mutex_lock_4=pthread_mutex_lock(&ready_lock[(signed long int)i]);
          if(!(return_value_pthread_mutex_lock_4 == 0))
            abort();

        }
        while((_Bool)0);
        ready_count = ready_count + ready[(signed long int)i];
        do
        {
          signed int return_value_pthread_mutex_unlock_5;
          return_value_pthread_mutex_unlock_5=pthread_mutex_unlock(&ready_lock[(signed long int)i]);
          if(!(return_value_pthread_mutex_unlock_5 == 0))
            abort();

        }
        while((_Bool)0);
      }
      if(ready_count == 10)
        break;

      sched_yield();
    }
    while((_Bool)1);
    if(repeat >= 1)
    {
      if(!(performed == 1))
        abort();

    }

    if(repeat == 50000)
      break;

    memcpy((void *)&once_control, (const void *)&fresh_once, sizeof(signed int) /*4ul*/ );
    performed = 0;
    i = 0;
    for( ; !(i >= 10); i = i + 1)
    {
      do
      {
        signed int return_value_pthread_mutex_lock_6;
        return_value_pthread_mutex_lock_6=pthread_mutex_lock(&ready_lock[(signed long int)i]);
        if(!(return_value_pthread_mutex_lock_6 == 0))
          abort();

      }
      while((_Bool)0);
      ready[(signed long int)i] = 0;
      do
      {
        signed int return_value_pthread_mutex_unlock_7;
        return_value_pthread_mutex_unlock_7=pthread_mutex_unlock(&ready_lock[(signed long int)i]);
        if(!(return_value_pthread_mutex_unlock_7 == 0))
          abort();

      }
      while((_Bool)0);
    }
    do
    {
      signed int return_value_pthread_rwlock_unlock_8;
      return_value_pthread_rwlock_unlock_8=pthread_rwlock_unlock(&fire_signal[(signed long int)repeat]);
      if(!(return_value_pthread_rwlock_unlock_8 == 0))
        abort();

    }
    while((_Bool)0);
  }
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    do
    {
      signed int return_value_pthread_join_9;
      return_value_pthread_join_9=pthread_join(threads[(signed long int)i], (void **)(void *)0);
      if(!(return_value_pthread_join_9 == 0))
        abort();

    }
    while((_Bool)0);
}

// test_recursive_lock
// file test-lock.c line 380
static void test_recursive_lock(void)
{
  signed int i;
  unsigned long int checkerthread;
  unsigned long int threads[10l];
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    account[(signed long int)i] = 1000;
  reclock_checker_done = 0;
  checkerthread=gl_thread_create(reclock_checker_thread, (void *)0);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    threads[(signed long int)i]=gl_thread_create(reclock_mutator_thread, (void *)0);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    do
    {
      signed int return_value_pthread_join_1;
      return_value_pthread_join_1=pthread_join(threads[(signed long int)i], (void **)(void *)0);
      if(!(return_value_pthread_join_1 == 0))
        abort();

    }
    while((_Bool)0);
  reclock_checker_done = 1;
  do
  {
    signed int return_value_pthread_join_2;
    return_value_pthread_join_2=pthread_join(checkerthread, (void **)(void *)0);
    if(!(return_value_pthread_join_2 == 0))
      abort();

  }
  while((_Bool)0);
  check_accounts();
}

// test_rwlock
// file test-lock.c line 278
static void test_rwlock(void)
{
  signed int i;
  unsigned long int checkerthreads[10l];
  unsigned long int threads[10l];
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    account[(signed long int)i] = 1000;
  rwlock_checker_done = 0;
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    checkerthreads[(signed long int)i]=gl_thread_create(rwlock_checker_thread, (void *)0);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    threads[(signed long int)i]=gl_thread_create(rwlock_mutator_thread, (void *)0);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    do
    {
      signed int return_value_pthread_join_1;
      return_value_pthread_join_1=pthread_join(threads[(signed long int)i], (void **)(void *)0);
      if(!(return_value_pthread_join_1 == 0))
        abort();

    }
    while((_Bool)0);
  rwlock_checker_done = 1;
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    do
    {
      signed int return_value_pthread_join_2;
      return_value_pthread_join_2=pthread_join(checkerthreads[(signed long int)i], (void **)(void *)0);
      if(!(return_value_pthread_join_2 == 0))
        abort();

    }
    while((_Bool)0);
  check_accounts();
}

// vasnprintf
// file vasnprintf.h line 72
extern char * vasnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, void **args)
{
  struct anonymous_3 d;
  struct anonymous_4 a;
  signed int return_value_printf_parse_1;
  return_value_printf_parse_1=printf_parse(format, &d, &a);
  void *return_value_malloc_6;
  void *return_value_realloc_7;
  unsigned long int tmp_post_8;
  const char *tmp_post_9;
  void *return_value_malloc_10;
  void *return_value_realloc_11;
  char *tmp_post_12;
  char *tmp_post_13;
  char *tmp_post_14;
  char *tmp_post_15;
  char *tmp_post_16;
  char *tmp_post_17;
  char *tmp_post_18;
  char *tmp_post_19;
  char *tmp_post_20;
  const char *tmp_post_21;
  char *tmp_post_22;
  const char *tmp_post_23;
  char *tmp_post_24;
  char *tmp_post_25;
  char *tmp_post_26;
  unsigned int tmp_post_27;
  unsigned int tmp_post_28;
  void *return_value_malloc_30;
  void *return_value_realloc_31;
  signed int tmp_if_expr_38;
  _Bool tmp_if_expr_37;
  void *return_value_malloc_40;
  void *return_value_realloc_41;
  void *return_value_malloc_44;
  void *return_value_realloc_45;
  if(!(return_value_printf_parse_1 >= 0))
    return (char *)(void *)0;

  else
  {
    signed int return_value_printf_fetchargs_3;
    return_value_printf_fetchargs_3=printf_fetchargs(args, &a);
    if(!(return_value_printf_fetchargs_3 >= 0))
    {
      if(!(d.dir == d.direct_alloc_dir))
        free((void *)d.dir);

      if(!(a.arg == a.direct_alloc_arg))
        free((void *)a.arg);

      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = 22;
      return (char *)(void *)0;
    }

    unsigned long int buf_neededlength;
    char *buf;
    char *buf_malloced;
    const char *cp;
    unsigned long int i;
    struct anonymous_8 *dp;
    char *result;
    unsigned long int allocated;
    unsigned long int length;
    buf_neededlength=xsum4((unsigned long int)7, d.max_width_length, d.max_precision_length, (unsigned long int)6);
    if(!(buf_neededlength >= 4000ul))
    {
      void *return_value___builtin_alloca_4;
      return_value___builtin_alloca_4=__builtin_alloca(buf_neededlength * sizeof(char) /*1ul*/ );
      buf = (char *)return_value___builtin_alloca_4;
      buf_malloced = (char *)(void *)0;
    }

    else
    {
      unsigned long int buf_memsize = buf_neededlength <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)buf_neededlength * sizeof(char) /*1ul*/  : 18446744073709551615UL;
      if(buf_memsize == 18446744073709551615UL)
        goto out_of_memory_1;

      void *return_value_malloc_5;
      return_value_malloc_5=malloc(buf_memsize);
      buf = (char *)return_value_malloc_5;
      if(buf == ((char *)NULL))
        goto out_of_memory_1;

      buf_malloced = buf;
    }
    if(!(resultbuf == ((char *)NULL)))
    {
      result = resultbuf;
      allocated = *lengthp;
    }

    else
    {
      result = (char *)(void *)0;
      allocated = (unsigned long int)0;
    }
    length = (unsigned long int)0;
    cp = format;
    i = (unsigned long int)0;
    dp = &d.dir[(signed long int)0];
    for( ; (_Bool)1; dp = dp + 1l)
    {
      if(!(cp == dp->dir_start))
      {
        unsigned long int vasnprintf__1__2__5__1__1__n = (unsigned long int)(dp->dir_start - cp);
        unsigned long int augmented_length;
        augmented_length=xsum_link1(length, vasnprintf__1__2__5__1__1__n);
        if(!(allocated >= augmented_length))
        {
          unsigned long int vasnprintf__1__2__5__1__1__1__memory_size;
          char *vasnprintf__1__2__5__1__1__1__memory;
          allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
          if(!(allocated >= augmented_length))
            allocated = augmented_length;

          vasnprintf__1__2__5__1__1__1__memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
          if(vasnprintf__1__2__5__1__1__1__memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(result == ((char *)NULL) || result == resultbuf)
          {
            return_value_malloc_6=malloc(vasnprintf__1__2__5__1__1__1__memory_size);
            vasnprintf__1__2__5__1__1__1__memory = (char *)return_value_malloc_6;
          }

          else
          {
            return_value_realloc_7=realloc((void *)result, vasnprintf__1__2__5__1__1__1__memory_size);
            vasnprintf__1__2__5__1__1__1__memory = (char *)return_value_realloc_7;
          }
          if(vasnprintf__1__2__5__1__1__1__memory == ((char *)NULL))
            goto out_of_memory;

          if(result == resultbuf && length >= 1ul)
            memcpy((void *)vasnprintf__1__2__5__1__1__1__memory, (const void *)result, length);

          result = vasnprintf__1__2__5__1__1__1__memory;
        }

        memcpy((void *)(result + (signed long int)length), (const void *)(const char *)cp, vasnprintf__1__2__5__1__1__n);
        length = augmented_length;
      }

      if(i == d.count)
        break;

      if((signed int)dp->conversion == 37)
      {
        unsigned long int vasnprintf__1__2__5__1__2__augmented_length;
        if(!(dp->arg_index == 18446744073709551615ul))
          abort();

        vasnprintf__1__2__5__1__2__augmented_length=xsum_link1(length, (unsigned long int)1);
        if(!(allocated >= vasnprintf__1__2__5__1__2__augmented_length))
        {
          unsigned long int vasnprintf__1__2__5__1__2__1__memory_size;
          char *vasnprintf__1__2__5__1__2__1__memory;
          allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
          if(!(allocated >= vasnprintf__1__2__5__1__2__augmented_length))
            allocated = vasnprintf__1__2__5__1__2__augmented_length;

          vasnprintf__1__2__5__1__2__1__memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
          if(vasnprintf__1__2__5__1__2__1__memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(result == ((char *)NULL) || result == resultbuf)
          {
            return_value_malloc_10=malloc(vasnprintf__1__2__5__1__2__1__memory_size);
            vasnprintf__1__2__5__1__2__1__memory = (char *)return_value_malloc_10;
          }

          else
          {
            return_value_realloc_11=realloc((void *)result, vasnprintf__1__2__5__1__2__1__memory_size);
            vasnprintf__1__2__5__1__2__1__memory = (char *)return_value_realloc_11;
          }
          if(vasnprintf__1__2__5__1__2__1__memory == ((char *)NULL))
            goto out_of_memory;

          if(result == resultbuf && length >= 1ul)
            memcpy((void *)vasnprintf__1__2__5__1__2__1__memory, (const void *)result, length);

          result = vasnprintf__1__2__5__1__2__1__memory;
        }

        result[(signed long int)length] = (char)37;
        length = vasnprintf__1__2__5__1__2__augmented_length;
      }

      else
      {
        if(dp->arg_index == 18446744073709551615ul)
          abort();

        if((signed int)dp->conversion == 110)
          switch((signed int)(a.arg + (signed long int)dp->arg_index)->type)
          {
            case TYPE_COUNT_SCHAR_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_schar_pointer = (signed char)length;
              break;
            }
            case TYPE_COUNT_SHORT_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_short_pointer = (signed short int)length;
              break;
            }
            case TYPE_COUNT_INT_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_int_pointer = (signed int)length;
              break;
            }
            case TYPE_COUNT_LONGINT_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_longint_pointer = (signed long int)length;
              break;
            }
            case TYPE_COUNT_LONGLONGINT_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_longlongint_pointer = (signed long long int)length;
              break;
            }
            default:
              abort();
          }

        else
        {
          enum anonymous_5 type = (a.arg + (signed long int)dp->arg_index)->type;
          signed int flags = dp->flags;
          char *fbp;
          unsigned int prefix_count;
          signed int prefixes[2l];
          signed int orig_errno;
          fbp = buf;
          tmp_post_12 = fbp;
          fbp = fbp + 1l;
          *tmp_post_12 = (char)37;
          if(!((1 & flags) == 0))
          {
            tmp_post_13 = fbp;
            fbp = fbp + 1l;
            *tmp_post_13 = (char)39;
          }

          if(!((2 & flags) == 0))
          {
            tmp_post_14 = fbp;
            fbp = fbp + 1l;
            *tmp_post_14 = (char)45;
          }

          if(!((4 & flags) == 0))
          {
            tmp_post_15 = fbp;
            fbp = fbp + 1l;
            *tmp_post_15 = (char)43;
          }

          if(!((8 & flags) == 0))
          {
            tmp_post_16 = fbp;
            fbp = fbp + 1l;
            *tmp_post_16 = (char)32;
          }

          if(!((16 & flags) == 0))
          {
            tmp_post_17 = fbp;
            fbp = fbp + 1l;
            *tmp_post_17 = (char)35;
          }

          if(!((64 & flags) == 0))
          {
            tmp_post_18 = fbp;
            fbp = fbp + 1l;
            *tmp_post_18 = (char)73;
          }

          if(!((32 & flags) == 0))
          {
            tmp_post_19 = fbp;
            fbp = fbp + 1l;
            *tmp_post_19 = (char)48;
          }

          if(!(dp->width_start == dp->width_end))
          {
            unsigned long int vasnprintf__1__2__5__1__3__2__1__1__n = (unsigned long int)(dp->width_end - dp->width_start);
            memcpy((void *)fbp, (const void *)dp->width_start, vasnprintf__1__2__5__1__3__2__1__1__n * sizeof(char) /*1ul*/ );
            fbp = fbp + (signed long int)vasnprintf__1__2__5__1__3__2__1__1__n;
          }

          if(!(dp->precision_start == dp->precision_end))
          {
            unsigned long int n = (unsigned long int)(dp->precision_end - dp->precision_start);
            memcpy((void *)fbp, (const void *)dp->precision_start, n * sizeof(char) /*1ul*/ );
            fbp = fbp + (signed long int)n;
          }

          switch((signed int)type)
          {
            case TYPE_LONGLONGINT:

            case TYPE_ULONGLONGINT:
            {
              tmp_post_24 = fbp;
              fbp = fbp + 1l;
              *tmp_post_24 = (char)108;
            }
            case TYPE_LONGINT:

            case TYPE_ULONGINT:

            case TYPE_WIDE_CHAR:

            case TYPE_WIDE_STRING:
            {
              tmp_post_25 = fbp;
              fbp = fbp + 1l;
              *tmp_post_25 = (char)108;
              break;
            }
            case TYPE_LONGDOUBLE:
            {
              tmp_post_26 = fbp;
              fbp = fbp + 1l;
              *tmp_post_26 = (char)76;
            }
          }
          *fbp = dp->conversion;
          fbp[(signed long int)1] = (char)0;
          prefix_count = (unsigned int)0;
          if(!(dp->width_arg_index == 18446744073709551615ul))
          {
            if(!((signed int)(a.arg + (signed long int)dp->width_arg_index)->type == TYPE_INT))
              abort();

            tmp_post_27 = prefix_count;
            prefix_count = prefix_count + 1u;
            prefixes[(signed long int)tmp_post_27] = (a.arg + (signed long int)dp->width_arg_index)->a.a_int;
          }

          if(!(dp->precision_arg_index == 18446744073709551615ul))
          {
            if(!((signed int)(a.arg + (signed long int)dp->precision_arg_index)->type == TYPE_INT))
              abort();

            tmp_post_28 = prefix_count;
            prefix_count = prefix_count + 1u;
            prefixes[(signed long int)tmp_post_28] = (a.arg + (signed long int)dp->precision_arg_index)->a.a_int;
          }

          unsigned long int return_value_xsum_32;
          return_value_xsum_32=xsum_link1(length, (((unsigned long int)2 + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));
          if(!(allocated >= return_value_xsum_32))
          {
            unsigned long int vasnprintf__1__2__5__1__3__2__6__memory_size;
            char *vasnprintf__1__2__5__1__3__2__6__memory;
            allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
            unsigned long int return_value_xsum_29;
            return_value_xsum_29=xsum_link1(length, (((unsigned long int)2 + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));
            if(!(allocated >= return_value_xsum_29))
              allocated=xsum_link1(length, (((unsigned long int)2 + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));

            vasnprintf__1__2__5__1__3__2__6__memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
            if(vasnprintf__1__2__5__1__3__2__6__memory_size == 18446744073709551615UL)
              goto out_of_memory;

            if(result == ((char *)NULL) || result == resultbuf)
            {
              return_value_malloc_30=malloc(vasnprintf__1__2__5__1__3__2__6__memory_size);
              vasnprintf__1__2__5__1__3__2__6__memory = (char *)return_value_malloc_30;
            }

            else
            {
              return_value_realloc_31=realloc((void *)result, vasnprintf__1__2__5__1__3__2__6__memory_size);
              vasnprintf__1__2__5__1__3__2__6__memory = (char *)return_value_realloc_31;
            }
            if(vasnprintf__1__2__5__1__3__2__6__memory == ((char *)NULL))
              goto out_of_memory;

            if(result == resultbuf && length >= 1ul)
              memcpy((void *)vasnprintf__1__2__5__1__3__2__6__memory, (const void *)result, length);

            result = vasnprintf__1__2__5__1__3__2__6__memory;
          }

          *((char *)(result + (signed long int)length)) = (char)0;
          signed int *return_value___errno_location_33;
          return_value___errno_location_33=__errno_location();
          orig_errno = *return_value___errno_location_33;
          do
          {
            signed int count = -1;
            signed int retcount = 0;
            unsigned long int maxlen = allocated - length;
            if(maxlen >= 2147483648ul)
              maxlen = (unsigned long int)0x7fffffff / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ );

            maxlen = maxlen * (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ );
            signed int *return_value___errno_location_34;
            return_value___errno_location_34=__errno_location();
            *return_value___errno_location_34 = 0;
            switch((signed int)type)
            {
              case TYPE_SCHAR:
              {
                signed int vasnprintf__1__2__5__1__3__2__7__1__1__1__arg = (signed int)(a.arg + (signed long int)dp->arg_index)->a.a_schar;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__1__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__1__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__1__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_UCHAR:
              {
                unsigned int vasnprintf__1__2__5__1__3__2__7__1__1__2__arg = (unsigned int)(a.arg + (signed long int)dp->arg_index)->a.a_uchar;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__2__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__2__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__2__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_SHORT:
              {
                signed int vasnprintf__1__2__5__1__3__2__7__1__1__3__arg = (signed int)(a.arg + (signed long int)dp->arg_index)->a.a_short;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__3__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__3__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__3__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_USHORT:
              {
                unsigned int vasnprintf__1__2__5__1__3__2__7__1__1__4__arg = (unsigned int)(a.arg + (signed long int)dp->arg_index)->a.a_ushort;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__4__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__4__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__4__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_INT:
              {
                signed int vasnprintf__1__2__5__1__3__2__7__1__1__5__arg = (a.arg + (signed long int)dp->arg_index)->a.a_int;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__5__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__5__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__5__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_UINT:
              {
                unsigned int vasnprintf__1__2__5__1__3__2__7__1__1__6__arg = (a.arg + (signed long int)dp->arg_index)->a.a_uint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__6__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__6__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__6__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_LONGINT:
              {
                signed long int vasnprintf__1__2__5__1__3__2__7__1__1__7__arg = (a.arg + (signed long int)dp->arg_index)->a.a_longint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__7__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__7__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__7__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_ULONGINT:
              {
                unsigned long int vasnprintf__1__2__5__1__3__2__7__1__1__8__arg = (a.arg + (signed long int)dp->arg_index)->a.a_ulongint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__8__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__8__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__8__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_LONGLONGINT:
              {
                signed long long int vasnprintf__1__2__5__1__3__2__7__1__1__9__arg = (a.arg + (signed long int)dp->arg_index)->a.a_longlongint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__9__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__9__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__9__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_ULONGLONGINT:
              {
                unsigned long long int vasnprintf__1__2__5__1__3__2__7__1__1__10__arg = (a.arg + (signed long int)dp->arg_index)->a.a_ulonglongint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__10__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__10__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__10__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_DOUBLE:
              {
                double vasnprintf__1__2__5__1__3__2__7__1__1__11__arg = (a.arg + (signed long int)dp->arg_index)->a.a_double;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__11__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__11__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__11__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_LONGDOUBLE:
              {
                long double arg = (a.arg + (signed long int)dp->arg_index)->a.a_longdouble;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_CHAR:
              {
                signed int vasnprintf__1__2__5__1__3__2__7__1__1__13__arg = (a.arg + (signed long int)dp->arg_index)->a.a_char;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__13__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__13__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__13__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_WIDE_CHAR:
              {
                unsigned int vasnprintf__1__2__5__1__3__2__7__1__1__14__arg = (a.arg + (signed long int)dp->arg_index)->a.a_wide_char;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__14__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__14__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__14__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_STRING:
              {
                const char *vasnprintf__1__2__5__1__3__2__7__1__1__15__arg = (a.arg + (signed long int)dp->arg_index)->a.a_string;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__15__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__15__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__15__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_WIDE_STRING:
              {
                const signed int *vasnprintf__1__2__5__1__3__2__7__1__1__16__arg = (a.arg + (signed long int)dp->arg_index)->a.a_wide_string;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__16__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__16__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__16__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_POINTER:
              {
                void *vasnprintf__1__2__5__1__3__2__7__1__1__17__arg = (a.arg + (signed long int)dp->arg_index)->a.a_pointer;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__2__7__1__1__17__arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__2__7__1__1__17__arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__2__7__1__1__17__arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              default:
                abort();
            }
            if(count >= 0)
            {
              if(!((unsigned long int)count >= maxlen))
              {
                if(!((signed int)result[(signed long int)length + (signed long int)count] == 0))
                  abort();

              }

              if(!(count >= retcount))
                count = retcount;

            }

            else
              if(!((signed int)fbp[1l] == 0))
              {
                fbp[(signed long int)1] = (char)0;
                continue;
              }

              else
                if(retcount >= 0)
                  count = retcount;

            if(!(count >= 0))
            {
              signed int saved_errno;
              signed int *return_value___errno_location_35;
              return_value___errno_location_35=__errno_location();
              saved_errno = *return_value___errno_location_35;
              if(!(result == ((char *)NULL)) && !(result == resultbuf))
                free((void *)result);

              if(!(buf_malloced == ((char *)NULL)))
                free((void *)buf_malloced);

              if(!(d.dir == d.direct_alloc_dir))
                free((void *)d.dir);

              if(!(a.arg == a.direct_alloc_arg))
                free((void *)a.arg);

              signed int *return_value___errno_location_36;
              return_value___errno_location_36=__errno_location();
              if(!(saved_errno == 0))
                tmp_if_expr_38 = saved_errno;

              else
              {
                if((signed int)dp->conversion == 99)
                  tmp_if_expr_37 = (_Bool)1;

                else
                  tmp_if_expr_37 = (signed int)dp->conversion == 115 ? (_Bool)1 : (_Bool)0;
                tmp_if_expr_38 = tmp_if_expr_37 ? 84 : 22;
              }
              *return_value___errno_location_36 = tmp_if_expr_38;
              return (char *)(void *)0;
            }

            if((unsigned long int)(1u + (unsigned int)count) >= maxlen)
            {
              if(maxlen == 2147483647ul)
                goto overflow;

              else
              {
                unsigned long int vasnprintf__1__2__5__1__3__2__7__1__5__1__n;
                unsigned long int return_value_xsum_39;
                return_value_xsum_39=xsum_link1(length, (((unsigned long int)((unsigned int)count + (unsigned int)2) + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));
                vasnprintf__1__2__5__1__3__2__7__1__5__1__n=xmax(return_value_xsum_39, allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL);
                if(!(allocated >= vasnprintf__1__2__5__1__3__2__7__1__5__1__n))
                {
                  unsigned long int vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory_size;
                  char *vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory;
                  allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
                  if(!(allocated >= vasnprintf__1__2__5__1__3__2__7__1__5__1__n))
                    allocated = vasnprintf__1__2__5__1__3__2__7__1__5__1__n;

                  vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
                  if(vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory_size == 18446744073709551615UL)
                    goto out_of_memory;

                  if(result == ((char *)NULL) || result == resultbuf)
                  {
                    return_value_malloc_40=malloc(vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory_size);
                    vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory = (char *)return_value_malloc_40;
                  }

                  else
                  {
                    return_value_realloc_41=realloc((void *)result, vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory_size);
                    vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory = (char *)return_value_realloc_41;
                  }
                  if(vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory == ((char *)NULL))
                    goto out_of_memory;

                  if(result == resultbuf && length >= 1ul)
                    memcpy((void *)vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory, (const void *)result, length);

                  result = vasnprintf__1__2__5__1__3__2__7__1__5__1__1__memory;
                }

                continue;
              }
            }

            length = length + (unsigned long int)count;
            break;
          }
          while((_Bool)1);
          signed int *return_value___errno_location_42;
          return_value___errno_location_42=__errno_location();
          *return_value___errno_location_42 = orig_errno;
        }
      }
      cp = dp->dir_end;
      i = i + 1ul;
    }
    unsigned long int return_value_xsum_46;
    return_value_xsum_46=xsum_link1(length, (unsigned long int)1);
    if(!(allocated >= return_value_xsum_46))
    {
      unsigned long int memory_size;
      char *memory;
      allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
      unsigned long int return_value_xsum_43;
      return_value_xsum_43=xsum_link1(length, (unsigned long int)1);
      if(!(allocated >= return_value_xsum_43))
        allocated=xsum_link1(length, (unsigned long int)1);

      memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
      if(memory_size == 18446744073709551615UL)
        goto out_of_memory;

      if(result == ((char *)NULL) || result == resultbuf)
      {
        return_value_malloc_44=malloc(memory_size);
        memory = (char *)return_value_malloc_44;
      }

      else
      {
        return_value_realloc_45=realloc((void *)result, memory_size);
        memory = (char *)return_value_realloc_45;
      }
      if(memory == ((char *)NULL))
        goto out_of_memory;

      if(result == resultbuf && length >= 1ul)
        memcpy((void *)memory, (const void *)result, length);

      result = memory;
    }

    result[(signed long int)length] = (char)0;
    if(!(result == resultbuf) && !(1ul + length >= allocated))
    {
      char *vasnprintf__1__2__7__memory;
      void *return_value_realloc_47;
      return_value_realloc_47=realloc((void *)result, (length + (unsigned long int)1) * sizeof(char) /*1ul*/ );
      vasnprintf__1__2__7__memory = (char *)return_value_realloc_47;
      if(!(vasnprintf__1__2__7__memory == ((char *)NULL)))
        result = vasnprintf__1__2__7__memory;

    }

    if(!(buf_malloced == ((char *)NULL)))
      free((void *)buf_malloced);

    if(!(d.dir == d.direct_alloc_dir))
      free((void *)d.dir);

    if(!(a.arg == a.direct_alloc_arg))
      free((void *)a.arg);

    *lengthp = length;
    return result;

  overflow:
    ;
    if(!(result == ((char *)NULL)) && !(result == resultbuf))
      free((void *)result);

    if(!(buf_malloced == ((char *)NULL)))
      free((void *)buf_malloced);

    if(!(d.dir == d.direct_alloc_dir))
      free((void *)d.dir);

    if(!(a.arg == a.direct_alloc_arg))
      free((void *)a.arg);

    signed int *return_value___errno_location_48;
    return_value___errno_location_48=__errno_location();
    *return_value___errno_location_48 = 75;
    return (char *)(void *)0;

  out_of_memory:
    ;
    if(!(result == ((char *)NULL)) && !(result == resultbuf))
      free((void *)result);

    if(!(buf_malloced == ((char *)NULL)))
      free((void *)buf_malloced);


  out_of_memory_1:
    ;
    if(!(d.dir == d.direct_alloc_dir))
      free((void *)d.dir);

    if(!(a.arg == a.direct_alloc_arg))
      free((void *)a.arg);

    signed int *return_value___errno_location_49;
    return_value___errno_location_49=__errno_location();
    *return_value___errno_location_49 = 12;
    return (char *)(void *)0;
  }
}

// xmax
// file xsize.h line 86
static inline unsigned long int xmax(unsigned long int size1, unsigned long int size2)
{
  return size1 >= size2 ? size1 : size2;
}

// xsum
// file xsize.h line 55
static inline unsigned long int xsum(unsigned long int size1, unsigned long int size2)
{
  unsigned long int sum = size1 + size2;
  return sum >= size1 ? sum : 18446744073709551615UL;
}

// xsum_link1
// file xsize.h line 55
static inline unsigned long int xsum_link1(unsigned long int size1_link1, unsigned long int size2_link1)
{
  unsigned long int sum_link1 = size1_link1 + size2_link1;
  return sum_link1 >= size1_link1 ? sum_link1 : 18446744073709551615UL;
}

// xsum4
// file xsize.h line 76
static inline unsigned long int xsum4(unsigned long int size1, unsigned long int size2, unsigned long int size3, unsigned long int size4)
{
  unsigned long int return_value_xsum_1;
  return_value_xsum_1=xsum_link1(size1, size2);
  unsigned long int return_value_xsum_2;
  return_value_xsum_2=xsum_link1(return_value_xsum_1, size3);
  unsigned long int return_value_xsum_3;
  return_value_xsum_3=xsum_link1(return_value_xsum_2, size4);
  return return_value_xsum_3;
}

