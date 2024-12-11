// #anon_enum$TYPE_NONE=0$TYPE_SCHAR=1$TYPE_UCHAR=2$TYPE_SHORT=3$TYPE_USHORT=4$TYPE_INT=5$TYPE_UINT=6$TYPE_LONGINT=7$TYPE_ULONGINT=8$TYPE_LONGLONGINT=9$TYPE_ULONGLONGINT=10$TYPE_DOUBLE=11$TYPE_LONGDOUBLE=12$TYPE_CHAR=13$TYPE_WIDE_CHAR=14$TYPE_STRING=15$TYPE_WIDE_STRING=16$TYPE_POINTER=17$TYPE_COUNT_SCHAR_POINTER=18$TYPE_COUNT_SHORT_POINTER=19$TYPE_COUNT_INT_POINTER=20$TYPE_COUNT_LONGINT_POINTER=21$TYPE_COUNT_LONGLONGINT_POINTER=22
// file printf-args.h line 49
enum anonymous$5 { TYPE_NONE=0, TYPE_SCHAR=1, TYPE_UCHAR=2, TYPE_SHORT=3, TYPE_USHORT=4, TYPE_INT=5, TYPE_UINT=6, TYPE_LONGINT=7, TYPE_ULONGINT=8, TYPE_LONGLONGINT=9, TYPE_ULONGLONGINT=10, TYPE_DOUBLE=11, TYPE_LONGDOUBLE=12, TYPE_CHAR=13, TYPE_WIDE_CHAR=14, TYPE_STRING=15, TYPE_WIDE_STRING=16, TYPE_POINTER=17, TYPE_COUNT_SCHAR_POINTER=18, TYPE_COUNT_SHORT_POINTER=19, TYPE_COUNT_INT_POINTER=20, TYPE_COUNT_LONGINT_POINTER=21, TYPE_COUNT_LONGLONGINT_POINTER=22 };

// tag-#anon#ST[*{cS8}$cS8$'dir_start'||*{cS8}$cS8$'dir_end'||S32'flags'||U32'$pad0'||*{cS8}$cS8$'width_start'||*{cS8}$cS8$'width_end'||U64'width_arg_index'||*{cS8}$cS8$'precision_start'||*{cS8}$cS8$'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'$pad1'||U64'arg_index'|]
// file printf-parse.h line 53
struct anonymous$1;

// tag-#anon#ST[EN#anon_enum$TYPE_NONE=0$TYPE_SCHAR=1$TYPE_UCHAR=2$TYPE_SHORT=3$TYPE_USHORT=4$TYPE_INT=5$TYPE_UINT=6$TYPE_LONGINT=7$TYPE_ULONGINT=8$TYPE_LONGLONGINT=9$TYPE_ULONGLONGINT=10$TYPE_DOUBLE=11$TYPE_LONGDOUBLE=12$TYPE_CHAR=13$TYPE_WIDE_CHAR=14$TYPE_STRING=15$TYPE_WIDE_STRING=16$TYPE_POINTER=17$TYPE_COUNT_SCHAR_POINTER=18$TYPE_COUNT_SHORT_POINTER=19$TYPE_COUNT_INT_POINTER=20$TYPE_COUNT_LONGINT_POINTER=21$TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}$U32$'type'||U96'$pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}$cS8$'a_string'||*{cS32}$cS32$'a_wide_string'||*{V}$V$'a_pointer'||*{S8}$S8$'a_count_schar_pointer'||*{S16}$S16$'a_count_short_pointer'||*{S32}$S32$'a_count_int_pointer'||*{S64}$S64$'a_count_longint_pointer'||*{S64}$S64$'a_count_longlongint_pointer'|]#'a'|]
// file printf-args.h line 91
struct anonymous$3;

// tag-#anon#ST[U64'count'||*{SYM#tag-#anon#ST[*{cS8}$cS8$'dir_start'||*{cS8}$cS8$'dir_end'||S32'flags'||U32'$pad0'||*{cS8}$cS8$'width_start'||*{cS8}$cS8$'width_end'||U64'width_arg_index'||*{cS8}$cS8$'precision_start'||*{cS8}$cS8$'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'$pad1'||U64'arg_index'|]#}$SYM#tag-#anon#ST[*{cS8}$cS8$'dir_start'||*{cS8}$cS8$'dir_end'||S32'flags'||U32'$pad0'||*{cS8}$cS8$'width_start'||*{cS8}$cS8$'width_end'||U64'width_arg_index'||*{cS8}$cS8$'precision_start'||*{cS8}$cS8$'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'$pad1'||U64'arg_index'|]#$'dir'||U64'max_width_length'||U64'max_precision_length'||ARR7{SYM#tag-#anon#ST[*{cS8}$cS8$'dir_start'||*{cS8}$cS8$'dir_end'||S32'flags'||U32'$pad0'||*{cS8}$cS8$'width_start'||*{cS8}$cS8$'width_end'||U64'width_arg_index'||*{cS8}$cS8$'precision_start'||*{cS8}$cS8$'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'$pad1'||U64'arg_index'|]#}$SYM#tag-#anon#ST[*{cS8}$cS8$'dir_start'||*{cS8}$cS8$'dir_end'||S32'flags'||U32'$pad0'||*{cS8}$cS8$'width_start'||*{cS8}$cS8$'width_end'||U64'width_arg_index'||*{cS8}$cS8$'precision_start'||*{cS8}$cS8$'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'$pad1'||U64'arg_index'|]#$'direct_alloc_dir'|]
// file printf-parse.h line 70
struct anonymous;

// tag-#anon#ST[U64'count'||*{SYM#tag-#anon#ST[EN#anon_enum$TYPE_NONE=0$TYPE_SCHAR=1$TYPE_UCHAR=2$TYPE_SHORT=3$TYPE_USHORT=4$TYPE_INT=5$TYPE_UINT=6$TYPE_LONGINT=7$TYPE_ULONGINT=8$TYPE_LONGLONGINT=9$TYPE_ULONGLONGINT=10$TYPE_DOUBLE=11$TYPE_LONGDOUBLE=12$TYPE_CHAR=13$TYPE_WIDE_CHAR=14$TYPE_STRING=15$TYPE_WIDE_STRING=16$TYPE_POINTER=17$TYPE_COUNT_SCHAR_POINTER=18$TYPE_COUNT_SHORT_POINTER=19$TYPE_COUNT_INT_POINTER=20$TYPE_COUNT_LONGINT_POINTER=21$TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}$U32$'type'||U96'$pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}$cS8$'a_string'||*{cS32}$cS32$'a_wide_string'||*{V}$V$'a_pointer'||*{S8}$S8$'a_count_schar_pointer'||*{S16}$S16$'a_count_short_pointer'||*{S32}$S32$'a_count_int_pointer'||*{S64}$S64$'a_count_longint_pointer'||*{S64}$S64$'a_count_longlongint_pointer'|]#'a'|]#}$SYM#tag-#anon#ST[EN#anon_enum$TYPE_NONE=0$TYPE_SCHAR=1$TYPE_UCHAR=2$TYPE_SHORT=3$TYPE_USHORT=4$TYPE_INT=5$TYPE_UINT=6$TYPE_LONGINT=7$TYPE_ULONGINT=8$TYPE_LONGLONGINT=9$TYPE_ULONGLONGINT=10$TYPE_DOUBLE=11$TYPE_LONGDOUBLE=12$TYPE_CHAR=13$TYPE_WIDE_CHAR=14$TYPE_STRING=15$TYPE_WIDE_STRING=16$TYPE_POINTER=17$TYPE_COUNT_SCHAR_POINTER=18$TYPE_COUNT_SHORT_POINTER=19$TYPE_COUNT_INT_POINTER=20$TYPE_COUNT_LONGINT_POINTER=21$TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}$U32$'type'||U96'$pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}$cS8$'a_string'||*{cS32}$cS32$'a_wide_string'||*{V}$V$'a_pointer'||*{S8}$S8$'a_count_schar_pointer'||*{S16}$S16$'a_count_short_pointer'||*{S32}$S32$'a_count_int_pointer'||*{S64}$S64$'a_count_longint_pointer'||*{S64}$S64$'a_count_longlongint_pointer'|]#'a'|]#$'arg'||ARR7{SYM#tag-#anon#ST[EN#anon_enum$TYPE_NONE=0$TYPE_SCHAR=1$TYPE_UCHAR=2$TYPE_SHORT=3$TYPE_USHORT=4$TYPE_INT=5$TYPE_UINT=6$TYPE_LONGINT=7$TYPE_ULONGINT=8$TYPE_LONGLONGINT=9$TYPE_ULONGLONGINT=10$TYPE_DOUBLE=11$TYPE_LONGDOUBLE=12$TYPE_CHAR=13$TYPE_WIDE_CHAR=14$TYPE_STRING=15$TYPE_WIDE_STRING=16$TYPE_POINTER=17$TYPE_COUNT_SCHAR_POINTER=18$TYPE_COUNT_SHORT_POINTER=19$TYPE_COUNT_INT_POINTER=20$TYPE_COUNT_LONGINT_POINTER=21$TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}$U32$'type'||U96'$pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}$cS8$'a_string'||*{cS32}$cS32$'a_wide_string'||*{V}$V$'a_pointer'||*{S8}$S8$'a_count_schar_pointer'||*{S16}$S16$'a_count_short_pointer'||*{S32}$S32$'a_count_int_pointer'||*{S64}$S64$'a_count_longint_pointer'||*{S64}$S64$'a_count_longlongint_pointer'|]#'a'|]#}$SYM#tag-#anon#ST[EN#anon_enum$TYPE_NONE=0$TYPE_SCHAR=1$TYPE_UCHAR=2$TYPE_SHORT=3$TYPE_USHORT=4$TYPE_INT=5$TYPE_UINT=6$TYPE_LONGINT=7$TYPE_ULONGINT=8$TYPE_LONGLONGINT=9$TYPE_ULONGLONGINT=10$TYPE_DOUBLE=11$TYPE_LONGDOUBLE=12$TYPE_CHAR=13$TYPE_WIDE_CHAR=14$TYPE_STRING=15$TYPE_WIDE_STRING=16$TYPE_POINTER=17$TYPE_COUNT_SCHAR_POINTER=18$TYPE_COUNT_SHORT_POINTER=19$TYPE_COUNT_INT_POINTER=20$TYPE_COUNT_LONGINT_POINTER=21$TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}$U32$'type'||U96'$pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}$cS8$'a_string'||*{cS32}$cS32$'a_wide_string'||*{V}$V$'a_pointer'||*{S8}$S8$'a_count_schar_pointer'||*{S16}$S16$'a_count_short_pointer'||*{S32}$S32$'a_count_int_pointer'||*{S64}$S64$'a_count_longint_pointer'||*{S64}$S64$'a_count_longlongint_pointer'|]#'a'|]#$'direct_alloc_arg'|]
// file printf-args.h line 141
struct anonymous$2;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$0;

// tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}$cS8$'a_string'||*{cS32}$cS32$'a_wide_string'||*{V}$V$'a_pointer'||*{S8}$S8$'a_count_schar_pointer'||*{S16}$S16$'a_count_short_pointer'||*{S32}$S32$'a_count_int_pointer'||*{S64}$S64$'a_count_longint_pointer'||*{S64}$S64$'a_count_longlongint_pointer'|]
// file printf-args.h line 94
union anonymous$4;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$6;

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
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
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
// gl_locale_name_thread_unsafe$link1
// file localename.c line 2601
static const char * gl_locale_name_thread_unsafe$link1(signed int category$link1, const char *categoryname$link1);
// glthread_once_singlethreaded
// file glthread/lock.c line 457
extern signed int glthread_once_singlethreaded(signed int *once_control);
// glthread_recursive_lock_init_multithreaded
// file glthread/lock.c line 284
extern signed int glthread_recursive_lock_init_multithreaded(union anonymous$6 *lock);
// lgetfilecon
// file getfilecon.c line 37
signed int lgetfilecon(const char *, char **);
// locale_charset
// file localcharset.c line 357
extern const char * locale_charset(void);
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
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// printf_fetchargs
// file printf-args.c line 36
extern signed int printf_fetchargs(__builtin_va_list args, struct anonymous$2 *a);
// printf_parse
// file printf-parse.c line 83
extern signed int printf_parse(const char *format, struct anonymous *d, struct anonymous$2 *a);
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
extern signed int pthread_mutex_init(union anonymous$6 *, const union anonymous$0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$6 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$6 *);
// pthread_mutexattr_destroy
// file /usr/include/pthread.h line 812
extern signed int pthread_mutexattr_destroy(union anonymous$0 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous$0 *);
// pthread_mutexattr_settype
// file /usr/include/pthread.h line 835
extern signed int pthread_mutexattr_settype(union anonymous$0 *, signed int);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// rpl_fgetfilecon
// file getfilecon.c line 82
extern signed int rpl_fgetfilecon(signed int fd, char **con);
// rpl_getfilecon
// file getfilecon.c line 68
extern signed int rpl_getfilecon(const char *file, char **con);
// rpl_lgetfilecon
// file getfilecon.c line 75
extern signed int rpl_lgetfilecon(const char *file, char **con);
// safe_alloc_alloc_n
// file safe-alloc.c line 63
signed int safe_alloc_alloc_n(void *ptrptr, unsigned long int size, unsigned long int count, signed int zeroed);
// safe_alloc_realloc_n
// file safe-alloc.c line 102
signed int safe_alloc_realloc_n(void *ptrptr, unsigned long int size, unsigned long int count);
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
// string_hash$link1
// file localename.c line 2519
static unsigned long int string_hash$link1(const void *x$link1);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strnlen1
// file strnlen1.c line 28
extern unsigned long int strnlen1(const char *string, unsigned long int maxlen);
// struniq
// file localename.c line 2551
static const char * struniq(const char *string);
// struniq$link1
// file localename.c line 2551
static const char * struniq$link1(const char *string$link1);
// ungetc
// file /usr/include/stdio.h line 702
extern signed int ungetc(signed int, struct _IO_FILE *);
// uselocale
// file /usr/include/locale.h line 197
extern struct __locale_struct * uselocale(struct __locale_struct *);
// vasnprintf
// file vasnprintf.h line 72
extern char * vasnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, void **args);
// worker_thread_func
// file test-thread_create.c line 36
static void * worker_thread_func(void *arg);
// xmax
// file xsize.h line 86
static inline unsigned long int xmax(unsigned long int size1, unsigned long int size2);
// xsum
// file xsize.h line 55
static inline unsigned long int xsum(unsigned long int size1, unsigned long int size2);
// xsum$link1
// file xsize.h line 55
static inline unsigned long int xsum$link1(unsigned long int size1$link1, unsigned long int size2$link1);
// xsum4
// file xsize.h line 76
static inline unsigned long int xsum4(unsigned long int size1, unsigned long int size2, unsigned long int size3, unsigned long int size4);

struct anonymous$1
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

union anonymous$4
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

struct anonymous$3
{
  // type
  enum anonymous$5 type;
  // a
  union anonymous$4 a;
};

struct anonymous
{
  // count
  unsigned long int count;
  // dir
  struct anonymous$1 *dir;
  // max_width_length
  unsigned long int max_width_length;
  // max_precision_length
  unsigned long int max_precision_length;
  // direct_alloc_dir
  struct anonymous$1 direct_alloc_dir[7l];
};

struct anonymous$2
{
  // count
  unsigned long int count;
  // arg
  struct anonymous$3 *arg;
  // direct_alloc_arg
  struct anonymous$3 direct_alloc_arg[7l];
};

union anonymous$0
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

union anonymous$6
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


// charset_aliases
// file localcharset.c line 114
static const char * volatile charset_aliases;
// dummy
// file test-thread_create.c line 32
static signed int dummy;
// fresh_once
// file glthread/lock.c line 454
static const signed int fresh_once = 0;
// fresh_once$link1
// file glthread/lock.c line 454
static const signed int fresh_once$link1 = 0;
// letters
// file tempname.c line 179
static const char letters[63l] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0 };
// main_thread_after
// file test-thread_create.c line 29
static unsigned long int main_thread_after;
// main_thread_before
// file test-thread_create.c line 28
static unsigned long int main_thread_before;
// mmalloca_results
// file malloca.c line 63
static void *mmalloca_results[257l];
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// struniq_hash_table
// file localename.c line 2541
static struct hash_node * volatile struniq_hash_table[257l];
// struniq_hash_table$link1
// file localename.c line 2541
static struct hash_node * volatile struniq_hash_table$link1[257l];
// struniq_lock
// file localename.c line 2546
static union anonymous$6 struniq_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// struniq_lock$link1
// file localename.c line 2546
static union anonymous$6 struniq_lock$link1 = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// work_done
// file test-thread_create.c line 33
static volatile signed int work_done;
// worker_thread
// file test-thread_create.c line 30
static unsigned long int worker_thread;

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
      signed int return_value_c_tolower$1;
      return_value_c_tolower$1=c_tolower((signed int)*p1);
      c1 = (unsigned char)return_value_c_tolower$1;
      signed int return_value_c_tolower$2;
      return_value_c_tolower$2=c_tolower((signed int)*p2);
      c2 = (unsigned char)return_value_c_tolower$2;
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
      signed int return_value_c_tolower$1;
      return_value_c_tolower$1=c_tolower((signed int)*p1);
      c1 = (unsigned char)return_value_c_tolower$1;
      signed int return_value_c_tolower$2;
      return_value_c_tolower$2=c_tolower((signed int)*p2);
      c2 = (unsigned char)return_value_c_tolower$2;
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
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  save_errno = *return_value___errno_location$1;
  struct stat st;
  unsigned int attempts = (unsigned int)(62 * 62 * 62);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(tmpl);
  len = (signed int)return_value_strlen$2;
  _Bool tmp_if_expr$5;
  signed int return_value_memcmp$4;
  if(!(len >= 6 + suffixlen))
    tmp_if_expr$5 = (_Bool)1;

  else
  {
    return_value_memcmp$4=memcmp((const void *)&tmpl[(signed long int)((len - 6) - suffixlen)], (const void *)"XXXXXX", (unsigned long int)6);
    tmp_if_expr$5 = return_value_memcmp$4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$5)
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    *return_value___errno_location$3 = 22;
    return -1;
  }

  XXXXXX = &tmpl[(signed long int)((len - 6) - suffixlen)];
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  random_time_bits = (unsigned long int)tv.tv_usec << 16 ^ (unsigned long int)tv.tv_sec;
  signed int return_value_getpid$6;
  return_value_getpid$6=getpid();
  static unsigned long int value;
  value = value + (random_time_bits ^ (unsigned long int)return_value_getpid$6);
  count = (unsigned int)0;
  signed int return_value_lstat$9;
  signed int *return_value___errno_location$11;
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
        return_value_lstat$9=lstat(tmpl, &st);
        if(!(return_value_lstat$9 >= 0))
        {
          signed int *return_value___errno_location$8;
          return_value___errno_location$8=__errno_location();
          if(*return_value___errno_location$8 == 2)
          {
            signed int *return_value___errno_location$7;
            return_value___errno_location$7=__errno_location();
            *return_value___errno_location$7 = save_errno;
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
      signed int *return_value___errno_location$10;
      return_value___errno_location$10=__errno_location();
      *return_value___errno_location$10 = save_errno;
      return fd;
    }

    else
    {
      return_value___errno_location$11=__errno_location();
      if(!(*return_value___errno_location$11 == 17))
        return -1;

    }

  __CPROVER_DUMP_L15:
    ;
    value = value + (unsigned long int)7777;
  }
  signed int *return_value___errno_location$12;
  return_value___errno_location$12=__errno_location();
  *return_value___errno_location$12 = 17;
  return -1;
}

