// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
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

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-gzFile_s
// file /usr/include/zlib.h line 1224
struct gzFile_s;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// compressThread
// file qsrotate.c line 199
static void compressThread(const char *cmd, const char *arch);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fgetc
// file /usr/include/stdio.h line 531
extern signed int fgetc(struct _IO_FILE *);
// forcedRotationThread
// file qsrotate.c line 301
static void * forcedRotationThread(void *argv);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// ftruncate
// file /usr/include/unistd.h line 1016
extern signed int ftruncate(signed int, signed long int);
// get_now
// file qsrotate.c line 171
static signed long int get_now();
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
// gzclose
// file /usr/include/zlib.h line 1511
extern signed int gzclose(struct gzFile_s *);
// gzopen
// file /usr/include/zlib.h line 1725
extern struct gzFile_s * gzopen(const char *, const char *);
// gzwrite
// file /usr/include/zlib.h line 1341
extern signed int gzwrite(struct gzFile_s *, const void *, unsigned int);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// nice
// file /usr/include/unistd.h line 598
extern signed int nice(signed int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openFile
// file qsrotate.c line 183
static signed int openFile(const char *cmd, const char *file_name);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous$0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// qs_CMD
// file qs_util.h line 50
char * qs_CMD(const char *cmd);
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
// file qs_util.h line 72
void qs_setuid(const char *username, const char *cmd);
// qs_time
// file qs_util.c line 198
void qs_time(signed long int *tme);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// rename
// file /usr/include/stdio.h line 180
extern signed int rename(const char *, const char *);
// rewinddir
// file /usr/include/dirent.h line 208
extern void rewinddir(struct __dirstream *);
// rotate
// file qsrotate.c line 244
static void rotate(const char *cmd, signed long int now, const char *file_name, signed long int *messages);
// setgid
// file /usr/include/unistd.h line 717
extern signed int setgid(unsigned int);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// sigchild
// file qsrotate.c line 229
void sigchild(signed int signo);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
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
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
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
// file qsrotate.c line 71
static void usage(char *cmd, signed int man);
// vsprintf
// file /usr/include/stdio.h line 379
extern signed int vsprintf(char *, const char *, void **);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

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

struct gzFile_s
{
  // have
  unsigned int have;
  // next
  unsigned char *next;
  // pos
  signed long int pos;
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


// m_cmd
// file qsrotate.c line 63
static char *m_cmd = (char *)(void *)0;
// m_compress
// file qsrotate.c line 64
static signed int m_compress = 0;
// m_counter
// file qsrotate.c line 66
static signed long int m_counter = (signed long int)0;
// m_file_name
// file qsrotate.c line 61
static char *m_file_name = (char *)(void *)0;
// m_force_rotation
// file qsrotate.c line 56
static signed int m_force_rotation = 0;
// m_generations
// file qsrotate.c line 60
static signed int m_generations = -1;
// m_limit
// file qsrotate.c line 67
static signed long int m_limit = 2147483648 - (signed long int)(128 * 1024);
// m_messages
// file qsrotate.c line 62
static signed long int m_messages = (signed long int)0;
// m_nLogFD
// file qsrotate.c line 59
static signed int m_nLogFD = -1;
// m_offset
// file qsrotate.c line 68
static signed int m_offset = 0;
// m_offset_enabled
// file qsrotate.c line 69
static signed int m_offset_enabled = 0;
// m_qs_lock_cs
// file qs_util.c line 43
static union anonymous m_qs_lock_cs;
// m_qs_offline
// file qs_util.c line 45
static signed int m_qs_offline = 0;
// m_qs_virtualSystemTime
// file qs_util.c line 48
static signed long int m_qs_virtualSystemTime = (signed long int)0;
// m_stdout
// file qsrotate.c line 65
static signed int m_stdout = 0;
// m_tLogEnd
// file qsrotate.c line 57
static signed long int m_tLogEnd = (signed long int)0;
// m_tRotation
// file qsrotate.c line 58
static signed long int m_tRotation = (signed long int)86400;
// man_date
// file qs_util.h line 33
static const char man_date[13l] = { 'J', 'a', 'n', 'u', 'a', 'r', 'y', ' ', '2', '0', '1', '6', 0 };
// man_version
// file qs_util.h line 32
static const char man_version[6l] = { '1', '1', '.', '2', '1', 0 };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;

// compressThread
// file qsrotate.c line 199
static void compressThread(const char *cmd, const char *arch)
{
  struct gzFile_s **outfp;
  signed int infp;
  char dest[1044l];
  char buf[1024l];
  signed int len;
  snprintf(dest, sizeof(char [1044l]) /*1044ul*/ , "%s.gz", arch);
  signed int return_value_nice$3;
  return_value_nice$3=nice(10);
  if(return_value_nice$3 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    fprintf(stderr, "[%s]: WARNING, failed to change nice value: %s\n", cmd, return_value_strerror$2);
  }

  infp=open(arch, 00);
  signed long int return_value_read$5;
  if(infp == -1)
    fprintf(stderr, "[%s]: ERROR, could not open file for compression <%s>\n", cmd, arch);

  else
  {
    struct gzFile_s *return_value_gzopen$4;
    return_value_gzopen$4=gzopen(dest, "wb");
    outfp = (struct gzFile_s **)return_value_gzopen$4;
    if(outfp == ((struct gzFile_s **)NULL))
    {
      fprintf(stderr, "[%s]: ERROR, could not open file for compression <%s>\n", cmd, (const void *)dest);
      close(infp);
    }

    else
    {
      do
      {
        return_value_read$5=read(infp, (void *)buf, sizeof(char [1024l]) /*1024ul*/ );
        len = (signed int)return_value_read$5;
        if(!(len >= 1))
          break;

        gzwrite((struct gzFile_s *)outfp, (const void *)buf, (unsigned int)len);
      }
      while((_Bool)1);
      gzclose((struct gzFile_s *)outfp);
      close(infp);
      unlink(arch);
    }
  }
}

// forcedRotationThread
// file qsrotate.c line 301
static void * forcedRotationThread(void *argv)
{
  signed long int now;
  signed long int n;
  while((_Bool)1)
  {
    qs_csLock();
    now=get_now();
    if(!(m_tLogEnd >= now))
      rotate(m_cmd, now, m_file_name, &m_messages);

    qs_csUnLock();
    now=get_now();
    n = ((signed long int)1 + m_tLogEnd) - now;
    sleep((unsigned int)n);
  }
  return (void *)0;
}

// get_now
// file qsrotate.c line 171
static signed long int get_now()
{
  signed long int now;
  now=time((signed long int *)(void *)0);
  if(!(m_offset_enabled == 0))
  {
    struct tm lcl;
    struct tm *return_value_localtime$1;
    return_value_localtime$1=localtime(&now);
    lcl = *return_value_localtime$1;
    if(!(lcl.tm_isdst == 0))
      now = now + (signed long int)3600;

    now = now + (signed long int)m_offset;
  }

  return now;
}

// main
// file qsrotate.c line 318
signed int main(signed int argc, char **argv)
{
  char *username = (char *)(void *)0;
  signed int rc;
  char *buf;
  signed int nRead;
  signed int nWrite;
  signed long int now;
  struct stat st;
  union pthread_attr_t *tha = (union pthread_attr_t *)(void *)0;
  unsigned long int tid;
  char *cmd;
  cmd=strrchr(argv[(signed long int)0], 47);
  if(cmd == ((char *)NULL))
    cmd = argv[(signed long int)0];

  else
    cmd = cmd + 1l;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(cmd);
  void *return_value_calloc$2;
  return_value_calloc$2=calloc((unsigned long int)1, return_value_strlen$1 + (unsigned long int)1);
  m_cmd = (char *)return_value_calloc$2;
  strcpy(m_cmd, cmd);
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
  signed int return_value_strcmp$5;
  while(argc >= 1)
  {
    signed int return_value_strcmp$17;
    return_value_strcmp$17=strcmp(*argv, "-o");
    if(return_value_strcmp$17 == 0)
    {
      argc = argc - 1;
      if(argc >= 1)
      {
        argv = argv + 1l;
        m_file_name = *argv;
      }

    }

    else
    {
      return_value_strcmp$16=strcmp(*argv, "-u");
      if(return_value_strcmp$16 == 0)
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
        return_value_strcmp$15=strcmp(*argv, "-s");
        if(return_value_strcmp$15 == 0)
        {
          argc = argc - 1;
          if(argc >= 1)
          {
            argv = argv + 1l;
            signed int return_value_atoi$3;
            return_value_atoi$3=atoi(*argv);
            m_tRotation = (signed long int)return_value_atoi$3;
          }

        }

        else
        {
          return_value_strcmp$14=strcmp(*argv, "-t");
          if(return_value_strcmp$14 == 0)
          {
            argc = argc - 1;
            if(argc >= 1)
            {
              argv = argv + 1l;
              m_offset=atoi(*argv);
              m_offset = m_offset * 3600;
              m_offset_enabled = 1;
            }

          }

          else
          {
            return_value_strcmp$13=strcmp(*argv, "-g");
            if(return_value_strcmp$13 == 0)
            {
              argc = argc - 1;
              if(argc >= 1)
              {
                argv = argv + 1l;
                m_generations=atoi(*argv);
              }

            }

            else
            {
              return_value_strcmp$12=strcmp(*argv, "-b");
              if(return_value_strcmp$12 == 0)
              {
                argc = argc - 1;
                if(argc >= 1)
                {
                  argv = argv + 1l;
                  signed int return_value_atoi$4;
                  return_value_atoi$4=atoi(*argv);
                  m_limit = (signed long int)return_value_atoi$4;
                }

              }

              else
              {
                return_value_strcmp$11=strcmp(*argv, "-z");
                if(return_value_strcmp$11 == 0)
                  m_compress = 1;

                else
                {
                  return_value_strcmp$10=strcmp(*argv, "-p");
                  if(return_value_strcmp$10 == 0)
                    m_stdout = 1;

                  else
                  {
                    return_value_strcmp$9=strcmp(*argv, "-f");
                    if(return_value_strcmp$9 == 0)
                      m_force_rotation = 1;

                    else
                    {
                      return_value_strcmp$8=strcmp(*argv, "-h");
                      if(return_value_strcmp$8 == 0)
                        usage(m_cmd, 0);

                      else
                      {
                        return_value_strcmp$7=strcmp(*argv, "--help");
                        if(return_value_strcmp$7 == 0)
                          usage(m_cmd, 0);

                        else
                        {
                          return_value_strcmp$6=strcmp(*argv, "-?");
                          if(return_value_strcmp$6 == 0)
                            usage(m_cmd, 0);

                          else
                          {
                            return_value_strcmp$5=strcmp(*argv, "--man");
                            if(return_value_strcmp$5 == 0)
                              usage(m_cmd, 1);

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
  if(m_file_name == ((char *)NULL))
    usage(m_cmd, 0);

  if(!(m_limit >= 1048576l))
    usage(m_cmd, 0);

  signed int return_value_stat$18;
  return_value_stat$18=stat(m_file_name, &st);
  if(return_value_stat$18 == 0)
    m_counter = st.st_size;

  qs_setuid(username, m_cmd);
  now=get_now();
  m_tLogEnd = (now / m_tRotation) * m_tRotation + m_tRotation;
  m_nLogFD=openFile(m_cmd, m_file_name);
  if(!(m_nLogFD >= 0))
    exit(2);

  if(!(m_force_rotation == 0))
  {
    qs_csInitLock();
    pthread_create(&tid, tha, forcedRotationThread, (void *)0);
  }

  void *return_value_calloc$19;
  return_value_calloc$19=calloc((unsigned long int)1, (unsigned long int)(131072 + 1));
  buf = (char *)return_value_calloc$19;
  signed int *return_value___errno_location$21;
  _Bool tmp_if_expr$23;
  signed int *return_value___errno_location$22;
  do
  {
    signed long int return_value_read$20;
    return_value_read$20=read(0, (void *)buf, (unsigned long int)131072);
    nRead = (signed int)return_value_read$20;
    if(nRead == 0)
      exit(3);

    if(!(nRead >= 0))
    {
      return_value___errno_location$21=__errno_location();
      if(!(*return_value___errno_location$21 == 4))
        exit(4);

    }

    if(!(m_force_rotation == 0))
      qs_csLock();

    m_counter = m_counter + (signed long int)nRead;
    now=get_now();
    if(m_nLogFD >= 0)
      do
      {
        signed long int return_value_write$24;
        return_value_write$24=write(m_nLogFD, (const void *)buf, (unsigned long int)nRead);
        nWrite = (signed int)return_value_write$24;
        if(!(m_stdout == 0))
          printf("%.*s", nRead, buf);

        if(!(nWrite >= 0))
        {
          return_value___errno_location$22=__errno_location();
          tmp_if_expr$23 = *return_value___errno_location$22 == 4 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$23 = (_Bool)0;
      }
      while(tmp_if_expr$23);

    if(!(nWrite == nRead))
    {
      m_messages = m_messages + 1l;
      if(m_nLogFD >= 0)
      {
        char msg[1024l];
        snprintf(msg, sizeof(char [1024l]) /*1024ul*/ , "ERROR while writing to file, %ld messages lost\n", m_messages);
        rc=ftruncate(m_nLogFD, (signed long int)0);
        unsigned long int return_value_strlen$25;
        return_value_strlen$25=strlen(msg);
        signed long int return_value_write$26;
        return_value_write$26=write(m_nLogFD, (const void *)msg, return_value_strlen$25);
        rc = (signed int)return_value_write$26;
      }

    }

    else
      m_messages = m_messages + 1l;
    if(!(m_limit >= m_counter) || !(m_tLogEnd >= now))
      rotate(m_cmd, now, m_file_name, &m_messages);

    if(!(m_force_rotation == 0))
      qs_csUnLock();

  }
  while((_Bool)1);
  memset((void *)buf, 0, (unsigned long int)131072);
  free((void *)buf);
  return 0;
}

// openFile
// file qsrotate.c line 183
static signed int openFile(const char *cmd, const char *file_name)
{
  signed int openFile$$1$$m_nLogFD;
  openFile$$1$$m_nLogFD=open(file_name, 01 | 0100 | 02000, 0660);
  if(!(openFile$$1$$m_nLogFD >= 0))
    fprintf(stderr, "[%s]: ERROR, failed to open file <%s>\n", cmd, file_name);

  return openFile$$1$$m_nLogFD;
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

// qs_csInitLock
// file qs_util.h line 64
void qs_csInitLock()
{
  pthread_mutex_init(&m_qs_lock_cs, (const union anonymous$0 *)(void *)0);
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
// file qs_util.h line 72
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

// rotate
// file qsrotate.c line 244
static void rotate(const char *cmd, signed long int now, const char *file_name, signed long int *messages)
{
  signed int rc;
  char arch[1044l];
  char tmb[20l];
  struct tm *ptr;
  ptr=localtime(&now);
  strftime(tmb, sizeof(char [20l]) /*20ul*/ , "%Y%m%d%H%M%S", ptr);
  snprintf(arch, sizeof(char [1044l]) /*1044ul*/ , "%s.%s", file_name, (const void *)tmb);
  m_tLogEnd = (now / m_tRotation) * m_tRotation + m_tRotation;
  m_counter = (signed long int)0;
  if(m_nLogFD >= 0)
  {
    close(m_nLogFD);
    rename(file_name, arch);
  }

  m_nLogFD=openFile(cmd, file_name);
  if(!(m_nLogFD >= 0))
  {
    char msg[1024l];
    snprintf(msg, sizeof(char [1024l]) /*1024ul*/ , "ERROR while writing to file, %ld messages lost\n", *messages);
    fprintf(stderr, "[%s]: ERROR, while writing to file <%s>\n", cmd, file_name);
    rename(arch, file_name);
    m_nLogFD=openFile(cmd, file_name);
    if(m_nLogFD >= 1)
    {
      rc=ftruncate(m_nLogFD, (signed long int)0);
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(msg);
      signed long int return_value_write$2;
      return_value_write$2=write(m_nLogFD, (const void *)msg, return_value_strlen$1);
      rc = (signed int)return_value_write$2;
    }

  }

  else
  {
    *messages = (signed long int)0;
    if(!(m_compress == 0) || !(m_generations == -1))
    {
      signal(17, sigchild);
      signed int return_value_fork$3;
      return_value_fork$3=fork();
      if(return_value_fork$3 == 0)
      {
        if(!(m_compress == 0))
          compressThread(cmd, arch);

        if(!(m_generations == -1))
          qs_deleteOldFiles(file_name, m_generations);

        exit(0);
      }

    }

  }
}

// sigchild
// file qsrotate.c line 229
void sigchild(signed int signo)
{
  signed int pid;
  signed int sigchild$$1$$stat;
  do
  {
    pid=waitpid(-1, &sigchild$$1$$stat, 1);
    if(!(pid >= 1))
      break;

  }
  while((_Bool)1);
}

// usage
// file qsrotate.c line 71
static void usage(char *cmd, signed int man)
{
  if(!(man == 0))
  {
    char *return_value_qs_CMD$1;
    return_value_qs_CMD$1=qs_CMD(cmd);
    printf(".TH %s 1 \"%s\" \"mod_qos utilities %s\" \"%s man page\"\n", return_value_qs_CMD$1, (const void *)man_date, (const void *)man_version, cmd);
  }

  printf("\n");
  if(!(man == 0))
    printf(".SH NAME\n");

  qs_man_print(man, "%s - a log rotation tool (similar to Apache's rotatelogs).\n", cmd);
  printf("\n");
  if(!(man == 0))
    printf(".SH SYNOPSIS\n");

  qs_man_print(man, "%s%s -o <file> [-s <sec> [-t <hours>]] [-f] [-z] [-g <num>] [-u <name>] [-p]\n", man != 0 ? "" : "Usage: ", cmd);
  printf("\n");
  if(!(man == 0))
    printf(".SH DESCRIPTION\n");

  else
    printf("Summary\n");
  qs_man_print(man, "%s reads from stdin (piped log) and writes the data to the provided\n", cmd);
  qs_man_print(man, "file rotating the file after the specified time.\n");
  printf("\n");
  if(!(man == 0))
    printf(".SH OPTIONS\n");

  else
    printf("Options\n");
  if(!(man == 0))
    printf(".TP\n");

  qs_man_print(man, "  -o <file>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Output log file to write the data to (use an absolute path).\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -s <sec>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Rotation interval in seconds, default are 86400 seconds.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -t <hours>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Offset to UTC (enables also DST support), default is 0.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -b <bytes>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     File size limitation (default are %ld bytes).\n", m_limit);
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -f\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Forced log rotation even no data is written.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -z\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Compress (gzip) the rotated file.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -g <num>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Generations (number of files to keep).\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -u <name>\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Become another user, e.g. www-data.\n");
  if(!(man == 0))
    printf("\n.TP\n");

  qs_man_print(man, "  -p\n");
  if(!(man == 0))
    printf("\n");

  qs_man_print(man, "     Writes data also to stdout (for piped logging).\n");
  printf("\n");
  if(!(man == 0))
    printf(".SH EXAMPLE\n");

  else
    printf("Example:\n");
  qs_man_println(man, "  TransferLog \"|%s -f -z -g 3 -o /dest/file -s 86400\"\n", cmd);
  printf("\n");
  qs_man_print(man, "The name of the rotated file will be /dest/filee.YYYYmmddHHMMSS\n");
  qs_man_print(man, "where YYYYmmddHHMMSS is the system time at which the data has been\n");
  qs_man_print(man, "rotated.\n");
  printf("\n");
  if(!(man == 0))
    printf(".SH NOTE\n");

  else
    printf("Note:\n");
  qs_man_print(man, "  Each %s instance must use an individual file.\n", cmd);
  printf("\n");
  if(!(man == 0))
  {
    printf(".SH SEE ALSO\n");
    printf("qsexec(1), qsfilter2(1), qsgeo(1), qsgrep(1), qshead(1), qslog(1), qslogger(1), qspng(1), qssign(1), qstail(1)\n");
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

