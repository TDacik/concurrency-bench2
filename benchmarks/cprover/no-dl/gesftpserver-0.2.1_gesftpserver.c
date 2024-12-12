// tag-#anon#ST[S32'__count'||SYM#tag-#anon#UN[U32'__wch'||ARR4{S8}_S8_'__wchb'|]#'__value'|]
// file /usr/include/wchar.h line 82
struct anonymous_1;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_4;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_5;

// tag-#anon#UN[S32'fd'||*{SYM#tag-__dirstream#}_SYM#tag-__dirstream#_'dir'|]
// file handle.c line 39
union anonymous_2;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_3;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-#anon#UN[U32'__wch'||ARR4{S8}_S8_'__wchb'|]
// file /usr/include/wchar.h line 85
union anonymous_0;

// tag-#anon#cST[S32'errno_value'||U32'status_value'|]
// file status.c line 110
struct anonymous_6;

// tag-#anon#cST[U32'bit'||U32'_pad0'||*{cS8}_cS8_'description'|]
// file stat.c line 114
struct anonymous_7;

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

// tag-allocator
// file sftpcommon.h line 76
struct allocator;

// tag-block
// file alloc.c line 31
union block;

// tag-chunk
// file alloc.h line 26
struct chunk;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-group
// file /usr/include/grp.h line 42
struct group;

// tag-handle
// file handle.c line 36
struct handle;

// tag-handleid
// file sftpcommon.h line 77
struct handleid;

// tag-option
// file ./getopt.h line 83
struct option;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-queue
// file sftpcommon.h line 75
struct queue;

// tag-queuedetails
// file queue.h line 29
struct queuedetails;

// tag-queuejob
// file queue.c line 34
struct queuejob;

// tag-sftp_set_status_callbacks
// file stat.c line 272
struct sftp_set_status_callbacks;

// tag-sftpattr
// file sftpcommon.h line 79
struct sftpattr;

// tag-sftpcmd
// file types.h line 255
struct sftpcmd;

// tag-sftpextension
// file types.h line 264
struct sftpextension;

// tag-sftpjob
// file sftpcommon.h line 78
struct sftpjob;

// tag-sftpprotocol
// file types.h line 279
struct sftpprotocol;

// tag-sftptime
// file types.h line 31
struct sftptime;

// tag-sqnode
// file serialize.c line 64
struct sqnode;

// tag-stat
// file sftpcommon.h line 81
struct stat;

// tag-statvfs
// file /usr/include/x86_64-linux-gnu/bits/statvfs.h line 29
struct statvfs;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-tm
// file /usr/include/wchar.h line 137
struct tm;

// tag-worker
// file sftpcommon.h line 80
struct worker;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// _exit
// file /usr/include/unistd.h line 603
extern void _exit(signed int);
// append
// file utils.c line 159
char * append(struct allocator *a, char *s, unsigned long int *ns, const char *t);
// appendn
// file utils.c line 136
char * appendn(struct allocator *a, char *s, unsigned long int *ns, const char *t, unsigned long int lt);
// blocks
// file alloc.c line 85
static inline unsigned long int blocks(unsigned long int nbytes);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// chmod
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 283
extern signed int chmod(const char *, unsigned int);
// chown
// file /usr/include/unistd.h line 473
extern signed int chown(const char *, unsigned int, unsigned int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// do_read
// file utils.h line 35
signed int do_read(signed int fd, void *buffer, unsigned long int size);
// do_sftp_set_status
// file stat.c line 333
static unsigned int do_sftp_set_status(struct allocator *a, const void *what, struct sftpattr *attrsp, struct sftp_set_status_callbacks *cb, const char **whyp);
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);

//

