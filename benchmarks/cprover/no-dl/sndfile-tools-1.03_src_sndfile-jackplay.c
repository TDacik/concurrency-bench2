// tag-#anon#ST[*{S8}$S8$'buf'||U64'len'|]
// file /usr/include/jack/ringbuffer.h line 44
struct anonymous;

// tag-#anon#ST[*{S8}$S8$'buf'||vU64'write_ptr'||vU64'read_ptr'||U64'size'||U64'size_mask'||S32'mlocked'||U32'$pad0'|]
// file /usr/include/jack/ringbuffer.h line 51
struct anonymous$2;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$0;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$1;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$3;

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
// file /usr/include/jack/types.h line 72
struct _jack_client;

// tag-_jack_port
// file /usr/include/jack/types.h line 66
struct _jack_port;

// tag-_thread_info
// file src/sndfile-jackplay.c line 40
struct _thread_info;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// disk_thread
// file src/sndfile-jackplay.c line 101
static void * disk_thread(void *arg);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fmod
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 187
extern double fmod(double, double);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// jack_activate
// file /usr/include/jack/jack.h line 183
signed int jack_activate(struct _jack_client *);
// jack_client_close
// file /usr/include/jack/jack.h line 104
signed int jack_client_close(struct _jack_client *);
// jack_client_new
// file /usr/include/jack/jack.h line 97
struct _jack_client * jack_client_new(const char *);
// jack_connect
// file /usr/include/jack/jack.h line 848
signed int jack_connect(struct _jack_client *, const char *, const char *);
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
struct anonymous$2 * jack_ringbuffer_create(unsigned long int);
// jack_ringbuffer_free
// file /usr/include/jack/ringbuffer.h line 80
void jack_ringbuffer_free(struct anonymous$2 *);
// jack_ringbuffer_get_write_vector
// file /usr/include/jack/ringbuffer.h line 124
void jack_ringbuffer_get_write_vector(const struct anonymous$2 *, struct anonymous *);
// jack_ringbuffer_read
// file /usr/include/jack/ringbuffer.h line 137
unsigned long int jack_ringbuffer_read(struct anonymous$2 *, char *, unsigned long int);
// jack_ringbuffer_write_advance
// file /usr/include/jack/ringbuffer.h line 219
void jack_ringbuffer_write_advance(struct anonymous$2 *, unsigned long int);
// jack_set_process_callback
// file /usr/include/jack/jack.h line 342
signed int jack_set_process_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_shutdown
// file src/sndfile-jackplay.c line 146
static void jack_shutdown(void *arg);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// print_time
// file src/sndfile-jackplay.c line 152
static void print_time(unsigned int pos, signed int jack_sr);
// process
// file src/sndfile-jackplay.c line 60
static signed int process(unsigned int nframes, void *arg);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$1 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$1 *, union anonymous$3 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$3 *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous$3 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$3 *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 512
extern signed int pthread_setcanceltype(signed int, signed int *);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// sf_close
// file /usr/include/sndfile.h line 632
signed int sf_close(struct SNDFILE_tag *);
// sf_open
// file /usr/include/sndfile.h line 485
struct SNDFILE_tag * sf_open(const char *, signed int, struct SF_INFO *);
// sf_readf_float
// file /usr/include/sndfile.h line 602
signed long int sf_readf_float(struct SNDFILE_tag *, float *, signed long int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);

struct anonymous
{
  // buf
  char *buf;
  // len
  unsigned long int len;
};

struct anonymous$2
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

struct anonymous$0
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

union anonymous$1
{
  // __data
  struct anonymous$0 __data;
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

union anonymous$3
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
  // sndfile
  struct SNDFILE_tag *sndfile;
  // pos
  unsigned int pos;
  // client
  struct _jack_client *client;
  // channels
  unsigned int channels;
  // can_process
  volatile signed int can_process;
  // read_done
  volatile signed int read_done;
  // play_done
  volatile signed int play_done;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};


