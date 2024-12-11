// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$2;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$0;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$1;

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

// tag-buf_list
// file dvconnect.c line 116
struct buf_list;

// tag-buf_node
// file dvconnect.c line 110
struct buf_node;

// tag-poptContext_s
// file /usr/include/popt.h line 200
struct poptContext_s;

// tag-poptOption
// file /usr/include/popt.h line 125
struct poptOption;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sched_param
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 72
struct sched_param;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-video1394_mmap
// file dvconnect.c line 57
struct video1394_mmap;

// tag-video1394_mmap_v2
// file dvconnect.c line 69
struct video1394_mmap_v2;

// tag-video1394_queue_variable
// file dvconnect.c line 84
struct video1394_queue_variable;

// tag-video1394_wait
// file dvconnect.c line 91
struct video1394_wait;

#ifndef NULL
#define NULL ((void*)0)
#endif

// capture_raw
// file dvconnect.c line 310
signed int capture_raw(const char *filename, signed int channel, signed int nbuffers, signed int start_frame, signed int end_frame, signed int verbose_mode);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fill_buf_queue
// file dvconnect.c line 505
void fill_buf_queue(signed int fire);
// fill_buffer
// file dvconnect.c line 548
static signed int fill_buffer(unsigned char *targetbuf, unsigned int *packet_sizes);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// get_free_block
// file dvconnect.c line 165
struct buf_node * get_free_block();
// handle_packet
// file dvconnect.c line 183
void handle_packet(unsigned char *data, signed int len);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// malloc
// file /usr/include/malloc.h line 38
extern void * malloc(unsigned long int);
// memcpy
// file dvconnect.c line 264 function handle_packet
signed int memcpy(void);
// memset
// file dvconnect.c line 401 function capture_raw
signed int memset(void);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 57
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pop_front
// file dvconnect.c line 144
struct buf_node * pop_front(struct buf_list *l);
// poptBadOption
// file /usr/include/popt.h line 354
const char * poptBadOption(struct poptContext_s *, unsigned int);
// poptGetArg
// file /usr/include/popt.h line 326
const char * poptGetArg(struct poptContext_s *);
// poptGetContext
// file /usr/include/popt.h line 261
struct poptContext_s * poptGetContext(const char *, signed int, const char **, struct poptOption *, unsigned int);
// poptGetNextOpt
// file /usr/include/popt.h line 307
signed int poptGetNextOpt(struct poptContext_s *);
// poptSetOtherOptionHelp
// file /usr/include/popt.h line 578
void poptSetOtherOptionHelp(struct poptContext_s *, const char *);
// poptStrerror
// file /usr/include/popt.h line 539
const char * poptStrerror(const signed int);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous *, const union anonymous$0 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous *, union anonymous$1 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$1 *, const union anonymous$0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$1 *);
// push_back
// file dvconnect.c line 130
void push_back(struct buf_list *l, struct buf_node *elem);
// read_frame
// file dvconnect.c line 477
signed int read_frame(struct _IO_FILE *fp, unsigned char *frame, signed int *isPAL);
// read_in_thread
// file dvconnect.c line 530
void * read_in_thread(void *arg);
// rt_raisepri
// file dvconnect.c line 836
signed int rt_raisepri(signed int pri);
// sched_get_priority_max
// file /usr/include/sched.h line 68
extern signed int sched_get_priority_max(signed int);
// sched_setscheduler
// file /usr/include/sched.h line 58
extern signed int sched_setscheduler(signed int, signed int, struct sched_param *);
// send_raw
// file dvconnect.c line 652
signed int send_raw(const char *filename, signed int channel, signed int nbuffers, signed int start_frame, signed int end_frame, signed int verbose_mode, const char *underrun_data_filename);
// setpriority
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 97
extern signed int setpriority(signed int, unsigned int, signed int);
// sig_int_recv_handler
// file dvconnect.c line 302
void sig_int_recv_handler(signed int signum);
// sig_int_send_handler
// file dvconnect.c line 496
void sig_int_send_handler(signed int signum);
// strcmp
// file dvconnect.c line 326 function capture_raw
signed int strcmp(void);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// write_out_thread
// file dvconnect.c line 286
void * write_out_thread(void *arg);

