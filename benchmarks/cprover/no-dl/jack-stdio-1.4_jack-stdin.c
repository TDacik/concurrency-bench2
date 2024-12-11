// tag-#anon#ST[*{S8}_S8_'buf'||vU64'write_ptr'||vU64'read_ptr'||U64'size'||U64'size_mask'||S32'mlocked'||U32'_pad0'|]
// file /usr/include/jack/ringbuffer.h line 51
struct anonymous_1;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_2;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_0;

// tag-JackOptions
// file /usr/include/jack/types.h line 90
enum JackOptions { JackNullOption=0, JackNoStartServer=1, JackUseExactName=2, JackServerName=4, JackLoadName=8, JackLoadInit=16, JackSessionID=32 };

// tag-JackStatus
// file /usr/include/jack/types.h line 149
enum JackStatus { JackFailure=1, JackInvalidOption=2, JackNameNotUnique=4, JackServerStarted=8, JackServerFailed=16, JackServerError=32, JackNoSuchClient=64, JackLoadFailure=128, JackInitFailure=256, JackShmFailure=512, JackVersionError=1024, JackBackendError=2048, JackClientZombie=4096 };

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
// file /usr/include/jack/types.h line 72
struct _jack_client;

// tag-_jack_port
// file /usr/include/jack/types.h line 66
struct _jack_port;

// tag-_thread_info
// file jack-stdin.c line 43
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

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// atof
// file /usr/include/x86_64-linux-gnu/bits/stdlib-float.h line 26
static inline double atof(const char *__nptr);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// catchsig
// file jack-stdin.c line 299
void catchsig(signed int sig);
// ceil
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern double ceil(double);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// io_thread
// file jack-stdin.c line 95
void * io_thread(void *arg);
// jack_activate
// file /usr/include/jack/jack.h line 183
signed int jack_activate(struct _jack_client *);
// jack_client_close
// file /usr/include/jack/jack.h line 104
signed int jack_client_close(struct _jack_client *);
// jack_client_open
// file /usr/include/jack/jack.h line 88
struct _jack_client * jack_client_open(const char *, enum JackOptions, enum JackStatus *, ...);
// jack_connect
// file /usr/include/jack/jack.h line 848
signed int jack_connect(struct _jack_client *, const char *, const char *);
// jack_get_buffer_size
// file /usr/include/jack/jack.h line 565
unsigned int jack_get_buffer_size(struct _jack_client *);
// jack_get_sample_rate
// file /usr/include/jack/jack.h line 554
unsigned int jack_get_sample_rate(struct _jack_client *);
// jack_on_shutdown
// file /usr/include/jack/jack.h line 300
void jack_on_shutdown(struct _jack_client *, void (*)(void *), void *);
// jack_port_get_buffer
// file /usr/include/jack/jack.h line 649
void * jack_port_get_buffer(struct _jack_port *, unsigned int);
// jack_port_name
// file /usr/include/jack/jack.h line 657
const char * jack_port_name(const struct _jack_port *);
// jack_port_register
// file /usr/include/jack/jack.h line 624
struct _jack_port * jack_port_register(struct _jack_client *, const char *, const char *, unsigned long int, unsigned long int);
// jack_ringbuffer_create
// file /usr/include/jack/ringbuffer.h line 72
struct anonymous_1 * jack_ringbuffer_create(unsigned long int);
// jack_ringbuffer_free
// file /usr/include/jack/ringbuffer.h line 80
void jack_ringbuffer_free(struct anonymous_1 *);
// jack_ringbuffer_read
// file /usr/include/jack/ringbuffer.h line 137
unsigned long int jack_ringbuffer_read(struct anonymous_1 *, char *, unsigned long int);
// jack_ringbuffer_read_space
// file /usr/include/jack/ringbuffer.h line 176
unsigned long int jack_ringbuffer_read_space(const struct anonymous_1 *);
// jack_ringbuffer_write
// file /usr/include/jack/ringbuffer.h line 205
unsigned long int jack_ringbuffer_write(struct anonymous_1 *, const char *, unsigned long int);
// jack_ringbuffer_write_space
// file /usr/include/jack/ringbuffer.h line 228
unsigned long int jack_ringbuffer_write_space(const struct anonymous_1 *);
// jack_set_process_callback
// file /usr/include/jack/jack.h line 342
signed int jack_set_process_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_shutdown
// file jack-stdin.c line 251
void jack_shutdown(void *arg);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// process
// file jack-stdin.c line 157
signed int process(unsigned int nframes, void *arg);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous *, union anonymous_0 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_0 *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous_0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_0 *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 512
extern signed int pthread_setcanceltype(signed int, signed int *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// setup_ports
// file jack-stdin.c line 256
void setup_ports(signed int nports, char **source_names, struct _thread_info *info);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// usage
// file jack-stdin.c line 314
static void usage(const char *name, signed int status);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);