// get_charset_aliases
// file localcharset.c line 118
static const char * get_charset_aliases(void)
{
  const char *cp = charset_aliases;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  if(cp == ((const char *)NULL))
  {
    const char *dir;
    const char *base = "charset.alias";
    char *file_name;
    dir=getenv("CHARSETALIASDIR");
    if(dir == ((const char *)NULL))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)dir[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      dir = "/usr/lib/x86_64-linux-gnu";

    unsigned long int dir_len;
    dir_len=strlen(dir);
    unsigned long int base_len;
    base_len=strlen(base);
    signed int add_slash;
    if(dir_len >= 1ul)
      tmp_if_expr$2 = !((signed int)dir[(signed long int)(dir_len - (unsigned long int)1)] == 47) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    add_slash = (signed int)tmp_if_expr$2;
    void *return_value_malloc$3;
    return_value_malloc$3=malloc(dir_len + (unsigned long int)add_slash + base_len + (unsigned long int)1);
    file_name = (char *)return_value_malloc$3;
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
                signed int return_value_fscanf$4;
                return_value_fscanf$4=fscanf(fp, "%50s %50s", (const void *)buf1, (const void *)buf2);
                if(!(return_value_fscanf$4 >= 2))
                  break;

                l1=strlen(buf1);
                l2=strlen(buf2);
                old_res_ptr = res_ptr;
                if(res_size == 0ul)
                {
                  res_size = l1 + (unsigned long int)1 + l2 + (unsigned long int)1;
                  void *return_value_malloc$5;
                  return_value_malloc$5=malloc(res_size + (unsigned long int)1);
                  res_ptr = (char *)return_value_malloc$5;
                }

                else
                {
                  res_size = res_size + l1 + (unsigned long int)1 + l2 + (unsigned long int)1;
                  void *return_value_realloc$6;
                  return_value_realloc$6=realloc((void *)res_ptr, res_size + (unsigned long int)1);
                  res_ptr = (char *)return_value_realloc$6;
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
      const char *return_value_gl_locale_name_default$1;
      return_value_gl_locale_name_default$1=gl_locale_name_default();
      return return_value_gl_locale_name_default$1;
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
  char *return_value_setlocale$1;
  return_value_setlocale$1=setlocale(category, (const char *)(void *)0);
  return return_value_setlocale$1;
}

// gl_locale_name_thread
// file localename.c line 2756
extern const char * gl_locale_name_thread(signed int category, const char *categoryname)
{
  const char *name;
  name=gl_locale_name_thread_unsafe(category, categoryname);
  const char *return_value_struniq$1;
  if(!(name == ((const char *)NULL)))
  {
    return_value_struniq$1=struniq(name);
    return return_value_struniq$1;
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

// gl_locale_name_thread_unsafe$link1
// file localename.c line 2601
static const char * gl_locale_name_thread_unsafe$link1(signed int category$link1, const char *categoryname$link1)
{
  struct __locale_struct *thread_locale$link1;
  thread_locale$link1=uselocale((struct __locale_struct *)(void *)0);
  if(!(thread_locale$link1 == (struct __locale_struct *)-1l))
  {
    const char *name$link1;
    name$link1=nl_langinfo(category$link1 << 16 | (signed int)-1 & 0xffff);
    if((signed int)*name$link1 == 0)
      name$link1 = thread_locale$link1->__names[(signed long int)category$link1];

    return name$link1;
  }

  return (const char *)(void *)0;
}

// glthread_once_singlethreaded
// file glthread/lock.c line 457
extern signed int glthread_once_singlethreaded(signed int *once_control)
{
  char *firstbyte = (char *)once_control;
  if(*firstbyte == *((const char *)&fresh_once))
  {
    *firstbyte = (char)~((signed int)*((const char *)&fresh_once));
    return 1;
  }

  else
    return 0;
}

// glthread_recursive_lock_init_multithreaded
// file glthread/lock.c line 284
extern signed int glthread_recursive_lock_init_multithreaded(union anonymous$6 *lock)
{
  union anonymous$0 attributes;
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
  signed int return_value_strcmp$4;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$5;
  unsigned long int return_value_strlen$1;
  unsigned long int return_value_strlen$2;
  for( ; !((signed int)*aliases == 0); aliases = aliases + (signed long int)(return_value_strlen$2 + (unsigned long int)1))
  {
    return_value_strcmp$4=strcmp(codeset, aliases);
    if(return_value_strcmp$4 == 0)
      tmp_if_expr$6 = (_Bool)1;

    else
    {
      if((signed int)*aliases == 42)
        tmp_if_expr$5 = (signed int)aliases[(signed long int)1] == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$5 = (_Bool)0;
      tmp_if_expr$6 = tmp_if_expr$5 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$6)
    {
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(aliases);
      codeset = aliases + (signed long int)return_value_strlen$3 + (signed long int)1;
      break;
    }

    return_value_strlen$1=strlen(aliases);
    aliases = aliases + (signed long int)(return_value_strlen$1 + (unsigned long int)1);
    return_value_strlen$2=strlen(aliases);
  }
  if((signed int)*codeset == 0)
    codeset = "ASCII";

  return codeset;
}

// main
// file test-thread_create.c line 43
signed int main()
{
  unsigned long int return_value_pthread_self$1;
  return_value_pthread_self$1=pthread_self();
  main_thread_before = return_value_pthread_self$1;
  signed int return_value_pthread_create$5;
  return_value_pthread_create$5=pthread_create(&worker_thread, (const union pthread_attr_t *)(void *)0, worker_thread_func, (void *)0);
  if(return_value_pthread_create$5 == 0)
  {
    void *ret;
    unsigned long int return_value_pthread_self$2;
    return_value_pthread_self$2=pthread_self();
    main_thread_after = return_value_pthread_self$2;
    do
    {
      signed int return_value_memcmp$3;
      return_value_memcmp$3=memcmp((const void *)&main_thread_before, (const void *)&main_thread_after, sizeof(unsigned long int) /*8ul*/ );
      if(!(return_value_memcmp$3 == 0))
      {
        fprintf(stderr, "%s:%d: assertion failed\n", (const void *)"test-thread_create.c", 56);
        fflush(stderr);
        abort();
      }

    }
    while((_Bool)0);
    do
    {
      signed int return_value_pthread_join$4;
      return_value_pthread_join$4=pthread_join(worker_thread, &ret);
      if(!(return_value_pthread_join$4 == 0))
        abort();

    }
    while((_Bool)0);
    do
      if(!((signed int *)ret == &dummy))
      {
        fprintf(stderr, "%s:%d: assertion failed\n", (const void *)"test-thread_create.c", 61);
        fflush(stderr);
        abort();
      }

    while((_Bool)0);
    do
      if(work_done == 0)
      {
        fprintf(stderr, "%s:%d: assertion failed\n", (const void *)"test-thread_create.c", 64);
        fflush(stderr);
        abort();
      }

    while((_Bool)0);
    return 0;
  }

  else
  {
    fputs("glthread_create failed\n", stderr);
    return 1;
  }
}

// map_to_failure
// file getfilecon.c line 49
static inline signed int map_to_failure(signed int ret, char **con)
{
  if(ret == 0)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 95;
    return -1;
  }

  signed int return_value_strcmp$3;
  if(ret == 10)
  {
    return_value_strcmp$3=strcmp(*con, "unlabeled");
    if(return_value_strcmp$3 == 0)
    {
      freecon(*con);
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      *return_value___errno_location$2 = 61;
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
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(nplus);
    p = (char *)return_value_malloc$1;
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

// printf_fetchargs
// file printf-args.c line 36
extern signed int printf_fetchargs(__builtin_va_list args, struct anonymous$2 *a)
{
  unsigned long int i;
  struct anonymous$3 *ap;
  i = (unsigned long int)0;
  ap = &a->arg[(signed long int)0];
  signed int return_value_gcc_builtin_va_arg$1;
  signed int return_value_gcc_builtin_va_arg$2;
  signed int return_value_gcc_builtin_va_arg$3;
  signed int return_value_gcc_builtin_va_arg$4;
  unsigned int return_value_gcc_builtin_va_arg$5;
  for( ; !(i >= a->count); ap = ap + 1l)
  {
    switch((signed int)ap->type)
    {
      case TYPE_SCHAR:
      {
        return_value_gcc_builtin_va_arg$1=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg$1));
        ap->a.a_schar = (signed char)return_value_gcc_builtin_va_arg$1;
        break;
      }
      case TYPE_UCHAR:
      {
        return_value_gcc_builtin_va_arg$2=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg$2));
        ap->a.a_uchar = (unsigned char)return_value_gcc_builtin_va_arg$2;
        break;
      }
      case TYPE_SHORT:
      {
        return_value_gcc_builtin_va_arg$3=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg$3));
        ap->a.a_short = (signed short int)return_value_gcc_builtin_va_arg$3;
        break;
      }
      case TYPE_USHORT:
      {
        return_value_gcc_builtin_va_arg$4=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg$4));
        ap->a.a_ushort = (unsigned short int)return_value_gcc_builtin_va_arg$4;
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
        return_value_gcc_builtin_va_arg$5=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg$5));
        ap->a.a_wide_char = return_value_gcc_builtin_va_arg$5;
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
extern signed int printf_parse(const char *format, struct anonymous *d, struct anonymous$2 *a)
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
  const char *tmp_post$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  unsigned long int tmp_post$6;
  void *tmp_if_expr$9;
  void *return_value_realloc$7;
  void *return_value_malloc$8;
  unsigned long int tmp_post$10;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$13;
  unsigned long int tmp_post$14;
  void *tmp_if_expr$17;
  void *return_value_realloc$15;
  void *return_value_malloc$16;
  unsigned long int tmp_post$18;
  _Bool tmp_if_expr$19;
  _Bool tmp_if_expr$20;
  const char *tmp_post$21;
  unsigned long int tmp_post$22;
  void *tmp_if_expr$25;
  void *return_value_realloc$23;
  void *return_value_malloc$24;
  unsigned long int tmp_post$26;
  void *tmp_if_expr$29;
  void *return_value_realloc$27;
  void *return_value_malloc$28;
  while(!((signed int)*cp == 0))
  {
    char c;
    tmp_post$1 = cp;
    cp = cp + 1l;
    c = *tmp_post$1;
    if((signed int)c == 37)
    {
      unsigned long int arg_index = ~((unsigned long int)0);
      struct anonymous$1 *dp = &d->dir[(signed long int)d->count];
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
          const char *printf_parse$$1$$1$$1$$1$$np = cp;
          do
          {
            if((signed int)*printf_parse$$1$$1$$1$$1$$np >= 48)
              tmp_if_expr$2 = (signed int)*printf_parse$$1$$1$$1$$1$$np <= 57 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$2 = (_Bool)0;
            if(!tmp_if_expr$2)
              break;

            printf_parse$$1$$1$$1$$1$$np = printf_parse$$1$$1$$1$$1$$np + 1l;
          }
          while((_Bool)1);
          if((signed int)*printf_parse$$1$$1$$1$$1$$np == 36)
          {
            unsigned long int n = (unsigned long int)0;
            printf_parse$$1$$1$$1$$1$$np = cp;
            do
            {
              if((signed int)*printf_parse$$1$$1$$1$$1$$np >= 48)
                tmp_if_expr$3 = (signed int)*printf_parse$$1$$1$$1$$1$$np <= 57 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$3 = (_Bool)0;
              if(!tmp_if_expr$3)
                break;

              n=xsum(n <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)n * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*printf_parse$$1$$1$$1$$1$$np - 48));
              printf_parse$$1$$1$$1$$1$$np = printf_parse$$1$$1$$1$$1$$np + 1l;
            }
            while((_Bool)1);
            if(n == 0ul)
              goto error;

            if(n == 18446744073709551615UL)
              goto error;

            arg_index = n - (unsigned long int)1;
            cp = printf_parse$$1$$1$$1$$1$$np + (signed long int)1;
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
            const char *np = cp;
            do
            {
              if((signed int)*np >= 48)
                tmp_if_expr$4 = (signed int)*np <= 57 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$4 = (_Bool)0;
              if(!tmp_if_expr$4)
                break;

              np = np + 1l;
            }
            while((_Bool)1);
            if((signed int)*np == 36)
            {
              unsigned long int printf_parse$$1$$1$$1$$3$$1$$2$$n = (unsigned long int)0;
              np = cp;
              do
              {
                if((signed int)*np >= 48)
                  tmp_if_expr$5 = (signed int)*np <= 57 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$5 = (_Bool)0;
                if(!tmp_if_expr$5)
                  break;

                printf_parse$$1$$1$$1$$3$$1$$2$$n=xsum(printf_parse$$1$$1$$1$$3$$1$$2$$n <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)printf_parse$$1$$1$$1$$3$$1$$2$$n * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*np - 48));
                np = np + 1l;
              }
              while((_Bool)1);
              if(printf_parse$$1$$1$$1$$3$$1$$2$$n == 0ul)
                goto error;

              if(printf_parse$$1$$1$$1$$3$$1$$2$$n == 18446744073709551615UL)
                goto error;

              dp->width_arg_index = printf_parse$$1$$1$$1$$3$$1$$2$$n - (unsigned long int)1;
              cp = np + (signed long int)1;
            }

          }

        }

        if(dp->width_arg_index == 18446744073709551615ul)
        {
          tmp_post$6 = arg_posn;
          arg_posn = arg_posn + 1ul;
          dp->width_arg_index = tmp_post$6;
          if(dp->width_arg_index == 18446744073709551615ul)
            goto error;

        }

        unsigned long int printf_parse$$1$$1$$1$$3$$3$$n = dp->width_arg_index;
        if(printf_parse$$1$$1$$1$$3$$3$$n >= a_allocated)
        {
          unsigned long int printf_parse$$1$$1$$1$$3$$3$$1$$memory_size;
          struct anonymous$3 *printf_parse$$1$$1$$1$$3$$3$$1$$memory;
          a_allocated = a_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)a_allocated * (unsigned long int)2 : 18446744073709551615UL;
          if(printf_parse$$1$$1$$1$$3$$3$$n >= a_allocated)
            a_allocated=xsum(printf_parse$$1$$1$$1$$3$$3$$n, (unsigned long int)1);

          printf_parse$$1$$1$$1$$3$$3$$1$$memory_size = a_allocated <= 18446744073709551615UL / sizeof(struct anonymous$3) /*32ul*/  ? (unsigned long int)a_allocated * sizeof(struct anonymous$3) /*32ul*/  : 18446744073709551615UL;
          if(printf_parse$$1$$1$$1$$3$$3$$1$$memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(!(a->arg == a->direct_alloc_arg))
          {
            return_value_realloc$7=realloc((void *)a->arg, printf_parse$$1$$1$$1$$3$$3$$1$$memory_size);
            tmp_if_expr$9 = return_value_realloc$7;
          }

          else
          {
            return_value_malloc$8=malloc(printf_parse$$1$$1$$1$$3$$3$$1$$memory_size);
            tmp_if_expr$9 = return_value_malloc$8;
          }
          printf_parse$$1$$1$$1$$3$$3$$1$$memory = (struct anonymous$3 *)tmp_if_expr$9;
          if(printf_parse$$1$$1$$1$$3$$3$$1$$memory == ((struct anonymous$3 *)NULL))
            goto out_of_memory;

          if(a->arg == a->direct_alloc_arg)
            memcpy((void *)printf_parse$$1$$1$$1$$3$$3$$1$$memory, (const void *)a->arg, a->count * sizeof(struct anonymous$3) /*32ul*/ );

          a->arg = printf_parse$$1$$1$$1$$3$$3$$1$$memory;
        }

        for( ; printf_parse$$1$$1$$1$$3$$3$$n >= a->count; (a->arg + (signed long int)tmp_post$10)->type = (enum anonymous$5)TYPE_NONE)
        {
          tmp_post$10 = a->count;
          a->count = a->count + 1ul;
        }
        if((signed int)(a->arg + (signed long int)printf_parse$$1$$1$$1$$3$$3$$n)->type == TYPE_NONE)
          (a->arg + (signed long int)printf_parse$$1$$1$$1$$3$$3$$n)->type = (enum anonymous$5)TYPE_INT;

        else
          if(!((signed int)(a->arg + (signed long int)printf_parse$$1$$1$$1$$3$$3$$n)->type == TYPE_INT))
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
                tmp_if_expr$11 = (signed int)*cp <= 57 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$11 = (_Bool)0;
              if(!tmp_if_expr$11)
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
              const char *printf_parse$$1$$1$$1$$5$$1$$1$$np = cp;
              do
              {
                if((signed int)*printf_parse$$1$$1$$1$$5$$1$$1$$np >= 48)
                  tmp_if_expr$12 = (signed int)*printf_parse$$1$$1$$1$$5$$1$$1$$np <= 57 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$12 = (_Bool)0;
                if(!tmp_if_expr$12)
                  break;

                printf_parse$$1$$1$$1$$5$$1$$1$$np = printf_parse$$1$$1$$1$$5$$1$$1$$np + 1l;
              }
              while((_Bool)1);
              if((signed int)*printf_parse$$1$$1$$1$$5$$1$$1$$np == 36)
              {
                unsigned long int printf_parse$$1$$1$$1$$5$$1$$1$$2$$n = (unsigned long int)0;
                printf_parse$$1$$1$$1$$5$$1$$1$$np = cp;
                do
                {
                  if((signed int)*printf_parse$$1$$1$$1$$5$$1$$1$$np >= 48)
                    tmp_if_expr$13 = (signed int)*printf_parse$$1$$1$$1$$5$$1$$1$$np <= 57 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr$13 = (_Bool)0;
                  if(!tmp_if_expr$13)
                    break;

                  printf_parse$$1$$1$$1$$5$$1$$1$$2$$n=xsum(printf_parse$$1$$1$$1$$5$$1$$1$$2$$n <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)printf_parse$$1$$1$$1$$5$$1$$1$$2$$n * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*printf_parse$$1$$1$$1$$5$$1$$1$$np - 48));
                  printf_parse$$1$$1$$1$$5$$1$$1$$np = printf_parse$$1$$1$$1$$5$$1$$1$$np + 1l;
                }
                while((_Bool)1);
                if(printf_parse$$1$$1$$1$$5$$1$$1$$2$$n == 0ul)
                  goto error;

                if(printf_parse$$1$$1$$1$$5$$1$$1$$2$$n == 18446744073709551615UL)
                  goto error;

                dp->precision_arg_index = printf_parse$$1$$1$$1$$5$$1$$1$$2$$n - (unsigned long int)1;
                cp = printf_parse$$1$$1$$1$$5$$1$$1$$np + (signed long int)1;
              }

            }

          }

          if(dp->precision_arg_index == 18446744073709551615ul)
          {
            tmp_post$14 = arg_posn;
            arg_posn = arg_posn + 1ul;
            dp->precision_arg_index = tmp_post$14;
            if(dp->precision_arg_index == 18446744073709551615ul)
              goto error;

          }

          unsigned long int printf_parse$$1$$1$$1$$5$$1$$3$$n = dp->precision_arg_index;
          if(printf_parse$$1$$1$$1$$5$$1$$3$$n >= a_allocated)
          {
            unsigned long int printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory_size;
            struct anonymous$3 *printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory;
            a_allocated = a_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)a_allocated * (unsigned long int)2 : 18446744073709551615UL;
            if(printf_parse$$1$$1$$1$$5$$1$$3$$n >= a_allocated)
              a_allocated=xsum(printf_parse$$1$$1$$1$$5$$1$$3$$n, (unsigned long int)1);

            printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory_size = a_allocated <= 18446744073709551615UL / sizeof(struct anonymous$3) /*32ul*/  ? (unsigned long int)a_allocated * sizeof(struct anonymous$3) /*32ul*/  : 18446744073709551615UL;
            if(printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory_size == 18446744073709551615UL)
              goto out_of_memory;

            if(!(a->arg == a->direct_alloc_arg))
            {
              return_value_realloc$15=realloc((void *)a->arg, printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory_size);
              tmp_if_expr$17 = return_value_realloc$15;
            }

            else
            {
              return_value_malloc$16=malloc(printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory_size);
              tmp_if_expr$17 = return_value_malloc$16;
            }
            printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory = (struct anonymous$3 *)tmp_if_expr$17;
            if(printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory == ((struct anonymous$3 *)NULL))
              goto out_of_memory;

            if(a->arg == a->direct_alloc_arg)
              memcpy((void *)printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory, (const void *)a->arg, a->count * sizeof(struct anonymous$3) /*32ul*/ );

            a->arg = printf_parse$$1$$1$$1$$5$$1$$3$$1$$memory;
          }

          for( ; printf_parse$$1$$1$$1$$5$$1$$3$$n >= a->count; (a->arg + (signed long int)tmp_post$18)->type = (enum anonymous$5)TYPE_NONE)
          {
            tmp_post$18 = a->count;
            a->count = a->count + 1ul;
          }
          if((signed int)(a->arg + (signed long int)printf_parse$$1$$1$$1$$5$$1$$3$$n)->type == TYPE_NONE)
            (a->arg + (signed long int)printf_parse$$1$$1$$1$$5$$1$$3$$n)->type = (enum anonymous$5)TYPE_INT;

          else
            if(!((signed int)(a->arg + (signed long int)printf_parse$$1$$1$$1$$5$$1$$3$$n)->type == TYPE_INT))
              goto error;

        }

        else
        {
          unsigned long int precision_length;
          dp->precision_start = cp - (signed long int)1;
          do
          {
            if((signed int)*cp >= 48)
              tmp_if_expr$19 = (signed int)*cp <= 57 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$19 = (_Bool)0;
            if(!tmp_if_expr$19)
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

      enum anonymous$5 type;
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
                  tmp_if_expr$20 = (_Bool)1;

                else
                  tmp_if_expr$20 = (signed int)*cp == 90 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr$20)
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
      tmp_post$21 = cp;
      cp = cp + 1l;
      c = *tmp_post$21;
      switch((signed int)c)
      {
        case 100:

        case 105:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous$5)TYPE_LONGLONGINT;

          else
            if(flags >= 8)
              type = (enum anonymous$5)TYPE_LONGINT;

            else
              if(!((2 & flags) == 0))
                type = (enum anonymous$5)TYPE_SCHAR;

              else
                if(!((1 & flags) == 0))
                  type = (enum anonymous$5)TYPE_SHORT;

                else
                  type = (enum anonymous$5)TYPE_INT;
          break;
        }
        case 111:

        case 117:

        case 120:

        case 88:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous$5)TYPE_ULONGLONGINT;

          else
            if(flags >= 8)
              type = (enum anonymous$5)TYPE_ULONGINT;

            else
              if(!((2 & flags) == 0))
                type = (enum anonymous$5)TYPE_UCHAR;

              else
                if(!((1 & flags) == 0))
                  type = (enum anonymous$5)TYPE_USHORT;

                else
                  type = (enum anonymous$5)TYPE_UINT;
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
            type = (enum anonymous$5)TYPE_LONGDOUBLE;

          else
            type = (enum anonymous$5)TYPE_DOUBLE;
          break;
        }
        case 99:
        {
          if(flags >= 8)
            type = (enum anonymous$5)TYPE_WIDE_CHAR;

          else
            type = (enum anonymous$5)TYPE_CHAR;
          break;
        }
        case 67:
        {
          type = (enum anonymous$5)TYPE_WIDE_CHAR;
          c = (char)99;
          break;
        }
        case 115:
        {
          if(flags >= 8)
            type = (enum anonymous$5)TYPE_WIDE_STRING;

          else
            type = (enum anonymous$5)TYPE_STRING;
          break;
        }
        case 83:
        {
          type = (enum anonymous$5)TYPE_WIDE_STRING;
          c = (char)115;
          break;
        }
        case 112:
        {
          type = (enum anonymous$5)TYPE_POINTER;
          break;
        }
        case 110:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous$5)TYPE_COUNT_LONGLONGINT_POINTER;

          else
            if(flags >= 8)
              type = (enum anonymous$5)TYPE_COUNT_LONGINT_POINTER;

            else
              if(!((2 & flags) == 0))
                type = (enum anonymous$5)TYPE_COUNT_SCHAR_POINTER;

              else
                if(!((1 & flags) == 0))
                  type = (enum anonymous$5)TYPE_COUNT_SHORT_POINTER;

                else
                  type = (enum anonymous$5)TYPE_COUNT_INT_POINTER;
          break;
        }
        case 37:
        {
          type = (enum anonymous$5)TYPE_NONE;
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
          tmp_post$22 = arg_posn;
          arg_posn = arg_posn + 1ul;
          dp->arg_index = tmp_post$22;
          if(dp->arg_index == 18446744073709551615ul)
            goto error;

        }

        unsigned long int printf_parse$$1$$1$$1$$6$$2$$2$$n = dp->arg_index;
        if(printf_parse$$1$$1$$1$$6$$2$$2$$n >= a_allocated)
        {
          unsigned long int printf_parse$$1$$1$$1$$6$$2$$2$$1$$memory_size;
          struct anonymous$3 *memory;
          a_allocated = a_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)a_allocated * (unsigned long int)2 : 18446744073709551615UL;
          if(printf_parse$$1$$1$$1$$6$$2$$2$$n >= a_allocated)
            a_allocated=xsum(printf_parse$$1$$1$$1$$6$$2$$2$$n, (unsigned long int)1);

          printf_parse$$1$$1$$1$$6$$2$$2$$1$$memory_size = a_allocated <= 18446744073709551615UL / sizeof(struct anonymous$3) /*32ul*/  ? (unsigned long int)a_allocated * sizeof(struct anonymous$3) /*32ul*/  : 18446744073709551615UL;
          if(printf_parse$$1$$1$$1$$6$$2$$2$$1$$memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(!(a->arg == a->direct_alloc_arg))
          {
            return_value_realloc$23=realloc((void *)a->arg, printf_parse$$1$$1$$1$$6$$2$$2$$1$$memory_size);
            tmp_if_expr$25 = return_value_realloc$23;
          }

          else
          {
            return_value_malloc$24=malloc(printf_parse$$1$$1$$1$$6$$2$$2$$1$$memory_size);
            tmp_if_expr$25 = return_value_malloc$24;
          }
          memory = (struct anonymous$3 *)tmp_if_expr$25;
          if(memory == ((struct anonymous$3 *)NULL))
            goto out_of_memory;

          if(a->arg == a->direct_alloc_arg)
            memcpy((void *)memory, (const void *)a->arg, a->count * sizeof(struct anonymous$3) /*32ul*/ );

          a->arg = memory;
        }

        for( ; printf_parse$$1$$1$$1$$6$$2$$2$$n >= a->count; (a->arg + (signed long int)tmp_post$26)->type = (enum anonymous$5)TYPE_NONE)
        {
          tmp_post$26 = a->count;
          a->count = a->count + 1ul;
        }
        if((signed int)(a->arg + (signed long int)printf_parse$$1$$1$$1$$6$$2$$2$$n)->type == TYPE_NONE)
          (a->arg + (signed long int)printf_parse$$1$$1$$1$$6$$2$$2$$n)->type = type;

        else
          if(!((a->arg + (signed long int)printf_parse$$1$$1$$1$$6$$2$$2$$n)->type == type))
            goto error;

      }

      dp->conversion = c;
      dp->dir_end = cp;
      d->count = d->count + 1ul;
      if(d->count >= d_allocated)
      {
        unsigned long int memory_size;
        struct anonymous$1 *printf_parse$$1$$1$$1$$7$$memory;
        d_allocated = d_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)d_allocated * (unsigned long int)2 : 18446744073709551615UL;
        memory_size = d_allocated <= 18446744073709551615UL / sizeof(struct anonymous$1) /*88ul*/  ? (unsigned long int)d_allocated * sizeof(struct anonymous$1) /*88ul*/  : 18446744073709551615UL;
        if(memory_size == 18446744073709551615UL)
          goto out_of_memory;

        if(!(d->dir == d->direct_alloc_dir))
        {
          return_value_realloc$27=realloc((void *)d->dir, memory_size);
          tmp_if_expr$29 = return_value_realloc$27;
        }

        else
        {
          return_value_malloc$28=malloc(memory_size);
          tmp_if_expr$29 = return_value_malloc$28;
        }
        printf_parse$$1$$1$$1$$7$$memory = (struct anonymous$1 *)tmp_if_expr$29;
        if(printf_parse$$1$$1$$1$$7$$memory == ((struct anonymous$1 *)NULL))
          goto out_of_memory;

        if(d->dir == d->direct_alloc_dir)
          memcpy((void *)printf_parse$$1$$1$$1$$7$$memory, (const void *)d->dir, d->count * sizeof(struct anonymous$1) /*88ul*/ );

        d->dir = printf_parse$$1$$1$$1$$7$$memory;
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

  signed int *return_value___errno_location$30;
  return_value___errno_location$30=__errno_location();
  *return_value___errno_location$30 = 22;
  return -1;

