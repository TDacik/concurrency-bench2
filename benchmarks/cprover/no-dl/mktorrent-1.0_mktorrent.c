// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_1;

// tag-#anon#ST[U32'piece_length'||U32'_pad0'||*{SYM#tag-llist_s#}_SYM#tag-llist_s#_'announce_list'||*{S8}_S8_'comment'||*{cS8}_cS8_'torrent_name'||*{S8}_S8_'metainfo_file_path'||*{SYM#tag-slist_s#}_SYM#tag-slist_s#_'web_seed_list'||S32'target_is_directory'||S32'no_creation_date'||S32'private'||S32'verbose'||U32'threads'||U32'_pad1'||S64'size'||*{SYM#tag-flist_s#}_SYM#tag-flist_s#_'file_list'||U32'pieces'||U32'_pad2'|]
// file mktorrent.h line 37
struct anonymous_2;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-SHAstate_st
// file /usr/include/openssl/sha.h line 100
struct SHAstate_st;

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

// tag-dir_state
// file ftw.c line 40
struct dir_state;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-flist_s
// file mktorrent.h line 29
struct flist_s;

// tag-llist_s
// file mktorrent.h line 21
struct llist_s;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-piece_s
// file hash_pthreads.c line 49
struct piece_s;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-queue_s
// file hash_pthreads.c line 58
struct queue_s;

// tag-slist_s
// file mktorrent.h line 13
struct slist_s;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

#ifndef NULL
#define NULL ((void*)0)
#endif

// SHA1_Final
// file /usr/include/openssl/sha.h line 123
signed int SHA1_Final(unsigned char *, struct SHAstate_st *);
// SHA1_Init
// file /usr/include/openssl/sha.h line 121
signed int SHA1_Init(struct SHAstate_st *);
// SHA1_Update
// file /usr/include/openssl/sha.h line 122
signed int SHA1_Update(struct SHAstate_st *, const void *, unsigned long int);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 412
extern signed int __xstat(signed int, const char *, struct stat *);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// basename
// file init.c line 54
static const char * basename(const char *s);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// cleanup
// file ftw.c line 116
static unsigned int cleanup(struct dir_state *ds, char *path, signed int ret);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// close_file
// file main.c line 121
static void close_file(struct _IO_FILE *f);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// dir_state_close
// file ftw.c line 96
static unsigned int dir_state_close(struct dir_state *ds);
// dir_state_new
// file ftw.c line 48
static struct dir_state * dir_state_new(struct dir_state *prev, struct dir_state *next);
// dir_state_open
// file ftw.c line 64
static unsigned int dir_state_open(struct dir_state *ds, const char *name, unsigned long int length);
// dir_state_reopen
// file ftw.c line 79
static unsigned int dir_state_reopen(struct dir_state *ds, char *name);
// dump_options
// file init.c line 361
static void dump_options(struct anonymous_2 *m);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// file_tree_walk
// file ftw.c line 133
signed int file_tree_walk(const char *dirname, unsigned int nfds, signed int (*callback)(const char *, struct stat *, void *), void *data);

//

// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_buffers
// file hash_pthreads.c line 150
static void free_buffers(struct queue_s *q);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// get_free
// file hash_pthreads.c line 74
static struct piece_s * get_free(struct queue_s *q, unsigned long int piece_length);
// get_full
// file hash_pthreads.c line 103
static struct piece_s * get_full(struct queue_s *q);
// get_slist
// file init.c line 131
static struct slist_s * get_slist(char *s);
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// init
// file init.c line 394
void init(struct anonymous_2 *m, signed int argc, char **argv);
// is_dir
// file init.c line 174
static signed int is_dir(struct anonymous_2 *m, char *target);
// make_hash
// file hash_pthreads.c line 286
unsigned char * make_hash(struct anonymous_2 *m);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// open
// file /usr/include/fcntl.h line 149
extern signed int open(const char *, signed int, ...);
// open_file
// file main.c line 93
static struct _IO_FILE * open_file(const char *path);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// print_announce_list
// file init.c line 328
static void print_announce_list(struct llist_s *list);
// print_help
// file init.c line 273
static void print_help();
// print_progress
// file hash_pthreads.c line 166
static void * print_progress(void *data);
// print_web_seed_list
// file init.c line 344
static void print_web_seed_list(struct slist_s *list);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_node
// file init.c line 219
static signed int process_node(const char *path, struct stat *sb, void *data);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_0 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_0 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_0 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_0 *, union anonymous *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 512
extern signed int pthread_setcanceltype(signed int, signed int *);
// put_free
// file hash_pthreads.c line 123
static void put_free(struct queue_s *q, struct piece_s *p, unsigned int hashed);
// put_full
// file hash_pthreads.c line 133
static void put_full(struct queue_s *q, struct piece_s *p);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// read_files
// file hash_pthreads.c line 205
static void read_files(struct anonymous_2 *m, struct queue_s *q, unsigned char *pos);
// readdir
// file /usr/include/dirent.h line 165
extern struct dirent * readdir(struct __dirstream *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// seekdir
// file /usr/include/dirent.h line 214
extern void seekdir(struct __dirstream *, signed long int);
// set_absolute_file_path
// file init.c line 68
static void set_absolute_file_path(struct anonymous_2 *m);
// set_done
// file hash_pthreads.c line 142
static void set_done(struct queue_s *q);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// stat_link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat_link1(const char *__path_link1, struct stat *__statbuf_link1);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strip_ending_dirseps
// file init.c line 43
static void strip_ending_dirseps(char *s);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// telldir
// file /usr/include/dirent.h line 217
extern signed long int telldir(struct __dirstream *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// worker
// file hash_pthreads.c line 189
static void * worker(void *data);
// write_announce_list
// file output.c line 39
static void write_announce_list(struct _IO_FILE *f, struct llist_s *list);
// write_file_list
// file output.c line 60
static void write_file_list(struct _IO_FILE *f, struct flist_s *list);
// write_metainfo
// file output.c line 116
void write_metainfo(struct _IO_FILE *f, struct anonymous_2 *m, unsigned char *hash_string);
// write_web_seed_list
// file output.c line 101
static void write_web_seed_list(struct _IO_FILE *f, struct slist_s *list);

struct anonymous_1
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

struct anonymous_2
{
  // piece_length
  unsigned int piece_length;
  // announce_list
  struct llist_s *announce_list;
  // comment
  char *comment;
  // torrent_name
  const char *torrent_name;
  // metainfo_file_path
  char *metainfo_file_path;
  // web_seed_list
  struct slist_s *web_seed_list;
  // target_is_directory
  signed int target_is_directory;
  // no_creation_date
  signed int no_creation_date;
  // private
  signed int private;
  // verbose
  signed int verbose;
  // threads
  unsigned int threads;
  // size
  signed long int size;
  // file_list
  struct flist_s *file_list;
  // pieces
  unsigned int pieces;
};

union anonymous_0
{
  // __data
  struct anonymous_1 __data;
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

struct SHAstate_st
{
  // h0
  unsigned int h0;
  // h1
  unsigned int h1;
  // h2
  unsigned int h2;
  // h3
  unsigned int h3;
  // h4
  unsigned int h4;
  // Nl
  unsigned int Nl;
  // Nh
  unsigned int Nh;
  // data
  unsigned int data[16l];
  // num
  unsigned int num;
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

struct dir_state
{
  // next
  struct dir_state *next;
  // prev
  struct dir_state *prev;
  // length
  unsigned long int length;
  // dir
  struct __dirstream *dir;
  // offset
  signed long int offset;
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

struct flist_s
{
  // path
  char *path;
  // size
  signed long int size;
  // next
  struct flist_s *next;
};

struct llist_s
{
  // l
  struct slist_s *l;
  // next
  struct llist_s *next;
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

struct piece_s
{
  // next
  struct piece_s *next;
  // dest
  unsigned char *dest;
  // len
  unsigned long int len;
  // data
  unsigned char data[1l];
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct queue_s
{
  // free
  struct piece_s *free;
  // full
  struct piece_s *full;
  // buffers_max
  unsigned int buffers_max;
  // buffers
  unsigned int buffers;
  // mutex_free
  union anonymous mutex_free;
  // mutex_full
  union anonymous mutex_full;
  // cond_empty
  union anonymous_0 cond_empty;
  // cond_full
  union anonymous_0 cond_full;
  // done
  unsigned int done;
  // pieces
  unsigned int pieces;
  // pieces_hashed
  unsigned int pieces_hashed;
};

struct slist_s
{
  // s
  char *s;
  // next
  struct slist_s *next;
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

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1;
}

// basename
// file init.c line 54
static const char * basename(const char *s)
{
  const char *r = s;
  while(!((signed int)*s == 0))
    if((signed int)*s == 47)
    {
      s = s + 1l;
      r = s;
    }

    else
      s = s + 1l;
  return r;
}

// cleanup
// file ftw.c line 116
static unsigned int cleanup(struct dir_state *ds, char *path, signed int ret)
{
  for( ; !(ds->prev == ((struct dir_state *)NULL)); ds = ds->prev)
    ;
  do
  {
    struct dir_state *next = ds->next;
    free((void *)ds);
    ds = next;
  }
  while(!(ds == ((struct dir_state *)NULL)));
  if(!(path == ((char *)NULL)))
    free((void *)path);

  return (unsigned int)ret;
}

// close_file
// file main.c line 121
static void close_file(struct _IO_FILE *f)
{
  signed int return_value_fclose_3;
  return_value_fclose_3=fclose(f);
  if(!(return_value_fclose_3 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "Error closing stream: %s\n", return_value_strerror_2);
    exit(1);
  }

}

// dir_state_close
// file ftw.c line 96
static unsigned int dir_state_close(struct dir_state *ds)
{
  ds->offset=telldir(ds->dir);
  if(!(ds->offset >= 0l))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "Error getting dir offset: %s\n", return_value_strerror_2);
    return (unsigned int)1;
  }

  signed int return_value_closedir_5;
  return_value_closedir_5=closedir(ds->dir);
  if(!(return_value_closedir_5 == 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    char *return_value_strerror_4;
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    fprintf(stderr, "Error closing directory: %s\n", return_value_strerror_4);
    return (unsigned int)1;
  }

  ds->dir = (struct __dirstream *)(void *)0;
  return (unsigned int)0;
}

// dir_state_new
// file ftw.c line 48
static struct dir_state * dir_state_new(struct dir_state *prev, struct dir_state *next)
{
  struct dir_state *ds;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct dir_state) /*40ul*/ );
  ds = (struct dir_state *)return_value_malloc_1;
  if(ds == ((struct dir_state *)NULL))
  {
    fprintf(stderr, "Out of memory.\n");
    return (struct dir_state *)(void *)0;
  }

  else
  {
    ds->prev = prev;
    ds->next = next;
    return ds;
  }
}

// dir_state_open
// file ftw.c line 64
static unsigned int dir_state_open(struct dir_state *ds, const char *name, unsigned long int length)
{
  ds->dir=opendir(name);
  if(ds->dir == ((struct __dirstream *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "Error opening '%s': %s\n", name, return_value_strerror_2);
    return (unsigned int)1;
  }

  ds->length = length;
  return (unsigned int)0;
}

// dir_state_reopen
// file ftw.c line 79
static unsigned int dir_state_reopen(struct dir_state *ds, char *name)
{
  name[(signed long int)ds->length] = (char)0;
  ds->dir=opendir(name);
  if(ds->dir == ((struct __dirstream *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "Error opening '%s': %s\n", name, return_value_strerror_2);
    return (unsigned int)1;
  }

  name[(signed long int)ds->length] = (char)47;
  seekdir(ds->dir, ds->offset);
  return (unsigned int)0;
}

// dump_options
// file init.c line 361
static void dump_options(struct anonymous_2 *m)
{
  printf("Options:\n  Announce URLs:\n");
  print_announce_list(m->announce_list);
  printf("  Torrent name: %s\n  Metafile:     %s\n  Piece length: %u\n  Be verbose:   yes\n", m->torrent_name, m->metainfo_file_path, m->piece_length);
  printf("  Write date:   ");
  if(!(m->no_creation_date == 0))
    printf("no\n");

  else
    printf("yes\n");
  print_web_seed_list(m->web_seed_list);
  printf("  Comment:      ");
  if(m->comment == ((char *)NULL))
    printf("none\n\n");

  else
    printf("\"%s\"\n\n", m->comment);
}

// file_tree_walk
// file ftw.c line 133
signed int file_tree_walk(const char *dirname, unsigned int nfds, signed int (*callback)(const char *, struct stat *, void *), void *data)
{
  unsigned long int path_size = (unsigned long int)256;
  char *path;
  char *path_max;
  char *end;
  struct dir_state *ds;
  ds=dir_state_new((struct dir_state *)(void *)0, (struct dir_state *)(void *)0);
  struct dir_state *first_open;
  unsigned int nopen;
  unsigned int return_value_cleanup_5;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_7;
  unsigned int return_value_cleanup_15;
  unsigned int return_value_cleanup_16;
  unsigned int return_value_cleanup_17;
  unsigned int return_value_cleanup_19;
  unsigned int return_value_cleanup_25;
  if(ds == ((struct dir_state *)NULL))
    return -1;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(path_size);
    path = (char *)return_value_malloc_1;
    if(path == ((char *)NULL))
    {
      fprintf(stderr, "Out of memory.\n");
      unsigned int return_value_cleanup_2;
      return_value_cleanup_2=cleanup(ds, (char *)(void *)0, -1);
      return (signed int)return_value_cleanup_2;
    }

    path_max = path + (signed long int)path_size;
    end = path;
    do
    {
      *end = *dirname;
      if(*end == 0)
        break;

      dirname = dirname + 1l;
      end = end + 1l;
      if(end == path_max)
      {
        char *file_tree_walk__1__2__1__new_path;
        void *return_value_realloc_3;
        return_value_realloc_3=realloc((void *)path, (unsigned long int)2 * path_size);
        file_tree_walk__1__2__1__new_path = (char *)return_value_realloc_3;
        if(file_tree_walk__1__2__1__new_path == ((char *)NULL))
        {
          fprintf(stderr, "Out of memory.\n");
          unsigned int return_value_cleanup_4;
          return_value_cleanup_4=cleanup(ds, path, -1);
          return (signed int)return_value_cleanup_4;
        }

        end = file_tree_walk__1__2__1__new_path + (signed long int)path_size;
        path_size = path_size * (unsigned long int)2;
        path = file_tree_walk__1__2__1__new_path;
        path_max = path + (signed long int)path_size;
      }

    }
    while((_Bool)1);
    for( ; !(path >= end); *end = (char)0)
    {
      if(!((signed int)end[-1l] == 47))
        break;

      end = end - 1l;
    }
    unsigned int return_value_dir_state_open_6;
    return_value_dir_state_open_6=dir_state_open(ds, path, (unsigned long int)(end - path));
    if(!(return_value_dir_state_open_6 == 0u))
    {
      return_value_cleanup_5=cleanup(ds, path, -1);
      return (signed int)return_value_cleanup_5;
    }

    else
    {
      first_open = ds;
      nopen = (unsigned int)1;
      *end = (char)47;
      while((_Bool)1)
      {
        struct dirent *de;
        de=readdir(ds->dir);
        if(!(de == ((struct dirent *)NULL)))
        {
          struct stat sbuf;
          const char *p;
          signed int r;
          if((signed int)de->d_name[0l] == 46)
          {
            if((signed int)de->d_name[1l] == 0)
              tmp_if_expr_8 = (_Bool)1;

            else
            {
              if((signed int)de->d_name[1l] == 46)
                tmp_if_expr_7 = (signed int)de->d_name[(signed long int)2] == 0 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_7 = (_Bool)0;
              tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_8)
              continue;

          }

          end = path + (signed long int)ds->length + (signed long int)1;
          p = de->d_name;
          do
          {
            *end = *p;
            if(*end == 0)
              break;

            p = p + 1l;
            end = end + 1l;
            if(end == path_max)
            {
              char *new_path;
              void *return_value_realloc_9;
              return_value_realloc_9=realloc((void *)path, (unsigned long int)2 * path_size);
              new_path = (char *)return_value_realloc_9;
              if(new_path == ((char *)NULL))
              {
                fprintf(stderr, "Out of memory.\n");
                unsigned int return_value_cleanup_10;
                return_value_cleanup_10=cleanup(ds, path, -1);
                return (signed int)return_value_cleanup_10;
              }

              end = new_path + (signed long int)path_size;
              path_size = path_size * (unsigned long int)2;
              path = new_path;
              path_max = path + (signed long int)path_size;
            }

          }
          while((_Bool)1);
          signed int return_value_stat_14;
          return_value_stat_14=stat(path, &sbuf);
          if(!(return_value_stat_14 == 0))
          {
            signed int *return_value___errno_location_11;
            return_value___errno_location_11=__errno_location();
            char *return_value_strerror_12;
            return_value_strerror_12=strerror(*return_value___errno_location_11);
            fprintf(stderr, "Error stat'ing '%s': %s\n", path, return_value_strerror_12);
            unsigned int return_value_cleanup_13;
            return_value_cleanup_13=cleanup(ds, path, -1);
            return (signed int)return_value_cleanup_13;
          }

          r=callback(path, &sbuf, data);
          if(!(r == 0))
          {
            return_value_cleanup_15=cleanup(ds, path, r);
            return (signed int)return_value_cleanup_15;
          }

          if((61440u & sbuf.st_mode) == 16384u)
          {
            if(ds->next == ((struct dir_state *)NULL))
            {
              ds->next=dir_state_new(ds, (struct dir_state *)(void *)0);
              if(ds->next == ((struct dir_state *)NULL))
              {
                return_value_cleanup_16=cleanup(ds, path, -1);
                return (signed int)return_value_cleanup_16;
              }

            }

            ds = ds->next;
            if(nopen == nfds)
            {
              unsigned int return_value_dir_state_close_18;
              return_value_dir_state_close_18=dir_state_close(first_open);
              if(!(return_value_dir_state_close_18 == 0u))
              {
                return_value_cleanup_17=cleanup(ds, path, -1);
                return (signed int)return_value_cleanup_17;
              }

              first_open = first_open->next;
              nopen = nopen - 1u;
            }

            unsigned int return_value_dir_state_open_20;
            return_value_dir_state_open_20=dir_state_open(ds, path, (unsigned long int)(end - path));
            if(!(return_value_dir_state_open_20 == 0u))
            {
              return_value_cleanup_19=cleanup(ds, path, -1);
              return (signed int)return_value_cleanup_19;
            }

            nopen = nopen + 1u;
            *end = (char)47;
          }

        }

        else
        {
          signed int return_value_closedir_24;
          return_value_closedir_24=closedir(ds->dir);
          if(!(return_value_closedir_24 == 0))
          {
            path[(signed long int)ds->length] = (char)0;
            signed int *return_value___errno_location_21;
            return_value___errno_location_21=__errno_location();
            char *return_value_strerror_22;
            return_value_strerror_22=strerror(*return_value___errno_location_21);
            fprintf(stderr, "Error closing '%s': %s\n", path, return_value_strerror_22);
            unsigned int return_value_cleanup_23;
            return_value_cleanup_23=cleanup(ds, path, -1);
            return (signed int)return_value_cleanup_23;
          }

          if(ds->prev == ((struct dir_state *)NULL))
            break;

          ds = ds->prev;
          nopen = nopen - 1u;
          if(ds->dir == ((struct __dirstream *)NULL))
          {
            unsigned int return_value_dir_state_reopen_26;
            return_value_dir_state_reopen_26=dir_state_reopen(ds, path);
            if(!(return_value_dir_state_reopen_26 == 0u))
            {
              return_value_cleanup_25=cleanup(ds, path, -1);
              return (signed int)return_value_cleanup_25;
            }

            first_open = ds;
            nopen = nopen + 1u;
          }

        }
      }
      unsigned int return_value_cleanup_27;
      return_value_cleanup_27=cleanup(ds, path, 0);
      return (signed int)return_value_cleanup_27;
    }
  }
}

// free_buffers
// file hash_pthreads.c line 150
static void free_buffers(struct queue_s *q)
{
  struct piece_s *first = q->free;
  while(!(first == ((struct piece_s *)NULL)))
  {
    struct piece_s *p = first;
    first = p->next;
    free((void *)p);
  }
  q->free = (struct piece_s *)(void *)0;
}

// get_free
// file hash_pthreads.c line 74
static struct piece_s * get_free(struct queue_s *q, unsigned long int piece_length)
{
  struct piece_s *r;
  pthread_mutex_lock(&q->mutex_free);
  if(!(q->free == ((struct piece_s *)NULL)))
  {
    r = q->free;
    q->free = r->next;
  }

  else
    if(!(q->buffers >= q->buffers_max))
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((sizeof(struct piece_s) /*32ul*/  - (unsigned long int)1) + piece_length);
      r = (struct piece_s *)return_value_malloc_1;
      if(r == ((struct piece_s *)NULL))
      {
        fprintf(stderr, "Out of memory.\n");
        exit(1);
      }

      q->buffers = q->buffers + 1u;
    }

    else
    {
      while(q->free == ((struct piece_s *)NULL))
        pthread_cond_wait(&q->cond_full, &q->mutex_free);
      r = q->free;
      q->free = r->next;
    }
  pthread_mutex_unlock(&q->mutex_free);
  return r;
}

// get_full
// file hash_pthreads.c line 103
static struct piece_s * get_full(struct queue_s *q)
{
  struct piece_s *r;
  pthread_mutex_lock(&q->mutex_full);

again:
  ;
  while((_Bool)1)
  {
    if(!(q->full == ((struct piece_s *)NULL)))
    {
      r = q->full;
      q->full = r->next;
      goto __CPROVER_DUMP_L4;
    }

    if(!(q->done == 0u))
    {
      r = (struct piece_s *)(void *)0;
      break;
    }

    pthread_cond_wait(&q->cond_empty, &q->mutex_full);
  }

__CPROVER_DUMP_L4:
  ;
  pthread_mutex_unlock(&q->mutex_full);
  return r;
}

// get_slist
// file init.c line 131
static struct slist_s * get_slist(char *s)
{
  struct slist_s *list;
  struct slist_s *last;
  char *e;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct slist_s) /*16ul*/ );
  last = (struct slist_s *)return_value_malloc_1;
  list = last;
  if(list == ((struct slist_s *)NULL))
  {
    fprintf(stderr, "Out of memory.\n");
    exit(1);
  }

  char *return_value___builtin_strchr_2;
  do
  {
    return_value___builtin_strchr_2=__builtin_strchr(s, 44);
    e = return_value___builtin_strchr_2;
    if(e == ((char *)NULL))
      break;

    *e = (char)0;
    last->s = s;
    s = e + (signed long int)1;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc(sizeof(struct slist_s) /*16ul*/ );
    last->next = (struct slist_s *)return_value_malloc_3;
    last = last->next;
    if(last == ((struct slist_s *)NULL))
    {
      fprintf(stderr, "Out of memory.\n");
      exit(1);
    }

  }
  while((_Bool)1);
  last->s = s;
  last->next = (struct slist_s *)(void *)0;
  return list;
}

// init
// file init.c line 394
void init(struct anonymous_2 *m, signed int argc, char **argv)
{
  signed int c;
  struct llist_s *announce_last = (struct llist_s *)(void *)0;
  struct slist_s *web_seed_last = (struct slist_s *)(void *)0;
  signed int return_value_atoi_3;
  signed int return_value_atoi_4;
  do
  {
    static struct option long_options[12l] = { { .name="announce", .has_arg=1, .flag=(signed int *)(void *)0, .val=97 },
    { .name="comment", .has_arg=1, .flag=(signed int *)(void *)0, .val=99 },
    { .name="no-date", .has_arg=0, .flag=(signed int *)(void *)0, .val=100 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="piece-length", .has_arg=1, .flag=(signed int *)(void *)0, .val=108 },
    { .name="name", .has_arg=1, .flag=(signed int *)(void *)0, .val=110 },
    { .name="output", .has_arg=1, .flag=(signed int *)(void *)0, .val=111 },
    { .name="private", .has_arg=0, .flag=(signed int *)(void *)0, .val=112 },
    { .name="threads", .has_arg=1, .flag=(signed int *)(void *)0, .val=116 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="web-seed", .has_arg=1, .flag=(signed int *)(void *)0, .val=119 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
    c=getopt_long(argc, argv, "a:c:dhl:n:o:pt:vw:", long_options, (signed int *)(void *)0);
    if(c == -1)
      break;

    switch(c)
    {
      case 97:
      {
        if(announce_last == ((struct llist_s *)NULL))
        {
          void *return_value_malloc_1;
          return_value_malloc_1=malloc(sizeof(struct llist_s) /*16ul*/ );
          announce_last = (struct llist_s *)return_value_malloc_1;
          m->announce_list = announce_last;
        }

        else
        {
          void *return_value_malloc_2;
          return_value_malloc_2=malloc(sizeof(struct llist_s) /*16ul*/ );
          announce_last->next = (struct llist_s *)return_value_malloc_2;
          announce_last = announce_last->next;
        }
        if(announce_last == ((struct llist_s *)NULL))
        {
          fprintf(stderr, "Out of memory.\n");
          exit(1);
        }

        announce_last->l=get_slist(optarg);
        break;
      }
      case 99:
      {
        m->comment = optarg;
        break;
      }
      case 100:
      {
        m->no_creation_date = 1;
        break;
      }
      case 104:
      {
        print_help();
        exit(0);
      }
      case 108:
      {
        return_value_atoi_3=atoi(optarg);
        m->piece_length = (unsigned int)return_value_atoi_3;
        break;
      }
      case 110:
      {
        m->torrent_name = optarg;
        break;
      }
      case 111:
      {
        m->metainfo_file_path = optarg;
        break;
      }
      case 112:
      {
        m->private = 1;
        break;
      }
      case 116:
      {
        return_value_atoi_4=atoi(optarg);
        m->threads = (unsigned int)return_value_atoi_4;
        break;
      }
      case 118:
      {
        m->verbose = 1;
        break;
      }
      case 119:
      {
        if(web_seed_last == ((struct slist_s *)NULL))
        {
          web_seed_last=get_slist(optarg);
          m->web_seed_list = web_seed_last;
        }

        else
        {
          web_seed_last->next=get_slist(optarg);
          web_seed_last = web_seed_last->next;
        }
        for( ; !(web_seed_last->next == ((struct slist_s *)NULL)); web_seed_last = web_seed_last->next)
          ;
        break;
      }
      case 63:
      {
        fprintf(stderr, "Use -h for help.\n");
        exit(1);
      }
    }
  }
  while((_Bool)1);
  _Bool tmp_if_expr_5;
  if(!(m->piece_length >= 15u))
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = m->piece_length > (unsigned int)28 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_5)
  {
    fprintf(stderr, "The piece length must be a number between 15 and 28.\n");
    exit(1);
  }

  m->piece_length = (unsigned int)(1 << m->piece_length);
  if(m->announce_list == ((struct llist_s *)NULL))
  {
    fprintf(stderr, "Must specify an announce URL. Use -h for help.\n");
    exit(1);
  }

  announce_last->next = (struct llist_s *)(void *)0;
  if(optind >= argc)
  {
    fprintf(stderr, "Must specify the contents, use -h for help\n");
    exit(1);
  }

  _Bool tmp_if_expr_6;
  if(!(m->threads >= 1u))
    tmp_if_expr_6 = (_Bool)1;

  else
    tmp_if_expr_6 = m->threads > (unsigned int)20 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_6)
  {
    fprintf(stderr, "The number of threads must be a numberbetween 1 and 20\n");
    exit(1);
  }

  strip_ending_dirseps(argv[(signed long int)optind]);
  if(m->torrent_name == ((const char *)NULL))
    m->torrent_name=basename(argv[(signed long int)optind]);

  set_absolute_file_path(m);
  if(!(m->verbose == 0))
    dump_options(m);

  m->target_is_directory=is_dir(m, argv[(signed long int)optind]);
  if(!(m->target_is_directory == 0))
  {
    signed int return_value_chdir_9;
    return_value_chdir_9=chdir(argv[(signed long int)optind]);
    if(!(return_value_chdir_9 == 0))
    {
      signed int *return_value___errno_location_7;
      return_value___errno_location_7=__errno_location();
      char *return_value_strerror_8;
      return_value_strerror_8=strerror(*return_value___errno_location_7);
      fprintf(stderr, "Error changing directory to '%s': %s\n", argv[(signed long int)optind], return_value_strerror_8);
      exit(1);
    }

    signed int return_value_file_tree_walk_10;
    return_value_file_tree_walk_10=file_tree_walk("./", (unsigned int)100, process_node, (void *)m);
    if(!(return_value_file_tree_walk_10 == 0))
      exit(1);

  }

  m->pieces = (unsigned int)(((m->size + (signed long int)m->piece_length) - (signed long int)1) / (signed long int)m->piece_length);
  if(!(m->verbose == 0))
    printf("\n%ld bytes in all.\nThat's %u pieces of %u bytes each.\n\n", m->size, m->pieces, m->piece_length);

}

// is_dir
// file init.c line 174
static signed int is_dir(struct anonymous_2 *m, char *target)
{
  struct stat s;
  signed int return_value_stat_3;
  return_value_stat_3=stat_link1(target, &s);
  if(!(return_value_stat_3 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "Error stat'ing '%s': %s\n", target, return_value_strerror_2);
    exit(1);
  }

  if((61440u & s.st_mode) == 16384u)
    return 1;

  else
  {
    if(!((61440u & s.st_mode) == 32768u))
    {
      fprintf(stderr, "'%s' is neither a directory nor regular file.\n", target);
      exit(1);
    }

    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(struct flist_s) /*24ul*/ );
    m->file_list = (struct flist_s *)return_value_malloc_4;
    if(m->file_list == ((struct flist_s *)NULL))
    {
      fprintf(stderr, "Out of memory.\n");
      exit(1);
    }

    m->file_list->path = target;
    m->file_list->size = s.st_size;
    m->file_list->next = (struct flist_s *)(void *)0;
    m->size = s.st_size;
    return 0;
  }
}

// main
// file main.c line 134
signed int main(signed int argc, char **argv)
{
  struct _IO_FILE *file;
  struct anonymous_2 m = { .piece_length=(unsigned int)18, .announce_list=(struct llist_s *)(void *)0, .comment=(char *)(void *)0,
    .torrent_name=(const char *)(void *)0, .metainfo_file_path=(char *)(void *)0,
    .web_seed_list=(struct slist_s *)(void *)0,
    .target_is_directory=0,
    .no_creation_date=0, .private=0,
    .verbose=0, .threads=(unsigned int)2, .size=(signed long int)0,
    .file_list=(struct flist_s *)(void *)0, .pieces=(unsigned int)0 };
  printf("mktorrent 1.0 (c) 2007, 2009 Emil Renner Berthing\n\n");
  init(&m, argc, argv);
  file=open_file(m.metainfo_file_path);
  unsigned char *return_value_make_hash_1;
  return_value_make_hash_1=make_hash(&m);
  write_metainfo(file, &m, return_value_make_hash_1);
  close_file(file);
  return 0;
}

// make_hash
// file hash_pthreads.c line 286
unsigned char * make_hash(struct anonymous_2 *m)
{
  struct queue_s q = { .free=(struct piece_s *)(void *)0, .full=(struct piece_s *)(void *)0, .buffers_max=(unsigned int)0,
    .buffers=(unsigned int)0, .mutex_free={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } },
    .mutex_full={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } },
    .cond_empty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .cond_full={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .done=(unsigned int)0,
    .pieces=(unsigned int)0, .pieces_hashed=(unsigned int)0 };
  unsigned long int print_progress_thread;
  unsigned long int *workers;
  unsigned char *hash_string;
  unsigned int i;
  signed int err;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)m->threads * sizeof(unsigned long int) /*8ul*/ );
  workers = (unsigned long int *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc((unsigned long int)(m->pieces * (unsigned int)20));
  hash_string = (unsigned char *)return_value_malloc_2;
  if(workers == ((unsigned long int *)NULL) || hash_string == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    q.pieces = m->pieces;
    q.buffers_max = (unsigned int)3 * m->threads;
    i = (unsigned int)0;
    for( ; !(i >= m->threads); i = i + 1u)
    {
      err=pthread_create(&workers[(signed long int)i], (const union pthread_attr_t *)(void *)0, worker, (void *)&q);
      if(!(err == 0))
      {
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(err);
        fprintf(stderr, "Error creating thread: %s\n", return_value_strerror_3);
        exit(1);
      }

    }
    err=pthread_create(&print_progress_thread, (const union pthread_attr_t *)(void *)0, print_progress, (void *)&q);
    if(!(err == 0))
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(err);
      fprintf(stderr, "Error creating thread: %s\n", return_value_strerror_4);
      exit(1);
    }

    read_files(m, &q, hash_string);
    err=pthread_cancel(print_progress_thread);
    if(!(err == 0))
    {
      char *return_value_strerror_5;
      return_value_strerror_5=strerror(err);
      fprintf(stderr, "Error cancelling thread: %s\n", return_value_strerror_5);
      exit(1);
    }

    set_done(&q);
    i = (unsigned int)0;
    for( ; !(i >= m->threads); i = i + 1u)
    {
      err=pthread_join(workers[(signed long int)i], (void **)(void *)0);
      if(!(err == 0))
      {
        char *return_value_strerror_6;
        return_value_strerror_6=strerror(err);
        fprintf(stderr, "Error joining thread: %s\n", return_value_strerror_6);
        exit(1);
      }

    }
    free((void *)workers);
    err=pthread_join(print_progress_thread, (void **)(void *)0);
    if(!(err == 0))
    {
      char *return_value_strerror_7;
      return_value_strerror_7=strerror(err);
      fprintf(stderr, "Error joining thread: %s\n", return_value_strerror_7);
      exit(1);
    }

    pthread_mutex_destroy(&q.mutex_full);
    pthread_mutex_destroy(&q.mutex_free);
    pthread_cond_destroy(&q.cond_empty);
    pthread_cond_destroy(&q.cond_full);
    free_buffers(&q);
    printf("\rHashed %u of %u pieces.\n", q.pieces_hashed, q.pieces);
    return hash_string;
  }
}

