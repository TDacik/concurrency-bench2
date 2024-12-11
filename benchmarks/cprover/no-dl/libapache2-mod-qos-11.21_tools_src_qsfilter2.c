// tag-#anon#ST[*{SYM#tag-apr_pool_t#}$SYM#tag-apr_pool_t#$'pool'||*{SYM#tag-apr_table_t#}$SYM#tag-apr_table_t#$'rules'||*{SYM#tag-apr_table_t#}$SYM#tag-apr_table_t#$'rules_url'||S32'from'||S32'to'|]
// file qsfilter2.c line 568
struct anonymous$0;

// tag-#anon#ST[*{SYM#tag-real_pcre#}$SYM#tag-real_pcre#$'pcre'||*{SYM#tag-pcre_extra#}$SYM#tag-pcre_extra#$'extra'||*{S8}$S8$'rule'||*{S8}$S8$'path'||*{S8}$S8$'query_m_string'||*{S8}$S8$'query_m_pcre'||S32'fragment'||U32'$pad0'|]
// file qsfilter2.c line 124
struct anonymous;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$1;

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

// tag-apr_uri_t
// file /usr/include/apr-1.0/apr_uri.h line 80
struct apr_uri_t;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-hostent
// file /usr/include/apr-1.0/apr_uri.h line 106
struct hostent;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pcre_extra
// file /usr/include/pcre.h line 376
struct pcre_extra;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-real_pcre
// file /usr/include/pcre.h line 324
struct real_pcre;

// tag-stack_st
// file /usr/include/openssl/stack.h line 66
struct stack_st;

#ifndef NULL
#define NULL ((void*)0)
#endif

