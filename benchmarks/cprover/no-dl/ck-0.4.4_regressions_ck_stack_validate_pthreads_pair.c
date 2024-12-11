// tag-#anon#ST[ARR16{U64}_U64_'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous;

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

// tag-affinity
// file ../../common.h line 259
struct affinity;

// tag-entry
// file pair.c line 51
struct entry;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// aff_iterate
// file ../../common.h line 276
static signed int aff_iterate(struct affinity *acb);
// ck_error
// file ../../common.h line 448
static void ck_error(const char *message, ...);
// ck_pr_faa_uint
// file ../../../include/gcc/x86_64/ck_pr.h line 256
static unsigned int ck_pr_faa_uint(unsigned int *target, unsigned int d);
// ck_pr_store_ptr
// file ../../../include/gcc/x86_64/ck_pr.h line 219
static void ck_pr_store_ptr(void *target, const void *v);
// common_gettimeofday
// file ../../common.h line 137
static signed int common_gettimeofday(struct timeval *tv, void *tz);
// common_rand_r
// file ../../common.h line 81
static signed int common_rand_r(unsigned int *i);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gettid
// file ../../common.h line 269
static signed int gettid(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
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
// rand_r
// file /usr/include/stdlib.h line 381
extern signed int rand_r(unsigned int *);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous *);
// srand
// file /usr/include/stdlib.h line 376
extern void srand(unsigned int);
// stack_assert
// file pair.c line 156
static void stack_assert(void);
// stack_thread
// file pair.c line 85
static void * stack_thread(void *buffer);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);

