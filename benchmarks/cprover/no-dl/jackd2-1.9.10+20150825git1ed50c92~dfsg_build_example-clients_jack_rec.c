// tag-#anon#ST[*{S8}$S8$'buf'||U64'len'|]
// file ../common/ringbuffer.c line 30
struct anonymous$3;

// tag-#anon#ST[*{S8}$S8$'buf'||vU64'write_ptr'||vU64'read_ptr'||U64'size'||U64'size_mask'||S32'mlocked'||U32'$pad0'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 51
struct anonymous$1;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$2;

// tag-JackOptions
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/types.h line 82
enum JackOptions { JackNullOption=0, JackNoStartServer=1, JackUseExactName=2, JackServerName=4, JackLoadName=8, JackLoadInit=16, JackSessionID=32 };

// tag-JackStatus
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/types.h line 141
enum JackStatus { JackFailure=1, JackInvalidOption=2, JackNameNotUnique=4, JackServerStarted=8, JackServerFailed=16, JackServerError=32, JackNoSuchClient=64, JackLoadFailure=128, JackInitFailure=256, JackShmFailure=512, JackVersionError=1024, JackBackendError=2048, JackClientZombie=4096 };

// tag-SF_INFO
// file /usr/include/sndfile.h line 328
struct SF_INFO;

// tag-SNDFILE_tag
// file /usr/include/sndfile.h line 305
struct SNDFILE_tag;

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

// tag-_jack_client
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/types.h line 69
struct _jack_client;

// tag-_jack_port
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/types.h line 63
struct _jack_port;