// STACK_qs_cmp
// file qsfilter2.c line 136
signed int STACK_qs_cmp(const char * const *_pA, const char * const *_pB);
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
// apr_pool_destroy
// file /usr/include/apr-1.0/apr_pools.h line 395
void apr_pool_destroy(struct apr_pool_t *);
// apr_psprintf
// file /usr/include/apr-1.0/apr_strings.h line 182
char * apr_psprintf(struct apr_pool_t *, const char *, ...);
// apr_pstrcat
// file /usr/include/apr-1.0/apr_strings.h line 147
char * apr_pstrcat(struct apr_pool_t *, ...);
// apr_pstrdup
// file /usr/include/apr-1.0/apr_strings.h line 95
char * apr_pstrdup(struct apr_pool_t *, const char *);
// apr_table_add
// file /usr/include/apr-1.0/apr_tables.h line 347
void apr_table_add(struct apr_table_t *, const char *, const char *);
// apr_table_addn
// file /usr/include/apr-1.0/apr_tables.h line 360
void apr_table_addn(struct apr_table_t *, const char *, const char *);
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
// apr_time_now
// file /usr/include/apr-1.0/apr_time.h line 88
signed long int apr_time_now(void);
// apr_uri_parse
// file /usr/include/apr-1.0/apr_uri.h line 159
signed int apr_uri_parse(struct apr_pool_t *, const char *, struct apr_uri_t *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// ctime
// file /usr/include/time.h line 264
extern char * ctime(const signed long int *);
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
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// getchar
// file /usr/include/stdio.h line 538
extern signed int getchar(void);
// getgid
// file /usr/include/unistd.h line 681
extern unsigned int getgid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// nice
// file /usr/include/unistd.h line 598
extern signed int nice(signed int);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// pcre_compile
// file /usr/include/pcre.h line 540
extern struct real_pcre * pcre_compile(const char *, signed int, const char **, signed int *, const unsigned char *);
// pcre_exec
// file /usr/include/pcre.h line 573
extern signed int pcre_exec(const struct real_pcre *, const struct pcre_extra *, const char *, signed int, signed int, signed int, signed int *, signed int);
// pcre_study
// file /usr/include/pcre.h line 633
extern struct pcre_extra * pcre_study(const struct real_pcre *, signed int, const char **);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$1 *, const union anonymous$2 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$1 *);
// qos_2pcre
// file qsfilter2.c line 617
static char * qos_2pcre(struct apr_pool_t *pool, const char *line);
// qos_addstr
// file qsfilter2.c line 718
static char * qos_addstr(struct apr_pool_t *pool, char *o, char *d, char *n);
// qos_auto_detect
// file qsfilter2.c line 1345
static void qos_auto_detect(char **raw);
// qos_b64_2pcre
// file qsfilter2.c line 1018
static char * qos_b64_2pcre(struct apr_pool_t *pool, const char *line);
// qos_checkstr
// file qsfilter2.c line 687
static signed int qos_checkstr(struct apr_pool_t *pool, char *r, char *d, char *p);
// qos_delete_obsolete_rules
// file qsfilter2.c line 846
static void qos_delete_obsolete_rules(struct apr_pool_t *pool, struct apr_table_t *rules, struct apr_table_t *rules_url);
// qos_detect_b64
// file qsfilter2.c line 156
static char * qos_detect_b64(char *line, signed int silent);
// qos_enforce_blacklist
// file qsfilter2.c line 939
static signed int qos_enforce_blacklist(struct apr_table_t *rules, const char *line);
// qos_escape_pcre
// file qsfilter2.c line 208
static char * qos_escape_pcre(struct apr_pool_t *pool, char *line);
// qos_fgetline
// file qsfilter2.c line 315
static signed int qos_fgetline(char *s, signed int n, struct _IO_FILE *f);
// qos_get_used
// file qsfilter2.c line 577
static struct apr_table_t * qos_get_used(struct apr_pool_t *pool, struct apr_table_t *rules, struct apr_table_t *rules_url, signed int from, signed int to);
// qos_hex2c
// file qsfilter2.c line 245
static signed int qos_hex2c(const char *x);
// qos_init_pcre
// file qsfilter2.c line 331
static void qos_init_pcre();
// qos_is_alnum
// file qsfilter2.c line 1239
static signed int qos_is_alnum(const char *string);
// qos_ishex
// file qsfilter2.c line 268
static signed int qos_ishex(char x);
// qos_load_blacklist
// file qsfilter2.c line 1010
static void qos_load_blacklist(struct apr_pool_t *pool, struct apr_table_t *blacklist, const char *httpdconf);
// qos_load_rules
// file qsfilter2.c line 954
static void qos_load_rules(struct apr_pool_t *pool, struct apr_table_t *ruletable, const char *httpdconf, const char *command, signed int option);
// qos_load_whitelist
// file qsfilter2.c line 1013
static void qos_load_whitelist(struct apr_pool_t *pool, struct apr_table_t *rules, const char *httpdconf);
// qos_measurement
// file qsfilter2.c line 1570
static void qos_measurement(struct apr_pool_t *pool, struct apr_table_t *blacklist, struct apr_table_t *rules, struct _IO_FILE *f, signed int *ln);
// qos_multi_query_string_pcre
// file qsfilter2.c line 1134
static char * qos_multi_query_string_pcre(struct apr_pool_t *pool, const char *path, char **query_m_string, char **query_m_pcre);
// qos_path_pcre
// file qsfilter2.c line 1195
static char * qos_path_pcre(struct apr_pool_t *lpool, const char *path);
// qos_path_pcre_string
// file qsfilter2.c line 1202
static char * qos_path_pcre_string(struct apr_pool_t *lpool, const char *path);
// qos_pcre_compile
// file qsfilter2.c line 143
static struct real_pcre * qos_pcre_compile(char *pattern, signed int option);
// qos_post_optimization
// file qsfilter2.c line 1328
static char * qos_post_optimization(struct apr_pool_t *lpool, char *query);
// qos_process_log
// file qsfilter2.c line 1382
static void qos_process_log(struct apr_pool_t *pool, struct apr_table_t *blacklist, struct apr_table_t *rules, struct apr_table_t *rules_url, struct apr_table_t *special_rules, struct _IO_FILE *f, signed int *ln, signed int *dc, signed int first);
// qos_qqs
// file qsfilter2.c line 751
static char * qos_qqs(struct apr_pool_t *pool, char *string, char *query_pcre, signed int singleEq, signed int hasEq, signed int startAmp);
// qos_query_optimization
// file qsfilter2.c line 771
static void qos_query_optimization(struct apr_pool_t *pool, struct apr_table_t *rules);
// qos_query_string_pcre
// file qsfilter2.c line 1042
static char * qos_query_string_pcre(struct apr_pool_t *pool, const char *path);
// qos_rule_optimization
// file qsfilter2.c line 1250
static void qos_rule_optimization(struct apr_pool_t *pool, struct apr_pool_t *lpool, struct apr_table_t *rules, struct apr_table_t *special_rules);
// qos_test_for_existing_rule
// file qsfilter2.c line 898
static signed int qos_test_for_existing_rule(char *plain, char *line, struct apr_table_t *rules, struct apr_table_t *special_rules, signed int line_nr, struct apr_table_t *rules_url, struct apr_table_t *source_rules, signed int first);
// qos_unescaping
// file qsfilter2.c line 276
static signed int qos_unescaping(char *x);
// qos_worker
// file qsfilter2.c line 611
static void * qos_worker(void *argv);
// qs_CMD
// file qs_util.h line 50
char * qs_CMD(const char *cmd);
// qs_apache_escape
// file qsfilter2.c line 174
static char * qs_apache_escape(struct apr_pool_t *pool, const char *line);
// qs_csInitLock
// file qs_util.c line 239
void qs_csInitLock();
// qs_csLock
// file qs_util.c line 225
void qs_csLock();
// qs_csUnLock
// file qs_util.c line 232
void qs_csUnLock();
// qs_deleteOldFiles
// file qs_util.c line 251
void qs_deleteOldFiles(const char *file_name, signed int generations);
// qs_getLine
// file qs_util.c line 150
signed int qs_getLine(char *s, signed int n);
// qs_getLinef
// file qs_util.c line 173
signed int qs_getLinef(char *s, signed int n, struct _IO_FILE *f);
// qs_man_print
// file qs_util.h line 51
void qs_man_print(signed int man, const char *fmt, ...);
// qs_man_println
// file qs_util.h line 52
void qs_man_println(signed int man, const char *fmt, ...);
// qs_set2OfflineMode
// file qs_util.c line 210
void qs_set2OfflineMode();
// qs_setTime
// file qs_util.c line 217
void qs_setTime(signed long int tme);
// qs_setuid
// file qs_util.c line 305
void qs_setuid(const char *username, const char *cmd);
// qs_time
// file qs_util.c line 198
void qs_time(signed long int *tme);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// rewinddir
// file /usr/include/dirent.h line 208
extern void rewinddir(struct __dirstream *);
// setgid
// file /usr/include/unistd.h line 717
extern signed int setgid(unsigned int);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// sk_new
// file /usr/include/openssl/stack.h line 82
struct stack_st * sk_new(signed int (*)(const void *, const void *));
// sk_num
// file /usr/include/openssl/stack.h line 77
signed int sk_num(const struct stack_st *);
// sk_push
// file /usr/include/openssl/stack.h line 92
signed int sk_push(struct stack_st *, void *);
// sk_sort
// file /usr/include/openssl/stack.h line 100
void sk_sort(struct stack_st *);
// sk_value
// file /usr/include/openssl/stack.h line 78
void * sk_value(const struct stack_st *, signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
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
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usage
// file qsfilter2.c line 341
static void usage(char *cmd, signed int man);
// vsprintf
// file /usr/include/stdio.h line 379
extern signed int vsprintf(char *, const char *, void **);

struct anonymous$0
{
  // pool
  struct apr_pool_t *pool;
  // rules
  struct apr_table_t *rules;
  // rules_url
  struct apr_table_t *rules_url;
  // from
  signed int from;
  // to
  signed int to;
};

struct anonymous
{
  // pcre
  struct real_pcre *pcre;
  // extra
  struct pcre_extra *extra;
  // rule
  char *rule;
  // path
  char *path;
  // query_m_string
  char *query_m_string;
  // query_m_pcre
  char *query_m_pcre;
  // fragment
  signed int fragment;
};

union anonymous$2
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

union anonymous$1
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

struct apr_uri_t
{
  // scheme
  char *scheme;
  // hostinfo
  char *hostinfo;
  // user
  char *user;
  // password
  char *password;
  // hostname
  char *hostname;
  // port_str
  char *port_str;
  // path
  char *path;
  // query
  char *query;
  // fragment
  char *fragment;
  // hostent
  struct hostent *hostent;
  // port
  unsigned short int port;
  // is_initialized
  unsigned int is_initialized : 1;
  // dns_looked_up
  unsigned int dns_looked_up : 1;
  // dns_resolved
  unsigned int dns_resolved : 1;
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

struct pcre_extra
{
  // flags
  unsigned long int flags;
  // study_data
  void *study_data;
  // match_limit
  unsigned long int match_limit;
  // callout_data
  void *callout_data;
  // tables
  const unsigned char *tables;
  // match_limit_recursion
  unsigned long int match_limit_recursion;
  // mark
  unsigned char **mark;
  // executable_jit
  void *executable_jit;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct stack_st
{
  // num
  signed int num;
  // data
  char **data;
  // sorted
  signed int sorted;
  // num_alloc
  signed int num_alloc;
  // comp
  signed int (*comp)(const void *, const void *);
};


// m_base64
// file qsfilter2.c line 108
static signed int m_base64 = 5;
// m_exit_on_error
// file qsfilter2.c line 117
static signed int m_exit_on_error = 0;
// m_filter
// file qsfilter2.c line 122
static const char *m_filter = (const char *)(void *)0;
// m_handler
// file qsfilter2.c line 118
static signed int m_handler = 0;
// m_log_req_regex
// file qsfilter2.c line 120
static signed int m_log_req_regex = 0;
// m_mode
// file qsfilter2.c line 107
static signed int m_mode = 0x00;
// m_path_depth
// file qsfilter2.c line 110
static signed int m_path_depth = 1;
// m_pfx
// file qsfilter2.c line 121
static const char *m_pfx = (const char *)(void *)0;
// m_qs_lock_cs
// file qs_util.c line 43
static union anonymous$1 m_qs_lock_cs;
// m_qs_offline
// file qs_util.c line 45
static signed int m_qs_offline = 0;
// m_qs_virtualSystemTime
// file qs_util.c line 48
static signed long int m_qs_virtualSystemTime = (signed long int)0;
// m_query_len_pcre
// file qsfilter2.c line 116
static signed int m_query_len_pcre = 10;
// m_query_multi_pcre
// file qsfilter2.c line 113
static signed int m_query_multi_pcre = 0;
// m_query_o_pcre
// file qsfilter2.c line 114
static signed int m_query_o_pcre = 0;
// m_query_pcre
// file qsfilter2.c line 112
static signed int m_query_pcre = 0;
// m_query_single_pcre
// file qsfilter2.c line 115
static signed int m_query_single_pcre = 0;
// m_redundant
// file qsfilter2.c line 111
static signed int m_redundant = 1;
// m_req_regex
// file qsfilter2.c line 119
static struct real_pcre *m_req_regex = (struct real_pcre *)(void *)0;
// m_verbose
// file qsfilter2.c line 109
static signed int m_verbose = 1;
// man_date
// file qs_util.h line 33
static const char man_date[13l] = { 'J', 'a', 'n', 'u', 'a', 'r', 'y', ' ', '2', '0', '1', '6', 0 };
// man_version
// file qs_util.h line 32
static const char man_version[6l] = { '1', '1', '.', '2', '1', 0 };
// pcre_b64
// file qsfilter2.c line 97
struct real_pcre *pcre_b64;
// pcre_hx
// file qsfilter2.c line 98
struct real_pcre *pcre_hx;
// pcre_simple_path
// file qsfilter2.c line 99
struct real_pcre *pcre_simple_path;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// STACK_qs_cmp
// file qsfilter2.c line 136
signed int STACK_qs_cmp(const char * const *_pA, const char * const *_pB)
{
  struct anonymous *pA = *((struct anonymous **)_pA);
  struct anonymous *pB = *((struct anonymous **)_pB);
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(pA->rule, pB->rule);
  return return_value_strcmp$1;
}

// main
// file qsfilter2.c line 1606
signed int main(signed int argc, const char * const *argv)
{
  struct apr_table_entry_t *entry;
  signed long int performance = (signed long int)-1;
  signed long int start;
  start=time((signed long int *)(void *)0);
  signed long int end;
  signed int line_nr = 0;
  signed int deny_count = 0;
  char *time_string;
  signed int i;
  signed int rc;
  const char *access_log = (const char *)(void *)0;
  struct _IO_FILE *f;
  struct apr_pool_t *pool;
  struct apr_table_t *rules;
  struct apr_table_t *special_rules;
  struct apr_table_t *blacklist;
  struct apr_table_t *rules_url;
  signed int blacklist_size = 0;
  signed int whitelist_size = 0;
  char *cmd;
  cmd=strrchr(argv[(signed long int)0], 47);
  const char *httpdconf = (const char *)(void *)0;
  apr_app_initialize(&argc, &argv, (const char * const **)(void *)0);
  apr_pool_create_ex(&pool, (struct apr_pool_t *)(void *)0, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
  rules=apr_table_make(pool, 10);
  special_rules=apr_table_make(pool, 10);
  blacklist=apr_table_make(pool, 10);
  rules_url=apr_table_make(pool, 10);
  rc=nice(10);
  if(rc == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    fprintf(stderr, "ERROR, failed to change nice value: %s\n", return_value_strerror$2);
  }

  if(cmd == ((char *)NULL))
    cmd = (char *)argv[(signed long int)0];

  else
    cmd = cmd + 1l;
  argc = argc - 1;
  argv = argv + 1l;
  signed int return_value_strcmp$25;
  signed int return_value_strcmp$24;
  signed int return_value_strcmp$23;
  signed int return_value_strcmp$22;
  signed int return_value_strcmp$21;
  signed int return_value_strcmp$20;
  signed int return_value_strcmp$19;
  signed int return_value_strcmp$18;
  signed int return_value_strcmp$17;
  signed int return_value_strcmp$16;
  signed int return_value_strcmp$15;
  signed int return_value_strcmp$14;
  signed int return_value_strcmp$13;
  signed int return_value_strcmp$12;
  signed int return_value_strcmp$11;
  signed int return_value_strcmp$10;
  signed int return_value_strcmp$9;
  signed int return_value_strcmp$8;
  signed int return_value_strcmp$7;
  signed int return_value_strcmp$6;
  while(argc >= 1)
  {
    signed int return_value_strcmp$26;
    return_value_strcmp$26=strcmp(*argv, "-v");
    if(return_value_strcmp$26 == 0)
    {
      argc = argc - 1;
      if(argc >= 1)
      {
        argv = argv + 1l;
        m_verbose=atoi(*argv);
      }

    }

    else
    {
      return_value_strcmp$25=strcmp(*argv, "-c");
      if(return_value_strcmp$25 == 0)
      {
        argc = argc - 1;
        if(argc >= 1)
        {
          argv = argv + 1l;
          httpdconf = *argv;
        }

      }

      else
      {
        return_value_strcmp$24=strcmp(*argv, "-i");
        if(return_value_strcmp$24 == 0)
        {
          argc = argc - 1;
          if(argc >= 1)
          {
            argv = argv + 1l;
            access_log = *argv;
          }

        }

        else
        {
          return_value_strcmp$23=strcmp(*argv, "-k");
          if(return_value_strcmp$23 == 0)
          {
            argc = argc - 1;
            if(argc >= 1)
            {
              argv = argv + 1l;
              m_pfx = *argv;
            }

          }

          else
          {
            return_value_strcmp$22=strcmp(*argv, "-f");
            if(return_value_strcmp$22 == 0)
            {
              argc = argc - 1;
              if(argc >= 1)
              {
                argv = argv + 1l;
                m_filter = *argv;
              }

            }

            else
            {
              return_value_strcmp$21=strcmp(*argv, "-d");
              if(return_value_strcmp$21 == 0)
              {
                argc = argc - 1;
                if(argc >= 1)
                {
                  argv = argv + 1l;
                  m_path_depth=atoi(*argv);
                }

              }

              else
              {
                return_value_strcmp$20=strcmp(*argv, "-u");
                if(return_value_strcmp$20 == 0)
                {
                  argc = argc - 1;
                  if(argc >= 1)
                  {
                    const char *coders;
                    argv = argv + 1l;
                    coders = *argv;
                    char *return_value_strstr$3;
                    return_value_strstr$3=strstr(coders, "uni");
                    if(!(return_value_strstr$3 == ((char *)NULL)))
                      m_mode = m_mode | 0x02;

                    char *return_value_strstr$4;
                    return_value_strstr$4=strstr(coders, "ansi");
                    if(!(return_value_strstr$4 == ((char *)NULL)))
                      m_mode = m_mode | 0x04;

                    char *return_value_strstr$5;
                    return_value_strstr$5=strstr(coders, "html");
                    if(!(return_value_strstr$5 == ((char *)NULL)))
                      m_mode = m_mode | 0x01;

                  }

                }

                else
                {
                  return_value_strcmp$19=strcmp(*argv, "-n");
                  if(return_value_strcmp$19 == 0)
                    m_redundant = 0;

                  else
                  {
                    return_value_strcmp$18=strcmp(*argv, "-b");
                    if(return_value_strcmp$18 == 0)
                    {
                      argc = argc - 1;
                      if(argc >= 1)
                      {
                        argv = argv + 1l;
                        m_base64=atoi(*argv);
                      }

                    }

                    else
                    {
                      return_value_strcmp$17=strcmp(*argv, "-l");
                      if(return_value_strcmp$17 == 0)
                      {
                        argc = argc - 1;
                        if(argc >= 1)
                        {
                          argv = argv + 1l;
                          m_query_len_pcre=atoi(*argv);
                        }

                      }

                      else
                      {
                        return_value_strcmp$16=strcmp(*argv, "-p");
                        if(return_value_strcmp$16 == 0)
                          m_query_pcre = 1;

                        else
                        {
                          return_value_strcmp$15=strcmp(*argv, "-m");
                          if(return_value_strcmp$15 == 0)
                            m_query_multi_pcre = 1;

                          else
                          {
                            return_value_strcmp$14=strcmp(*argv, "-o");
                            if(return_value_strcmp$14 == 0)
                              m_query_o_pcre = 1;

                            else
                            {
                              return_value_strcmp$13=strcmp(*argv, "-s");
                              if(return_value_strcmp$13 == 0)
                                m_query_single_pcre = 1;

                              else
                              {
                                return_value_strcmp$12=strcmp(*argv, "-e");
                                if(return_value_strcmp$12 == 0)
                                  m_exit_on_error = 1;

                                else
                                {
                                  return_value_strcmp$11=strcmp(*argv, "-t");
                                  if(return_value_strcmp$11 == 0)
                                    performance = (signed long int)0;

                                  else
                                  {
                                    return_value_strcmp$10=strcmp(*argv, "-h");
                                    if(return_value_strcmp$10 == 0)
                                      m_handler = 1;

                                    else
                                    {
                                      return_value_strcmp$9=strcmp(*argv, "-?");
                                      if(return_value_strcmp$9 == 0)
                                        usage(cmd, 0);

                                      else
                                      {
                                        return_value_strcmp$8=strcmp(*argv, "-help");
                                        if(return_value_strcmp$8 == 0)
                                          usage(cmd, 0);

                                        else
                                        {
                                          return_value_strcmp$7=strcmp(*argv, "--help");
                                          if(return_value_strcmp$7 == 0)
                                            usage(cmd, 0);

                                          else
                                          {
                                            return_value_strcmp$6=strcmp(*argv, "--man");
                                            if(return_value_strcmp$6 == 0)
                                              usage(cmd, 1);

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
            }
          }
        }
      }
    }
    argc = argc - 1;
    argv = argv + 1l;
  }
  qos_init_pcre();
  if(!(m_query_multi_pcre == 0) && !(m_query_o_pcre == 0) || !(m_query_multi_pcre == 0) && !(m_query_pcre == 0) || !(m_query_multi_pcre == 0) && !(m_query_single_pcre == 0) || !(m_query_o_pcre == 0) && !(m_query_pcre == 0) || !(m_query_o_pcre == 0) && !(m_query_single_pcre == 0) || !(m_query_pcre == 0) && !(m_query_single_pcre == 0))
  {
    fprintf(stderr, "ERROR, option -s,-m,-o or -p can't be used together.\n");
    exit(1);
  }

  if(!(httpdconf == ((const char *)NULL)))
  {
    qos_load_blacklist(pool, blacklist, httpdconf);
    const struct apr_array_header_t *return_value_apr_table_elts$27;
    return_value_apr_table_elts$27=apr_table_elts(blacklist);
    blacklist_size = return_value_apr_table_elts$27->nelts;
    qos_load_whitelist(pool, rules, httpdconf);
    const struct apr_array_header_t *return_value_apr_table_elts$28;
    return_value_apr_table_elts$28=apr_table_elts(rules);
    whitelist_size = return_value_apr_table_elts$28->nelts;
  }

  if(access_log == ((const char *)NULL))
    usage(cmd, 0);

  f=fopen(access_log, "r");
  if(f == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "ERROR, could not open input file %s\n", access_log);
    exit(1);
  }

  qos_process_log(pool, blacklist, rules, rules_url, special_rules, f, &line_nr, &deny_count, 1);
  fclose(f);
  if(!(m_redundant == 0))
  {
    signed int xl = 0;
    signed int y = 0;
    qos_delete_obsolete_rules(pool, rules, rules_url);
    if(!(m_verbose == 0))
    {
      printf("# verify new rules ...\n");
      fflush(stdout);
    }

    f=fopen(access_log, "r");
    qos_process_log(pool, blacklist, rules, rules_url, special_rules, f, &xl, &y, 0);
    fclose(f);
  }

  if(performance == 0l)
  {
    signed int lx = 0;
    signed long int tv;
    f=fopen(access_log, "r");
    tv=apr_time_now();
    qos_measurement(pool, blacklist, rules, f, &lx);
    signed long int return_value_apr_time_now$29;
    return_value_apr_time_now$29=apr_time_now();
    tv = return_value_apr_time_now$29 - tv;
    performance = (tv / (signed long int)1000) % (signed long int)1000 + (tv / 1000000L) * (signed long int)1000;
    performance = performance / (signed long int)lx;
    fclose(f);
  }

  end=time((signed long int *)(void *)0);
  time_string=ctime(&end);
  unsigned long int return_value_strlen$30;
  return_value_strlen$30=strlen(time_string);
  time_string[(signed long int)(return_value_strlen$30 - (unsigned long int)1)] = (char)0;
  printf("\n# --------------------------------------------------------\n");
  printf("# %s\n", time_string);
  const struct apr_array_header_t *return_value_apr_table_elts$31;
  return_value_apr_table_elts$31=apr_table_elts(rules);
  printf("# %d rules from %d access log lines\n", return_value_apr_table_elts$31->nelts, line_nr);
  printf("#  mod_qos version: %s\n", (const void *)man_version);
  if(performance >= 0l)
    printf("#  performance index (ms/req): %ld\n", performance);

  printf("#  source (-i): %s\n", access_log);
  printf("#  path depth (-d): %d\n", m_path_depth);
  printf("#  disable path only regex (-h): %s\n", m_handler == 1 ? "yes" : "no");
  printf("#  base64 detection level (-b): %d\n", m_base64);
  printf("#  redundancy check (-n): %s\n", m_redundant == 1 ? "yes" : "no");
  printf("#  pcre only for query (-p): %s\n", m_query_pcre == 1 ? "yes" : "no");
  printf("#  decoding (-u): url");
  if(!((0x02 & m_mode) == 0))
    printf(" uni");

  if(!((0x01 & m_mode) == 0))
    printf(" html");

  if(!((0x04 & m_mode) == 0))
    printf(" ansi");

  printf("\n");
  printf("#  one pcre for query value (-m): %s\n", m_query_multi_pcre == 1 ? "yes" : "no");
  if(!(m_query_o_pcre == 0))
    printf("#  ignore query order (-o): yes\n");

  printf("#  single pcre for query (-s): %s\n", m_query_single_pcre == 1 ? "yes" : "no");
  printf("#  query outsize (-l): %d\n", m_query_len_pcre);
  printf("#  exit on error (-e): %s\n", m_exit_on_error == 1 ? "yes" : "no");
  printf("#  rule file (-c): %s\n", httpdconf == (const char *)(void *)0 ? "-" : httpdconf);
  if(!(httpdconf == ((const char *)NULL)))
  {
    printf("#    whitelist (loaded existing rules): %d\n", whitelist_size);
    printf("#    blacklist (loaded deny rules): %d\n", blacklist_size);
    printf("#    blacklist matches: %d\n", deny_count);
  }

  printf("#  duration: %ld minutes\n", (end - start) / (signed long int)60);
  printf("# --------------------------------------------------------\n");
  struct stack_st_qs_rule_t *st;
  struct stack_st *return_value_sk_new$32;
  return_value_sk_new$32=sk_new((signed int (*)(const void *, const void *))STACK_qs_cmp);
  st = (struct stack_st_qs_rule_t *)return_value_sk_new$32;
  struct anonymous *r;
  signed int j = 1;
  const struct apr_array_header_t *return_value_apr_table_elts$33;
  return_value_apr_table_elts$33=apr_table_elts(rules);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$33->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts$34;
  do
  {
    return_value_apr_table_elts$34=apr_table_elts(rules);
    if(i >= return_value_apr_table_elts$34->nelts)
      break;

    void *return_value_apr_palloc$35;
    return_value_apr_palloc$35=apr_palloc(pool, sizeof(struct anonymous) /*56ul*/ );
    void *return_value_memset$36;
    return_value_memset$36=memset(return_value_apr_palloc$35, 0, sizeof(struct anonymous) /*56ul*/ );
    r = (struct anonymous *)return_value_memset$36;
    r->rule = (entry + (signed long int)i)->key;
    sk_push((struct stack_st *)st, (void *)(char *)r);
    i = i + 1;
  }
  while((_Bool)1);
  sk_sort((struct stack_st *)st);
  i=sk_num((const struct stack_st *)st);
  for( ; i >= 1; i = i - 1)
  {
    void *return_value_sk_value$37;
    return_value_sk_value$37=sk_value((const struct stack_st *)st, i - 1);
    r = (struct anonymous *)return_value_sk_value$37;
    char *return_value_qs_apache_escape$38;
    return_value_qs_apache_escape$38=qs_apache_escape(pool, r->rule);
    printf("QS_PermitUri +%s%.3d deny \"%s\"\n", m_pfx != ((const char *)NULL) ? m_pfx : "QSF", j, return_value_qs_apache_escape$38);
    j = j + 1;
  }
  apr_pool_destroy(pool);
  return 0;
}

// qos_2pcre
// file qsfilter2.c line 617
static char * qos_2pcre(struct apr_pool_t *pool, const char *line)
{
  signed int hasA = 0;
  signed int hasD = 0;
  signed int hasE = 0;
  signed int hasB = 0;
  signed int i = 0;
  unsigned char *in = (unsigned char *)line;
  char *ret;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(line);
  void *return_value_apr_palloc$2;
  return_value_apr_palloc$2=apr_palloc(pool, return_value_strlen$1 * (unsigned long int)6);
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(line);
  void *return_value_memset$4;
  return_value_memset$4=memset(return_value_apr_palloc$2, 0, return_value_strlen$3 * (unsigned long int)6);
  ret = (char *)return_value_memset$4;
  signed int reti = 0;
  char *existing = "";
  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(line);
  const unsigned short int **return_value___ctype_b_loc$11;
  char *return_value_strchr$10;
  _Bool tmp_if_expr$8;
  if(return_value_strlen$5 == 0ul)
    return "";

  else
  {
    while(!(in[(signed long int)i] == 0))
    {
      const unsigned short int **return_value___ctype_b_loc$12;
      return_value___ctype_b_loc$12=__ctype_b_loc();
      if(!((2048 & (signed int)(*return_value___ctype_b_loc$12)[(signed long int)(signed int)in[(signed long int)i]]) == 0))
      {
        if(hasD == 0)
        {
          hasD = 1;
          strcpy(&ret[(signed long int)reti], "0-9");
          reti = reti + 3;
        }

      }

      else
      {
        return_value___ctype_b_loc$11=__ctype_b_loc();
        if(!((1024 & (signed int)(*return_value___ctype_b_loc$11)[(signed long int)(signed int)in[(signed long int)i]]) == 0))
        {
          if(hasA == 0)
          {
            hasA = 1;
            strcpy(&ret[(signed long int)reti], "a-zA-Z");
            reti = reti + 6;
          }

        }

        else
          if((signed int)in[(signed long int)i] == 92)
          {
            if(hasE == 0)
            {
              hasE = 1;
              strcpy(&ret[(signed long int)reti], "\\\\");
              reti = reti + 2;
            }

          }

          else
            if((signed int)in[(signed long int)i] == 45)
            {
              if(hasB == 0)
              {
                hasB = 1;
                strcpy(&ret[(signed long int)reti], "\\-");
                reti = reti + 2;
              }

            }

            else
              if((signed int)in[(signed long int)i] == 0)
              {
                char *ck;
                ck=apr_psprintf(pool, "#\\x%02x#", in[(signed long int)i]);
                char *return_value_strstr$6;
                return_value_strstr$6=strstr(existing, ck);
                if(return_value_strstr$6 == ((char *)NULL))
                {
                  sprintf(&ret[(signed long int)reti], "\\x%02x", in[(signed long int)i]);
                  reti = reti + 4;
                  existing=apr_pstrcat(pool, existing, ck, (void *)0);
                }

              }

              else
              {
                return_value_strchr$10=strchr(ret, (signed int)in[(signed long int)i]);
                if(return_value_strchr$10 == ((char *)NULL))
                {
                  char *return_value_strchr$9;
                  return_value_strchr$9=strchr("{}[]()^$.|*+?\\-", (signed int)in[(signed long int)i]);
                  if(!(return_value_strchr$9 == ((char *)NULL)))
                  {
                    ret[(signed long int)reti] = (char)92;
                    reti = reti + 1;
                    ret[(signed long int)reti] = (char)in[(signed long int)i];
                    reti = reti + 1;
                  }

                  else
                  {
                    if(!((signed int)in[(signed long int)i] >= 32))
                      tmp_if_expr$8 = (_Bool)1;

                    else
                      tmp_if_expr$8 = (signed int)in[(signed long int)i] > 126 ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr$8)
                    {
                      char *qos_2pcre$$1$$1$$6$$2$$ck;
                      qos_2pcre$$1$$1$$6$$2$$ck=apr_psprintf(pool, "#\\x%02x#", in[(signed long int)i]);
                      char *return_value_strstr$7;
                      return_value_strstr$7=strstr(existing, qos_2pcre$$1$$1$$6$$2$$ck);
                      if(return_value_strstr$7 == ((char *)NULL))
                      {
                        sprintf(&ret[(signed long int)reti], "\\x%02x", in[(signed long int)i]);
                        reti = reti + 4;
                        existing=apr_pstrcat(pool, existing, qos_2pcre$$1$$1$$6$$2$$ck, (void *)0);
                      }

                    }

                    else
                    {
                      ret[(signed long int)reti] = (char)in[(signed long int)i];
                      reti = reti + 1;
                    }
                  }
                }

              }
      }
      i = i + 1;
    }
    unsigned long int return_value_strlen$13;
    return_value_strlen$13=strlen(ret);
    if(return_value_strlen$13 == 0ul)
      return (char *)(void *)0;

    else
    {
      ret[(signed long int)reti] = (char)0;
      return ret;
    }
  }
}

// qos_addstr
// file qsfilter2.c line 718
static char * qos_addstr(struct apr_pool_t *pool, char *o, char *d, char *n)
{
  char *p;
  p=apr_pstrdup(pool, n);
  char *r = o;
  _Bool tmp_if_expr$1;
  if(n == ((char *)NULL))
    return o;

  else
  {
    while(!(p == ((char *)NULL)))
    {
      if(*p == 0)
        break;

      char *this = p;
      char *next;
      next=strchr(p, (signed int)d[(signed long int)0]);
      while(!(next == ((char *)NULL)))
      {
        if(!(this >= next))
          tmp_if_expr$1 = (signed int)next[(signed long int)-1] == 92 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$1 = (_Bool)0;
        if(tmp_if_expr$1)
        {
          next = next + 1l;
          next=strchr(next, (signed int)d[(signed long int)0]);
        }

        else
          break;
      }
      if(next == ((char *)NULL))
        p = (char *)(void *)0;

      else
      {
        next[(signed long int)0] = (char)0;
        next = next + 1l;
        p = next;
      }
      signed int return_value_qos_checkstr$2;
      return_value_qos_checkstr$2=qos_checkstr(pool, r, d, this);
      if(return_value_qos_checkstr$2 == 0)
        r=apr_pstrcat(pool, r, d, this, (void *)0);

    }
    return r;
  }
}

// qos_auto_detect
// file qsfilter2.c line 1345
static void qos_auto_detect(char **raw)
{
  char *line = *raw;
  signed int rc_c = -1;
  if(!(m_req_regex == ((struct real_pcre *)NULL)))
  {
    signed int ovector[3l];
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(line);
    rc_c=pcre_exec(m_req_regex, (const struct pcre_extra *)(void *)0, line, (signed int)return_value_strlen$1, 0, 0, ovector, 3);
    if(rc_c >= 0)
    {
      char *sr;
      line = &line[(signed long int)ovector[(signed long int)0]];
      line[(signed long int)(ovector[(signed long int)1] - ovector[(signed long int)0])] = (char)0;
      sr=strchr(line, 32);
      for( ; (signed int)*sr == 32; sr = sr + 1l)
        ;
      *raw = sr;
      sr=strrchr(line, 32);
      sr[(signed long int)0] = (char)0;
    }

  }

  if(!(rc_c >= 0))
  {
    char *pe = line;
    signed int pi = 3;
    while(pi >= 1 && !(pe == ((char *)NULL)))
    {
      pi = pi - 1;
      pe=strchr(pe, 32);
      if(!(pe == ((char *)NULL)))
        pe = pe + 1l;

    }
    if(!(pe == ((char *)NULL)))
    {
      if((signed int)*pe == 47)
      {
        if(pi == 0)
          *raw = pe;

      }

    }

  }

  goto __CPROVER_DUMP_L10;

__CPROVER_DUMP_L10:
  ;
}

// qos_b64_2pcre
// file qsfilter2.c line 1018
static char * qos_b64_2pcre(struct apr_pool_t *pool, const char *line)
{
  char *copy;
  copy=apr_pstrdup(pool, line);
  char *b64;
  b64=qos_detect_b64(copy, 1);
  char *st = b64;
  char *ed = &b64[(signed long int)1];
  if(m_verbose >= 2)
    printf("  B642pcre: %s", copy);

  const unsigned short int **return_value___ctype_b_loc$1;
  const unsigned short int **return_value___ctype_b_loc$2;
  char *return_value_strchr$3;
  for( ; !(*st == 0); st = st - 1l)
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*st]) == 0)
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if((1024 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*st]) == 0)
      {
        return_value_strchr$3=strchr("-_$+!", (signed int)st[(signed long int)0]);
        if(return_value_strchr$3 == ((char *)NULL))
          break;

      }

    }

  }
  st = st + 1l;
  st[(signed long int)0] = (char)0;
  const unsigned short int **return_value___ctype_b_loc$4;
  const unsigned short int **return_value___ctype_b_loc$5;
  char *return_value_strchr$6;
  for( ; !(*ed == 0); ed = ed + 1l)
  {
    return_value___ctype_b_loc$4=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)*ed]) == 0)
    {
      return_value___ctype_b_loc$5=__ctype_b_loc();
      if((1024 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)*ed]) == 0)
      {
        return_value_strchr$6=strchr("-_$+!", (signed int)ed[(signed long int)0]);
        if(return_value_strchr$6 == ((char *)NULL))
          break;

      }

    }

  }
  if(m_verbose >= 2)
    printf(" %s <> %s\n", copy, ed);

  char *return_value_qos_escape_pcre$7;
  return_value_qos_escape_pcre$7=qos_escape_pcre(pool, copy);
  char *tmp_if_expr$9;
  char *return_value_qos_escape_pcre$8;
  if((signed int)*ed == 0)
    tmp_if_expr$9 = (char *)(void *)0;

  else
  {
    return_value_qos_escape_pcre$8=qos_escape_pcre(pool, ed);
    tmp_if_expr$9 = return_value_qos_escape_pcre$8;
  }
  char *return_value_apr_pstrcat$10;
  return_value_apr_pstrcat$10=apr_pstrcat(pool, return_value_qos_escape_pcre$7, (const void *)"[a-zA-Z0-9\\-_\\$\\+!]+", tmp_if_expr$9, (void *)0);
  return return_value_apr_pstrcat$10;
}

// qos_checkstr
// file qsfilter2.c line 687
static signed int qos_checkstr(struct apr_pool_t *pool, char *r, char *d, char *p)
{
  char *check1;
  check1=apr_pstrcat(pool, d, p, d, (void *)0);
  char *check2;
  check2=apr_pstrcat(pool, p, d, (void *)0);
  char *check3;
  check3=apr_pstrcat(pool, d, p, (void *)0);
  char *return_value_strstr$1;
  return_value_strstr$1=strstr(r, check1);
  if(!(return_value_strstr$1 == ((char *)NULL)))
    return 1;

  else
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(check2);
    signed int return_value_strncmp$3;
    return_value_strncmp$3=strncmp(r, check2, return_value_strlen$2);
    if(return_value_strncmp$3 == 0)
      return 1;

    else
    {
      unsigned long int return_value_strlen$8;
      return_value_strlen$8=strlen(r);
      unsigned long int return_value_strlen$9;
      return_value_strlen$9=strlen(check3);
      if(!(return_value_strlen$9 >= return_value_strlen$8))
      {
        unsigned long int return_value_strlen$4;
        return_value_strlen$4=strlen(r);
        unsigned long int return_value_strlen$5;
        return_value_strlen$5=strlen(check3);
        unsigned long int return_value_strlen$6;
        return_value_strlen$6=strlen(check3);
        signed int return_value_strncmp$7;
        return_value_strncmp$7=strncmp(&r[(signed long int)(return_value_strlen$4 - return_value_strlen$5)], check3, return_value_strlen$6);
        if(return_value_strncmp$7 == 0)
          return 1;

      }

      signed int return_value_strcmp$10;
      return_value_strcmp$10=strcmp(r, p);
      if(return_value_strcmp$10 == 0)
        return 1;

      else
        return 0;
    }
  }
}

// qos_delete_obsolete_rules
// file qsfilter2.c line 846
static void qos_delete_obsolete_rules(struct apr_pool_t *pool, struct apr_table_t *rules, struct apr_table_t *rules_url)
{
  struct apr_table_t *not_used;
  not_used=apr_table_make(pool, 1);
  struct apr_table_t *used;
  struct apr_table_t *used1;
  union pthread_attr_t *tha = (union pthread_attr_t *)(void *)0;
  unsigned long int tid;
  struct anonymous$0 *wt;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct anonymous$0) /*32ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct anonymous$0) /*32ul*/ );
  wt = (struct anonymous$0 *)return_value_memset$2;
  if(!(m_query_multi_pcre == 0))
  {
    if(!(m_verbose == 0))
    {
      printf("# search for redundant rules ...\n");
      fflush(stdout);
    }

    qos_query_optimization(pool, rules);
    if(!(m_verbose == 0))
      printf("# ");

  }

  else
    if(!(m_verbose == 0))
    {
      printf("# search for redundant rules ");
      fflush(stdout);
    }

  wt->pool = pool;
  wt->rules = rules;
  wt->rules_url = rules_url;
  const struct apr_array_header_t *return_value_apr_table_elts$3;
  return_value_apr_table_elts$3=apr_table_elts(rules);
  wt->from = return_value_apr_table_elts$3->nelts / 2;
  const struct apr_array_header_t *return_value_apr_table_elts$4;
  return_value_apr_table_elts$4=apr_table_elts(rules);
  wt->to = return_value_apr_table_elts$4->nelts;
  pthread_create(&tid, tha, qos_worker, (void *)wt);
  const struct apr_array_header_t *return_value_apr_table_elts$5;
  return_value_apr_table_elts$5=apr_table_elts(rules);
  used=qos_get_used(pool, rules, rules_url, 0, return_value_apr_table_elts$5->nelts / 2);
  pthread_join(tid, (void **)(void *)&used1);
  if(!(m_verbose == 0))
    printf(" done\n");

  signed int i;
  struct apr_table_entry_t *entry;
  const struct apr_array_header_t *return_value_apr_table_elts$6;
  return_value_apr_table_elts$6=apr_table_elts(rules);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$6->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts$7;
  const char *return_value_apr_table_get$8;
  do
  {
    return_value_apr_table_elts$7=apr_table_elts(rules);
    if(i >= return_value_apr_table_elts$7->nelts)
      break;

    const char *return_value_apr_table_get$9;
    return_value_apr_table_get$9=apr_table_get(used, (entry + (signed long int)i)->key);
    if(return_value_apr_table_get$9 == ((const char *)NULL))
    {
      return_value_apr_table_get$8=apr_table_get(used1, (entry + (signed long int)i)->key);
      if(return_value_apr_table_get$8 == ((const char *)NULL))
      {
        if(!(m_verbose == 0))
          printf("# DEL rule (not required): %s\n", (entry + (signed long int)i)->key);

        apr_table_add(not_used, (entry + (signed long int)i)->key, "-");
      }

    }

    i = i + 1;
  }
  while((_Bool)1);
  const struct apr_array_header_t *return_value_apr_table_elts$10;
  return_value_apr_table_elts$10=apr_table_elts(not_used);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$10->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts$11;
  do
  {
    return_value_apr_table_elts$11=apr_table_elts(not_used);
    if(i >= return_value_apr_table_elts$11->nelts)
      break;

    apr_table_unset(rules, (entry + (signed long int)i)->key);
    i = i + 1;
  }
  while((_Bool)1);
}

// qos_detect_b64
// file qsfilter2.c line 156
static char * qos_detect_b64(char *line, signed int silent)
{
  signed int ovector[3l];
  signed int rc_c;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(line);
  rc_c=pcre_exec(pcre_b64, (const struct pcre_extra *)(void *)0, line, (signed int)return_value_strlen$1, 0, 0, ovector, 3);
  if(rc_c >= 0)
  {
    if(silent == 0 && m_verbose >= 2)
      printf("  B64: %.*s\n", ovector[(signed long int)1] - ovector[(signed long int)0], &line[(signed long int)ovector[(signed long int)0]]);

    return &line[(signed long int)ovector[(signed long int)0]];
  }

  else
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(line);
    rc_c=pcre_exec(pcre_hx, (const struct pcre_extra *)(void *)0, line, (signed int)return_value_strlen$2, 0, 0, ovector, 3);
    if(rc_c >= 0)
    {
      if(silent == 0 && m_verbose >= 2)
        printf("  HX: %.*s\n", ovector[(signed long int)1] - ovector[(signed long int)0], &line[(signed long int)ovector[(signed long int)0]]);

      return &line[(signed long int)ovector[(signed long int)0]];
    }

    else
      return (char *)(void *)0;
  }
}

// qos_enforce_blacklist
// file qsfilter2.c line 939
static signed int qos_enforce_blacklist(struct apr_table_t *rules, const char *line)
{
  signed int i;
  struct apr_table_entry_t *entry;
  const struct apr_array_header_t *return_value_apr_table_elts$1;
  return_value_apr_table_elts$1=apr_table_elts(rules);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$1->elts;
  _Bool tmp_if_expr$3;
  unsigned long int return_value_strlen$2;
  if(line == ((const char *)NULL))
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    return_value_strlen$2=strlen(line);
    tmp_if_expr$3 = return_value_strlen$2 == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
  }
  const struct apr_array_header_t *return_value_apr_table_elts$4;
  if(tmp_if_expr$3)
    return 0;

  else
  {
    i = 0;
    do
    {
      return_value_apr_table_elts$4=apr_table_elts(rules);
      if(i >= return_value_apr_table_elts$4->nelts)
        break;

      struct anonymous *rs = (struct anonymous *)(entry + (signed long int)i)->val;
      unsigned long int return_value_strlen$5;
      return_value_strlen$5=strlen(line);
      signed int return_value_pcre_exec$6;
      return_value_pcre_exec$6=pcre_exec(rs->pcre, rs->extra, line, (signed int)return_value_strlen$5, 0, 0, (signed int *)(void *)0, 0);
      if(return_value_pcre_exec$6 == 0)
      {
        if(m_verbose >= 2)
          printf(" blacklist match, rule %s\n", (entry + (signed long int)i)->key);

        return 1;
      }

      i = i + 1;
    }
    while((_Bool)1);
    return 0;
  }
}