struct anonymous
{
  // __bits
  unsigned long int __bits[16l];
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

struct affinity
{
  // delta
  unsigned int delta;
  // request
  unsigned int request;
};

struct entry
{
  // value
  signed int value;
  // next
  struct entry *next;
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


// affinerator
// file pair.c line 79
static struct affinity affinerator;
// barrier
// file pair.c line 81
static volatile unsigned int barrier = (volatile unsigned int)0;
// critical
// file pair.c line 82
static unsigned int critical;
// nthr
// file pair.c line 80
static unsigned long long int nthr;
// stack
// file pair.c line 70
static struct entry *stack;
// stack_spinlock
// file pair.c line 71
union anonymous_0 stack_spinlock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;

// aff_iterate
// file ../../common.h line 276
static signed int aff_iterate(struct affinity *acb)
{
  struct anonymous s;
  unsigned int c;
  c=ck_pr_faa_uint(&acb->request, acb->delta);
  do
    __builtin_memset((void *)&s, 0, sizeof(struct anonymous) /*128ul*/ );
  while((_Bool)0);
  unsigned long int __cpu = (unsigned long int)(c % (unsigned int)4);
  if(!(__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
    ((unsigned long int *)(&s)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&s)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

  else
    (unsigned long int)0;
  signed int return_value_gettid_1;
  return_value_gettid_1=gettid();
  signed int return_value_sched_setaffinity_2;
  return_value_sched_setaffinity_2=sched_setaffinity(return_value_gettid_1, sizeof(struct anonymous) /*128ul*/ , &s);
  return return_value_sched_setaffinity_2;
}

// ck_error
// file ../../common.h line 448
static void ck_error(const char *message, ...)
{
  void **ap = (void **)&message;
  vfprintf(stderr, message, ap);
  ap = ((void **)NULL);
  exit(1);
}

// ck_pr_faa_uint
// file ../../../include/gcc/x86_64/ck_pr.h line 256
static unsigned int ck_pr_faa_uint(unsigned int *target, unsigned int d)
{
  asm("lock xaddl %1, %0" : "+m"(*((unsigned int *)target)), "+q"(d) :  : "memory", "cc");
  return d;
}

// ck_pr_store_ptr
// file ../../../include/gcc/x86_64/ck_pr.h line 219
static void ck_pr_store_ptr(void *target, const void *v)
{
  asm("movq %1, %0" : "=m"(*((char *)target)) : "Zq"(v) : "memory");
}

// common_gettimeofday
// file ../../common.h line 137
static signed int common_gettimeofday(struct timeval *tv, void *tz)
{
  signed int return_value_gettimeofday_1;
  return_value_gettimeofday_1=gettimeofday(tv, (struct timezone *)tz);
  return return_value_gettimeofday_1;
}

// common_rand_r
// file ../../common.h line 81
static signed int common_rand_r(unsigned int *i)
{
  signed int return_value_rand_r_1;
  return_value_rand_r_1=rand_r(i);
  return return_value_rand_r_1;
}

// gettid
// file ../../common.h line 269
static signed int gettid(void)
{
  signed long int return_value_syscall_1;
  return_value_syscall_1=syscall((signed long int)186);
  return (signed int)return_value_syscall_1;
}

// main
// file pair.c line 168
signed int main(signed int argc, char **argv)
{
  struct entry *bucket;
  unsigned long long int i;
  unsigned long long int d;
  unsigned long int *thread;
  struct timeval stv;
  struct timeval etv;
  if(!(argc == 4))
    ck_error("Usage: stack <threads> <delta> <critical>\n");

  char *e;
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(argv[(signed long int)1], &e, 10);
  nthr = (unsigned long long int)return_value_strtol_1;
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  if(*return_value___errno_location_2 == 34)
  {
    perror("ERROR: too many threads");
    exit(1);
  }

  else
    if(!((signed int)*e == 0))
      ck_error("ERROR: input format is incorrect\n");

  signed long int return_value_strtol_3;
  return_value_strtol_3=strtol(argv[(signed long int)2], &e, 10);
  d = (unsigned long long int)return_value_strtol_3;
  signed int *return_value___errno_location_4;
  return_value___errno_location_4=__errno_location();
  if(*return_value___errno_location_4 == 34)
  {
    perror("ERROR: delta is too large");
    exit(1);
  }

  else
    if(!((signed int)*e == 0))
      ck_error("ERROR: input format is incorrect\n");

  unsigned long int return_value_strtoul_5;
  return_value_strtoul_5=strtoul(argv[(signed long int)3], &e, 10);
  critical = (unsigned int)return_value_strtoul_5;
  signed int *return_value___errno_location_6;
  return_value___errno_location_6=__errno_location();
  if(*return_value___errno_location_6 == 34)
  {
    perror("ERROR: critical section is too large");
    exit(1);
  }

  else
    if(!((signed int)*e == 0))
      ck_error("ERROR: input format is incorrect\n");

  signed int return_value_getpid_7;
  return_value_getpid_7=getpid();
  srand((unsigned int)return_value_getpid_7);
  affinerator.request = (unsigned int)0;
  affinerator.delta = (unsigned int)d;
  void *return_value_malloc_8;
  return_value_malloc_8=malloc(sizeof(struct entry) /*64ul*/  * nthr);
  bucket = (struct entry *)return_value_malloc_8;
  /* assertion bucket != ((void *)0) */
  assert(bucket != (struct entry *)(void *)0);
  void *return_value_malloc_9;
  return_value_malloc_9=malloc(sizeof(unsigned long int) /*8ul*/  * nthr);
  thread = (unsigned long int *)return_value_malloc_9;
  /* assertion thread != ((void *)0) */
  assert(thread != (unsigned long int *)(void *)0);
  i = (unsigned long long int)0;
  for( ; !(i >= nthr); i = i + 1ull)
    pthread_create(&thread[(signed long int)i], (const union pthread_attr_t *)(void *)0, stack_thread, (void *)(bucket + (signed long int)i));
  barrier = (volatile unsigned int)1;
  i = (unsigned long long int)0;
  for( ; !(i >= nthr); i = i + 1ull)
    pthread_join(thread[(signed long int)i], (void **)(void *)0);
  barrier = (volatile unsigned int)0;
  i = (unsigned long long int)0;
  for( ; !(i >= nthr); i = i + 1ull)
    pthread_create(&thread[(signed long int)i], (const union pthread_attr_t *)(void *)0, stack_thread, (void *)(bucket + (signed long int)i));
  common_gettimeofday(&stv, (void *)0);
  barrier = (volatile unsigned int)1;
  i = (unsigned long long int)0;
  for( ; !(i >= nthr); i = i + 1ull)
    pthread_join(thread[(signed long int)i], (void **)(void *)0);
  common_gettimeofday(&etv, (void *)0);
  stack_assert();
  printf("%3llu %.6lf\n", nthr, ((double)etv.tv_sec + (double)etv.tv_usec / (double)1000000) - ((double)stv.tv_sec + (double)stv.tv_usec / (double)1000000));
  return 0;
}

// stack_assert
// file pair.c line 156
static void stack_assert(void)
{
  /* assertion stack == ((void *)0) */
  assert(stack == (struct entry *)(void *)0);
}

// stack_thread
// file pair.c line 85
static void * stack_thread(void *buffer)
{
  struct entry *entry = (struct entry *)buffer;
  unsigned long long int i;
  unsigned long long int n = (unsigned long long int)5765760;
  unsigned int seed;
  signed int j;
  signed int return_value_aff_iterate_1;
  return_value_aff_iterate_1=aff_iterate(&affinerator);
  if(!(return_value_aff_iterate_1 == 0))
  {
    perror("ERROR: failed to affine thread");
    exit(1);
  }

  while(barrier == 0u)
    ;
  i = (unsigned long long int)0;
  signed int tmp_post_3;
  for( ; !(i >= n); i = i + 1ull)
  {
    pthread_mutex_lock(&stack_spinlock);
    ck_pr_store_ptr((void *)&entry->next, (const void *)stack);
    ck_pr_store_ptr((void *)&stack, (const void *)entry);
    pthread_mutex_unlock(&stack_spinlock);
    if(!(critical == 0u))
    {
      signed int return_value_common_rand_r_2;
      return_value_common_rand_r_2=common_rand_r(&seed);
      j = (signed int)((unsigned int)return_value_common_rand_r_2 % critical);
      do
      {
        tmp_post_3 = j;
        j = j - 1;
        if(tmp_post_3 == 0)
          break;

        asm("" :  :  : "memory");
      }
      while((_Bool)1);
    }

    pthread_mutex_lock(&stack_spinlock);
    entry = stack;
    stack = stack->next;
    pthread_mutex_unlock(&stack_spinlock);
  }
  return (void *)0;
}