// tag-_thread_info
// file ../example-clients/capture_client.c line 37
struct _thread_info;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// disk_thread
// file ../example-clients/capture_client.c line 74
static void * disk_thread(void *arg);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// jack_activate
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 211
signed int jack_activate(struct _jack_client *);
// jack_client_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 134
signed int jack_client_close(struct _jack_client *);
// jack_client_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 117
struct _jack_client * jack_client_open(const char *, enum JackOptions, enum JackStatus *, ...);
// jack_connect
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 993
signed int jack_connect(struct _jack_client *, const char *, const char *);
// jack_get_sample_rate
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 672
unsigned int jack_get_sample_rate(struct _jack_client *);
// jack_on_shutdown
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 345
void jack_on_shutdown(struct _jack_client *, void (*)(void *), void *);
// jack_port_get_buffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 774
void * jack_port_get_buffer(struct _jack_port *, unsigned int);
// jack_port_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 789
const char * jack_port_name(const struct _jack_port *);
// jack_port_register
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 741
struct _jack_port * jack_port_register(struct _jack_client *, const char *, const char *, unsigned long int, unsigned long int);
// jack_ringbuffer_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 71
struct anonymous$1 * jack_ringbuffer_create(unsigned long int sz);
// jack_ringbuffer_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 79
void jack_ringbuffer_free(struct anonymous$1 *rb);
// jack_ringbuffer_get_read_vector
// file ../common/ringbuffer.c line 326
void jack_ringbuffer_get_read_vector(const struct anonymous$1 *rb, struct anonymous$3 *vec);
// jack_ringbuffer_get_write_vector
// file ../common/ringbuffer.c line 370
void jack_ringbuffer_get_write_vector(const struct anonymous$1 *rb, struct anonymous$3 *vec);
// jack_ringbuffer_mlock
// file ../common/ringbuffer.c line 110
signed int jack_ringbuffer_mlock(struct anonymous$1 *rb);
// jack_ringbuffer_peek
// file ../common/ringbuffer.c line 228
unsigned long int jack_ringbuffer_peek(struct anonymous$1 *rb, char *dest, unsigned long int cnt);
// jack_ringbuffer_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 136
unsigned long int jack_ringbuffer_read(struct anonymous$1 *rb, char *dest, unsigned long int cnt);
// jack_ringbuffer_read_advance
// file ../common/ringbuffer.c line 305
void jack_ringbuffer_read_advance(struct anonymous$1 *rb, unsigned long int cnt);
// jack_ringbuffer_read_space
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 175
unsigned long int jack_ringbuffer_read_space(const struct anonymous$1 *rb);
// jack_ringbuffer_reset
// file ../common/ringbuffer.c line 125
void jack_ringbuffer_reset(struct anonymous$1 *rb);
// jack_ringbuffer_reset_size
// file ../common/ringbuffer.c line 136
void jack_ringbuffer_reset_size(struct anonymous$1 *rb, unsigned long int sz);
// jack_ringbuffer_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 214
unsigned long int jack_ringbuffer_write(struct anonymous$1 *rb, const char *src, unsigned long int cnt);
// jack_ringbuffer_write_advance
// file ../common/ringbuffer.c line 314
void jack_ringbuffer_write_advance(struct anonymous$1 *rb, unsigned long int cnt);
// jack_ringbuffer_write_space
// file ../common/ringbuffer.c line 169
unsigned long int jack_ringbuffer_write_space(const struct anonymous$1 *rb);
// jack_set_process_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 395
signed int jack_set_process_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_shutdown
// file ../example-clients/capture_client.c line 161
static void jack_shutdown(void *arg);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process
// file ../example-clients/capture_client.c line 123
static signed int process(unsigned int nframes, void *arg);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$0 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$0 *, union anonymous$2 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$2 *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous$2 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$2 *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 512
extern signed int pthread_setcanceltype(signed int, signed int *);
// run_disk_thread
// file ../example-clients/capture_client.c line 205
static void run_disk_thread(struct _thread_info *info);
// setup_disk_thread
// file ../example-clients/capture_client.c line 168
static void setup_disk_thread(struct _thread_info *info);
// setup_ports
// file ../example-clients/capture_client.c line 220
static void setup_ports(signed int sources, char **source_names, struct _thread_info *info);
// sf_close
// file /usr/include/sndfile.h line 632
signed int sf_close(struct SNDFILE_tag *);
// sf_error_str
// file /usr/include/sndfile.h line 533
signed int sf_error_str(struct SNDFILE_tag *, char *, unsigned long int);
// sf_open
// file /usr/include/sndfile.h line 485
struct SNDFILE_tag * sf_open(const char *, signed int, struct SF_INFO *);
// sf_writef_float
// file /usr/include/sndfile.h line 603
signed long int sf_writef_float(struct SNDFILE_tag *, const float *, signed long int);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// signal_handler
// file ../example-clients/capture_client.c line 66
static void signal_handler(signed int sig);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);

struct anonymous$3
{
  // buf
  char *buf;
  // len
  unsigned long int len;
};

struct anonymous$1
{
  // buf
  char *buf;
  // write_ptr
  volatile unsigned long int write_ptr;
  // read_ptr
  volatile unsigned long int read_ptr;
  // size
  unsigned long int size;
  // size_mask
  unsigned long int size_mask;
  // mlocked
  signed int mlocked;
};

struct anonymous
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