// data_ready
// file src/sndfile-jackplay.c line 52
union anonymous$1 data_ready = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// disk_thread_lock
// file src/sndfile-jackplay.c line 51
union anonymous$3 disk_thread_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// output_port
// file src/sndfile-jackplay.c line 55
static struct _jack_port **output_port;
// outs
// file src/sndfile-jackplay.c line 56
static float **outs;
// ringbuf
// file src/sndfile-jackplay.c line 54
static struct anonymous$2 *ringbuf;
// sample_size
// file src/sndfile-jackplay.c line 57
const unsigned long int sample_size = sizeof(float) /*4ul*/ ;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// disk_thread
// file src/sndfile-jackplay.c line 101
static void * disk_thread(void *arg)
{
  struct _thread_info *info = (struct _thread_info *)arg;
  signed long int buf_avail;
  signed long int read_frames;
  struct anonymous vec[2l];
  unsigned long int bytes_per_frame = sample_size * (unsigned long int)info->channels;
  pthread_setcanceltype(1, (signed int *)(void *)0);
  pthread_mutex_lock(&disk_thread_lock);
  while((_Bool)1)
  {
    jack_ringbuffer_get_write_vector(ringbuf, vec);
    read_frames = (signed long int)0;
    if(!(vec[0l].len == 0ul))
    {
      buf_avail = (signed long int)(vec[(signed long int)0].len / bytes_per_frame);
      read_frames=sf_readf_float(info->sndfile, (float *)vec[(signed long int)0].buf, buf_avail);
      if(!(vec[1l].len == 0ul))
      {
        buf_avail = (signed long int)(vec[(signed long int)1].len / bytes_per_frame);
        signed long int return_value_sf_readf_float$1;
        return_value_sf_readf_float$1=sf_readf_float(info->sndfile, (float *)vec[(signed long int)1].buf, buf_avail);
        read_frames = read_frames + return_value_sf_readf_float$1;
      }

    }

    if(read_frames == 0l)
      break;

    jack_ringbuffer_write_advance(ringbuf, (unsigned long int)read_frames * bytes_per_frame);
    info->can_process = 1;
    pthread_cond_wait(&data_ready, &disk_thread_lock);
  }
  info->read_done = 1;
  pthread_mutex_unlock(&disk_thread_lock);
  return NULL;
}

// jack_shutdown
// file src/sndfile-jackplay.c line 146
static void jack_shutdown(void *arg)
{
  (void)arg;
  exit(1);
}

// main
// file src/sndfile-jackplay.c line 159
signed int main(signed int narg, char **args)
{
  struct SNDFILE_tag *sndfile;
  struct SF_INFO sndfileinfo;
  struct _jack_client *client;
  struct _thread_info info;
  signed int i;
  signed int jack_sr;
  if(!(narg >= 2))
  {
    fprintf(stderr, "no soundfile given\n");
    return 1;
  }

  else
  {
    client=jack_client_new("jackplay");
    if(client == ((struct _jack_client *)NULL))
    {
      fprintf(stderr, "Jack server not running?\n");
      return 1;
    }

    else
    {
      unsigned int return_value_jack_get_sample_rate$1;
      return_value_jack_get_sample_rate$1=jack_get_sample_rate(client);
      jack_sr = (signed int)return_value_jack_get_sample_rate$1;
      sndfileinfo.format = 0;
      sndfile=sf_open(args[(signed long int)1], 16, &sndfileinfo);
      if(sndfile == ((struct SNDFILE_tag *)NULL))
      {
        fprintf(stderr, "Could not open soundfile '%s'\n", args[(signed long int)1]);
        return 1;
      }

      else
      {
        fprintf(stderr, "Channels    : %d\nSample rate : %d Hz\nDuration    : ", sndfileinfo.channels, sndfileinfo.samplerate);
        print_time((unsigned int)sndfileinfo.frames, sndfileinfo.samplerate);
        fprintf(stderr, "\n");
        if(!(sndfileinfo.samplerate == jack_sr))
          fprintf(stderr, "Warning: samplerate of soundfile (%d Hz) does not match jack server (%d Hz).\n", sndfileinfo.samplerate, jack_sr);

        memset((void *)&info, 0, sizeof(struct _thread_info) /*48ul*/ );
        info.can_process = 0;
        info.read_done = 0;
        info.play_done = 0;
        info.sndfile = sndfile;
        info.channels = (unsigned int)sndfileinfo.channels;
        info.client = client;
        info.pos = (unsigned int)0;
        jack_set_process_callback(client, process, (void *)&info);
        jack_on_shutdown(client, jack_shutdown, NULL);
        void *return_value_calloc$2;
        return_value_calloc$2=calloc((unsigned long int)sndfileinfo.channels, sizeof(struct _jack_port *) /*8ul*/ );
        output_port = (struct _jack_port **)return_value_calloc$2;
        void *return_value_calloc$3;
        return_value_calloc$3=calloc((unsigned long int)sndfileinfo.channels, sizeof(float *) /*8ul*/ );
        outs = (float **)return_value_calloc$3;
        i = 0;
        for( ; !(i >= sndfileinfo.channels); i = i + 1)
        {
          char name[16l];
          snprintf(name, sizeof(char [16l]) /*16ul*/ , "out_%d", i + 1);
          output_port[(signed long int)i]=jack_port_register(client, name, "32 bit float mono audio", (unsigned long int)2, (unsigned long int)0);
        }
        ringbuf=jack_ringbuffer_create(sizeof(float) /*4ul*/  * (unsigned long int)(1 << 16));
        memset((void *)ringbuf->buf, 0, ringbuf->size);
        signed int return_value_jack_activate$4;
        return_value_jack_activate$4=jack_activate(client);
        if(!(return_value_jack_activate$4 == 0))
        {
          fprintf(stderr, "Cannot activate client.\n");
          return 1;
        }

        else
        {
          i = 0;
          for( ; !(i >= sndfileinfo.channels); i = i + 1)
          {
            char main$$1$$6$$1$$name[64l];
            snprintf(main$$1$$6$$1$$name, sizeof(char [64l]) /*64ul*/ , "alsa_pcm:playback_%d", i + 1);
            const char *return_value_jack_port_name$5;
            return_value_jack_port_name$5=jack_port_name(output_port[(signed long int)i]);
            signed int return_value_jack_connect$6;
            return_value_jack_connect$6=jack_connect(client, return_value_jack_port_name$5, main$$1$$6$$1$$name);
            if(!(return_value_jack_connect$6 == 0))
              fprintf(stderr, "Cannot connect output port %d (%s).\n", i, (const void *)main$$1$$6$$1$$name);

          }
          pthread_create(&info.thread_id, (const union pthread_attr_t *)(void *)0, disk_thread, (void *)&info);
          while(info.play_done == 0)
          {
            fprintf(stderr, "\r-> ");
            print_time(info.pos, jack_sr);
            fflush(stdout);
            usleep((unsigned int)50000);
          }
          jack_client_close(client);
          jack_ringbuffer_free(ringbuf);
          sf_close(sndfile);
          free((void *)outs);
          free((void *)output_port);
          puts("");
          return 0;
        }
      }
    }
  }
}

