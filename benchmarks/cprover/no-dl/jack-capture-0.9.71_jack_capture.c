// #anon_enum$JackPositionBBT=16$JackPositionTimecode=32$JackBBTFrameOffset=64$JackAudioVideoRatio=128$JackVideoFrameOffset=256
// file /usr/include/jack/transport.h line 65
enum anonymous$1 { JackPositionBBT=16, JackPositionTimecode=32, JackBBTFrameOffset=64, JackAudioVideoRatio=128, JackVideoFrameOffset=256 };

// #anon_enum$JackTransportStopped=0$JackTransportRolling=1$JackTransportLooping=2$JackTransportStarting=3
// file /usr/include/jack/transport.h line 50
enum anonymous$12 { JackTransportStopped=0, JackTransportRolling=1, JackTransportLooping=2, JackTransportStarting=3 };

// tag-#anon#ST[*{S8}$S8$'buf'||vU64'write_ptr'||vU64'read_ptr'||U64'size'||U64'size_mask'||S32'mlocked'||U32'$pad0'|]
// file /usr/include/jack/ringbuffer.h line 51
struct anonymous$10;

// tag-#anon#ST[BF{U32}$U32$'__w_stopval'||BF{U32}$U32$'__w_stopsig'||BF{U32}$U32$'$anon0'|]
// file /usr/include/x86_64-linux-gnu/bits/waitstatus.h line 84
struct anonymous$14;

// tag-#anon#ST[BF{U32}$U32$'__w_termsig'||BF{U32}$U32$'__w_coredump'||BF{U32}$U32$'__w_retcode'||BF{U32}$U32$'$anon0'|]
// file /usr/include/x86_64-linux-gnu/bits/waitstatus.h line 69
struct anonymous$13;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$0;

// tag-#anon#ST[S32'please_wakeup'||U32'$pad0'||SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#'mutex'||SYM#tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]#'cond'|]
// file upwaker.h line 22
struct anonymous$3;

// tag-#anon#ST[U32'sec'||U32'frac'|]
// file /usr/include/lo/lo_osc_types.h line 46
struct anonymous$2;

// tag-#anon#ST[U64'unique_1'||U64'usecs'||U32'frame_rate'||U32'frame'||EN#anon_enum$JackPositionBBT=16$JackPositionTimecode=32$JackBBTFrameOffset=64$JackAudioVideoRatio=128$JackVideoFrameOffset=256#{U32}$U32$'valid'||S32'bar'||S32'beat'||S32'tick'||F64'bar_start_tick'||F32'beats_per_bar'||F32'beat_type'||F64'ticks_per_beat'||F64'beats_per_minute'||F64'frame_time'||F64'next_time'||U32'bbt_offset'||F32'audio_frames_per_video_frame'||U32'video_offset'||ARR7{S32}$S32$'padding'||U64'unique_2'|]
// file /usr/include/jack/transport.h line 81
struct anonymous;

// tag-#anon#UN[*{SYM#tag-wait#}$SYM#tag-wait#$'__uptr'||*{S32}$S32$'__iptr'|]
// file /usr/include/stdlib.h line 67
union anonymous$9;

// tag-#anon#UN[*{SYM#tag-wait#}$SYM#tag-wait#$'__uptr'||*{S32}$S32$'__iptr'|]$transparent
// file /usr/include/stdlib.h line 67
union anonymous$11;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$8;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$6;

// tag-#anon#UN[S32'i'||S32'i32'||S64'h'||S64'i64'||F32'f'||F32'f32'||F64'd'||F64'f64'||S8's'||S8'S'||U8'c'||ARR4{U8}$U8$'m'||SYM#tag-#anon#ST[U32'sec'||U32'frac'|]#'t'|]
// file /usr/include/lo/lo_osc_types.h line 115
union anonymous$4;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$7;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$5;

// tag-JackLatencyCallbackMode
// file /usr/include/jack/types.h line 235
enum JackLatencyCallbackMode { JackCaptureLatency=0, JackPlaybackLatency=1 };

// tag-JackOptions
// file /usr/include/jack/types.h line 90
enum JackOptions { JackNullOption=0, JackNoStartServer=1, JackUseExactName=2, JackServerName=4, JackLoadName=8, JackLoadInit=16, JackSessionID=32 };

// tag-JackStatus
// file /usr/include/jack/types.h line 149
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
// file /usr/include/jack/types.h line 72
struct _jack_client;

// tag-_jack_latency_range
// file /usr/include/jack/types.h line 272
struct _jack_latency_range;

// tag-_jack_port
// file /usr/include/jack/types.h line 66
struct _jack_port;

// tag-buffer_t
// file jack_capture.c line 192
struct buffer_t;

// tag-lame_global_struct
// file /usr/include/lame/lame.h line 145
struct lame_global_struct;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 309
union pthread_attr_t;

// tag-termios
// file /usr/include/x86_64-linux-gnu/bits/termios.h line 28
struct termios;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-vringbuffer_list_t
// file vringbuffer.h line 25
struct vringbuffer_list_t;

// tag-vringbuffer_receiver_callback_return_t
// file vringbuffer.h line 15
enum vringbuffer_receiver_callback_return_t { VRB_CALLBACK_DIDNT_USE_BUFFER=0, VRB_CALLBACK_USED_BUFFER=1 };

// tag-vringbuffer_t
// file vringbuffer.h line 20
struct vringbuffer_t;

// tag-wait
// file /usr/include/x86_64-linux-gnu/bits/waitstatus.h line 66
union wait;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// _IO_putc
// file /usr/include/libio.h line 435
extern signed int _IO_putc(signed int, struct _IO_FILE *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __xpg_basename
// file /usr/include/libgen.h line 34
extern char * __xpg_basename(char *);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// append_argv
// file jack_capture.c line 2641
void append_argv(char **v1, char **v2, signed int len1, signed int len2, signed int max_size);
// asprintf
// file jack_capture.c line 893
signed int asprintf(char **buffer, char *fmt, ...);
// atof
// file /usr/include/x86_64-linux-gnu/bits/stdlib-float.h line 26
static inline double atof(const char *__nptr);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// atoll
// file /usr/include/stdlib.h line 292
static inline signed long long int atoll(const char *__nptr);
// autoincrease_callback
// file jack_capture.c line 336
static signed int autoincrease_callback(struct vringbuffer_t *vrb, _Bool first_call, signed int reading_size, signed int writing_size);
// autoincrease_func
// file vringbuffer.c line 222
static void * autoincrease_func(void *arg);
// blocks_to_seconds
// file jack_capture.c line 326
static float blocks_to_seconds(signed int blocks);
// buffers_init
// file jack_capture.c line 363
static void buffers_init();
// buffers_to_seconds
// file jack_capture.c line 331
static float buffers_to_seconds(signed int buffers);
// call_hook
// file jack_capture.c line 948
static void call_hook(const char *cmd, signed int argc, char **argv);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// ceilf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern float ceilf(float);
// cleanup_disk
// file jack_capture.c line 1528
static void cleanup_disk(void);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// close_soundfile
// file jack_capture.c line 1227
static void close_soundfile(void);
// compare
// file jack_capture.c line 1840
static signed int compare(const void *a, const void *b);
// connect_ports
// file jack_capture.c line 1906
static void connect_ports(struct _jack_port **ports);
// connection_thread
// file jack_capture.c line 1931
static void * connection_thread(void *arg);
// create_ports
// file jack_capture.c line 2007
static void create_ports(void);
// create_upwaker
// file upwaker.h line 28
struct anonymous$3 * create_upwaker(void);
// disconnect_ports
// file jack_capture.c line 1887
static void disconnect_ports(struct _jack_port **ports);
// disk_callback
// file jack_capture.c line 1452
static enum vringbuffer_receiver_callback_return_t disk_callback(struct vringbuffer_t *vrb, _Bool first_time, void *element);
// disk_thread_control_priority
// file jack_capture.c line 1432
static void disk_thread_control_priority(void);
// disk_write
// file jack_capture.c line 1381
static signed int disk_write(void *data, unsigned long int frames);
// disk_write_overruns
// file jack_capture.c line 1410
static signed int disk_write_overruns(signed int num_overruns);
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// execv
// file /usr/include/unistd.h line 563
extern signed int execv(const char *, char * const *);
// execvp
// file /usr/include/unistd.h line 578
extern signed int execvp(const char *, char * const *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fabsf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 181
extern float fabsf(float);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// findnumports
// file jack_capture.c line 389
static signed int findnumports(const char **ports);
// finish
// file jack_capture.c line 2034
static void finish(signed int sig);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// frames_to_seconds
// file jack_capture.c line 305
static float frames_to_seconds(signed int frames);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_jack_connections
// file jack_capture.c line 1831
static void free_jack_connections(_Bool using_calloc, const char **connections);
// freewheelcallback
// file jack_capture.c line 1979
static void freewheelcallback(signed int starting, void *arg);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getformat
// file setformat.c line 31
signed int getformat(char *soundfile_format);
// gmtime_r
// file /usr/include/time.h line 249
extern struct tm * gmtime_r(const signed long int *, struct tm *);
// graphordercallback
// file jack_capture.c line 1973
static signed int graphordercallback(void *arg);
// handle_filelimit
// file jack_capture.c line 1304
static signed int handle_filelimit(unsigned long int frames);
// helper_thread_func
// file jack_capture.c line 760
static void * helper_thread_func(void *arg);
// hook_file_closed
// file jack_capture.c line 1013
static void hook_file_closed(char *fn, signed int xruns, signed int io_errors);
// hook_file_opened
// file jack_capture.c line 992
static void hook_file_opened(char *fn);
// hook_file_rotated
// file jack_capture.c line 1024
static void hook_file_rotated(char *oldfn, char *newfn, signed int num, signed int xruns, signed int io_errors);
// hook_rec_timimg
// file jack_capture.c line 1001
static void hook_rec_timimg(char *fn, struct timespec start, unsigned int latency);
// iec_scale
// file jack_capture.c line 523
static signed int iec_scale(float db);
// init_arguments
// file jack_capture.c line 2247
void init_arguments(signed int argc, char **argv);
// init_meterbridge_ports
// file jack_capture.c line 1785
static signed int init_meterbridge_ports();
// init_osc
// file jack_capture.c line 59
signed int init_osc(signed int osc_port);
// init_show_bufferusage
// file jack_capture.c line 582
static void init_show_bufferusage(void);
// init_various
// file jack_capture.c line 2469
void init_various(void);
// init_vu
// file jack_capture.c line 575
static void init_vu(void);
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
// jack_disconnect
// file /usr/include/jack/jack.h line 865
signed int jack_disconnect(struct _jack_client *, const char *, const char *);
// jack_free
// file /usr/include/jack/jack.h line 1312
void jack_free(void *);
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
// jack_latency_cb
// file jack_capture.c line 1990
static void jack_latency_cb(enum JackLatencyCallbackMode mode, void *arg);
// jack_on_shutdown
// file /usr/include/jack/jack.h line 300
void jack_on_shutdown(struct _jack_client *, void (*)(void *), void *);
// jack_port_by_name
// file /usr/include/jack/jack.h line 1147
struct _jack_port * jack_port_by_name(struct _jack_client *, const char *);
// jack_port_flags
// file /usr/include/jack/jack.h line 677
signed int jack_port_flags(const struct _jack_port *);
// jack_port_get_all_connections
// file /usr/include/jack/jack.h line 738
const char ** jack_port_get_all_connections(const struct _jack_client *, const struct _jack_port *);
// jack_port_get_buffer
// file /usr/include/jack/jack.h line 649
void * jack_port_get_buffer(struct _jack_port *, unsigned int);
// jack_port_get_latency_range
// file /usr/include/jack/jack.h line 980
void jack_port_get_latency_range(struct _jack_port *, enum JackLatencyCallbackMode, struct _jack_latency_range *);
// jack_port_name
// file /usr/include/jack/jack.h line 657
const char * jack_port_name(const struct _jack_port *);
// jack_port_register
// file /usr/include/jack/jack.h line 624
struct _jack_port * jack_port_register(struct _jack_client *, const char *, const char *, unsigned long int, unsigned long int);
// jack_ringbuffer_create
// file /usr/include/jack/ringbuffer.h line 72
struct anonymous$10 * jack_ringbuffer_create(unsigned long int);
// jack_ringbuffer_free
// file /usr/include/jack/ringbuffer.h line 80
void jack_ringbuffer_free(struct anonymous$10 *);
// jack_ringbuffer_read
// file /usr/include/jack/ringbuffer.h line 137
unsigned long int jack_ringbuffer_read(struct anonymous$10 *, char *, unsigned long int);
// jack_ringbuffer_read_space
// file /usr/include/jack/ringbuffer.h line 176
unsigned long int jack_ringbuffer_read_space(const struct anonymous$10 *);
// jack_ringbuffer_write
// file /usr/include/jack/ringbuffer.h line 205
unsigned long int jack_ringbuffer_write(struct anonymous$10 *, const char *, unsigned long int);
// jack_set_freewheel_callback
// file /usr/include/jack/jack.h line 355
signed int jack_set_freewheel_callback(struct _jack_client *, void (*)(signed int, void *), void *);
// jack_set_graph_order_callback
// file /usr/include/jack/jack.h line 431
signed int jack_set_graph_order_callback(struct _jack_client *, signed int (*)(void *), void *);
// jack_set_latency_callback
// file /usr/include/jack/jack.h line 497
signed int jack_set_latency_callback(struct _jack_client *, void (*)(enum JackLatencyCallbackMode, void *), void *);
// jack_set_process_callback
// file /usr/include/jack/jack.h line 342
signed int jack_set_process_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_set_xrun_callback
// file /usr/include/jack/jack.h line 441
signed int jack_set_xrun_callback(struct _jack_client *, signed int (*)(void *), void *);
// jack_shutdown
// file jack_capture.c line 2039
static void jack_shutdown(void *arg);
// jack_transport_query
// file /usr/include/jack/transport.h line 403
enum anonymous$12 jack_transport_query(const struct _jack_client *, struct anonymous *);
// keypress_func
// file jack_capture.c line 2076
static void * keypress_func(void *arg);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// lame_close
// file /usr/include/lame/lame.h line 977
signed int lame_close(struct lame_global_struct *);
// lame_encode_buffer_float
// file /usr/include/lame/lame.h line 746
signed int lame_encode_buffer_float(struct lame_global_struct *, const float *, const float *, const signed int, unsigned char *, const signed int);
// lame_encode_flush
// file /usr/include/lame/lame.h line 856
signed int lame_encode_flush(struct lame_global_struct *, unsigned char *, signed int);
// lame_get_brate
// file /usr/include/lame/lame.h line 354
signed int lame_get_brate(const struct lame_global_struct *);
// lame_get_num_channels
// file /usr/include/lame/lame.h line 193
signed int lame_get_num_channels(const struct lame_global_struct *);
// lame_init
// file /usr/include/lame/lame.h line 168
struct lame_global_struct * lame_init(void);
// lame_init_params
// file /usr/include/lame/lame.h line 636
signed int lame_init_params(struct lame_global_struct *);
// lame_set_VBR_min_bitrate_kbps
// file /usr/include/lame/lame.h line 447
signed int lame_set_VBR_min_bitrate_kbps(struct lame_global_struct *, signed int);
// lame_set_brate
// file /usr/include/lame/lame.h line 353
signed int lame_set_brate(struct lame_global_struct *, signed int);
// lame_set_in_samplerate
// file /usr/include/lame/lame.h line 188
signed int lame_set_in_samplerate(struct lame_global_struct *, signed int);
// lame_set_num_channels
// file /usr/include/lame/lame.h line 192
signed int lame_set_num_channels(struct lame_global_struct *, signed int);
// lame_set_out_samplerate
// file /usr/include/lame/lame.h line 224
signed int lame_set_out_samplerate(struct lame_global_struct *, signed int);
// lame_set_quality
// file /usr/include/lame/lame.h line 263
signed int lame_set_quality(struct lame_global_struct *, signed int);
// lo_server_thread_add_method
// file /usr/include/lo/lo_serverthread.h line 119
void * lo_server_thread_add_method(void *, const char *, const char *, signed int (*)(const char *, const char *, union anonymous$4 **, signed int, void *, void *), void *);
// lo_server_thread_free
// file /usr/include/lo/lo_serverthread.h line 103
void lo_server_thread_free(void *);
// lo_server_thread_get_url
// file /usr/include/lo/lo_serverthread.h line 159
char * lo_server_thread_get_url(void *);
// lo_server_thread_new
// file /usr/include/lo/lo_serverthread.h line 44
void * lo_server_thread_new(const char *, void (*)(signed int, const char *, const char *));
// lo_server_thread_start
// file /usr/include/lo/lo_serverthread.h line 139
signed int lo_server_thread_start(void *);
// lo_server_thread_stop
// file /usr/include/lo/lo_serverthread.h line 147
signed int lo_server_thread_stop(void *);
// log10f
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 112
extern float log10f(float);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// move_cursor_to_top
// file jack_capture.c line 587
static void move_cursor_to_top(void);
// mp3_write
// file jack_capture.c line 1362
static signed int mp3_write(void *das_data, unsigned long int frames, _Bool do_flush);
// msleep
// file jack_capture.c line 547
static void msleep(signed int n);
// my_calloc
// file jack_capture.c line 239
static void * my_calloc(unsigned long int size1, unsigned long int size2);
// my_malloc
// file vringbuffer.c line 100
static void * my_malloc(unsigned long int size1, unsigned long int size2);
// new_jack_client
// file jack_capture.c line 2046
static struct _jack_client * new_jack_client(char *name);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// open_mp3file
// file jack_capture.c line 1068
static signed int open_mp3file(void);
// open_soundfile
// file jack_capture.c line 1124
static signed int open_soundfile(void);
// osc_stop
// file jack_capture.c line 1053
void osc_stop();
// osc_tm_start
// file jack_capture.c line 1054
void osc_tm_start();
// osc_tm_stop
// file jack_capture.c line 1055
void osc_tm_stop();
// oscb_error
// file osc.c line 73
static void oscb_error(signed int num, const char *m, const char *path);
// oscb_frotate
// file osc.c line 64
signed int oscb_frotate(const char *path, const char *types, union anonymous$4 **argv, signed int argc, void *msg, void *user_data);
// oscb_stop
// file osc.c line 58
signed int oscb_stop(const char *path, const char *types, union anonymous$4 **argv, signed int argc, void *msg, void *user_data);
// oscb_tm_start
// file osc.c line 46
signed int oscb_tm_start(const char *path, const char *types, union anonymous$4 **argv, signed int argc, void *msg, void *user_data);
// oscb_tm_stop
// file osc.c line 52
signed int oscb_tm_stop(const char *path, const char *types, union anonymous$4 **argv, signed int argc, void *msg, void *user_data);
// pause
// file /usr/include/unistd.h line 469
extern signed int pause(void);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// portnames_add
// file jack_capture.c line 448
static void portnames_add(char *name);
// portnames_add_defaults
// file jack_capture.c line 397
static void portnames_add_defaults(void);
// portnames_get_connections
// file jack_capture.c line 485
static const char ** portnames_get_connections(signed int ch, _Bool *using_calloc);
// powf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 153
extern float powf(float, float);
// print_all_formats
// file setformat.c line 35
void print_all_formats(void);
// print_console
// file jack_capture.c line 605
static void print_console(_Bool move_cursor_to_top_doit, _Bool force_update);
// print_console_top
// file jack_capture.c line 556
static void print_console_top(void);
// print_ln
// file jack_capture.c line 551
static void print_ln(void);
// print_message
// file jack_capture.c line 827
static void print_message(const char *fmt, ...);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process
// file jack_capture.c line 1646
static signed int process(unsigned int nframes, void *arg);
// process_fill_buffer
// file jack_capture.c line 1556
static void process_fill_buffer(float **in, struct buffer_t *buffer, signed int i, signed int end);
// process_fill_buffers
// file jack_capture.c line 1606
static void process_fill_buffers(signed int jack_block_size);
// process_new_current_buffer
// file jack_capture.c line 1590
static _Bool process_new_current_buffer(signed int frames_left);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous$7 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$7 *, const union anonymous$6 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$7 *, union anonymous$5 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$5 *, const union anonymous$6 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$5 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$5 *);
// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// read_config
// file jack_capture.c line 2423
char ** read_config(signed int *argc, signed int max_size);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// receiver_func
// file vringbuffer.c line 289
static void * receiver_func(void *arg);
// reconnect_ports_questionmark
// file jack_capture.c line 1844
static signed int reconnect_ports_questionmark(void);
// rint
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 279
extern double rint(double);
// rotate_file
// file jack_capture.c line 1257
static signed int rotate_file(unsigned long int frames, signed int reset_totals);
// seconds_to_blocks
// file jack_capture.c line 310
static signed int seconds_to_blocks(float seconds);
// seconds_to_buffers
// file jack_capture.c line 315
static signed int seconds_to_buffers(float seconds);
// seconds_to_frames
// file jack_capture.c line 300
static signed long int seconds_to_frames(float seconds);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous$8 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous$8 *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous$8 *);
// send_buffer_to_disk_thread
// file jack_capture.c line 1549
static void send_buffer_to_disk_thread(struct buffer_t *buffer);
// set_high_priority
// file jack_capture.c line 248
static _Bool set_high_priority(void);
// setformat_base
// file setformat.c line 1
static signed int setformat_base(char *soundfile_format);
// setpriority
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 97
extern signed int setpriority(signed int, unsigned int, signed int);
// setup_helper_thread
// file jack_capture.c line 859
void setup_helper_thread(void);
// sf_close
// file /usr/include/sndfile.h line 632
signed int sf_close(struct SNDFILE_tag *);
// sf_format_check
// file /usr/include/sndfile.h line 543
signed int sf_format_check(const struct SF_INFO *);
// sf_open
// file /usr/include/sndfile.h line 485
struct SNDFILE_tag * sf_open(const char *, signed int, struct SF_INFO *);
// sf_open_fd
// file /usr/include/sndfile.h line 500
struct SNDFILE_tag * sf_open_fd(signed int, signed int, struct SF_INFO *, signed int);
// sf_strerror
// file /usr/include/sndfile.h line 516
const char * sf_strerror(struct SNDFILE_tag *);
// sf_writef_float
// file /usr/include/sndfile.h line 603
signed long int sf_writef_float(struct SNDFILE_tag *, const float *, signed long int);
// shutdown_osc
// file jack_capture.c line 60
void shutdown_osc(void);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// start_connection_thread
// file jack_capture.c line 1963
static void start_connection_thread(void);
// start_jack
// file jack_capture.c line 2060
static void start_jack(void);
// start_keypress_thread
// file jack_capture.c line 2101
static void start_keypress_thread(void);
// start_meterbridge
// file jack_capture.c line 1736
static void start_meterbridge(signed int num_channels);
// stdout_write
// file jack_capture.c line 1328
static signed int stdout_write(float *buffer, unsigned long int frames);
// stop_connection_thread
// file jack_capture.c line 1968
static void stop_connection_thread(void);
// stop_helper_thread
// file jack_capture.c line 865
static void stop_helper_thread(void);
// stop_recording_and_cleanup
// file jack_capture.c line 2607
void stop_recording_and_cleanup(void);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// string_charpos
// file jack_capture.c line 2381
signed int string_charpos(char *s, char c);
// string_concat
// file jack_capture.c line 2375
char * string_concat(char *s1, char *s2);
// strip_whitespace
// file jack_capture.c line 2403
char * strip_whitespace(char *s);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoll
// file /usr/include/stdlib.h line 209
extern signed long long int strtoll(const char *, char ** restrict , signed int);
// substring
// file jack_capture.c line 2391
char * substring(char *s, signed int start, signed int end);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// tcgetattr
// file /usr/include/termios.h line 66
extern signed int tcgetattr(signed int, struct termios *);
// tcsetattr
// file /usr/include/termios.h line 70
extern signed int tcsetattr(signed int, signed int, struct termios *);
// turn_off_echo
// file jack_capture.c line 269
static void turn_off_echo(void);
// turn_on_echo
// file jack_capture.c line 277
static void turn_on_echo(void);
// ungetc
// file /usr/include/stdio.h line 702
extern signed int ungetc(signed int, struct _IO_FILE *);
// upwaker_sleep
// file upwaker.h line 29
void upwaker_sleep(struct anonymous$3 *upwaker);
// upwaker_wake_up
// file upwaker.h line 30
void upwaker_wake_up(struct anonymous$3 *upwaker);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// verbose_print
// file jack_capture.c line 231
static void verbose_print(const char *fmt, ...);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vringbuffer_create
// file vringbuffer.h line 62
struct vringbuffer_t * vringbuffer_create(signed int num_elements_during_startup, signed int max_num_elements, unsigned long int element_size);
// vringbuffer_delete
// file vringbuffer.c line 205
void vringbuffer_delete(struct vringbuffer_t *vrb);
// vringbuffer_get_reading
// file vringbuffer.c line 274
void * vringbuffer_get_reading(struct vringbuffer_t *vrb);
// vringbuffer_get_writing
// file vringbuffer.h line 108
void * vringbuffer_get_writing(struct vringbuffer_t *vrb);
// vringbuffer_increase
// file vringbuffer.c line 258
void vringbuffer_increase(struct vringbuffer_t *vrb, signed int num_elements, void **elements);
// vringbuffer_increase_writer1
// file vringbuffer.c line 121
static _Bool vringbuffer_increase_writer1(struct vringbuffer_t *vrb, signed int num_elements, _Bool first_call);
// vringbuffer_reading_size
// file vringbuffer.h line 104
signed int vringbuffer_reading_size(struct vringbuffer_t *vrb);
// vringbuffer_return_reading
// file vringbuffer.c line 280
void vringbuffer_return_reading(struct vringbuffer_t *vrb, void *data);
// vringbuffer_return_writing
// file vringbuffer.h line 109
void vringbuffer_return_writing(struct vringbuffer_t *vrb, void *data);
// vringbuffer_set_autoincrease_callback
// file vringbuffer.h line 96
void vringbuffer_set_autoincrease_callback(struct vringbuffer_t *vrb, signed int (*callback)(struct vringbuffer_t *, _Bool, signed int, signed int), unsigned int interval);
// vringbuffer_set_autoincrease_callback::callback$object
//
signed int callback$object(struct vringbuffer_t *, _Bool, signed int, signed int);
// vringbuffer_set_receiver_callback
// file vringbuffer.h line 106
void vringbuffer_set_receiver_callback(struct vringbuffer_t *vrb, enum vringbuffer_receiver_callback_return_t (*receiver_callback)(struct vringbuffer_t *, _Bool, void *));
// vringbuffer_set_receiver_callback::receiver_callback$object
//
enum vringbuffer_receiver_callback_return_t receiver_callback$object(struct vringbuffer_t *, _Bool, void *);
// vringbuffer_stop_callbacks
// file vringbuffer.h line 63
void vringbuffer_stop_callbacks(struct vringbuffer_t *vrb);
// vringbuffer_trigger_autoincrease_callback
// file vringbuffer.h line 99
void vringbuffer_trigger_autoincrease_callback(struct vringbuffer_t *vrb);
// vringbuffer_writing_size
// file vringbuffer.h line 111
signed int vringbuffer_writing_size(struct vringbuffer_t *vrb);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// vsprintf
// file /usr/include/stdio.h line 379
extern signed int vsprintf(char *, const char *, void **);
// wait
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 102
extern signed int wait(union anonymous$11);
// wait_child
// file jack_capture.c line 944
static void wait_child(signed int sig);
// wait_until_recording_finished
// file jack_capture.c line 2582
void wait_until_recording_finished(void);
// wake_up_connection_thread
// file jack_capture.c line 1958
static void wake_up_connection_thread(void);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// xrun
// file jack_capture.c line 1721
static signed int xrun(void *arg);

struct anonymous$10
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

struct anonymous$14
{
  // __w_stopval
  unsigned int __w_stopval : 8;
  // __w_stopsig
  unsigned int __w_stopsig : 8;
  // $anon0
  unsigned int $anon0 : 16;
};