union anonymous$0
{
  // __data
  struct anonymous __data;
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

union anonymous$2
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct SF_INFO
{
  // frames
  signed long int frames;
  // samplerate
  signed int samplerate;
  // channels
  signed int channels;
  // format
  signed int format;
  // sections
  signed int sections;
  // seekable
  signed int seekable;
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

struct _thread_info
{
  // thread_id
  unsigned long int thread_id;
  // sf
  struct SNDFILE_tag *sf;
  // duration
  unsigned int duration;
  // rb_size
  unsigned int rb_size;
  // client
  struct _jack_client *client;
  // channels
  unsigned int channels;
  // bitdepth
  signed int bitdepth;
  // path
  char *path;
  // can_capture
  volatile signed int can_capture;
  // can_process
  volatile signed int can_process;
  // status
  volatile signed int status;
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

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};


// client
// file ../example-clients/capture_client.c line 64
struct _jack_client *client;
// data_ready
// file ../example-clients/capture_client.c line 62
union anonymous$0 data_ready = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// disk_thread_lock
// file ../example-clients/capture_client.c line 61
union anonymous$2 disk_thread_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// in
// file ../example-clients/capture_client.c line 54
float **in;
// nframes
// file ../example-clients/capture_client.c line 55
unsigned int nframes;
// nports
// file ../example-clients/capture_client.c line 52
unsigned int nports;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opterr
// file /usr/include/getopt.h line 76
extern signed int opterr;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// overruns
// file ../example-clients/capture_client.c line 63
signed long int overruns = (signed long int)0;
// ports
// file ../example-clients/capture_client.c line 53
struct _jack_port **ports;
// rb
// file ../example-clients/capture_client.c line 60
struct anonymous$1 *rb;
// sample_size
// file ../example-clients/capture_client.c line 56
const unsigned long int sample_size = sizeof(float) /*4ul*/ ;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;

// disk_thread
// file ../example-clients/capture_client.c line 74
static void * disk_thread(void *arg)
{
  struct _thread_info *info = (struct _thread_info *)arg;
  unsigned int samples_per_frame = info->channels;
  unsigned long int bytes_per_frame = (unsigned long int)samples_per_frame * sample_size;
  void *framebuf;
  framebuf=malloc(bytes_per_frame);
  pthread_setcanceltype(1, (signed int *)(void *)0);
  pthread_mutex_lock(&disk_thread_lock);
  info->status = 0;
  unsigned long int return_value_jack_ringbuffer_read_space$1;
  while((_Bool)1)
  {
    while(!(info->can_capture == 0))
    {
      return_value_jack_ringbuffer_read_space$1=jack_ringbuffer_read_space(rb);
      if(!(return_value_jack_ringbuffer_read_space$1 >= bytes_per_frame))
        break;

      jack_ringbuffer_read(rb, (char *)framebuf, bytes_per_frame);
      signed long int return_value_sf_writef_float$2;
      return_value_sf_writef_float$2=sf_writef_float(info->sf, (const float *)framebuf, (signed long int)1);
      if(!(return_value_sf_writef_float$2 == 1l))
      {
        char errstr[256l];
        sf_error_str(((struct SNDFILE_tag *)NULL), errstr, sizeof(char [256l]) /*256ul*/  - (unsigned long int)1);
        fprintf(stderr, "cannot write sndfile (%s)\n", (const void *)errstr);
        info->status = 5;
        goto done;
      }

      static unsigned int total_captured = (unsigned int)0;
      total_captured = total_captured + 1u;
      if(total_captured >= info->duration)
      {
        printf("disk thread finished\n");
        goto done;
      }

    }
    pthread_cond_wait(&data_ready, &disk_thread_lock);
  }

done:
  ;
  pthread_mutex_unlock(&disk_thread_lock);
  free(framebuf);
  return NULL;
}

// jack_ringbuffer_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 71
struct anonymous$1 * jack_ringbuffer_create(unsigned long int sz)
{
  signed int power_of_two;
  struct anonymous$1 *jack_ringbuffer_create$$1$$rb;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct anonymous$1) /*48ul*/ );
  jack_ringbuffer_create$$1$$rb = (struct anonymous$1 *)return_value_malloc$1;
  if(jack_ringbuffer_create$$1$$rb == ((struct anonymous$1 *)NULL))
    return (struct anonymous$1 *)(void *)0;