// fatal
// file utils.h line 185
void fatal(const char *msg, ...);
// fchmod
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 296
extern signed int fchmod(signed int, unsigned int);
// fchown
// file /usr/include/unistd.h line 478
extern signed int fchown(signed int, unsigned int, unsigned int);
// fd_chmod
// file stat.c line 517
static signed int fd_chmod(const void *what, unsigned int mode);
// fd_chown
// file stat.c line 508
static signed int fd_chown(const void *what, unsigned int uid, unsigned int gid);
// fd_stat
// file stat.c line 526
static signed int fd_stat(const void *what, struct stat *sb);
// fd_truncate
// file stat.c line 498
static signed int fd_truncate(const void *what, signed long int size);
// fd_utimes
// file stat.c line 535
static signed int fd_utimes(const void *what, struct timeval *tv);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// find_free_handle
// file handle.c line 63
static void find_free_handle(struct handleid *id, signed int type);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// forked
// file utils.c line 122
void forked(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputc
// file /usr/include/stdio.h line 573
extern signed int fputc(signed int, struct _IO_FILE *);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 213
extern signed int fstat(signed int, struct stat *);
// ftruncate
// file /usr/include/unistd.h line 1016
extern signed int ftruncate(signed int, signed long int);
// futimes
// file /usr/include/x86_64-linux-gnu/sys/time.h line 147
extern signed int futimes(signed int, struct timeval *);
// get16
// file putword.h line 85
static inline unsigned short int get16(const void *where);
// get32
// file putword.h line 102
static inline unsigned int get32(const void *where);
// get64
// file putword.h line 119
static inline unsigned long int get64(const void *where);
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getgrgid
// file /usr/include/grp.h line 104
extern struct group * getgrgid(unsigned int);
// getgrnam
// file /usr/include/grp.h line 110
extern struct group * getgrnam(const char *);
// getopt_long
// file ./getopt.h line 140
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getpwuid
// file /usr/include/pwd.h line 110
extern struct passwd * getpwuid(unsigned int);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// gmtime_r
// file /usr/include/time.h line 249
extern struct tm * gmtime_r(const signed long int *, struct tm *);
// handles_equal
// file serialize.c line 101
static inline signed int handles_equal(struct handleid *h1, struct handleid *h2);
// help
// file sftpserver.c line 108
static void help(void);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// iconv
// file /usr/include/iconv.h line 42
extern unsigned long int iconv(void *, char ** restrict , unsigned long int *, char ** restrict , unsigned long int *);
// iconv_close
// file /usr/include/iconv.h line 51
extern signed int iconv_close(void *);
// iconv_open
// file /usr/include/iconv.h line 37
extern void * iconv_open(const char *, const char *);
// link
// file /usr/include/unistd.h line 790
extern signed int link(const char *, const char *);
// localtime_r
// file /usr/include/time.h line 254
extern struct tm * localtime_r(const signed long int *, struct tm *);
// lseek
// file /usr/include/unistd.h line 334
extern signed long int lseek(signed int, signed long int, signed int);
// lstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 262
extern signed int lstat(const char *, struct stat *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mbsrtowcs
// file /usr/include/wchar.h line 408
extern unsigned long int mbsrtowcs(signed int *, const char ** restrict , unsigned long int, struct anonymous_1 *);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// name_chmod
// file stat.c line 455
static signed int name_chmod(const void *what, unsigned int mode);
// name_chown
// file stat.c line 446
static signed int name_chown(const void *what, unsigned int uid, unsigned int gid);
// name_lstat
// file stat.c line 464
static signed int name_lstat(const void *what, struct stat *sb);
// name_truncate
// file stat.c line 436
static signed int name_truncate(const void *what, signed long int size);
// name_utimes
// file stat.c line 473
static signed int name_utimes(const void *what, struct timeval *tv);
// nl_langinfo
// file /usr/include/langinfo.h line 583
extern char * nl_langinfo(signed int);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendebug
// file debug.c line 42
static void opendebug(void);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// prctl
// file /usr/include/x86_64-linux-gnu/sys/prctl.h line 27
extern signed int prctl(signed int, ...);
// pread
// file /usr/include/unistd.h line 376
extern signed long int pread(signed int, void *, unsigned long int, signed long int);
// process_path
// file realpath.c line 75
static char * process_path(struct allocator *a, char *result, unsigned long int *nresultp, const char *path, unsigned int flags);
// process_sftpjob
// file sftpserver.c line 346
static void process_sftpjob(void *jv, void *wdv, struct allocator *a);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_3 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_3 *, const union anonymous_5 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_3 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_3 *, union anonymous *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous_5 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// put16
// file putword.h line 36
static inline void put16(void *where, unsigned short int u);
// put32
// file putword.h line 52
static inline void put32(void *where, unsigned int u);
// put64
// file putword.h line 70
static inline void put64(void *where, unsigned long int u);
// pwrite
// file /usr/include/unistd.h line 384
extern signed long int pwrite(signed int, const void *, unsigned long int, signed long int);
// queue_add
// file queue.h line 64
void queue_add(struct queue *q, void *job);
// queue_destroy
// file queue.h line 70
void queue_destroy(struct queue *q);
// queue_init
// file queue.h line 53
void queue_init(struct queue **qr, struct queuedetails *details, signed int nthreads);
// queue_serializable_job
// file serialize.h line 30
void queue_serializable_job(struct sftpjob *job);
// queue_thread
// file queue.c line 73
static void * queue_thread(void *vq);
// ranges_overlap
// file serialize.c line 111
static signed int ranges_overlap(struct sqnode *a, struct sqnode *b);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// readlink
// file /usr/include/unistd.h line 809
extern signed long int readlink(const char *, char *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// rename
// file /usr/include/stdio.h line 180
extern signed int rename(const char *, const char *);
// reorderable
// file serialize.c line 134
static signed int reorderable(struct sqnode *q1, struct sqnode *q2, unsigned int flags);
// rmdir
// file /usr/include/unistd.h line 835
extern signed int rmdir(const char *);
// serialize
// file serialize.h line 38
void serialize(struct sftpjob *job);
// serialize_remove_job
// file serialize.h line 45
void serialize_remove_job(struct sftpjob *job);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// sftp__xmalloc
// file utils.h line 50
void * sftp__xmalloc(unsigned long int n);
// sftp__xrealloc
// file utils.h line 70
void * sftp__xrealloc(void *ptr, unsigned long int n);
// sftp_alloc
// file alloc.c line 89
void * sftp_alloc(struct allocator *a, unsigned long int n);
// sftp_alloc_destroy
// file alloc.h line 79
void sftp_alloc_destroy(struct allocator *a);
// sftp_alloc_init
// file alloc.h line 46
struct allocator * sftp_alloc_init(struct allocator *a);
// sftp_alloc_more
// file alloc.c line 121
void * sftp_alloc_more(struct allocator *a, void *ptr, unsigned long int oldn, unsigned long int newn);
// sftp_debug_hexdump
// file debug.h line 40
void sftp_debug_hexdump(const void *ptr, unsigned long int n);
// sftp_debug_printf
// file debug.h line 48
void sftp_debug_printf(const char *fmt, ...);
// sftp_dirname
// file utils.h line 174
const char * sftp_dirname(struct allocator *a, const char *path);
// sftp_do_readlink
// file utils.h line 120
char * sftp_do_readlink(struct allocator *a, const char *path);
// sftp_find_realpath
// file utils.h line 148
char * sftp_find_realpath(struct allocator *a, const char *path, unsigned int flags);
// sftp_format_attr
// file stat.h line 38
const char * sftp_format_attr(struct allocator *a, struct sftpattr *attrs, signed int thisyear, unsigned long int flags);
// sftp_generic_open
// file sftpserver.h line 303
unsigned int sftp_generic_open(struct sftpjob *job, const char *path, unsigned int desired_access, unsigned int flags, struct sftpattr *attrs);
// sftp_getcwd
// file utils.h line 167
char * sftp_getcwd(struct allocator *a);
// sftp_gid2name
// file users.c line 48
char * sftp_gid2name(struct allocator *a, unsigned int gid);
// sftp_handle_close
// file handle.c line 137
unsigned int sftp_handle_close(struct handleid *id);
// sftp_handle_flags
// file handle.c line 168
unsigned int sftp_handle_flags(struct handleid *id);
// sftp_handle_get_dir
// file handle.c line 119
unsigned int sftp_handle_get_dir(struct handleid *id, struct __dirstream **dp, const char **pathp);
// sftp_handle_get_fd
// file handle.c line 101
unsigned int sftp_handle_get_fd(struct handleid *id, signed int *fd, unsigned int *flagsp);
// sftp_handle_new_dir
// file handle.c line 93
void sftp_handle_new_dir(struct handleid *id, struct __dirstream *dp, const char *path);
// sftp_handle_new_file
// file handle.c line 83
void sftp_handle_new_file(struct handleid *id, signed int fd, const char *path, unsigned int flags);
// sftp_iconv
// file charset.c line 46
signed int sftp_iconv(struct allocator *a, void *cd, char **sp);
// sftp_init
// file sftpserver.c line 141
static unsigned int sftp_init(struct sftpjob *job);
// sftp_mbs2wcs
// file charset.c line 31
signed int * sftp_mbs2wcs(const char *s);
// sftp_name2gid
// file users.c line 74
unsigned int sftp_name2gid(const char *name);
// sftp_name2uid
// file users.c line 61
unsigned int sftp_name2uid(const char *name);
// sftp_normalize_ownergroup
// file stat.h line 67
unsigned int sftp_normalize_ownergroup(struct allocator *a, struct sftpattr *attrs);
// sftp_parse_handle
// file parse.c line 97
unsigned int sftp_parse_handle(struct sftpjob *job, struct handleid *id);
// sftp_parse_path
// file parse.c line 89
unsigned int sftp_parse_path(struct sftpjob *job, char **strp);
// sftp_parse_string
// file parse.c line 67
unsigned int sftp_parse_string(struct sftpjob *job, char **strp, unsigned long int *lenp);
// sftp_parse_uint16
// file parse.c line 40
unsigned int sftp_parse_uint16(struct sftpjob *job, unsigned short int *ur);
// sftp_parse_uint32
// file parse.h line 45
unsigned int sftp_parse_uint32(struct sftpjob *job, unsigned int *ur);
// sftp_parse_uint64
// file parse.c line 58
unsigned int sftp_parse_uint64(struct sftpjob *job, unsigned long int *ur);
// sftp_parse_uint8
// file parse.c line 32
unsigned int sftp_parse_uint8(struct sftpjob *job, unsigned char *ur);
// sftp_send_begin
// file send.h line 39
void sftp_send_begin(struct worker *w);
// sftp_send_bytes
// file send.c line 124
void sftp_send_bytes(struct worker *w, const void *bytes, unsigned long int n);
// sftp_send_end
// file send.h line 50
void sftp_send_end(struct worker *w);
// sftp_send_errno_status
// file status.c line 131
void sftp_send_errno_status(struct sftpjob *job);
// sftp_send_handle
// file send.c line 141
void sftp_send_handle(struct worker *w, struct handleid *id);
// sftp_send_need
// file send.c line 62
void sftp_send_need(struct worker *w, unsigned long int n);
// sftp_send_path
// file send.c line 135
void sftp_send_path(struct sftpjob *job, struct worker *w, const char *path);
// sftp_send_status
// file sftpserver.h line 60
void sftp_send_status(struct sftpjob *job, unsigned int status, const char *msg);
// sftp_send_string
// file send.h line 93
void sftp_send_string(struct worker *w, const char *s);
// sftp_send_sub_begin
// file send.h line 108
unsigned long int sftp_send_sub_begin(struct worker *w);
// sftp_send_sub_end
// file send.h line 114
void sftp_send_sub_end(struct worker *w, unsigned long int offset);
// sftp_send_uint16
// file send.h line 62
void sftp_send_uint16(struct worker *w, unsigned short int u);
// sftp_send_uint32
// file send.h line 68
void sftp_send_uint32(struct worker *w, unsigned int u);
// sftp_send_uint64
// file send.h line 74
void sftp_send_uint64(struct worker *w, unsigned long int u);
// sftp_send_uint8
// file send.h line 56
void sftp_send_uint8(struct worker *w, signed int n);
// sftp_service
// file sftpserver.c line 630
static void sftp_service(void);
// sftp_set_fstatus
// file stat.h line 89
unsigned int sftp_set_fstatus(struct allocator *a, signed int fd, struct sftpattr *attrsp, const char **whyp);
// sftp_set_status
// file stat.h line 77
unsigned int sftp_set_status(struct allocator *a, const char *path, struct sftpattr *attrsp, const char **whyp);
// sftp_stat_to_attrs
// file stat.h line 109
void sftp_stat_to_attrs(struct allocator *a, struct stat *sb, struct sftpattr *attrs, unsigned int flags, const char *path);
// sftp_uid2name
// file users.c line 35
char * sftp_uid2name(struct allocator *a, unsigned int uid);
// sftp_v345_realpath
// file v3.c line 448
unsigned int sftp_v345_realpath(struct sftpjob *job);
// sftp_v345_symlink
// file v3.c line 283
unsigned int sftp_v345_symlink(struct sftpjob *job);
// sftp_v34_open
// file v3.c line 591
unsigned int sftp_v34_open(struct sftpjob *job);
// sftp_v34_rename
// file v3.c line 228
unsigned int sftp_v34_rename(struct sftpjob *job);
// sftp_v3_encode
// file sftpserver.h line 187
signed int sftp_v3_encode(struct sftpjob *job, char **path);
// sftp_v3_fstat
// file v3.c line 507
static unsigned int sftp_v3_fstat(struct sftpjob *job);
// sftp_v3_lstat
// file v3.c line 489
static unsigned int sftp_v3_lstat(struct sftpjob *job);
// sftp_v3_stat
// file v3.c line 498
static unsigned int sftp_v3_stat(struct sftpjob *job);
// sftp_v3_stat_core
// file v3.c line 470
static unsigned int sftp_v3_stat_core(struct sftpjob *job, signed int rc, struct stat *sb);
// sftp_v456_decode
// file v4.c line 40
unsigned int sftp_v456_decode(struct sftpjob *job, char **path);
// sftp_v456_encode
// file v4.c line 34
signed int sftp_v456_encode(struct sftpjob *job, char **path);
// sftp_v456_fstat
// file v4.c line 250
unsigned int sftp_v456_fstat(struct sftpjob *job);
// sftp_v456_lstat
// file v4.c line 232
unsigned int sftp_v456_lstat(struct sftpjob *job);
// sftp_v456_parseattrs
// file v4.c line 107
unsigned int sftp_v456_parseattrs(struct sftpjob *job, struct sftpattr *attrs);
// sftp_v456_sendattrs
// file v4.c line 49
void sftp_v456_sendattrs(struct sftpjob *job, struct sftpattr *attrs);
// sftp_v456_sendnames
// file v4.c line 200
void sftp_v456_sendnames(struct sftpjob *job, signed int nnames, struct sftpattr *names);
// sftp_v456_stat
// file v4.c line 241
unsigned int sftp_v456_stat(struct sftpjob *job);
// sftp_v456_stat_core
// file v4.c line 214
static unsigned int sftp_v456_stat_core(struct sftpjob *job, signed int rc, struct stat *sb, const char *path);
// sftp_v56_open
// file v5.c line 39
unsigned int sftp_v56_open(struct sftpjob *job);
// sftp_v56_rename
// file v5.c line 316
unsigned int sftp_v56_rename(struct sftpjob *job);
// sftp_v6_link
// file v6.c line 112
unsigned int sftp_v6_link(struct sftpjob *job);
// sftp_v6_realpath
// file v6.c line 36
unsigned int sftp_v6_realpath(struct sftpjob *job);
// sftp_v6_version_select
// file v6.c line 142
unsigned int sftp_v6_version_select(struct sftpjob *job);
// sftp_vany_already_init
// file v3.c line 188
unsigned int sftp_vany_already_init(struct sftpjob *job);
// sftp_vany_close
// file v3.c line 440
unsigned int sftp_vany_close(struct sftpjob *job);
// sftp_vany_extended
// file sftpserver.h line 148
unsigned int sftp_vany_extended(struct sftpjob *job);
// sftp_vany_fsetstat
// file v3.c line 536
unsigned int sftp_vany_fsetstat(struct sftpjob *job);
// sftp_vany_mkdir
// file v3.c line 555
unsigned int sftp_vany_mkdir(struct sftpjob *job);
// sftp_vany_opendir
// file v3.c line 366
unsigned int sftp_vany_opendir(struct sftpjob *job);
// sftp_vany_posix_rename
// file v3.c line 716
unsigned int sftp_vany_posix_rename(struct sftpjob *job);
// sftp_vany_read
// file v3.c line 639
unsigned int sftp_vany_read(struct sftpjob *job);
// sftp_vany_readdir
// file v3.c line 385
unsigned int sftp_vany_readdir(struct sftpjob *job);
// sftp_vany_readlink
// file v3.c line 343
unsigned int sftp_vany_readlink(struct sftpjob *job);
// sftp_vany_remove
// file v3.c line 193
unsigned int sftp_vany_remove(struct sftpjob *job);
// sftp_vany_rmdir
// file v3.c line 212
unsigned int sftp_vany_rmdir(struct sftpjob *job);
// sftp_vany_setstat
// file v3.c line 520
unsigned int sftp_vany_setstat(struct sftpjob *job);
// sftp_vany_space_available
// file sftpserver.h line 311
unsigned int sftp_vany_space_available(struct sftpjob *job);
// sftp_vany_statfs
// file v3.c line 730
unsigned int sftp_vany_statfs(struct sftpjob *job);
// sftp_vany_text_seek
// file sftpserver.h line 293
unsigned int sftp_vany_text_seek(struct sftpjob *job);
// sftp_vany_write
// file v3.c line 681
unsigned int sftp_vany_write(struct sftpjob *job);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// status_to_string
// file status.c line 32
const char * status_to_string(unsigned int status);
// statvfs
// file /usr/include/x86_64-linux-gnu/sys/statvfs.h line 51
extern signed int statvfs(const char *, struct statvfs *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strcspn
// file /usr/include/string.h line 284
extern unsigned long int strcspn(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// symlink
// file /usr/include/unistd.h line 803
extern signed int symlink(const char *, const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// truncate
// file /usr/include/unistd.h line 993
extern signed int truncate(const char *, signed long int);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// utimes
// file /usr/include/x86_64-linux-gnu/sys/time.h line 138
extern signed int utimes(const char *, struct timeval *);
// v3_decode
// file v3.c line 58
static unsigned int v3_decode(struct sftpjob *job, char **path);
// v3_parseattrs
// file v3.c line 128
static unsigned int v3_parseattrs(struct sftpjob *job, struct sftpattr *attrs);
// v3_sendattrs
// file v3.c line 83
static void v3_sendattrs(struct sftpjob *job, struct sftpattr *attrs);
// v3_sendnames
// file v3.c line 65
static void v3_sendnames(struct sftpjob *job, signed int nnames, struct sftpattr *names);
// version
// file sftpserver.c line 130
static void version(void);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsyslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 200
extern void vsyslog(signed int, const char *, void **);
// worker_cleanup
// file sftpserver.c line 328
static void worker_cleanup(void *wdv);
// worker_init
// file sftpserver.c line 309
static void * worker_init(void);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// xcalloc
// file utils.h line 59
void * xcalloc(unsigned long int n, unsigned long int size);
// xclose
// file xfns.c line 30
void xclose(signed int fd);
// xdup2
// file xfns.c line 35
void xdup2(signed int fd, signed int newfd);
// xfork
// file utils.c line 126
signed int xfork(void);
// xpipe
// file xfns.c line 40
void xpipe(signed int *pfd);
// xprintf
// file xfns.h line 55
signed int xprintf(const char *fmt, ...);
// xrecalloc
// file utils.h line 82
void * xrecalloc(void *ptr, unsigned long int n, unsigned long int size);
// xstrdup
// file utils.h line 90
char * xstrdup(const char *s);

union anonymous_0
{
  // __wch
  unsigned int __wch;
  // __wchb
  char __wchb[4l];
};

struct anonymous_1
{
  // __count
  signed int __count;
  // __value
  union anonymous_0 __value;
};

struct anonymous_4
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

union anonymous_5
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_2
{
  // fd
  signed int fd;
  // dir
  struct __dirstream *dir;
};

union anonymous_3
{
  // __data
  struct anonymous_4 __data;
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

union anonymous
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct anonymous_6
{
  // errno_value
  signed int errno_value;
  // status_value
  unsigned int status_value;
};

struct anonymous_7
{
  // bit
  unsigned int bit;
  // description
  const char *description;
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

struct allocator
{
  // chunks
  struct chunk *chunks;
};

struct chunk
{
  // next
  struct chunk *next;
  // ptr
  union block *ptr;
  // left
  unsigned long int left;
  // spare
  unsigned long int spare;
};

union block
{
  // i
  signed int i;
  // l
  signed long int l;
  // f
  float f;
  // d
  double d;
  // vp
  void *vp;
  // ip
  double *ip;
  // fnp
  signed int (*fnp)(void);
  // c
  struct chunk c;
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

struct group
{
  // gr_name
  char *gr_name;
  // gr_passwd
  char *gr_passwd;
  // gr_gid
  unsigned int gr_gid;
  // gr_mem
  char **gr_mem;
};

struct handle
{
  // type
  signed int type;
  // tag
  unsigned int tag;
  // u
  union anonymous_2 u;
  // path
  char *path;
  // flags
  unsigned int flags;
};

struct handleid
{
  // id
  unsigned int id;
  // tag
  unsigned int tag;
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

struct queue
{
  // jobs
  struct queuejob *jobs;
  // jobstail
  struct queuejob **jobstail;
  // m
  union anonymous m;
  // c
  union anonymous_3 c;
  // details
  struct queuedetails *details;
  // nthreads
  signed int nthreads;
  // threads
  unsigned long int *threads;
  // join
  signed int join;
};

struct queuedetails
{
  // init
  void * (*init)();
  // worker
  void (*worker)(void *, void *, struct allocator *);
  // cleanup
  void (*cleanup)(void *);
};

struct queuejob
{
  // next
  struct queuejob *next;
  // job
  void *job;
};

struct sftp_set_status_callbacks
{
  // do_truncate
  signed int (*do_truncate)(const void *, signed long int);
  // do_chown
  signed int (*do_chown)(const void *, unsigned int, unsigned int);
  // do_chmod
  signed int (*do_chmod)(const void *, unsigned int);
  // do_stat
  signed int (*do_stat)(const void *, struct stat *);
  // do_utimes
  signed int (*do_utimes)(const void *, struct timeval *);
};

struct sftptime
{
  // seconds
  signed long int seconds;
  // nanoseconds
  unsigned int nanoseconds;
};

struct sftpattr
{
  // valid
  unsigned int valid;
  // type
  unsigned char type;
  // size
  unsigned long int size;
  // allocation_size
  unsigned long int allocation_size;
  // uid
  unsigned int uid;
  // gid
  unsigned int gid;
  // owner
  char *owner;
  // group
  char *group;
  // permissions
  unsigned int permissions;
  // atime
  struct sftptime atime;
  // createtime
  struct sftptime createtime;
  // mtime
  struct sftptime mtime;
  // ctime
  struct sftptime ctime;
  // acl
  char *acl;
  // attrib_bits
  unsigned int attrib_bits;
  // attrib_bits_valid
  unsigned int attrib_bits_valid;
  // text_hint
  unsigned char text_hint;
  // mime_type
  char *mime_type;
  // link_count
  unsigned int link_count;
  // untranslated_name
  char *untranslated_name;
  // name
  const char *name;
  // longname
  const char *longname;
  // wname
  const signed int *wname;
  // target
  const char *target;
};

struct sftpcmd
{
  // type
  unsigned char type;
  // handler
  unsigned int (*handler)(struct sftpjob *);
};

struct sftpextension
{
  // name
  const char *name;
  // handler
  unsigned int (*handler)(struct sftpjob *);
};

struct sftpjob
{
  // len
  unsigned long int len;
  // data
  unsigned char *data;
  // left
  unsigned long int left;
  // ptr
  const unsigned char *ptr;
  // a
  struct allocator *a;
  // id
  unsigned int id;
  // worker
  struct worker *worker;
};

struct sftpprotocol
{
  // ncommands
  signed int ncommands;
  // commands
  struct sftpcmd *commands;
  // version
  signed int version;
  // attrmask
  unsigned int attrmask;
  // maxstatus
  unsigned int maxstatus;
  // sendnames
  void (*sendnames)(struct sftpjob *, signed int, struct sftpattr *);
  // sendattrs
  void (*sendattrs)(struct sftpjob *, struct sftpattr *);
  // parseattrs
  unsigned int (*parseattrs)(struct sftpjob *, struct sftpattr *);
  // encode
  signed int (*encode)(struct sftpjob *, char **);
  // decode
  unsigned int (*decode)(struct sftpjob *, char **);
  // nextensions
  signed int nextensions;
  // extensions
  struct sftpextension *extensions;
};

struct sqnode
{
  // older
  struct sqnode *older;
  // job
  struct sftpjob *job;
  // hid
  struct handleid hid;
  // handleflags
  unsigned int handleflags;
  // offset
  unsigned long int offset;
  // len
  unsigned long int len;
  // type
  unsigned char type;
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

struct statvfs
{
  // f_bsize
  unsigned long int f_bsize;
  // f_frsize
  unsigned long int f_frsize;
  // f_blocks
  unsigned long int f_blocks;
  // f_bfree
  unsigned long int f_bfree;
  // f_bavail
  unsigned long int f_bavail;
  // f_files
  unsigned long int f_files;
  // f_ffree
  unsigned long int f_ffree;
  // f_favail
  unsigned long int f_favail;
  // f_fsid
  unsigned long int f_fsid;
  // f_flag
  unsigned long int f_flag;
  // f_namemax
  unsigned long int f_namemax;
  // __f_spare
  signed int __f_spare[6l];
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
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

struct worker
{
  // bufsize
  unsigned long int bufsize;
  // bufused
  unsigned long int bufused;
  // buffer
  unsigned char *buffer;
  // local_to_utf8
  void *local_to_utf8;
  // utf8_to_local
  void *utf8_to_local;
};


// attr_bits
// file stat.c line 117
static struct anonymous_7 attr_bits[12l] = { { .bit=(unsigned int)0x00000001, .description="ro" },
    { .bit=(unsigned int)0x00000002, .description="sys" },
    { .bit=(unsigned int)0x00000004, .description="hide" },
    { .bit=(unsigned int)0x00000008, .description="ci" },
    { .bit=(unsigned int)0x00000010, .description="arc" },
    { .bit=(unsigned int)0x00000020, .description="enc" },
    { .bit=(unsigned int)0x00000040, .description="comp" },
    { .bit=(unsigned int)0x00000080, .description="sp" },
    { .bit=(unsigned int)0x00000100, .description="app" },
    { .bit=(unsigned int)0x00000200, .description="imm" },
    { .bit=(unsigned int)0x00000400, .description="sync" },
    { .bit=(unsigned int)0x00000800, .description="trans" } };
// debugfp
// file debug.c line 35
static struct _IO_FILE *debugfp;
// errnotab
// file status.c line 113
static struct anonymous_6 errnotab[15l] = { { .errno_value=0, .status_value=(unsigned int)0 },
    { .errno_value=1, .status_value=(unsigned int)3 },
    { .errno_value=13, .status_value=(unsigned int)3 },
    { .errno_value=2, .status_value=(unsigned int)2 },
    { .errno_value=5, .status_value=(unsigned int)28 },
    { .errno_value=28, .status_value=(unsigned int)14 },
    { .errno_value=20, .status_value=(unsigned int)19 },
    { .errno_value=21, .status_value=(unsigned int)24 },
    { .errno_value=17, .status_value=(unsigned int)11 },
    { .errno_value=30, .status_value=(unsigned int)12 },
    { .errno_value=40, .status_value=(unsigned int)21 },
    { .errno_value=36, .status_value=(unsigned int)20 },
    { .errno_value=39, .status_value=(unsigned int)18 },
    { .errno_value=122, .status_value=(unsigned int)15 },
    { .errno_value=-1, .status_value=(unsigned int)4 } };
// exitfn
// file utils.c line 105
static void (*exitfn)(signed int);
// exitfn
// file utils.c line 105
static void (*exitfn)(signed int) = exit;
// fd_callbacks
// file stat.c line 540
static struct sftp_set_status_callbacks fd_callbacks;
// fd_callbacks
// file stat.c line 540
static struct sftp_set_status_callbacks fd_callbacks = { .do_truncate=fd_truncate, .do_chown=fd_chown, .do_chmod=fd_chmod,
    .do_stat=fd_stat, .do_utimes=fd_utimes };
// handles
// file handle.c line 48
static struct handle *handles;
// local_encoding
// file sftpserver.c line 75
static const char *local_encoding;
// log_syslog
// file utils.c line 35
signed int log_syslog;
// name_callbacks
// file stat.c line 478
static struct sftp_set_status_callbacks name_callbacks;
// name_callbacks
// file stat.c line 478
static struct sftp_set_status_callbacks name_callbacks = { .do_truncate=name_truncate, .do_chown=name_chown, .do_chmod=name_chmod,
    .do_stat=name_lstat, .do_utimes=name_utimes };
// newest
// file serialize.c line 88
static struct sqnode *newest;
// nhandles
// file handle.c line 51
static unsigned long int nhandles;
// optarg
// file ./getopt.h line 36
extern char *optarg;
// options
// file sftpserver.c line 89
static struct option options[6l] = { { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 },
    { .name="version", .has_arg=0, .flag=((signed int *)NULL), .val=86 },
    { .name="debug", .has_arg=0, .flag=((signed int *)NULL), .val=100 },
    { .name="debug-file", .has_arg=1, .flag=((signed int *)NULL), .val=68 },
    { .name="readonly", .has_arg=0, .flag=((signed int *)NULL), .val=82 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
// output_lock
// file send.c line 40
static union anonymous output_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// protocol
// file sftpserver.c line 84
struct sftpprotocol *protocol;
// sftp_preinit
// file sftpserver.c line 289
struct sftpprotocol sftp_preinit;
// sftppreinittab
// file sftpserver.c line 282
static struct sftpcmd sftppreinittab[1l];
// sftppreinittab
// file sftpserver.c line 282
static struct sftpcmd sftppreinittab[1l] = { { .type=(unsigned char)1, .handler=sftp_init } };
// sftp_preinit
// file sftpserver.c line 289
struct sftpprotocol sftp_preinit = { .ncommands=(signed int)(sizeof(struct sftpcmd [1l]) /*16ul*/  / sizeof(struct sftpcmd) /*16ul*/ ), .commands=sftppreinittab,
    .version=3, .attrmask=0xFFFFFFFF,
    .maxstatus=(unsigned int)8, .sendnames=((void (*)(struct sftpjob *, signed int, struct sftpattr *))NULL),
    .sendattrs=((void (*)(struct sftpjob *, struct sftpattr *))NULL),
    .parseattrs=((unsigned int (*)(struct sftpjob *, struct sftpattr *))NULL),
    .encode=sftp_v3_encode,
    .decode=((unsigned int (*)(struct sftpjob *, char **))NULL), .nextensions=0,
    .extensions=((struct sftpextension *)NULL) };
// protocol
// file sftpserver.c line 84
struct sftpprotocol *protocol = &sftp_preinit;
// readonly
// file readwrite.c line 21
signed int readonly;
// reverse_symlink
// file v3.c line 46
signed int reverse_symlink;
// sendtype
// file sftpserver.c line 85
const char sendtype[9l] = { 'r', 'e', 's', 'p', 'o', 'n', 's', 'e', 0 };
// sequence
// file handle.c line 54
static unsigned int sequence;
// sftp_debugging
// file debug.c line 39
signed int sftp_debugging;
// sftp_debugpath
// file debug.c line 37
const char *sftp_debugpath;
// sftp_handle_lock
// file handle.c line 57
static union anonymous sftp_handle_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// sftp_v3
// file v3.c line 783
struct sftpprotocol sftp_v3;
// sftpv3tab
// file v3.c line 754
static struct sftpcmd sftpv3tab[20l];
// sftpv3tab
// file v3.c line 754
static struct sftpcmd sftpv3tab[20l] = { { .type=(unsigned char)1, .handler=sftp_vany_already_init },
    { .type=(unsigned char)3, .handler=sftp_v34_open },
    { .type=(unsigned char)4, .handler=sftp_vany_close },
    { .type=(unsigned char)5, .handler=sftp_vany_read },
    { .type=(unsigned char)6, .handler=sftp_vany_write },
    { .type=(unsigned char)7, .handler=sftp_v3_lstat },
    { .type=(unsigned char)8, .handler=sftp_v3_fstat },
    { .type=(unsigned char)9, .handler=sftp_vany_setstat },
    { .type=(unsigned char)10, .handler=sftp_vany_fsetstat },
    { .type=(unsigned char)11, .handler=sftp_vany_opendir },
    { .type=(unsigned char)12, .handler=sftp_vany_readdir },
    { .type=(unsigned char)13, .handler=sftp_vany_remove },
    { .type=(unsigned char)14, .handler=sftp_vany_mkdir },
    { .type=(unsigned char)15, .handler=sftp_vany_rmdir },
    { .type=(unsigned char)16, .handler=sftp_v345_realpath },
    { .type=(unsigned char)17, .handler=sftp_v3_stat },
    { .type=(unsigned char)18, .handler=sftp_v34_rename },
    { .type=(unsigned char)19, .handler=sftp_vany_readlink },
    { .type=(unsigned char)20, .handler=sftp_v345_symlink },
    { .type=(unsigned char)200, .handler=sftp_vany_extended } };
// v3_extensions
// file v3.c line 777
static struct sftpextension v3_extensions[3l];
// v3_extensions
// file v3.c line 777
static struct sftpextension v3_extensions[3l] = { { .name="posix-rename@openssh.org", .handler=sftp_vany_posix_rename },
    { .name="space-available", .handler=sftp_vany_space_available },
    { .name="statfs@openssh.org", .handler=sftp_vany_statfs } };
// sftp_v3
// file v3.c line 783
struct sftpprotocol sftp_v3 = { .ncommands=(signed int)(sizeof(struct sftpcmd [20l]) /*320ul*/  / sizeof(struct sftpcmd) /*16ul*/ ), .commands=sftpv3tab,
    .version=3, .attrmask=(unsigned int)(0x00000001 | 0x00000004 | 0x00000008 | 0x00000020 | 0x00000002), .maxstatus=(unsigned int)8,
    .sendnames=v3_sendnames, .sendattrs=v3_sendattrs,
    .parseattrs=v3_parseattrs, .encode=sftp_v3_encode,
    .decode=v3_decode, .nextensions=(signed int)(sizeof(struct sftpextension [3l]) /*48ul*/  / sizeof(struct sftpextension) /*16ul*/ ),
    .extensions=v3_extensions };
// sftp_v4
// file v4.c line 293
struct sftpprotocol sftp_v4;
// sftpv4tab
// file v4.c line 263
static struct sftpcmd sftpv4tab[20l];
// sftpv4tab
// file v4.c line 263
static struct sftpcmd sftpv4tab[20l] = { { .type=(unsigned char)1, .handler=sftp_vany_already_init },
    { .type=(unsigned char)3, .handler=sftp_v34_open },
    { .type=(unsigned char)4, .handler=sftp_vany_close },
    { .type=(unsigned char)5, .handler=sftp_vany_read },
    { .type=(unsigned char)6, .handler=sftp_vany_write },
    { .type=(unsigned char)7, .handler=sftp_v456_lstat },
    { .type=(unsigned char)8, .handler=sftp_v456_fstat },
    { .type=(unsigned char)9, .handler=sftp_vany_setstat },
    { .type=(unsigned char)10, .handler=sftp_vany_fsetstat },
    { .type=(unsigned char)11, .handler=sftp_vany_opendir },
    { .type=(unsigned char)12, .handler=sftp_vany_readdir },
    { .type=(unsigned char)13, .handler=sftp_vany_remove },
    { .type=(unsigned char)14, .handler=sftp_vany_mkdir },
    { .type=(unsigned char)15, .handler=sftp_vany_rmdir },
    { .type=(unsigned char)16, .handler=sftp_v345_realpath },
    { .type=(unsigned char)17, .handler=sftp_v456_stat },
    { .type=(unsigned char)18, .handler=sftp_v34_rename },
    { .type=(unsigned char)19, .handler=sftp_vany_readlink },
    { .type=(unsigned char)20, .handler=sftp_v345_symlink },
    { .type=(unsigned char)200, .handler=sftp_vany_extended } };
// v4_extensions
// file v4.c line 286
static struct sftpextension v4_extensions[4l];
// v4_extensions
// file v4.c line 286
static struct sftpextension v4_extensions[4l] = { { .name="posix-rename@openssh.org", .handler=sftp_vany_posix_rename },
    { .name="space-available", .handler=sftp_vany_space_available },
    { .name="statfs@openssh.org", .handler=sftp_vany_statfs },
    { .name="text-seek", .handler=sftp_vany_text_seek } };
// sftp_v4
// file v4.c line 293
struct sftpprotocol sftp_v4 = { .ncommands=(signed int)(sizeof(struct sftpcmd [20l]) /*320ul*/  / sizeof(struct sftpcmd) /*16ul*/ ), .commands=sftpv4tab,
    .version=4, .attrmask=(unsigned int)(0x00000001 | 0x00000004 | 0x00000008 | 0x00000020 | 0x00000080 | 0x00000100), .maxstatus=(unsigned int)13,
    .sendnames=sftp_v456_sendnames, .sendattrs=sftp_v456_sendattrs,
    .parseattrs=sftp_v456_parseattrs, .encode=sftp_v456_encode,
    .decode=sftp_v456_decode, .nextensions=(signed int)(sizeof(struct sftpextension [4l]) /*64ul*/  / sizeof(struct sftpextension) /*16ul*/ ),
    .extensions=v4_extensions };
// sftp_v5
// file v5.c line 486
struct sftpprotocol sftp_v5;
// sftp_v5_extensions
// file v5.c line 479
static struct sftpextension sftp_v5_extensions[4l];
// sftp_v5_extensions
// file v5.c line 479
static struct sftpextension sftp_v5_extensions[4l] = { { .name="posix-rename@openssh.org", .handler=sftp_vany_posix_rename },
    { .name="space-available", .handler=sftp_vany_space_available },
    { .name="statfs@openssh.org", .handler=sftp_vany_statfs },
    { .name="text-seek", .handler=sftp_vany_text_seek } };
// sftpv5tab
// file v5.c line 456
static struct sftpcmd sftpv5tab[20l];
// sftpv5tab
// file v5.c line 456
static struct sftpcmd sftpv5tab[20l] = { { .type=(unsigned char)1, .handler=sftp_vany_already_init },
    { .type=(unsigned char)3, .handler=sftp_v56_open },
    { .type=(unsigned char)4, .handler=sftp_vany_close },
    { .type=(unsigned char)5, .handler=sftp_vany_read },
    { .type=(unsigned char)6, .handler=sftp_vany_write },
    { .type=(unsigned char)7, .handler=sftp_v456_lstat },
    { .type=(unsigned char)8, .handler=sftp_v456_fstat },
    { .type=(unsigned char)9, .handler=sftp_vany_setstat },
    { .type=(unsigned char)10, .handler=sftp_vany_fsetstat },
    { .type=(unsigned char)11, .handler=sftp_vany_opendir },
    { .type=(unsigned char)12, .handler=sftp_vany_readdir },
    { .type=(unsigned char)13, .handler=sftp_vany_remove },
    { .type=(unsigned char)14, .handler=sftp_vany_mkdir },
    { .type=(unsigned char)15, .handler=sftp_vany_rmdir },
    { .type=(unsigned char)16, .handler=sftp_v345_realpath },
    { .type=(unsigned char)17, .handler=sftp_v456_stat },
    { .type=(unsigned char)18, .handler=sftp_v56_rename },
    { .type=(unsigned char)19, .handler=sftp_vany_readlink },
    { .type=(unsigned char)20, .handler=sftp_v345_symlink },
    { .type=(unsigned char)200, .handler=sftp_vany_extended } };
// sftp_v5
// file v5.c line 486
struct sftpprotocol sftp_v5 = { .ncommands=(signed int)(sizeof(struct sftpcmd [20l]) /*320ul*/  / sizeof(struct sftpcmd) /*16ul*/ ), .commands=sftpv5tab,
    .version=5, .attrmask=(unsigned int)(0x00000001 | 0x00000004 | 0x00000008 | 0x00000020 | 0x00000080 | 0x00000100 | 0x00000200), .maxstatus=(unsigned int)17,
    .sendnames=sftp_v456_sendnames, .sendattrs=sftp_v456_sendattrs,
    .parseattrs=sftp_v456_parseattrs, .encode=sftp_v456_encode,
    .decode=sftp_v456_decode, .nextensions=(signed int)(sizeof(struct sftpextension [4l]) /*64ul*/  / sizeof(struct sftpextension) /*16ul*/ ),
    .extensions=sftp_v5_extensions };
// sftp_v6
// file v6.c line 194
struct sftpprotocol sftp_v6;
// sftp_v6_extensions
// file v6.c line 186
static struct sftpextension sftp_v6_extensions[5l];
// sftp_v6_extensions
// file v6.c line 186
static struct sftpextension sftp_v6_extensions[5l] = { { .name="posix-rename@openssh.org", .handler=sftp_vany_posix_rename },
    { .name="space-available", .handler=sftp_vany_space_available },
    { .name="statfs@openssh.org", .handler=sftp_vany_statfs },
    { .name="text-seek", .handler=sftp_vany_text_seek },
    { .name="version-select", .handler=sftp_v6_version_select } };
// sftpv6tab
// file v6.c line 161
static struct sftpcmd sftpv6tab[20l];
// sftpv6tab
// file v6.c line 161
static struct sftpcmd sftpv6tab[20l] = { { .type=(unsigned char)1, .handler=sftp_vany_already_init },
    { .type=(unsigned char)3, .handler=sftp_v56_open },
    { .type=(unsigned char)4, .handler=sftp_vany_close },
    { .type=(unsigned char)5, .handler=sftp_vany_read },
    { .type=(unsigned char)6, .handler=sftp_vany_write },
    { .type=(unsigned char)7, .handler=sftp_v456_lstat },
    { .type=(unsigned char)8, .handler=sftp_v456_fstat },
    { .type=(unsigned char)9, .handler=sftp_vany_setstat },
    { .type=(unsigned char)10, .handler=sftp_vany_fsetstat },
    { .type=(unsigned char)11, .handler=sftp_vany_opendir },
    { .type=(unsigned char)12, .handler=sftp_vany_readdir },
    { .type=(unsigned char)13, .handler=sftp_vany_remove },
    { .type=(unsigned char)14, .handler=sftp_vany_mkdir },
    { .type=(unsigned char)15, .handler=sftp_vany_rmdir },
    { .type=(unsigned char)16, .handler=sftp_v6_realpath },
    { .type=(unsigned char)17, .handler=sftp_v456_stat },
    { .type=(unsigned char)18, .handler=sftp_v56_rename },
    { .type=(unsigned char)19, .handler=sftp_vany_readlink },
    { .type=(unsigned char)21, .handler=sftp_v6_link },
    { .type=(unsigned char)200, .handler=sftp_vany_extended } };
// sftp_v6
// file v6.c line 194
struct sftpprotocol sftp_v6 = { .ncommands=(signed int)(sizeof(struct sftpcmd [20l]) /*320ul*/  / sizeof(struct sftpcmd) /*16ul*/ ), .commands=sftpv6tab,
    .version=6, .attrmask=(unsigned int)(0x00000001 | 0x00000004 | 0x00000008 | 0x00008000 | 0x00000020 | 0x00000080 | 0x00000100 | 0x00000200 | 0x00002000), .maxstatus=(unsigned int)31,
    .sendnames=sftp_v456_sendnames, .sendattrs=sftp_v456_sendattrs,
    .parseattrs=sftp_v456_parseattrs, .encode=sftp_v456_encode,
    .decode=sftp_v456_decode, .nextensions=(signed int)(sizeof(struct sftpextension [5l]) /*80ul*/  / sizeof(struct sftpextension) /*16ul*/ ),
    .extensions=sftp_v6_extensions };
// sftpout
// file send.c line 42
signed int sftpout = 1;
// sq_cond
// file serialize.c line 94
static union anonymous_3 sq_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// sq_mutex
// file serialize.c line 91
static union anonymous sq_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// user_lock
// file users.c line 33
static union anonymous user_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// workqueue
// file globals.c line 25
struct queue *workqueue = ((struct queue *)NULL);
// workqueue_details
// file sftpserver.c line 78
static struct queuedetails workqueue_details;
// workqueue_details
// file sftpserver.c line 78
static struct queuedetails workqueue_details = { .init=(void * (*)())worker_init, .worker=process_sftpjob, .cleanup=worker_cleanup };

// append
// file utils.c line 159
char * append(struct allocator *a, char *s, unsigned long int *ns, const char *t)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(t);
  char *return_value_appendn_2;
  return_value_appendn_2=appendn(a, s, ns, t, return_value_strlen_1);
  return return_value_appendn_2;
}

// appendn
// file utils.c line 136
char * appendn(struct allocator *a, char *s, unsigned long int *ns, const char *t, unsigned long int lt)
{
  unsigned long int ls;
  unsigned long int tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(s == ((char *)NULL)))
  {
    return_value_strlen_1=strlen(s);
    tmp_if_expr_2 = return_value_strlen_1;
  }

  else
    tmp_if_expr_2 = (unsigned long int)0;
  ls = tmp_if_expr_2;
  const unsigned long int need = lt + ls + (unsigned long int)1;
  unsigned long int tmp_if_expr_3;
  if(!(*ns >= need))
  {
    unsigned long int newsize;
    if(!(*ns == 0ul))
      tmp_if_expr_3 = *ns;

    else
      tmp_if_expr_3 = (unsigned long int)16;
    newsize = tmp_if_expr_3;
    for( ; !(newsize == 0ul) && !(newsize >= need); newsize = newsize * (unsigned long int)2)
      ;
    if(newsize == 0ul)
      fatal("appendn: out of memory (%zu, %zu)", ls, need);

    void *return_value_sftp_alloc_more_4;
    return_value_sftp_alloc_more_4=sftp_alloc_more(a, (void *)s, *ns, newsize);
    s = (char *)return_value_sftp_alloc_more_4;
    *ns = newsize;
  }

  else
    /* assertion s */
    assert(s != ((char *)NULL));
  memcpy((void *)(s + (signed long int)ls), (const void *)t, lt);
  s[(signed long int)(ls + lt)] = (char)0;
  return s;
}

// blocks
// file alloc.c line 85
static inline unsigned long int blocks(unsigned long int nbytes)
{
  return nbytes / sizeof(union block) /*32ul*/  + (unsigned long int)!(!(nbytes % sizeof(union block) /*32ul*/  != 0ul));
}

// do_read
// file utils.h line 35
signed int do_read(signed int fd, void *buffer, unsigned long int size)
{
  unsigned long int sofar = (unsigned long int)0;
  signed long int n;
  char *ptr = (char *)buffer;
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  while(!(sofar >= size))
  {
    n=read(fd, (void *)(ptr + (signed long int)sofar), size - sofar);
    if(n >= 1l)
      sofar = sofar + (unsigned long int)n;

    else
      if(n == 0l)
        return -1;

      else
      {
        return_value___errno_location_1=__errno_location();
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fatal("read error: %s", return_value_strerror_2);
      }
  }
  return 0;
}

// do_sftp_set_status
// file stat.c line 333
static unsigned int do_sftp_set_status(struct allocator *a, const void *what, struct sftpattr *attrsp, struct sftp_set_status_callbacks *cb, const char **whyp)
{
  struct timeval times[2l];
  struct stat current;
  struct sftpattr attrs = *attrsp;
  const char *why;
  if(whyp == ((const char **)NULL))
    whyp = &why;

  *whyp = ((const char *)NULL);
  if((1025u & attrs.valid) == 1025u && !(attrs.allocation_size >= attrs.size))
  {
    *whyp = "size exceeds allocation-size";
    return (unsigned int)23;
  }

  else
    if(!((10240u & attrs.valid) == 0u))
      return (unsigned int)23;

    else
      if(!((1455u & attrs.valid) == attrs.valid))
      {
        *whyp = "unsupported flags";
        return (unsigned int)8;
      }

      else
      {
        if(!((1u & attrs.valid) == 0u))
        {
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("...truncate to %lu", attrs.size);

          while((_Bool)0);
          signed int return_value;
          return_value=cb->do_truncate(what, (signed long int)attrs.size);
          if(!(return_value >= 0))
          {
            *whyp = "truncate";
            return (unsigned int)-2;
          }

        }

        sftp_normalize_ownergroup(a, &attrs);
        if(!((2u & attrs.valid) == 0u))
        {
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("...chown to %d/%d", attrs.uid, attrs.gid);

          while((_Bool)0);
          signed int return_value_1;
          return_value_1=cb->do_chown(what, attrs.uid, attrs.gid);
          if(!(return_value_1 >= 0))
          {
            *whyp = "chown";
            return (unsigned int)-2;
          }

        }

        if(!((4u & attrs.valid) == 0u))
        {
          const unsigned int mode = attrs.permissions & (unsigned int)07777;
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("...chmod to %#o", (unsigned int)mode);

          while((_Bool)0);
          signed int return_value_2;
          return_value_2=cb->do_chmod(what, mode);
          if(!(return_value_2 >= 0))
          {
            *whyp = "chmod";
            return (unsigned int)-2;
          }

        }

        if(!((40u & attrs.valid) == 0u))
        {
          signed int return_value_3;
          return_value_3=cb->do_stat(what, &current);
          if(!(return_value_3 >= 0))
          {
            if(!(sftp_debugging == 0))
              sftp_debug_printf("cannot stat");

            *whyp = "stat";
            return (unsigned int)-2;
          }

          memset((void *)times, 0, sizeof(struct timeval [2l]) /*32ul*/ );
          times[(signed long int)0].tv_sec = (attrs.valid & (unsigned int)0x00000008) != 0u ? (signed long int)attrs.atime.seconds : current.st_atim.tv_sec;
          times[(signed long int)1].tv_sec = (attrs.valid & (unsigned int)0x00000020) != 0u ? (signed long int)attrs.mtime.seconds : current.st_mtim.tv_sec;
          if(!(sftp_debugging == 0))
            sftp_debug_printf("...utimes to atime %lu.%06lu mtime %lu.%06lu", (unsigned long int)times[(signed long int)0].tv_sec, (unsigned long int)times[(signed long int)0].tv_usec, (unsigned long int)times[(signed long int)1].tv_sec, (unsigned long int)times[(signed long int)1].tv_usec);

          signed int return_value_4;
          return_value_4=cb->do_utimes(what, times);
          if(!(return_value_4 >= 0))
          {
            *whyp = "utimes";
            return (unsigned int)-2;
          }

        }

        return (unsigned int)0;
      }
}

// fatal
// file utils.h line 185
void fatal(const char *msg, ...)
{
  void **ap = (void **)&msg;
  if(!(log_syslog == 0))
    vsyslog(3, msg, ap);

  else
  {
    fprintf(stderr, "FATAL: ");
    vfprintf(stderr, msg, ap);
    fputc(10, stderr);
  }
  ap = ((void **)NULL);
  exitfn(-1);
}

// fd_chmod
// file stat.c line 517
static signed int fd_chmod(const void *what, unsigned int mode)
{
  signed int return_value_fchmod_1;
  return_value_fchmod_1=fchmod(*((const signed int *)what), mode);
  return return_value_fchmod_1;
}

// fd_chown
// file stat.c line 508
static signed int fd_chown(const void *what, unsigned int uid, unsigned int gid)
{
  signed int return_value_fchown_1;
  return_value_fchown_1=fchown(*((const signed int *)what), uid, gid);
  return return_value_fchown_1;
}

// fd_stat
// file stat.c line 526
static signed int fd_stat(const void *what, struct stat *sb)
{
  signed int return_value_fstat_1;
  return_value_fstat_1=fstat(*((const signed int *)what), sb);
  return return_value_fstat_1;
}

// fd_truncate
// file stat.c line 498
static signed int fd_truncate(const void *what, signed long int size)
{
  signed int return_value_ftruncate_1;
  return_value_ftruncate_1=ftruncate(*((const signed int *)what), size);
  return return_value_ftruncate_1;
}

// fd_utimes
// file stat.c line 535
static signed int fd_utimes(const void *what, struct timeval *tv)
{
  signed int return_value_futimes_1;
  return_value_futimes_1=futimes(*((const signed int *)what), tv);
  return return_value_futimes_1;
}

// find_free_handle
// file handle.c line 63
static void find_free_handle(struct handleid *id, signed int type)
{
  unsigned long int n = (unsigned long int)0;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(n >= nhandles))
      tmp_if_expr_1 = (handles + (signed long int)n)->tag != 0u ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    n = n + 1ul;
  }
  while((_Bool)1);
  if(n == nhandles && !(nhandles >= 128ul))
  {
    nhandles = nhandles != 0ul ? (unsigned long int)2 * nhandles : (unsigned long int)16;
    /* assertion nhandles != 0 */
    assert(nhandles != (unsigned long int)0);
    void *return_value_xrecalloc_2;
    return_value_xrecalloc_2=xrecalloc((void *)handles, nhandles, sizeof(struct handle) /*32ul*/ );
    handles = (struct handle *)return_value_xrecalloc_2;
    memset((void *)(handles + (signed long int)n), 0, (nhandles - n) * sizeof(struct handle) /*32ul*/ );
  }

  for( ; sequence == 0u; sequence = sequence + 1u)
    ;
  unsigned int tmp_post_3 = sequence;
  sequence = sequence + 1u;
  (handles + (signed long int)n)->tag = tmp_post_3;
  (handles + (signed long int)n)->type = type;
  id->id = (unsigned int)n;
  id->tag = (handles + (signed long int)n)->tag;
}

// forked
// file utils.c line 122
void forked(void)
{
  exitfn = _exit;
}

// get16
// file putword.h line 85
static inline unsigned short int get16(const void *where)
{
  unsigned short int r;
  asm("movw %[WHERE],%[R]\t\nxchg %h[R],%b[R]" : "=Q"(r) : "m"(*((const unsigned short int *)where)) : );
  return r;
}

// get32
// file putword.h line 102
static inline unsigned int get32(const void *where)
{
  unsigned int r;
  asm("movl %[WHERE],%[R]\n\tbswapl %[R]" : "=r"(r) : "m"(*((const unsigned int *)where)) : );
  return r;
}

// get64
// file putword.h line 119
static inline unsigned long int get64(const void *where)
{
  unsigned long int r;
  asm("movq %[WHERE],%[R]\n\tbswapq %[R]" : "=r"(r) : "m"(*((const unsigned long int *)where)) : );
  return r;
}

// handles_equal
// file serialize.c line 101
static inline signed int handles_equal(struct handleid *h1, struct handleid *h2)
{
  _Bool tmp_if_expr_1;
  if(h1->id == h2->id)
    tmp_if_expr_1 = h1->tag == h2->tag ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  return (signed int)tmp_if_expr_1;
}

// help
// file sftpserver.c line 108
static void help(void)
{
  xprintf("Usage:\n  gesftpserver [OPTIONS]\n\nGreen End SFTP server.  Not intended for interactive use!\n\n");
  xprintf("Options:\n  --help, -h               Display usage message\n  --version, -V            Display version number\n  --readonly, -R           Read-only mode\n");
  exit(0);
}

// main
// file sftpserver.c line 421
signed int main(signed int argc, char **argv)
{
  signed int n;
  const char *bn;
  bn=strrchr(argv[(signed long int)0], 47);
  if(bn == ((const char *)NULL))
    bn = argv[(signed long int)0];

  char *return_value_strstr_4;
  return_value_strstr_4=strstr(bn, "-debug");
  if(!(return_value_strstr_4 == ((char *)NULL)))
  {
    const char *home;
    home=getenv("HOME");
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(home);
    void *return_value_sftp__xmalloc_2;
    return_value_sftp__xmalloc_2=sftp__xmalloc(return_value_strlen_1 + (unsigned long int)40);
    sftp_debugpath = (const char *)return_value_sftp__xmalloc_2;
    signed int return_value_getpid_3;
    return_value_getpid_3=getpid();
    sprintf((char *)sftp_debugpath, "%s/.gesftpserver.%ju", home, (unsigned long int)return_value_getpid_3);
    sftp_debugging = 1;
  }

  char *return_value_strstr_5;
  return_value_strstr_5=strstr(bn, "-ro");
  if(!(return_value_strstr_5 == ((char *)NULL)))
    readonly = 1;

  setlocale(0, "");
  local_encoding=nl_langinfo(14);
  do
  {
    n=getopt_long(argc, argv, "hVdD:r:u:H:L:b46R", options, ((signed int *)NULL));
    if(!(n >= 0))
      break;

    switch(n)
    {
      case 104:
        help();
      case 86:
        version();
      case 100:
      {
        sftp_debugging = 1;
        break;
      }
      case 68:
      {
        sftp_debugging = 1;
        sftp_debugpath = optarg;
        break;
      }
      case 82:
      {
        readonly = 1;
        break;
      }
      default:
        exit(1);
    }
  }
  while((_Bool)1);
  signal(13, (void (*)(signed int))1);
  signed int return_value_prctl_8;
  return_value_prctl_8=prctl(4, 0L);
  signed int *return_value___errno_location_6;
  char *return_value_strerror_7;
  if(!(return_value_prctl_8 >= 0))
  {
    return_value___errno_location_6=__errno_location();
    return_value_strerror_7=strerror(*return_value___errno_location_6);
    fatal("error calling prctl: %s", return_value_strerror_7);
  }

  sftp_service();
  return 0;
}

// name_chmod
// file stat.c line 455
static signed int name_chmod(const void *what, unsigned int mode)
{
  signed int return_value_chmod_1;
  return_value_chmod_1=chmod((const char *)what, mode);
  return return_value_chmod_1;
}

// name_chown
// file stat.c line 446
static signed int name_chown(const void *what, unsigned int uid, unsigned int gid)
{
  signed int return_value_chown_1;
  return_value_chown_1=chown((const char *)what, uid, gid);
  return return_value_chown_1;
}

// name_lstat
// file stat.c line 464
static signed int name_lstat(const void *what, struct stat *sb)
{
  signed int return_value_lstat_1;
  return_value_lstat_1=lstat((const char *)what, sb);
  return return_value_lstat_1;
}

// name_truncate
// file stat.c line 436
static signed int name_truncate(const void *what, signed long int size)
{
  signed int return_value_truncate_1;
  return_value_truncate_1=truncate((const char *)what, size);
  return return_value_truncate_1;
}

// name_utimes
// file stat.c line 473
static signed int name_utimes(const void *what, struct timeval *tv)
{
  signed int return_value_utimes_1;
  return_value_utimes_1=utimes((const char *)what, tv);
  return return_value_utimes_1;
}

// opendebug
// file debug.c line 42
static void opendebug(void)
{
  /* assertion sftp_debugging */
  assert(sftp_debugging != 0);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(debugfp == ((struct _IO_FILE *)NULL))
  {
    if(!(sftp_debugpath == ((const char *)NULL)))
    {
      signed int fd;
      fd=open(sftp_debugpath, 01 | 0100 | 01000, 0600);
      if(fd >= 0)
        debugfp=fdopen(fd, "w");

      else
      {
        return_value___errno_location_1=__errno_location();
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(stderr, "%s: %s\n", sftp_debugpath, return_value_strerror_2);
      }
    }

    if(debugfp == ((struct _IO_FILE *)NULL))
      debugfp = stderr;

  }

}

// process_path
// file realpath.c line 75
static char * process_path(struct allocator *a, char *result, unsigned long int *nresultp, const char *path, unsigned int flags)
{
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("process_path path='%s' result='%s'", path, result);

  while((_Bool)0);
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  while(!(*path == 0))
    if((signed int)*path == 47)
      path = path + 1l;

    else
    {
      unsigned long int elementlen;
      elementlen=strcspn(path, "/");
      if(elementlen == 1ul)
        tmp_if_expr_6 = (signed int)path[(signed long int)0] == 46 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      if(!tmp_if_expr_6)
      {
        if(elementlen == 2ul)
          tmp_if_expr_4 = (signed int)path[(signed long int)0] == 46 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          tmp_if_expr_5 = (signed int)path[(signed long int)1] == 46 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_5 = (_Bool)0;
        if(tmp_if_expr_5)
        {
          char *ls;
          ls=strrchr(result, 47);
          /* assertion ls != 0 */
          assert(ls != ((char *)NULL));
          if(!(ls == result))
            *ls = (char)0;

          else
            strcpy(result, "/");
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("result[0] -> '%s'", result);

          while((_Bool)0);
        }

        else
        {
          unsigned long int oldresultlen;
          oldresultlen=strlen(result);
          if(!(result[1l] == 0))
            result=append(a, result, nresultp, "/");

          result=appendn(a, result, nresultp, path, elementlen);
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("result[1] -> '%s'", result);

          while((_Bool)0);
          if(!((1u & flags) == 0u))
          {
            const char *target;
            target=sftp_do_readlink(a, result);
            if(!(target == ((const char *)NULL)))
            {
              if((signed int)*target == 47)
                strcpy(result, "/");

              else
                result[(signed long int)oldresultlen] = (char)0;
              result=process_path(a, result, nresultp, target, flags);
              if(result == ((char *)NULL))
                return result;

            }

            else
            {
              signed int *return_value___errno_location_1;
              return_value___errno_location_1=__errno_location();
              if(*return_value___errno_location_1 == 22)
                goto __CPROVER_DUMP_L27;

              if(!((2u & flags) == 0u))
              {
                do
                  if(!(sftp_debugging == 0))
                  {
                    return_value___errno_location_2=__errno_location();
                    return_value_strerror_3=strerror(*return_value___errno_location_2);
                    sftp_debug_printf("error reading link: %s", return_value_strerror_3);
                  }

                while((_Bool)0);
                return ((char *)NULL);
              }

            }
          }


        __CPROVER_DUMP_L27:
          ;
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("result[2] -> '%s'", result);

          while((_Bool)0);
        }
      }

      path = path + (signed long int)elementlen;
    }
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("returning '%s'", result);

  while((_Bool)0);
  return result;
}

// process_sftpjob
// file sftpserver.c line 346
static void process_sftpjob(void *jv, void *wdv, struct allocator *a)
{
  struct sftpjob * const job = (struct sftpjob *)jv;
  signed int l;
  signed int r;
  signed int type = 0;
  unsigned int status;
  unsigned int rc;
  job->a = a;
  job->id = (unsigned int)0;
  job->worker = (struct worker *)wdv;
  job->ptr = job->data;
  job->left = job->len;
  const unsigned char *tmp_post_1;
  if(job->left == 0ul)
    sftp_send_status(job, (unsigned int)5, "empty request");

  else
  {
    tmp_post_1 = job->ptr;
    job->ptr = job->ptr + 1l;
    type = (signed int)*tmp_post_1;
    job->left = job->left - 1ul;
    if(!(type == 1))
    {
      rc=sftp_parse_uint32(job, &job->id);
      if(rc == 0u)
        goto __CPROVER_DUMP_L2;

      sftp_send_status(job, rc, "missing ID field");
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      l = 0;
      r = protocol->ncommands - 1;
      while(r >= l)
      {
        const signed int m = (l + r) / 2;
        const signed int mtype = (const signed int)(protocol->commands + (signed long int)m)->type;
        if(!(type >= mtype))
          r = m - 1;

        else
          if(!(mtype >= type))
            l = m + 1;

          else
          {
            serialize(job);
            status=(protocol->commands + (signed long int)m)->handler(job);
            sftp_send_status(job, status, ((const char *)NULL));
          }
      }
      sftp_send_status(job, (unsigned int)8, ((const char *)NULL));
    }
  }

done:
  ;
  serialize_remove_job(job);
  free((void *)job->data);
  free((void *)job);
  if(workqueue == ((struct queue *)NULL) && !(type == 1))
  {
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("late work queue creation");

    while((_Bool)0);
    queue_init(&workqueue, &workqueue_details, 4);
  }

  goto __CPROVER_DUMP_L15;

__CPROVER_DUMP_L15:
  ;
}

// put16
// file putword.h line 36
static inline void put16(void *where, unsigned short int u)
{
  asm("xchg %h[U],%b[U]\n\tmovw %[U],%[WHERE]" : "+Q"(u) : "m"(*((unsigned short int *)where)) : );
}

// put32
// file putword.h line 52
static inline void put32(void *where, unsigned int u)
{
  asm("bswapl %[U]\n\tmovl %[U],%[WHERE]" : "+r"(u) : "m"(*((unsigned int *)where)) : );
}

// put64
// file putword.h line 70
static inline void put64(void *where, unsigned long int u)
{
  asm("bswapq %[U]\n\tmovq %[U],%[WHERE]" : "+r"(u) : "m"(*((unsigned long int *)where)) : );
}

// queue_add
// file queue.h line 64
void queue_add(struct queue *q, void *job)
{
  struct queuejob *qj;
  void *return_value_sftp__xmalloc_1;
  return_value_sftp__xmalloc_1=sftp__xmalloc(sizeof(struct queuejob) /*16ul*/ );
  qj = (struct queuejob *)return_value_sftp__xmalloc_1;
  qj->next = ((struct queuejob *)NULL);
  qj->job = job;
  do
  {
    signed int queue_add__1__1__frc;
    queue_add__1__1__frc=pthread_mutex_lock(&q->m);
    if(!(queue_add__1__1__frc == 0))
    {
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(queue_add__1__1__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 131, (const void *)"pthread_mutex_lock(&q->m)", return_value_strerror_2);
      exit(1);
    }

  }
  while((_Bool)0);
  *q->jobstail = qj;
  q->jobstail = &qj->next;
  do
  {
    signed int queue_add__1__2__frc;
    queue_add__1__2__frc=pthread_cond_signal(&q->c);
    if(!(queue_add__1__2__frc == 0))
    {
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(queue_add__1__2__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 134, (const void *)"pthread_cond_signal(&q->c)", return_value_strerror_3);
      exit(1);
    }

  }
  while((_Bool)0);
  do
  {
    signed int frc;
    frc=pthread_mutex_unlock(&q->m);
    if(!(frc == 0))
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 135, (const void *)"pthread_mutex_unlock(&q->m)", return_value_strerror_4);
      exit(1);
    }

  }
  while((_Bool)0);
}

// queue_destroy
// file queue.h line 70
void queue_destroy(struct queue *q)
{
  signed int n;
  if(!(q == ((struct queue *)NULL)))
  {
    do
    {
      signed int queue_destroy__1__1__1__frc;
      queue_destroy__1__1__1__frc=pthread_mutex_lock(&q->m);
      if(!(queue_destroy__1__1__1__frc == 0))
      {
        char *return_value_strerror_1;
        return_value_strerror_1=strerror(queue_destroy__1__1__1__frc);
        fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 142, (const void *)"pthread_mutex_lock(&q->m)", return_value_strerror_1);
        exit(1);
      }

    }
    while((_Bool)0);
    q->join = 1;
    do
    {
      signed int frc;
      frc=pthread_cond_broadcast(&q->c);
      if(!(frc == 0))
      {
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(frc);
        fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 144, (const void *)"pthread_cond_broadcast(&q->c)", return_value_strerror_2);
        exit(1);
      }

    }
    while((_Bool)0);
    do
    {
      signed int queue_destroy__1__1__3__frc;
      queue_destroy__1__1__3__frc=pthread_mutex_unlock(&q->m);
      if(!(queue_destroy__1__1__3__frc == 0))
      {
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(queue_destroy__1__1__3__frc);
        fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 145, (const void *)"pthread_mutex_unlock(&q->m)", return_value_strerror_3);
        exit(1);
      }

    }
    while((_Bool)0);
    n = 0;
    for( ; !(n >= q->nthreads); n = n + 1)
      do
      {
        signed int queue_destroy__1__1__4__1__frc;
        queue_destroy__1__1__4__1__frc=pthread_join(q->threads[(signed long int)n], ((void **)NULL));
        if(!(queue_destroy__1__1__4__1__frc == 0))
        {
          char *return_value_strerror_4;
          return_value_strerror_4=strerror(queue_destroy__1__1__4__1__frc);
          fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 147, (const void *)"pthread_join(q->threads[n], 0)", return_value_strerror_4);
          exit(1);
        }

      }
      while((_Bool)0);
    free((void *)q->threads);
    free((void *)q);
  }

}

// queue_init
// file queue.h line 53
void queue_init(struct queue **qr, struct queuedetails *details, signed int nthreads)
{
  signed int n;
  struct queue *q;
  void *return_value_sftp__xmalloc_1;
  return_value_sftp__xmalloc_1=sftp__xmalloc(sizeof(struct queue) /*136ul*/ );
  q = (struct queue *)return_value_sftp__xmalloc_1;
  memset((void *)q, 0, sizeof(struct queue) /*136ul*/ );
  q->jobs = ((struct queuejob *)NULL);
  q->jobstail = &q->jobs;
  do
  {
    signed int frc;
    frc=pthread_mutex_init(&q->m, ((const union anonymous_5 *)NULL));
    if(!(frc == 0))
    {
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 114, (const void *)"pthread_mutex_init(&q->m, 0)", return_value_strerror_2);
      exit(1);
    }

  }
  while((_Bool)0);
  do
  {
    signed int queue_init__1__2__frc;
    queue_init__1__2__frc=pthread_cond_init(&q->c, ((const union anonymous_5 *)NULL));
    if(!(queue_init__1__2__frc == 0))
    {
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(queue_init__1__2__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 115, (const void *)"pthread_cond_init(&q->c, 0)", return_value_strerror_3);
      exit(1);
    }

  }
  while((_Bool)0);
  q->details = details;
  q->nthreads = nthreads;
  void *return_value_xcalloc_4;
  return_value_xcalloc_4=xcalloc((unsigned long int)nthreads, sizeof(unsigned long int) /*8ul*/ );
  q->threads = (unsigned long int *)return_value_xcalloc_4;
  q->join = 0;
  n = 0;
  for( ; !(n >= q->nthreads); n = n + 1)
    do
    {
      signed int queue_init__1__3__1__frc;
      queue_init__1__3__1__frc=pthread_create(&q->threads[(signed long int)n], ((const union pthread_attr_t *)NULL), queue_thread, (void *)q);
      if(!(queue_init__1__3__1__frc == 0))
      {
        char *return_value_strerror_5;
        return_value_strerror_5=strerror(queue_init__1__3__1__frc);
        fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 121, (const void *)"pthread_create(&q->threads[n], 0, queue_thread, q)", return_value_strerror_5);
        exit(1);
      }

    }
    while((_Bool)0);
  *qr = q;
}

// queue_serializable_job
// file serialize.h line 30
void queue_serializable_job(struct sftpjob *job)
{
  unsigned char type;
  unsigned int id;
  unsigned long int offset;
  unsigned long int len64;
  unsigned int len;
  struct handleid hid;
  unsigned int handleflags;
  struct sqnode *q;
  job->ptr = job->data;
  job->left = job->len;
  unsigned int return_value_sftp_parse_uint8_1;
  return_value_sftp_parse_uint8_1=sftp_parse_uint8(job, &type);
  _Bool tmp_if_expr_3;
  unsigned int return_value_sftp_parse_uint32_2;
  if(return_value_sftp_parse_uint8_1 == 0u && ((signed int)type == 5 || (signed int)type == 6))
  {
    return_value_sftp_parse_uint32_2=sftp_parse_uint32(job, &id);
    tmp_if_expr_3 = return_value_sftp_parse_uint32_2 == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_5;
  unsigned int return_value_sftp_parse_handle_4;
  if(tmp_if_expr_3)
  {
    return_value_sftp_parse_handle_4=sftp_parse_handle(job, &hid);
    tmp_if_expr_5 = return_value_sftp_parse_handle_4 == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  _Bool tmp_if_expr_7;
  unsigned int return_value_sftp_parse_uint64_6;
  if(tmp_if_expr_5)
  {
    return_value_sftp_parse_uint64_6=sftp_parse_uint64(job, &offset);
    tmp_if_expr_7 = return_value_sftp_parse_uint64_6 == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_7 = (_Bool)0;
  _Bool tmp_if_expr_9;
  unsigned int return_value_sftp_parse_uint32_8;
  if(tmp_if_expr_7)
  {
    return_value_sftp_parse_uint32_8=sftp_parse_uint32(job, &len);
    tmp_if_expr_9 = return_value_sftp_parse_uint32_8 == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_9 = (_Bool)0;
  if(tmp_if_expr_9)
  {
    len64 = (unsigned long int)len;
    handleflags=sftp_handle_flags(&hid);
  }

  else
  {
    memset((void *)&hid, 0, sizeof(struct handleid) /*8ul*/ );
    offset = (unsigned long int)0;
    len64 = ~((unsigned long int)0);
    handleflags = (unsigned int)0;
  }
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&sq_mutex);
    if(!(frc == 0))
    {
      char *return_value_strerror_10;
      return_value_strerror_10=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"serialize.c", 190, (const void *)"pthread_mutex_lock(&sq_mutex)", return_value_strerror_10);
      exit(1);
    }

  }
  while((_Bool)0);
  void *return_value_sftp__xmalloc_11;
  return_value_sftp__xmalloc_11=sftp__xmalloc(sizeof(struct sqnode) /*56ul*/ );
  q = (struct sqnode *)return_value_sftp__xmalloc_11;
  q->older = newest;
  q->job = job;
  q->type = type;
  q->hid = hid;
  q->handleflags = handleflags;
  q->offset = offset;
  q->len = len64;
  newest = q;
  do
  {
    signed int queue_serializable_job__1__4__frc;
    queue_serializable_job__1__4__frc=pthread_mutex_unlock(&sq_mutex);
    if(!(queue_serializable_job__1__4__frc == 0))
    {
      char *return_value_strerror_12;
      return_value_strerror_12=strerror(queue_serializable_job__1__4__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"serialize.c", 200, (const void *)"pthread_mutex_unlock(&sq_mutex)", return_value_strerror_12);
      exit(1);
    }

  }
  while((_Bool)0);
}

// queue_thread
// file queue.c line 73
static void * queue_thread(void *vq)
{
  struct queue * const q = (struct queue *)vq;
  struct queuejob *qj;
  struct allocator a;
  void *workerdata;
  workerdata=q->details->init();
  signed int queue_thread__1__1__frc;
  queue_thread__1__1__frc=pthread_mutex_lock(&q->m);
  if(!(queue_thread__1__1__frc == 0))
  {
    char *return_value_strerror_1;
    return_value_strerror_1=strerror(queue_thread__1__1__frc);
    fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 80, (const void *)"pthread_mutex_lock(&q->m)", return_value_strerror_1);
    exit(1);
  }

  if(!(q->jobs == ((struct queuejob *)NULL)))
  {
    if(!(q->jobs == ((struct queuejob *)NULL)))
    {
      qj = q->jobs;
      q->jobs = qj->next;
      if(q->jobs == ((struct queuejob *)NULL))
        q->jobstail = &q->jobs;

      signed int queue_thread__1__2__1__1__frc;
      queue_thread__1__2__1__1__frc=pthread_mutex_unlock(&q->m);
      if(!(queue_thread__1__2__1__1__frc == 0))
      {
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(queue_thread__1__2__1__1__frc);
        fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 88, (const void *)"pthread_mutex_unlock(&q->m)", return_value_strerror_2);
        exit(1);
      }

      sftp_alloc_init(&a);
      q->details->worker(qj->job, workerdata, &a);
      sftp_alloc_destroy(&a);
      free((void *)qj);
      signed int frc;
      frc=pthread_mutex_lock(&q->m);
      if(!(frc == 0))
      {
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(frc);
        fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 93, (const void *)"pthread_mutex_lock(&q->m)", return_value_strerror_3);
        exit(1);
      }

    }

    else
    {
      signed int queue_thread__1__2__2__1__frc;
      queue_thread__1__2__2__1__frc=pthread_cond_wait(&q->c, &q->m);
      if(!(queue_thread__1__2__2__1__frc == 0))
      {
        char *return_value_strerror_4;
        return_value_strerror_4=strerror(queue_thread__1__2__2__1__frc);
        fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 96, (const void *)"pthread_cond_wait(&q->c, &q->m)", return_value_strerror_4);
        exit(1);
      }

    }
  }

  signed int queue_thread__1__3__frc;
  queue_thread__1__3__frc=pthread_mutex_unlock(&q->m);
  if(!(queue_thread__1__3__frc == 0))
  {
    char *return_value_strerror_5;
    return_value_strerror_5=strerror(queue_thread__1__3__frc);
    fatal("%s:%d: %s: %s\n", (const void *)"queue.c", 99, (const void *)"pthread_mutex_unlock(&q->m)", return_value_strerror_5);
    exit(1);
  }

  q->details->cleanup(workerdata);
  return NULL;
}

