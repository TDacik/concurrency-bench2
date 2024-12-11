// tag-#anon#ST[S32'rm_so'||S32'rm_eo'|]
// file /usr/include/regex.h line 452
struct anonymous_2;

// tag-#anon#ST[S64'request_count'||S64'error_count'||S64'byte_count'||S64'duration'||S64'duration_count_ms'||S64'duration_0'||S64'duration_1'||S64'duration_2'||S64'duration_3'||S64'duration_4'||S64'duration_5'||S64'duration_6'||S64'status_1'||S64'status_2'||S64'status_3'||S64'status_4'||S64'status_5'||S64'status_304'||S64'connections'||*{SYM#tag-apr_table_t#}_SYM#tag-apr_table_t#_'events'||*{SYM#tag-apr_pool_t#}_SYM#tag-apr_pool_t#_'pool'||S64'get'||S64'post'||S64'html'||S64'img'||S64'cssjs'||S64'other'||S64'start_s'||S64'end_s'||S64'firstLine'||S64'lastLine'|]
// file qslog.c line 85
struct anonymous_3;

// tag-#anon#ST[S64'request_count'||S64'status_1'||S64'status_2'||S64'status_3'||S64'status_4'||S64'status_5'||S64'duration_count_ms'|]
// file qslog.c line 75
struct anonymous_1;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-apr_allocator_t
// file /usr/include/apr-1.0/apr_allocator.h line 41
struct apr_allocator_t;

// tag-apr_array_header_t
// file /usr/include/apr-1.0/apr_tables.h line 59
struct apr_array_header_t;

// tag-apr_pool_t
// file /usr/include/apr-1.0/apr_pools.h line 60
struct apr_pool_t;

// tag-apr_table_entry_t
// file /usr/include/apr-1.0/apr_tables.h line 78
struct apr_table_entry_t;

// tag-apr_table_t
// file /usr/include/apr-1.0/apr_tables.h line 56
struct apr_table_t;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-qs_event_st
// file qslog.c line 164
struct qs_event_st;

