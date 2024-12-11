// #anon_enum_AUDIO_OUTPUT_PLAYBACK=0_AUDIO_OUTPUT_RETRIEVAL=1_AUDIO_OUTPUT_SYNCHRONOUS=2_AUDIO_OUTPUT_SYNCH_PLAYBACK=3
// file /usr/include/espeak/speak_lib.h line 155
enum anonymous_1 { AUDIO_OUTPUT_PLAYBACK=0, AUDIO_OUTPUT_RETRIEVAL=1, AUDIO_OUTPUT_SYNCHRONOUS=2, AUDIO_OUTPUT_SYNCH_PLAYBACK=3 };

// #anon_enum_EE_OK=0_EE_INTERNAL_ERROR=-1_EE_BUFFER_FULL=1_EE_NOT_FOUND=2
// file /usr/include/espeak/speak_lib.h line 171
enum anonymous_7 { EE_OK=0, EE_INTERNAL_ERROR=-1, EE_BUFFER_FULL=1, EE_NOT_FOUND=2 };

// #anon_enum_POS_CHARACTER=1_POS_WORD=2_POS_SENTENCE=3
// file /usr/include/espeak/speak_lib.h line 148
enum anonymous_0 { POS_CHARACTER=1, POS_WORD=2, POS_SENTENCE=3 };

// #anon_enum_espeakSILENCE=0_espeakRATE=1_espeakVOLUME=2_espeakPITCH=3_espeakRANGE=4_espeakPUNCTUATION=5_espeakCAPITALS=6_espeakWORDGAP=7_espeakOPTIONS=8_espeakINTONATION=9_espeakRESERVED1=10_espeakRESERVED2=11_espeakEMPHASIS=12_espeakLINELENGTH=13_espeakVOICETYPE=14_N_SPEECH_PARAM=15
// file /usr/include/espeak/speak_lib.h line 390
enum anonymous_2 { espeakSILENCE=0, espeakRATE=1, espeakVOLUME=2, espeakPITCH=3, espeakRANGE=4, espeakPUNCTUATION=5, espeakCAPITALS=6, espeakWORDGAP=7, espeakOPTIONS=8, espeakINTONATION=9, espeakRESERVED1=10, espeakRESERVED2=11, espeakEMPHASIS=12, espeakLINELENGTH=13, espeakVOICETYPE=14, N_SPEECH_PARAM=15 };

// tag-#anon#ST[*{cS8}_cS8_'name'||*{cS8}_cS8_'languages'||*{cS8}_cS8_'identifier'||U8'gender'||U8'age'||U8'variant'||U8'xx1'||S32'score'||*{V}_V_'spare'|]
// file /usr/include/espeak/speak_lib.h line 540
struct anonymous;

// tag-#anon#ST[ARR16{S64}_S64_'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_3;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_5;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_6;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_4;

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

// tag-adjust_t
// file espeakup.h line 40
enum adjust_t { ADJ_DEC=0, ADJ_SET=1, ADJ_INC=2 };

// tag-command_t
// file espeakup.h line 28
enum command_t { CMD_SET_FREQUENCY=0, CMD_SET_PITCH=1, CMD_SET_PUNCTUATION=2, CMD_SET_RATE=3, CMD_SET_VOICE=4, CMD_SET_VOLUME=5, CMD_SPEAK_TEXT=6, CMD_FLUSH=7, CMD_UNKNOWN=8 };

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 309
union pthread_attr_t;

// tag-queue_entry_t
// file queue.c line 31
struct queue_entry_t;