// qos_escape_pcre
// file qsfilter2.c line 208
static char * qos_escape_pcre(struct apr_pool_t *pool, char *line)
{
  signed int i = 0;
  unsigned char prev = (unsigned char)0;
  unsigned char *in = (unsigned char *)line;
  char *ret;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(line);
  void *return_value_apr_palloc$2;
  return_value_apr_palloc$2=apr_palloc(pool, return_value_strlen$1 * (unsigned long int)4);
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(line);
  void *return_value_memset$4;
  return_value_memset$4=memset(return_value_apr_palloc$2, 0, return_value_strlen$3 * (unsigned long int)4);
  ret = (char *)return_value_memset$4;
  signed int reti = 0;
  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(line);
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$8;
  char *return_value_strchr$7;
  _Bool tmp_if_expr$9;
  if(return_value_strlen$5 == 0ul)
    return "";

  else
  {
    while(!(in[(signed long int)i] == 0))
    {
      char *return_value_strchr$10;
      return_value_strchr$10=strchr("{}[]()^$.|*+?\\-", (signed int)in[(signed long int)i]);
      if(!(return_value_strchr$10 == ((char *)NULL)))
      {
        if((signed int)prev == 92 && !(prev == 0))
        {
          ret[(signed long int)reti] = (char)in[(signed long int)i];
          reti = reti + 1;
        }

        else
        {
          if(!(prev == 0))
            tmp_if_expr$6 = (signed int)in[(signed long int)i] == 92 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$6 = (_Bool)0;
          if(tmp_if_expr$6)
          {
            return_value_strchr$7=strchr("{}[]()^$.|*+?\\-", (signed int)in[(signed long int)(i + 1)]);
            tmp_if_expr$8 = return_value_strchr$7 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$8 = (_Bool)0;
          if(tmp_if_expr$8)
          {
            ret[(signed long int)reti] = (char)in[(signed long int)i];
            reti = reti + 1;
          }

          else
          {
            ret[(signed long int)reti] = (char)92;
            reti = reti + 1;
            ret[(signed long int)reti] = (char)in[(signed long int)i];
            reti = reti + 1;
          }
        }
      }

      else
      {
        if(!((signed int)in[(signed long int)i] >= 32))
          tmp_if_expr$9 = (_Bool)1;

        else
          tmp_if_expr$9 = (signed int)in[(signed long int)i] > 126 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$9)
        {
          sprintf(&ret[(signed long int)reti], "\\x%02x", in[(signed long int)i]);
          reti = reti + 4;
        }

        else
        {
          ret[(signed long int)reti] = (char)in[(signed long int)i];
          reti = reti + 1;
        }
      }
      prev = in[(signed long int)i];
      i = i + 1;
    }
    return ret;
  }
}

