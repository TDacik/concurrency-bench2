// #anon_enum$LO_INT32=105$LO_FLOAT=102$LO_STRING=115$LO_BLOB=98$LO_INT64=104$LO_TIMETAG=116$LO_DOUBLE=100$LO_SYMBOL=83$LO_CHAR=99$LO_MIDI=109$LO_TRUE=84$LO_FALSE=70$LO_NIL=78$LO_INFINITUM=73
// file /usr/include/lo/lo_osc_types.h line 72
enum anonymous$2 { LO_INT32=105, LO_FLOAT=102, LO_STRING=115, LO_BLOB=98, LO_INT64=104, LO_TIMETAG=116, LO_DOUBLE=100, LO_SYMBOL=83, LO_CHAR=99, LO_MIDI=109, LO_TRUE=84, LO_FALSE=70, LO_NIL=78, LO_INFINITUM=73 };

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$5;

// tag-#anon#ST[U32'sec'||U32'frac'|]
// file /usr/include/lo/lo_osc_types.h line 46
struct anonymous$4;

// tag-#anon#UN[S32'i'||S32'i32'||S64'h'||S64'i64'||F32'f'||F32'f32'||F64'd'||F64'f64'||S8's'||S8'S'||U8'c'||ARR4{U8}$U8$'m'||SYM#tag-#anon#ST[U32'sec'||U32'frac'|]#'t'|]
// file /usr/include/lo/lo_osc_types.h line 115
union anonymous$3;

// tag-#anon#UN[S32'value'||SYM#tag-snd_seq_timestamp#'time'||U32'position'||SYM#tag-snd_seq_queue_skew#'skew'||ARR2{U32}$U32$'d32'||ARR8{U8}$U8$'d8'|]
// file /usr/include/alsa/seq_event.h line 284
union anonymous;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$1;

// tag-#anon#UN[SYM#tag-snd_seq_ev_note#'note'||SYM#tag-snd_seq_ev_ctrl#'control'||SYM#tag-snd_seq_ev_raw8#'raw8'||SYM#tag-snd_seq_ev_raw32#'raw32'||SYM#tag-snd_seq_ev_ext#'ext'||SYM#tag-snd_seq_ev_queue_control#'queue'||SYM#tag-snd_seq_timestamp#'time'||SYM#tag-snd_seq_addr#'addr'||SYM#tag-snd_seq_connect#'connect'||SYM#tag-snd_seq_result#'result'||U128'$pad'|]
// file /usr/include/alsa/seq_event.h line 307
union anonymous$0;

// tag-JackOptions
// file /usr/include/jack/types.h line 90
enum JackOptions { JackNullOption=0, JackNoStartServer=1, JackUseExactName=2, JackServerName=4, JackLoadName=8, JackLoadInit=16, JackSessionID=32 };

// tag-JackStatus
// file /usr/include/jack/types.h line 149
enum JackStatus { JackFailure=1, JackInvalidOption=2, JackNameNotUnique=4, JackServerStarted=8, JackServerFailed=16, JackServerError=32, JackNoSuchClient=64, JackLoadFailure=128, JackInitFailure=256, JackShmFailure=512, JackVersionError=1024, JackBackendError=2048, JackClientZombie=4096 };

// tag-_DSSI_Descriptor
// file ../dssi/dssi.h line 77
struct _DSSI_Descriptor;

// tag-_DSSI_Program_Descriptor
// file ../dssi/dssi.h line 57
struct _DSSI_Program_Descriptor;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_LADSPA_Descriptor
// file /usr/include/ladspa.h line 373
struct _LADSPA_Descriptor;

// tag-_LADSPA_PortRangeHint
// file /usr/include/ladspa.h line 337
struct _LADSPA_PortRangeHint;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_d3h_dll_t
// file jack-dssi-host.h line 33
struct _d3h_dll_t;

// tag-_d3h_instance_t
// file jack-dssi-host.h line 59
struct _d3h_instance_t;

// tag-_d3h_plugin_t
// file jack-dssi-host.h line 43
struct _d3h_plugin_t;

// tag-_jack_client
// file /usr/include/jack/types.h line 72
struct _jack_client;

// tag-_jack_port
// file /usr/include/jack/types.h line 66
struct _jack_port;

// tag-_snd_seq
// file /usr/include/alsa/seq.h line 47
struct _snd_seq;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-snd_midi_event
// file /usr/include/alsa/seq_midi_event.h line 43
struct snd_midi_event;

// tag-snd_seq_addr
// file /usr/include/alsa/seq_event.h line 178
struct snd_seq_addr;

// tag-snd_seq_connect
// file /usr/include/alsa/seq_event.h line 184
struct snd_seq_connect;

// tag-snd_seq_ev_ctrl
// file /usr/include/alsa/seq_event.h line 239
struct snd_seq_ev_ctrl;

// tag-snd_seq_ev_ext
// file /usr/include/alsa/seq_event.h line 257
struct snd_seq_ev_ext;

// tag-snd_seq_ev_note
// file /usr/include/alsa/seq_event.h line 230
struct snd_seq_ev_note;

// tag-snd_seq_ev_queue_control
// file /usr/include/alsa/seq_event.h line 281
struct snd_seq_ev_queue_control;

// tag-snd_seq_ev_raw32
// file /usr/include/alsa/seq_event.h line 252
struct snd_seq_ev_raw32;

// tag-snd_seq_ev_raw8
// file /usr/include/alsa/seq_event.h line 247
struct snd_seq_ev_raw8;

// tag-snd_seq_event
// file /usr/include/alsa/seq_event.h line 296
struct snd_seq_event;

// tag-snd_seq_queue_skew
// file /usr/include/alsa/seq_event.h line 275
struct snd_seq_queue_skew;

// tag-snd_seq_real_time
// file /usr/include/alsa/seq_event.h line 191
struct snd_seq_real_time;

// tag-snd_seq_result
// file /usr/include/alsa/seq_event.h line 269
struct snd_seq_result;

// tag-snd_seq_timestamp
// file /usr/include/alsa/seq_event.h line 200
union snd_seq_timestamp;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

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
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 400
extern signed int __xstat(signed int, const char *, struct stat *);
// add_message
// file ../message_buffer/message_buffer.h line 18
void add_message(const char *msg);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// audio_callback
// file jack-dssi-host.c line 241
signed int audio_callback(unsigned int nframes, void *arg);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// dirname
// file /usr/include/libgen.h line 26
extern char * dirname(char *);
// dlclose
// file /usr/include/dlfcn.h line 60
extern signed int dlclose(void *);
// dlerror
// file /usr/include/dlfcn.h line 82
extern char * dlerror(void);
// dlopen
// file /usr/include/dlfcn.h line 56
extern void * dlopen(const char *, signed int);
// dlsym
// file /usr/include/dlfcn.h line 64
extern void * dlsym(void *, const char *);
// execlp
// file /usr/include/unistd.h line 584
extern signed int execlp(const char *, const char *, ...);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// expf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 100
extern float expf(float);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// get_port_default
// file jack-dssi-host.c line 1492
float get_port_default(const struct _LADSPA_Descriptor *plugin, signed int port);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// instance_sort_cmp
// file jack-dssi-host.c line 567
static signed int instance_sort_cmp(const void *a, const void *b);
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
// jack_get_client_name
// file /usr/include/jack/jack.h line 118
char * jack_get_client_name(struct _jack_client *);
// jack_get_ports
// file /usr/include/jack/jack.h line 1137
const char ** jack_get_ports(struct _jack_client *, const char *, const char *, unsigned long int);
// jack_get_sample_rate
// file /usr/include/jack/jack.h line 554
unsigned int jack_get_sample_rate(struct _jack_client *);
// jack_port_get_buffer
// file /usr/include/jack/jack.h line 649
void * jack_port_get_buffer(struct _jack_port *, unsigned int);
// jack_port_name
// file /usr/include/jack/jack.h line 657
const char * jack_port_name(const struct _jack_port *);
// jack_port_register
// file /usr/include/jack/jack.h line 624
struct _jack_port * jack_port_register(struct _jack_client *, const char *, const char *, unsigned long int, unsigned long int);
// jack_set_process_callback
// file /usr/include/jack/jack.h line 342
signed int jack_set_process_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// lo_address_free
// file /usr/include/lo/lo.h line 89
void lo_address_free(void *);
// lo_address_get_hostname
// file /usr/include/lo/lo_lowlevel.h line 391
const char * lo_address_get_hostname(void *);
// lo_address_get_port
// file /usr/include/lo/lo_lowlevel.h line 399
const char * lo_address_get_port(void *);
// lo_address_new
// file /usr/include/lo/lo.h line 60
void * lo_address_new(const char *, const char *);
// lo_arg_pp
// file /usr/include/lo/lo_lowlevel.h line 1054
void lo_arg_pp(enum anonymous$2, void *);
// lo_message_get_source
// file /usr/include/lo/lo_lowlevel.h line 297
void * lo_message_get_source(void *);
// lo_send_internal
// file /usr/include/lo/lo_lowlevel.h line 973
signed int lo_send_internal(void *, const char *, const signed int, const char *, const char *, ...);
// lo_server_thread_add_method
// file /usr/include/lo/lo_serverthread.h line 119
void * lo_server_thread_add_method(void *, const char *, const char *, signed int (*)(const char *, const char *, union anonymous$3 **, signed int, void *, void *), void *);
// lo_server_thread_get_url
// file /usr/include/lo/lo_serverthread.h line 159
char * lo_server_thread_get_url(void *);
// lo_server_thread_new
// file /usr/include/lo/lo_serverthread.h line 44
void * lo_server_thread_new(const char *, void (*)(signed int, const char *, const char *));
// lo_server_thread_start
// file /usr/include/lo/lo_serverthread.h line 139
signed int lo_server_thread_start(void *);
// lo_url_get_hostname
// file /usr/include/lo/lo_lowlevel.h line 930
char * lo_url_get_hostname(const char *);
// lo_url_get_path
// file /usr/include/lo/lo_lowlevel.h line 944
char * lo_url_get_path(const char *);
// lo_url_get_port
// file /usr/include/lo/lo_lowlevel.h line 937
char * lo_url_get_port(const char *);
// load
// file jack-dssi-host.c line 474
char * load(const char *dllName, void **dll, signed int quiet);
// logf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 109
extern float logf(float);
// lrintf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 325
extern signed long int lrintf(float);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mb_init
// file ../message_buffer/message_buffer.h line 16
void mb_init(const char *prefix);
// mb_thread_func
// file ../message_buffer/message_buffer.c line 43
void * mb_thread_func(void *arg);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// midi_callback
// file jack-dssi-host.c line 135
void midi_callback();
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// osc_configure_handler
// file jack-dssi-host.c line 1696
signed int osc_configure_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv);
// osc_control_handler
// file jack-dssi-host.c line 1637
signed int osc_control_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv);
// osc_debug_handler
// file jack-dssi-host.c line 1905
signed int osc_debug_handler(const char *path, const char *types, union anonymous$3 **argv, signed int argc, void *data, void *user_data);
// osc_error
// file jack-dssi-host.c line 1565
void osc_error(signed int num, const char *msg, const char *path);
// osc_exiting_handler
// file jack-dssi-host.c line 1858
signed int osc_exiting_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv);
// osc_message_handler
// file jack-dssi-host.c line 1921
signed int osc_message_handler(const char *path, const char *types, union anonymous$3 **argv, signed int argc, void *data, void *user_data);
// osc_midi_handler
// file jack-dssi-host.c line 1572
signed int osc_midi_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv);
// osc_program_handler
// file jack-dssi-host.c line 1662
signed int osc_program_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv);
// osc_update_handler
// file jack-dssi-host.c line 1761
signed int osc_update_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv, void *source);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$1 *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous$5 *, struct anonymous$5 *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// query_programs
// file jack-dssi-host.c line 680
void query_programs(struct _d3h_instance_t *instance);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// setControl
// file jack-dssi-host.c line 184
void setControl(struct _d3h_instance_t *instance, signed long int controlIn, struct snd_seq_event *event);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$5 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$5 *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// signalHandler
// file jack-dssi-host.c line 127
void signalHandler(signed int sig);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snd_midi_event_encode
// file /usr/include/alsa/seq_midi_event.h line 53
signed long int snd_midi_event_encode(struct snd_midi_event *, const unsigned char *, signed long int, struct snd_seq_event *);
// snd_midi_event_new
// file /usr/include/alsa/seq_midi_event.h line 45
signed int snd_midi_event_new(unsigned long int, struct snd_midi_event **);
// snd_midi_event_reset_encode
// file /usr/include/alsa/seq_midi_event.h line 49
void snd_midi_event_reset_encode(struct snd_midi_event *);
// snd_seq_create_simple_port
// file /usr/include/alsa/seqmid.h line 328
signed int snd_seq_create_simple_port(struct _snd_seq *, const char *, unsigned int, unsigned int);
// snd_seq_event_input
// file /usr/include/alsa/seq.h line 522
signed int snd_seq_event_input(struct _snd_seq *, struct snd_seq_event **);
// snd_seq_event_input_pending
// file /usr/include/alsa/seq.h line 523
signed int snd_seq_event_input_pending(struct _snd_seq *, signed int);
// snd_seq_open
// file /usr/include/alsa/seq.h line 78
signed int snd_seq_open(struct _snd_seq **, const char *, signed int, signed int);
// snd_seq_poll_descriptors
// file /usr/include/alsa/seq.h line 84
signed int snd_seq_poll_descriptors(struct _snd_seq *, struct pollfd *, unsigned int, signed short int);
// snd_seq_poll_descriptors_count
// file /usr/include/alsa/seq.h line 83
signed int snd_seq_poll_descriptors_count(struct _snd_seq *, signed short int);
// snd_seq_set_client_name
// file /usr/include/alsa/seqmid.h line 344
signed int snd_seq_set_client_name(struct _snd_seq *, const char *);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// startGUI
// file jack-dssi-host.c line 580
void startGUI(const char *directory, const char *dllName, const char *label, const char *oscUrl, const char *instanceTag);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);

struct anonymous$5
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$4
{
  // sec
  unsigned int sec;
  // frac
  unsigned int frac;
};

union anonymous$3
{
  // i
  signed int i;
  // i32
  signed int i32;
  // h
  signed long int h;
  // i64
  signed long int i64;
  // f
  float f;
  // f32
  float f32;
  // d
  double d;
  // f64
  double f64;
  // s
  char s;
  // S
  char S;
  // c
  unsigned char c;
  // m
  unsigned char m[4l];
  // t
  struct anonymous$4 t;
};

struct snd_seq_real_time
{
  // tv_sec
  unsigned int tv_sec;
  // tv_nsec
  unsigned int tv_nsec;
};

union snd_seq_timestamp
{
  // tick
  unsigned int tick;
  // time
  struct snd_seq_real_time time;
};

struct snd_seq_queue_skew
{
  // value
  unsigned int value;
  // base
  unsigned int base;
};