// tag-synth_t
// file espeakup.h line 46
struct synth_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// asprintf
// file synth.c line 135 function speak_text
signed int asprintf(void);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// close_softsynth
// file espeakup.h line 78
extern void close_softsynth(void);
// create_pid_file
// file espeakup.c line 62
signed int create_pid_file(void);
// daemon
// file /usr/include/unistd.h line 937
extern signed int daemon(signed int, signed int);
// espeak_Cancel
// file /usr/include/espeak/speak_lib.h line 629
enum anonymous_7 espeak_Cancel(void);
// espeak_Initialize
// file /usr/include/espeak/speak_lib.h line 185
signed int espeak_Initialize(enum anonymous_1, signed int, const char *, signed int);
// espeak_SetParameter
// file /usr/include/espeak/speak_lib.h line 419
enum anonymous_7 espeak_SetParameter(enum anonymous_2, signed int, signed int);
// espeak_SetVoiceByName
// file /usr/include/espeak/speak_lib.h line 588
enum anonymous_7 espeak_SetVoiceByName(const char *);
// espeak_SetVoiceByProperties
// file /usr/include/espeak/speak_lib.h line 601
enum anonymous_7 espeak_SetVoiceByProperties(struct anonymous *);
// espeak_Synth
// file /usr/include/espeak/speak_lib.h line 276
enum anonymous_7 espeak_Synth(const void *, unsigned long int, unsigned int, enum anonymous_0, unsigned int, unsigned int, unsigned int *, void *);
// espeak_Terminate
// file /usr/include/espeak/speak_lib.h line 658
enum anonymous_7 espeak_Terminate(void);
// espeakup_is_running
// file espeakup.c line 45
signed int espeakup_is_running(void);
// espeakup_sighandler
// file espeakup.c line 75
void espeakup_sighandler(signed int sig);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file synth.c line 147 function speak_text
void free(void *);
// free_entry
// file queue.c line 60
static void free_entry(struct queue_entry_t *entry);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// main_loop
// file espeakup.h line 79
extern void main_loop(struct synth_t *s);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// open_softsynth
// file espeakup.h line 77
extern signed int open_softsynth(void);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_buffer
// file softsynth.c line 103
static void process_buffer(struct synth_t *s, char *buf, signed long int length);
// process_cli
// file espeakup.h line 59
extern void process_cli(signed int argc, char **argv);
// process_command
// file softsynth.c line 38
static signed int process_command(struct synth_t *s, char *buf, signed int start);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_6 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_6 *, union anonymous_4 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_4 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_4 *);
// queue_add
// file queue.c line 43
static void queue_add(struct queue_entry_t *entry);
// queue_add_cmd
// file queue.c line 97
extern void queue_add_cmd(enum command_t cmd, enum adjust_t adj, signed int value);
// queue_add_text
// file queue.c line 112
extern void queue_add_text(char *txt, unsigned long int length);
// queue_clear
// file espeakup.h line 60
extern void queue_clear(void);
// queue_process_entry
// file queue.c line 133
static void queue_process_entry(struct synth_t *s);
// queue_remove
// file queue.c line 70
static struct queue_entry_t * queue_remove(void);
// queue_runner
// file espeakup.h line 80
extern void * queue_runner(void *arg);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_3 *, struct anonymous_3 *, struct anonymous_3 *, struct timeval *);
// set_frequency
// file espeakup.h line 64
extern enum anonymous_7 set_frequency(struct synth_t *s, signed int freq, enum adjust_t adj);
// set_pitch
// file espeakup.h line 66
extern enum anonymous_7 set_pitch(struct synth_t *s, signed int pitch, enum adjust_t adj);
// set_punctuation
// file espeakup.h line 68
extern enum anonymous_7 set_punctuation(struct synth_t *s, signed int punct, enum adjust_t adj);
// set_rate
// file espeakup.h line 70
extern enum anonymous_7 set_rate(struct synth_t *s, signed int rate, enum adjust_t adj);
// set_voice
// file espeakup.h line 72
extern enum anonymous_7 set_voice(struct synth_t *s, char *voice);
// set_volume
// file espeakup.h line 73
extern enum anonymous_7 set_volume(struct synth_t *s, signed int vol, enum adjust_t adj);
// show_help
// file cli.c line 43
static void show_help();
// show_version
// file cli.c line 54
static void show_version(void);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// speak_text
// file espeakup.h line 76
extern enum anonymous_7 speak_text(struct synth_t *s);
// stop_speech
// file espeakup.h line 75
extern enum anonymous_7 stop_speech(void);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);