struct anonymous$2
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
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous
{
  // __data
  struct anonymous$2 __data;
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

union anonymous$1
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

struct buf_list
{
  // first
  struct buf_node *first;
  // last
  struct buf_node *last;
  // usage
  signed int usage;
};

struct buf_node
{
  // data
  unsigned char data[144000l];
  // usage
  signed int usage;
  // next
  struct buf_node *next;
};

struct poptOption
{
  // longName
  const char *longName;
  // shortName
  char shortName;
  // argInfo
  unsigned int argInfo;
  // arg
  void *arg;
  // val
  signed int val;
  // descrip
  const char *descrip;
  // argDescrip
  const char *argDescrip;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct sched_param
{
  // __sched_priority
  signed int __sched_priority;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct video1394_mmap
{
  // channel
  unsigned int channel;
  // sync_tag
  unsigned int sync_tag;
  // nb_buffers
  unsigned int nb_buffers;
  // buf_size
  unsigned int buf_size;
  // packet_size
  unsigned int packet_size;
  // fps
  unsigned int fps;
  // flags
  unsigned int flags;
};

struct video1394_mmap_v2
{
  // channel
  unsigned int channel;
  // sync_tag
  unsigned int sync_tag;
  // nb_buffers
  unsigned int nb_buffers;
  // buf_size
  unsigned int buf_size;
  // packet_size
  unsigned int packet_size;
  // fps
  unsigned int fps;
  // syt_offset
  unsigned int syt_offset;
  // flags
  unsigned int flags;
};

struct video1394_queue_variable
{
  // channel
  unsigned int channel;
  // buffer
  unsigned int buffer;
  // packet_sizes
  unsigned int *packet_sizes;
};

struct video1394_wait
{
  // channel
  unsigned int channel;
  // buffer
  unsigned int buffer;
  // filltime
  struct timeval filltime;
};


// broken_frames
// file dvconnect.c line 102
static signed int broken_frames = 0;
// buf_queue
// file dvconnect.c line 123
static struct buf_list buf_queue = { .first=(struct buf_node *)(void *)0, .last=(struct buf_node *)(void *)0, .usage=0 };
// cap_num_frames
// file dvconnect.c line 99
static signed int cap_num_frames = 0xfffffff;
// cap_start_frame
// file dvconnect.c line 98
static signed int cap_start_frame = 0;
// cap_verbose_mode
// file dvconnect.c line 100
static signed int cap_verbose_mode;
// cip_d_ntsc
// file dvconnect.c line 24
static signed long int cip_d_ntsc = (signed long int)38400;
// cip_d_pal
// file dvconnect.c line 26
static signed long int cip_d_pal = (signed long int)16;
// cip_n_ntsc
// file dvconnect.c line 23
static signed long int cip_n_ntsc = (signed long int)2436;
// cip_n_pal
// file dvconnect.c line 25
static signed long int cip_n_pal = (signed long int)1;
// dst_fp
// file dvconnect.c line 181
static struct _IO_FILE *dst_fp;
// file_io_thread
// file dvconnect.c line 128
static unsigned long int file_io_thread;
// frames_captured
// file dvconnect.c line 101
static signed int frames_captured = 0;
// free_list
// file dvconnect.c line 122
static struct buf_list free_list = { .first=(struct buf_node *)(void *)0, .last=(struct buf_node *)(void *)0, .usage=0 };
// is_eof
// file dvconnect.c line 470
static signed int is_eof = 0;
// max_buffer_blocks
// file dvconnect.c line 108
static signed int max_buffer_blocks = 25 * 10;
// poptHelpOptions
// file /usr/include/popt.h line 183
extern struct poptOption poptHelpOptions[];
// queue_mutex
// file dvconnect.c line 125
static union anonymous$1 queue_mutex;
// src_fp
// file dvconnect.c line 469
static struct _IO_FILE *src_fp;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// syt_offset
// file dvconnect.c line 27
static signed long int syt_offset = (signed long int)11000;
// underrun_data_frame
// file dvconnect.c line 471
static unsigned char *underrun_data_frame = (unsigned char *)(void *)0;
// underrun_frame_ispal
// file dvconnect.c line 472
static signed int underrun_frame_ispal = 0;
// video1394_version
// file dvconnect.c line 28
static signed int video1394_version = 2;
// wakeup_cond
// file dvconnect.c line 127
static union anonymous wakeup_cond;
// wakeup_mutex
// file dvconnect.c line 126
static union anonymous$1 wakeup_mutex;
// wakeup_rev_cond
// file dvconnect.c line 475
static union anonymous wakeup_rev_cond;
// wakeup_rev_mutex
// file dvconnect.c line 474
static union anonymous$1 wakeup_rev_mutex;

// capture_raw
// file dvconnect.c line 310
signed int capture_raw(const char *filename, signed int channel, signed int nbuffers, signed int start_frame, signed int end_frame, signed int verbose_mode)
{
  signed int viddev;
  unsigned char *recv_buf;
  struct video1394_mmap v;
  struct video1394_mmap_v2 v2;
  struct video1394_wait w;
  signed int unused_buffers;
  unsigned char outbuf[131072l];
  signed int outbuf_used = 0;
  cap_start_frame = start_frame;
  cap_num_frames = end_frame - start_frame;
  cap_verbose_mode = verbose_mode;
  _Bool tmp_if_expr$2;
  signed int return_value_strcmp$1;
  if(filename == ((const char *)NULL))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_strcmp$1=strcmp(filename, (const void *)"-");
    tmp_if_expr$2 = return_value_strcmp$1 == 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$2)
    dst_fp = stdout;

  else
  {
    dst_fp=fopen(filename, "rb");
    if(dst_fp == ((struct _IO_FILE *)NULL))
    {
      perror("fopen input file");
      return -1;
    }

  }
  viddev=open("/dev/video1394", 02);
  signed int return_value_ioctl$3;
  signed int return_value_ioctl$4;
  signed int tmp_post$6;
  signed int tmp_post$9;
  signed int tmp_post$10;
  if(!(viddev >= 0))
  {
    perror("open /dev/video1394");
    return -1;
  }

  else
  {
    v.channel = (unsigned int)channel;
    v.sync_tag = (unsigned int)0;
    v.nb_buffers = (unsigned int)nbuffers;
    v.buf_size = (unsigned int)(320 * 512);
    v.packet_size = (unsigned int)512;
    v.flags = (unsigned int)0x00000002;
    w.channel = v.channel;
    switch(video1394_version)
    {
      case 1:
      {
        return_value_ioctl$3=ioctl(viddev, (unsigned long int)0, &v);
        if(!(return_value_ioctl$3 >= 0))
        {
          perror("VIDEO1394_LISTEN_CHANNEL");
          return -1;
        }

        break;
      }
      case 2:
      {
        v2.channel = v.channel;
        v2.sync_tag = v.sync_tag;
        v2.nb_buffers = v.nb_buffers;
        v2.buf_size = v.buf_size;
        v2.packet_size = v.packet_size;
        v2.syt_offset = (unsigned int)syt_offset;
        v2.flags = v.flags;
        return_value_ioctl$4=ioctl(viddev, (unsigned long int)0, &v2);
        if(!(return_value_ioctl$4 >= 0))
        {
          perror("VIDEO1394_LISTEN_CHANNEL");
          return -1;
        }

      }
    }
    void *return_value_mmap$5;
    return_value_mmap$5=mmap(NULL, (unsigned long int)(v.nb_buffers * v.buf_size), 0x1 | 0x2, 0x01, viddev, (signed long int)0);
    recv_buf = (unsigned char *)return_value_mmap$5;
    if(recv_buf == (unsigned char *)-1)
    {
      perror("mmap videobuffer");
      return -1;
    }

    else
    {
      pthread_mutex_init(&queue_mutex, (const union anonymous$0 *)(void *)0);
      pthread_mutex_init(&wakeup_mutex, (const union anonymous$0 *)(void *)0);
      pthread_cond_init(&wakeup_cond, (const union anonymous$0 *)(void *)0);
      pthread_create(&file_io_thread, (const union pthread_attr_t *)(void *)0, write_out_thread, (void *)0);
      unused_buffers = (signed int)v.nb_buffers;
      w.buffer = (unsigned int)0;
      while(!(cap_num_frames == 0))
      {
        struct video1394_wait wcopy;
        unsigned char *curr;
        signed int ofs;
        do
        {
          tmp_post$6 = unused_buffers;
          unused_buffers = unused_buffers - 1;
          if(tmp_post$6 == 0)
            break;

          unsigned char *capture_raw$$1$$6$$1$$curr = recv_buf + (signed long int)(v.buf_size * w.buffer);
          memset(capture_raw$$1$$6$$1$$curr, 0, v.buf_size);
          wcopy = w;
          signed int return_value_ioctl$7;
          return_value_ioctl$7=ioctl(viddev, (unsigned long int)2, &wcopy);
          if(!(return_value_ioctl$7 >= 0))
            perror("VIDEO1394_LISTEN_QUEUE_BUFFER");

          w.buffer = w.buffer + 1u;
          w.buffer = w.buffer % v.nb_buffers;
        }
        while((_Bool)1);
        wcopy = w;
        signed int return_value_ioctl$8;
        return_value_ioctl$8=ioctl(viddev, (unsigned long int)3, &wcopy);
        if(!(return_value_ioctl$8 >= 0))
          perror("VIDEO1394_LISTEN_WAIT_BUFFER");

        curr = recv_buf + (signed long int)(v.buf_size * w.buffer);
        ofs = 0;
        while(!(ofs >= 320))
        {
          for( ; !(ofs >= 320) && !(outbuf_used >= 4); outbuf[(signed long int)tmp_post$9] = curr[(signed long int)tmp_post$10])
          {
            tmp_post$9 = outbuf_used;
            outbuf_used = outbuf_used + 1;
            tmp_post$10 = ofs;
            ofs = ofs + 1;
          }
          if(!(ofs == 320))
          {
            signed int len = (signed int)outbuf[(signed long int)2] + ((signed int)outbuf[(signed long int)3] << 8) + 8;
            if(len + ofs + -outbuf_used >= 163841)
            {
              memcpy(outbuf + (signed long int)outbuf_used, curr + (signed long int)ofs, 320 * 512 - ofs);
              outbuf_used = outbuf_used + (320 * 512 - ofs);
              ofs = 320 * 512;
            }

            else
            {
              memcpy(outbuf + (signed long int)outbuf_used, curr + (signed long int)ofs, len - outbuf_used);
              ofs = ofs + (len - outbuf_used);
              outbuf_used = 0;
              handle_packet(outbuf, len - 8);
            }
          }

        }
        unused_buffers = 1;
      }
      if(!(broken_frames == 0))
        fprintf(stderr, "\nCaptured %d broken frames!\n", broken_frames);

      munmap((void *)recv_buf, (unsigned long int)(v.nb_buffers * v.buf_size));
      signed int return_value_ioctl$11;
      return_value_ioctl$11=ioctl(viddev, (unsigned long int)1, &v.channel);
      if(!(return_value_ioctl$11 >= 0))
        perror("VIDEO1394_UNLISTEN_CHANNEL");

      close(viddev);
      pthread_join(file_io_thread, (void **)(void *)0);
      if(!(dst_fp == stdout))
        fclose(dst_fp);

      return 0;
    }
  }
}

// fill_buf_queue
// file dvconnect.c line 505
void fill_buf_queue(signed int fire)
{
  struct buf_node *f;
  do
  {
    f=get_free_block();
    if(f == ((struct buf_node *)NULL))
      break;

    signed int isPAL;
    signed int return_value_read_frame$1;
    return_value_read_frame$1=read_frame(src_fp, f->data, &isPAL);
    if(!(return_value_read_frame$1 >= 0))
    {
      is_eof = 1;
      push_back(&free_list, f);
      goto __CPROVER_DUMP_L7;
    }

    if(!(isPAL == 0))
      f->usage = 144000;

    else
      f->usage = 120000;
    push_back(&buf_queue, f);
    if(!(fire == 0))
    {
      pthread_mutex_lock(&wakeup_rev_mutex);
      pthread_cond_signal(&wakeup_rev_cond);
      pthread_mutex_unlock(&wakeup_rev_mutex);
    }

  }
  while((_Bool)1);

__CPROVER_DUMP_L7:
  ;
}

// fill_buffer
// file dvconnect.c line 548
static signed int fill_buffer(unsigned char *targetbuf, unsigned int *packet_sizes)
{
  unsigned char *frame;
  struct buf_node *f_node;
  signed int isPAL;
  signed int frame_size;
  unsigned long int vdata = (unsigned long int)0;
  signed int i;
  f_node=pop_front(&buf_queue);
  unsigned char *tmp_post$1;
  unsigned char *tmp_post$2;
  unsigned char *tmp_post$3;
  unsigned char *tmp_post$4;
  unsigned char *tmp_post$5;
  unsigned char *tmp_post$6;
  unsigned char *tmp_post$7;
  unsigned char *tmp_post$8;
  unsigned int *tmp_post$9;
  unsigned int *tmp_post$10;
  if(f_node == ((struct buf_node *)NULL))
  {
    if(is_eof == 0)
    {
      if(underrun_data_frame == ((unsigned char *)NULL))
      {
        fprintf(stderr, "Buffer underrun (raising buffer limit +25 => %d)!\n", max_buffer_blocks);
        max_buffer_blocks = max_buffer_blocks + 25;
        pthread_mutex_lock(&wakeup_rev_mutex);
        pthread_cond_wait(&wakeup_rev_cond, &wakeup_rev_mutex);
        pthread_mutex_unlock(&wakeup_rev_mutex);
        f_node=pop_front(&buf_queue);
      }

      else
      {
        f_node=get_free_block();
        if(!(underrun_frame_ispal == 0))
          f_node->usage = 144000;

        else
          f_node->usage = 120000;
        memcpy((const void *)f_node->data, underrun_data_frame, f_node->usage);
      }
      goto __CPROVER_DUMP_L6;
    }

    return -1;
  }

  else
  {

  __CPROVER_DUMP_L6:
    ;
    frame = f_node->data;
    frame_size = f_node->usage;
    isPAL = (signed int)(frame_size == 144000);
    static unsigned int cip_d = (unsigned int)0;
    static unsigned int cip_n = (unsigned int)0;
    static unsigned int cip_counter = (unsigned int)0;
    if(cip_counter == 0u)
    {
      if(isPAL == 0)
      {
        cip_n = (unsigned int)cip_n_ntsc;
        cip_d = (unsigned int)cip_d_ntsc;
      }

      else
      {
        cip_n = (unsigned int)cip_n_pal;
        cip_d = (unsigned int)cip_d_pal;
      }
      cip_counter = cip_n;
    }

    i = 0;
    for( ; !(i >= 320) && !(vdata >= (unsigned long int)frame_size); i = i + 1)
    {
      unsigned char *p = targetbuf;
      signed int want_sync = 0;
      cip_counter = cip_counter + cip_n;
      if(!(cip_d >= cip_counter))
      {
        want_sync = 1;
        cip_counter = cip_counter - cip_d;
      }

      tmp_post$1 = p;
      p = p + 1l;
      *tmp_post$1 = (unsigned char)0x01;
      tmp_post$2 = p;
      p = p + 1l;
      *tmp_post$2 = (unsigned char)0x78;
      tmp_post$3 = p;
      p = p + 1l;
      *tmp_post$3 = (unsigned char)0x00;
      tmp_post$4 = p;
      p = p + 1l;
      static unsigned char continuity_counter = (unsigned char)0;
      *tmp_post$4 = continuity_counter;
      tmp_post$5 = p;
      p = p + 1l;
      *tmp_post$5 = (unsigned char)0x80;
      tmp_post$6 = p;
      p = p + 1l;
      *tmp_post$6 = (unsigned char)(isPAL != 0 ? 0x80 : 0x00);
      tmp_post$7 = p;
      p = p + 1l;
      *tmp_post$7 = (unsigned char)0xff;
      tmp_post$8 = p;
      p = p + 1l;
      *tmp_post$8 = (unsigned char)0xff;
      if(want_sync == 0)
      {
        continuity_counter = continuity_counter + 1;
        memcpy(p, frame + (signed long int)vdata, 480);
        p = p + (signed long int)480;
        vdata = vdata + (unsigned long int)480;
      }

      tmp_post$9 = packet_sizes;
      packet_sizes = packet_sizes + 1l;
      *tmp_post$9 = (unsigned int)(p - targetbuf);
      targetbuf = targetbuf + (signed long int)512;
    }
    tmp_post$10 = packet_sizes;
    packet_sizes = packet_sizes + 1l;
    *tmp_post$10 = (unsigned int)0;
    push_back(&free_list, f_node);
    pthread_mutex_lock(&wakeup_mutex);
    pthread_cond_signal(&wakeup_cond);
    pthread_mutex_unlock(&wakeup_mutex);
    return 0;
  }
}

// get_free_block
// file dvconnect.c line 165
struct buf_node * get_free_block()
{
  struct buf_node *f;
  f=pop_front(&free_list);
  if(f == ((struct buf_node *)NULL))
  {
    if(buf_queue.usage >= max_buffer_blocks)
      return (struct buf_node *)(void *)0;

    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct buf_node) /*144016ul*/ );
    f = (struct buf_node *)return_value_malloc$1;
  }

  return f;
}