// open_file
// file main.c line 93
static struct _IO_FILE * open_file(const char *path)
{
  signed int fd;
  struct _IO_FILE *f;
  fd=open(path, 01 | 0 | 0100 | 0200, 0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3);
  if(!(fd >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "Error creating '%s': %s\n", path, return_value_strerror_2);
    exit(1);
  }

  f=fdopen(fd, "wb");
  if(f == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    char *return_value_strerror_4;
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    fprintf(stderr, "Error creating stream for '%s': %s\n", path, return_value_strerror_4);
    exit(1);
  }

  return f;
}

// print_announce_list
// file init.c line 328
static void print_announce_list(struct llist_s *list)
{
  unsigned int n = (unsigned int)1;
  for( ; !(list == ((struct llist_s *)NULL)); n = n + 1u)
  {
    struct slist_s *l = list->l;
    printf("    %u : %s\n", n, l->s);
    l = l->next;
    for( ; !(l == ((struct slist_s *)NULL)); l = l->next)
      printf("        %s\n", l->s);
    list = list->next;
  }
}

// print_help
// file init.c line 273
static void print_help()
{
  printf("Usage: mktorrent [OPTIONS] <target directory or filename>\n\nOptions:\n-a, --announce=<url>[,<url>]* : specify the full announce URLs\n                                at least one is required\n                                additional -a adds backup trackers\n-c, --comment=<comment>       : add a comment to the metainfo\n-d, --no-date                 : don't write the creation date\n-h, --help                    : show this help screen\n-l, --piece-length=<n>        : set the piece length to 2^n bytes,\n                                default is 18, that is 2^18 = 256kb\n-n, --name=<name>             : set the name of the torrent\n                                default is the basename of the target\n-o, --output=<filename>       : set the path and filename of the created file\n                                default is <name>.torrent\n-p, --private                 : set the private flag\n-t, --threads=<n>             : use <n> threads for calculating hashes\n                                default is 2\n-v, --verbose                 : be verbose\n-w, --web-seed=<url>[,<url>]* : add web seed URLs\n                                additional -w adds more URLs\n\nPlease send bug reports, patches, feature requests, praise and\ngeneral gossip about the program to: esmil@users.sourceforge.net\n");
}