union anonymous
{
  // value
  signed int value;
  // time
  union snd_seq_timestamp time;
  // position
  unsigned int position;
  // skew
  struct snd_seq_queue_skew skew;
  // d32
  unsigned int d32[2l];
  // d8
  unsigned char d8[8l];
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

struct snd_seq_ev_note
{
  // channel
  unsigned char channel;
  // note
  unsigned char note;
  // velocity
  unsigned char velocity;
  // off_velocity
  unsigned char off_velocity;
  // duration
  unsigned int duration;
};

struct snd_seq_ev_ctrl
{
  // channel
  unsigned char channel;
  // unused
  unsigned char unused[3l];
  // param
  unsigned int param;
  // value
  signed int value;
};

struct snd_seq_ev_raw8
{
  // d
  unsigned char d[12l];
};

struct snd_seq_ev_raw32
{
  // d
  unsigned int d[3l];
};

struct snd_seq_ev_ext
{
  // len
  unsigned int len;
  // ptr
  void *ptr;
} __attribute__ ((__packed__));

struct snd_seq_ev_queue_control
{
  // queue
  unsigned char queue;
  // unused
  unsigned char unused[3l];
  // param
  union anonymous param;
};

struct snd_seq_addr
{
  // client
  unsigned char client;
  // port
  unsigned char port;
};

struct snd_seq_connect
{
  // sender
  struct snd_seq_addr sender;
  // dest
  struct snd_seq_addr dest;
};

struct snd_seq_result
{
  // event
  signed int event;
  // result
  signed int result;
};

union anonymous$0
{
  // note
  struct snd_seq_ev_note note;
  // control
  struct snd_seq_ev_ctrl control;
  // raw8
  struct snd_seq_ev_raw8 raw8;
  // raw32
  struct snd_seq_ev_raw32 raw32;
  // ext
  struct snd_seq_ev_ext ext;
  // queue
  struct snd_seq_ev_queue_control queue;
  // time
  union snd_seq_timestamp time;
  // addr
  struct snd_seq_addr addr;
  // connect
  struct snd_seq_connect connect;
  // result
  struct snd_seq_result result;
};

struct _DSSI_Descriptor
{
  // DSSI_API_Version
  signed int DSSI_API_Version;
  // LADSPA_Plugin
  const struct _LADSPA_Descriptor *LADSPA_Plugin;
  // configure
  char * (*configure)(void *, const char *, const char *);
  // get_program
  const struct _DSSI_Program_Descriptor * (*get_program)(void *, unsigned long int);
  // select_program
  void (*select_program)(void *, unsigned long int, unsigned long int);
  // get_midi_controller_for_port
  signed int (*get_midi_controller_for_port)(void *, unsigned long int);
  // run_synth
  void (*run_synth)(void *, unsigned long int, struct snd_seq_event *, unsigned long int);
  // run_synth_adding
  void (*run_synth_adding)(void *, unsigned long int, struct snd_seq_event *, unsigned long int);
  // run_multiple_synths
  void (*run_multiple_synths)(unsigned long int, void **, unsigned long int, struct snd_seq_event **, unsigned long int *);
  // run_multiple_synths_adding
  void (*run_multiple_synths_adding)(unsigned long int, void **, unsigned long int, struct snd_seq_event **, unsigned long int *);
};

struct _DSSI_Program_Descriptor
{
  // Bank
  unsigned long int Bank;
  // Program
  unsigned long int Program;
  // Name
  const char *Name;
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

struct _LADSPA_Descriptor
{
  // UniqueID
  unsigned long int UniqueID;
  // Label
  const char *Label;
  // Properties
  signed int Properties;
  // Name
  const char *Name;
  // Maker
  const char *Maker;
  // Copyright
  const char *Copyright;
  // PortCount
  unsigned long int PortCount;
  // PortDescriptors
  const signed int *PortDescriptors;
  // PortNames
  const char * const *PortNames;
  // PortRangeHints
  const struct _LADSPA_PortRangeHint *PortRangeHints;
  // ImplementationData
  void *ImplementationData;
  // instantiate
  void * (*instantiate)(struct _LADSPA_Descriptor *, unsigned long int);
  // connect_port
  void (*connect_port)(void *, unsigned long int, float *);
  // activate
  void (*activate)(void *);
  // run
  void (*run)(void *, unsigned long int);
  // run_adding
  void (*run_adding)(void *, unsigned long int);
  // set_run_adding_gain
  void (*set_run_adding_gain)(void *, float);
  // deactivate
  void (*deactivate)(void *);
  // cleanup
  void (*cleanup)(void *);
};

struct _LADSPA_PortRangeHint
{
  // HintDescriptor
  signed int HintDescriptor;
  // LowerBound
  float LowerBound;
  // UpperBound
  float UpperBound;
};

struct _d3h_dll_t
{
  // next
  struct _d3h_dll_t *next;
  // name
  char *name;
  // directory
  char *directory;
  // is_DSSI_dll
  signed int is_DSSI_dll;
  // descfn
  const struct _DSSI_Descriptor * (*descfn)(unsigned long int);
};

struct _d3h_instance_t
{
  // number
  signed int number;
  // plugin
  struct _d3h_plugin_t *plugin;
  // channel
  signed int channel;
  // inactive
  signed int inactive;
  // friendly_name
  char *friendly_name;
  // firstControlIn
  signed int firstControlIn;
  // pluginPortControlInNumbers
  signed int *pluginPortControlInNumbers;
  // controllerMap
  signed long int controllerMap[128l];
  // pluginProgramCount
  signed int pluginProgramCount;
  // pluginPrograms
  struct _DSSI_Program_Descriptor *pluginPrograms;
  // currentBank
  signed long int currentBank;
  // currentProgram
  signed long int currentProgram;
  // pendingBankLSB
  signed int pendingBankLSB;
  // pendingBankMSB
  signed int pendingBankMSB;
  // pendingProgramChange
  signed int pendingProgramChange;
  // uiTarget
  void *uiTarget;
  // uiSource
  void *uiSource;
  // ui_initial_show_sent
  signed int ui_initial_show_sent;
  // uiNeedsProgramUpdate
  signed int uiNeedsProgramUpdate;
  // ui_osc_control_path
  char *ui_osc_control_path;
  // ui_osc_configure_path
  char *ui_osc_configure_path;
  // ui_osc_program_path
  char *ui_osc_program_path;
  // ui_osc_quit_path
  char *ui_osc_quit_path;
  // ui_osc_rate_path
  char *ui_osc_rate_path;
  // ui_osc_show_path
  char *ui_osc_show_path;
};

struct _d3h_plugin_t
{
  // next
  struct _d3h_plugin_t *next;
  // number
  signed int number;
  // dll
  struct _d3h_dll_t *dll;
  // label
  char *label;
  // is_first_in_dll
  signed int is_first_in_dll;
  // descriptor
  const struct _DSSI_Descriptor *descriptor;
  // ins
  signed int ins;
  // outs
  signed int outs;
  // controlIns
  signed int controlIns;
  // controlOuts
  signed int controlOuts;
  // instances
  signed int instances;
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

struct pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
  // revents
  signed short int revents;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct snd_seq_event
{
  // type
  unsigned char type;
  // flags
  unsigned char flags;
  // tag
  unsigned char tag;
  // queue
  unsigned char queue;
  // time
  union snd_seq_timestamp time;
  // source
  struct snd_seq_addr source;
  // dest
  struct snd_seq_addr dest;
  // data
  union anonymous$0 data;
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


// _signals
// file jack-dssi-host.c line 103
static struct anonymous$5 _signals;
// alsaClient
// file jack-dssi-host.c line 67
static struct _snd_seq *alsaClient;
// autoconnect
// file jack-dssi-host.c line 107
static signed int autoconnect = 1;
// buffer
// file ../message_buffer/message_buffer.c line 16
static char buffer[16l][256l];
// channel2instance
// file jack-dssi-host.c line 92
static struct _d3h_instance_t *channel2instance[16l];
// controlInsTotal
// file jack-dssi-host.c line 90
static signed int controlInsTotal;
// controlOutsTotal
// file jack-dssi-host.c line 90
static signed int controlOutsTotal;
// dlls
// file jack-dssi-host.c line 73
static struct _d3h_dll_t *dlls;
// exiting
// file jack-dssi-host.c line 105
signed int exiting = 0;
// in_buffer
// file ../message_buffer/message_buffer.c line 19
static unsigned int in_buffer = (unsigned int)0;
// initialised
// file ../message_buffer/message_buffer.c line 18
static unsigned int initialised = (unsigned int)0;
// inputPorts
// file jack-dssi-host.c line 71
static struct _jack_port **inputPorts;
// insTotal
// file jack-dssi-host.c line 87
static signed int insTotal;
// instanceEventBuffers
// file jack-dssi-host.c line 84
static struct snd_seq_event **instanceEventBuffers;
// instanceEventCounts
// file jack-dssi-host.c line 85
static unsigned long int *instanceEventCounts;
// instanceHandles
// file jack-dssi-host.c line 83
static void **instanceHandles;
// instance_count
// file jack-dssi-host.c line 81
static signed int instance_count = 0;
// instances
// file jack-dssi-host.c line 80
static struct _d3h_instance_t instances[16l];
// jackClient
// file jack-dssi-host.c line 70
static struct _jack_client *jackClient;
// load_guis
// file jack-dssi-host.c line 108
static signed int load_guis = 1;
// mb_prefix
// file ../message_buffer/message_buffer.c line 17
static const char *mb_prefix;
// midiEventBuffer
// file jack-dssi-host.c line 112
static struct snd_seq_event midiEventBuffer[1024l];
// midiEventBufferMutex
// file jack-dssi-host.c line 115
static union anonymous$1 midiEventBufferMutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// midiEventReadIndex
// file jack-dssi-host.c line 113
static signed int midiEventReadIndex = 0;
// midiEventWriteIndex
// file jack-dssi-host.c line 113
static signed int midiEventWriteIndex = 0;
// myName
// file jack-dssi-host.c line 109
const char *myName = (const char *)(void *)0;
// osc_path_tmp
// file jack-dssi-host.c line 97
static char osc_path_tmp[1024l];
// out_buffer
// file ../message_buffer/message_buffer.c line 20
static unsigned int out_buffer = (unsigned int)0;
// outputPorts
// file jack-dssi-host.c line 71
static struct _jack_port **outputPorts;
// outsTotal
// file jack-dssi-host.c line 87
static signed int outsTotal;
// pluginControlInInstances
// file jack-dssi-host.c line 93
static struct _d3h_instance_t **pluginControlInInstances;
// pluginControlInPortNumbers
// file jack-dssi-host.c line 94
static unsigned long int *pluginControlInPortNumbers;
// pluginControlIns
// file jack-dssi-host.c line 91
static float *pluginControlIns;
// pluginControlOuts
// file jack-dssi-host.c line 91
static float *pluginControlOuts;
// pluginInputBuffers
// file jack-dssi-host.c line 88
static float **pluginInputBuffers;
// pluginOutputBuffers
// file jack-dssi-host.c line 88
static float **pluginOutputBuffers;
// pluginPortUpdated
// file jack-dssi-host.c line 95
static signed int *pluginPortUpdated;
// plugin_count
// file jack-dssi-host.c line 76
static signed int plugin_count = 0;
// plugins
// file jack-dssi-host.c line 75
static struct _d3h_plugin_t *plugins;
// projectDirectory
// file jack-dssi-host.c line 99
static char *projectDirectory;
// sample_rate
// file jack-dssi-host.c line 78
static float sample_rate;
// serverThread
// file jack-dssi-host.c line 101
void *serverThread;
// snd_seq_event_types
// file /usr/include/alsa/seq.h line 634
extern const unsigned int snd_seq_event_types[];
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// verbose
// file jack-dssi-host.c line 106
static signed int verbose = 0;
// writer_thread
// file ../message_buffer/message_buffer.c line 21
static unsigned long int writer_thread;

// add_message
// file ../message_buffer/message_buffer.h line 18
void add_message(const char *msg)
{
  __builtin_strncpy(buffer[(signed long int)in_buffer], msg, (unsigned long int)(256 - 1));
  in_buffer = in_buffer + (unsigned int)1 & (unsigned int)(16 - 1);
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1;
}

// audio_callback
// file jack-dssi-host.c line 241
signed int audio_callback(unsigned int nframes, void *arg)
{
  signed int i;
  signed int outCount;
  signed int inCount;
  struct _d3h_instance_t *instance;
  struct timeval tv;
  struct timeval evtv;
  struct timeval diff;
  signed long int framediff;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  i = 0;
  for( ; !(i >= instance_count); i = i + 1)
    instanceEventCounts[(signed long int)i] = (unsigned long int)0;
  for( ; !(midiEventReadIndex == midiEventWriteIndex); midiEventReadIndex = (midiEventReadIndex + 1) % 1024)
  {
    struct snd_seq_event *ev = &midiEventBuffer[(signed long int)midiEventReadIndex];
    if(!((6u & snd_seq_event_types[(signed long int)ev->type]) == 0u))
    {
      instance = channel2instance[(signed long int)ev->data.note.channel];
      if(!(instance == ((struct _d3h_instance_t *)NULL)))
      {
        i = instance->number;
        if(instanceEventCounts[(signed long int)i] == 1024ul)
          break;

        evtv.tv_sec = (signed long int)ev->time.time.tv_sec;
        evtv.tv_usec = (signed long int)(ev->time.time.tv_nsec / (unsigned int)1000);
        if(evtv.tv_sec == tv.tv_sec && !(tv.tv_usec >= evtv.tv_usec) || !(tv.tv_sec >= evtv.tv_sec))
          break;

        diff.tv_sec = tv.tv_sec - evtv.tv_sec;
        if(!(tv.tv_usec >= evtv.tv_usec))
        {
          diff.tv_sec = diff.tv_sec - 1l;
          diff.tv_usec = (tv.tv_usec + (signed long int)1000000) - evtv.tv_usec;
        }

        else
          diff.tv_usec = tv.tv_usec - evtv.tv_usec;
        framediff = (signed long int)((float)diff.tv_sec * sample_rate + ((float)(diff.tv_usec / (signed long int)1000) * sample_rate) / (float)1000 + ((float)(diff.tv_usec - (signed long int)1000 * (diff.tv_usec / (signed long int)1000)) * sample_rate) / (float)1000000);
        if(framediff >= (signed long int)nframes)
          framediff = (signed long int)(nframes - (unsigned int)1);

        else
          if(!(framediff >= 0l))
            framediff = (signed long int)0;

        ev->time.tick = (unsigned int)(((signed long int)nframes - framediff) - (signed long int)1);
        if((signed int)ev->type == 10)
        {
          signed int controller = (signed int)ev->data.control.param;
          if(controller == 0)
            instance->pendingBankMSB = ev->data.control.value;

          else
            if(controller == 32)
              instance->pendingBankLSB = ev->data.control.value;

            else
              if(controller >= 1 && !(controller >= 128))
              {
                signed long int controlIn = instance->controllerMap[(signed long int)controller];
                if(controlIn >= 0l)
                  setControl(instance, controlIn, ev);

                else
                {
                  instanceEventBuffers[(signed long int)i][(signed long int)instanceEventCounts[(signed long int)i]] = *ev;
                  instanceEventCounts[(signed long int)i] = instanceEventCounts[(signed long int)i] + 1ul;
                }
              }

        }

        else
          if((signed int)ev->type == 11)
          {
            instance->pendingProgramChange = ev->data.control.value;
            instance->uiNeedsProgramUpdate = 1;
          }

          else
          {
            instanceEventBuffers[(signed long int)i][(signed long int)instanceEventCounts[(signed long int)i]] = *ev;
            instanceEventCounts[(signed long int)i] = instanceEventCounts[(signed long int)i] + 1ul;
          }
      }

    }

  }
  i = 0;
  for( ; !(i >= instance_count); i = i + 1)
  {
    instance = &instances[(signed long int)i];
    if(instance->pendingProgramChange >= 0)
    {
      signed int pc = instance->pendingProgramChange;
      signed int msb = instance->pendingBankMSB;
      signed int lsb = instance->pendingBankLSB;
      if(lsb >= 0)
      {
        if(msb >= 0)
          instance->currentBank = (signed long int)(lsb + 128 * msb);

        else
          instance->currentBank = (signed long int)lsb + (signed long int)128 * (instance->currentBank / (signed long int)128);
      }

      else
        if(msb >= 0)
          instance->currentBank = instance->currentBank % (signed long int)128 + (signed long int)(128 * msb);

      instance->currentProgram = (signed long int)pc;
      instance->pendingProgramChange = -1;
      instance->pendingBankMSB = -1;
      instance->pendingBankLSB = -1;
      if(!(instance->plugin->descriptor->select_program == ((void (*)(void *, unsigned long int, unsigned long int))NULL)))
        instance->plugin->descriptor->select_program(instanceHandles[(signed long int)instance->number], (unsigned long int)instance->currentBank, (unsigned long int)instance->currentProgram);

    }

  }
  inCount = 0;
  for( ; !(inCount >= insTotal); inCount = inCount + 1)
  {
    float *audio_callback$$1$$4$$1$$buffer;
    void *return_value_jack_port_get_buffer$1;
    return_value_jack_port_get_buffer$1=jack_port_get_buffer(inputPorts[(signed long int)inCount], nframes);
    audio_callback$$1$$4$$1$$buffer = (float *)return_value_jack_port_get_buffer$1;
    memcpy((void *)pluginInputBuffers[(signed long int)inCount], (const void *)audio_callback$$1$$4$$1$$buffer, (unsigned long int)nframes * sizeof(float) /*4ul*/ );
  }
  i = 0;
  outCount = 0;
  while(!(i >= instance_count))
  {
    outCount = outCount + instances[(signed long int)i].plugin->outs;
    if(!(instances[(signed long int)i].plugin->descriptor->run_multiple_synths == ((void (*)(unsigned long int, void **, unsigned long int, struct snd_seq_event **, unsigned long int *))NULL)))
    {
      instances[(signed long int)i].plugin->descriptor->run_multiple_synths((unsigned long int)instances[(signed long int)i].plugin->instances, instanceHandles + (signed long int)i, (unsigned long int)nframes, instanceEventBuffers + (signed long int)i, instanceEventCounts + (signed long int)i);
      i = i + instances[(signed long int)i].plugin->instances;
    }

    else
      if(!(instances[(signed long int)i].plugin->descriptor->run_synth == ((void (*)(void *, unsigned long int, struct snd_seq_event *, unsigned long int))NULL)))
      {
        instances[(signed long int)i].plugin->descriptor->run_synth(instanceHandles[(signed long int)i], (unsigned long int)nframes, instanceEventBuffers[(signed long int)i], instanceEventCounts[(signed long int)i]);
        i = i + 1;
      }

      else
        if(!(instances[(signed long int)i].plugin->descriptor->LADSPA_Plugin->run == ((void (*)(void *, unsigned long int))NULL)))
        {
          instances[(signed long int)i].plugin->descriptor->LADSPA_Plugin->run(instanceHandles[(signed long int)i], (unsigned long int)nframes);
          i = i + 1;
        }

        else
        {
          fprintf(stderr, "DSSI plugin %d has no run_multiple_synths, run_synth or run method!\n", i);
          i = i + 1;
        }
  }
  /* assertion sizeof(LADSPA_Data) == sizeof(jack_default_audio_sample_t) */
  assert(sizeof(float) /*4ul*/  == sizeof(float) /*4ul*/ );
  outCount = 0;
  for( ; !(outCount >= outsTotal); outCount = outCount + 1)
  {
    float *audio_callback$$1$$6$$1$$buffer;
    void *return_value_jack_port_get_buffer$2;
    return_value_jack_port_get_buffer$2=jack_port_get_buffer(outputPorts[(signed long int)outCount], nframes);
    audio_callback$$1$$6$$1$$buffer = (float *)return_value_jack_port_get_buffer$2;
    memcpy((void *)audio_callback$$1$$6$$1$$buffer, (const void *)pluginOutputBuffers[(signed long int)outCount], (unsigned long int)nframes * sizeof(float) /*4ul*/ );
  }
  return 0;
}

// get_port_default
// file jack-dssi-host.c line 1492
float get_port_default(const struct _LADSPA_Descriptor *plugin, signed int port)
{
  struct _LADSPA_PortRangeHint hint = plugin->PortRangeHints[(signed long int)port];
  float lower = hint.LowerBound * ((hint.HintDescriptor & 0x8) != 0 ? sample_rate : 1.0f);
  float upper = hint.UpperBound * ((hint.HintDescriptor & 0x8) != 0 ? sample_rate : 1.0f);
  if((0x3C0 & hint.HintDescriptor) == 0)
  {
    if((0x1 & hint.HintDescriptor) == 0 || (0x2 & hint.HintDescriptor) == 0)
      return 0.0f;

    if(lower <= 0.0f && upper >= 0.0f)
      return 0.0f;

    return lower;
  }

  else
  {
    if((0x3C0 & hint.HintDescriptor) == 0x200)
      return 0.0f;

    else
      if((0x3C0 & hint.HintDescriptor) == 0x240)
        return 1.0f;

      else
        if((0x3C0 & hint.HintDescriptor) == 0x280)
          return 100.0f;

        else
          if((0x3C0 & hint.HintDescriptor) == 0x2C0)
            return 440.0f;

    if(!((0x1 & hint.HintDescriptor) == 0))
    {
      if(!((0x3C0 & hint.HintDescriptor) == 0x40))
        goto __CPROVER_DUMP_L8;

      return lower;
    }

    else
    {

    __CPROVER_DUMP_L8:
      ;
      if(!((0x2 & hint.HintDescriptor) == 0))
      {
        if((0x3C0 & hint.HintDescriptor) == 0x140)
          return upper;

        if((0x1 & hint.HintDescriptor) == 0)
          goto __CPROVER_DUMP_L16;

        if(lower > 0.0f && upper > 0.0f && !((0x10 & hint.HintDescriptor) == 0))
        {
          if((0x3C0 & hint.HintDescriptor) == 0x80)
          {
            float return_value_logf$1;
            return_value_logf$1=logf(lower);
            float return_value_logf$2;
            return_value_logf$2=logf(upper);
            float return_value_expf$3;
            return_value_expf$3=expf(return_value_logf$1 * 0.75f + return_value_logf$2 * 0.25f);
            return return_value_expf$3;
          }

          else
            if((0x3C0 & hint.HintDescriptor) == 0xC0)
            {
              float return_value_logf$4;
              return_value_logf$4=logf(lower);
              float return_value_logf$5;
              return_value_logf$5=logf(upper);
              float return_value_expf$6;
              return_value_expf$6=expf(return_value_logf$4 * 0.5f + return_value_logf$5 * 0.5f);
              return return_value_expf$6;
            }

            else
              if((0x3C0 & hint.HintDescriptor) == 0x100)
              {
                float return_value_logf$7;
                return_value_logf$7=logf(lower);
                float return_value_logf$8;
                return_value_logf$8=logf(upper);
                float return_value_expf$9;
                return_value_expf$9=expf(return_value_logf$7 * 0.25f + return_value_logf$8 * 0.75f);
                return return_value_expf$9;
              }

          goto __CPROVER_DUMP_L16;
        }

        if((0x3C0 & hint.HintDescriptor) == 0x80)
          return lower * 0.75f + upper * 0.25f;

        if((0x3C0 & hint.HintDescriptor) == 0xC0)
          return lower * 0.5f + upper * 0.5f;

        if(!((0x3C0 & hint.HintDescriptor) == 0x100))
          goto __CPROVER_DUMP_L16;

        return lower * 0.25f + upper * 0.75f;
      }

      else
      {

      __CPROVER_DUMP_L16:
        ;
        return 0.0f;
      }
    }
  }
}

// instance_sort_cmp
// file jack-dssi-host.c line 567
static signed int instance_sort_cmp(const void *a, const void *b)
{
  struct _d3h_instance_t *ia = (struct _d3h_instance_t *)a;
  struct _d3h_instance_t *ib = (struct _d3h_instance_t *)b;
  if(!(ia->plugin->number == ib->plugin->number))
    return ia->plugin->number - ib->plugin->number;

  else
    return ia->channel - ib->channel;
}

// load
// file jack-dssi-host.c line 474
char * load(const char *dllName, void **dll, signed int quiet)
{
  const char *dssiPath;
  dssiPath=getenv("DSSI_PATH");
  char *path;
  char *origPath;
  char *element;
  char *message;
  void *handle = NULL;
  if((signed int)*dllName == 47)
  {
    handle=dlopen(dllName, 0x00002 | 0);
    if(!(handle == NULL))
    {
      *dll = handle;
      char *return_value___strdup$1;
      return_value___strdup$1=__strdup(dllName);
      path = return_value___strdup$1;
      char *return_value_dirname$2;
      return_value_dirname$2=dirname(path);
      return return_value_dirname$2;
    }

    if(quiet == 0)
      fprintf(stderr, "Cannot find DSSI or LADSPA plugin at '%s'\n", dllName);

    return (char *)(void *)0;
  }

  else
  {
    if(dssiPath == ((const char *)NULL))
    {
      static char *defaultDssiPath = ((char *)NULL);
      if(defaultDssiPath == ((char *)NULL))
      {
        const char *home;
        home=getenv("HOME");
        if(!(home == ((const char *)NULL)))
        {
          unsigned long int return_value_strlen$3;
          return_value_strlen$3=strlen(home);
          void *return_value_malloc$4;
          return_value_malloc$4=malloc(return_value_strlen$3 + (unsigned long int)60);
          defaultDssiPath = (char *)return_value_malloc$4;
          sprintf(defaultDssiPath, "/usr/local/lib/dssi:/usr/lib/dssi:%s/.dssi", home);
        }

        else
        {
          char *return_value___strdup$5;
          return_value___strdup$5=__strdup("/usr/local/lib/dssi:/usr/lib/dssi");
          defaultDssiPath = return_value___strdup$5;
        }
      }

      dssiPath = defaultDssiPath;
      if(quiet == 0)
        fprintf(stderr, "\n%s: Warning: DSSI path not set\n%s: Defaulting to \"%s\"\n\n", myName, myName, dssiPath);

    }

    char *return_value___strdup$6;
    return_value___strdup$6=__strdup(dssiPath);
    path = return_value___strdup$6;
    origPath = path;
    *dll = NULL;
    do
    {
      element=strtok(path, ":");
      if(element == ((char *)NULL))
        break;

      char *filePath;
      path = ((char *)NULL);
      if(!((signed int)*element == 47))
      {
        if(quiet == 0)
          fprintf(stderr, "%s: Ignoring relative element \"%s\" in path\n", myName, element);

      }

      else
      {
        if(quiet == 0 && !(verbose == 0))
          fprintf(stderr, "%s: Looking for library \"%s\" in %s... ", myName, dllName, element);

        unsigned long int return_value_strlen$7;
        return_value_strlen$7=strlen(element);
        unsigned long int return_value_strlen$8;
        return_value_strlen$8=strlen(dllName);
        void *return_value_malloc$9;
        return_value_malloc$9=malloc(return_value_strlen$7 + return_value_strlen$8 + (unsigned long int)2);
        filePath = (char *)return_value_malloc$9;
        sprintf(filePath, "%s/%s", element, dllName);
        handle=dlopen(filePath, 0x00002 | 0);
        if(!(handle == NULL))
        {
          if(quiet == 0 && !(verbose == 0))
            fprintf(stderr, "found\n");

          *dll = handle;
          free((void *)filePath);
          char *return_value___strdup$10;
          return_value___strdup$10=__strdup(element);
          path = return_value___strdup$10;
          free((void *)origPath);
          return path;
        }

        if(quiet == 0 && !(verbose == 0))
        {
          message=dlerror();
          if(!(message == ((char *)NULL)))
            fprintf(stderr, "not found: %s\n", message);

          else
            fprintf(stderr, "not found\n");
        }

        free((void *)filePath);
      }
    }
    while((_Bool)1);
    free((void *)origPath);
    return ((char *)NULL);
  }
}

// main
// file jack-dssi-host.c line 729
signed int main(signed int argc, char **argv)
{
  signed int portid;
  signed int npfd;
  struct pollfd *pfd;
  struct _d3h_dll_t *dll;
  struct _d3h_plugin_t *plugin;
  struct _d3h_instance_t *instance;
  void *pluginObject;
  char *dllName;
  char *label;
  const char **ports;
  char *tmp;
  char *url;
  signed int i;
  signed int reps;
  signed int j;
  signed int in;
  signed int out;
  signed int controlIn;
  signed int controlOut;
  char clientName[33l];
  signed int haveClientName = 0;
  const signed int clientLen = 32;
  enum JackStatus status;
  setsid();
  sigemptyset(&_signals);
  sigaddset(&_signals, 1);
  sigaddset(&_signals, 2);
  sigaddset(&_signals, 3);
  sigaddset(&_signals, 13);
  sigaddset(&_signals, 15);
  sigaddset(&_signals, 10);
  sigaddset(&_signals, 12);
  pthread_sigmask(0, &_signals, ((struct anonymous$5 *)NULL));
  controlOutsTotal = 0;
  controlInsTotal = controlOutsTotal;
  outsTotal = controlInsTotal;
  insTotal = outsTotal;
  signed int tmp_statement_expression$6;
  if(argc == 1)
  {
    const char *__xpg_basename;
    __xpg_basename=strrchr(argv[(signed long int)0], 47);
    if(__xpg_basename == ((const char *)NULL))
      __xpg_basename = argv[(signed long int)0];

    else
      __xpg_basename = __xpg_basename + 1l;
    if(!(*__xpg_basename == 0))
    {
      unsigned long int main$$1$$1$$1$$__s1_len;
      unsigned long int main$$1$$1$$1$$__s2_len;
      signed int return_value___builtin_strcmp$7;
      return_value___builtin_strcmp$7=__builtin_strcmp(__xpg_basename, "jack-dssi-host");
      tmp_statement_expression$6 = return_value___builtin_strcmp$7;
      if(!(tmp_statement_expression$6 == 0))
      {
        unsigned long int return_value_strlen$1;
        return_value_strlen$1=strlen(__xpg_basename);
        void *return_value_malloc$2;
        return_value_malloc$2=malloc(return_value_strlen$1 + (unsigned long int)4);
        dllName = (char *)return_value_malloc$2;
        sprintf(dllName, "%s.so", __xpg_basename);
        char *return_value_load$5;
        return_value_load$5=load(dllName, &pluginObject, 1);
        if(!(return_value_load$5 == ((char *)NULL)))
        {
          dlclose(pluginObject);
          argc = 2;
          char *return_value___strdup$3;
          return_value___strdup$3=__strdup(argv[(signed long int)0]);
          myName = return_value___strdup$3;
          void *return_value_malloc$4;
          return_value_malloc$4=malloc((unsigned long int)2 * sizeof(char *) /*8ul*/ );
          argv = (char **)return_value_malloc$4;
          argv[(signed long int)0] = "jack-dssi-host";
          argv[(signed long int)1] = dllName;
        }

      }

    }

  }

  char *return_value___strdup$8;
  if(myName == ((const char *)NULL))
  {
    return_value___strdup$8=__strdup(argv[(signed long int)0]);
    myName = return_value___strdup$8;
  }

  signed int tmp_statement_expression$9;
  signed int tmp_statement_expression$11;
  signed int tmp_statement_expression$13;
  signed int tmp_statement_expression$15;
  signed int tmp_statement_expression$17;
  signed int tmp_statement_expression$25;
  signed int tmp_statement_expression$23;
  signed int tmp_statement_expression$27;
  signed int tmp_statement_expression$30;
  signed int tmp_post$35;
  _Bool tmp_if_expr$38;
  signed int tmp_statement_expression$36;
  signed int tmp_post$40;
  _Bool tmp_if_expr$43;
  signed int tmp_statement_expression$41;
  char *tmp_if_expr$44;
  _Bool tmp_if_expr$54;
  unsigned long int return_value_strlen$52;
  signed int return_value_strcasecmp$53;
  _Bool tmp_if_expr$76;
  signed int tmp_statement_expression$74;
  _Bool tmp_if_expr$73;
  signed int tmp_statement_expression$71;
  signed int tmp_post$88;
  signed int tmp_post$89;
  signed int tmp_post$90;
  signed int tmp_post$91;
  if(!(argc >= 2))
  {
    fprintf(stderr, "\nUsage: %s [-v] [-a] [-n] [-p <projdir>] [-c <cname>] [-<i>] <libname>[%c<label>] [...]\n", argv[(signed long int)0], 58);
    fprintf(stderr, "\n  -v        Verbose mode\n");
    fprintf(stderr, "  -a        Don't autoconnect outputs to JACK physical outputs\n");
    fprintf(stderr, "  -n        Don't automatically start plugin GUIs\n");
    fprintf(stderr, "  <projdir> Project directory to pass to plugin and UI\n");
    fprintf(stderr, "  <cname>   Client name to use for ALSA and JACK\n");
    fprintf(stderr, "  <i>       Number of instances of each plugin to run (max %d total, default 1)\n", 16);
    fprintf(stderr, "  <libname> DSSI plugin library .so to load (searched for in $DSSI_PATH)\n");
    fprintf(stderr, "  <label>   Label of plugin to load from library\n");
    fprintf(stderr, "  [...]     Optionally more instance counts, plugins and labels\n");
    fprintf(stderr, "\nExample: %s -2 lib1.so -1 lib2.so%cfuzzy\n", argv[(signed long int)0], 58);
    fprintf(stderr, "  run two instances of the first plugin found in lib1.so, assigned to MIDI\n  channels 0 and 1 and connected to the first available JACK outputs, and one\n  instance of the \"fuzzy\" plugin in lib2.so with MIDI channels 2 and 3 and\n  connected to the next available JACK outputs.\n");
    fprintf(stderr, "\nAs a special case, if this program is started with a name other than\njack-dssi-host, and if that name (plus .so suffix) can be found in the DSSI path\nas a valid plugin library, and if no further command line arguments are given,\nthen the first plugin in that library will be loaded automatically.\n\n");
    return 2;
  }

  else
  {
    if(!(verbose == 0))
      fprintf(stderr, "%s: Starting...\n", myName);

    projectDirectory = (char *)(void *)0;
    reps = 1;
    i = 1;
    for( ; !(i >= argc); i = i + 1)
    {
      unsigned long int main$$1$$5$$1$$1$$__s1_len;
      unsigned long int main$$1$$5$$1$$1$$__s2_len;
      signed int return_value___builtin_strcmp$10;
      return_value___builtin_strcmp$10=__builtin_strcmp(argv[(signed long int)i], "-v");
      tmp_statement_expression$9 = return_value___builtin_strcmp$10;
      if(tmp_statement_expression$9 == 0)
        verbose = 1;

      else
      {
        unsigned long int main$$1$$5$$1$$3$$__s1_len;
        unsigned long int main$$1$$5$$1$$3$$__s2_len;
        signed int return_value___builtin_strcmp$12;
        return_value___builtin_strcmp$12=__builtin_strcmp(argv[(signed long int)i], "-a");
        tmp_statement_expression$11 = return_value___builtin_strcmp$12;
        if(tmp_statement_expression$11 == 0)
          autoconnect = 0;

        else
        {
          unsigned long int main$$1$$5$$1$$5$$__s1_len;
          unsigned long int main$$1$$5$$1$$5$$__s2_len;
          signed int return_value___builtin_strcmp$14;
          return_value___builtin_strcmp$14=__builtin_strcmp(argv[(signed long int)i], "-n");
          tmp_statement_expression$13 = return_value___builtin_strcmp$14;
          if(tmp_statement_expression$13 == 0)
            load_guis = 0;

          else
          {
            unsigned long int main$$1$$5$$1$$7$$__s1_len;
            unsigned long int main$$1$$5$$1$$7$$__s2_len;
            signed int return_value___builtin_strcmp$16;
            return_value___builtin_strcmp$16=__builtin_strcmp(argv[(signed long int)i], "-p");
            tmp_statement_expression$15 = return_value___builtin_strcmp$16;
            if(tmp_statement_expression$15 == 0)
            {
              if(!(i >= argc + -1))
              {
                i = i + 1;
                projectDirectory = argv[(signed long int)i];
              }

              else
              {
                fprintf(stderr, "%s: project directory expected after -p\n", myName);
                return 2;
              }
            }

            else
            {
              unsigned long int main$$1$$5$$1$$9$$__s1_len;
              unsigned long int main$$1$$5$$1$$9$$__s2_len;
              signed int return_value___builtin_strcmp$18;
              return_value___builtin_strcmp$18=__builtin_strcmp(argv[(signed long int)i], "-c");
              tmp_statement_expression$17 = return_value___builtin_strcmp$18;
              if(tmp_statement_expression$17 == 0)
              {
                if(!(i >= argc + -1))
                {
                  i = i + 1;
                  __builtin_strncpy(clientName, argv[(signed long int)i], (unsigned long int)clientLen);
                  clientName[(signed long int)clientLen] = (char)0;
                  haveClientName = 1;
                }

                else
                {
                  fprintf(stderr, "%s: client name expected after -c\n", myName);
                  return 2;
                }
              }

              else
              {
                if(instance_count >= 16)
                {
                  fprintf(stderr, "%s: too many plugin instances specified (max is %d)\n", myName, 16);
                  return 2;
                }

                if((signed int)*argv[(signed long int)i] == 45)
                {
                  reps=atoi(&argv[(signed long int)i][(signed long int)1]);
                  if(reps >= 1)
                    goto __CPROVER_DUMP_L70;

                  else
                    reps = 1;
                }

                char *return_value___builtin_strchr$19;
                return_value___builtin_strchr$19=__builtin_strchr(argv[(signed long int)i], 58);
                tmp = return_value___builtin_strchr$19;
                if(!(tmp == ((char *)NULL)))
                {
                  void *return_value_calloc$20;
                  return_value_calloc$20=calloc((unsigned long int)1, (unsigned long int)((tmp - argv[(signed long int)i]) + (signed long int)1));
                  dllName = (char *)return_value_calloc$20;
                  __builtin_strncpy(dllName, argv[(signed long int)i], (unsigned long int)(tmp - argv[(signed long int)i]));
                  char *return_value___strdup$21;
                  return_value___strdup$21=__strdup(tmp + (signed long int)1);
                  label = return_value___strdup$21;
                }

                else
                {
                  char *return_value___strdup$22;
                  return_value___strdup$22=__strdup(argv[(signed long int)i]);
                  dllName = return_value___strdup$22;
                  label = (char *)(void *)0;
                }
                plugin = plugins;
                for( ; !(plugin == ((struct _d3h_plugin_t *)NULL)); plugin = plugin->next)
                  if(!(label == ((char *)NULL)))
                  {
                    unsigned long int main$$1$$5$$1$$15$$1$$1$$1$$__s1_len;
                    unsigned long int main$$1$$5$$1$$15$$1$$1$$1$$__s2_len;
                    signed int return_value___builtin_strcmp$26;
                    return_value___builtin_strcmp$26=__builtin_strcmp(dllName, plugin->dll->name);
                    tmp_statement_expression$25 = return_value___builtin_strcmp$26;
                    if(tmp_statement_expression$25 == 0)
                    {
                      unsigned long int main$$1$$5$$1$$15$$1$$1$$2$$__s1_len;
                      unsigned long int main$$1$$5$$1$$15$$1$$1$$2$$__s2_len;
                      signed int return_value___builtin_strcmp$24;
                      return_value___builtin_strcmp$24=__builtin_strcmp(label, plugin->label);
                      tmp_statement_expression$23 = return_value___builtin_strcmp$24;
                      if(tmp_statement_expression$23 == 0)
                        break;

                    }

                  }

                  else
                  {
                    unsigned long int main$$1$$5$$1$$15$$1$$2$$1$$__s1_len;
                    unsigned long int main$$1$$5$$1$$15$$1$$2$$1$$__s2_len;
                    signed int return_value___builtin_strcmp$28;
                    return_value___builtin_strcmp$28=__builtin_strcmp(dllName, plugin->dll->name);
                    tmp_statement_expression$27 = return_value___builtin_strcmp$28;
                    if(tmp_statement_expression$27 == 0)
                    {
                      if(!(plugin->is_first_in_dll == 0))
                        break;

                    }

                  }
                if(!(plugin == ((struct _d3h_plugin_t *)NULL)))
                {
                  free((void *)dllName);
                  free((void *)label);
                }

                else
                {
                  void *return_value_calloc$29;
                  return_value_calloc$29=calloc((unsigned long int)1, sizeof(struct _d3h_plugin_t) /*72ul*/ );
                  plugin = (struct _d3h_plugin_t *)return_value_calloc$29;
                  plugin->number = plugin_count;
                  plugin->label = label;
                  dll = dlls;
                  for( ; !(dll == ((struct _d3h_dll_t *)NULL)); dll = dll->next)
                  {
                    unsigned long int __s1_len;
                    unsigned long int __s2_len;
                    signed int return_value___builtin_strcmp$31;
                    return_value___builtin_strcmp$31=__builtin_strcmp(dllName, dll->name);
                    tmp_statement_expression$30 = return_value___builtin_strcmp$31;
                    if(tmp_statement_expression$30 == 0)
                      break;

                  }
                  if(dll == ((struct _d3h_dll_t *)NULL))
                  {
                    void *return_value_calloc$32;
                    return_value_calloc$32=calloc((unsigned long int)1, sizeof(struct _d3h_dll_t) /*40ul*/ );
                    dll = (struct _d3h_dll_t *)return_value_calloc$32;
                    dll->name = dllName;
                    dll->directory=load(dllName, &pluginObject, 0);
                    if(dll->directory == ((char *)NULL) || pluginObject == NULL)
                    {
                      fprintf(stderr, "\n%s: Error: Failed to load plugin library \"%s\"\n", myName, dllName);
                      return 1;
                    }

                    void *return_value_dlsym$33;
                    return_value_dlsym$33=dlsym(pluginObject, "dssi_descriptor");
                    dll->descfn = (const struct _DSSI_Descriptor * (*)(unsigned long int))return_value_dlsym$33;
                    if(!(dll->descfn == ((const struct _DSSI_Descriptor * (*)(unsigned long int))NULL)))
                      dll->is_DSSI_dll = 1;

                    else
                    {
                      void *return_value_dlsym$34;
                      return_value_dlsym$34=dlsym(pluginObject, "ladspa_descriptor");
                      dll->descfn = (const struct _DSSI_Descriptor * (*)(unsigned long int))return_value_dlsym$34;
                      if(dll->descfn == ((const struct _DSSI_Descriptor * (*)(unsigned long int))NULL))
                      {
                        fprintf(stderr, "\n%s: Error: \"%s\" is not a DSSI or LADSPA plugin library\n", myName, dllName);
                        return 1;
                      }

                      dll->is_DSSI_dll = 0;
                    }
                    dll->next = dlls;
                    dlls = dll;
                  }

                  plugin->dll = dll;
                  j = 0;
                  if(!(dll->is_DSSI_dll == 0))
                  {
                    const struct _DSSI_Descriptor *desc;
                    tmp_post$35 = j;
                    j = j + 1;
                    desc=dll->descfn((unsigned long int)tmp_post$35);
                    if(!(desc == ((const struct _DSSI_Descriptor *)NULL)))
                    {
                      if(plugin->label == ((char *)NULL))
                        tmp_if_expr$38 = (_Bool)1;

                      else
                      {
                        unsigned long int main$$1$$5$$1$$17$$3$$1$$1$$__s1_len;
                        unsigned long int main$$1$$5$$1$$17$$3$$1$$1$$__s2_len;
                        signed int return_value___builtin_strcmp$37;
                        return_value___builtin_strcmp$37=__builtin_strcmp(desc->LADSPA_Plugin->Label, plugin->label);
                        tmp_statement_expression$36 = return_value___builtin_strcmp$37;
                        tmp_if_expr$38 = !(tmp_statement_expression$36 != 0) ? (_Bool)1 : (_Bool)0;
                      }
                      if(tmp_if_expr$38)
                        plugin->descriptor = desc;

                    }

                  }

                  else
                  {
                    struct _LADSPA_Descriptor *main$$1$$5$$1$$17$$4$$desc;
                    void *return_value_calloc$39;
                    return_value_calloc$39=calloc((unsigned long int)1, sizeof(struct _DSSI_Descriptor) /*80ul*/ );
                    plugin->descriptor = (const struct _DSSI_Descriptor *)return_value_calloc$39;
                    ((struct _DSSI_Descriptor *)plugin->descriptor)->DSSI_API_Version = 1;
                    tmp_post$40 = j;
                    j = j + 1;
                    const struct _DSSI_Descriptor *return_value;
                    return_value=dll->descfn((unsigned long int)tmp_post$40);
                    main$$1$$5$$1$$17$$4$$desc = (struct _LADSPA_Descriptor *)return_value;
                    if(!(main$$1$$5$$1$$17$$4$$desc == ((struct _LADSPA_Descriptor *)NULL)))
                    {
                      if(plugin->label == ((char *)NULL))
                        tmp_if_expr$43 = (_Bool)1;

                      else
                      {
                        unsigned long int main$$1$$5$$1$$17$$4$$1$$1$$__s1_len;
                        unsigned long int main$$1$$5$$1$$17$$4$$1$$1$$__s2_len;
                        signed int return_value___builtin_strcmp$42;
                        return_value___builtin_strcmp$42=__builtin_strcmp(main$$1$$5$$1$$17$$4$$desc->Label, plugin->label);
                        tmp_statement_expression$41 = return_value___builtin_strcmp$42;
                        tmp_if_expr$43 = !(tmp_statement_expression$41 != 0) ? (_Bool)1 : (_Bool)0;
                      }
                      if(tmp_if_expr$43)
                        ((struct _DSSI_Descriptor *)plugin->descriptor)->LADSPA_Plugin = main$$1$$5$$1$$17$$4$$desc;

                    }

                    if(plugin->descriptor->LADSPA_Plugin == ((const struct _LADSPA_Descriptor *)NULL))
                    {
                      free((void *)plugin->descriptor);
                      plugin->descriptor = (const struct _DSSI_Descriptor *)(void *)0;
                    }

                  }
                  if(plugin->descriptor == ((const struct _DSSI_Descriptor *)NULL))
                  {
                    if(!(plugin->label == ((char *)NULL)))
                      tmp_if_expr$44 = plugin->label;

                    else
                      tmp_if_expr$44 = "(none)";
                    fprintf(stderr, "\n%s: Error: Plugin label \"%s\" not found in library \"%s\"\n", myName, tmp_if_expr$44, dllName);
                    return 1;
                  }

                  j = 1;
                  plugin->is_first_in_dll = j;
                  if(plugin->label == ((char *)NULL))
                  {
                    char *return_value___strdup$45;
                    return_value___strdup$45=__strdup(plugin->descriptor->LADSPA_Plugin->Label);
                    plugin->label = return_value___strdup$45;
                  }

                  plugin->ins = 0;
                  plugin->outs = 0;
                  plugin->controlIns = 0;
                  plugin->controlOuts = 0;
                  j = 0;
                  if(!((unsigned long int)j >= plugin->descriptor->LADSPA_Plugin->PortCount))
                  {
                    signed int pod = plugin->descriptor->LADSPA_Plugin->PortDescriptors[(signed long int)j];
                    if(!((0x8 & pod) == 0))
                    {
                      if(!((0x1 & pod) == 0))
                        plugin->ins = plugin->ins + 1;

                      else
                        if(!((0x2 & pod) == 0))
                          plugin->outs = plugin->outs + 1;

                    }

                    else
                      if(!((0x4 & pod) == 0))
                      {
                        if(!((0x1 & pod) == 0))
                          plugin->controlIns = plugin->controlIns + 1;

                        else
                          if(!((0x2 & pod) == 0))
                            plugin->controlOuts = plugin->controlOuts + 1;

                      }

                    j = j + 1;
                  }

                  plugin->instances = 0;
                  plugin->next = plugins;
                  plugins = plugin;
                  plugin_count = plugin_count + 1;
                }
                j = 0;
                for( ; !(j >= reps); j = j + 1)
                  if(!(instance_count >= 16))
                  {
                    instance = &instances[(signed long int)instance_count];
                    instance->plugin = plugin;
                    instance->channel = instance_count;
                    instance->inactive = 1;
                    unsigned long int return_value_strlen$46;
                    return_value_strlen$46=strlen(plugin->dll->name);
                    unsigned long int return_value_strlen$47;
                    return_value_strlen$47=strlen(plugin->label);
                    void *return_value_malloc$48;
                    return_value_malloc$48=malloc(return_value_strlen$46 + return_value_strlen$47 + (unsigned long int)9);
                    tmp = (char *)return_value_malloc$48;
                    instance->friendly_name = tmp;
                    strcpy(tmp, plugin->dll->name);
                    unsigned long int return_value_strlen$51;
                    return_value_strlen$51=strlen(tmp);
                    if(return_value_strlen$51 >= 4ul)
                    {
                      return_value_strlen$52=strlen(tmp);
                      return_value_strcasecmp$53=strcasecmp((tmp + (signed long int)return_value_strlen$52) - (signed long int)3, ".so");
                      tmp_if_expr$54 = !(return_value_strcasecmp$53 != 0) ? (_Bool)1 : (_Bool)0;
                    }

                    else
                      tmp_if_expr$54 = (_Bool)0;
                    if(tmp_if_expr$54)
                    {
                      unsigned long int return_value_strlen$49;
                      return_value_strlen$49=strlen(tmp);
                      tmp = (tmp + (signed long int)return_value_strlen$49) - (signed long int)3;
                    }

                    else
                    {
                      unsigned long int return_value_strlen$50;
                      return_value_strlen$50=strlen(tmp);
                      tmp = tmp + (signed long int)return_value_strlen$50;
                    }
                    sprintf(tmp, "/%s/chan%02d", plugin->label, instance->channel);
                    instance->pluginProgramCount = 0;
                    instance->pluginPrograms = (struct _DSSI_Program_Descriptor *)(void *)0;
                    instance->currentBank = (signed long int)0;
                    instance->currentProgram = (signed long int)0;
                    instance->pendingBankLSB = -1;
                    instance->pendingBankMSB = -1;
                    instance->pendingProgramChange = -1;
                    instance->uiTarget = (void *)0;
                    instance->uiSource = (void *)0;
                    instance->ui_initial_show_sent = 0;
                    instance->uiNeedsProgramUpdate = 0;
                    instance->ui_osc_control_path = (char *)(void *)0;
                    instance->ui_osc_program_path = (char *)(void *)0;
                    instance->ui_osc_quit_path = (char *)(void *)0;
                    instance->ui_osc_rate_path = (char *)(void *)0;
                    instance->ui_osc_show_path = (char *)(void *)0;
                    insTotal = insTotal + plugin->ins;
                    outsTotal = outsTotal + plugin->outs;
                    controlInsTotal = controlInsTotal + plugin->controlIns;
                    controlOutsTotal = controlOutsTotal + plugin->controlOuts;
                    plugin->instances = plugin->instances + 1;
                    instance_count = instance_count + 1;
                  }

                  else
                  {
                    fprintf(stderr, "%s: too many plugin instances specified\n", myName);
                    return 2;
                  }
                reps = 1;
              }
            }
          }
        }
      }

    __CPROVER_DUMP_L70:
      ;
    }
    if(instance_count == 0)
    {
      fprintf(stderr, "%s: No plugin specified\n", myName);
      return 2;
    }

    else
    {
      if(instance_count >= 2)
        qsort((void *)instances, (unsigned long int)instance_count, sizeof(struct _d3h_instance_t) /*1192ul*/ , instance_sort_cmp);

      i = 0;
      for( ; !(i >= 16); i = i + 1)
        channel2instance[(signed long int)i] = (struct _d3h_instance_t *)(void *)0;
      i = 0;
      for( ; !(i >= instance_count); i = i + 1)
      {
        instance = &instances[(signed long int)i];
        instance->number = i;
        channel2instance[(signed long int)instance->channel] = instance;
        if(!(verbose == 0))
          fprintf(stderr, "%s: instance %2d on channel %2d, plugin %2d is \"%s\"\n", myName, i, instance->channel, instance->plugin->number, instance->friendly_name);

      }
      if(haveClientName == 0)
      {
        if(instance_count >= 2)
          strcpy(clientName, "jack-dssi-host");

        else
        {
          __builtin_strncpy(clientName, instances[(signed long int)0].plugin->descriptor->LADSPA_Plugin->Name, (unsigned long int)clientLen);
          clientName[(signed long int)clientLen] = (char)0;
        }
      }

      jackClient=jack_client_open(clientName, (enum JackOptions)0, &status);
      if(jackClient == ((struct _jack_client *)NULL))
      {
        fprintf(stderr, "\n%s: Error: Failed to connect to JACK server\n", myName);
        return 1;
      }

      else
      {
        if(!((JackNameNotUnique & (signed int)status) == 0))
        {
          char *return_value_jack_get_client_name$55;
          return_value_jack_get_client_name$55=jack_get_client_name(jackClient);
          __builtin_strncpy(clientName, return_value_jack_get_client_name$55, (unsigned long int)clientLen);
          clientName[(signed long int)clientLen] = (char)0;
        }

        unsigned int return_value_jack_get_sample_rate$56;
        return_value_jack_get_sample_rate$56=jack_get_sample_rate(jackClient);
        sample_rate = (float)return_value_jack_get_sample_rate$56;
        void *return_value_malloc$57;
        return_value_malloc$57=malloc((unsigned long int)insTotal * sizeof(struct _jack_port *) /*8ul*/ );
        inputPorts = (struct _jack_port **)return_value_malloc$57;
        void *return_value_malloc$58;
        return_value_malloc$58=malloc((unsigned long int)insTotal * sizeof(float *) /*8ul*/ );
        pluginInputBuffers = (float **)return_value_malloc$58;
        void *return_value_calloc$59;
        return_value_calloc$59=calloc((unsigned long int)controlInsTotal, sizeof(float) /*4ul*/ );
        pluginControlIns = (float *)return_value_calloc$59;
        void *return_value_malloc$60;
        return_value_malloc$60=malloc((unsigned long int)controlInsTotal * sizeof(struct _d3h_instance_t *) /*8ul*/ );
        pluginControlInInstances = (struct _d3h_instance_t **)return_value_malloc$60;
        void *return_value_malloc$61;
        return_value_malloc$61=malloc((unsigned long int)controlInsTotal * sizeof(unsigned long int) /*8ul*/ );
        pluginControlInPortNumbers = (unsigned long int *)return_value_malloc$61;
        void *return_value_malloc$62;
        return_value_malloc$62=malloc((unsigned long int)controlInsTotal * sizeof(signed int) /*4ul*/ );
        pluginPortUpdated = (signed int *)return_value_malloc$62;
        void *return_value_malloc$63;
        return_value_malloc$63=malloc((unsigned long int)outsTotal * sizeof(struct _jack_port *) /*8ul*/ );
        outputPorts = (struct _jack_port **)return_value_malloc$63;
        void *return_value_malloc$64;
        return_value_malloc$64=malloc((unsigned long int)outsTotal * sizeof(float *) /*8ul*/ );
        pluginOutputBuffers = (float **)return_value_malloc$64;
        void *return_value_calloc$65;
        return_value_calloc$65=calloc((unsigned long int)controlOutsTotal, sizeof(float) /*4ul*/ );
        pluginControlOuts = (float *)return_value_calloc$65;
        void *return_value_malloc$66;
        return_value_malloc$66=malloc((unsigned long int)instance_count * sizeof(void *) /*8ul*/ );
        instanceHandles = (void **)return_value_malloc$66;
        void *return_value_malloc$67;
        return_value_malloc$67=malloc((unsigned long int)instance_count * sizeof(struct snd_seq_event *) /*8ul*/ );
        instanceEventBuffers = (struct snd_seq_event **)return_value_malloc$67;
        void *return_value_malloc$68;
        return_value_malloc$68=malloc((unsigned long int)instance_count * sizeof(unsigned long int) /*8ul*/ );
        instanceEventCounts = (unsigned long int *)return_value_malloc$68;
        i = 0;
        for( ; !(i >= instance_count); i = i + 1)
        {
          void *return_value_malloc$69;
          return_value_malloc$69=malloc((unsigned long int)1024 * sizeof(struct snd_seq_event) /*32ul*/ );
          instanceEventBuffers[(signed long int)i] = (struct snd_seq_event *)return_value_malloc$69;
          void *return_value_malloc$70;
          return_value_malloc$70=malloc(instances[(signed long int)i].plugin->descriptor->LADSPA_Plugin->PortCount * sizeof(signed int) /*4ul*/ );
          instances[(signed long int)i].pluginPortControlInNumbers = (signed int *)return_value_malloc$70;
        }
        in = 0;
        out = 0;
        reps = 0;
        i = 0;
        for( ; !(i >= instance_count); i = i + 1)
        {
          if(i >= 1)
          {
            unsigned long int main$$1$$14$$1$$1$$__s1_len;
            unsigned long int main$$1$$14$$1$$1$$__s2_len;
            signed int return_value___builtin_strcmp$75;
            return_value___builtin_strcmp$75=__builtin_strcmp(instances[(signed long int)i].plugin->descriptor->LADSPA_Plugin->Name, instances[(signed long int)(i - 1)].plugin->descriptor->LADSPA_Plugin->Name);
            tmp_statement_expression$74 = return_value___builtin_strcmp$75;
            tmp_if_expr$76 = !(tmp_statement_expression$74 != 0) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$76 = (_Bool)0;
          if(tmp_if_expr$76)
            reps = reps + 1;

          else
          {
            if(!(i >= instance_count + -1))
            {
              unsigned long int main$$1$$14$$1$$3$$__s1_len;
              unsigned long int main$$1$$14$$1$$3$$__s2_len;
              signed int return_value___builtin_strcmp$72;
              return_value___builtin_strcmp$72=__builtin_strcmp(instances[(signed long int)i].plugin->descriptor->LADSPA_Plugin->Name, instances[(signed long int)(i + 1)].plugin->descriptor->LADSPA_Plugin->Name);
              tmp_statement_expression$71 = return_value___builtin_strcmp$72;
              tmp_if_expr$73 = !(tmp_statement_expression$71 != 0) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$73 = (_Bool)0;
            if(tmp_if_expr$73)
              reps = 1;

            else
              reps = 0;
          }
          j = 0;
          for( ; !(j >= instances[(signed long int)i].plugin->ins); j = j + 1)
          {
            char portName[40l];
            if(!(haveClientName == 0))
              sprintf(portName, "in_%d", in);

            else
            {
              __builtin_strncpy(portName, instances[(signed long int)i].plugin->descriptor->LADSPA_Plugin->Name, (unsigned long int)30);
              if(reps >= 1)
              {
                portName[(signed long int)25] = (char)0;
                unsigned long int return_value_strlen$77;
                return_value_strlen$77=strlen(portName);
                sprintf(portName + (signed long int)return_value_strlen$77, " %d in_%d", reps, j + 1);
              }

              else
              {
                portName[(signed long int)30] = (char)0;
                unsigned long int return_value_strlen$78;
                return_value_strlen$78=strlen(portName);
                sprintf(portName + (signed long int)return_value_strlen$78, " in_%d", j + 1);
              }
            }
            inputPorts[(signed long int)in]=jack_port_register(jackClient, portName, "32 bit float mono audio", (unsigned long int)1, (unsigned long int)0);
            unsigned int return_value_jack_get_buffer_size$79;
            return_value_jack_get_buffer_size$79=jack_get_buffer_size(jackClient);
            void *return_value_calloc$80;
            return_value_calloc$80=calloc((unsigned long int)return_value_jack_get_buffer_size$79, sizeof(float) /*4ul*/ );
            pluginInputBuffers[(signed long int)in] = (float *)return_value_calloc$80;
            in = in + 1;
          }
          j = 0;
          for( ; !(j >= instances[(signed long int)i].plugin->outs); j = j + 1)
          {
            char main$$1$$14$$1$$7$$1$$portName[40l];
            if(!(haveClientName == 0))
              sprintf(main$$1$$14$$1$$7$$1$$portName, "out_%d", out);

            else
            {
              __builtin_strncpy(main$$1$$14$$1$$7$$1$$portName, instances[(signed long int)i].plugin->descriptor->LADSPA_Plugin->Name, (unsigned long int)30);
              if(reps >= 1)
              {
                main$$1$$14$$1$$7$$1$$portName[(signed long int)25] = (char)0;
                unsigned long int return_value_strlen$81;
                return_value_strlen$81=strlen(main$$1$$14$$1$$7$$1$$portName);
                sprintf(main$$1$$14$$1$$7$$1$$portName + (signed long int)return_value_strlen$81, " %d out_%d", reps, j + 1);
              }

              else
              {
                main$$1$$14$$1$$7$$1$$portName[(signed long int)30] = (char)0;
                unsigned long int return_value_strlen$82;
                return_value_strlen$82=strlen(main$$1$$14$$1$$7$$1$$portName);
                sprintf(main$$1$$14$$1$$7$$1$$portName + (signed long int)return_value_strlen$82, " out_%d", j + 1);
              }
            }
            outputPorts[(signed long int)out]=jack_port_register(jackClient, main$$1$$14$$1$$7$$1$$portName, "32 bit float mono audio", (unsigned long int)2, (unsigned long int)0);
            unsigned int return_value_jack_get_buffer_size$83;
            return_value_jack_get_buffer_size$83=jack_get_buffer_size(jackClient);
            void *return_value_calloc$84;
            return_value_calloc$84=calloc((unsigned long int)return_value_jack_get_buffer_size$83, sizeof(float) /*4ul*/ );
            pluginOutputBuffers[(signed long int)out] = (float *)return_value_calloc$84;
            out = out + 1;
          }
        }
        jack_set_process_callback(jackClient, audio_callback, NULL);
        i = 0;
        if(!(i >= instance_count))
        {
          plugin = instances[(signed long int)i].plugin;
          instanceHandles[(signed long int)i]=plugin->descriptor->LADSPA_Plugin->instantiate(plugin->descriptor->LADSPA_Plugin, (unsigned long int)sample_rate);
          if(instanceHandles[(signed long int)i] == NULL)
          {
            fprintf(stderr, "\n%s: Error: Failed to instantiate instance %d!, plugin \"%s\"\n", myName, i, plugin->label);
            return 1;
          }

          if(!(projectDirectory == ((char *)NULL)))
          {
            if(!(plugin->descriptor->configure == ((char * (*)(void *, const char *, const char *))NULL)))
            {
              char *rv;
              rv=plugin->descriptor->configure(instanceHandles[(signed long int)i], "DSSI:PROJECT_DIRECTORY", projectDirectory);
              if(!(rv == ((char *)NULL)))
                fprintf(stderr, "%s: Warning: plugin doesn't like project directory: \"%s\"\n", myName, rv);

            }

          }

          i = i + 1;
        }

        serverThread=lo_server_thread_new((const char *)(void *)0, osc_error);
        snprintf((char *)osc_path_tmp, (unsigned long int)31, "/dssi");
        tmp=lo_server_thread_get_url(serverThread);
        unsigned long int return_value_strlen$85;
        return_value_strlen$85=strlen(tmp);
        unsigned long int return_value_strlen$86;
        return_value_strlen$86=strlen(osc_path_tmp);
        void *return_value_malloc$87;
        return_value_malloc$87=malloc(return_value_strlen$85 + return_value_strlen$86);
        url = (char *)return_value_malloc$87;
        sprintf(url, "%s%s", tmp, osc_path_tmp + (signed long int)1);
        if(!(verbose == 0))
          printf("%s: registering %s\n", myName, url);

        free((void *)tmp);
        lo_server_thread_add_method(serverThread, (const char *)(void *)0, (const char *)(void *)0, osc_message_handler, (void *)0);
        lo_server_thread_start(serverThread);
        in = 0;
        for( ; !(in >= controlInsTotal); in = in + 1)
          pluginPortUpdated[(signed long int)in] = 0;
        controlOut = 0;
        controlIn = controlOut;
        out = controlIn;
        in = out;
        i = 0;
        for( ; !(i >= instance_count); i = i + 1)
        {
          instance = &instances[(signed long int)i];
          instance->firstControlIn = controlIn;
          j = 0;
          for( ; !(j >= 128); j = j + 1)
            instance->controllerMap[(signed long int)j] = (signed long int)-1;
          plugin = instance->plugin;
          j = 0;
          for( ; !((unsigned long int)j >= plugin->descriptor->LADSPA_Plugin->PortCount); j = j + 1)
          {
            signed int main$$1$$18$$1$$2$$1$$pod = plugin->descriptor->LADSPA_Plugin->PortDescriptors[(signed long int)j];
            instance->pluginPortControlInNumbers[(signed long int)j] = -1;
            if(!((0x8 & main$$1$$18$$1$$2$$1$$pod) == 0))
            {
              if(!((0x1 & main$$1$$18$$1$$2$$1$$pod) == 0))
              {
                tmp_post$88 = in;
                in = in + 1;
                plugin->descriptor->LADSPA_Plugin->connect_port(instanceHandles[(signed long int)i], (unsigned long int)j, pluginInputBuffers[(signed long int)tmp_post$88]);
              }

              else
                if(!((0x2 & main$$1$$18$$1$$2$$1$$pod) == 0))
                {
                  tmp_post$89 = out;
                  out = out + 1;
                  plugin->descriptor->LADSPA_Plugin->connect_port(instanceHandles[(signed long int)i], (unsigned long int)j, pluginOutputBuffers[(signed long int)tmp_post$89]);
                }

            }

            else
              if(!((0x4 & main$$1$$18$$1$$2$$1$$pod) == 0))
              {
                if(!((0x1 & main$$1$$18$$1$$2$$1$$pod) == 0))
                {
                  if(!(plugin->descriptor->get_midi_controller_for_port == ((signed int (*)(void *, unsigned long int))NULL)))
                  {
                    signed int controller;
                    controller=plugin->descriptor->get_midi_controller_for_port(instanceHandles[(signed long int)i], (unsigned long int)j);
                    if(controller == 0)
                    {
                      char _m[256l];
                      snprintf(_m, (unsigned long int)255, "Buggy plugin: wants mapping for bank MSB\n");
                      add_message(_m);
                    }

                    else
                      if(controller == 32)
                      {
                        char main$$1$$18$$1$$2$$1$$2$$1$$1$$2$$1$$_m[256l];
                        snprintf(main$$1$$18$$1$$2$$1$$2$$1$$1$$2$$1$$_m, (unsigned long int)255, "Buggy plugin: wants mapping for bank LSB\n");
                        add_message(main$$1$$18$$1$$2$$1$$2$$1$$1$$2$$1$$_m);
                      }

                      else
                        if(!((0x20000000 & controller) == 0))
                          instance->controllerMap[(signed long int)(controller & 0x7f)] = (signed long int)controlIn;

                  }

                  pluginControlInInstances[(signed long int)controlIn] = instance;
                  pluginControlInPortNumbers[(signed long int)controlIn] = (unsigned long int)j;
                  instance->pluginPortControlInNumbers[(signed long int)j] = controlIn;
                  pluginControlIns[(signed long int)controlIn]=get_port_default(plugin->descriptor->LADSPA_Plugin, j);
                  tmp_post$90 = controlIn;
                  controlIn = controlIn + 1;
                  plugin->descriptor->LADSPA_Plugin->connect_port(instanceHandles[(signed long int)i], (unsigned long int)j, &pluginControlIns[(signed long int)tmp_post$90]);
                }

                else
                  if(!((0x2 & main$$1$$18$$1$$2$$1$$pod) == 0))
                  {
                    tmp_post$91 = controlOut;
                    controlOut = controlOut + 1;
                    plugin->descriptor->LADSPA_Plugin->connect_port(instanceHandles[(signed long int)i], (unsigned long int)j, &pluginControlOuts[(signed long int)tmp_post$91]);
                  }

              }

          }
          if(!(plugin->descriptor->LADSPA_Plugin->activate == ((void (*)(void *))NULL)))
            plugin->descriptor->LADSPA_Plugin->activate(instanceHandles[(signed long int)i]);

          instance->inactive = 0;
        }
        /* assertion in == insTotal */
        assert(in == insTotal);
        /* assertion out == outsTotal */
        assert(out == outsTotal);
        /* assertion controlIn == controlInsTotal */
        assert(controlIn == controlInsTotal);
        /* assertion controlOut == controlOutsTotal */
        assert(controlOut == controlOutsTotal);
        i = 0;
        for( ; !(i >= instance_count); i = i + 1)
        {
          instance = &instances[(signed long int)i];
          query_programs(instance);
          if(!(instance->plugin->descriptor->select_program == ((void (*)(void *, unsigned long int, unsigned long int))NULL)))
          {
            if(instance->pluginProgramCount >= 1)
            {
              unsigned long int bank = (instance->pluginPrograms + (signed long int)0)->Bank;
              instance->pendingBankMSB = (signed int)(bank / (unsigned long int)128);
              instance->pendingBankLSB = (signed int)(bank % (unsigned long int)128);
              instance->pendingProgramChange = (signed int)(instance->pluginPrograms + (signed long int)0)->Program;
              instance->uiNeedsProgramUpdate = 1;
            }

          }

        }
        signed int return_value_snd_seq_open$92;
        return_value_snd_seq_open$92=snd_seq_open(&alsaClient, "hw", 1 | 2, 0);
        if(!(return_value_snd_seq_open$92 >= 0))
        {
          fprintf(stderr, "\n%s: Error: Failed to open ALSA sequencer interface\n", myName);
          return 1;
        }

        else
        {
          snd_seq_set_client_name(alsaClient, clientName);
          portid=snd_seq_create_simple_port(alsaClient, clientName, (unsigned int)(1 << 1 | 1 << 6), (unsigned int)(1 << 20));
          if(!(portid >= 0))
          {
            fprintf(stderr, "\n%s: Error: Failed to create ALSA sequencer port\n", myName);
            return 1;
          }

          else
          {
            npfd=snd_seq_poll_descriptors_count(alsaClient, (signed short int)0x001);
            void *return_value___builtin_alloca$93;
            return_value___builtin_alloca$93=__builtin_alloca((unsigned long int)npfd * sizeof(struct pollfd) /*8ul*/ );
            pfd = (struct pollfd *)return_value___builtin_alloca$93;
            snd_seq_poll_descriptors(alsaClient, pfd, (unsigned int)npfd, (signed short int)0x001);
            mb_init("host: ");
            signed int return_value_jack_activate$94;
            return_value_jack_activate$94=jack_activate(jackClient);
            if(!(return_value_jack_activate$94 == 0))
            {
              fprintf(stderr, "cannot activate jack client");
              exit(1);
            }

            if(!(autoconnect == 0))
            {
              ports=jack_get_ports(jackClient, (const char *)(void *)0, "^32 bit float mono audio$", (unsigned long int)(4 | 1));
              if(!(ports == ((const char **)NULL)))
              {
                if(!(*ports == ((const char *)NULL)))
                {
                  i = 0;
                  j = 0;
                  for( ; !(i >= outsTotal); i = i + 1)
                  {
                    const char *return_value_jack_port_name$95;
                    return_value_jack_port_name$95=jack_port_name(outputPorts[(signed long int)i]);
                    signed int return_value_jack_connect$96;
                    return_value_jack_connect$96=jack_connect(jackClient, return_value_jack_port_name$95, ports[(signed long int)j]);
                    if(!(return_value_jack_connect$96 == 0))
                      fprintf(stderr, "cannot connect output port %d\n", i);

                    j = j + 1;
                    if(ports[(signed long int)j] == ((const char *)NULL))
                      j = 0;

                  }
                  free((void *)ports);
                }

              }

            }

            signal(2, signalHandler);
            signal(15, signalHandler);
            signal(1, signalHandler);
            signal(3, signalHandler);
            pthread_sigmask(1, &_signals, ((struct anonymous$5 *)NULL));
            if(!(load_guis == 0))
            {
              i = 0;
              for( ; !(i >= instance_count); i = i + 1)
              {
                char tag[12l];
                plugin = instances[(signed long int)i].plugin;
                snprintf(osc_path_tmp, (unsigned long int)1024, "%s/%s", url, instances[(signed long int)i].friendly_name);
                snprintf(tag, (unsigned long int)12, "channel %d", instances[(signed long int)i].channel);
                printf("\n%s: OSC URL is:\n%s\n\n", myName, (const void *)osc_path_tmp);
                fflush(stdout);
                startGUI(plugin->dll->directory, plugin->dll->name, plugin->descriptor->LADSPA_Plugin->Label, osc_path_tmp, tag);
              }
            }

            char main$$1$$25$$_m[256l];
            snprintf(main$$1$$25$$_m, (unsigned long int)255, "Ready\n");
            add_message(main$$1$$25$$_m);
            exiting = 0;
            while(exiting == 0)
            {
              signed int return_value_poll$97;
              return_value_poll$97=poll(pfd, (unsigned long int)npfd, 100);
              if(return_value_poll$97 >= 1)
                midi_callback();

              i = 0;
              for( ; !(i >= instance_count); i = i + 1)
              {
                instance = &instances[(signed long int)i];
                if(!(instance->uiNeedsProgramUpdate == 0))
                {
                  if(!(instance->pendingProgramChange >= 0))
                  {
                    signed int main$$1$$26$$2$$1$$1$$bank = (signed int)instance->currentBank;
                    signed int program = (signed int)instance->currentProgram;
                    instance->uiNeedsProgramUpdate = 0;
                    if(!(instance->uiTarget == NULL))
                      lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1437, instance->ui_osc_program_path, "ii", main$$1$$26$$2$$1$$1$$bank, program, (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);

                  }

                }

              }
              i = 0;
              for( ; !(i >= controlInsTotal); i = i + 1)
                if(!(pluginPortUpdated[(signed long int)i] == 0))
                {
                  signed int port = (signed int)pluginControlInPortNumbers[(signed long int)i];
                  float value = pluginControlIns[(signed long int)i];
                  instance = pluginControlInInstances[(signed long int)i];
                  pluginPortUpdated[(signed long int)i] = 0;
                  if(!(instance->uiTarget == NULL))
                    lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1449, instance->ui_osc_control_path, "if", port, value, (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);

                }

            }
            jack_client_close(jackClient);
            i = 0;
            for( ; !(i >= instance_count); i = i + 1)
            {
              instance = &instances[(signed long int)i];
              if(!(instance->uiTarget == NULL))
              {
                lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1462, instance->ui_osc_quit_path, "", (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);
                lo_address_free(instance->uiTarget);
                instance->uiTarget = (void *)0;
              }

              if(!(instance->uiSource == NULL))
              {
                lo_address_free(instance->uiSource);
                instance->uiSource = (void *)0;
              }

              if(!(instance->plugin->descriptor->LADSPA_Plugin->deactivate == ((void (*)(void *))NULL)))
                instance->plugin->descriptor->LADSPA_Plugin->deactivate(instanceHandles[(signed long int)i]);

              if(!(instance->plugin->descriptor->LADSPA_Plugin->cleanup == ((void (*)(void *))NULL)))
                instance->plugin->descriptor->LADSPA_Plugin->cleanup(instanceHandles[(signed long int)i]);

            }
            sleep((unsigned int)1);
            sigemptyset(&_signals);
            sigaddset(&_signals, 1);
            pthread_sigmask(0, &_signals, ((struct anonymous$5 *)NULL));
            kill(0, 1);
            return 0;
          }
        }
      }
    }
  }
}

// mb_init
// file ../message_buffer/message_buffer.h line 16
void mb_init(const char *prefix)
{
  if(initialised == 0u)
  {
    mb_prefix = prefix;
    pthread_create(&writer_thread, (const union pthread_attr_t *)(void *)0, mb_thread_func, (void *)0);
    initialised = (unsigned int)1;
  }

}

// mb_thread_func
// file ../message_buffer/message_buffer.c line 43
void * mb_thread_func(void *arg)
{
  while((_Bool)1)
  {
    for( ; !(out_buffer == in_buffer); out_buffer = out_buffer + (unsigned int)1 & (unsigned int)(16 - 1))
      printf("%s%s", mb_prefix, (const void *)buffer[(signed long int)out_buffer]);
    usleep((unsigned int)1000);
  }
  return (void *)0;
}

// midi_callback
// file jack-dssi-host.c line 135
void midi_callback()
{
  struct snd_seq_event *ev = ((struct snd_seq_event *)NULL);
  struct timeval tv;
  pthread_mutex_lock(&midiEventBufferMutex);
  signed int return_value_snd_seq_event_input_pending$1;
  do
  {
    signed int return_value_snd_seq_event_input$2;
    return_value_snd_seq_event_input$2=snd_seq_event_input(alsaClient, &ev);
    if(return_value_snd_seq_event_input$2 >= 1)
    {
      if(midiEventReadIndex == 1 + midiEventWriteIndex)
      {
        fprintf(stderr, "%s: Warning: MIDI event buffer overflow! ignoring incoming event\n", myName);
        goto __CPROVER_DUMP_L5;
      }

      midiEventBuffer[(signed long int)midiEventWriteIndex] = *ev;
      ev = &midiEventBuffer[(signed long int)midiEventWriteIndex];
      gettimeofday(&tv, (struct timezone *)(void *)0);
      ev->time.time.tv_sec = (unsigned int)tv.tv_sec;
      ev->time.time.tv_nsec = (unsigned int)(tv.tv_usec * 1000L);
      if((signed int)ev->type == 6)
      {
        if((signed int)ev->data.note.velocity == 0)
          ev->type = (unsigned char)7;

      }

      midiEventWriteIndex = (midiEventWriteIndex + 1) % 1024;
    }


  __CPROVER_DUMP_L5:
    ;
    return_value_snd_seq_event_input_pending$1=snd_seq_event_input_pending(alsaClient, 0);
  }
  while(return_value_snd_seq_event_input_pending$1 >= 1);
  pthread_mutex_unlock(&midiEventBufferMutex);
}

// osc_configure_handler
// file jack-dssi-host.c line 1696
signed int osc_configure_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv)
{
  const char *key = (const char *)&argv[(signed long int)0]->s;
  const char *value = (const char *)&argv[(signed long int)1]->s;
  char *message;
  unsigned long int return_value_strlen$3;
  signed int return_value_strncmp$4;
  if(!(instance->plugin->descriptor->configure == ((char * (*)(void *, const char *, const char *))NULL)))
  {
    signed int n = instance->number;
    signed int m = n;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen("DSSI:");
    signed int return_value_strncmp$2;
    return_value_strncmp$2=strncmp(key, "DSSI:", return_value_strlen$1);
    if(return_value_strncmp$2 == 0)
    {
      fprintf(stderr, "%s: OSC: UI for plugin '%s' attempted to use reserved configure key \"%s\", ignoring\n", myName, instance->friendly_name, key);
      return 0;
    }

    if(instance->plugin->instances >= 2)
    {
      return_value_strlen$3=strlen("GLOBAL:");
      return_value_strncmp$4=strncmp(key, "GLOBAL:", return_value_strlen$3);
      if(return_value_strncmp$4 == 0)
      {
        for( ; n >= 1; n = n - 1)
          if(!(instances[(signed long int)(n + -1)].plugin == instances[(signed long int)m].plugin))
            break;

        m = (n + instances[(signed long int)n].plugin->instances) - 1;
      }

    }

    if(m >= n)
    {
      message=instances[(signed long int)n].plugin->descriptor->configure(instanceHandles[(signed long int)n], key, value);
      if(!(message == ((char *)NULL)))
      {
        printf("%s: on configure '%s' '%s', plugin '%s' returned error '%s'\n", myName, key, value, instance->friendly_name, message);
        free((void *)message);
      }

      if(!(n == instance->number))
      {
        if(!(instances[(signed long int)n].uiTarget == NULL))
          lo_send_internal(instances[(signed long int)n].uiTarget, "jack-dssi-host.c", 1746, instances[(signed long int)n].ui_osc_configure_path, "ss", key, value, (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);

      }

      query_programs(&instances[(signed long int)n]);
      n = n + 1;
    }

  }

  return 0;
}

// osc_control_handler
// file jack-dssi-host.c line 1637
signed int osc_control_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv)
{
  signed int port = argv[(signed long int)0]->i;
  float value = argv[(signed long int)1]->f;
  _Bool tmp_if_expr$1;
  if(!(port >= 0))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (unsigned long int)port > instance->plugin->descriptor->LADSPA_Plugin->PortCount ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
  {
    fprintf(stderr, "%s: OSC: %s port number (%d) is out of range\n", myName, instance->friendly_name, port);
    return 0;
  }

  else
    if(instance->pluginPortControlInNumbers[(signed long int)port] == -1)
    {
      fprintf(stderr, "%s: OSC: %s port %d is not a control in\n", myName, instance->friendly_name, port);
      return 0;
    }

    else
    {
      pluginControlIns[(signed long int)instance->pluginPortControlInNumbers[(signed long int)port]] = value;
      if(!(verbose == 0))
        printf("%s: OSC: %s port %d = %f\n", myName, instance->friendly_name, port, value);

      return 0;
    }
}

// osc_debug_handler
// file jack-dssi-host.c line 1905
signed int osc_debug_handler(const char *path, const char *types, union anonymous$3 **argv, signed int argc, void *data, void *user_data)
{
  signed int i;
  printf("%s: got unhandled OSC message:\npath: <%s>\n", myName, path);
  i = 0;
  for( ; !(i >= argc); i = i + 1)
  {
    printf("%s: arg %d '%c' ", myName, i, types[(signed long int)i]);
    lo_arg_pp((enum anonymous$2)types[(signed long int)i], (void *)argv[(signed long int)i]);
    printf("\n");
  }
  printf("%s:\n", myName);
  return 1;
}

// osc_error
// file jack-dssi-host.c line 1565
void osc_error(signed int num, const char *msg, const char *path)
{
  fprintf(stderr, "%s: liblo server error %d in path %s: %s\n", myName, num, path, msg);
}

// osc_exiting_handler
// file jack-dssi-host.c line 1858
signed int osc_exiting_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv)
{
  signed int i;
  if(!(verbose == 0))
    printf("%s: OSC: got exiting notification for instance %d\n", myName, instance->number);

  if(!(instance->uiTarget == NULL))
  {
    lo_address_free(instance->uiTarget);
    instance->uiTarget = (void *)0;
  }

  if(!(instance->uiSource == NULL))
  {
    lo_address_free(instance->uiSource);
    instance->uiSource = (void *)0;
  }

  if(!(instance->plugin == ((struct _d3h_plugin_t *)NULL)))
    instance->inactive = 1;

  i = 0;
  for( ; !(i >= instance_count); i = i + 1)
    if(instances[(signed long int)i].inactive == 0)
      return 0;

  if(!(verbose == 0))
    printf("%s: That was the last remaining plugin, exiting...\n", myName);

  exiting = 1;
  return 0;
}

// osc_message_handler
// file jack-dssi-host.c line 1921
signed int osc_message_handler(const char *path, const char *types, union anonymous$3 **argv, signed int argc, void *data, void *user_data)
{
  signed int i;
  struct _d3h_instance_t *instance = (struct _d3h_instance_t *)(void *)0;
  const char *method;
  unsigned int flen = (unsigned int)0;
  void *message;
  void *source;
  signed int send_to_ui = 0;
  signed int return_value_strncmp$2;
  return_value_strncmp$2=strncmp(path, "/dssi/", (unsigned long int)6);
  signed int return_value_osc_debug_handler$1;
  signed int return_value_osc_debug_handler$5;
  _Bool tmp_if_expr$7;
  signed int return_value_osc_debug_handler$6;
  signed int tmp_statement_expression$8;
  _Bool tmp_if_expr$16;
  signed int tmp_statement_expression$12;
  signed int tmp_statement_expression$45;
  _Bool tmp_if_expr$49;
  signed int tmp_statement_expression$47;
  signed int tmp_statement_expression$40;
  _Bool tmp_if_expr$44;
  signed int tmp_statement_expression$42;
  signed int tmp_statement_expression$35;
  _Bool tmp_if_expr$39;
  signed int tmp_statement_expression$37;
  signed int tmp_statement_expression$30;
  _Bool tmp_if_expr$34;
  signed int tmp_statement_expression$32;
  signed int tmp_statement_expression$25;
  _Bool tmp_if_expr$29;
  signed int tmp_statement_expression$27;
  signed int tmp_statement_expression$23;
  if(!(return_value_strncmp$2 == 0))
  {
    return_value_osc_debug_handler$1=osc_debug_handler(path, types, argv, argc, data, user_data);
    return return_value_osc_debug_handler$1;
  }

  else
  {
    i = 0;
    for( ; !(i >= instance_count); i = i + 1)
    {
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(instances[(signed long int)i].friendly_name);
      flen = (unsigned int)return_value_strlen$3;
      signed int return_value_strncmp$4;
      return_value_strncmp$4=strncmp(path + (signed long int)6, instances[(signed long int)i].friendly_name, (unsigned long int)flen);
      if(return_value_strncmp$4 == 0)
      {
        if((signed int)path[6l + (signed long int)flen] == 47)
        {
          instance = &instances[(signed long int)i];
          break;
        }

      }

    }
    if(instance == ((struct _d3h_instance_t *)NULL))
    {
      return_value_osc_debug_handler$5=osc_debug_handler(path, types, argv, argc, data, user_data);
      return return_value_osc_debug_handler$5;
    }

    else
    {
      method = path + (signed long int)6 + (signed long int)flen;
      if(!((signed int)*method == 47))
        tmp_if_expr$7 = (_Bool)1;

      else
        tmp_if_expr$7 = (signed int)method[(signed long int)1] == 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$7)
      {
        return_value_osc_debug_handler$6=osc_debug_handler(path, types, argv, argc, data, user_data);
        return return_value_osc_debug_handler$6;
      }

      else
      {
        method = method + 1l;
        message = (void *)data;
        source=lo_message_get_source(message);
        if(!(instance->uiSource == NULL))
        {
          if(!(instance->uiTarget == NULL))
          {
            unsigned long int osc_message_handler$$1$$3$$1$$__s1_len;
            unsigned long int osc_message_handler$$1$$3$$1$$__s2_len;
            const char *return_value_lo_address_get_hostname$9;
            return_value_lo_address_get_hostname$9=lo_address_get_hostname(source);
            const char *return_value_lo_address_get_hostname$10;
            return_value_lo_address_get_hostname$10=lo_address_get_hostname(instance->uiSource);
            signed int return_value___builtin_strcmp$11;
            return_value___builtin_strcmp$11=__builtin_strcmp(return_value_lo_address_get_hostname$9, return_value_lo_address_get_hostname$10);
            tmp_statement_expression$8 = return_value___builtin_strcmp$11;
            if(!(tmp_statement_expression$8 == 0))
              tmp_if_expr$16 = (_Bool)1;

            else
            {
              unsigned long int osc_message_handler$$1$$3$$2$$__s1_len;
              unsigned long int osc_message_handler$$1$$3$$2$$__s2_len;
              const char *return_value_lo_address_get_port$13;
              return_value_lo_address_get_port$13=lo_address_get_port(source);
              const char *return_value_lo_address_get_port$14;
              return_value_lo_address_get_port$14=lo_address_get_port(instance->uiSource);
              signed int return_value___builtin_strcmp$15;
              return_value___builtin_strcmp$15=__builtin_strcmp(return_value_lo_address_get_port$13, return_value_lo_address_get_port$14);
              tmp_statement_expression$12 = return_value___builtin_strcmp$15;
              tmp_if_expr$16 = tmp_statement_expression$12 != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$16)
              send_to_ui = 1;

          }

        }

        unsigned long int osc_message_handler$$1$$4$$__s1_len;
        unsigned long int osc_message_handler$$1$$4$$__s2_len;
        signed int return_value___builtin_strcmp$46;
        return_value___builtin_strcmp$46=__builtin_strcmp(method, "configure");
        tmp_statement_expression$45 = return_value___builtin_strcmp$46;
        if(tmp_statement_expression$45 == 0 && argc == 2)
        {
          unsigned long int osc_message_handler$$1$$5$$__s1_len;
          unsigned long int osc_message_handler$$1$$5$$__s2_len;
          signed int return_value___builtin_strcmp$48;
          return_value___builtin_strcmp$48=__builtin_strcmp(types, "ss");
          tmp_statement_expression$47 = return_value___builtin_strcmp$48;
          tmp_if_expr$49 = !(tmp_statement_expression$47 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$49 = (_Bool)0;
        if(tmp_if_expr$49)
        {
          if(!(send_to_ui == 0))
            lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1974, instance->ui_osc_configure_path, "ss", &argv[(signed long int)0]->s, &argv[(signed long int)1]->s, (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);

          signed int return_value_osc_configure_handler$17;
          return_value_osc_configure_handler$17=osc_configure_handler(instance, argv);
          return return_value_osc_configure_handler$17;
        }

        else
        {
          unsigned long int osc_message_handler$$1$$7$$__s1_len;
          unsigned long int osc_message_handler$$1$$7$$__s2_len;
          signed int return_value___builtin_strcmp$41;
          return_value___builtin_strcmp$41=__builtin_strcmp(method, "control");
          tmp_statement_expression$40 = return_value___builtin_strcmp$41;
          if(tmp_statement_expression$40 == 0 && argc == 2)
          {
            unsigned long int osc_message_handler$$1$$8$$__s1_len;
            unsigned long int osc_message_handler$$1$$8$$__s2_len;
            signed int return_value___builtin_strcmp$43;
            return_value___builtin_strcmp$43=__builtin_strcmp(types, "if");
            tmp_statement_expression$42 = return_value___builtin_strcmp$43;
            tmp_if_expr$44 = !(tmp_statement_expression$42 != 0) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$44 = (_Bool)0;
          if(tmp_if_expr$44)
          {
            if(!(send_to_ui == 0))
              lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1983, instance->ui_osc_control_path, "if", argv[(signed long int)0]->i, argv[(signed long int)1]->f, (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);

            signed int return_value_osc_control_handler$18;
            return_value_osc_control_handler$18=osc_control_handler(instance, argv);
            return return_value_osc_control_handler$18;
          }

          else
          {
            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$36;
            return_value___builtin_strcmp$36=__builtin_strcmp(method, "midi");
            tmp_statement_expression$35 = return_value___builtin_strcmp$36;
            if(tmp_statement_expression$35 == 0 && argc == 1)
            {
              unsigned long int osc_message_handler$$1$$11$$__s1_len;
              unsigned long int osc_message_handler$$1$$11$$__s2_len;
              signed int return_value___builtin_strcmp$38;
              return_value___builtin_strcmp$38=__builtin_strcmp(types, "m");
              tmp_statement_expression$37 = return_value___builtin_strcmp$38;
              tmp_if_expr$39 = !(tmp_statement_expression$37 != 0) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$39 = (_Bool)0;
            if(tmp_if_expr$39)
            {
              signed int return_value_osc_midi_handler$19;
              return_value_osc_midi_handler$19=osc_midi_handler(instance, argv);
              return return_value_osc_midi_handler$19;
            }

            else
            {
              unsigned long int osc_message_handler$$1$$13$$__s1_len;
              unsigned long int osc_message_handler$$1$$13$$__s2_len;
              signed int return_value___builtin_strcmp$31;
              return_value___builtin_strcmp$31=__builtin_strcmp(method, "program");
              tmp_statement_expression$30 = return_value___builtin_strcmp$31;
              if(tmp_statement_expression$30 == 0 && argc == 2)
              {
                unsigned long int osc_message_handler$$1$$14$$__s1_len;
                unsigned long int osc_message_handler$$1$$14$$__s2_len;
                signed int return_value___builtin_strcmp$33;
                return_value___builtin_strcmp$33=__builtin_strcmp(types, "ii");
                tmp_statement_expression$32 = return_value___builtin_strcmp$33;
                tmp_if_expr$34 = !(tmp_statement_expression$32 != 0) ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$34 = (_Bool)0;
              if(tmp_if_expr$34)
              {
                if(!(send_to_ui == 0))
                  lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1996, instance->ui_osc_program_path, "ii", argv[(signed long int)0]->i, argv[(signed long int)1]->i, (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);

                signed int return_value_osc_program_handler$20;
                return_value_osc_program_handler$20=osc_program_handler(instance, argv);
                return return_value_osc_program_handler$20;
              }

              else
              {
                unsigned long int osc_message_handler$$1$$16$$__s1_len;
                unsigned long int osc_message_handler$$1$$16$$__s2_len;
                signed int return_value___builtin_strcmp$26;
                return_value___builtin_strcmp$26=__builtin_strcmp(method, "update");
                tmp_statement_expression$25 = return_value___builtin_strcmp$26;
                if(tmp_statement_expression$25 == 0 && argc == 1)
                {
                  unsigned long int osc_message_handler$$1$$17$$__s1_len;
                  unsigned long int osc_message_handler$$1$$17$$__s2_len;
                  signed int return_value___builtin_strcmp$28;
                  return_value___builtin_strcmp$28=__builtin_strcmp(types, "s");
                  tmp_statement_expression$27 = return_value___builtin_strcmp$28;
                  tmp_if_expr$29 = !(tmp_statement_expression$27 != 0) ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$29 = (_Bool)0;
                if(tmp_if_expr$29)
                {
                  signed int return_value_osc_update_handler$21;
                  return_value_osc_update_handler$21=osc_update_handler(instance, argv, source);
                  return return_value_osc_update_handler$21;
                }

                else
                {
                  unsigned long int osc_message_handler$$1$$19$$__s1_len;
                  unsigned long int osc_message_handler$$1$$19$$__s2_len;
                  signed int return_value___builtin_strcmp$24;
                  return_value___builtin_strcmp$24=__builtin_strcmp(method, "exiting");
                  tmp_statement_expression$23 = return_value___builtin_strcmp$24;
                  if(tmp_statement_expression$23 == 0)
                  {
                    if(argc == 0)
                    {
                      signed int return_value_osc_exiting_handler$22;
                      return_value_osc_exiting_handler$22=osc_exiting_handler(instance, argv);
                      return return_value_osc_exiting_handler$22;
                    }

                  }

                }
              }
            }
          }
        }
        signed int return_value_osc_debug_handler$50;
        return_value_osc_debug_handler$50=osc_debug_handler(path, types, argv, argc, data, user_data);
        return return_value_osc_debug_handler$50;
      }
    }
  }
}

// osc_midi_handler
// file jack-dssi-host.c line 1572
signed int osc_midi_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv)
{
  signed long int count;
  static struct snd_seq_event alsaEncodeBuffer[10l];
  struct snd_seq_event *ev = &alsaEncodeBuffer[(signed long int)0];
  if(!(verbose == 0))
    printf("%s: OSC: got midi request for %s (%02x %02x %02x %02x)\n", myName, instance->friendly_name, argv[(signed long int)0]->m[(signed long int)0], argv[(signed long int)0]->m[(signed long int)1], argv[(signed long int)0]->m[(signed long int)2], argv[(signed long int)0]->m[(signed long int)3]);

  static struct snd_midi_event *alsaCoder = (struct snd_midi_event *)(void *)0;
  if(alsaCoder == ((struct snd_midi_event *)NULL))
  {
    signed int return_value_snd_midi_event_new$1;
    return_value_snd_midi_event_new$1=snd_midi_event_new((unsigned long int)10, &alsaCoder);
    if(!(return_value_snd_midi_event_new$1 == 0))
    {
      fprintf(stderr, "%s: Failed to initialise ALSA MIDI coder!\n", myName);
      return 0;
    }

  }

  snd_midi_event_reset_encode(alsaCoder);
  count=snd_midi_event_encode(alsaCoder, argv[(signed long int)0]->m + (signed long int)1, (signed long int)3, alsaEncodeBuffer);
  _Bool tmp_if_expr$2;
  if(count == 0l)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = !((snd_seq_event_types[(signed long int)ev->type] & (unsigned int)(1 << 1 | 1 << 2)) != 0u) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  if(tmp_if_expr$2)
    return 0;

  else
  {
    ev->data.note.channel = (unsigned char)instance->channel;
    if((signed int)ev->type == 6)
    {
      if((signed int)ev->data.note.velocity == 0)
        ev->type = (unsigned char)7;

    }

    pthread_mutex_lock(&midiEventBufferMutex);
    if(midiEventReadIndex == 1 + midiEventWriteIndex)
      fprintf(stderr, "%s: Warning: MIDI event buffer overflow!\n", myName);

    else
    {
      if((signed int)ev->type == 10)
      {
        if(ev->data.control.param == 0u)
          tmp_if_expr$3 = (_Bool)1;

        else
          tmp_if_expr$3 = ev->data.control.param == (unsigned int)32 ? (_Bool)1 : (_Bool)0;
        tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$4 = (_Bool)0;
      if(tmp_if_expr$4)
        fprintf(stderr, "%s: Warning: %s UI sent bank select controller (should use /program OSC call), ignoring\n", myName, instance->friendly_name);

      else
        if((signed int)ev->type == 11)
          fprintf(stderr, "%s: Warning: %s UI sent program change (should use /program OSC call), ignoring\n", myName, instance->friendly_name);

        else
        {
          midiEventBuffer[(signed long int)midiEventWriteIndex] = *ev;
          midiEventWriteIndex = (midiEventWriteIndex + 1) % 1024;
        }
    }
    pthread_mutex_unlock(&midiEventBufferMutex);
    return 0;
  }
}

// osc_program_handler
// file jack-dssi-host.c line 1662
signed int osc_program_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv)
{
  signed int bank = argv[(signed long int)0]->i;
  signed int program = argv[(signed long int)1]->i;
  signed int i;
  signed int found = 0;
  i = 0;
  for( ; !(i >= instance->pluginProgramCount); i = i + 1)
    if((instance->pluginPrograms + (signed long int)i)->Bank == (unsigned long int)bank)
    {
      if((instance->pluginPrograms + (signed long int)i)->Program == (unsigned long int)program)
      {
        if(!(verbose == 0))
          printf("%s: OSC: %s setting bank %d, program %d, name %s\n", myName, instance->friendly_name, bank, program, (instance->pluginPrograms + (signed long int)i)->Name);

        found = 1;
        break;
      }

    }

  if(found == 0)
    printf("%s: OSC: %s UI requested unknown program: bank %d, program %d: sending to plugin anyway (plugin should ignore it)\n", myName, instance->friendly_name, bank, program);

  instance->pendingBankMSB = bank / 128;
  instance->pendingBankLSB = bank % 128;
  instance->pendingProgramChange = program;
  return 0;
}

// osc_update_handler
// file jack-dssi-host.c line 1761
signed int osc_update_handler(struct _d3h_instance_t *instance, union anonymous$3 **argv, void *source)
{
  const char *url = (char *)&argv[(signed long int)0]->s;
  const char *path;
  unsigned int i;
  char *host;
  char *osc_update_handler$$1$$port;
  const char *chost;
  const char *cport;
  if(!(verbose == 0))
    printf("%s: OSC: got update request from <%s>\n", myName, url);

  if(!(instance->uiTarget == NULL))
    lo_address_free(instance->uiTarget);

  host=lo_url_get_hostname(url);
  osc_update_handler$$1$$port=lo_url_get_port(url);
  instance->uiTarget=lo_address_new(host, osc_update_handler$$1$$port);
  free((void *)host);
  free((void *)osc_update_handler$$1$$port);
  if(!(instance->uiSource == NULL))
    lo_address_free(instance->uiSource);

  chost=lo_address_get_hostname(source);
  cport=lo_address_get_port(source);
  instance->uiSource=lo_address_new(chost, cport);
  path=lo_url_get_path(url);
  if(!(instance->ui_osc_control_path == ((char *)NULL)))
    free((void *)instance->ui_osc_control_path);

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(path);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(return_value_strlen$1 + (unsigned long int)10);
  instance->ui_osc_control_path = (char *)return_value_malloc$2;
  sprintf(instance->ui_osc_control_path, "%s/control", path);
  if(!(instance->ui_osc_configure_path == ((char *)NULL)))
    free((void *)instance->ui_osc_configure_path);

  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(path);
  void *return_value_malloc$4;
  return_value_malloc$4=malloc(return_value_strlen$3 + (unsigned long int)12);
  instance->ui_osc_configure_path = (char *)return_value_malloc$4;
  sprintf(instance->ui_osc_configure_path, "%s/configure", path);
  if(!(instance->ui_osc_program_path == ((char *)NULL)))
    free((void *)instance->ui_osc_program_path);

  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(path);
  void *return_value_malloc$6;
  return_value_malloc$6=malloc(return_value_strlen$5 + (unsigned long int)10);
  instance->ui_osc_program_path = (char *)return_value_malloc$6;
  sprintf(instance->ui_osc_program_path, "%s/program", path);
  if(!(instance->ui_osc_quit_path == ((char *)NULL)))
    free((void *)instance->ui_osc_quit_path);

  unsigned long int return_value_strlen$7;
  return_value_strlen$7=strlen(path);
  void *return_value_malloc$8;
  return_value_malloc$8=malloc(return_value_strlen$7 + (unsigned long int)10);
  instance->ui_osc_quit_path = (char *)return_value_malloc$8;
  sprintf(instance->ui_osc_quit_path, "%s/quit", path);
  if(!(instance->ui_osc_rate_path == ((char *)NULL)))
    free((void *)instance->ui_osc_rate_path);

  unsigned long int return_value_strlen$9;
  return_value_strlen$9=strlen(path);
  void *return_value_malloc$10;
  return_value_malloc$10=malloc(return_value_strlen$9 + (unsigned long int)13);
  instance->ui_osc_rate_path = (char *)return_value_malloc$10;
  sprintf(instance->ui_osc_rate_path, "%s/sample-rate", path);
  if(!(instance->ui_osc_show_path == ((char *)NULL)))
    free((void *)instance->ui_osc_show_path);

  unsigned long int return_value_strlen$11;
  return_value_strlen$11=strlen(path);
  void *return_value_malloc$12;
  return_value_malloc$12=malloc(return_value_strlen$11 + (unsigned long int)10);
  instance->ui_osc_show_path = (char *)return_value_malloc$12;
  sprintf(instance->ui_osc_show_path, "%s/show", path);
  free((void *)(char *)path);
  signed long int return_value_lrintf$13;
  return_value_lrintf$13=lrintf(sample_rate);
  lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1814, instance->ui_osc_rate_path, "i", return_value_lrintf$13, (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);
  if(!(projectDirectory == ((char *)NULL)))
    lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1825, instance->ui_osc_configure_path, "ss", (const void *)"DSSI:PROJECT_DIRECTORY", projectDirectory, (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);

  if(!(instance->pendingProgramChange >= 0))
  {
    unsigned long int bank = (unsigned long int)instance->currentBank;
    unsigned long int program = (unsigned long int)instance->currentProgram;
    instance->uiNeedsProgramUpdate = 0;
    if(!(instance->uiTarget == NULL))
      lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1834, instance->ui_osc_program_path, "ii", bank, program, (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);

  }

  i = (unsigned int)0;
  for( ; !(i >= (unsigned int)instance->plugin->controlIns); i = i + 1u)
  {
    signed int in = (signed int)(i + (unsigned int)instance->firstControlIn);
    signed int port = (signed int)pluginControlInPortNumbers[(signed long int)in];
    lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1843, instance->ui_osc_control_path, "if", port, pluginControlIns[(signed long int)in], (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);
    if((1u + i) % 50u == 0u)
      usleep((unsigned int)300000);

  }
  if(instance->ui_initial_show_sent == 0)
  {
    lo_send_internal(instance->uiTarget, "jack-dssi-host.c", 1850, instance->ui_osc_show_path, "", (void *)0xdeadbeefdeadbeefL, (void *)0xf00baa23f00baa23L);
    instance->ui_initial_show_sent = 1;
  }

  return 0;
}

// query_programs
// file jack-dssi-host.c line 680
void query_programs(struct _d3h_instance_t *instance)
{
  signed int i;
  if(!(instance->pluginPrograms == ((struct _DSSI_Program_Descriptor *)NULL)))
  {
    i = 0;
    for( ; !(i >= instance->pluginProgramCount); i = i + 1)
      free((void *)(instance->pluginPrograms + (signed long int)i)->Name);
    free((void *)(char *)instance->pluginPrograms);
    instance->pluginPrograms = (struct _DSSI_Program_Descriptor *)(void *)0;
    instance->pluginProgramCount = 0;
  }

  instance->pendingBankLSB = -1;
  instance->pendingBankMSB = -1;
  instance->pendingProgramChange = -1;
  if(!(instance->plugin->descriptor->get_program == ((const struct _DSSI_Program_Descriptor * (*)(void *, unsigned long int))NULL)))
  {
    if(!(instance->plugin->descriptor->select_program == ((void (*)(void *, unsigned long int, unsigned long int))NULL)))
    {
      i = 0;
      const struct _DSSI_Program_Descriptor *return_value;
      return_value=instance->plugin->descriptor->get_program(instanceHandles[(signed long int)instance->number], (unsigned long int)i);
      if(!(return_value == ((const struct _DSSI_Program_Descriptor *)NULL)))
        i = i + 1;

      if(i >= 1)
      {
        instance->pluginProgramCount = i;
        void *return_value_malloc$1;
        return_value_malloc$1=malloc((unsigned long int)i * sizeof(struct _DSSI_Program_Descriptor) /*24ul*/ );
        instance->pluginPrograms = (struct _DSSI_Program_Descriptor *)return_value_malloc$1;
        if(i >= 1)
        {
          const struct _DSSI_Program_Descriptor *descriptor;
          i = i - 1;
          descriptor=instance->plugin->descriptor->get_program(instanceHandles[(signed long int)instance->number], (unsigned long int)i);
          (instance->pluginPrograms + (signed long int)i)->Bank = descriptor->Bank;
          (instance->pluginPrograms + (signed long int)i)->Program = descriptor->Program;
          char *return_value___strdup$2;
          return_value___strdup$2=__strdup(descriptor->Name);
          (instance->pluginPrograms + (signed long int)i)->Name = return_value___strdup$2;
          if(!(verbose == 0))
            printf("%s: %s program %d is MIDI bank %lu program %lu, named '%s'\n", myName, instance->friendly_name, i, (instance->pluginPrograms + (signed long int)i)->Bank, (instance->pluginPrograms + (signed long int)i)->Program, (instance->pluginPrograms + (signed long int)i)->Name);

        }

      }

    }

  }

}

// setControl
// file jack-dssi-host.c line 184
void setControl(struct _d3h_instance_t *instance, signed long int controlIn, struct snd_seq_event *event)
{
  signed long int port = (signed long int)pluginControlInPortNumbers[controlIn];
  const struct _LADSPA_Descriptor *p = instance->plugin->descriptor->LADSPA_Plugin;
  signed int d = (p->PortRangeHints + port)->HintDescriptor;
  float lb = (p->PortRangeHints + port)->LowerBound * (((p->PortRangeHints + port)->HintDescriptor & 0x8) != 0 ? sample_rate : 1.0f);
  float ub = (p->PortRangeHints + port)->UpperBound * (((p->PortRangeHints + port)->HintDescriptor & 0x8) != 0 ? sample_rate : 1.0f);
  float value = (float)event->data.control.value;
  if((0x1 & d) == 0)
  {
    if((0x2 & d) == 0)
      goto __CPROVER_DUMP_L9;

    else
      value = (ub - 127.0f) + value;
  }

  else
    if((0x2 & d) == 0)
      value = lb + value;

    else
      if(lb > 0.0f && ub > 0.0f && !((0x10 & d) == 0))
      {
        float llb;
        llb=logf(lb);
        float lub;
        lub=logf(ub);
        value=expf(llb + ((lub - llb) * value) / 127.0f);
      }

      else
        value = lb + ((ub - lb) * value) / 127.0f;
  if(!((0x20 & d) == 0))
  {
    signed long int return_value_lrintf$1;
    return_value_lrintf$1=lrintf(value);
    value = (float)return_value_lrintf$1;
  }

  if(!(verbose == 0))
    printf("%s: %s MIDI controller %d=%d -> control in %ld=%f\n", myName, instance->friendly_name, event->data.control.param, event->data.control.value, controlIn, value);

  pluginControlIns[controlIn] = value;
  pluginPortUpdated[controlIn] = 1;

__CPROVER_DUMP_L9:
  ;
}

// signalHandler
// file jack-dssi-host.c line 127
void signalHandler(signed int sig)
{
  fprintf(stderr, "%s: signal %d caught, trying to clean up and exit\n", myName, sig);
  exiting = 1;
}

// startGUI
// file jack-dssi-host.c line 580
void startGUI(const char *directory, const char *dllName, const char *label, const char *oscUrl, const char *instanceTag)
{
  struct dirent *entry;
  char *dllBase;
  char *return_value___strdup$1;
  return_value___strdup$1=__strdup(dllName);
  dllBase = return_value___strdup$1;
  char *subpath;
  struct __dirstream *subdir;
  char *filename;
  struct stat buf;
  signed int fuzzy;
  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(dllBase);
  unsigned long int return_value_strlen$3;
  signed int return_value_strcasecmp$4;
  if(return_value_strlen$5 >= 4ul)
  {
    return_value_strlen$3=strlen(dllBase);
    return_value_strcasecmp$4=strcasecmp((dllBase + (signed long int)return_value_strlen$3) - (signed long int)3, ".so");
    if(return_value_strcasecmp$4 == 0)
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(dllBase);
      dllBase[(signed long int)(return_value_strlen$2 - (unsigned long int)3)] = (char)0;
    }

  }

  if((signed int)*dllBase == 47)
  {
    subpath = dllBase;
    char *return_value_strrchr$6;
    return_value_strrchr$6=strrchr(subpath, 47);
    char *return_value___strdup$7;
    return_value___strdup$7=__strdup(return_value_strrchr$6 + (signed long int)1);
    dllBase = return_value___strdup$7;
  }

  else
  {
    unsigned long int return_value_strlen$8;
    return_value_strlen$8=strlen(directory);
    unsigned long int return_value_strlen$9;
    return_value_strlen$9=strlen(dllBase);
    void *return_value_malloc$10;
    return_value_malloc$10=malloc(return_value_strlen$8 + return_value_strlen$9 + (unsigned long int)2);
    subpath = (char *)return_value_malloc$10;
    sprintf(subpath, "%s/%s", directory, dllBase);
  }
  fuzzy = 0;
  _Bool tmp_if_expr$16;
  unsigned long int return_value_strlen$14;
  signed int return_value_strncmp$15;
  _Bool tmp_if_expr$18;
  unsigned long int return_value_strlen$17;
  _Bool tmp_if_expr$23;
  unsigned long int return_value_strlen$21;
  signed int return_value_strncmp$22;
  _Bool tmp_if_expr$25;
  unsigned long int return_value_strlen$24;
  for( ; !(fuzzy >= 2); fuzzy = fuzzy + 1)
  {
    subdir=opendir(subpath);
    if(subdir == ((struct __dirstream *)NULL))
    {
      if(!(verbose == 0))
        fprintf(stderr, "%s: can't open plugin GUI directory \"%s\"\n", myName, subpath);

      free((void *)subpath);
      free((void *)dllBase);
      goto __CPROVER_DUMP_L29;
    }

    do
    {
      entry=readdir(subdir);
      if(entry == ((struct dirent *)NULL))
        break;

      if(!((signed int)entry->d_name[0l] == 46))
      {
        char *return_value___builtin_strchr$11;
        return_value___builtin_strchr$11=__builtin_strchr(entry->d_name, 95);
        if(!(return_value___builtin_strchr$11 == ((char *)NULL)))
        {
          if(!(fuzzy == 0))
          {
            if(!(verbose == 0))
              fprintf(stderr, "checking %s against %s\n", (const void *)entry->d_name, dllBase);

            unsigned long int return_value_strlen$12;
            return_value_strlen$12=strlen(entry->d_name);
            unsigned long int return_value_strlen$13;
            return_value_strlen$13=strlen(dllBase);
            if(return_value_strlen$13 >= return_value_strlen$12)
              tmp_if_expr$16 = (_Bool)1;

            else
            {
              return_value_strlen$14=strlen(dllBase);
              return_value_strncmp$15=strncmp(entry->d_name, dllBase, return_value_strlen$14);
              tmp_if_expr$16 = return_value_strncmp$15 != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$16)
              tmp_if_expr$18 = (_Bool)1;

            else
            {
              return_value_strlen$17=strlen(dllBase);
              tmp_if_expr$18 = (signed int)entry->d_name[(signed long int)return_value_strlen$17] != 95 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$18)
              continue;

          }

          else
          {
            if(!(verbose == 0))
              fprintf(stderr, "checking %s against %s\n", (const void *)entry->d_name, label);

            unsigned long int return_value_strlen$19;
            return_value_strlen$19=strlen(entry->d_name);
            unsigned long int return_value_strlen$20;
            return_value_strlen$20=strlen(label);
            if(return_value_strlen$20 >= return_value_strlen$19)
              tmp_if_expr$23 = (_Bool)1;

            else
            {
              return_value_strlen$21=strlen(label);
              return_value_strncmp$22=strncmp(entry->d_name, label, return_value_strlen$21);
              tmp_if_expr$23 = return_value_strncmp$22 != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$23)
              tmp_if_expr$25 = (_Bool)1;

            else
            {
              return_value_strlen$24=strlen(label);
              tmp_if_expr$25 = (signed int)entry->d_name[(signed long int)return_value_strlen$24] != 95 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$25)
              continue;

          }
          unsigned long int return_value_strlen$26;
          return_value_strlen$26=strlen(subpath);
          unsigned long int return_value_strlen$27;
          return_value_strlen$27=strlen(entry->d_name);
          void *return_value_malloc$28;
          return_value_malloc$28=malloc(return_value_strlen$26 + return_value_strlen$27 + (unsigned long int)2);
          filename = (char *)return_value_malloc$28;
          sprintf(filename, "%s/%s", subpath, (const void *)entry->d_name);
          signed int return_value_stat$29;
          return_value_stat$29=stat(filename, &buf);
          if(!(return_value_stat$29 == 0))
          {
            perror("stat failed");
            free((void *)filename);
          }

          else
          {
            if(!((73u & buf.st_mode) == 0u) && ((61440u & buf.st_mode) == 32768u || (61440u & buf.st_mode) == 40960u))
            {
              if(!(verbose == 0))
                fprintf(stderr, "%s: trying to execute GUI at \"%s\"\n", myName, filename);

              signed int return_value_fork$30;
              return_value_fork$30=fork();
              if(return_value_fork$30 == 0)
              {
                execlp(filename, filename, oscUrl, dllName, label, instanceTag, (void *)0);
                perror("exec failed");
                exit(1);
              }

              free((void *)filename);
              free((void *)subpath);
              free((void *)dllBase);
              goto __CPROVER_DUMP_L29;
            }

            free((void *)filename);
          }
        }

      }

    }
    while((_Bool)1);
  }
  if(!(verbose == 0))
    fprintf(stderr, "%s: no GUI found for plugin \"%s\" in \"%s/\"\n", myName, label, subpath);

  free((void *)subpath);
  free((void *)dllBase);

__CPROVER_DUMP_L29:
  ;
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat$1;
  return_value___xstat$1=__xstat(1, __path, __statbuf);
  return return_value___xstat$1;
}