// handle_packet
// file dvconnect.c line 183
void handle_packet(unsigned char *data, signed int len)
{
  signed int start_of_frame = 0;
  switch(len)
  {
    case 488:
    {
      if((signed int)data[12l] == 0x1f)
      {
        if((signed int)data[13l] == 0x07)
          start_of_frame = 1;

      }

      static unsigned char *p_out = (unsigned char *)(void *)0;
      static struct buf_node *f = (struct buf_node *)(void *)0;
      static signed int frame_size = 0;
      static signed int found_first_block = 0;
      if(!(start_of_frame == 0))
      {
        signed int frame_broken = 0;
        if(found_first_block == 0)
        {
          if(cap_start_frame == 0)
            found_first_block = 1;

          else
          {
            cap_start_frame = cap_start_frame - 1;
            if(!(cap_verbose_mode == 0))
              fprintf(stderr, "Skipped frame %8d\r", cap_start_frame);

            goto __CPROVER_DUMP_L20;
          }
          frame_size = 0;
        }

        if(cap_num_frames == 0)
          goto __CPROVER_DUMP_L20;

        cap_num_frames = cap_num_frames - 1;
        static signed int isPAL = 0;
        if(!(frame_size == 0))
        {
          if(isPAL == 0 && !(frame_size == 120000) || !(frame_size == 144000) && !(isPAL == 0))
          {
            fprintf(stderr, "Broken frame %8d (size = %d)!\n", frames_captured, frame_size);
            broken_frames = broken_frames + 1;
            frame_broken = 1;
          }

          if(!(cap_verbose_mode == 0))
            fprintf(stderr, "Captured frame %8d\r", frames_captured);

          frames_captured = frames_captured + 1;
        }

        isPAL = (signed int)data[(signed long int)15] & 0x80;
        if(frame_broken == 0 && !(f == ((struct buf_node *)NULL)))
        {
          f->usage = frame_size;
          push_back(&buf_queue, f);
          pthread_mutex_lock(&wakeup_mutex);
          pthread_cond_signal(&wakeup_cond);
          pthread_mutex_unlock(&wakeup_mutex);
          f = (struct buf_node *)(void *)0;
        }

        if(f == ((struct buf_node *)NULL))
        {
          f=get_free_block();
          if(f == ((struct buf_node *)NULL))
          {
            fprintf(stderr, "Buffer overrun: Frame discarded!\n");
            broken_frames = broken_frames + 1;
          }

        }

        if(!(f == ((struct buf_node *)NULL)))
          p_out = f->data;

        frame_size = 0;
      }

      if(!(f == ((struct buf_node *)NULL)) && !(cap_num_frames == 0) && !(found_first_block == 0))
      {
        if(!(frame_size >= 144000))
        {
          memcpy(p_out, data + (signed long int)12, 480);
          p_out = p_out + (signed long int)480;
          frame_size = frame_size + 480;
        }

        else
        {
          fprintf(stderr, "Frame buffer overrun: Frame discarded!\n");
          broken_frames = broken_frames + 1;
          p_out = f->data;
          frame_size = 0;
        }
      }

      break;
    }
    case 8:
      break;
    default:
      fprintf(stderr, "Penguin on the bus? (packet size = %d!)\n", len);
  }

__CPROVER_DUMP_L20:
  ;
}