struct anonymous$13
{
  // __w_termsig
  unsigned int __w_termsig : 7;
  // __w_coredump
  unsigned int __w_coredump : 1;
  // __w_retcode
  unsigned int __w_retcode : 8;
  // $anon0
  unsigned int $anon0 : 16;
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

union anonymous$5
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous$7
{
  // __data
  struct anonymous$0 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

struct anonymous$3
{
  // please_wakeup
  signed int please_wakeup;
  // mutex
  union anonymous$5 mutex;
  // cond
  union anonymous$7 cond;
};

struct anonymous$2
{
  // sec
  unsigned int sec;
  // frac
  unsigned int frac;
};

struct anonymous
{
  // unique_1
  unsigned long int unique_1;
  // usecs
  unsigned long int usecs;
  // frame_rate
  unsigned int frame_rate;
  // frame
  unsigned int frame;
  // valid
  enum anonymous$1 valid;
  // bar
  signed int bar;
  // beat
  signed int beat;
  // tick
  signed int tick;
  // bar_start_tick
  double bar_start_tick;
  // beats_per_bar
  float beats_per_bar;
  // beat_type
  float beat_type;
  // ticks_per_beat
  double ticks_per_beat;
  // beats_per_minute
  double beats_per_minute;
  // frame_time
  double frame_time;
  // next_time
  double next_time;
  // bbt_offset
  unsigned int bbt_offset;
  // audio_frames_per_video_frame
  float audio_frames_per_video_frame;
  // video_offset
  unsigned int video_offset;
  // padding
  signed int padding[7l];
  // unique_2
  unsigned long int unique_2;
} __attribute__ ((__packed__));

union anonymous$9
{
  // __uptr
  union wait *__uptr;
  // __iptr
  signed int *__iptr;
};

union anonymous$11
{
  // __uptr
  union wait *__uptr;
  // __iptr
  signed int *__iptr;
} __attribute__ ((__transparent_union__));

union anonymous$8
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

union anonymous$6
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$4
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
  struct anonymous$2 t;
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

struct _jack_latency_range
{
  // min
  unsigned int min;
  // max
  unsigned int max;
};

struct buffer_t
{
  // overruns
  signed int overruns;
  // pos
  signed int pos;
  // data
  float data[0l];
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct termios
{
  // c_iflag
  unsigned int c_iflag;
  // c_oflag
  unsigned int c_oflag;
  // c_cflag
  unsigned int c_cflag;
  // c_lflag
  unsigned int c_lflag;
  // c_line
  unsigned char c_line;
  // c_cc
  unsigned char c_cc[32l];
  // c_ispeed
  unsigned int c_ispeed;
  // c_ospeed
  unsigned int c_ospeed;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct tm
{
  // tm_sec
  signed int tm_sec;
  // tm_min
  signed int tm_min;
  // tm_hour
  signed int tm_hour;
  // tm_mday
  signed int tm_mday;
  // tm_mon
  signed int tm_mon;
  // tm_year
  signed int tm_year;
  // tm_wday
  signed int tm_wday;
  // tm_yday
  signed int tm_yday;
  // tm_isdst
  signed int tm_isdst;
  // tm_gmtoff
  signed long int tm_gmtoff;
  // tm_zone
  const char *tm_zone;
};

struct vringbuffer_list_t
{
  // next
  struct vringbuffer_list_t *next;
};

struct vringbuffer_t
{
  // for_writer1
  struct anonymous$10 *for_writer1;
  // for_writer2
  struct anonymous$10 *for_writer2;
  // for_reader
  struct anonymous$10 *for_reader;
  // element_size
  unsigned long int element_size;
  // curr_num_elements
  signed int curr_num_elements;
  // max_num_elements
  signed int max_num_elements;
  // allocated_mem
  struct vringbuffer_list_t *allocated_mem;
  // increase_lock
  union anonymous$5 increase_lock;
  // please_stop
  _Bool please_stop;
  // receiver_thread
  unsigned long int receiver_thread;
  // receiver_trigger
  struct anonymous$3 *receiver_trigger;
  // receiver_started
  union anonymous$8 receiver_started;
  // receiver_callback
  enum vringbuffer_receiver_callback_return_t (*receiver_callback)(struct vringbuffer_t *, _Bool, void *);
  // autoincrease_thread
  unsigned long int autoincrease_thread;
  // autoincrease_trigger
  struct anonymous$3 *autoincrease_trigger;
  // autoincrease_started
  union anonymous$8 autoincrease_started;
  // autoincrease_callback
  signed int (*autoincrease_callback)(struct vringbuffer_t *, _Bool, signed int, signed int);
  // autoincrease_interval
  unsigned int autoincrease_interval;
};

union wait
{
  // w_status
  signed int w_status;
  // __wait_terminated
  struct anonymous$13 __wait_terminated;
  // __wait_stopped
  struct anonymous$14 __wait_stopped;
};


// absolutely_silent
// file jack_capture.c line 127
static _Bool absolutely_silent = (_Bool)0;
// advanced_help
// file jack_capture.c line 2105
static const char *advanced_help = "jack_capture  [--bitdepth n] [--channels n] [--port port] [filename]\n              [ -b        n] [ -c        n] [ -p    port]\n\n\"bitdepth\" is by default FLOAT. It can be set to either 8, 16, 24 or 32. (for relevant formats)\n\"channels\" is by default 2.\n\"port\"     is by default set to the two first physical outputs. The \"port\" argument can be\n           specified more than once.\n\"filename\" is by default autogenerated to \"jack_capture_<number>.<format>\"\n\n\nAdditional arguments:\n[--recording-time n] or [-d n]   -> Recording is stopped after \"n\" seconds.\n                                    This options also starts jack_capture in --no-stdin mode.\n                                    To stop recording before the timeout, one can press Ctrl-C.)\n[--filename-prefix s]/[-fp n]    -> Sets first part of the autogenerated filename.\n                                    (default is \"jack_capture_\")\n[--leading-zeros n] or [-z n]    -> \"n\" is the number of zeros to in the autogenerated filename.\n                                    (-z 2 -> jack_capture_001.wav, and so on.) (default is 1)\n[--format format] or [-f format] -> Selects fileformat provided by libsndfile.\n                                    See http://www.mega-nerd.com/libsndfile/api.html#open\n                                    (Default is wav for 1 or 2 channels, and wavex for more than 2.)\n[--print-formats] or [-pf]       -> Prints all sound formats provided to sndfile to screen and then\n                                    exits.\n[--version] or [-v]              -> Prints out version.\n[--silent] or [-s]               -> Suppresses some common messages printed to the terminal.\n[--absolutely-silent] or [-as]   -> Suppresses all messages printed to the terminal.\n                                    Warning: libraries used by jack_capture may still print messages.\n[--verbose] or [-V]              -> Prints some extra information to the terminal.\n[--mp3] or [-mp3]                -> Writes to an mp3 file using liblame (LAME).\n                                    (the --format option has no effect using this option)\n[--mp3-quality n] or [-mp3q n]   -> Selects mp3 quality provided by liblame. n=0 is best, n=9 is worst.\n                                    Default n is 2. (0 uses the most amount of CPU, 9 uses the least)\n[--mp3-bitrate n] or [-mp3b n]   -> Selects mp3 bitrate (in kbit/s).\n                                    Default is set by liblame. (currently 128)\n[--write-to-stdout] or [-ws]     -> Writes 16 bit little endian to stdout. (the --format option, the\n                                    --mp3 option, and some others have no effect using this option)\n[--disable-meter] or [-dm]       -> Disable console meter.\n[--hide-buffer-usage] or [-hbu]  -> Disable buffer usage updates in the console.\n[--disable-console] or [-dc]     -> Disable console updates. Same as \"-dm -hbu\".\n[--no-stdin] or [-ns]            -> Don't read the console. (i.e pressing return won't stop recording.)\n[--daemon]                       -> Same as writing \"--no-stdin --absolutely-silent\".\n[--linear-meter] or [-lm]        -> Use linear scale for the console meter (default is dB scale)\n[--dB-meter-reference or [-dBr]  -> Specify reference level for dB meter. (default=0)\n[--meterbridge] or [-mb]         -> Start up meterbridge to monitor recorded sound.\n[--meterbridge-type] or [-mt]    -> Specify type. vu (default), ppm, dpm, jf or sco.\n[--meterbridge-reference]/[-mr]  -> Specify reference level for meterbidge.\n[--jack-transport]/[-jt]         -> Start program, but do not start recording until jack transport has started rolling\n                                    When jack transport stops, the recording is also stopped, and the program ends.\n[--jack-transport-multi]/[-jtm]  -> Similar to --jack-transport, but do not end program when jack transport stops.\n                                    Instead, record to a new file when jack_transport starts rolling again.\n                                    (not implemented yet)\n[--jack-freewheeling]/[-jf]      -> Start program, but do not start recording until jack enters freewheeling mode\n                                    When jack leaves freewheeling, the recording is also stopped, and the program ends.\n[--manual-connections]/[-mc]     -> jack_capture will not connect any ports for you. \n[--bufsize s] or [-B s]          -> Initial/minimum buffer size in seconds. Default is 8 seconds\n                                    for mp3 files, and 4 seconds for all other formats.\n[--maxbufsize] or [-MB]          -> Maximum buffer size in seconds jack_capture will allocate.\n                                    Default is 40. (Buffer is automatically increased during\n                                    recording when needed. But it will never go beyond this size.)\n[--filename] or [-fn]            -> Specify filename.\n                                    (It's usually easier to set last argument instead)\n[--osc] or [-O]                  -> Specify OSC port number to listen on. see --help-osc\n[--timestamp] or [-S]            -> create a FILENAME.tme file for each recording, storing\n                                    the system-time corresponding to the first audio sample.\n[--rotatefile N] or [-Rf N]      -> force rotate files every N audio-frames.\n[--hook-open c] or [-Ho c]       -> command to execute on successful file-open. (see below)\n[--hook-close c] or [-Hc c]      -> command to execute when closing the session. (see below)\n[--hook-rotate c] or [-Hr c]     -> command to execute on file-name-rotation. (see below)\n[--hook-timing c] or [-Ht c]     -> callback when first audio frame is received. (see below)\n[--timemachine] or [-tm]         -> jack_capture operates in \"timemachine\" mode.\n[--timemachine-prebuffer s]      -> Specify (in seconds) how long time to prebuffer in timemachine mode.\n[ -tmpb s]                       -> ------------------------ \"\" ----------------------------------------\n\n All hook options take a full-path to an executable as argument.\n The commands are executed in a fire-and-forget style upon internal events.\n All output of the hooks is discarded.\n Paramaters passed to the hook-scripts:\n  open:   CMD <filename>\n  close:  CMD <filename> <xrun-count> <io-error-count>\n  rotate: CMD <filename> <xrun-count> <io-error-count> <new-filename> <seq-number>\n  timing: CMD <filename> <time-sec> <time-nses> <jack-port-latency in frames>\n\nExamples:\n\nTo record a stereo file of what you hear:\n  $jack_capture\n\nTo record a stereo file of what you hear in the flac format:\n $jack_capture -f flac\n\nTo record a stereo file of what you hear in the ogg format:\n $jack_capture -f ogg\n\nTo record a stereo file of what you hear in the mp3 format:\n $jack_capture -mp3\n\nTo record a stereo file of what you hear in the wav format:\n  $jack_capture --port system:playback_1 --port system:playback_2\n****************************************************************************\n**** NOTE! The above example does _exactly_ the same as the default!!!  ****\n****************************************************************************\n\nSame result as above, but using a different syntax:\n  $jack_capture --channels 2 --port system:playback*\n\nTo record the output from jamin:\n  $jack_capture --port jamin:out* sound_from_jamin.wav\n\nTo record all sound coming in to jamin:\n  $jack_capture --port jamin:in* sound_to_jamin.wav\n\nTo record all sound coming in and out of jamin:\n  $jack_capture --port jamin* sound_to_and_from_jamin.wav\n\nTo record a stereo file from the soundcard:\n  $jack_capture -c 2 -p system:capture*\n\n";
// base_filename
// file jack_capture.c line 99
static char *base_filename = (char *)(void *)0;
// bitdepth
// file jack_capture.c line 98
static signed int bitdepth = 0;
// block_size
// file jack_capture.c line 187
static signed int block_size;
// buffer_interleaved
// file jack_capture.c line 189
static _Bool buffer_interleaved = (_Bool)1;
// buffer_size_in_bytes
// file jack_capture.c line 294
static signed int buffer_size_in_bytes;
// bytes_per_frame
// file jack_capture.c line 1046
static signed int bytes_per_frame;
// client
// file jack_capture.c line 94
static struct _jack_client *client = (struct _jack_client *)(void *)0;
// connect_meterbridge
// file jack_capture.c line 1783
signed int connect_meterbridge = 0;
// connect_thread
// file jack_capture.c line 203
static unsigned long int connect_thread = (unsigned long int)0;
// connection_semaphore
// file jack_capture.c line 1929
static union anonymous$8 connection_semaphore;
// cportnames
// file jack_capture.c line 386
static const char **cportnames = (const char **)(void *)0;
// create_tme_file
// file jack_capture.c line 128
static _Bool create_tme_file = (_Bool)0;
// current
// file jack_capture.c line 266
static struct termios current;
// current_buffer
// file jack_capture.c line 200
static struct buffer_t *current_buffer;
// das_lame_bitrate
// file jack_capture.c line 132
static signed int das_lame_bitrate = -1;
// das_lame_quality
// file jack_capture.c line 131
static signed int das_lame_quality = 2;
// disk_errors
// file jack_capture.c line 118
static signed int disk_errors = 0;
// disk_thread_has_high_priority
// file jack_capture.c line 170
static _Bool disk_thread_has_high_priority = (_Bool)0;
// disksize
// file jack_capture.c line 1044
static signed long int disksize = (signed long int)0;
// echo_turned_on
// file jack_capture.c line 265
static signed int echo_turned_on = 1;
// empty_buffer
// file jack_capture.c line 292
static float *empty_buffer;
// filename
// file jack_capture.c line 100
static char *filename = (char *)(void *)0;
// filename_prefix
// file jack_capture.c line 111
static char *filename_prefix = "jack_capture_";
// fixed_duration
// file jack_capture.c line 114
static _Bool fixed_duration = (_Bool)0;
// freewheel_mode
// file jack_capture.c line 162
static volatile signed int freewheel_mode = 0;
// helper_thread
// file jack_capture.c line 174
static unsigned long int helper_thread = (unsigned long int)0;
// helper_thread_running
// file jack_capture.c line 755
static volatile signed int helper_thread_running = 0;
// hook_cmd_closed
// file jack_capture.c line 140
static char *hook_cmd_closed = (char *)(void *)0;
// hook_cmd_opened
// file jack_capture.c line 139
static char *hook_cmd_opened = (char *)(void *)0;
// hook_cmd_rotate
// file jack_capture.c line 141
static char *hook_cmd_rotate = (char *)(void *)0;
// hook_cmd_timing
// file jack_capture.c line 142
static char *hook_cmd_timing = (char *)(void *)0;
// initial
// file jack_capture.c line 267
static struct termios initial;
// is_helper_running
// file jack_capture.c line 758
static _Bool is_helper_running = (_Bool)1;
// is_initialized
// file jack_capture.c line 182
static volatile signed int is_initialized = 0;
// is_running
// file jack_capture.c line 183
static volatile signed int is_running = 1;
// is_using_wav
// file jack_capture.c line 1045
static _Bool is_using_wav = (_Bool)1;
// j_latency
// file jack_capture.c line 1061
static unsigned int j_latency = (unsigned int)0;
// jack_freewheel_started
// file jack_capture.c line 1635
static _Bool jack_freewheel_started = (_Bool)0;
// jack_has_been_shut_down
// file jack_capture.c line 156
static _Bool jack_has_been_shut_down = (_Bool)0;
// jack_samplerate
// file jack_capture.c line 155
static float jack_samplerate;
// jack_transport_started
// file jack_capture.c line 1634
static _Bool jack_transport_started = (_Bool)0;
// keypress_thread
// file jack_capture.c line 2075
static unsigned long int keypress_thread = (unsigned long int)0;
// lame
// file jack_capture.c line 167
static struct lame_global_struct *lame;
// leading_zeros
// file jack_capture.c line 110
static signed int leading_zeros = 1;
// max_buffer_time
// file jack_capture.c line 93
static float max_buffer_time = 40.0f;
// message_string
// file jack_capture.c line 753
static char message_string[5000l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// meterbridge_jackname
// file jack_capture.c line 1732
static char *meterbridge_jackname;
// meterbridge_pid
// file jack_capture.c line 1733
signed int meterbridge_pid;
// meterbridge_reference
// file jack_capture.c line 105
static char *meterbridge_reference = "0";
// meterbridge_type
// file jack_capture.c line 104
static char *meterbridge_type = "vu";
// min_buffer_time
// file jack_capture.c line 92
static float min_buffer_time = -1.0f;
// mp3buf
// file jack_capture.c line 1065
static unsigned char *mp3buf;
// mp3bufsize
// file jack_capture.c line 1066
static signed int mp3bufsize;
// mp3file
// file jack_capture.c line 1064
static struct _IO_FILE *mp3file = (struct _IO_FILE *)(void *)0;
// no_stdin
// file jack_capture.c line 115
static _Bool no_stdin = (_Bool)0;
// num_channels
// file jack_capture.c line 97
static signed int num_channels = -1;
// num_cportnames
// file jack_capture.c line 387
static signed int num_cportnames = 0;
// num_files
// file jack_capture.c line 1043
static signed int num_files = 1;
// num_frames_recorded
// file jack_capture.c line 112
static signed long int num_frames_recorded = (signed long int)0;
// num_frames_to_record
// file jack_capture.c line 113
static signed long int num_frames_to_record = (signed long int)0;
// num_frames_written_to_disk
// file jack_capture.c line 148
static signed long int num_frames_written_to_disk = (signed long int)0;
// osc_help
// file jack_capture.c line 2224
static const char *osc_help = "If called with -O <udp-port-number>, jack-capture can be remote-controlled.\nThe following OSC (Open Sound Control) messages are understood:\n\n  /jack_capture/stop        (no arguments) -- stop recording and exit\n  /jack_capture/rotate      (no arguments) -- rotate file-name\n  /jack_capture/tm/start    (no arguments) -- in timemachine-mode: start recording.\n  /jack_capture/tm/stop     (no arguments) -- in timemachine-mode: stop recording.\n\nExample:\n  jack_capture -O 7777\n  oscsend localhost 7777 /jack_capture/stop\nThe 'oscsend' utility comes with liblo, deb-pkg: liblo-utils.\n\nCaveat:\nWhen used with hook-commands (-Hr, -Hc, etc) the OSC port will be in use\nuntil the last of the hook-commands has terminated.\nLaunching a new instance of jack_capture with the same OSC port while some\nhook-script of a previous instance is still running, will prevent jack_capture\nfrom listening on that UDP-port (non fatal - \"port is in use\" warning).\njack_capture will work fine, but can not be remote-controlled.\n\n";
// osc_port
// file jack_capture.c line 137
static signed int osc_port = -1;
// osc_server
// file osc.c line 80
void *osc_server = (void *)0;
// overruns
// file jack_capture.c line 1049
static signed long int overruns = (signed long int)0;
// ports
// file jack_capture.c line 152
static struct _jack_port **ports;
// ports_meterbridge
// file jack_capture.c line 153
static struct _jack_port **ports_meterbridge = (struct _jack_port **)(void *)0;
// print_message_mutex
// file jack_capture.c line 826
static union anonymous$5 print_message_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// process_state
// file jack_capture.c line 1644
static signed int process_state = 0;
// program_ended_with_return
// file jack_capture.c line 149
static _Bool program_ended_with_return = (_Bool)0;
// queued_file_rotate
// file jack_capture.c line 1052
_Bool queued_file_rotate = (_Bool)0;
// recording_time
// file jack_capture.c line 116
static double recording_time = 0.0;
// rotateframe
// file jack_capture.c line 143
static signed long int rotateframe = (signed long int)0;
// rtime
// file jack_capture.c line 1058
static struct timespec rtime;
// show_bufferusage
// file jack_capture.c line 103
static _Bool show_bufferusage = (_Bool)1;
// silent
// file jack_capture.c line 125
_Bool silent = (_Bool)0;
// soundfile
// file jack_capture.c line 1048
static struct SNDFILE_tag *soundfile = (struct SNDFILE_tag *)(void *)0;
// soundfile_format
// file jack_capture.c line 120
static char *soundfile_format = "wav";
// soundfile_format_is_set
// file jack_capture.c line 119
static _Bool soundfile_format_is_set = (_Bool)0;
// soundfile_format_multi
// file jack_capture.c line 123
static char *soundfile_format_multi = "wavex";
// soundfile_format_one_or_two
// file jack_capture.c line 121
static char *soundfile_format_one_or_two = "wav";
// ssync_offset
// file jack_capture.c line 1060
static signed int ssync_offset = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// stop_sem
// file jack_capture.c line 207
static union anonymous$8 stop_sem;
// store_sync
// file jack_capture.c line 1059
static signed int store_sync = 0;
// timemachine_mode
// file jack_capture.c line 145
static _Bool timemachine_mode = (_Bool)0;
// timemachine_prebuffer
// file jack_capture.c line 147
static float timemachine_prebuffer = 8.0f;
// timemachine_recording
// file jack_capture.c line 146
static _Bool timemachine_recording = (_Bool)0;
// total_overruns
// file jack_capture.c line 159
static signed int total_overruns = 0;
// total_xruns
// file jack_capture.c line 160
static signed int total_xruns = 0;
// unreported_overruns
// file jack_capture.c line 158
static signed long int unreported_overruns = (signed long int)0;
// use_jack_freewheel
// file jack_capture.c line 134
static _Bool use_jack_freewheel = (_Bool)0;
// use_jack_transport
// file jack_capture.c line 133
static _Bool use_jack_transport = (_Bool)0;
// use_manual_connections
// file jack_capture.c line 135
static _Bool use_manual_connections = (_Bool)0;
// use_meterbridge
// file jack_capture.c line 102
static _Bool use_meterbridge = (_Bool)0;
// use_vu
// file jack_capture.c line 101
static _Bool use_vu = (_Bool)1;
// verbose
// file jack_capture.c line 126
_Bool verbose = (_Bool)0;
// vringbuffer
// file jack_capture.c line 289
static struct vringbuffer_t *vringbuffer;
// vu_bias
// file jack_capture.c line 109
static float vu_bias = 1.0f;
// vu_dB
// file jack_capture.c line 108
static signed int vu_dB = 1;
// vu_not_recording
// file jack_capture.c line 600
static char *vu_not_recording = "-----------Press <Return> to start recording------------";
// vu_peaks
// file jack_capture.c line 177
static signed int *vu_peaks = (signed int *)(void *)0;
// vu_peakvals
// file jack_capture.c line 178
static float *vu_peakvals = (float *)(void *)0;
// vu_times
// file jack_capture.c line 176
static signed int *vu_times = (signed int *)(void *)0;
// vu_vals
// file jack_capture.c line 175
static float *vu_vals = (float *)(void *)0;
// write_to_mp3
// file jack_capture.c line 130
static _Bool write_to_mp3 = (_Bool)0;
// write_to_stdout
// file jack_capture.c line 129
static _Bool write_to_stdout = (_Bool)0;

// append_argv
// file jack_capture.c line 2641
void append_argv(char **v1, char **v2, signed int len1, signed int len2, signed int max_size)
{
  signed int write_pos = len1;
  signed int read_pos = 0;
  if(len1 + len2 >= max_size)
  {
    fprintf(stderr, "Too many arguments.\n");
    exit(-3);
  }

  signed int tmp_post$1;
  signed int tmp_post$2;
  for( ; !(write_pos >= len1 + len2); v1[(signed long int)tmp_post$1] = v2[(signed long int)tmp_post$2])
  {
    tmp_post$1 = write_pos;
    write_pos = write_pos + 1;
    tmp_post$2 = read_pos;
    read_pos = read_pos + 1;
  }
}

// asprintf
// file jack_capture.c line 893
signed int asprintf(char **buffer, char *fmt, ...)
{
  signed int size = 200;
  signed int nchars;
  void **ap;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)size);
  *buffer = (char *)return_value_malloc$1;
  if(*buffer == ((char *)NULL))
    return -1;

  else
  {
    ap = (void **)&fmt;
    nchars=vsnprintf(*buffer, (unsigned long int)size, fmt, ap);
    ap = ((void **)NULL);
    if(nchars >= size)
    {
      char *tmpbuff;
      size = nchars + 1;
      void *return_value_realloc$2;
      return_value_realloc$2=realloc((void *)*buffer, (unsigned long int)size);
      tmpbuff = (char *)return_value_realloc$2;
      if(tmpbuff == ((char *)NULL))
      {
        free((void *)*buffer);
        return -1;
      }

      *buffer = tmpbuff;
      ap = (void **)&fmt;
      nchars=vsnprintf(*buffer, (unsigned long int)size, fmt, ap);
      ap = ((void **)NULL);
    }

    if(!(nchars >= 0))
      return nchars;

    else
      return size;
  }
}

// atof
// file /usr/include/x86_64-linux-gnu/bits/stdlib-float.h line 26
static inline double atof(const char *__nptr)
{
  double return_value_strtod$1;
  return_value_strtod$1=strtod(__nptr, (char **)(void *)0);
  return return_value_strtod$1;
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1;
}

// atoll
// file /usr/include/stdlib.h line 292
static inline signed long long int atoll(const char *__nptr)
{
  signed long long int return_value_strtoll$1;
  return_value_strtoll$1=strtoll(__nptr, (char **)(void *)0, 10);
  return return_value_strtoll$1;
}

// autoincrease_callback
// file jack_capture.c line 336
static signed int autoincrease_callback(struct vringbuffer_t *vrb, _Bool first_call, signed int reading_size, signed int writing_size)
{
  if(!(use_jack_freewheel == (_Bool)0))
    return 0;

  else
    if(!(first_call == (_Bool)0))
    {
      set_high_priority();
      return 0;
    }

    else
      if((signed int)timemachine_mode == 1 && (signed int)timemachine_recording == 0)
        return 0;

      else
      {
        float return_value_buffers_to_seconds$1;
        return_value_buffers_to_seconds$1=buffers_to_seconds(writing_size);
        if(return_value_buffers_to_seconds$1 < min_buffer_time)
          return 2;

        else
          return 0;
      }
}

// autoincrease_func
// file vringbuffer.c line 222
static void * autoincrease_func(void *arg)
{
  struct vringbuffer_t *vrb = (struct vringbuffer_t *)arg;
  vrb->autoincrease_callback(vrb, (_Bool)1, 0, 0);
  sem_post(&vrb->autoincrease_started);
  if((signed int)vrb->please_stop == 0)
  {
    signed int reading_size;
    reading_size=vringbuffer_reading_size(vrb);
    signed int writing_size;
    writing_size=vringbuffer_writing_size(vrb);
    signed int num_new_elements;
    num_new_elements=vrb->autoincrease_callback(vrb, (_Bool)0, reading_size, writing_size);
    if(num_new_elements >= 1)
      vringbuffer_increase_writer1(vrb, num_new_elements, (_Bool)0);

    if(vrb->autoincrease_interval == 0u)
      upwaker_sleep(vrb->autoincrease_trigger);

    else
      usleep(vrb->autoincrease_interval);
  }

  return (void *)0;
}

// blocks_to_seconds
// file jack_capture.c line 326
static float blocks_to_seconds(signed int blocks)
{
  return ((float)blocks * (float)block_size) / jack_samplerate;
}

// buffers_init
// file jack_capture.c line 363
static void buffers_init()
{
  verbose_print("bufinit1. sizeof(long): %u, sizeof(float): %u, sizeof(double):%u, sizeof(int):%u, sizeof(void*):%u\n", sizeof(signed long int) /*8ul*/ , sizeof(float) /*4ul*/ , sizeof(double) /*8ul*/ , sizeof(signed int) /*4ul*/ , sizeof(void *) /*8ul*/ );
  signed int return_value_seconds_to_buffers$1;
  return_value_seconds_to_buffers$1=seconds_to_buffers(min_buffer_time);
  signed int tmp_if_expr$3;
  signed int return_value_seconds_to_buffers$2;
  if(!(return_value_seconds_to_buffers$1 >= 4))
    tmp_if_expr$3 = 4;

  else
  {
    return_value_seconds_to_buffers$2=seconds_to_buffers(min_buffer_time);
    tmp_if_expr$3 = return_value_seconds_to_buffers$2;
  }
  signed int return_value_seconds_to_buffers$4;
  return_value_seconds_to_buffers$4=seconds_to_buffers(max_buffer_time);
  signed int tmp_if_expr$6;
  signed int return_value_seconds_to_buffers$5;
  if(!(return_value_seconds_to_buffers$4 >= 4))
    tmp_if_expr$6 = 4;

  else
  {
    return_value_seconds_to_buffers$5=seconds_to_buffers(max_buffer_time);
    tmp_if_expr$6 = return_value_seconds_to_buffers$5;
  }
  vringbuffer=vringbuffer_create(tmp_if_expr$3, tmp_if_expr$6, (unsigned long int)buffer_size_in_bytes);
  if(vringbuffer == ((struct vringbuffer_t *)NULL))
  {
    fprintf(stderr, "Unable to allocate memory for buffers\n");
    exit(-1);
  }

  vringbuffer_set_autoincrease_callback(vringbuffer, autoincrease_callback, (unsigned int)0);
  void *return_value_vringbuffer_get_writing$7;
  return_value_vringbuffer_get_writing$7=vringbuffer_get_writing(vringbuffer);
  current_buffer = (struct buffer_t *)return_value_vringbuffer_get_writing$7;
  void *return_value_my_calloc$8;
  return_value_my_calloc$8=my_calloc(sizeof(float) /*4ul*/ , (unsigned long int)(block_size * num_channels));
  empty_buffer = (float *)return_value_my_calloc$8;
}

// buffers_to_seconds
// file jack_capture.c line 331
static float buffers_to_seconds(signed int buffers)
{
  float return_value_blocks_to_seconds$1;
  return_value_blocks_to_seconds$1=blocks_to_seconds(buffers);
  return return_value_blocks_to_seconds$1;
}

// call_hook
// file jack_capture.c line 948
static void call_hook(const char *cmd, signed int argc, char **argv)
{
  if((signed int)verbose == 1)
  {
    fprintf(stderr, "EXE: %s ", cmd);
    argc = 0;
    for( ; !(argv[(signed long int)argc] == ((char *)NULL)); argc = argc + 1)
      printf("'%s' ", argv[(signed long int)argc]);
    printf("\n");
  }

  signed int pid;
  pid=fork();
  if(pid == 0)
  {
    {
      signed int fd;
      fd=open("/dev/null", 02 | 0100, 0400 | 0200);
      if(fd == -1)
        perror("open");

      else
      {
        dup2(fd, 1);
        dup2(fd, 2);
        close(fd);
      }
    }
    execvp(cmd, (char * const *)argv);
    print_message("EXE: error; exec returned.\n");
    exit(127);
  }

  if(!(pid >= 0))
    print_message("EXE: error; can not fork child process\n");

  signal(17, wait_child);
  argc = 0;
  for( ; !(argv[(signed long int)argc] == ((char *)NULL)); argc = argc + 1)
    free((void *)argv[(signed long int)argc]);
  free((void *)argv);
}

// cleanup_disk
// file jack_capture.c line 1528
static void cleanup_disk(void)
{
  if(unreported_overruns >= 1l)
    disk_write_overruns((signed int)unreported_overruns);

  close_soundfile();
  if((signed int)verbose == 1)
    fprintf(stderr, "disk thread finished\n");

}

// close_soundfile
// file jack_capture.c line 1227
static void close_soundfile(void)
{
  if((signed int)write_to_stdout == 0)
  {
    if(!(soundfile == ((struct SNDFILE_tag *)NULL)))
      sf_close(soundfile);

    if(!(mp3file == ((struct _IO_FILE *)NULL)))
    {
      mp3_write((void *)0, (unsigned long int)0, (_Bool)1);
      lame_close(lame);
      fclose(mp3file);
    }

  }

  hook_file_closed(filename, total_overruns + total_xruns, disk_errors);
  if(overruns >= 1l)
  {
    print_message("jack_capture failed with a total of %d overruns.\n", total_overruns);
    print_message("   try a bigger buffer than -B %f\n", min_buffer_time);
  }

  if(disk_errors >= 1)
    print_message("jack_capture failed with a total of %d disk errors.\n", disk_errors);

  if(total_xruns >= 1)
    print_message("jack_capture encountered %d jack x-runs.\n", total_xruns);

  disk_errors = 0;
  total_overruns = 0;
  total_xruns = 0;
}

// compare
// file jack_capture.c line 1840
static signed int compare(const void *a, const void *b)
{
  signed int tmp_statement_expression$1;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp$2;
  return_value___builtin_strcmp$2=__builtin_strcmp((const char *)a, (const char *)b);
  tmp_statement_expression$1 = return_value___builtin_strcmp$2;
  return tmp_statement_expression$1;
}

// connect_ports
// file jack_capture.c line 1906
static void connect_ports(struct _jack_port **ports)
{
  signed int ch;
  const char *return_value_jack_port_name$2;
  char *return_value_strerror$3;
  if(!(ports == ((struct _jack_port **)NULL)))
  {
    ch = 0;
    for( ; !(ch >= num_channels); ch = ch + 1)
    {
      signed int lokke = 0;
      _Bool using_calloc;
      const char **connections;
      connections=portnames_get_connections(ch, &using_calloc);
      while(!(connections == ((const char **)NULL)))
      {
        if(connections[(signed long int)lokke] == ((const char *)NULL))
          break;

        signed int err;
        const char *return_value_jack_port_name$1;
        return_value_jack_port_name$1=jack_port_name(ports[(signed long int)ch]);
        err=jack_connect(client, connections[(signed long int)lokke], return_value_jack_port_name$1);
        if(!(err == 0))
        {
          return_value_jack_port_name$2=jack_port_name(ports[(signed long int)ch]);
          return_value_strerror$3=strerror(err);
          print_message("\nCould not connect input port %s to %s, errorcode %s\n", return_value_jack_port_name$2, connections[(signed long int)lokke], return_value_strerror$3);
        }

        lokke = lokke + 1;
      }
      free_jack_connections(using_calloc, connections);
    }
  }

}

// connection_thread
// file jack_capture.c line 1931
static void * connection_thread(void *arg)
{
  signed int return_value_reconnect_ports_questionmark$1;
  while((_Bool)1)
  {
    sem_wait(&connection_semaphore);
    if(is_running == 0)
      break;

    if(connect_meterbridge == 1)
    {
      connect_ports(ports_meterbridge);
      connect_meterbridge = 0;
    }

    else
      if(!(is_initialized == 0))
      {
        return_value_reconnect_ports_questionmark$1=reconnect_ports_questionmark();
        if(!(return_value_reconnect_ports_questionmark$1 == 0))
        {
          if((signed int)silent == 0)
            print_message("Reconnecting ports.\n");

          disconnect_ports(ports);
          connect_ports(ports);
          disconnect_ports(ports_meterbridge);
          connect_ports(ports_meterbridge);
        }

      }

  }

done:
  ;
  if((signed int)verbose == 1)
    fprintf(stderr, "connection thread finished\n");

  return (void *)0;
}

// create_ports
// file jack_capture.c line 2007
static void create_ports(void)
{
  void *return_value_my_calloc$1;
  return_value_my_calloc$1=my_calloc(sizeof(struct _jack_port *) /*8ul*/ , (unsigned long int)num_channels);
  ports = (struct _jack_port **)return_value_my_calloc$1;
  signed int ch = 0;
  for( ; !(ch >= num_channels); ch = ch + 1)
  {
    char name[500l];
    sprintf(name, "input%d", ch + 1);
    ports[(signed long int)ch]=jack_port_register(client, name, "32 bit float mono audio", (unsigned long int)(1 | 16), (unsigned long int)0);
    if(ports[(signed long int)ch] == ((struct _jack_port *)NULL))
    {
      print_message("Unable to register input port \"%s\"!\n", (const void *)name);
      jack_client_close(client);
      exit(1);
    }

  }
}

// create_upwaker
// file upwaker.h line 28
struct anonymous$3 * create_upwaker(void)
{
  struct anonymous$3 *upwaker;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct anonymous$3) /*96ul*/ );
  upwaker = (struct anonymous$3 *)return_value_calloc$1;
  upwaker->please_wakeup = 0;
  pthread_mutex_init(&upwaker->mutex, (const union anonymous$6 *)(void *)0);
  pthread_cond_init(&upwaker->cond, (const union anonymous$6 *)(void *)0);
  return upwaker;
}

// disconnect_ports
// file jack_capture.c line 1887
static void disconnect_ports(struct _jack_port **ports)
{
  signed int ch;
  const char *return_value_jack_port_name$1;
  if(!(ports == ((struct _jack_port **)NULL)))
  {
    ch = 0;
    for( ; !(ch >= num_channels); ch = ch + 1)
    {
      signed int lokke = 0;
      const char **connections;
      connections=jack_port_get_all_connections(client, ports[(signed long int)ch]);
      if(!(connections == ((const char **)NULL)))
        for( ; !(connections[(signed long int)lokke] == ((const char *)NULL)); lokke = lokke + 1)
        {
          return_value_jack_port_name$1=jack_port_name(ports[(signed long int)ch]);
          jack_disconnect(client, connections[(signed long int)lokke], return_value_jack_port_name$1);
        }

      free_jack_connections((_Bool)0, connections);
    }
  }

}

// disk_callback
// file jack_capture.c line 1452
static enum vringbuffer_receiver_callback_return_t disk_callback(struct vringbuffer_t *vrb, _Bool first_time, void *element)
{
  struct buffer_t *buffer = (struct buffer_t *)element;
  if((signed int)first_time == 1)
    return (enum vringbuffer_receiver_callback_return_t)1;