  else
  {
    power_of_two = 1;
    for( ; !((unsigned long int)(1 << power_of_two) >= sz); power_of_two = power_of_two + 1)
      ;
    jack_ringbuffer_create$$1$$rb->size = (unsigned long int)(1 << power_of_two);
    jack_ringbuffer_create$$1$$rb->size_mask = jack_ringbuffer_create$$1$$rb->size;
    jack_ringbuffer_create$$1$$rb->size_mask = jack_ringbuffer_create$$1$$rb->size_mask - (unsigned long int)1;
    jack_ringbuffer_create$$1$$rb->write_ptr = (volatile unsigned long int)0;
    jack_ringbuffer_create$$1$$rb->read_ptr = (volatile unsigned long int)0;
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(jack_ringbuffer_create$$1$$rb->size);
    jack_ringbuffer_create$$1$$rb->buf = (char *)return_value_malloc$2;
    if(jack_ringbuffer_create$$1$$rb->buf == ((char *)NULL))
    {
      free((void *)jack_ringbuffer_create$$1$$rb);
      return (struct anonymous$1 *)(void *)0;
    }

    else
    {
      jack_ringbuffer_create$$1$$rb->mlocked = 0;
      return jack_ringbuffer_create$$1$$rb;
    }
  }
}

// jack_ringbuffer_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 79
void jack_ringbuffer_free(struct anonymous$1 *rb)
{
  free((void *)rb->buf);
  free((void *)rb);
}

// jack_ringbuffer_get_read_vector
// file ../common/ringbuffer.c line 326
void jack_ringbuffer_get_read_vector(const struct anonymous$1 *rb, struct anonymous$3 *vec)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int w;
  unsigned long int r;
  w = rb->write_ptr;
  r = rb->read_ptr;
  if(!(r >= w))
    free_cnt = w - r;

  else
    free_cnt = (w - r) + rb->size & rb->size_mask;
  cnt2 = r + free_cnt;
  if(!(rb->size >= cnt2))
  {
    (vec + (signed long int)0)->buf = &rb->buf[(signed long int)r];
    (vec + (signed long int)0)->len = rb->size - r;
    (vec + (signed long int)1)->buf = rb->buf;
    (vec + (signed long int)1)->len = cnt2 & rb->size_mask;
  }

  else
  {
    (vec + (signed long int)0)->buf = &rb->buf[(signed long int)r];
    (vec + (signed long int)0)->len = free_cnt;
    (vec + (signed long int)1)->len = (unsigned long int)0;
  }
}

// jack_ringbuffer_get_write_vector
// file ../common/ringbuffer.c line 370
void jack_ringbuffer_get_write_vector(const struct anonymous$1 *rb, struct anonymous$3 *vec)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int w;
  unsigned long int r;
  w = rb->write_ptr;
  r = rb->read_ptr;
  if(!(r >= w))
    free_cnt = ((r - w) + rb->size & rb->size_mask) - (unsigned long int)1;

  else
    if(!(w >= r))
      free_cnt = (r - w) - (unsigned long int)1;

    else
      free_cnt = rb->size - (unsigned long int)1;
  cnt2 = w + free_cnt;
  if(!(rb->size >= cnt2))
  {
    (vec + (signed long int)0)->buf = &rb->buf[(signed long int)w];
    (vec + (signed long int)0)->len = rb->size - w;
    (vec + (signed long int)1)->buf = rb->buf;
    (vec + (signed long int)1)->len = cnt2 & rb->size_mask;
  }

  else
  {
    (vec + (signed long int)0)->buf = &rb->buf[(signed long int)w];
    (vec + (signed long int)0)->len = free_cnt;
    (vec + (signed long int)1)->len = (unsigned long int)0;
  }
}

// jack_ringbuffer_mlock
// file ../common/ringbuffer.c line 110
signed int jack_ringbuffer_mlock(struct anonymous$1 *rb)
{
  rb->mlocked = 1;
  return 0;
}

