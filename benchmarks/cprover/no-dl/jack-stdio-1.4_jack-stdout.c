// tag-#anon#ST[*{S8}$S8$'buf'||vU64'write_ptr'||vU64'read_ptr'||U64'size'||U64'size_mask'||S32'mlocked'||U32'$pad0'|]
// file /usr/include/jack/ringbuffer.h line 51
struct anonymous$0;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$1;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

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
// file jack-stdout.c line 48
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

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// catchsig
// file jack-stdout.c line 298
void catchsig(signed int sig);
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
// file jack-stdout.c line 98
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
struct anonymous$0 * jack_ringbuffer_create(unsigned long int);
// jack_ringbuffer_free
// file /usr/include/jack/ringbuffer.h line 80
void jack_ringbuffer_free(struct anonymous$0 *);
// jack_ringbuffer_read
// file /usr/include/jack/ringbuffer.h line 137
unsigned long int jack_ringbuffer_read(struct anonymous$0 *, char *, unsigned long int);
// jack_ringbuffer_read_space
// file /usr/include/jack/ringbuffer.h line 176
unsigned long int jack_ringbuffer_read_space(const struct anonymous$0 *);
// jack_ringbuffer_write
// file /usr/include/jack/ringbuffer.h line 205
unsigned long int jack_ringbuffer_write(struct anonymous$0 *, const char *, unsigned long int);
// jack_ringbuffer_write_space
// file /usr/include/jack/ringbuffer.h line 228
unsigned long int jack_ringbuffer_write_space(const struct anonymous$0 *);
// jack_set_process_callback
// file /usr/include/jack/jack.h line 342
signed int jack_set_process_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_shutdown
// file jack-stdout.c line 250
void jack_shutdown(void *arg);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// process
// file jack-stdout.c line 188
signed int process(unsigned int nframes, void *arg);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$2 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$2 *, union anonymous *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 512
extern signed int pthread_setcanceltype(signed int, signed int *);
// rintf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 279
extern float rintf(float);
// setup_ports
// file jack-stdout.c line 255
void setup_ports(signed int nports, char **source_names, struct _thread_info *info);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// usage
// file jack-stdout.c line 312
static void usage(const char *name, signed int status);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous$0
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

struct anonymous$1
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

union anonymous$2
{
  // __data
  struct anonymous$1 __data;
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
// file jack-stdout.c line 91
union anonymous$2 data_ready = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// in
// file jack-stdout.c line 85
float **in;
// io_thread_lock
// file jack-stdout.c line 90
union anonymous io_thread_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// nframes
// file jack-stdout.c line 86
unsigned int nframes;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// overruns
// file jack-stdout.c line 96
signed long int overruns = (signed long int)0;
// ports
// file jack-stdout.c line 84
struct _jack_port **ports;
// rb
// file jack-stdout.c line 89
struct anonymous$0 *rb;
// run
// file jack-stdout.c line 95
volatile signed int run = 1;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// want_quiet
// file jack-stdout.c line 94
signed int want_quiet = 0;

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1;
}

// catchsig
// file jack-stdout.c line 298
void catchsig(signed int sig)
{
  signal(1, catchsig);
  if(want_quiet == 0)
    fprintf(stderr, "\n CAUGHT SIGNAL - shutting down.\n");

  run = 0;
  pthread_mutex_lock(&io_thread_lock);
  pthread_cond_signal(&data_ready);
  pthread_mutex_unlock(&io_thread_lock);
}