// print_time
// file src/sndfile-jackplay.c line 152
static void print_time(unsigned int pos, signed int jack_sr)
{
  float sec = (float)((double)pos / (1.0 * (double)jack_sr));
  signed int min = (signed int)((double)sec / 60.0);
  double return_value_fmod$1;
  return_value_fmod$1=fmod((double)sec, 60.0);
  fprintf(stderr, "%02d:%05.2f", min, return_value_fmod$1);
}

// process
// file src/sndfile-jackplay.c line 60
static signed int process(unsigned int nframes, void *arg)
{
  struct _thread_info *info = (struct _thread_info *)arg;
  const signed long int info$array_size0 = (signed long int)info->channels;
  float buf[info$array_size0];
  unsigned int i;
  unsigned int n;
  void *return_value_jack_port_get_buffer$1;
  if(info->can_process == 0)
    return 0;

  else
  {
    n = (unsigned int)0;
    for( ; !(n >= info->channels); n = n + 1u)
    {
      return_value_jack_port_get_buffer$1=jack_port_get_buffer(output_port[(signed long int)n], nframes);
      outs[(signed long int)n] = (float *)return_value_jack_port_get_buffer$1;
    }
    i = (unsigned int)0;
    for( ; !(i >= nframes); i = i + 1u)
    {
      unsigned long int read_cnt;
      read_cnt=jack_ringbuffer_read(ringbuf, (char *)(void *)buf, sample_size * (unsigned long int)info->channels);
      if(read_cnt == 0ul)
      {
        if(!(info->read_done == 0))
        {
          info->play_done = 1;
          return 0;
        }

      }

      info->pos = info->pos + (unsigned int)(read_cnt / (sample_size * (unsigned long int)info->channels));
      n = (unsigned int)0;
      for( ; !(n >= info->channels); n = n + 1u)
        outs[(signed long int)n][(signed long int)i] = buf[(signed long int)n];
    }
    signed int return_value_pthread_mutex_trylock$2;
    return_value_pthread_mutex_trylock$2=pthread_mutex_trylock(&disk_thread_lock);
    if(return_value_pthread_mutex_trylock$2 == 0)
    {
      pthread_cond_signal(&data_ready);
      pthread_mutex_unlock(&disk_thread_lock);
    }

    return 0;
  }
}