// qos_fgetline
// file qsfilter2.c line 315
static signed int qos_fgetline(char *s, signed int n, struct _IO_FILE *f)
{
  signed int i = 0;
  _Bool tmp_if_expr$4;
  while((_Bool)1)
  {
    signed int return_value_fgetc$1;
    return_value_fgetc$1=fgetc(f);
    s[(signed long int)i] = (char)return_value_fgetc$1;
    if((signed int)s[(signed long int)i] == 13)
    {
      signed int return_value_fgetc$2;
      return_value_fgetc$2=fgetc(f);
      s[(signed long int)i] = (char)return_value_fgetc$2;
    }

    if((signed int)s[(signed long int)i] == 0x4)
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = (signed int)s[(signed long int)i] == 10 ? (_Bool)1 : (_Bool)0;
    if(i == n + -1 || tmp_if_expr$4)
    {
      s[(signed long int)i] = (char)0;
      signed int return_value_feof$3;
      return_value_feof$3=feof(f);
      return return_value_feof$3 != 0 ? 1 : 0;
    }

    i = i + 1;
  }
}

// qos_get_used
// file qsfilter2.c line 577
static struct apr_table_t * qos_get_used(struct apr_pool_t *pool, struct apr_table_t *rules, struct apr_table_t *rules_url, signed int from, signed int to)
{
  struct apr_table_t *used;
  used=apr_table_make(pool, 1);
  signed int j = from;
  const struct apr_array_header_t *return_value_apr_table_elts$2;
  const struct apr_array_header_t *return_value_apr_table_elts$4;
  for( ; !(j >= to); j = j + 1)
  {
    signed int l;
    struct apr_table_entry_t *linee;
    const struct apr_array_header_t *return_value_apr_table_elts$1;
    return_value_apr_table_elts$1=apr_table_elts(rules_url);
    linee = (struct apr_table_entry_t *)return_value_apr_table_elts$1->elts;
    if(!(m_verbose == 0))
    {
      printf("[%d]", j);
      fflush(stdout);
    }

    l = 0;
    do
    {
      return_value_apr_table_elts$2=apr_table_elts(rules_url);
      if(l >= return_value_apr_table_elts$2->nelts)
        break;

      char *line = (linee + (signed long int)l)->key;
      signed int i;
      signed int match = 0;
      struct apr_table_entry_t *entry;
      const struct apr_array_header_t *return_value_apr_table_elts$3;
      return_value_apr_table_elts$3=apr_table_elts(rules);
      entry = (struct apr_table_entry_t *)return_value_apr_table_elts$3->elts;
      i = 0;
      do
      {
        return_value_apr_table_elts$4=apr_table_elts(rules);
        if(i >= return_value_apr_table_elts$4->nelts)
          break;

        if(!(i == j))
        {
          struct anonymous *rs = (struct anonymous *)(entry + (signed long int)i)->val;
          unsigned long int return_value_strlen$5;
          return_value_strlen$5=strlen(line);
          signed int return_value_pcre_exec$6;
          return_value_pcre_exec$6=pcre_exec(rs->pcre, rs->extra, line, (signed int)return_value_strlen$5, 0, 0, (signed int *)(void *)0, 0);
          if(return_value_pcre_exec$6 >= 0)
          {
            match = 1;
            break;
          }

        }

        i = i + 1;
      }
      while((_Bool)1);
      if(match == 0)
        apr_table_add(used, (entry + (signed long int)j)->key, "+");

      l = l + 1;
    }
    while((_Bool)1);
  }
  return used;
}

// qos_hex2c
// file qsfilter2.c line 245
static signed int qos_hex2c(const char *x)
{
  signed int i;
  signed int ch = (signed int)x[(signed long int)0];
  const unsigned short int **return_value___ctype_b_loc$2;
  return_value___ctype_b_loc$2=__ctype_b_loc();
  const unsigned short int **return_value___ctype_b_loc$1;
  if(!((2048 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)ch]) == 0))
    i = ch - 48;

  else
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if(!((256 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)ch]) == 0))
      i = ch - (65 - 10);

    else
      i = ch - (97 - 10);
  }
  i = i << 4;
  ch = (signed int)x[(signed long int)1];
  const unsigned short int **return_value___ctype_b_loc$4;
  return_value___ctype_b_loc$4=__ctype_b_loc();
  const unsigned short int **return_value___ctype_b_loc$3;
  if(!((2048 & (signed int)(*return_value___ctype_b_loc$4)[(signed long int)ch]) == 0))
    i = i + (ch - 48);

  else
  {
    return_value___ctype_b_loc$3=__ctype_b_loc();
    if(!((256 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)ch]) == 0))
      i = i + (ch - (65 - 10));

    else
      i = i + (ch - (97 - 10));
  }
  return i;
}

// qos_init_pcre
// file qsfilter2.c line 331
static void qos_init_pcre()
{
  char buf[1024l];
  sprintf(buf, "%s{%d,}", (const void *)"([a-z]+[a-z0-9]*[A-Z]+[A-Z0-9]*)", m_base64);
  pcre_b64=qos_pcre_compile(buf, 0);
  sprintf(buf, "%s{%d,}", (const void *)"([A-F0-9]*[A-F]+[0-9]+[A-F0-9]*)", m_base64);
  pcre_hx=qos_pcre_compile(buf, 0);
  pcre_simple_path=qos_pcre_compile("^(/[a-zA-Z0-9\\-_]+)+[/]?\\.?[a-zA-Z]{0,4}$", 0);
  m_req_regex=qos_pcre_compile("(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PROPFIND|PROPPATCH|MKCOL|COPY|MOVE|LOCK|UNLOCK|VERSION-CONTROL|REPORT|CHECKOUT|CHECKIN|UNCHECKOUT|MKWORKSPACE|UPDATE|LABEL|MERGE|BASELINE-CONTROL|MKACTIVITY|ORDERPATCH|ACL|PATCH|SEARCH|BCOPY|BDELETE|BMOVE|BPROPFIND|BPROPPATCH|NOTIFY|POLL|SUBSCRIBE|UNSUBSCRIBE|X-MS-ENUMATTS|RPC_IN_DATA|RPC_OUT_DATA) /[ -!#-ÿ]* HTTP/", 0);
}

// qos_is_alnum
// file qsfilter2.c line 1239
static signed int qos_is_alnum(const char *string)
{
  unsigned char *in = (unsigned char *)string;
  signed int i = 0;
  if(in == ((unsigned char *)NULL))
    return 0;

  else
  {
    while(!(in[(signed long int)i] == 0))
    {
      const unsigned short int **return_value___ctype_b_loc$1;
      return_value___ctype_b_loc$1=__ctype_b_loc();
      if((8 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)in[(signed long int)i]]) == 0)
        return 0;

      i = i + 1;
    }
    return 1;
  }
}

// qos_ishex
// file qsfilter2.c line 268
static signed int qos_ishex(char x)
{
  if((signed int)x >= 48 && !((signed int)x >= 58))
    return 1;

  else
    if((signed int)x >= 97 && !((signed int)x >= 103))
      return 1;

    else
      if((signed int)x >= 65 && !((signed int)x >= 71))
        return 1;

      else
        return 0;
}

// qos_load_blacklist
// file qsfilter2.c line 1010
static void qos_load_blacklist(struct apr_pool_t *pool, struct apr_table_t *blacklist, const char *httpdconf)
{
  qos_load_rules(pool, blacklist, httpdconf, "QS_DenyRequestLine", 0x00000001);
}

// qos_load_rules
// file qsfilter2.c line 954
static void qos_load_rules(struct apr_pool_t *pool, struct apr_table_t *ruletable, const char *httpdconf, const char *command, signed int option)
{
  struct _IO_FILE *f;
  f=fopen(httpdconf, "r");
  char line[32768l];
  if(f == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "ERROR, could not open %s\n", httpdconf);
    exit(1);
  }

  signed int return_value_qos_fgetline$1;
  char *return_value_strchr$6;
  do
  {
    return_value_qos_fgetline$1=qos_fgetline(line, (signed int)sizeof(char [32768l]) /*32768ul*/ , f);
    if(!(return_value_qos_fgetline$1 == 0))
      break;

    char *p;
    p=strstr(line, command);
    if(!(p == ((char *)NULL)))
    {
      p[(signed long int)0] = (char)0;
      p = p + 1l;
    }

    if(!(p == ((char *)NULL)))
    {
      return_value_strchr$6=strchr(line, 35);
      if(return_value_strchr$6 == ((char *)NULL))
      {
        p=strchr(p, 32);
        if(!(p == ((char *)NULL)))
        {
          for( ; (signed int)*p == 32; p = p + 1l)
            ;
          p=strchr(p, 32);
          if(!(p == ((char *)NULL)))
          {
            for( ; (signed int)*p == 32; p = p + 1l)
              ;
            p=strchr(p, 32);
            if(!(p == ((char *)NULL)))
            {
              for( ; (signed int)*p == 32; p = p + 1l)
                ;
              if(m_verbose >= 2)
                printf("load %s\n", p);

              const char *errptr = (const char *)(void *)0;
              char *pattern;
              struct real_pcre *pcre_test;
              struct pcre_extra *extra;
              struct anonymous *rs;
              if((signed int)*p == 34)
              {
                signed int qos_load_rules$$1$$2$$2$$1$$1$$1$$2$$1$$fl;
                unsigned long int return_value_strlen$2;
                return_value_strlen$2=strlen(p);
                qos_load_rules$$1$$2$$2$$1$$1$$1$$2$$1$$fl = (signed int)(return_value_strlen$2 - (unsigned long int)2);
                pattern=apr_psprintf(pool, "%.*s", qos_load_rules$$1$$2$$2$$1$$1$$1$$2$$1$$fl, &p[(signed long int)1]);
              }

              else
              {
                signed int fl;
                unsigned long int return_value_strlen$3;
                return_value_strlen$3=strlen(p);
                fl = (signed int)return_value_strlen$3;
                pattern=apr_psprintf(pool, "%.*s", fl, p);
              }
              pcre_test=qos_pcre_compile(pattern, option);
              extra=pcre_study(pcre_test, 0, &errptr);
              void *return_value_apr_palloc$4;
              return_value_apr_palloc$4=apr_palloc(pool, sizeof(struct anonymous) /*56ul*/ );
              void *return_value_memset$5;
              return_value_memset$5=memset(return_value_apr_palloc$4, 0, sizeof(struct anonymous) /*56ul*/ );
              rs = (struct anonymous *)return_value_memset$5;
              rs->pcre = pcre_test;
              rs->extra = extra;
              apr_table_setn(ruletable, pattern, (char *)rs);
            }

          }

        }

      }

    }

  }
  while((_Bool)1);
  fclose(f);
}

// qos_load_whitelist
// file qsfilter2.c line 1013
static void qos_load_whitelist(struct apr_pool_t *pool, struct apr_table_t *rules, const char *httpdconf)
{
  qos_load_rules(pool, rules, httpdconf, "QS_PermitUri", 0);
}

// qos_measurement
// file qsfilter2.c line 1570
static void qos_measurement(struct apr_pool_t *pool, struct apr_table_t *blacklist, struct apr_table_t *rules, struct _IO_FILE *f, signed int *ln)
{
  char *readline;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, (unsigned long int)2097152);
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, (unsigned long int)2097152);
  readline = (char *)return_value_memset$2;
  signed int line_nr = 0;
  signed int return_value_qos_fgetline$3;
  _Bool tmp_if_expr$9;
  const struct apr_array_header_t *return_value_apr_table_elts$7;
  do
  {
    return_value_qos_fgetline$3=qos_fgetline(readline, 2097152, f);
    if(!(return_value_qos_fgetline$3 == 0))
      break;

    struct apr_uri_t parsed_uri;
    struct apr_pool_t *lpool;
    char *line = readline;
    apr_pool_create_ex(&lpool, (struct apr_pool_t *)(void *)0, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
    line_nr = line_nr + 1;
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(line);
    if(return_value_strlen$4 >= 2ul)
    {
      if((signed int)line[1l] == 47)
        strcpy(line, &line[(signed long int)1]);

    }

    if(!((signed int)*line == 47))
      qos_auto_detect(&line);

    signed int return_value_apr_uri_parse$5;
    return_value_apr_uri_parse$5=apr_uri_parse(lpool, line, &parsed_uri);
    if(!(return_value_apr_uri_parse$5 == 0))
    {
      fprintf(stderr, "ERROR, could parse uri %s\n", line);
      if(!(m_exit_on_error == 0))
        exit(1);

    }

    if(parsed_uri.path == ((char *)NULL))
      tmp_if_expr$9 = (_Bool)1;

    else
      tmp_if_expr$9 = (signed int)parsed_uri.path[(signed long int)0] != 47 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$9)
      fprintf(stderr, "WARNING, line %d: invalid request %s\n", line_nr, line);

    else
    {
      char *copy;
      copy=apr_pstrdup(lpool, line);
      signed int i;
      struct apr_table_entry_t *entry;
      const struct apr_array_header_t *return_value_apr_table_elts$6;
      return_value_apr_table_elts$6=apr_table_elts(rules);
      entry = (struct apr_table_entry_t *)return_value_apr_table_elts$6->elts;
      qos_unescaping(copy);
      i = 0;
      do
      {
        return_value_apr_table_elts$7=apr_table_elts(rules);
        if(i >= return_value_apr_table_elts$7->nelts)
          break;

        struct anonymous *rs = (struct anonymous *)(entry + (signed long int)i)->val;
        unsigned long int return_value_strlen$8;
        return_value_strlen$8=strlen(copy);
        pcre_exec(rs->pcre, (const struct pcre_extra *)(void *)0, copy, (signed int)return_value_strlen$8, 0, 0, (signed int *)(void *)0, 0);
        i = i + 1;
      }
      while((_Bool)1);
    }
    apr_pool_destroy(lpool);
  }
  while((_Bool)1);
  *ln = line_nr;
}