  else
  {
    if((signed int)timemachine_mode == 1 && (signed int)timemachine_recording == 0)
    {
      signed int num_buffers;
      num_buffers=vringbuffer_reading_size(vrb);
      float return_value_buffers_to_seconds$1;
      return_value_buffers_to_seconds$1=buffers_to_seconds(num_buffers);
      if(return_value_buffers_to_seconds$1 > timemachine_prebuffer)
        return (enum vringbuffer_receiver_callback_return_t)VRB_CALLBACK_USED_BUFFER;

      else
        return (enum vringbuffer_receiver_callback_return_t)VRB_CALLBACK_DIDNT_USE_BUFFER;
    }

    static _Bool printed_receive_message = (_Bool)0;
    if((signed int)printed_receive_message == 0 && (signed int)timemachine_mode == 1)
    {
      print_message("Recording. Press <Return> to stop.\n");
      printed_receive_message = (_Bool)1;
    }

    if((signed int)printed_receive_message == 0 && (signed int)use_jack_transport == 1)
    {
      print_message("Received JackTranportRolling. Recording.\n");
      printed_receive_message = (_Bool)1;
    }

    if((signed int)printed_receive_message == 0 && (signed int)use_jack_freewheel == 1)
    {
      print_message("Entered Jack Freewheeling. Recording.\n");
      printed_receive_message = (_Bool)1;
    }

    disk_thread_control_priority();
    if(store_sync == 1)
    {
      store_sync = 2;
      hook_rec_timimg(filename, rtime, j_latency);
      if(!(create_tme_file == (_Bool)0))
      {
        signed long int lat_nsec = (signed long int)((float)((unsigned int)1000000000 * j_latency) / jack_samplerate);
        signed long int lat_sec = lat_nsec / (signed long int)1000000000;
        lat_nsec = lat_nsec % (signed long int)1000000000;
        if(rtime.tv_nsec >= lat_nsec)
          rtime.tv_nsec = rtime.tv_nsec - lat_nsec;

        else
        {
          rtime.tv_nsec = rtime.tv_nsec + ((signed long int)1000000000 - lat_nsec);
          rtime.tv_sec = rtime.tv_sec - 1l;
        }
        rtime.tv_sec = rtime.tv_sec - lat_sec;
        signed long int sync_nsec = (signed long int)((float)((ssync_offset % (signed int)jack_samplerate) * 1000000000) / jack_samplerate);
        signed long int sync_sec = (signed long int)(ssync_offset / (signed int)jack_samplerate);
        if(!(sync_nsec >= rtime.tv_nsec))
          rtime.tv_nsec = rtime.tv_nsec - sync_nsec;

        else
        {
          rtime.tv_nsec = rtime.tv_nsec + ((signed long int)1000000000 - sync_nsec);
          rtime.tv_sec = rtime.tv_sec - 1l;
        }
        rtime.tv_sec = rtime.tv_sec - sync_sec;
        ssync_offset = 0;
        struct _IO_FILE *file;
        char *return_value_string_concat$2;
        return_value_string_concat$2=string_concat(filename, ".tme");
        file=fopen(return_value_string_concat$2, "w");
        if(!(file == ((struct _IO_FILE *)NULL)))
        {
          fprintf(file, "%ld.%ld\n", rtime.tv_sec, rtime.tv_nsec);
          fprintf(file, "# port-latency: %d frames\n", j_latency);
          fprintf(file, "# sample-rate : %f samples/sec\n", jack_samplerate);
          char tme[64l];
          struct tm time;
          gmtime_r(&rtime.tv_sec, &time);
          strftime(tme, (unsigned long int)63, "%F %T", &time);
          fprintf(file, "# system-time : %s.%ld UTC\n", (const void *)tme, rtime.tv_nsec);
          fclose(file);
        }

      }

    }

    if(buffer->overruns >= 1)
      disk_write_overruns(buffer->overruns);

    disk_write((void *)buffer->data, (unsigned long int)buffer->pos);
    return (enum vringbuffer_receiver_callback_return_t)VRB_CALLBACK_USED_BUFFER;
  }
}

// disk_thread_control_priority
// file jack_capture.c line 1432
static void disk_thread_control_priority(void)
{
  signed int adjusted_writing_size;
  adjusted_writing_size=vringbuffer_writing_size(vringbuffer);
  signed int return_value_seconds_to_blocks$1;
  if((signed int)timemachine_mode == 1)
  {
    return_value_seconds_to_blocks$1=seconds_to_blocks(timemachine_prebuffer * jack_samplerate);
    adjusted_writing_size = adjusted_writing_size + return_value_seconds_to_blocks$1;
  }

  signed int return_value_vringbuffer_reading_size$3;
  if((signed int)disk_thread_has_high_priority == 0)
  {
    return_value_vringbuffer_reading_size$3=vringbuffer_reading_size(vringbuffer);
    if(return_value_vringbuffer_reading_size$3 >= adjusted_writing_size)
    {
      if((signed int)use_jack_freewheel == 0)
      {
        _Bool return_value_set_high_priority$2;
        return_value_set_high_priority$2=set_high_priority();
        if((signed int)return_value_set_high_priority$2 == 1)
        {
          disk_thread_has_high_priority = (_Bool)1;
          print_message("Less than half the buffer used. Setting higher priority for the disk thread.\n");
        }

        else
        {
          static _Bool message_sent = (_Bool)0;
          if((signed int)message_sent == 0)
            print_message("Error. Could not set higher priority for disk thread.\n");

          message_sent = (_Bool)1;
        }
      }

    }

  }

}

// disk_write
// file jack_capture.c line 1381
static signed int disk_write(void *data, unsigned long int frames)
{
  num_frames_written_to_disk = num_frames_written_to_disk + (signed long int)frames;
  signed int return_value_stdout_write$1;
  signed int return_value_mp3_write$2;
  if((signed int)write_to_stdout == 1)
  {
    return_value_stdout_write$1=stdout_write((float *)data, frames);
    return return_value_stdout_write$1;
  }

  else
    if((signed int)write_to_mp3 == 1)
    {
      return_value_mp3_write$2=mp3_write(data, frames, (_Bool)0);
      return return_value_mp3_write$2;
    }

    else
      if(soundfile == ((struct SNDFILE_tag *)NULL))
        return 0;

      else
      {
        signed int return_value_handle_filelimit$3;
        return_value_handle_filelimit$3=handle_filelimit(frames);
        if(return_value_handle_filelimit$3 == 0)
          return 0;

        else
        {
          signed long int return_value_sf_writef_float$5;
          return_value_sf_writef_float$5=sf_writef_float(soundfile, (const float *)data, (signed long int)frames);
          if(!((unsigned long int)return_value_sf_writef_float$5 == frames))
          {
            const char *return_value_sf_strerror$4;
            return_value_sf_strerror$4=sf_strerror(soundfile);
            print_message("Error. Can not write sndfile (%s)\n", return_value_sf_strerror$4);
            disk_errors = disk_errors + 1;
            return 0;
          }

          return 1;
        }
      }
}

// disk_write_overruns
// file jack_capture.c line 1410
static signed int disk_write_overruns(signed int num_overruns)
{
  if((signed int)verbose == 1)
    print_message("jack_capture failed writing %d frame%s. Some parts of the recording will contain silence.\n    Try a bigger buffer than -B %f\n%s", num_overruns, num_overruns == 1 ? "" : "s", min_buffer_time, is_running != 0 ? "Continue recording...\n" : "");

  overruns = overruns + (signed long int)num_overruns;
  while(num_overruns >= 1)
  {
    signed int size = block_size < num_overruns ? block_size : num_overruns;
    signed int return_value_disk_write$1;
    return_value_disk_write$1=disk_write((void *)empty_buffer, (unsigned long int)size);
    if(return_value_disk_write$1 == 0)
      return 0;

    num_overruns = num_overruns - size;
  }
  return 1;
}

// findnumports
// file jack_capture.c line 389
static signed int findnumports(const char **ports)
{
  signed int ret = 0;
  for( ; !(ports == ((const char **)NULL)); ret = ret + 1)
    if(ports[(signed long int)ret] == ((const char *)NULL))
      break;

  return ret;
}

// finish
// file jack_capture.c line 2034
static void finish(signed int sig)
{
  sem_post(&stop_sem);
}

// frames_to_seconds
// file jack_capture.c line 305
static float frames_to_seconds(signed int frames)
{
  return (float)frames / jack_samplerate;
}

// free_jack_connections
// file jack_capture.c line 1831
static void free_jack_connections(_Bool using_calloc, const char **connections)
{
  if(!(connections == ((const char **)NULL)))
  {
    if(!(using_calloc == (_Bool)0))
      free((void *)connections);

    else
      jack_free((void *)connections);
  }

}

// freewheelcallback
// file jack_capture.c line 1979
static void freewheelcallback(signed int starting, void *arg)
{
  freewheel_mode = starting;
  signed int return_value_vringbuffer_reading_size$1;
  if(starting == 0 && (signed int)use_jack_freewheel == 1)
    do
    {
      return_value_vringbuffer_reading_size$1=vringbuffer_reading_size(vringbuffer);
      if(!(return_value_vringbuffer_reading_size$1 >= 1))
        break;

      msleep(2);
    }
    while((_Bool)1);

}

// getformat
// file setformat.c line 31
signed int getformat(char *soundfile_format)
{
  signed int return_value_setformat_base$1;
  return_value_setformat_base$1=setformat_base(soundfile_format);
  return return_value_setformat_base$1;
}

// graphordercallback
// file jack_capture.c line 1973
static signed int graphordercallback(void *arg)
{
  if(freewheel_mode == 0)
    wake_up_connection_thread();

  return 0;
}

// handle_filelimit
// file jack_capture.c line 1304
static signed int handle_filelimit(unsigned long int frames)
{
  signed int new_bytes = (signed int)(frames * (unsigned long int)bytes_per_frame * (unsigned long int)num_channels);
  if(disksize + (signed long int)new_bytes >= 4293918719l && !(is_using_wav == (_Bool)0))
  {
    print_message("Warning. 4GB limit on wav file almost reached.");
    signed int return_value_rotate_file$1;
    return_value_rotate_file$1=rotate_file(frames, 0);
    if(return_value_rotate_file$1 == 0)
      return 0;

  }

  else
    if(!(queued_file_rotate == (_Bool)0))
    {
      queued_file_rotate = (_Bool)0;
      print_message("Note. file-name rotation request received.");
      signed int return_value_rotate_file$2;
      return_value_rotate_file$2=rotate_file(frames, 1);
      if(return_value_rotate_file$2 == 0)
        return 0;

    }

    else
      if(rotateframe >= 1l && !(rotateframe * (signed long int)bytes_per_frame * (signed long int)num_channels >= disksize))
      {
        signed int return_value_rotate_file$3;
        return_value_rotate_file$3=rotate_file(frames, 0);
        if(return_value_rotate_file$3 == 0)
          return 0;

      }

  disksize = disksize + (signed long int)new_bytes;
  return 1;
}

// helper_thread_func
// file jack_capture.c line 760
static void * helper_thread_func(void *arg)
{
  helper_thread_running = 1;
  if(!(show_bufferusage == (_Bool)0) || !(use_vu == (_Bool)0))
    print_console_top();

  if(!(use_vu == (_Bool)0))
    init_vu();

  if(!(show_bufferusage == (_Bool)0))
    init_show_bufferusage();

  do
  {
    _Bool move_cursor_to_top_doit = (_Bool)1;
    if(!((signed int)message_string[0l] == 0))
    {
      if(!(show_bufferusage == (_Bool)0) || !(use_vu == (_Bool)0))
      {
        move_cursor_to_top();
        if(use_vu == (_Bool)0)
          print_ln();

        printf("%c[%dA", 0x1b, 1);
        msleep(5);
        printf("%c[31m", 0x1b);
        signed int lokke = 0;
        for( ; !(lokke >= 5); lokke = lokke + 1)
          putchar(32);
        print_ln();
        printf("%c[%dA", 0x1b, 1);
        msleep(5);
      }

      printf(">>> ");
      printf("%s", (const void *)message_string);
      message_string[(signed long int)0] = (char)0;
      move_cursor_to_top_doit = (_Bool)0;
      if(!(show_bufferusage == (_Bool)0) || !(use_vu == (_Bool)0))
        print_console_top();

    }

    if(!(show_bufferusage == (_Bool)0) || !(use_vu == (_Bool)0))
      print_console(move_cursor_to_top_doit, (_Bool)0);

    signed int return_value_init_meterbridge_ports$1;
    return_value_init_meterbridge_ports$1=init_meterbridge_ports();
    if(return_value_init_meterbridge_ports$1 == 1)
    {
      if((signed int)use_vu == 0)
      {
        if((signed int)show_bufferusage == 0)
          break;

      }

    }

    msleep(1000 / 20);
  }
  while(is_helper_running != (_Bool)0);
  if(!(show_bufferusage == (_Bool)0) || !(use_vu == (_Bool)0))
    print_console((_Bool)1, (_Bool)1);

  message_string[(signed long int)0] = (char)0;
  helper_thread_running = 0;
  msleep(4);
  return (void *)0;
}

// hook_file_closed
// file jack_capture.c line 1013
static void hook_file_closed(char *fn, signed int xruns, signed int io_errors)
{
  char **argv;
  signed int argc;
  const char *cmd = hook_cmd_closed;
  signed int tmp_post$3;
  signed int tmp_post$7;
  signed int tmp_post$9;
  signed int tmp_post$11;
  if(!(cmd == ((const char *)NULL)))
  {
    char *bntmp;
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(cmd);
    bntmp = return_value___strdup$1;
    argc = 0;
    void *return_value_calloc$2;
    return_value_calloc$2=calloc((unsigned long int)2, sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_calloc$2;
    tmp_post$3 = argc;
    argc = argc + 1;
    char *return_value___xpg_basename$4;
    return_value___xpg_basename$4=__xpg_basename(bntmp);
    char *return_value___strdup$5;
    return_value___strdup$5=__strdup(return_value___xpg_basename$4);
    argv[(signed long int)tmp_post$3] = return_value___strdup$5;
    free((void *)bntmp);
    void *return_value_realloc$6;
    return_value_realloc$6=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$6;
    tmp_post$7 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$7], "%s", fn);
    argv[(signed long int)argc] = ((char *)NULL);
    void *return_value_realloc$8;
    return_value_realloc$8=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$8;
    tmp_post$9 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$9], "%d", xruns);
    argv[(signed long int)argc] = ((char *)NULL);
    void *return_value_realloc$10;
    return_value_realloc$10=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$10;
    tmp_post$11 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$11], "%d", io_errors);
    argv[(signed long int)argc] = ((char *)NULL);
    call_hook(cmd, argc, argv);
  }

}

// hook_file_opened
// file jack_capture.c line 992
static void hook_file_opened(char *fn)
{
  char **argv;
  signed int argc;
  const char *cmd = hook_cmd_opened;
  signed int tmp_post$3;
  signed int tmp_post$7;
  if(!(cmd == ((const char *)NULL)))
  {
    char *bntmp;
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(cmd);
    bntmp = return_value___strdup$1;
    argc = 0;
    void *return_value_calloc$2;
    return_value_calloc$2=calloc((unsigned long int)2, sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_calloc$2;
    tmp_post$3 = argc;
    argc = argc + 1;
    char *return_value___xpg_basename$4;
    return_value___xpg_basename$4=__xpg_basename(bntmp);
    char *return_value___strdup$5;
    return_value___strdup$5=__strdup(return_value___xpg_basename$4);
    argv[(signed long int)tmp_post$3] = return_value___strdup$5;
    free((void *)bntmp);
    void *return_value_realloc$6;
    return_value_realloc$6=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$6;
    tmp_post$7 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$7], "%s", fn);
    argv[(signed long int)argc] = ((char *)NULL);
    call_hook(cmd, argc, argv);
  }

}

// hook_file_rotated
// file jack_capture.c line 1024
static void hook_file_rotated(char *oldfn, char *newfn, signed int num, signed int xruns, signed int io_errors)
{
  char **argv;
  signed int argc;
  const char *cmd = hook_cmd_rotate;
  signed int tmp_post$3;
  signed int tmp_post$7;
  signed int tmp_post$9;
  signed int tmp_post$11;
  signed int tmp_post$13;
  signed int tmp_post$15;
  if(!(cmd == ((const char *)NULL)))
  {
    char *bntmp;
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(cmd);
    bntmp = return_value___strdup$1;
    argc = 0;
    void *return_value_calloc$2;
    return_value_calloc$2=calloc((unsigned long int)2, sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_calloc$2;
    tmp_post$3 = argc;
    argc = argc + 1;
    char *return_value___xpg_basename$4;
    return_value___xpg_basename$4=__xpg_basename(bntmp);
    char *return_value___strdup$5;
    return_value___strdup$5=__strdup(return_value___xpg_basename$4);
    argv[(signed long int)tmp_post$3] = return_value___strdup$5;
    free((void *)bntmp);
    void *return_value_realloc$6;
    return_value_realloc$6=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$6;
    tmp_post$7 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$7], "%s", oldfn);
    argv[(signed long int)argc] = ((char *)NULL);
    void *return_value_realloc$8;
    return_value_realloc$8=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$8;
    tmp_post$9 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$9], "%d", xruns);
    argv[(signed long int)argc] = ((char *)NULL);
    void *return_value_realloc$10;
    return_value_realloc$10=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$10;
    tmp_post$11 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$11], "%d", io_errors);
    argv[(signed long int)argc] = ((char *)NULL);
    void *return_value_realloc$12;
    return_value_realloc$12=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$12;
    tmp_post$13 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$13], "%s", newfn);
    argv[(signed long int)argc] = ((char *)NULL);
    void *return_value_realloc$14;
    return_value_realloc$14=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$14;
    tmp_post$15 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$15], "%d", num);
    argv[(signed long int)argc] = ((char *)NULL);
    call_hook(cmd, argc, argv);
  }

}

// hook_rec_timimg
// file jack_capture.c line 1001
static void hook_rec_timimg(char *fn, struct timespec start, unsigned int latency)
{
  char **argv;
  signed int argc;
  const char *cmd = hook_cmd_timing;
  signed int tmp_post$3;
  signed int tmp_post$7;
  signed int tmp_post$9;
  signed int tmp_post$11;
  signed int tmp_post$13;
  if(!(cmd == ((const char *)NULL)))
  {
    char *bntmp;
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(cmd);
    bntmp = return_value___strdup$1;
    argc = 0;
    void *return_value_calloc$2;
    return_value_calloc$2=calloc((unsigned long int)2, sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_calloc$2;
    tmp_post$3 = argc;
    argc = argc + 1;
    char *return_value___xpg_basename$4;
    return_value___xpg_basename$4=__xpg_basename(bntmp);
    char *return_value___strdup$5;
    return_value___strdup$5=__strdup(return_value___xpg_basename$4);
    argv[(signed long int)tmp_post$3] = return_value___strdup$5;
    free((void *)bntmp);
    void *return_value_realloc$6;
    return_value_realloc$6=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$6;
    tmp_post$7 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$7], "%s", fn);
    argv[(signed long int)argc] = ((char *)NULL);
    void *return_value_realloc$8;
    return_value_realloc$8=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$8;
    tmp_post$9 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$9], "%ld", start.tv_sec);
    argv[(signed long int)argc] = ((char *)NULL);
    void *return_value_realloc$10;
    return_value_realloc$10=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$10;
    tmp_post$11 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$11], "%ld", start.tv_nsec);
    argv[(signed long int)argc] = ((char *)NULL);
    void *return_value_realloc$12;
    return_value_realloc$12=realloc((void *)argv, (unsigned long int)(argc + 2) * sizeof(char *) /*8ul*/ );
    argv = (char **)return_value_realloc$12;
    tmp_post$13 = argc;
    argc = argc + 1;
    asprintf(&argv[(signed long int)tmp_post$13], "%d", latency);
    argv[(signed long int)argc] = ((char *)NULL);
    call_hook(cmd, argc, argv);
  }

}

// iec_scale
// file jack_capture.c line 523
static signed int iec_scale(float db)
{
  float def = 0.0f;
  if(db < -70.000000f)
    def = 0.0f;

  else
    if(db < -60.000000f)
      def = (db + 70.0f) * 0.25f;

    else
      if(db < -50.000000f)
        def = (db + 60.0f) * 0.5f + 5.0f;

      else
        if(db < -40.000000f)
          def = (float)((double)((db + 50.0f) * 0.75f) + 7.5);

        else
          if(db < -30.000000f)
            def = (db + 40.0f) * 1.5f + 15.0f;

          else
            if(db < -20.000000f)
              def = (db + 30.0f) * 2.0f + 30.0f;

            else
              if(db < 0.0f)
                def = (db + 20.0f) * 2.5f + 50.0f;

              else
                def = 100.0f;
  return (signed int)(def * 2.0f);
}