// print_progress
// file hash_pthreads.c line 166
static void * print_progress(void *data)
{
  struct queue_s *q = (struct queue_s *)data;
  signed int err;
  err=pthread_setcanceltype(1, (signed int *)(void *)0);
  if(!(err == 0))
  {
    char *return_value_strerror_1;
    return_value_strerror_1=strerror(err);
    fprintf(stderr, "Error setting thread cancel type: %s\n", return_value_strerror_1);
    exit(1);
  }

  while((_Bool)1)
  {
    printf("\rHashed %u of %u pieces.", q->pieces_hashed, q->pieces);
    fflush(stdout);
    usleep((unsigned int)200000);
  }
  return (void *)0;
}

// print_web_seed_list
// file init.c line 344
static void print_web_seed_list(struct slist_s *list)
{
  printf("  Web Seed URL: ");
  if(list == ((struct slist_s *)NULL))
    printf("none\n");

  else
  {
    printf("%s\n", list->s);
    list = list->next;
    for( ; !(list == ((struct slist_s *)NULL)); list = list->next)
      printf("                %s\n", list->s);
  }
}

// process_node
// file init.c line 219
static signed int process_node(const char *path, struct stat *sb, void *data)
{
  struct flist_s **p;
  struct flist_s *new_node;
  struct anonymous_2 *m = (struct anonymous_2 *)data;
  signed int tmp_statement_expression_2;
  _Bool tmp_if_expr_6;
  char *return_value___strdup_5;
  if(!((61440u & sb->st_mode) == 32768u))
    return 0;

  else
  {
    path = path + (signed long int)2;
    signed int return_value_access_1;
    return_value_access_1=access(path, 4);
    if(!(return_value_access_1 == 0))
    {
      fprintf(stderr, "Warning: Cannot read '%s', skipping.\n", path);
      return 0;
    }

    else
    {
      if(!(m->verbose == 0))
        printf("Adding %s\n", path);

      m->size = m->size + sb->st_size;
      p = &m->file_list;
      for( ; !(*p == ((struct flist_s *)NULL)); p = &(*p)->next)
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp_3;
        return_value___builtin_strcmp_3=__builtin_strcmp(path, (*p)->path);
        tmp_statement_expression_2 = return_value___builtin_strcmp_3;
        if(!(tmp_statement_expression_2 >= 1))
          break;

      }
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct flist_s) /*24ul*/ );
      new_node = (struct flist_s *)return_value_malloc_4;
      if(new_node == ((struct flist_s *)NULL))
        tmp_if_expr_6 = (_Bool)1;

      else
      {
        return_value___strdup_5=__strdup(path);
        new_node->path = return_value___strdup_5;
        tmp_if_expr_6 = new_node->path == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_6)
      {
        fprintf(stderr, "Out of memory.\n");
        return -1;
      }

      else
      {
        new_node->size = sb->st_size;
        new_node->next = *p;
        *p = new_node;
        return 0;
      }
    }
  }
}