// qos_multi_query_string_pcre
// file qsfilter2.c line 1134
static char * qos_multi_query_string_pcre(struct apr_pool_t *pool, const char *path, char **query_m_string, char **query_m_pcre)
{
  char *copy;
  copy=apr_pstrdup(pool, path);
  char *pos = copy;
  char *string = "";
  char *query_pcre = "";
  signed int isValue = 0;
  signed int singleEq = 0;
  signed int hasEq = 0;
  signed int startAmp = 0;
  if((signed int)*copy == 38)
    startAmp = 1;

  _Bool tmp_if_expr$3;
  for( ; !(*copy == 0); copy = copy + 1l)
  {
    if((signed int)*copy == 61)
      hasEq = 1;

    if((signed int)*copy == 61)
    {
      if(!((signed int)copy[1l] == 61))
      {
        if(isValue == 0)
        {
          copy[(signed long int)0] = (char)0;
          qos_unescaping(pos);
          unsigned long int return_value_strlen$4;
          return_value_strlen$4=strlen(pos);
          if(return_value_strlen$4 >= 1ul)
          {
            unsigned long int return_value_strlen$1;
            return_value_strlen$1=strlen(string);
            if(return_value_strlen$1 >= 1ul)
              string=apr_pstrcat(pool, string, (const void *)"|", (void *)0);

            char *return_value_qos_escape_pcre$2;
            return_value_qos_escape_pcre$2=qos_escape_pcre(pool, pos);
            string=apr_pstrcat(pool, string, return_value_qos_escape_pcre$2, (void *)0);
          }

          else
          {
            if((signed int)copy[1l] == 38)
              tmp_if_expr$3 = (_Bool)1;

            else
              tmp_if_expr$3 = (signed int)copy[(signed long int)1] == 0 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$3)
              singleEq = 1;

          }
          pos = copy;
          pos = pos + 1l;
          isValue = 1;
        }

      }

    }

    if((signed int)*copy == 38)
    {
      copy[(signed long int)0] = (char)0;
      if(isValue == 0)
      {
        qos_unescaping(pos);
        unsigned long int return_value_strlen$5;
        return_value_strlen$5=strlen(string);
        if(return_value_strlen$5 >= 1ul)
          string=apr_pstrcat(pool, string, (const void *)"|", (void *)0);

        char *return_value_qos_escape_pcre$6;
        return_value_qos_escape_pcre$6=qos_escape_pcre(pool, pos);
        string=apr_pstrcat(pool, string, return_value_qos_escape_pcre$6, (void *)0);
      }

      else
      {
        unsigned long int return_value_strlen$7;
        return_value_strlen$7=strlen(pos);
        if(!(return_value_strlen$7 == 0ul))
        {
          qos_unescaping(pos);
          query_pcre=apr_pstrcat(pool, query_pcre, pos, (void *)0);
        }

      }
      pos = copy;
      pos = pos + 1l;
      isValue = 0;
    }

  }
  if(!(pos == copy))
  {
    qos_unescaping(pos);
    if(!(isValue == 0))
      query_pcre=apr_pstrcat(pool, query_pcre, pos, (void *)0);

    else
    {
      unsigned long int return_value_strlen$8;
      return_value_strlen$8=strlen(string);
      if(return_value_strlen$8 >= 1ul)
        string=apr_pstrcat(pool, string, (const void *)"|", (void *)0);

      char *return_value_qos_escape_pcre$9;
      return_value_qos_escape_pcre$9=qos_escape_pcre(pool, pos);
      string=apr_pstrcat(pool, string, return_value_qos_escape_pcre$9, (void *)0);
    }
  }

  *query_m_string = string;
  *query_m_pcre = query_pcre;
  char *return_value_qos_qqs$10;
  return_value_qos_qqs$10=qos_qqs(pool, string, query_pcre, singleEq, hasEq, startAmp);
  return return_value_qos_qqs$10;
}

// qos_path_pcre
// file qsfilter2.c line 1195
static char * qos_path_pcre(struct apr_pool_t *lpool, const char *path)
{
  char *dec;
  dec=apr_pstrdup(lpool, path);
  qos_unescaping(dec);
  char *return_value_qos_2pcre$1;
  return_value_qos_2pcre$1=qos_2pcre(lpool, dec);
  char *return_value_apr_pstrcat$2;
  return_value_apr_pstrcat$2=apr_pstrcat(lpool, (const void *)"[", return_value_qos_2pcre$1, (const void *)"]+", (void *)0);
  return return_value_apr_pstrcat$2;
}

// qos_path_pcre_string
// file qsfilter2.c line 1202
static char * qos_path_pcre_string(struct apr_pool_t *lpool, const char *path)
{
  signed int nohandler = 0;
  char *lpath;
  lpath=apr_pstrdup(lpool, path);
  char *last;
  char *str = "";
  signed int depth = m_path_depth;
  char *rx = "";
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(lpath);
  if((signed int)lpath[-1l + (signed long int)return_value_strlen$2] == 47)
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(lpath);
    lpath[(signed long int)(return_value_strlen$1 - (unsigned long int)1)] = (char)0;
    nohandler = 1;
  }

  last=strrchr(lpath, 47);
  _Bool tmp_if_expr$6;
  char *return_value_qos_detect_b64$5;
  while(!(last == ((char *)NULL)) && !(depth == 0))
  {
    qos_unescaping(last);
    if(!(m_base64 == 0))
    {
      return_value_qos_detect_b64$5=qos_detect_b64(last, 0);
      tmp_if_expr$6 = return_value_qos_detect_b64$5 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$6 = (_Bool)0;
    if(tmp_if_expr$6)
    {
      char *return_value_qos_b64_2pcre$3;
      return_value_qos_b64_2pcre$3=qos_b64_2pcre(lpool, last);
      str=apr_pstrcat(lpool, return_value_qos_b64_2pcre$3, str, (void *)0);
    }

    else
    {
      char *return_value_qos_escape_pcre$4;
      return_value_qos_escape_pcre$4=qos_escape_pcre(lpool, last);
      str=apr_pstrcat(lpool, return_value_qos_escape_pcre$4, str, (void *)0);
    }
    last[(signed long int)0] = (char)0;
    last=strrchr(lpath, 47);
    depth = depth - 1;
  }
  if(!(*lpath == 0))
  {
    qos_unescaping(lpath);
    char *return_value_qos_2pcre$7;
    return_value_qos_2pcre$7=qos_2pcre(lpool, lpath);
    rx=apr_pstrcat(lpool, (const void *)"[", return_value_qos_2pcre$7, (const void *)"]+", (void *)0);
  }

  unsigned long int return_value_strlen$8;
  return_value_strlen$8=strlen(str);
  if(return_value_strlen$8 >= 1ul)
  {
    if(!(nohandler == 0))
      rx=apr_pstrcat(lpool, rx, str, (const void *)"[/]?", (void *)0);

    else
      rx=apr_pstrcat(lpool, rx, str, (void *)0);
  }

  return rx;
}

// qos_pcre_compile
// file qsfilter2.c line 143
static struct real_pcre * qos_pcre_compile(char *pattern, signed int option)
{
  const char *errptr = (const char *)(void *)0;
  signed int erroffset;
  struct real_pcre *pcre;
  pcre=pcre_compile(pattern, 0x00000004 | option, &errptr, &erroffset, (const unsigned char *)(void *)0);
  if(pcre == ((struct real_pcre *)NULL))
  {
    fprintf(stderr, "ERROR, rule <%s> could not compile pcre at position %d, reason: %s\n", pattern, erroffset, errptr);
    exit(1);
  }

  return pcre;
}

// qos_post_optimization
// file qsfilter2.c line 1328
static char * qos_post_optimization(struct apr_pool_t *lpool, char *query)
{
  signed int hit = 0;
  char *p = query;
  while(!(p == ((char *)NULL)))
  {
    if(*p == 0)
      break;

    signed int return_value_strncmp$1;
    return_value_strncmp$1=strncmp(p, "[&]?)?(", (unsigned long int)7);
    if(return_value_strncmp$1 == 0)
    {
      hit = 1;
      p[(signed long int)5] = (char)124;
    }

    p = p + 1l;
  }
  if(!(hit == 0))
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(query);
    query[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    char *return_value_apr_psprintf$3;
    return_value_apr_psprintf$3=apr_psprintf(lpool, "(%s)*", query);
    return return_value_apr_psprintf$3;
  }

  return query;
}

// qos_process_log
// file qsfilter2.c line 1382
static void qos_process_log(struct apr_pool_t *pool, struct apr_table_t *blacklist, struct apr_table_t *rules, struct apr_table_t *rules_url, struct apr_table_t *special_rules, struct _IO_FILE *f, signed int *ln, signed int *dc, signed int first)
{
  char *readline;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, (unsigned long int)2097152);
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, (unsigned long int)2097152);
  readline = (char *)return_value_memset$2;
  signed int deny_count = *dc;
  signed int line_nr = *ln;
  struct apr_table_t *source_rules;
  source_rules=apr_table_make(pool, 10);
  signed int rule_optimization = 300;
  signed int return_value_qos_fgetline$3;
  _Bool tmp_if_expr$25;
  _Bool tmp_if_expr$24;
  unsigned long int return_value_strlen$22;
  signed int return_value_strncmp$23;
  do
  {
    return_value_qos_fgetline$3=qos_fgetline(readline, 2097152, f);
    if(!(return_value_qos_fgetline$3 == 0))
      break;

    signed int doubleSlash = 0;
    struct apr_uri_t parsed_uri;
    struct apr_pool_t *lpool;
    char *line = readline;
    apr_pool_create_ex(&lpool, (struct apr_pool_t *)(void *)0, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
    line_nr = line_nr + 1;
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(line);
    if(return_value_strlen$4 >= 2ul)
    {
      if((signed int)line[1l] == 47)
      {
        doubleSlash = 1;
        line = line + 1l;
      }

    }

    if(!((signed int)*line == 47))
    {
      if(m_log_req_regex == 0)
      {
        m_log_req_regex = 1;
        fprintf(stderr, "WARNING, line %d: unexpected data format, try to detect request lines automatically\n", line_nr);
      }

      qos_auto_detect(&line);
    }

    signed int return_value_apr_uri_parse$5;
    return_value_apr_uri_parse$5=apr_uri_parse(lpool, line, &parsed_uri);
    if(!(return_value_apr_uri_parse$5 == 0))
    {
      fprintf(stderr, "ERROR, could parse uri %s\n", line);
      if(!(m_exit_on_error == 0))
        exit(1);

    }

    if(parsed_uri.path == ((char *)NULL))
      tmp_if_expr$25 = (_Bool)1;

    else
      tmp_if_expr$25 = (signed int)parsed_uri.path[(signed long int)0] != 47 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$25)
      fprintf(stderr, "WARNING, line %d: invalid request %s\n", line_nr, line);

    else
    {
      if(!(parsed_uri.path == ((char *)NULL)) && !(m_filter == ((const char *)NULL)))
      {
        return_value_strlen$22=strlen(m_filter);
        return_value_strncmp$23=strncmp(parsed_uri.path, m_filter, return_value_strlen$22);
        tmp_if_expr$24 = return_value_strncmp$23 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$24 = (_Bool)0;
      if(!tmp_if_expr$24)
      {
        char *path = (char *)(void *)0;
        char *query = (char *)(void *)0;
        char *query_m_string = (char *)(void *)0;
        char *query_m_pcre = (char *)(void *)0;
        char *fragment = (char *)(void *)0;
        char *copy;
        copy=apr_pstrdup(lpool, line);
        qos_unescaping(copy);
        signed int return_value_qos_enforce_blacklist$21;
        return_value_qos_enforce_blacklist$21=qos_enforce_blacklist(blacklist, copy);
        if(!(return_value_qos_enforce_blacklist$21 == 0))
        {
          fprintf(stderr, "WARNING: blacklist filter match at line %d for %s\n", line_nr, line);
          deny_count = deny_count + 1;
        }

        else
        {
          signed int return_value_qos_test_for_existing_rule$20;
          return_value_qos_test_for_existing_rule$20=qos_test_for_existing_rule(line, copy, rules, special_rules, line_nr, rules_url, source_rules, first);
          if(return_value_qos_test_for_existing_rule$20 == 0)
          {
            if(m_verbose >= 2)
              printf("LINE %d, analyse: %s\n", line_nr, line);

            if(!(parsed_uri.query == ((char *)NULL)))
            {
              signed int return_value_strcmp$6;
              return_value_strcmp$6=strcmp(parsed_uri.path, "/");
              if(return_value_strcmp$6 == 0)
                path=apr_pstrdup(lpool, "/");

              else
                path=qos_path_pcre_string(lpool, parsed_uri.path);
              if(!(m_query_single_pcre == 0))
              {
                char *qc;
                qc=apr_pstrdup(lpool, parsed_uri.query);
                qos_unescaping(qc);
                char *return_value_qos_2pcre$7;
                return_value_qos_2pcre$7=qos_2pcre(lpool, qc);
                query=apr_pstrcat(lpool, (const void *)"[", return_value_qos_2pcre$7, (const void *)"]+", (void *)0);
              }

              else
                if(m_query_multi_pcre == 0)
                {
                  query=qos_query_string_pcre(lpool, parsed_uri.query);
                  if(!(m_query_o_pcre == 0))
                    query=qos_post_optimization(lpool, query);

                }

                else
                  query=qos_multi_query_string_pcre(lpool, parsed_uri.query, &query_m_string, &query_m_pcre);
            }

            else
            {
              signed int return_value_strcmp$10;
              return_value_strcmp$10=strcmp(parsed_uri.path, "/");
              if(return_value_strcmp$10 == 0)
                path=apr_pstrdup(lpool, "/");

              else
                if(!(m_handler == 0))
                  path=qos_path_pcre_string(lpool, parsed_uri.path);

                else
                {
                  unsigned long int return_value_strlen$8;
                  return_value_strlen$8=strlen(parsed_uri.path);
                  signed int return_value_pcre_exec$9;
                  return_value_pcre_exec$9=pcre_exec(pcre_simple_path, (const struct pcre_extra *)(void *)0, parsed_uri.path, (signed int)return_value_strlen$8, 0, 0, (signed int *)(void *)0, 0);
                  if(return_value_pcre_exec$9 >= 0)
                    path=apr_pstrdup(lpool, "(/[a-zA-Z0-9\\-_]+)+[/]?\\.?[a-zA-Z]{0,4}");

                  else
                    path=qos_path_pcre(lpool, parsed_uri.path);
                }
            }
            if(!(parsed_uri.fragment == ((char *)NULL)))
            {
              char *qos_process_log$$1$$1$$6$$2$$1$$3$$f;
              qos_process_log$$1$$1$$6$$2$$1$$3$$f=apr_pstrdup(lpool, parsed_uri.fragment);
              unsigned long int return_value_strlen$12;
              return_value_strlen$12=strlen(qos_process_log$$1$$1$$6$$2$$1$$3$$f);
              if(return_value_strlen$12 >= 1ul)
              {
                qos_unescaping(qos_process_log$$1$$1$$6$$2$$1$$3$$f);
                char *return_value_qos_2pcre$11;
                return_value_qos_2pcre$11=qos_2pcre(lpool, qos_process_log$$1$$1$$6$$2$$1$$3$$f);
                fragment=apr_pstrcat(lpool, (const void *)"[", return_value_qos_2pcre$11, (const void *)"]+", (void *)0);
              }

              else
                fragment=apr_pstrcat(lpool, (const void *)"", (void *)0);
            }

            if(m_verbose >= 2)
            {
              printf(" path:      %s\n", parsed_uri.path);
              printf(" path rule: %s\n", path);
              if(!(query == ((char *)NULL)))
              {
                printf(" query:      %s\n", parsed_uri.query);
                printf(" query rule: %s\n", query);
              }

              if(!(fragment == ((char *)NULL)))
              {
                printf(" fragment:      %s\n", parsed_uri.fragment);
                printf(" fragment rule: %s\n", fragment);
              }

            }

            const char *errptr = (const char *)(void *)0;
            char *rule;
            struct anonymous *rs;
            void *return_value_apr_palloc$13;
            return_value_apr_palloc$13=apr_palloc(pool, sizeof(struct anonymous) /*56ul*/ );
            void *return_value_memset$14;
            return_value_memset$14=memset(return_value_apr_palloc$13, 0, sizeof(struct anonymous) /*56ul*/ );
            rs = (struct anonymous *)return_value_memset$14;
            if(!(doubleSlash == 0))
              rule=apr_pstrcat(pool, (const void *)"^[/]?", path, (void *)0);

            else
              rule=apr_pstrcat(pool, (const void *)"^", path, (void *)0);
            if(!(query == ((char *)NULL)))
              rule=apr_pstrcat(pool, rule, (const void *)"\\?", query, (void *)0);

            if(!(fragment == ((char *)NULL)))
            {
              rule=apr_pstrcat(pool, rule, (const void *)"#", fragment, (void *)0);
              rs->fragment = 1;
            }

            else
              rs->fragment = 0;
            rule=apr_pstrcat(pool, rule, (const void *)"$", (void *)0);
            rs->pcre=qos_pcre_compile(rule, 0);
            rs->extra=pcre_study(rs->pcre, 0, &errptr);
            rs->path=apr_pstrdup(pool, path);
            if(fragment == ((char *)NULL) && !(m_query_multi_pcre == 0))
            {
              rs->query_m_string=apr_pstrdup(pool, query_m_string);
              rs->query_m_pcre=apr_pstrdup(pool, query_m_pcre);
            }

            else
            {
              rs->query_m_string = (char *)(void *)0;
              rs->query_m_pcre = (char *)(void *)0;
            }
            if(!(m_verbose == 0))
            {
              printf("# ADD line %d: %s\n", line_nr, line);
              const struct apr_array_header_t *return_value_apr_table_elts$15;
              return_value_apr_table_elts$15=apr_table_elts(rules);
              printf("# %.3d %s\n", return_value_apr_table_elts$15->nelts + 1, rule);
              fflush(stdout);
            }

            unsigned long int return_value_strlen$16;
            return_value_strlen$16=strlen(copy);
            signed int return_value_pcre_exec$17;
            return_value_pcre_exec$17=pcre_exec(rs->pcre, rs->extra, copy, (signed int)return_value_strlen$16, 0, 0, (signed int *)(void *)0, 0);
            if(!(return_value_pcre_exec$17 >= 0))
            {
              fprintf(stderr, "ERROR, rule check failed (did not match)!\n");
              fprintf(stderr, " line %d: %s\n", line_nr, line);
              fprintf(stderr, " string: %s\n", copy);
              fprintf(stderr, " rule: %s\n", rule);
              if(!(m_exit_on_error == 0))
                exit(1);

            }

            else
            {
              apr_table_add(rules_url, copy, "unescaped line");
              apr_table_add(source_rules, rule, "");
              apr_table_setn(rules, rule, (char *)rs);
            }
            const struct apr_array_header_t *return_value_apr_table_elts$18;
            return_value_apr_table_elts$18=apr_table_elts(rules);
            if(return_value_apr_table_elts$18->nelts == 2000)
            {
              fprintf(stderr, "ERROR, too many rules (limited to max. 2000)\n");
              if(!(m_exit_on_error == 0))
                exit(1);

            }

            const struct apr_array_header_t *return_value_apr_table_elts$19;
            return_value_apr_table_elts$19=apr_table_elts(rules);
            if(return_value_apr_table_elts$19->nelts == rule_optimization)
            {
              if(!(m_redundant == 0))
              {
                if(!(m_query_multi_pcre == 0))
                {
                  if(!(m_base64 == 0))
                  {
                    if(!(m_verbose == 0))
                    {
                      printf("# too many rules: start rule optimization ...\n");
                      fflush(stdout);
                    }

                    qos_rule_optimization(pool, lpool, rules, special_rules);
                    if(!(m_verbose == 0))
                    {
                      printf("# continue with rule generation\n");
                      fflush(stdout);
                    }

                    rule_optimization = rule_optimization + 200;
                  }

                }

              }

            }

          }

        }
      }

    }
    apr_pool_destroy(lpool);
  }
  while((_Bool)1);
  *dc = deny_count;
  *ln = line_nr;
}