struct anonymous
{
  // name
  const char *name;
  // languages
  const char *languages;
  // identifier
  const char *identifier;
  // gender
  unsigned char gender;
  // age
  unsigned char age;
  // variant
  unsigned char variant;
  // xx1
  unsigned char xx1;
  // score
  signed int score;
  // spare
  void *spare;
};

struct anonymous_3
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous_5
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

union anonymous_6
{
  // __data
  struct anonymous_5 __data;
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

union anonymous_4
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

struct queue_entry_t
{
  // cmd
  enum command_t cmd;
  // adjust
  enum adjust_t adjust;
  // value
  signed int value;
  // buf
  char *buf;
  // len
  signed int len;
  // next
  struct queue_entry_t *next;
};

struct synth_t
{
  // frequency
  signed int frequency;
  // pitch
  signed int pitch;
  // punct
  signed int punct;
  // rate
  signed int rate;
  // voice
  char voice[10l];
  // volume
  signed int volume;
  // buf
  char *buf;
  // len
  signed int len;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};


// Version
// file espeakup.c line 31
const char *Version = "0.71";
// debug
// file espeakup.c line 43
signed int debug = 0;
// defaultFrequency
// file espeakup.c line 37
const signed int defaultFrequency = 5;
// defaultPitch
// file espeakup.c line 38
const signed int defaultPitch = 5;
// defaultRate
// file espeakup.c line 39
const signed int defaultRate = 5;
// defaultVoice
// file espeakup.c line 42
char *defaultVoice = (char *)(void *)0;
// defaultVolume
// file espeakup.c line 40
const signed int defaultVolume = 5;
// first
// file queue.c line 40
static struct queue_entry_t *first = (struct queue_entry_t *)(void *)0;
// frequencyMultiplier
// file synth.c line 25
const signed int frequencyMultiplier = 11;
// last
// file queue.c line 41
static struct queue_entry_t *last = (struct queue_entry_t *)(void *)0;
// longOptions
// file cli.c line 35
struct option longOptions[5l] = { { .name="default-voice", .has_arg=1, .flag=(signed int *)(void *)0, .val=86 },
    { .name="debug", .has_arg=0, .flag=(signed int *)(void *)0, .val=100 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
// maxBufferSize
// file softsynth.c line 31
const unsigned long int maxBufferSize = (const unsigned long int)1025;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// pidPath
// file espeakup.c line 34
const char *pidPath = "/var/run/espeakup.pid";
// pitchMultiplier
// file synth.c line 26
const signed int pitchMultiplier = 11;
// queue_guard
// file queue.c line 29
union anonymous_4 queue_guard = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rateMultiplier
// file synth.c line 27
const signed int rateMultiplier = 34;
// rateOffset
// file synth.c line 28
const signed int rateOffset = 84;
// runner_awake
// file queue.c line 28
union anonymous_6 runner_awake = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// shortOptions
// file cli.c line 34
const char *shortOptions = "dhV:v";
// softFD
// file softsynth.c line 36
static signed int softFD = 0;
// synthFlushChar
// file softsynth.c line 34
const signed int synthFlushChar = 0x18;
// volumeMultiplier
// file synth.c line 29
const signed int volumeMultiplier = 22;

// close_softsynth
// file espeakup.h line 78
extern void close_softsynth(void)
{
  close(softFD);
}

// create_pid_file
// file espeakup.c line 62
signed int create_pid_file(void)
{
  struct _IO_FILE *pidFile;
  pidFile=fopen(pidPath, "w");
  if(pidFile == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    fprintf(pidFile, "%d\n", return_value_getpid_1);
    fclose(pidFile);
    return 0;
  }
}

// espeakup_is_running
// file espeakup.c line 45
signed int espeakup_is_running(void)
{
  signed int rc;
  struct _IO_FILE *pidFile;
  signed int pid;
  rc = 0;
  pidFile=fopen(pidPath, "r");
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_2;
  if(!(pidFile == ((struct _IO_FILE *)NULL)))
  {
    fscanf(pidFile, "%d", &pid);
    fclose(pidFile);
    signed int return_value_kill_1;
    return_value_kill_1=kill(pid, 0);
    if(return_value_kill_1 == 0)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value___errno_location_2=__errno_location();
      tmp_if_expr_3 = *return_value___errno_location_2 != 3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      rc = 1;

  }

  return rc;
}

// espeakup_sighandler
// file espeakup.c line 75
void espeakup_sighandler(signed int sig)
{
  if(!(debug == 0))
    printf("Caught signal %i\n", sig);

  queue_clear();
  espeak_Terminate();
  close_softsynth();
  if(debug == 0)
    unlink(pidPath);

  exit(0);
}

// free_entry
// file queue.c line 60
static void free_entry(struct queue_entry_t *entry)
{
  if((signed int)entry->cmd == CMD_SPEAK_TEXT)
    free((void *)entry->buf);

  free((void *)entry);
}

// main
// file espeakup.c line 92
signed int main(signed int argc, char **argv)
{
  unsigned long int queue_thread_id;
  struct synth_t s = { .frequency=0, .pitch=0, .punct=0, .rate=0, .voice={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .volume=0,
    .buf=((char *)NULL), .len=0 };
  process_cli(argc, argv);
  signed int return_value_espeakup_is_running_1;
  return_value_espeakup_is_running_1=espeakup_is_running();
  if(!(return_value_espeakup_is_running_1 == 0))
  {
    printf("Espeakup is already running!\n");
    return 1;
  }

  else
  {
    signed int return_value_open_softsynth_2;
    return_value_open_softsynth_2=open_softsynth();
    if(return_value_open_softsynth_2 == 0)
    {
      perror("Unable to open the softsynth device");
      return 3;
    }

    else
    {
      signal(2, espeakup_sighandler);
      signal(15, espeakup_sighandler);
      if(debug == 0)
        daemon(0, 1);

      espeak_Initialize((enum anonymous_1)AUDIO_OUTPUT_PLAYBACK, 0, (const char *)(void *)0, 0);
      if(!(defaultVoice == ((char *)NULL)))
      {
        set_voice(&s, defaultVoice);
        free((void *)defaultVoice);
        defaultVoice = (char *)(void *)0;
      }

      set_frequency(&s, defaultFrequency, (enum adjust_t)ADJ_SET);
      set_pitch(&s, defaultPitch, (enum adjust_t)ADJ_SET);
      set_rate(&s, defaultRate, (enum adjust_t)ADJ_SET);
      set_volume(&s, defaultVolume, (enum adjust_t)ADJ_SET);
      espeak_SetParameter((enum anonymous_2)espeakCAPITALS, 0, 0);
      signed int err;
      err=pthread_create(&queue_thread_id, (const union pthread_attr_t *)(void *)0, queue_runner, (void *)&s);
      if(!(err == 0))
        return 4;

      else
      {
        if(debug == 0)
        {
          signed int return_value_create_pid_file_3;
          return_value_create_pid_file_3=create_pid_file();
          if(!(return_value_create_pid_file_3 >= 0))
          {
            perror("Unable to create pid file");
            return 2;
          }

        }

        main_loop(&s);
        return 0;
      }
    }
  }
}

// main_loop
// file espeakup.h line 79
extern void main_loop(struct synth_t *s)
{
  struct anonymous_3 set;
  signed long int length;
  const signed long int length_array_size0 = (signed long int)maxBufferSize;
  char buf[length_array_size0];
  char *cp;
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  while((_Bool)1)
  {
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_3) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&set)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&set)->__fds_bits[(signed long int)(softFD / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&set)->__fds_bits[(signed long int)(softFD / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << softFD % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    signed int return_value_select_2;
    return_value_select_2=select(softFD + 1, &set, (struct anonymous_3 *)(void *)0, (struct anonymous_3 *)(void *)0, (struct timeval *)(void *)0);
    if(!(return_value_select_2 >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      if(*return_value___errno_location_1 == 4)
        continue;

      perror("Select failed");
      break;
    }

    if(!((set.__fds_bits[(signed long int)(softFD / 8)] & (signed long int)(1UL << softFD % 8)) == 0l))
    {
      length=read(softFD, (void *)buf, maxBufferSize - (unsigned long int)1);
      if(!(length >= 0l))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        if(*return_value___errno_location_3 == 11)
          tmp_if_expr_5 = (_Bool)1;

        else
        {
          return_value___errno_location_4=__errno_location();
          tmp_if_expr_5 = *return_value___errno_location_4 == 4 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_5)
          continue;

        perror("Read from softsynth failed");
        break;
      }

      buf[length] = (char)0;
      cp=strrchr(buf, synthFlushChar);
      if(!(cp == ((char *)NULL)))
      {
        queue_clear();
        stop_speech();
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen(cp + (signed long int)1);
        memmove((void *)buf, (const void *)(cp + (signed long int)1), return_value_strlen_6 + (unsigned long int)1);
        unsigned long int return_value_strlen_7;
        return_value_strlen_7=strlen(buf);
        length = (signed long int)return_value_strlen_7;
      }

      process_buffer(s, buf, length);
    }

  }
}

// open_softsynth
// file espeakup.h line 77
extern signed int open_softsynth(void)
{
  signed int rc;
  softFD=open("/dev/softsynth", 02 | 04000);
  if(!(softFD >= 0))
    rc = 0;

  else
    rc = 1;
  return rc;
}

// process_buffer
// file softsynth.c line 103
static void process_buffer(struct synth_t *s, char *buf, signed long int length)
{
  signed int start;
  signed int end;
  const signed long int end_array_size0 = (signed long int)maxBufferSize;
  char txtBuf[end_array_size0];
  unsigned long int txtLen;
  start = 0;
  end = 0;
  signed int return_value_process_command_1;
  while(!((signed long int)start >= length))
  {
    for( ; (_Bool)1; end = end + 1)
    {
      if((signed int)buf[(signed long int)end] >= 0)
      {
        if(!((signed int)buf[(signed long int)end] >= 32))
        {
          if(!((signed int)buf[(signed long int)end] == 10))
            goto __CPROVER_DUMP_L4;

        }

      }

      if((signed long int)end >= length)
        break;

    }

  __CPROVER_DUMP_L4:
    ;
    if(!(end == start))
    {
      txtLen = (unsigned long int)(end - start);
      strncpy(txtBuf, buf + (signed long int)start, txtLen);
      txtBuf[(signed long int)txtLen] = (char)0;
      queue_add_text(txtBuf, txtLen);
    }

    if(!((signed long int)end >= length))
    {
      return_value_process_command_1=process_command(s, buf, end);
      end = end + return_value_process_command_1;
      start = end;
    }

    else
      start = (signed int)length;
  }
}

// process_cli
// file espeakup.h line 59
extern void process_cli(signed int argc, char **argv)
{
  signed int opt;
  do
  {
    opt=getopt_long(argc, argv, shortOptions, longOptions, (signed int *)(void *)0);
    if(!(opt == 86))
    {
      if(opt == 100)
        goto __CPROVER_DUMP_L3;

      if(opt == 104)
        goto __CPROVER_DUMP_L4;

      if(opt == 118)
        goto __CPROVER_DUMP_L5;

      if(opt == -1)
        goto __CPROVER_DUMP_L6;

    }

    else
    {
      defaultVoice=strdup(optarg);
      continue;

    __CPROVER_DUMP_L3:
      ;
      debug = 1;
      continue;

    __CPROVER_DUMP_L4:
      ;
      show_help();
      continue;

    __CPROVER_DUMP_L5:
      ;
      show_version();
      continue;

    __CPROVER_DUMP_L6:
      ;
      continue;
    }
    show_help();
  }
  while(!(opt == -1));
}

// process_command
// file softsynth.c line 38
static signed int process_command(struct synth_t *s, char *buf, signed int start)
{
  char *cp;
  signed int value;
  enum adjust_t adj;
  enum command_t cmd;
  cp = buf + (signed long int)start;
  const unsigned short int **return_value___ctype_b_loc_1;
  if((signed int)*cp == 1)
  {
    cp = cp + 1l;
    switch((signed int)*cp)
    {
      case 43:
      {
        adj = (enum adjust_t)ADJ_INC;
        cp = cp + 1l;
        break;
      }
      case 45:
      {
        adj = (enum adjust_t)ADJ_DEC;
        cp = cp + 1l;
        break;
      }
      default:
        adj = (enum adjust_t)ADJ_SET;
    }
    value = 0;
    do
    {
      return_value___ctype_b_loc_1=__ctype_b_loc();
      if((2048 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*cp]) == 0)
        break;

      value = value * 10 + ((signed int)*cp - 48);
      cp = cp + 1l;
    }
    while((_Bool)1);
    switch((signed int)*cp)
    {
      case 98:
      {
        cmd = (enum command_t)CMD_SET_PUNCTUATION;
        break;
      }
      case 102:
      {
        cmd = (enum command_t)CMD_SET_FREQUENCY;
        break;
      }
      case 112:
      {
        cmd = (enum command_t)CMD_SET_PITCH;
        break;
      }
      case 115:
      {
        cmd = (enum command_t)CMD_SET_RATE;
        break;
      }
      case 118:
      {
        cmd = (enum command_t)CMD_SET_VOLUME;
        break;
      }
      default:
        cmd = (enum command_t)CMD_UNKNOWN;
    }
    cp = cp + 1l;
    goto __CPROVER_DUMP_L16;
  }

  cmd = (enum command_t)CMD_UNKNOWN;
  cp = cp + 1l;
  goto __CPROVER_DUMP_L16;

__CPROVER_DUMP_L16:
  ;
  if(!((signed int)cmd == CMD_FLUSH) && !((signed int)cmd == CMD_UNKNOWN))
    queue_add_cmd(cmd, adj, value);

  return (signed int)(cp - (buf + (signed long int)start));
}

// queue_add
// file queue.c line 43
static void queue_add(struct queue_entry_t *entry)
{
  pthread_mutex_lock(&queue_guard);
  /* assertion entry */
  assert(entry != ((struct queue_entry_t *)NULL));
  entry->next = (struct queue_entry_t *)(void *)0;
  if(last == ((struct queue_entry_t *)NULL))
    last = entry;

  if(first == ((struct queue_entry_t *)NULL))
    first = entry;

  else
  {
    first->next = entry;
    first = first->next;
  }
  pthread_mutex_unlock(&queue_guard);
  pthread_cond_signal(&runner_awake);
}

// queue_add_cmd
// file queue.c line 97
extern void queue_add_cmd(enum command_t cmd, enum adjust_t adj, signed int value)
{
  struct queue_entry_t *entry;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct queue_entry_t) /*40ul*/ );
  entry = (struct queue_entry_t *)return_value_malloc_1;
  if(entry == ((struct queue_entry_t *)NULL))
    perror("unable to allocate memory for queue entry");