// put_free
// file hash_pthreads.c line 123
static void put_free(struct queue_s *q, struct piece_s *p, unsigned int hashed)
{
  pthread_mutex_lock(&q->mutex_free);
  p->next = q->free;
  q->free = p;
  q->pieces_hashed = q->pieces_hashed + hashed;
  pthread_mutex_unlock(&q->mutex_free);
  pthread_cond_signal(&q->cond_full);
}

// put_full
// file hash_pthreads.c line 133
static void put_full(struct queue_s *q, struct piece_s *p)
{
  pthread_mutex_lock(&q->mutex_full);
  p->next = q->full;
  q->full = p;
  pthread_mutex_unlock(&q->mutex_full);
  pthread_cond_signal(&q->cond_empty);
}

// read_files
// file hash_pthreads.c line 205
static void read_files(struct anonymous_2 *m, struct queue_s *q, unsigned char *pos)
{
  signed int fd;
  struct flist_s *f;
  signed long int r = (signed long int)0;
  signed long int counter = (signed long int)0;
  struct piece_s *p;
  p=get_free(q, (unsigned long int)m->piece_length);
  f = m->file_list;
  for( ; !(f == ((struct flist_s *)NULL)); f = f->next)
  {
    fd=open(f->path, 00 | 0);
    if(fd == -1)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      fprintf(stderr, "Error opening '%s' for reading: %s\n", f->path, return_value_strerror_2);
      exit(1);
    }

    while((_Bool)1)
    {
      signed long int d;
      d=read(fd, (void *)(p->data + r), (unsigned long int)((signed long int)m->piece_length - r));
      if(!(d >= 0l))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        char *return_value_strerror_4;
        return_value_strerror_4=strerror(*return_value___errno_location_3);
        fprintf(stderr, "Error reading from '%s': %s\n", f->path, return_value_strerror_4);
        exit(1);
      }

      if(d == 0l)
        break;

      r = r + d;
      if(r == (signed long int)m->piece_length)
      {
        p->dest = pos;
        p->len = (unsigned long int)m->piece_length;
        put_full(q, p);
        pos = pos + (signed long int)20;
        counter = counter + r;
        r = (signed long int)0;
        p=get_free(q, (unsigned long int)m->piece_length);
      }

    }
    signed int return_value_close_7;
    return_value_close_7=close(fd);
    if(!(return_value_close_7 == 0))
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      char *return_value_strerror_6;
      return_value_strerror_6=strerror(*return_value___errno_location_5);
      fprintf(stderr, "Error closing '%s': %s\n", f->path, return_value_strerror_6);
      exit(1);
    }

  }
  if(!(r == 0l))
  {
    p->dest = pos;
    p->len = (unsigned long int)r;
    put_full(q, p);
  }

  else
    put_free(q, p, (unsigned int)0);
  counter = counter + r;
  if(!(counter == m->size))
  {
    fprintf(stderr, "Counted %ld bytes, but hashed %ld bytes. Something is wrong...\n", m->size, counter);
    exit(1);
  }

}