// qos_qqs
// file qsfilter2.c line 751
static char * qos_qqs(struct apr_pool_t *pool, char *string, char *query_pcre, signed int singleEq, signed int hasEq, signed int startAmp)
{
  char *se = (char *)(void *)0;
  char *s = "";
  if(!(startAmp == 0))
    s = "[&]?";

  if(!(singleEq == 0))
    se = "(=[&]?)*";

  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(query_pcre);
  if(return_value_strlen$5 >= 1ul)
  {
    char *return_value_qos_2pcre$1;
    return_value_qos_2pcre$1=qos_2pcre(pool, query_pcre);
    char *return_value_apr_pstrcat$2;
    return_value_apr_pstrcat$2=apr_pstrcat(pool, s, (const void *)"((", string, (const void *)")(=[", return_value_qos_2pcre$1, (const void *)"]*)*[&]?)*", se, (void *)0);
    return return_value_apr_pstrcat$2;
  }

  else
  {
    if(singleEq == 0 && !(hasEq == 0))
    {
      se = "(=[&]?)*";
      char *return_value_apr_pstrcat$3;
      return_value_apr_pstrcat$3=apr_pstrcat(pool, s, (const void *)"(((", string, (const void *)")[&]?)*", se, (const void *)")*", (void *)0);
      return return_value_apr_pstrcat$3;
    }

    char *return_value_apr_pstrcat$4;
    return_value_apr_pstrcat$4=apr_pstrcat(pool, s, (const void *)"((", string, (const void *)")[&]?)*", se, (void *)0);
    return return_value_apr_pstrcat$4;
  }
}

// qos_query_optimization
// file qsfilter2.c line 771
static void qos_query_optimization(struct apr_pool_t *pool, struct apr_table_t *rules)
{
  struct apr_table_t *delete;
  delete=apr_table_make(pool, 1);
  struct apr_table_t *checked_path;
  checked_path=apr_table_make(pool, 1);
  struct apr_table_t *new;
  new=apr_table_make(pool, 1);
  signed int i;
  signed int j;
  struct apr_table_entry_t *entry;
  const struct apr_array_header_t *return_value_apr_table_elts$1;
  return_value_apr_table_elts$1=apr_table_elts(rules);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$1->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts$2;
  const char *return_value_apr_table_get$14;
  char *tmp_if_expr$3;
  char *tmp_if_expr$4;
  const struct apr_array_header_t *return_value_apr_table_elts$5;
  signed int return_value_strcmp$9;
  char *tmp_if_expr$6;
  char *tmp_if_expr$7;
  do
  {
    return_value_apr_table_elts$2=apr_table_elts(rules);
    if(i >= return_value_apr_table_elts$2->nelts)
      break;

    char *rule_str = (entry + (signed long int)i)->key;
    struct anonymous *r = (struct anonymous *)(entry + (signed long int)i)->val;
    if(r->fragment == 0)
    {
      if(!(r->path == ((char *)NULL)))
      {
        return_value_apr_table_get$14=apr_table_get(checked_path, r->path);
        if(return_value_apr_table_get$14 == ((const char *)NULL))
        {
          signed int merged = 0;
          char *query_m_string;
          if(r->query_m_string == ((char *)NULL))
            tmp_if_expr$3 = "";

          else
            tmp_if_expr$3 = r->query_m_string;
          query_m_string = tmp_if_expr$3;
          char *query_m_pcre;
          if(r->query_m_pcre == ((char *)NULL))
            tmp_if_expr$4 = "";

          else
            tmp_if_expr$4 = r->query_m_pcre;
          query_m_pcre = tmp_if_expr$4;
          if(m_verbose >= 2)
            printf("  search for path %s (%s)\n", r->path, rule_str);

          if(m_verbose >= 2)
            printf("  . %s %s\n", query_m_string, query_m_pcre);

          apr_table_add(checked_path, r->path, "");
          j = 0;
          do
          {
            return_value_apr_table_elts$5=apr_table_elts(rules);
            if(j >= return_value_apr_table_elts$5->nelts)
              break;

            if(!(i == j))
            {
              struct anonymous *n = (struct anonymous *)(entry + (signed long int)j)->val;
              if(n->fragment == 0)
              {
                if(!(n->path == ((char *)NULL)))
                {
                  return_value_strcmp$9=strcmp(r->path, n->path);
                  if(return_value_strcmp$9 == 0)
                  {
                    if(m_verbose >= 2)
                    {
                      if(n->query_m_string == ((char *)NULL))
                        tmp_if_expr$6 = "-";

                      else
                        tmp_if_expr$6 = n->query_m_string;
                      if(n->query_m_pcre == ((char *)NULL))
                        tmp_if_expr$7 = "-";

                      else
                        tmp_if_expr$7 = n->query_m_pcre;
                      printf("  + %s %s\n", tmp_if_expr$6, tmp_if_expr$7);
                    }

                    unsigned long int return_value_strlen$8;
                    return_value_strlen$8=strlen(query_m_string);
                    if(return_value_strlen$8 == 0ul)
                      query_m_string=apr_pstrcat(pool, query_m_string, n->query_m_string, (void *)0);

                    else
                      query_m_string=qos_addstr(pool, query_m_string, "|", n->query_m_string);
                    if(m_verbose >= 2)
                      printf("  > %s\n", query_m_string);

                    query_m_pcre=apr_pstrcat(pool, query_m_pcre, n->query_m_pcre, (void *)0);
                    apr_table_add(delete, (entry + (signed long int)j)->key, "");
                    merged = 1;
                  }

                }

              }

            }

            j = j + 1;
          }
          while((_Bool)1);
          if(!(merged == 0))
          {
            apr_table_add(delete, (entry + (signed long int)i)->key, "");
            if(!(m_verbose == 0))
              printf("# CHANGE: <%s>", rule_str);

            const char *errptr = (const char *)(void *)0;
            char *rule;
            rule=apr_pstrcat(pool, (const void *)"^", r->path, (void *)0);
            struct anonymous *rs;
            void *return_value_apr_palloc$10;
            return_value_apr_palloc$10=apr_palloc(pool, sizeof(struct anonymous) /*56ul*/ );
            void *return_value_memset$11;
            return_value_memset$11=memset(return_value_apr_palloc$10, 0, sizeof(struct anonymous) /*56ul*/ );
            rs = (struct anonymous *)return_value_memset$11;
            unsigned long int return_value_strlen$13;
            return_value_strlen$13=strlen(query_m_string);
            if(return_value_strlen$13 >= 1ul)
            {
              char *return_value_qos_qqs$12;
              return_value_qos_qqs$12=qos_qqs(pool, query_m_string, query_m_pcre, 0, 0, 0);
              rule=apr_pstrcat(pool, rule, (const void *)"\\?", return_value_qos_qqs$12, (void *)0);
            }

            rule=apr_pstrcat(pool, rule, (const void *)"$", (void *)0);
            rs->pcre=qos_pcre_compile(rule, 0);
            rs->extra=pcre_study(rs->pcre, 0, &errptr);
            rs->path = r->path;
            apr_table_setn(new, rule, (char *)rs);
            if(!(m_verbose == 0))
            {
              printf(" to <%s>\n", rule);
              fflush(stdout);
            }

          }

        }

      }

    }

    i = i + 1;
  }
  while((_Bool)1);
  const struct apr_array_header_t *return_value_apr_table_elts$15;
  return_value_apr_table_elts$15=apr_table_elts(delete);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$15->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts$16;
  do
  {
    return_value_apr_table_elts$16=apr_table_elts(delete);
    if(i >= return_value_apr_table_elts$16->nelts)
      break;

    if(!(m_verbose == 0))
      printf("# DEL rule: %s\n", (entry + (signed long int)i)->key);

    apr_table_unset(rules, (entry + (signed long int)i)->key);
    i = i + 1;
  }
  while((_Bool)1);
  const struct apr_array_header_t *return_value_apr_table_elts$17;
  return_value_apr_table_elts$17=apr_table_elts(new);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$17->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts$18;
  do
  {
    return_value_apr_table_elts$18=apr_table_elts(new);
    if(i >= return_value_apr_table_elts$18->nelts)
      break;

    apr_table_setn(rules, (entry + (signed long int)i)->key, (entry + (signed long int)i)->val);
    i = i + 1;
  }
  while((_Bool)1);
}

// qos_query_string_pcre
// file qsfilter2.c line 1042
static char * qos_query_string_pcre(struct apr_pool_t *pool, const char *path)
{
  char *copy;
  copy=apr_pstrdup(pool, path);
  char *pos = copy;
  char *ret = "";
  signed int isValue = 0;
  signed int open = 0;
  for( ; !(*copy == 0); copy = copy + 1l)
  {
    if((signed int)*copy == 61)
    {
      if(!((signed int)copy[1l] == 61))
      {
        if(open == 0)
        {
          copy[(signed long int)0] = (char)0;
          qos_unescaping(pos);
          if(open == 0)
          {
            ret=apr_pstrcat(pool, ret, (const void *)"(", (void *)0);
            open = 1;
          }

          if(!(m_query_pcre == 0))
          {
            unsigned long int return_value_strlen$2;
            return_value_strlen$2=strlen(pos);
            if(return_value_strlen$2 >= 1ul)
            {
              char *return_value_qos_2pcre$1;
              return_value_qos_2pcre$1=qos_2pcre(pool, pos);
              ret=apr_pstrcat(pool, ret, (const void *)"[", return_value_qos_2pcre$1, (const void *)"]+=", (void *)0);
            }

            else
              ret=apr_pstrcat(pool, ret, (const void *)"=", (void *)0);
          }

          else
          {
            char *return_value_qos_escape_pcre$3;
            return_value_qos_escape_pcre$3=qos_escape_pcre(pool, pos);
            ret=apr_pstrcat(pool, ret, return_value_qos_escape_pcre$3, (const void *)"=", (void *)0);
          }
          open = 1;
          pos = copy;
          pos = pos + 1l;
          isValue = 1;
        }

      }

    }

    if((signed int)*copy == 38)
    {
      copy[(signed long int)0] = (char)0;
      unsigned long int return_value_strlen$6;
      return_value_strlen$6=strlen(pos);
      if(return_value_strlen$6 == 0ul)
      {
        ret=apr_pstrcat(pool, ret, (const void *)"[&]?", (void *)0);
        if(!(open == 0))
        {
          ret=apr_pstrcat(pool, ret, (const void *)")?", (void *)0);
          open = 0;
        }

      }

      else
      {
        qos_unescaping(pos);
        char *return_value_qos_2pcre$4;
        return_value_qos_2pcre$4=qos_2pcre(pool, pos);
        unsigned long int return_value_strlen$5;
        return_value_strlen$5=strlen(pos);
        ret=apr_psprintf(pool, "%s[%s]{0,%lu}[&]?", ret, return_value_qos_2pcre$4, return_value_strlen$5 + (unsigned long int)m_query_len_pcre);
        if(!(open == 0))
        {
          ret=apr_pstrcat(pool, ret, (const void *)")?", (void *)0);
          open = 0;
        }

      }
      pos = copy;
      pos = pos + 1l;
      isValue = 0;
    }

  }
  if(!(pos == copy))
  {
    qos_unescaping(pos);
    if(!(isValue == 0))
    {
      char *return_value_qos_2pcre$7;
      return_value_qos_2pcre$7=qos_2pcre(pool, pos);
      unsigned long int return_value_strlen$8;
      return_value_strlen$8=strlen(pos);
      ret=apr_psprintf(pool, "%s[%s]{0,%lu}[&]?", ret, return_value_qos_2pcre$7, return_value_strlen$8 + (unsigned long int)m_query_len_pcre);
    }

    else
    {
      if(open == 0)
      {
        ret=apr_pstrcat(pool, (const void *)"(", ret, (void *)0);
        open = 1;
      }

      if(!(m_query_pcre == 0))
      {
        char *return_value_qos_2pcre$9;
        return_value_qos_2pcre$9=qos_2pcre(pool, pos);
        ret=apr_pstrcat(pool, ret, (const void *)"[", return_value_qos_2pcre$9, (const void *)"]+", (void *)0);
      }

      else
      {
        char *return_value_qos_escape_pcre$10;
        return_value_qos_escape_pcre$10=qos_escape_pcre(pool, pos);
        ret=apr_pstrcat(pool, ret, return_value_qos_escape_pcre$10, (void *)0);
      }
    }
    if(!(open == 0))
    {
      ret=apr_pstrcat(pool, ret, (const void *)")?", (void *)0);
      open = 0;
    }

  }

  if(!(open == 0))
  {
    ret=apr_pstrcat(pool, ret, (const void *)")?", (void *)0);
    open = 0;
  }

  if(!(m_query_pcre == 0))
    return ret;

  else
    return ret;
}