// jack_ringbuffer_peek
// file ../common/ringbuffer.c line 228
unsigned long int jack_ringbuffer_peek(struct anonymous$1 *rb, char *dest, unsigned long int cnt)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int to_read;
  unsigned long int n1;
  unsigned long int n2;
  unsigned long int tmp_read_ptr = rb->read_ptr;
  free_cnt=jack_ringbuffer_read_space(rb);
  if(free_cnt == 0ul)
    return (unsigned long int)0;

  else
  {
    to_read = cnt > free_cnt ? free_cnt : cnt;
    cnt2 = tmp_read_ptr + to_read;
    if(!(rb->size >= cnt2))
    {
      n1 = rb->size - tmp_read_ptr;
      n2 = cnt2 & rb->size_mask;
    }

    else
    {
      n1 = to_read;
      n2 = (unsigned long int)0;
    }
    memcpy((void *)dest, (const void *)&rb->buf[(signed long int)tmp_read_ptr], n1);
    tmp_read_ptr = tmp_read_ptr + n1 & rb->size_mask;
    if(!(n2 == 0ul))
      memcpy((void *)(dest + (signed long int)n1), (const void *)&rb->buf[(signed long int)tmp_read_ptr], n2);

    return to_read;
  }
}

// jack_ringbuffer_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 136
unsigned long int jack_ringbuffer_read(struct anonymous$1 *rb, char *dest, unsigned long int cnt)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int to_read;
  unsigned long int n1;
  unsigned long int n2;
  free_cnt=jack_ringbuffer_read_space(rb);
  if(free_cnt == 0ul)
    return (unsigned long int)0;

  else
  {
    to_read = cnt > free_cnt ? free_cnt : cnt;
    cnt2 = rb->read_ptr + to_read;
    if(!(rb->size >= cnt2))
    {
      n1 = rb->size - rb->read_ptr;
      n2 = cnt2 & rb->size_mask;
    }

    else
    {
      n1 = to_read;
      n2 = (unsigned long int)0;
    }
    memcpy((void *)dest, (const void *)&rb->buf[(signed long int)rb->read_ptr], n1);
    rb->read_ptr = rb->read_ptr + n1 & rb->size_mask;
    if(!(n2 == 0ul))
    {
      memcpy((void *)(dest + (signed long int)n1), (const void *)&rb->buf[(signed long int)rb->read_ptr], n2);
      rb->read_ptr = rb->read_ptr + n2 & rb->size_mask;
    }

    return to_read;
  }
}

// jack_ringbuffer_read_advance
// file ../common/ringbuffer.c line 305
void jack_ringbuffer_read_advance(struct anonymous$1 *rb, unsigned long int cnt)
{
  unsigned long int tmp = rb->read_ptr + cnt & rb->size_mask;
  rb->read_ptr = tmp;
}

// jack_ringbuffer_read_space
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 175
unsigned long int jack_ringbuffer_read_space(const struct anonymous$1 *rb)
{
  unsigned long int w;
  unsigned long int r;
  w = rb->write_ptr;
  r = rb->read_ptr;
  if(!(r >= w))
    return w - r;

  else
    return (w - r) + rb->size & rb->size_mask;
}

// jack_ringbuffer_reset
// file ../common/ringbuffer.c line 125
void jack_ringbuffer_reset(struct anonymous$1 *rb)
{
  rb->read_ptr = (volatile unsigned long int)0;
  rb->write_ptr = (volatile unsigned long int)0;
  memset((void *)rb->buf, 0, rb->size);
}

// jack_ringbuffer_reset_size
// file ../common/ringbuffer.c line 136
void jack_ringbuffer_reset_size(struct anonymous$1 *rb, unsigned long int sz)
{
  rb->size = sz;
  rb->size_mask = rb->size;
  rb->size_mask = rb->size_mask - (unsigned long int)1;
  rb->read_ptr = (volatile unsigned long int)0;
  rb->write_ptr = (volatile unsigned long int)0;
}