  else
  {
    entry->cmd = cmd;
    entry->adjust = adj;
    entry->value = value;
    queue_add(entry);
  }
}

// queue_add_text
// file queue.c line 112
extern void queue_add_text(char *txt, unsigned long int length)
{
  struct queue_entry_t *entry;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct queue_entry_t) /*40ul*/ );
  entry = (struct queue_entry_t *)return_value_malloc_1;
  if(entry == ((struct queue_entry_t *)NULL))
    perror("unable to allocate memory for queue entry");

  else
  {
    entry->cmd = (enum command_t)CMD_SPEAK_TEXT;
    entry->adjust = (enum adjust_t)ADJ_SET;
    entry->buf=strdup(txt);
    if(entry->buf == ((char *)NULL))
    {
      perror("unable to allocate space for text");
      free((void *)entry);
    }

    else
    {
      entry->len = (signed int)length;
      queue_add(entry);
    }
  }
}

// queue_clear
// file espeakup.h line 60
extern void queue_clear(void)
{
  pthread_mutex_lock(&queue_guard);
  while(!(last == ((struct queue_entry_t *)NULL)))
  {
    struct queue_entry_t *entry;
    entry=queue_remove();
    if(!(entry == ((struct queue_entry_t *)NULL)))
      free_entry(entry);

  }
  pthread_mutex_unlock(&queue_guard);
}