// main
// file dvconnect.c line 879
signed int main(signed int argc, const char **argv)
{
  const char *filename;
  signed int verbose_mode = 0;
  signed int send_mode = 0;
  signed int channel = 63;
  signed int buffers = 8;
  signed int start = 0;
  signed int end = 0xfffffff;
  const char *underrun_data = (const char *)(void *)0;
  struct poptOption option_table[15l];
  signed int rc;
  struct poptContext_s *optCon;
  option_table[(signed long int)0] = (struct poptOption){ .longName="version", .shortName=0, .argInfo=0u, .arg=NULL,
    .val=118, .descrip="show dvconnect version number", .argDescrip=((const char *)NULL) };
  option_table[(signed long int)1] = (struct poptOption){ .longName="send", .shortName=(char)115, .argInfo=0u,
    .arg=(void *)&send_mode, .val=0,
    .descrip="send data instead of capturing", .argDescrip=((const char *)NULL) };
  option_table[(signed long int)2] = (struct poptOption){ .longName="verbose", .shortName=(char)118, .argInfo=0u,
    .arg=(void *)&verbose_mode, .val=0,
    .descrip="show status information while receiving / sending", .argDescrip=((const char *)NULL) };
  option_table[(signed long int)3] = (struct poptOption){ .longName="channel", .shortName=(char)99, .argInfo=2U,
    .arg=(void *)&channel, .val=0, .descrip="channel to send / receive on (range: 0 - 63, default = 63)",
    .argDescrip="number" };
  option_table[(signed long int)4] = (struct poptOption){ .longName="kbuffers", .shortName=(char)107, .argInfo=2U,
    .arg=(void *)&buffers, .val=0, .descrip="number of kernel video frame buffers to use. default = 8",
    .argDescrip="number" };
  option_table[(signed long int)5] = (struct poptOption){ .longName="start-frame", .shortName=0, .argInfo=2U,
    .arg=(void *)&start, .val=0, .descrip="start at <count> frame (defaults to 0)",
    .argDescrip="count" };
  option_table[(signed long int)6] = (struct poptOption){ .longName="end-frame", .shortName=(char)101, .argInfo=2U,
    .arg=(void *)&end, .val=0, .descrip="end at <count> frame (defaults to unlimited)",
    .argDescrip="count" };
  option_table[(signed long int)7] = (struct poptOption){ .longName="cip-n-ntsc", .shortName=0, .argInfo=2U, .arg=(void *)&cip_n_ntsc,
    .val=0, .descrip="cip n ntsc timing counter (default: 2436)", .argDescrip=((const char *)NULL) };
  option_table[(signed long int)8] = (struct poptOption){ .longName="cip-d-ntsc", .shortName=0, .argInfo=2U, .arg=(void *)&cip_d_ntsc,
    .val=0, .descrip="cip d ntsc timing counter (default: 38400)", .argDescrip=((const char *)NULL) };
  option_table[(signed long int)9] = (struct poptOption){ .longName="syt-offset", .shortName=0, .argInfo=2U, .arg=(void *)&syt_offset,
    .val=0, .descrip="syt offset (default: 10000 range: 10000-26000)", .argDescrip=((const char *)NULL) };
  option_table[(signed long int)10] = (struct poptOption){ .longName="video-1394-version", .shortName=0, .argInfo=2U,
    .arg=(void *)&video1394_version, .val=0,
    .descrip="video 1394 version to use 1 (older kernels or CVS versions), 2 (current kernels >2.4.9?)", .argDescrip=((const char *)NULL) };
  option_table[(signed long int)11] = (struct poptOption){ .longName="buffers", .shortName=(char)98, .argInfo=2U,
    .arg=(void *)&max_buffer_blocks, .val=0,
    .descrip="max number of file io thread buffers to use. default = 250", .argDescrip="number" };
  option_table[(signed long int)12] = (struct poptOption){ .longName="underrun-data", .shortName=(char)117, .argInfo=1U,
    .arg=(void *)&underrun_data, .val=0,
    .descrip="file with the frame to send in case of underruns", .argDescrip="filename" };
  option_table[(signed long int)13] = (struct poptOption){ .longName=((const char *)NULL), .shortName=0, .argInfo=4U,
    .arg=(void *)poptHelpOptions, .val=0,
    .descrip="Help options", .argDescrip=((const char *)NULL) };
  option_table[(signed long int)14] = (struct poptOption){ .longName=(const char *)(void *)0, .shortName=(char)0, .argInfo=(unsigned int)0,
    .arg=(void *)0, .val=0,
    .descrip=((const char *)NULL), .argDescrip=((const char *)NULL) };
  optCon=poptGetContext((const char *)(void *)0, argc, (const char **)argv, option_table, (unsigned int)0);
  poptSetOtherOptionHelp(optCon, "<raw dv file or - for stdin/stdout>");
  do
  {
    rc=poptGetNextOpt(optCon);
    if(!(rc >= 1))
      break;

    if(rc == 118)
    {
      fprintf(stderr, "dvconnect: version %s, http://libdv.sourceforge.net/\n", (const void *)"CVS 05/06/2001");
      return 0;
    }

  }
  while((_Bool)1);
  if(!(rc >= -1))
  {
    const char *return_value_poptBadOption$1;
    return_value_poptBadOption$1=poptBadOption(optCon, 1U << 0);
    const char *return_value_poptStrerror$2;
    return_value_poptStrerror$2=poptStrerror(rc);
    fprintf(stderr, "%s: %s\n", return_value_poptBadOption$1, return_value_poptStrerror$2);
    return -1;
  }

  if(channel >= 64 || !(channel >= 0))
  {
    fprintf(stderr, "Invalid channel chosen: %d\nShould be in the range 0 - 63\n", channel);
    return -1;
  }

  else
    if(!(buffers >= 0))
    {
      fprintf(stderr, "Number of buffers should be > 0!\n");
      return -1;
    }

    else
    {
      filename=poptGetArg(optCon);
      setpriority(0, (unsigned int)0, -20);
      signed int return_value_rt_raisepri$3;
      return_value_rt_raisepri$3=rt_raisepri(1);
      if(!(return_value_rt_raisepri$3 == 0))
        setpriority(0, (unsigned int)0, -20);

      if(!(send_mode == 0))
        send_raw(filename, channel, buffers, start, end, verbose_mode, underrun_data);

      else
        capture_raw(filename, channel, buffers, start, end, verbose_mode);
      return 0;
    }
}