// io_thread
// file jack-stdout.c line 98
void * io_thread(void *arg)
{
  struct _thread_info *info = (struct _thread_info *)arg;
  unsigned int total_captured = (unsigned int)0;
  unsigned long int bytes_per_frame;
  signed int tmp_if_expr$1;
  if(!((2 & info->format) == 0))
    tmp_if_expr$1 = (info->format & 1) != 0 ? 4 : 1;

  else
    tmp_if_expr$1 = (info->format & 1) != 0 ? 3 : 2;
  bytes_per_frame = (const unsigned long int)(info->channels * (unsigned int)tmp_if_expr$1);
  void *framebuf;
  framebuf=malloc(bytes_per_frame);
  pthread_setcanceltype(1, (signed int *)(void *)0);
  pthread_mutex_lock(&io_thread_lock);
  signed int writerrors = 0;
  unsigned long int return_value_jack_ringbuffer_read_space$2;
  signed int return_value_fileno$3;
  signed int *return_value___errno_location$7;
  signed int *return_value___errno_location$6;
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  while(!(run == 0))
  {
    while(!(info->can_capture == 0))
    {
      return_value_jack_ringbuffer_read_space$2=jack_ringbuffer_read_space(rb);
      if(!(return_value_jack_ringbuffer_read_space$2 >= bytes_per_frame))
        break;

      if(info->duration >= 1u)
      {
        if(total_captured >= info->duration)
        {
          if(want_quiet == 0)
            fprintf(stderr, "io thread finished\n");

          goto done;
        }

      }

      jack_ringbuffer_read(rb, (char *)framebuf, bytes_per_frame);
      unsigned long int woff = (unsigned long int)0;
      signed long int rv;
      do
      {
        return_value_fileno$3=fileno(stdout);
        rv=write(return_value_fileno$3, framebuf + (signed long int)woff, bytes_per_frame);
        if((unsigned long int)rv == bytes_per_frame)
          break;

        if(!(rv >= 0l))
        {
          signed int *return_value___errno_location$8;
          return_value___errno_location$8=__errno_location();
          if(!(*return_value___errno_location$8 == 11))
          {
            return_value___errno_location$7=__errno_location();
            if(!(*return_value___errno_location$7 == 11))
            {
              return_value___errno_location$6=__errno_location();
              if(!(*return_value___errno_location$6 == 4))
              {
                if(want_quiet == 0)
                {
                  return_value___errno_location$4=__errno_location();
                  return_value_strerror$5=strerror(*return_value___errno_location$4);
                  fprintf(stderr, "FATAL: write error: %s\n", return_value_strerror$5);
                }

                goto done;
              }

            }

          }

        }

        if(rv >= 1l)
          woff = woff + (unsigned long int)rv;

        writerrors = writerrors + 1;
        if(writerrors >= 17)
        {
          writerrors = 0;
          if(want_quiet == 0)
            fprintf(stderr, "write error. retrying.\n");

        }

      }
      while((_Bool)1);
      total_captured = total_captured + 1u;
    }
    pthread_cond_wait(&data_ready, &io_thread_lock);
  }

done:
  ;
  pthread_mutex_unlock(&io_thread_lock);
  free(framebuf);
  return NULL;
}

// jack_shutdown
// file jack-stdout.c line 250
void jack_shutdown(void *arg)
{
  fprintf(stderr, "JACK shutdown\n");
  abort();
}