// init_arguments
// file jack_capture.c line 2247
void init_arguments(signed int argc, char **argv)
{
  signed int lokke;
  const char *usage = "\nTo record what you hear, just run\n\n     jack_capture\n\nTo list advanced options, run\n\n     jack_capture --advanced-options\n\n";
  lokke = 0;
  signed int tmp_statement_expression$253;
  _Bool tmp_if_expr$257;
  signed int tmp_statement_expression$255;
  signed int tmp_statement_expression$248;
  _Bool tmp_if_expr$252;
  signed int tmp_statement_expression$250;
  signed int tmp_statement_expression$243;
  _Bool tmp_if_expr$247;
  signed int tmp_statement_expression$245;
  signed int tmp_statement_expression$238;
  _Bool tmp_if_expr$242;
  signed int tmp_statement_expression$240;
  signed long int tmp_if_expr$2;
  signed long long int return_value_atoll$1;
  signed int tmp_statement_expression$233;
  _Bool tmp_if_expr$237;
  signed int tmp_statement_expression$235;
  double tmp_if_expr$4;
  double return_value_atof$3;
  signed int tmp_statement_expression$228;
  _Bool tmp_if_expr$232;
  signed int tmp_statement_expression$230;
  double tmp_if_expr$6;
  double return_value_atof$5;
  signed int tmp_statement_expression$223;
  _Bool tmp_if_expr$227;
  signed int tmp_statement_expression$225;
  signed long int tmp_if_expr$8;
  signed long long int return_value_atoll$7;
  signed int tmp_statement_expression$218;
  _Bool tmp_if_expr$222;
  signed int tmp_statement_expression$220;
  char *tmp_if_expr$9;
  signed int tmp_statement_expression$213;
  _Bool tmp_if_expr$217;
  signed int tmp_statement_expression$215;
  signed long int tmp_if_expr$11;
  signed long long int return_value_atoll$10;
  signed int tmp_statement_expression$208;
  _Bool tmp_if_expr$212;
  signed int tmp_statement_expression$210;
  double tmp_if_expr$13;
  double return_value_atof$12;
  signed int tmp_statement_expression$203;
  _Bool tmp_if_expr$207;
  signed int tmp_statement_expression$205;
  char *tmp_if_expr$14;
  signed int tmp_statement_expression$198;
  _Bool tmp_if_expr$202;
  signed int tmp_statement_expression$200;
  char *tmp_if_expr$15;
  signed int tmp_statement_expression$16;
  signed int tmp_statement_expression$193;
  _Bool tmp_if_expr$197;
  signed int tmp_statement_expression$195;
  signed int tmp_statement_expression$188;
  _Bool tmp_if_expr$192;
  signed int tmp_statement_expression$190;
  signed int tmp_statement_expression$183;
  _Bool tmp_if_expr$187;
  signed int tmp_statement_expression$185;
  signed int tmp_statement_expression$178;
  _Bool tmp_if_expr$182;
  signed int tmp_statement_expression$180;
  signed int tmp_statement_expression$173;
  _Bool tmp_if_expr$177;
  signed int tmp_statement_expression$175;
  signed int tmp_statement_expression$168;
  _Bool tmp_if_expr$172;
  signed int tmp_statement_expression$170;
  signed int tmp_statement_expression$163;
  _Bool tmp_if_expr$167;
  signed int tmp_statement_expression$165;
  signed long int tmp_if_expr$19;
  signed long long int return_value_atoll$18;
  signed int tmp_statement_expression$158;
  _Bool tmp_if_expr$162;
  signed int tmp_statement_expression$160;
  signed long int tmp_if_expr$21;
  signed long long int return_value_atoll$20;
  signed int tmp_statement_expression$153;
  _Bool tmp_if_expr$157;
  signed int tmp_statement_expression$155;
  signed int tmp_statement_expression$148;
  _Bool tmp_if_expr$152;
  signed int tmp_statement_expression$150;
  signed int tmp_statement_expression$143;
  _Bool tmp_if_expr$147;
  signed int tmp_statement_expression$145;
  signed int tmp_statement_expression$138;
  _Bool tmp_if_expr$142;
  signed int tmp_statement_expression$140;
  signed int tmp_statement_expression$133;
  _Bool tmp_if_expr$137;
  signed int tmp_statement_expression$135;
  signed int tmp_statement_expression$128;
  _Bool tmp_if_expr$132;
  signed int tmp_statement_expression$130;
  signed int tmp_statement_expression$123;
  _Bool tmp_if_expr$127;
  signed int tmp_statement_expression$125;
  signed int tmp_statement_expression$118;
  _Bool tmp_if_expr$122;
  signed int tmp_statement_expression$120;
  double tmp_if_expr$23;
  double return_value_atof$22;
  signed int tmp_statement_expression$113;
  _Bool tmp_if_expr$117;
  signed int tmp_statement_expression$115;
  signed int tmp_statement_expression$108;
  _Bool tmp_if_expr$112;
  signed int tmp_statement_expression$110;
  char *tmp_if_expr$24;
  signed int tmp_statement_expression$103;
  _Bool tmp_if_expr$107;
  signed int tmp_statement_expression$105;
  char *tmp_if_expr$25;
  signed int tmp_statement_expression$98;
  _Bool tmp_if_expr$102;
  signed int tmp_statement_expression$100;
  signed int tmp_statement_expression$93;
  _Bool tmp_if_expr$97;
  signed int tmp_statement_expression$95;
  signed int tmp_statement_expression$88;
  _Bool tmp_if_expr$92;
  signed int tmp_statement_expression$90;
  signed int tmp_statement_expression$83;
  _Bool tmp_if_expr$87;
  signed int tmp_statement_expression$85;
  char *tmp_if_expr$26;
  signed int tmp_statement_expression$78;
  _Bool tmp_if_expr$82;
  signed int tmp_statement_expression$80;
  char *tmp_if_expr$27;
  signed int tmp_statement_expression$73;
  _Bool tmp_if_expr$77;
  signed int tmp_statement_expression$75;
  char *tmp_if_expr$28;
  signed int tmp_statement_expression$68;
  _Bool tmp_if_expr$72;
  signed int tmp_statement_expression$70;
  char *tmp_if_expr$29;
  signed int tmp_statement_expression$63;
  _Bool tmp_if_expr$67;
  signed int tmp_statement_expression$65;
  char *tmp_if_expr$30;
  signed int tmp_statement_expression$58;
  _Bool tmp_if_expr$62;
  signed int tmp_statement_expression$60;
  char *tmp_if_expr$31;
  signed int tmp_statement_expression$53;
  _Bool tmp_if_expr$57;
  signed int tmp_statement_expression$55;
  signed int tmp_statement_expression$48;
  _Bool tmp_if_expr$52;
  signed int tmp_statement_expression$50;
  signed long int tmp_if_expr$33;
  signed long long int return_value_atoll$32;
  signed int tmp_statement_expression$43;
  _Bool tmp_if_expr$47;
  signed int tmp_statement_expression$45;
  signed int tmp_statement_expression$38;
  _Bool tmp_if_expr$42;
  signed int tmp_statement_expression$40;
  double tmp_if_expr$35;
  double return_value_atof$34;
  _Bool tmp_if_expr$37;
  char *tmp_if_expr$36;
  for( ; !(lokke >= argc); lokke = lokke + 1)
  {
    char *a = argv[(signed long int)lokke];
    unsigned long int init_arguments$$1$$1$$1$$1$$1$$__s1_len;
    unsigned long int init_arguments$$1$$1$$1$$1$$1$$__s2_len;
    signed int return_value___builtin_strcmp$254;
    return_value___builtin_strcmp$254=__builtin_strcmp("--help", a);
    tmp_statement_expression$253 = return_value___builtin_strcmp$254;
    if(tmp_statement_expression$253 == 0)
      tmp_if_expr$257 = (_Bool)1;

    else
    {
      unsigned long int init_arguments$$1$$1$$1$$1$$2$$__s1_len;
      unsigned long int init_arguments$$1$$1$$1$$1$$2$$__s2_len;
      signed int return_value___builtin_strcmp$256;
      return_value___builtin_strcmp$256=__builtin_strcmp("-h", a);
      tmp_statement_expression$255 = return_value___builtin_strcmp$256;
      tmp_if_expr$257 = !(tmp_statement_expression$255 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$257)
    {
      fprintf(stderr, "%s", usage);
      exit(0);
    }

    else
    {
      unsigned long int init_arguments$$1$$1$$1$$1$$4$$__s1_len;
      unsigned long int init_arguments$$1$$1$$1$$1$$4$$__s2_len;
      signed int return_value___builtin_strcmp$249;
      return_value___builtin_strcmp$249=__builtin_strcmp("--advanced-options", a);
      tmp_statement_expression$248 = return_value___builtin_strcmp$249;
      if(tmp_statement_expression$248 == 0)
        tmp_if_expr$252 = (_Bool)1;

      else
      {
        unsigned long int init_arguments$$1$$1$$1$$1$$5$$__s1_len;
        unsigned long int init_arguments$$1$$1$$1$$1$$5$$__s2_len;
        signed int return_value___builtin_strcmp$251;
        return_value___builtin_strcmp$251=__builtin_strcmp("--help2", a);
        tmp_statement_expression$250 = return_value___builtin_strcmp$251;
        tmp_if_expr$252 = !(tmp_statement_expression$250 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$252)
      {
        printf("%s", advanced_help);
        exit(0);
      }

      else
      {
        unsigned long int init_arguments$$1$$1$$1$$1$$7$$__s1_len;
        unsigned long int init_arguments$$1$$1$$1$$1$$7$$__s2_len;
        signed int return_value___builtin_strcmp$244;
        return_value___builtin_strcmp$244=__builtin_strcmp("--help-osc", a);
        tmp_statement_expression$243 = return_value___builtin_strcmp$244;
        if(tmp_statement_expression$243 == 0)
          tmp_if_expr$247 = (_Bool)1;

        else
        {
          unsigned long int init_arguments$$1$$1$$1$$1$$8$$__s1_len;
          unsigned long int init_arguments$$1$$1$$1$$1$$8$$__s2_len;
          signed int return_value___builtin_strcmp$246;
          return_value___builtin_strcmp$246=__builtin_strcmp("--help3", a);
          tmp_statement_expression$245 = return_value___builtin_strcmp$246;
          tmp_if_expr$247 = !(tmp_statement_expression$245 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$247)
        {
          printf("%s", osc_help);
          exit(0);
        }

        else
        {
          unsigned long int init_arguments$$1$$1$$1$$1$$10$$__s1_len;
          unsigned long int init_arguments$$1$$1$$1$$1$$10$$__s2_len;
          signed int return_value___builtin_strcmp$239;
          return_value___builtin_strcmp$239=__builtin_strcmp("--bitdepth", a);
          tmp_statement_expression$238 = return_value___builtin_strcmp$239;
          if(tmp_statement_expression$238 == 0)
            tmp_if_expr$242 = (_Bool)1;

          else
          {
            unsigned long int init_arguments$$1$$1$$1$$1$$11$$__s1_len;
            unsigned long int init_arguments$$1$$1$$1$$1$$11$$__s2_len;
            signed int return_value___builtin_strcmp$241;
            return_value___builtin_strcmp$241=__builtin_strcmp("-b", a);
            tmp_statement_expression$240 = return_value___builtin_strcmp$241;
            tmp_if_expr$242 = !(tmp_statement_expression$240 != 0) ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$242)
          {
            if(lokke == argc + -1)
            {
              fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
              exit(-4);
              tmp_if_expr$2 = (signed long int)0;
            }

            else
            {
              lokke = lokke + 1;
              return_value_atoll$1=atoll(argv[(signed long int)lokke]);
              tmp_if_expr$2 = return_value_atoll$1;
            }
            bitdepth = (signed int)tmp_if_expr$2;
          }

          else
          {
            unsigned long int init_arguments$$1$$1$$1$$1$$13$$__s1_len;
            unsigned long int init_arguments$$1$$1$$1$$1$$13$$__s2_len;
            signed int return_value___builtin_strcmp$234;
            return_value___builtin_strcmp$234=__builtin_strcmp("--bufsize", a);
            tmp_statement_expression$233 = return_value___builtin_strcmp$234;
            if(tmp_statement_expression$233 == 0)
              tmp_if_expr$237 = (_Bool)1;

            else
            {
              unsigned long int init_arguments$$1$$1$$1$$1$$14$$__s1_len;
              unsigned long int init_arguments$$1$$1$$1$$1$$14$$__s2_len;
              signed int return_value___builtin_strcmp$236;
              return_value___builtin_strcmp$236=__builtin_strcmp("-B", a);
              tmp_statement_expression$235 = return_value___builtin_strcmp$236;
              tmp_if_expr$237 = !(tmp_statement_expression$235 != 0) ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$237)
            {
              if(lokke == argc + -1)
              {
                fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                exit(-4);
                tmp_if_expr$4 = (double)0.0f;
              }

              else
              {
                lokke = lokke + 1;
                return_value_atof$3=atof(argv[(signed long int)lokke]);
                tmp_if_expr$4 = return_value_atof$3;
              }
              min_buffer_time = (float)tmp_if_expr$4;
              min_buffer_time = (float)(0.01 > (double)min_buffer_time ? 0.01 : (double)min_buffer_time);
            }

            else
            {
              unsigned long int init_arguments$$1$$1$$1$$1$$16$$__s1_len;
              unsigned long int init_arguments$$1$$1$$1$$1$$16$$__s2_len;
              signed int return_value___builtin_strcmp$229;
              return_value___builtin_strcmp$229=__builtin_strcmp("--maxbufsize", a);
              tmp_statement_expression$228 = return_value___builtin_strcmp$229;
              if(tmp_statement_expression$228 == 0)
                tmp_if_expr$232 = (_Bool)1;

              else
              {
                unsigned long int init_arguments$$1$$1$$1$$1$$17$$__s1_len;
                unsigned long int init_arguments$$1$$1$$1$$1$$17$$__s2_len;
                signed int return_value___builtin_strcmp$231;
                return_value___builtin_strcmp$231=__builtin_strcmp("-MB", a);
                tmp_statement_expression$230 = return_value___builtin_strcmp$231;
                tmp_if_expr$232 = !(tmp_statement_expression$230 != 0) ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$232)
              {
                if(lokke == argc + -1)
                {
                  fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                  exit(-4);
                  tmp_if_expr$6 = (double)0.0f;
                }

                else
                {
                  lokke = lokke + 1;
                  return_value_atof$5=atof(argv[(signed long int)lokke]);
                  tmp_if_expr$6 = return_value_atof$5;
                }
                max_buffer_time = (float)tmp_if_expr$6;
              }

              else
              {
                unsigned long int init_arguments$$1$$1$$1$$1$$19$$__s1_len;
                unsigned long int init_arguments$$1$$1$$1$$1$$19$$__s2_len;
                signed int return_value___builtin_strcmp$224;
                return_value___builtin_strcmp$224=__builtin_strcmp("--channels", a);
                tmp_statement_expression$223 = return_value___builtin_strcmp$224;
                if(tmp_statement_expression$223 == 0)
                  tmp_if_expr$227 = (_Bool)1;

                else
                {
                  unsigned long int init_arguments$$1$$1$$1$$1$$20$$__s1_len;
                  unsigned long int init_arguments$$1$$1$$1$$1$$20$$__s2_len;
                  signed int return_value___builtin_strcmp$226;
                  return_value___builtin_strcmp$226=__builtin_strcmp("-c", a);
                  tmp_statement_expression$225 = return_value___builtin_strcmp$226;
                  tmp_if_expr$227 = !(tmp_statement_expression$225 != 0) ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$227)
                {
                  if(lokke == argc + -1)
                  {
                    fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                    exit(-4);
                    tmp_if_expr$8 = (signed long int)0;
                  }

                  else
                  {
                    lokke = lokke + 1;
                    return_value_atoll$7=atoll(argv[(signed long int)lokke]);
                    tmp_if_expr$8 = return_value_atoll$7;
                  }
                  num_channels = (signed int)tmp_if_expr$8;
                }

                else
                {
                  unsigned long int init_arguments$$1$$1$$1$$1$$22$$__s1_len;
                  unsigned long int init_arguments$$1$$1$$1$$1$$22$$__s2_len;
                  signed int return_value___builtin_strcmp$219;
                  return_value___builtin_strcmp$219=__builtin_strcmp("--filename-prefix", a);
                  tmp_statement_expression$218 = return_value___builtin_strcmp$219;
                  if(tmp_statement_expression$218 == 0)
                    tmp_if_expr$222 = (_Bool)1;

                  else
                  {
                    unsigned long int init_arguments$$1$$1$$1$$1$$23$$__s1_len;
                    unsigned long int init_arguments$$1$$1$$1$$1$$23$$__s2_len;
                    signed int return_value___builtin_strcmp$221;
                    return_value___builtin_strcmp$221=__builtin_strcmp("-fp", a);
                    tmp_statement_expression$220 = return_value___builtin_strcmp$221;
                    tmp_if_expr$222 = !(tmp_statement_expression$220 != 0) ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr$222)
                  {
                    if(lokke == argc + -1)
                    {
                      fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                      exit(-4);
                      tmp_if_expr$9 = "";
                    }

                    else
                    {
                      lokke = lokke + 1;
                      tmp_if_expr$9 = argv[(signed long int)lokke];
                    }
                    filename_prefix = tmp_if_expr$9;
                  }

                  else
                  {
                    unsigned long int init_arguments$$1$$1$$1$$1$$25$$__s1_len;
                    unsigned long int init_arguments$$1$$1$$1$$1$$25$$__s2_len;
                    signed int return_value___builtin_strcmp$214;
                    return_value___builtin_strcmp$214=__builtin_strcmp("--leading-zeros", a);
                    tmp_statement_expression$213 = return_value___builtin_strcmp$214;
                    if(tmp_statement_expression$213 == 0)
                      tmp_if_expr$217 = (_Bool)1;

                    else
                    {
                      unsigned long int init_arguments$$1$$1$$1$$1$$26$$__s1_len;
                      unsigned long int init_arguments$$1$$1$$1$$1$$26$$__s2_len;
                      signed int return_value___builtin_strcmp$216;
                      return_value___builtin_strcmp$216=__builtin_strcmp("-z", a);
                      tmp_statement_expression$215 = return_value___builtin_strcmp$216;
                      tmp_if_expr$217 = !(tmp_statement_expression$215 != 0) ? (_Bool)1 : (_Bool)0;
                    }
                    if(tmp_if_expr$217)
                    {
                      if(lokke == argc + -1)
                      {
                        fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                        exit(-4);
                        tmp_if_expr$11 = (signed long int)0;
                      }

                      else
                      {
                        lokke = lokke + 1;
                        return_value_atoll$10=atoll(argv[(signed long int)lokke]);
                        tmp_if_expr$11 = return_value_atoll$10;
                      }
                      leading_zeros = (signed int)tmp_if_expr$11;
                    }

                    else
                    {
                      unsigned long int init_arguments$$1$$1$$1$$1$$28$$__s1_len;
                      unsigned long int init_arguments$$1$$1$$1$$1$$28$$__s2_len;
                      signed int return_value___builtin_strcmp$209;
                      return_value___builtin_strcmp$209=__builtin_strcmp("--recording-time", a);
                      tmp_statement_expression$208 = return_value___builtin_strcmp$209;
                      if(tmp_statement_expression$208 == 0)
                        tmp_if_expr$212 = (_Bool)1;

                      else
                      {
                        unsigned long int init_arguments$$1$$1$$1$$1$$29$$__s1_len;
                        unsigned long int init_arguments$$1$$1$$1$$1$$29$$__s2_len;
                        signed int return_value___builtin_strcmp$211;
                        return_value___builtin_strcmp$211=__builtin_strcmp("-d", a);
                        tmp_statement_expression$210 = return_value___builtin_strcmp$211;
                        tmp_if_expr$212 = !(tmp_statement_expression$210 != 0) ? (_Bool)1 : (_Bool)0;
                      }
                      if(tmp_if_expr$212)
                      {
                        if(lokke == argc + -1)
                        {
                          fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                          exit(-4);
                          tmp_if_expr$13 = (double)0.0f;
                        }

                        else
                        {
                          lokke = lokke + 1;
                          return_value_atof$12=atof(argv[(signed long int)lokke]);
                          tmp_if_expr$13 = return_value_atof$12;
                        }
                        recording_time = tmp_if_expr$13;
                        start_jack();
                        num_frames_to_record=seconds_to_frames((float)recording_time);
                        no_stdin = (_Bool)1;
                        fixed_duration = (_Bool)1;
                      }

                      else
                      {
                        unsigned long int init_arguments$$1$$1$$1$$1$$31$$__s1_len;
                        unsigned long int init_arguments$$1$$1$$1$$1$$31$$__s2_len;
                        signed int return_value___builtin_strcmp$204;
                        return_value___builtin_strcmp$204=__builtin_strcmp("--port", a);
                        tmp_statement_expression$203 = return_value___builtin_strcmp$204;
                        if(tmp_statement_expression$203 == 0)
                          tmp_if_expr$207 = (_Bool)1;

                        else
                        {
                          unsigned long int init_arguments$$1$$1$$1$$1$$32$$__s1_len;
                          unsigned long int init_arguments$$1$$1$$1$$1$$32$$__s2_len;
                          signed int return_value___builtin_strcmp$206;
                          return_value___builtin_strcmp$206=__builtin_strcmp("-p", a);
                          tmp_statement_expression$205 = return_value___builtin_strcmp$206;
                          tmp_if_expr$207 = !(tmp_statement_expression$205 != 0) ? (_Bool)1 : (_Bool)0;
                        }
                        if(tmp_if_expr$207)
                        {
                          start_jack();
                          if(lokke == argc + -1)
                          {
                            fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                            exit(-4);
                            tmp_if_expr$14 = "";
                          }

                          else
                          {
                            lokke = lokke + 1;
                            tmp_if_expr$14 = argv[(signed long int)lokke];
                          }
                          portnames_add(tmp_if_expr$14);
                        }

                        else
                        {
                          unsigned long int init_arguments$$1$$1$$1$$1$$34$$__s1_len;
                          unsigned long int init_arguments$$1$$1$$1$$1$$34$$__s2_len;
                          signed int return_value___builtin_strcmp$199;
                          return_value___builtin_strcmp$199=__builtin_strcmp("--format", a);
                          tmp_statement_expression$198 = return_value___builtin_strcmp$199;
                          if(tmp_statement_expression$198 == 0)
                            tmp_if_expr$202 = (_Bool)1;

                          else
                          {
                            unsigned long int init_arguments$$1$$1$$1$$1$$35$$__s1_len;
                            unsigned long int init_arguments$$1$$1$$1$$1$$35$$__s2_len;
                            signed int return_value___builtin_strcmp$201;
                            return_value___builtin_strcmp$201=__builtin_strcmp("-f", a);
                            tmp_statement_expression$200 = return_value___builtin_strcmp$201;
                            tmp_if_expr$202 = !(tmp_statement_expression$200 != 0) ? (_Bool)1 : (_Bool)0;
                          }
                          if(tmp_if_expr$202)
                          {
                            if(lokke == argc + -1)
                            {
                              fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                              exit(-4);
                              tmp_if_expr$15 = "";
                            }

                            else
                            {
                              lokke = lokke + 1;
                              tmp_if_expr$15 = argv[(signed long int)lokke];
                            }
                            soundfile_format = tmp_if_expr$15;
                            unsigned long int init_arguments$$1$$1$$1$$1$$36$$1$$1$$1$$__s1_len;
                            unsigned long int init_arguments$$1$$1$$1$$1$$36$$1$$1$$1$$__s2_len;
                            signed int return_value___builtin_strcmp$17;
                            return_value___builtin_strcmp$17=__builtin_strcmp("mp3", soundfile_format);
                            tmp_statement_expression$16 = return_value___builtin_strcmp$17;
                            if(tmp_statement_expression$16 == 0)
                              write_to_mp3 = (_Bool)1;

                            soundfile_format_is_set = (_Bool)1;
                          }

                          else
                          {
                            unsigned long int init_arguments$$1$$1$$1$$1$$37$$__s1_len;
                            unsigned long int init_arguments$$1$$1$$1$$1$$37$$__s2_len;
                            signed int return_value___builtin_strcmp$194;
                            return_value___builtin_strcmp$194=__builtin_strcmp("--version", a);
                            tmp_statement_expression$193 = return_value___builtin_strcmp$194;
                            if(tmp_statement_expression$193 == 0)
                              tmp_if_expr$197 = (_Bool)1;

                            else
                            {
                              unsigned long int init_arguments$$1$$1$$1$$1$$38$$__s1_len;
                              unsigned long int init_arguments$$1$$1$$1$$1$$38$$__s2_len;
                              signed int return_value___builtin_strcmp$196;
                              return_value___builtin_strcmp$196=__builtin_strcmp("-v", a);
                              tmp_statement_expression$195 = return_value___builtin_strcmp$196;
                              tmp_if_expr$197 = !(tmp_statement_expression$195 != 0) ? (_Bool)1 : (_Bool)0;
                            }
                            if(tmp_if_expr$197)
                            {
                              puts("0.9.71");
                              exit(0);
                            }

                            else
                            {
                              unsigned long int init_arguments$$1$$1$$1$$1$$40$$__s1_len;
                              unsigned long int init_arguments$$1$$1$$1$$1$$40$$__s2_len;
                              signed int return_value___builtin_strcmp$189;
                              return_value___builtin_strcmp$189=__builtin_strcmp("--silent", a);
                              tmp_statement_expression$188 = return_value___builtin_strcmp$189;
                              if(tmp_statement_expression$188 == 0)
                                tmp_if_expr$192 = (_Bool)1;

                              else
                              {
                                unsigned long int init_arguments$$1$$1$$1$$1$$41$$__s1_len;
                                unsigned long int init_arguments$$1$$1$$1$$1$$41$$__s2_len;
                                signed int return_value___builtin_strcmp$191;
                                return_value___builtin_strcmp$191=__builtin_strcmp("-s", a);
                                tmp_statement_expression$190 = return_value___builtin_strcmp$191;
                                tmp_if_expr$192 = !(tmp_statement_expression$190 != 0) ? (_Bool)1 : (_Bool)0;
                              }
                              if(tmp_if_expr$192)
                                silent = (_Bool)1;

                              else
                              {
                                unsigned long int init_arguments$$1$$1$$1$$1$$43$$__s1_len;
                                unsigned long int init_arguments$$1$$1$$1$$1$$43$$__s2_len;
                                signed int return_value___builtin_strcmp$184;
                                return_value___builtin_strcmp$184=__builtin_strcmp("--absolutely-silent", a);
                                tmp_statement_expression$183 = return_value___builtin_strcmp$184;
                                if(tmp_statement_expression$183 == 0)
                                  tmp_if_expr$187 = (_Bool)1;

                                else
                                {
                                  unsigned long int init_arguments$$1$$1$$1$$1$$44$$__s1_len;
                                  unsigned long int init_arguments$$1$$1$$1$$1$$44$$__s2_len;
                                  signed int return_value___builtin_strcmp$186;
                                  return_value___builtin_strcmp$186=__builtin_strcmp("-as", a);
                                  tmp_statement_expression$185 = return_value___builtin_strcmp$186;
                                  tmp_if_expr$187 = !(tmp_statement_expression$185 != 0) ? (_Bool)1 : (_Bool)0;
                                }
                                if(tmp_if_expr$187)
                                {
                                  absolutely_silent = (_Bool)1;
                                  use_vu = (_Bool)0;
                                  silent = (_Bool)1;
                                  show_bufferusage = (_Bool)0;
                                }

                                else
                                {
                                  unsigned long int init_arguments$$1$$1$$1$$1$$46$$__s1_len;
                                  unsigned long int init_arguments$$1$$1$$1$$1$$46$$__s2_len;
                                  signed int return_value___builtin_strcmp$179;
                                  return_value___builtin_strcmp$179=__builtin_strcmp("--verbose", a);
                                  tmp_statement_expression$178 = return_value___builtin_strcmp$179;
                                  if(tmp_statement_expression$178 == 0)
                                    tmp_if_expr$182 = (_Bool)1;

                                  else
                                  {
                                    unsigned long int init_arguments$$1$$1$$1$$1$$47$$__s1_len;
                                    unsigned long int init_arguments$$1$$1$$1$$1$$47$$__s2_len;
                                    signed int return_value___builtin_strcmp$181;
                                    return_value___builtin_strcmp$181=__builtin_strcmp("-V", a);
                                    tmp_statement_expression$180 = return_value___builtin_strcmp$181;
                                    tmp_if_expr$182 = !(tmp_statement_expression$180 != 0) ? (_Bool)1 : (_Bool)0;
                                  }
                                  if(tmp_if_expr$182)
                                    verbose = (_Bool)1;

                                  else
                                  {
                                    unsigned long int init_arguments$$1$$1$$1$$1$$49$$__s1_len;
                                    unsigned long int init_arguments$$1$$1$$1$$1$$49$$__s2_len;
                                    signed int return_value___builtin_strcmp$174;
                                    return_value___builtin_strcmp$174=__builtin_strcmp("--print-formats", a);
                                    tmp_statement_expression$173 = return_value___builtin_strcmp$174;
                                    if(tmp_statement_expression$173 == 0)
                                      tmp_if_expr$177 = (_Bool)1;

                                    else
                                    {
                                      unsigned long int init_arguments$$1$$1$$1$$1$$50$$__s1_len;
                                      unsigned long int init_arguments$$1$$1$$1$$1$$50$$__s2_len;
                                      signed int return_value___builtin_strcmp$176;
                                      return_value___builtin_strcmp$176=__builtin_strcmp("-pf", a);
                                      tmp_statement_expression$175 = return_value___builtin_strcmp$176;
                                      tmp_if_expr$177 = !(tmp_statement_expression$175 != 0) ? (_Bool)1 : (_Bool)0;
                                    }
                                    if(tmp_if_expr$177)
                                    {
                                      print_all_formats();
                                      exit(0);
                                    }

                                    else
                                    {
                                      unsigned long int init_arguments$$1$$1$$1$$1$$52$$__s1_len;
                                      unsigned long int init_arguments$$1$$1$$1$$1$$52$$__s2_len;
                                      signed int return_value___builtin_strcmp$169;
                                      return_value___builtin_strcmp$169=__builtin_strcmp("--mp3", a);
                                      tmp_statement_expression$168 = return_value___builtin_strcmp$169;
                                      if(tmp_statement_expression$168 == 0)
                                        tmp_if_expr$172 = (_Bool)1;

                                      else
                                      {
                                        unsigned long int init_arguments$$1$$1$$1$$1$$53$$__s1_len;
                                        unsigned long int init_arguments$$1$$1$$1$$1$$53$$__s2_len;
                                        signed int return_value___builtin_strcmp$171;
                                        return_value___builtin_strcmp$171=__builtin_strcmp("-mp3", a);
                                        tmp_statement_expression$170 = return_value___builtin_strcmp$171;
                                        tmp_if_expr$172 = !(tmp_statement_expression$170 != 0) ? (_Bool)1 : (_Bool)0;
                                      }
                                      if(tmp_if_expr$172)
                                        write_to_mp3 = (_Bool)1;

                                      else
                                      {
                                        unsigned long int init_arguments$$1$$1$$1$$1$$55$$__s1_len;
                                        unsigned long int init_arguments$$1$$1$$1$$1$$55$$__s2_len;
                                        signed int return_value___builtin_strcmp$164;
                                        return_value___builtin_strcmp$164=__builtin_strcmp("--mp3-quality", a);
                                        tmp_statement_expression$163 = return_value___builtin_strcmp$164;
                                        if(tmp_statement_expression$163 == 0)
                                          tmp_if_expr$167 = (_Bool)1;

                                        else
                                        {
                                          unsigned long int init_arguments$$1$$1$$1$$1$$56$$__s1_len;
                                          unsigned long int init_arguments$$1$$1$$1$$1$$56$$__s2_len;
                                          signed int return_value___builtin_strcmp$166;
                                          return_value___builtin_strcmp$166=__builtin_strcmp("-mp3q", a);
                                          tmp_statement_expression$165 = return_value___builtin_strcmp$166;
                                          tmp_if_expr$167 = !(tmp_statement_expression$165 != 0) ? (_Bool)1 : (_Bool)0;
                                        }
                                        if(tmp_if_expr$167)
                                        {
                                          if(lokke == argc + -1)
                                          {
                                            fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                            exit(-4);
                                            tmp_if_expr$19 = (signed long int)0;
                                          }

                                          else
                                          {
                                            lokke = lokke + 1;
                                            return_value_atoll$18=atoll(argv[(signed long int)lokke]);
                                            tmp_if_expr$19 = return_value_atoll$18;
                                          }
                                          das_lame_quality = (signed int)tmp_if_expr$19;
                                          write_to_mp3 = (_Bool)1;
                                        }

                                        else
                                        {
                                          unsigned long int init_arguments$$1$$1$$1$$1$$58$$__s1_len;
                                          unsigned long int init_arguments$$1$$1$$1$$1$$58$$__s2_len;
                                          signed int return_value___builtin_strcmp$159;
                                          return_value___builtin_strcmp$159=__builtin_strcmp("--mp3-bitrate", a);
                                          tmp_statement_expression$158 = return_value___builtin_strcmp$159;
                                          if(tmp_statement_expression$158 == 0)
                                            tmp_if_expr$162 = (_Bool)1;

                                          else
                                          {
                                            unsigned long int init_arguments$$1$$1$$1$$1$$59$$__s1_len;
                                            unsigned long int init_arguments$$1$$1$$1$$1$$59$$__s2_len;
                                            signed int return_value___builtin_strcmp$161;
                                            return_value___builtin_strcmp$161=__builtin_strcmp("-mp3b", a);
                                            tmp_statement_expression$160 = return_value___builtin_strcmp$161;
                                            tmp_if_expr$162 = !(tmp_statement_expression$160 != 0) ? (_Bool)1 : (_Bool)0;
                                          }
                                          if(tmp_if_expr$162)
                                          {
                                            if(lokke == argc + -1)
                                            {
                                              fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                              exit(-4);
                                              tmp_if_expr$21 = (signed long int)0;
                                            }

                                            else
                                            {
                                              lokke = lokke + 1;
                                              return_value_atoll$20=atoll(argv[(signed long int)lokke]);
                                              tmp_if_expr$21 = return_value_atoll$20;
                                            }
                                            das_lame_bitrate = (signed int)tmp_if_expr$21;
                                            write_to_mp3 = (_Bool)1;
                                          }

                                          else
                                          {
                                            unsigned long int init_arguments$$1$$1$$1$$1$$61$$__s1_len;
                                            unsigned long int init_arguments$$1$$1$$1$$1$$61$$__s2_len;
                                            signed int return_value___builtin_strcmp$154;
                                            return_value___builtin_strcmp$154=__builtin_strcmp("--write-to-stdout", a);
                                            tmp_statement_expression$153 = return_value___builtin_strcmp$154;
                                            if(tmp_statement_expression$153 == 0)
                                              tmp_if_expr$157 = (_Bool)1;

                                            else
                                            {
                                              unsigned long int init_arguments$$1$$1$$1$$1$$62$$__s1_len;
                                              unsigned long int init_arguments$$1$$1$$1$$1$$62$$__s2_len;
                                              signed int return_value___builtin_strcmp$156;
                                              return_value___builtin_strcmp$156=__builtin_strcmp("-ws", a);
                                              tmp_statement_expression$155 = return_value___builtin_strcmp$156;
                                              tmp_if_expr$157 = !(tmp_statement_expression$155 != 0) ? (_Bool)1 : (_Bool)0;
                                            }
                                            if(tmp_if_expr$157)
                                            {
                                              write_to_stdout = (_Bool)1;
                                              use_vu = (_Bool)0;
                                              show_bufferusage = (_Bool)0;
                                            }

                                            else
                                            {
                                              unsigned long int init_arguments$$1$$1$$1$$1$$64$$__s1_len;
                                              unsigned long int init_arguments$$1$$1$$1$$1$$64$$__s2_len;
                                              signed int return_value___builtin_strcmp$149;
                                              return_value___builtin_strcmp$149=__builtin_strcmp("--disable-meter", a);
                                              tmp_statement_expression$148 = return_value___builtin_strcmp$149;
                                              if(tmp_statement_expression$148 == 0)
                                                tmp_if_expr$152 = (_Bool)1;

                                              else
                                              {
                                                unsigned long int init_arguments$$1$$1$$1$$1$$65$$__s1_len;
                                                unsigned long int init_arguments$$1$$1$$1$$1$$65$$__s2_len;
                                                signed int return_value___builtin_strcmp$151;
                                                return_value___builtin_strcmp$151=__builtin_strcmp("-dm", a);
                                                tmp_statement_expression$150 = return_value___builtin_strcmp$151;
                                                tmp_if_expr$152 = !(tmp_statement_expression$150 != 0) ? (_Bool)1 : (_Bool)0;
                                              }
                                              if(tmp_if_expr$152)
                                                use_vu = (_Bool)0;

                                              else
                                              {
                                                unsigned long int init_arguments$$1$$1$$1$$1$$67$$__s1_len;
                                                unsigned long int init_arguments$$1$$1$$1$$1$$67$$__s2_len;
                                                signed int return_value___builtin_strcmp$144;
                                                return_value___builtin_strcmp$144=__builtin_strcmp("--hide-buffer-usage", a);
                                                tmp_statement_expression$143 = return_value___builtin_strcmp$144;
                                                if(tmp_statement_expression$143 == 0)
                                                  tmp_if_expr$147 = (_Bool)1;

                                                else
                                                {
                                                  unsigned long int init_arguments$$1$$1$$1$$1$$68$$__s1_len;
                                                  unsigned long int init_arguments$$1$$1$$1$$1$$68$$__s2_len;
                                                  signed int return_value___builtin_strcmp$146;
                                                  return_value___builtin_strcmp$146=__builtin_strcmp("-hbu", a);
                                                  tmp_statement_expression$145 = return_value___builtin_strcmp$146;
                                                  tmp_if_expr$147 = !(tmp_statement_expression$145 != 0) ? (_Bool)1 : (_Bool)0;
                                                }
                                                if(tmp_if_expr$147)
                                                  show_bufferusage = (_Bool)0;

                                                else
                                                {
                                                  unsigned long int init_arguments$$1$$1$$1$$1$$70$$__s1_len;
                                                  unsigned long int init_arguments$$1$$1$$1$$1$$70$$__s2_len;
                                                  signed int return_value___builtin_strcmp$139;
                                                  return_value___builtin_strcmp$139=__builtin_strcmp("--disable-console", a);
                                                  tmp_statement_expression$138 = return_value___builtin_strcmp$139;
                                                  if(tmp_statement_expression$138 == 0)
                                                    tmp_if_expr$142 = (_Bool)1;

                                                  else
                                                  {
                                                    unsigned long int init_arguments$$1$$1$$1$$1$$71$$__s1_len;
                                                    unsigned long int init_arguments$$1$$1$$1$$1$$71$$__s2_len;
                                                    signed int return_value___builtin_strcmp$141;
                                                    return_value___builtin_strcmp$141=__builtin_strcmp("-dc", a);
                                                    tmp_statement_expression$140 = return_value___builtin_strcmp$141;
                                                    tmp_if_expr$142 = !(tmp_statement_expression$140 != 0) ? (_Bool)1 : (_Bool)0;
                                                  }
                                                  if(tmp_if_expr$142)
                                                  {
                                                    use_vu = (_Bool)0;
                                                    show_bufferusage = (_Bool)0;
                                                  }

                                                  else
                                                  {
                                                    unsigned long int init_arguments$$1$$1$$1$$1$$73$$__s1_len;
                                                    unsigned long int init_arguments$$1$$1$$1$$1$$73$$__s2_len;
                                                    signed int return_value___builtin_strcmp$134;
                                                    return_value___builtin_strcmp$134=__builtin_strcmp("--no-stdin", a);
                                                    tmp_statement_expression$133 = return_value___builtin_strcmp$134;
                                                    if(tmp_statement_expression$133 == 0)
                                                      tmp_if_expr$137 = (_Bool)1;

                                                    else
                                                    {
                                                      unsigned long int init_arguments$$1$$1$$1$$1$$74$$__s1_len;
                                                      unsigned long int init_arguments$$1$$1$$1$$1$$74$$__s2_len;
                                                      signed int return_value___builtin_strcmp$136;
                                                      return_value___builtin_strcmp$136=__builtin_strcmp("-ns", a);
                                                      tmp_statement_expression$135 = return_value___builtin_strcmp$136;
                                                      tmp_if_expr$137 = !(tmp_statement_expression$135 != 0) ? (_Bool)1 : (_Bool)0;
                                                    }
                                                    if(tmp_if_expr$137)
                                                      no_stdin = (_Bool)1;

                                                    else
                                                    {
                                                      unsigned long int init_arguments$$1$$1$$1$$1$$76$$__s1_len;
                                                      unsigned long int init_arguments$$1$$1$$1$$1$$76$$__s2_len;
                                                      signed int return_value___builtin_strcmp$129;
                                                      return_value___builtin_strcmp$129=__builtin_strcmp("--daemon", a);
                                                      tmp_statement_expression$128 = return_value___builtin_strcmp$129;
                                                      if(tmp_statement_expression$128 == 0)
                                                        tmp_if_expr$132 = (_Bool)1;

                                                      else
                                                      {
                                                        unsigned long int init_arguments$$1$$1$$1$$1$$77$$__s1_len;
                                                        unsigned long int init_arguments$$1$$1$$1$$1$$77$$__s2_len;
                                                        signed int return_value___builtin_strcmp$131;
                                                        return_value___builtin_strcmp$131=__builtin_strcmp("", a);
                                                        tmp_statement_expression$130 = return_value___builtin_strcmp$131;
                                                        tmp_if_expr$132 = !(tmp_statement_expression$130 != 0) ? (_Bool)1 : (_Bool)0;
                                                      }
                                                      if(tmp_if_expr$132)
                                                      {
                                                        no_stdin = (_Bool)1;
                                                        absolutely_silent = (_Bool)1;
                                                        use_vu = (_Bool)0;
                                                        silent = (_Bool)1;
                                                        show_bufferusage = (_Bool)0;
                                                      }

                                                      else
                                                      {
                                                        unsigned long int init_arguments$$1$$1$$1$$1$$79$$__s1_len;
                                                        unsigned long int init_arguments$$1$$1$$1$$1$$79$$__s2_len;
                                                        signed int return_value___builtin_strcmp$124;
                                                        return_value___builtin_strcmp$124=__builtin_strcmp("--linear-meter", a);
                                                        tmp_statement_expression$123 = return_value___builtin_strcmp$124;
                                                        if(tmp_statement_expression$123 == 0)
                                                          tmp_if_expr$127 = (_Bool)1;

                                                        else
                                                        {
                                                          unsigned long int init_arguments$$1$$1$$1$$1$$80$$__s1_len;
                                                          unsigned long int init_arguments$$1$$1$$1$$1$$80$$__s2_len;
                                                          signed int return_value___builtin_strcmp$126;
                                                          return_value___builtin_strcmp$126=__builtin_strcmp("-lm", a);
                                                          tmp_statement_expression$125 = return_value___builtin_strcmp$126;
                                                          tmp_if_expr$127 = !(tmp_statement_expression$125 != 0) ? (_Bool)1 : (_Bool)0;
                                                        }
                                                        if(tmp_if_expr$127)
                                                          vu_dB = 0;

                                                        else
                                                        {
                                                          unsigned long int init_arguments$$1$$1$$1$$1$$82$$__s1_len;
                                                          unsigned long int init_arguments$$1$$1$$1$$1$$82$$__s2_len;
                                                          signed int return_value___builtin_strcmp$119;
                                                          return_value___builtin_strcmp$119=__builtin_strcmp("--dB-meter-reference", a);
                                                          tmp_statement_expression$118 = return_value___builtin_strcmp$119;
                                                          if(tmp_statement_expression$118 == 0)
                                                            tmp_if_expr$122 = (_Bool)1;

                                                          else
                                                          {
                                                            unsigned long int init_arguments$$1$$1$$1$$1$$83$$__s1_len;
                                                            unsigned long int init_arguments$$1$$1$$1$$1$$83$$__s2_len;
                                                            signed int return_value___builtin_strcmp$121;
                                                            return_value___builtin_strcmp$121=__builtin_strcmp("-dBr", a);
                                                            tmp_statement_expression$120 = return_value___builtin_strcmp$121;
                                                            tmp_if_expr$122 = !(tmp_statement_expression$120 != 0) ? (_Bool)1 : (_Bool)0;
                                                          }
                                                          if(tmp_if_expr$122)
                                                          {
                                                            vu_dB = 1;
                                                            if(lokke == argc + -1)
                                                            {
                                                              fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                              exit(-4);
                                                              tmp_if_expr$23 = (double)0.0f;
                                                            }

                                                            else
                                                            {
                                                              lokke = lokke + 1;
                                                              return_value_atof$22=atof(argv[(signed long int)lokke]);
                                                              tmp_if_expr$23 = return_value_atof$22 * (double)-0.05f;
                                                            }
                                                            vu_bias=powf(10.0f, (float)tmp_if_expr$23);
                                                          }

                                                          else
                                                          {
                                                            unsigned long int init_arguments$$1$$1$$1$$1$$85$$__s1_len;
                                                            unsigned long int init_arguments$$1$$1$$1$$1$$85$$__s2_len;
                                                            signed int return_value___builtin_strcmp$114;
                                                            return_value___builtin_strcmp$114=__builtin_strcmp("--meterbridge", a);
                                                            tmp_statement_expression$113 = return_value___builtin_strcmp$114;
                                                            if(tmp_statement_expression$113 == 0)
                                                              tmp_if_expr$117 = (_Bool)1;

                                                            else
                                                            {
                                                              unsigned long int init_arguments$$1$$1$$1$$1$$86$$__s1_len;
                                                              unsigned long int init_arguments$$1$$1$$1$$1$$86$$__s2_len;
                                                              signed int return_value___builtin_strcmp$116;
                                                              return_value___builtin_strcmp$116=__builtin_strcmp("-mb", a);
                                                              tmp_statement_expression$115 = return_value___builtin_strcmp$116;
                                                              tmp_if_expr$117 = !(tmp_statement_expression$115 != 0) ? (_Bool)1 : (_Bool)0;
                                                            }
                                                            if(tmp_if_expr$117)
                                                              use_meterbridge = (_Bool)1;

                                                            else
                                                            {
                                                              unsigned long int init_arguments$$1$$1$$1$$1$$88$$__s1_len;
                                                              unsigned long int init_arguments$$1$$1$$1$$1$$88$$__s2_len;
                                                              signed int return_value___builtin_strcmp$109;
                                                              return_value___builtin_strcmp$109=__builtin_strcmp("--meterbridge-type", a);
                                                              tmp_statement_expression$108 = return_value___builtin_strcmp$109;
                                                              if(tmp_statement_expression$108 == 0)
                                                                tmp_if_expr$112 = (_Bool)1;

                                                              else
                                                              {
                                                                unsigned long int init_arguments$$1$$1$$1$$1$$89$$__s1_len;
                                                                unsigned long int init_arguments$$1$$1$$1$$1$$89$$__s2_len;
                                                                signed int return_value___builtin_strcmp$111;
                                                                return_value___builtin_strcmp$111=__builtin_strcmp("-mt", a);
                                                                tmp_statement_expression$110 = return_value___builtin_strcmp$111;
                                                                tmp_if_expr$112 = !(tmp_statement_expression$110 != 0) ? (_Bool)1 : (_Bool)0;
                                                              }
                                                              if(tmp_if_expr$112)
                                                              {
                                                                use_meterbridge = (_Bool)1;
                                                                if(lokke == argc + -1)
                                                                {
                                                                  fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                  exit(-4);
                                                                  tmp_if_expr$24 = "";
                                                                }

                                                                else
                                                                {
                                                                  lokke = lokke + 1;
                                                                  tmp_if_expr$24 = argv[(signed long int)lokke];
                                                                }
                                                                meterbridge_type = tmp_if_expr$24;
                                                              }

                                                              else
                                                              {
                                                                unsigned long int init_arguments$$1$$1$$1$$1$$91$$__s1_len;
                                                                unsigned long int init_arguments$$1$$1$$1$$1$$91$$__s2_len;
                                                                signed int return_value___builtin_strcmp$104;
                                                                return_value___builtin_strcmp$104=__builtin_strcmp("--meterbridge-reference", a);
                                                                tmp_statement_expression$103 = return_value___builtin_strcmp$104;
                                                                if(tmp_statement_expression$103 == 0)
                                                                  tmp_if_expr$107 = (_Bool)1;

                                                                else
                                                                {
                                                                  unsigned long int init_arguments$$1$$1$$1$$1$$92$$__s1_len;
                                                                  unsigned long int init_arguments$$1$$1$$1$$1$$92$$__s2_len;
                                                                  signed int return_value___builtin_strcmp$106;
                                                                  return_value___builtin_strcmp$106=__builtin_strcmp("-mr", a);
                                                                  tmp_statement_expression$105 = return_value___builtin_strcmp$106;
                                                                  tmp_if_expr$107 = !(tmp_statement_expression$105 != 0) ? (_Bool)1 : (_Bool)0;
                                                                }
                                                                if(tmp_if_expr$107)
                                                                {
                                                                  use_meterbridge = (_Bool)1;
                                                                  if(lokke == argc + -1)
                                                                  {
                                                                    fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                    exit(-4);
                                                                    tmp_if_expr$25 = "";
                                                                  }

                                                                  else
                                                                  {
                                                                    lokke = lokke + 1;
                                                                    tmp_if_expr$25 = argv[(signed long int)lokke];
                                                                  }
                                                                  meterbridge_reference = tmp_if_expr$25;
                                                                }

                                                                else
                                                                {
                                                                  unsigned long int init_arguments$$1$$1$$1$$1$$94$$__s1_len;
                                                                  unsigned long int init_arguments$$1$$1$$1$$1$$94$$__s2_len;
                                                                  signed int return_value___builtin_strcmp$99;
                                                                  return_value___builtin_strcmp$99=__builtin_strcmp("--jack-transport", a);
                                                                  tmp_statement_expression$98 = return_value___builtin_strcmp$99;
                                                                  if(tmp_statement_expression$98 == 0)
                                                                    tmp_if_expr$102 = (_Bool)1;

                                                                  else
                                                                  {
                                                                    unsigned long int init_arguments$$1$$1$$1$$1$$95$$__s1_len;
                                                                    unsigned long int init_arguments$$1$$1$$1$$1$$95$$__s2_len;
                                                                    signed int return_value___builtin_strcmp$101;
                                                                    return_value___builtin_strcmp$101=__builtin_strcmp("-jt", a);
                                                                    tmp_statement_expression$100 = return_value___builtin_strcmp$101;
                                                                    tmp_if_expr$102 = !(tmp_statement_expression$100 != 0) ? (_Bool)1 : (_Bool)0;
                                                                  }
                                                                  if(tmp_if_expr$102)
                                                                    use_jack_transport = (_Bool)1;

                                                                  else
                                                                  {
                                                                    unsigned long int init_arguments$$1$$1$$1$$1$$97$$__s1_len;
                                                                    unsigned long int init_arguments$$1$$1$$1$$1$$97$$__s2_len;
                                                                    signed int return_value___builtin_strcmp$94;
                                                                    return_value___builtin_strcmp$94=__builtin_strcmp("--jack-freewheel", a);
                                                                    tmp_statement_expression$93 = return_value___builtin_strcmp$94;
                                                                    if(tmp_statement_expression$93 == 0)
                                                                      tmp_if_expr$97 = (_Bool)1;

                                                                    else
                                                                    {
                                                                      unsigned long int init_arguments$$1$$1$$1$$1$$98$$__s1_len;
                                                                      unsigned long int init_arguments$$1$$1$$1$$1$$98$$__s2_len;
                                                                      signed int return_value___builtin_strcmp$96;
                                                                      return_value___builtin_strcmp$96=__builtin_strcmp("-jf", a);
                                                                      tmp_statement_expression$95 = return_value___builtin_strcmp$96;
                                                                      tmp_if_expr$97 = !(tmp_statement_expression$95 != 0) ? (_Bool)1 : (_Bool)0;
                                                                    }
                                                                    if(tmp_if_expr$97)
                                                                      use_jack_freewheel = (_Bool)1;

                                                                    else
                                                                    {
                                                                      unsigned long int init_arguments$$1$$1$$1$$1$$100$$__s1_len;
                                                                      unsigned long int init_arguments$$1$$1$$1$$1$$100$$__s2_len;
                                                                      signed int return_value___builtin_strcmp$89;
                                                                      return_value___builtin_strcmp$89=__builtin_strcmp("--manual-connections", a);
                                                                      tmp_statement_expression$88 = return_value___builtin_strcmp$89;
                                                                      if(tmp_statement_expression$88 == 0)
                                                                        tmp_if_expr$92 = (_Bool)1;

                                                                      else
                                                                      {
                                                                        unsigned long int init_arguments$$1$$1$$1$$1$$101$$__s1_len;
                                                                        unsigned long int init_arguments$$1$$1$$1$$1$$101$$__s2_len;
                                                                        signed int return_value___builtin_strcmp$91;
                                                                        return_value___builtin_strcmp$91=__builtin_strcmp("-mc", a);
                                                                        tmp_statement_expression$90 = return_value___builtin_strcmp$91;
                                                                        tmp_if_expr$92 = !(tmp_statement_expression$90 != 0) ? (_Bool)1 : (_Bool)0;
                                                                      }
                                                                      if(tmp_if_expr$92)
                                                                        use_manual_connections = (_Bool)1;

                                                                      else
                                                                      {
                                                                        unsigned long int init_arguments$$1$$1$$1$$1$$103$$__s1_len;
                                                                        unsigned long int init_arguments$$1$$1$$1$$1$$103$$__s2_len;
                                                                        signed int return_value___builtin_strcmp$84;
                                                                        return_value___builtin_strcmp$84=__builtin_strcmp("--filename", a);
                                                                        tmp_statement_expression$83 = return_value___builtin_strcmp$84;
                                                                        if(tmp_statement_expression$83 == 0)
                                                                          tmp_if_expr$87 = (_Bool)1;

                                                                        else
                                                                        {
                                                                          unsigned long int init_arguments$$1$$1$$1$$1$$104$$__s1_len;
                                                                          unsigned long int init_arguments$$1$$1$$1$$1$$104$$__s2_len;
                                                                          signed int return_value___builtin_strcmp$86;
                                                                          return_value___builtin_strcmp$86=__builtin_strcmp("-fn", a);
                                                                          tmp_statement_expression$85 = return_value___builtin_strcmp$86;
                                                                          tmp_if_expr$87 = !(tmp_statement_expression$85 != 0) ? (_Bool)1 : (_Bool)0;
                                                                        }
                                                                        if(tmp_if_expr$87)
                                                                        {
                                                                          if(lokke == argc + -1)
                                                                          {
                                                                            fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                            exit(-4);
                                                                            tmp_if_expr$26 = "";
                                                                          }

                                                                          else
                                                                          {
                                                                            lokke = lokke + 1;
                                                                            tmp_if_expr$26 = argv[(signed long int)lokke];
                                                                          }
                                                                          base_filename = tmp_if_expr$26;
                                                                        }

                                                                        else
                                                                        {
                                                                          unsigned long int __s1_len;
                                                                          unsigned long int __s2_len;
                                                                          signed int return_value___builtin_strcmp$79;
                                                                          return_value___builtin_strcmp$79=__builtin_strcmp("--osc", a);
                                                                          tmp_statement_expression$78 = return_value___builtin_strcmp$79;
                                                                          if(tmp_statement_expression$78 == 0)
                                                                            tmp_if_expr$82 = (_Bool)1;

                                                                          else
                                                                          {
                                                                            unsigned long int init_arguments$$1$$1$$1$$1$$107$$__s1_len;
                                                                            unsigned long int init_arguments$$1$$1$$1$$1$$107$$__s2_len;
                                                                            signed int return_value___builtin_strcmp$81;
                                                                            return_value___builtin_strcmp$81=__builtin_strcmp("-O", a);
                                                                            tmp_statement_expression$80 = return_value___builtin_strcmp$81;
                                                                            tmp_if_expr$82 = !(tmp_statement_expression$80 != 0) ? (_Bool)1 : (_Bool)0;
                                                                          }
                                                                          if(tmp_if_expr$82)
                                                                          {
                                                                            if(lokke == argc + -1)
                                                                            {
                                                                              fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                              exit(-4);
                                                                              tmp_if_expr$27 = "";
                                                                            }

                                                                            else
                                                                            {
                                                                              lokke = lokke + 1;
                                                                              tmp_if_expr$27 = argv[(signed long int)lokke];
                                                                            }
                                                                            osc_port=atoi(tmp_if_expr$27);
                                                                          }

                                                                          else
                                                                          {
                                                                            unsigned long int init_arguments$$1$$1$$1$$1$$109$$__s1_len;
                                                                            unsigned long int init_arguments$$1$$1$$1$$1$$109$$__s2_len;
                                                                            signed int return_value___builtin_strcmp$74;
                                                                            return_value___builtin_strcmp$74=__builtin_strcmp("--hook-open", a);
                                                                            tmp_statement_expression$73 = return_value___builtin_strcmp$74;
                                                                            if(tmp_statement_expression$73 == 0)
                                                                              tmp_if_expr$77 = (_Bool)1;

                                                                            else
                                                                            {
                                                                              unsigned long int init_arguments$$1$$1$$1$$1$$110$$__s1_len;
                                                                              unsigned long int init_arguments$$1$$1$$1$$1$$110$$__s2_len;
                                                                              signed int return_value___builtin_strcmp$76;
                                                                              return_value___builtin_strcmp$76=__builtin_strcmp("-Ho", a);
                                                                              tmp_statement_expression$75 = return_value___builtin_strcmp$76;
                                                                              tmp_if_expr$77 = !(tmp_statement_expression$75 != 0) ? (_Bool)1 : (_Bool)0;
                                                                            }
                                                                            if(tmp_if_expr$77)
                                                                            {
                                                                              if(lokke == argc + -1)
                                                                              {
                                                                                fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                                exit(-4);
                                                                                tmp_if_expr$28 = "";
                                                                              }

                                                                              else
                                                                              {
                                                                                lokke = lokke + 1;
                                                                                tmp_if_expr$28 = argv[(signed long int)lokke];
                                                                              }
                                                                              hook_cmd_opened = tmp_if_expr$28;
                                                                            }

                                                                            else
                                                                            {
                                                                              unsigned long int init_arguments$$1$$1$$1$$1$$112$$__s1_len;
                                                                              unsigned long int init_arguments$$1$$1$$1$$1$$112$$__s2_len;
                                                                              signed int return_value___builtin_strcmp$69;
                                                                              return_value___builtin_strcmp$69=__builtin_strcmp("--hook-close", a);
                                                                              tmp_statement_expression$68 = return_value___builtin_strcmp$69;
                                                                              if(tmp_statement_expression$68 == 0)
                                                                                tmp_if_expr$72 = (_Bool)1;

                                                                              else
                                                                              {
                                                                                unsigned long int init_arguments$$1$$1$$1$$1$$113$$__s1_len;
                                                                                unsigned long int init_arguments$$1$$1$$1$$1$$113$$__s2_len;
                                                                                signed int return_value___builtin_strcmp$71;
                                                                                return_value___builtin_strcmp$71=__builtin_strcmp("-Hc", a);
                                                                                tmp_statement_expression$70 = return_value___builtin_strcmp$71;
                                                                                tmp_if_expr$72 = !(tmp_statement_expression$70 != 0) ? (_Bool)1 : (_Bool)0;
                                                                              }
                                                                              if(tmp_if_expr$72)
                                                                              {
                                                                                if(lokke == argc + -1)
                                                                                {
                                                                                  fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                                  exit(-4);
                                                                                  tmp_if_expr$29 = "";
                                                                                }

                                                                                else
                                                                                {
                                                                                  lokke = lokke + 1;
                                                                                  tmp_if_expr$29 = argv[(signed long int)lokke];
                                                                                }
                                                                                hook_cmd_closed = tmp_if_expr$29;
                                                                              }

                                                                              else
                                                                              {
                                                                                unsigned long int init_arguments$$1$$1$$1$$1$$115$$__s1_len;
                                                                                unsigned long int init_arguments$$1$$1$$1$$1$$115$$__s2_len;
                                                                                signed int return_value___builtin_strcmp$64;
                                                                                return_value___builtin_strcmp$64=__builtin_strcmp("--hook-rotate", a);
                                                                                tmp_statement_expression$63 = return_value___builtin_strcmp$64;
                                                                                if(tmp_statement_expression$63 == 0)
                                                                                  tmp_if_expr$67 = (_Bool)1;

                                                                                else
                                                                                {
                                                                                  unsigned long int init_arguments$$1$$1$$1$$1$$116$$__s1_len;
                                                                                  unsigned long int init_arguments$$1$$1$$1$$1$$116$$__s2_len;
                                                                                  signed int return_value___builtin_strcmp$66;
                                                                                  return_value___builtin_strcmp$66=__builtin_strcmp("-Hr", a);
                                                                                  tmp_statement_expression$65 = return_value___builtin_strcmp$66;
                                                                                  tmp_if_expr$67 = !(tmp_statement_expression$65 != 0) ? (_Bool)1 : (_Bool)0;
                                                                                }
                                                                                if(tmp_if_expr$67)
                                                                                {
                                                                                  if(lokke == argc + -1)
                                                                                  {
                                                                                    fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                                    exit(-4);
                                                                                    tmp_if_expr$30 = "";
                                                                                  }

                                                                                  else
                                                                                  {
                                                                                    lokke = lokke + 1;
                                                                                    tmp_if_expr$30 = argv[(signed long int)lokke];
                                                                                  }
                                                                                  hook_cmd_rotate = tmp_if_expr$30;
                                                                                }

                                                                                else
                                                                                {
                                                                                  unsigned long int init_arguments$$1$$1$$1$$1$$118$$__s1_len;
                                                                                  unsigned long int init_arguments$$1$$1$$1$$1$$118$$__s2_len;
                                                                                  signed int return_value___builtin_strcmp$59;
                                                                                  return_value___builtin_strcmp$59=__builtin_strcmp("--hook-timing", a);
                                                                                  tmp_statement_expression$58 = return_value___builtin_strcmp$59;
                                                                                  if(tmp_statement_expression$58 == 0)
                                                                                    tmp_if_expr$62 = (_Bool)1;

                                                                                  else
                                                                                  {
                                                                                    unsigned long int init_arguments$$1$$1$$1$$1$$119$$__s1_len;
                                                                                    unsigned long int init_arguments$$1$$1$$1$$1$$119$$__s2_len;
                                                                                    signed int return_value___builtin_strcmp$61;
                                                                                    return_value___builtin_strcmp$61=__builtin_strcmp("-Ht", a);
                                                                                    tmp_statement_expression$60 = return_value___builtin_strcmp$61;
                                                                                    tmp_if_expr$62 = !(tmp_statement_expression$60 != 0) ? (_Bool)1 : (_Bool)0;
                                                                                  }
                                                                                  if(tmp_if_expr$62)
                                                                                  {
                                                                                    if(lokke == argc + -1)
                                                                                    {
                                                                                      fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                                      exit(-4);
                                                                                      tmp_if_expr$31 = "";
                                                                                    }

                                                                                    else
                                                                                    {
                                                                                      lokke = lokke + 1;
                                                                                      tmp_if_expr$31 = argv[(signed long int)lokke];
                                                                                    }
                                                                                    hook_cmd_timing = tmp_if_expr$31;
                                                                                  }

                                                                                  else
                                                                                  {
                                                                                    unsigned long int init_arguments$$1$$1$$1$$1$$121$$__s1_len;
                                                                                    unsigned long int init_arguments$$1$$1$$1$$1$$121$$__s2_len;
                                                                                    signed int return_value___builtin_strcmp$54;
                                                                                    return_value___builtin_strcmp$54=__builtin_strcmp("--timestamp", a);
                                                                                    tmp_statement_expression$53 = return_value___builtin_strcmp$54;
                                                                                    if(tmp_statement_expression$53 == 0)
                                                                                      tmp_if_expr$57 = (_Bool)1;

                                                                                    else
                                                                                    {
                                                                                      unsigned long int init_arguments$$1$$1$$1$$1$$122$$__s1_len;
                                                                                      unsigned long int init_arguments$$1$$1$$1$$1$$122$$__s2_len;
                                                                                      signed int return_value___builtin_strcmp$56;
                                                                                      return_value___builtin_strcmp$56=__builtin_strcmp("-S", a);
                                                                                      tmp_statement_expression$55 = return_value___builtin_strcmp$56;
                                                                                      tmp_if_expr$57 = !(tmp_statement_expression$55 != 0) ? (_Bool)1 : (_Bool)0;
                                                                                    }
                                                                                    if(tmp_if_expr$57)
                                                                                      create_tme_file = (_Bool)1;

                                                                                    else
                                                                                    {
                                                                                      unsigned long int init_arguments$$1$$1$$1$$1$$124$$__s1_len;
                                                                                      unsigned long int init_arguments$$1$$1$$1$$1$$124$$__s2_len;
                                                                                      signed int return_value___builtin_strcmp$49;
                                                                                      return_value___builtin_strcmp$49=__builtin_strcmp("--rotatefile", a);
                                                                                      tmp_statement_expression$48 = return_value___builtin_strcmp$49;
                                                                                      if(tmp_statement_expression$48 == 0)
                                                                                        tmp_if_expr$52 = (_Bool)1;

                                                                                      else
                                                                                      {
                                                                                        unsigned long int init_arguments$$1$$1$$1$$1$$125$$__s1_len;
                                                                                        unsigned long int init_arguments$$1$$1$$1$$1$$125$$__s2_len;
                                                                                        signed int return_value___builtin_strcmp$51;
                                                                                        return_value___builtin_strcmp$51=__builtin_strcmp("-Rf", a);
                                                                                        tmp_statement_expression$50 = return_value___builtin_strcmp$51;
                                                                                        tmp_if_expr$52 = !(tmp_statement_expression$50 != 0) ? (_Bool)1 : (_Bool)0;
                                                                                      }
                                                                                      if(tmp_if_expr$52)
                                                                                      {
                                                                                        if(lokke == argc + -1)
                                                                                        {
                                                                                          fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                                          exit(-4);
                                                                                          tmp_if_expr$33 = (signed long int)0;
                                                                                        }

                                                                                        else
                                                                                        {
                                                                                          lokke = lokke + 1;
                                                                                          return_value_atoll$32=atoll(argv[(signed long int)lokke]);
                                                                                          tmp_if_expr$33 = return_value_atoll$32;
                                                                                        }
                                                                                        rotateframe = tmp_if_expr$33;
                                                                                      }

                                                                                      else
                                                                                      {
                                                                                        unsigned long int init_arguments$$1$$1$$1$$1$$127$$__s1_len;
                                                                                        unsigned long int init_arguments$$1$$1$$1$$1$$127$$__s2_len;
                                                                                        signed int return_value___builtin_strcmp$44;
                                                                                        return_value___builtin_strcmp$44=__builtin_strcmp("--timemachine", a);
                                                                                        tmp_statement_expression$43 = return_value___builtin_strcmp$44;
                                                                                        if(tmp_statement_expression$43 == 0)
                                                                                          tmp_if_expr$47 = (_Bool)1;

                                                                                        else
                                                                                        {
                                                                                          unsigned long int init_arguments$$1$$1$$1$$1$$128$$__s1_len;
                                                                                          unsigned long int init_arguments$$1$$1$$1$$1$$128$$__s2_len;
                                                                                          signed int return_value___builtin_strcmp$46;
                                                                                          return_value___builtin_strcmp$46=__builtin_strcmp("-tm", a);
                                                                                          tmp_statement_expression$45 = return_value___builtin_strcmp$46;
                                                                                          tmp_if_expr$47 = !(tmp_statement_expression$45 != 0) ? (_Bool)1 : (_Bool)0;
                                                                                        }
                                                                                        if(tmp_if_expr$47)
                                                                                          timemachine_mode = (_Bool)1;

                                                                                        else
                                                                                        {
                                                                                          unsigned long int init_arguments$$1$$1$$1$$1$$130$$__s1_len;
                                                                                          unsigned long int init_arguments$$1$$1$$1$$1$$130$$__s2_len;
                                                                                          signed int return_value___builtin_strcmp$39;
                                                                                          return_value___builtin_strcmp$39=__builtin_strcmp("--timemachine-prebuffer", a);
                                                                                          tmp_statement_expression$38 = return_value___builtin_strcmp$39;
                                                                                          if(tmp_statement_expression$38 == 0)
                                                                                            tmp_if_expr$42 = (_Bool)1;

                                                                                          else
                                                                                          {
                                                                                            unsigned long int init_arguments$$1$$1$$1$$1$$131$$__s1_len;
                                                                                            unsigned long int init_arguments$$1$$1$$1$$1$$131$$__s2_len;
                                                                                            signed int return_value___builtin_strcmp$41;
                                                                                            return_value___builtin_strcmp$41=__builtin_strcmp("-tmpb", a);
                                                                                            tmp_statement_expression$40 = return_value___builtin_strcmp$41;
                                                                                            tmp_if_expr$42 = !(tmp_statement_expression$40 != 0) ? (_Bool)1 : (_Bool)0;
                                                                                          }
                                                                                          if(tmp_if_expr$42)
                                                                                          {
                                                                                            if(lokke == argc + -1)
                                                                                            {
                                                                                              fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                                              exit(-4);
                                                                                              tmp_if_expr$35 = (double)0.0f;
                                                                                            }

                                                                                            else
                                                                                            {
                                                                                              lokke = lokke + 1;
                                                                                              return_value_atof$34=atof(argv[(signed long int)lokke]);
                                                                                              tmp_if_expr$35 = return_value_atof$34;
                                                                                            }
                                                                                            timemachine_prebuffer = (float)tmp_if_expr$35;
                                                                                          }

                                                                                          else
                                                                                          {
                                                                                            if(lokke == argc + -1)
                                                                                              tmp_if_expr$37 = (signed int)argv[(signed long int)lokke][(signed long int)0] != 45 ? (_Bool)1 : (_Bool)0;

                                                                                            else
                                                                                              tmp_if_expr$37 = (_Bool)0;
                                                                                            if(tmp_if_expr$37)
                                                                                            {
                                                                                              lokke = lokke - 1;
                                                                                              if(lokke == argc + -1)
                                                                                              {
                                                                                                fprintf(stderr, "Must supply argument for '%s'\n", argv[(signed long int)lokke]);
                                                                                                exit(-4);
                                                                                                tmp_if_expr$36 = "";
                                                                                              }

                                                                                              else
                                                                                              {
                                                                                                lokke = lokke + 1;
                                                                                                tmp_if_expr$36 = argv[(signed long int)lokke];
                                                                                              }
                                                                                              base_filename = tmp_if_expr$36;
                                                                                            }

                                                                                            else
                                                                                            {
                                                                                              fprintf(stderr, "%s", usage);
                                                                                              exit(-1);
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if((signed int)use_jack_freewheel == 1 && (signed int)use_jack_transport == 1)
  {
    fprintf(stderr, "--jack-transport and --jack-freewheel are mutually exclusive options.\n");
    exit(2);
  }

  if((signed int)write_to_mp3 == 1)
  {
    soundfile_format = "mp3";
    soundfile_format_is_set = (_Bool)1;
    if(min_buffer_time <= 0.0f)
      min_buffer_time = (float)8;

  }

  else
    if(min_buffer_time <= 0.0f)
      min_buffer_time = (float)4;

  if((signed int)timemachine_mode == 1)
  {
    min_buffer_time = min_buffer_time + timemachine_prebuffer;
    max_buffer_time = max_buffer_time + timemachine_prebuffer;
  }

  verbose_print("main() find default file format\n");
  if((signed int)soundfile_format_is_set == 0)
  {
    if(num_channels >= 3)
      soundfile_format = soundfile_format_multi;

    else
      soundfile_format = soundfile_format_one_or_two;
  }

  verbose_print("main() find filename\n");
  if(base_filename == ((char *)NULL))
  {
    signed int try = 0;
    void *return_value_my_calloc$258;
    return_value_my_calloc$258=my_calloc((unsigned long int)1, (unsigned long int)5000);
    base_filename = (char *)return_value_my_calloc$258;
    do
    {
      try = try + 1;
      sprintf(base_filename, "%s%0*d.%s", filename_prefix, leading_zeros + 1, try, soundfile_format);
      signed int return_value_access$259;
      return_value_access$259=access(base_filename, 0);
      if(!(return_value_access$259 == 0))
        break;

    }
    while((_Bool)1);
  }

}

// init_meterbridge_ports
// file jack_capture.c line 1785
static signed int init_meterbridge_ports()
{
  if((signed int)use_meterbridge == 0 || !(ports_meterbridge == ((struct _jack_port **)NULL)))
    return 0;

  else
  {
    char portname[5000l];
    sprintf(portname, "%s:meter_1", meterbridge_jackname);
    struct _jack_port *port1;
    port1=jack_port_by_name(client, portname);
    if(port1 == ((struct _jack_port *)NULL))
      return 0;

    else
    {
      struct _jack_port **ports_meterbridge2;
      void *return_value_my_calloc$1;
      return_value_my_calloc$1=my_calloc(sizeof(struct _jack_port *) /*8ul*/ , (unsigned long int)num_channels);
      ports_meterbridge2 = (struct _jack_port **)return_value_my_calloc$1;
      ports_meterbridge2[(signed long int)0] = port1;
      signed int ch = 1;
      for( ; !(ch >= num_channels); ch = ch + 1)
      {
        sprintf(portname, "%s:meter_%d", meterbridge_jackname, ch + 1);
        ports_meterbridge2[(signed long int)ch]=jack_port_by_name(client, portname);
        if(ports_meterbridge2[(signed long int)ch] == ((struct _jack_port *)NULL))
        {
          print_message("Warning! Something is very wrong with the meterbridge.\n");
          free((void *)ports_meterbridge2);
          return 0;
        }

      }
      ports_meterbridge = ports_meterbridge2;
      connect_meterbridge = 1;
      wake_up_connection_thread();
      return 1;
    }
  }
}

// init_osc
// file jack_capture.c line 59
signed int init_osc(signed int osc_port)
{
  char tmp[8l];
  if(!(osc_port >= 0))
    return 1;

  else
    if(!(osc_server == NULL))
      return 1;

    else
    {
      unsigned int port = (unsigned int)(osc_port > 100 && osc_port < 60000 ? osc_port : 7654);
      snprintf(tmp, sizeof(char [8l]) /*8ul*/ , "%d", port);
      if((signed int)verbose == 1)
        fprintf(stderr, "OSC trying port:%i\n", port);

      osc_server=lo_server_thread_new(tmp, oscb_error);
      if(osc_server == NULL)
      {
        if((signed int)silent == 0)
          fprintf(stderr, "OSC start failed.");

        return 1;
      }

      else
      {
        if((signed int)silent == 0)
        {
          char *urlstr;
          urlstr=lo_server_thread_get_url(osc_server);
          fprintf(stderr, "OSC server name: %s\n", urlstr);
          free((void *)urlstr);
        }

        lo_server_thread_add_method(osc_server, "/jack_capture/tm/start", "", oscb_tm_start, (void *)0);
        lo_server_thread_add_method(osc_server, "/jack_capture/tm/stop", "", oscb_tm_stop, (void *)0);
        lo_server_thread_add_method(osc_server, "/jack_capture/stop", "", oscb_stop, (void *)0);
        lo_server_thread_add_method(osc_server, "/jack_capture/rotate", "", oscb_frotate, (void *)0);
        lo_server_thread_start(osc_server);
        if((signed int)verbose == 1)
          fprintf(stderr, "OSC server started on port %i\n", port);

        return 0;
      }
    }
}

// init_show_bufferusage
// file jack_capture.c line 582
static void init_show_bufferusage(void)
{
  print_ln();
}

// init_various
// file jack_capture.c line 2469
void init_various(void)
{
  verbose_print("main() init jack 1\n");
  if((signed int)use_manual_connections == 0)
    start_connection_thread();

  start_jack();
  portnames_add_defaults();
  verbose_print("main() init buffers\n");
  buffers_init();
  verbose_print("main() Open soundfile and setup disk callback.\n");
  signed int return_value_open_soundfile$1;
  return_value_open_soundfile$1=open_soundfile();
  if(return_value_open_soundfile$1 == 0)
  {
    jack_client_close(client);
    exit(-2);
  }

  vringbuffer_set_receiver_callback(vringbuffer, disk_callback);
  verbose_print("main() Init waiting.\n");
  sem_init(&stop_sem, 0, (unsigned int)0);
  signal(2, finish);
  signal(15, finish);
  if((signed int)no_stdin == 0)
    start_keypress_thread();

  verbose_print("main() Init jack 2.\n");
  jack_set_process_callback(client, process, (void *)0);
  jack_set_xrun_callback(client, xrun, (void *)0);
  jack_on_shutdown(client, jack_shutdown, (void *)0);
  jack_set_latency_callback(client, jack_latency_cb, (void *)0);
  if((signed int)use_manual_connections == 0)
    jack_set_graph_order_callback(client, graphordercallback, (void *)0);

  jack_set_freewheel_callback(client, freewheelcallback, (void *)0);
  signed int return_value_jack_activate$2;
  return_value_jack_activate$2=jack_activate(client);
  if(!(return_value_jack_activate$2 == 0))
  {
    fprintf(stderr, "\nCan not activate client");
    exit(-2);
  }

  create_ports();
  if((signed int)use_manual_connections == 0)
    connect_ports(ports);

  verbose_print("main() Everything initialized.\n");
  is_initialized = 1;
  wake_up_connection_thread();
  verbose_print("main() Start meterbridge.\n");
  if(!(use_meterbridge == (_Bool)0))
    start_meterbridge(num_channels);

  verbose_print("main() Print some info.\n");
  if((signed int)fixed_duration == 1)
  {
    if((signed int)silent == 0)
      print_message("Recording to \"%s\". The recording is going\n>>> to last %lf seconds Press <Ctrl-C> to stop before that.\n", base_filename, recording_time);

  }

  else
    if((signed int)silent == 0)
    {
      if((signed int)timemachine_mode == 1)
      {
        print_message("Waiting to start recording of \"%s\"\n", base_filename);
        print_message("Press <Ctrl-C> to stop recording and quit.\n");
      }

      else
        print_message("Recording to \"%s\". Press <Return> or <Ctrl-C> to stop.\n", base_filename);
    }

  verbose_print("main() Start helper thread.\n");
  setup_helper_thread();
}

// init_vu
// file jack_capture.c line 575
static void init_vu(void)
{
  signed int ch = 0;
  for( ; !(ch >= num_channels); ch = ch + 1)
    print_ln();
}

// jack_latency_cb
// file jack_capture.c line 1990
static void jack_latency_cb(enum JackLatencyCallbackMode mode, void *arg)
{
  signed int ch;
  struct _jack_latency_range jlty;
  unsigned int max_latency = (unsigned int)0;
  if((signed int)mode == JackCaptureLatency)
  {
    if(!(ports == ((struct _jack_port **)NULL)))
    {
      ch = 0;
      for( ; !(ch >= num_channels); ch = ch + 1)
        if(!(ports[(signed long int)ch] == ((struct _jack_port *)NULL)))
        {
          jack_port_get_latency_range(ports[(signed long int)ch], (enum JackLatencyCallbackMode)JackCaptureLatency, &jlty);
          if(!(max_latency >= jlty.max))
            max_latency = jlty.max;

        }

      j_latency = max_latency;
    }

  }

}

// jack_shutdown
// file jack_capture.c line 2039
static void jack_shutdown(void *arg)
{
  fprintf(stderr, "jack_capture: JACK shutdown.\n");
  jack_has_been_shut_down = (_Bool)1;
  sem_post(&stop_sem);
}

// keypress_func
// file jack_capture.c line 2076
static void * keypress_func(void *arg)
{
  char gakk[64l];
  turn_off_echo();
  char *fgets_result;
  do
  {

  again:
    ;
    fgets_result=fgets(gakk, 49, stdin);
    if(!((signed int)timemachine_mode == 1) || !((signed int)timemachine_recording == 0))
      break;

    timemachine_recording = (_Bool)1;
  }
  while((_Bool)1);
  if(!(fgets_result == ((char *)NULL)))
    ungetc(10, stdin);

  program_ended_with_return = (_Bool)1;
  sem_post(&stop_sem);
  return (void *)0;
}

// main
// file jack_capture.c line 2667
signed int main(signed int argc, char **argv)
{
  char **org_argv = argv;
  argv = &argv[(signed long int)1];
  argc = argc - 1;
  signed int c_argc;
  char **c_argv;
  c_argv=read_config(&c_argc, 500);
  append_argv(c_argv, argv, c_argc, argc, 500);
  init_arguments(c_argc + argc, c_argv);
  signed int return_value_init_osc$1;
  return_value_init_osc$1=init_osc(osc_port);
  if(!(return_value_init_osc$1 == 0))
    osc_port = -1;

  init_various();
  wait_until_recording_finished();
  stop_recording_and_cleanup();
  if((signed int)program_ended_with_return == 1 && (signed int)timemachine_mode == 1)
  {
    execv(org_argv[(signed long int)0], (char * const *)org_argv);
    print_message("Error: exec returned.\n");
    exit(127);
  }

  return 0;
}

// move_cursor_to_top
// file jack_capture.c line 587
static void move_cursor_to_top(void)
{
  printf("%c[%dA", 0x1b, use_vu != (_Bool)0 && show_bufferusage != (_Bool)0 ? num_channels + 1 : (use_vu != (_Bool)0 ? num_channels : (show_bufferusage != (_Bool)0 ? 1 : 0)));
  printf("%c[0m", 0x1b);
  fflush(stdout);
}

// mp3_write
// file jack_capture.c line 1362
static signed int mp3_write(void *das_data, unsigned long int frames, _Bool do_flush)
{
  signed int size;
  if(!(do_flush == (_Bool)0))
    size=lame_encode_flush(lame, mp3buf, mp3bufsize);

  else
  {
    float *data1 = (float *)das_data;
    float *data2 = &data1[(signed long int)frames];
    size=lame_encode_buffer_float(lame, data1, data2, (const signed int)frames, mp3buf, mp3bufsize);
  }
  if(size >= 1)
    fwrite((const void *)mp3buf, (unsigned long int)size, (unsigned long int)1, mp3file);

  return 1;
}

// msleep
// file jack_capture.c line 547
static void msleep(signed int n)
{
  usleep((unsigned int)(n * 1000));
}

// my_calloc
// file jack_capture.c line 239
static void * my_calloc(unsigned long int size1, unsigned long int size2)
{
  unsigned long int size = size1 * size2;
  void *ret;
  ret=malloc(size);
  if(ret == NULL)
  {
    fprintf(stderr, "\nOut of memory. Try a smaller buffer.\n");
    return (void *)0;
  }

  else
  {
    memset(ret, 0, size);
    return ret;
  }
}

// my_malloc
// file vringbuffer.c line 100
static void * my_malloc(unsigned long int size1, unsigned long int size2)
{
  unsigned long int size = size1 * size2;
  void *ret;
  ret=malloc(size);
  if(ret == NULL)
  {
    fprintf(stderr, "\nOut of memory. Try a smaller buffer.\n");
    return (void *)0;
  }

  else
  {
    signed long int pagesize;
    pagesize=sysconf(30);
    char *cret = (char *)ret;
    unsigned long int i = (unsigned long int)0;
    i = (unsigned long int)0;
    for( ; !(i >= size); i = i + (unsigned long int)pagesize)
      cret[(signed long int)i] = (char)0;
    return ret;
  }
}

// new_jack_client
// file jack_capture.c line 2046
static struct _jack_client * new_jack_client(char *name)
{
  enum JackStatus status;
  struct _jack_client *new_jack_client$$1$$client;
  new_jack_client$$1$$client=jack_client_open(name, (enum JackOptions)JackNoStartServer, &status, (void *)0);
  if(new_jack_client$$1$$client == ((struct _jack_client *)NULL))
  {
    print_message("jack_client_open() failed, status = 0x%2.0x\n", status);
    exit(1);
  }

  return new_jack_client$$1$$client;
}

// open_mp3file
// file jack_capture.c line 1068
static signed int open_mp3file(void)
{
  buffer_interleaved = (_Bool)0;
  mp3bufsize = buffer_size_in_bytes * 10 * num_channels;
  if(!(mp3bufsize >= 4))
    mp3bufsize = 4096 * 4;

  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)mp3bufsize);
  mp3buf = (unsigned char *)return_value_malloc$1;
  lame=lame_init();
  if(lame == ((struct lame_global_struct *)NULL))
  {
    print_message("lame_init failed.\n");
    return 0;
  }

  else
  {
    lame_set_num_channels(lame, num_channels);
    lame_set_in_samplerate(lame, (signed int)jack_samplerate);
    lame_set_out_samplerate(lame, (signed int)jack_samplerate);
    lame_set_quality(lame, das_lame_quality);
    if(!(das_lame_bitrate == -1))
    {
      lame_set_brate(lame, das_lame_bitrate);
      signed int return_value_lame_get_brate$2;
      return_value_lame_get_brate$2=lame_get_brate(lame);
      lame_set_VBR_min_bitrate_kbps(lame, return_value_lame_get_brate$2);
    }

    signed int ret;
    ret=lame_init_params(lame);
    if(!(ret >= 0))
    {
      print_message("Illegal parameters for lame. (%d)\n", ret);
      return 0;
    }

    else
    {
      signed int return_value_lame_get_num_channels$3;
      return_value_lame_get_num_channels$3=lame_get_num_channels(lame);
      if(!(return_value_lame_get_num_channels$3 == num_channels))
      {
        print_message("Error. lame does not support %d channel mp3 files.\n", num_channels);
        return 0;
      }

      else
      {
        mp3file=fopen(filename, "w");
        if(mp3file == ((struct _IO_FILE *)NULL))
        {
          signed int *return_value___errno_location$4;
          return_value___errno_location$4=__errno_location();
          char *return_value_strerror$5;
          return_value_strerror$5=strerror(*return_value___errno_location$4);
          print_message("Can not open file \"%s\" for output (%s)\n", filename, return_value_strerror$5);
          return 0;
        }

        hook_file_opened(filename);
        return 1;
      }
    }
  }
}

// open_soundfile
// file jack_capture.c line 1124
static signed int open_soundfile(void)
{
  signed int subformat;
  struct SF_INFO sf_info;
  memset((void *)&sf_info, 0, sizeof(struct SF_INFO) /*32ul*/ );
  signed int return_value_open_mp3file$4;
  signed int return_value_strcasecmp$6;
  _Bool tmp_if_expr$8;
  signed int return_value_strcasecmp$7;
  signed int return_value_strcasecmp$5;
  signed int return_value_fileno$10;
  if((signed int)write_to_stdout == 1)
  {
    hook_file_opened("file:///stdout");
    return 1;
  }

  else
  {
    if(filename == ((char *)NULL))
    {
      if(rotateframe >= 1l)
      {
        unsigned long int return_value_strlen$1;
        return_value_strlen$1=strlen(base_filename);
        void *return_value_my_calloc$2;
        return_value_my_calloc$2=my_calloc((unsigned long int)1, return_value_strlen$1 + (unsigned long int)500);
        filename = (char *)return_value_my_calloc$2;
        sprintf(filename, "%s.%0*d.wav", base_filename, leading_zeros + 1, 0);
      }

      else
      {
        char *return_value___strdup$3;
        return_value___strdup$3=__strdup(base_filename);
        filename = return_value___strdup$3;
      }
    }

    if((signed int)write_to_mp3 == 1)
    {
      return_value_open_mp3file$4=open_mp3file();
      return return_value_open_mp3file$4;
    }

    else
    {
      sf_info.samplerate = (signed int)jack_samplerate;
      sf_info.channels = num_channels;
      signed int format;
      format=getformat(soundfile_format);
      if(format == -1 && num_channels >= 3)
      {
        fprintf(stderr, "Warning, the format \"%s\" is not supported. Using %s instead.\n", soundfile_format_multi, soundfile_format);
        sf_info.format = 1245184;
      }

      else
        if(format == -1)
        {
          fprintf(stderr, "Warning, the format \"%s\" is not supported. Using %s instead.\n", soundfile_format_one_or_two, soundfile_format);
          sf_info.format = 65536;
        }

        else
          sf_info.format = format;
      is_using_wav = (_Bool)(sf_info.format == 65536 ? 1 : 0);
      switch(bitdepth)
      {
        case 8:
        {
          subformat = 5;
          break;
        }
        case 16:
        {
          subformat = 2;
          break;
        }
        case 24:
        {
          subformat = 3;
          break;
        }
        case 32:
        {
          subformat = 4;
          break;
        }
        default:
        {
          return_value_strcasecmp$6=strcasecmp("flac", soundfile_format);
          if(return_value_strcasecmp$6 == 0)
            tmp_if_expr$8 = (_Bool)1;

          else
          {
            return_value_strcasecmp$7=strcasecmp("sds", soundfile_format);
            tmp_if_expr$8 = !(return_value_strcasecmp$7 != 0) ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$8)
          {
            bitdepth = 24;
            subformat = 3;
          }

          else
          {
            return_value_strcasecmp$5=strcasecmp("ogg", soundfile_format);
            if(return_value_strcasecmp$5 == 0)
              subformat = 96;

            else
            {
              bitdepth = 32;
              subformat = 6;
            }
          }
        }
      }
      bytes_per_frame = bitdepth / 8;
      sf_info.format = sf_info.format | subformat;
      signed int return_value_sf_format_check$9;
      return_value_sf_format_check$9=sf_format_check(&sf_info);
      if(return_value_sf_format_check$9 == 0)
      {
        fprintf(stderr, "\nFileformat not supported by libsndfile. Try other options.\n");
        return 0;
      }

      else
      {
        if((signed int)write_to_stdout == 1)
        {
          return_value_fileno$10=fileno(stdout);
          soundfile=sf_open_fd(return_value_fileno$10, 32, &sf_info, 0);
        }

        else
          soundfile=sf_open(filename, 32, &sf_info);
        if(soundfile == ((struct SNDFILE_tag *)NULL))
        {
          const char *return_value_sf_strerror$11;
          return_value_sf_strerror$11=sf_strerror((struct SNDFILE_tag *)(void *)0);
          fprintf(stderr, "\nCan not open sndfile \"%s\" for output (%s)\n", filename, return_value_sf_strerror$11);
          return 0;
        }

        hook_file_opened(filename);
        return 1;
      }
    }
  }
}

// osc_stop
// file jack_capture.c line 1053
void osc_stop()
{
  sem_post(&stop_sem);
}

// osc_tm_start
// file jack_capture.c line 1054
void osc_tm_start()
{
  timemachine_recording = (_Bool)1;
}

// osc_tm_stop
// file jack_capture.c line 1055
void osc_tm_stop()
{
  program_ended_with_return = (_Bool)1;
  osc_stop();
}

// oscb_error
// file osc.c line 73
static void oscb_error(signed int num, const char *m, const char *path)
{
  fprintf(stderr, "liblo server error %d in path %s: %s\n", num, path, m);
}

// oscb_frotate
// file osc.c line 64
signed int oscb_frotate(const char *path, const char *types, union anonymous$4 **argv, signed int argc, void *msg, void *user_data)
{
  if((signed int)verbose == 1)
    fprintf(stderr, "OSC: %s\n", path);

  queued_file_rotate = (_Bool)1;
  return 0;
}

// oscb_stop
// file osc.c line 58
signed int oscb_stop(const char *path, const char *types, union anonymous$4 **argv, signed int argc, void *msg, void *user_data)
{
  if((signed int)verbose == 1)
    fprintf(stderr, "OSC: %s\n", path);

  osc_stop();
  return 0;
}

// oscb_tm_start
// file osc.c line 46
signed int oscb_tm_start(const char *path, const char *types, union anonymous$4 **argv, signed int argc, void *msg, void *user_data)
{
  if((signed int)verbose == 1)
    fprintf(stderr, "OSC: %s <- s:%s\n", path, &argv[(signed long int)0]->s);

  osc_tm_start();
  return 0;
}

// oscb_tm_stop
// file osc.c line 52
signed int oscb_tm_stop(const char *path, const char *types, union anonymous$4 **argv, signed int argc, void *msg, void *user_data)
{
  if((signed int)verbose == 1)
    fprintf(stderr, "OSC: %s <- s:%s\n", path, &argv[(signed long int)0]->s);

  osc_tm_stop();
  return 0;
}

// portnames_add
// file jack_capture.c line 448
static void portnames_add(char *name)
{
  const char **new_outportnames;
  signed int add_ch;
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(name);
  if((signed int)name[-1l + (signed long int)return_value_strlen$4] == 42)
  {
    char *pattern;
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(name);
    pattern = return_value___strdup$1;
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(name);
    pattern[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    new_outportnames=jack_get_ports(client, pattern, "", (unsigned long int)0);
    add_ch=findnumports(new_outportnames);
    free((void *)pattern);
  }

  else
  {
    void *return_value_my_calloc$3;
    return_value_my_calloc$3=my_calloc((unsigned long int)1, sizeof(char *) /*8ul*/ );
    new_outportnames = (const char **)return_value_my_calloc$3;
    new_outportnames[(signed long int)0] = name;
    add_ch = 1;
  }
  if(add_ch >= 1)
  {
    signed int ch;
    void *return_value_realloc$5;
    return_value_realloc$5=realloc((void *)cportnames, (unsigned long int)(num_cportnames + add_ch) * sizeof(char *) /*8ul*/ );
    cportnames = (const char **)return_value_realloc$5;
    ch = 0;
    for( ; !(ch >= add_ch); ch = ch + 1)
    {
      cportnames[(signed long int)num_cportnames] = new_outportnames[(signed long int)ch];
      num_cportnames = num_cportnames + 1;
    }
  }

  else
  {
    fprintf(stderr, "\nWarning, no port(s) with name \"%s\".\n", name);
    if(cportnames == ((const char **)NULL))
    {
      if((signed int)silent == 0)
        fprintf(stderr, "This could lead to using default ports instead.\n");

    }

  }
}

// portnames_add_defaults
// file jack_capture.c line 397
static void portnames_add_defaults(void)
{
  signed int tmp_if_expr$4;
  signed int return_value_findnumports$3;
  if(cportnames == ((const char **)NULL))
  {
    const char **portnames;
    portnames=jack_get_ports(client, (const char *)(void *)0, (const char *)(void *)0, (unsigned long int)(4 | 1));
    signed int num_ports;
    num_ports=findnumports(portnames);
    if(num_ports == 0)
    {
      fprintf(stderr, "No physical output ports found in your jack setup. Exiting.\n");
      exit(0);
    }

    void *return_value_my_calloc$1;
    return_value_my_calloc$1=my_calloc(sizeof(char *) /*8ul*/ , (unsigned long int)(num_ports + 1));
    cportnames = (const char **)return_value_my_calloc$1;
    signed int i = 0;
    for( ; !(i >= num_ports); i = i + 1)
      cportnames[(signed long int)i] = portnames[(signed long int)i];
    jack_free((void *)portnames);
    signed int return_value_findnumports$2;
    return_value_findnumports$2=findnumports(cportnames);
    if(!(return_value_findnumports$2 >= 2))
      tmp_if_expr$4 = 2;

    else
    {
      return_value_findnumports$3=findnumports(cportnames);
      tmp_if_expr$4 = return_value_findnumports$3;
    }
    num_cportnames = tmp_if_expr$4;
    if(num_channels == -1)
    {
      signed int return_value_strcasecmp$5;
      return_value_strcasecmp$5=strcasecmp("sds", soundfile_format);
      if(return_value_strcasecmp$5 == 0)
        num_channels = 1;

      else
        num_channels = 2;
    }

  }

  else
    if(num_channels == -1)
      num_channels = num_cportnames;

  if(!(num_channels >= 1))
  {
    fprintf(stderr, "No point recording 0 channels. Exiting.\n");
    exit(0);
  }

  void *return_value_my_calloc$6;
  return_value_my_calloc$6=my_calloc(sizeof(float) /*4ul*/ , (unsigned long int)num_channels);
  vu_vals = (float *)return_value_my_calloc$6;
  void *return_value_my_calloc$7;
  return_value_my_calloc$7=my_calloc(sizeof(signed int) /*4ul*/ , (unsigned long int)num_channels);
  vu_times = (signed int *)return_value_my_calloc$7;
  void *return_value_my_calloc$8;
  return_value_my_calloc$8=my_calloc(sizeof(signed int) /*4ul*/ , (unsigned long int)num_channels);
  vu_peaks = (signed int *)return_value_my_calloc$8;
  void *return_value_my_calloc$9;
  return_value_my_calloc$9=my_calloc(sizeof(float) /*4ul*/ , (unsigned long int)num_channels);
  vu_peakvals = (float *)return_value_my_calloc$9;
  buffer_size_in_bytes = (signed int)(((unsigned long int)sizeof(struct buffer_t) /*8ul*/  + (unsigned long int)(block_size * num_channels) * sizeof(float) /*4ul*/  + sizeof(double) /*8ul*/ ) - (unsigned long int)1 & -sizeof(double) /*8ul*/ );
  verbose_print("buf_size_in_bytes: %d\n", buffer_size_in_bytes);
}

// portnames_get_connections
// file jack_capture.c line 485
static const char ** portnames_get_connections(signed int ch, _Bool *using_calloc)
{
  if(ch >= num_cportnames)
    return (const char **)(void *)0;

  else
  {
    struct _jack_port *port;
    port=jack_port_by_name(client, cportnames[(signed long int)ch]);
    const char **ret;
    if(port == ((struct _jack_port *)NULL))
    {
      print_message("Error, port with name \"%s\" not found.\n", cportnames[(signed long int)ch]);
      return (const char **)(void *)0;
    }

    signed int return_value_jack_port_flags$2;
    return_value_jack_port_flags$2=jack_port_flags(port);
    if(!((1 & return_value_jack_port_flags$2) == 0))
    {
      ret=jack_port_get_all_connections(client, port);
      *using_calloc = (_Bool)0;
    }

    else
    {
      void *return_value_my_calloc$1;
      return_value_my_calloc$1=my_calloc((unsigned long int)2, sizeof(char *) /*8ul*/ );
      ret = (const char **)return_value_my_calloc$1;
      ret[(signed long int)0] = cportnames[(signed long int)ch];
      *using_calloc = (_Bool)1;
    }
    return ret;
  }
}

// print_all_formats
// file setformat.c line 35
void print_all_formats(void)
{
  signed int return_value_setformat_base$1;
  return_value_setformat_base$1=setformat_base("WAV");
  if(!(return_value_setformat_base$1 == -1))
    printf("wav ");

  signed int return_value_setformat_base$2;
  return_value_setformat_base$2=setformat_base("AIFF");
  if(!(return_value_setformat_base$2 == -1))
    printf("aiff ");

  signed int return_value_setformat_base$3;
  return_value_setformat_base$3=setformat_base("AU");
  if(!(return_value_setformat_base$3 == -1))
    printf("au ");

  signed int return_value_setformat_base$4;
  return_value_setformat_base$4=setformat_base("RAW");
  if(!(return_value_setformat_base$4 == -1))
    printf("raw ");

  signed int return_value_setformat_base$5;
  return_value_setformat_base$5=setformat_base("PAF");
  if(!(return_value_setformat_base$5 == -1))
    printf("paf ");

  signed int return_value_setformat_base$6;
  return_value_setformat_base$6=setformat_base("SVX");
  if(!(return_value_setformat_base$6 == -1))
    printf("svx ");

  signed int return_value_setformat_base$7;
  return_value_setformat_base$7=setformat_base("NIST");
  if(!(return_value_setformat_base$7 == -1))
    printf("nist ");

  signed int return_value_setformat_base$8;
  return_value_setformat_base$8=setformat_base("VOC");
  if(!(return_value_setformat_base$8 == -1))
    printf("voc ");

  signed int return_value_setformat_base$9;
  return_value_setformat_base$9=setformat_base("IRCAM");
  if(!(return_value_setformat_base$9 == -1))
    printf("ircam ");

  signed int return_value_setformat_base$10;
  return_value_setformat_base$10=setformat_base("W64");
  if(!(return_value_setformat_base$10 == -1))
    printf("w64 ");

  signed int return_value_setformat_base$11;
  return_value_setformat_base$11=setformat_base("MAT4");
  if(!(return_value_setformat_base$11 == -1))
    printf("mat4 ");

  signed int return_value_setformat_base$12;
  return_value_setformat_base$12=setformat_base("MAT5");
  if(!(return_value_setformat_base$12 == -1))
    printf("mat5 ");

  signed int return_value_setformat_base$13;
  return_value_setformat_base$13=setformat_base("PVF");
  if(!(return_value_setformat_base$13 == -1))
    printf("pvf ");

  signed int return_value_setformat_base$14;
  return_value_setformat_base$14=setformat_base("XI");
  if(!(return_value_setformat_base$14 == -1))
    printf("xi ");

  signed int return_value_setformat_base$15;
  return_value_setformat_base$15=setformat_base("HTK");
  if(!(return_value_setformat_base$15 == -1))
    printf("htk ");

  signed int return_value_setformat_base$16;
  return_value_setformat_base$16=setformat_base("SDS");
  if(!(return_value_setformat_base$16 == -1))
    printf("sds ");

  signed int return_value_setformat_base$17;
  return_value_setformat_base$17=setformat_base("AVR");
  if(!(return_value_setformat_base$17 == -1))
    printf("avr ");

  signed int return_value_setformat_base$18;
  return_value_setformat_base$18=setformat_base("WAVEX");
  if(!(return_value_setformat_base$18 == -1))
    printf("wavex ");

  signed int return_value_setformat_base$19;
  return_value_setformat_base$19=setformat_base("SD2");
  if(!(return_value_setformat_base$19 == -1))
    printf("sd2 ");

  signed int return_value_setformat_base$20;
  return_value_setformat_base$20=setformat_base("FLAC");
  if(!(return_value_setformat_base$20 == -1))
    printf("flac ");

  signed int return_value_setformat_base$21;
  return_value_setformat_base$21=setformat_base("CAF");
  if(!(return_value_setformat_base$21 == -1))
    printf("caf ");

  signed int return_value_setformat_base$22;
  return_value_setformat_base$22=setformat_base("WVE");
  if(!(return_value_setformat_base$22 == -1))
    printf("wve ");

  signed int return_value_setformat_base$23;
  return_value_setformat_base$23=setformat_base("OGG");
  if(!(return_value_setformat_base$23 == -1))
    printf("ogg ");

  signed int return_value_setformat_base$24;
  return_value_setformat_base$24=setformat_base("MPC2K");
  if(!(return_value_setformat_base$24 == -1))
    printf("mpc2k ");

  signed int return_value_setformat_base$25;
  return_value_setformat_base$25=setformat_base("RF64");
  if(!(return_value_setformat_base$25 == -1))
    printf("rf64 ");

  signed int return_value_setformat_base$26;
  return_value_setformat_base$26=setformat_base("MP3");
  if(!(return_value_setformat_base$26 == -1))
    printf("mp3 ");

  signed int return_value_setformat_base$27;
  return_value_setformat_base$27=setformat_base("MP2");
  if(!(return_value_setformat_base$27 == -1))
    printf("mp2 ");

  signed int return_value_setformat_base$28;
  return_value_setformat_base$28=setformat_base("SPEEX");
  if(!(return_value_setformat_base$28 == -1))
    printf("speex ");

  signed int return_value_setformat_base$29;
  return_value_setformat_base$29=setformat_base("WMA");
  if(!(return_value_setformat_base$29 == -1))
    printf("wma ");

  signed int return_value_setformat_base$30;
  return_value_setformat_base$30=setformat_base("AAC");
  if(!(return_value_setformat_base$30 == -1))
    printf("aac ");

  signed int return_value_setformat_base$31;
  return_value_setformat_base$31=setformat_base("VQF");
  if(!(return_value_setformat_base$31 == -1))
    printf("vqf ");

  signed int return_value_setformat_base$32;
  return_value_setformat_base$32=setformat_base("RA");
  if(!(return_value_setformat_base$32 == -1))
    printf("ra ");

  signed int return_value_setformat_base$33;
  return_value_setformat_base$33=setformat_base("ALAC");
  if(!(return_value_setformat_base$33 == -1))
    printf("alac ");

  signed int return_value_setformat_base$34;
  return_value_setformat_base$34=setformat_base("AIFC");
  if(!(return_value_setformat_base$34 == -1))
    printf("aifc ");

  printf("\n");
}

// print_console
// file jack_capture.c line 605
static void print_console(_Bool move_cursor_to_top_doit, _Bool force_update)
{
  signed int ch;
  char vol[115l];
  vol[(signed long int)2] = (char)58;
  vol[(signed long int)3] = (char)124;
  vol[(signed long int)(4 + 65 + 1)] = (char)0;
  float return_value_log10f$1;
  signed int return_value_iec_scale$2;
  signed int tmp_post$3;
  _Bool tmp_if_expr$4;
  float return_value_frames_to_seconds$8;
  if((signed int)force_update == 0)
  {
    if(!IEEE_FLOAT_EQUAL(*vu_vals, -1.000000f))
      goto __CPROVER_DUMP_L1;

  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!(move_cursor_to_top_doit == (_Bool)0))
      move_cursor_to_top();

    if(!(use_vu == (_Bool)0))
    {
      printf("%c[36m", 0x1b);
      ch = 0;
      for( ; !(ch >= num_channels); ch = ch + 1)
      {
        signed int i;
        float val = vu_vals[(signed long int)ch];
        signed int pos;
        vu_vals[(signed long int)ch] = -1.0f;
        if(!(vu_dB == 0))
        {
          return_value_log10f$1=log10f(val * vu_bias);
          return_value_iec_scale$2=iec_scale(20.0f * return_value_log10f$1);
          pos = (return_value_iec_scale$2 * 65) / 200;
        }

        else
          pos = (signed int)(val * (float)65);
        if(!(vu_peaks[(signed long int)ch] >= pos))
        {
          vu_peaks[(signed long int)ch] = pos;
          vu_peakvals[(signed long int)ch] = val;
          vu_times[(signed long int)ch] = 0;
        }

        else
        {
          tmp_post$3 = vu_times[(signed long int)ch];
          vu_times[(signed long int)ch] = vu_times[(signed long int)ch] + 1;
          if(tmp_post$3 >= 41)
          {
            vu_peaks[(signed long int)ch] = pos;
            vu_peakvals[(signed long int)ch] = val;
          }

        }
        if(ch >= 10)
        {
          vol[(signed long int)0] = (char)(48 + ch / 10);
          vol[(signed long int)1] = (char)((48 + ch) - 10 * (ch / 10));
        }

        else
        {
          vol[(signed long int)0] = (char)48;
          vol[(signed long int)1] = (char)(48 + ch);
        }
        if((signed int)timemachine_mode == 1 && (signed int)timemachine_recording == 0)
        {
          i = 0;
          for( ; val > 0.0f && !(i >= pos); i = i + 1)
            vol[(signed long int)(4 + i)] = vu_not_recording[(signed long int)i];
          vol[(signed long int)(4 + pos)] = (char)0;
          if(vu_peakvals[(signed long int)ch] >= 1.0f)
            printf("%c[31m", 0x1b);

          printf("%s", (const void *)vol);
          for( ; !(i >= 65); i = i + 1)
            vol[(signed long int)(4 + i)] = vu_not_recording[(signed long int)i];
          printf("%c[33m", 0x1b);
          vol[(signed long int)(i + 4)] = (char)0;
          printf("%s", vol + (signed long int)4 + (signed long int)pos);
          printf("%c[36m", 0x1b);
          printf("|\n");
        }

        else
        {
          i = 0;
          for( ; !(i >= 65); i = i + 1)
          {
            if(vu_peaks[(signed long int)ch] == i)
              tmp_if_expr$4 = vu_peakvals[(signed long int)ch] > 0.0f ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$4 = (_Bool)0;
            if(tmp_if_expr$4)
              vol[(signed long int)(4 + i)] = (char)42;

            else
              if(val > 0.0f && pos >= i)
                vol[(signed long int)(4 + i)] = (char)45;

              else
                vol[(signed long int)(4 + i)] = (char)32;
          }
          if(vu_peakvals[(signed long int)ch] >= 1.0f)
          {
            vol[(signed long int)(4 + 65)] = (char)33;
            printf("%c[31m", 0x1b);
            puts(vol);
            printf("%c[36m", 0x1b);
          }

          else
          {
            vol[(signed long int)(4 + 65)] = (char)124;
            puts(vol);
          }
        }
      }
    }

    if(!(show_bufferusage == (_Bool)0))
    {
      signed int num_bufleft;
      num_bufleft=vringbuffer_writing_size(vringbuffer);
      signed int num_buffers;
      signed int return_value_vringbuffer_reading_size$5;
      return_value_vringbuffer_reading_size$5=vringbuffer_reading_size(vringbuffer);
      signed int return_value_vringbuffer_writing_size$6;
      return_value_vringbuffer_writing_size$6=vringbuffer_writing_size(vringbuffer);
      num_buffers = return_value_vringbuffer_reading_size$5 + return_value_vringbuffer_writing_size$6;
      float buflen;
      buflen=buffers_to_seconds(num_buffers);
      float bufleft;
      bufleft=buffers_to_seconds(num_bufleft);
      signed int recorded_seconds;
      float return_value_frames_to_seconds$7;
      return_value_frames_to_seconds$7=frames_to_seconds((signed int)num_frames_recorded);
      recorded_seconds = (signed int)return_value_frames_to_seconds$7;
      if((signed int)timemachine_mode == 1)
      {
        return_value_frames_to_seconds$8=frames_to_seconds((signed int)num_frames_written_to_disk);
        recorded_seconds = (signed int)return_value_frames_to_seconds$8;
      }

      signed int recorded_minutes = recorded_seconds / 60;
      char buffer_string[1000l];
      sprintf(buffer_string, "%.2fs./%.2fs", bufleft, buflen);
      signed int len_buffer;
      unsigned long int return_value_strlen$9;
      return_value_strlen$9=strlen(buffer_string);
      len_buffer = (signed int)return_value_strlen$9;
      signed int print_console$$1$$2$$1$$i = len_buffer;
      for( ; !(print_console$$1$$2$$1$$i >= 14); print_console$$1$$2$$1$$i = print_console$$1$$2$$1$$i + 1)
        buffer_string[(signed long int)print_console$$1$$2$$1$$i] = (char)32;
      buffer_string[(signed long int)print_console$$1$$2$$1$$i] = (char)0;
      printf("%c[32mBuffer: %s  Time: %d.%s%dm.  %sDHP: [%c]  Overruns: %d  Xruns: %d%c[0m", 0x1b, (const void *)buffer_string, recorded_minutes, recorded_seconds % 60 < 10 ? "0" : "", recorded_seconds % 60, recorded_minutes < 10 ? " " : "", disk_thread_has_high_priority != (_Bool)0 ? 120 : 32, total_overruns, total_xruns, 0x1b);
      print_ln();
    }

    else
    {
      printf("%c[0m", 0x1b);
      fprintf(stderr, "%c[0m", 0x1b);
    }
    fflush(stdout);
    fflush(stderr);
  }
}

// print_console_top
// file jack_capture.c line 556
static void print_console_top(void)
{
  if(!(use_vu == (_Bool)0))
  {
    signed int lokke = 0;
    char c = (char)34;
    printf("%c[36m", 0x1b);
    printf("   |");
    lokke = 0;
    for( ; !(lokke >= 65); lokke = lokke + 1)
      putchar((signed int)c);
    printf("|");
    print_ln();
    printf("%c[0m", 0x1b);
    fflush(stdout);
  }

}

// print_ln
// file jack_capture.c line 551
static void print_ln(void)
{
  putchar(10);
}

// print_message
// file jack_capture.c line 827
static void print_message(const char *fmt, ...)
{
  if(!((signed int)absolutely_silent == 1))
  {
    if(helper_thread_running == 0 || (signed int)write_to_stdout == 1)
    {
      void **argp = (void **)&fmt;
      fprintf(stderr, "%c[31m>>> ", 0x1b);
      vfprintf(stderr, fmt, argp);
      fprintf(stderr, "%c[0m", 0x1b);
      fflush(stderr);
      argp = ((void **)NULL);
    }

    else
    {
      pthread_mutex_lock(&print_message_mutex);
      while(!((signed int)message_string[0l] == 0))
        msleep(2);
      void **print_message$$1$$2$$1$$argp = (void **)&fmt;
      vsprintf(message_string, fmt, print_message$$1$$2$$1$$argp);
      print_message$$1$$2$$1$$argp = ((void **)NULL);
      while(!((signed int)message_string[0l] == 0))
        msleep(2);
      pthread_mutex_unlock(&print_message_mutex);
    }
  }

}

// process
// file jack_capture.c line 1646
static signed int process(unsigned int nframes, void *arg)
{
  enum anonymous$12 state = (enum anonymous$12)0;
  if((signed int)use_jack_transport == 1)
  {
    state=jack_transport_query(client, (struct anonymous *)(void *)0);
    if((signed int)state == JackTransportRolling)
      jack_transport_started = (_Bool)1;

    if(!((signed int)jack_transport_started == 0))
      goto __CPROVER_DUMP_L2;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    if((signed int)use_jack_freewheel == 1)
    {
      if(freewheel_mode >= 1)
        jack_freewheel_started = (_Bool)1;

      if(!((signed int)jack_freewheel_started == 0))
        goto __CPROVER_DUMP_L4;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      if(is_initialized == 0)
        return 0;

      else
        if(is_running == 0)
          return 0;

        else
          if(process_state == 3)
            return 0;

          else
          {
            if(store_sync == 0)
            {
              clock_gettime(0, &rtime);
              store_sync = 1;
            }

            if((signed int)fixed_duration == 1)
            {
              signed int num_frames = (signed int)((signed long int)nframes < num_frames_to_record - num_frames_recorded ? (signed long int)nframes : num_frames_to_record - num_frames_recorded);
              if(num_frames >= 1)
                process_fill_buffers(num_frames);

              num_frames_recorded = num_frames_recorded + (signed long int)num_frames;
              if(num_frames_recorded == num_frames_to_record)
              {
                send_buffer_to_disk_thread(current_buffer);
                sem_post(&stop_sem);
                process_state = 3;
              }

            }

            else
            {
              process_fill_buffers((signed int)nframes);
              num_frames_recorded = num_frames_recorded + (signed long int)nframes;
              if(freewheel_mode == 0 && (signed int)use_jack_freewheel == 1 || (signed int)use_jack_transport == 1 && (signed int)state == JackTransportStopped)
              {
                send_buffer_to_disk_thread(current_buffer);
                sem_post(&stop_sem);
                process_state = 3;
              }

            }
            vringbuffer_trigger_autoincrease_callback(vringbuffer);
            return 0;
          }
    }
  }
}

// process_fill_buffer
// file jack_capture.c line 1556
static void process_fill_buffer(float **in, struct buffer_t *buffer, signed int i, signed int end)
{
  float *data = buffer->data;
  signed int pos = buffer->pos * num_channels;
  signed int ch;
  signed int tmp_post$1;
  signed int tmp_post$2;
  if((signed int)buffer_interleaved == 1)
    for( ; !(i >= end); i = i + 1)
    {
      ch = 0;
      for( ; !(ch >= num_channels); ch = ch + 1)
      {
        float process_fill_buffer$$1$$1$$1$$1$$1$$1$$val = in[(signed long int)ch][(signed long int)i];
        tmp_post$1 = pos;
        pos = pos + 1;
        data[(signed long int)tmp_post$1] = process_fill_buffer$$1$$1$$1$$1$$1$$1$$val;
        process_fill_buffer$$1$$1$$1$$1$$1$$1$$val=fabsf(process_fill_buffer$$1$$1$$1$$1$$1$$1$$val);
        if(process_fill_buffer$$1$$1$$1$$1$$1$$1$$val > vu_vals[(signed long int)ch])
          vu_vals[(signed long int)ch] = process_fill_buffer$$1$$1$$1$$1$$1$$1$$val;

      }
    }

  else
  {
    signed int start_i = i;
    ch = 0;
    for( ; !(ch >= num_channels); ch = ch + 1)
    {
      float *curr_in = in[(signed long int)ch];
      float max_vu = vu_vals[(signed long int)ch];
      i = start_i;
      for( ; !(i >= end); i = i + 1)
      {
        float val = curr_in[(signed long int)i];
        tmp_post$2 = pos;
        pos = pos + 1;
        data[(signed long int)tmp_post$2] = (float)((double)val * 32767.9);
        val=fabsf(val);
        if(val > max_vu)
          max_vu = val;

      }
      vu_vals[(signed long int)ch] = max_vu;
    }
  }
  buffer->pos = pos / num_channels;
}

// process_fill_buffers
// file jack_capture.c line 1606
static void process_fill_buffers(signed int jack_block_size)
{
  const signed long int process_fill_buffers$array_size0 = (signed long int)num_channels;
  float *in[process_fill_buffers$array_size0];
  signed int i = 0;
  signed int ch = 0;
  void *return_value_jack_port_get_buffer$1;
  for( ; !(ch >= num_channels); ch = ch + 1)
  {
    return_value_jack_port_get_buffer$1=jack_port_get_buffer(ports[(signed long int)ch], (unsigned int)jack_block_size);
    in[(signed long int)ch] = (float *)return_value_jack_port_get_buffer$1;
  }
  _Bool return_value_process_new_current_buffer$2;
  signed int tmp_if_expr$3;
  if(current_buffer == ((struct buffer_t *)NULL))
  {
    return_value_process_new_current_buffer$2=process_new_current_buffer(jack_block_size);
    if(!((signed int)return_value_process_new_current_buffer$2 == 0))
      goto __CPROVER_DUMP_L3;

  }

  else
  {

  __CPROVER_DUMP_L3:
    ;
    while(!(i >= jack_block_size))
    {
      signed int size;
      if(!(jack_block_size + -i >= block_size + -current_buffer->pos))
        tmp_if_expr$3 = jack_block_size - i;

      else
        tmp_if_expr$3 = block_size - current_buffer->pos;
      size = tmp_if_expr$3;
      process_fill_buffer(in, current_buffer, i, i + size);
      i = i + size;
      if(current_buffer->pos == block_size)
      {
        send_buffer_to_disk_thread(current_buffer);
        _Bool return_value_process_new_current_buffer$4;
        return_value_process_new_current_buffer$4=process_new_current_buffer(jack_block_size - i);
        if((signed int)return_value_process_new_current_buffer$4 == 0)
          goto __CPROVER_DUMP_L9;

      }

    }
  }

__CPROVER_DUMP_L9:
  ;
}

// process_new_current_buffer
// file jack_capture.c line 1590
static _Bool process_new_current_buffer(signed int frames_left)
{
  signed int return_value_vringbuffer_writing_size$1;
  if((signed int)use_jack_freewheel == 1)
    do
    {
      return_value_vringbuffer_writing_size$1=vringbuffer_writing_size(vringbuffer);
      if(!(return_value_vringbuffer_writing_size$1 == 0))
        break;

      msleep(2);
    }
    while((_Bool)1);

  void *return_value_vringbuffer_get_writing$2;
  return_value_vringbuffer_get_writing$2=vringbuffer_get_writing(vringbuffer);
  current_buffer = (struct buffer_t *)return_value_vringbuffer_get_writing$2;
  if(current_buffer == ((struct buffer_t *)NULL))
  {
    total_overruns = total_overruns + 1;
    unreported_overruns = unreported_overruns + (signed long int)frames_left;
    return (_Bool)0;
  }

  else
  {
    current_buffer->pos = 0;
    return (_Bool)1;
  }
}

// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c)
{
  signed int return_value__IO_putc$1;
  return_value__IO_putc$1=_IO_putc(__c, stdout);
  return return_value__IO_putc$1;
}

// read_config
// file jack_capture.c line 2423
char ** read_config(signed int *argc, signed int max_size)
{
  char **argv;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)max_size, sizeof(char *) /*8ul*/ );
  argv = (char **)return_value_calloc$1;
  *argc = 0;
  char *return_value_getenv$2;
  return_value_getenv$2=getenv("HOME");
  char *return_value_fgets$6;
  _Bool tmp_if_expr$7;
  unsigned long int return_value_strlen$12;
  char *return_value_getenv$11;
  if(return_value_getenv$2 == ((char *)NULL))
    return argv;

  else
  {
    struct _IO_FILE *file;
    char *return_value_getenv$3;
    return_value_getenv$3=getenv("HOME");
    char *return_value_string_concat$4;
    return_value_string_concat$4=string_concat(return_value_getenv$3, "/.jack_capture/config");
    file=fopen(return_value_string_concat$4, "r");
    if(file == ((struct _IO_FILE *)NULL))
      return argv;

    else
    {
      char *readline;
      void *return_value_malloc$5;
      return_value_malloc$5=malloc((unsigned long int)512);
      readline = (char *)return_value_malloc$5;
      do
      {
        return_value_fgets$6=fgets(readline, 510, file);
        if(return_value_fgets$6 == ((char *)NULL))
          break;

        char *line;
        line=strip_whitespace(readline);
        if((signed int)*line == 0)
          tmp_if_expr$7 = (_Bool)1;

        else
          tmp_if_expr$7 = (signed int)line[(signed long int)0] == 35 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr$7)
        {
          if(*argc >= max_size + -3)
          {
            fprintf(stderr, "Too many arguments in config file.\n");
            exit(-2);
          }

          signed int split_pos;
          split_pos=string_charpos(line, (char)61);
          if(!(split_pos == -1))
          {
            char *name;
            char *return_value_substring$8;
            return_value_substring$8=substring(line, 0, split_pos);
            name=strip_whitespace(return_value_substring$8);
            char *value;
            unsigned long int return_value_strlen$9;
            return_value_strlen$9=strlen(line);
            char *return_value_substring$10;
            return_value_substring$10=substring(line, split_pos + 1, (signed int)return_value_strlen$9);
            value=strip_whitespace(return_value_substring$10);
            unsigned long int return_value_strlen$13;
            return_value_strlen$13=strlen(name);
            if(return_value_strlen$13 >= 1ul)
            {
              return_value_strlen$12=strlen(value);
              if(return_value_strlen$12 >= 1ul)
              {
                argv[(signed long int)*argc]=string_concat("--", name);
                *argc = *argc + 1;
                if((signed int)*value == 126)
                {
                  return_value_getenv$11=getenv("HOME");
                  value=string_concat(return_value_getenv$11, &value[(signed long int)1]);
                }

                argv[(signed long int)*argc] = value;
                *argc = *argc + 1;
              }

            }

          }

          else
          {
            argv[(signed long int)*argc]=string_concat("--", line);
            *argc = *argc + 1;
          }
        }

      }
      while((_Bool)1);
      return argv;
    }
  }
}

// receiver_func
// file vringbuffer.c line 289
static void * receiver_func(void *arg)
{
  struct vringbuffer_t *vrb = (struct vringbuffer_t *)arg;
  vrb->receiver_callback(vrb, (_Bool)1, (void *)0);
  sem_post(&vrb->receiver_started);
  void *buffer = (void *)0;
  if((signed int)vrb->please_stop == 0)
  {
    upwaker_sleep(vrb->receiver_trigger);
    signed int return_value_vringbuffer_reading_size$1;
    return_value_vringbuffer_reading_size$1=vringbuffer_reading_size(vrb);
    if(return_value_vringbuffer_reading_size$1 >= 1)
    {
      if(buffer == NULL)
        buffer=vringbuffer_get_reading(vrb);

      enum vringbuffer_receiver_callback_return_t return_value;
      return_value=vrb->receiver_callback(vrb, (_Bool)0, buffer);
      if(!((signed int)return_value == VRB_CALLBACK_DIDNT_USE_BUFFER))
      {
        vringbuffer_return_reading(vrb, buffer);
        buffer = (void *)0;
      }

    }

  }

  return (void *)0;
}

// reconnect_ports_questionmark
// file jack_capture.c line 1844
static signed int reconnect_ports_questionmark(void)
{
  signed int ch = 0;
  signed int tmp_statement_expression$1;
  for( ; !(ch >= num_channels); ch = ch + 1)
  {
    _Bool using_calloc;
    const char **connections1;
    connections1=portnames_get_connections(ch, &using_calloc);
    const char **connections2;
    connections2=jack_port_get_all_connections(client, ports[(signed long int)ch]);
    signed int memb1;
    memb1=findnumports(connections1);
    signed int memb2;
    memb2=findnumports(connections2);
    if(!(memb1 == 0) || !(memb2 == 0))
    {
      if(!(memb1 == memb2))
      {
        free_jack_connections(using_calloc, connections1);
        free_jack_connections((_Bool)0, connections2);
        return 1;
      }

      qsort((void *)connections1, (unsigned long int)memb1, sizeof(char *) /*8ul*/ , compare);
      qsort((void *)connections2, (unsigned long int)memb2, sizeof(char *) /*8ul*/ , compare);
      signed int lokke = 0;
      lokke = 0;
      for( ; !(lokke >= memb1); lokke = lokke + 1)
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp$2;
        return_value___builtin_strcmp$2=__builtin_strcmp(connections1[(signed long int)lokke], connections2[(signed long int)lokke]);
        tmp_statement_expression$1 = return_value___builtin_strcmp$2;
        if(!(tmp_statement_expression$1 == 0))
        {
          free_jack_connections(using_calloc, connections1);
          free_jack_connections((_Bool)0, connections2);
          return 1;
        }

      }
      free_jack_connections(using_calloc, connections1);
      free_jack_connections((_Bool)0, connections2);
    }

  }
  return 0;
}

// rotate_file
// file jack_capture.c line 1257
static signed int rotate_file(unsigned long int frames, signed int reset_totals)
{
  store_sync = 0;
  ssync_offset = (signed int)frames;
  sf_close(soundfile);
  char *filename_new;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(base_filename);
  void *return_value_my_calloc$2;
  return_value_my_calloc$2=my_calloc((unsigned long int)1, return_value_strlen$1 + (unsigned long int)500);
  filename_new = (char *)return_value_my_calloc$2;
  sprintf(filename_new, "%s.%0*d.wav", base_filename, leading_zeros + 1, num_files);
  print_message("Closing %s, and continue writing to %s.\n", filename, filename_new);
  num_files = num_files + 1;
  hook_file_rotated(filename, filename_new, num_files, total_overruns + total_xruns, disk_errors);
  free((void *)filename);
  filename = filename_new;
  disksize = (signed long int)0;
  if(!(reset_totals == 0))
  {
    disk_errors = 0;
    total_overruns = 0;
    total_xruns = 0;
    if(overruns >= 1l)
    {
      print_message("jack_capture failed with a total of %d overruns.\n", total_overruns);
      print_message("   try a bigger buffer than -B %f\n", min_buffer_time);
    }

    if(disk_errors >= 1)
      print_message("jack_capture failed with a total of %d disk errors.\n", disk_errors);

    if(total_xruns >= 1)
      print_message("jack_capture encountered %d jack x-runs.\n", total_xruns);

  }

  signed int return_value_open_soundfile$3;
  return_value_open_soundfile$3=open_soundfile();
  if(return_value_open_soundfile$3 == 0)
    return 0;

  else
    return 1;
}

// seconds_to_blocks
// file jack_capture.c line 310
static signed int seconds_to_blocks(float seconds)
{
  float return_value_ceilf$1;
  return_value_ceilf$1=ceilf((seconds * jack_samplerate) / (float)block_size);
  return (signed int)return_value_ceilf$1;
}

// seconds_to_buffers
// file jack_capture.c line 315
static signed int seconds_to_buffers(float seconds)
{
  signed int return_value_seconds_to_blocks$1;
  return_value_seconds_to_blocks$1=seconds_to_blocks(seconds);
  return return_value_seconds_to_blocks$1;
}

// seconds_to_frames
// file jack_capture.c line 300
static signed long int seconds_to_frames(float seconds)
{
  return (signed long int)((long double)seconds * (long double)jack_samplerate);
}

// send_buffer_to_disk_thread
// file jack_capture.c line 1549
static void send_buffer_to_disk_thread(struct buffer_t *buffer)
{
  buffer->overruns = (signed int)unreported_overruns;
  vringbuffer_return_writing(vringbuffer, (void *)buffer);
  unreported_overruns = (signed long int)0;
}

// set_high_priority
// file jack_capture.c line 248
static _Bool set_high_priority(void)
{
  signed int return_value_setpriority$1;
  static signed int prio = -20;
  for( ; !(prio >= 0); prio = prio + 1)
  {
    return_value_setpriority$1=setpriority(0, (unsigned int)0, prio);
    if(!(return_value_setpriority$1 == -1))
      break;

  }
  static _Bool shown_warning = (_Bool)0;
  if(prio == 0 && (signed int)shown_warning == 0)
  {
    print_message("Warning. Could not set higher priority for a SCHED_FIFO process using setpriority().\n");
    shown_warning = (_Bool)1;
  }

  if(!(prio >= 0))
    return (_Bool)1;

  else
    return (_Bool)0;
}

// setformat_base
// file setformat.c line 1
static signed int setformat_base(char *soundfile_format)
{
  signed int return_value_strcasecmp$1;
  return_value_strcasecmp$1=strcasecmp("WAV", soundfile_format);
  signed int tmp_if_expr$49;
  signed int return_value_strcasecmp$2;
  signed int tmp_if_expr$48;
  signed int return_value_strcasecmp$3;
  signed int tmp_if_expr$47;
  signed int return_value_strcasecmp$4;
  signed int tmp_if_expr$46;
  signed int return_value_strcasecmp$5;
  signed int tmp_if_expr$45;
  signed int return_value_strcasecmp$6;
  signed int tmp_if_expr$44;
  signed int return_value_strcasecmp$7;
  signed int tmp_if_expr$43;
  signed int return_value_strcasecmp$8;
  signed int tmp_if_expr$42;
  signed int return_value_strcasecmp$9;
  signed int tmp_if_expr$41;
  signed int return_value_strcasecmp$10;
  signed int tmp_if_expr$40;
  signed int return_value_strcasecmp$11;
  signed int tmp_if_expr$39;
  signed int return_value_strcasecmp$12;
  signed int tmp_if_expr$38;
  signed int return_value_strcasecmp$13;
  signed int tmp_if_expr$37;
  signed int return_value_strcasecmp$14;
  signed int tmp_if_expr$36;
  signed int return_value_strcasecmp$15;
  signed int tmp_if_expr$35;
  signed int return_value_strcasecmp$16;
  signed int tmp_if_expr$34;
  signed int return_value_strcasecmp$17;
  signed int tmp_if_expr$33;
  signed int return_value_strcasecmp$18;
  signed int tmp_if_expr$32;
  signed int return_value_strcasecmp$19;
  signed int tmp_if_expr$31;
  signed int return_value_strcasecmp$20;
  signed int tmp_if_expr$30;
  signed int return_value_strcasecmp$21;
  signed int tmp_if_expr$29;
  signed int return_value_strcasecmp$22;
  signed int tmp_if_expr$28;
  signed int return_value_strcasecmp$23;
  signed int tmp_if_expr$27;
  signed int return_value_strcasecmp$24;
  signed int tmp_if_expr$26;
  signed int return_value_strcasecmp$25;
  if(return_value_strcasecmp$1 == 0)
    tmp_if_expr$49 = 65536;

  else
  {
    return_value_strcasecmp$2=strcasecmp("AIFF", soundfile_format);
    if(return_value_strcasecmp$2 == 0)
      tmp_if_expr$48 = 131072;

    else
    {
      return_value_strcasecmp$3=strcasecmp("AU", soundfile_format);
      if(return_value_strcasecmp$3 == 0)
        tmp_if_expr$47 = 196608;

      else
      {
        return_value_strcasecmp$4=strcasecmp("RAW", soundfile_format);
        if(return_value_strcasecmp$4 == 0)
          tmp_if_expr$46 = 262144;

        else
        {
          return_value_strcasecmp$5=strcasecmp("PAF", soundfile_format);
          if(return_value_strcasecmp$5 == 0)
            tmp_if_expr$45 = 327680;

          else
          {
            return_value_strcasecmp$6=strcasecmp("SVX", soundfile_format);
            if(return_value_strcasecmp$6 == 0)
              tmp_if_expr$44 = 393216;

            else
            {
              return_value_strcasecmp$7=strcasecmp("NIST", soundfile_format);
              if(return_value_strcasecmp$7 == 0)
                tmp_if_expr$43 = 458752;

              else
              {
                return_value_strcasecmp$8=strcasecmp("VOC", soundfile_format);
                if(return_value_strcasecmp$8 == 0)
                  tmp_if_expr$42 = 524288;

                else
                {
                  return_value_strcasecmp$9=strcasecmp("IRCAM", soundfile_format);
                  if(return_value_strcasecmp$9 == 0)
                    tmp_if_expr$41 = 655360;

                  else
                  {
                    return_value_strcasecmp$10=strcasecmp("W64", soundfile_format);
                    if(return_value_strcasecmp$10 == 0)
                      tmp_if_expr$40 = 720896;

                    else
                    {
                      return_value_strcasecmp$11=strcasecmp("MAT4", soundfile_format);
                      if(return_value_strcasecmp$11 == 0)
                        tmp_if_expr$39 = 786432;

                      else
                      {
                        return_value_strcasecmp$12=strcasecmp("MAT5", soundfile_format);
                        if(return_value_strcasecmp$12 == 0)
                          tmp_if_expr$38 = 851968;

                        else
                        {
                          return_value_strcasecmp$13=strcasecmp("PVF", soundfile_format);
                          if(return_value_strcasecmp$13 == 0)
                            tmp_if_expr$37 = 917504;

                          else
                          {
                            return_value_strcasecmp$14=strcasecmp("XI", soundfile_format);
                            if(return_value_strcasecmp$14 == 0)
                              tmp_if_expr$36 = 983040;

                            else
                            {
                              return_value_strcasecmp$15=strcasecmp("HTK", soundfile_format);
                              if(return_value_strcasecmp$15 == 0)
                                tmp_if_expr$35 = 1048576;

                              else
                              {
                                return_value_strcasecmp$16=strcasecmp("SDS", soundfile_format);
                                if(return_value_strcasecmp$16 == 0)
                                  tmp_if_expr$34 = 1114112;

                                else
                                {
                                  return_value_strcasecmp$17=strcasecmp("AVR", soundfile_format);
                                  if(return_value_strcasecmp$17 == 0)
                                    tmp_if_expr$33 = 1179648;

                                  else
                                  {
                                    return_value_strcasecmp$18=strcasecmp("WAVEX", soundfile_format);
                                    if(return_value_strcasecmp$18 == 0)
                                      tmp_if_expr$32 = 1245184;

                                    else
                                    {
                                      return_value_strcasecmp$19=strcasecmp("SD2", soundfile_format);
                                      if(return_value_strcasecmp$19 == 0)
                                        tmp_if_expr$31 = 1441792;

                                      else
                                      {
                                        return_value_strcasecmp$20=strcasecmp("FLAC", soundfile_format);
                                        if(return_value_strcasecmp$20 == 0)
                                          tmp_if_expr$30 = 1507328;

                                        else
                                        {
                                          return_value_strcasecmp$21=strcasecmp("CAF", soundfile_format);
                                          if(return_value_strcasecmp$21 == 0)
                                            tmp_if_expr$29 = 1572864;

                                          else
                                          {
                                            return_value_strcasecmp$22=strcasecmp("WVE", soundfile_format);
                                            if(return_value_strcasecmp$22 == 0)
                                              tmp_if_expr$28 = 1638400;

                                            else
                                            {
                                              return_value_strcasecmp$23=strcasecmp("OGG", soundfile_format);
                                              if(return_value_strcasecmp$23 == 0)
                                                tmp_if_expr$27 = 2097152;

                                              else
                                              {
                                                return_value_strcasecmp$24=strcasecmp("MPC2K", soundfile_format);
                                                if(return_value_strcasecmp$24 == 0)
                                                  tmp_if_expr$26 = 2162688;

                                                else
                                                {
                                                  return_value_strcasecmp$25=strcasecmp("RF64", soundfile_format);
                                                  tmp_if_expr$26 = !(return_value_strcasecmp$25 != 0) ? 2228224 : -1;
                                                }
                                                tmp_if_expr$27 = tmp_if_expr$26;
                                              }
                                              tmp_if_expr$28 = tmp_if_expr$27;
                                            }
                                            tmp_if_expr$29 = tmp_if_expr$28;
                                          }
                                          tmp_if_expr$30 = tmp_if_expr$29;
                                        }
                                        tmp_if_expr$31 = tmp_if_expr$30;
                                      }
                                      tmp_if_expr$32 = tmp_if_expr$31;
                                    }
                                    tmp_if_expr$33 = tmp_if_expr$32;
                                  }
                                  tmp_if_expr$34 = tmp_if_expr$33;
                                }
                                tmp_if_expr$35 = tmp_if_expr$34;
                              }
                              tmp_if_expr$36 = tmp_if_expr$35;
                            }
                            tmp_if_expr$37 = tmp_if_expr$36;
                          }
                          tmp_if_expr$38 = tmp_if_expr$37;
                        }
                        tmp_if_expr$39 = tmp_if_expr$38;
                      }
                      tmp_if_expr$40 = tmp_if_expr$39;
                    }
                    tmp_if_expr$41 = tmp_if_expr$40;
                  }
                  tmp_if_expr$42 = tmp_if_expr$41;
                }
                tmp_if_expr$43 = tmp_if_expr$42;
              }
              tmp_if_expr$44 = tmp_if_expr$43;
            }
            tmp_if_expr$45 = tmp_if_expr$44;
          }
          tmp_if_expr$46 = tmp_if_expr$45;
        }
        tmp_if_expr$47 = tmp_if_expr$46;
      }
      tmp_if_expr$48 = tmp_if_expr$47;
    }
    tmp_if_expr$49 = tmp_if_expr$48;
  }
  return tmp_if_expr$49;
}

// setup_helper_thread
// file jack_capture.c line 859
void setup_helper_thread(void)
{
  if((signed int)write_to_stdout == 0)
    pthread_create(&helper_thread, (const union pthread_attr_t *)(void *)0, helper_thread_func, (void *)0);

}

// shutdown_osc
// file jack_capture.c line 60
void shutdown_osc(void)
{
  if(!(osc_server == NULL))
  {
    lo_server_thread_stop(osc_server);
    lo_server_thread_free(osc_server);
    if((signed int)verbose == 1)
      fprintf(stderr, "OSC server shut down.\n");

    osc_server = (void *)0;
  }

}

// start_connection_thread
// file jack_capture.c line 1963
static void start_connection_thread(void)
{
  sem_init(&connection_semaphore, 0, (unsigned int)0);
  pthread_create(&connect_thread, (const union pthread_attr_t *)(void *)0, connection_thread, (void *)0);
}

// start_jack
// file jack_capture.c line 2060
static void start_jack(void)
{
  static _Bool I_am_already_called = (_Bool)0;
  if(I_am_already_called == (_Bool)0)
  {
    client=new_jack_client("jack_capture");
    unsigned int return_value_jack_get_sample_rate$1;
    return_value_jack_get_sample_rate$1=jack_get_sample_rate(client);
    jack_samplerate = (float)return_value_jack_get_sample_rate$1;
    unsigned int return_value_jack_get_buffer_size$2;
    return_value_jack_get_buffer_size$2=jack_get_buffer_size(client);
    block_size = (signed int)return_value_jack_get_buffer_size$2;
    I_am_already_called = (_Bool)1;
  }

}

// start_keypress_thread
// file jack_capture.c line 2101
static void start_keypress_thread(void)
{
  pthread_create(&keypress_thread, (const union pthread_attr_t *)(void *)0, keypress_func, (void *)0);
}

// start_meterbridge
// file jack_capture.c line 1736
static void start_meterbridge(signed int num_channels)
{
  void *return_value_my_calloc$1;
  return_value_my_calloc$1=my_calloc((unsigned long int)1, (unsigned long int)5000);
  meterbridge_jackname = (char *)return_value_my_calloc$1;
  char *return_value_jack_get_client_name$2;
  return_value_jack_get_client_name$2=jack_get_client_name(client);
  sprintf(meterbridge_jackname, "%s_meterbridge", return_value_jack_get_client_name$2);
  meterbridge_pid=fork();
  if(meterbridge_pid == 0)
  {
    const signed long int start_meterbridge$array_size0 = (signed long int)(100 + num_channels);
    char *argv[start_meterbridge$array_size0];
    argv[(signed long int)0] = "meterbridge";
    argv[(signed long int)1] = "-t";
    argv[(signed long int)2] = meterbridge_type;
    argv[(signed long int)3] = "-n";
    argv[(signed long int)4] = meterbridge_jackname;
    argv[(signed long int)5] = "-r";
    argv[(signed long int)6] = meterbridge_reference;
    signed int ch = 0;
    for( ; !(ch >= num_channels); ch = ch + 1)
      argv[(signed long int)(7 + ch)] = "x";
    argv[(signed long int)(7 + ch)] = (char *)(void *)0;
    {
      signed int fd;
      fd=open("/dev/null", 02 | 0100, 0400 | 0200);
      if(fd == -1)
        perror("open");

      else
      {
        dup2(fd, 1);
        dup2(fd, 2);
        close(fd);
      }
    }
    execvp("meterbridge", argv);
    pause();
    exit(0);
  }

}

// stdout_write
// file jack_capture.c line 1328
static signed int stdout_write(float *buffer, unsigned long int frames)
{
  signed int bytes_to_write = (signed int)(frames * (unsigned long int)num_channels * (unsigned long int)2);
  static char *tobuffer = (char *)(void *)0;
  static signed int bufferlen = 0;
  if(!(bufferlen >= bytes_to_write))
  {
    free((void *)tobuffer);
    void *return_value_my_calloc$1;
    return_value_my_calloc$1=my_calloc((unsigned long int)1, (unsigned long int)bytes_to_write);
    tobuffer = (char *)return_value_my_calloc$1;
    bufferlen = bytes_to_write;
  }

  unsigned int i;
  signed int writeplace = 0;
  i = (unsigned int)0;
  signed int tmp_post$3;
  signed int tmp_post$4;
  for( ; !((unsigned long int)i >= frames * (unsigned long int)num_channels); i = i + 1u)
  {
    signed int d;
    double return_value_rint$2;
    return_value_rint$2=rint((double)buffer[(signed long int)i] * 32767.0);
    d = (signed int)return_value_rint$2;
    tmp_post$3 = writeplace;
    writeplace = writeplace + 1;
    tobuffer[(signed long int)tmp_post$3] = (char)(unsigned char)(d & 0xff);
    tmp_post$4 = writeplace;
    writeplace = writeplace + 1;
    tobuffer[(signed long int)tmp_post$4] = (char)(unsigned char)((d & 0xff00) >> 8 & 0xff);
  }
  signed int fd;
  fd=fileno(stdout);
  char *tobuffer_use = tobuffer;
  while(bytes_to_write >= 1)
  {
    signed int written;
    signed long int return_value_write$5;
    return_value_write$5=write(fd, (const void *)tobuffer_use, (unsigned long int)bytes_to_write);
    written = (signed int)return_value_write$5;
    if(written == -1)
    {
      fprintf(stderr, "Error writing to stdout.\n");
      break;
    }

    bytes_to_write = bytes_to_write - written;
    tobuffer_use = tobuffer_use + (signed long int)written;
  }
  return 1;
}

// stop_connection_thread
// file jack_capture.c line 1968
static void stop_connection_thread(void)
{
  wake_up_connection_thread();
  pthread_join(connect_thread, (void **)(void *)0);
}

// stop_helper_thread
// file jack_capture.c line 865
static void stop_helper_thread(void)
{
  is_helper_running = (_Bool)0;
  if((signed int)write_to_stdout == 0)
    pthread_join(helper_thread, (void **)(void *)0);

}

// stop_recording_and_cleanup
// file jack_capture.c line 2607
void stop_recording_and_cleanup(void)
{
  verbose_print("main() Stop recording and clean up.\n");
  is_running = 0;
  if((signed int)use_manual_connections == 0)
    stop_connection_thread();

  vringbuffer_stop_callbacks(vringbuffer);
  cleanup_disk();
  if(!(use_meterbridge == (_Bool)0))
    kill(meterbridge_pid, 2);

  stop_helper_thread();
  shutdown_osc();
  if((signed int)jack_has_been_shut_down == 0)
    jack_client_close(client);

  if((signed int)silent == 0)
  {
    usleep((unsigned int)50);
    fprintf(stderr, "%c[31m", 0x1b);
    fprintf(stderr, "Finished.");
    fprintf(stderr, "%c[0m", 0x1b);
    fprintf(stderr, "\n");
  }

}

// string_charpos
// file jack_capture.c line 2381
signed int string_charpos(char *s, char c)
{
  signed int pos = 0;
  for( ; !((signed int)s[(signed long int)pos] == 0); pos = pos + 1)
    if(s[(signed long int)pos] == c)
      return pos;

  return -1;
}

// string_concat
// file jack_capture.c line 2375
char * string_concat(char *s1, char *s2)
{
  char *ret;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(s1);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(s2);
  void *return_value_malloc$3;
  return_value_malloc$3=malloc(return_value_strlen$1 + return_value_strlen$2 + (unsigned long int)4);
  ret = (char *)return_value_malloc$3;
  sprintf(ret, "%s%s", s1, s2);
  return ret;
}

// strip_whitespace
// file jack_capture.c line 2403
char * strip_whitespace(char *s)
{
  char *ret = s;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*ret]) == 0)
      break;

    ret = ret + 1l;
  }
  while((_Bool)1);
  signed int pos;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(ret);
  pos = (signed int)(return_value_strlen$2 - (unsigned long int)1);
  const unsigned short int **return_value___ctype_b_loc$3;
  do
  {
    return_value___ctype_b_loc$3=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)ret[(signed long int)pos]]) == 0)
      break;

    ret[(signed long int)pos] = (char)0;
    pos = pos - 1;
  }
  while((_Bool)1);
  return ret;
}

// substring
// file jack_capture.c line 2391
char * substring(char *s, signed int start, signed int end)
{
  char *ret;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, (unsigned long int)((end - start) + 1));
  ret = (char *)return_value_calloc$1;
  signed int read_pos = start;
  signed int write_pos = 0;
  signed int tmp_post$2;
  signed int tmp_post$3;
  for( ; !(read_pos >= end); ret[(signed long int)tmp_post$2] = s[(signed long int)tmp_post$3])
  {
    tmp_post$2 = write_pos;
    write_pos = write_pos + 1;
    tmp_post$3 = read_pos;
    read_pos = read_pos + 1;
  }
  return ret;
}

// turn_off_echo
// file jack_capture.c line 269
static void turn_off_echo(void)
{
  tcgetattr(0, &initial);
  current = initial;
  current.c_lflag = current.c_lflag & (unsigned int)~0000010;
  tcsetattr(0, 0, &current);
  echo_turned_on = 0;
}

// turn_on_echo
// file jack_capture.c line 277
static void turn_on_echo(void)
{
  if(!(echo_turned_on == 1))
  {
    tcsetattr(0, 0, &initial);
    echo_turned_on = 1;
  }

}

// upwaker_sleep
// file upwaker.h line 29
void upwaker_sleep(struct anonymous$3 *upwaker)
{
  if(upwaker->please_wakeup == 0)
    pthread_cond_wait(&upwaker->cond, &upwaker->mutex);

  upwaker->please_wakeup = 0;
}

// upwaker_wake_up
// file upwaker.h line 30
void upwaker_wake_up(struct anonymous$3 *upwaker)
{
  upwaker->please_wakeup = 1;
  pthread_cond_broadcast(&upwaker->cond);
}

// verbose_print
// file jack_capture.c line 231
static void verbose_print(const char *fmt, ...)
{
  if(!((signed int)absolutely_silent == 1))
  {
    if((signed int)verbose == 1)
    {
      void **argp = (void **)&fmt;
      vfprintf(stderr, fmt, argp);
      argp = ((void **)NULL);
    }

  }

}

// vringbuffer_create
// file vringbuffer.h line 62
struct vringbuffer_t * vringbuffer_create(signed int num_elements_during_startup, signed int max_num_elements, unsigned long int element_size)
{
  struct vringbuffer_t *vrb;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct vringbuffer_t) /*216ul*/ );
  vrb = (struct vringbuffer_t *)return_value_calloc$1;
  vrb->for_writer1=jack_ringbuffer_create(sizeof(void *) /*8ul*/  * (unsigned long int)max_num_elements);
  vrb->for_writer2=jack_ringbuffer_create(sizeof(void *) /*8ul*/  * (unsigned long int)max_num_elements);
  vrb->for_reader=jack_ringbuffer_create(sizeof(void *) /*8ul*/  * (unsigned long int)max_num_elements);
  vrb->element_size = element_size;
  vrb->max_num_elements = max_num_elements;
  vrb->please_stop = (_Bool)0;
  pthread_mutex_init(&vrb->increase_lock, (const union anonymous$6 *)(void *)0);
  _Bool return_value_vringbuffer_increase_writer1$2;
  return_value_vringbuffer_increase_writer1$2=vringbuffer_increase_writer1(vrb, num_elements_during_startup, (_Bool)1);
  if((signed int)return_value_vringbuffer_increase_writer1$2 == 0)
    return (struct vringbuffer_t *)(void *)0;

  else
  {
    vrb->receiver_trigger=create_upwaker();
    vrb->autoincrease_trigger=create_upwaker();
    return vrb;
  }
}

// vringbuffer_delete
// file vringbuffer.c line 205
void vringbuffer_delete(struct vringbuffer_t *vrb)
{
  vringbuffer_stop_callbacks(vrb);
  while(!(vrb->allocated_mem == ((struct vringbuffer_list_t *)NULL)))
  {
    struct vringbuffer_list_t *next = vrb->allocated_mem->next;
    free((void *)vrb->allocated_mem);
    vrb->allocated_mem = next;
  }
  jack_ringbuffer_free(vrb->for_writer1);
  jack_ringbuffer_free(vrb->for_writer2);
  jack_ringbuffer_free(vrb->for_reader);
  free((void *)vrb);
}

// vringbuffer_get_reading
// file vringbuffer.c line 274
void * vringbuffer_get_reading(struct vringbuffer_t *vrb)
{
  void *ret = (void *)0;
  jack_ringbuffer_read(vrb->for_reader, (char *)&ret, sizeof(void *) /*8ul*/ );
  return ret;
}

// vringbuffer_get_writing
// file vringbuffer.h line 108
void * vringbuffer_get_writing(struct vringbuffer_t *vrb)
{
  void *ret = (void *)0;
  unsigned long int return_value_jack_ringbuffer_read$1;
  return_value_jack_ringbuffer_read$1=jack_ringbuffer_read(vrb->for_writer2, (char *)&ret, sizeof(void *) /*8ul*/ );
  if(return_value_jack_ringbuffer_read$1 == 0ul)
    jack_ringbuffer_read(vrb->for_writer1, (char *)&ret, sizeof(void *) /*8ul*/ );

  return ret;
}

// vringbuffer_increase
// file vringbuffer.c line 258
void vringbuffer_increase(struct vringbuffer_t *vrb, signed int num_elements, void **elements)
{
  if(!(vrb->max_num_elements >= vrb->curr_num_elements + num_elements))
    num_elements = vrb->max_num_elements - vrb->curr_num_elements;

  if(!(num_elements == 0))
  {
    pthread_mutex_lock(&vrb->increase_lock);
    jack_ringbuffer_write(vrb->for_writer1, (char *)elements, sizeof(void *) /*8ul*/  * (unsigned long int)num_elements);
    vrb->curr_num_elements = vrb->curr_num_elements + num_elements;
    pthread_mutex_unlock(&vrb->increase_lock);
  }

}

// vringbuffer_increase_writer1
// file vringbuffer.c line 121
static _Bool vringbuffer_increase_writer1(struct vringbuffer_t *vrb, signed int num_elements, _Bool first_call)
{
  if(!(vrb->max_num_elements >= vrb->curr_num_elements + num_elements))
    num_elements = vrb->max_num_elements - vrb->curr_num_elements;

  if(num_elements == 0)
    return (_Bool)1;

  else
  {
    pthread_mutex_lock(&vrb->increase_lock);
    signed int i;
    struct vringbuffer_list_t *element;
    void *return_value_my_malloc$1;
    return_value_my_malloc$1=my_malloc((unsigned long int)1, sizeof(struct vringbuffer_list_t) /*8ul*/  + (unsigned long int)num_elements * vrb->element_size);
    element = (struct vringbuffer_list_t *)return_value_my_malloc$1;
    element->next = vrb->allocated_mem;
    vrb->allocated_mem = element;
    char *das_buffer = (char *)(element + (signed long int)1);
    if(das_buffer == ((char *)NULL))
      return (_Bool)0;

    else
    {
      if(!(first_call == (_Bool)0))
      {
        signed int num = 8;
        if(!(num_elements >= num))
          num = num_elements;

        memset((void *)das_buffer, 0, (unsigned long int)num * vrb->element_size);
      }

      i = 0;
      for( ; !(i >= num_elements); i = i + 1)
      {
        char *pointer = das_buffer + (signed long int)((unsigned long int)i * vrb->element_size);
        jack_ringbuffer_write(vrb->for_writer1, (char *)&pointer, sizeof(char *) /*8ul*/ );
      }
      vrb->curr_num_elements = vrb->curr_num_elements + num_elements;
      pthread_mutex_unlock(&vrb->increase_lock);
      return (_Bool)1;
    }
  }
}

// vringbuffer_reading_size
// file vringbuffer.h line 104
signed int vringbuffer_reading_size(struct vringbuffer_t *vrb)
{
  unsigned long int return_value_jack_ringbuffer_read_space$1;
  return_value_jack_ringbuffer_read_space$1=jack_ringbuffer_read_space(vrb->for_reader);
  return (signed int)(return_value_jack_ringbuffer_read_space$1 / sizeof(void *) /*8ul*/ );
}

// vringbuffer_return_reading
// file vringbuffer.c line 280
void vringbuffer_return_reading(struct vringbuffer_t *vrb, void *data)
{
  jack_ringbuffer_write(vrb->for_writer2, (char *)&data, sizeof(void *) /*8ul*/ );
}

// vringbuffer_return_writing
// file vringbuffer.h line 109
void vringbuffer_return_writing(struct vringbuffer_t *vrb, void *data)
{
  jack_ringbuffer_write(vrb->for_reader, (char *)&data, sizeof(void *) /*8ul*/ );
  upwaker_wake_up(vrb->receiver_trigger);
}

// vringbuffer_set_autoincrease_callback
// file vringbuffer.h line 96
void vringbuffer_set_autoincrease_callback(struct vringbuffer_t *vrb, signed int (*callback)(struct vringbuffer_t *, _Bool, signed int, signed int), unsigned int interval)
{
  vrb->autoincrease_callback = callback;
  vrb->autoincrease_interval = interval;
  sem_init(&vrb->autoincrease_started, 0, (unsigned int)0);
  pthread_create(&vrb->autoincrease_thread, (const union pthread_attr_t *)(void *)0, autoincrease_func, (void *)vrb);
  sem_wait(&vrb->autoincrease_started);
}

// vringbuffer_set_receiver_callback
// file vringbuffer.h line 106
void vringbuffer_set_receiver_callback(struct vringbuffer_t *vrb, enum vringbuffer_receiver_callback_return_t (*receiver_callback)(struct vringbuffer_t *, _Bool, void *))
{
  vrb->receiver_callback = receiver_callback;
  sem_init(&vrb->receiver_started, 0, (unsigned int)0);
  pthread_create(&vrb->receiver_thread, (const union pthread_attr_t *)(void *)0, receiver_func, (void *)vrb);
  sem_wait(&vrb->receiver_started);
}

// vringbuffer_stop_callbacks
// file vringbuffer.h line 63
void vringbuffer_stop_callbacks(struct vringbuffer_t *vrb)
{
  vrb->please_stop = (_Bool)1;
  if(!(vrb->autoincrease_callback == ((signed int (*)(struct vringbuffer_t *, _Bool, signed int, signed int))NULL)))
  {
    upwaker_wake_up(vrb->autoincrease_trigger);
    pthread_join(vrb->autoincrease_thread, (void **)(void *)0);
    vrb->autoincrease_callback = (signed int (*)(struct vringbuffer_t *, _Bool, signed int, signed int))(void *)0;
  }

  if(!(vrb->receiver_callback == ((enum vringbuffer_receiver_callback_return_t (*)(struct vringbuffer_t *, _Bool, void *))NULL)))
  {
    upwaker_wake_up(vrb->receiver_trigger);
    pthread_join(vrb->receiver_thread, (void **)(void *)0);
    vrb->receiver_callback = (enum vringbuffer_receiver_callback_return_t (*)(struct vringbuffer_t *, _Bool, void *))(void *)0;
  }

}

// vringbuffer_trigger_autoincrease_callback
// file vringbuffer.h line 99
void vringbuffer_trigger_autoincrease_callback(struct vringbuffer_t *vrb)
{
  upwaker_wake_up(vrb->autoincrease_trigger);
}

// vringbuffer_writing_size
// file vringbuffer.h line 111
signed int vringbuffer_writing_size(struct vringbuffer_t *vrb)
{
  unsigned long int return_value_jack_ringbuffer_read_space$1;
  return_value_jack_ringbuffer_read_space$1=jack_ringbuffer_read_space(vrb->for_writer1);
  unsigned long int return_value_jack_ringbuffer_read_space$2;
  return_value_jack_ringbuffer_read_space$2=jack_ringbuffer_read_space(vrb->for_writer2);
  return (signed int)((return_value_jack_ringbuffer_read_space$1 + return_value_jack_ringbuffer_read_space$2) / sizeof(void *) /*8ul*/ );
}

// wait_child
// file jack_capture.c line 944
static void wait_child(signed int sig)
{
  wait((void *)0);
}

// wait_until_recording_finished
// file jack_capture.c line 2582
void wait_until_recording_finished(void)
{
  verbose_print("main() Wait.\n");
  if((signed int)use_jack_transport == 1)
    print_message("Waiting for JackTransportRolling.\n");

  if((signed int)use_jack_freewheel == 1)
    print_message("Waiting for Jack Freewheeling .\n");

  signed int return_value_sem_wait$1;
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  do
  {
    return_value_sem_wait$1=sem_wait(&stop_sem);
    if(!(return_value_sem_wait$1 == -1))
      break;

    return_value___errno_location$2=__errno_location();
    return_value_strerror$3=strerror(*return_value___errno_location$2);
    print_message("Warning: sem_wait failed: %s", return_value_strerror$3);
  }
  while((_Bool)1);
  turn_on_echo();
  if(helper_thread_running == 1)
  {
    if((signed int)silent == 0)
    {
      print_message("Please wait while writing all data to disk. (shouldn't take long)\n");
      msleep(2);
    }

  }

}

// wake_up_connection_thread
// file jack_capture.c line 1958
static void wake_up_connection_thread(void)
{
  if((signed int)use_manual_connections == 0)
    sem_post(&connection_semaphore);

}

// xrun
// file jack_capture.c line 1721
static signed int xrun(void *arg)
{
  total_xruns = total_xruns + 1;
  return 0;
}