// set_absolute_file_path
// file init.c line 68
static void set_absolute_file_path(struct anonymous_2 *m)
{
  char *string;
  unsigned long int length = (unsigned long int)32;
  char *return_value_getcwd_2;
  if(!(m->metainfo_file_path == ((char *)NULL)))
  {
    if(!((signed int)*m->metainfo_file_path == 47))
      goto __CPROVER_DUMP_L1;

  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(length);
    string = (char *)return_value_malloc_1;
    if(string == ((char *)NULL))
    {
      fprintf(stderr, "Out of memory.\n");
      exit(1);
    }

    do
    {
      return_value_getcwd_2=getcwd(string, length);
      if(!(return_value_getcwd_2 == ((char *)NULL)))
        break;

      length = length * (unsigned long int)2;
      free((void *)string);
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(length);
      string = (char *)return_value_malloc_3;
      if(string == ((char *)NULL))
      {
        fprintf(stderr, "Out of memory.\n");
        exit(1);
      }

    }
    while((_Bool)1);
    length=strlen(string);
    if(m->metainfo_file_path == ((char *)NULL))
    {
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(m->torrent_name);
      void *return_value_realloc_5;
      return_value_realloc_5=realloc((void *)string, length + return_value_strlen_4 + (unsigned long int)10);
      string = (char *)return_value_realloc_5;
      if(string == ((char *)NULL))
      {
        fprintf(stderr, "Out of memory.\n");
        exit(1);
      }

      sprintf(string + (signed long int)length, "/%s.torrent", m->torrent_name);
    }

    else
    {
      unsigned long int return_value_strlen_6;
      return_value_strlen_6=strlen(m->metainfo_file_path);
      void *return_value_realloc_7;
      return_value_realloc_7=realloc((void *)string, length + return_value_strlen_6 + (unsigned long int)2);
      string = (char *)return_value_realloc_7;
      if(string == ((char *)NULL))
      {
        fprintf(stderr, "Out of memory.\n");
        exit(1);
      }

      sprintf(string + (signed long int)length, "/%s", m->metainfo_file_path);
    }
    m->metainfo_file_path = string;
  }
}