// main
// file jack-stdout.c line 333
signed int main(signed int argc, char **argv)
{
  struct _jack_client *client;
  struct _thread_info thread_info;
  enum JackStatus jstat;
  signed int c;
  memset((void *)&thread_info, 0, sizeof(struct _thread_info) /*48ul*/ );
  thread_info.rb_size = (unsigned int)(16384 * 4);
  thread_info.channels = (unsigned int)2;
  thread_info.duration = (unsigned int)0;
  thread_info.format = 0;
  const char *optstring = "d:e:b:S:BLhq";
  struct option long_options[9l] = { { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 },
    { .name="quiet", .has_arg=0, .flag=((signed int *)NULL), .val=113 },
    { .name="duration", .has_arg=1, .flag=((signed int *)NULL), .val=100 },
    { .name="encoding", .has_arg=1, .flag=((signed int *)NULL), .val=101 },
    { .name="little-endian", .has_arg=0, .flag=((signed int *)NULL), .val=76 },
    { .name="big-endian", .has_arg=0, .flag=((signed int *)NULL), .val=66 },
    { .name="bitdepth", .has_arg=1, .flag=((signed int *)NULL), .val=98 },
    { .name="bufsize", .has_arg=1, .flag=((signed int *)NULL), .val=83 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
  signed int return_value_atoi$1;
  unsigned long int return_value_strlen$6;
  signed int return_value_strncmp$7;
  unsigned long int return_value_strlen$4;
  signed int return_value_strncmp$5;
  unsigned long int return_value_strlen$2;
  signed int return_value_strncmp$3;
  signed int return_value_atoi$11;
  signed int return_value_atoi$10;
  signed int return_value_atoi$9;
  signed int return_value_atoi$8;
  signed int return_value_atoi$12;
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
      case 100:
      {
        return_value_atoi$1=atoi(optarg);
        thread_info.duration = (unsigned int)return_value_atoi$1;
        break;
      }
      case 101:
      {
        thread_info.format = thread_info.format & ~0x30;
        return_value_strlen$6=strlen(optarg);
        return_value_strncmp$7=strncmp(optarg, "floating-point", return_value_strlen$6);
        if(return_value_strncmp$7 == 0)
          thread_info.format = thread_info.format | 0x23;

        else
        {
          return_value_strlen$4=strlen(optarg);
          return_value_strncmp$5=strncmp(optarg, "unsigned-integer", return_value_strlen$4);
          if(return_value_strncmp$5 == 0)
            thread_info.format = thread_info.format | 0x10;

          else
          {
            return_value_strlen$2=strlen(optarg);
            return_value_strncmp$3=strncmp(optarg, "signed-integer", return_value_strlen$2);
            if(!(return_value_strncmp$3 == 0))
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
        return_value_atoi$11=atoi(optarg);
        if(return_value_atoi$11 == 24)
          thread_info.format = thread_info.format | 1;

        else
        {
          return_value_atoi$10=atoi(optarg);
          if(return_value_atoi$10 == 8)
            thread_info.format = thread_info.format | 2;

          else
          {
            return_value_atoi$9=atoi(optarg);
            if(return_value_atoi$9 == 32)
              thread_info.format = thread_info.format | 3;

            else
            {
              return_value_atoi$8=atoi(optarg);
              if(!(return_value_atoi$8 == 16))
              {
                fprintf(stderr, "invalid integer bit-depth. valid values: 8, 16, 24, 32.\n");
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
        return_value_atoi$12=atoi(optarg);
        thread_info.rb_size = (unsigned int)return_value_atoi$12;
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
  if(!((0x20 & thread_info.format) == 0))
    thread_info.format = thread_info.format | 3;

  if(optind >= argc)
  {
    fprintf(stderr, "At least one port/audio-channel must be given.\n");
    usage(argv[(signed long int)0], 1);
  }

  client=jack_client_open("jstdout", (enum JackOptions)JackNoStartServer, &jstat);
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
    unsigned int return_value_jack_get_sample_rate$13;
    return_value_jack_get_sample_rate$13=jack_get_sample_rate(thread_info.client);
    thread_info.duration = thread_info.duration * return_value_jack_get_sample_rate$13;
  }

  unsigned int return_value_jack_get_buffer_size$14;
  return_value_jack_get_buffer_size$14=jack_get_buffer_size(thread_info.client);
  if(!(thread_info.rb_size >> 1 >= return_value_jack_get_buffer_size$14))
  {
    fprintf(stderr, "Ringbuffer size needs to be at least twice jack period size\n");
    jack_client_close(thread_info.client);
    usage(argv[(signed long int)0], 1);
  }

  jack_set_process_callback(client, process, (void *)&thread_info);
  jack_on_shutdown(client, jack_shutdown, (void *)&thread_info);
  signed int return_value_jack_activate$15;
  return_value_jack_activate$15=jack_activate(client);
  if(!(return_value_jack_activate$15 == 0))
    fprintf(stderr, "cannot activate client");

  setup_ports((signed int)thread_info.channels, &argv[(signed long int)optind], &thread_info);
  pthread_create(&thread_info.thread_id, (const union pthread_attr_t *)(void *)0, io_thread, (void *)&thread_info);
  signal(1, catchsig);
  if(want_quiet == 0)
  {
    unsigned int return_value_jack_get_sample_rate$16;
    return_value_jack_get_sample_rate$16=jack_get_sample_rate(thread_info.client);
    fprintf(stderr, "%i channel%s, %s %sbit %s%s %s @%iSPS.\n", thread_info.channels, thread_info.channels > (unsigned int)1 ? "s" : "", thread_info.channels > (unsigned int)1 ? "interleaved" : "", (thread_info.format & 2) != 0 ? ((thread_info.format & 1) != 0 ? "32" : "8") : ((thread_info.format & 1) != 0 ? "24" : "16"), (thread_info.format & 0x20) != 0 ? "" : ((thread_info.format & 0x10) != 0 ? "unsigned-" : "signed-"), (thread_info.format & 0x20) != 0 ? "float" : "integer", (thread_info.format & 0x20) != 0 ? ((thread_info.format & 0x40) != 0 ? "non-native-endian" : "native-endian") : ((thread_info.format & 0x40) != 0 ? "big-endian" : "little-endian"), return_value_jack_get_sample_rate$16);
  }

  thread_info.can_capture = 1;
  pthread_join(thread_info.thread_id, (void **)(void *)0);
  if(want_quiet == 0 && overruns >= 1l)
    fprintf(stderr, "Note: there were %ld buffer overruns.\n", overruns);

  jack_client_close(client);
  jack_ringbuffer_free(rb);
  return 0;
}

// process
// file jack-stdout.c line 188
signed int process(unsigned int nframes, void *arg)
{
  signed int chn;
  unsigned long int i;
  struct _thread_info *info = (struct _thread_info *)arg;
  unsigned long int bytes_per_frame;
  signed int tmp_if_expr$1;
  if(!((2 & info->format) == 0))
    tmp_if_expr$1 = (info->format & 1) != 0 ? 4 : 1;

  else
    tmp_if_expr$1 = (info->format & 1) != 0 ? 3 : 2;
  bytes_per_frame = (const unsigned long int)(info->channels * (unsigned int)tmp_if_expr$1);
  _Bool tmp_if_expr$2;
  if(info->can_process == 0)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = !(info->can_capture != 0) ? (_Bool)1 : (_Bool)0;
  void *return_value_jack_port_get_buffer$3;
  signed int tmp_if_expr$5;
  double tmp_if_expr$6;
  double tmp_if_expr$9;
  signed int tmp_if_expr$8;
  signed int tmp_if_expr$11;
  signed int tmp_if_expr$10;
  _Bool tmp_if_expr$14;
  _Bool tmp_if_expr$15;
  signed int tmp_if_expr$13;
  signed int tmp_if_expr$12;
  _Bool tmp_if_expr$18;
  signed int tmp_if_expr$17;
  signed int tmp_if_expr$16;
  signed int tmp_if_expr$20;
  signed int tmp_if_expr$19;
  signed int tmp_if_expr$21;
  if(tmp_if_expr$2)
    return 0;

  else
  {
    chn = 0;
    for( ; !((unsigned int)chn >= info->channels); chn = chn + 1)
    {
      return_value_jack_port_get_buffer$3=jack_port_get_buffer(ports[(signed long int)chn], nframes);
      in[(signed long int)chn] = (float *)return_value_jack_port_get_buffer$3;
    }
    i = (unsigned long int)0;
    for( ; !(i >= (unsigned long int)nframes); i = i + 1ul)
    {
      unsigned long int return_value_jack_ringbuffer_write_space$4;
      return_value_jack_ringbuffer_write_space$4=jack_ringbuffer_write_space(rb);
      if(!(return_value_jack_ringbuffer_write_space$4 >= bytes_per_frame))
      {
        overruns = overruns + 1l;
        break;
      }

      chn = 0;
      for( ; !((unsigned int)chn >= info->channels); chn = chn + 1)
      {
        const float js = in[(signed long int)chn][(signed long int)i];
        if(!((0x20 & info->format) == 0))
        {
          float process$$1$$2$$1$$2$$1$$1$$d;
          if(!((0x40 & info->format) == 0))
          {
            char *flin = (char *)&js;
            char *fout = (char *)&process$$1$$2$$1$$2$$1$$1$$d;
            fout[(signed long int)0] = flin[(signed long int)3];
            fout[(signed long int)1] = flin[(signed long int)2];
            fout[(signed long int)2] = flin[(signed long int)1];
            fout[(signed long int)3] = flin[(signed long int)0];
          }

          else
            process$$1$$2$$1$$2$$1$$1$$d = js;
          if(!((2 & info->format) == 0))
            tmp_if_expr$5 = (info->format & 1) != 0 ? 4 : 1;

          else
            tmp_if_expr$5 = (info->format & 1) != 0 ? 3 : 2;
          jack_ringbuffer_write(rb, (const char *)(void *)&process$$1$$2$$1$$2$$1$$1$$d, (unsigned long int)tmp_if_expr$5);
        }

        else
        {
          signed int d;
          if(!((2 & info->format) == 0))
            tmp_if_expr$6 = (info->format & 1) != 0 ? 2147483648.0 : 128.0;

          else
            tmp_if_expr$6 = (info->format & 1) != 0 ? 8388608.0 : 32768.0;
          float return_value_rintf$7;
          return_value_rintf$7=rintf((float)((double)js * tmp_if_expr$6));
          if((0x10 & info->format) == 0)
            tmp_if_expr$9 = 0.0;

          else
          {
            if(!((2 & info->format) == 0))
              tmp_if_expr$8 = (info->format & 1) != 0 ? 2147483647 : 127;

            else
              tmp_if_expr$8 = (info->format & 1) != 0 ? 8388607 : 32767;
            tmp_if_expr$9 = (double)tmp_if_expr$8;
          }
          d = (const signed int)((double)(signed int)return_value_rintf$7 + tmp_if_expr$9);
          char bytes[4l];
          if(!((0x40 & info->format) == 0))
          {
            if(!((2 & info->format) == 0))
              tmp_if_expr$10 = (info->format & 1) != 0 ? 4 : 1;

            else
              tmp_if_expr$10 = (info->format & 1) != 0 ? 3 : 2;
            tmp_if_expr$11 = (tmp_if_expr$10 - 0) - 1;
          }

          else
            tmp_if_expr$11 = 0;
          bytes[(signed long int)tmp_if_expr$11] = (char)(unsigned char)(d & 0xff);
          if((3 & info->format) == 0)
            tmp_if_expr$14 = (_Bool)1;

          else
            tmp_if_expr$14 = (info->format & 3) == 1 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$14)
            tmp_if_expr$15 = (_Bool)1;

          else
            tmp_if_expr$15 = (info->format & 0x23) == 3 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$15)
          {
            if(!((0x40 & info->format) == 0))
            {
              if(!((2 & info->format) == 0))
                tmp_if_expr$12 = (info->format & 1) != 0 ? 4 : 1;

              else
                tmp_if_expr$12 = (info->format & 1) != 0 ? 3 : 2;
              tmp_if_expr$13 = (tmp_if_expr$12 - 1) - 1;
            }

            else
              tmp_if_expr$13 = 1;
            bytes[(signed long int)tmp_if_expr$13] = (char)(unsigned char)((d & 0xff00) >> 8 & 0xff);
          }

          if((3 & info->format) == 1)
            tmp_if_expr$18 = (_Bool)1;

          else
            tmp_if_expr$18 = (info->format & 0x23) == 3 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$18)
          {
            if(!((0x40 & info->format) == 0))
            {
              if(!((2 & info->format) == 0))
                tmp_if_expr$16 = (info->format & 1) != 0 ? 4 : 1;

              else
                tmp_if_expr$16 = (info->format & 1) != 0 ? 3 : 2;
              tmp_if_expr$17 = (tmp_if_expr$16 - 2) - 1;
            }

            else
              tmp_if_expr$17 = 2;
            bytes[(signed long int)tmp_if_expr$17] = (char)(unsigned char)((d & 0xff0000) >> 16 & 0xff);
          }

          if((0x23 & info->format) == 3)
          {
            if(!((0x40 & info->format) == 0))
            {
              if(!((2 & info->format) == 0))
                tmp_if_expr$19 = (info->format & 1) != 0 ? 4 : 1;

              else
                tmp_if_expr$19 = (info->format & 1) != 0 ? 3 : 2;
              tmp_if_expr$20 = (tmp_if_expr$19 - 3) - 1;
            }

            else
              tmp_if_expr$20 = 3;
            bytes[(signed long int)tmp_if_expr$20] = (char)(unsigned char)(((unsigned int)d & 0xff000000) >> 24 & (unsigned int)0xff);
          }

          if(!((2 & info->format) == 0))
            tmp_if_expr$21 = (info->format & 1) != 0 ? 4 : 1;

          else
            tmp_if_expr$21 = (info->format & 1) != 0 ? 3 : 2;
          jack_ringbuffer_write(rb, (const char *)(void *)&bytes, (unsigned long int)tmp_if_expr$21);
        }
      }
    }
    signed int return_value_pthread_mutex_trylock$22;
    return_value_pthread_mutex_trylock$22=pthread_mutex_trylock(&io_thread_lock);
    if(return_value_pthread_mutex_trylock$22 == 0)
    {
      pthread_cond_signal(&data_ready);
      pthread_mutex_unlock(&io_thread_lock);
    }

    return 0;
  }
}

// setup_ports
// file jack-stdout.c line 255
void setup_ports(signed int nports, char **source_names, struct _thread_info *info)
{
  unsigned int i;
  const unsigned long int in_size = (unsigned long int)nports * sizeof(float *) /*8ul*/ ;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)nports);
  ports = (struct _jack_port **)return_value_malloc$1;
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(in_size);
  in = (float **)return_value_malloc$2;
  signed int tmp_if_expr$3;
  if(!((2 & info->format) == 0))
    tmp_if_expr$3 = (info->format & 1) != 0 ? 4 : 1;

  else
    tmp_if_expr$3 = (info->format & 1) != 0 ? 3 : 2;
  rb=jack_ringbuffer_create((unsigned long int)((unsigned int)(nports * tmp_if_expr$3) * info->rb_size));
  memset((void *)in, 0, in_size);
  memset((void *)rb->buf, 0, rb->size);
  i = (unsigned int)0;
  for( ; !(i >= (unsigned int)nports); i = i + 1u)
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
  for( ; !(i >= (unsigned int)nports); i = i + 1u)
  {
    const char *return_value_jack_port_name$5;
    return_value_jack_port_name$5=jack_port_name(ports[(signed long int)i]);
    signed int return_value_jack_connect$6;
    return_value_jack_connect$6=jack_connect(info->client, source_names[(signed long int)i], return_value_jack_port_name$5);
    if(!(return_value_jack_connect$6 == 0))
    {
      const char *return_value_jack_port_name$4;
      return_value_jack_port_name$4=jack_port_name(ports[(signed long int)i]);
      fprintf(stderr, "cannot connect input port %s to %s\n", return_value_jack_port_name$4, source_names[(signed long int)i]);
    }

  }
  info->can_process = 1;
}

// usage
// file jack-stdout.c line 312
static void usage(const char *name, signed int status)
{
  fprintf(status != 0 ? stderr : stdout, "usage: %s [ OPTIONS ] port1 [ port2 ... ]\n", name);
  fprintf(status != 0 ? stderr : stdout, "jack-stdout captures audio-data from JACK and writes it to standard-output.\n");
  fprintf(status != 0 ? stderr : stdout, "OPTIONS:\n -h, --help               print this message\n -q, --quiet              inhibit usual output\n -b, --bitdepth {bits}    choose integer bit depth: 16, 24 (default: 16)\n -d, --duration {sec}     terminate after given time, <1: unlimited (default:0)\n -e, --encoding {format}  set output format: (default: signed)\n                          signed-integer, unsigned-integer, float\n -L, --little-endian      write little-endian integers or\n                          native-byte-order floats (default)\n -B, --big-endian         write big-endian integers or swapped-order floats\n -S, --bufsize {samples}  set buffer size (default: 64k)\n");
  exit(status);
}

