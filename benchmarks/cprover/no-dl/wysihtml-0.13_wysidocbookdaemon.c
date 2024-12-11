// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

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

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

// asprintf
// file /usr/include/stdio.h line 405
extern signed int asprintf(char ** restrict , const char *, ...);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// difftime
// file /usr/include/time.h line 195
extern double difftime(signed long int, signed long int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// loopexec
// file src/wysidocbookdaemon.c line 100
signed int loopexec(void);
// mkstemp
// file /usr/include/stdlib.h line 619
extern signed int mkstemp(char *);
// new_temporary_filename
// file src/wysidocbookdaemon.c line 64
void new_temporary_filename(void);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// scanf
// file /usr/include/stdio.h line 431
extern signed int scanf(const char *, ...);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);

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

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};


// currentfile
// file src/wysidocbookdaemon.c line 38
char *currentfile = (char *)(void *)0;
// last_input
// file src/wysidocbookdaemon.c line 50
signed long int last_input;
// mozillacmdline
// file src/wysidocbookdaemon.c line 35
const char *mozillacmdline = (const char *)(void *)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optional
// file src/wysidocbookdaemon.c line 47
char *optional = (char *)(void *)0;
// plock
// file src/wysidocbookdaemon.c line 32
union anonymous plock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// temporary_filename
// file src/wysidocbookdaemon.c line 41
char *temporary_filename = (char *)(void *)0;
// wait_sleeptime
// file src/wysidocbookdaemon.c line 51
signed int wait_sleeptime = 3;
// xsltstylesheet
// file src/wysidocbookdaemon.c line 44
char *xsltstylesheet = "/usr/share/xml/docbook/stylesheet/ldp/html/tldp-one-page.xsl";

// loopexec
// file src/wysidocbookdaemon.c line 100
signed int loopexec(void)
{
  signed long int last_display;
  last_display=time((signed long int *)(void *)0);
  signed long int current_time;
  signed int doit;
  double return_value_difftime_2;
  double return_value_difftime_1;
  while((_Bool)1)
  {
    sleep((unsigned int)1);
    pthread_mutex_lock(&plock);
    current_time=time((signed long int *)(void *)0);
    doit = 0;
    double return_value_difftime_4;
    return_value_difftime_4=difftime(last_input, last_display);
    if(return_value_difftime_4 > 0.000000)
    {
      double return_value_difftime_3;
      return_value_difftime_3=difftime(current_time, last_input);
      if(return_value_difftime_3 > (double)wait_sleeptime)
        doit = 1;

      else
      {
        return_value_difftime_2=difftime(current_time, last_display);
        if(return_value_difftime_2 > 20.000000)
        {
          return_value_difftime_1=difftime(current_time, last_input);
          if(return_value_difftime_1 > 0.000000)
            doit = 1;

        }

      }
    }

    if(!(doit == 0))
    {
      if(!(currentfile == ((char *)NULL)))
      {
        char *buf = (char *)(void *)0;
        new_temporary_filename();
        asprintf(&buf, "xsltproc --novalid %s %s > %s", xsltstylesheet, currentfile, temporary_filename);
        printf("invoke: %s\n", buf);
        system(buf);
        free((void *)buf);
        asprintf(&buf, mozillacmdline, temporary_filename, optional);
        system(buf);
        printf("invocation complete\n");
        free((void *)buf);
        last_display = current_time;
      }

    }

    pthread_mutex_unlock(&plock);
  }
}

// main
// file src/wysidocbookdaemon.c line 151
signed int main(signed int ac, char **av)
{
  unsigned long int t;
  signed int opt;
  do
  {
    opt=getopt(ac, av, "m:s:x:");
    if(opt == -1)
      break;

    switch(opt)
    {
      case 109:
      {
        mozillacmdline=strdup(optarg);
        break;
      }
      case 115:
      {
        wait_sleeptime=atoi(optarg);
        break;
      }
      case 120:
      {
        xsltstylesheet=strdup(optarg);
        break;
      }
      default:
      {
        fprintf(stderr, "Unknown option -%c\n", opt);
        exit(1);
      }
    }
  }
  while((_Bool)1);
  printf("wysidocbookdaemon Version %s, with wait %i seconds\n", (const void *)"0.13", wait_sleeptime);
  if(mozillacmdline == ((const char *)NULL))
  {
    fprintf(stderr, "Mozilla command-line not specified\n");
    exit(1);
  }

  pthread_create(&t, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))loopexec, (void *)0);
  while((_Bool)1)
  {
    char *instr = (char *)(void *)0;
    char *my_optional = (char *)(void *)0;
    printf(">");
    scanf("%as %as", &instr, &my_optional);
    pthread_mutex_lock(&plock);
    if(!(currentfile == ((char *)NULL)))
      free((void *)currentfile);

    currentfile = instr;
    if(!(optional == ((char *)NULL)))
      free((void *)optional);

    optional = my_optional;
    last_input=time((signed long int *)(void *)0);
    pthread_mutex_unlock(&plock);
  }
}

// new_temporary_filename
// file src/wysidocbookdaemon.c line 64
void new_temporary_filename(void)
{
  signed int fd;
  if(!(temporary_filename == ((char *)NULL)))
  {
    signed int return_value_fork_1;
    return_value_fork_1=fork();
    if(return_value_fork_1 == 0)
    {
      sleep((unsigned int)10);
      unlink(temporary_filename);
      exit(0);
    }

    free((void *)temporary_filename);
    temporary_filename = (char *)(void *)0;
  }

  char *return_value_getenv_2;
  return_value_getenv_2=getenv("TMPDIR");
  asprintf(&temporary_filename, "%s/wysidocbookXXXXXX", (_Bool)return_value_getenv_2 ? return_value_getenv_2 : "/tmp");
  fd=mkstemp(temporary_filename);
  close(fd);
  waitpid(-1, (signed int *)(void *)0, 1);
}