// set_done
// file hash_pthreads.c line 142
static void set_done(struct queue_s *q)
{
  pthread_mutex_lock(&q->mutex_full);
  q->done = (unsigned int)1;
  pthread_mutex_unlock(&q->mutex_full);
  pthread_cond_broadcast(&q->cond_empty);
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat_1;
  return_value___xstat_1=__xstat(1, __path, __statbuf);
  return return_value___xstat_1;
}

// stat_link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat_link1(const char *__path_link1, struct stat *__statbuf_link1)
{
  signed int return_value___xstat_1_link1;
  return_value___xstat_1_link1=__xstat(1, __path_link1, __statbuf_link1);
  return return_value___xstat_1_link1;
}

// strip_ending_dirseps
// file init.c line 43
static void strip_ending_dirseps(char *s)
{
  char *end = s;
  for( ; !(*end == 0); end = end + 1l)
    ;
  for( ; !(s >= end); *end = (char)0)
  {
    end = end - 1l;
    if(!((signed int)*end == 47))
      break;

  }
}

// worker
// file hash_pthreads.c line 189
static void * worker(void *data)
{
  struct queue_s *q = (struct queue_s *)data;
  struct piece_s *p;
  struct SHAstate_st c;
  do
  {
    p=get_full(q);
    if(p == ((struct piece_s *)NULL))
      break;

    SHA1_Init(&c);
    SHA1_Update(&c, (const void *)p->data, p->len);
    SHA1_Final(p->dest, &c);
    put_free(q, p, (unsigned int)1);
  }
  while((_Bool)1);
  return (void *)0;
}