// ranges_overlap
// file serialize.c line 111
static signed int ranges_overlap(struct sqnode *a, struct sqnode *b)
{
  if(!(a->len == 0ul))
  {
    if(!(b->len == 0ul))
    {
      const unsigned long int aend = (a->offset + a->len) - (unsigned long int)1;
      const unsigned long int bend = (b->offset + b->len) - (unsigned long int)1;
      if(aend >= b->offset)
      {
        if(bend >= aend)
          return 1;

      }

      if(bend >= a->offset)
      {
        if(aend >= bend)
          return 1;

      }

    }

  }

  return 0;
}

// reorderable
// file serialize.c line 134
static signed int reorderable(struct sqnode *q1, struct sqnode *q2, unsigned int flags)
{
  _Bool tmp_if_expr_4;
  if((signed int)q1->type == 5)
    tmp_if_expr_4 = (_Bool)1;

  else
    tmp_if_expr_4 = (signed int)q1->type == 6 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_4)
  {
    if((signed int)q2->type == 5)
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = (signed int)q2->type == 6 ? (_Bool)1 : (_Bool)0;
    tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_6 = (_Bool)0;
  _Bool tmp_if_expr_3;
  signed int return_value_ranges_overlap_2;
  if(tmp_if_expr_6)
  {
    signed int return_value_handles_equal_1;
    return_value_handles_equal_1=handles_equal(&q1->hid, &q2->hid);
    if(return_value_handles_equal_1 == 0)
      return 1;

    if((signed int)q1->type == 5)
    {
      if((signed int)q2->type == 5)
        return 0;

    }

    if(!((3u & flags) == 0u))
      return 0;

    if((signed int)q1->type == 6)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)q2->type == 6 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
    {
      return_value_ranges_overlap_2=ranges_overlap(q1, q2);
      if(!(return_value_ranges_overlap_2 == 0))
        return 0;

    }

    return 1;
  }

  else
    return 0;
}

// serialize
// file serialize.h line 38
void serialize(struct sftpjob *job)
{
  struct sqnode *q;
  struct sqnode *oq;
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&sq_mutex);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"serialize.c", 206, (const void *)"pthread_mutex_lock(&sq_mutex)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  _Bool tmp_if_expr_2;
  signed int return_value_reorderable_3;
  do
  {
    q = newest;
    do
    {
      if(!(q == ((struct sqnode *)NULL)))
        tmp_if_expr_2 = q->job != job ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(!tmp_if_expr_2)
        break;

      q = q->older;
    }
    while((_Bool)1);
    if(q == ((struct sqnode *)NULL))
      break;

    oq = q->older;
    for( ; !(oq == ((struct sqnode *)NULL)); oq = oq->older)
    {
      return_value_reorderable_3=reorderable(q, oq, q->handleflags);
      if(return_value_reorderable_3 == 0)
        break;

    }
    if(oq == ((struct sqnode *)NULL))
      break;

    do
    {
      signed int serialize__1__2__1__3__frc;
      serialize__1__2__1__3__frc=pthread_cond_wait(&sq_cond, &sq_mutex);
      if(!(serialize__1__2__1__3__frc == 0))
      {
        char *return_value_strerror_4;
        return_value_strerror_4=strerror(serialize__1__2__1__3__frc);
        fatal("%s:%d: %s: %s\n", (const void *)"serialize.c", 222, (const void *)"pthread_cond_wait(&sq_cond, &sq_mutex)", return_value_strerror_4);
        exit(1);
      }

    }
    while((_Bool)0);
  }
  while((_Bool)1);
  do
  {
    signed int serialize__1__3__frc;
    serialize__1__3__frc=pthread_mutex_unlock(&sq_mutex);
    if(!(serialize__1__3__frc == 0))
    {
      char *return_value_strerror_5;
      return_value_strerror_5=strerror(serialize__1__3__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"serialize.c", 225, (const void *)"pthread_mutex_unlock(&sq_mutex)", return_value_strerror_5);
      exit(1);
    }

  }
  while((_Bool)0);
}

// serialize_remove_job
// file serialize.h line 45
void serialize_remove_job(struct sftpjob *job)
{
  struct sqnode *q;
  struct sqnode **qq;
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&sq_mutex);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"serialize.c", 231, (const void *)"pthread_mutex_lock(&sq_mutex)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  qq = &newest;
  _Bool tmp_if_expr_2;
  do
  {
    q = *qq;
    if(!(q == ((struct sqnode *)NULL)))
      tmp_if_expr_2 = q->job != job ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(!tmp_if_expr_2)
      break;

    qq = &q->older;
  }
  while((_Bool)1);
  if(!(q == ((struct sqnode *)NULL)))
  {
    *qq = q->older;
    free((void *)q);
    do
    {
      signed int serialize_remove_job__1__3__1__frc;
      serialize_remove_job__1__3__1__frc=pthread_cond_broadcast(&sq_cond);
      if(!(serialize_remove_job__1__3__1__frc == 0))
      {
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(serialize_remove_job__1__3__1__frc);
        fatal("%s:%d: %s: %s\n", (const void *)"serialize.c", 238, (const void *)"pthread_cond_broadcast(&sq_cond)", return_value_strerror_3);
        exit(1);
      }

    }
    while((_Bool)0);
  }

  do
  {
    signed int serialize_remove_job__1__4__frc;
    serialize_remove_job__1__4__frc=pthread_mutex_unlock(&sq_mutex);
    if(!(serialize_remove_job__1__4__frc == 0))
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(serialize_remove_job__1__4__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"serialize.c", 240, (const void *)"pthread_mutex_unlock(&sq_mutex)", return_value_strerror_4);
      exit(1);
    }

  }
  while((_Bool)0);
}