// queue_process_entry
// file queue.c line 133
static void queue_process_entry(struct synth_t *s)
{
  enum anonymous_7 error;
  struct queue_entry_t *current;
  current=queue_remove();
  pthread_mutex_unlock(&queue_guard);
  if(!(current == ((struct queue_entry_t *)NULL)))
  {
    switch((signed int)current->cmd)
    {
      case CMD_SET_FREQUENCY:
      {
        error=set_frequency(s, current->value, current->adjust);
        break;
      }
      case CMD_SET_PITCH:
      {
        error=set_pitch(s, current->value, current->adjust);
        break;
      }
      case CMD_SET_PUNCTUATION:
      {
        error=set_punctuation(s, current->value, current->adjust);
        break;
      }
      case CMD_SET_RATE:
      {
        error=set_rate(s, current->value, current->adjust);
        break;
      }
      case CMD_SET_VOICE:
        break;
      case CMD_SET_VOLUME:
      {
        error=set_volume(s, current->value, current->adjust);
        break;
      }
      case CMD_SPEAK_TEXT:
      {
        s->buf = current->buf;
        s->len = current->len;
        error=speak_text(s);
      }
    }
    free_entry(current);
  }

}

// queue_remove
// file queue.c line 70
static struct queue_entry_t * queue_remove(void)
{
  struct queue_entry_t *temp = (struct queue_entry_t *)(void *)0;
  if(!(last == ((struct queue_entry_t *)NULL)))
  {
    temp = last;
    last = temp->next;
    if(last == ((struct queue_entry_t *)NULL))
      first = last;

  }