// write_announce_list
// file output.c line 39
static void write_announce_list(struct _IO_FILE *f, struct llist_s *list)
{
  fprintf(f, "13:announce-listl");
  unsigned long int return_value_strlen_1;
  for( ; !(list == ((struct llist_s *)NULL)); list = list->next)
  {
    struct slist_s *l;
    fprintf(f, "l");
    l = list->l;
    for( ; !(l == ((struct slist_s *)NULL)); l = l->next)
    {
      return_value_strlen_1=strlen(l->s);
      fprintf(f, "%lu:%s", (unsigned long int)return_value_strlen_1, l->s);
    }
    fprintf(f, "e");
  }
  fprintf(f, "e");
}

// write_file_list
// file output.c line 60
static void write_file_list(struct _IO_FILE *f, struct flist_s *list)
{
  char *a;
  char *b;
  fprintf(f, "5:filesl");
  char *return_value___builtin_strchr_1;
  for( ; !(list == ((struct flist_s *)NULL)); list = list->next)
  {
    fprintf(f, "d6:lengthi%lde4:pathl", list->size);
    a = list->path;
    do
    {
      return_value___builtin_strchr_1=__builtin_strchr(a, 47);
      b = return_value___builtin_strchr_1;
      if(b == ((char *)NULL))
        break;

      *b = (char)0;
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(a);
      fprintf(f, "%lu:%s", (unsigned long int)return_value_strlen_2, a);
      *b = (char)47;
      a = b + (signed long int)1;
    }
    while((_Bool)1);
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(a);
    fprintf(f, "%lu:%see", (unsigned long int)return_value_strlen_3, a);
  }
  fprintf(f, "e");
}

// write_metainfo
// file output.c line 116
void write_metainfo(struct _IO_FILE *f, struct anonymous_2 *m, unsigned char *hash_string)
{
  printf("Writing metainfo file... ");
  fflush(stdout);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(m->announce_list->l->s);
  fprintf(f, "d8:announce%lu:%s", (unsigned long int)return_value_strlen_1, m->announce_list->l->s);
  _Bool tmp_if_expr_2;
  if(!(m->announce_list->next == ((struct llist_s *)NULL)))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = m->announce_list->l->next != ((struct slist_s *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    write_announce_list(f, m->announce_list);

  unsigned long int return_value_strlen_3;
  if(!(m->comment == ((char *)NULL)))
  {
    return_value_strlen_3=strlen(m->comment);
    fprintf(f, "7:comment%lu:%s", (unsigned long int)return_value_strlen_3, m->comment);
  }

  fprintf(f, "10:created by13:mktorrent 1.0");
  signed long int return_value_time_4;
  if(m->no_creation_date == 0)
  {
    return_value_time_4=time((signed long int *)(void *)0);
    fprintf(f, "13:creation datei%lde", (signed long int)return_value_time_4);
  }

  fprintf(f, "4:infod");
  if(m->target_is_directory == 0)
    fprintf(f, "6:lengthi%lde", m->file_list->size);

  else
    write_file_list(f, m->file_list);
  unsigned long int return_value_strlen_5;
  return_value_strlen_5=strlen(m->torrent_name);
  fprintf(f, "4:name%lu:%s12:piece lengthi%ue6:pieces%u:", (unsigned long int)return_value_strlen_5, m->torrent_name, m->piece_length, m->pieces * (unsigned int)20);
  fwrite((const void *)hash_string, (unsigned long int)1, (unsigned long int)(m->pieces * (unsigned int)20), f);
  if(!(m->private == 0))
    fprintf(f, "7:privatei1e");

  fprintf(f, "e");
  unsigned long int return_value_strlen_6;
  if(!(m->web_seed_list == ((struct slist_s *)NULL)))
  {
    if(m->web_seed_list->next == ((struct slist_s *)NULL))
    {
      return_value_strlen_6=strlen(m->web_seed_list->s);
      fprintf(f, "8:url-list%lu:%s", (unsigned long int)return_value_strlen_6, m->web_seed_list->s);
    }

    else
      write_web_seed_list(f, m->web_seed_list);
  }

  fprintf(f, "e");
  printf("done.\n");
  fflush(stdout);
}

// write_web_seed_list
// file output.c line 101
static void write_web_seed_list(struct _IO_FILE *f, struct slist_s *list)
{
  fprintf(f, "8:url-listl");
  unsigned long int return_value_strlen_1;
  for( ; !(list == ((struct slist_s *)NULL)); list = list->next)
  {
    return_value_strlen_1=strlen(list->s);
    fprintf(f, "%lu:%s", (unsigned long int)return_value_strlen_1, list->s);
  }
  fprintf(f, "e");
}

