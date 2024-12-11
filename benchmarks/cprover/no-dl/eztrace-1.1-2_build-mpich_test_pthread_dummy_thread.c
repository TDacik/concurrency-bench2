// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$1;

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

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#ifndef NULL
#define NULL ((void*)0)
#endif

// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// compute
// file ../../../test/pthread/dummy_thread.c line 66
void compute(signed int usec);
// debug
// file ../../../test/pthread/dummy_thread.c line 19
void debug(char *fmt, ...);
// f_thread
// file ../../../test/pthread/dummy_thread.c line 74
void * f_thread(void *arg);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous$0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous$1 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous$1 *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous$1 *);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);

union anonymous$1
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
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


// _debug
// file ../../../test/pthread/dummy_thread.c line 17
signed int _debug = -77;
// mutex
// file ../../../test/pthread/dummy_thread.c line 63
union anonymous mutex;
// sem
// file ../../../test/pthread/dummy_thread.c line 61
union anonymous$1 sem[2l];
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// thread_ready
// file ../../../test/pthread/dummy_thread.c line 58
union anonymous$1 thread_ready;

// compute
// file ../../../test/pthread/dummy_thread.c line 66
void compute(signed int usec)
{
  struct timeval tv1;
  struct timeval tv2;
  gettimeofday(&tv1, (struct timezone *)(void *)0);
  do
    gettimeofday(&tv2, (struct timezone *)(void *)0);
  while(!((tv2.tv_sec + -tv1.tv_sec) * 1000000l + tv2.tv_usec + -tv1.tv_usec >= (signed long int)usec));
}

// debug
// file ../../../test/pthread/dummy_thread.c line 19
void debug(char *fmt, ...)
{
  if(_debug == -77)
  {
    char *buf;
    buf=getenv("EZTRACE_DEBUG");
    if(buf == ((char *)NULL))
      _debug = 0;

    else
      _debug=atoi(buf);
  }

  if(_debug >= 0)
  {
    void **va = (void **)&fmt;
    vfprintf(stdout, fmt, va);
    va = ((void **)NULL);
  }

}

// f_thread
// file ../../../test/pthread/dummy_thread.c line 74
void * f_thread(void *arg)
{
  unsigned char my_id = *((unsigned char *)arg);
  sem_post(&thread_ready);
  debug("Running thread #%d\n", my_id);
  signed int i = 0;
  for( ; !(i >= 10); i = i + 1)
  {
    sem_wait(&sem[(signed long int)my_id]);
    debug("[thread #%d] loop %d\n", my_id, i);
    pthread_mutex_lock(&mutex);
    compute(50000);
    pthread_mutex_unlock(&mutex);
    compute(50000);
    sem_post(&sem[(signed long int)(((signed int)my_id + 1) % 2)]);
  }
  debug("End of thread #%d\n", my_id);
  return (void *)0;
}

// main
// file ../../../test/pthread/dummy_thread.c line 103
signed int main(signed int argc, char **argv)
{
  unsigned long int tid[2l];
  signed int i;
  pthread_mutex_init(&mutex, (const union anonymous$0 *)(void *)0);
  sem_init(&thread_ready, 0, (unsigned int)0);
  i = 0;
  for( ; !(i >= 2); i = i + 1)
    sem_init(&sem[(signed long int)i], 0, (unsigned int)0);
  i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    pthread_create(&tid[(signed long int)i], (const union pthread_attr_t *)(void *)0, f_thread, (void *)&i);
    sem_wait(&thread_ready);
  }
  sem_post(&sem[(signed long int)0]);
  i = 0;
  for( ; !(i >= 2); i = i + 1)
    pthread_join(tid[(signed long int)i], (void **)(void *)0);
  return 0;
}