// tag-re_pattern_buffer
// file /usr/include/regex.h line 357
struct re_pattern_buffer;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-stat_rec_st
// file qslog.c line 119
struct stat_rec_st;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// apr_app_initialize
// file /usr/include/apr-1.0/apr_general.h line 191
signed int apr_app_initialize(signed int *, const char * const **, const char * const **);
// apr_palloc
// file /usr/include/apr-1.0/apr_pools.h line 430
void * apr_palloc(struct apr_pool_t *, unsigned long int);
// apr_pool_create_ex
// file /usr/include/apr-1.0/apr_pools.h line 196
signed int apr_pool_create_ex(struct apr_pool_t **, struct apr_pool_t *, signed int (*)(signed int), struct apr_allocator_t *);
// apr_pstrdup
// file /usr/include/apr-1.0/apr_strings.h line 95
char * apr_pstrdup(struct apr_pool_t *, const char *);
// apr_sleep
// file /usr/include/apr-1.0/apr_time.h line 181
void apr_sleep(signed long int);
// apr_table_elts
// file /usr/include/apr-1.0/apr_tables.h line 98
const struct apr_array_header_t * apr_table_elts(const struct apr_table_t *);
// apr_table_get
// file /usr/include/apr-1.0/apr_tables.h line 268
const char * apr_table_get(const struct apr_table_t *, const char *);
// apr_table_make
// file /usr/include/apr-1.0/apr_tables.h line 232
struct apr_table_t * apr_table_make(struct apr_pool_t *, signed int);
// apr_table_setn
// file /usr/include/apr-1.0/apr_tables.h line 304
void apr_table_setn(struct apr_table_t *, const char *, const char *);
// apr_table_unset
// file /usr/include/apr-1.0/apr_tables.h line 312
void apr_table_unset(struct apr_table_t *, const char *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atol
// file /usr/include/stdlib.h line 150
extern signed long int atol(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// createRec
// file qslog.c line 895
static struct stat_rec_st * createRec(struct apr_pool_t *pool, const char *id, const char *pattern);
// ctime
// file /usr/include/time.h line 264
extern char * ctime(const signed long int *);
// cutNext
// file qslog.c line 527
static char * cutNext(char **line);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgetc
// file /usr/include/stdio.h line 531
extern signed int fgetc(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// gcTable
// file qslog.c line 314
static void gcTable(struct apr_table_t *list);
// gcThread
// file qslog.c line 380
static void * gcThread(void *argv);
// getFreeMem
// file qslog.c line 557
static void getFreeMem(char *buf, signed int sz);
// getMinutes
// file qslog.c line 1551
static signed long int getMinutes(char *line);
// getRec
// file qslog.c line 952
static struct stat_rec_st * getRec(const char *value);
// getchar
// file /usr/include/stdio.h line 538
extern signed int getchar(void);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getgid
// file /usr/include/unistd.h line 681
extern unsigned int getgid(void);
// getloadavg
// file /usr/include/stdlib.h line 950
extern signed int getloadavg(double *, signed int);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// loadRule
// file qslog.c line 1924
static struct stat_rec_st * loadRule(struct apr_pool_t *pool, const char *confFile);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// loggerThread
// file qslog.c line 1719
static void * loggerThread(void *argv);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mstr2i
// file qslog.c line 1532
static signed int mstr2i(const char *m);
// nice
// file /usr/include/unistd.h line 598
extern signed int nice(signed int);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// printAndResetStat
// file qslog.c line 977
static void printAndResetStat(char *timeStr);
// printStat2File
// file qslog.c line 655
static void printStat2File(struct _IO_FILE *f, char *timeStr, struct stat_rec_st *stat_rec, signed int offline, signed int main, double *av, const char *mem);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous_0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// qerror
// file qslog.c line 399
static void qerror(const char *fmt, ...);
// qsInitEvent
// file qslog.c line 858
static void qsInitEvent(struct apr_pool_t *pool, struct apr_table_t *events);
// qsNoFloat
// file qslog.c line 492
static void qsNoFloat(char *s);
// qs_CMD
// file qs_util.h line 50
char * qs_CMD(const char *cmd);
// qs_countEventT
// file qslog.c line 363
static signed long int qs_countEventT(struct apr_table_t **list);
// qs_csInitLock
// file qs_util.h line 64
void qs_csInitLock();
// qs_csLock
// file qs_util.h line 65
void qs_csLock();
// qs_csUnLock
// file qs_util.h line 66
void qs_csUnLock();
// qs_deleteOldFiles
// file qs_util.h line 69
void qs_deleteOldFiles(const char *file_name, signed int generations);
// qs_freeEvent
// file qslog.c line 237
void qs_freeEvent(struct qs_event_st *ev);
// qs_getLine
// file qs_util.c line 150
signed int qs_getLine(char *s, signed int n);
// qs_getLinef
// file qs_util.h line 56
signed int qs_getLinef(char *s, signed int n, struct _IO_FILE *f);
// qs_insertEventT
// file qslog.c line 283
static signed long int qs_insertEventT(struct apr_table_t **list0, const char *id);
// qs_man_print
// file qs_util.h line 51
void qs_man_print(signed int man, const char *fmt, ...);
// qs_man_println
// file qs_util.h line 52
void qs_man_println(signed int man, const char *fmt, ...);
// qs_newEvent
// file qslog.c line 225
static struct qs_event_st * qs_newEvent(const char *id);
// qs_set2OfflineMode
// file qs_util.h line 60
void qs_set2OfflineMode();
// qs_setExpiration
// file qslog.c line 218
void qs_setExpiration(signed long int sec);
// qs_setTime
// file qs_util.h line 61
void qs_setTime(signed long int tme);
// qs_setuid
// file qs_util.h line 72
void qs_setuid(const char *username, const char *cmd);
// qs_tableSelector
// file qslog.c line 249
static signed int qs_tableSelector(const char *str);
// qs_time
// file qs_util.h line 59
void qs_time(signed long int *tme);
// qs_updateEvents
// file qslog.c line 817
static void qs_updateEvents(struct apr_pool_t *pool, char *E, struct apr_table_t *events);
// qsstrcasestr
// file qslog.c line 415
static char * qsstrcasestr(const char *s1, const char *s2);
// readStdin
// file qslog.c line 1633
static void readStdin(struct apr_pool_t *pool, const char *cstr);
// readStdinOffline
// file qslog.c line 1656
static void readStdinOffline(struct apr_pool_t *pool, const char *cstr);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// regcomp
// file /usr/include/regex.h line 562
extern signed int regcomp(struct re_pattern_buffer *, const char *, signed int);
// regexec
// file /usr/include/regex.h line 566
extern signed int regexec(const struct re_pattern_buffer *, const char *, unsigned long int, struct anonymous_2 *, signed int);
// rename
// file /usr/include/stdio.h line 180
extern signed int rename(const char *, const char *);
// rewinddir
// file /usr/include/dirent.h line 208
extern void rewinddir(struct __dirstream *);
// setgid
// file /usr/include/unistd.h line 717
extern signed int setgid(unsigned int);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// skipElement
// file qslog.c line 448
static char * skipElement(const char *line);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// stripNum
// file qslog.c line 507
static void stripNum(char **p);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tolower
// file /usr/include/ctype.h line 124
extern signed int tolower(signed int);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// updateClient
// file qslog.c line 1080
static void updateClient(struct apr_pool_t *pool, char *T, char *t, char *D, char *S, char *BI, char *B, char *R, char *I, char *U, char *Q, char *E, char *k, char *C, char *ct, signed long int tme, signed long int tmems, char *m);
// updateRec
// file qslog.c line 1219
static void updateRec(struct stat_rec_st *rec, char *T, char *t, char *D, char *S, char *s, char *a, char *A, char *BI, char *B, char *R, char *I, char *U, char *Q, char *E, char *k, char *C, signed long int tme, signed long int tmems);
// updateStat
// file qslog.c line 1332
static void updateStat(struct apr_pool_t *pool, const char *cstr, char *line);
// updateUrl
// file qslog.c line 1007
static void updateUrl(struct apr_pool_t *pool, char *R, char *S, signed long int tmems);
// usage
// file qslog.c line 1763
static void usage(const char *cmd, signed int man);
// vsprintf
// file /usr/include/stdio.h line 379
extern signed int vsprintf(char *, const char *, void **);

struct anonymous_2
{
  // rm_so
  signed int rm_so;
  // rm_eo
  signed int rm_eo;
};

struct anonymous_3
{
  // request_count
  signed long int request_count;
  // error_count
  signed long int error_count;
  // byte_count
  signed long long int byte_count;
  // duration
  signed long long int duration;
  // duration_count_ms
  signed long long int duration_count_ms;
  // duration_0
  signed long int duration_0;
  // duration_1
  signed long int duration_1;
  // duration_2
  signed long int duration_2;
  // duration_3
  signed long int duration_3;
  // duration_4
  signed long int duration_4;
  // duration_5
  signed long int duration_5;
  // duration_6
  signed long int duration_6;
  // status_1
  signed long int status_1;
  // status_2
  signed long int status_2;
  // status_3
  signed long int status_3;
  // status_4
  signed long int status_4;
  // status_5
  signed long int status_5;
  // status_304
  signed long int status_304;
  // connections
  signed long int connections;
  // events
  struct apr_table_t *events;
  // pool
  struct apr_pool_t *pool;
  // get
  signed long int get;
  // post
  signed long int post;
  // html
  signed long int html;
  // img
  signed long int img;
  // cssjs
  signed long int cssjs;
  // other
  signed long int other;
  // start_s
  signed long int start_s;
  // end_s
  signed long int end_s;
  // firstLine
  signed long int firstLine;
  // lastLine
  signed long int lastLine;
};

struct anonymous_1
{
  // request_count
  signed long int request_count;
  // status_1
  signed long int status_1;
  // status_2
  signed long int status_2;
  // status_3
  signed long int status_3;
  // status_4
  signed long int status_4;
  // status_5
  signed long int status_5;
  // duration_count_ms
  signed long long int duration_count_ms;
};

union anonymous_0
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

struct apr_array_header_t
{
  // pool
  struct apr_pool_t *pool;
  // elt_size
  signed int elt_size;
  // nelts
  signed int nelts;
  // nalloc
  signed int nalloc;
  // elts
  char *elts;
};

struct apr_table_entry_t
{
  // key
  char *key;
  // val
  char *val;
  // key_checksum
  unsigned int key_checksum;
};

struct dirent
{
  // d_ino
  unsigned long int d_ino;
  // d_off
  signed long int d_off;
  // d_reclen
  unsigned short int d_reclen;
  // d_type
  unsigned char d_type;
  // d_name
  char d_name[256l];
};

struct passwd
{
  // pw_name
  char *pw_name;
  // pw_passwd
  char *pw_passwd;
  // pw_uid
  unsigned int pw_uid;
  // pw_gid
  unsigned int pw_gid;
  // pw_gecos
  char *pw_gecos;
  // pw_dir
  char *pw_dir;
  // pw_shell
  char *pw_shell;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct qs_event_st
{
  // id
  char *id;
  // time
  signed long int time;
  // count
  signed long int count;
};

struct re_pattern_buffer
{
  // buffer
  unsigned char *buffer;
  // allocated
  unsigned long int allocated;
  // used
  unsigned long int used;
  // syntax
  unsigned long int syntax;
  // fastmap
  char *fastmap;
  // translate
  unsigned char *translate;
  // re_nsub
  unsigned long int re_nsub;
  // can_be_null
  unsigned int can_be_null : 1;
  // regs_allocated
  unsigned int regs_allocated : 2;
  // fastmap_accurate
  unsigned int fastmap_accurate : 1;
  // no_sub
  unsigned int no_sub : 1;
  // not_bol
  unsigned int not_bol : 1;
  // not_eol
  unsigned int not_eol : 1;
  // newline_anchor
  unsigned int newline_anchor : 1;
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

struct stat_rec_st
{
  // id
  char *id;
  // preg
  struct re_pattern_buffer preg;
  // next
  struct stat_rec_st *next;
  // line_count
  signed long int line_count;
  // i_byte_count
  signed long long int i_byte_count;
  // byte_count
  signed long long int byte_count;
  // duration_count
  signed long long int duration_count;
  // duration_count_ms
  signed long long int duration_count_ms;
  // duration_0
  signed long int duration_0;
  // duration_1
  signed long int duration_1;
  // duration_2
  signed long int duration_2;
  // duration_3
  signed long int duration_3;
  // duration_4
  signed long int duration_4;
  // duration_5
  signed long int duration_5;
  // duration_6
  signed long int duration_6;
  // connections
  signed long int connections;
  // sum
  unsigned long long int sum;
  // average
  unsigned long long int average;
  // average_count
  signed long int average_count;
  // averAge
  unsigned long long int averAge;
  // averAge_count
  signed long int averAge_count;
  // status_1
  signed long int status_1;
  // status_2
  signed long int status_2;
  // status_3
  signed long int status_3;
  // status_4
  signed long int status_4;
  // status_5
  signed long int status_5;
  // qos_v
  signed long int qos_v;
  // qos_s
  signed long int qos_s;
  // qos_d
  signed long int qos_d;
  // qos_k
  signed long int qos_k;
  // qos_t
  signed long int qos_t;
  // qos_l
  signed long int qos_l;
  // qos_ser
  signed long int qos_ser;
  // events
  struct apr_table_t *events;
  // pool
  struct apr_pool_t *pool;
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


// m_avms
// file qslog.c line 200
static signed int m_avms = 0;
// m_client_entries
// file qslog.c line 203
static struct apr_table_t *m_client_entries = (struct apr_table_t *)(void *)0;
// m_ct
// file qslog.c line 201
static signed int m_ct = 0;
// m_customcounter
// file qslog.c line 202
static signed int m_customcounter = 0;
// m_date_str
// file qslog.c line 198
static char m_date_str[32768l];
// m_f
// file qslog.c line 185
static struct _IO_FILE *m_f = (struct _IO_FILE *)(void *)0;
// m_f2
// file qslog.c line 186
static struct _IO_FILE *m_f2 = (struct _IO_FILE *)(void *)0;
// m_file_name
// file qslog.c line 187
static char m_file_name[32768l];
// m_file_name2
// file qslog.c line 188
static char m_file_name2[32768l];
// m_gc_event_list
// file qslog.c line 182
static struct qs_event_st **m_gc_event_list = (struct qs_event_st **)(void *)0;
// m_generations
// file qslog.c line 190
static signed int m_generations = 14;
// m_hasGC
// file qslog.c line 181
static signed int m_hasGC = 0;
// m_ip_list
// file qslog.c line 178
static struct apr_table_t *m_ip_list[8l];
// m_lines
// file qslog.c line 211
static signed long int m_lines = (signed long int)0;
// m_log_max
// file qslog.c line 180
static signed int m_log_max = 0;
// m_max_entries
// file qslog.c line 204
static signed int m_max_entries = 0;
// m_mem
// file qslog.c line 199
static signed int m_mem = 0;
// m_methods
// file qslog.c line 209
static signed int m_methods = 0;
// m_off
// file qslog.c line 195
static signed int m_off = 0;
// m_offline
// file qslog.c line 196
static signed int m_offline = 0;
// m_offline_count
// file qslog.c line 205
static signed int m_offline_count = 0;
// m_offline_data
// file qslog.c line 197
static signed int m_offline_data = 0;
// m_offline_url
// file qslog.c line 207
static signed int m_offline_url = 0;
// m_offline_url_cropped
// file qslog.c line 208
static signed int m_offline_url_cropped = 0;
// m_qs_expiration
// file qslog.c line 176
static signed long int m_qs_expiration = (signed long int)(60 * 10);
// m_qs_lock_cs
// file qs_util.c line 43
static union anonymous m_qs_lock_cs;
// m_qs_offline
// file qs_util.c line 45
static signed int m_qs_offline = 0;
// m_qs_virtualSystemTime
// file qs_util.c line 48
static signed long int m_qs_virtualSystemTime = (signed long int)0;
// m_rotate
// file qslog.c line 189
static signed int m_rotate = 0;
// m_stat_rec
// file qslog.c line 173
static struct stat_rec_st *m_stat_rec;
// m_stat_sub
// file qslog.c line 174
static struct stat_rec_st *m_stat_sub = (struct stat_rec_st *)(void *)0;
// m_trx
// file qslog.c line 192
static struct re_pattern_buffer m_trx;
// m_trx2
// file qslog.c line 193
static struct re_pattern_buffer m_trx2;
// m_url_entries
// file qslog.c line 206
static struct apr_table_t *m_url_entries = (struct apr_table_t *)(void *)0;
// m_user_list
// file qslog.c line 179
static struct apr_table_t *m_user_list[8l];
// m_verbose
// file qslog.c line 212
static signed int m_verbose = 0;
// man_date
// file qs_util.h line 33
static const char man_date[13l] = { 'J', 'a', 'n', 'u', 'a', 'r', 'y', ' ', '2', '0', '1', '6', 0 };
// man_version
// file qs_util.h line 32
static const char man_version[6l] = { '1', '1', '.', '2', '1', 0 };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// createRec
// file qslog.c line 895
static struct stat_rec_st * createRec(struct apr_pool_t *pool, const char *id, const char *pattern)
{
  struct stat_rec_st *rec;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc(sizeof(struct stat_rec_st) /*336ul*/ , (unsigned long int)1);
  rec = (struct stat_rec_st *)return_value_calloc_1;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(id);
  void *return_value_calloc_3;
  return_value_calloc_3=calloc(return_value_strlen_2 + (unsigned long int)2, (unsigned long int)1);
  rec->id = (char *)return_value_calloc_3;
  sprintf(rec->id, "%s;", id);
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(id);
  rec->id[(signed long int)(return_value_strlen_4 + (unsigned long int)1)] = (char)0;
  signed int return_value_regcomp_5;
  return_value_regcomp_5=regcomp(&rec->preg, pattern, 1);
  if(!(return_value_regcomp_5 == 0))
  {
    qerror("failed to compile pattern %s", pattern);
    exit(1);
  }

  rec->next = (struct stat_rec_st *)(void *)0;
  rec->line_count = (signed long int)0;
  rec->i_byte_count = (signed long long int)-1;
  rec->byte_count = (signed long long int)0;
  rec->duration_count = (signed long long int)0;
  rec->duration_count_ms = (signed long long int)0;
  rec->duration_0 = (signed long int)0;
  rec->duration_1 = (signed long int)0;
  rec->duration_2 = (signed long int)0;
  rec->duration_3 = (signed long int)0;
  rec->duration_4 = (signed long int)0;
  rec->duration_5 = (signed long int)0;
  rec->duration_6 = (signed long int)0;
  rec->connections = (signed long int)-1;
  rec->sum = (unsigned long long int)0;
  rec->average = (unsigned long long int)0;
  rec->average_count = (signed long int)0;
  rec->averAge = (unsigned long long int)0;
  rec->averAge_count = (signed long int)0;
  rec->status_1 = (signed long int)0;
  rec->status_2 = (signed long int)0;
  rec->status_3 = (signed long int)0;
  rec->status_4 = (signed long int)0;
  rec->status_5 = (signed long int)0;
  rec->qos_v = (signed long int)0;
  rec->qos_s = (signed long int)0;
  rec->qos_d = (signed long int)0;
  rec->qos_k = (signed long int)0;
  rec->qos_t = (signed long int)0;
  rec->qos_l = (signed long int)0;
  rec->qos_ser = (signed long int)0;
  rec->events=apr_table_make(pool, 300);
  rec->pool = pool;
  qsInitEvent(pool, rec->events);
  return rec;
}

// cutNext
// file qslog.c line 527
static char * cutNext(char **line)
{
  char *c = *line;
  char *p;
  p=skipElement(*line);
  char delim;
  *line = p;
  if(!(*p == 0))
  {
    p = p - 1l;
    p[(signed long int)0] = (char)0;
  }

  delim = c[(signed long int)0];
  unsigned long int return_value_strlen_2;
  if((signed int)delim == 34 || (signed int)delim == 39)
  {
    signed int len;
    c = c + 1l;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(c);
    len = (signed int)return_value_strlen_1;
    while(len >= 1)
    {
      return_value_strlen_2=strlen(c);
      if(!(c[-1l + (signed long int)return_value_strlen_2] == delim))
        break;

      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(c);
      c[(signed long int)(return_value_strlen_3 - (unsigned long int)1)] = (char)0;
      len = len - 1;
    }
  }

  return c;
}

// gcTable
// file qslog.c line 314
static void gcTable(struct apr_table_t *list)
{
  signed int max = 0;
  signed int i;
  struct apr_table_entry_t *entry;
  signed long int gmt_time;
  qs_time(&gmt_time);
  if(!(m_hasGC == 0))
    qs_csLock();

  const struct apr_array_header_t *return_value_apr_table_elts_1;
  return_value_apr_table_elts_1=apr_table_elts(list);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts_1->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts_2;
  do
  {
    return_value_apr_table_elts_2=apr_table_elts(list);
    if(i >= return_value_apr_table_elts_2->nelts)
      break;

    struct qs_event_st *lp = (struct qs_event_st *)(entry + (signed long int)i)->val;
    if(!(lp->time >= gmt_time + -m_qs_expiration))
    {
      m_gc_event_list[(signed long int)max] = lp;
      max = max + 1;
    }

    i = i + 1;
  }
  while((_Bool)1);
  i = 0;
  for( ; !(i >= max); i = i + 1)
  {
    if(!(m_hasGC == 0))
    {
      if(i % 10 == 9)
      {
        qs_csUnLock();
        apr_sleep((signed long int)1000);
        qs_csLock();
      }

    }

    apr_table_unset(list, m_gc_event_list[(signed long int)i]->id);
  }
  if(!(m_hasGC == 0))
    qs_csUnLock();

  i = 0;
  for( ; !(i >= max); i = i + 1)
    qs_freeEvent(m_gc_event_list[(signed long int)i]);
}

// gcThread
// file qslog.c line 380
static void * gcThread(void *argv)
{
  signed int t;
  m_hasGC = 1;
  while((_Bool)1)
  {
    sleep((unsigned int)10);
    t = 0;
    for( ; !(t >= 8); t = t + 1)
    {
      gcTable(m_ip_list[(signed long int)t]);
      gcTable(m_user_list[(signed long int)t]);
    }
  }
  return (void *)0;
}

// getFreeMem
// file qslog.c line 557
static void getFreeMem(char *buf, signed int sz)
{
  struct _IO_FILE *f;
  f=fopen("/proc/meminfo", "r");
  signed int mem = 0;
  buf[(signed long int)0] = (char)0;
  signed int return_value_qs_getLinef_1;
  signed int return_value_qs_getLinef_7;
  if(!(f == ((struct _IO_FILE *)NULL)))
  {
    char getFreeMem__1__1__line[32768l];
    do
    {
      return_value_qs_getLinef_1=qs_getLinef(getFreeMem__1__1__line, (signed int)sizeof(char [32768l]) /*32768ul*/ , f);
      if(!(return_value_qs_getLinef_1 == 0))
        break;

      signed int return_value_strncmp_3;
      return_value_strncmp_3=strncmp(getFreeMem__1__1__line, "MemFree: ", (unsigned long int)9);
      if(return_value_strncmp_3 == 0)
      {
        char *c = &getFreeMem__1__1__line[(signed long int)9];
        char *e;
        for( ; !(*c == 0); c = c + 1l)
          if(!((signed int)*c == 32))
          {
            if(!((signed int)*c == 9))
              break;

          }

        e = c;
        for( ; !(*e == 0); e = e + 1l)
          if((signed int)*e == 32)
            break;

        e[(signed long int)0] = (char)0;
        signed int return_value_atoi_2;
        return_value_atoi_2=atoi(c);
        mem = mem + return_value_atoi_2;
      }

      signed int return_value_strncmp_5;
      return_value_strncmp_5=strncmp(getFreeMem__1__1__line, "Cached: ", (unsigned long int)8);
      if(return_value_strncmp_5 == 0)
      {
        char *getFreeMem__1__1__1__2__c = &getFreeMem__1__1__line[(signed long int)8];
        char *getFreeMem__1__1__1__2__e;
        for( ; !(*getFreeMem__1__1__1__2__c == 0); getFreeMem__1__1__1__2__c = getFreeMem__1__1__1__2__c + 1l)
          if(!((signed int)*getFreeMem__1__1__1__2__c == 32))
          {
            if(!((signed int)*getFreeMem__1__1__1__2__c == 9))
              break;

          }

        getFreeMem__1__1__1__2__e = getFreeMem__1__1__1__2__c;
        for( ; !(*getFreeMem__1__1__1__2__e == 0); getFreeMem__1__1__1__2__e = getFreeMem__1__1__1__2__e + 1l)
          if((signed int)*getFreeMem__1__1__1__2__e == 32)
            break;

        getFreeMem__1__1__1__2__e[(signed long int)0] = (char)0;
        signed int return_value_atoi_4;
        return_value_atoi_4=atoi(getFreeMem__1__1__1__2__c);
        mem = mem + return_value_atoi_4;
      }

    }
    while((_Bool)1);
    fclose(f);
    snprintf(buf, (unsigned long int)sz, "%d", mem);
  }

  else
  {
    char vmstat[16l] = { '/', 'u', 's', 'r', '/', 'b', 'i', 'n', '/', 'v', 'm', 's', 't', 'a', 't', 0 };
    struct stat attr;
    signed int return_value_stat_8;
    return_value_stat_8=stat(vmstat, &attr);
    if(return_value_stat_8 == 0)
    {
      char command[1024l];
      char outfile[1024l];
      signed int return_value_getpid_6;
      return_value_getpid_6=getpid();
      snprintf(outfile, sizeof(char [1024l]) /*1024ul*/ , "/tmp/qslog.%d", return_value_getpid_6);
      snprintf(command, sizeof(char [1024l]) /*1024ul*/ , "%s 1 2 1>%s", (const void *)vmstat, (const void *)outfile);
      system(command);
      f=fopen(outfile, "r");
      if(!(f == ((struct _IO_FILE *)NULL)))
      {
        char line[32768l];
        signed int i = 1;
        do
        {
          return_value_qs_getLinef_7=qs_getLinef(line, (signed int)sizeof(char [32768l]) /*32768ul*/ , f);
          if(!(return_value_qs_getLinef_7 == 0))
            break;

          if(i == 4)
          {
            signed int j = 0;
            char *p = line;
            for( ; !(p == ((char *)NULL)) && !(j >= 4); j = j + 1)
            {
              p = p + 1l;
              p=strchr(p, 32);
            }
            if(j == 4 && !(p == ((char *)NULL)))
            {
              char *getFreeMem__1__2__1__1__1__1__2__e;
              p = p + 1l;
              getFreeMem__1__2__1__1__1__1__2__e=strchr(p, 32);
              if(!(getFreeMem__1__2__1__1__1__1__2__e == ((char *)NULL)))
              {
                getFreeMem__1__2__1__1__1__1__2__e[(signed long int)0] = (char)0;
                snprintf(buf, (unsigned long int)sz, "%s", p);
              }

            }

            break;
          }

          i = i + 1;
        }
        while((_Bool)1);
        fclose(f);
        unlink(outfile);
      }

    }

  }
}

// getMinutes
// file qslog.c line 1551
static signed long int getMinutes(char *line)
{
  struct anonymous_2 ma;
  signed int return_value_regexec_25;
  return_value_regexec_25=regexec(&m_trx, line, (unsigned long int)1, &ma, 0);
  if(!(return_value_regexec_25 == 0))
  {
    signed int return_value_regexec_12;
    return_value_regexec_12=regexec(&m_trx2, line, (unsigned long int)1, &ma, 0);
    if(return_value_regexec_12 == 0)
    {
      signed long int minutes = (signed long int)0;
      signed int buf_len = (ma.rm_eo - ma.rm_so) + 1;
      const signed long int buf_len_array_size0 = (signed long int)buf_len;
      char buf[buf_len_array_size0];
      strncpy(buf, &line[(signed long int)ma.rm_so], (unsigned long int)(ma.rm_eo - ma.rm_so));
      buf[(signed long int)(ma.rm_eo - ma.rm_so)] = (char)0;
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(buf);
      buf[(signed long int)(return_value_strlen_1 - (unsigned long int)7)] = (char)0;
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(buf);
      signed int return_value_atoi_3;
      return_value_atoi_3=atoi(&buf[(signed long int)(return_value_strlen_2 - (unsigned long int)2)]);
      minutes = minutes + (signed long int)return_value_atoi_3;
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(buf);
      buf[(signed long int)(return_value_strlen_4 - (unsigned long int)3)] = (char)0;
      unsigned long int return_value_strlen_5;
      return_value_strlen_5=strlen(buf);
      signed int return_value_atoi_6;
      return_value_atoi_6=atoi(&buf[(signed long int)(return_value_strlen_5 - (unsigned long int)2)]);
      minutes = minutes + (signed long int)(return_value_atoi_6 * 60);
      char *year;
      char *month;
      char *day;
      unsigned long int return_value_strlen_7;
      return_value_strlen_7=strlen(buf);
      buf[(signed long int)(return_value_strlen_7 - (unsigned long int)3)] = (char)0;
      unsigned long int return_value_strlen_8;
      return_value_strlen_8=strlen(buf);
      day = &buf[(signed long int)(return_value_strlen_8 - (unsigned long int)2)];
      unsigned long int return_value_strlen_9;
      return_value_strlen_9=strlen(buf);
      buf[(signed long int)(return_value_strlen_9 - (unsigned long int)3)] = (char)0;
      unsigned long int return_value_strlen_10;
      return_value_strlen_10=strlen(buf);
      month = &buf[(signed long int)(return_value_strlen_10 - (unsigned long int)2)];
      unsigned long int return_value_strlen_11;
      return_value_strlen_11=strlen(buf);
      buf[(signed long int)(return_value_strlen_11 - (unsigned long int)3)] = (char)0;
      year = buf;
      snprintf(m_date_str, sizeof(char [32768l]) /*32768ul*/ , "%s.%s.%s", day, month, year);
      return minutes;
    }

    else
    {
      if(m_offline_url == 0)
        fprintf(stdout, "F(%ld)", m_lines);

      return (signed long int)0;
    }
  }

  else
  {
    signed long int getMinutes__1__2__minutes = (signed long int)0;
    signed int getMinutes__1__2__buf_len = (ma.rm_eo - ma.rm_so) + 1;
    const signed long int getMinutes__1__2__buf_len_array_size0 = (signed long int)getMinutes__1__2__buf_len;
    char getMinutes__1__2__buf[getMinutes__1__2__buf_len_array_size0];
    strncpy(getMinutes__1__2__buf, &line[(signed long int)ma.rm_so], (unsigned long int)(ma.rm_eo - ma.rm_so));
    getMinutes__1__2__buf[(signed long int)(ma.rm_eo - ma.rm_so)] = (char)0;
    unsigned long int return_value_strlen_13;
    return_value_strlen_13=strlen(getMinutes__1__2__buf);
    getMinutes__1__2__buf[(signed long int)(return_value_strlen_13 - (unsigned long int)3)] = (char)0;
    unsigned long int return_value_strlen_14;
    return_value_strlen_14=strlen(getMinutes__1__2__buf);
    signed int return_value_atoi_15;
    return_value_atoi_15=atoi(&getMinutes__1__2__buf[(signed long int)(return_value_strlen_14 - (unsigned long int)2)]);
    getMinutes__1__2__minutes = getMinutes__1__2__minutes + (signed long int)return_value_atoi_15;
    unsigned long int return_value_strlen_16;
    return_value_strlen_16=strlen(getMinutes__1__2__buf);
    getMinutes__1__2__buf[(signed long int)(return_value_strlen_16 - (unsigned long int)3)] = (char)0;
    unsigned long int return_value_strlen_17;
    return_value_strlen_17=strlen(getMinutes__1__2__buf);
    signed int return_value_atoi_18;
    return_value_atoi_18=atoi(&getMinutes__1__2__buf[(signed long int)(return_value_strlen_17 - (unsigned long int)2)]);
    getMinutes__1__2__minutes = getMinutes__1__2__minutes + (signed long int)(return_value_atoi_18 * 60);
    char *getMinutes__1__2__1__year;
    char *getMinutes__1__2__1__month;
    char *getMinutes__1__2__1__day;
    unsigned long int return_value_strlen_19;
    return_value_strlen_19=strlen(getMinutes__1__2__buf);
    getMinutes__1__2__buf[(signed long int)(return_value_strlen_19 - (unsigned long int)3)] = (char)0;
    unsigned long int return_value_strlen_20;
    return_value_strlen_20=strlen(getMinutes__1__2__buf);
    getMinutes__1__2__1__year = &getMinutes__1__2__buf[(signed long int)(return_value_strlen_20 - (unsigned long int)4)];
    unsigned long int return_value_strlen_21;
    return_value_strlen_21=strlen(getMinutes__1__2__buf);
    getMinutes__1__2__buf[(signed long int)(return_value_strlen_21 - (unsigned long int)5)] = (char)0;
    unsigned long int return_value_strlen_22;
    return_value_strlen_22=strlen(getMinutes__1__2__buf);
    getMinutes__1__2__1__month = &getMinutes__1__2__buf[(signed long int)(return_value_strlen_22 - (unsigned long int)3)];
    unsigned long int return_value_strlen_23;
    return_value_strlen_23=strlen(getMinutes__1__2__buf);
    getMinutes__1__2__buf[(signed long int)(return_value_strlen_23 - (unsigned long int)4)] = (char)0;
    getMinutes__1__2__1__day = getMinutes__1__2__buf;
    signed int return_value_mstr2i_24;
    return_value_mstr2i_24=mstr2i(getMinutes__1__2__1__month);
    snprintf(m_date_str, sizeof(char [32768l]) /*32768ul*/ , "%s.%02d.%s", getMinutes__1__2__1__day, return_value_mstr2i_24, getMinutes__1__2__1__year);
    return getMinutes__1__2__minutes;
  }
}

// getRec
// file qslog.c line 952
static struct stat_rec_st * getRec(const char *value)
{
  struct anonymous_2 ma[1l];
  signed int len = 0;
  struct stat_rec_st *r = m_stat_sub;
  struct stat_rec_st *rec = (struct stat_rec_st *)(void *)0;
  while(!(r == ((struct stat_rec_st *)NULL)))
  {
    signed int return_value_regexec_1;
    return_value_regexec_1=regexec(&r->preg, value, (unsigned long int)1, ma, 0);
    if(return_value_regexec_1 == 0)
    {
      signed int l = (ma[(signed long int)0].rm_eo - ma[(signed long int)0].rm_so) + 1;
      if(!(len >= l))
      {
        len = l;
        rec = r;
      }

    }

    r = r->next;
  }
  return rec;
}

// loadRule
// file qslog.c line 1924
static struct stat_rec_st * loadRule(struct apr_pool_t *pool, const char *confFile)
{
  char line[32768l];
  struct _IO_FILE *file;
  file=fopen(confFile, "r");
  struct stat_rec_st *rec = (struct stat_rec_st *)(void *)0;
  struct stat_rec_st *prev = (struct stat_rec_st *)(void *)0;
  struct stat_rec_st *next = (struct stat_rec_st *)(void *)0;
  if(file == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    qerror("could not read file '%s': ", confFile, return_value_strerror_2);
    exit(1);
  }

  signed int return_value_qs_getLinef_3;
  do
  {
    return_value_qs_getLinef_3=qs_getLinef(line, (signed int)sizeof(char [32768l]) /*32768ul*/ , file);
    if(!(return_value_qs_getLinef_3 == 0))
      break;

    char *id = line;
    char *p;
    p=strchr(line, 58);
    if(!(p == ((char *)NULL)))
    {
      p[(signed long int)0] = (char)0;
      p = p + 1l;
      if(!(m_verbose == 0))
        printf("load rule %s: %s\n", id, p);

      next=createRec(pool, id, p);
      if(rec == ((struct stat_rec_st *)NULL))
        rec = next;

      if(!(prev == ((struct stat_rec_st *)NULL)))
        prev->next = next;

      else
        rec->next = (struct stat_rec_st *)(void *)0;
      prev = next;
    }

  }
  while((_Bool)1);
  fclose(file);
  return rec;
}

// loggerThread
// file qslog.c line 1719
static void * loggerThread(void *argv)
{
  char buf[1024l];
  while((_Bool)1)
  {
    struct tm *ptr;
    signed long int tm;
    tm=time((signed long int *)(void *)0);
    signed long int w = (tm / (signed long int)60) * (signed long int)60 + (signed long int)60;
    sleep((unsigned int)(w - tm));
    tm=time((signed long int *)(void *)0);
    ptr=localtime(&tm);
    strftime(buf, sizeof(char [1024l]) /*1024ul*/ , "%d.%m.%Y %H:%M:%S", ptr);
    printAndResetStat(buf);
    if(!(m_rotate == 0))
    {
      if(!(m_file_name[0l] == 0))
      {
        strftime(buf, sizeof(char [1024l]) /*1024ul*/ , "%H:%M", ptr);
        signed int return_value_strcmp_7;
        return_value_strcmp_7=strcmp(buf, "23:59");
        if(return_value_strcmp_7 == 0)
        {
          char arch[32768l];
          char arch2[32768l];
          strftime(buf, sizeof(char [1024l]) /*1024ul*/ , "%Y%m%d%H%M%S", ptr);
          snprintf(arch, sizeof(char [32768l]) /*32768ul*/ , "%s.%s", (const void *)m_file_name, (const void *)buf);
          snprintf(arch2, sizeof(char [32768l]) /*32768ul*/ , "%s.%s", (const void *)m_file_name2, (const void *)buf);
          signed int return_value_fclose_3;
          return_value_fclose_3=fclose(m_f);
          if(!(return_value_fclose_3 == 0))
          {
            signed int *return_value___errno_location_1;
            return_value___errno_location_1=__errno_location();
            char *return_value_strerror_2;
            return_value_strerror_2=strerror(*return_value___errno_location_1);
            qerror("failed to close file '%s': %s", (const void *)m_file_name, return_value_strerror_2);
          }

          signed int return_value_rename_6;
          return_value_rename_6=rename(m_file_name, arch);
          if(!(return_value_rename_6 == 0))
          {
            signed int *return_value___errno_location_4;
            return_value___errno_location_4=__errno_location();
            char *return_value_strerror_5;
            return_value_strerror_5=strerror(*return_value___errno_location_4);
            qerror("failed to move file '%s': %s", (const void *)arch, return_value_strerror_5);
          }

          qs_deleteOldFiles(m_file_name, m_generations);
          m_f=fopen(m_file_name, "a+");
          if(!(m_f2 == ((struct _IO_FILE *)NULL)))
          {
            fclose(m_f2);
            rename(m_file_name2, arch2);
            qs_deleteOldFiles(m_file_name2, m_generations);
            m_f2=fopen(m_file_name2, "a+");
          }

        }

      }

    }

  }
  return (void *)0;
}

// main
// file qslog.c line 1963
signed int main(signed int argc, const char * const *argv)
{
  const char *config = (const char *)(void *)0;
  const char *file = (const char *)(void *)0;
  const char *confFile = (const char *)(void *)0;
  const char *cmd;
  cmd=strrchr(argv[(signed long int)0], 47);
  const char *username = (const char *)(void *)0;
  union pthread_attr_t *tha = (union pthread_attr_t *)(void *)0;
  unsigned long int tid;
  union pthread_attr_t *thagc = (union pthread_attr_t *)(void *)0;
  unsigned long int tidgc;
  struct apr_pool_t *pool;
  signed int t;
  apr_app_initialize(&argc, &argv, (const char * const **)(void *)0);
  apr_pool_create_ex(&pool, (struct apr_pool_t *)(void *)0, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
  m_stat_rec=createRec(pool, "", "");
  t = 0;
  for( ; !(t >= 8); t = t + 1)
  {
    m_ip_list[(signed long int)t]=apr_table_make(pool, 15000);
    m_user_list[(signed long int)t]=apr_table_make(pool, 15000);
  }
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)50000, sizeof(struct qs_event_st *) /*8ul*/ );
  m_gc_event_list = (struct qs_event_st **)return_value_calloc_1;
  qs_csInitLock();
  qs_setExpiration((signed long int)600);
  if(cmd == ((const char *)NULL))
    cmd = argv[(signed long int)0];

  else
    cmd = cmd + 1l;
  argc = argc - 1;
  argv = argv + 1l;
  _Bool tmp_if_expr_7;
  char *return_value_strchr_6;
  _Bool tmp_if_expr_11;
  char *return_value_strchr_10;
  _Bool tmp_if_expr_13;
  char *return_value_strchr_12;
  signed int return_value_strcmp_27;
  signed int return_value_strcmp_26;
  signed int return_value_strcmp_25;
  signed int return_value_strcmp_24;
  signed int return_value_strcmp_23;
  signed int return_value_strcmp_22;
  signed int return_value_strcmp_21;
  signed int return_value_strcmp_20;
  signed int return_value_strcmp_19;
  signed int return_value_strcmp_18;
  signed int return_value_strcmp_17;
  signed int return_value_strcmp_16;
  signed int return_value_strcmp_15;
  signed int return_value_strcmp_14;
  while(argc >= 1)
  {
    signed int return_value_strcmp_28;
    return_value_strcmp_28=strcmp(*argv, "-f");
    if(return_value_strcmp_28 == 0)
    {
      argc = argc - 1;
      if(argc >= 1)
      {
        argv = argv + 1l;
        config = *argv;
        char *return_value_strchr_2;
        return_value_strchr_2=strchr(config, 105);
        if(!(return_value_strchr_2 == ((char *)NULL)))
          m_stat_rec->i_byte_count = (signed long long int)0;

        char *return_value_strchr_3;
        return_value_strchr_3=strchr(config, 107);
        if(!(return_value_strchr_3 == ((char *)NULL)))
          m_stat_rec->connections = (signed long int)0;

        char *return_value_strchr_4;
        return_value_strchr_4=strchr(config, 99);
        if(!(return_value_strchr_4 == ((char *)NULL)))
          m_ct = 1;

        char *return_value_strchr_5;
        return_value_strchr_5=strchr(config, 68);
        if(!(return_value_strchr_5 == ((char *)NULL)))
          tmp_if_expr_7 = (_Bool)1;

        else
        {
          return_value_strchr_6=strchr(config, 116);
          tmp_if_expr_7 = return_value_strchr_6 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_7)
          m_avms = 1;

        char *return_value_strchr_8;
        return_value_strchr_8=strchr(config, 109);
        if(!(return_value_strchr_8 == ((char *)NULL)))
          m_methods = 1;

        char *return_value_strchr_9;
        return_value_strchr_9=strchr(config, 115);
        if(!(return_value_strchr_9 == ((char *)NULL)))
          tmp_if_expr_11 = (_Bool)1;

        else
        {
          return_value_strchr_10=strchr(config, 97);
          tmp_if_expr_11 = return_value_strchr_10 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_11)
          tmp_if_expr_13 = (_Bool)1;

        else
        {
          return_value_strchr_12=strchr(config, 65);
          tmp_if_expr_13 = return_value_strchr_12 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_13)
          m_customcounter = 1;

      }

    }

    else
    {
      return_value_strcmp_27=strcmp(*argv, "-o");
      if(return_value_strcmp_27 == 0)
      {
        argc = argc - 1;
        if(argc >= 1)
        {
          argv = argv + 1l;
          file = *argv;
        }

      }

      else
      {
        return_value_strcmp_26=strcmp(*argv, "-u");
        if(return_value_strcmp_26 == 0)
        {
          argc = argc - 1;
          if(argc >= 1)
          {
            argv = argv + 1l;
            username = *argv;
          }

        }

        else
        {
          return_value_strcmp_25=strcmp(*argv, "-c");
          if(return_value_strcmp_25 == 0)
          {
            argc = argc - 1;
            if(argc >= 1)
            {
              argv = argv + 1l;
              confFile = *argv;
            }

          }

          else
          {
            return_value_strcmp_24=strcmp(*argv, "-p");
            if(return_value_strcmp_24 == 0)
            {
              m_offline = 1;
              qs_set2OfflineMode();
            }

            else
            {
              return_value_strcmp_23=strcmp(*argv, "-pc");
              if(return_value_strcmp_23 == 0)
              {
                m_offline_count = 1;
                qs_set2OfflineMode();
              }

              else
              {
                return_value_strcmp_22=strcmp(*argv, "-pu");
                if(return_value_strcmp_22 == 0)
                {
                  m_offline_url = 1;
                  qs_set2OfflineMode();
                }

                else
                {
                  return_value_strcmp_21=strcmp(*argv, "-puc");
                  if(return_value_strcmp_21 == 0)
                  {
                    m_offline_url = 1;
                    m_offline_url_cropped = 1;
                    qs_set2OfflineMode();
                  }

                  else
                  {
                    return_value_strcmp_20=strcmp(*argv, "-m");
                    if(return_value_strcmp_20 == 0)
                      m_mem = 1;

                    else
                    {
                      return_value_strcmp_19=strcmp(*argv, "-v");
                      if(return_value_strcmp_19 == 0)
                        m_verbose = 1;

                      else
                      {
                        return_value_strcmp_18=strcmp(*argv, "-x");
                        if(return_value_strcmp_18 == 0)
                        {
                          m_rotate = 1;
                          if(argc >= 2)
                          {
                            if((signed int)*argv[1l] >= 48)
                            {
                              if(!((signed int)*argv[1l] >= 58))
                              {
                                argc = argc - 1;
                                argv = argv + 1l;
                                m_generations=atoi(*argv);
                              }

                            }

                          }

                        }

                        else
                        {
                          return_value_strcmp_17=strcmp(*argv, "-h");
                          if(return_value_strcmp_17 == 0)
                            usage(cmd, 0);

                          else
                          {
                            return_value_strcmp_16=strcmp(*argv, "--help");
                            if(return_value_strcmp_16 == 0)
                              usage(cmd, 0);

                            else
                            {
                              return_value_strcmp_15=strcmp(*argv, "-?");
                              if(return_value_strcmp_15 == 0)
                                usage(cmd, 0);

                              else
                              {
                                return_value_strcmp_14=strcmp(*argv, "--man");
                                if(return_value_strcmp_14 == 0)
                                  usage(cmd, 1);

                                else
                                {
                                  qerror("unknown option '%s'", *argv);
                                  exit(1);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    argc = argc - 1;
    argv = argv + 1l;
  }
  m_off = (signed int)(m_offline != 0 || m_offline_count != 0 || m_offline_url != 0);
  if(!(m_off == 0))
  {
    signed int return_value_nice_31;
    return_value_nice_31=nice(10);
    if(return_value_nice_31 == -1)
    {
      signed int *return_value___errno_location_29;
      return_value___errno_location_29=__errno_location();
      char *return_value_strerror_30;
      return_value_strerror_30=strerror(*return_value___errno_location_29);
      fprintf(stderr, "ERROR, failed to change nice value: %s\n", return_value_strerror_30);
    }

    regcomp(&m_trx, "[0-9]{2}/[a-zA-Z]{3}/[0-9]{4}:[0-9]{2}:[0-9]{2}:[0-9]{2}", 1);
    regcomp(&m_trx2, "[0-9]{4}[ -]{1}[0-9]{2}[ -]{1}[0-9]{2} [0-9]{2}:[0-9]{2}:[0-9]{2}[,.]{1}[0-9]{3}", 1);
  }

  const struct apr_array_header_t *return_value_apr_table_elts_33;
  signed long long int tmp_if_expr_34;
  signed long int tmp_if_expr_37;
  const struct apr_array_header_t *return_value_apr_table_elts_36;
  if(!(m_offline_url == 0))
  {
    signed int main__1__6__i;
    struct apr_table_entry_t *entry;
    signed long int request_count = (signed long int)0;
    signed long int request_count_min = (signed long int)-1;
    signed long int request_count_max = (signed long int)0;
    signed long long int duration_count_ms = (signed long long int)0;
    signed long long int duration_count_ms_min = (signed long long int)-1;
    signed long long int duration_count_ms_max = (signed long long int)0;
    m_url_entries=apr_table_make(pool, 25000 + 1);
    if(config == ((const char *)NULL))
      usage(cmd, 0);

    readStdinOffline(pool, config);
    fprintf(stderr, ".\n");
    m_f = stdout;
    if(!(file == ((const char *)NULL)))
    {
      m_f=fopen(file, "a+");
      if(m_f == ((struct _IO_FILE *)NULL))
        m_f = stdout;

    }

    const struct apr_array_header_t *return_value_apr_table_elts_32;
    return_value_apr_table_elts_32=apr_table_elts(m_url_entries);
    entry = (struct apr_table_entry_t *)return_value_apr_table_elts_32->elts;
    main__1__6__i = 0;
    do
    {
      return_value_apr_table_elts_33=apr_table_elts(m_url_entries);
      if(main__1__6__i >= return_value_apr_table_elts_33->nelts)
        break;

      struct anonymous_1 *url_rec = (struct anonymous_1 *)(entry + (signed long int)main__1__6__i)->val;
      request_count = request_count + url_rec->request_count;
      if(request_count_min == -1l)
        request_count_min = url_rec->request_count;

      if(!(url_rec->request_count >= request_count_min))
        request_count_min = url_rec->request_count;

      if(!(request_count_max >= url_rec->request_count))
        request_count_max = url_rec->request_count;

      duration_count_ms = duration_count_ms + url_rec->duration_count_ms;
      if(duration_count_ms_min == -1l)
        duration_count_ms_min = url_rec->duration_count_ms;

      if(!(url_rec->duration_count_ms >= duration_count_ms_min))
        duration_count_ms_min = url_rec->duration_count_ms;

      if(!(duration_count_ms_max >= url_rec->duration_count_ms))
        duration_count_ms_max = url_rec->duration_count_ms;

      if(!(url_rec->request_count == 0l))
        tmp_if_expr_34 = url_rec->duration_count_ms / url_rec->request_count;

      else
        tmp_if_expr_34 = (signed long int)0;
      fprintf(m_f, "req;%ld;1xx;%ld;2xx;%ld;3xx;%ld;4xx;%ld;5xx;%ld;avms;%lld;%s\n", url_rec->request_count, url_rec->status_1, url_rec->status_2, url_rec->status_3, url_rec->status_4, url_rec->status_5, tmp_if_expr_34, (entry + (signed long int)main__1__6__i)->key);
      main__1__6__i = main__1__6__i + 1;
    }
    while((_Bool)1);
    fprintf(m_f, "req;%ld;;;;;;;;;;;avms;%lld;min;\n", request_count_min, duration_count_ms_min);
    fprintf(m_f, "req;%ld;;;;;;;;;;;avms;%lld;max;\n", request_count_max, duration_count_ms_max);
    const struct apr_array_header_t *return_value_apr_table_elts_35;
    return_value_apr_table_elts_35=apr_table_elts(m_url_entries);
    if(!(return_value_apr_table_elts_35->nelts == 0))
    {
      return_value_apr_table_elts_36=apr_table_elts(m_url_entries);
      tmp_if_expr_37 = request_count / (signed long int)return_value_apr_table_elts_36->nelts;
    }

    else
      tmp_if_expr_37 = (signed long int)0;
    fprintf(m_f, "req;%ld;;;;;;;;;;;avms;%lld;average;\n", tmp_if_expr_37, request_count != 0l ? duration_count_ms / request_count : (signed long int)0);
    if(!(file == ((const char *)NULL)) && !(m_f == stdout))
      fclose(m_f);

    return 0;
  }

  const struct apr_array_header_t *return_value_apr_table_elts_39;
  signed long int tmp_if_expr_40;
  signed long int tmp_if_expr_41;
  signed long long int tmp_if_expr_42;
  signed long long int tmp_if_expr_43;
  const struct apr_array_header_t *return_value_apr_table_elts_45;
  if(!(m_offline_count == 0))
  {
    signed int i;
    struct apr_table_entry_t *main__1__7__entry;
    if(config == ((const char *)NULL))
      usage(cmd, 0);

    m_client_entries=apr_table_make(pool, 25000 + 1);
    readStdinOffline(pool, config);
    fprintf(stderr, ".\n");
    const struct apr_array_header_t *return_value_apr_table_elts_38;
    return_value_apr_table_elts_38=apr_table_elts(m_client_entries);
    main__1__7__entry = (struct apr_table_entry_t *)return_value_apr_table_elts_38->elts;
    m_f = stdout;
    if(!(file == ((const char *)NULL)))
    {
      m_f=fopen(file, "a+");
      if(m_f == ((struct _IO_FILE *)NULL))
        m_f = stdout;

    }

    i = 0;
    do
    {
      return_value_apr_table_elts_39=apr_table_elts(m_client_entries);
      if(i >= return_value_apr_table_elts_39->nelts)
        break;

      struct anonymous_3 *client_rec = (struct anonymous_3 *)(main__1__7__entry + (signed long int)i)->val;
      char esco[256l];
      char m[256l];
      signed long int coverage;
      if(!(m_lines == 0l))
        tmp_if_expr_40 = (client_rec->firstLine * (signed long int)100) / m_lines;

      else
        tmp_if_expr_40 = (signed long int)0;
      coverage = tmp_if_expr_40;
      signed long int coverageend;
      if(!(m_lines == 0l))
        tmp_if_expr_41 = (signed long int)100 - (client_rec->lastLine * (signed long int)100) / m_lines;

      else
        tmp_if_expr_41 = (signed long int)0;
      coverageend = tmp_if_expr_41;
      if(!(coverageend >= coverage))
        coverage = coverageend;

      esco[(signed long int)0] = (char)0;
      if(!(m_stat_rec->connections == -1l))
        sprintf(esco, "esco;%ld;", client_rec->connections);

      m[(signed long int)0] = (char)0;
      if(!(m_methods == 0))
        sprintf(m, "GET;%ld;POST;%ld;", client_rec->get, client_rec->post);

      if(m_avms == 0)
        client_rec->duration_count_ms = (signed long int)1000 * client_rec->duration;

      else
        client_rec->duration = client_rec->duration_count_ms / (signed long int)1000;
      if(!(client_rec->request_count == 0l))
        tmp_if_expr_42 = client_rec->duration / client_rec->request_count;

      else
        tmp_if_expr_42 = (signed long int)0;
      if(!(client_rec->request_count == 0l))
        tmp_if_expr_43 = client_rec->duration_count_ms / client_rec->request_count;

      else
        tmp_if_expr_43 = (signed long int)0;
      fprintf(m_f, "%s;req;%ld;errors;%ld;duration;%ld;bytes;%lld;1xx;%ld;2xx;%ld;3xx;%ld;4xx;%ld;5xx;%ld;304;%ld;av;%lld;avms;%lld;<1s;%ld;1s;%ld;2s;%ld;3s;%ld;4s;%ld;5s;%ld;>5s;%ld;%s%sci;%ld;", (main__1__7__entry + (signed long int)i)->key, client_rec->request_count, client_rec->error_count, client_rec->end_s - client_rec->start_s, client_rec->byte_count, client_rec->status_1, client_rec->status_2, client_rec->status_3, client_rec->status_4, client_rec->status_5, client_rec->status_304, tmp_if_expr_42, tmp_if_expr_43, client_rec->duration_0, client_rec->duration_1, client_rec->duration_2, client_rec->duration_3, client_rec->duration_4, client_rec->duration_5, client_rec->duration_6, (const void *)esco, (const void *)m, coverage);
      if(!(m_ct == 0))
        fprintf(m_f, "html;%ld;css/js;%ld;img;%ld;other;%ld;", client_rec->html, client_rec->cssjs, client_rec->img, client_rec->other);

      const struct apr_array_header_t *return_value_apr_table_elts_46;
      return_value_apr_table_elts_46=apr_table_elts(client_rec->events);
      if(return_value_apr_table_elts_46->nelts >= 1)
      {
        signed int k;
        struct apr_table_entry_t *client_entry;
        const struct apr_array_header_t *return_value_apr_table_elts_44;
        return_value_apr_table_elts_44=apr_table_elts(client_rec->events);
        client_entry = (struct apr_table_entry_t *)return_value_apr_table_elts_44->elts;
        k = 0;
        do
        {
          return_value_apr_table_elts_45=apr_table_elts(client_rec->events);
          if(k >= return_value_apr_table_elts_45->nelts)
            break;

          const char *eventName = (client_entry + (signed long int)k)->key;
          signed int *eventVal = (signed int *)(client_entry + (signed long int)k)->val;
          fprintf(m_f, "%s;%d;", eventName, *eventVal);
          *eventVal = 0;
          k = k + 1;
        }
        while((_Bool)1);
      }

      fprintf(m_f, "\n");
      i = i + 1;
    }
    while((_Bool)1);
    if(!(file == ((const char *)NULL)) && !(m_f == stdout))
      fclose(m_f);

    return 0;
  }

  if(config == ((const char *)NULL))
    usage(cmd, 0);

  qs_setuid(username, cmd);
  if(!(file == ((const char *)NULL)))
  {
    m_f=fopen(file, "a+");
    if(m_f == ((struct _IO_FILE *)NULL))
    {
      signed int *return_value___errno_location_47;
      return_value___errno_location_47=__errno_location();
      char *return_value_strerror_48;
      return_value_strerror_48=strerror(*return_value___errno_location_47);
      qerror("could not open file for writing '%s': %s", file, return_value_strerror_48);
      exit(1);
    }

    unsigned long int return_value_strlen_49;
    return_value_strlen_49=strlen(file);
    unsigned long int return_value_strlen_50;
    return_value_strlen_50=strlen(".yyyymmddHHMMSS  ");
    unsigned long int return_value_strlen_51;
    return_value_strlen_51=strlen(".detailed");
    if(!(sizeof(char [32768l]) /*32768ul*/  + -return_value_strlen_50 + -return_value_strlen_51 >= return_value_strlen_49))
    {
      qerror("file name too long '%s'", file);
      exit(1);
    }

    strcpy(m_file_name, file);
  }

  else
  {
    m_file_name[(signed long int)0] = (char)0;
    m_f = stdout;
  }
  if(!(confFile == ((const char *)NULL)))
  {
    if(file == ((const char *)NULL))
    {
      qerror("option '-c' can only be used in conjunction with option '-o'");
      exit(1);
    }

    snprintf(m_file_name2, sizeof(char [32768l]) /*32768ul*/ , "%s.detailed", (const void *)m_file_name);
    char *return_value_strchr_52;
    return_value_strchr_52=strchr(config, 67);
    if(return_value_strchr_52 == ((char *)NULL))
    {
      qerror("you need to add 'C' to the format string when enabling the pattern list (-c)");
      exit(1);
    }

    m_stat_sub=loadRule(pool, confFile);
    m_f2=fopen(m_file_name2, "a+");
    if(m_f == ((struct _IO_FILE *)NULL))
    {
      signed int *return_value___errno_location_53;
      return_value___errno_location_53=__errno_location();
      char *return_value_strerror_54;
      return_value_strerror_54=strerror(*return_value___errno_location_53);
      qerror("could not open file for writing '%s': %s", (const void *)m_file_name2, return_value_strerror_54);
      exit(1);
    }

  }

  if(!(m_offline == 0))
  {
    fprintf(stderr, "[%s]: offline mode\n", cmd);
    m_date_str[(signed long int)0] = (char)0;
    readStdinOffline(pool, config);
    if(m_verbose == 0)
      fprintf(stdout, "\n");

  }

  else
  {
    pthread_create(&tid, tha, loggerThread, (void *)0);
    pthread_create(&tidgc, thagc, gcThread, (void *)0);
    readStdin(pool, config);
  }
  if(!(file == ((const char *)NULL)) && !(m_f == stdout))
    fclose(m_f);

  return 0;
}

// mstr2i
// file qslog.c line 1532
static signed int mstr2i(const char *m)
{
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(m, "Jan");
  if(return_value_strcmp_1 == 0)
    return 1;

  else
  {
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(m, "Feb");
    if(return_value_strcmp_2 == 0)
      return 2;

    else
    {
      signed int return_value_strcmp_3;
      return_value_strcmp_3=strcmp(m, "Mar");
      if(return_value_strcmp_3 == 0)
        return 3;

      else
      {
        signed int return_value_strcmp_4;
        return_value_strcmp_4=strcmp(m, "Apr");
        if(return_value_strcmp_4 == 0)
          return 4;

        else
        {
          signed int return_value_strcmp_5;
          return_value_strcmp_5=strcmp(m, "May");
          if(return_value_strcmp_5 == 0)
            return 5;

          else
          {
            signed int return_value_strcmp_6;
            return_value_strcmp_6=strcmp(m, "Jun");
            if(return_value_strcmp_6 == 0)
              return 6;

            else
            {
              signed int return_value_strcmp_7;
              return_value_strcmp_7=strcmp(m, "Jul");
              if(return_value_strcmp_7 == 0)
                return 7;

              else
              {
                signed int return_value_strcmp_8;
                return_value_strcmp_8=strcmp(m, "Aug");
                if(return_value_strcmp_8 == 0)
                  return 8;

                else
                {
                  signed int return_value_strcmp_9;
                  return_value_strcmp_9=strcmp(m, "Sep");
                  if(return_value_strcmp_9 == 0)
                    return 9;

                  else
                  {
                    signed int return_value_strcmp_10;
                    return_value_strcmp_10=strcmp(m, "Oct");
                    if(return_value_strcmp_10 == 0)
                      return 10;

                    else
                    {
                      signed int return_value_strcmp_11;
                      return_value_strcmp_11=strcmp(m, "Nov");
                      if(return_value_strcmp_11 == 0)
                        return 11;

                      else
                      {
                        signed int return_value_strcmp_12;
                        return_value_strcmp_12=strcmp(m, "Dec");
                        if(return_value_strcmp_12 == 0)
                          return 12;

                        else
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
    }
  }
}

// printAndResetStat
// file qslog.c line 977
static void printAndResetStat(char *timeStr)
{
  struct stat_rec_st *r = m_stat_sub;
  double av[1l];
  char mem[256l];
  if(m_offline == 0)
  {
    getloadavg(av, 1);
    if(!(m_mem == 0))
      getFreeMem(mem, (signed int)sizeof(char [256l]) /*256ul*/ );

    else
      mem[(signed long int)0] = (char)0;
  }

  else
    mem[(signed long int)0] = (char)0;
  qs_csLock();
  printStat2File(m_f, timeStr, m_stat_rec, m_offline, 1, av, mem);
  for( ; !(r == ((struct stat_rec_st *)NULL)); r = r->next)
    printStat2File(m_f2, timeStr, r, m_offline, 0, av, mem);
  qs_csUnLock();
  fflush(m_f);
  if(!(m_f2 == ((struct _IO_FILE *)NULL)))
    fflush(m_f2);

}

// printStat2File
// file qslog.c line 655
static void printStat2File(struct _IO_FILE *f, char *timeStr, struct stat_rec_st *stat_rec, signed int offline, signed int main, double *av, const char *mem)
{
  char bis[256l];
  char esco[256l];
  char ip[256l];
  char usr[256l];
  char avms[256l];
  char custom[256l];
  bis[(signed long int)0] = (char)0;
  esco[(signed long int)0] = (char)0;
  avms[(signed long int)0] = (char)0;
  custom[(signed long int)0] = (char)0;
  if(!(stat_rec->i_byte_count == -1l))
    sprintf(bis, "ib/s;%lld;", stat_rec->i_byte_count / (signed long int)60);

  if(!(main == 0))
  {
    if(!(stat_rec->connections == -1l))
      sprintf(esco, "esco;%ld;", stat_rec->connections);

  }

  signed long int tmp_if_expr_1;
  if(!(m_avms == 0))
  {
    if(stat_rec->line_count == 0l)
      tmp_if_expr_1 = (signed long int)1;

    else
      tmp_if_expr_1 = stat_rec->line_count;
    sprintf(avms, "avms;%lld;", stat_rec->duration_count_ms / tmp_if_expr_1);
    stat_rec->duration_count = stat_rec->duration_count_ms / (signed long int)1000;
  }

  signed long int tmp_if_expr_2;
  signed long int tmp_if_expr_3;
  if(!(m_customcounter == 0))
  {
    if(stat_rec->average_count == 0l)
      tmp_if_expr_2 = (signed long int)1;

    else
      tmp_if_expr_2 = stat_rec->average_count;
    if(stat_rec->averAge_count == 0l)
      tmp_if_expr_3 = (signed long int)1;

    else
      tmp_if_expr_3 = stat_rec->averAge_count;
    sprintf(custom, "s;%llu;a;%llu;A;%llu;", stat_rec->sum, stat_rec->average / (unsigned long int)tmp_if_expr_2, stat_rec->averAge / (unsigned long int)tmp_if_expr_3);
  }

  if(!(main == 0))
  {
    signed long int return_value_qs_countEventT_4;
    return_value_qs_countEventT_4=qs_countEventT(m_ip_list);
    sprintf(ip, "ip;%ld;", return_value_qs_countEventT_4);
    signed long int return_value_qs_countEventT_5;
    return_value_qs_countEventT_5=qs_countEventT(m_user_list);
    sprintf(usr, "usr;%ld;", return_value_qs_countEventT_5);
  }

  else
  {
    ip[(signed long int)0] = (char)0;
    usr[(signed long int)0] = (char)0;
  }
  char *tmp_if_expr_6;
  if(!(main == 0))
    tmp_if_expr_6 = "";

  else
    tmp_if_expr_6 = stat_rec->id;
  signed long int tmp_if_expr_7;
  if(stat_rec->line_count == 0l)
    tmp_if_expr_7 = (signed long int)1;

  else
    tmp_if_expr_7 = stat_rec->line_count;
  fprintf(f, "%s;%sr/s;%ld;req;%ld;b/s;%lld;%s%s1xx;%ld;2xx;%ld;3xx;%ld;4xx;%ld;5xx;%ld;%sav;%lld;<1s;%ld;1s;%ld;2s;%ld;3s;%ld;4s;%ld;5s;%ld;>5s;%ld;%s%sqV;%ld;qS;%ld;qD;%ld;qK;%ld;qT;%ld;qL;%ld;qs;%ld;%s", timeStr, tmp_if_expr_6, stat_rec->line_count / (signed long int)60, stat_rec->line_count, stat_rec->byte_count / (signed long int)60, (const void *)bis, (const void *)esco, stat_rec->status_1, stat_rec->status_2, stat_rec->status_3, stat_rec->status_4, stat_rec->status_5, (const void *)avms, stat_rec->duration_count / tmp_if_expr_7, stat_rec->duration_0, stat_rec->duration_1, stat_rec->duration_2, stat_rec->duration_3, stat_rec->duration_4, stat_rec->duration_5, stat_rec->duration_6, (const void *)ip, (const void *)usr, stat_rec->qos_v, stat_rec->qos_s, stat_rec->qos_d, stat_rec->qos_k, stat_rec->qos_t, stat_rec->qos_l, stat_rec->qos_ser, (const void *)custom);
  stat_rec->line_count = (signed long int)0;
  stat_rec->byte_count = (signed long long int)0;
  if(!(stat_rec->i_byte_count == -1l))
    stat_rec->i_byte_count = (signed long long int)0;

  if(!(main == 0))
  {
    if(!(stat_rec->connections == -1l))
      stat_rec->connections = (signed long int)0;

  }

  stat_rec->sum = (unsigned long long int)0;
  stat_rec->average = (unsigned long long int)0;
  stat_rec->average_count = (signed long int)0;
  stat_rec->averAge = (unsigned long long int)0;
  stat_rec->averAge_count = (signed long int)0;
  stat_rec->status_1 = (signed long int)0;
  stat_rec->status_2 = (signed long int)0;
  stat_rec->status_3 = (signed long int)0;
  stat_rec->status_4 = (signed long int)0;
  stat_rec->status_5 = (signed long int)0;
  stat_rec->duration_count = (signed long long int)0;
  stat_rec->duration_count_ms = (signed long long int)0;
  stat_rec->duration_0 = (signed long int)0;
  stat_rec->duration_1 = (signed long int)0;
  stat_rec->duration_2 = (signed long int)0;
  stat_rec->duration_3 = (signed long int)0;
  stat_rec->duration_4 = (signed long int)0;
  stat_rec->duration_5 = (signed long int)0;
  stat_rec->duration_6 = (signed long int)0;
  stat_rec->qos_v = (signed long int)0;
  stat_rec->qos_s = (signed long int)0;
  stat_rec->qos_d = (signed long int)0;
  stat_rec->qos_k = (signed long int)0;
  stat_rec->qos_t = (signed long int)0;
  stat_rec->qos_l = (signed long int)0;
  stat_rec->qos_ser = (signed long int)0;
  if(!(main == 0))
  {
    if(offline == 0)
    {
      fprintf(f, "sl;%.2f;", av[(signed long int)0]);
      if(!(m_mem == 0))
        fprintf(f, "m;%s;", mem[(signed long int)0] != 0 ? mem : "-");

    }

    else
      m_offline_data = 0;
  }

  const struct apr_array_header_t *return_value_apr_table_elts_10;
  return_value_apr_table_elts_10=apr_table_elts(stat_rec->events);
  const struct apr_array_header_t *return_value_apr_table_elts_9;
  if(return_value_apr_table_elts_10->nelts >= 1)
  {
    signed int i;
    struct apr_table_entry_t *entry;
    const struct apr_array_header_t *return_value_apr_table_elts_8;
    return_value_apr_table_elts_8=apr_table_elts(stat_rec->events);
    entry = (struct apr_table_entry_t *)return_value_apr_table_elts_8->elts;
    i = 0;
    do
    {
      return_value_apr_table_elts_9=apr_table_elts(stat_rec->events);
      if(i >= return_value_apr_table_elts_9->nelts)
        break;

      const char *eventName = (entry + (signed long int)i)->key;
      signed int *eventVal = (signed int *)(entry + (signed long int)i)->val;
      fprintf(f, "%s;%d;", eventName, *eventVal);
      *eventVal = 0;
      i = i + 1;
    }
    while((_Bool)1);
  }

  fprintf(f, "\n");
}

// qerror
// file qslog.c line 399
static void qerror(const char *fmt, ...)
{
  char buf[32768l];
  void **args;
  signed long int t;
  t=time((signed long int *)(void *)0);
  char *time_string;
  time_string=ctime(&t);
  args = (void **)&fmt;
  vsprintf(buf, fmt, args);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(time_string);
  time_string[(signed long int)(return_value_strlen_1 - (unsigned long int)1)] = (char)0;
  fprintf(stderr, "[%s] [error] qslog: %s\n", time_string, (const void *)buf);
  fflush(stderr);
}

// qsInitEvent
// file qslog.c line 858
static void qsInitEvent(struct apr_pool_t *pool, struct apr_table_t *events)
{
  const char *envFile;
  envFile=getenv("QSEVENTPATH");
  signed int return_value_qs_getLinef_1;
  if(!(envFile == ((const char *)NULL)))
  {
    struct _IO_FILE *file;
    file=fopen(envFile, "r");
    if(!(file == ((struct _IO_FILE *)NULL)))
    {
      char line[32768l];
      do
      {
        return_value_qs_getLinef_1=qs_getLinef(line, (signed int)sizeof(char [32768l]) /*32768ul*/ , file);
        if(!(return_value_qs_getLinef_1 == 0))
          break;

        char *p = line;
        char *name;
        signed int *val;
        while(!(p == ((char *)NULL)))
        {
          if(*p == 0)
            break;

          char *n;
          n=strchr(p, 44);
          if(!(n == ((char *)NULL)))
          {
            n[(signed long int)0] = (char)0;
            n = n + 1l;
          }

          name=apr_pstrdup(pool, p);
          void *return_value_apr_palloc_2;
          return_value_apr_palloc_2=apr_palloc(pool, sizeof(signed int) /*4ul*/ );
          void *return_value_memset_3;
          return_value_memset_3=memset(return_value_apr_palloc_2, 0, sizeof(signed int) /*4ul*/ );
          val = (signed int *)return_value_memset_3;
          *val = 0;
          apr_table_setn(events, name, (char *)val);
          p = n;
        }
      }
      while((_Bool)1);
      fclose(file);
    }

  }

}

// qsNoFloat
// file qslog.c line 492
static void qsNoFloat(char *s)
{
  char *pn;
  pn=strchr(s, 46);
  if(!(pn == ((char *)NULL)))
    pn[(signed long int)0] = (char)0;

  else
  {
    pn=strchr(s, 44);
    if(!(pn == ((char *)NULL)))
      pn[(signed long int)0] = (char)0;

  }
}

// qs_CMD
// file qs_util.h line 50
char * qs_CMD(const char *cmd)
{
  char *buf;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1024, (unsigned long int)1);
  buf = (char *)return_value_calloc_1;
  signed int i = 0;
  while(!(cmd[(signed long int)i] == 0))
  {
    if(i >= 1023)
      break;

    signed int return_value_toupper_2;
    return_value_toupper_2=toupper((signed int)cmd[(signed long int)i]);
    buf[(signed long int)i] = (char)return_value_toupper_2;
    i = i + 1;
  }
  buf[(signed long int)i] = (char)0;
  return buf;
}

// qs_countEventT
// file qslog.c line 363
static signed long int qs_countEventT(struct apr_table_t **list)
{
  signed int count = 0;
  signed int t;
  if(m_hasGC == 0)
  {
    t = 0;
    for( ; !(t >= 8); t = t + 1)
      gcTable(list[(signed long int)t]);
  }

  t = 0;
  for( ; !(t >= 8); t = t + 1)
  {
    const struct apr_array_header_t *return_value_apr_table_elts_1;
    return_value_apr_table_elts_1=apr_table_elts(list[(signed long int)t]);
    count = count + return_value_apr_table_elts_1->nelts;
  }
  return (signed long int)count;
}

// qs_csInitLock
// file qs_util.h line 64
void qs_csInitLock()
{
  pthread_mutex_init(&m_qs_lock_cs, (const union anonymous_0 *)(void *)0);
}

// qs_csLock
// file qs_util.h line 65
void qs_csLock()
{
  pthread_mutex_lock(&m_qs_lock_cs);
}

// qs_csUnLock
// file qs_util.h line 66
void qs_csUnLock()
{
  pthread_mutex_unlock(&m_qs_lock_cs);
}

// qs_deleteOldFiles
// file qs_util.h line 69
void qs_deleteOldFiles(const char *file_name, signed int generations)
{
  char dirname[2048l];
  char *p;
  strcpy(dirname, file_name);
  p=strrchr(dirname, 47);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(file_name);
  unsigned long int return_value_strlen_2;
  signed int return_value_strncmp_3;
  unsigned long int return_value_strlen_5;
  signed int return_value_strncmp_6;
  if(!(return_value_strlen_1 >= 2039ul))
  {
    if(!(p == ((char *)NULL)))
    {
      struct __dirstream *dir;
      p[(signed long int)0] = (char)0;
      p = p + 1l;
      dir=opendir(dirname);
      if(!(dir == ((struct __dirstream *)NULL)))
      {
        signed int num = 0;
        struct dirent *de;
        char filename[2048l];
        snprintf(filename, sizeof(char [2048l]) /*2048ul*/ , "%s.20", p);
        do
        {
          de=readdir(dir);
          if(de == ((struct dirent *)NULL))
            break;

          return_value_strlen_2=strlen(filename);
          return_value_strncmp_3=strncmp(de->d_name, filename, return_value_strlen_2);
          if(return_value_strncmp_3 == 0)
            num = num + 1;

        }
        while((_Bool)1);
        while(!(generations >= num))
        {
          char old[2048l];
          old[(signed long int)0] = (char)0;
          rewinddir(dir);
          do
          {
            de=readdir(dir);
            if(de == ((struct dirent *)NULL))
              break;

            return_value_strlen_5=strlen(filename);
            return_value_strncmp_6=strncmp(de->d_name, filename, return_value_strlen_5);
            if(return_value_strncmp_6 == 0)
            {
              signed int return_value_strcmp_4;
              return_value_strcmp_4=strcmp(old, de->d_name);
              if(return_value_strcmp_4 >= 1)
                snprintf(old, sizeof(char [2048l]) /*2048ul*/ , "%s", (const void *)de->d_name);

              else
                if((signed int)old[0l] == 0)
                  snprintf(old, sizeof(char [2048l]) /*2048ul*/ , "%s", (const void *)de->d_name);

            }

          }
          while((_Bool)1);
          char unl[2048l];
          snprintf(unl, sizeof(char [2048l]) /*2048ul*/ , "%s/%s", (const void *)dirname, (const void *)old);
          unlink(unl);
          num = num - 1;
        }
        closedir(dir);
      }

    }

  }

}

// qs_freeEvent
// file qslog.c line 237
void qs_freeEvent(struct qs_event_st *ev)
{
  free((void *)ev->id);
  free((void *)ev);
}

// qs_getLine
// file qs_util.c line 150
signed int qs_getLine(char *s, signed int n)
{
  signed int i = 0;
  _Bool tmp_if_expr_3;
  while((_Bool)1)
  {
    signed int return_value_getchar_1;
    return_value_getchar_1=getchar();
    s[(signed long int)i] = (char)return_value_getchar_1;
    if((signed int)s[(signed long int)i] == -1)
      return 0;

    if((signed int)s[(signed long int)i] == 13)
    {
      signed int return_value_getchar_2;
      return_value_getchar_2=getchar();
      s[(signed long int)i] = (char)return_value_getchar_2;
    }

    if((signed int)s[(signed long int)i] == 0x4)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)s[(signed long int)i] == 10 ? (_Bool)1 : (_Bool)0;
    if(i == n + -1 || tmp_if_expr_3)
    {
      s[(signed long int)i] = (char)0;
      return 1;
    }

    i = i + 1;
  }
}

// qs_getLinef
// file qs_util.h line 56
signed int qs_getLinef(char *s, signed int n, struct _IO_FILE *f)
{
  signed int i = 0;
  _Bool tmp_if_expr_4;
  while((_Bool)1)
  {
    signed int return_value_fgetc_1;
    return_value_fgetc_1=fgetc(f);
    s[(signed long int)i] = (char)return_value_fgetc_1;
    if((signed int)s[(signed long int)i] == 13)
    {
      signed int return_value_fgetc_2;
      return_value_fgetc_2=fgetc(f);
      s[(signed long int)i] = (char)return_value_fgetc_2;
    }

    if((signed int)s[(signed long int)i] == 0x4)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (signed int)s[(signed long int)i] == 10 ? (_Bool)1 : (_Bool)0;
    if(i == n + -1 || tmp_if_expr_4)
    {
      s[(signed long int)i] = (char)0;
      signed int return_value_feof_3;
      return_value_feof_3=feof(f);
      return return_value_feof_3 != 0 ? 1 : 0;
    }

    i = i + 1;
  }
}

// qs_insertEventT
// file qslog.c line 283
static signed long int qs_insertEventT(struct apr_table_t **list0, const char *id)
{
  struct qs_event_st *lp;
  signed int select;
  select=qs_tableSelector(id);
  struct apr_table_t *list = list0[(signed long int)select];
  const char *return_value_apr_table_get_1;
  return_value_apr_table_get_1=apr_table_get(list, id);
  lp = (struct qs_event_st *)return_value_apr_table_get_1;
  if(!(lp == ((struct qs_event_st *)NULL)))
  {
    qs_time(&lp->time);
    lp->count = lp->count + 1l;
    return lp->count;
  }

  else
  {
    const struct apr_array_header_t *return_value_apr_table_elts_2;
    return_value_apr_table_elts_2=apr_table_elts(list);
    if(return_value_apr_table_elts_2->nelts >= 50000)
    {
      if(m_log_max == 0)
      {
        char time_string[1024l];
        signed long int tm;
        tm=time((signed long int *)(void *)0);
        struct tm *ptr;
        ptr=localtime(&tm);
        strftime(time_string, sizeof(char [1024l]) /*1024ul*/ , "%a %b %d %H:%M:%S %Y", ptr);
        fprintf(stderr, "[%s] [notice] qslog: reached event count limit\n", (const void *)time_string);
        m_log_max = 1;
      }

      return (signed long int)0;
    }

    else
    {
      lp=qs_newEvent(id);
      apr_table_setn(list, lp->id, (char *)lp);
      return lp->count;
    }
  }
}

// qs_man_print
// file qs_util.h line 51
void qs_man_print(signed int man, const char *fmt, ...)
{
  char bufin[4096l];
  char bufout[4096l];
  void **args;
  signed int i = 0;
  signed int j = 0;
  memset((void *)bufin, 0, (unsigned long int)4096);
  args = (void **)&fmt;
  vsprintf(bufin, fmt, args);
  if(!(man == 0))
    for( ; (signed int)bufin[(signed long int)i] == 32; i = i + 1)
      ;

  _Bool tmp_if_expr_1;
  while(!(bufin[(signed long int)i] == 0))
  {
    if(j >= 4000)
      break;

    if(!(man == 0))
    {
      if((signed int)bufin[(signed long int)i] == 92)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)bufin[(signed long int)i] == 45 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        bufout[(signed long int)j] = (char)92;
        j = j + 1;
      }

    }

    if((signed int)bufin[(signed long int)i] == 10)
    {
      if(!(man == 0))
        i = i + 1;

      else
      {
        bufout[(signed long int)j] = bufin[(signed long int)i];
        i = i + 1;
        j = j + 1;
      }
    }

    else
    {
      bufout[(signed long int)j] = bufin[(signed long int)i];
      i = i + 1;
      j = j + 1;
    }
  }
  bufout[(signed long int)j] = (char)0;
  printf("%s", (const void *)bufout);
  if(!(man == 0))
    printf(" ");

}

// qs_man_println
// file qs_util.h line 52
void qs_man_println(signed int man, const char *fmt, ...)
{
  char bufin[4096l];
  char bufout[4096l];
  void **args;
  signed int i = 0;
  signed int j = 0;
  memset((void *)bufin, 0, (unsigned long int)4096);
  args = (void **)&fmt;
  vsprintf(bufin, fmt, args);
  _Bool tmp_if_expr_1;
  for( ; !(bufin[(signed long int)i] == 0); j = j + 1)
  {
    if(j >= 4000)
      break;

    if(!(man == 0))
    {
      if((signed int)bufin[(signed long int)i] == 92)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)bufin[(signed long int)i] == 45 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        bufout[(signed long int)j] = (char)92;
        j = j + 1;
      }

    }

    bufout[(signed long int)j] = bufin[(signed long int)i];
    i = i + 1;
  }
  bufout[(signed long int)j] = (char)0;
  printf("%s", (const void *)bufout);
}

// qs_newEvent
// file qslog.c line 225
static struct qs_event_st * qs_newEvent(const char *id)
{
  struct qs_event_st *ev;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc(sizeof(struct qs_event_st) /*24ul*/ , (unsigned long int)1);
  ev = (struct qs_event_st *)return_value_calloc_1;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(id);
  void *return_value_calloc_3;
  return_value_calloc_3=calloc(return_value_strlen_2 + (unsigned long int)1, (unsigned long int)1);
  ev->id = (char *)return_value_calloc_3;
  strcpy(ev->id, id);
  qs_time(&ev->time);
  ev->count = (signed long int)1;
  return ev;
}

// qs_set2OfflineMode
// file qs_util.h line 60
void qs_set2OfflineMode()
{
  m_qs_offline = 1;
}

// qs_setExpiration
// file qslog.c line 218
void qs_setExpiration(signed long int sec)
{
  m_qs_expiration = sec;
}

// qs_setTime
// file qs_util.h line 61
void qs_setTime(signed long int tme)
{
  m_qs_virtualSystemTime = tme;
}

// qs_setuid
// file qs_util.h line 72
void qs_setuid(const char *username, const char *cmd)
{
  unsigned int return_value_getuid_3;
  if(!(username == ((const char *)NULL)))
  {
    return_value_getuid_3=getuid();
    if(return_value_getuid_3 == 0u)
    {
      struct passwd *pwd;
      pwd=getpwnam(username);
      unsigned int uid;
      unsigned int gid;
      if(pwd == ((struct passwd *)NULL))
      {
        fprintf(stderr, "[%s] failed to switch user: unknown user id '%s'\n", cmd, username);
        exit(1);
      }

      uid = pwd->pw_uid;
      gid = pwd->pw_gid;
      setgid(gid);
      setuid(uid);
      unsigned int return_value_getuid_1;
      return_value_getuid_1=getuid();
      if(!(return_value_getuid_1 == uid))
      {
        fprintf(stderr, "[%s] setuid failed (%s,%d)\n", cmd, username, uid);
        exit(1);
      }

      unsigned int return_value_getgid_2;
      return_value_getgid_2=getgid();
      if(!(return_value_getgid_2 == gid))
      {
        fprintf(stderr, "[%s] setgid failed (%d)\n", cmd, gid);
        exit(1);
      }

    }

  }

}

// qs_tableSelector
// file qslog.c line 249
static signed int qs_tableSelector(const char *str)
{
  signed int num = 0;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(str);
  len = (signed int)return_value_strlen_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  if(len >= 4)
  {
    if((signed int)str[(signed long int)(len + -1)] == 61)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)str[(signed long int)(len - 1)] == 39 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)str[(signed long int)(len - 1)] == 34 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      len = len - 1;

  }

  if((signed int)*str % 2 == 1)
    num = num + 1;

  if(len >= 2)
  {
    if((signed int)str[(signed long int)(len + -1)] % 2 == 1)
      num = num + 2;

    if(len >= 3)
    {
      if((signed int)str[(signed long int)(len + -2)] % 2 == 1)
        num = num + 4;

    }

  }

  return num;
}

// qs_time
// file qs_util.h line 59
void qs_time(signed long int *tme)
{
  if(!(m_qs_offline == 0))
    *tme = m_qs_virtualSystemTime;

  else
    time(tme);
}

// qs_updateEvents
// file qslog.c line 817
static void qs_updateEvents(struct apr_pool_t *pool, char *E, struct apr_table_t *events)
{
  if(!(*E == 0))
    while(!(E == ((char *)NULL)))
    {
      char *restore = (char *)(void *)0;
      char *sep;
      sep=strchr(E, 44);
      signed int *val;
      if(!(sep == ((char *)NULL)))
      {
        sep[(signed long int)0] = (char)0;
        restore = sep;
        sep = sep + 1l;
      }

      const unsigned short int **return_value___ctype_b_loc_4;
      return_value___ctype_b_loc_4=__ctype_b_loc();
      if(!((8 & (signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)*E]) == 0))
      {
        const char *return_value_apr_table_get_1;
        return_value_apr_table_get_1=apr_table_get(events, E);
        val = (signed int *)return_value_apr_table_get_1;
        if(!(val == ((signed int *)NULL)))
          *val = *val + 1;

        else
        {
          char *name;
          name=apr_pstrdup(pool, E);
          void *return_value_apr_palloc_2;
          return_value_apr_palloc_2=apr_palloc(pool, sizeof(signed int) /*4ul*/ );
          void *return_value_memset_3;
          return_value_memset_3=memset(return_value_apr_palloc_2, 0, sizeof(signed int) /*4ul*/ );
          val = (signed int *)return_value_memset_3;
          *val = 1;
          apr_table_setn(events, name, (char *)val);
        }
      }

      E = sep;
      if(!(restore == ((char *)NULL)))
        restore[(signed long int)0] = (char)44;

    }

}

// qsstrcasestr
// file qslog.c line 415
static char * qsstrcasestr(const char *s1, const char *s2)
{
  char *p1;
  char *p2;
  _Bool tmp_if_expr_3;
  signed int return_value_tolower_1;
  signed int return_value_tolower_2;
  signed int return_value_tolower_4;
  signed int return_value_tolower_5;
  if((signed int)*s2 == 0)
    return (char *)s1;

  else
  {
    for( ; (_Bool)1; s1 = s1 + 1l)
    {
      do
      {
        if(!((signed int)*s1 == 0))
        {
          return_value_tolower_1=tolower((signed int)*s1);
          return_value_tolower_2=tolower((signed int)*s2);
          tmp_if_expr_3 = return_value_tolower_1 != return_value_tolower_2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_3 = (_Bool)0;
        if(!tmp_if_expr_3)
          break;

        s1 = s1 + 1l;
      }
      while((_Bool)1);
      if((signed int)*s1 == 0)
        return (char *)(void *)0;

      p1 = (char *)s1;
      p2 = (char *)s2;
      p1 = p1 + 1l;
      p2 = p2 + 1l;
      do
      {
        return_value_tolower_4=tolower((signed int)*p1);
        return_value_tolower_5=tolower((signed int)*p2);
        if(!(return_value_tolower_4 == return_value_tolower_5))
          break;

        if((signed int)*p1 == 0)
          return (char *)s1;

        p1 = p1 + 1l;
        p2 = p2 + 1l;
      }
      while((_Bool)1);
      if((signed int)*p2 == 0)
        break;

    }
    return (char *)s1;
  }
}

// readStdin
// file qslog.c line 1633
static void readStdin(struct apr_pool_t *pool, const char *cstr)
{
  char line[32768l];
  signed int line_len;
  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [32768l]) /*32768ul*/ , stdin);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(line);
    line_len = (signed int)(return_value_strlen_2 - (unsigned long int)1);
    for( ; line_len >= 1; line_len = line_len - 1)
    {
      if((signed int)line[(signed long int)line_len] >= 32)
        break;

      line[(signed long int)line_len] = (char)0;
    }
    updateStat(pool, cstr, line);
  }
  while((_Bool)1);
}

// readStdinOffline
// file qslog.c line 1656
static void readStdinOffline(struct apr_pool_t *pool, const char *cstr)
{
  char line[32768l];
  char buf[32l];
  signed long int unitTime = (signed long int)0;
  signed int line_len;
  struct _IO_FILE *outdev = stdout;
  if(!(m_offline_count == 0) || !(m_offline_url == 0))
    outdev = stderr;

  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [32768l]) /*32768ul*/ , stdin);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    signed long int l_time;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(line);
    line_len = (signed int)(return_value_strlen_2 - (unsigned long int)1);
    for( ; line_len >= 1; line_len = line_len - 1)
    {
      if((signed int)line[(signed long int)line_len] >= 32)
        break;

      line[(signed long int)line_len] = (char)0;
    }
    l_time=getMinutes(line);
    m_offline_data = 1;
    if(unitTime == 0l)
    {
      unitTime = l_time;
      qs_setTime(unitTime * (signed long int)60);
    }

    if(unitTime == l_time)
      updateStat(pool, cstr, line);

    if(!(l_time >= unitTime))
    {
      updateStat(pool, cstr, line);
      fprintf(outdev, "X");
      fflush(outdev);
      unitTime = (signed long int)0;
    }

    else
    {
      if(!(unitTime >= l_time))
      {
        if(m_verbose == 0)
        {
          fprintf(outdev, ".");
          fflush(outdev);
        }

      }

      while(!(unitTime >= l_time))
      {
        snprintf(buf, sizeof(char [32l]) /*32ul*/ , "%s %.2ld:%.2ld:00", (const void *)m_date_str, unitTime / (signed long int)60, unitTime % (signed long int)60);
        if(!(m_offline == 0))
          printAndResetStat(buf);

        unitTime = unitTime + 1l;
        qs_setTime(unitTime * (signed long int)60);
      }
      updateStat(pool, cstr, line);
    }
  }
  while((_Bool)1);
  if(!(m_offline_data == 0))
  {
    snprintf(buf, sizeof(char [32l]) /*32ul*/ , "%s %.2ld:%.2ld:00", (const void *)m_date_str, unitTime / (signed long int)60, unitTime % (signed long int)60);
    if(!(m_offline == 0))
      printAndResetStat(buf);

  }

}

// skipElement
// file qslog.c line 448
static char * skipElement(const char *line)
{
  char *p = (char *)line;
  char delim = p[(signed long int)0];
  if((signed int)delim == 34 || (signed int)delim == 39)
  {
    p = p + 1l;
    for( ; !((signed int)*p == 0); p = p + 1l)
      if(*p == delim)
      {
        if(!((signed int)p[-1l] == 92))
        {
          if(!((signed int)p[1l] == 0))
          {
            if((signed int)p[1l] == 32)
              goto __CPROVER_DUMP_L2;

          }

          else
          {

          __CPROVER_DUMP_L2:
            ;
            break;
          }
        }

      }

    p = p + 1l;
  }

  else
  {
    char *eq = (char *)(void *)0;
    if(!(m_off == 0))
    {
      eq=strstr(p, "='");
      if(!(eq == ((char *)NULL)) && !(eq - p >= 10l))
      {
        p = &eq[(signed long int)3];
        for( ; !((signed int)*p == 39); p = p + 1l)
        {
          if((signed int)*p == 0)
            break;

          if((signed int)p[-1l] == 92)
            break;

        }
        p = p + 1l;
      }

      else
        eq = (char *)(void *)0;
    }

    if(eq == ((char *)NULL))
      for( ; !((signed int)*p == 32); p = p + 1l)
        if((signed int)*p == 0)
          break;


  }
  for( ; (signed int)*p == 32; p = p + 1l)
    ;
  return p;
}

// stripNum
// file qslog.c line 507
static void stripNum(char **p)
{
  char *s = *p;
  signed int len;
  for( ; !(s == ((char *)NULL)); s = s + 1l)
  {
    if(*s == 0)
      break;

    if((signed int)*s >= 48)
    {
      if(!((signed int)*s >= 58))
        break;

    }

  }
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s);
  len = (signed int)return_value_strlen_1;
  for( ; len >= 1; len = len - 1)
  {
    if((signed int)s[(signed long int)len] >= 48)
    {
      if(!((signed int)s[(signed long int)len] >= 58))
        break;

    }

    s[(signed long int)len] = (char)0;
  }
  *p = s;
}

// updateClient
// file qslog.c line 1080
static void updateClient(struct apr_pool_t *pool, char *T, char *t, char *D, char *S, char *BI, char *B, char *R, char *I, char *U, char *Q, char *E, char *k, char *C, char *ct, signed long int tme, signed long int tmems, char *m)
{
  struct anonymous_3 *client_rec;
  const char *id = I;
  if(id == ((const char *)NULL))
    id = U;

  char *return_value_qsstrcasestr_10;
  char *return_value_qsstrcasestr_9;
  char *return_value_qsstrcasestr_8;
  signed int return_value_strcasecmp_12;
  signed int return_value_strcmp_15;
  signed int return_value_strcmp_14;
  if(!(id == ((const char *)NULL)))
  {
    const char *return_value_apr_table_get_1;
    return_value_apr_table_get_1=apr_table_get(m_client_entries, id);
    client_rec = (struct anonymous_3 *)return_value_apr_table_get_1;
    if(client_rec == ((struct anonymous_3 *)NULL))
    {
      char *tid;
      const struct apr_array_header_t *return_value_apr_table_elts_2;
      return_value_apr_table_elts_2=apr_table_elts(m_client_entries);
      if(return_value_apr_table_elts_2->nelts >= 25000)
      {
        if(m_max_entries == 0)
        {
          fprintf(stderr, "\nreached max client entries (%d)\n", 25000);
          m_max_entries = 1;
        }

        goto __CPROVER_DUMP_L35;
      }

      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(id);
      void *return_value_calloc_4;
      return_value_calloc_4=calloc(return_value_strlen_3 + (unsigned long int)1, (unsigned long int)1);
      tid = (char *)return_value_calloc_4;
      void *return_value_calloc_5;
      return_value_calloc_5=calloc(sizeof(struct anonymous_3) /*248ul*/ , (unsigned long int)1);
      client_rec = (struct anonymous_3 *)return_value_calloc_5;
      strcpy(tid, id);
      unsigned long int return_value_strlen_6;
      return_value_strlen_6=strlen(id);
      tid[(signed long int)return_value_strlen_6] = (char)0;
      client_rec->request_count = (signed long int)0;
      client_rec->error_count = (signed long int)0;
      client_rec->byte_count = (signed long long int)0;
      client_rec->duration = (signed long long int)0;
      client_rec->duration_count_ms = (signed long long int)0;
      client_rec->duration_0 = (signed long int)0;
      client_rec->duration_1 = (signed long int)0;
      client_rec->duration_2 = (signed long int)0;
      client_rec->duration_3 = (signed long int)0;
      client_rec->duration_4 = (signed long int)0;
      client_rec->duration_5 = (signed long int)0;
      client_rec->duration_6 = (signed long int)0;
      client_rec->status_1 = (signed long int)0;
      client_rec->status_2 = (signed long int)0;
      client_rec->status_3 = (signed long int)0;
      client_rec->status_4 = (signed long int)0;
      client_rec->status_5 = (signed long int)0;
      client_rec->status_304 = (signed long int)0;
      client_rec->connections = (signed long int)0;
      client_rec->events=apr_table_make(pool, 100);
      client_rec->pool = pool;
      client_rec->get = (signed long int)0;
      client_rec->post = (signed long int)0;
      client_rec->html = (signed long int)0;
      client_rec->img = (signed long int)0;
      client_rec->cssjs = (signed long int)0;
      client_rec->other = (signed long int)0;
      qs_time(&client_rec->start_s);
      client_rec->end_s = client_rec->start_s + (signed long int)1;
      client_rec->firstLine = m_lines;
      qsInitEvent(pool, client_rec->events);
      apr_table_setn(m_client_entries, tid, (char *)client_rec);
    }

    else
      qs_time(&client_rec->end_s);
    client_rec->lastLine = m_lines;
    client_rec->request_count = client_rec->request_count + 1l;
    client_rec->duration = client_rec->duration + tme;
    client_rec->duration_count_ms = client_rec->duration_count_ms + tmems;
    if(!(k == ((char *)NULL)))
    {
      if((signed int)*k == 48)
      {
        if((signed int)k[1l] == 0)
          client_rec->connections = client_rec->connections + 1l;

      }

    }

    if(!(tme >= 1l))
      client_rec->duration_0 = client_rec->duration_0 + 1l;

    else
      if(tme == 1l)
        client_rec->duration_1 = client_rec->duration_1 + 1l;

      else
        if(tme == 2l)
          client_rec->duration_2 = client_rec->duration_2 + 1l;

        else
          if(tme == 3l)
            client_rec->duration_3 = client_rec->duration_3 + 1l;

          else
            if(tme == 4l)
              client_rec->duration_4 = client_rec->duration_4 + 1l;

            else
              if(tme == 5l)
                client_rec->duration_5 = client_rec->duration_5 + 1l;

              else
                client_rec->duration_6 = client_rec->duration_6 + 1l;
    if(!(B == ((char *)NULL)))
    {
      signed long int return_value_atol_7;
      return_value_atol_7=atol(B);
      client_rec->byte_count = client_rec->byte_count + return_value_atol_7;
    }

    if(!(ct == ((char *)NULL)))
    {
      char *return_value_qsstrcasestr_11;
      return_value_qsstrcasestr_11=qsstrcasestr(ct, "html");
      if(!(return_value_qsstrcasestr_11 == ((char *)NULL)))
        client_rec->html = client_rec->html + 1l;

      else
      {
        return_value_qsstrcasestr_10=qsstrcasestr(ct, "image");
        if(!(return_value_qsstrcasestr_10 == ((char *)NULL)))
          client_rec->img = client_rec->img + 1l;

        else
        {
          return_value_qsstrcasestr_9=qsstrcasestr(ct, "css");
          if(!(return_value_qsstrcasestr_9 == ((char *)NULL)))
            client_rec->cssjs = client_rec->cssjs + 1l;

          else
          {
            return_value_qsstrcasestr_8=qsstrcasestr(ct, "javascript");
            if(!(return_value_qsstrcasestr_8 == ((char *)NULL)))
              client_rec->cssjs = client_rec->cssjs + 1l;

            else
              client_rec->other = client_rec->other + 1l;
          }
        }
      }
    }

    if(!(m == ((char *)NULL)))
    {
      signed int return_value_strcasecmp_13;
      return_value_strcasecmp_13=strcasecmp(m, "get");
      if(return_value_strcasecmp_13 == 0)
        client_rec->get = client_rec->get + 1l;

      else
      {
        return_value_strcasecmp_12=strcasecmp(m, "post");
        if(return_value_strcasecmp_12 == 0)
          client_rec->post = client_rec->post + 1l;

      }
    }

    if(!(S == ((char *)NULL)))
    {
      signed int return_value_strcmp_16;
      return_value_strcmp_16=strcmp(S, "200");
      if(!(return_value_strcmp_16 == 0))
      {
        return_value_strcmp_15=strcmp(S, "304");
        if(!(return_value_strcmp_15 == 0))
        {
          return_value_strcmp_14=strcmp(S, "302");
          if(!(return_value_strcmp_14 == 0))
            client_rec->error_count = client_rec->error_count + 1l;

        }

      }

      if((signed int)*S == 49)
        client_rec->status_1 = client_rec->status_1 + 1l;

      else
        if((signed int)*S == 49)
          client_rec->status_1 = client_rec->status_1 + 1l;

        else
          if((signed int)*S == 50)
            client_rec->status_2 = client_rec->status_2 + 1l;

          else
            if((signed int)*S == 51)
            {
              client_rec->status_3 = client_rec->status_3 + 1l;
              if((signed int)S[1l] == 48)
              {
                if((signed int)S[2l] == 52)
                  client_rec->status_304 = client_rec->status_304 + 1l;

              }

            }

            else
              if((signed int)*S == 52)
                client_rec->status_4 = client_rec->status_4 + 1l;

              else
                if((signed int)*S == 53)
                  client_rec->status_5 = client_rec->status_5 + 1l;

    }

    if(!(E == ((char *)NULL)))
      qs_updateEvents(client_rec->pool, E, client_rec->events);

    goto __CPROVER_DUMP_L35;
  }


__CPROVER_DUMP_L35:
  ;
}

// updateRec
// file qslog.c line 1219
static void updateRec(struct stat_rec_st *rec, char *T, char *t, char *D, char *S, char *s, char *a, char *A, char *BI, char *B, char *R, char *I, char *U, char *Q, char *E, char *k, char *C, signed long int tme, signed long int tmems)
{
  if(!(Q == ((char *)NULL)))
  {
    char *return_value_strchr_1;
    return_value_strchr_1=strchr(Q, 86);
    if(!(return_value_strchr_1 == ((char *)NULL)))
      rec->qos_v = rec->qos_v + 1l;

    char *return_value_strchr_2;
    return_value_strchr_2=strchr(Q, 83);
    if(!(return_value_strchr_2 == ((char *)NULL)))
      rec->qos_s = rec->qos_s + 1l;

    char *return_value_strchr_3;
    return_value_strchr_3=strchr(Q, 68);
    if(!(return_value_strchr_3 == ((char *)NULL)))
      rec->qos_d = rec->qos_d + 1l;

    char *return_value_strchr_4;
    return_value_strchr_4=strchr(Q, 75);
    if(!(return_value_strchr_4 == ((char *)NULL)))
      rec->qos_k = rec->qos_k + 1l;

    char *return_value_strchr_5;
    return_value_strchr_5=strchr(Q, 84);
    if(!(return_value_strchr_5 == ((char *)NULL)))
      rec->qos_t = rec->qos_t + 1l;

    char *return_value_strchr_6;
    return_value_strchr_6=strchr(Q, 76);
    if(!(return_value_strchr_6 == ((char *)NULL)))
      rec->qos_l = rec->qos_l + 1l;

    char *return_value_strchr_7;
    return_value_strchr_7=strchr(Q, 115);
    if(!(return_value_strchr_7 == ((char *)NULL)))
      rec->qos_ser = rec->qos_ser + 1l;

  }

  if(!(E == ((char *)NULL)))
    qs_updateEvents(rec->pool, E, rec->events);

  if(!(I == ((char *)NULL)))
    qs_insertEventT(m_ip_list, I);

  if(!(U == ((char *)NULL)))
    qs_insertEventT(m_user_list, U);

  if(!(B == ((char *)NULL)))
  {
    signed int return_value_atoi_8;
    return_value_atoi_8=atoi(B);
    rec->byte_count = rec->byte_count + (signed long long int)return_value_atoi_8;
  }

  if(!(BI == ((char *)NULL)))
  {
    signed int return_value_atoi_9;
    return_value_atoi_9=atoi(BI);
    rec->i_byte_count = rec->i_byte_count + (signed long long int)return_value_atoi_9;
  }

  if(!(k == ((char *)NULL)))
  {
    if((signed int)*k == 48)
    {
      if((signed int)k[1l] == 0)
        rec->connections = rec->connections + 1l;

    }

  }

  if(!(s == ((char *)NULL)))
  {
    signed long int return_value_atol_10;
    return_value_atol_10=atol(s);
    rec->sum = rec->sum + (unsigned long long int)return_value_atol_10;
  }

  if(!(a == ((char *)NULL)))
  {
    if(!(*a == 0))
    {
      signed long int return_value_atol_11;
      return_value_atol_11=atol(a);
      rec->average = rec->average + (unsigned long long int)return_value_atol_11;
      rec->average_count = rec->average_count + 1l;
    }

  }

  if(!(A == ((char *)NULL)))
  {
    if(!(*A == 0))
    {
      signed long int return_value_atol_12;
      return_value_atol_12=atol(A);
      rec->averAge = rec->averAge + (unsigned long long int)return_value_atol_12;
      rec->averAge_count = rec->averAge_count + 1l;
    }

  }

  if(!(S == ((char *)NULL)))
  {
    if((signed int)*S == 49)
      rec->status_1 = rec->status_1 + 1l;

    else
      if((signed int)*S == 49)
        rec->status_1 = rec->status_1 + 1l;

      else
        if((signed int)*S == 50)
          rec->status_2 = rec->status_2 + 1l;

        else
          if((signed int)*S == 51)
            rec->status_3 = rec->status_3 + 1l;

          else
            if((signed int)*S == 52)
              rec->status_4 = rec->status_4 + 1l;

            else
              if((signed int)*S == 53)
                rec->status_5 = rec->status_5 + 1l;

  }

  if(!(D == ((char *)NULL)) || !(T == ((char *)NULL)) || !(t == ((char *)NULL)))
  {
    rec->duration_count = rec->duration_count + tme;
    rec->duration_count_ms = rec->duration_count_ms + tmems;
    if(!(tme >= 1l))
      rec->duration_0 = rec->duration_0 + 1l;

    else
      if(tme == 1l)
        rec->duration_1 = rec->duration_1 + 1l;

      else
        if(tme == 2l)
          rec->duration_2 = rec->duration_2 + 1l;

        else
          if(tme == 3l)
            rec->duration_3 = rec->duration_3 + 1l;

          else
            if(tme == 4l)
              rec->duration_4 = rec->duration_4 + 1l;

            else
              if(tme == 5l)
                rec->duration_5 = rec->duration_5 + 1l;

              else
                rec->duration_6 = rec->duration_6 + 1l;
  }

  rec->line_count = rec->line_count + 1l;
}

// updateStat
// file qslog.c line 1332
static void updateStat(struct apr_pool_t *pool, const char *cstr, char *line)
{
  struct stat_rec_st *rec = (struct stat_rec_st *)(void *)0;
  char *T = (char *)(void *)0;
  char *t = (char *)(void *)0;
  char *D = (char *)(void *)0;
  char *S = (char *)(void *)0;
  char *BI = (char *)(void *)0;
  char *B = (char *)(void *)0;
  char *R = (char *)(void *)0;
  char *I = (char *)(void *)0;
  char *U = (char *)(void *)0;
  char *Q = (char *)(void *)0;
  char *k = (char *)(void *)0;
  char *C = (char *)(void *)0;
  char *s = (char *)(void *)0;
  char *a = (char *)(void *)0;
  char *A = (char *)(void *)0;
  char *E = (char *)(void *)0;
  char *ct = (char *)(void *)0;
  char *m = (char *)(void *)0;
  const char *c = cstr;
  char *l = line;
  signed long int tme;
  signed long int tmems;
  if(!(*line == 0))
  {
    if(!(m_off == 0))
      m_lines = m_lines + 1l;

    for( ; !(*c == 0); c = c + 1l)
      if((signed int)*c == 46)
      {
        if(!(l == ((char *)NULL)))
        {
          if(!((signed int)*l == 0))
            l=skipElement(l);

        }

      }

      else
        if((signed int)*c == 84)
        {
          if(!(l == ((char *)NULL)))
          {
            if(!((signed int)*l == 0))
              T=cutNext(&l);

          }

        }

        else
          if((signed int)*c == 116)
          {
            if(!(l == ((char *)NULL)))
            {
              if(!((signed int)*l == 0))
                t=cutNext(&l);

            }

          }

          else
            if((signed int)*c == 68)
            {
              if(!(l == ((char *)NULL)))
              {
                if(!((signed int)*l == 0))
                  D=cutNext(&l);

              }

            }

            else
              if((signed int)*c == 83)
              {
                if(!(l == ((char *)NULL)))
                {
                  if(!((signed int)*l == 0))
                    S=cutNext(&l);

                }

              }

              else
                if((signed int)*c == 66)
                {
                  if(!(l == ((char *)NULL)))
                  {
                    if(!((signed int)*l == 0))
                      B=cutNext(&l);

                  }

                }

                else
                  if((signed int)*c == 105)
                  {
                    if(!(l == ((char *)NULL)))
                    {
                      if(!((signed int)*l == 0))
                        BI=cutNext(&l);

                    }

                  }

                  else
                    if((signed int)*c == 107)
                    {
                      if(!(l == ((char *)NULL)))
                      {
                        if(!((signed int)*l == 0))
                          k=cutNext(&l);

                      }

                    }

                    else
                      if((signed int)*c == 67)
                      {
                        if(!(l == ((char *)NULL)))
                        {
                          if(!((signed int)*l == 0))
                            C=cutNext(&l);

                        }

                      }

                      else
                        if((signed int)*c == 99)
                        {
                          if(!(l == ((char *)NULL)))
                          {
                            if(!((signed int)*l == 0))
                              ct=cutNext(&l);

                          }

                        }

                        else
                          if((signed int)*c == 109)
                          {
                            if(!(l == ((char *)NULL)))
                            {
                              if(!((signed int)*l == 0))
                                m=cutNext(&l);

                            }

                          }

                          else
                            if((signed int)*c == 82)
                            {
                              if(!(l == ((char *)NULL)))
                              {
                                if(!((signed int)*l == 0))
                                  R=cutNext(&l);

                              }

                            }

                            else
                              if((signed int)*c == 73)
                              {
                                if(!(l == ((char *)NULL)))
                                {
                                  if(!((signed int)*l == 0))
                                    I=cutNext(&l);

                                }

                              }

                              else
                                if((signed int)*c == 85)
                                {
                                  if(!(l == ((char *)NULL)))
                                  {
                                    if(!((signed int)*l == 0))
                                      U=cutNext(&l);

                                  }

                                }

                                else
                                  if((signed int)*c == 81)
                                  {
                                    if(!(l == ((char *)NULL)))
                                    {
                                      if(!((signed int)*l == 0))
                                        Q=cutNext(&l);

                                    }

                                  }

                                  else
                                    if((signed int)*c == 115)
                                    {
                                      if(!(l == ((char *)NULL)))
                                      {
                                        if(!((signed int)*l == 0))
                                          s=cutNext(&l);

                                      }

                                    }

                                    else
                                      if((signed int)*c == 97)
                                      {
                                        if(!(l == ((char *)NULL)))
                                        {
                                          if(!((signed int)*l == 0))
                                            a=cutNext(&l);

                                        }

                                      }

                                      else
                                        if((signed int)*c == 65)
                                        {
                                          if(!(l == ((char *)NULL)))
                                          {
                                            if(!((signed int)*l == 0))
                                              A=cutNext(&l);

                                          }

                                        }

                                        else
                                          if((signed int)*c == 69)
                                          {
                                            if(!(l == ((char *)NULL)))
                                            {
                                              if(!((signed int)*l == 0))
                                                E=cutNext(&l);

                                            }

                                          }

                                          else
                                            if(!((signed int)*c == 32))
                                            {
                                              if(!(l == ((char *)NULL)))
                                              {
                                                if(!((signed int)*l == 0))
                                                  l = l + 1l;

                                              }

                                            }

    if(!(C == ((char *)NULL)))
      rec=getRec(C);

    qs_csLock();
    if(!(B == ((char *)NULL)))
      stripNum(&B);

    if(!(BI == ((char *)NULL)))
      stripNum(&BI);

    if(!(k == ((char *)NULL)))
      stripNum(&k);

    if(!(S == ((char *)NULL)))
      stripNum(&S);

    if(!(s == ((char *)NULL)))
    {
      stripNum(&s);
      qsNoFloat(s);
    }

    if(!(a == ((char *)NULL)))
    {
      stripNum(&a);
      qsNoFloat(a);
    }

    if(!(A == ((char *)NULL)))
    {
      stripNum(&A);
      qsNoFloat(A);
    }

    tme = (signed long int)0;
    if(!(D == ((char *)NULL)) || !(T == ((char *)NULL)) || !(t == ((char *)NULL)))
    {
      tmems = (signed long int)0;
      if(!(T == ((char *)NULL)))
      {
        stripNum(&T);
        tme=atol(T);
      }

      else
        if(!(t == ((char *)NULL)))
        {
          stripNum(&t);
          tmems=atol(t);
          tme = tmems / (signed long int)1000;
        }

        else
          if(!(D == ((char *)NULL)))
          {
            stripNum(&D);
            tmems=atol(D);
            tmems = tmems / (signed long int)1000;
            tme = tmems / (signed long int)1000;
          }

    }

    if(!(m_offline_count == 0))
      updateClient(pool, T, t, D, S, BI, B, R, I, U, Q, E, k, C, ct, tme, tmems, m);

    else
      if(!(m_offline_url == 0))
      {
        if(tmems == 0l && tme >= 1l)
          tmems = (signed long int)1000 * tme;

        updateUrl(pool, R, S, tmems);
      }

      else
      {
        updateRec(m_stat_rec, T, t, D, S, s, a, A, BI, B, R, I, U, Q, E, k, C, tme, tmems);
        if(!(rec == ((struct stat_rec_st *)NULL)))
          updateRec(rec, T, t, D, S, s, a, A, BI, B, R, I, U, Q, E, k, C, tme, tmems);

      }
    qs_csUnLock();
    if(!(m_off == 0) && !(m_verbose == 0))
      printf("[%ld] I=[%s] U=[%s] B=[%s] i=[%s] S=[%s] T=[%ld](%ld) Q=[%s] E=[%s] k=[%s] R=[%s]\n", m_lines, I == (char *)(void *)0 ? "(null)" : I, U == (char *)(void *)0 ? "(null)" : U, B == (char *)(void *)0 ? "(null)" : B, BI == (char *)(void *)0 ? "(null)" : BI, S == (char *)(void *)0 ? "(null)" : S, tme, tmems, Q == (char *)(void *)0 ? "(null)" : Q, E == (char *)(void *)0 ? "(null)" : E, k == (char *)(void *)0 ? "(null)" : k, R == (char *)(void *)0 ? "(null)" : R);

    line[(signed long int)0] = (char)0;
  }

}

// updateUrl
// file qslog.c line 1007
static void updateUrl(struct apr_pool_t *pool, char *R, char *S, signed long int tmems)
{
  struct anonymous_1 *url_rec;
  char *marker;
  if(!(R == ((char *)NULL)))
  {
    const unsigned short int **return_value___ctype_b_loc_1;
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if((1024 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*R]) == 0)
      fprintf(stdout, "A(%ld)", m_lines);

    else
    {
      marker=strchr(R, 32);
      if(marker == ((char *)NULL))
        fprintf(stdout, "E(%ld)", m_lines);

      else
      {
        marker[(signed long int)0] = (char)59;
        marker=strrchr(R, 32);
        if(!(marker == ((char *)NULL)))
          marker[(signed long int)0] = (char)0;

        marker=strchr(R, 63);
        if(!(marker == ((char *)NULL)))
          marker[(signed long int)0] = (char)0;

        if(!(m_offline_url_cropped == 0))
        {
          char *root;
          root=strchr(R, 47);
          marker=strrchr(R, 47);
          if(!(marker == ((char *)NULL)) && !(marker == root))
            marker[(signed long int)0] = (char)0;

        }

        const char *return_value_apr_table_get_2;
        return_value_apr_table_get_2=apr_table_get(m_url_entries, R);
        url_rec = (struct anonymous_1 *)return_value_apr_table_get_2;
        if(url_rec == ((struct anonymous_1 *)NULL))
        {
          const struct apr_array_header_t *return_value_apr_table_elts_3;
          return_value_apr_table_elts_3=apr_table_elts(m_url_entries);
          if(return_value_apr_table_elts_3->nelts >= 25000)
          {
            if(m_max_entries == 0)
            {
              fprintf(stderr, "\nreached max url entries (%d)\n", 25000);
              m_max_entries = 1;
            }

            goto __CPROVER_DUMP_L17;
          }

          void *return_value_apr_palloc_4;
          return_value_apr_palloc_4=apr_palloc(pool, sizeof(struct anonymous_1) /*56ul*/ );
          void *return_value_memset_5;
          return_value_memset_5=memset(return_value_apr_palloc_4, 0, sizeof(struct anonymous_1) /*56ul*/ );
          url_rec = (struct anonymous_1 *)return_value_memset_5;
          url_rec->request_count = (signed long int)0;
          url_rec->status_1 = (signed long int)0;
          url_rec->status_2 = (signed long int)0;
          url_rec->status_3 = (signed long int)0;
          url_rec->status_4 = (signed long int)0;
          url_rec->status_5 = (signed long int)0;
          url_rec->duration_count_ms = (signed long long int)0;
          char *return_value_apr_pstrdup_6;
          return_value_apr_pstrdup_6=apr_pstrdup(pool, R);
          apr_table_setn(m_url_entries, return_value_apr_pstrdup_6, (char *)url_rec);
        }

        url_rec->request_count = url_rec->request_count + 1l;
        if(!(S == ((char *)NULL)))
        {
          if((signed int)*S == 49)
            url_rec->status_1 = url_rec->status_1 + 1l;

          else
            if((signed int)*S == 49)
              url_rec->status_1 = url_rec->status_1 + 1l;

            else
              if((signed int)*S == 50)
                url_rec->status_2 = url_rec->status_2 + 1l;

              else
                if((signed int)*S == 51)
                  url_rec->status_3 = url_rec->status_3 + 1l;

                else
                  if((signed int)*S == 52)
                    url_rec->status_4 = url_rec->status_4 + 1l;

                  else
                    if((signed int)*S == 53)
                      url_rec->status_5 = url_rec->status_5 + 1l;

        }

        url_rec->duration_count_ms = url_rec->duration_count_ms + tmems;
      }
    }
  }


__CPROVER_DUMP_L17:
  ;
}

// usage
// file qslog.c line 1763
static void usage(const char *cmd, signed int man)
{
  if(!(man == 0))
  {
    char *return_value_qs_CMD_1;
    return_value_qs_CMD_1=qs_CMD(cmd);
    printf(".TH %s 1 \"%s\" \"mod_qos utilities %s\" \"%s man page\"\n", return_value_qs_CMD_1, (const void *)man_date, (const void *)man_version, cmd);
  }

  printf("\n");
  if(!(man == 0))
    printf(".SH NAME\n");

  qs_man_print(man, "%s - collects request statistics from access log data.\n", cmd);
  printf("\n");
  if(!(man == 0))
    printf(".SH SYNOPSIS\n");

  qs_man_print(man, "%s%s -f <format_string> -o <out_file> [-p[c|u[c]] [-v]] [-x [<num>]] [-u <name>] [-m] [-c <path>]\n", man != 0 ? "" : "Usage: ", cmd);
  printf("\n");
  if(!(man == 0))
    printf(".SH DESCRIPTION\n");

  else
    printf("Summary\n");
  qs_man_print(man, "%s is a real time access log analyzer. It collects\n", cmd);
  qs_man_print(man, "the data from stdin. The output is written to the specified\n");
  qs_man_println(man, "file every minute and includes the following entries:\n");
  qs_man_println(man, "  - requests per second (r/s)\n");
  qs_man_println(man, "  - number of requests within measured time (req)\n");
  qs_man_println(man, "  - bytes sent to the client per second (b/s)\n");
  qs_man_println(man, "  - bytes received from the client per second (ib/s)\n");
  qs_man_println(man, "  - repsonse status codes within the last minute (1xx,2xx,3xx,4xx,5xx)\n");
  qs_man_println(man, "  - average response duration (av)\n");
  qs_man_println(man, "  - average response duration in milliseconds (avms)\n");
  qs_man_println(man, "  - distribution of response durations within the last minute\n");
  qs_man_print(man, "    (<1s,1s,2s,3s,4s,5s,>5)\n");
  if(!(man == 0))
    printf("\n");

  qs_man_println(man, "  - number of established (new) connections within the measured time (esco)\n");
  qs_man_println(man, "  - average system load (sl)\n");
  qs_man_println(man, "  - free memory (m) (not available for all platforms)\n");
  qs_man_println(man, "  - number of client ip addresses seen withn the last %d seconds (ip)\n", 600);
  qs_man_println(man, "  - number of different users seen withn the last %d seconds (usr)\n", 600);
  qs_man_println(man, "  - number of events identified by the 'E' format character\n");
  qs_man_println(man, "  - number of mod_qos events within the last minute (qV=create session,\n");
  qs_man_print(man, "    qS=session pass, qD=access denied, qK=connection closed, qT=dynamic\n");
  qs_man_print(man, "    keep-alive, qL=request/response slow down, qs=serialized request)\n");
  printf("\n");
  if(!(man == 0))
    printf(".SH OPTIONS\n");

  else
    printf("Options\n");
  if(!(man == 0))
    printf(".TP\n");

  qs_man_print(man, "  -f <format_string>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Defines the log data format and the positions of data\n");
  qs_man_print(man, "     elements processed by this utility.\n");
  qs_man_print(man, "     See to the 'LogFormat' directive of the httpd.conf file\n");
  qs_man_print(man, "     to see the format defintions of the servers access log data.\n");
  if(!(man == 0))
    printf("\n");

  qs_man_println(man, "     %s knows the following elements:\n", cmd);
  qs_man_println(man, "     I defines the client ip address (%%h)\n");
  qs_man_println(man, "     R defines the request line (%%r)\n");
  qs_man_println(man, "     S defines HTTP response status code (%%s)\n");
  qs_man_println(man, "     B defines the transferred bytes (%%b or %%O)\n");
  qs_man_println(man, "     i defines the received bytes (%%I)\n");
  qs_man_println(man, "     T defines the request duration (%%T)\n");
  qs_man_println(man, "     t defines the request duration in milliseconds (may be used instead of T)\n");
  qs_man_println(man, "     D defines the request duration in microseconds (may be used instead of T) (%%D)\n");
  qs_man_println(man, "     k defines the number of keepalive requests on the connection (%%k)\n");
  qs_man_println(man, "     U defines the user tracking id (%%{mod_qos_user_id}e)\n");
  qs_man_println(man, "     Q defines the mod_qos_ev event message (%%{mod_qos_ev}e)\n");
  qs_man_println(man, "     C defines the element for the detailed log (-c option), e.g. \"%%U\"\n");
  qs_man_println(man, "     s arbitrary counter to add up (sum within a minute)\n");
  qs_man_println(man, "     a arbitrary counter to build an average from (average per request)\n");
  qs_man_println(man, "     A arbitrary counter to build an average from (average per request)\n");
  qs_man_println(man, "     E comma separated list of event strings\n");
  qs_man_println(man, "     c content type (%%{content-type}o), available in -pc mode only\n");
  qs_man_println(man, "     m request method (GET/POST) (%%m), available in -pc mode only\n");
  qs_man_println(man, "     . defines an element to ignore (unknown string)\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -o <out_file>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Specifies the file to store the output to. stdout is used if this option\n");
  qs_man_print(man, "     is not defined.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -p\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Used for post processing when reading the log data from a file (cat/pipe).\n");
  qs_man_print(man, "     %s is started using it's offline mode (extracting the time stamps from\n", cmd);
  qs_man_print(man, "     the log lines) in order to process existing log files.\n");
  qs_man_print(man, "     The option \"-pc\" may be used alternatively if you want to gather request\n");
  qs_man_print(man, "     information per client (identified by IP address (I) or user tracking id (U)\n");
  qs_man_print(man, "     showing how many request each client has performed within the captured period\n");
  qs_man_print(man, "     of time). \"-pc\" supports the format characters IURSBTtDkEcm.\n");
  qs_man_print(man, "     The option \"-pu\" collects statistics on a per URL level (supports format\n");
  qs_man_print(man, "     characters RSTtD).\n");
  qs_man_print(man, "     \"-puc\" is very similar to \"-pu\" but cuts the end (handler) of each URL.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -v\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Verbose mode.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -x [<num>]\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Rotates the output file once a day (move). You may specify the number of\n");
  qs_man_print(man, "     rotated files to keep. Default are %d.\n", 14);
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -u <name>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Becomes another user, e.g. www-data.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -m\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Calculates free system memory every minute.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -c <path>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Enables the collection of log statitics for different request types.\n");
  qs_man_print(man, "     'path' specifies the necessary rule file. Each rule consists of a rule\n");
  qs_man_print(man, "     identifier and a regular expression to identify a request seprarated\n");
  qs_man_print(man, "     by a colon, e.g., 01:^(/a)|(/c). The regular expressions are matched against\n");
  qs_man_print(man, "     the log data element which has been identified by the 'C' format character.\n");
  printf("\n");
  if(!(man == 0))
  {
    printf(".SH EXAMPLE\n");
    printf("Configuration using pipped logging:\n");
    printf("\n");
  }

  else
    printf("Example configuration using pipped logging:\n");
  qs_man_println(man, "  CustomLog \"|/bin/%s -f ISBTQ -x -o /var/logs/stat.csv\" \"%%h %%>s %%b %%T %%{mod_qos_ev}e\"\n", cmd);
  printf("\n");
  if(!(man == 0))
  {
    printf("Post processing:\n");
    printf("\n");
  }

  else
    printf("Example for post processing:\n");
  qs_man_println(man, "  LogFormat \"%%t %%h \\\"%%r\\\" %%>s %%b \\\"%%{User-Agent}i\\\" %%T\"\n");
  qs_man_println(man, "  cat access_log | /bin/%s -f ..IRSB.T -o /var/logs/stat.csv -p\n", cmd);
  printf("\n");
  if(!(man == 0))
  {
    printf(".SH SEE ALSO\n");
    printf("qsexec(1), qsfilter2(1), qsgeo(1), qsgrep(1), qshead(1), qslogger(1), qspng(1), qsrotate(1), qssign(1), qstail(1)\n");
    printf(".SH AUTHOR\n");
    printf("Pascal Buchbinder, http://opensource.adnovum.ch/mod_qos/\n");
  }

  else
    printf("See http://opensource.adnovum.ch/mod_qos/ for further details.\n");
  if(!(man == 0))
    exit(0);

  else
    exit(1);
}