  return temp;
}

// queue_runner
// file espeakup.h line 80
extern void * queue_runner(void *arg)
{
  struct synth_t *synth = (struct synth_t *)arg;
  pthread_mutex_lock(&queue_guard);
  while((_Bool)1)
  {
    pthread_cond_wait(&runner_awake, &queue_guard);
    while(!(last == ((struct queue_entry_t *)NULL)))
    {
      queue_process_entry(synth);
      pthread_mutex_lock(&queue_guard);
    }
  }
  return (void *)0;
}

// set_frequency
// file espeakup.h line 64
extern enum anonymous_7 set_frequency(struct synth_t *s, signed int freq, enum adjust_t adj)
{
  enum anonymous_7 rc;
  if((signed int)adj == ADJ_DEC)
    freq = -freq;

  if(!((signed int)adj == ADJ_SET))
    freq = freq + s->frequency;

  rc=espeak_SetParameter((enum anonymous_2)espeakRANGE, freq * frequencyMultiplier, 0);
  if((signed int)rc == EE_OK)
    s->frequency = freq;

  return rc;
}

// set_pitch
// file espeakup.h line 66
extern enum anonymous_7 set_pitch(struct synth_t *s, signed int pitch, enum adjust_t adj)
{
  enum anonymous_7 rc;
  if((signed int)adj == ADJ_DEC)
    pitch = -pitch;

  if(!((signed int)adj == ADJ_SET))
    pitch = pitch + s->pitch;

  rc=espeak_SetParameter((enum anonymous_2)espeakPITCH, pitch * pitchMultiplier, 0);
  if((signed int)rc == EE_OK)
    s->pitch = pitch;

  return rc;
}