// jack_ringbuffer_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/ringbuffer.h line 214
unsigned long int jack_ringbuffer_write(struct anonymous$1 *rb, const char *src, unsigned long int cnt)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int to_write;
  unsigned long int n1;
  unsigned long int n2;
  free_cnt=jack_ringbuffer_write_space(rb);
  if(free_cnt == 0ul)
    return (unsigned long int)0;

  else
  {
    to_write = cnt > free_cnt ? free_cnt : cnt;
    cnt2 = rb->write_ptr + to_write;
    if(!(rb->size >= cnt2))
    {
      n1 = rb->size - rb->write_ptr;
      n2 = cnt2 & rb->size_mask;
    }

    else
    {
      n1 = to_write;
      n2 = (unsigned long int)0;
    }
    memcpy((void *)&rb->buf[(signed long int)rb->write_ptr], (const void *)src, n1);
    rb->write_ptr = rb->write_ptr + n1 & rb->size_mask;
    if(!(n2 == 0ul))
    {
      memcpy((void *)&rb->buf[(signed long int)rb->write_ptr], (const void *)(src + (signed long int)n1), n2);
      rb->write_ptr = rb->write_ptr + n2 & rb->size_mask;
    }

    return to_write;
  }
}

// jack_ringbuffer_write_advance
// file ../common/ringbuffer.c line 314
void jack_ringbuffer_write_advance(struct anonymous$1 *rb, unsigned long int cnt)
{
  unsigned long int tmp = rb->write_ptr + cnt & rb->size_mask;
  rb->write_ptr = tmp;
}

// jack_ringbuffer_write_space
// file ../common/ringbuffer.c line 169
unsigned long int jack_ringbuffer_write_space(const struct anonymous$1 *rb)
{
  unsigned long int w;
  unsigned long int r;
  w = rb->write_ptr;
  r = rb->read_ptr;
  if(!(r >= w))
    return ((r - w) + rb->size & rb->size_mask) - (unsigned long int)1;

  else
    if(!(w >= r))
      return (r - w) - (unsigned long int)1;

    else
      return rb->size - (unsigned long int)1;
}

// jack_shutdown
// file ../example-clients/capture_client.c line 161
static void jack_shutdown(void *arg)
{
  fprintf(stderr, "JACK shut down, exiting ...\n");
  exit(1);
}