// pop_front
// file dvconnect.c line 144
struct buf_node * pop_front(struct buf_list *l)
{
  struct buf_node *rval;
  pthread_mutex_lock(&queue_mutex);
  rval = l->first;
  if(l->first == l->last)
    l->last = (struct buf_node *)(void *)0;

  if(!(rval == ((struct buf_node *)NULL)))
  {
    l->first = rval->next;
    l->usage = l->usage - 1;
  }

  else
    l->first = (struct buf_node *)(void *)0;
  pthread_mutex_unlock(&queue_mutex);
  return rval;
}

// push_back
// file dvconnect.c line 130
void push_back(struct buf_list *l, struct buf_node *elem)
{
  pthread_mutex_lock(&queue_mutex);
  if(!(l->last == ((struct buf_node *)NULL)))
    l->last->next = elem;

  else
    l->first = elem;
  elem->next = (struct buf_node *)(void *)0;
  l->last = elem;
  l->usage = l->usage + 1;
  pthread_mutex_unlock(&queue_mutex);
}

// read_frame
// file dvconnect.c line 477
signed int read_frame(struct _IO_FILE *fp, unsigned char *frame, signed int *isPAL)
{
  if(!(is_eof == 0))
    return -1;

  else
  {
    unsigned long int return_value_fread$1;
    return_value_fread$1=fread((void *)frame, (unsigned long int)1, (unsigned long int)120000, fp);
    if(!(return_value_fread$1 == 120000ul))
      return -1;

    else
    {
      *isPAL = (signed int)frame[(signed long int)3] & 0x80;
      if(!(*isPAL == 0))
      {
        unsigned long int return_value_fread$2;
        return_value_fread$2=fread((void *)(frame + (signed long int)120000), (unsigned long int)1, (unsigned long int)(144000 - 120000), fp);
        if(!(return_value_fread$2 == 24000ul))
          return -1;

      }

      return 0;
    }
  }
}