// sftp__xmalloc
// file utils.h line 50
void * sftp__xmalloc(unsigned long int n)
{
  void *ptr;
  if(!(n == 0ul))
  {
    ptr=malloc(n);
    if(ptr == NULL)
      fatal("xmalloc: out of memory (%zu)", n);

    return ptr;
  }

  else
    return NULL;
}

// sftp__xrealloc
// file utils.h line 70
void * sftp__xrealloc(void *ptr, unsigned long int n)
{
  if(!(n == 0ul))
  {
    ptr=realloc(ptr, n);
    if(ptr == NULL)
      fatal("xrealloc: out of memory (%zu)", n);

    return ptr;
  }

  else
  {
    free(ptr);
    return NULL;
  }
}

// sftp_alloc
// file alloc.c line 89
void * sftp_alloc(struct allocator *a, unsigned long int n)
{
  unsigned long int m;
  m=blocks(n);
  struct chunk *c;
  _Bool tmp_if_expr_2;
  if(m == 0ul)
    return NULL;

  else
  {
    /* assertion a != 0 */
    assert(a != ((struct allocator *)NULL));
    /* assertion m != (18446744073709551615UL) */
    assert(m != 18446744073709551615UL);
    c = a->chunks;
    if(c == ((struct chunk *)NULL))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = c->left < m ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
    {
      const unsigned long int cs = m >= (unsigned long int)512 ? m + (unsigned long int)1 : (unsigned long int)512;
      union block *nb;
      void *return_value_xcalloc_1;
      return_value_xcalloc_1=xcalloc(cs, sizeof(union block) /*32ul*/ );
      nb = (union block *)return_value_xcalloc_1;
      c = &nb->c;
      c->next = a->chunks;
      c->ptr = nb + (signed long int)1;
      c->left = cs - (unsigned long int)1;
      a->chunks = c;
    }

    /* assertion m <= c->left */
    assert(m <= c->left);
    memset((void *)c->ptr, 0, m * sizeof(union block) /*32ul*/ );
    c->left = c->left - m;
    c->ptr = c->ptr + (signed long int)m;
    return (void *)(c->ptr - (signed long int)m);
  }
}

// sftp_alloc_destroy
// file alloc.h line 79
void sftp_alloc_destroy(struct allocator *a)
{
  struct chunk *c;
  struct chunk *d;
  c = a->chunks;
  do
  {
    d = c;
    if(d == ((struct chunk *)NULL))
      break;

    c = c->next;
    free((void *)d);
  }
  while((_Bool)1);
  a->chunks = ((struct chunk *)NULL);
}

// sftp_alloc_init
// file alloc.h line 46
struct allocator * sftp_alloc_init(struct allocator *a)
{
  a->chunks = ((struct chunk *)NULL);
  return a;
}

// sftp_alloc_more
// file alloc.c line 121
void * sftp_alloc_more(struct allocator *a, void *ptr, unsigned long int oldn, unsigned long int newn)
{
  unsigned long int oldm;
  oldm=blocks(oldn);
  unsigned long int newm;
  newm=blocks(newn);
  void *newptr;
  void *return_value_sftp_alloc_1;
  if(!(ptr == NULL))
  {
    /* assertion a->chunks != 0 */
    assert(a->chunks != ((struct chunk *)NULL));
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("ptr=%p oldm=%zu a->chunks->ptr=%p blocksize=%zu", ptr, oldm, a->chunks->ptr, sizeof(union block) /*32ul*/ );

    while((_Bool)0);
    if((union block *)ptr + (signed long int)oldm == a->chunks->ptr)
    {
      if(oldm >= newm)
      {
        a->chunks->ptr = a->chunks->ptr - (signed long int)(oldm - newm);
        a->chunks->left = a->chunks->left + (oldm - newm);
        return ptr;
      }

      else
        if(a->chunks->left >= newm + -oldm)
        {
          a->chunks->ptr = a->chunks->ptr + (signed long int)(newm - oldm);
          a->chunks->left = a->chunks->left - (newm - oldm);
          memset((void *)((char *)ptr + (signed long int)oldn), 0, newn - oldn);
          return ptr;
        }

    }

    else
      if(newm == oldm)
        return ptr;

    newptr=sftp_alloc(a, newn);
    memcpy(newptr, ptr, oldn);
    return newptr;
  }

  else
  {
    return_value_sftp_alloc_1=sftp_alloc(a, newn);
    return return_value_sftp_alloc_1;
  }
}

// sftp_debug_hexdump
// file debug.h line 40
void sftp_debug_hexdump(const void *ptr, unsigned long int n)
{
  const unsigned char *p = (const unsigned char *)ptr;
  unsigned long int i;
  unsigned long int j;
  char buffer[80l];
  char *output;
  opendebug();
  i = (unsigned long int)0;
  signed int return_value_sprintf_2;
  char *tmp_post_3;
  const unsigned short int **return_value___ctype_b_loc_4;
  signed int tmp_if_expr_5;
  char *tmp_post_6;
  for( ; !(i >= n); i = i + (unsigned long int)16)
  {
    output = buffer;
    signed int return_value_sprintf_1;
    return_value_sprintf_1=sprintf(output, "%4lx ", (unsigned long int)i);
    output = output + (signed long int)return_value_sprintf_1;
    j = (unsigned long int)0;
    for( ; !(j >= 16ul); j = j + 1ul)
      if(!(i + j >= n))
      {
        return_value_sprintf_2=sprintf(output, " %02x", p[(signed long int)(i + j)]);
        output = output + (signed long int)return_value_sprintf_2;
      }

      else
      {
        strcpy(output, "   ");
        output = output + (signed long int)3;
      }
    strcpy(output, "  ");
    output = output + (signed long int)2;
    j = (unsigned long int)0;
    for( ; !(j >= 16ul); j = j + 1ul)
      if(!(i + j >= n))
      {
        tmp_post_3 = output;
        output = output + 1l;
        return_value___ctype_b_loc_4=__ctype_b_loc();
        if(!((16384 & (signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)p[(signed long int)i + (signed long int)j]]) == 0))
          tmp_if_expr_5 = (signed int)p[(signed long int)(i + j)];

        else
          tmp_if_expr_5 = 46;
        *tmp_post_3 = (char)tmp_if_expr_5;
      }

    tmp_post_6 = output;
    output = output + 1l;
    *tmp_post_6 = (char)10;
    *output = (char)0;
    fputs(buffer, debugfp);
  }
  fflush(debugfp);
}

// sftp_debug_printf
// file debug.h line 48
void sftp_debug_printf(const char *fmt, ...)
{
  void **ap;
  signed int save_errno;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  save_errno = *return_value___errno_location_1;
  opendebug();
  ap = (void **)&fmt;
  vfprintf(debugfp, fmt, ap);
  ap = ((void **)NULL);
  fputc(10, debugfp);
  fflush(debugfp);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  *return_value___errno_location_2 = save_errno;
}

// sftp_dirname
// file utils.h line 174
const char * sftp_dirname(struct allocator *a, const char *path)
{
  const char *ls;
  ls=strrchr(path, 47);
  if(!(ls == ((const char *)NULL)))
  {
    if(!(ls == path))
    {
      const unsigned long int len = (const unsigned long int)(ls - path);
      char *d;
      /* assertion len + 1 != 0 */
      assert(len + (unsigned long int)1 != (unsigned long int)0);
      void *return_value_sftp_alloc_1;
      return_value_sftp_alloc_1=sftp_alloc(a, len + (unsigned long int)1);
      d = (char *)return_value_sftp_alloc_1;
      memcpy((void *)d, (const void *)path, len);
      return d;
    }

    else
      return "/";
  }

  else
    return ".";
}

// sftp_do_readlink
// file utils.h line 120
char * sftp_do_readlink(struct allocator *a, const char *path)
{
  unsigned long int nresult = (unsigned long int)32;
  unsigned long int oldnresult = (unsigned long int)0;
  char *result = ((char *)NULL);
  signed int n;
  while(nresult >= 1ul && !(nresult >= 65537ul))
  {
    void *return_value_sftp_alloc_more_1;
    return_value_sftp_alloc_more_1=sftp_alloc_more(a, (void *)result, oldnresult, nresult);
    result = (char *)return_value_sftp_alloc_more_1;
    signed long int return_value_readlink_2;
    return_value_readlink_2=readlink(path, result, nresult);
    n = (signed int)return_value_readlink_2;
    if(!(n >= 0))
      return ((char *)NULL);

    if(!((unsigned long int)(unsigned int)n >= nresult))
    {
      result[(signed long int)n] = (char)0;
      return result;
    }

    oldnresult = nresult;
    nresult = nresult * (unsigned long int)2;
  }
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = 7;
  return ((char *)NULL);
}

// sftp_find_realpath
// file utils.h line 148
char * sftp_find_realpath(struct allocator *a, const char *path, unsigned int flags)
{
  char *cwd;
  char *abspath;
  char *result = ((char *)NULL);
  unsigned long int nresult = (unsigned long int)0;
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_find_realpath '%s' %#x", path, flags);

  while((_Bool)0);
  if((signed int)*path == 0)
    path = ".";

  if(!((signed int)*path == 47))
  {
    cwd=sftp_getcwd(a);
    if(cwd == ((char *)NULL))
      return ((char *)NULL);

    /* assertion cwd[0] == '/' */
    assert((signed int)cwd[(signed long int)0] == 47);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(cwd);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(path);
    void *return_value_sftp_alloc_3;
    return_value_sftp_alloc_3=sftp_alloc(a, return_value_strlen_1 + return_value_strlen_2 + (unsigned long int)2);
    abspath = (char *)return_value_sftp_alloc_3;
    strcpy(abspath, cwd);
    strcat(abspath, "/");
    strcat(abspath, path);
    path = abspath;
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("convert relative path to '%s'", path);

    while((_Bool)0);
  }

  result=append(a, result, &nresult, "/");
  char *return_value_process_path_4;
  return_value_process_path_4=process_path(a, result, &nresult, path, flags);
  return return_value_process_path_4;
}

// sftp_format_attr
// file stat.h line 38
const char * sftp_format_attr(struct allocator *a, struct sftpattr *attrs, signed int thisyear, unsigned long int flags)
{
  char perms[64l];
  char linkcount[64l];
  char size[64l];
  char date[64l];
  char nowner[64l];
  char ngroup[64l];
  char *formatted;
  char *p;
  char *bits;
  unsigned long int nbits;
  const char *owner;
  const char *group;
  unsigned long int n;
  p = perms;
  char *tmp_post_1 = p;
  p = p + 1l;
  static const char typedetails[11l] = { '?', '-', 'd', 'l', '?', '?', 's', 'c', 'b', 'p', 0 };
  *tmp_post_1 = typedetails[(signed long int)attrs->type];
  char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  char *tmp_post_5;
  char *tmp_post_6;
  char *tmp_post_7;
  char *tmp_post_8;
  char *tmp_post_9;
  char *tmp_post_10;
  char *tmp_post_11;
  char *tmp_post_12;
  char *tmp_post_13;
  char *tmp_post_14;
  char *tmp_post_15;
  char *tmp_post_16;
  char *tmp_post_17;
  char *tmp_post_18;
  char *tmp_post_19;
  if(!((4u & attrs->valid) == 0u))
  {
    tmp_post_2 = p;
    p = p + 1l;
    *tmp_post_2 = (char)((attrs->permissions & (unsigned int)00400) != 0u ? 114 : 45);
    tmp_post_3 = p;
    p = p + 1l;
    *tmp_post_3 = (char)((attrs->permissions & (unsigned int)00200) != 0u ? 119 : 45);
    switch(attrs->permissions & (unsigned int)04100)
    {
      case (unsigned int)00000:
      {
        tmp_post_4 = p;
        p = p + 1l;
        *tmp_post_4 = (char)45;
        break;
      }
      case (unsigned int)00100:
      {
        tmp_post_5 = p;
        p = p + 1l;
        *tmp_post_5 = (char)120;
        break;
      }
      case (unsigned int)04000:
      {
        tmp_post_6 = p;
        p = p + 1l;
        *tmp_post_6 = (char)83;
        break;
      }
      case (unsigned int)04100:
      {
        tmp_post_7 = p;
        p = p + 1l;
        *tmp_post_7 = (char)115;
      }
    }
    tmp_post_8 = p;
    p = p + 1l;
    *tmp_post_8 = (char)((attrs->permissions & (unsigned int)00040) != 0u ? 114 : 45);
    tmp_post_9 = p;
    p = p + 1l;
    *tmp_post_9 = (char)((attrs->permissions & (unsigned int)00020) != 0u ? 119 : 45);
    switch(attrs->permissions & (unsigned int)02010)
    {
      case (unsigned int)00000:
      {
        tmp_post_10 = p;
        p = p + 1l;
        *tmp_post_10 = (char)45;
        break;
      }
      case (unsigned int)00010:
      {
        tmp_post_11 = p;
        p = p + 1l;
        *tmp_post_11 = (char)120;
        break;
      }
      case (unsigned int)02000:
      {
        tmp_post_12 = p;
        p = p + 1l;
        *tmp_post_12 = (char)83;
        break;
      }
      case (unsigned int)02010:
      {
        tmp_post_13 = p;
        p = p + 1l;
        *tmp_post_13 = (char)115;
      }
    }
    tmp_post_14 = p;
    p = p + 1l;
    *tmp_post_14 = (char)((attrs->permissions & (unsigned int)00004) != 0u ? 114 : 45);
    tmp_post_15 = p;
    p = p + 1l;
    *tmp_post_15 = (char)((attrs->permissions & (unsigned int)00002) != 0u ? 119 : 45);
    switch(attrs->permissions & (unsigned int)01001)
    {
      case (unsigned int)00000:
      {
        tmp_post_16 = p;
        p = p + 1l;
        *tmp_post_16 = (char)45;
        break;
      }
      case (unsigned int)00001:
      {
        tmp_post_17 = p;
        p = p + 1l;
        *tmp_post_17 = (char)120;
        break;
      }
      case (unsigned int)01000:
      {
        tmp_post_18 = p;
        p = p + 1l;
        *tmp_post_18 = (char)84;
        break;
      }
      case (unsigned int)01001:
      {
        tmp_post_19 = p;
        p = p + 1l;
        *tmp_post_19 = (char)116;
      }
    }
    *p = (char)0;
  }

  else
    strcpy(p, "?????????");
  if(!((8192u & attrs->valid) == 0u))
    sprintf(linkcount, "%u", attrs->link_count);

  else
    strcpy(linkcount, "?");
  if(!((1u & attrs->valid) == 0u))
    sprintf(size, "%lu", attrs->size);

  else
    strcpy(size, "?");
  if(!((2u & attrs->valid) == 0u))
  {
    sprintf(nowner, "%u", attrs->uid);
    sprintf(ngroup, "%u", attrs->gid);
  }

  group = "?";
  owner = group;
  if(!((1ul & flags) == 0ul))
  {
    if(!((2u & attrs->valid) == 0u))
    {
      owner = nowner;
      group = ngroup;
    }

    else
      if(!((128u & attrs->valid) == 0u))
      {
        owner = attrs->owner;
        group = attrs->group;
      }

  }

  else
    if(!((128u & attrs->valid) == 0u))
    {
      owner = attrs->owner;
      group = attrs->group;
    }

    else
      if(!((2u & attrs->valid) == 0u))
      {
        owner = nowner;
        group = ngroup;
      }

  if(!((32u & attrs->valid) == 0u))
  {
    struct tm mtime;
    const signed long int m = attrs->mtime.seconds;
    ((flags & (unsigned long int)0x00000002) != 0ul ? localtime_r : gmtime_r)(&m, &mtime);
    if(mtime.tm_year == thisyear)
      strftime(date, sizeof(char [64l]) /*64ul*/ , "%b %d %H:%M", &mtime);

    else
      strftime(date, sizeof(char [64l]) /*64ul*/ , "%b %d  %Y", &mtime);
  }

  else
    strcpy(date, "?");
  bits = (char *)(void *)0;
  nbits = (unsigned long int)0;
  if(!((4ul & flags) == 0ul))
  {
    if(!((512u & attrs->valid) == 0u))
    {
      if(!(attrs->attrib_bits == 0u))
      {
        bits=append(a, bits, &nbits, "[");
        n = (unsigned long int)0;
        for( ; !(n >= 12ul); n = n + 1ul)
          if(!((attrs->attrib_bits & attr_bits[(signed long int)n].bit) == 0u))
          {
            if(!(bits[1l] == 0))
              bits=append(a, bits, &nbits, ",");

            bits=append(a, bits, &nbits, attr_bits[(signed long int)n].description);
          }

        bits=append(a, bits, &nbits, "]");
      }

    }

  }

  unsigned long int return_value_strlen_20;
  return_value_strlen_20=strlen(attrs->name);
  void *return_value_sftp_alloc_21;
  return_value_sftp_alloc_21=sftp_alloc(a, (unsigned long int)80 + return_value_strlen_20);
  formatted = (char *)return_value_sftp_alloc_21;
  const char *tmp_if_expr_22;
  if(!(attrs->target == ((const char *)NULL)))
    tmp_if_expr_22 = attrs->target;

  else
    tmp_if_expr_22 = "";
  sprintf(formatted, "%10.10s %3.3s %-8.8s %-8.8s %8.8s %12.12s %s%s%s%s%s", (const void *)perms, (const void *)linkcount, owner, group, (const void *)size, (const void *)date, attrs->name, attrs->target != ((const char *)NULL) ? " -> " : "", tmp_if_expr_22, (flags & (unsigned long int)0x00000004) != 0ul ? " " : "", (flags & (unsigned long int)0x00000004) != 0ul ? bits : "");
  return formatted;
}

// sftp_generic_open
// file sftpserver.h line 303
unsigned int sftp_generic_open(struct sftpjob *job, const char *path, unsigned int desired_access, unsigned int flags, struct sftpattr *attrs)
{
  unsigned int initial_permissions;
  signed int created;
  signed int open_flags;
  signed int fd;
  struct stat sb;
  struct handleid id;
  unsigned int sftp_generic_open__1__sftp_handle_flags = (unsigned int)0;
  unsigned int rc;
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_generic_open %s %#x %#x", path, desired_access, flags);

  while((_Bool)0);
  rc=sftp_normalize_ownergroup(job->a, attrs);
  unsigned int return_value_getuid_1;
  signed int *return_value___errno_location_4;
  signed int return_value_fstat_8;
  signed int *return_value___errno_location_12;
  signed int *return_value___errno_location_14;
  _Bool tmp_if_expr_16;
  signed int *return_value___errno_location_15;
  if(!(rc == 0u))
    return rc;

  else
  {
    attrs->valid = attrs->valid & ~((unsigned int)0x00000001);
    if(!((3u & desired_access) == 0u) && !((3u & desired_access) == 1u))
    {
      if((3u & desired_access) == 2u)
        goto __CPROVER_DUMP_L7;

      if((3u & desired_access) == 3u)
        goto __CPROVER_DUMP_L11;

    }

    else
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("O_RDONLY");

      while((_Bool)0);
      open_flags = 00;
      if(!((786704u & desired_access) == 0u))
        return (unsigned int)3;

      goto __CPROVER_DUMP_L15;

    __CPROVER_DUMP_L7:
      ;
      if(!(readonly == 0))
        return (unsigned int)3;

      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("O_WRONLY");

      while((_Bool)0);
      open_flags = 01;
      if(!((131208u & desired_access) == 0u))
        return (unsigned int)3;

      goto __CPROVER_DUMP_L15;

    __CPROVER_DUMP_L11:
      ;
      if(!(readonly == 0))
        return (unsigned int)3;

      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("O_RDWR");

      while((_Bool)0);
      open_flags = 02;
      goto __CPROVER_DUMP_L15;
    }
    fatal("bitwise operators have broken");

  __CPROVER_DUMP_L15:
    ;
    if(!((524288u & desired_access) == 0u))
    {
      return_value_getuid_1=getuid();
      if(return_value_getuid_1 == 0u)
        goto __CPROVER_DUMP_L16;

      return (unsigned int)3;
    }

    else
    {

    __CPROVER_DUMP_L16:
      ;
      open_flags = open_flags | 0400;
      if(!((24u & flags) == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("O_APPEND");

        while((_Bool)0);
        open_flags = open_flags | 02000;
        sftp_generic_open__1__sftp_handle_flags = sftp_generic_open__1__sftp_handle_flags | (unsigned int)0x0002;
      }

      if(!((32u & flags) == 0u))
        sftp_generic_open__1__sftp_handle_flags = sftp_generic_open__1__sftp_handle_flags | (unsigned int)0x0001;

      if(!((448u & flags) == 0u))
        return (unsigned int)8;

      else
      {
        if(!((1024u & flags) == 0u))
        {
          open_flags = open_flags | 0400000;
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("O_NOFOLLOW");

          while((_Bool)0);
        }

        if(!((4u & attrs->valid) == 0u))
        {
          initial_permissions = attrs->permissions & (unsigned int)07777;
          if(attrs->permissions == (511u & attrs->permissions))
            attrs->valid = attrs->valid ^ (unsigned int)0x00000004;

          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("using initial permission %#o", (unsigned int)initial_permissions);

          while((_Bool)0);
        }

        else
          initial_permissions = (unsigned int)(0755 & 0666);
        if(!(readonly == 0) && (!((7u & flags) == 2u) || !((2048u & flags) == 0u)))
          return (unsigned int)3;

        else
        {
          switch(flags & (unsigned int)0x00000007)
          {
            case (unsigned int)0x00000000:
            {
              if(!((1024u & flags) == 0u))
              {
                do
                  if(!(sftp_debugging == 0))
                    sftp_debug_printf("SSH_FXF_CREATE_NEW|SSH_FXF_NOFOLLOW -> O_CREAT|O_EXCL");

                while((_Bool)0);
                fd=open(path, open_flags | 0100 | 0200, initial_permissions);
                created = 1;
              }

              else
              {
                do
                  if(!(sftp_debugging == 0))
                    sftp_debug_printf("SSH_FXF_CREATE_NEW -> test for existence");

                while((_Bool)0);
                signed int return_value_stat_2;
                return_value_stat_2=stat(path, &sb);
                if(return_value_stat_2 == 0)
                  return (unsigned int)11;

                do
                  if(!(sftp_debugging == 0))
                    sftp_debug_printf("SSH_FXF_CREATE_NEW -> O_CREAT");

                while((_Bool)0);
                fd=open(path, open_flags | 0100, initial_permissions);
                created = 1;
              }
              break;
            }
            case (unsigned int)0x00000001:

            case (unsigned int)0x00000003:
            {
              if((7u & flags) == 1u)
              {
                do
                  if(!(sftp_debugging == 0))
                    sftp_debug_printf("SSH_FXF_CREATE_TRUNCATE -> O_TRUNC");

                while((_Bool)0);
                open_flags = open_flags | 01000;
              }

              else
                do
                  if(!(sftp_debugging == 0))
                    sftp_debug_printf("SSH_FXF_OPEN_OR_TRUNCATE -> not O_TRUNC");

                while((_Bool)0);
              if(!((1024u & flags) == 0u))
              {
                do
                  if(!(sftp_debugging == 0))
                    sftp_debug_printf("SSH_FXF_*|SSH_FXF_NOFOLLOW -> O_CREAT|O_EXCL");

                while((_Bool)0);
                fd=open(path, open_flags | 0100 | 0200, initial_permissions);
                if(fd >= 0)
                  created = 1;

                else
                {
                  return_value___errno_location_4=__errno_location();
                  if(*return_value___errno_location_4 == 17)
                  {
                    do
                      if(!(sftp_debugging == 0))
                        sftp_debug_printf("SSH_FXF_*|SSH_FXF_NOFOLLOW -> EEXIST");

                    while((_Bool)0);
                    signed int return_value_lstat_3;
                    return_value_lstat_3=lstat(path, &sb);
                    if(!(return_value_lstat_3 >= 0))
                      return (unsigned int)-2;

                    if((61440u & sb.st_mode) == 40960u)
                      return (unsigned int)21;

                    fd=open(path, open_flags, initial_permissions);
                    created = 0;
                  }

                  else
                    created = 0;
                }
              }

              else
              {
                do
                  if(!(sftp_debugging == 0))
                    sftp_debug_printf("SSH_FXF_* -> test for existence");

                while((_Bool)0);
                signed int return_value_stat_5;
                return_value_stat_5=stat(path, &sb);
                if(return_value_stat_5 == 0)
                {
                  do
                    if(!(sftp_debugging == 0))
                      sftp_debug_printf("SSH_FXF_* -> open");

                  while((_Bool)0);
                  fd=open(path, open_flags, initial_permissions);
                  created = 0;
                }

                else
                {
                  do
                    if(!(sftp_debugging == 0))
                      sftp_debug_printf("SSH_FXF_* -> O_CREAT");

                  while((_Bool)0);
                  fd=open(path, open_flags | 0100, initial_permissions);
                  created = 0;
                }
              }
              break;
            }
            case (unsigned int)0x00000002:
            {
              if(!((1024u & flags) == 0u))
              {
                do
                  if(!(sftp_debugging == 0))
                    sftp_debug_printf("emulating O_NOFOLLOW");

                while((_Bool)0);
                signed int return_value_lstat_6;
                return_value_lstat_6=lstat(path, &sb);
                if(return_value_lstat_6 == 0)
                {
                  if((61440u & sb.st_mode) == 40960u)
                    return (unsigned int)21;

                }

              }

              do
                if(!(sftp_debugging == 0))
                  sftp_debug_printf("SSH_FXF_OPEN_EXISTING -> open");

              while((_Bool)0);
              fd=open(path, open_flags, initial_permissions);
              created = 0;
              break;
            }
            case (unsigned int)0x00000004:
            {
              if(!((1024u & flags) == 0u))
              {
                do
                  if(!(sftp_debugging == 0))
                    sftp_debug_printf("emulating O_NOFOLLOW");

                while((_Bool)0);
                signed int return_value_lstat_7;
                return_value_lstat_7=lstat(path, &sb);
                if(return_value_lstat_7 == 0)
                {
                  if((61440u & sb.st_mode) == 40960u)
                    return (unsigned int)21;

                }

              }

              do
                if(!(sftp_debugging == 0))
                  sftp_debug_printf("SSH_FXF_TRUNCATE_EXISTING -> O_TRUNC");

              while((_Bool)0);
              fd=open(path, open_flags | 01000, initial_permissions);
              created = 0;
              break;
            }
            default:
              return (unsigned int)8;
          }
          if(fd >= 0)
          {
            return_value_fstat_8=fstat(fd, &sb);
            if(!(return_value_fstat_8 == 0))
              goto __CPROVER_DUMP_L75;

            if(!((61440u & sb.st_mode) == 16384u))
              goto __CPROVER_DUMP_L75;

            close(fd);
            return (unsigned int)24;
          }

          else
          {

          __CPROVER_DUMP_L75:
            ;
            if(!(fd >= 0))
            {
              if((7u & flags) == 2u || (7u & flags) == 4u)
              {
                return_value___errno_location_12=__errno_location();
                if(*return_value___errno_location_12 == 2)
                {
                  const char *return_value_sftp_dirname_9;
                  return_value_sftp_dirname_9=sftp_dirname(job->a, path);
                  signed int return_value_lstat_10;
                  return_value_lstat_10=lstat(return_value_sftp_dirname_9, &sb);
                  if(!(return_value_lstat_10 >= 0))
                    return (unsigned int)10;

                  signed int *return_value___errno_location_11;
                  return_value___errno_location_11=__errno_location();
                  *return_value___errno_location_11 = 2;
                }

              }

              if(!((1024u & flags) == 0u))
              {
                return_value___errno_location_14=__errno_location();
                if(*return_value___errno_location_14 == 2)
                  tmp_if_expr_16 = (_Bool)1;

                else
                {
                  return_value___errno_location_15=__errno_location();
                  tmp_if_expr_16 = *return_value___errno_location_15 == 17 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_16)
                {
                  signed int return_value_lstat_13;
                  return_value_lstat_13=lstat(path, &sb);
                  if(!(return_value_lstat_13 >= 0))
                    return (unsigned int)-2;

                  if((61440u & sb.st_mode) == 40960u)
                    return (unsigned int)21;

                }

              }

              return (unsigned int)-2;
            }

            if(!(created == 0))
            {
              if(!(attrs->valid == 0u))
              {
                rc=sftp_set_fstatus(job->a, fd, attrs, ((const char **)NULL));
                if(!(rc == 0u))
                {
                  signed int save_errno;
                  signed int *return_value___errno_location_17;
                  return_value___errno_location_17=__errno_location();
                  save_errno = *return_value___errno_location_17;
                  close(fd);
                  unlink(path);
                  signed int *return_value___errno_location_18;
                  return_value___errno_location_18=__errno_location();
                  *return_value___errno_location_18 = save_errno;
                  return rc;
                }

              }

            }

            if(!((2048u & flags) == 0u))
            {
              do
                if(!(sftp_debugging == 0))
                  sftp_debug_printf("SSH_FXF_DELETE_ON_CLOSE");

              while((_Bool)0);
              unlink(path);
            }

            sftp_handle_new_file(&id, fd, path, sftp_generic_open__1__sftp_handle_flags);
            do
              if(!(sftp_debugging == 0))
                sftp_debug_printf("...handle is %u %u", id.id, id.tag);

            while((_Bool)0);
            sftp_send_begin(job->worker);
            sftp_send_uint8(job->worker, 102);
            sftp_send_uint32(job->worker, job->id);
            sftp_send_handle(job->worker, &id);
            sftp_send_end(job->worker);
            return (unsigned int)-1;
          }
        }
      }
    }
  }
}