// set_punctuation
// file espeakup.h line 68
extern enum anonymous_7 set_punctuation(struct synth_t *s, signed int punct, enum adjust_t adj)
{
  enum anonymous_7 rc;
  if((signed int)adj == ADJ_DEC)
    punct = -punct;

  if(!((signed int)adj == ADJ_SET))
    punct = punct + s->punct;

  rc=espeak_SetParameter((enum anonymous_2)espeakPUNCTUATION, punct, 0);
  if((signed int)rc == EE_OK)
    s->punct = punct;

  return rc;
}

// set_rate
// file espeakup.h line 70
extern enum anonymous_7 set_rate(struct synth_t *s, signed int rate, enum adjust_t adj)
{
  enum anonymous_7 rc;
  if((signed int)adj == ADJ_DEC)
    rate = -rate;

  if(!((signed int)adj == ADJ_SET))
    rate = rate + s->rate;

  rc=espeak_SetParameter((enum anonymous_2)espeakRATE, rate * rateMultiplier + rateOffset, 0);
  if((signed int)rc == EE_OK)
    s->rate = rate;

  return rc;
}

// set_voice
// file espeakup.h line 72
extern enum anonymous_7 set_voice(struct synth_t *s, char *voice)
{
  enum anonymous_7 rc;
  rc=espeak_SetVoiceByName(voice);
  if(!((signed int)rc == EE_OK))
  {
    struct anonymous voice_select;
    memset((void *)&voice_select, 0, sizeof(struct anonymous) /*40ul*/ );
    voice_select.languages = voice;
    rc=espeak_SetVoiceByProperties(&voice_select);
  }

  if((signed int)rc == EE_OK)
    strcpy(s->voice, voice);

  return rc;
}