// read_in_thread
// file dvconnect.c line 530
void * read_in_thread(void *arg)
{
  fill_buf_queue(0);
  pthread_mutex_lock(&wakeup_rev_mutex);
  pthread_cond_signal(&wakeup_rev_cond);
  pthread_mutex_unlock(&wakeup_rev_mutex);
  while(is_eof == 0)
  {
    pthread_mutex_lock(&wakeup_mutex);
    pthread_cond_wait(&wakeup_cond, &wakeup_mutex);
    pthread_mutex_unlock(&wakeup_mutex);
    fill_buf_queue(1);
  }
  return (void *)0;
}

// rt_raisepri
// file dvconnect.c line 836
signed int rt_raisepri(signed int pri)
{
  struct sched_param scp;
  signed long int return_value_sysconf$3;
  return_value_sysconf$3=sysconf(10);
  if(return_value_sysconf$3 == -1l)
  {
    fprintf(stderr, "WARNING: RR-scheduler not available, disabling.\n");
    return -1;
  }

  else
  {
    memset(&scp, 0, sizeof(struct sched_param) /*4ul*/ );
    signed int return_value_sched_get_priority_max$1;
    return_value_sched_get_priority_max$1=sched_get_priority_max(2);
    scp.__sched_priority = return_value_sched_get_priority_max$1 - pri;
    signed int return_value_sched_setscheduler$2;
    return_value_sched_setscheduler$2=sched_setscheduler(0, 2, &scp);
    if(!(return_value_sched_setscheduler$2 >= 0))
    {
      fprintf(stderr, "WARNING: Cannot set RR-scheduler\n");
      return -1;
    }

  }
  return 0;
}