// sftp_getcwd
// file utils.h line 167
char * sftp_getcwd(struct allocator *a)
{
  char *buffer = ((char *)NULL);
  unsigned long int size = (unsigned long int)32;
  unsigned long int oldsize = (unsigned long int)0;
  signed int *return_value___errno_location_4;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  do
  {
    void *return_value_sftp_alloc_more_1;
    return_value_sftp_alloc_more_1=sftp_alloc_more(a, (void *)buffer, oldsize, size);
    buffer = (char *)return_value_sftp_alloc_more_1;
    char *return_value_getcwd_5;
    return_value_getcwd_5=getcwd(buffer, size);
    if(!(return_value_getcwd_5 == ((char *)NULL)))
      return buffer;

    else
    {
      return_value___errno_location_4=__errno_location();
      if(!(*return_value___errno_location_4 == 34))
      {
        do
          if(!(sftp_debugging == 0))
          {
            return_value___errno_location_2=__errno_location();
            return_value_strerror_3=strerror(*return_value___errno_location_2);
            sftp_debug_printf("getcwd returned error %s", return_value_strerror_3);
          }

        while((_Bool)0);
        return ((char *)NULL);
      }

    }
    oldsize = size;
    size = size * (unsigned long int)2;
  }
  while(!(size == 0ul));
  return ((char *)NULL);
}

// sftp_gid2name
// file users.c line 48
char * sftp_gid2name(struct allocator *a, unsigned int gid)
{
  char *s;
  struct group *gr;
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&user_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"users.c", 52, (const void *)"pthread_mutex_lock(&user_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  gr=getgrgid(gid);
  unsigned long int return_value_strlen_2;
  void *return_value_sftp_alloc_3;
  if(!(gr == ((struct group *)NULL)))
  {
    return_value_strlen_2=strlen(gr->gr_name);
    return_value_sftp_alloc_3=sftp_alloc(a, return_value_strlen_2 + (unsigned long int)1);
    s=strcpy((char *)return_value_sftp_alloc_3, gr->gr_name);
  }

  else
    s = ((char *)NULL);
  do
  {
    signed int sftp_gid2name__1__2__frc;
    sftp_gid2name__1__2__frc=pthread_mutex_unlock(&user_lock);
    if(!(sftp_gid2name__1__2__frc == 0))
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(sftp_gid2name__1__2__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"users.c", 57, (const void *)"pthread_mutex_unlock(&user_lock)", return_value_strerror_4);
      exit(1);
    }

  }
  while((_Bool)0);
  return s;
}

// sftp_handle_close
// file handle.c line 137
unsigned int sftp_handle_close(struct handleid *id)
{
  unsigned int rc;
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&sftp_handle_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 140, (const void *)"pthread_mutex_lock(&sftp_handle_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  _Bool tmp_if_expr_4;
  if(!((unsigned long int)id->id >= nhandles))
    tmp_if_expr_4 = id->tag == (handles + (signed long int)id->id)->tag ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_4 = (_Bool)0;
  signed int return_value_close_2;
  signed int return_value_closedir_3;
  if(tmp_if_expr_4)
  {
    (handles + (signed long int)id->id)->tag = (unsigned int)0;
    switch((handles + (signed long int)id->id)->type)
    {
      case 3:
      {
        return_value_close_2=close((handles + (signed long int)id->id)->u.fd);
        if(!(return_value_close_2 >= 0))
          rc = (unsigned int)-2;

        else
          rc = (unsigned int)0;
        break;
      }
      case 11:
      {
        return_value_closedir_3=closedir((handles + (signed long int)id->id)->u.dir);
        if(!(return_value_closedir_3 >= 0))
          rc = (unsigned int)-2;

        else
          rc = (unsigned int)0;
        break;
      }
      default:
        rc = (unsigned int)9;
    }
    free((void *)(handles + (signed long int)id->id)->path);
  }

  else
    rc = (unsigned int)9;
  do
  {
    signed int sftp_handle_close__1__3__frc;
    sftp_handle_close__1__3__frc=pthread_mutex_unlock(&sftp_handle_lock);
    if(!(sftp_handle_close__1__3__frc == 0))
    {
      char *return_value_strerror_5;
      return_value_strerror_5=strerror(sftp_handle_close__1__3__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 164, (const void *)"pthread_mutex_unlock(&sftp_handle_lock)", return_value_strerror_5);
      exit(1);
    }

  }
  while((_Bool)0);
  return rc;
}

// sftp_handle_flags
// file handle.c line 168
unsigned int sftp_handle_flags(struct handleid *id)
{
  unsigned int rc;
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&sftp_handle_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 171, (const void *)"pthread_mutex_lock(&sftp_handle_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  _Bool tmp_if_expr_2;
  if(!((unsigned long int)id->id >= nhandles))
    tmp_if_expr_2 = id->tag == (handles + (signed long int)id->id)->tag ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
    rc = (handles + (signed long int)id->id)->flags;

  else
    rc = (unsigned int)0;
  do
  {
    signed int sftp_handle_flags__1__2__frc;
    sftp_handle_flags__1__2__frc=pthread_mutex_unlock(&sftp_handle_lock);
    if(!(sftp_handle_flags__1__2__frc == 0))
    {
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(sftp_handle_flags__1__2__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 177, (const void *)"pthread_mutex_unlock(&sftp_handle_lock)", return_value_strerror_3);
      exit(1);
    }

  }
  while((_Bool)0);
  return rc;
}

// sftp_handle_get_dir
// file handle.c line 119
unsigned int sftp_handle_get_dir(struct handleid *id, struct __dirstream **dp, const char **pathp)
{
  unsigned int rc;
  do
  {
    signed int sftp_handle_get_dir__1__1__frc;
    sftp_handle_get_dir__1__1__frc=pthread_mutex_lock(&sftp_handle_lock);
    if(!(sftp_handle_get_dir__1__1__frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(sftp_handle_get_dir__1__1__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 123, (const void *)"pthread_mutex_lock(&sftp_handle_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  _Bool tmp_if_expr_2;
  if(!((unsigned long int)id->id >= nhandles))
    tmp_if_expr_2 = id->tag == (handles + (signed long int)id->id)->tag ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (handles + (signed long int)id->id)->type == 11 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  if(tmp_if_expr_3)
  {
    *dp = (handles + (signed long int)id->id)->u.dir;
    if(!(pathp == ((const char **)NULL)))
      *pathp = (handles + (signed long int)id->id)->path;

    rc = (unsigned int)0;
  }

  else
    rc = (unsigned int)9;
  do
  {
    signed int frc;
    frc=pthread_mutex_unlock(&sftp_handle_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 133, (const void *)"pthread_mutex_unlock(&sftp_handle_lock)", return_value_strerror_4);
      exit(1);
    }

  }
  while((_Bool)0);
  return rc;
}

// sftp_handle_get_fd
// file handle.c line 101
unsigned int sftp_handle_get_fd(struct handleid *id, signed int *fd, unsigned int *flagsp)
{
  unsigned int rc;
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&sftp_handle_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 105, (const void *)"pthread_mutex_lock(&sftp_handle_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  _Bool tmp_if_expr_2;
  if(!((unsigned long int)id->id >= nhandles))
    tmp_if_expr_2 = id->tag == (handles + (signed long int)id->id)->tag ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (handles + (signed long int)id->id)->type == 3 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  if(tmp_if_expr_3)
  {
    *fd = (handles + (signed long int)id->id)->u.fd;
    if(!(flagsp == ((unsigned int *)NULL)))
      *flagsp = (handles + (signed long int)id->id)->flags;

    rc = (unsigned int)0;
  }

  else
    rc = (unsigned int)9;
  do
  {
    signed int sftp_handle_get_fd__1__3__frc;
    sftp_handle_get_fd__1__3__frc=pthread_mutex_unlock(&sftp_handle_lock);
    if(!(sftp_handle_get_fd__1__3__frc == 0))
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(sftp_handle_get_fd__1__3__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 115, (const void *)"pthread_mutex_unlock(&sftp_handle_lock)", return_value_strerror_4);
      exit(1);
    }

  }
  while((_Bool)0);
  return rc;
}

// sftp_handle_new_dir
// file handle.c line 93
void sftp_handle_new_dir(struct handleid *id, struct __dirstream *dp, const char *path)
{
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&sftp_handle_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 94, (const void *)"pthread_mutex_lock(&sftp_handle_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  find_free_handle(id, 11);
  (handles + (signed long int)id->id)->u.dir = dp;
  (handles + (signed long int)id->id)->path=xstrdup(path);
  do
  {
    signed int sftp_handle_new_dir__1__2__frc;
    sftp_handle_new_dir__1__2__frc=pthread_mutex_unlock(&sftp_handle_lock);
    if(!(sftp_handle_new_dir__1__2__frc == 0))
    {
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(sftp_handle_new_dir__1__2__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 98, (const void *)"pthread_mutex_unlock(&sftp_handle_lock)", return_value_strerror_2);
      exit(1);
    }

  }
  while((_Bool)0);
}

// sftp_handle_new_file
// file handle.c line 83
void sftp_handle_new_file(struct handleid *id, signed int fd, const char *path, unsigned int flags)
{
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&sftp_handle_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 85, (const void *)"pthread_mutex_lock(&sftp_handle_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  find_free_handle(id, 3);
  (handles + (signed long int)id->id)->u.fd = fd;
  (handles + (signed long int)id->id)->path=xstrdup(path);
  (handles + (signed long int)id->id)->flags = flags;
  do
  {
    signed int sftp_handle_new_file__1__2__frc;
    sftp_handle_new_file__1__2__frc=pthread_mutex_unlock(&sftp_handle_lock);
    if(!(sftp_handle_new_file__1__2__frc == 0))
    {
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(sftp_handle_new_file__1__2__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"handle.c", 90, (const void *)"pthread_mutex_unlock(&sftp_handle_lock)", return_value_strerror_2);
      exit(1);
    }

  }
  while((_Bool)0);
}

// sftp_iconv
// file charset.c line 46
signed int sftp_iconv(struct allocator *a, void *cd, char **sp)
{
  const char * const input = *sp;
  unsigned long int inputsize;
  inputsize=strlen(input);
  unsigned long int outputsize;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(input);
  outputsize = (unsigned long int)2 * return_value_strlen_1 + (unsigned long int)1;
  unsigned long int rc;
  const char *inbuf;
  char *outbuf;
  char *output;
  unsigned long int inbytesleft;
  unsigned long int outbytesleft;
  /* assertion cd != 0 */
  assert(cd != NULL);
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_2;
  do
  {
    void *return_value_sftp_alloc_4;
    return_value_sftp_alloc_4=sftp_alloc(a, outputsize);
    output = (char *)return_value_sftp_alloc_4;
    iconv(cd, ((char ** restrict )NULL), ((unsigned long int *)NULL), ((char ** restrict )NULL), ((unsigned long int *)NULL));
    inbuf = input;
    inbytesleft = inputsize;
    outbuf = output;
    outbytesleft = outputsize;
    rc=iconv(cd, (char ** restrict )(void *)&inbuf, &inbytesleft, &outbuf, &outbytesleft);
    outputsize = outputsize * (unsigned long int)2;
    if(rc == 18446744073709551615ul)
    {
      return_value___errno_location_2=__errno_location();
      tmp_if_expr_3 = *return_value___errno_location_2 == 7 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
  }
  while(tmp_if_expr_3);
  if(rc == 18446744073709551615ul)
    return -1;

  else
  {
    *sp = output;
    return 0;
  }
}

// sftp_init
// file sftpserver.c line 141
static unsigned int sftp_init(struct sftpjob *job)
{
  unsigned int sftp_init__1__version;
  unsigned long int offset;
  signed int n;
  if(!(protocol == &sftp_preinit))
    return (unsigned int)4;

  else
  {
    do
    {
      unsigned int rc;
      rc=sftp_parse_uint32(job, &sftp_init__1__version);
      if(!(rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"sftpserver.c", 149, (const void *)"sftp_parse_uint32(job, &version)", rc);

        while((_Bool)0);
        return rc;
      }

    }
    while((_Bool)0);
    switch(sftp_init__1__version)
    {
      case (unsigned int)0:

      case (unsigned int)1:

      case (unsigned int)2:
        return (unsigned int)8;
      case (unsigned int)3:
      {
        protocol = &sftp_v3;
        break;
      }
      case (unsigned int)4:
      {
        protocol = &sftp_v4;
        break;
      }
      case (unsigned int)5:
      {
        protocol = &sftp_v5;
        break;
      }
      default:
        protocol = &sftp_v6;
    }
    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 2);
    sftp_send_uint32(job->worker, (unsigned int)protocol->version);
    if(protocol->version >= 4)
    {
      sftp_send_string(job->worker, "newline");
      sftp_send_string(job->worker, "\n");
    }

    if(protocol->version == 5)
    {
      sftp_send_string(job->worker, "supported");
      offset=sftp_send_sub_begin(job->worker);
      sftp_send_uint32(job->worker, (unsigned int)(0x00000001 | 0x00000004 | 0x00000008 | 0x00000020 | 0x00000080 | 0x00000100));
      sftp_send_uint32(job->worker, (unsigned int)0);
      sftp_send_uint32(job->worker, (unsigned int)(0x00000007 | 0x00000008 | 0x00000010 | 0x00000020));
      sftp_send_uint32(job->worker, 0xFFFFFFFF);
      sftp_send_uint32(job->worker, (unsigned int)0);
      n = 0;
      for( ; !(n >= protocol->nextensions); n = n + 1)
        sftp_send_string(job->worker, (protocol->extensions + (signed long int)n)->name);
      sftp_send_sub_end(job->worker, offset);
    }

    if(protocol->version >= 6)
    {
      sftp_send_string(job->worker, "supported2");
      offset=sftp_send_sub_begin(job->worker);
      sftp_send_uint32(job->worker, (unsigned int)(0x00000001 | 0x00000004 | 0x00000008 | 0x00000020 | 0x00000080 | 0x00000100));
      sftp_send_uint32(job->worker, (unsigned int)0);
      sftp_send_uint32(job->worker, (unsigned int)(0x00000007 | 0x00000008 | 0x00000010 | 0x00000020 | 0x00000400 | 0x00000800));
      sftp_send_uint32(job->worker, 0xFFFFFFFF);
      sftp_send_uint32(job->worker, (unsigned int)0);
      sftp_send_uint16(job->worker, (unsigned short int)1);
      sftp_send_uint16(job->worker, (unsigned short int)1);
      sftp_send_uint32(job->worker, (unsigned int)0);
      sftp_send_uint32(job->worker, (unsigned int)protocol->nextensions);
      n = 0;
      for( ; !(n >= protocol->nextensions); n = n + 1)
        sftp_send_string(job->worker, (protocol->extensions + (signed long int)n)->name);
      sftp_send_sub_end(job->worker, offset);
      sftp_send_string(job->worker, "versions");
      sftp_send_string(job->worker, "3,4,5,6");
    }

    sftp_send_string(job->worker, "vendor-id");
    offset=sftp_send_sub_begin(job->worker);
    sftp_send_string(job->worker, "Green End");
    sftp_send_string(job->worker, "Green End SFTP Server");
    sftp_send_string(job->worker, "0.2.1");
    sftp_send_uint64(job->worker, (unsigned long int)0);
    sftp_send_sub_end(job->worker, offset);
    sftp_send_string(job->worker, "symlink-order@rjk.greenend.org.uk");
    if(!(reverse_symlink == 0))
      sftp_send_string(job->worker, "targetpath-linkpath");

    else
      sftp_send_string(job->worker, "linkpath-targetpath");
    if(protocol->version >= 6)
    {
      sftp_send_string(job->worker, "link-order@rjk.greenend.org.uk");
      sftp_send_string(job->worker, "linkpath-targetpath");
    }

    sftp_send_end(job->worker);
    if(!(protocol->version >= 6))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("normal work queue creation");

      while((_Bool)0);
      queue_init(&workqueue, &workqueue_details, 4);
    }

    return (unsigned int)-1;
  }
}

// sftp_mbs2wcs
// file charset.c line 31
signed int * sftp_mbs2wcs(const char *s)
{
  signed int *ws;
  unsigned long int len;
  struct anonymous_1 ps;
  memset((void *)&ps, 0, sizeof(struct anonymous_1) /*8ul*/ );
  len=mbsrtowcs(((signed int *)NULL), &s, (unsigned long int)0, &ps);
  if(len == 18446744073709551615ul)
    return ((signed int *)NULL);

  else
  {
    void *return_value_xcalloc_1;
    return_value_xcalloc_1=xcalloc(len + (unsigned long int)1, sizeof(signed int) /*4ul*/ );
    ws = (signed int *)return_value_xcalloc_1;
    memset((void *)&ps, 0, sizeof(struct anonymous_1) /*8ul*/ );
    mbsrtowcs(ws, &s, len, &ps);
    return ws;
  }
}

// sftp_name2gid
// file users.c line 74
unsigned int sftp_name2gid(const char *name)
{
  struct group *gr;
  unsigned int gid;
  do
  {
    signed int sftp_name2gid__1__1__frc;
    sftp_name2gid__1__1__frc=pthread_mutex_lock(&user_lock);
    if(!(sftp_name2gid__1__1__frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(sftp_name2gid__1__1__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"users.c", 78, (const void *)"pthread_mutex_lock(&user_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  gr=getgrnam(name);
  if(!(gr == ((struct group *)NULL)))
    gid = gr->gr_gid;

  else
    gid = (unsigned int)-1;
  do
  {
    signed int frc;
    frc=pthread_mutex_unlock(&user_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"users.c", 83, (const void *)"pthread_mutex_unlock(&user_lock)", return_value_strerror_2);
      exit(1);
    }

  }
  while((_Bool)0);
  return gid;
}

// sftp_name2uid
// file users.c line 61
unsigned int sftp_name2uid(const char *name)
{
  struct passwd *pw;
  unsigned int uid;
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&user_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"users.c", 65, (const void *)"pthread_mutex_lock(&user_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  pw=getpwnam(name);
  if(!(pw == ((struct passwd *)NULL)))
    uid = pw->pw_uid;

  else
    uid = (unsigned int)-1;
  do
  {
    signed int sftp_name2uid__1__2__frc;
    sftp_name2uid__1__2__frc=pthread_mutex_unlock(&user_lock);
    if(!(sftp_name2uid__1__2__frc == 0))
    {
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(sftp_name2uid__1__2__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"users.c", 70, (const void *)"pthread_mutex_unlock(&user_lock)", return_value_strerror_2);
      exit(1);
    }

  }
  while((_Bool)0);
  return uid;
}

// sftp_normalize_ownergroup
// file stat.h line 67
unsigned int sftp_normalize_ownergroup(struct allocator *a, struct sftpattr *attrs)
{
  unsigned int rc = (unsigned int)0;
  switch(attrs->valid & (unsigned int)(0x00000002 | 0x00000080))
  {
    case (unsigned int)0x00000002:
    {
      attrs->owner=sftp_uid2name(a, attrs->uid);
      if(!(attrs->owner == ((char *)NULL)))
      {
        attrs->group=sftp_gid2name(a, attrs->gid);
        if(!(attrs->group == ((char *)NULL)))
          attrs->valid = attrs->valid | (unsigned int)0x00000080;

      }

      break;
    }
    case (unsigned int)0x00000080:
    {
      attrs->uid=sftp_name2uid(attrs->owner);
      if(attrs->uid == 4294967295u)
        rc = (unsigned int)29;

      attrs->gid=sftp_name2gid(attrs->group);
      if(attrs->gid == 4294967295u)
        rc = (unsigned int)30;

      if(rc == 0u)
        attrs->valid = attrs->valid | (unsigned int)0x00000002;

    }
  }
  return rc;
}

// sftp_parse_handle
// file parse.c line 97
unsigned int sftp_parse_handle(struct sftpjob *job, struct handleid *id)
{
  unsigned int len;
  unsigned int rc;
  rc=sftp_parse_uint32(job, &len);
  _Bool tmp_if_expr_1;
  if(!(len == 8u) || !(rc == 0u))
    tmp_if_expr_1 = (_Bool)1;

  else
  {
    rc=sftp_parse_uint32(job, &id->id);
    tmp_if_expr_1 = rc != (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_3;
  unsigned int return_value_sftp_parse_uint32_2;
  if(tmp_if_expr_1)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_sftp_parse_uint32_2=sftp_parse_uint32(job, &id->tag);
    rc = (unsigned int)(return_value_sftp_parse_uint32_2 != (unsigned int)0);
    tmp_if_expr_3 = rc != 0u ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
    return rc;

  else
    return (unsigned int)0;
}

// sftp_parse_path
// file parse.c line 89
unsigned int sftp_parse_path(struct sftpjob *job, char **strp)
{
  unsigned int rc;
  rc=sftp_parse_string(job, strp, ((unsigned long int *)NULL));
  if(!(rc == 0u))
    return rc;

  else
  {
    unsigned int return_value;
    return_value=protocol->decode(job, strp);
    return return_value;
  }
}

// sftp_parse_string
// file parse.c line 67
unsigned int sftp_parse_string(struct sftpjob *job, char **strp, unsigned long int *lenp)
{
  unsigned int len;
  unsigned int rc;
  char *str;
  rc=sftp_parse_uint32(job, &len);
  if(!(rc == 0u))
    return rc;

  else
    if(len == 0xFFFFFFFF)
      return (unsigned int)5;

    else
      if(!(job->left >= (unsigned long int)len))
        return (unsigned int)5;

      else
      {
        if(!(lenp == ((unsigned long int *)NULL)))
          *lenp = (unsigned long int)len;

        if(!(strp == ((char **)NULL)))
        {
          void *return_value_sftp_alloc_1;
          return_value_sftp_alloc_1=sftp_alloc(job->a, (unsigned long int)(len + (unsigned int)1));
          str = (char *)return_value_sftp_alloc_1;
          memcpy((void *)str, (const void *)job->ptr, (unsigned long int)len);
          *strp = str;
        }

        job->ptr = job->ptr + (signed long int)len;
        job->left = job->left - (unsigned long int)len;
        return (unsigned int)0;
      }
}

// sftp_parse_uint16
// file parse.c line 40
unsigned int sftp_parse_uint16(struct sftpjob *job, unsigned short int *ur)
{
  if(!(job->left >= 2ul))
    return (unsigned int)5;

  else
  {
    *ur=get16((const void *)job->ptr);
    job->ptr = job->ptr + (signed long int)2;
    job->left = job->left - (unsigned long int)2;
    return (unsigned int)0;
  }
}

// sftp_parse_uint32
// file parse.h line 45
unsigned int sftp_parse_uint32(struct sftpjob *job, unsigned int *ur)
{
  if(!(job->left >= 4ul))
    return (unsigned int)5;

  else
  {
    *ur=get32((const void *)job->ptr);
    job->ptr = job->ptr + (signed long int)4;
    job->left = job->left - (unsigned long int)4;
    return (unsigned int)0;
  }
}

// sftp_parse_uint64
// file parse.c line 58
unsigned int sftp_parse_uint64(struct sftpjob *job, unsigned long int *ur)
{
  if(!(job->left >= 8ul))
    return (unsigned int)5;

  else
  {
    *ur=get64((const void *)job->ptr);
    job->ptr = job->ptr + (signed long int)8;
    job->left = job->left - (unsigned long int)8;
    return (unsigned int)0;
  }
}

// sftp_parse_uint8
// file parse.c line 32
unsigned int sftp_parse_uint8(struct sftpjob *job, unsigned char *ur)
{
  const unsigned char *tmp_post_1;
  if(!(job->left >= 1ul))
    return (unsigned int)5;

  else
  {
    tmp_post_1 = job->ptr;
    job->ptr = job->ptr + 1l;
    *ur = *tmp_post_1;
    job->left = job->left - 1ul;
    return (unsigned int)0;
  }
}

// sftp_send_begin
// file send.h line 39
void sftp_send_begin(struct worker *w)
{
  w->bufused = (unsigned long int)0;
  sftp_send_uint32(w, (unsigned int)0);
}

// sftp_send_bytes
// file send.c line 124
void sftp_send_bytes(struct worker *w, const void *bytes, unsigned long int n)
{
  sftp_send_need(w, n + (unsigned long int)4);
  do
  {
    put32((void *)&w->buffer[(signed long int)w->bufused], (unsigned int)n);
    w->bufused = w->bufused + (unsigned long int)4;
  }
  while((_Bool)0);
  memcpy((void *)(w->buffer + (signed long int)w->bufused), bytes, n);
  w->bufused = w->bufused + n;
}

// sftp_send_end
// file send.h line 50
void sftp_send_end(struct worker *w)
{
  signed long int n;
  signed long int written;
  /* assertion w->bufused < 0x80000000 */
  assert(w->bufused < (unsigned long int)0x80000000);
  *((unsigned int *)w->buffer)=htonl((unsigned int)(w->bufused - (unsigned long int)4));
  do
  {
    signed int frc;
    frc=pthread_mutex_lock(&output_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"send.c", 88, (const void *)"pthread_mutex_lock(&output_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  if(!(sftp_debugging == 0))
  {
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("%s:", (const void *)sendtype);

    while((_Bool)0);
    sftp_debug_hexdump((const void *)(w->buffer + (signed long int)4), w->bufused - (unsigned long int)4);
  }

  written = (signed long int)0;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  while(!((unsigned long int)written >= w->bufused))
  {
    n=write(sftpout, (const void *)(w->buffer + written), w->bufused - (unsigned long int)written);
    if(n >= 1l)
      written = written + n;

    else
      if(!(n >= 0l))
      {
        return_value___errno_location_2=__errno_location();
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        fatal("error sending response: %s", return_value_strerror_3);
      }

  }
  do
  {
    signed int sftp_send_end__1__3__frc;
    sftp_send_end__1__3__frc=pthread_mutex_unlock(&output_lock);
    if(!(sftp_send_end__1__3__frc == 0))
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(sftp_send_end__1__3__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"send.c", 100, (const void *)"pthread_mutex_unlock(&output_lock)", return_value_strerror_4);
      exit(1);
    }

  }
  while((_Bool)0);
  w->bufused = (unsigned long int)0x80000000;
}

// sftp_send_errno_status
// file status.c line 131
void sftp_send_errno_status(struct sftpjob *job)
{
  signed int n;
  signed int errno_value;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  errno_value = *return_value___errno_location_1;
  n = 0;
  _Bool tmp_if_expr_2;
  do
  {
    if(!(errnotab[(signed long int)n].errno_value == errno_value))
      tmp_if_expr_2 = errnotab[(signed long int)n].errno_value != -1 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(!tmp_if_expr_2)
      break;

    n = n + 1;
  }
  while((_Bool)1);
  char *return_value_strerror_3;
  return_value_strerror_3=strerror(errno_value);
  sftp_send_status(job, errnotab[(signed long int)n].status_value, return_value_strerror_3);
}

// sftp_send_handle
// file send.c line 141
void sftp_send_handle(struct worker *w, struct handleid *id)
{
  sftp_send_need(w, (unsigned long int)12);
  do
  {
    put32((void *)&w->buffer[(signed long int)w->bufused], (unsigned int)8);
    w->bufused = w->bufused + (unsigned long int)4;
  }
  while((_Bool)0);
  do
  {
    put32((void *)&w->buffer[(signed long int)w->bufused], id->id);
    w->bufused = w->bufused + (unsigned long int)4;
  }
  while((_Bool)0);
  do
  {
    put32((void *)&w->buffer[(signed long int)w->bufused], id->tag);
    w->bufused = w->bufused + (unsigned long int)4;
  }
  while((_Bool)0);
}

// sftp_send_need
// file send.c line 62
void sftp_send_need(struct worker *w, unsigned long int n)
{
  /* assertion w->bufused < 0x80000000 */
  assert(w->bufused < (unsigned long int)0x80000000);
  unsigned long int tmp_if_expr_1;
  if(!(w->bufsize + -w->bufused >= n))
  {
    unsigned long int newsize;
    if(!(w->bufsize == 0ul))
      tmp_if_expr_1 = w->bufsize;

    else
      tmp_if_expr_1 = (unsigned long int)64;
    newsize = tmp_if_expr_1;
    for( ; !(newsize == 0ul); newsize = newsize << 1)
      if(newsize >= w->bufsize + n)
        break;

    if(newsize == 0ul)
      fatal("sftp_send_need: out of memory (%zu)", n);

    w->bufsize = newsize;
    void *return_value_sftp__xrealloc_2;
    return_value_sftp__xrealloc_2=sftp__xrealloc((void *)w->buffer, w->bufsize);
    w->buffer = (unsigned char *)return_value_sftp__xrealloc_2;
  }

}

// sftp_send_path
// file send.c line 135
void sftp_send_path(struct sftpjob *job, struct worker *w, const char *path)
{
  signed int return_value;
  return_value=protocol->encode(job, (char **)&path);
  if(!(return_value == 0))
    fatal("cannot encode local path name '%s'", path);

  sftp_send_string(w, path);
}

// sftp_send_status
// file sftpserver.h line 60
void sftp_send_status(struct sftpjob *job, unsigned int status, const char *msg)
{
  if(status == 4294967294u)
    sftp_send_errno_status(job);

  else
  {
    if(msg == ((const char *)NULL))
      msg=status_to_string(status);

    if(!(protocol->maxstatus >= status))
      switch(status)
      {
        case (unsigned int)20:
        {
          status = (unsigned int)5;
          break;
        }
        case (unsigned int)10:
        {
          status = (unsigned int)2;
          break;
        }
        default:
          status = (unsigned int)4;
      }

    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 101);
    sftp_send_uint32(job->worker, job->id);
    sftp_send_uint32(job->worker, status);
    sftp_send_path(job, job->worker, msg);
    sftp_send_string(job->worker, "en");
    sftp_send_end(job->worker);
  }
}

// sftp_send_string
// file send.h line 93
void sftp_send_string(struct worker *w, const char *s)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s);
  sftp_send_bytes(w, (const void *)s, return_value_strlen_1);
}

// sftp_send_sub_begin
// file send.h line 108
unsigned long int sftp_send_sub_begin(struct worker *w)
{
  sftp_send_need(w, (unsigned long int)4);
  w->bufused = w->bufused + (unsigned long int)4;
  return w->bufused;
}

// sftp_send_sub_end
// file send.h line 114
void sftp_send_sub_end(struct worker *w, unsigned long int offset)
{
  const unsigned long int latest = w->bufused;
  w->bufused = offset - (unsigned long int)4;
  do
  {
    put32((void *)&w->buffer[(signed long int)w->bufused], (unsigned int)(latest - offset));
    w->bufused = w->bufused + (unsigned long int)4;
  }
  while((_Bool)0);
  w->bufused = latest;
}

// sftp_send_uint16
// file send.h line 62
void sftp_send_uint16(struct worker *w, unsigned short int u)
{
  sftp_send_need(w, (unsigned long int)2);
  do
  {
    put16((void *)&w->buffer[(signed long int)w->bufused], u);
    w->bufused = w->bufused + (unsigned long int)2;
  }
  while((_Bool)0);
}

// sftp_send_uint32
// file send.h line 68
void sftp_send_uint32(struct worker *w, unsigned int u)
{
  sftp_send_need(w, (unsigned long int)4);
  do
  {
    put32((void *)&w->buffer[(signed long int)w->bufused], u);
    w->bufused = w->bufused + (unsigned long int)4;
  }
  while((_Bool)0);
}

// sftp_send_uint64
// file send.h line 74
void sftp_send_uint64(struct worker *w, unsigned long int u)
{
  sftp_send_need(w, (unsigned long int)8);
  do
  {
    put64((void *)&w->buffer[(signed long int)w->bufused], u);
    w->bufused = w->bufused + (unsigned long int)8;
  }
  while((_Bool)0);
}

// sftp_send_uint8
// file send.h line 56
void sftp_send_uint8(struct worker *w, signed int n)
{
  sftp_send_need(w, (unsigned long int)1);
  unsigned long int tmp_post_1 = w->bufused;
  w->bufused = w->bufused + 1ul;
  w->buffer[(signed long int)tmp_post_1] = (unsigned char)n;
}

// sftp_service
// file sftpserver.c line 630
static void sftp_service(void)
{
  unsigned int len;
  struct sftpjob *job;
  struct allocator a;
  void *wdv;
  wdv=worker_init();
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("gesftpserver %s starting up", (const void *)"0.2.1");

  while((_Bool)0);
  umask((unsigned int)0);
  signed int return_value_do_read_1;
  _Bool tmp_if_expr_4;
  do
  {
    return_value_do_read_1=do_read(0, (void *)&len, sizeof(unsigned int) /*4ul*/ );
    if(!(return_value_do_read_1 == 0))
      break;

    void *return_value_sftp__xmalloc_2;
    return_value_sftp__xmalloc_2=sftp__xmalloc(sizeof(struct sftpjob) /*56ul*/ );
    job = (struct sftpjob *)return_value_sftp__xmalloc_2;
    unsigned int return_value_ntohl_3;
    return_value_ntohl_3=ntohl(len);
    job->len = (unsigned long int)return_value_ntohl_3;
    if(job->len == 0ul)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = job->len > (unsigned long int)1048576 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      fatal("invalid request size");

    void *return_value_sftp__xmalloc_5;
    return_value_sftp__xmalloc_5=sftp__xmalloc(job->len);
    job->data = (unsigned char *)return_value_sftp__xmalloc_5;
    signed int return_value_do_read_6;
    return_value_do_read_6=do_read(0, (void *)job->data, job->len);
    if(!(return_value_do_read_6 == 0))
      fatal("read error: unexpected eof");

    if(!(sftp_debugging == 0))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("request:");

      while((_Bool)0);
      sftp_debug_hexdump((const void *)job->data, job->len);
    }

    queue_serializable_job(job);
    if(!(workqueue == ((struct queue *)NULL)))
      queue_add(workqueue, (void *)job);

    else
    {
      sftp_alloc_init(&a);
      process_sftpjob((void *)job, wdv, &a);
      sftp_alloc_destroy(&a);
    }
  }
  while((_Bool)1);
  queue_destroy(workqueue);
  worker_cleanup(wdv);
}

// sftp_set_fstatus
// file stat.h line 89
unsigned int sftp_set_fstatus(struct allocator *a, signed int fd, struct sftpattr *attrsp, const char **whyp)
{
  unsigned int return_value_do_sftp_set_status_1;
  return_value_do_sftp_set_status_1=do_sftp_set_status(a, (const void *)&fd, attrsp, &fd_callbacks, whyp);
  return return_value_do_sftp_set_status_1;
}

// sftp_set_status
// file stat.h line 77
unsigned int sftp_set_status(struct allocator *a, const char *path, struct sftpattr *attrsp, const char **whyp)
{
  unsigned int return_value_do_sftp_set_status_1;
  return_value_do_sftp_set_status_1=do_sftp_set_status(a, (const void *)path, attrsp, &name_callbacks, whyp);
  return return_value_do_sftp_set_status_1;
}

// sftp_stat_to_attrs
// file stat.h line 109
void sftp_stat_to_attrs(struct allocator *a, struct stat *sb, struct sftpattr *attrs, unsigned int flags, const char *path)
{
  memset((void *)attrs, 0, sizeof(struct sftpattr) /*200ul*/ );
  attrs->valid = (unsigned int)(0x00000001 | 0x00000004 | 0x00000008 | 0x00000020 | 0x00000002 | 0x00000400 | 0x00002000 | 0x00008000 | 0x00000200);
  switch(sb->st_mode & (unsigned int)0170000)
  {
    case (unsigned int)0010000:
    {
      attrs->type = (unsigned char)9;
      break;
    }
    case (unsigned int)0020000:
    {
      attrs->type = (unsigned char)7;
      break;
    }
    case (unsigned int)0040000:
    {
      attrs->type = (unsigned char)2;
      break;
    }
    case (unsigned int)0060000:
    {
      attrs->type = (unsigned char)8;
      break;
    }
    case (unsigned int)0100000:
    {
      attrs->type = (unsigned char)1;
      break;
    }
    case (unsigned int)0120000:
    {
      attrs->type = (unsigned char)3;
      break;
    }
    case (unsigned int)0140000:
    {
      attrs->type = (unsigned char)6;
      break;
    }
    default:
      attrs->type = (unsigned char)4;
  }
  attrs->size = (unsigned long int)sb->st_size;
  attrs->allocation_size = (unsigned long int)sb->st_blksize * (unsigned long int)sb->st_blocks;
  if(!((128u & flags) == 0u))
  {
    attrs->owner=sftp_uid2name(a, sb->st_uid);
    if(!(attrs->owner == ((char *)NULL)))
    {
      attrs->group=sftp_gid2name(a, sb->st_gid);
      if(!(attrs->group == ((char *)NULL)))
        attrs->valid = attrs->valid | (unsigned int)0x00000080;

    }

  }

  attrs->uid = sb->st_uid;
  attrs->gid = sb->st_gid;
  attrs->permissions = sb->st_mode;
  attrs->atime.seconds = sb->st_atim.tv_sec;
  attrs->mtime.seconds = sb->st_mtim.tv_sec;
  attrs->ctime.seconds = sb->st_ctim.tv_sec;
  attrs->link_count = (unsigned int)sb->st_nlink;
  if(!(path == ((const char *)NULL)))
  {
    const char *s;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(path);
    s = path + (signed long int)return_value_strlen_1;
    for( ; !(path >= s); s = s - 1l)
      if(!((signed int)s[-1l] == 47))
        break;

    for( ; !(path >= s); s = s - 1l)
      if((signed int)s[-1l] == 47)
        break;

    if((signed int)*s == 46)
      attrs->attrib_bits = attrs->attrib_bits | (unsigned int)0x00000004;

    attrs->attrib_bits_valid = attrs->attrib_bits_valid | (unsigned int)0x00000004;
  }

  attrs->name = path;
}

// sftp_uid2name
// file users.c line 35
char * sftp_uid2name(struct allocator *a, unsigned int uid)
{
  char *s;
  struct passwd *pw;
  do
  {
    signed int sftp_uid2name__1__1__frc;
    sftp_uid2name__1__1__frc=pthread_mutex_lock(&user_lock);
    if(!(sftp_uid2name__1__1__frc == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(sftp_uid2name__1__1__frc);
      fatal("%s:%d: %s: %s\n", (const void *)"users.c", 39, (const void *)"pthread_mutex_lock(&user_lock)", return_value_strerror_1);
      exit(1);
    }

  }
  while((_Bool)0);
  pw=getpwuid(uid);
  unsigned long int return_value_strlen_2;
  void *return_value_sftp_alloc_3;
  if(!(pw == ((struct passwd *)NULL)))
  {
    return_value_strlen_2=strlen(pw->pw_name);
    return_value_sftp_alloc_3=sftp_alloc(a, return_value_strlen_2 + (unsigned long int)1);
    s=strcpy((char *)return_value_sftp_alloc_3, pw->pw_name);
  }

  else
    s = ((char *)NULL);
  do
  {
    signed int frc;
    frc=pthread_mutex_unlock(&user_lock);
    if(!(frc == 0))
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(frc);
      fatal("%s:%d: %s: %s\n", (const void *)"users.c", 44, (const void *)"pthread_mutex_unlock(&user_lock)", return_value_strerror_4);
      exit(1);
    }

  }
  while((_Bool)0);
  return s;
}

// sftp_v345_realpath
// file v3.c line 448
unsigned int sftp_v345_realpath(struct sftpjob *job)
{
  char *path;
  struct sftpattr attr;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 452, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_v345_realpath %s", path);

  while((_Bool)0);
  memset((void *)&attr, 0, sizeof(struct sftpattr) /*200ul*/ );
  attr.name=sftp_find_realpath(job->a, path, (unsigned int)0x0001);
  if(!(attr.name == ((const char *)NULL)))
  {
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("...real path is %s", attr.name);

    while((_Bool)0);
    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 104);
    sftp_send_uint32(job->worker, job->id);
    protocol->sendnames(job, 1, &attr);
    sftp_send_end(job->worker);
    return (unsigned int)-1;
  }

  else
    return (unsigned int)-2;
}

// sftp_v345_symlink
// file v3.c line 283
unsigned int sftp_v345_symlink(struct sftpjob *job)
{
  char *targetpath;
  char *linkpath;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    if(!(reverse_symlink == 0))
    {
      do
      {
        unsigned int rc;
        rc=sftp_parse_path(job, &targetpath);
        if(!(rc == 0u))
        {
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 330, (const void *)"sftp_parse_path(job, &targetpath)", rc);

          while((_Bool)0);
          return rc;
        }

      }
      while((_Bool)0);
      do
      {
        unsigned int sftp_v345_symlink__1__1__2__rc;
        sftp_v345_symlink__1__1__2__rc=sftp_parse_path(job, &linkpath);
        if(!(sftp_v345_symlink__1__1__2__rc == 0u))
        {
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 331, (const void *)"sftp_parse_path(job, &linkpath)", sftp_v345_symlink__1__1__2__rc);

          while((_Bool)0);
          return sftp_v345_symlink__1__1__2__rc;
        }

      }
      while((_Bool)0);
    }

    else
    {
      do
      {
        unsigned int sftp_v345_symlink__1__2__1__rc;
        sftp_v345_symlink__1__2__1__rc=sftp_parse_path(job, &linkpath);
        if(!(sftp_v345_symlink__1__2__1__rc == 0u))
        {
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 333, (const void *)"sftp_parse_path(job, &linkpath)", sftp_v345_symlink__1__2__1__rc);

          while((_Bool)0);
          return sftp_v345_symlink__1__2__1__rc;
        }

      }
      while((_Bool)0);
      do
      {
        unsigned int sftp_v345_symlink__1__2__2__rc;
        sftp_v345_symlink__1__2__2__rc=sftp_parse_path(job, &targetpath);
        if(!(sftp_v345_symlink__1__2__2__rc == 0u))
        {
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 334, (const void *)"sftp_parse_path(job, &targetpath)", sftp_v345_symlink__1__2__2__rc);

          while((_Bool)0);
          return sftp_v345_symlink__1__2__2__rc;
        }

      }
      while((_Bool)0);
    }
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_v345_symlink %s %s", targetpath, linkpath);

    while((_Bool)0);
    signed int return_value_symlink_1;
    return_value_symlink_1=symlink(targetpath, linkpath);
    if(!(return_value_symlink_1 >= 0))
      return (unsigned int)-2;

    else
      return (unsigned int)0;
  }
}