struct anonymous_1
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

struct anonymous_2
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

union anonymous
{
  // __data
  struct anonymous_2 __data;
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

struct _thread_info
{
  // thread_id
  unsigned long int thread_id;
  // mesg_thread_id
  unsigned long int mesg_thread_id;
  // duration
  unsigned int duration;
  // rb_size
  unsigned int rb_size;
  // client
  struct _jack_client *client;
  // channels
  unsigned int channels;
  // can_capture
  volatile signed int can_capture;
  // can_process
  volatile signed int can_process;
  // prebuffer
  float prebuffer;
  // readfd
  signed int readfd;
  // format
  signed int format;
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


// data_ready
// file jack-stdin.c line 88
union anonymous data_ready = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// io_thread_lock
// file jack-stdin.c line 87
union anonymous_0 io_thread_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// nframes
// file jack-stdin.c line 83
unsigned int nframes;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// out
// file jack-stdin.c line 82
float **out;
// ports
// file jack-stdin.c line 81
struct _jack_port **ports;
// rb
// file jack-stdin.c line 86
struct anonymous_1 *rb;
// run
// file jack-stdin.c line 92
volatile signed int run = 1;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// underruns
// file jack-stdin.c line 93
signed long int underruns = (signed long int)0;
// want_quiet
// file jack-stdin.c line 91
signed int want_quiet = 0;

// atof
// file /usr/include/x86_64-linux-gnu/bits/stdlib-float.h line 26
static inline double atof(const char *__nptr)
{
  double return_value_strtod_1;
  return_value_strtod_1=strtod(__nptr, (char **)(void *)0);
  return return_value_strtod_1;
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1;
}

// catchsig
// file jack-stdin.c line 299
void catchsig(signed int sig)
{
  signal(1, catchsig);
  signal(2, catchsig);
  if(want_quiet == 0)
    fprintf(stderr, "\n jack-stdin: CAUGHT SIGNAL - shutting down.\n");

  run = 0;
  pthread_mutex_lock(&io_thread_lock);
  pthread_cond_signal(&data_ready);
  pthread_mutex_unlock(&io_thread_lock);
}

// io_thread
// file jack-stdin.c line 95
void * io_thread(void *arg)
{
  struct _thread_info *info = (struct _thread_info *)arg;
  unsigned int total_captured = (unsigned int)0;
  unsigned long int bytes_per_frame;
  signed int tmp_if_expr_1;
  if(!((2 & info->format) == 0))
    tmp_if_expr_1 = (info->format & 1) != 0 ? 4 : 1;

  else
    tmp_if_expr_1 = (info->format & 1) != 0 ? 3 : 2;
  bytes_per_frame = (const unsigned long int)(info->channels * (unsigned int)tmp_if_expr_1);
  void *framebuf;
  framebuf=malloc(bytes_per_frame);
  pthread_setcanceltype(1, (signed int *)(void *)0);
  pthread_mutex_lock(&io_thread_lock);
  signed int readerror = 0;
  unsigned long int roff = (unsigned long int)0;
  unsigned long int return_value_jack_ringbuffer_write_space_2;
  while(readerror == 0 && !(run == 0))
  {
    while(!(info->can_capture == 0))
    {
      return_value_jack_ringbuffer_write_space_2=jack_ringbuffer_write_space(rb);
      if(!(return_value_jack_ringbuffer_write_space_2 >= bytes_per_frame))
        break;

      if(info->duration >= 1u)
      {
        if(total_captured >= info->duration)
        {
          if(want_quiet == 0)
            fprintf(stderr, "io thread finished\n");

          readerror = 1;
          break;
        }

      }

      signed int rv;
      signed long int return_value_read_3;
      return_value_read_3=read(info->readfd, framebuf + (signed long int)roff, bytes_per_frame - roff);
      rv = (signed int)return_value_read_3;
      if(!(rv >= 0))
      {
        readerror = 1;
        break;
      }

      else
        if(rv == 0)
        {
          readerror = 1;
          break;
        }

        else
          if(!((unsigned long int)rv >= bytes_per_frame))
          {
            roff = (unsigned long int)rv;
            continue;
          }

          else
            roff = (unsigned long int)0;
      jack_ringbuffer_write(rb, (const char *)framebuf, bytes_per_frame);
      total_captured = total_captured + 1u;
    }
    if(readerror == 0)
    {
      if(IEEE_FLOAT_EQUAL(info->prebuffer, 0.000000f))
        pthread_cond_wait(&data_ready, &io_thread_lock);

    }

  }
  unsigned long int return_value_jack_ringbuffer_read_space_4;
  unsigned int return_value_jack_get_buffer_size_5;
  while(!(run == 0))
  {
    if(!IEEE_FLOAT_EQUAL(info->prebuffer, 0.000000f))
      break;

    return_value_jack_ringbuffer_read_space_4=jack_ringbuffer_read_space(rb);
    return_value_jack_get_buffer_size_5=jack_get_buffer_size(info->client);
    if(bytes_per_frame * (unsigned long int)return_value_jack_get_buffer_size_5 >= return_value_jack_ringbuffer_read_space_4)
      break;

    usleep((unsigned int)10000);
  }
  pthread_mutex_unlock(&io_thread_lock);
  free(framebuf);
  return NULL;
}

// jack_shutdown
// file jack-stdin.c line 251
void jack_shutdown(void *arg)
{
  fprintf(stderr, "JACK shutdown\n");
  abort();
}

// main
// file jack-stdin.c line 336
signed int main(signed int argc, char **argv)
{
  struct _jack_client *client;
  struct _thread_info thread_info;
  struct _thread_info *info = &thread_info;
  enum JackStatus jstat;
  signed int c;
  char *infn = (char *)(void *)0;
  memset((void *)&thread_info, 0, sizeof(struct _thread_info) /*56ul*/ );
  thread_info.rb_size = (unsigned int)(16384 * 4);
  thread_info.channels = (unsigned int)2;
  thread_info.duration = (unsigned int)0;
  thread_info.format = 0;
  thread_info.prebuffer = (float)50.0;
  thread_info.readfd=fileno(stdin);
  const char *optstring = "d:e:b:S:f:p:BLhq";
  struct option long_options[11l] = { { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 },
    { .name="quiet", .has_arg=0, .flag=((signed int *)NULL), .val=113 },
    { .name="duration", .has_arg=1, .flag=((signed int *)NULL), .val=100 },
    { .name="encoding", .has_arg=1, .flag=((signed int *)NULL), .val=101 },
    { .name="file", .has_arg=1, .flag=((signed int *)NULL), .val=102 },
    { .name="prebuffer", .has_arg=1, .flag=((signed int *)NULL), .val=112 },
    { .name="little-endian", .has_arg=0, .flag=((signed int *)NULL), .val=76 },
    { .name="big-endian", .has_arg=0, .flag=((signed int *)NULL), .val=66 },
    { .name="bitdepth", .has_arg=1, .flag=((signed int *)NULL), .val=98 },
    { .name="bufsize", .has_arg=1, .flag=((signed int *)NULL), .val=83 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
  char *return_value___strdup_1;
  signed int return_value_atoi_2;
  double return_value_atof_3;
  unsigned long int return_value_strlen_8;
  signed int return_value_strncmp_9;
  unsigned long int return_value_strlen_6;
  signed int return_value_strncmp_7;
  unsigned long int return_value_strlen_4;
  signed int return_value_strncmp_5;
  signed int return_value_atoi_13;
  signed int return_value_atoi_12;
  signed int return_value_atoi_11;
  signed int return_value_atoi_10;
  signed int return_value_atoi_14;
  do
  {
    c=getopt_long(argc, argv, optstring, long_options, (signed int *)(void *)0);
    if(c == -1)
      break;

    switch(c)
    {
      case 104:
      {
        usage(argv[(signed long int)0], 0);
        break;
      }
      case 113:
      {
        want_quiet = 1;
        break;
      }
      case 102:
      {
        free((void *)infn);
        return_value___strdup_1=__strdup(optarg);
        infn = return_value___strdup_1;
        break;
      }
      case 100:
      {
        return_value_atoi_2=atoi(optarg);
        thread_info.duration = (unsigned int)return_value_atoi_2;
        break;
      }
      case 112:
      {
        return_value_atof_3=atof(optarg);
        thread_info.prebuffer = (float)return_value_atof_3;
        if(thread_info.prebuffer < 1.000000f)
          thread_info.prebuffer = (float)0.0;

        if(thread_info.prebuffer > 90.000000f)
          thread_info.prebuffer = (float)90.0;

        break;
      }
      case 101:
      {
        thread_info.format = thread_info.format & ~0x30;
        return_value_strlen_8=strlen(optarg);
        return_value_strncmp_9=strncmp(optarg, "floating-point", return_value_strlen_8);
        if(return_value_strncmp_9 == 0)
          thread_info.format = thread_info.format | 0x23;

        else
        {
          return_value_strlen_6=strlen(optarg);
          return_value_strncmp_7=strncmp(optarg, "unsigned-integer", return_value_strlen_6);
          if(return_value_strncmp_7 == 0)
            thread_info.format = thread_info.format | 0x10;

          else
          {
            return_value_strlen_4=strlen(optarg);
            return_value_strncmp_5=strncmp(optarg, "signed-integer", return_value_strlen_4);
            if(!(return_value_strncmp_5 == 0))
            {
              fprintf(stderr, "invalid encoding.\n");
              usage(argv[(signed long int)0], 1);
            }

          }
        }
        break;
      }
      case 98:
      {
        thread_info.format = thread_info.format & ~3;
        return_value_atoi_13=atoi(optarg);
        if(return_value_atoi_13 == 24)
          thread_info.format = thread_info.format | 1;

        else
        {
          return_value_atoi_12=atoi(optarg);
          if(return_value_atoi_12 == 8)
            thread_info.format = thread_info.format | 2;

          else
          {
            return_value_atoi_11=atoi(optarg);
            if(return_value_atoi_11 == 32)
              thread_info.format = thread_info.format | 3;

            else
            {
              return_value_atoi_10=atoi(optarg);
              if(!(return_value_atoi_10 == 16))
              {
                fprintf(stderr, "invalid integer bit-depth. valid values: 16,i 24.\n");
                usage(argv[(signed long int)0], 1);
              }

            }
          }
        }
        break;
      }
      case 76:
      {
        thread_info.format = thread_info.format & ~0x40;
        break;
      }
      case 66:
      {
        thread_info.format = thread_info.format | 0x40;
        break;
      }
      case 83:
      {
        return_value_atoi_14=atoi(optarg);
        thread_info.rb_size = (unsigned int)return_value_atoi_14;
        break;
      }
      default:
      {
        fprintf(stderr, "invalid argument.\n");
        usage(argv[(signed long int)0], 0);
      }
    }
  }
  while((_Bool)1);
  if(!((0x20 & info->format) == 0))
    thread_info.format = thread_info.format | 3;

  if(optind >= argc)
  {
    fprintf(stderr, "At least one port/audio-channel must be given.\n");
    usage(argv[(signed long int)0], 1);
  }

  if(!(infn == ((char *)NULL)))
  {
    thread_info.readfd=open(infn, 00);
    if(!(thread_info.readfd >= 0))
    {
      fprintf(stderr, "Can not open file.\n");
      exit(1);
    }

  }

  client=jack_client_open("jstdin", (enum JackOptions)JackNoStartServer, &jstat);
  if(client == ((struct _jack_client *)NULL))
  {
    fprintf(stderr, "Can not connect to JACK.\n");
    exit(1);
  }

  thread_info.client = client;
  thread_info.can_process = 0;
  thread_info.channels = (unsigned int)(argc - optind);
  if(thread_info.duration >= 1u)
  {
    unsigned int return_value_jack_get_sample_rate_15;
    return_value_jack_get_sample_rate_15=jack_get_sample_rate(thread_info.client);
    thread_info.duration = thread_info.duration * return_value_jack_get_sample_rate_15;
  }

  unsigned int return_value_jack_get_buffer_size_16;
  return_value_jack_get_buffer_size_16=jack_get_buffer_size(thread_info.client);
  if(!(thread_info.rb_size >> 1 >= return_value_jack_get_buffer_size_16))
  {
    fprintf(stderr, "Ringbuffer size needs to be at least twice jack period size\n");
    jack_client_close(thread_info.client);
    usage(argv[(signed long int)0], 1);
  }

  double return_value_ceil_17;
  return_value_ceil_17=ceil((double)((float)thread_info.rb_size * thread_info.prebuffer) / 100.0);
  unsigned int return_value_jack_get_buffer_size_18;
  return_value_jack_get_buffer_size_18=jack_get_buffer_size(thread_info.client);
  if((double)thread_info.rb_size + -return_value_ceil_17 < (double)return_value_jack_get_buffer_size_18)
  {
    fprintf(stderr, "Prebuffer ratio is too high. It will never finish.\n");
    jack_client_close(thread_info.client);
    usage(argv[(signed long int)0], 1);
  }

  jack_set_process_callback(client, process, (void *)&thread_info);
  jack_on_shutdown(client, jack_shutdown, (void *)&thread_info);
  signed int return_value_jack_activate_19;
  return_value_jack_activate_19=jack_activate(client);
  if(!(return_value_jack_activate_19 == 0))
    fprintf(stderr, "cannot activate client");

  setup_ports((signed int)thread_info.channels, &argv[(signed long int)optind], &thread_info);
  pthread_create(&thread_info.thread_id, (const union pthread_attr_t *)(void *)0, io_thread, (void *)&thread_info);
  signal(1, catchsig);
  signal(2, catchsig);
  char *tmp_if_expr_20;
  char *tmp_if_expr_21;
  if(want_quiet == 0)
  {
    if(!((0x20 & info->format) == 0))
      tmp_if_expr_20 = "";

    else
      tmp_if_expr_20 = !((info->format & 0x10) != 0) ? "signed-" : "unsigned-";
    if(!((0x20 & info->format) == 0))
      tmp_if_expr_21 = (info->format & 0x40) != 0 ? "non-native-endian" : "native-endian";

    else
      tmp_if_expr_21 = (info->format & 0x40) != 0 ? "big-endian" : "little-endian";
    unsigned int return_value_jack_get_sample_rate_22;
    return_value_jack_get_sample_rate_22=jack_get_sample_rate(thread_info.client);
    fprintf(stderr, "%i channel%s, %s %sbit %s%s %s @%iSPS.\n", thread_info.channels, thread_info.channels > (unsigned int)1 ? "s" : "", thread_info.channels > (unsigned int)1 ? "interleaved" : "", (thread_info.format & 2) != 0 ? ((thread_info.format & 1) != 0 ? "32" : "8") : ((thread_info.format & 1) != 0 ? "24" : "16"), tmp_if_expr_20, (info->format & 0x20) != 0 ? "float" : "integer", tmp_if_expr_21, return_value_jack_get_sample_rate_22);
  }

  thread_info.can_capture = 1;
  pthread_join(thread_info.thread_id, (void **)(void *)0);
  if(!(infn == ((char *)NULL)))
  {
    close(thread_info.readfd);
    free((void *)infn);
  }

  if(want_quiet == 0 && underruns >= 1l)
    fprintf(stderr, "Note: there were %ld buffer underruns.\n", underruns);

  jack_client_close(client);
  jack_ringbuffer_free(rb);
  return 0;
}

// process
// file jack-stdin.c line 157
signed int process(unsigned int nframes, void *arg)
{
  signed int chn;
  unsigned long int i;
  struct _thread_info *info = (struct _thread_info *)arg;
  signed int tmp_if_expr_1;
  void *return_value_jack_port_get_buffer_4;
  signed int tmp_if_expr_5;
  signed int tmp_if_expr_6;
  signed int tmp_if_expr_8;
  signed int tmp_if_expr_7;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  signed int tmp_if_expr_10;
  signed int tmp_if_expr_9;
  _Bool tmp_if_expr_15;
  signed int tmp_if_expr_14;
  signed int tmp_if_expr_13;
  signed int tmp_if_expr_17;
  signed int tmp_if_expr_16;
  signed int tmp_if_expr_22;
  signed int tmp_if_expr_19;
  signed int tmp_if_expr_20;
  signed int tmp_if_expr_21;
  signed int tmp_if_expr_18;
  double tmp_if_expr_24;
  signed int tmp_if_expr_23;
  double tmp_if_expr_25;
  if(info->can_process == 0)
    return 0;

  else
  {
    unsigned long int bytes_per_frame;
    if(!((2 & info->format) == 0))
      tmp_if_expr_1 = (info->format & 1) != 0 ? 4 : 1;

    else
      tmp_if_expr_1 = (info->format & 1) != 0 ? 3 : 2;
    bytes_per_frame = (const unsigned long int)(info->channels * (unsigned int)tmp_if_expr_1);
    unsigned int rbrs;
    unsigned long int return_value_jack_ringbuffer_read_space_2;
    return_value_jack_ringbuffer_read_space_2=jack_ringbuffer_read_space(rb);
    rbrs = (const unsigned int)return_value_jack_ringbuffer_read_space_2;
    double return_value_ceil_3;
    return_value_ceil_3=ceil((double)((float)info->rb_size * info->prebuffer) / 100.0);
    if((double)rbrs < return_value_ceil_3)
      return 0;

    else
    {
      info->prebuffer = (float)0.0;
      chn = 0;
      for( ; !((unsigned int)chn >= info->channels); chn = chn + 1)
      {
        return_value_jack_port_get_buffer_4=jack_port_get_buffer(ports[(signed long int)chn], nframes);
        out[(signed long int)chn] = (float *)return_value_jack_port_get_buffer_4;
      }
      if(info->can_capture == 0 || !((unsigned long int)rbrs >= bytes_per_frame * (unsigned long int)nframes))
      {
        chn = 0;
        for( ; !((unsigned int)chn >= info->channels); chn = chn + 1)
          memset((void *)out[(signed long int)chn], 0, (unsigned long int)nframes * sizeof(float) /*4ul*/ );
        if(!(info->can_capture == 0))
        {
          if(!((unsigned long int)rbrs >= bytes_per_frame * (unsigned long int)nframes))
          {
            underruns = underruns + 1l;
            fprintf(stderr, "underrun..\n");
          }

        }

        return 0;
      }

      else
      {
        i = (unsigned long int)0;
        for( ; !(i >= (unsigned long int)nframes); i = i + 1ul)
        {
          chn = 0;
          for( ; !((unsigned int)chn >= info->channels); chn = chn + 1)
          {
            float js;
            if(!((0x20 & info->format) == 0))
            {
              float process__1__4__1__1__1__1__d;
              if(!((2 & info->format) == 0))
                tmp_if_expr_5 = (info->format & 1) != 0 ? 4 : 1;

              else
                tmp_if_expr_5 = (info->format & 1) != 0 ? 3 : 2;
              jack_ringbuffer_read(rb, (char *)(void *)&process__1__4__1__1__1__1__d, (unsigned long int)tmp_if_expr_5);
              if(!((0x40 & info->format) == 0))
              {
                char *flin = (char *)&process__1__4__1__1__1__1__d;
                char *fout = (char *)&js;
                fout[(signed long int)0] = flin[(signed long int)3];
                fout[(signed long int)1] = flin[(signed long int)2];
                fout[(signed long int)2] = flin[(signed long int)1];
                fout[(signed long int)3] = flin[(signed long int)0];
              }

              else
                js = process__1__4__1__1__1__1__d;
              out[(signed long int)chn][(signed long int)i] = (float)js;
            }

            else
            {
              char bytes[4l];
              if(!((2 & info->format) == 0))
                tmp_if_expr_6 = (info->format & 1) != 0 ? 4 : 1;

              else
                tmp_if_expr_6 = (info->format & 1) != 0 ? 3 : 2;
              jack_ringbuffer_read(rb, (char *)(void *)&bytes, (unsigned long int)tmp_if_expr_6);
              signed int d = 0;
              if(!((0x40 & info->format) == 0))
              {
                if(!((2 & info->format) == 0))
                  tmp_if_expr_7 = (info->format & 1) != 0 ? 4 : 1;

                else
                  tmp_if_expr_7 = (info->format & 1) != 0 ? 3 : 2;
                tmp_if_expr_8 = (tmp_if_expr_7 - 0) - 1;
              }

              else
                tmp_if_expr_8 = 0;
              d = d | (signed int)bytes[(signed long int)tmp_if_expr_8] & 0xff;
              if((3 & info->format) == 0)
                tmp_if_expr_11 = (_Bool)1;

              else
                tmp_if_expr_11 = (info->format & 3) == 1 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_11)
                tmp_if_expr_12 = (_Bool)1;

              else
                tmp_if_expr_12 = (info->format & 0x23) == 3 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_12)
              {
                if(!((0x40 & info->format) == 0))
                {
                  if(!((2 & info->format) == 0))
                    tmp_if_expr_9 = (info->format & 1) != 0 ? 4 : 1;

                  else
                    tmp_if_expr_9 = (info->format & 1) != 0 ? 3 : 2;
                  tmp_if_expr_10 = (tmp_if_expr_9 - 1) - 1;
                }

                else
                  tmp_if_expr_10 = 1;
                d = d | ((signed int)bytes[(signed long int)tmp_if_expr_10] & 0xff) << 8;
              }

              if((3 & info->format) == 1)
                tmp_if_expr_15 = (_Bool)1;

              else
                tmp_if_expr_15 = (info->format & 0x23) == 3 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_15)
              {
                if(!((0x40 & info->format) == 0))
                {
                  if(!((2 & info->format) == 0))
                    tmp_if_expr_13 = (info->format & 1) != 0 ? 4 : 1;

                  else
                    tmp_if_expr_13 = (info->format & 1) != 0 ? 3 : 2;
                  tmp_if_expr_14 = (tmp_if_expr_13 - 2) - 1;
                }

                else
                  tmp_if_expr_14 = 2;
                d = d | ((signed int)bytes[(signed long int)tmp_if_expr_14] & 0xff) << 16;
              }

              if((0x23 & info->format) == 3)
              {
                if(!((0x40 & info->format) == 0))
                {
                  if(!((2 & info->format) == 0))
                    tmp_if_expr_16 = (info->format & 1) != 0 ? 4 : 1;

                  else
                    tmp_if_expr_16 = (info->format & 1) != 0 ? 3 : 2;
                  tmp_if_expr_17 = (tmp_if_expr_16 - 3) - 1;
                }

                else
                  tmp_if_expr_17 = 3;
                d = d | ((signed int)bytes[(signed long int)tmp_if_expr_17] & 0xff) << 24;
              }

              if((0x23 & info->format) == 3)
              {
                if(!((0x10 & info->format) == 0))
                  d = d ^ (signed int)0x80000000;

              }

              else
                if((0x10 & info->format) == 0)
                {
                  if(!((0x40 & info->format) == 0))
                  {
                    if(!((2 & info->format) == 0))
                      tmp_if_expr_19 = (info->format & 1) != 0 ? 4 : 1;

                    else
                      tmp_if_expr_19 = (info->format & 1) != 0 ? 3 : 2;
                    if(!((2 & info->format) == 0))
                      tmp_if_expr_20 = (info->format & 1) != 0 ? 4 : 1;

                    else
                      tmp_if_expr_20 = (info->format & 1) != 0 ? 3 : 2;
                    tmp_if_expr_22 = (tmp_if_expr_19 - (tmp_if_expr_20 - 1)) - 1;
                  }

                  else
                  {
                    if(!((2 & info->format) == 0))
                      tmp_if_expr_21 = (info->format & 1) != 0 ? 4 : 1;

                    else
                      tmp_if_expr_21 = (info->format & 1) != 0 ? 3 : 2;
                    tmp_if_expr_22 = tmp_if_expr_21 - 1;
                  }
                  if(!((0x80 & (signed int)bytes[(signed long int)tmp_if_expr_22]) == 0))
                  {
                    const signed int mask[3l] = { (const signed int)0xffffff00, (const signed int)0xffff0000, (const signed int)0xff000000 };
                    if(!((2 & info->format) == 0))
                      tmp_if_expr_18 = (info->format & 1) != 0 ? 4 : 1;

                    else
                      tmp_if_expr_18 = (info->format & 1) != 0 ? 3 : 2;
                    d = d | mask[(signed long int)(tmp_if_expr_18 - 1)];
                  }

                }

              if((0x10 & info->format) == 0)
                tmp_if_expr_24 = 0.0;

              else
              {
                if(!((2 & info->format) == 0))
                  tmp_if_expr_23 = (info->format & 1) != 0 ? 0 : 127;

                else
                  tmp_if_expr_23 = (info->format & 1) != 0 ? 8388607 : 32767;
                tmp_if_expr_24 = (double)tmp_if_expr_23;
              }
              if(!((2 & info->format) == 0))
                tmp_if_expr_25 = (info->format & 1) != 0 ? 2147483648.0 : 128.0;

              else
                tmp_if_expr_25 = (info->format & 1) != 0 ? 8388608.0 : 32768.0;
              out[(signed long int)chn][(signed long int)i] = (float)((double)(float)((double)d - tmp_if_expr_24) / tmp_if_expr_25);
            }
          }
        }
        signed int return_value_pthread_mutex_trylock_26;
        return_value_pthread_mutex_trylock_26=pthread_mutex_trylock(&io_thread_lock);
        if(return_value_pthread_mutex_trylock_26 == 0)
        {
          pthread_cond_signal(&data_ready);
          pthread_mutex_unlock(&io_thread_lock);
        }

        return 0;
      }
    }
  }
}

// setup_ports
// file jack-stdin.c line 256
void setup_ports(signed int nports, char **source_names, struct _thread_info *info)
{
  unsigned int i;
  const unsigned long int in_size = (unsigned long int)nports * sizeof(float *) /*8ul*/ ;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)nports);
  ports = (struct _jack_port **)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(in_size);
  out = (float **)return_value_malloc_2;
  signed int tmp_if_expr_3;
  if(!((2 & info->format) == 0))
    tmp_if_expr_3 = (info->format & 1) != 0 ? 4 : 1;

  else
    tmp_if_expr_3 = (info->format & 1) != 0 ? 3 : 2;
  rb=jack_ringbuffer_create((unsigned long int)((unsigned int)(nports * tmp_if_expr_3) * info->rb_size));
  memset((void *)out, 0, in_size);
  memset((void *)rb->buf, 0, rb->size);
  i = (unsigned int)0;
  for( ; !(i >= (unsigned int)nports); i = i + 1u)
  {
    char name[64l];
    sprintf(name, "input%d", i + (unsigned int)1);
    ports[(signed long int)i]=jack_port_register(info->client, name, "32 bit float mono audio", (unsigned long int)2, (unsigned long int)0);
    if(ports[(signed long int)i] == ((struct _jack_port *)NULL))
    {
      fprintf(stderr, "cannot register input port \"%s\"!\n", (const void *)name);
      jack_client_close(info->client);
      exit(1);
    }

  }
  i = (unsigned int)0;
  for( ; !(i >= (unsigned int)nports); i = i + 1u)
  {
    const char *return_value_jack_port_name_5;
    return_value_jack_port_name_5=jack_port_name(ports[(signed long int)i]);
    signed int return_value_jack_connect_6;
    return_value_jack_connect_6=jack_connect(info->client, return_value_jack_port_name_5, source_names[(signed long int)i]);
    if(!(return_value_jack_connect_6 == 0))
    {
      const char *return_value_jack_port_name_4;
      return_value_jack_port_name_4=jack_port_name(ports[(signed long int)i]);
      fprintf(stderr, "cannot connect input port %s to %s\n", return_value_jack_port_name_4, source_names[(signed long int)i]);
    }

  }
  info->can_process = 1;
}

// usage
// file jack-stdin.c line 314
static void usage(const char *name, signed int status)
{
  fprintf(status != 0 ? stderr : stdout, "usage: %s [ OPTIONS ] port1 [ port2 ... ]\n", name);
  fprintf(status != 0 ? stderr : stdout, "jack-stdin reads raw audio-data from standard-input and writes it to JACK.\n");
  fprintf(status != 0 ? stderr : stdout, "OPTIONS:\n -h, --help               print this message\n -q, --quiet              inhibit usual output\n -b, --bitdepth {bits}    choose integer bit depth: 16, 24 (default: 16)\n -d, --duration {sec}     terminate after given time, <1: unlimited (default:0)\n -e, --encoding {format}  set output format: (default: signed)\n                          signed-integer, unsigned-integer, float\n -f, --file {filename}    read data from file instead of stdin\n -L, --little-endian      write little-endian integers or\n                          native-byte-order floats (default)\n -B, --big-endian         write big-endian integers or swapped-order floats\n -S, --bufsize {samples}  set buffer size (default: 64k)\n");
  exit(status);
}