// send_raw
// file dvconnect.c line 652
signed int send_raw(const char *filename, signed int channel, signed int nbuffers, signed int start_frame, signed int end_frame, signed int verbose_mode, const char *underrun_data_filename)
{
  signed int viddev;
  unsigned char *send_buf;
  struct video1394_mmap v;
  struct video1394_mmap_v2 v2;
  struct video1394_queue_variable w;
  signed int unused_buffers;
  signed int got_frame;
  unsigned int packet_sizes[321l];
  _Bool tmp_if_expr$2;
  signed int return_value_strcmp$1;
  if(filename == ((const char *)NULL))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_strcmp$1=strcmp(filename, (const void *)"-");
    tmp_if_expr$2 = return_value_strcmp$1 == 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$2)
    src_fp = stdin;

  else
  {
    src_fp=fopen(filename, "rb");
    if(src_fp == ((struct _IO_FILE *)NULL))
    {
      perror("fopen input file");
      return -1;
    }

  }
  if(!(underrun_data_filename == ((const char *)NULL)))
  {
    struct _IO_FILE *fp;
    fp=fopen(underrun_data_filename, "rb");
    if(fp == ((struct _IO_FILE *)NULL))
    {
      perror("fopen underrun data file");
      fclose(src_fp);
      return -1;
    }

    void *return_value_malloc$3;
    return_value_malloc$3=malloc((unsigned long int)144000);
    underrun_data_frame = (unsigned char *)return_value_malloc$3;
    signed int return_value_read_frame$4;
    return_value_read_frame$4=read_frame(fp, underrun_data_frame, &underrun_frame_ispal);
    if(!(return_value_read_frame$4 >= 0))
    {
      fprintf(stderr, "Short read on reading underrun data frame...\n");
      fclose(src_fp);
      fclose(fp);
      return -1;
    }

    fclose(fp);
  }

  if(start_frame >= 1)
  {
    signed int isPAL;
    signed int i;
    unsigned char frame[144000l];
    i = 0;
    for( ; !(i >= start_frame); i = i + 1)
    {
      if(!(verbose_mode == 0))
        fprintf(stderr, "Skipped frame %8d\r", start_frame - i);

      signed int return_value_read_frame$5;
      return_value_read_frame$5=read_frame(src_fp, frame, &isPAL);
      if(!(return_value_read_frame$5 >= 0))
        return -1;

    }
  }

  viddev=open("/dev/video1394", 02);
  signed int return_value_ioctl$6;
  signed int return_value_ioctl$7;
  signed int tmp_post$9;
  if(!(viddev >= 0))
  {
    perror("open /dev/video1394");
    return -1;
  }

  else
  {
    v.channel = (unsigned int)channel;
    v.sync_tag = (unsigned int)0;
    v.nb_buffers = (unsigned int)nbuffers;
    v.buf_size = (unsigned int)(320 * 512);
    v.packet_size = (unsigned int)512;
    v.flags = (unsigned int)0x00000004;
    w.channel = v.channel;
    switch(video1394_version)
    {
      case 1:
      {
        return_value_ioctl$6=ioctl(viddev, (unsigned long int)4, &v);
        if(!(return_value_ioctl$6 >= 0))
        {
          perror("VIDEO1394_TALK_CHANNEL");
          return -1;
        }

        break;
      }
      case 2:
      {
        v2.channel = v.channel;
        v2.sync_tag = v.sync_tag;
        v2.nb_buffers = v.nb_buffers;
        v2.buf_size = v.buf_size;
        v2.packet_size = v.packet_size;
        v2.syt_offset = (unsigned int)syt_offset;
        v2.flags = v.flags;
        return_value_ioctl$7=ioctl(viddev, (unsigned long int)4, &v2);
        if(!(return_value_ioctl$7 >= 0))
        {
          perror("VIDEO1394_TALK_CHANNEL");
          return -1;
        }

      }
    }
    void *return_value_mmap$8;
    return_value_mmap$8=mmap(NULL, (unsigned long int)(v.nb_buffers * v.buf_size), 0x1 | 0x2, 0x01, viddev, (signed long int)0);
    send_buf = (unsigned char *)return_value_mmap$8;
    if(send_buf == (unsigned char *)-1)
    {
      perror("mmap videobuffer");
      return -1;
    }

    else
    {
      if(!(verbose_mode == 0))
        fprintf(stderr, "Filling buffers...\r");

      pthread_mutex_init(&queue_mutex, (const union anonymous$0 *)(void *)0);
      pthread_mutex_init(&wakeup_mutex, (const union anonymous$0 *)(void *)0);
      pthread_cond_init(&wakeup_cond, (const union anonymous$0 *)(void *)0);
      pthread_mutex_init(&wakeup_rev_mutex, (const union anonymous$0 *)(void *)0);
      pthread_cond_init(&wakeup_rev_cond, (const union anonymous$0 *)(void *)0);
      pthread_create(&file_io_thread, (const union pthread_attr_t *)(void *)0, read_in_thread, (void *)0);
      pthread_mutex_lock(&wakeup_rev_mutex);
      pthread_cond_wait(&wakeup_rev_cond, &wakeup_rev_mutex);
      pthread_mutex_unlock(&wakeup_rev_mutex);
      if(!(verbose_mode == 0))
        fprintf(stderr, "Transmitting...\r");

      unused_buffers = (signed int)v.nb_buffers;
      w.buffer = (unsigned int)0;
      got_frame = 1;
      w.packet_sizes = packet_sizes;
      memset((const void *)packet_sizes, 0, sizeof(unsigned int [321l]) /*1284ul*/ );
      while(!(start_frame >= end_frame))
      {
        do
        {
          tmp_post$9 = unused_buffers;
          unused_buffers = unused_buffers - 1;
          if(tmp_post$9 == 0)
            break;

          signed int return_value_fill_buffer$10;
          return_value_fill_buffer$10=fill_buffer(send_buf + (signed long int)(w.buffer * v.buf_size), packet_sizes);
          got_frame = return_value_fill_buffer$10 < 0 ? 0 : 1;
          if(got_frame == 0)
            break;

          signed int return_value_ioctl$11;
          return_value_ioctl$11=ioctl(viddev, (unsigned long int)6, &w);
          if(!(return_value_ioctl$11 >= 0))
            perror("VIDEO1394_TALK_QUEUE_BUFFER");

          if(!(verbose_mode == 0))
            fprintf(stderr, "Sent frame %8d\r", start_frame);

          w.buffer = w.buffer + 1u;
          w.buffer = w.buffer % v.nb_buffers;
          start_frame = start_frame + 1;
        }
        while((_Bool)1);
        if(got_frame == 0)
          break;

        signed int return_value_ioctl$12;
        return_value_ioctl$12=ioctl(viddev, (unsigned long int)7, &w);
        if(!(return_value_ioctl$12 >= 0))
          perror("VIDEO1394_TALK_WAIT_BUFFER");

        unused_buffers = 1;
      }
      w.buffer = ((v.nb_buffers + w.buffer) - (unsigned int)1) % v.nb_buffers;
      signed int return_value_ioctl$13;
      return_value_ioctl$13=ioctl(viddev, (unsigned long int)7, &w);
      if(!(return_value_ioctl$13 >= 0))
        perror("VIDEO1394_TALK_WAIT_BUFFER");

      munmap((void *)send_buf, (unsigned long int)(v.nb_buffers * v.buf_size));
      signed int return_value_ioctl$14;
      return_value_ioctl$14=ioctl(viddev, (unsigned long int)5, &v.channel);
      if(!(return_value_ioctl$14 >= 0))
        perror("VIDEO1394_UNTALK_CHANNEL");

      close(viddev);
      pthread_join(file_io_thread, (void **)(void *)0);
      if(!(src_fp == stdin))
        fclose(src_fp);

      return 0;
    }
  }
}