// sftp_v34_open
// file v3.c line 591
unsigned int sftp_v34_open(struct sftpjob *job)
{
  char *path;
  unsigned int pflags;
  struct sftpattr attrs;
  unsigned int desired_access = (unsigned int)0;
  unsigned int flags;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 598, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
  {
    unsigned int sftp_v34_open__1__2__rc;
    sftp_v34_open__1__2__rc=sftp_parse_uint32(job, &pflags);
    if(!(sftp_v34_open__1__2__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 599, (const void *)"sftp_parse_uint32(job, &pflags)", sftp_v34_open__1__2__rc);

      while((_Bool)0);
      return sftp_v34_open__1__2__rc;
    }

  }
  while((_Bool)0);
  unsigned int sftp_v34_open__1__3__rc;
  sftp_v34_open__1__3__rc=protocol->parseattrs(job, &attrs);
  if(!(sftp_v34_open__1__3__rc == 0u))
  {
    if(!(sftp_debugging == 0))
      sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 600, (const void *)"protocol->parseattrs(job, &attrs)", sftp_v34_open__1__3__rc);

    return sftp_v34_open__1__3__rc;
  }

  else
  {
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_v34_open %s %#x", path, pflags);

    if((56u & pflags) == 0u)
    {
      flags = (unsigned int)0x00000002;
      flags = (unsigned int)0x00000004;
      flags = (unsigned int)0x00000003;
      flags = (unsigned int)0x00000001;
      flags = (unsigned int)0x00000000;
    }

    return (unsigned int)5;
    if(!((64u & pflags) == 0u))
      flags = flags | (unsigned int)0x00000020;

    if(!((1u & pflags) == 0u))
      desired_access = desired_access | (unsigned int)(0x00000001 | 0x00000080);

    if(!((2u & pflags) == 0u))
      desired_access = desired_access | (unsigned int)(0x00000002 | 0x00000100);

    if(!((4u & pflags) == 0u))
    {
      flags = flags | (unsigned int)0x00000008;
      desired_access = desired_access | (unsigned int)0x00000004;
    }

    unsigned int return_value_sftp_generic_open_1;
    return_value_sftp_generic_open_1=sftp_generic_open(job, path, desired_access, flags, &attrs);
    return return_value_sftp_generic_open_1;
  }
}

// sftp_v34_rename
// file v3.c line 228
unsigned int sftp_v34_rename(struct sftpjob *job)
{
  char *oldpath;
  char *newpath;
  signed int return_value_unlink_5;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int rc;
      rc=sftp_parse_path(job, &oldpath);
      if(!(rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 233, (const void *)"sftp_parse_path(job, &oldpath)", rc);

        while((_Bool)0);
        return rc;
      }

    }
    while((_Bool)0);
    do
    {
      unsigned int sftp_v34_rename__1__2__rc;
      sftp_v34_rename__1__2__rc=sftp_parse_path(job, &newpath);
      if(!(sftp_v34_rename__1__2__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 234, (const void *)"sftp_parse_path(job, &newpath)", sftp_v34_rename__1__2__rc);

        while((_Bool)0);
        return sftp_v34_rename__1__2__rc;
      }

    }
    while((_Bool)0);
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_v34_rename %s %s", oldpath, newpath);

    while((_Bool)0);
    signed int return_value_link_6;
    return_value_link_6=link(oldpath, newpath);
    if(!(return_value_link_6 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(!(*return_value___errno_location_2 == 17))
      {
        signed int return_value_rename_1;
        return_value_rename_1=rename(oldpath, newpath);
        if(!(return_value_rename_1 >= 0))
          return (unsigned int)-2;

        else
          return (unsigned int)0;
      }

      else
        return (unsigned int)-2;
    }

    else
    {
      return_value_unlink_5=unlink(oldpath);
      if(!(return_value_unlink_5 >= 0))
      {
        signed int save_errno;
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        save_errno = *return_value___errno_location_3;
        unlink(newpath);
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        *return_value___errno_location_4 = save_errno;
        return (unsigned int)-2;
      }

      else
        return (unsigned int)0;
    }
  }
}

// sftp_v3_encode
// file sftpserver.h line 187
signed int sftp_v3_encode(struct sftpjob *job, char **path)
{
  return 0;
}