out_of_memory:
  ;
  if(!(a->arg == a->direct_alloc_arg))
    free((void *)a->arg);

  if(!(d->dir == d->direct_alloc_dir))
    free((void *)d->dir);

  signed int *return_value___errno_location$31;
  return_value___errno_location$31=__errno_location();
  *return_value___errno_location$31 = 12;
  return -1;
}

// rpl_fgetfilecon
// file getfilecon.c line 82
extern signed int rpl_fgetfilecon(signed int fd, char **con)
{
  signed int ret;
  ret=fgetfilecon(fd, con);
  signed int return_value_map_to_failure$1;
  return_value_map_to_failure$1=map_to_failure(ret, con);
  return return_value_map_to_failure$1;
}

// rpl_getfilecon
// file getfilecon.c line 68
extern signed int rpl_getfilecon(const char *file, char **con)
{
  signed int ret;
  ret=getfilecon(file, con);
  signed int return_value_map_to_failure$1;
  return_value_map_to_failure$1=map_to_failure(ret, con);
  return return_value_map_to_failure$1;
}

// rpl_lgetfilecon
// file getfilecon.c line 75
extern signed int rpl_lgetfilecon(const char *file, char **con)
{
  signed int ret;
  ret=lgetfilecon(file, con);
  signed int return_value_map_to_failure$1;
  return_value_map_to_failure$1=map_to_failure(ret, con);
  return return_value_map_to_failure$1;
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
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      *return_value___errno_location$1 = 12;
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
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      *return_value___errno_location$1 = 12;
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

// string_hash$link1
// file localename.c line 2519
static unsigned long int string_hash$link1(const void *x$link1)
{
  const char *s$link1 = (const char *)x$link1;
  unsigned long int h$link1 = (unsigned long int)0;
  for( ; !(*s$link1 == 0); s$link1 = s$link1 + 1l)
    h$link1 = (unsigned long int)*s$link1 + (h$link1 << 9 | h$link1 >> sizeof(unsigned long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)9);
  return h$link1;
}

// strnlen1
// file strnlen1.c line 28
extern unsigned long int strnlen1(const char *string, unsigned long int maxlen)
{
  const char *end;
  void *return_value_memchr$1;
  return_value_memchr$1=memchr((const void *)string, 0, maxlen);
  end = (const char *)return_value_memchr$1;
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
  signed int return_value_strcmp$1;
  for( ; !(p == ((struct hash_node *)NULL)); p = p->next)
  {
    return_value_strcmp$1=strcmp(p->contents, string);
    if(return_value_strcmp$1 == 0)
      return p->contents;

  }
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(string);
  size = return_value_strlen$2 + (unsigned long int)1;
  void *return_value_malloc$3;
  return_value_malloc$3=malloc(8ul + size);
  new_node = (struct hash_node *)return_value_malloc$3;
  signed int return_value_strcmp$5;
  if(new_node == ((struct hash_node *)NULL))
    return "C";

  else
  {
    memcpy((void *)new_node->contents, (const void *)string, size);
    do
    {
      signed int return_value_pthread_mutex_lock$4;
      return_value_pthread_mutex_lock$4=pthread_mutex_lock(&struniq_lock);
      if(!(return_value_pthread_mutex_lock$4 == 0))
        abort();

    }
    while((_Bool)0);
    p = struniq_hash_table[(signed long int)slot];
    for( ; !(p == ((struct hash_node *)NULL)); p = p->next)
    {
      return_value_strcmp$5=strcmp(p->contents, string);
      if(return_value_strcmp$5 == 0)
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
      signed int return_value_pthread_mutex_unlock$6;
      return_value_pthread_mutex_unlock$6=pthread_mutex_unlock(&struniq_lock);
      if(!(return_value_pthread_mutex_unlock$6 == 0))
        abort();

    }
    while((_Bool)0);
    return new_node->contents;
  }
}

// struniq$link1
// file localename.c line 2551
static const char * struniq$link1(const char *string$link1)
{
  unsigned long int hashcode$link1;
  hashcode$link1=string_hash$link1((const void *)string$link1);
  unsigned long int slot$link1 = hashcode$link1 % (unsigned long int)257;
  unsigned long int size$link1;
  struct hash_node *new_node$link1;
  struct hash_node *p$link1 = struniq_hash_table$link1[(signed long int)slot$link1];
  signed int return_value_strcmp$1$link1;
  for( ; !(p$link1 == ((struct hash_node *)NULL)); p$link1 = p$link1->next)
  {
    return_value_strcmp$1$link1=strcmp(p$link1->contents, string$link1);
    if(return_value_strcmp$1$link1 == 0)
      return p$link1->contents;

  }
  unsigned long int return_value_strlen$2$link1;
  return_value_strlen$2$link1=strlen(string$link1);
  size$link1 = return_value_strlen$2$link1 + (unsigned long int)1;
  void *return_value_malloc$3$link1;
  return_value_malloc$3$link1=malloc(8ul + size$link1);
  new_node$link1 = (struct hash_node *)return_value_malloc$3$link1;
  signed int return_value_strcmp$5$link1;
  if(new_node$link1 == ((struct hash_node *)NULL))
    return "C";

  else
  {
    memcpy((void *)new_node$link1->contents, (const void *)string$link1, size$link1);
    do
    {
      signed int return_value_pthread_mutex_lock$4$link1;
      return_value_pthread_mutex_lock$4$link1=pthread_mutex_lock(&struniq_lock$link1);
      if(!(return_value_pthread_mutex_lock$4$link1 == 0))
        abort();

    }
    while((_Bool)0);
    p$link1 = struniq_hash_table$link1[(signed long int)slot$link1];
    for( ; !(p$link1 == ((struct hash_node *)NULL)); p$link1 = p$link1->next)
    {
      return_value_strcmp$5$link1=strcmp(p$link1->contents, string$link1);
      if(return_value_strcmp$5$link1 == 0)
      {
        free((void *)new_node$link1);
        new_node$link1 = p$link1;
        goto done;
      }

    }
    new_node$link1->next = struniq_hash_table$link1[(signed long int)slot$link1];
    struniq_hash_table$link1[(signed long int)slot$link1] = new_node$link1;
    do
    {

    done:
      ;
      signed int return_value_pthread_mutex_unlock$6$link1;
      return_value_pthread_mutex_unlock$6$link1=pthread_mutex_unlock(&struniq_lock$link1);
      if(!(return_value_pthread_mutex_unlock$6$link1 == 0))
        abort();

    }
    while((_Bool)0);
    return new_node$link1->contents;
  }
}

// vasnprintf
// file vasnprintf.h line 72
extern char * vasnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, void **args)
{
  struct anonymous d;
  struct anonymous$2 a;
  signed int return_value_printf_parse$1;
  return_value_printf_parse$1=printf_parse(format, &d, &a);
  void *return_value_malloc$6;
  void *return_value_realloc$7;
  unsigned long int tmp_post$8;
  const char *tmp_post$9;
  void *return_value_malloc$10;
  void *return_value_realloc$11;
  char *tmp_post$12;
  char *tmp_post$13;
  char *tmp_post$14;
  char *tmp_post$15;
  char *tmp_post$16;
  char *tmp_post$17;
  char *tmp_post$18;
  char *tmp_post$19;
  char *tmp_post$20;
  const char *tmp_post$21;
  char *tmp_post$22;
  const char *tmp_post$23;
  char *tmp_post$24;
  char *tmp_post$25;
  char *tmp_post$26;
  unsigned int tmp_post$27;
  unsigned int tmp_post$28;
  void *return_value_malloc$30;
  void *return_value_realloc$31;
  signed int tmp_if_expr$38;
  _Bool tmp_if_expr$37;
  void *return_value_malloc$40;
  void *return_value_realloc$41;
  void *return_value_malloc$44;
  void *return_value_realloc$45;
  if(!(return_value_printf_parse$1 >= 0))
    return (char *)(void *)0;

  else
  {
    signed int return_value_printf_fetchargs$3;
    return_value_printf_fetchargs$3=printf_fetchargs(args, &a);
    if(!(return_value_printf_fetchargs$3 >= 0))
    {
      if(!(d.dir == d.direct_alloc_dir))
        free((void *)d.dir);

      if(!(a.arg == a.direct_alloc_arg))
        free((void *)a.arg);

      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      *return_value___errno_location$2 = 22;
      return (char *)(void *)0;
    }

    unsigned long int buf_neededlength;
    char *buf;
    char *buf_malloced;
    const char *cp;
    unsigned long int i;
    struct anonymous$1 *dp;
    char *result;
    unsigned long int allocated;
    unsigned long int length;
    buf_neededlength=xsum4((unsigned long int)7, d.max_width_length, d.max_precision_length, (unsigned long int)6);
    if(!(buf_neededlength >= 4000ul))
    {
      void *return_value___builtin_alloca$4;
      return_value___builtin_alloca$4=__builtin_alloca(buf_neededlength * sizeof(char) /*1ul*/ );
      buf = (char *)return_value___builtin_alloca$4;
      buf_malloced = (char *)(void *)0;
    }

    else
    {
      unsigned long int buf_memsize = buf_neededlength <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)buf_neededlength * sizeof(char) /*1ul*/  : 18446744073709551615UL;
      if(buf_memsize == 18446744073709551615UL)
        goto out_of_memory_1;

      void *return_value_malloc$5;
      return_value_malloc$5=malloc(buf_memsize);
      buf = (char *)return_value_malloc$5;
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
        unsigned long int vasnprintf$$1$$2$$5$$1$$1$$n = (unsigned long int)(dp->dir_start - cp);
        unsigned long int vasnprintf$$1$$2$$5$$1$$1$$augmented_length;
        vasnprintf$$1$$2$$5$$1$$1$$augmented_length=xsum$link1(length, vasnprintf$$1$$2$$5$$1$$1$$n);
        if(!(allocated >= vasnprintf$$1$$2$$5$$1$$1$$augmented_length))
        {
          unsigned long int vasnprintf$$1$$2$$5$$1$$1$$1$$memory_size;
          char *vasnprintf$$1$$2$$5$$1$$1$$1$$memory;
          allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
          if(!(allocated >= vasnprintf$$1$$2$$5$$1$$1$$augmented_length))
            allocated = vasnprintf$$1$$2$$5$$1$$1$$augmented_length;

          vasnprintf$$1$$2$$5$$1$$1$$1$$memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
          if(vasnprintf$$1$$2$$5$$1$$1$$1$$memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(result == ((char *)NULL) || result == resultbuf)
          {
            return_value_malloc$6=malloc(vasnprintf$$1$$2$$5$$1$$1$$1$$memory_size);
            vasnprintf$$1$$2$$5$$1$$1$$1$$memory = (char *)return_value_malloc$6;
          }

          else
          {
            return_value_realloc$7=realloc((void *)result, vasnprintf$$1$$2$$5$$1$$1$$1$$memory_size);
            vasnprintf$$1$$2$$5$$1$$1$$1$$memory = (char *)return_value_realloc$7;
          }
          if(vasnprintf$$1$$2$$5$$1$$1$$1$$memory == ((char *)NULL))
            goto out_of_memory;

          if(result == resultbuf && length >= 1ul)
            memcpy((void *)vasnprintf$$1$$2$$5$$1$$1$$1$$memory, (const void *)result, length);

          result = vasnprintf$$1$$2$$5$$1$$1$$1$$memory;
        }

        memcpy((void *)(result + (signed long int)length), (const void *)(const char *)cp, vasnprintf$$1$$2$$5$$1$$1$$n);
        length = vasnprintf$$1$$2$$5$$1$$1$$augmented_length;
      }

      if(i == d.count)
        break;

      if((signed int)dp->conversion == 37)
      {
        unsigned long int augmented_length;
        if(!(dp->arg_index == 18446744073709551615ul))
          abort();

        augmented_length=xsum$link1(length, (unsigned long int)1);
        if(!(allocated >= augmented_length))
        {
          unsigned long int vasnprintf$$1$$2$$5$$1$$2$$1$$memory_size;
          char *memory;
          allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
          if(!(allocated >= augmented_length))
            allocated = augmented_length;

          vasnprintf$$1$$2$$5$$1$$2$$1$$memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
          if(vasnprintf$$1$$2$$5$$1$$2$$1$$memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(result == ((char *)NULL) || result == resultbuf)
          {
            return_value_malloc$10=malloc(vasnprintf$$1$$2$$5$$1$$2$$1$$memory_size);
            memory = (char *)return_value_malloc$10;
          }

          else
          {
            return_value_realloc$11=realloc((void *)result, vasnprintf$$1$$2$$5$$1$$2$$1$$memory_size);
            memory = (char *)return_value_realloc$11;
          }
          if(memory == ((char *)NULL))
            goto out_of_memory;

          if(result == resultbuf && length >= 1ul)
            memcpy((void *)memory, (const void *)result, length);

          result = memory;
        }

        result[(signed long int)length] = (char)37;
        length = augmented_length;
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
          enum anonymous$5 type = (a.arg + (signed long int)dp->arg_index)->type;
          signed int flags = dp->flags;
          char *fbp;
          unsigned int prefix_count;
          signed int prefixes[2l];
          signed int orig_errno;
          fbp = buf;
          tmp_post$12 = fbp;
          fbp = fbp + 1l;
          *tmp_post$12 = (char)37;
          if(!((1 & flags) == 0))
          {
            tmp_post$13 = fbp;
            fbp = fbp + 1l;
            *tmp_post$13 = (char)39;
          }

          if(!((2 & flags) == 0))
          {
            tmp_post$14 = fbp;
            fbp = fbp + 1l;
            *tmp_post$14 = (char)45;
          }

          if(!((4 & flags) == 0))
          {
            tmp_post$15 = fbp;
            fbp = fbp + 1l;
            *tmp_post$15 = (char)43;
          }

          if(!((8 & flags) == 0))
          {
            tmp_post$16 = fbp;
            fbp = fbp + 1l;
            *tmp_post$16 = (char)32;
          }

          if(!((16 & flags) == 0))
          {
            tmp_post$17 = fbp;
            fbp = fbp + 1l;
            *tmp_post$17 = (char)35;
          }

          if(!((64 & flags) == 0))
          {
            tmp_post$18 = fbp;
            fbp = fbp + 1l;
            *tmp_post$18 = (char)73;
          }

          if(!((32 & flags) == 0))
          {
            tmp_post$19 = fbp;
            fbp = fbp + 1l;
            *tmp_post$19 = (char)48;
          }

          if(!(dp->width_start == dp->width_end))
          {
            unsigned long int vasnprintf$$1$$2$$5$$1$$3$$2$$1$$1$$n = (unsigned long int)(dp->width_end - dp->width_start);
            memcpy((void *)fbp, (const void *)dp->width_start, vasnprintf$$1$$2$$5$$1$$3$$2$$1$$1$$n * sizeof(char) /*1ul*/ );
            fbp = fbp + (signed long int)vasnprintf$$1$$2$$5$$1$$3$$2$$1$$1$$n;
          }

          if(!(dp->precision_start == dp->precision_end))
          {
            unsigned long int vasnprintf$$1$$2$$5$$1$$3$$2$$2$$1$$n = (unsigned long int)(dp->precision_end - dp->precision_start);
            memcpy((void *)fbp, (const void *)dp->precision_start, vasnprintf$$1$$2$$5$$1$$3$$2$$2$$1$$n * sizeof(char) /*1ul*/ );
            fbp = fbp + (signed long int)vasnprintf$$1$$2$$5$$1$$3$$2$$2$$1$$n;
          }

          switch((signed int)type)
          {
            case TYPE_LONGLONGINT:

            case TYPE_ULONGLONGINT:
            {
              tmp_post$24 = fbp;
              fbp = fbp + 1l;
              *tmp_post$24 = (char)108;
            }
            case TYPE_LONGINT:

            case TYPE_ULONGINT:

            case TYPE_WIDE_CHAR:

            case TYPE_WIDE_STRING:
            {
              tmp_post$25 = fbp;
              fbp = fbp + 1l;
              *tmp_post$25 = (char)108;
              break;
            }
            case TYPE_LONGDOUBLE:
            {
              tmp_post$26 = fbp;
              fbp = fbp + 1l;
              *tmp_post$26 = (char)76;
            }
          }
          *fbp = dp->conversion;
          fbp[(signed long int)1] = (char)0;
          prefix_count = (unsigned int)0;
          if(!(dp->width_arg_index == 18446744073709551615ul))
          {
            if(!((signed int)(a.arg + (signed long int)dp->width_arg_index)->type == TYPE_INT))
              abort();

            tmp_post$27 = prefix_count;
            prefix_count = prefix_count + 1u;
            prefixes[(signed long int)tmp_post$27] = (a.arg + (signed long int)dp->width_arg_index)->a.a_int;
          }

          if(!(dp->precision_arg_index == 18446744073709551615ul))
          {
            if(!((signed int)(a.arg + (signed long int)dp->precision_arg_index)->type == TYPE_INT))
              abort();

            tmp_post$28 = prefix_count;
            prefix_count = prefix_count + 1u;
            prefixes[(signed long int)tmp_post$28] = (a.arg + (signed long int)dp->precision_arg_index)->a.a_int;
          }

          unsigned long int return_value_xsum$32;
          return_value_xsum$32=xsum$link1(length, (((unsigned long int)2 + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));
          if(!(allocated >= return_value_xsum$32))
          {
            unsigned long int memory_size;
            char *vasnprintf$$1$$2$$5$$1$$3$$2$$6$$memory;
            allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
            unsigned long int return_value_xsum$29;
            return_value_xsum$29=xsum$link1(length, (((unsigned long int)2 + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));
            if(!(allocated >= return_value_xsum$29))
              allocated=xsum$link1(length, (((unsigned long int)2 + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));

            memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
            if(memory_size == 18446744073709551615UL)
              goto out_of_memory;

            if(result == ((char *)NULL) || result == resultbuf)
            {
              return_value_malloc$30=malloc(memory_size);
              vasnprintf$$1$$2$$5$$1$$3$$2$$6$$memory = (char *)return_value_malloc$30;
            }

            else
            {
              return_value_realloc$31=realloc((void *)result, memory_size);
              vasnprintf$$1$$2$$5$$1$$3$$2$$6$$memory = (char *)return_value_realloc$31;
            }
            if(vasnprintf$$1$$2$$5$$1$$3$$2$$6$$memory == ((char *)NULL))
              goto out_of_memory;

            if(result == resultbuf && length >= 1ul)
              memcpy((void *)vasnprintf$$1$$2$$5$$1$$3$$2$$6$$memory, (const void *)result, length);

            result = vasnprintf$$1$$2$$5$$1$$3$$2$$6$$memory;
          }

          *((char *)(result + (signed long int)length)) = (char)0;
          signed int *return_value___errno_location$33;
          return_value___errno_location$33=__errno_location();
          orig_errno = *return_value___errno_location$33;
          do
          {
            signed int count = -1;
            signed int retcount = 0;
            unsigned long int maxlen = allocated - length;
            if(maxlen >= 2147483648ul)
              maxlen = (unsigned long int)0x7fffffff / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ );

            maxlen = maxlen * (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ );
            signed int *return_value___errno_location$34;
            return_value___errno_location$34=__errno_location();
            *return_value___errno_location$34 = 0;
            switch((signed int)type)
            {
              case TYPE_SCHAR:
              {
                signed int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$1$$arg = (signed int)(a.arg + (signed long int)dp->arg_index)->a.a_schar;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$1$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$1$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$1$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_UCHAR:
              {
                unsigned int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$2$$arg = (unsigned int)(a.arg + (signed long int)dp->arg_index)->a.a_uchar;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$2$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$2$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$2$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_SHORT:
              {
                signed int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$3$$arg = (signed int)(a.arg + (signed long int)dp->arg_index)->a.a_short;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$3$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$3$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$3$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_USHORT:
              {
                unsigned int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$4$$arg = (unsigned int)(a.arg + (signed long int)dp->arg_index)->a.a_ushort;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$4$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$4$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$4$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_INT:
              {
                signed int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$5$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_int;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$5$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$5$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$5$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_UINT:
              {
                unsigned int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$6$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_uint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$6$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$6$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$6$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_LONGINT:
              {
                signed long int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$7$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_longint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$7$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$7$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$7$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_ULONGINT:
              {
                unsigned long int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$8$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_ulongint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$8$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$8$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$8$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_LONGLONGINT:
              {
                signed long long int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$9$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_longlongint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$9$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$9$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$9$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_ULONGLONGINT:
              {
                unsigned long long int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$10$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_ulonglongint;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$10$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$10$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$10$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_DOUBLE:
              {
                double arg = (a.arg + (signed long int)dp->arg_index)->a.a_double;
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
              case TYPE_LONGDOUBLE:
              {
                long double vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$12$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_longdouble;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$12$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$12$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$12$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_CHAR:
              {
                signed int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$13$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_char;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$13$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$13$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$13$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_WIDE_CHAR:
              {
                unsigned int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$14$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_wide_char;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$14$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$14$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$14$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_STRING:
              {
                const char *vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$15$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_string;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$15$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$15$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$15$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_WIDE_STRING:
              {
                const signed int *vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$16$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_wide_string;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$16$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$16$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$16$$arg, &count);
                    break;
                  }
                  default:
                    abort();
                }
                break;
              }
              case TYPE_POINTER:
              {
                void *vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$17$$arg = (a.arg + (signed long int)dp->arg_index)->a.a_pointer;
                switch(prefix_count)
                {
                  case (unsigned int)0:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$17$$arg, &count);
                    break;
                  }
                  case (unsigned int)1:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$17$$arg, &count);
                    break;
                  }
                  case (unsigned int)2:
                  {
                    retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$1$$17$$arg, &count);
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
              signed int *return_value___errno_location$35;
              return_value___errno_location$35=__errno_location();
              saved_errno = *return_value___errno_location$35;
              if(!(result == ((char *)NULL)) && !(result == resultbuf))
                free((void *)result);

              if(!(buf_malloced == ((char *)NULL)))
                free((void *)buf_malloced);

              if(!(d.dir == d.direct_alloc_dir))
                free((void *)d.dir);

              if(!(a.arg == a.direct_alloc_arg))
                free((void *)a.arg);

              signed int *return_value___errno_location$36;
              return_value___errno_location$36=__errno_location();
              if(!(saved_errno == 0))
                tmp_if_expr$38 = saved_errno;

              else
              {
                if((signed int)dp->conversion == 99)
                  tmp_if_expr$37 = (_Bool)1;

                else
                  tmp_if_expr$37 = (signed int)dp->conversion == 115 ? (_Bool)1 : (_Bool)0;
                tmp_if_expr$38 = tmp_if_expr$37 ? 84 : 22;
              }
              *return_value___errno_location$36 = tmp_if_expr$38;
              return (char *)(void *)0;
            }

            if((unsigned long int)(1u + (unsigned int)count) >= maxlen)
            {
              if(maxlen == 2147483647ul)
                goto overflow;

              else
              {
                unsigned long int n;
                unsigned long int return_value_xsum$39;
                return_value_xsum$39=xsum$link1(length, (((unsigned long int)((unsigned int)count + (unsigned int)2) + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));
                n=xmax(return_value_xsum$39, allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL);
                if(!(allocated >= n))
                {
                  unsigned long int vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory_size;
                  char *vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory;
                  allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
                  if(!(allocated >= n))
                    allocated = n;

                  vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
                  if(vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory_size == 18446744073709551615UL)
                    goto out_of_memory;

                  if(result == ((char *)NULL) || result == resultbuf)
                  {
                    return_value_malloc$40=malloc(vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory_size);
                    vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory = (char *)return_value_malloc$40;
                  }

                  else
                  {
                    return_value_realloc$41=realloc((void *)result, vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory_size);
                    vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory = (char *)return_value_realloc$41;
                  }
                  if(vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory == ((char *)NULL))
                    goto out_of_memory;

                  if(result == resultbuf && length >= 1ul)
                    memcpy((void *)vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory, (const void *)result, length);

                  result = vasnprintf$$1$$2$$5$$1$$3$$2$$7$$1$$5$$1$$1$$memory;
                }

                continue;
              }
            }

            length = length + (unsigned long int)count;
            break;
          }
          while((_Bool)1);
          signed int *return_value___errno_location$42;
          return_value___errno_location$42=__errno_location();
          *return_value___errno_location$42 = orig_errno;
        }
      }
      cp = dp->dir_end;
      i = i + 1ul;
    }
    unsigned long int return_value_xsum$46;
    return_value_xsum$46=xsum$link1(length, (unsigned long int)1);
    if(!(allocated >= return_value_xsum$46))
    {
      unsigned long int vasnprintf$$1$$2$$6$$memory_size;
      char *vasnprintf$$1$$2$$6$$memory;
      allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
      unsigned long int return_value_xsum$43;
      return_value_xsum$43=xsum$link1(length, (unsigned long int)1);
      if(!(allocated >= return_value_xsum$43))
        allocated=xsum$link1(length, (unsigned long int)1);

      vasnprintf$$1$$2$$6$$memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
      if(vasnprintf$$1$$2$$6$$memory_size == 18446744073709551615UL)
        goto out_of_memory;

      if(result == ((char *)NULL) || result == resultbuf)
      {
        return_value_malloc$44=malloc(vasnprintf$$1$$2$$6$$memory_size);
        vasnprintf$$1$$2$$6$$memory = (char *)return_value_malloc$44;
      }

      else
      {
        return_value_realloc$45=realloc((void *)result, vasnprintf$$1$$2$$6$$memory_size);
        vasnprintf$$1$$2$$6$$memory = (char *)return_value_realloc$45;
      }
      if(vasnprintf$$1$$2$$6$$memory == ((char *)NULL))
        goto out_of_memory;

      if(result == resultbuf && length >= 1ul)
        memcpy((void *)vasnprintf$$1$$2$$6$$memory, (const void *)result, length);

      result = vasnprintf$$1$$2$$6$$memory;
    }

    result[(signed long int)length] = (char)0;
    if(!(result == resultbuf) && !(1ul + length >= allocated))
    {
      char *vasnprintf$$1$$2$$7$$memory;
      void *return_value_realloc$47;
      return_value_realloc$47=realloc((void *)result, (length + (unsigned long int)1) * sizeof(char) /*1ul*/ );
      vasnprintf$$1$$2$$7$$memory = (char *)return_value_realloc$47;
      if(!(vasnprintf$$1$$2$$7$$memory == ((char *)NULL)))
        result = vasnprintf$$1$$2$$7$$memory;

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

    signed int *return_value___errno_location$48;
    return_value___errno_location$48=__errno_location();
    *return_value___errno_location$48 = 75;
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

    signed int *return_value___errno_location$49;
    return_value___errno_location$49=__errno_location();
    *return_value___errno_location$49 = 12;
    return (char *)(void *)0;
  }
}

// worker_thread_func
// file test-thread_create.c line 36
static void * worker_thread_func(void *arg)
{
  work_done = 1;
  return (void *)&dummy;
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

// xsum$link1
// file xsize.h line 55
static inline unsigned long int xsum$link1(unsigned long int size1$link1, unsigned long int size2$link1)
{
  unsigned long int sum$link1 = size1$link1 + size2$link1;
  return sum$link1 >= size1$link1 ? sum$link1 : 18446744073709551615UL;
}

// xsum4
// file xsize.h line 76
static inline unsigned long int xsum4(unsigned long int size1, unsigned long int size2, unsigned long int size3, unsigned long int size4)
{
  unsigned long int return_value_xsum$1;
  return_value_xsum$1=xsum$link1(size1, size2);
  unsigned long int return_value_xsum$2;
  return_value_xsum$2=xsum$link1(return_value_xsum$1, size3);
  unsigned long int return_value_xsum$3;
  return_value_xsum$3=xsum$link1(return_value_xsum$2, size4);
  return return_value_xsum$3;
}