// qos_rule_optimization
// file qsfilter2.c line 1250
static void qos_rule_optimization(struct apr_pool_t *pool, struct apr_pool_t *lpool, struct apr_table_t *rules, struct apr_table_t *special_rules)
{
  signed int i;
  struct apr_table_t *new_rules;
  new_rules=apr_table_make(pool, 5);
  struct apr_table_t *del_rules;
  del_rules=apr_table_make(pool, 5);
  struct apr_table_entry_t *entry;
  const struct apr_array_header_t *return_value_apr_table_elts$1;
  return_value_apr_table_elts$1=apr_table_elts(rules);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$1->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts$2;
  const struct apr_array_header_t *return_value_apr_table_elts$3;
  const unsigned short int **return_value___ctype_b_loc$7;
  const unsigned short int **return_value___ctype_b_loc$8;
  unsigned long int return_value_strlen$14;
  char *return_value_strstr$13;
  do
  {
    return_value_apr_table_elts$2=apr_table_elts(rules);
    if(i >= return_value_apr_table_elts$2->nelts)
      break;

    struct anonymous *rs = (struct anonymous *)(entry + (signed long int)i)->val;
    signed int hit = 0;
    signed int j = 0;
    do
    {
      return_value_apr_table_elts$3=apr_table_elts(rules);
      if(j >= return_value_apr_table_elts$3->nelts)
        break;

      if(!(i == j))
      {
        struct anonymous *rsj = (struct anonymous *)(entry + (signed long int)j)->val;
        if(!(rs->query_m_string == ((char *)NULL)))
        {
          if(!(rsj->query_m_string == ((char *)NULL)))
          {
            signed int return_value_strcmp$6;
            return_value_strcmp$6=strcmp(rs->query_m_string, rsj->query_m_string);
            if(return_value_strcmp$6 == 0)
            {
              unsigned long int return_value_strlen$4;
              return_value_strlen$4=strlen((entry + (signed long int)i)->key);
              unsigned long int return_value_strlen$5;
              return_value_strlen$5=strlen((entry + (signed long int)j)->key);
              if(return_value_strlen$4 == return_value_strlen$5)
                hit = hit + 1;

            }

            if(hit == 5)
            {
              signed int s = 0;
              signed int e = 0;
              for( ; !((entry + (signed long int)i)->key[(signed long int)s] == 0); s = s + 1)
                if(!((entry + (signed long int)i)->key[(signed long int)s] == (entry + (signed long int)j)->key[(signed long int)s]))
                  break;

              e = s;
              for( ; !((entry + (signed long int)i)->key[(signed long int)e] == 0); e = e + 1)
                if((entry + (signed long int)i)->key[(signed long int)e] == (entry + (signed long int)j)->key[(signed long int)e])
                {
                  return_value___ctype_b_loc$7=__ctype_b_loc();
                  if(!((8 & (signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)(unsigned char)(entry + (signed long int)i)->key[(signed long int)e]]) == 0))
                  {
                    return_value___ctype_b_loc$8=__ctype_b_loc();
                    if((8 & (signed int)(*return_value___ctype_b_loc$8)[(signed long int)(signed int)(unsigned char)(entry + (signed long int)j)->key[(signed long int)e]]) == 0)
                      goto __CPROVER_DUMP_L8;

                  }

                  else
                  {

                  __CPROVER_DUMP_L8:
                    ;
                    break;
                  }
                }

              if(s >= 15 && !(s >= e))
              {
                return_value_strlen$14=strlen((entry + (signed long int)i)->key);
                if(!((unsigned long int)e >= return_value_strlen$14))
                {
                  return_value_strstr$13=strstr(&(entry + (signed long int)i)->key[(signed long int)e], "?");
                  if(!(return_value_strstr$13 == ((char *)NULL)))
                  {
                    const char *errptr = (const char *)(void *)0;
                    char *match;
                    match=apr_psprintf(lpool, "%.*s%.*s", e - s, &(entry + (signed long int)i)->key[(signed long int)s], e - s, &(entry + (signed long int)j)->key[(signed long int)s]);
                    signed int return_value_qos_is_alnum$12;
                    return_value_qos_is_alnum$12=qos_is_alnum(match);
                    if(!(return_value_qos_is_alnum$12 == 0))
                    {
                      char *matchx;
                      char *return_value_qos_2pcre$9;
                      return_value_qos_2pcre$9=qos_2pcre(lpool, match);
                      matchx=apr_psprintf(lpool, "[%s]{%d}", return_value_qos_2pcre$9, e - s);
                      char *new;
                      new=apr_psprintf(pool, "%.*s%s%s", s, (entry + (signed long int)i)->key, matchx, &(entry + (signed long int)i)->key[(signed long int)e]);
                      struct anonymous *rsn;
                      void *return_value_apr_palloc$10;
                      return_value_apr_palloc$10=apr_palloc(pool, sizeof(struct anonymous) /*56ul*/ );
                      void *return_value_memset$11;
                      return_value_memset$11=memset(return_value_apr_palloc$10, 0, sizeof(struct anonymous) /*56ul*/ );
                      rsn = (struct anonymous *)return_value_memset$11;
                      rsn->pcre=qos_pcre_compile(new, 0);
                      rsn->extra=pcre_study(rsn->pcre, 0, &errptr);
                      rsn->path = rs->path;
                      rsn->query_m_string = rs->query_m_string;
                      rsn->query_m_pcre = rs->query_m_pcre;
                      rsn->fragment = rs->fragment;
                      if(!(m_verbose == 0))
                      {
                        printf("# CHANGE: <%s> to <%s>\n", (entry + (signed long int)i)->key, new);
                        fflush(stdout);
                      }

                      apr_table_setn(new_rules, new, (char *)rsn);
                      apr_table_addn(del_rules, (entry + (signed long int)i)->key, (entry + (signed long int)i)->val);
                      apr_table_addn(del_rules, (entry + (signed long int)j)->key, (entry + (signed long int)j)->val);
                      if(m_verbose >= 2)
                      {
                        if(!(m_verbose == 0))
                          printf("  [%s] [%s]\n", (entry + (signed long int)i)->key, (entry + (signed long int)j)->key);

                        if(!(m_verbose == 0))
                          printf("  [%s] [%s]\n", match, matchx);

                      }

                      break;
                    }

                  }

                }

              }

            }

          }

        }

      }

      j = j + 1;
    }
    while((_Bool)1);
    i = i + 1;
  }
  while((_Bool)1);
  const struct apr_array_header_t *return_value_apr_table_elts$15;
  return_value_apr_table_elts$15=apr_table_elts(new_rules);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$15->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts$16;
  do
  {
    return_value_apr_table_elts$16=apr_table_elts(new_rules);
    if(i >= return_value_apr_table_elts$16->nelts)
      break;

    apr_table_setn(rules, (entry + (signed long int)i)->key, (entry + (signed long int)i)->val);
    i = i + 1;
  }
  while((_Bool)1);
  const struct apr_array_header_t *return_value_apr_table_elts$17;
  return_value_apr_table_elts$17=apr_table_elts(del_rules);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$17->elts;
  i = 0;
  const struct apr_array_header_t *return_value_apr_table_elts$18;
  do
  {
    return_value_apr_table_elts$18=apr_table_elts(del_rules);
    if(i >= return_value_apr_table_elts$18->nelts)
      break;

    apr_table_unset(rules, (entry + (signed long int)i)->key);
    i = i + 1;
  }
  while((_Bool)1);
}

// qos_test_for_existing_rule
// file qsfilter2.c line 898
static signed int qos_test_for_existing_rule(char *plain, char *line, struct apr_table_t *rules, struct apr_table_t *special_rules, signed int line_nr, struct apr_table_t *rules_url, struct apr_table_t *source_rules, signed int first)
{
  signed int i;
  struct apr_table_entry_t *entry;
  const struct apr_array_header_t *return_value_apr_table_elts$1;
  return_value_apr_table_elts$1=apr_table_elts(rules);
  entry = (struct apr_table_entry_t *)return_value_apr_table_elts$1->elts;
  _Bool tmp_if_expr$3;
  unsigned long int return_value_strlen$2;
  if(line == ((char *)NULL))
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    return_value_strlen$2=strlen(line);
    tmp_if_expr$3 = return_value_strlen$2 == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
  }
  const struct apr_array_header_t *return_value_apr_table_elts$4;
  const char *return_value_apr_table_get$5;
  const struct apr_array_header_t *return_value_apr_table_elts$9;
  if(tmp_if_expr$3)
    return 0;

  else
  {
    i = 0;
    do
    {
      return_value_apr_table_elts$4=apr_table_elts(rules);
      if(i >= return_value_apr_table_elts$4->nelts)
        break;

      struct anonymous *rs = (struct anonymous *)(entry + (signed long int)i)->val;
      unsigned long int return_value_strlen$6;
      return_value_strlen$6=strlen(line);
      signed int return_value_pcre_exec$7;
      return_value_pcre_exec$7=pcre_exec(rs->pcre, rs->extra, line, (signed int)return_value_strlen$6, 0, 0, (signed int *)(void *)0, 0);
      if(return_value_pcre_exec$7 >= 0)
      {
        if(!(first == 0))
        {
          return_value_apr_table_get$5=apr_table_get(source_rules, (entry + (signed long int)i)->key);
          if(return_value_apr_table_get$5 == ((const char *)NULL))
          {
            apr_table_add(source_rules, (entry + (signed long int)i)->key, "");
            apr_table_add(rules_url, line, "");
            apr_table_setn(special_rules, (entry + (signed long int)i)->key, (char *)rs);
            if(!(m_verbose == 0))
            {
              printf("# ADD line %d: %s\n", line_nr, plain);
              printf("# --- %s\n", (entry + (signed long int)i)->key);
            }

          }

        }

        if(m_verbose >= 2)
          printf("LINE %d, exiting rule: %s\n", line_nr, (entry + (signed long int)i)->key);

        return 1;
      }

      i = i + 1;
    }
    while((_Bool)1);
    const struct apr_array_header_t *return_value_apr_table_elts$8;
    return_value_apr_table_elts$8=apr_table_elts(special_rules);
    entry = (struct apr_table_entry_t *)return_value_apr_table_elts$8->elts;
    i = 0;
    do
    {
      return_value_apr_table_elts$9=apr_table_elts(special_rules);
      if(i >= return_value_apr_table_elts$9->nelts)
        break;

      struct anonymous *qos_test_for_existing_rule$$1$$2$$1$$rs = (struct anonymous *)(entry + (signed long int)i)->val;
      unsigned long int return_value_strlen$10;
      return_value_strlen$10=strlen(line);
      signed int return_value_pcre_exec$11;
      return_value_pcre_exec$11=pcre_exec(qos_test_for_existing_rule$$1$$2$$1$$rs->pcre, qos_test_for_existing_rule$$1$$2$$1$$rs->extra, line, (signed int)return_value_strlen$10, 0, 0, (signed int *)(void *)0, 0);
      if(return_value_pcre_exec$11 >= 0)
      {
        if(!(m_verbose == 0))
        {
          printf("# ADD line %d: %s\n", line_nr, plain);
          printf("# -(S) %s\n", (entry + (signed long int)i)->key);
        }

        apr_table_setn(rules, (entry + (signed long int)i)->key, (char *)qos_test_for_existing_rule$$1$$2$$1$$rs);
        return 1;
      }

      i = i + 1;
    }
    while((_Bool)1);
    return 0;
  }
}