// sftp_v3_fstat
// file v3.c line 507
static unsigned int sftp_v3_fstat(struct sftpjob *job)
{
  signed int fd;
  struct handleid id;
  struct stat sb;
  unsigned int rc;
  do
  {
    unsigned int sftp_v3_fstat__1__1__rc;
    sftp_v3_fstat__1__1__rc=sftp_parse_handle(job, &id);
    if(!(sftp_v3_fstat__1__1__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 513, (const void *)"sftp_parse_handle(job, &id)", sftp_v3_fstat__1__1__rc);

      while((_Bool)0);
      return sftp_v3_fstat__1__1__rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_v3_fstat %u %u", id.id, id.tag);

  while((_Bool)0);
  rc=sftp_handle_get_fd(&id, &fd, ((unsigned int *)NULL));
  if(!(rc == 0u))
    return rc;

  else
  {
    signed int return_value_fstat_1;
    return_value_fstat_1=fstat(fd, &sb);
    unsigned int return_value_sftp_v3_stat_core_2;
    return_value_sftp_v3_stat_core_2=sftp_v3_stat_core(job, return_value_fstat_1, &sb);
    return return_value_sftp_v3_stat_core_2;
  }
}

// sftp_v3_lstat
// file v3.c line 489
static unsigned int sftp_v3_lstat(struct sftpjob *job)
{
  char *path;
  struct stat sb;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 493, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_v3_lstat %s", path);

  while((_Bool)0);
  signed int return_value_lstat_1;
  return_value_lstat_1=lstat(path, &sb);
  unsigned int return_value_sftp_v3_stat_core_2;
  return_value_sftp_v3_stat_core_2=sftp_v3_stat_core(job, return_value_lstat_1, &sb);
  return return_value_sftp_v3_stat_core_2;
}

// sftp_v3_stat
// file v3.c line 498
static unsigned int sftp_v3_stat(struct sftpjob *job)
{
  char *path;
  struct stat sb;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 502, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_v3_stat %s", path);

  while((_Bool)0);
  signed int return_value_stat_1;
  return_value_stat_1=stat(path, &sb);
  unsigned int return_value_sftp_v3_stat_core_2;
  return_value_sftp_v3_stat_core_2=sftp_v3_stat_core(job, return_value_stat_1, &sb);
  return return_value_sftp_v3_stat_core_2;
}

// sftp_v3_stat_core
// file v3.c line 470
static unsigned int sftp_v3_stat_core(struct sftpjob *job, signed int rc, struct stat *sb)
{
  struct sftpattr attrs;
  if(rc == 0)
  {
    sftp_stat_to_attrs(job->a, sb, &attrs, ~((unsigned int)0x00000080), ((const char *)NULL));
    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 105);
    sftp_send_uint32(job->worker, job->id);
    protocol->sendattrs(job, &attrs);
    sftp_send_end(job->worker);
    return (unsigned int)-1;
  }

  else
    return (unsigned int)-2;
}

// sftp_v456_decode
// file v4.c line 40
unsigned int sftp_v456_decode(struct sftpjob *job, char **path)
{
  signed int return_value_sftp_iconv_1;
  return_value_sftp_iconv_1=sftp_iconv(job->a, job->worker->utf8_to_local, path);
  if(!(return_value_sftp_iconv_1 == 0))
    return (unsigned int)20;

  else
    return (unsigned int)0;
}

// sftp_v456_encode
// file v4.c line 34
signed int sftp_v456_encode(struct sftpjob *job, char **path)
{
  signed int return_value_sftp_iconv_1;
  return_value_sftp_iconv_1=sftp_iconv(job->a, job->worker->local_to_utf8, path);
  return return_value_sftp_iconv_1;
}

// sftp_v456_fstat
// file v4.c line 250
unsigned int sftp_v456_fstat(struct sftpjob *job)
{
  signed int fd;
  struct handleid id;
  struct stat sb;
  unsigned int rc;
  do
  {
    unsigned int sftp_v456_fstat__1__1__rc;
    sftp_v456_fstat__1__1__rc=sftp_parse_handle(job, &id);
    if(!(sftp_v456_fstat__1__1__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v4.c", 256, (const void *)"sftp_parse_handle(job, &id)", sftp_v456_fstat__1__1__rc);

      while((_Bool)0);
      return sftp_v456_fstat__1__1__rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_fstat %u %u", id.id, id.tag);

  while((_Bool)0);
  rc=sftp_handle_get_fd(&id, &fd, ((unsigned int *)NULL));
  if(!(rc == 0u))
    return rc;

  else
  {
    signed int return_value_fstat_1;
    return_value_fstat_1=fstat(fd, &sb);
    unsigned int return_value_sftp_v456_stat_core_2;
    return_value_sftp_v456_stat_core_2=sftp_v456_stat_core(job, return_value_fstat_1, &sb, ((const char *)NULL));
    return return_value_sftp_v456_stat_core_2;
  }
}

// sftp_v456_lstat
// file v4.c line 232
unsigned int sftp_v456_lstat(struct sftpjob *job)
{
  char *path;
  struct stat sb;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v4.c", 236, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_lstat %s", path);

  while((_Bool)0);
  signed int return_value_lstat_1;
  return_value_lstat_1=lstat(path, &sb);
  unsigned int return_value_sftp_v456_stat_core_2;
  return_value_sftp_v456_stat_core_2=sftp_v456_stat_core(job, return_value_lstat_1, &sb, path);
  return return_value_sftp_v456_stat_core_2;
}

// sftp_v456_parseattrs
// file v4.c line 107
unsigned int sftp_v456_parseattrs(struct sftpjob *job, struct sftpattr *attrs)
{
  unsigned int n;
  unsigned int rc;
  memset((void *)attrs, 0, sizeof(struct sftpattr) /*200ul*/ );
  rc=sftp_parse_uint32(job, &attrs->valid);
  unsigned int tmp_post_1;
  if(!(rc == 0u))
    return rc;

  else
  {
    rc=sftp_parse_uint8(job, &attrs->type);
    if(!(rc == 0u))
      return rc;

    else
      if(!((1u & attrs->valid) == 0u))
      {
        rc=sftp_parse_uint64(job, &attrs->size);
        if(rc == 0u)
          goto __CPROVER_DUMP_L3;

        return rc;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        if(!((128u & attrs->valid) == 0u))
        {
          rc=sftp_parse_path(job, &attrs->owner);
          if(!(rc == 0u))
            return rc;

          rc=sftp_parse_path(job, &attrs->group);
          if(rc == 0u)
            goto __CPROVER_DUMP_L5;

          return rc;
        }

        else
        {

        __CPROVER_DUMP_L5:
          ;
          if(!((4u & attrs->valid) == 0u))
          {
            rc=sftp_parse_uint32(job, &attrs->permissions);
            if(rc == 0u)
              goto __CPROVER_DUMP_L6;

            return rc;
          }

          else
          {

          __CPROVER_DUMP_L6:
            ;
            if(!((8u & attrs->valid) == 0u))
            {
              rc=sftp_parse_uint64(job, (unsigned long int *)&attrs->atime.seconds);
              if(!(rc == 0u))
                return rc;

              if((256u & attrs->valid) == 0u)
                goto __CPROVER_DUMP_L8;

              rc=sftp_parse_uint32(job, &attrs->atime.nanoseconds);
              if(rc == 0u)
                goto __CPROVER_DUMP_L8;

              return rc;
            }

            else
            {

            __CPROVER_DUMP_L8:
              ;
              if(!((16u & attrs->valid) == 0u))
              {
                rc=sftp_parse_uint64(job, (unsigned long int *)&attrs->createtime.seconds);
                if(!(rc == 0u))
                  return rc;

                if((256u & attrs->valid) == 0u)
                  goto __CPROVER_DUMP_L10;

                rc=sftp_parse_uint32(job, &attrs->createtime.nanoseconds);
                if(rc == 0u)
                  goto __CPROVER_DUMP_L10;

                return rc;
              }

              else
              {

              __CPROVER_DUMP_L10:
                ;
                if(!((32u & attrs->valid) == 0u))
                {
                  rc=sftp_parse_uint64(job, (unsigned long int *)&attrs->mtime.seconds);
                  if(!(rc == 0u))
                    return rc;

                  if((256u & attrs->valid) == 0u)
                    goto __CPROVER_DUMP_L12;

                  rc=sftp_parse_uint32(job, &attrs->mtime.nanoseconds);
                  if(rc == 0u)
                    goto __CPROVER_DUMP_L12;

                  return rc;
                }

                else
                {

                __CPROVER_DUMP_L12:
                  ;
                  if(!((32768u & attrs->valid) == 0u))
                  {
                    rc=sftp_parse_uint64(job, (unsigned long int *)&attrs->ctime.seconds);
                    if(!(rc == 0u))
                      return rc;

                    if((256u & attrs->valid) == 0u)
                      goto __CPROVER_DUMP_L14;

                    rc=sftp_parse_uint32(job, &attrs->ctime.nanoseconds);
                    if(rc == 0u)
                      goto __CPROVER_DUMP_L14;

                    return rc;
                  }

                  else
                  {

                  __CPROVER_DUMP_L14:
                    ;
                    if(!((64u & attrs->valid) == 0u))
                    {
                      rc=sftp_parse_string(job, &attrs->acl, ((unsigned long int *)NULL));
                      if(rc == 0u)
                        goto __CPROVER_DUMP_L15;

                      return rc;
                    }

                    else
                    {

                    __CPROVER_DUMP_L15:
                      ;
                      if(!((512u & attrs->valid) == 0u))
                      {
                        rc=sftp_parse_uint32(job, &attrs->attrib_bits);
                        if(!(rc == 0u))
                          return rc;

                        if(protocol->version >= 6)
                        {
                          rc=sftp_parse_uint32(job, &attrs->attrib_bits_valid);
                          if(!(rc == 0u))
                            return rc;

                        }

                        else
                          attrs->attrib_bits_valid = (unsigned int)0x7ff;
                      }

                      if(!((2048u & attrs->valid) == 0u))
                      {
                        rc=sftp_parse_uint8(job, &attrs->text_hint);
                        if(rc == 0u)
                          goto __CPROVER_DUMP_L20;

                        return rc;
                      }

                      else
                      {

                      __CPROVER_DUMP_L20:
                        ;
                        if(!((4096u & attrs->valid) == 0u))
                        {
                          rc=sftp_parse_string(job, &attrs->mime_type, ((unsigned long int *)NULL));
                          if(rc == 0u)
                            goto __CPROVER_DUMP_L21;

                          return rc;
                        }

                        else
                        {

                        __CPROVER_DUMP_L21:
                          ;
                          if(!((8192u & attrs->valid) == 0u))
                          {
                            rc=sftp_parse_uint32(job, &attrs->link_count);
                            if(rc == 0u)
                              goto __CPROVER_DUMP_L22;

                            return rc;
                          }

                          else
                          {

                          __CPROVER_DUMP_L22:
                            ;
                            if(!((16384u & attrs->valid) == 0u))
                            {
                              rc=sftp_parse_string(job, &attrs->mime_type, ((unsigned long int *)NULL));
                              if(rc == 0u)
                                goto __CPROVER_DUMP_L23;

                              return rc;
                            }

                            else
                            {

                            __CPROVER_DUMP_L23:
                              ;
                              if(!((0x80000000 & attrs->valid) == 0u))
                              {
                                rc=sftp_parse_uint32(job, &n);
                                if(!(rc == 0u))
                                  return rc;

                                do
                                {
                                  tmp_post_1 = n;
                                  n = n - 1u;
                                  if(!(tmp_post_1 >= 1u))
                                    break;

                                  rc=sftp_parse_string(job, ((char **)NULL), ((unsigned long int *)NULL));
                                  if(!(rc == 0u))
                                    return rc;

                                  rc=sftp_parse_string(job, ((char **)NULL), ((unsigned long int *)NULL));
                                  if(!(rc == 0u))
                                    return rc;

                                }
                                while((_Bool)1);
                              }

                              return (unsigned int)0;
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

// sftp_v456_sendattrs
// file v4.c line 49
void sftp_v456_sendattrs(struct sftpjob *job, struct sftpattr *attrs)
{
  const unsigned int valid = attrs->valid & protocol->attrmask;
  sftp_send_uint32(job->worker, valid);
  sftp_send_uint8(job->worker, (signed int)attrs->type);
  if(!((1u & valid) == 0u))
    sftp_send_uint64(job->worker, attrs->size);

  if(!((128u & valid) == 0u))
  {
    sftp_send_path(job, job->worker, attrs->owner);
    sftp_send_path(job, job->worker, attrs->group);
  }

  if(!((4u & valid) == 0u))
    sftp_send_uint32(job->worker, attrs->permissions);

  if(!((8u & valid) == 0u))
  {
    sftp_send_uint64(job->worker, (unsigned long int)attrs->atime.seconds);
    if(!((256u & valid) == 0u))
      sftp_send_uint32(job->worker, attrs->atime.nanoseconds);

  }

  if(!((16u & valid) == 0u))
  {
    sftp_send_uint64(job->worker, (unsigned long int)attrs->createtime.seconds);
    if(!((256u & valid) == 0u))
      sftp_send_uint32(job->worker, attrs->createtime.nanoseconds);

  }

  if(!((32u & valid) == 0u))
  {
    sftp_send_uint64(job->worker, (unsigned long int)attrs->mtime.seconds);
    if(!((256u & valid) == 0u))
      sftp_send_uint32(job->worker, attrs->mtime.nanoseconds);

  }

  if(!((32768u & valid) == 0u))
  {
    sftp_send_uint64(job->worker, (unsigned long int)attrs->ctime.seconds);
    if(!((256u & valid) == 0u))
      sftp_send_uint32(job->worker, attrs->ctime.nanoseconds);

  }

  if(!((64u & valid) == 0u))
    sftp_send_string(job->worker, attrs->acl);

  if(!((512u & valid) == 0u))
  {
    sftp_send_uint32(job->worker, attrs->attrib_bits);
    if(protocol->version >= 6)
      sftp_send_uint32(job->worker, attrs->attrib_bits_valid);

  }

  if(!((2048u & valid) == 0u))
    sftp_send_uint8(job->worker, (signed int)attrs->text_hint);

  if(!((4096u & valid) == 0u))
    sftp_send_string(job->worker, attrs->mime_type);

  if(!((8192u & valid) == 0u))
    sftp_send_uint32(job->worker, attrs->link_count);

}

// sftp_v456_sendnames
// file v4.c line 200
void sftp_v456_sendnames(struct sftpjob *job, signed int nnames, struct sftpattr *names)
{
  sftp_send_uint32(job->worker, (unsigned int)nnames);
  if(nnames >= 1)
  {
    sftp_send_path(job, job->worker, names->name);
    protocol->sendattrs(job, names);
    names = names + 1l;
    nnames = nnames - 1;
  }

}

// sftp_v456_stat
// file v4.c line 241
unsigned int sftp_v456_stat(struct sftpjob *job)
{
  char *path;
  struct stat sb;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v4.c", 245, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_stat %s", path);

  while((_Bool)0);
  signed int return_value_stat_1;
  return_value_stat_1=stat(path, &sb);
  unsigned int return_value_sftp_v456_stat_core_2;
  return_value_sftp_v456_stat_core_2=sftp_v456_stat_core(job, return_value_stat_1, &sb, path);
  return return_value_sftp_v456_stat_core_2;
}

// sftp_v456_stat_core
// file v4.c line 214
static unsigned int sftp_v456_stat_core(struct sftpjob *job, signed int rc, struct stat *sb, const char *path)
{
  struct sftpattr attrs;
  unsigned int flags;
  if(rc == 0)
  {
    do
    {
      unsigned int sftp_v456_stat_core__1__1__1__rc;
      sftp_v456_stat_core__1__1__1__rc=sftp_parse_uint32(job, &flags);
      if(!(sftp_v456_stat_core__1__1__1__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v4.c", 220, (const void *)"sftp_parse_uint32(job, &flags)", sftp_v456_stat_core__1__1__1__rc);

        while((_Bool)0);
        return sftp_v456_stat_core__1__1__1__rc;
      }

    }
    while((_Bool)0);
    sftp_stat_to_attrs(job->a, sb, &attrs, flags, path);
    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 105);
    sftp_send_uint32(job->worker, job->id);
    protocol->sendattrs(job, &attrs);
    sftp_send_end(job->worker);
    return (unsigned int)-1;
  }

  else
    return (unsigned int)-2;
}

// sftp_v56_open
// file v5.c line 39
unsigned int sftp_v56_open(struct sftpjob *job)
{
  char *path;
  unsigned int desired_access;
  unsigned int flags;
  struct sftpattr attrs;
  do
  {
    unsigned int sftp_v56_open__1__1__rc;
    sftp_v56_open__1__1__rc=sftp_parse_path(job, &path);
    if(!(sftp_v56_open__1__1__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 44, (const void *)"sftp_parse_path(job, &path)", sftp_v56_open__1__1__rc);

      while((_Bool)0);
      return sftp_v56_open__1__1__rc;
    }

  }
  while((_Bool)0);
  do
  {
    unsigned int rc;
    rc=sftp_parse_uint32(job, &desired_access);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 45, (const void *)"sftp_parse_uint32(job, &desired_access)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
  {
    unsigned int sftp_v56_open__1__3__rc;
    sftp_v56_open__1__3__rc=sftp_parse_uint32(job, &flags);
    if(!(sftp_v56_open__1__3__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 46, (const void *)"sftp_parse_uint32(job, &flags)", sftp_v56_open__1__3__rc);

      while((_Bool)0);
      return sftp_v56_open__1__3__rc;
    }

  }
  while((_Bool)0);
  unsigned int sftp_v56_open__1__4__rc;
  sftp_v56_open__1__4__rc=protocol->parseattrs(job, &attrs);
  if(!(sftp_v56_open__1__4__rc == 0u))
  {
    if(!(sftp_debugging == 0))
      sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 47, (const void *)"protocol->parseattrs(job, &attrs)", sftp_v56_open__1__4__rc);

    return sftp_v56_open__1__4__rc;
  }

  else
  {
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_v56_open %s %#x %#x", path, desired_access, flags);

    unsigned int return_value_sftp_generic_open_1;
    return_value_sftp_generic_open_1=sftp_generic_open(job, path, desired_access, flags, &attrs);
    return return_value_sftp_generic_open_1;
  }
}

// sftp_v56_rename
// file v5.c line 316
unsigned int sftp_v56_rename(struct sftpjob *job)
{
  char *oldpath;
  char *newpath;
  unsigned int flags;
  signed int return_value_unlink_6;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int rc;
      rc=sftp_parse_path(job, &oldpath);
      if(!(rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 322, (const void *)"sftp_parse_path(job, &oldpath)", rc);

        while((_Bool)0);
        return rc;
      }

    }
    while((_Bool)0);
    do
    {
      unsigned int sftp_v56_rename__1__2__rc;
      sftp_v56_rename__1__2__rc=sftp_parse_path(job, &newpath);
      if(!(sftp_v56_rename__1__2__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 323, (const void *)"sftp_parse_path(job, &newpath)", sftp_v56_rename__1__2__rc);

        while((_Bool)0);
        return sftp_v56_rename__1__2__rc;
      }

    }
    while((_Bool)0);
    do
    {
      unsigned int sftp_v56_rename__1__3__rc;
      sftp_v56_rename__1__3__rc=sftp_parse_uint32(job, &flags);
      if(!(sftp_v56_rename__1__3__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 324, (const void *)"sftp_parse_uint32(job, &flags)", sftp_v56_rename__1__3__rc);

        while((_Bool)0);
        return sftp_v56_rename__1__3__rc;
      }

    }
    while((_Bool)0);
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_v56_rename %s %s %#x", oldpath, newpath, flags);

    while((_Bool)0);
    if(!((5u & flags) == 0u))
    {
      signed int return_value_rename_1;
      return_value_rename_1=rename(oldpath, newpath);
      if(!(return_value_rename_1 >= 0))
        return (unsigned int)-2;

      else
        return (unsigned int)0;
    }

    else
    {
      signed int return_value_link_7;
      return_value_link_7=link(oldpath, newpath);
      if(!(return_value_link_7 >= 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        if(!(*return_value___errno_location_3 == 17))
        {
          signed int return_value_rename_2;
          return_value_rename_2=rename(oldpath, newpath);
          if(!(return_value_rename_2 >= 0))
            return (unsigned int)-2;

          else
            return (unsigned int)0;
        }

        else
          return (unsigned int)11;
      }

      else
      {
        return_value_unlink_6=unlink(oldpath);
        if(!(return_value_unlink_6 >= 0))
        {
          signed int save_errno;
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          save_errno = *return_value___errno_location_4;
          unlink(newpath);
          signed int *return_value___errno_location_5;
          return_value___errno_location_5=__errno_location();
          *return_value___errno_location_5 = save_errno;
          return (unsigned int)-2;
        }

        else
          return (unsigned int)0;
      }
    }
  }
}

// sftp_v6_link
// file v6.c line 112
unsigned int sftp_v6_link(struct sftpjob *job)
{
  char *oldpath;
  char *newlinkpath;
  unsigned char symbolic;
  struct stat sb;
  _Bool tmp_if_expr_3;
  signed int return_value_stat_2;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int rc;
      rc=sftp_parse_path(job, &newlinkpath);
      if(!(rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v6.c", 120, (const void *)"sftp_parse_path(job, &newlinkpath)", rc);

        while((_Bool)0);
        return rc;
      }

    }
    while((_Bool)0);
    do
    {
      unsigned int sftp_v6_link__1__2__rc;
      sftp_v6_link__1__2__rc=sftp_parse_path(job, &oldpath);
      if(!(sftp_v6_link__1__2__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v6.c", 121, (const void *)"sftp_parse_path(job, &oldpath)", sftp_v6_link__1__2__rc);

        while((_Bool)0);
        return sftp_v6_link__1__2__rc;
      }

    }
    while((_Bool)0);
    do
    {
      unsigned int sftp_v6_link__1__3__rc;
      sftp_v6_link__1__3__rc=sftp_parse_uint8(job, &symbolic);
      if(!(sftp_v6_link__1__3__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v6.c", 122, (const void *)"sftp_parse_uint8(job, &symbolic)", sftp_v6_link__1__3__rc);

        while((_Bool)0);
        return sftp_v6_link__1__3__rc;
      }

    }
    while((_Bool)0);
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_link %s %s [%s]", oldpath, newlinkpath, symbolic != 0 ? "symbolic" : "hard");

    while((_Bool)0);
    signed int return_value;
    return_value=(symbolic != 0 ? symlink : link)(oldpath, newlinkpath);
    if(!(return_value >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      if(*return_value___errno_location_1 == 1)
      {
        if(symbolic == 0)
        {
          return_value_stat_2=stat(oldpath, &sb);
          tmp_if_expr_3 = return_value_stat_2 >= 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_3 = (_Bool)0;
        if((61440u & sb.st_mode) == 16384u && tmp_if_expr_3)
          return (unsigned int)24;

        else
          return (unsigned int)8;
      }

      return (unsigned int)-2;
    }

    else
      return (unsigned int)0;
  }
}

// sftp_v6_realpath
// file v6.c line 36
unsigned int sftp_v6_realpath(struct sftpjob *job)
{
  char *path;
  char *compose;
  char *resolvedpath;
  unsigned char control_byte = (unsigned char)0x00000001;
  unsigned int rpflags = (unsigned int)0;
  struct stat sb;
  struct sftpattr attrs;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v6.c", 43, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  if(!(job->left == 0ul))
  {
    do
    {
      unsigned int sftp_v6_realpath__1__2__1__rc;
      sftp_v6_realpath__1__2__1__rc=sftp_parse_uint8(job, &control_byte);
      if(!(sftp_v6_realpath__1__2__1__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v6.c", 45, (const void *)"sftp_parse_uint8(job, &control_byte)", sftp_v6_realpath__1__2__1__rc);

        while((_Bool)0);
        return sftp_v6_realpath__1__2__1__rc;
      }

    }
    while((_Bool)0);
    while(!(job->left == 0ul))
    {
      do
      {
        unsigned int sftp_v6_realpath__1__2__2__1__rc;
        sftp_v6_realpath__1__2__2__1__rc=sftp_parse_path(job, &compose);
        if(!(sftp_v6_realpath__1__2__2__1__rc == 0u))
        {
          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("%s:%d: %s: %u", (const void *)"v6.c", 47, (const void *)"sftp_parse_path(job, &compose)", sftp_v6_realpath__1__2__2__1__rc);

          while((_Bool)0);
          return sftp_v6_realpath__1__2__2__1__rc;
        }

      }
      while((_Bool)0);
      if((signed int)*compose == 47)
        path = compose;

      else
      {
        char *newpath;
        unsigned long int return_value_strlen_1;
        return_value_strlen_1=strlen(path);
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(compose);
        void *return_value_sftp_alloc_3;
        return_value_sftp_alloc_3=sftp_alloc(job->a, return_value_strlen_1 + return_value_strlen_2 + (unsigned long int)2);
        newpath = (char *)return_value_sftp_alloc_3;
        strcpy(newpath, path);
        strcat(newpath, "/");
        strcat(newpath, compose);
        path = newpath;
      }
    }
  }

  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_v6_realpath %s %#x", path, control_byte);

  while((_Bool)0);
  switch((signed int)control_byte)
  {
    case 0x00000001:
    {
      rpflags = (unsigned int)0;
      break;
    }
    case 0x00000002:
    {
      rpflags = (unsigned int)0x0001;
      break;
    }
    case 0x00000003:
    {
      rpflags = (unsigned int)(0x0001 | 0x0002);
      break;
    }
    default:
      return (unsigned int)5;
  }
  resolvedpath=sftp_find_realpath(job->a, path, rpflags);
  signed int return_value_stat_4;
  _Bool tmp_if_expr_6;
  signed int return_value_lstat_5;
  signed int return_value_stat_7;
  _Bool tmp_if_expr_9;
  signed int return_value_lstat_8;
  if(resolvedpath == ((char *)NULL))
    return (unsigned int)-2;

  else
  {
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("...real path is %s", resolvedpath);

    while((_Bool)0);
    switch((signed int)control_byte)
    {
      case 0x00000001:
      {
        memset((void *)&attrs, 0, sizeof(struct sftpattr) /*200ul*/ );
        attrs.name = resolvedpath;
        break;
      }
      case 0x00000002:
      {
        return_value_stat_4=stat(resolvedpath, &sb);
        if(return_value_stat_4 >= 0)
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          return_value_lstat_5=lstat(resolvedpath, &sb);
          tmp_if_expr_6 = return_value_lstat_5 >= 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
          sftp_stat_to_attrs(job->a, &sb, &attrs, 0xFFFFFFFF, resolvedpath);

        else
        {
          memset((void *)&attrs, 0, sizeof(struct sftpattr) /*200ul*/ );
          attrs.name = resolvedpath;
        }
        break;
      }
      case 0x00000003:
      {
        return_value_stat_7=stat(resolvedpath, &sb);
        if(return_value_stat_7 >= 0)
          tmp_if_expr_9 = (_Bool)1;

        else
        {
          return_value_lstat_8=lstat(resolvedpath, &sb);
          tmp_if_expr_9 = return_value_lstat_8 >= 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_9)
          sftp_stat_to_attrs(job->a, &sb, &attrs, 0xFFFFFFFF, resolvedpath);

        else
          return (unsigned int)-2;
      }
    }
    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 104);
    sftp_send_uint32(job->worker, job->id);
    protocol->sendnames(job, 1, &attrs);
    sftp_send_end(job->worker);
    return (unsigned int)-1;
  }
}

// sftp_v6_version_select
// file v6.c line 142
unsigned int sftp_v6_version_select(struct sftpjob *job)
{
  char *newversion;
  if(workqueue == ((struct queue *)NULL))
  {
    do
    {
      unsigned int rc;
      rc=sftp_parse_path(job, &newversion);
      if(!(rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v6.c", 148, (const void *)"sftp_parse_path(job, &newversion)", rc);

        while((_Bool)0);
        return rc;
      }

    }
    while((_Bool)0);
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(newversion, "3");
    if(return_value_strcmp_1 == 0)
    {
      protocol = &sftp_v3;
      return (unsigned int)0;
    }

    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(newversion, "4");
    if(return_value_strcmp_2 == 0)
    {
      protocol = &sftp_v4;
      return (unsigned int)0;
    }

    signed int return_value_strcmp_3;
    return_value_strcmp_3=strcmp(newversion, "5");
    if(return_value_strcmp_3 == 0)
    {
      protocol = &sftp_v5;
      return (unsigned int)0;
    }

    signed int return_value_strcmp_4;
    return_value_strcmp_4=strcmp(newversion, "6");
    if(return_value_strcmp_4 == 0)
    {
      protocol = &sftp_v6;
      return (unsigned int)0;
    }

    sftp_send_status(job, (unsigned int)23, "unknown version");
  }

  else
    sftp_send_status(job, (unsigned int)23, "badly timed version-select");
  exit(-1);
}

// sftp_vany_already_init
// file v3.c line 188
unsigned int sftp_vany_already_init(struct sftpjob *job)
{
  return (unsigned int)4;
}

// sftp_vany_close
// file v3.c line 440
unsigned int sftp_vany_close(struct sftpjob *job)
{
  struct handleid id;
  do
  {
    unsigned int rc;
    rc=sftp_parse_handle(job, &id);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 443, (const void *)"sftp_parse_handle(job, &id)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_vany_close %u %u", id.id, id.tag);

  while((_Bool)0);
  unsigned int return_value_sftp_handle_close_1;
  return_value_sftp_handle_close_1=sftp_handle_close(&id);
  return return_value_sftp_handle_close_1;
}

// sftp_vany_extended
// file sftpserver.h line 148
unsigned int sftp_vany_extended(struct sftpjob *job)
{
  char *name;
  signed int n;
  do
  {
    unsigned int rc;
    rc=sftp_parse_string(job, &name, ((unsigned long int *)NULL));
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 443, (const void *)"sftp_parse_string(job, &name, 0)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("extension %s", name);

  while((_Bool)0);
  n = 0;
  _Bool tmp_if_expr_2;
  signed int return_value_strcmp_1;
  do
  {
    if(!(n >= protocol->nextensions))
    {
      return_value_strcmp_1=strcmp(name, (protocol->extensions + (signed long int)n)->name);
      tmp_if_expr_2 = return_value_strcmp_1 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(!tmp_if_expr_2)
      break;

    n = n + 1;
  }
  while((_Bool)1);
  unsigned int return_value;
  if(n >= protocol->nextensions)
    return (unsigned int)8;

  else
  {
    return_value=(protocol->extensions + (signed long int)n)->handler(job);
    return return_value;
  }
}

// sftp_vany_fsetstat
// file v3.c line 536
unsigned int sftp_vany_fsetstat(struct sftpjob *job)
{
  struct handleid id;
  struct sftpattr attrs;
  signed int fd;
  unsigned int rc;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int sftp_vany_fsetstat__1__1__rc;
      sftp_vany_fsetstat__1__1__rc=sftp_parse_handle(job, &id);
      if(!(sftp_vany_fsetstat__1__1__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 544, (const void *)"sftp_parse_handle(job, &id)", sftp_vany_fsetstat__1__1__rc);

        while((_Bool)0);
        return sftp_vany_fsetstat__1__1__rc;
      }

    }
    while((_Bool)0);
    unsigned int sftp_vany_fsetstat__1__2__rc;
    sftp_vany_fsetstat__1__2__rc=protocol->parseattrs(job, &attrs);
    if(!(sftp_vany_fsetstat__1__2__rc == 0u))
    {
      if(!(sftp_debugging == 0))
        sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 545, (const void *)"protocol->parseattrs(job, &attrs)", sftp_vany_fsetstat__1__2__rc);

      return sftp_vany_fsetstat__1__2__rc;
    }

    else
    {
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_vany_fsetstat %u %u", id.id, id.tag);

      rc=sftp_normalize_ownergroup(job->a, &attrs);
      if(!(rc == 0u))
        return rc;

      else
      {
        rc=sftp_handle_get_fd(&id, &fd, ((unsigned int *)NULL));
        if(!(rc == 0u))
          return rc;

        else
        {
          unsigned int return_value_sftp_set_fstatus_1;
          return_value_sftp_set_fstatus_1=sftp_set_fstatus(job->a, fd, &attrs, ((const char **)NULL));
          return return_value_sftp_set_fstatus_1;
        }
      }
    }
  }
}

// sftp_vany_mkdir
// file v3.c line 555
unsigned int sftp_vany_mkdir(struct sftpjob *job)
{
  char *path;
  struct sftpattr attrs;
  unsigned int rc;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int sftp_vany_mkdir__1__1__rc;
      sftp_vany_mkdir__1__1__rc=sftp_parse_path(job, &path);
      if(!(sftp_vany_mkdir__1__1__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 562, (const void *)"sftp_parse_path(job, &path)", sftp_vany_mkdir__1__1__rc);

        while((_Bool)0);
        return sftp_vany_mkdir__1__1__rc;
      }

    }
    while((_Bool)0);
    unsigned int sftp_vany_mkdir__1__2__rc;
    sftp_vany_mkdir__1__2__rc=protocol->parseattrs(job, &attrs);
    if(!(sftp_vany_mkdir__1__2__rc == 0u))
    {
      if(!(sftp_debugging == 0))
        sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 563, (const void *)"protocol->parseattrs(job, &attrs)", sftp_vany_mkdir__1__2__rc);

      return sftp_vany_mkdir__1__2__rc;
    }

    else
    {
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_vany_mkdir %s", path);

      attrs.valid = attrs.valid & (unsigned int)~0x00000001;
      if(!((4u & attrs.valid) == 0u))
      {
        if(!(sftp_debugging == 0))
          sftp_debug_printf("initial permissions are %#o (%d decimal)", attrs.permissions, attrs.permissions);

        signed int return_value_mkdir_1;
        return_value_mkdir_1=mkdir(path, attrs.permissions & (unsigned int)07777);
        if(!(return_value_mkdir_1 >= 0))
          return (unsigned int)-2;

        if(attrs.permissions == (511u & attrs.permissions))
          attrs.valid = attrs.valid ^ (unsigned int)0x00000004;

      }

      else
      {
        signed int return_value_mkdir_2;
        return_value_mkdir_2=mkdir(path, (unsigned int)0755);
        if(!(return_value_mkdir_2 >= 0))
          return (unsigned int)-2;

      }
      rc=sftp_set_status(job->a, path, &attrs, ((const char **)NULL));
      if(!(rc == 0u))
      {
        signed int save_errno;
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        save_errno = *return_value___errno_location_3;
        rmdir(path);
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        *return_value___errno_location_4 = save_errno;
        return rc;
      }

      return (unsigned int)0;
    }
  }
}

// sftp_vany_opendir
// file v3.c line 366
unsigned int sftp_vany_opendir(struct sftpjob *job)
{
  char *path;
  struct __dirstream *dp;
  struct handleid id;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 371, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_vany_opendir %s", path);

  while((_Bool)0);
  dp=opendir(path);
  if(dp == ((struct __dirstream *)NULL))
    return (unsigned int)-2;

  else
  {
    sftp_handle_new_dir(&id, dp, path);
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("...handle is %u %u", id.id, id.tag);

    while((_Bool)0);
    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 102);
    sftp_send_uint32(job->worker, job->id);
    sftp_send_handle(job->worker, &id);
    sftp_send_end(job->worker);
    return (unsigned int)-1;
  }
}

// sftp_vany_posix_rename
// file v3.c line 716
unsigned int sftp_vany_posix_rename(struct sftpjob *job)
{
  char *oldpath;
  char *newpath;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int rc;
      rc=sftp_parse_path(job, &oldpath);
      if(!(rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 721, (const void *)"sftp_parse_path(job, &oldpath)", rc);

        while((_Bool)0);
        return rc;
      }

    }
    while((_Bool)0);
    do
    {
      unsigned int sftp_vany_posix_rename__1__2__rc;
      sftp_vany_posix_rename__1__2__rc=sftp_parse_path(job, &newpath);
      if(!(sftp_vany_posix_rename__1__2__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 722, (const void *)"sftp_parse_path(job, &newpath)", sftp_vany_posix_rename__1__2__rc);

        while((_Bool)0);
        return sftp_vany_posix_rename__1__2__rc;
      }

    }
    while((_Bool)0);
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_vany_posix_rename %s %s", oldpath, newpath);

    while((_Bool)0);
    signed int return_value_rename_1;
    return_value_rename_1=rename(oldpath, newpath);
    if(!(return_value_rename_1 >= 0))
      return (unsigned int)-2;

    else
      return (unsigned int)0;
  }
}

// sftp_vany_read
// file v3.c line 639
unsigned int sftp_vany_read(struct sftpjob *job)
{
  struct handleid id;
  unsigned long int offset;
  unsigned int len;
  unsigned int sftp_vany_read__1__rc;
  signed long int n;
  signed int fd;
  unsigned int flags;
  do
  {
    unsigned int sftp_vany_read__1__1__rc;
    sftp_vany_read__1__1__rc=sftp_parse_handle(job, &id);
    if(!(sftp_vany_read__1__1__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 647, (const void *)"sftp_parse_handle(job, &id)", sftp_vany_read__1__1__rc);

      while((_Bool)0);
      return sftp_vany_read__1__1__rc;
    }

  }
  while((_Bool)0);
  do
  {
    unsigned int rc;
    rc=sftp_parse_uint64(job, &offset);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 648, (const void *)"sftp_parse_uint64(job, &offset)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
  {
    unsigned int sftp_vany_read__1__3__rc;
    sftp_vany_read__1__3__rc=sftp_parse_uint32(job, &len);
    if(!(sftp_vany_read__1__3__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 649, (const void *)"sftp_parse_uint32(job, &len)", sftp_vany_read__1__3__rc);

      while((_Bool)0);
      return sftp_vany_read__1__3__rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_vany_read %x %u %u: %u bytes at %lu", job->id, id.id, id.tag, len, offset);

  while((_Bool)0);
  if(len >= 1048577u)
    len = (unsigned int)1048576;

  sftp_vany_read__1__rc=sftp_handle_get_fd(&id, &fd, &flags);
  if(!(sftp_vany_read__1__rc == 0u))
    return sftp_vany_read__1__rc;

  else
  {
    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 103);
    sftp_send_uint32(job->worker, job->id);
    sftp_send_need(job->worker, (unsigned long int)(len + (unsigned int)4));
    if(!((3u & flags) == 0u))
      n=read(fd, (void *)(job->worker->buffer + (signed long int)job->worker->bufused + (signed long int)4), (unsigned long int)len);

    else
      n=pread(fd, (void *)(job->worker->buffer + (signed long int)job->worker->bufused + (signed long int)4), (unsigned long int)len, (signed long int)offset);
    if(n >= 1l)
    {
      sftp_send_uint32(job->worker, (unsigned int)n);
      job->worker->bufused = job->worker->bufused + (unsigned long int)n;
      sftp_send_end(job->worker);
      return (unsigned int)-1;
    }

    else
      if(n == 0l)
        return (unsigned int)1;

      else
        return (unsigned int)-2;
  }
}

// sftp_vany_readdir
// file v3.c line 385
unsigned int sftp_vany_readdir(struct sftpjob *job)
{
  struct handleid id;
  struct __dirstream *dp;
  unsigned int rc;
  struct sftpattr d[32l];
  signed int n;
  struct dirent *de;
  const char *path;
  char *childpath;
  char *fullpath;
  struct stat sb;
  do
  {
    unsigned int sftp_vany_readdir__1__1__rc;
    sftp_vany_readdir__1__1__rc=sftp_parse_handle(job, &id);
    if(!(sftp_vany_readdir__1__1__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 396, (const void *)"sftp_parse_handle(job, &id)", sftp_vany_readdir__1__1__rc);

      while((_Bool)0);
      return sftp_vany_readdir__1__1__rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_vany_readdir %u %u", id.id, id.tag);

  while((_Bool)0);
  rc=sftp_handle_get_dir(&id, &dp, &path);
  if(!(rc == 0u))
  {
    sftp_send_status(job, rc, "invalid directory handle");
    return (unsigned int)-1;
  }

  else
  {
    memset((void *)d, 0, sizeof(struct sftpattr [32l]) /*6400ul*/ );
    n = 0;
    while(!(n >= 32))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = 0;
      de=readdir(dp);
      if(de == ((struct dirent *)NULL))
        break;

      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(de->d_name);
      void *return_value_sftp_alloc_3;
      return_value_sftp_alloc_3=sftp_alloc(job->a, return_value_strlen_2 + (unsigned long int)1);
      childpath=strcpy((char *)return_value_sftp_alloc_3, de->d_name);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(path);
      unsigned long int return_value_strlen_5;
      return_value_strlen_5=strlen(childpath);
      void *return_value_sftp_alloc_6;
      return_value_sftp_alloc_6=sftp_alloc(job->a, return_value_strlen_4 + return_value_strlen_5 + (unsigned long int)2);
      fullpath = (char *)return_value_sftp_alloc_6;
      strcpy(fullpath, path);
      strcat(fullpath, "/");
      strcat(fullpath, childpath);
      signed int return_value_lstat_7;
      return_value_lstat_7=lstat(fullpath, &sb);
      if(!(return_value_lstat_7 == 0))
        return (unsigned int)-2;

      sftp_stat_to_attrs(job->a, &sb, &d[(signed long int)n], 0xFFFFFFFF, childpath);
      d[(signed long int)n].name = childpath;
      n = n + 1;
      signed int *return_value___errno_location_8;
      return_value___errno_location_8=__errno_location();
      *return_value___errno_location_8 = 0;
    }
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    if(!(*return_value___errno_location_9 == 0))
      return (unsigned int)-2;

    else
      if(!(n == 0))
      {
        sftp_send_begin(job->worker);
        sftp_send_uint8(job->worker, 104);
        sftp_send_uint32(job->worker, job->id);
        protocol->sendnames(job, n, d);
        sftp_send_end(job->worker);
        return (unsigned int)-1;
      }

      else
        return (unsigned int)1;
  }
}

// sftp_vany_readlink
// file v3.c line 343
unsigned int sftp_vany_readlink(struct sftpjob *job)
{
  char *path;
  char *result;
  struct sftpattr attr;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 347, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_vany_readlink %s", path);

  while((_Bool)0);
  result=sftp_do_readlink(job->a, path);
  if(result == ((char *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    if(*return_value___errno_location_1 == 7)
    {
      sftp_send_status(job, (unsigned int)4, "link name is too long");
      return (unsigned int)-1;
    }

    return (unsigned int)-2;
  }

  memset((void *)&attr, 0, sizeof(struct sftpattr) /*200ul*/ );
  attr.name = result;
  sftp_send_begin(job->worker);
  sftp_send_uint8(job->worker, 104);
  sftp_send_uint32(job->worker, job->id);
  protocol->sendnames(job, 1, &attr);
  sftp_send_end(job->worker);
  return (unsigned int)-1;
}

// sftp_vany_remove
// file v3.c line 193
unsigned int sftp_vany_remove(struct sftpjob *job)
{
  char *path;
  struct stat sb;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int rc;
      rc=sftp_parse_path(job, &path);
      if(!(rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 199, (const void *)"sftp_parse_path(job, &path)", rc);

        while((_Bool)0);
        return rc;
      }

    }
    while((_Bool)0);
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_vany_remove %s", path);

    while((_Bool)0);
    signed int return_value_unlink_4;
    return_value_unlink_4=unlink(path);
    if(!(return_value_unlink_4 >= 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      if(*return_value___errno_location_3 == 1)
      {
        signed int return_value_lstat_1;
        return_value_lstat_1=lstat(path, &sb);
        if(return_value_lstat_1 == 0)
        {
          if((61440u & sb.st_mode) == 16384u)
            return (unsigned int)24;

        }

        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = 1;
      }

      return (unsigned int)-2;
    }

    else
      return (unsigned int)0;
  }
}

// sftp_vany_rmdir
// file v3.c line 212
unsigned int sftp_vany_rmdir(struct sftpjob *job)
{
  char *path;
  signed int *return_value___errno_location_1;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int rc;
      rc=sftp_parse_path(job, &path);
      if(!(rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 217, (const void *)"sftp_parse_path(job, &path)", rc);

        while((_Bool)0);
        return rc;
      }

    }
    while((_Bool)0);
    do
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_vany_rmdir %s", path);

    while((_Bool)0);
    signed int return_value_rmdir_2;
    return_value_rmdir_2=rmdir(path);
    if(!(return_value_rmdir_2 >= 0))
    {
      return_value___errno_location_1=__errno_location();
      if(*return_value___errno_location_1 == 17)
        return (unsigned int)18;

      else
        return (unsigned int)-2;
    }

    else
      return (unsigned int)0;
  }
}

// sftp_vany_setstat
// file v3.c line 520
unsigned int sftp_vany_setstat(struct sftpjob *job)
{
  char *path;
  struct sftpattr attrs;
  unsigned int rc;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int sftp_vany_setstat__1__1__rc;
      sftp_vany_setstat__1__1__rc=sftp_parse_path(job, &path);
      if(!(sftp_vany_setstat__1__1__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 527, (const void *)"sftp_parse_path(job, &path)", sftp_vany_setstat__1__1__rc);

        while((_Bool)0);
        return sftp_vany_setstat__1__1__rc;
      }

    }
    while((_Bool)0);
    unsigned int sftp_vany_setstat__1__2__rc;
    sftp_vany_setstat__1__2__rc=protocol->parseattrs(job, &attrs);
    if(!(sftp_vany_setstat__1__2__rc == 0u))
    {
      if(!(sftp_debugging == 0))
        sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 528, (const void *)"protocol->parseattrs(job, &attrs)", sftp_vany_setstat__1__2__rc);

      return sftp_vany_setstat__1__2__rc;
    }

    else
    {
      if(!(sftp_debugging == 0))
        sftp_debug_printf("sftp_vany_setstat %s", path);

      rc=sftp_normalize_ownergroup(job->a, &attrs);
      if(!(rc == 0u))
        return rc;

      else
      {
        unsigned int return_value_sftp_set_status_1;
        return_value_sftp_set_status_1=sftp_set_status(job->a, path, &attrs, ((const char **)NULL));
        return return_value_sftp_set_status_1;
      }
    }
  }
}

// sftp_vany_space_available
// file sftpserver.h line 311
unsigned int sftp_vany_space_available(struct sftpjob *job)
{
  char *path;
  struct statvfs fs;
  do
  {
    unsigned int rc;
    rc=sftp_parse_string(job, &path, ((unsigned long int *)NULL));
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 418, (const void *)"sftp_parse_string(job, &path, 0)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_space_available %s", path);

  while((_Bool)0);
  signed int return_value_statvfs_1;
  return_value_statvfs_1=statvfs(path, &fs);
  if(!(return_value_statvfs_1 >= 0))
    return (unsigned int)-2;

  else
  {
    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 201);
    sftp_send_uint32(job->worker, job->id);
    sftp_send_uint64(job->worker, (unsigned long int)fs.f_frsize * (unsigned long int)fs.f_blocks);
    sftp_send_uint64(job->worker, (unsigned long int)fs.f_frsize * (unsigned long int)fs.f_bfree);
    sftp_send_uint64(job->worker, (unsigned long int)0);
    sftp_send_uint64(job->worker, (unsigned long int)fs.f_frsize * (unsigned long int)fs.f_bavail);
    sftp_send_uint32(job->worker, (unsigned int)fs.f_frsize);
    sftp_send_end(job->worker);
    return (unsigned int)-1;
  }
}

// sftp_vany_statfs
// file v3.c line 730
unsigned int sftp_vany_statfs(struct sftpjob *job)
{
  char *path;
  struct statvfs fs;
  do
  {
    unsigned int rc;
    rc=sftp_parse_path(job, &path);
    if(!(rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 734, (const void *)"sftp_parse_path(job, &path)", rc);

      while((_Bool)0);
      return rc;
    }

  }
  while((_Bool)0);
  do
    if(!(sftp_debugging == 0))
      sftp_debug_printf("sftp_vany_statfs %s", path);

  while((_Bool)0);
  signed int return_value_statvfs_1;
  return_value_statvfs_1=statvfs(path, &fs);
  if(!(return_value_statvfs_1 >= 0))
    return (unsigned int)-2;

  else
  {
    sftp_send_begin(job->worker);
    sftp_send_uint8(job->worker, 201);
    sftp_send_uint32(job->worker, job->id);
    sftp_send_uint32(job->worker, (unsigned int)fs.f_frsize);
    sftp_send_uint64(job->worker, fs.f_blocks);
    sftp_send_uint64(job->worker, fs.f_bfree);
    sftp_send_uint64(job->worker, fs.f_bavail);
    sftp_send_uint64(job->worker, fs.f_files);
    sftp_send_uint64(job->worker, fs.f_ffree);
    sftp_send_end(job->worker);
    return (unsigned int)-1;
  }
}

// sftp_vany_text_seek
// file sftpserver.h line 293
unsigned int sftp_vany_text_seek(struct sftpjob *job)
{
  struct handleid id;
  unsigned long int line;
  signed int fd;
  char buffer[8192l];
  signed long int n;
  signed long int i;
  unsigned int rc;
  do
  {
    unsigned int sftp_vany_text_seek__1__1__rc;
    sftp_vany_text_seek__1__1__rc=sftp_parse_handle(job, &id);
    if(!(sftp_vany_text_seek__1__1__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 376, (const void *)"sftp_parse_handle(job, &id)", sftp_vany_text_seek__1__1__rc);

      while((_Bool)0);
      return sftp_vany_text_seek__1__1__rc;
    }

  }
  while((_Bool)0);
  do
  {
    unsigned int sftp_vany_text_seek__1__2__rc;
    sftp_vany_text_seek__1__2__rc=sftp_parse_uint64(job, &line);
    if(!(sftp_vany_text_seek__1__2__rc == 0u))
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("%s:%d: %s: %u", (const void *)"v5.c", 377, (const void *)"sftp_parse_uint64(job, &line)", sftp_vany_text_seek__1__2__rc);

      while((_Bool)0);
      return sftp_vany_text_seek__1__2__rc;
    }

  }
  while((_Bool)0);
  rc=sftp_handle_get_fd(&id, &fd, ((unsigned int *)NULL));
  signed long int tmp_post_2;
  if(!(rc == 0u))
    return rc;

  else
  {
    signed long int return_value_lseek_1;
    return_value_lseek_1=lseek(fd, (signed long int)0, 0);
    if(!(return_value_lseek_1 >= 0l))
      return (unsigned int)-2;

    else
      if(line == 0ul)
        return (unsigned int)0;

      else
      {
        i = (signed long int)0;
        n = (signed long int)0;
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("on entry: line=%lu", line);

        while((_Bool)0);
        while(line >= 1ul)
        {
          n=read(fd, (void *)buffer, sizeof(char [8192l]) /*8192ul*/ );
          if(!(n >= 1l))
            break;

          do
            if(!(sftp_debugging == 0))
              sftp_debug_printf("outer: line=%lu n=%zd", line, n);

          while((_Bool)0);
          i = (signed long int)0;
          while(line >= 1ul && !(i >= n))
          {
            tmp_post_2 = i;
            i = i + 1l;
            if((signed int)buffer[tmp_post_2] == 10)
              line = line - 1ul;

          }
        }
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("exited:: line=%lu n=%zd i=%zd", line, n, i);

        while((_Bool)0);
        if(!(n >= 0l))
          return (unsigned int)-2;

        else
          if(n == 0l)
            return (unsigned int)1;

          else
          {
            signed long int return_value_lseek_3;
            return_value_lseek_3=lseek(fd, i - n, 1);
            if(!(return_value_lseek_3 >= 0l))
              return (unsigned int)-2;

            return (unsigned int)0;
          }
      }
  }
}

// sftp_vany_write
// file v3.c line 681
unsigned int sftp_vany_write(struct sftpjob *job)
{
  struct handleid id;
  unsigned long int offset;
  unsigned int len;
  unsigned int sftp_vany_write__1__rc;
  signed long int n;
  signed int fd;
  unsigned int flags;
  if(!(readonly == 0))
    return (unsigned int)3;

  else
  {
    do
    {
      unsigned int rc;
      rc=sftp_parse_handle(job, &id);
      if(!(rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 691, (const void *)"sftp_parse_handle(job, &id)", rc);

        while((_Bool)0);
        return rc;
      }

    }
    while((_Bool)0);
    do
    {
      unsigned int sftp_vany_write__1__2__rc;
      sftp_vany_write__1__2__rc=sftp_parse_uint64(job, &offset);
      if(!(sftp_vany_write__1__2__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 692, (const void *)"sftp_parse_uint64(job, &offset)", sftp_vany_write__1__2__rc);

        while((_Bool)0);
        return sftp_vany_write__1__2__rc;
      }

    }
    while((_Bool)0);
    do
    {
      unsigned int sftp_vany_write__1__3__rc;
      sftp_vany_write__1__3__rc=sftp_parse_uint32(job, &len);
      if(!(sftp_vany_write__1__3__rc == 0u))
      {
        do
          if(!(sftp_debugging == 0))
            sftp_debug_printf("%s:%d: %s: %u", (const void *)"v3.c", 693, (const void *)"sftp_parse_uint32(job, &len)", sftp_vany_write__1__3__rc);

        while((_Bool)0);
        return sftp_vany_write__1__3__rc;
      }

    }
    while((_Bool)0);
    if(!(job->left >= (unsigned long int)len))
      return (unsigned int)5;

    else
    {
      do
        if(!(sftp_debugging == 0))
          sftp_debug_printf("sftp_vany_write %u %u: %u bytes at %lu", id.id, id.tag, len, offset);

      while((_Bool)0);
      sftp_vany_write__1__rc=sftp_handle_get_fd(&id, &fd, &flags);
      if(!(sftp_vany_write__1__rc == 0u))
        return sftp_vany_write__1__rc;

      else
      {
        for( ; len >= 1u; offset = offset + (unsigned long int)n)
        {
          if(!((3u & flags) == 0u))
            n=write(fd, (const void *)job->ptr, (unsigned long int)len);

          else
            n=pwrite(fd, (const void *)job->ptr, (unsigned long int)len, (signed long int)offset);
          if(!(n >= 0l))
            return (unsigned int)-2;

          job->ptr = job->ptr + n;
          job->left = job->left + (unsigned long int)n;
          len = len - (unsigned int)n;
        }
        return (unsigned int)0;
      }
    }
  }
}

// status_to_string
// file status.c line 32
const char * status_to_string(unsigned int status)
{
  switch(status)
  {
    case (unsigned int)0:
      return "OK";
    case (unsigned int)1:
      return "end of file";
    case (unsigned int)2:
      return "file does not exist";
    case (unsigned int)3:
      return "permission denied";
    case (unsigned int)4:
      return "operation failed";
    case (unsigned int)5:
      return "badly encoded SFTP packet";
    case (unsigned int)6:
      return "no connection";
    case (unsigned int)7:
      return "connection lost";
    case (unsigned int)8:
      return "operation not supported";
    case (unsigned int)9:
      return "invalid handle";
    case (unsigned int)10:
      return "path does not exist or is invalid";
    case (unsigned int)11:
      return "file already exists";
    case (unsigned int)12:
      return "file is on read-only medium";
    case (unsigned int)13:
      return "no medium in drive";
    case (unsigned int)14:
      return "no space on filesystem";
    case (unsigned int)15:
      return "quota exceeded";
    case (unsigned int)16:
      return "unknown principal";
    case (unsigned int)17:
      return "file is locked";
    case (unsigned int)18:
      return "directory is not empty";
    case (unsigned int)19:
      return "file is not a directory";
    case (unsigned int)20:
      return "invalid filename";
    case (unsigned int)21:
      return "too many symbolic links";
    case (unsigned int)22:
      return "file cannot be deleted";
    case (unsigned int)23:
      return "invalid parameter";
    case (unsigned int)24:
      return "file is a directory";
    case (unsigned int)25:
      return "byte range is locked";
    case (unsigned int)26:
      return "cannot lock byte range";
    case (unsigned int)27:
      return "file deletion pending";
    case (unsigned int)28:
      return "file is corrupt";
    case (unsigned int)29:
      return "invalid owner";
    case (unsigned int)30:
      return "invalid group";
    case (unsigned int)31:
      return "no such lock";
    default:
      return "unknown status";
  }
}

// v3_decode
// file v3.c line 58
static unsigned int v3_decode(struct sftpjob *job, char **path)
{
  return (unsigned int)0;
}

// v3_parseattrs
// file v3.c line 128
static unsigned int v3_parseattrs(struct sftpjob *job, struct sftpattr *attrs)
{
  unsigned int n;
  unsigned int rc;
  memset((void *)attrs, 0, sizeof(struct sftpattr) /*200ul*/ );
  rc=sftp_parse_uint32(job, &attrs->valid);
  unsigned int tmp_post_1;
  _Bool tmp_if_expr_2;
  if(!(rc == 0u))
    return rc;

  else
  {
    if(!((8u & attrs->valid) == 0u))
      attrs->valid = attrs->valid | (unsigned int)(0x00000008 | 0x00000020);

    if(!((1u & attrs->valid) == 0u))
    {
      rc=sftp_parse_uint64(job, &attrs->size);
      if(rc == 0u)
        goto __CPROVER_DUMP_L3;

      return rc;
    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      if(!((2u & attrs->valid) == 0u))
      {
        rc=sftp_parse_uint32(job, &attrs->uid);
        if(!(rc == 0u))
          return rc;

        rc=sftp_parse_uint32(job, &attrs->gid);
        if(rc == 0u)
          goto __CPROVER_DUMP_L5;

        return rc;
      }

      else
      {

      __CPROVER_DUMP_L5:
        ;
        if(!((4u & attrs->valid) == 0u))
        {
          rc=sftp_parse_uint32(job, &attrs->permissions);
          if(!(rc == 0u))
            return rc;

          switch(attrs->permissions & (unsigned int)0170000)
          {
            case (unsigned int)0010000:
            {
              attrs->type = (unsigned char)9;
              break;
            }
            case (unsigned int)0020000:
            {
              attrs->type = (unsigned char)7;
              break;
            }
            case (unsigned int)0040000:
            {
              attrs->type = (unsigned char)2;
              break;
            }
            case (unsigned int)0060000:
            {
              attrs->type = (unsigned char)8;
              break;
            }
            case (unsigned int)0100000:
            {
              attrs->type = (unsigned char)1;
              break;
            }
            case (unsigned int)0120000:
            {
              attrs->type = (unsigned char)3;
              break;
            }
            case (unsigned int)0140000:
            {
              attrs->type = (unsigned char)6;
              break;
            }
            default:
              attrs->type = (unsigned char)5;
          }
        }

        else
          attrs->type = (unsigned char)5;
        if(!((8u & attrs->valid) == 0u))
        {
          rc=sftp_parse_uint32(job, &n);
          if(!(rc == 0u))
            return rc;

          attrs->atime.seconds = (signed long int)n;
        }

        if(!((32u & attrs->valid) == 0u))
        {
          rc=sftp_parse_uint32(job, &n);
          if(!(rc == 0u))
            return rc;

          attrs->mtime.seconds = (signed long int)n;
        }

        if(!((0x80000000 & attrs->valid) == 0u))
        {
          rc=sftp_parse_uint32(job, &n);
          if(!(rc == 0u))
            return rc;

          do
          {
            tmp_post_1 = n;
            n = n - 1u;
            if(!(tmp_post_1 >= 1u))
              break;

            rc=sftp_parse_string(job, ((char **)NULL), ((unsigned long int *)NULL));
            if(!(rc == 0u))
              tmp_if_expr_2 = (_Bool)1;

            else
            {
              rc=sftp_parse_string(job, ((char **)NULL), ((unsigned long int *)NULL));
              tmp_if_expr_2 = rc != (unsigned int)0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_2)
              return rc;

          }
          while((_Bool)1);
        }

        return (unsigned int)0;
      }
    }
  }
}

// v3_sendattrs
// file v3.c line 83
static void v3_sendattrs(struct sftpjob *job, struct sftpattr *attrs)
{
  unsigned int v3bits;
  unsigned int m;
  unsigned int a;
  if((40u & attrs->valid) == 40u)
    v3bits = attrs->valid & (unsigned int)(0x00000001 | 0x00000002 | 0x00000004) | (unsigned int)0x00000008;

  else
    v3bits = attrs->valid & (unsigned int)(0x00000001 | 0x00000002 | 0x00000004);
  sftp_send_uint32(job->worker, v3bits);
  if(!((1u & v3bits) == 0u))
    sftp_send_uint64(job->worker, attrs->size);

  if(!((2u & v3bits) == 0u))
  {
    sftp_send_uint32(job->worker, attrs->uid);
    sftp_send_uint32(job->worker, attrs->gid);
  }

  if(!((4u & v3bits) == 0u))
    sftp_send_uint32(job->worker, attrs->permissions);

  if(!((8u & v3bits) == 0u))
  {
    m = (unsigned int)attrs->mtime.seconds;
    a = (unsigned int)attrs->atime.seconds;
    if(!((signed long int)m == attrs->mtime.seconds))
      fatal("sending out-of-range mtime");

    if(!((signed long int)a == attrs->atime.seconds))
      fatal("sending out-of-range mtime");

    sftp_send_uint32(job->worker, m);
    sftp_send_uint32(job->worker, a);
  }

}

// v3_sendnames
// file v3.c line 65
static void v3_sendnames(struct sftpjob *job, signed int nnames, struct sftpattr *names)
{
  signed long int now;
  struct tm nowtime;
  time(&now);
  gmtime_r(&now, &nowtime);
  sftp_send_uint32(job->worker, (unsigned int)nnames);
  if(nnames >= 1)
  {
    sftp_send_path(job, job->worker, names->name);
    const char *return_value_sftp_format_attr_1;
    return_value_sftp_format_attr_1=sftp_format_attr(job->a, names, nowtime.tm_year, (unsigned long int)0);
    sftp_send_string(job->worker, return_value_sftp_format_attr_1);
    protocol->sendattrs(job, names);
    names = names + 1l;
    nnames = nnames - 1;
  }

}

// version
// file sftpserver.c line 130
static void version(void)
{
  xprintf("Green End SFTP server version %s\n", (const void *)"0.2.1");
  exit(0);
}

// worker_cleanup
// file sftpserver.c line 328
static void worker_cleanup(void *wdv)
{
  struct worker *w = (struct worker *)wdv;
  iconv_close(w->utf8_to_local);
  iconv_close(w->local_to_utf8);
  free((void *)w->buffer);
  free((void *)w);
}

// worker_init
// file sftpserver.c line 309
static void * worker_init(void)
{
  struct worker *w;
  void *return_value_sftp__xmalloc_1;
  return_value_sftp__xmalloc_1=sftp__xmalloc(sizeof(struct worker) /*40ul*/ );
  w = (struct worker *)return_value_sftp__xmalloc_1;
  memset((void *)w, 0, sizeof(struct worker) /*40ul*/ );
  w->buffer = ((unsigned char *)NULL);
  w->utf8_to_local=iconv_open(local_encoding, "UTF-8");
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  if(w->utf8_to_local == (void *)-1)
  {
    return_value___errno_location_2=__errno_location();
    return_value_strerror_3=strerror(*return_value___errno_location_2);
    fatal("error calling iconv_open(%s,UTF-8): %s", local_encoding, return_value_strerror_3);
  }

  w->local_to_utf8=iconv_open("UTF-8", local_encoding);
  signed int *return_value___errno_location_4;
  char *return_value_strerror_5;
  if(w->local_to_utf8 == (void *)-1)
  {
    return_value___errno_location_4=__errno_location();
    return_value_strerror_5=strerror(*return_value___errno_location_4);
    fatal("error calling iconv_open(UTF-8,%s): %s", local_encoding, return_value_strerror_5);
  }

  return (void *)w;
}

// xcalloc
// file utils.h line 59
void * xcalloc(unsigned long int n, unsigned long int size)
{
  void *ptr;
  if(!(n == 0ul) && !(size == 0ul))
  {
    ptr=calloc(n, size);
    if(ptr == NULL)
      fatal("xcalloc: out of memory (%zu, %zu)", n, size);

    return ptr;
  }

  else
    return NULL;
}

// xclose
// file xfns.c line 30
void xclose(signed int fd)
{
  signed int return_value_close_3;
  return_value_close_3=close(fd);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(!(return_value_close_3 >= 0))
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fatal("error calling close: %s", return_value_strerror_2);
  }

}

// xdup2
// file xfns.c line 35
void xdup2(signed int fd, signed int newfd)
{
  signed int return_value_dup2_3;
  return_value_dup2_3=dup2(fd, newfd);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(!(return_value_dup2_3 >= 0))
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fatal("error calling dup2: %s", return_value_strerror_2);
  }

}

// xfork
// file utils.c line 126
signed int xfork(void)
{
  signed int pid;
  pid=fork();
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(!(pid >= 0))
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fatal("fork: %s", return_value_strerror_2);
  }

  if(pid == 0)
    forked();

  return pid;
}

// xpipe
// file xfns.c line 40
void xpipe(signed int *pfd)
{
  signed int return_value_pipe_3;
  return_value_pipe_3=pipe(pfd);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(!(return_value_pipe_3 >= 0))
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fatal("error calling pipe: %s", return_value_strerror_2);
  }

}

// xprintf
// file xfns.h line 55
signed int xprintf(const char *fmt, ...)
{
  void **ap;
  signed int rc;
  ap = (void **)&fmt;
  rc=vfprintf(stdout, fmt, ap);
  ap = ((void **)NULL);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(!(rc >= 0))
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fatal("error writing to stdout: %s", return_value_strerror_2);
  }

  return rc;
}

// xrecalloc
// file utils.h line 82
void * xrecalloc(void *ptr, unsigned long int n, unsigned long int size)
{
  if(!(18446744073709551615UL / size >= n))
    fatal("xrecalloc: out of memory (%zu, %zu)", n, size);

  n = n * size;
  if(!(n == 0ul))
  {
    ptr=realloc(ptr, n);
    if(ptr == NULL)
      fatal("xrecalloc: out of memory (%zu)", n);

    return ptr;
  }

  else
  {
    free(ptr);
    return NULL;
  }
}

// xstrdup
// file utils.h line 90
char * xstrdup(const char *s)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s);
  void *return_value_sftp__xmalloc_2;
  return_value_sftp__xmalloc_2=sftp__xmalloc(return_value_strlen_1 + (unsigned long int)1);
  char *return_value_strcpy_3;
  return_value_strcpy_3=strcpy((char *)return_value_sftp__xmalloc_2, s);
  return return_value_strcpy_3;
}