// main
// file ../example-clients/capture_client.c line 264
signed int main(signed int argc, char **argv)
{
  struct _thread_info thread_info;
  signed int c;
  signed int longopt_index = 0;
  signed int show_usage = 0;
  char *optstring = "d:f:b:B:h";
  struct option long_options[6l] = { { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 },
    { .name="duration", .has_arg=1, .flag=((signed int *)NULL), .val=100 },
    { .name="file", .has_arg=1, .flag=((signed int *)NULL), .val=102 },
    { .name="bitdepth", .has_arg=1, .flag=((signed int *)NULL), .val=98 },
    { .name="bufsize", .has_arg=1, .flag=((signed int *)NULL), .val=66 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
  memset((void *)&thread_info, 0, sizeof(struct _thread_info) /*64ul*/ );
  thread_info.rb_size = (unsigned int)16384;
  opterr = 0;
  signed int return_value_atoi$1;
  signed int return_value_atoi$2;
  do
  {
    c=getopt_long(argc, argv, optstring, long_options, &longopt_index);
    if(c == -1)
      break;

    switch(c)
    {
      case 1:
        break;
      case 104:
      {
        show_usage = show_usage + 1;
        break;
      }
      case 100:
      {
        return_value_atoi$1=atoi(optarg);
        thread_info.duration = (unsigned int)return_value_atoi$1;
        break;
      }
      case 102:
      {
        thread_info.path = optarg;
        break;
      }
      case 98:
      {
        thread_info.bitdepth=atoi(optarg);
        break;
      }
      case 66:
      {
        return_value_atoi$2=atoi(optarg);
        thread_info.rb_size = (unsigned int)return_value_atoi$2;
        break;
      }
      default:
      {
        fprintf(stderr, "error\n");
        show_usage = show_usage + 1;
      }
    }
  }
  while((_Bool)1);
  if(thread_info.path == ((char *)NULL) || optind == argc || !(show_usage == 0))
  {
    fprintf(stderr, "usage: jackrec -f filename [ -d second ] [ -b bitdepth ] [ -B bufsize ] port1 [ port2 ... ]\n");
    exit(1);
  }

  client=jack_client_open("jackrec", (enum JackOptions)JackNullOption, (enum JackStatus *)(void *)0);
  if(client == ((struct _jack_client *)NULL))
  {
    fprintf(stderr, "JACK server not running?\n");
    exit(1);
  }

  thread_info.client = client;
  thread_info.channels = (unsigned int)(argc - optind);
  thread_info.can_process = 0;
  setup_disk_thread(&thread_info);
  jack_set_process_callback(client, process, (void *)&thread_info);
  jack_on_shutdown(client, jack_shutdown, (void *)&thread_info);
  signed int return_value_jack_activate$3;
  return_value_jack_activate$3=jack_activate(client);
  if(!(return_value_jack_activate$3 == 0))
    fprintf(stderr, "cannot activate client");

  setup_ports(argc - optind, &argv[(signed long int)optind], &thread_info);
  signal(3, signal_handler);
  signal(1, signal_handler);
  signal(15, signal_handler);
  signal(2, signal_handler);
  run_disk_thread(&thread_info);
  jack_client_close(client);
  jack_ringbuffer_free(rb);
  exit(0);
}

// process
// file ../example-clients/capture_client.c line 123
static signed int process(unsigned int nframes, void *arg)
{
  signed int chn;
  unsigned long int i;
  struct _thread_info *info = (struct _thread_info *)arg;
  _Bool tmp_if_expr$1;
  if(info->can_process == 0)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = !(info->can_capture != 0) ? (_Bool)1 : (_Bool)0;
  void *return_value_jack_port_get_buffer$2;
  if(tmp_if_expr$1)
    return 0;

  else
  {
    chn = 0;
    for( ; !((unsigned int)chn >= nports); chn = chn + 1)
    {
      return_value_jack_port_get_buffer$2=jack_port_get_buffer(ports[(signed long int)chn], nframes);
      in[(signed long int)chn] = (float *)return_value_jack_port_get_buffer$2;
    }
    i = (unsigned long int)0;
    for( ; !(i >= (unsigned long int)nframes); i = i + 1ul)
    {
      chn = 0;
      for( ; !((unsigned int)chn >= nports); chn = chn + 1)
      {
        unsigned long int return_value_jack_ringbuffer_write$3;
        return_value_jack_ringbuffer_write$3=jack_ringbuffer_write(rb, (const char *)(void *)(in[(signed long int)chn] + (signed long int)i), sample_size);
        if(!(return_value_jack_ringbuffer_write$3 >= sample_size))
          overruns = overruns + 1l;

      }
    }
    signed int return_value_pthread_mutex_trylock$4;
    return_value_pthread_mutex_trylock$4=pthread_mutex_trylock(&disk_thread_lock);
    if(return_value_pthread_mutex_trylock$4 == 0)
    {
      pthread_cond_signal(&data_ready);
      pthread_mutex_unlock(&disk_thread_lock);
    }

    return 0;
  }
}

// run_disk_thread
// file ../example-clients/capture_client.c line 205
static void run_disk_thread(struct _thread_info *info)
{
  info->can_capture = 1;
  pthread_join(info->thread_id, (void **)(void *)0);
  sf_close(info->sf);
  if(overruns >= 1l)
  {
    fprintf(stderr, "jackrec failed with %ld overruns.\n", overruns);
    fprintf(stderr, " try a bigger buffer than -B %u.\n", info->rb_size);
    info->status = 32;
  }

}

// setup_disk_thread
// file ../example-clients/capture_client.c line 168
static void setup_disk_thread(struct _thread_info *info)
{
  struct SF_INFO sf_info;
  signed int short_mask;
  unsigned int return_value_jack_get_sample_rate$1;
  return_value_jack_get_sample_rate$1=jack_get_sample_rate(info->client);
  sf_info.samplerate = (signed int)return_value_jack_get_sample_rate$1;
  sf_info.channels = (signed int)info->channels;
  switch(info->bitdepth)
  {
    case 8:
    {
      short_mask = 5;
      break;
    }
    case 16:
    {
      short_mask = 2;
      break;
    }
    case 24:
    {
      short_mask = 3;
      break;
    }
    case 32:
    {
      short_mask = 4;
      break;
    }
    default:
      short_mask = 2;
  }
  sf_info.format = 65536 | short_mask;
  info->sf=sf_open(info->path, 32, &sf_info);
  if(info->sf == ((struct SNDFILE_tag *)NULL))
  {
    char errstr[256l];
    sf_error_str(((struct SNDFILE_tag *)NULL), errstr, sizeof(char [256l]) /*256ul*/  - (unsigned long int)1);
    fprintf(stderr, "cannot open sndfile \"%s\" for output (%s)\n", info->path, (const void *)errstr);
    jack_client_close(info->client);
    exit(1);
  }

  info->duration = info->duration * (unsigned int)sf_info.samplerate;
  info->can_capture = 0;
  pthread_create(&info->thread_id, (const union pthread_attr_t *)(void *)0, disk_thread, (void *)info);
}

// setup_ports
// file ../example-clients/capture_client.c line 220
static void setup_ports(signed int sources, char **source_names, struct _thread_info *info)
{
  unsigned int i;
  unsigned long int in_size;
  nports = (unsigned int)sources;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)nports);
  ports = (struct _jack_port **)return_value_malloc$1;
  in_size = (unsigned long int)nports * sizeof(float *) /*8ul*/ ;
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(in_size);
  in = (float **)return_value_malloc$2;
  rb=jack_ringbuffer_create((unsigned long int)nports * sample_size * (unsigned long int)info->rb_size);
  memset((void *)in, 0, in_size);
  memset((void *)rb->buf, 0, rb->size);
  i = (unsigned int)0;
  for( ; !(i >= nports); i = i + 1u)
  {
    char name[64l];
    sprintf(name, "input%d", i + (unsigned int)1);
    ports[(signed long int)i]=jack_port_register(info->client, name, "32 bit float mono audio", (unsigned long int)1, (unsigned long int)0);
    if(ports[(signed long int)i] == ((struct _jack_port *)NULL))
    {
      fprintf(stderr, "cannot register input port \"%s\"!\n", (const void *)name);
      jack_client_close(info->client);
      exit(1);
    }

  }
  i = (unsigned int)0;
  for( ; !(i >= nports); i = i + 1u)
  {
    const char *return_value_jack_port_name$4;
    return_value_jack_port_name$4=jack_port_name(ports[(signed long int)i]);
    signed int return_value_jack_connect$5;
    return_value_jack_connect$5=jack_connect(info->client, source_names[(signed long int)i], return_value_jack_port_name$4);
    if(!(return_value_jack_connect$5 == 0))
    {
      const char *return_value_jack_port_name$3;
      return_value_jack_port_name$3=jack_port_name(ports[(signed long int)i]);
      fprintf(stderr, "cannot connect input port %s to %s\n", return_value_jack_port_name$3, source_names[(signed long int)i]);
      jack_client_close(info->client);
      exit(1);
    }

  }
  info->can_process = 1;
}

// signal_handler
// file ../example-clients/capture_client.c line 66
static void signal_handler(signed int sig)
{
  jack_client_close(client);
  fprintf(stderr, "signal received, exiting ...\n");
  exit(0);
}