// qos_unescaping
// file qsfilter2.c line 276
static signed int qos_unescaping(char *x)
{
  signed int i;
  signed int j;
  signed int ch;
  _Bool tmp_if_expr$19;
  signed int return_value_qos_ishex$18;
  _Bool tmp_if_expr$21;
  signed int return_value_qos_ishex$20;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$11;
  signed int return_value_qos_ishex$10;
  _Bool tmp_if_expr$13;
  signed int return_value_qos_ishex$12;
  _Bool tmp_if_expr$15;
  signed int return_value_qos_ishex$14;
  _Bool tmp_if_expr$17;
  signed int return_value_qos_ishex$16;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$5;
  signed int return_value_qos_ishex$4;
  _Bool tmp_if_expr$7;
  signed int return_value_qos_ishex$6;
  if((signed int)*x == 0)
    return 0;

  else
  {
    i = 0;
    j = 0;
    for( ; !((signed int)x[(signed long int)i] == 0); j = j + 1)
    {
      ch = (signed int)x[(signed long int)i];
      if(ch == 37)
      {
        return_value_qos_ishex$18=qos_ishex(x[(signed long int)(i + 1)]);
        tmp_if_expr$19 = return_value_qos_ishex$18 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$19 = (_Bool)0;
      if(tmp_if_expr$19)
      {
        return_value_qos_ishex$20=qos_ishex(x[(signed long int)(i + 2)]);
        tmp_if_expr$21 = return_value_qos_ishex$20 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$21 = (_Bool)0;
      if(tmp_if_expr$21)
      {
        ch=qos_hex2c(&x[(signed long int)(i + 1)]);
        i = i + 2;
      }

      else
      {
        if(!((0x02 & m_mode) == 0) && (ch == 37 || ch == 92))
        {
          if((signed int)x[(signed long int)(1 + i)] == 117)
            tmp_if_expr$8 = (_Bool)1;

          else
            tmp_if_expr$8 = (signed int)x[(signed long int)(i + 1)] == 85 ? (_Bool)1 : (_Bool)0;
          tmp_if_expr$9 = tmp_if_expr$8 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$9 = (_Bool)0;
        if(tmp_if_expr$9)
        {
          return_value_qos_ishex$10=qos_ishex(x[(signed long int)(i + 2)]);
          tmp_if_expr$11 = return_value_qos_ishex$10 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$11 = (_Bool)0;
        if(tmp_if_expr$11)
        {
          return_value_qos_ishex$12=qos_ishex(x[(signed long int)(i + 3)]);
          tmp_if_expr$13 = return_value_qos_ishex$12 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$13 = (_Bool)0;
        if(tmp_if_expr$13)
        {
          return_value_qos_ishex$14=qos_ishex(x[(signed long int)(i + 4)]);
          tmp_if_expr$15 = return_value_qos_ishex$14 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$15 = (_Bool)0;
        if(tmp_if_expr$15)
        {
          return_value_qos_ishex$16=qos_ishex(x[(signed long int)(i + 5)]);
          tmp_if_expr$17 = return_value_qos_ishex$16 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$17 = (_Bool)0;
        if(tmp_if_expr$17)
        {
          ch=qos_hex2c(&x[(signed long int)(i + 4)]);
          if(ch >= 1 && !(ch >= 0x5f))
          {
            if((signed int)x[(signed long int)(2 + i)] == 102)
              tmp_if_expr$2 = (_Bool)1;

            else
              tmp_if_expr$2 = (signed int)x[(signed long int)(i + 2)] == 70 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$2)
            {
              if((signed int)x[(signed long int)(3 + i)] == 102)
                tmp_if_expr$1 = (_Bool)1;

              else
                tmp_if_expr$1 = (signed int)x[(signed long int)(i + 3)] == 70 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$1)
                ch = ch + 0x20;

            }

          }

          i = i + 5;
        }

        else
        {
          if(ch == 92)
            tmp_if_expr$3 = (signed int)x[(signed long int)(i + 1)] == 120 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$3 = (_Bool)0;
          if(tmp_if_expr$3)
          {
            return_value_qos_ishex$4=qos_ishex(x[(signed long int)(i + 2)]);
            tmp_if_expr$5 = return_value_qos_ishex$4 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$5 = (_Bool)0;
          if(tmp_if_expr$5)
          {
            return_value_qos_ishex$6=qos_ishex(x[(signed long int)(i + 3)]);
            tmp_if_expr$7 = return_value_qos_ishex$6 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$7 = (_Bool)0;
          if(tmp_if_expr$7)
          {
            ch=qos_hex2c(&x[(signed long int)(i + 2)]);
            i = i + 3;
          }

          else
            if(ch == 43)
              ch = 32;

        }
      }
      x[(signed long int)j] = (char)ch;
      i = i + 1;
    }
    x[(signed long int)j] = (char)0;
    unsigned long int return_value_strlen$22;
    return_value_strlen$22=strlen(x);
    if(!(return_value_strlen$22 == (unsigned long int)j))
      fprintf(stderr, "WARNING, found escaped null char %s\n", x);

    return j;
  }
}

// qos_worker
// file qsfilter2.c line 611
static void * qos_worker(void *argv)
{
  struct anonymous$0 *wt = (struct anonymous$0 *)argv;
  struct apr_table_t *return_value_qos_get_used$1;
  return_value_qos_get_used$1=qos_get_used(wt->pool, wt->rules, wt->rules_url, wt->from, wt->to);
  return (void *)return_value_qos_get_used$1;
}

// qs_CMD
// file qs_util.h line 50
char * qs_CMD(const char *cmd)
{
  char *buf;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1024, (unsigned long int)1);
  buf = (char *)return_value_calloc$1;
  signed int i = 0;
  while(!(cmd[(signed long int)i] == 0))
  {
    if(i >= 1023)
      break;

    signed int return_value_toupper$2;
    return_value_toupper$2=toupper((signed int)cmd[(signed long int)i]);
    buf[(signed long int)i] = (char)return_value_toupper$2;
    i = i + 1;
  }
  buf[(signed long int)i] = (char)0;
  return buf;
}

// qs_apache_escape
// file qsfilter2.c line 174
static char * qs_apache_escape(struct apr_pool_t *pool, const char *line)
{
  char *ret;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(line);
  void *return_value_apr_palloc$2;
  return_value_apr_palloc$2=apr_palloc(pool, return_value_strlen$1 * (unsigned long int)4);
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(line);
  void *return_value_memset$4;
  return_value_memset$4=memset(return_value_apr_palloc$2, 0, return_value_strlen$3 * (unsigned long int)4);
  ret = (char *)return_value_memset$4;
  signed int i = 0;
  const char *in = line;
  _Bool tmp_if_expr$5;
  for( ; !(in == ((const char *)NULL)); in = in + 1l)
  {
    if(*in == 0)
      break;

    if((signed int)*in == 34)
    {
      ret[(signed long int)i] = (char)92;
      i = i + 1;
      ret[(signed long int)i] = (char)120;
      i = i + 1;
      ret[(signed long int)i] = (char)50;
      i = i + 1;
      ret[(signed long int)i] = (char)50;
      i = i + 1;
    }

    else
    {
      if((signed int)*in == 92)
        tmp_if_expr$5 = (signed int)in[(signed long int)1] == 92 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$5 = (_Bool)0;
      if(tmp_if_expr$5)
      {
        ret[(signed long int)i] = (char)92;
        i = i + 1;
        ret[(signed long int)i] = (char)120;
        i = i + 1;
        ret[(signed long int)i] = (char)53;
        i = i + 1;
        ret[(signed long int)i] = (char)99;
        i = i + 1;
        in = in + 1l;
      }

      else
      {
        ret[(signed long int)i] = (char)in[(signed long int)0];
        i = i + 1;
      }
    }
  }
  return ret;
}

// qs_csInitLock
// file qs_util.c line 239
void qs_csInitLock()
{
  pthread_mutex_init(&m_qs_lock_cs, (const union anonymous$2 *)(void *)0);
}

// qs_csLock
// file qs_util.c line 225
void qs_csLock()
{
  pthread_mutex_lock(&m_qs_lock_cs);
}

// qs_csUnLock
// file qs_util.c line 232
void qs_csUnLock()
{
  pthread_mutex_unlock(&m_qs_lock_cs);
}

// qs_deleteOldFiles
// file qs_util.c line 251
void qs_deleteOldFiles(const char *file_name, signed int generations)
{
  char dirname[2048l];
  char *p;
  strcpy(dirname, file_name);
  p=strrchr(dirname, 47);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(file_name);
  unsigned long int return_value_strlen$2;
  signed int return_value_strncmp$3;
  unsigned long int return_value_strlen$5;
  signed int return_value_strncmp$6;
  if(!(return_value_strlen$1 >= 2039ul))
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

          return_value_strlen$2=strlen(filename);
          return_value_strncmp$3=strncmp(de->d_name, filename, return_value_strlen$2);
          if(return_value_strncmp$3 == 0)
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

            return_value_strlen$5=strlen(filename);
            return_value_strncmp$6=strncmp(de->d_name, filename, return_value_strlen$5);
            if(return_value_strncmp$6 == 0)
            {
              signed int return_value_strcmp$4;
              return_value_strcmp$4=strcmp(old, de->d_name);
              if(return_value_strcmp$4 >= 1)
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

// qs_getLine
// file qs_util.c line 150
signed int qs_getLine(char *s, signed int n)
{
  signed int i = 0;
  _Bool tmp_if_expr$3;
  while((_Bool)1)
  {
    signed int return_value_getchar$1;
    return_value_getchar$1=getchar();
    s[(signed long int)i] = (char)return_value_getchar$1;
    if((signed int)s[(signed long int)i] == -1)
      return 0;

    if((signed int)s[(signed long int)i] == 13)
    {
      signed int return_value_getchar$2;
      return_value_getchar$2=getchar();
      s[(signed long int)i] = (char)return_value_getchar$2;
    }

    if((signed int)s[(signed long int)i] == 0x4)
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = (signed int)s[(signed long int)i] == 10 ? (_Bool)1 : (_Bool)0;
    if(i == n + -1 || tmp_if_expr$3)
    {
      s[(signed long int)i] = (char)0;
      return 1;
    }

    i = i + 1;
  }
}

// qs_getLinef
// file qs_util.c line 173
signed int qs_getLinef(char *s, signed int n, struct _IO_FILE *f)
{
  signed int i = 0;
  _Bool tmp_if_expr$4;
  while((_Bool)1)
  {
    signed int return_value_fgetc$1;
    return_value_fgetc$1=fgetc(f);
    s[(signed long int)i] = (char)return_value_fgetc$1;
    if((signed int)s[(signed long int)i] == 13)
    {
      signed int return_value_fgetc$2;
      return_value_fgetc$2=fgetc(f);
      s[(signed long int)i] = (char)return_value_fgetc$2;
    }

    if((signed int)s[(signed long int)i] == 0x4)
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = (signed int)s[(signed long int)i] == 10 ? (_Bool)1 : (_Bool)0;
    if(i == n + -1 || tmp_if_expr$4)
    {
      s[(signed long int)i] = (char)0;
      signed int return_value_feof$3;
      return_value_feof$3=feof(f);
      return return_value_feof$3 != 0 ? 1 : 0;
    }

    i = i + 1;
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

  _Bool tmp_if_expr$1;
  while(!(bufin[(signed long int)i] == 0))
  {
    if(j >= 4000)
      break;

    if(!(man == 0))
    {
      if((signed int)bufin[(signed long int)i] == 92)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (signed int)bufin[(signed long int)i] == 45 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
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
  _Bool tmp_if_expr$1;
  for( ; !(bufin[(signed long int)i] == 0); j = j + 1)
  {
    if(j >= 4000)
      break;

    if(!(man == 0))
    {
      if((signed int)bufin[(signed long int)i] == 92)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (signed int)bufin[(signed long int)i] == 45 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
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

// qs_set2OfflineMode
// file qs_util.c line 210
void qs_set2OfflineMode()
{
  m_qs_offline = 1;
}

// qs_setTime
// file qs_util.c line 217
void qs_setTime(signed long int tme)
{
  m_qs_virtualSystemTime = tme;
}

// qs_setuid
// file qs_util.c line 305
void qs_setuid(const char *username, const char *cmd)
{
  unsigned int return_value_getuid$3;
  if(!(username == ((const char *)NULL)))
  {
    return_value_getuid$3=getuid();
    if(return_value_getuid$3 == 0u)
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
      unsigned int return_value_getuid$1;
      return_value_getuid$1=getuid();
      if(!(return_value_getuid$1 == uid))
      {
        fprintf(stderr, "[%s] setuid failed (%s,%d)\n", cmd, username, uid);
        exit(1);
      }

      unsigned int return_value_getgid$2;
      return_value_getgid$2=getgid();
      if(!(return_value_getgid$2 == gid))
      {
        fprintf(stderr, "[%s] setgid failed (%d)\n", cmd, gid);
        exit(1);
      }

    }

  }

}

// qs_time
// file qs_util.c line 198
void qs_time(signed long int *tme)
{
  if(!(m_qs_offline == 0))
    *tme = m_qs_virtualSystemTime;

  else
    time(tme);
}

// usage
// file qsfilter2.c line 341
static void usage(char *cmd, signed int man)
{
  char space[1024l];
  memset((void *)space, 32, (unsigned long int)1024);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(cmd);
  space[(signed long int)return_value_strlen$1] = (char)0;
  if(!(man == 0))
  {
    char *return_value_qs_CMD$2;
    return_value_qs_CMD$2=qs_CMD(cmd);
    printf(".TH %s 1 \"%s\" \"mod_qos utilities %s\" \"%s man page\"\n", return_value_qs_CMD$2, (const void *)man_date, (const void *)man_version, cmd);
  }

  printf("\n");
  if(!(man == 0))
    printf(".SH NAME\n");

  qs_man_print(man, "%s - an utility to generate mod_qos request line rules out from\n", cmd);
  qs_man_print(man, "existing access/audit log data.\n");
  printf("\n");
  if(!(man == 0))
    printf(".SH SYNOPSIS\n");

  qs_man_print(man, "%s%s -i <path> [-c <path>] [-d <num>] [-h] [-b <num>]\n", man != 0 ? "" : "Usage: ", cmd);
  qs_man_print(man, "       %s [-p|-s|-m|-o] [-l <len>] [-n] [-e] [-u 'uni']\n", (const void *)space);
  qs_man_print(man, "       %s [-k <prefix>] [-t] [-f <path>] [-v 0|1|2]\n", (const void *)space);
  printf("\n");
  if(!(man == 0))
    printf(".SH DESCRIPTION\n");

  else
    printf("Summary\n");
  qs_man_print(man, " mod_qos implements a request filter which validates each request\n");
  qs_man_print(man, " line. The module supports both, negative and positive security\n");
  qs_man_print(man, " model. The QS_Deny* directives are used to specify request line\n");
  qs_man_print(man, " patterns which are not allowed to access the server (negative\n");
  qs_man_print(man, " security model / blacklist). These rules are used to restrict\n");
  qs_man_print(man, " access to certain resources which should not be available to\n");
  qs_man_print(man, " users or to protect the server from malicious patterns. The\n");
  qs_man_print(man, " QS_Permit* rules implement a positive security model (whitelist).\n");
  qs_man_print(man, " These directives are used to define allowed request line patterns.\n");
  qs_man_print(man, " Request which do not match any of thses patterns are not allowed\n");
  qs_man_print(man, " to access the server.\n");
  if(!(man == 0))
    printf("\n\n");

  qs_man_print(man, " %s is an audit log analyzer used to generate filter\n", cmd);
  qs_man_print(man, " rules (perl compatible regular expressions) which may be used\n");
  qs_man_print(man, " by mod_qos to deny access for suspect requests (QS_PermitUri rules).\n");
  qs_man_print(man, " It parses existing audit log files in order to generate request\n");
  qs_man_print(man, " patterns covering all allowed requests.\n");
  printf("\n");
  if(!(man == 0))
    printf(".SH OPTIONS\n");

  else
    printf("Options\n");
  if(!(man == 0))
    printf(".TP\n");

  qs_man_print(man, "  -i <path>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Input file containing request URIs.\n");
  qs_man_print(man, "     The URIs for this file have to be extracted from the servers\n");
  qs_man_print(man, "     access logs. Each line of the input file contains a request\n");
  qs_man_print(man, "     URI consiting of a path and and query.\n");
  printf("\n");
  printf("     Example:\n");
  qs_man_println(man, "       /aaa/index.do\n");
  qs_man_println(man, "       /aaa/edit?image=1.jpg\n");
  qs_man_println(man, "       /aaa/image/1.jpg\n");
  qs_man_println(man, "       /aaa/view?page=1\n");
  qs_man_println(man, "       /aaa/edit?document=1\n");
  printf("\n");
  qs_man_print(man, "     These access log data must include current request URIs but\n");
  qs_man_print(man, "     also request lines from previous rule generation steps. It\n");
  qs_man_print(man, "     must also include request lines which cover manually generated\n");
  qs_man_print(man, "     rules.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -c <path>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     mod_qos configuration file defining QS_DenyRequestLine and\n");
  qs_man_print(man, "     QS_PermitUri directives.\n");
  qs_man_print(man, "     %s generates rules from access log data automatically.\n", cmd);
  qs_man_print(man, "     Manually generated rules (QS_PermitUri) may be provided from\n");
  qs_man_print(man, "     this file. Note: each manual rule must be represented by a\n");
  qs_man_print(man, "     request URI in the input data (-i) in order to make sure not\n");
  qs_man_print(man, "     to be deleted by the rule optimisation algorithm.\n");
  qs_man_print(man, "     QS_Deny* rules from this file are used to filter request lines\n");
  qs_man_print(man, "     which should not be used for whitelist rule generation.\n");
  printf("\n");
  printf("     Example:\n");
  qs_man_println(man, "       # manually defined whitelist rule:\n");
  qs_man_println(man, "       QS_PermitUri +view deny \"^[/a-zA-Z0-9]+/view\\?(page=[0-9]+)?$\"\n");
  qs_man_println(man, "       # filter unwanted request line patterns:\n");
  qs_man_println(man, "       QS_DenyRequestLine +printable deny \".*[\\x00-\\x19].*\"\n");
  printf("\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -d <num>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Depth (sub locations) of the path string which is defined as a\n");
  qs_man_print(man, "     literal string. Default is 1.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -h\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Always use a string representing the handler name in the path even\n");
  qs_man_print(man, "     the url does not have a query. See also -d option.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -b <num>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Replaces url pattern by the regular expression when detecting\n");
  qs_man_print(man, "     a base64/hex encoded string. Detecting sensibility is defined by a\n");
  qs_man_print(man, "     numeric value. You should use values higher than 5 (default)\n");
  qs_man_print(man, "     or 0 to disable this function.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -p\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Repesents query by pcre only (no literal strings).\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -s\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Uses one single pcre for the whole query string.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -m\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Uses one pcre for multipe query values (recommended mode).\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -o\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Does not care the order of query parameters.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -l <len>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Outsizes the query length by the defined length ({0,size+len}),\n");
  qs_man_print(man, "     default is %d.\n", m_query_len_pcre);
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -n\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Disables redundant rules elimination.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -e\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Exit on error.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -u 'uni'\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Enables additional decoding methods. Use the same settings as you have\n");
  qs_man_print(man, "     used for the QS_Decoding directive.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -p\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Repesents query by pcre only (no literal strings).\n");
  qs_man_print(man, "     Determines the worst case performance for the generated whitelist\n");
  qs_man_print(man, "     by applying each rule for each request line (output is real time\n");
  qs_man_print(man, "     filter duration per request line in milliseconds).\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -k <prefix>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Prefix used to generate rule identifiers (QSF by default).\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -t\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Calculates the maximal latency per request (worst case) using the\n");
  qs_man_print(man, "     generated rules.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -f <path>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Filters the input by the provided path (prefix) only processing\n");
  qs_man_print(man, "     matching lines.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -v <level>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Verbose mode. (0=silent, 1=rule source, 2=detailed). Default is 1.\n");
  qs_man_print(man, "     Don't use rules you haven't checked the request data used to\n");
  qs_man_print(man, "     generate it! Level 1 is highly recommended (as long as you don't\n");
  qs_man_print(man, "     have created the log data using your own web crawler).\n");
  printf("\n");
  if(!(man == 0))
    printf(".SH OUTPUT\n");

  else
    printf("Output\n");
  qs_man_print(man, " The output of %s is written to stdout. The output\n", cmd);
  qs_man_print(man, " contains the generated QS_PermitUri directives but also\n");
  qs_man_print(man, " information about the source which has been used to generate\n");
  qs_man_print(man, " these rules. It is very important to check the validity of\n");
  qs_man_print(man, " each request line which has been used to calculate the\n");
  qs_man_print(man, " QS_PermitUri rules. Each request line which has been used to\n");
  qs_man_print(man, " generate a new rule is shown in the output prefixed by\n");
  qs_man_print(man, " \"ADD line <line number>:\". These request lines should be\n");
  qs_man_print(man, " stored and reused at any later rule generation (add them to\n");
  qs_man_print(man, " the URI input file). The subsequent line shows the generated\n");
  qs_man_print(man, " rule.\n");
  qs_man_print(man, " At the end of data processing a list of all generated\n");
  qs_man_print(man, " QS_PermitUri rules is shown. These directives may be used\n");
  qs_man_print(man, " withn the configuration file used by mod_qos.\n");
  printf("\n");
  if(!(man == 0))
    printf(".SH EXAMPLE\n");

  else
    printf("Sample Usage and Output\n");
  qs_man_println(man, "  ./%s -i loc.txt -c httpd.conf -m -e\n", cmd);
  qs_man_println(man, "  ...\n");
  qs_man_println(man, "  # ADD line 1: /aaa/index.do\n");
  qs_man_println(man, "  # 003 ^(/[a-zA-Z0-9\\-_]+)+[/]?\\.?[a-zA-Z]{0,4}$\n");
  qs_man_println(man, "  # ADD line 3: /aaa/view?page=1\n");
  qs_man_println(man, "  # --- ^[/a-zA-Z0-9]+/view\\?(page=[0-9]+)?$\n");
  qs_man_println(man, "  # ADD line 4: /aaa/edit?document=1\n");
  qs_man_println(man, "  # 004 ^[/a-zA-Z]+/edit\\?((document)(=[0-9]*)*[&]?)*$\n");
  qs_man_println(man, "  # ADD line 5: /aaa/edit?image=1.jpg\n");
  qs_man_println(man, "  # 005 ^[/a-zA-Z]+/edit\\?((image)(=[0-9\\.a-zA-Z]*)*[&]?)*$\n");
  qs_man_println(man, "  ...\n");
  qs_man_println(man, "  QS_PermitUri +QSF001 deny \"^[/a-zA-Z]+/edit\\?((document|image)(=[0-9\\.a-zA-Z]*)*[&]?)*$\"\n");
  qs_man_println(man, "  QS_PermitUri +QSF002 deny \"^[/a-zA-Z0-9]+/view\\?(page=[0-9]+)?$\"\n");
  qs_man_println(man, "  QS_PermitUri +QSF003 deny \"^(/[a-zA-Z0-9\\-_]+)+[/]?\\.?[a-zA-Z]{0,4}$\"\n");
  printf("\n");
  if(!(man == 0))
  {
    printf(".SH SEE ALSO\n");
    printf("qsexec(1), qsgeo(1), qsgrep(1), qshead(1), qslog(1), qslogger(1), qspng(1), qsrotate(1), qssign(1), qstail(1)\n");
    printf(".SH AUTHOR\n");
    printf("Pascal Buchbinder, http://opensource.adnovum.ch/mod_qos/\n");
  }

  else
  {
    printf("mod_qos %s\n", (const void *)man_version);
    printf("See http://opensource.adnovum.ch/mod_qos/ for further details.\n");
  }
  if(!(man == 0))
    exit(0);

  else
    exit(1);
}