// sig_int_recv_handler
// file dvconnect.c line 302
void sig_int_recv_handler(signed int signum)
{
  char t[34l] = { 'T', 'e', 'r', 'm', 'i', 'n', 'a', 't', 'i', 'n', 'g', ' ', 'o', 'n', ' ', 'u', 's', 'e', 'r', '\'', 's', ' ', 'r', 'e', 'q', 'u', 'e', 's', 't', '.', '.', '.', '\n', 0 };
  write(2, (const void *)t, sizeof(char [34l]) /*34ul*/ );
  cap_num_frames = 0;
}

// sig_int_send_handler
// file dvconnect.c line 496
void sig_int_send_handler(signed int signum)
{
  char t[34l] = { 'T', 'e', 'r', 'm', 'i', 'n', 'a', 't', 'i', 'n', 'g', ' ', 'o', 'n', ' ', 'u', 's', 'e', 'r', '\'', 's', ' ', 'r', 'e', 'q', 'u', 'e', 's', 't', '.', '.', '.', '\n', 0 };
  write(2, (const void *)t, sizeof(char [34l]) /*34ul*/ );
  is_eof = 1;
}

// write_out_thread
// file dvconnect.c line 286
void * write_out_thread(void *arg)
{
  while(!(cap_num_frames == 0))
  {
    struct buf_node *f;
    pthread_mutex_lock(&wakeup_mutex);
    pthread_cond_wait(&wakeup_cond, &wakeup_mutex);
    pthread_mutex_unlock(&wakeup_mutex);
    do
    {
      f=pop_front(&buf_queue);
      if(f == ((struct buf_node *)NULL))
        break;

      fwrite((const void *)f->data, (unsigned long int)1, (unsigned long int)f->usage, dst_fp);
      push_back(&free_list, f);
    }
    while((_Bool)1);
  }
  return (void *)0;
}