// set_volume
// file espeakup.h line 73
extern enum anonymous_7 set_volume(struct synth_t *s, signed int vol, enum adjust_t adj)
{
  enum anonymous_7 rc;
  if((signed int)adj == ADJ_DEC)
    vol = -vol;

  if(!((signed int)adj == ADJ_SET))
    vol = vol + s->volume;

  rc=espeak_SetParameter((enum anonymous_2)espeakVOLUME, (vol + 1) * volumeMultiplier, 0);
  if((signed int)rc == EE_OK)
    s->volume = vol;

  return rc;
}

// show_help
// file cli.c line 43
static void show_help()
{
  printf("Usage: espeakup [options]\n\n");
  printf("Options are as follows:\n");
  printf("  --default-voice=voice, -V voice\tSet default voice.\n");
  printf("  --debug, -d\t\t\t\tDebug mode (stay in the foreground).\n");
  printf("  --help, -h\t\t\t\tShow this help.\n");
  printf("  --version, -v\t\t\t\tDisplay the software version.\n");
  exit(0);
}

// show_version
// file cli.c line 54
static void show_version(void)
{
  printf("espeakup %s\n", Version);
  printf("Copyright (C) 2008 William Hubbs\n");
  printf("License GPLv3+: GNU GPL version 3 or later\n");
  printf("You are free to change and redistribute this software.\n");
  exit(0);
}

// speak_text
// file espeakup.h line 76
extern enum anonymous_7 speak_text(struct synth_t *s)
{
  enum anonymous_7 rc;
  if(s->len == 1)
  {
    char *buf;
    signed int n;
    n=asprintf(&buf, (const void *)"<say-as interpret-as=\"characters\">%c</say-as>", s->buf[(signed long int)0]);
    if(n == -1)
      rc=espeak_Synth((const void *)s->buf, (unsigned long int)(s->len + 1), (unsigned int)0, (enum anonymous_0)POS_CHARACTER, (unsigned int)0, (unsigned int)0, (unsigned int *)(void *)0, (void *)0);

    else
    {
      rc=espeak_Synth((const void *)buf, (unsigned long int)(n + 1), (unsigned int)0, (enum anonymous_0)POS_CHARACTER, (unsigned int)0, (unsigned int)0x10, (unsigned int *)(void *)0, (void *)0);
      free(buf);
    }
  }

  else
    rc=espeak_Synth((const void *)s->buf, (unsigned long int)(s->len + 1), (unsigned int)0, (enum anonymous_0)POS_CHARACTER, (unsigned int)0, (unsigned int)0, (unsigned int *)(void *)0, (void *)0);
  return rc;
}

// stop_speech
// file espeakup.h line 75
extern enum anonymous_7 stop_speech(void)
{
  enum anonymous_7 return_value_espeak_Cancel_1;
  return_value_espeak_Cancel_1=espeak_Cancel();
  return return_value_espeak_Cancel_1;
}

