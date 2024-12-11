// #anon_enum$CONFIG_ERR_NONE=0$CONFIG_ERR_FILE_IO=1$CONFIG_ERR_PARSE=2
// file /usr/include/libconfig.h line 92
enum anonymous { CONFIG_ERR_NONE=0, CONFIG_ERR_FILE_IO=1, CONFIG_ERR_PARSE=2 };

// #anon_enum$JackPositionBBT=16$JackPositionTimecode=32$JackBBTFrameOffset=64$JackAudioVideoRatio=128$JackVideoFrameOffset=256
// file /usr/include/jack/types.h line 539
enum anonymous$1 { JackPositionBBT=16, JackPositionTimecode=32, JackBBTFrameOffset=64, JackAudioVideoRatio=128, JackVideoFrameOffset=256 };

// #anon_enum$JackTransportStopped=0$JackTransportRolling=1$JackTransportLooping=2$JackTransportStarting=3$JackTransportNetStarting=4
// file /usr/include/jack/types.h line 523
enum anonymous$2 { JackTransportStopped=0, JackTransportRolling=1, JackTransportLooping=2, JackTransportStarting=3, JackTransportNetStarting=4 };

// tag-#anon#ST[U64'attr'||ARR5{S32}$S32$'chars'||U32'$pad0'|]
// file /usr/include/curses.h line 397
struct anonymous$3;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$4;

// tag-JackOptions
// file /usr/include/jack/types.h line 82
enum JackOptions { JackNullOption=0, JackNoStartServer=1, JackUseExactName=2, JackServerName=4, JackLoadName=8, JackLoadInit=16, JackSessionID=32 };

// tag-JackSessionEventType
// file /usr/include/jack/session.h line 46
enum JackSessionEventType { JackSessionSave=1, JackSessionSaveAndQuit=2, JackSessionSaveTemplate=3 };

// tag-JackSessionFlags
// file /usr/include/jack/session.h line 83
enum JackSessionFlags { JackSessionSaveError=1, JackSessionNeedTerminal=2 };

// tag-JackStatus
// file /usr/include/jack/types.h line 141
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

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_jack_client
// file /usr/include/jack/types.h line 69
struct _jack_client;

// tag-_jack_port
// file /usr/include/jack/types.h line 63
struct _jack_port;

// tag-_jack_position
// file /usr/include/jack/types.h line 554
struct _jack_position;

// tag-_jack_session_event
// file /usr/include/jack/session.h line 100
struct _jack_session_event;

// tag-_win_st
// file /usr/include/curses.h line 365
struct _win_st;

// tag-config_list_t
// file /usr/include/libconfig.h line 76
struct config_list_t;

// tag-config_setting_t
// file /usr/include/libconfig.h line 79
struct config_setting_t;

// tag-config_t
// file /usr/include/libconfig.h line 86
struct config_t;

// tag-config_value_t
// file /usr/include/libconfig.h line 70
union config_value_t;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-disk_s
// file meterec.h line 223
struct disk_s;

// tag-display_s
// file meterec.h line 229
struct display_s;

// tag-event_s
// file meterec.h line 187
struct event_s;

// tag-jack_s
// file meterec.h line 217
struct jack_s;

// tag-ldat
// file /usr/include/curses.h line 412
struct ldat;

// tag-loop_s
// file meterec.h line 199
struct loop_s;

// tag-meterec_s
// file meterec.h line 236
struct meterec_s;

// tag-pdat
// file /usr/include/curses.h line 452
struct pdat;

// tag-port_s
// file meterec.h line 151
struct port_s;

// tag-pos_s
// file meterec.h line 206
struct pos_s;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-take_s
// file meterec.h line 135
struct take_s;

// tag-time_s
// file position.h line 23
struct time_s;

#ifndef NULL
#define NULL ((void*)0)
#endif

// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// add_event
// file queue.c line 35
void add_event(struct meterec_s *meterec, unsigned int queue, unsigned int type, unsigned int old_playhead, unsigned int new_playhead, unsigned int buffer_pos);
// atof
// file /usr/include/stdlib.h line 144
extern double atof(const char *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cancel_record
// file meterec.h line 320
void cancel_record(struct meterec_s *meterec);
// cbreak
// file /usr/include/curses.h line 594
extern signed int cbreak(void);
// changed_takes_to_playback
// file meterec.h line 313
signed int changed_takes_to_playback(struct meterec_s *meterec);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// cleanup
// file meterec.c line 130
static void cleanup();
// cleanup_curse
// file meterec.c line 112
void cleanup_curse(void);
// cleanup_jack
// file meterec.c line 72
void cleanup_jack(struct meterec_s *meterec);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// clr_loop
// file meterec.h line 323
void clr_loop(struct meterec_s *meterec, unsigned int bound);
// color_port
// file display.c line 123
static void color_port(struct meterec_s *meterec, unsigned int port);
// compute_takes_to_playback
// file meterec.h line 311
void compute_takes_to_playback(struct meterec_s *meterec);
// compute_tracks_to_record
// file meterec.h line 312
void compute_tracks_to_record(struct meterec_s *meterec);
// config_destroy
// file /usr/include/libconfig.h line 146
extern void config_destroy(struct config_t *);
// config_init
// file /usr/include/libconfig.h line 145
extern void config_init(struct config_t *);
// config_lookup
// file /usr/include/libconfig.h line 268
extern struct config_setting_t * config_lookup(const struct config_t *, const char *);
// config_read_file
// file /usr/include/libconfig.h line 135
extern signed int config_read_file(struct config_t *, const char *);
// config_setting_get_elem
// file /usr/include/libconfig.h line 251
extern struct config_setting_t * config_setting_get_elem(const struct config_setting_t *, unsigned int);
// config_setting_get_member
// file /usr/include/libconfig.h line 254
extern struct config_setting_t * config_setting_get_member(const struct config_setting_t *, const char *);
// config_setting_get_string_elem
// file /usr/include/libconfig.h line 194
extern const char * config_setting_get_string_elem(const struct config_setting_t *, signed int);
// config_setting_length
// file /usr/include/libconfig.h line 249
extern signed int config_setting_length(const struct config_setting_t *);
// config_setting_lookup_bool
// file /usr/include/libconfig.h line 165
extern signed int config_setting_lookup_bool(const struct config_setting_t *, const char *, signed int *);
// config_setting_lookup_int
// file /usr/include/libconfig.h line 159
extern signed int config_setting_lookup_int(const struct config_setting_t *, const char *, signed int *);
// config_setting_lookup_string
// file /usr/include/libconfig.h line 167
extern signed int config_setting_lookup_string(const struct config_setting_t *, const char *, const char **);
// connect_all_ports
// file ports.c line 272
void * connect_all_ports(void *d);
// connect_any_port
// file ports.h line 31
void connect_any_port(struct meterec_s *meterec, char *port_name, unsigned int port);
// count_all_io_ports
// file ports.c line 91
void count_all_io_ports(struct meterec_s *meterec);
// create_input_port
// file ports.h line 25
void create_input_port(struct meterec_s *meterec, unsigned int port);
// create_monitor_port
// file ports.c line 182
void create_monitor_port(struct meterec_s *meterec);
// create_output_port
// file ports.h line 26
void create_output_port(struct meterec_s *meterec, unsigned int port);
// curs_set
// file /usr/include/curses.h line 604
extern signed int curs_set(signed int);
// delwin
// file /usr/include/curses.h line 610
extern signed int delwin(struct _win_st *);
// deregister_disconnect_port
// file ports.c line 395
void deregister_disconnect_port(struct meterec_s *meterec, char *port_name, unsigned int port);
// deregister_port
// file ports.c line 248
void deregister_port(struct meterec_s *meterec, char *port_name, unsigned int port);
// disconnect_any_port
// file ports.c line 339
void disconnect_any_port(struct meterec_s *meterec, char *port_name, unsigned int port);
// display_cpu_load
// file display.c line 343
void display_cpu_load(struct meterec_s *meterec, unsigned int width);
// display_header
// file display.c line 452
void display_header(struct meterec_s *meterec, unsigned int width);
// display_loop
// file display.c line 370
void display_loop(struct meterec_s *meterec);
// display_meter
// file display.c line 137
void display_meter(struct meterec_s *meterec, signed int display_names, signed int width, signed int decay_len);
// display_port_info
// file display.c line 36
void display_port_info(struct port_s *port_p);
// display_port_recmode
// file display.c line 70
void display_port_recmode(struct port_s *port_p);
// display_ports
// file display.c line 533
void display_ports(struct meterec_s *meterec);
// display_rd_buffer
// file display.c line 274
void display_rd_buffer(struct meterec_s *meterec);
// display_rd_status
// file display.c line 400
void display_rd_status(struct meterec_s *meterec);
// display_session
// file display.c line 466
void display_session(struct meterec_s *meterec);
// display_wr_buffer
// file display.c line 309
void display_wr_buffer(struct meterec_s *meterec);
// display_wr_status
// file display.c line 419
void display_wr_status(struct meterec_s *meterec);
// endwin
// file /usr/include/curses.h line 618
extern signed int endwin(void);
// event_match
// file queue.c line 71
signed int event_match(struct event_s *event, unsigned int queue, unsigned int type);
// event_print
// file queue.c line 201
void event_print(struct meterec_s *meterec, unsigned int where, struct event_s *event);
// event_queue_print
// file queue.c line 171
void event_queue_print(struct meterec_s *meterec, unsigned int where);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// exit_on_error
// file meterec.h line 310
void exit_on_error(char *reason);
// fabs
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 181
extern double fabs(double);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// file_exists
// file meterec.c line 507
signed int file_exists(char *file);
// fill_buffer
// file disk.c line 254
unsigned int fill_buffer(struct meterec_s *meterec, unsigned int *zbuff_pos);
// filter_existing_ports
// file ports.c line 103
void filter_existing_ports(const char **port_list, const char *port_name_pattern);
// find_existing_takes
// file meterec.c line 671
void find_existing_takes(struct meterec_s *meterec);
// find_first_event
// file queue.c line 95
struct event_s * find_first_event(struct meterec_s *meterec, unsigned int queue, unsigned int type);
// find_last_event
// file queue.c line 115
struct event_s * find_last_event(struct meterec_s *meterec, unsigned int queue, unsigned int type);
// find_rm_events
// file queue.c line 158
void find_rm_events(struct meterec_s *meterec, unsigned int queue, unsigned int type);
// find_take_name
// file meterec.c line 591
signed int find_take_name(char *session, unsigned int take, char **name);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_options
// file meterec.c line 494
void free_options(struct meterec_s *meterec);
// free_ports
// file meterec.c line 359
void free_ports(struct meterec_s *meterec);
// free_scale
// file display.c line 219
void free_scale(void);
// free_takes
// file meterec.c line 408
void free_takes(struct meterec_s *meterec);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// fsleep
// file meterec.c line 168
static signed int fsleep(float secs);
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// halt
// file meterec.h line 309
void halt(signed int sig);
// iec_scale
// file display.c line 99
static signed int iec_scale(float db, signed int size);
// init_display_scale
// file display.c line 224
void init_display_scale(unsigned int width);
// init_pair
// file /usr/include/curses.h line 641
extern signed int init_pair(signed short int, signed short int, signed short int);
// init_ports
// file meterec.c line 313
void init_ports(struct meterec_s *meterec);
// init_takes
// file meterec.c line 380
void init_takes(struct meterec_s *meterec);
// initscr
// file /usr/include/curses.h line 639
extern struct _win_st * initscr(void);
// jack_activate
// file /usr/include/jack/jack.h line 211
signed int jack_activate(struct _jack_client *);
// jack_client_close
// file /usr/include/jack/jack.h line 134
signed int jack_client_close(struct _jack_client *);
// jack_client_open
// file /usr/include/jack/jack.h line 117
struct _jack_client * jack_client_open(const char *, enum JackOptions, enum JackStatus *, ...);
// jack_connect
// file /usr/include/jack/jack.h line 993
signed int jack_connect(struct _jack_client *, const char *, const char *);
// jack_cpu_load
// file /usr/include/jack/jack.h line 703
float jack_cpu_load(struct _jack_client *);
// jack_disconnect
// file /usr/include/jack/jack.h line 1010
signed int jack_disconnect(struct _jack_client *, const char *, const char *);
// jack_get_buffer_size
// file /usr/include/jack/jack.h line 683
unsigned int jack_get_buffer_size(struct _jack_client *);
// jack_get_client_name
// file /usr/include/jack/jack.h line 148
char * jack_get_client_name(struct _jack_client *);
// jack_get_ports
// file /usr/include/jack/jack.h line 1282
const char ** jack_get_ports(struct _jack_client *, const char *, const char *, unsigned long int);
// jack_get_sample_rate
// file /usr/include/jack/jack.h line 672
unsigned int jack_get_sample_rate(struct _jack_client *);
// jack_port_by_id
// file /usr/include/jack/jack.h line 1297
struct _jack_port * jack_port_by_id(struct _jack_client *, unsigned int);
// jack_port_by_name
// file /usr/include/jack/jack.h line 1292
struct _jack_port * jack_port_by_name(struct _jack_client *, const char *);
// jack_port_connected_to
// file /usr/include/jack/jack.h line 833
signed int jack_port_connected_to(const struct _jack_port *, const char *);
// jack_port_flags
// file /usr/include/jack/jack.h line 802
signed int jack_port_flags(const struct _jack_port *);
// jack_port_get_all_connections
// file /usr/include/jack/jack.h line 868
const char ** jack_port_get_all_connections(const struct _jack_client *, const struct _jack_port *);
// jack_port_get_buffer
// file /usr/include/jack/jack.h line 774
void * jack_port_get_buffer(struct _jack_port *, unsigned int);
// jack_port_get_connections
// file /usr/include/jack/jack.h line 847
const char ** jack_port_get_connections(const struct _jack_port *);
// jack_port_name
// file /usr/include/jack/jack.h line 789
const char * jack_port_name(const struct _jack_port *);
// jack_port_register
// file /usr/include/jack/jack.h line 741
struct _jack_port * jack_port_register(struct _jack_client *, const char *, const char *, unsigned long int, unsigned long int);
// jack_session_event_free
// file /usr/include/jack/session.h line 197
void jack_session_event_free(struct _jack_session_event *);
// jack_session_reply
// file /usr/include/jack/session.h line 188
signed int jack_session_reply(struct _jack_client *, struct _jack_session_event *);
// jack_set_buffer_size_callback
// file /usr/include/jack/jack.h line 438
signed int jack_set_buffer_size_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_set_port_registration_callback
// file /usr/include/jack/jack.h line 489
signed int jack_set_port_registration_callback(struct _jack_client *, void (*)(unsigned int, signed int, void *), void *);
// jack_set_process_callback
// file /usr/include/jack/jack.h line 395
signed int jack_set_process_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_set_session_callback
// file /usr/include/jack/session.h line 175
signed int jack_set_session_callback(struct _jack_client *, void (*)(struct _jack_session_event *, void *), void *);
// jack_set_sync_callback
// file /usr/include/jack/transport.h line 74
signed int jack_set_sync_callback(struct _jack_client *, signed int (*)(enum anonymous$2, struct _jack_position *, void *), void *);
// jack_transport_locate
// file /usr/include/jack/transport.h line 144
signed int jack_transport_locate(struct _jack_client *, unsigned int);
// jack_transport_query
// file /usr/include/jack/transport.h line 162
enum anonymous$2 jack_transport_query(const struct _jack_client *, struct _jack_position *);
// jack_transport_start
// file /usr/include/jack/transport.h line 204
void jack_transport_start(struct _jack_client *);
// jack_transport_stop
// file /usr/include/jack/transport.h line 214
void jack_transport_stop(struct _jack_client *);
// keyboard_thread
// file keyboard.c line 48
void * keyboard_thread(void *arg);
// keypad
// file /usr/include/curses.h line 654
extern signed int keypad(struct _win_st *, _Bool);
// load_conf
// file conf.c line 383
void load_conf(struct meterec_s *meterec);
// load_session
// file conf.c line 175
void load_session(struct meterec_s *meterec);
// load_setup
// file conf.c line 86
void load_setup(struct meterec_s *meterec);
// log10f
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 112
extern float log10f(float);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// nodelay
// file /usr/include/curses.h line 717
extern signed int nodelay(struct _win_st *, _Bool);
// noecho
// file /usr/include/curses.h line 718
extern signed int noecho(void);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// parse_port_con
// file conf.c line 40
void parse_port_con(struct meterec_s *meterec, struct _IO_FILE *fd_conf, unsigned int port);
// parse_record
// file conf.c line 323
signed int parse_record(const char *record);
// parse_takes
// file conf.c line 353
unsigned int parse_takes(struct meterec_s *meterec, unsigned int port, const char *takes);
// parse_time
// file conf.c line 338
void parse_time(struct meterec_s *meterec, unsigned int index, const char *time_str);
// parse_time_index
// file conf.c line 66
void parse_time_index(struct meterec_s *meterec, struct _IO_FILE *fd_conf, unsigned int index);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// port_rename
// file ports.c line 402
char * port_rename(struct meterec_s *meterec, unsigned int port);
// post_option_init
// file meterec.c line 627
void post_option_init(struct meterec_s *meterec);
// powf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 153
extern float powf(float, float);
// pre_option_init
// file meterec.c line 422
void pre_option_init(struct meterec_s *meterec);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// printw
// file /usr/include/curses.h line 730
extern signed int printw(const char *, ...);
// process_jack_data
// file meterec.c line 727
static signed int process_jack_data(unsigned int nframes, void *arg);
// process_jack_sync
// file meterec.c line 701
static signed int process_jack_sync(enum anonymous$2 state, struct _jack_position *pos, void *arg);
// process_port_register
// file ports.c line 32
void process_port_register(unsigned int port_id, signed int new, void *arg);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_kill
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 35
extern signed int pthread_kill(unsigned long int, signed int);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$4 *, const union anonymous$0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$4 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$4 *);
// read_disk_buffer_level
// file disk.h line 25
float read_disk_buffer_level(struct meterec_s *meterec);
// read_disk_close_fd
// file disk.c line 171
void read_disk_close_fd(struct meterec_s *meterec);
// read_disk_open_fd
// file disk.c line 185
void read_disk_open_fd(struct meterec_s *meterec);
// read_disk_seek
// file disk.c line 340
void read_disk_seek(struct meterec_s *meterec, unsigned int seek);
// read_peak
// file meterec.c line 179
void read_peak(float bias);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// reader_thread
// file disk.c line 368
void * reader_thread(void *d);
// register_connect_port
// file ports.c line 389
void register_connect_port(struct meterec_s *meterec, char *port_name, unsigned int port);
// register_port
// file ports.h line 29
void register_port(struct meterec_s *meterec, char *port_name, unsigned int port);
// register_port_old
// file ports.h line 28
void register_port_old(struct meterec_s *meterec, char *port_name, unsigned int port);
// resolve_conf_file
// file meterec.c line 519
void resolve_conf_file(struct meterec_s *meterec, char *conf_file);
// retreive_connected_ports
// file ports.c line 65
void retreive_connected_ports(struct meterec_s *meterec);
// retreive_existing_ports
// file ports.c line 79
void retreive_existing_ports(struct meterec_s *meterec);
// rm_event
// file queue.c line 138
void rm_event(struct meterec_s *meterec, struct event_s *event);
// roll
// file meterec.h line 316
void roll(struct meterec_s *meterec);
// save_conf
// file conf.c line 234
void save_conf(struct meterec_s *meterec);
// seek
// file meterec.h line 317
unsigned int seek(struct meterec_s *meterec, signed int seek_sec);
// session_callback
// file session.c line 35
void session_callback(struct _jack_session_event *event, void *arg);
// set_loop
// file meterec.h line 322
signed int set_loop(struct meterec_s *meterec, unsigned int loophead);
// set_thread_delay
// file disk.c line 575
unsigned int set_thread_delay(struct meterec_s *meterec);
// sf_close
// file /usr/include/sndfile.h line 632
signed int sf_close(struct SNDFILE_tag *);
// sf_format_check
// file /usr/include/sndfile.h line 543
signed int sf_format_check(const struct SF_INFO *);
// sf_open
// file /usr/include/sndfile.h line 485
struct SNDFILE_tag * sf_open(const char *, signed int, struct SF_INFO *);
// sf_read_float
// file /usr/include/sndfile.h line 620
signed long int sf_read_float(struct SNDFILE_tag *, float *, signed long int);
// sf_seek
// file /usr/include/sndfile.h line 558
signed long int sf_seek(struct SNDFILE_tag *, signed long int, signed int);
// sf_write_sync
// file /usr/include/sndfile.h line 640
void sf_write_sync(struct SNDFILE_tag *);
// sf_writef_float
// file /usr/include/sndfile.h line 603
signed long int sf_writef_float(struct SNDFILE_tag *, const float *, signed long int);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// start_color
// file /usr/include/curses.h line 771
extern signed int start_color(void);
// start_playback
// file meterec.c line 944
void start_playback(struct meterec_s *meterec);
// start_record
// file meterec.h line 319
void start_record(struct meterec_s *meterec);
// stop
// file meterec.h line 315
void stop(struct meterec_s *meterec);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// take_to_playback
// file meterec.c line 249
unsigned int take_to_playback(struct meterec_s *meterec, unsigned int port);
// time_frm
// file position.h line 31
void time_frm(struct time_s *time);
// time_hms
// file position.h line 30
void time_hms(struct time_s *time);
// time_sprint
// file position.h line 29
void time_sprint(struct time_s *time, char *string);
// update_jack_buffsize
// file meterec.c line 691
static signed int update_jack_buffsize(unsigned int nframes, void *arg);
// usage
// file meterec.c line 1023
static signed int usage(const char *progname);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// wattr_off
// file /usr/include/curses.h line 802
extern signed int wattr_off(struct _win_st *, unsigned long int, void *);
// wattr_on
// file /usr/include/curses.h line 801
extern signed int wattr_on(struct _win_st *, unsigned long int, void *);
// wclear
// file /usr/include/curses.h line 808
extern signed int wclear(struct _win_st *);
// wcolor_set
// file /usr/include/curses.h line 811
extern signed int wcolor_set(struct _win_st *, signed short int, void *);
// wgetch
// file /usr/include/curses.h line 817
extern signed int wgetch(struct _win_st *);
// wrefresh
// file /usr/include/curses.h line 836
extern signed int wrefresh(struct _win_st *);
// write_disk_buffer_level
// file disk.h line 26
float write_disk_buffer_level(struct meterec_s *meterec);
// write_disk_close_fd
// file disk.c line 43
void write_disk_close_fd(struct meterec_s *meterec, struct SNDFILE_tag *out);
// write_disk_open_fd
// file disk.c line 52
struct SNDFILE_tag * write_disk_open_fd(struct meterec_s *meterec);
// writer_thread
// file disk.c line 84
void * writer_thread(void *d);

struct anonymous$3
{
  // attr
  unsigned long int attr;
  // chars
  signed int chars[5l];
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

union anonymous$4
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

struct _jack_position
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

struct _jack_session_event
{
  // type
  enum JackSessionEventType type;
  // session_dir
  const char *session_dir;
  // client_uuid
  const char *client_uuid;
  // command_line
  char *command_line;
  // flags
  enum JackSessionFlags flags;
  // future
  unsigned int future;
};

struct pdat
{
  // _pad_y
  signed short int _pad_y;
  // _pad_x
  signed short int _pad_x;
  // _pad_top
  signed short int _pad_top;
  // _pad_left
  signed short int _pad_left;
  // _pad_bottom
  signed short int _pad_bottom;
  // _pad_right
  signed short int _pad_right;
};

struct _win_st
{
  // _cury
  signed short int _cury;
  // _curx
  signed short int _curx;
  // _maxy
  signed short int _maxy;
  // _maxx
  signed short int _maxx;
  // _begy
  signed short int _begy;
  // _begx
  signed short int _begx;
  // _flags
  signed short int _flags;
  // _attrs
  unsigned long int _attrs;
  // _bkgd
  unsigned long int _bkgd;
  // _notimeout
  _Bool _notimeout;
  // _clear
  _Bool _clear;
  // _leaveok
  _Bool _leaveok;
  // _scroll
  _Bool _scroll;
  // _idlok
  _Bool _idlok;
  // _idcok
  _Bool _idcok;
  // _immed
  _Bool _immed;
  // _sync
  _Bool _sync;
  // _use_keypad
  _Bool _use_keypad;
  // _delay
  signed int _delay;
  // _line
  struct ldat *_line;
  // _regtop
  signed short int _regtop;
  // _regbottom
  signed short int _regbottom;
  // _parx
  signed int _parx;
  // _pary
  signed int _pary;
  // _parent
  struct _win_st *_parent;
  // _pad
  struct pdat _pad;
  // _yoffset
  signed short int _yoffset;
  // _bkgrnd
  struct anonymous$3 _bkgrnd;
};

struct config_list_t
{
  // length
  unsigned int length;
  // elements
  struct config_setting_t **elements;
};

union config_value_t
{
  // ival
  signed int ival;
  // llval
  signed long long int llval;
  // fval
  double fval;
  // sval
  char *sval;
  // list
  struct config_list_t *list;
};

struct config_setting_t
{
  // name
  char *name;
  // type
  signed short int type;
  // format
  signed short int format;
  // value
  union config_value_t value;
  // parent
  struct config_setting_t *parent;
  // config
  struct config_t *config;
  // hook
  void *hook;
  // line
  unsigned int line;
  // file
  const char *file;
};

struct config_t
{
  // root
  struct config_setting_t *root;
  // destructor
  void (*destructor)(void *);
  // options
  signed int options;
  // tab_width
  unsigned short int tab_width;
  // default_format
  signed short int default_format;
  // include_dir
  const char *include_dir;
  // error_text
  const char *error_text;
  // error_file
  const char *error_file;
  // error_line
  signed int error_line;
  // error_type
  enum anonymous error_type;
  // filenames
  const char **filenames;
  // num_filenames
  unsigned int num_filenames;
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

struct disk_s
{
  // playhead
  unsigned long int playhead;
};

struct display_s
{
  // view
  unsigned long int view;
  // names
  unsigned long int names;
};

struct event_s
{
  // id
  unsigned int id;
  // type
  unsigned int type;
  // queue
  unsigned int queue;
  // old_playhead
  unsigned int old_playhead;
  // new_playhead
  unsigned int new_playhead;
  // buffer_pos
  unsigned int buffer_pos;
  // next
  struct event_s *next;
  // prev
  struct event_s *prev;
};

struct jack_s
{
  // sample_rate
  unsigned int sample_rate;
  // playhead
  unsigned long int playhead;
};

struct loop_s
{
  // low
  unsigned int low;
  // high
  unsigned int high;
  // enable
  unsigned int enable;
};

struct port_s
{
  // input
  struct _jack_port *input;
  // output
  struct _jack_port *output;
  // n_cons
  unsigned int n_cons;
  // input_connected
  const char **input_connected;
  // output_connected
  const char **output_connected;
  // connections
  char *connections[24l];
  // name
  char *name;
  // write_disk_buffer
  float *write_disk_buffer;
  // read_disk_buffer
  float *read_disk_buffer;
  // peak_in
  float peak_in;
  // max_in
  float max_in;
  // peak_out
  float peak_out;
  // db_in
  float db_in;
  // db_max_in
  float db_max_in;
  // db_out
  float db_out;
  // dkmax_in
  signed int dkmax_in;
  // dkpeak_in
  signed int dkpeak_in;
  // dktime_in
  signed int dktime_in;
  // record
  signed int record;
  // mute
  signed int mute;
  // monitor
  signed int monitor;
  // thru
  signed int thru;
  // playback_take
  unsigned int playback_take;
};

struct take_s
{
  // ntrack
  unsigned int ntrack;
  // track_port_map
  unsigned int track_port_map[24l];
  // port_has_track
  unsigned int port_has_track[24l];
  // port_has_lock
  unsigned int port_has_lock[24l];
  // take_file
  char *take_file;
  // take_fd
  struct SNDFILE_tag *take_fd;
  // info
  struct SF_INFO info;
  // buf
  float *buf;
};

struct pos_s
{
  // port
  unsigned int port;
  // take
  unsigned int take;
  // inout
  signed int inout;
  // con_in
  signed int con_in;
  // con_out
  signed int con_out;
  // n_con_in
  signed int n_con_in;
  // n_con_out
  signed int n_con_out;
};

struct meterec_s
{
  // fd_log
  struct _IO_FILE *fd_log;
  // session
  char *session;
  // session_file
  char *session_file;
  // setup_file
  char *setup_file;
  // conf_file
  char *conf_file;
  // log_file
  char *log_file;
  // jack_name
  char *jack_name;
  // record_sts
  unsigned int record_sts;
  // record_cmd
  unsigned int record_cmd;
  // playback_sts
  unsigned int playback_sts;
  // playback_cmd
  unsigned int playback_cmd;
  // keyboard_cmd
  unsigned int keyboard_cmd;
  // curses_sts
  unsigned int curses_sts;
  // config_sts
  unsigned int config_sts;
  // jack_sts
  unsigned int jack_sts;
  // jack_transport
  unsigned int jack_transport;
  // connect_ports
  signed int connect_ports;
  // all_input_ports
  const char **all_input_ports;
  // all_output_ports
  const char **all_output_ports;
  // n_ports
  unsigned int n_ports;
  // ports
  struct port_s ports[24l];
  // n_takes
  unsigned int n_takes;
  // takes
  struct take_s takes[100l];
  // n_tracks
  unsigned int n_tracks;
  // client
  struct _jack_client *client;
  // jack_buffsize
  unsigned int jack_buffsize;
  // monitor
  struct _jack_port *monitor;
  // seek_index
  unsigned int seek_index[12l];
  // jack
  struct jack_s jack;
  // disk
  struct disk_s disk;
  // loop
  struct loop_s loop;
  // pos
  struct pos_s pos;
  // display
  struct display_s display;
  // event
  struct event_s *event;
  // event_mutex
  union anonymous$4 event_mutex;
  // output_fmt
  unsigned int output_fmt;
  // output_ext
  char *output_ext;
  // write_disk_buffer_thread_pos
  unsigned int write_disk_buffer_thread_pos;
  // write_disk_buffer_process_pos
  unsigned int write_disk_buffer_process_pos;
  // write_disk_buffer_overflow
  unsigned int write_disk_buffer_overflow;
  // read_disk_buffer_thread_pos
  unsigned int read_disk_buffer_thread_pos;
  // read_disk_buffer_process_pos
  unsigned int read_disk_buffer_process_pos;
  // read_disk_buffer_overflow
  unsigned int read_disk_buffer_overflow;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct time_s
{
  // h
  unsigned int h;
  // m
  unsigned int m;
  // s
  unsigned int s;
  // ms
  unsigned int ms;
  // frm
  unsigned int frm;
  // rate
  unsigned int rate;
};


// cn_dt
// file ports.c line 30
unsigned long int cn_dt = (unsigned long int)(void *)0;
// conf_file
// file meterec.c line 56
char *conf_file = "meterec";
// kb_dt
// file meterec.c line 64
unsigned long int kb_dt = (unsigned long int)(void *)0;
// line
// file display.c line 34
char *line;
// mainwin
// file meterec.c line 53
struct _win_st *mainwin = (struct _win_st *)(void *)0;
// meterec
// file meterec.c line 66
struct meterec_s *meterec;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// output_ext
// file meterec.c line 59
char *output_ext = "w64";
// rd_dt
// file meterec.c line 64
unsigned long int rd_dt = (unsigned long int)(void *)0;
// running
// file meterec.c line 55
signed int running = 1;
// scale
// file display.c line 33
char *scale;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdscr
// file /usr/include/curses.h line 1395
extern struct _win_st *stdscr;
// wr_dt
// file meterec.c line 64
unsigned long int wr_dt = (unsigned long int)(void *)0;

// add_event
// file queue.c line 35
void add_event(struct meterec_s *meterec, unsigned int queue, unsigned int type, unsigned int old_playhead, unsigned int new_playhead, unsigned int buffer_pos)
{
  struct event_s *event = meterec->event;
  if(event == ((struct event_s *)NULL))
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct event_s) /*40ul*/ );
    event = (struct event_s *)return_value_malloc$1;
    event->prev = (struct event_s *)(void *)0;
    event->next = (struct event_s *)(void *)0;
    meterec->event = event;
  }

  else
  {
    for( ; !(event->next == ((struct event_s *)NULL)); event = event->next)
      ;
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sizeof(struct event_s) /*40ul*/ );
    event->next = (struct event_s *)return_value_malloc$2;
    event->next->prev = event;
    event->next->next = (struct event_s *)(void *)0;
    event = event->next;
  }
  static unsigned int id = (unsigned int)0;
  event->id = id;
  event->type = type;
  event->queue = queue;
  event->old_playhead = old_playhead;
  event->new_playhead = new_playhead;
  event->buffer_pos = buffer_pos;
  id = id + 1u;
}

// cancel_record
// file meterec.h line 320
void cancel_record(struct meterec_s *meterec)
{
  meterec->record_cmd = (unsigned int)0;
  pthread_join(wr_dt, (void **)(void *)0);
  meterec->n_takes = meterec->n_takes - 1u;
  if(!(meterec->config_sts == 0u))
    save_conf(meterec);

}

// changed_takes_to_playback
// file meterec.h line 313
signed int changed_takes_to_playback(struct meterec_s *meterec)
{
  unsigned int port = (unsigned int)0;
  unsigned int return_value_take_to_playback$1;
  for( ; !(port >= meterec->n_ports); port = port + 1u)
  {
    return_value_take_to_playback$1=take_to_playback(meterec, port);
    if(!(meterec->ports[(signed long int)port].playback_take == return_value_take_to_playback$1))
      return 1;

  }
  return 0;
}

// cleanup
// file meterec.c line 130
static void cleanup()
{
  if(!(meterec->jack_sts == 0u))
    stop(meterec);

  running = 0;
  if(!(meterec->curses_sts == 0u))
    cleanup_curse();

  if(!(meterec->config_sts == 0u))
    save_conf(meterec);

  if(!(rd_dt == 0ul))
    pthread_join(rd_dt, (void **)(void *)0);

  if(!(wr_dt == 0ul))
    pthread_join(wr_dt, (void **)(void *)0);

  if(!(meterec->jack_sts == 0u))
    cleanup_jack(meterec);

  if(!(meterec->fd_log == ((struct _IO_FILE *)NULL)))
    fclose(meterec->fd_log);

}

// cleanup_curse
// file meterec.c line 112
void cleanup_curse(void)
{
  delwin(mainwin);
  endwin();
  wrefresh(stdscr);
  fprintf(meterec->fd_log, "Stopped ncurses interface.\n");
}

// cleanup_jack
// file meterec.c line 72
void cleanup_jack(struct meterec_s *meterec)
{
  const char **all_ports;
  unsigned int i;
  unsigned int port;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$4;
  if(!(meterec->client == ((struct _jack_client *)NULL)))
  {
    port = (unsigned int)0;
    for( ; !(port >= meterec->n_ports); port = port + 1u)
    {
      if(!(meterec->ports[(signed long int)port].input == ((struct _jack_port *)NULL)))
      {
        all_ports=jack_port_get_all_connections(meterec->client, meterec->ports[(signed long int)port].input);
        i = (unsigned int)0;
        do
        {
          if(!(all_ports == ((const char **)NULL)))
            tmp_if_expr$1 = all_ports[(signed long int)i] != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$1 = (_Bool)0;
          if(!tmp_if_expr$1)
            break;

          const char *return_value_jack_port_name$2;
          return_value_jack_port_name$2=jack_port_name(meterec->ports[(signed long int)port].input);
          fprintf(meterec->fd_log, "Disconnecting input port '%s' from '%s'.\n", return_value_jack_port_name$2, all_ports[(signed long int)i]);
          const char *return_value_jack_port_name$3;
          return_value_jack_port_name$3=jack_port_name(meterec->ports[(signed long int)port].input);
          jack_disconnect(meterec->client, all_ports[(signed long int)i], return_value_jack_port_name$3);
          i = i + 1u;
        }
        while((_Bool)1);
        free((void *)all_ports);
      }

      if(!(meterec->ports[(signed long int)port].output == ((struct _jack_port *)NULL)))
      {
        all_ports=jack_port_get_all_connections(meterec->client, meterec->ports[(signed long int)port].output);
        i = (unsigned int)0;
        do
        {
          if(!(all_ports == ((const char **)NULL)))
            tmp_if_expr$4 = all_ports[(signed long int)i] != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$4 = (_Bool)0;
          if(!tmp_if_expr$4)
            break;

          const char *return_value_jack_port_name$5;
          return_value_jack_port_name$5=jack_port_name(meterec->ports[(signed long int)port].output);
          fprintf(meterec->fd_log, "Disconnecting output port '%s' from '%s'.\n", return_value_jack_port_name$5, all_ports[(signed long int)i]);
          const char *return_value_jack_port_name$6;
          return_value_jack_port_name$6=jack_port_name(meterec->ports[(signed long int)port].output);
          jack_disconnect(meterec->client, all_ports[(signed long int)i], return_value_jack_port_name$6);
          i = i + 1u;
        }
        while((_Bool)1);
        free((void *)all_ports);
      }

    }
    jack_client_close(meterec->client);
    fprintf(meterec->fd_log, "Closed jack client connection.\n");
  }

}

// clr_loop
// file meterec.h line 323
void clr_loop(struct meterec_s *meterec, unsigned int bound)
{
  meterec->loop.enable = (unsigned int)0;
  if(!((1u & bound) == 0u))
    meterec->loop.low = (unsigned int)-1;

  if(!((2u & bound) == 0u))
    meterec->loop.high = (unsigned int)-1;

  pthread_mutex_lock(&meterec->event_mutex);
  add_event(meterec, (unsigned int)1, (unsigned int)2, (unsigned int)-1, (unsigned int)-1, (unsigned int)-1);
  pthread_mutex_unlock(&meterec->event_mutex);
}

// color_port
// file display.c line 123
static void color_port(struct meterec_s *meterec, unsigned int port)
{
  if(!(meterec->ports[(signed long int)port].record == 0))
  {
    if(meterec->record_sts == 3u)
      wcolor_set(stdscr, (signed short int)3, (void *)0);

    else
      wcolor_set(stdscr, (signed short int)2, (void *)0);
  }

  else
    if(!(meterec->ports[(signed long int)port].mute == 0))
      wcolor_set(stdscr, (signed short int)0, (void *)0);

    else
      wcolor_set(stdscr, (signed short int)1, (void *)0);
}

// compute_takes_to_playback
// file meterec.h line 311
void compute_takes_to_playback(struct meterec_s *meterec)
{
  unsigned int port = (unsigned int)0;
  for( ; !(port >= meterec->n_ports); port = port + 1u)
    meterec->ports[(signed long int)port].playback_take=take_to_playback(meterec, port);
}

// compute_tracks_to_record
// file meterec.h line 312
void compute_tracks_to_record(struct meterec_s *meterec)
{
  unsigned int port;
  meterec->n_tracks = (unsigned int)0;
  port = (unsigned int)0;
  for( ; !(port >= meterec->n_ports); port = port + 1u)
    if(!(meterec->ports[(signed long int)port].record == 0))
    {
      meterec->takes[(signed long int)(meterec->n_takes + (unsigned int)1)].port_has_track[(signed long int)port] = (unsigned int)1;
      meterec->takes[(signed long int)(meterec->n_takes + (unsigned int)1)].track_port_map[(signed long int)meterec->n_tracks] = port;
      meterec->n_tracks = meterec->n_tracks + 1u;
    }

  meterec->takes[(signed long int)(meterec->n_takes + (unsigned int)1)].ntrack = meterec->n_tracks;
}

// connect_all_ports
// file ports.c line 272
void * connect_all_ports(void *d)
{
  unsigned int port;
  unsigned int con;
  struct meterec_s *connect_all_ports$$1$$meterec = (struct meterec_s *)d;
  port = (unsigned int)0;
  for( ; !(port >= connect_all_ports$$1$$meterec->n_ports); port = port + 1u)
  {
    con = (unsigned int)0;
    for( ; !(con >= connect_all_ports$$1$$meterec->ports[(signed long int)port].n_cons); con = con + 1u)
      connect_any_port(connect_all_ports$$1$$meterec, connect_all_ports$$1$$meterec->ports[(signed long int)port].connections[(signed long int)con], port);
  }
  return (void *)0;
}

// connect_any_port
// file ports.h line 31
void connect_any_port(struct meterec_s *meterec, char *port_name, unsigned int port)
{
  struct _jack_port *jack_port;
  signed int jack_flags;
  jack_port=jack_port_by_name(meterec->client, port_name);
  if(!(jack_port == ((struct _jack_port *)NULL)))
  {
    jack_flags=jack_port_flags(jack_port);
    if(!((1 & jack_flags) == 0))
    {
      const char *return_value_jack_port_name$1;
      return_value_jack_port_name$1=jack_port_name(meterec->ports[(signed long int)port].output);
      fprintf(meterec->fd_log, "Connecting '%s' to '%s'...\n", return_value_jack_port_name$1, port_name);
      signed int return_value_jack_port_connected_to$4;
      return_value_jack_port_connected_to$4=jack_port_connected_to(meterec->ports[(signed long int)port].output, port_name);
      if(!(return_value_jack_port_connected_to$4 == 0))
      {
        const char *return_value_jack_port_name$2;
        return_value_jack_port_name$2=jack_port_name(meterec->ports[(signed long int)port].output);
        const char *return_value_jack_port_name$3;
        return_value_jack_port_name$3=jack_port_name(jack_port);
        fprintf(meterec->fd_log, "Ports '%s' and '%s' already connected\n", return_value_jack_port_name$2, return_value_jack_port_name$3);
        goto __CPROVER_DUMP_L8;
      }

      const char *return_value_jack_port_name$7;
      return_value_jack_port_name$7=jack_port_name(meterec->ports[(signed long int)port].output);
      signed int return_value_jack_connect$8;
      return_value_jack_connect$8=jack_connect(meterec->client, return_value_jack_port_name$7, port_name);
      if(!(return_value_jack_connect$8 == 0))
      {
        const char *return_value_jack_port_name$5;
        return_value_jack_port_name$5=jack_port_name(meterec->ports[(signed long int)port].output);
        const char *return_value_jack_port_name$6;
        return_value_jack_port_name$6=jack_port_name(jack_port);
        fprintf(meterec->fd_log, "Cannot connect port '%s' to '%s'\n", return_value_jack_port_name$5, return_value_jack_port_name$6);
        exit_on_error("Cannot connect ports");
      }

    }

    if(!((2 & jack_flags) == 0))
    {
      const char *return_value_jack_port_name$9;
      return_value_jack_port_name$9=jack_port_name(meterec->ports[(signed long int)port].input);
      fprintf(meterec->fd_log, "Connecting '%s' to '%s'...\n", port_name, return_value_jack_port_name$9);
      signed int return_value_jack_port_connected_to$12;
      return_value_jack_port_connected_to$12=jack_port_connected_to(meterec->ports[(signed long int)port].input, port_name);
      if(!(return_value_jack_port_connected_to$12 == 0))
      {
        const char *return_value_jack_port_name$10;
        return_value_jack_port_name$10=jack_port_name(meterec->ports[(signed long int)port].input);
        const char *return_value_jack_port_name$11;
        return_value_jack_port_name$11=jack_port_name(jack_port);
        fprintf(meterec->fd_log, "Ports '%s' and '%s' already connected\n", return_value_jack_port_name$10, return_value_jack_port_name$11);
        goto __CPROVER_DUMP_L8;
      }

      const char *return_value_jack_port_name$15;
      return_value_jack_port_name$15=jack_port_name(meterec->ports[(signed long int)port].input);
      signed int return_value_jack_connect$16;
      return_value_jack_connect$16=jack_connect(meterec->client, port_name, return_value_jack_port_name$15);
      if(!(return_value_jack_connect$16 == 0))
      {
        const char *return_value_jack_port_name$13;
        return_value_jack_port_name$13=jack_port_name(jack_port);
        const char *return_value_jack_port_name$14;
        return_value_jack_port_name$14=jack_port_name(meterec->ports[(signed long int)port].input);
        fprintf(meterec->fd_log, "Cannot connect port '%s' to '%s'\n", return_value_jack_port_name$13, return_value_jack_port_name$14);
        exit_on_error("Cannot connect ports");
      }

    }

  }


__CPROVER_DUMP_L8:
  ;
}

// count_all_io_ports
// file ports.c line 91
void count_all_io_ports(struct meterec_s *meterec)
{
  meterec->pos.n_con_in = 0;
  for( ; !(meterec->all_output_ports[(signed long int)(1 + meterec->pos.n_con_in)] == ((const char *)NULL)); meterec->pos.n_con_in = meterec->pos.n_con_in + 1)
    ;
  meterec->pos.n_con_out = 0;
  for( ; !(meterec->all_input_ports[(signed long int)(1 + meterec->pos.n_con_out)] == ((const char *)NULL)); meterec->pos.n_con_out = meterec->pos.n_con_out + 1)
    ;
}

// create_input_port
// file ports.h line 25
void create_input_port(struct meterec_s *meterec, unsigned int port)
{
  char port_name[10l];
  sprintf(port_name, "in_%d", port + (unsigned int)1);
  fprintf(meterec->fd_log, "Creating input port '%s'.\n", (const void *)port_name);
  meterec->ports[(signed long int)port].input=jack_port_register(meterec->client, port_name, "32 bit float mono audio", (unsigned long int)1, (unsigned long int)0);
  if(meterec->ports[(signed long int)port].input == ((struct _jack_port *)NULL))
  {
    fprintf(meterec->fd_log, "Cannot register input port '%s'.\n", (const void *)port_name);
    exit_on_error("Cannot register input port");
  }

}

// create_monitor_port
// file ports.c line 182
void create_monitor_port(struct meterec_s *meterec)
{
  const char port_name[8l] = { 'm', 'o', 'n', 'i', 't', 'o', 'r', 0 };
  fprintf(meterec->fd_log, "Creating output port '%s'.\n", (const void *)port_name);
  meterec->monitor=jack_port_register(meterec->client, port_name, "32 bit float mono audio", (unsigned long int)2, (unsigned long int)0);
  if(meterec->monitor == ((struct _jack_port *)NULL))
  {
    fprintf(meterec->fd_log, "Cannot register output port '%s'.\n", (const void *)port_name);
    exit_on_error("Cannot register output port");
  }

}

// create_output_port
// file ports.h line 26
void create_output_port(struct meterec_s *meterec, unsigned int port)
{
  char port_name[10l];
  sprintf(port_name, "out_%d", port + (unsigned int)1);
  fprintf(meterec->fd_log, "Creating output port '%s'.\n", (const void *)port_name);
  meterec->ports[(signed long int)port].output=jack_port_register(meterec->client, port_name, "32 bit float mono audio", (unsigned long int)2, (unsigned long int)0);
  if(meterec->ports[(signed long int)port].output == ((struct _jack_port *)NULL))
  {
    fprintf(meterec->fd_log, "Cannot register output port '%s'.\n", (const void *)port_name);
    exit_on_error("Cannot register output port");
  }

}

// deregister_disconnect_port
// file ports.c line 395
void deregister_disconnect_port(struct meterec_s *meterec, char *port_name, unsigned int port)
{
  deregister_port(meterec, port_name, port);
  disconnect_any_port(meterec, port_name, port);
}

// deregister_port
// file ports.c line 248
void deregister_port(struct meterec_s *meterec, char *port_name, unsigned int port)
{
  unsigned int con;
  unsigned int n_cons = meterec->ports[(signed long int)port].n_cons;
  con = (unsigned int)0;
  signed int return_value_strcmp$1;
  for( ; !(con >= n_cons); con = con + 1u)
  {
    return_value_strcmp$1=strcmp(meterec->ports[(signed long int)port].connections[(signed long int)con], port_name);
    if(return_value_strcmp$1 == 0)
      break;

  }
  if(!(con >= n_cons))
  {
    free((void *)meterec->ports[(signed long int)port].connections[(signed long int)con]);
    n_cons = n_cons - 1u;
    for( ; !(con >= n_cons); con = con + 1u)
      meterec->ports[(signed long int)port].connections[(signed long int)con] = meterec->ports[(signed long int)port].connections[(signed long int)(con + (unsigned int)1)];
    meterec->ports[(signed long int)port].connections[(signed long int)(n_cons + (unsigned int)1)] = (char *)(void *)0;
    meterec->ports[(signed long int)port].n_cons = n_cons;
  }

}

// disconnect_any_port
// file ports.c line 339
void disconnect_any_port(struct meterec_s *meterec, char *port_name, unsigned int port)
{
  struct _jack_port *jack_port;
  signed int jack_flags;
  jack_port=jack_port_by_name(meterec->client, port_name);
  if(!(jack_port == ((struct _jack_port *)NULL)))
  {
    jack_flags=jack_port_flags(jack_port);
    if(!((1 & jack_flags) == 0))
    {
      const char *return_value_jack_port_name$1;
      return_value_jack_port_name$1=jack_port_name(meterec->ports[(signed long int)port].output);
      const char *return_value_jack_port_name$2;
      return_value_jack_port_name$2=jack_port_name(jack_port);
      fprintf(meterec->fd_log, "Disconnecting '%s' from '%s'...\n", return_value_jack_port_name$1, return_value_jack_port_name$2);
      signed int return_value_jack_port_connected_to$5;
      return_value_jack_port_connected_to$5=jack_port_connected_to(meterec->ports[(signed long int)port].output, port_name);
      if(return_value_jack_port_connected_to$5 == 0)
      {
        const char *return_value_jack_port_name$3;
        return_value_jack_port_name$3=jack_port_name(meterec->ports[(signed long int)port].output);
        const char *return_value_jack_port_name$4;
        return_value_jack_port_name$4=jack_port_name(jack_port);
        fprintf(meterec->fd_log, "Ports '%s' and '%s' already disconnected\n", return_value_jack_port_name$3, return_value_jack_port_name$4);
        goto __CPROVER_DUMP_L8;
      }

      const char *return_value_jack_port_name$8;
      return_value_jack_port_name$8=jack_port_name(meterec->ports[(signed long int)port].output);
      const char *return_value_jack_port_name$9;
      return_value_jack_port_name$9=jack_port_name(jack_port);
      signed int return_value_jack_disconnect$10;
      return_value_jack_disconnect$10=jack_disconnect(meterec->client, return_value_jack_port_name$8, return_value_jack_port_name$9);
      if(!(return_value_jack_disconnect$10 == 0))
      {
        const char *return_value_jack_port_name$6;
        return_value_jack_port_name$6=jack_port_name(meterec->ports[(signed long int)port].output);
        const char *return_value_jack_port_name$7;
        return_value_jack_port_name$7=jack_port_name(jack_port);
        fprintf(meterec->fd_log, "Cannot disconnect ports '%s' and '%s'\n", return_value_jack_port_name$6, return_value_jack_port_name$7);
        exit_on_error("Cannot disconnect ports");
      }

    }

    if(!((2 & jack_flags) == 0))
    {
      const char *return_value_jack_port_name$11;
      return_value_jack_port_name$11=jack_port_name(jack_port);
      const char *return_value_jack_port_name$12;
      return_value_jack_port_name$12=jack_port_name(meterec->ports[(signed long int)port].input);
      fprintf(meterec->fd_log, "Disconnecting '%s' from '%s'...\n", return_value_jack_port_name$11, return_value_jack_port_name$12);
      signed int return_value_jack_port_connected_to$15;
      return_value_jack_port_connected_to$15=jack_port_connected_to(meterec->ports[(signed long int)port].input, port_name);
      if(return_value_jack_port_connected_to$15 == 0)
      {
        const char *return_value_jack_port_name$13;
        return_value_jack_port_name$13=jack_port_name(meterec->ports[(signed long int)port].input);
        const char *return_value_jack_port_name$14;
        return_value_jack_port_name$14=jack_port_name(jack_port);
        fprintf(meterec->fd_log, "Ports '%s' and '%s' already disconnected\n", return_value_jack_port_name$13, return_value_jack_port_name$14);
        goto __CPROVER_DUMP_L8;
      }

      const char *return_value_jack_port_name$18;
      return_value_jack_port_name$18=jack_port_name(jack_port);
      const char *return_value_jack_port_name$19;
      return_value_jack_port_name$19=jack_port_name(meterec->ports[(signed long int)port].input);
      signed int return_value_jack_disconnect$20;
      return_value_jack_disconnect$20=jack_disconnect(meterec->client, return_value_jack_port_name$18, return_value_jack_port_name$19);
      if(!(return_value_jack_disconnect$20 == 0))
      {
        const char *return_value_jack_port_name$16;
        return_value_jack_port_name$16=jack_port_name(jack_port);
        const char *return_value_jack_port_name$17;
        return_value_jack_port_name$17=jack_port_name(meterec->ports[(signed long int)port].input);
        fprintf(meterec->fd_log, "Cannot disconnect ports '%s' and '%s'\n", return_value_jack_port_name$16, return_value_jack_port_name$17);
        exit_on_error("Cannot disconnect ports");
      }

    }

  }


__CPROVER_DUMP_L8:
  ;
}

// display_cpu_load
// file display.c line 343
void display_cpu_load(struct meterec_s *meterec, unsigned int width)
{
  unsigned int size;
  unsigned int i;
  width = width - (unsigned int)(31 + 3 * 13);
  float return_value_jack_cpu_load$1;
  return_value_jack_cpu_load$1=jack_cpu_load(meterec->client);
  size = (unsigned int)(((float)width * return_value_jack_cpu_load$1) / (float)100);
  static unsigned int peak = (unsigned int)0;
  if(!(peak >= size))
    peak = size;

  printw("  .");
  i = (unsigned int)0;
  for( ; !(i >= width); i = i + 1u)
    if(!(i >= size))
      printw("|");

    else
      if(i == peak + 4294967295u)
        printw(":");

      else
        printw(" ");
  printw("'  ");
}

// display_header
// file display.c line 452
void display_header(struct meterec_s *meterec, unsigned int width)
{
  display_rd_status(meterec);
  display_rd_buffer(meterec);
  display_cpu_load(meterec, width);
  display_loop(meterec);
  display_wr_status(meterec);
  printw("\n");
}

// display_loop
// file display.c line 370
void display_loop(struct meterec_s *meterec)
{
  struct time_s low;
  struct time_s high;
  struct time_s now;
  if(meterec->loop.low == 4294967295u)
    printw("[-:--:--.---]");

  else
  {
    low.frm = meterec->loop.low;
    low.rate = meterec->jack.sample_rate;
    time_hms(&low);
    printw("[%d:%02d:%02d.%03d]", low.h, low.m, low.s, low.ms);
  }
  now.frm = (unsigned int)meterec->jack.playhead;
  now.rate = meterec->jack.sample_rate;
  time_hms(&now);
  printw(" %d:%02d:%02d.%03d ", now.h, now.m, now.s, now.ms);
  if(meterec->loop.high == 4294967295u)
    printw("[-:--:--.---]");

  else
  {
    high.frm = meterec->loop.high;
    high.rate = meterec->jack.sample_rate;
    time_hms(&high);
    printw("[%d:%02d:%02d.%03d]", high.h, high.m, high.s, high.ms);
  }
  printw("\n");
}

// display_meter
// file display.c line 137
void display_meter(struct meterec_s *meterec, signed int display_names, signed int width, signed int decay_len)
{
  signed int size_out;
  signed int size_in;
  signed int i;
  unsigned int port;
  width = width - 3;
  printw("%s\n", scale);
  printw("%s\n", line);
  port = (unsigned int)0;
  signed int tmp_post$1;
  for( ; !(port >= meterec->n_ports); port = port + 1u)
  {
    color_port(meterec, port);
    if(meterec->pos.port == port)
      wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);

    else
      wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
    printw("%02d", port + (unsigned int)1);
    display_port_recmode(&meterec->ports[(signed long int)port]);
    size_in=iec_scale(meterec->ports[(signed long int)port].db_in, width);
    size_out=iec_scale(meterec->ports[(signed long int)port].db_out, width);
    if(!(meterec->ports[(signed long int)port].dkmax_in >= size_in))
      meterec->ports[(signed long int)port].dkmax_in = size_in;

    if(!(meterec->ports[(signed long int)port].dkpeak_in >= size_in))
    {
      meterec->ports[(signed long int)port].dkpeak_in = size_in;
      meterec->ports[(signed long int)port].dktime_in = 0;
    }

    else
    {
      tmp_post$1 = meterec->ports[(signed long int)port].dktime_in;
      meterec->ports[(signed long int)port].dktime_in = meterec->ports[(signed long int)port].dktime_in + 1;
      if(!(decay_len >= tmp_post$1))
        meterec->ports[(signed long int)port].dkpeak_in = size_in;

    }
    i = 0;
    for( ; !(i >= width); i = i + 1)
    {
      if(!(display_names == 0))
      {
        if(i == width / 5)
        {
          if(!(meterec->ports[(signed long int)port].name == ((char *)NULL)))
          {
            printw("%s", meterec->ports[(signed long int)port].name);
            unsigned long int return_value_strlen$2;
            return_value_strlen$2=strlen(meterec->ports[(signed long int)port].name);
            i = i + (signed int)return_value_strlen$2;
          }

        }

      }

      if(!(i >= size_in + -1))
        printw("#");

      else
        if(i == meterec->ports[(signed long int)port].dkpeak_in + -1)
          printw("I");

        else
          if(i == meterec->ports[(signed long int)port].dkmax_in + -1)
          {
            if(!(width + -3 >= i))
              printw("X");

            else
              printw(":");
          }

          else
            if(!(i >= size_out + -1))
              printw("-");

            else
              printw(" ");
    }
    printw("\n");
  }
  wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
  wcolor_set(stdscr, (signed short int)0, (void *)0);
  printw("%s\n", line);
  printw("%s\n", scale);
  printw("  Port %2d ", meterec->pos.port + (unsigned int)1);
  display_port_info(&meterec->ports[(signed long int)meterec->pos.port]);
}

// display_port_info
// file display.c line 36
void display_port_info(struct port_s *port_p)
{
  if(port_p->record == 1)
    printw("[REC]");

  else
    if(port_p->record == 4)
      printw("[OVR]");

    else
      if(port_p->record == 2)
        printw("[DUB]");

      else
        printw("[   ]");
  if(!(port_p->mute == 0))
    printw("[MUTED]");

  else
    printw("[     ]");
  if(!(port_p->thru == 0))
    printw("[THRU]");

  else
    printw("[    ]");
  if(!(port_p->playback_take == 0u))
    printw(" PLAYING take %2d", port_p->playback_take);

  else
    printw(" PLAYING no take");
  printw(" | %5.1fdB", port_p->db_in);
  printw(" (%5.1fdB)", port_p->db_max_in);
  if(!(port_p->name == ((char *)NULL)))
    printw(" | %s", port_p->name);

}

// display_port_recmode
// file display.c line 70
void display_port_recmode(struct port_s *port_p)
{
  if(port_p->record == 1)
  {
    if(!(port_p->mute == 0))
      printw("r");

    else
      printw("R");
  }

  else
    if(port_p->record == 2)
    {
      if(!(port_p->mute == 0))
        printw("d");

      else
        printw("D");
    }

    else
      if(port_p->record == 4)
      {
        if(!(port_p->mute == 0))
          printw("o");

        else
          printw("O");
      }

      else
        if(!(port_p->mute == 0))
          printw("~");

        else
          printw("=");
}

// display_ports
// file display.c line 533
void display_ports(struct meterec_s *meterec)
{
  unsigned int port = (unsigned int)0;
  unsigned int i;
  signed int display_ports$$1$$line = 0;
  const char **in;
  const char **out = meterec->all_input_ports;
  in = meterec->all_output_ports;
  printw("\n\n\n");
  _Bool tmp_if_expr$2;
  unsigned long int return_value_strlen$3;
  _Bool tmp_if_expr$5;
  for( ; (_Bool)1; display_ports$$1$$line = display_ports$$1$$line + 1)
  {
    if(!(in == ((const char **)NULL)))
    {
      if(*in == ((const char *)NULL))
        goto __CPROVER_DUMP_L2;

    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(!(out == ((const char **)NULL)))
      {
        if(*out == ((const char *)NULL))
          goto __CPROVER_DUMP_L3;

      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        if(port >= meterec->n_ports)
          goto __CPROVER_DUMP_L38;

      }
    }
    printw("  ");
    if(!(in == ((const char **)NULL)))
      tmp_if_expr$2 = *in != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
    {
      if(meterec->pos.inout == -1)
      {
        if(meterec->pos.con_in == display_ports$$1$$line)
          wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);

      }

      signed int return_value_jack_port_connected_to$1;
      return_value_jack_port_connected_to$1=jack_port_connected_to(meterec->ports[(signed long int)meterec->pos.port].input, *in);
      if(!(return_value_jack_port_connected_to$1 == 0))
      {
        wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);
        printw("%20s", *in);
        wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);
        wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
        printw("-+");
      }

      else
        if(port == meterec->pos.port)
        {
          printw("%20s", *in);
          wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
          printw(" +");
          color_port(meterec, meterec->pos.port);
        }

        else
        {
          printw("%20s", *in);
          wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
          printw(" |");
        }
      in = in + 1l;
    }

    else
      if(!(port >= meterec->pos.port))
        printw("%20s |", (const void *)"");

      else
        if(port == meterec->pos.port)
          printw("%20s +", (const void *)"");

        else
          printw("%20s  ", (const void *)"");
    if(!(port >= meterec->n_ports))
    {
      if(meterec->pos.port == port)
      {
        printw("-");
        if(meterec->pos.inout == 0)
          wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);

        else
          wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);
      }

      else
        printw(" ");
      color_port(meterec, port);
      printw("%s:in_%-2d", meterec->jack_name, port + (unsigned int)1);
      wcolor_set(stdscr, (signed short int)0, (void *)0);
      if(!(meterec->ports[(signed long int)port].thru == 0))
        printw("-> ");

      else
        printw("   ");
      printw("%s:out_%-2d", meterec->jack_name, port + (unsigned int)1);
      wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);
      wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
    }

    else
    {
      i = (unsigned int)0;
      do
      {
        return_value_strlen$3=strlen(meterec->jack_name);
        if((unsigned long int)i >= 2ul * return_value_strlen$3 + 17ul)
          break;

        printw(" ");
        i = i + 1u;
      }
      while((_Bool)1);
    }
    if(meterec->pos.port == port)
      printw("-");

    else
      printw(" ");
    if(!(out == ((const char **)NULL)))
      tmp_if_expr$5 = *out != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
    {
      signed int return_value_jack_port_connected_to$4;
      return_value_jack_port_connected_to$4=jack_port_connected_to(meterec->ports[(signed long int)meterec->pos.port].output, *out);
      if(!(return_value_jack_port_connected_to$4 == 0))
      {
        printw("+-");
        wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);
      }

      else
        if(port == meterec->pos.port)
          printw("+ ");

        else
          printw("| ");
      if(meterec->pos.inout == 1)
      {
        if(meterec->pos.con_out == display_ports$$1$$line)
          wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);

      }

      printw("%s", *out);
      wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);
      wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
      out = out + 1l;
    }

    else
      if(!(port >= meterec->pos.port))
        printw("|");

      else
        if(port == meterec->pos.port)
          printw("+");

        else
          printw("");
    wcolor_set(stdscr, (signed short int)0, (void *)0);
    printw("\n");
    if(!(port >= meterec->n_ports))
      port = port + 1u;

  }

__CPROVER_DUMP_L38:
  ;
  wcolor_set(stdscr, (signed short int)0, (void *)0);
}

// display_rd_buffer
// file display.c line 274
void display_rd_buffer(struct meterec_s *meterec)
{
  signed int size;
  signed int i;
  const signed int width = 11;
  float return_value_read_disk_buffer_level$1;
  return_value_read_disk_buffer_level$1=read_disk_buffer_level(meterec);
  size = (signed int)((float)width * return_value_read_disk_buffer_level$1);
  static signed int peak = 0;
  if(!(peak >= size))
  {
    if(meterec->playback_sts == 3u)
      peak = size;

  }

  i = 0;
  for( ; !(i >= width); i = i + 1)
    if(i == peak + -1)
      printw(":");

    else
      if(!(size + -1 >= i))
        printw("I");

      else
        printw(" ");
  static char *pedale = "|";
  printw("%s", pedale);
  if(meterec->playback_sts == 3u)
  {
    if((signed int)*pedale == 47)
      pedale = "-";

    else
      if((signed int)*pedale == 45)
        pedale = "\\";

      else
        if((signed int)*pedale == 92)
          pedale = "|";

        else
          if((signed int)*pedale == 124)
            pedale = "/";

  }

}

// display_rd_status
// file display.c line 400
void display_rd_status(struct meterec_s *meterec)
{
  printw("[> ");
  if(meterec->playback_sts == 0u)
    printw("%-8s", (const void *)"OFF");

  else
    if(meterec->playback_sts == 1u)
      printw("%-8s", (const void *)"STARTING");

    else
      if(meterec->playback_sts == 3u)
        printw("%-8s", (const void *)"ONGOING");

      else
        if(meterec->playback_sts == 6u)
          printw("%-8s", (const void *)"PAUSED");

        else
          if(meterec->playback_sts == 5u)
            printw("%-8s", (const void *)"STOPING");

  printw("]");
}

// display_session
// file display.c line 466
void display_session(struct meterec_s *meterec)
{
  unsigned int take;
  unsigned int port;
  unsigned int y_pos;
  unsigned int x_pos;
  y_pos = meterec->pos.port;
  x_pos = meterec->pos.take;
  printw("  Take %2d ", x_pos);
  printw("%s", meterec->takes[(signed long int)x_pos].port_has_track[(signed long int)y_pos] != 0u ? "[CONTENT]" : "[       ]");
  printw("%s", meterec->takes[(signed long int)x_pos].port_has_lock[(signed long int)y_pos] != 0u ? "[LOCKED]" : "[      ]");
  printw("%s", meterec->ports[(signed long int)y_pos].playback_take == x_pos ? "[PLAYING]" : "[       ]");
  printw("\n\n");
  port = (unsigned int)0;
  for( ; !(port >= meterec->n_ports); port = port + 1u)
  {
    color_port(meterec, port);
    if(y_pos == port)
      wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);

    else
      wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
    printw("%02d", port + (unsigned int)1);
    display_port_recmode(&meterec->ports[(signed long int)port]);
    take = (unsigned int)1;
    for( ; !(take >= 1u + meterec->n_takes); take = take + 1u)
    {
      if(x_pos == take || y_pos == port)
        wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);

      else
        wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
      if(x_pos == take && y_pos == port)
        wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);

      if(meterec->ports[(signed long int)port].playback_take == take)
        wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);

      if(!(meterec->takes[(signed long int)take].port_has_lock[(signed long int)port] == 0u))
        printw(meterec->takes[(signed long int)take].port_has_track[(signed long int)port] != 0u ? "L" : "l");

      else
        if(meterec->ports[(signed long int)port].playback_take == take)
          printw("P");

        else
          if(!(meterec->takes[(signed long int)take].port_has_track[(signed long int)port] == 0u))
            printw("X");

          else
            printw("-");
      wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);
    }
    printw("\n");
  }
  wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 10 + 8), (void *)0);
  wcolor_set(stdscr, (signed short int)0, (void *)0);
  printw("\n\n");
  printw("  Port %2d ", y_pos + (unsigned int)1);
  display_port_info(&meterec->ports[(signed long int)y_pos]);
}

// display_wr_buffer
// file display.c line 309
void display_wr_buffer(struct meterec_s *meterec)
{
  signed int size;
  signed int i;
  const signed int width = 11;
  float return_value_write_disk_buffer_level$1;
  return_value_write_disk_buffer_level$1=write_disk_buffer_level(meterec);
  size = (signed int)((float)width * return_value_write_disk_buffer_level$1);
  static signed int peak = 0;
  if(!(peak >= size))
    peak = size;

  static char *pedale = "|";
  printw("%s", pedale);
  i = 0;
  for( ; !(i >= width); i = i + 1)
    if(!(i >= size + -1))
      printw("I");

    else
      if(i == peak + -1)
        printw(":");

      else
        printw(" ");
  if(meterec->record_sts == 3u)
  {
    if((signed int)*pedale == 47)
      pedale = "-";

    else
      if((signed int)*pedale == 45)
        pedale = "\\";

      else
        if((signed int)*pedale == 92)
          pedale = "|";

        else
          if((signed int)*pedale == 124)
            pedale = "/";

  }

}

// display_wr_status
// file display.c line 419
void display_wr_status(struct meterec_s *meterec)
{
  if(!(meterec->record_sts == 0u))
    wcolor_set(stdscr, (signed short int)3, (void *)0);

  printw("[O ");
  if(meterec->record_sts == 0u)
    printw("%-8s", (const void *)"OFF");

  else
    if(meterec->record_sts == 1u)
      printw("%-8s", (const void *)"STARTING");

    else
      if(meterec->record_sts == 3u)
        printw("%-8s", (const void *)"ONGOING");

      else
        if(meterec->record_sts == 5u)
          printw("%-8s", (const void *)"STOPING");

  printw("]");
  display_wr_buffer(meterec);
  if(!(meterec->record_sts == 0u))
  {
    wattr_on(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);
    printw(" Take %d", meterec->n_takes + (unsigned int)1);
    wattr_off(stdscr, (unsigned long int)((unsigned long int)1UL << 13 + 8), (void *)0);
  }

  if(!(meterec->write_disk_buffer_overflow == 0u))
    printw(" OVERFLOWS(%d)", meterec->write_disk_buffer_overflow);

  wcolor_set(stdscr, (signed short int)0, (void *)0);
}

// event_match
// file queue.c line 71
signed int event_match(struct event_s *event, unsigned int queue, unsigned int type)
{
  signed int match_type;
  signed int match_queue;
  if(!(type == 0u))
  {
    if(event->type == type)
      match_type = 1;

    else
      match_type = 0;
  }

  else
    match_type = 1;
  if(!(queue == 0u))
  {
    if(event->queue == queue)
      match_queue = 1;

    else
      match_queue = 0;
  }

  else
    match_queue = 1;
  return (signed int)(match_type != 0 && match_queue != 0);
}

// event_print
// file queue.c line 201
void event_print(struct meterec_s *meterec, unsigned int where, struct event_s *event)
{
  const char *stype = (const char *)(void *)0;
  const char *squeue = (const char *)(void *)0;
  char out[100l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  switch(event->type)
  {
    case (unsigned int)0:
    {
      stype = "ALL";
      break;
    }
    case (unsigned int)1:
    {
      stype = "SEEK";
      break;
    }
    case (unsigned int)3:
    {
      stype = "LOCK";
      break;
    }
    case (unsigned int)2:
      stype = "LOOP";
  }
  switch(event->queue)
  {
    case (unsigned int)0:
    {
      squeue = "ALL";
      break;
    }
    case (unsigned int)1:
    {
      squeue = "DISK";
      break;
    }
    case (unsigned int)3:
    {
      squeue = "JACK";
      break;
    }
    case (unsigned int)2:
      squeue = "PEND";
  }
  sprintf(out, "id %2d |queue %s |type %s |old %d |new %d |buf %d", event->id, squeue, stype, event->old_playhead, event->new_playhead, event->buffer_pos);
  if(where == 1u)
    printw("%s\n", (const void *)out);

  if(where == 2u)
    printf("%s\n", (const void *)out);

  if(where == 3u)
    fprintf(meterec->fd_log, "%s\n", (const void *)out);

}

// event_queue_print
// file queue.c line 171
void event_queue_print(struct meterec_s *meterec, unsigned int where)
{
  struct event_s *event;
  if(where == 1u)
    printw(">-------------------------------------------------------\n");

  if(where == 2u)
    printf(">-------------------------------------------------------\n");

  if(where == 3u)
    fprintf(meterec->fd_log, ">-------------------------------------------------------\n");

  event = meterec->event;
  for( ; !(event == ((struct event_s *)NULL)); event = event->next)
    event_print(meterec, where, event);
  if(where == 1u)
    printw("^-------------------------------------------------------\n");

  if(where == 2u)
    printf("^-------------------------------------------------------\n");

  if(where == 3u)
    fprintf(meterec->fd_log, "^-------------------------------------------------------\n");

}

// exit_on_error
// file meterec.h line 310
void exit_on_error(char *reason)
{
  if(!(meterec->fd_log == ((struct _IO_FILE *)NULL)))
    fprintf(meterec->fd_log, "Error: %s\n", reason);

  printf("Error: %s\n", reason);
  cleanup();
  exit(1);
}

// file_exists
// file meterec.c line 507
signed int file_exists(char *file)
{
  struct _IO_FILE *fd_conf;
  fd_conf=fopen(file, "r");
  if(fd_conf == ((struct _IO_FILE *)NULL))
    return 0;

  else
  {
    fclose(fd_conf);
    return 1;
  }
}

// fill_buffer
// file disk.c line 254
unsigned int fill_buffer(struct meterec_s *meterec, unsigned int *zbuff_pos)
{
  unsigned int rdbuff_pos;
  unsigned int port;
  unsigned int take;
  unsigned int track;
  unsigned int ntrack = (unsigned int)0;
  unsigned int fill;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  if(meterec->read_disk_buffer_thread_pos == meterec->read_disk_buffer_process_pos)
    return meterec->read_disk_buffer_thread_pos;

  else
  {
    if(*zbuff_pos == 0u)
    {
      take = (unsigned int)1;
      for( ; !(take >= 1u + meterec->n_takes); take = take + 1u)
        if(!(meterec->takes[(signed long int)take].take_fd == ((struct SNDFILE_tag *)NULL)))
        {
          ntrack = meterec->takes[(signed long int)take].ntrack;
          signed long int return_value_sf_read_float$1;
          return_value_sf_read_float$1=sf_read_float(meterec->takes[(signed long int)take].take_fd, meterec->takes[(signed long int)take].buf, (signed long int)((unsigned int)4096 * ntrack));
          fill = (unsigned int)return_value_sf_read_float$1;
          for( ; !(fill >= 4096u * ntrack); fill = fill + 1u)
            meterec->takes[(signed long int)take].buf[(signed long int)fill] = 0.0f;
        }

    }

    rdbuff_pos = meterec->read_disk_buffer_thread_pos;
    do
    {
      if(!(rdbuff_pos == meterec->read_disk_buffer_process_pos))
        tmp_if_expr$2 = *zbuff_pos < (unsigned int)4096 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$2 = (_Bool)0;
      if(!tmp_if_expr$2)
        break;

      take = (unsigned int)1;
      for( ; !(take >= 1u + meterec->n_takes); take = take + 1u)
        if(!(meterec->takes[(signed long int)take].take_fd == ((struct SNDFILE_tag *)NULL)))
        {
          ntrack = meterec->takes[(signed long int)take].ntrack;
          track = (unsigned int)0;
          for( ; !(track >= ntrack); track = track + 1u)
          {
            port = meterec->takes[(signed long int)take].track_port_map[(signed long int)track];
            if(meterec->ports[(signed long int)port].playback_take == take)
            {
              if(!(meterec->ports[(signed long int)port].record == 1))
                tmp_if_expr$3 = (_Bool)1;

              else
                tmp_if_expr$3 = !(meterec->record_sts != 0u) ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$3)
                meterec->ports[(signed long int)port].read_disk_buffer[(signed long int)rdbuff_pos] = meterec->takes[(signed long int)take].buf[(signed long int)(*zbuff_pos * ntrack + track)];

            }

          }
        }

      rdbuff_pos = rdbuff_pos + (unsigned int)1 & (unsigned int)(0x20000 - 1);
      *zbuff_pos = *zbuff_pos + 1u;
      meterec->disk.playhead = meterec->disk.playhead + 1ul;
    }
    while((_Bool)1);
    if(*zbuff_pos == 4096u)
      *zbuff_pos = (unsigned int)0;

    return rdbuff_pos;
  }
}

// filter_existing_ports
// file ports.c line 103
void filter_existing_ports(const char **port_list, const char *port_name_pattern)
{
  const char **tmp;
  const char **port;
  char *copy;
  char *pattern;
  unsigned int len;
  if(!(port_name_pattern == ((const char *)NULL)))
  {
    if(!(*port_name_pattern == 0))
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(port_name_pattern);
      len = (unsigned int)return_value_strlen$1;
      void *return_value_malloc$2;
      return_value_malloc$2=malloc((unsigned long int)(len + (unsigned int)2));
      pattern = (char *)return_value_malloc$2;
      strcpy(pattern, port_name_pattern);
      pattern[(signed long int)len] = (char)58;
      pattern[(signed long int)(len + (unsigned int)1)] = (char)0;
      port = port_list;
      if(!(port == ((const char **)NULL)))
        while(!(*port == ((const char *)NULL)))
        {
          unsigned long int return_value_strlen$3;
          return_value_strlen$3=strlen(*port);
          len = (unsigned int)return_value_strlen$3;
          void *return_value_malloc$4;
          return_value_malloc$4=malloc((unsigned long int)(len + (unsigned int)1));
          copy = (char *)return_value_malloc$4;
          strcpy(copy, *port);
          unsigned long int return_value_strlen$6;
          return_value_strlen$6=strlen(pattern);
          if(!(return_value_strlen$6 >= (unsigned long int)len))
          {
            unsigned long int return_value_strlen$5;
            return_value_strlen$5=strlen(pattern);
            copy[(signed long int)return_value_strlen$5] = (char)0;
          }

          signed int return_value_strcmp$7;
          return_value_strcmp$7=strcmp(copy, pattern);
          if(return_value_strcmp$7 == 0)
          {
            tmp = port;
            for( ; !(*port == ((const char *)NULL)); port = port + 1l)
              *port = port[(signed long int)1];
            port = tmp - (signed long int)1;
          }

          free((void *)copy);
          port = port + 1l;
        }

    }

  }

}

// find_existing_takes
// file meterec.c line 671
void find_existing_takes(struct meterec_s *meterec)
{
  unsigned int take = (unsigned int)1;
  for( ; !(take >= 100u); take = take + 1u)
  {
    signed int return_value_find_take_name$4;
    return_value_find_take_name$4=find_take_name(meterec->session, take, &meterec->takes[(signed long int)take].take_file);
    if(!(return_value_find_take_name$4 == 0))
      fprintf(meterec->fd_log, "Found existing file '%s' for take %d\n", meterec->takes[(signed long int)take].take_file, take);

    else
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(meterec->session);
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen("_0000.????");
      void *return_value_malloc$3;
      return_value_malloc$3=malloc(return_value_strlen$1 + return_value_strlen$2 + (unsigned long int)1);
      meterec->takes[(signed long int)take].take_file = (char *)return_value_malloc$3;
      sprintf(meterec->takes[(signed long int)take].take_file, "%s_%04d.%s", meterec->session, take, meterec->output_ext);
    }
  }
}

// find_first_event
// file queue.c line 95
struct event_s * find_first_event(struct meterec_s *meterec, unsigned int queue, unsigned int type)
{
  struct event_s *event;
  if(meterec->event == ((struct event_s *)NULL))
    return (struct event_s *)(void *)0;

  else
  {
    event = meterec->event;
    while(!(event == ((struct event_s *)NULL)))
    {
      signed int return_value_event_match$1;
      return_value_event_match$1=event_match(event, queue, type);
      if(!(return_value_event_match$1 == 0))
        return event;

      event = event->next;
    }
    return (struct event_s *)(void *)0;
  }
}

// find_last_event
// file queue.c line 115
struct event_s * find_last_event(struct meterec_s *meterec, unsigned int queue, unsigned int type)
{
  struct event_s *event;
  if(meterec->event == ((struct event_s *)NULL))
    return (struct event_s *)(void *)0;

  else
  {
    event = meterec->event;
    for( ; !(event->next == ((struct event_s *)NULL)); event = event->next)
      ;
    while(!(event == ((struct event_s *)NULL)))
    {
      signed int return_value_event_match$1;
      return_value_event_match$1=event_match(event, queue, type);
      if(!(return_value_event_match$1 == 0))
        return event;

      event = event->prev;
    }
    return (struct event_s *)(void *)0;
  }
}

// find_rm_events
// file queue.c line 158
void find_rm_events(struct meterec_s *meterec, unsigned int queue, unsigned int type)
{
  struct event_s *event = meterec->event;
  while(!(event == ((struct event_s *)NULL)))
  {
    event=find_first_event(meterec, queue, type);
    rm_event(meterec, event);
  }
}

// find_take_name
// file meterec.c line 591
signed int find_take_name(char *session, unsigned int take, char **name)
{
  struct dirent *entry;
  struct __dirstream *dp;
  char *current = ".";
  char *pattern;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(session);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen("_0000.");
  void *return_value_malloc$3;
  return_value_malloc$3=malloc(return_value_strlen$1 + return_value_strlen$2 + (unsigned long int)1);
  pattern = (char *)return_value_malloc$3;
  sprintf(pattern, "%s_%04d.", session, take);
  dp=opendir(current);
  unsigned long int return_value_strlen$6;
  signed int return_value_strncmp$7;
  if(dp == ((struct __dirstream *)NULL))
  {
    perror("opendir");
    return 0;
  }

  else
  {
    do
    {
      entry=readdir(dp);
      if(entry == ((struct dirent *)NULL))
        break;

      return_value_strlen$6=strlen(pattern);
      return_value_strncmp$7=strncmp(entry->d_name, pattern, return_value_strlen$6);
      if(return_value_strncmp$7 == 0)
      {
        unsigned long int return_value_strlen$4;
        return_value_strlen$4=strlen(entry->d_name);
        void *return_value_malloc$5;
        return_value_malloc$5=malloc(return_value_strlen$4 + (unsigned long int)1);
        *name = (char *)return_value_malloc$5;
        strcpy(*name, entry->d_name);
        closedir(dp);
        free((void *)pattern);
        return 1;
      }

    }
    while((_Bool)1);
    closedir(dp);
    free((void *)pattern);
    return 0;
  }
}

// free_options
// file meterec.c line 494
void free_options(struct meterec_s *meterec)
{
  free((void *)meterec->all_input_ports);
  free((void *)meterec->all_output_ports);
  free((void *)meterec->session);
  free((void *)meterec->session_file);
  free((void *)meterec->setup_file);
  free((void *)meterec->conf_file);
  free((void *)meterec->log_file);
  free((void *)meterec->output_ext);
}

// free_ports
// file meterec.c line 359
void free_ports(struct meterec_s *meterec)
{
  unsigned int port;
  unsigned int con;
  port = (unsigned int)0;
  for( ; !(port >= 24u); port = port + 1u)
  {
    free((void *)meterec->ports[(signed long int)port].input_connected);
    free((void *)meterec->ports[(signed long int)port].output_connected);
    con = (unsigned int)0;
    for( ; !(con >= meterec->ports[(signed long int)port].n_cons); con = con + 1u)
      free((void *)meterec->ports[(signed long int)port].connections[(signed long int)con]);
    free((void *)meterec->ports[(signed long int)port].name);
    free((void *)meterec->ports[(signed long int)port].write_disk_buffer);
    free((void *)meterec->ports[(signed long int)port].read_disk_buffer);
  }
}

// free_scale
// file display.c line 219
void free_scale(void)
{
  free((void *)scale);
  free((void *)line);
}

// free_takes
// file meterec.c line 408
void free_takes(struct meterec_s *meterec)
{
  unsigned int take = (unsigned int)0;
  for( ; !(take >= 100u); take = take + 1u)
  {
    free((void *)meterec->takes[(signed long int)take].take_file);
    free((void *)meterec->takes[(signed long int)take].take_fd);
    free((void *)meterec->takes[(signed long int)take].buf);
  }
}

// fsleep
// file meterec.c line 168
static signed int fsleep(float secs)
{
  signed int return_value_usleep$1;
  return_value_usleep$1=usleep((unsigned int)(secs * (float)1000000ul));
  return return_value_usleep$1;
}

// halt
// file meterec.h line 309
void halt(signed int sig)
{
  running = 0;
  if(!(sig == 0))
    signal(sig, (void (*)(signed int))0);

}

// iec_scale
// file display.c line 99
static signed int iec_scale(float db, signed int size)
{
  float def = 0.0f;
  if(db < -70.000000f)
    def = 0.0f;

  else
    if(db < -60.000000f)
      def = (db + 70.0f) * 0.25f;

    else
      if(db < -50.000000f)
        def = (db + 60.0f) * 0.5f + 2.5f;

      else
        if(db < -40.000000f)
          def = (db + 50.0f) * 0.75f + 7.5f;

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
  return (signed int)((def / 100.0f) * (float)size);
}

// init_display_scale
// file display.c line 224
void init_display_scale(unsigned int width)
{
  unsigned int i = (unsigned int)0;
  const signed int marks[12l] = { 0, -3, -5, -10, -15, -20, -25, -30, -35, -40, -50, -60 };
  char *scale0;
  char *line0;
  width = width - (unsigned int)3;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)(width + (unsigned int)1 + (unsigned int)2));
  scale0 = (char *)return_value_malloc$1;
  void *return_value_malloc$2;
  return_value_malloc$2=malloc((unsigned long int)(width + (unsigned int)1 + (unsigned int)2));
  line0 = (char *)return_value_malloc$2;
  void *return_value_malloc$3;
  return_value_malloc$3=malloc((unsigned long int)(width + (unsigned int)1 + (unsigned int)2));
  scale = (char *)return_value_malloc$3;
  void *return_value_malloc$4;
  return_value_malloc$4=malloc((unsigned long int)(width + (unsigned int)1 + (unsigned int)2));
  line = (char *)return_value_malloc$4;
  i = (unsigned int)0;
  for( ; !(i >= width); i = i + 1u)
  {
    scale0[(signed long int)i] = (char)32;
    line0[(signed long int)i] = (char)95;
  }
  scale0[(signed long int)width] = (char)0;
  line0[(signed long int)width] = (char)0;
  i = (unsigned int)0;
  for( ; !(i >= 12u); i = i + 1u)
  {
    char mark[5l];
    signed int pos;
    signed int return_value_iec_scale$5;
    return_value_iec_scale$5=iec_scale((float)marks[(signed long int)i], (signed int)width);
    pos = return_value_iec_scale$5 - 1;
    signed int spos;
    signed int slen;
    snprintf(mark, (unsigned long int)4, "%d", marks[(signed long int)i]);
    unsigned long int return_value_strlen$6;
    return_value_strlen$6=strlen(mark);
    slen = (signed int)return_value_strlen$6;
    spos = pos - slen / 2;
    if(!(spos >= 0))
      spos = 0;

    unsigned long int return_value_strlen$7;
    return_value_strlen$7=strlen(mark);
    if(!((unsigned long int)width >= return_value_strlen$7 + (unsigned long int)spos))
      spos = (signed int)(width - (unsigned int)slen);

    memcpy((void *)(scale0 + (signed long int)spos), (const void *)mark, (unsigned long int)slen);
    line0[(signed long int)pos] = (char)124;
  }
  sprintf(scale, "  %s", scale0);
  sprintf(line, "  %s", line0);
  free((void *)scale0);
  free((void *)line0);
}

// init_ports
// file meterec.c line 313
void init_ports(struct meterec_s *meterec)
{
  unsigned int port;
  unsigned int con;
  meterec->n_ports = (unsigned int)0;
  port = (unsigned int)0;
  for( ; !(port >= 24u); port = port + 1u)
  {
    meterec->ports[(signed long int)port].input = (struct _jack_port *)(void *)0;
    meterec->ports[(signed long int)port].output = (struct _jack_port *)(void *)0;
    meterec->ports[(signed long int)port].input_connected = (const char **)(void *)0;
    meterec->ports[(signed long int)port].output_connected = (const char **)(void *)0;
    meterec->ports[(signed long int)port].n_cons = (unsigned int)0;
    con = (unsigned int)0;
    for( ; !(con >= 24u); con = con + 1u)
      meterec->ports[(signed long int)port].connections[(signed long int)con] = (char *)(void *)0;
    meterec->ports[(signed long int)port].name = (char *)(void *)0;
    meterec->ports[(signed long int)port].write_disk_buffer = (float *)(void *)0;
    meterec->ports[(signed long int)port].read_disk_buffer = (float *)(void *)0;
    meterec->ports[(signed long int)port].monitor = 0;
    meterec->ports[(signed long int)port].record = 0;
    meterec->ports[(signed long int)port].mute = 0;
    meterec->ports[(signed long int)port].thru = 0;
    meterec->ports[(signed long int)port].peak_out = 0.0f;
    meterec->ports[(signed long int)port].db_out = 0.0f;
    meterec->ports[(signed long int)port].peak_in = 0.0f;
    meterec->ports[(signed long int)port].db_in = 0.0f;
    meterec->ports[(signed long int)port].max_in = 0.0f;
    meterec->ports[(signed long int)port].db_max_in = 0.0f;
    meterec->ports[(signed long int)port].dkpeak_in = 0;
    meterec->ports[(signed long int)port].dktime_in = 0;
    meterec->ports[(signed long int)port].dkmax_in = 0;
    meterec->ports[(signed long int)port].playback_take = (unsigned int)0;
  }
}

// init_takes
// file meterec.c line 380
void init_takes(struct meterec_s *meterec)
{
  unsigned int port;
  unsigned int take;
  unsigned int track;
  meterec->n_takes = (unsigned int)0;
  take = (unsigned int)0;
  for( ; !(take >= 100u); take = take + 1u)
  {
    meterec->takes[(signed long int)take].take_file = (char *)(void *)0;
    meterec->takes[(signed long int)take].take_fd = (struct SNDFILE_tag *)(void *)0;
    meterec->takes[(signed long int)take].buf = (float *)(void *)0;
    meterec->takes[(signed long int)take].info.format = 0;
    meterec->takes[(signed long int)take].ntrack = (unsigned int)0;
    track = (unsigned int)0;
    for( ; !(track >= 24u); track = track + 1u)
      meterec->takes[(signed long int)take].track_port_map[(signed long int)track] = (unsigned int)0;
    port = (unsigned int)0;
    for( ; !(port >= 24u); port = port + 1u)
    {
      meterec->takes[(signed long int)take].port_has_track[(signed long int)port] = (unsigned int)0;
      meterec->takes[(signed long int)take].port_has_lock[(signed long int)port] = (unsigned int)0;
    }
  }
}

// keyboard_thread
// file keyboard.c line 48
void * keyboard_thread(void *arg)
{
  struct meterec_s *keyboard_thread$$1$$meterec;
  struct event_s *event;
  unsigned int y_pos;
  unsigned int x_pos;
  unsigned int port;
  unsigned int take;
  signed int key = 0;
  signed int freetext = 0;
  char *text = (char *)(void *)0;
  keyboard_thread$$1$$meterec = (struct meterec_s *)arg;
  noecho();
  cbreak();
  nodelay(stdscr, (_Bool)0);
  keypad(stdscr, (_Bool)1);
  signed int return_value_changed_takes_to_playback$1;
  signed int return_value_changed_takes_to_playback$2;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$10;
  signed int return_value_set_loop$11;
  while(!(keyboard_thread$$1$$meterec->keyboard_cmd == 0u))
  {
    key=wgetch(stdscr);
    fprintf(keyboard_thread$$1$$meterec->fd_log, "Key pressed: %d '%c'\n", key, key);
    y_pos = keyboard_thread$$1$$meterec->pos.port;
    x_pos = keyboard_thread$$1$$meterec->pos.take;
    if(!(freetext == 0))
    {
      if(key == 10)
        freetext = 0;

      else
        if(!(freetext >= 80) && (key == 127 || key == 263))
        {
          text = text - 1l;
          freetext = freetext + 1;
          *text = (char)95;
          text[(signed long int)1] = (char)0;
        }

        else
        {
          if(!(key >= 32))
            continue;

          if(key >= 127)
            continue;

          if(key == 34)
            continue;

          *text = (char)key;
          text[(signed long int)1] = (char)95;
          text[(signed long int)2] = (char)0;
          text = text + 1l;
          freetext = freetext - 1;
        }
      if(freetext == 0)
        *text = (char)0;

    }

    else
    {
      switch(keyboard_thread$$1$$meterec->display.view)
      {
        case (unsigned long int)1:
        {
          switch(key)
          {
            case 0404:
            {
              if(keyboard_thread$$1$$meterec->pos.take >= 2u)
                keyboard_thread$$1$$meterec->pos.take = keyboard_thread$$1$$meterec->pos.take - 1u;

              break;
            }
            case 0405:
              if(!(keyboard_thread$$1$$meterec->pos.take >= keyboard_thread$$1$$meterec->n_takes))
                keyboard_thread$$1$$meterec->pos.take = keyboard_thread$$1$$meterec->pos.take + 1u;

          }
          event=find_first_event(keyboard_thread$$1$$meterec, (unsigned int)0, (unsigned int)3);
          if(event == ((struct event_s *)NULL))
            switch(key)
            {
              case 76:
              {
                take = (unsigned int)0;
                for( ; !(take >= 1u + keyboard_thread$$1$$meterec->n_takes); take = take + 1u)
                  keyboard_thread$$1$$meterec->takes[(signed long int)take].port_has_lock[(signed long int)y_pos] = (unsigned int)0;
              }
              case 108:
              {
                keyboard_thread$$1$$meterec->takes[(signed long int)x_pos].port_has_lock[(signed long int)y_pos] = (unsigned int)!(keyboard_thread$$1$$meterec->takes[(signed long int)x_pos].port_has_lock[(signed long int)y_pos] != 0u);
                return_value_changed_takes_to_playback$1=changed_takes_to_playback(keyboard_thread$$1$$meterec);
                if(!(return_value_changed_takes_to_playback$1 == 0))
                {
                  if(!(keyboard_thread$$1$$meterec->playback_sts == 0u))
                  {
                    pthread_mutex_lock(&keyboard_thread$$1$$meterec->event_mutex);
                    add_event(keyboard_thread$$1$$meterec, (unsigned int)1, (unsigned int)3, (unsigned int)-1, (unsigned int)keyboard_thread$$1$$meterec->jack.playhead, (unsigned int)-1);
                    pthread_mutex_unlock(&keyboard_thread$$1$$meterec->event_mutex);
                  }

                }

                break;
              }
              case 65:
              {
                port = (unsigned int)0;
                for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
                {
                  take = (unsigned int)0;
                  for( ; !(take >= 1u + keyboard_thread$$1$$meterec->n_takes); take = take + 1u)
                    keyboard_thread$$1$$meterec->takes[(signed long int)take].port_has_lock[(signed long int)port] = (unsigned int)0;
                }
              }
              case 97:
              {
                if(!(keyboard_thread$$1$$meterec->takes[(signed long int)x_pos].port_has_lock[(signed long int)y_pos] == 0u))
                {
                  port = (unsigned int)0;
                  for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
                    keyboard_thread$$1$$meterec->takes[(signed long int)x_pos].port_has_lock[(signed long int)port] = (unsigned int)0;
                }

                else
                {
                  port = (unsigned int)0;
                  for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
                    keyboard_thread$$1$$meterec->takes[(signed long int)x_pos].port_has_lock[(signed long int)port] = (unsigned int)1;
                }
                return_value_changed_takes_to_playback$2=changed_takes_to_playback(keyboard_thread$$1$$meterec);
                if(!(return_value_changed_takes_to_playback$2 == 0))
                {
                  if(!(keyboard_thread$$1$$meterec->playback_sts == 0u))
                  {
                    pthread_mutex_lock(&keyboard_thread$$1$$meterec->event_mutex);
                    add_event(keyboard_thread$$1$$meterec, (unsigned int)1, (unsigned int)3, (unsigned int)-1, (unsigned int)keyboard_thread$$1$$meterec->jack.playhead, (unsigned int)-1);
                    pthread_mutex_unlock(&keyboard_thread$$1$$meterec->event_mutex);
                  }

                }

              }
              default:
                ;
            }

          break;
        }
        case (unsigned long int)0:
        {
          event=find_first_event(keyboard_thread$$1$$meterec, (unsigned int)0, (unsigned int)1);
          switch(key)
          {
            case 110:
            {
              keyboard_thread$$1$$meterec->display.names = (unsigned long int)!(keyboard_thread$$1$$meterec->display.names != 0ul);
              break;
            }
            case 118:
            {
              port = (unsigned int)0;
              for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
              {
                keyboard_thread$$1$$meterec->ports[(signed long int)port].dkmax_in = 0;
                keyboard_thread$$1$$meterec->ports[(signed long int)port].max_in = (float)0;
                float return_value_log10f$3;
                return_value_log10f$3=log10f((float)0);
                keyboard_thread$$1$$meterec->ports[(signed long int)port].db_max_in = 20.0f * return_value_log10f$3;
              }
              break;
            }
            case 0404:
            {
              if(keyboard_thread$$1$$meterec->record_sts == 0u)
              {
                if(!(keyboard_thread$$1$$meterec->playback_sts == 0u))
                {
                  if(event == ((struct event_s *)NULL))
                  {
                    pthread_mutex_lock(&keyboard_thread$$1$$meterec->event_mutex);
                    unsigned int return_value_seek$4;
                    return_value_seek$4=seek(keyboard_thread$$1$$meterec, -5);
                    add_event(keyboard_thread$$1$$meterec, (unsigned int)1, (unsigned int)1, (unsigned int)-1, return_value_seek$4, (unsigned int)-1);
                    pthread_mutex_unlock(&keyboard_thread$$1$$meterec->event_mutex);
                  }

                }

              }

              break;
            }
            case 0405:
              if(keyboard_thread$$1$$meterec->record_sts == 0u)
              {
                if(!(keyboard_thread$$1$$meterec->playback_sts == 0u))
                {
                  if(event == ((struct event_s *)NULL))
                  {
                    pthread_mutex_lock(&keyboard_thread$$1$$meterec->event_mutex);
                    unsigned int return_value_seek$5;
                    return_value_seek$5=seek(keyboard_thread$$1$$meterec, 5);
                    add_event(keyboard_thread$$1$$meterec, (unsigned int)1, (unsigned int)1, (unsigned int)-1, return_value_seek$5, (unsigned int)-1);
                    pthread_mutex_unlock(&keyboard_thread$$1$$meterec->event_mutex);
                  }

                }

              }

          }
          break;
        }
        case (unsigned long int)2:
          switch(key)
          {
            case 0404:
            {
              keyboard_thread$$1$$meterec->pos.inout = keyboard_thread$$1$$meterec->pos.inout - 1;
              if(!(keyboard_thread$$1$$meterec->pos.inout >= -1))
                keyboard_thread$$1$$meterec->pos.inout = 1;

              if(keyboard_thread$$1$$meterec->pos.inout == -1)
                keyboard_thread$$1$$meterec->pos.con_in = (signed int)keyboard_thread$$1$$meterec->pos.port;

              if(!(keyboard_thread$$1$$meterec->pos.n_con_in >= keyboard_thread$$1$$meterec->pos.con_in))
                keyboard_thread$$1$$meterec->pos.con_in = keyboard_thread$$1$$meterec->pos.n_con_in;

              break;
            }
            case 0405:
            {
              keyboard_thread$$1$$meterec->pos.inout = keyboard_thread$$1$$meterec->pos.inout + 1;
              if(keyboard_thread$$1$$meterec->pos.inout >= 2)
                keyboard_thread$$1$$meterec->pos.inout = -1;

              if(keyboard_thread$$1$$meterec->pos.inout == 1)
                keyboard_thread$$1$$meterec->pos.con_out = (signed int)keyboard_thread$$1$$meterec->pos.port;

              if(!(keyboard_thread$$1$$meterec->pos.n_con_out >= keyboard_thread$$1$$meterec->pos.con_out))
                keyboard_thread$$1$$meterec->pos.con_out = keyboard_thread$$1$$meterec->pos.n_con_out;

              break;
            }
            case 99:
            {
              if(keyboard_thread$$1$$meterec->pos.inout == -1)
                register_connect_port(keyboard_thread$$1$$meterec, (char *)keyboard_thread$$1$$meterec->all_output_ports[(signed long int)keyboard_thread$$1$$meterec->pos.con_in], keyboard_thread$$1$$meterec->pos.port);

              else
                if(keyboard_thread$$1$$meterec->pos.inout == 1)
                  register_connect_port(keyboard_thread$$1$$meterec, (char *)keyboard_thread$$1$$meterec->all_input_ports[(signed long int)keyboard_thread$$1$$meterec->pos.con_out], keyboard_thread$$1$$meterec->pos.port);

              break;
            }
            case 120:
              if(keyboard_thread$$1$$meterec->pos.inout == -1)
                deregister_disconnect_port(keyboard_thread$$1$$meterec, (char *)keyboard_thread$$1$$meterec->all_output_ports[(signed long int)keyboard_thread$$1$$meterec->pos.con_in], keyboard_thread$$1$$meterec->pos.port);

              else
                if(keyboard_thread$$1$$meterec->pos.inout == 1)
                  deregister_disconnect_port(keyboard_thread$$1$$meterec, (char *)keyboard_thread$$1$$meterec->all_input_ports[(signed long int)keyboard_thread$$1$$meterec->pos.con_out], keyboard_thread$$1$$meterec->pos.port);

          }
      }
      if(keyboard_thread$$1$$meterec->record_sts == 0u)
        switch(key)
        {
          case 82:
          {
            if(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record == 1)
            {
              port = (unsigned int)0;
              for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
                keyboard_thread$$1$$meterec->ports[(signed long int)port].record = 0;
            }

            else
            {
              port = (unsigned int)0;
              for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
                keyboard_thread$$1$$meterec->ports[(signed long int)port].record = 1;
            }
            break;
          }
          case 114:
          {
            if(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record == 1)
              keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record = 0;

            else
              keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record = 1;
            break;
          }
          case 68:
          {
            if(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record == 2)
            {
              port = (unsigned int)0;
              for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
                keyboard_thread$$1$$meterec->ports[(signed long int)port].record = 0;
            }

            else
            {
              port = (unsigned int)0;
              for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
                keyboard_thread$$1$$meterec->ports[(signed long int)port].record = 2;
            }
            break;
          }
          case 100:
          {
            if(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record == 2)
              keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record = 0;

            else
              keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record = 2;
            break;
          }
          case 79:
          {
            if(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record == 4)
            {
              port = (unsigned int)0;
              for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
                keyboard_thread$$1$$meterec->ports[(signed long int)port].record = 0;
            }

            else
            {
              port = (unsigned int)0;
              for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
                keyboard_thread$$1$$meterec->ports[(signed long int)port].record = 4;
            }
            break;
          }
          case 111:
            if(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record == 4)
              keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record = 0;

            else
              keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].record = 4;
        }

      switch(key)
      {
        case 105:
        {
          text=port_rename(keyboard_thread$$1$$meterec, y_pos);
          freetext = 80;
          goto __CPROVER_DUMP_L149;
        }
        case 84:
        {
          if(!(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].thru == 0))
          {
            port = (unsigned int)0;
            for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
              keyboard_thread$$1$$meterec->ports[(signed long int)port].thru = 0;
          }

          else
          {
            port = (unsigned int)0;
            for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
              keyboard_thread$$1$$meterec->ports[(signed long int)port].thru = 1;
          }
          goto __CPROVER_DUMP_L149;
        }
        case 116:
        {
          keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].thru = (signed int)!(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].thru != 0);
          goto __CPROVER_DUMP_L149;
        }
        case 77:
        {
          if(!(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].mute == 0))
          {
            port = (unsigned int)0;
            for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
              keyboard_thread$$1$$meterec->ports[(signed long int)port].mute = 0;
          }

          else
          {
            port = (unsigned int)0;
            for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
              keyboard_thread$$1$$meterec->ports[(signed long int)port].mute = 1;
          }
          goto __CPROVER_DUMP_L149;
        }
        case 109:
        {
          keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].mute = (signed int)!(keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].mute != 0);
          goto __CPROVER_DUMP_L149;
        }
        case 83:
        {
          port = (unsigned int)0;
          for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
            keyboard_thread$$1$$meterec->ports[(signed long int)port].mute = 0;
          goto __CPROVER_DUMP_L149;
        }
        case 115:
        {
          port = (unsigned int)0;
          for( ; !(port >= keyboard_thread$$1$$meterec->n_ports); port = port + 1u)
            keyboard_thread$$1$$meterec->ports[(signed long int)port].mute = 1;
          keyboard_thread$$1$$meterec->ports[(signed long int)y_pos].mute = 0;
          goto __CPROVER_DUMP_L149;
        }
        case 0403:
        {
          if(keyboard_thread$$1$$meterec->display.view == 2ul)
            tmp_if_expr$6 = keyboard_thread$$1$$meterec->pos.inout != 0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$6 = (_Bool)0;
          if(tmp_if_expr$6)
          {
            if(keyboard_thread$$1$$meterec->pos.inout == -1)
              keyboard_thread$$1$$meterec->pos.con_in = keyboard_thread$$1$$meterec->pos.con_in - 1;

            if(!(keyboard_thread$$1$$meterec->pos.con_in >= 0))
              keyboard_thread$$1$$meterec->pos.con_in = keyboard_thread$$1$$meterec->pos.n_con_in;

            if(keyboard_thread$$1$$meterec->pos.inout == 1)
              keyboard_thread$$1$$meterec->pos.con_out = keyboard_thread$$1$$meterec->pos.con_out - 1;

            if(!(keyboard_thread$$1$$meterec->pos.con_out >= 0))
              keyboard_thread$$1$$meterec->pos.con_out = keyboard_thread$$1$$meterec->pos.n_con_out;

          }

          else
          {
            keyboard_thread$$1$$meterec->ports[(signed long int)keyboard_thread$$1$$meterec->pos.port].monitor = 0;
            if(keyboard_thread$$1$$meterec->pos.port == 0u)
              keyboard_thread$$1$$meterec->pos.port = keyboard_thread$$1$$meterec->n_ports - (unsigned int)1;

            else
              keyboard_thread$$1$$meterec->pos.port = keyboard_thread$$1$$meterec->pos.port - 1u;
            keyboard_thread$$1$$meterec->ports[(signed long int)keyboard_thread$$1$$meterec->pos.port].monitor = 1;
          }
          goto __CPROVER_DUMP_L149;
        }
        case 0402:
        {
          if(keyboard_thread$$1$$meterec->display.view == 2ul)
            tmp_if_expr$7 = keyboard_thread$$1$$meterec->pos.inout != 0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$7 = (_Bool)0;
          if(tmp_if_expr$7)
          {
            if(keyboard_thread$$1$$meterec->pos.inout == -1)
              keyboard_thread$$1$$meterec->pos.con_in = keyboard_thread$$1$$meterec->pos.con_in + 1;

            if(!(keyboard_thread$$1$$meterec->pos.n_con_in >= keyboard_thread$$1$$meterec->pos.con_in))
              keyboard_thread$$1$$meterec->pos.con_in = 0;

            if(keyboard_thread$$1$$meterec->pos.inout == 1)
              keyboard_thread$$1$$meterec->pos.con_out = keyboard_thread$$1$$meterec->pos.con_out + 1;

            if(!(keyboard_thread$$1$$meterec->pos.n_con_out >= keyboard_thread$$1$$meterec->pos.con_out))
              keyboard_thread$$1$$meterec->pos.con_out = 0;

          }

          else
          {
            keyboard_thread$$1$$meterec->ports[(signed long int)keyboard_thread$$1$$meterec->pos.port].monitor = 0;
            if(keyboard_thread$$1$$meterec->pos.port == keyboard_thread$$1$$meterec->n_ports + 4294967295u)
              keyboard_thread$$1$$meterec->pos.port = (unsigned int)0;

            else
              keyboard_thread$$1$$meterec->pos.port = keyboard_thread$$1$$meterec->pos.port + 1u;
            keyboard_thread$$1$$meterec->ports[(signed long int)keyboard_thread$$1$$meterec->pos.port].monitor = 1;
          }
          goto __CPROVER_DUMP_L149;
        }
        case 9:
        {
          if(keyboard_thread$$1$$meterec->display.view == 0ul)
            keyboard_thread$$1$$meterec->display.view = (unsigned long int)1;

          else
            if(keyboard_thread$$1$$meterec->display.view == 1ul)
            {
              keyboard_thread$$1$$meterec->display.view = (unsigned long int)2;
              retreive_connected_ports(keyboard_thread$$1$$meterec);
              retreive_existing_ports(keyboard_thread$$1$$meterec);
              filter_existing_ports(keyboard_thread$$1$$meterec->all_input_ports, keyboard_thread$$1$$meterec->jack_name);
              filter_existing_ports(keyboard_thread$$1$$meterec->all_output_ports, keyboard_thread$$1$$meterec->jack_name);
              count_all_io_ports(keyboard_thread$$1$$meterec);
            }

            else
              if(keyboard_thread$$1$$meterec->display.view == 2ul)
                keyboard_thread$$1$$meterec->display.view = (unsigned long int)0;

          goto __CPROVER_DUMP_L149;
        }
        case 10:
        {
          if(keyboard_thread$$1$$meterec->playback_sts == 3u)
            stop(keyboard_thread$$1$$meterec);

          else
          {
            if(keyboard_thread$$1$$meterec->record_sts == 0u)
              start_record(keyboard_thread$$1$$meterec);

            if(keyboard_thread$$1$$meterec->playback_sts == 0u)
              roll(keyboard_thread$$1$$meterec);

          }
          goto __CPROVER_DUMP_L149;
        }
        case 127:

        case 263:
        {
          if(keyboard_thread$$1$$meterec->record_sts == 3u)
            tmp_if_expr$9 = keyboard_thread$$1$$meterec->playback_sts == (unsigned int)3 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$9 = (_Bool)0;
          if(tmp_if_expr$9)
            keyboard_thread$$1$$meterec->record_cmd = (unsigned int)2;

          else
          {
            if(keyboard_thread$$1$$meterec->record_sts == 0u)
              tmp_if_expr$8 = keyboard_thread$$1$$meterec->playback_sts == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$8 = (_Bool)0;
            if(tmp_if_expr$8)
              start_record(keyboard_thread$$1$$meterec);

            else
              if(keyboard_thread$$1$$meterec->record_sts == 3u)
              {
                if(keyboard_thread$$1$$meterec->playback_sts == 0u)
                  cancel_record(keyboard_thread$$1$$meterec);

              }

          }
          goto __CPROVER_DUMP_L149;
        }
        case 32:
        {
          if(keyboard_thread$$1$$meterec->playback_sts == 3u)
            tmp_if_expr$10 = keyboard_thread$$1$$meterec->record_sts == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$10 = (_Bool)0;
          if(tmp_if_expr$10)
            stop(keyboard_thread$$1$$meterec);

          else
            if(keyboard_thread$$1$$meterec->playback_sts == 0u)
              roll(keyboard_thread$$1$$meterec);

          goto __CPROVER_DUMP_L149;
        }
        case 45:
        {
          clr_loop(keyboard_thread$$1$$meterec, (unsigned int)3);
          goto __CPROVER_DUMP_L149;
        }
        case 47:
        {
          clr_loop(keyboard_thread$$1$$meterec, (unsigned int)1);
          goto __CPROVER_DUMP_L149;
        }
        case 42:
        {
          clr_loop(keyboard_thread$$1$$meterec, (unsigned int)2);
          goto __CPROVER_DUMP_L149;
        }
        case 43:
        {
          return_value_set_loop$11=set_loop(keyboard_thread$$1$$meterec, (unsigned int)keyboard_thread$$1$$meterec->jack.playhead);
          if(!(return_value_set_loop$11 == 0))
          {
            pthread_mutex_lock(&keyboard_thread$$1$$meterec->event_mutex);
            add_event(keyboard_thread$$1$$meterec, (unsigned int)1, (unsigned int)1, (unsigned int)-1, keyboard_thread$$1$$meterec->loop.low, (unsigned int)-1);
            pthread_mutex_unlock(&keyboard_thread$$1$$meterec->event_mutex);
          }

          goto __CPROVER_DUMP_L149;
        }
        case 81:

        case 113:
        {
          keyboard_thread$$1$$meterec->keyboard_cmd = (unsigned int)0;
          halt(0);
        }
        default:
        {

        __CPROVER_DUMP_L149:
          ;
          if(key >= 13 && !(key >= 289))
            keyboard_thread$$1$$meterec->seek_index[(signed long int)(key - (0410 + 13))] = (unsigned int)keyboard_thread$$1$$meterec->jack.playhead;

          if(key >= 25 && !(key >= 301))
          {
            if(keyboard_thread$$1$$meterec->seek_index[(signed long int)(key + -289)] == 4294967295u)
            {
              keyboard_thread$$1$$meterec->seek_index[(signed long int)(key - (0410 + 25))] = (unsigned int)keyboard_thread$$1$$meterec->jack.playhead;
              signed int return_value_set_loop$12;
              return_value_set_loop$12=set_loop(keyboard_thread$$1$$meterec, (unsigned int)keyboard_thread$$1$$meterec->jack.playhead);
              if(!(return_value_set_loop$12 == 0))
              {
                pthread_mutex_lock(&keyboard_thread$$1$$meterec->event_mutex);
                add_event(keyboard_thread$$1$$meterec, (unsigned int)1, (unsigned int)1, (unsigned int)-1, keyboard_thread$$1$$meterec->loop.low, (unsigned int)-1);
                pthread_mutex_unlock(&keyboard_thread$$1$$meterec->event_mutex);
              }

            }

            else
              set_loop(keyboard_thread$$1$$meterec, keyboard_thread$$1$$meterec->seek_index[(signed long int)(key - (0410 + 25))]);
          }

          if(keyboard_thread$$1$$meterec->record_sts == 0u)
          {
            if(!(keyboard_thread$$1$$meterec->playback_sts == 0u))
            {
              if(key >= 1 && !(key >= 277))
              {
                if(!(keyboard_thread$$1$$meterec->seek_index[(signed long int)(key + -265)] == 4294967295u))
                {
                  pthread_mutex_lock(&keyboard_thread$$1$$meterec->event_mutex);
                  add_event(keyboard_thread$$1$$meterec, (unsigned int)1, (unsigned int)1, (unsigned int)-1, keyboard_thread$$1$$meterec->seek_index[(signed long int)(key - (0410 + 1))], (unsigned int)-1);
                  pthread_mutex_unlock(&keyboard_thread$$1$$meterec->event_mutex);
                }

              }

              if(key == 0406)
              {
                pthread_mutex_lock(&keyboard_thread$$1$$meterec->event_mutex);
                add_event(keyboard_thread$$1$$meterec, (unsigned int)1, (unsigned int)1, (unsigned int)-1, (unsigned int)0, (unsigned int)-1);
                pthread_mutex_unlock(&keyboard_thread$$1$$meterec->event_mutex);
              }

            }

          }

        }
      }
    }
  }
  return NULL;
}

// load_conf
// file conf.c line 383
void load_conf(struct meterec_s *meterec)
{
  unsigned int port = (unsigned int)0;
  unsigned int con = (unsigned int)0;
  unsigned int index = (unsigned int)0;
  struct config_t cfg;
  struct config_t *cf;
  const struct config_setting_t *port_list;
  const struct config_setting_t *port_group;
  const struct config_setting_t *connection_list;
  const struct config_setting_t *index_group;
  const struct config_setting_t *jack_group;
  unsigned int port_list_len;
  unsigned int connection_list_len;
  const char *takes;
  const char *record;
  const char *name;
  const char *port_name;
  const char *time;
  signed int mute = 0;
  signed int thru = 0;
  signed long int sample_rate;
  char fn[4l];
  fprintf(meterec->fd_log, "Loading '%s'\n", meterec->conf_file);
  cf = &cfg;
  config_init(cf);
  signed int return_value_config_read_file$1;
  return_value_config_read_file$1=config_read_file(cf, meterec->conf_file);
  if(return_value_config_read_file$1 == 0)
  {
    fprintf(meterec->fd_log, "Error in '%s' %d - %s\n", meterec->conf_file, cf->error_line, cf->error_text);
    config_destroy(cf);
    exit_on_error("Cannot parse configuration file.");
  }

  index_group=config_lookup(cf, "indexes");
  if(!(index_group == ((const struct config_setting_t *)NULL)))
  {
    index = (unsigned int)0;
    for( ; !(index >= 12u); index = index + 1u)
    {
      sprintf(fn, "f%d", index + (unsigned int)1);
      signed int return_value_config_setting_lookup_string$2;
      return_value_config_setting_lookup_string$2=config_setting_lookup_string(index_group, fn, &time);
      if(!(return_value_config_setting_lookup_string$2 == 0))
        parse_time(meterec, index, time);

    }
  }

  jack_group=config_lookup(cf, "jack");
  signed int return_value_config_setting_lookup_int$3;
  if(!(jack_group == ((const struct config_setting_t *)NULL)))
  {
    return_value_config_setting_lookup_int$3=config_setting_lookup_int(jack_group, "sample_rate", (signed int *)&sample_rate);
    if(!(return_value_config_setting_lookup_int$3 == 0))
      meterec->jack.sample_rate = (unsigned int)(signed int)sample_rate;

  }

  port_list=config_lookup(cf, "ports");
  if(!(port_list == ((const struct config_setting_t *)NULL)))
  {
    signed int return_value_config_setting_length$4;
    return_value_config_setting_length$4=config_setting_length(port_list);
    port_list_len = (unsigned int)return_value_config_setting_length$4;
    port = (unsigned int)0;
    for( ; !(port >= port_list_len); port = port + 1u)
    {
      port_group=config_setting_get_elem(port_list, port);
      if(!(port_group == ((const struct config_setting_t *)NULL)))
      {
        void *return_value_calloc$5;
        return_value_calloc$5=calloc((unsigned long int)0x20000, sizeof(float) /*4ul*/ );
        meterec->ports[(signed long int)port].read_disk_buffer = (float *)return_value_calloc$5;
        void *return_value_calloc$6;
        return_value_calloc$6=calloc((unsigned long int)0x20000, sizeof(float) /*4ul*/ );
        meterec->ports[(signed long int)port].write_disk_buffer = (float *)return_value_calloc$6;
        create_input_port(meterec, port);
        create_output_port(meterec, port);
        signed int return_value_config_setting_lookup_string$7;
        return_value_config_setting_lookup_string$7=config_setting_lookup_string(port_group, "takes", &takes);
        if(!(return_value_config_setting_lookup_string$7 == 0))
          meterec->n_takes=parse_takes(meterec, port, takes);

        signed int return_value_config_setting_lookup_bool$8;
        return_value_config_setting_lookup_bool$8=config_setting_lookup_bool(port_group, "mute", &mute);
        if(!(return_value_config_setting_lookup_bool$8 == 0))
          meterec->ports[(signed long int)port].mute = mute;

        signed int return_value_config_setting_lookup_bool$9;
        return_value_config_setting_lookup_bool$9=config_setting_lookup_bool(port_group, "thru", &thru);
        if(!(return_value_config_setting_lookup_bool$9 == 0))
          meterec->ports[(signed long int)port].thru = thru;

        signed int return_value_config_setting_lookup_string$10;
        return_value_config_setting_lookup_string$10=config_setting_lookup_string(port_group, "record", &record);
        if(!(return_value_config_setting_lookup_string$10 == 0))
          meterec->ports[(signed long int)port].record=parse_record(record);

        signed int return_value_config_setting_lookup_string$13;
        return_value_config_setting_lookup_string$13=config_setting_lookup_string(port_group, "name", &name);
        if(!(return_value_config_setting_lookup_string$13 == 0))
        {
          unsigned long int return_value_strlen$11;
          return_value_strlen$11=strlen(name);
          void *return_value_malloc$12;
          return_value_malloc$12=malloc(return_value_strlen$11 + (unsigned long int)1);
          meterec->ports[(signed long int)port].name = (char *)return_value_malloc$12;
          strcpy(meterec->ports[(signed long int)port].name, name);
        }

        connection_list=config_setting_get_member(port_group, "connections");
        if(!(connection_list == ((const struct config_setting_t *)NULL)))
        {
          signed int return_value_config_setting_length$14;
          return_value_config_setting_length$14=config_setting_length(connection_list);
          connection_list_len = (unsigned int)return_value_config_setting_length$14;
          con = (unsigned int)0;
          for( ; !(con >= connection_list_len); con = con + 1u)
          {
            port_name=config_setting_get_string_elem(connection_list, (signed int)con);
            if(!(port_name == ((const char *)NULL)))
            {
              unsigned long int return_value_strlen$15;
              return_value_strlen$15=strlen(port_name);
              void *return_value_malloc$16;
              return_value_malloc$16=malloc(return_value_strlen$15 + (unsigned long int)1);
              meterec->ports[(signed long int)port].connections[(signed long int)con] = (char *)return_value_malloc$16;
              strcpy(meterec->ports[(signed long int)port].connections[(signed long int)con], port_name);
              register_port(meterec, (char *)port_name, port);
            }

          }
          meterec->ports[(signed long int)port].n_cons = con;
        }

      }

    }
  }

  config_destroy(cf);
  meterec->n_ports = port;
  meterec->n_takes = meterec->n_takes - (unsigned int)1;
}

// load_session
// file conf.c line 175
void load_session(struct meterec_s *meterec)
{
  struct _IO_FILE *fd_conf;
  char buf[2l];
  unsigned int take = (unsigned int)1;
  unsigned int port = (unsigned int)0;
  unsigned int track = (unsigned int)0;
  buf[(signed long int)1] = (char)0;
  fd_conf=fopen(meterec->session_file, "r");
  if(fd_conf == ((struct _IO_FILE *)NULL))
  {
    fprintf(meterec->fd_log, "could not open '%s' for reading\n", meterec->session_file);
    exit_on_error("Cannot open session file for reading.");
  }

  fprintf(meterec->fd_log, "Loading '%s'\n", meterec->session_file);
  unsigned long int return_value_fread$1;
  do
  {
    return_value_fread$1=fread((void *)buf, sizeof(char) /*1ul*/ , (unsigned long int)1, fd_conf);
    if(return_value_fread$1 == 0ul)
      break;

    if((signed int)buf[0l] == 88)
    {
      track = meterec->takes[(signed long int)take].ntrack;
      meterec->takes[(signed long int)take].track_port_map[(signed long int)track] = port;
      meterec->takes[(signed long int)take].port_has_track[(signed long int)port] = (unsigned int)1;
      meterec->takes[(signed long int)take].ntrack = meterec->takes[(signed long int)take].ntrack + 1u;
      meterec->ports[(signed long int)port].playback_take = take;
    }

    if((signed int)buf[0l] == 124)
    {
      port = port + 1u;
      meterec->n_takes = take - (unsigned int)1;
    }

    if((signed int)buf[0l] == 61)
      take = (unsigned int)1;

    else
      take = take + 1u;
  }
  while((_Bool)1);
  fclose(fd_conf);
  if(!(meterec->n_ports >= port))
  {
    fprintf(meterec->fd_log, "'%s' contains more ports (%d) than defined in .conf file (%d)\n", meterec->session_file, port, meterec->n_ports);
    exit_on_error("Session and setup not consistent");
  }

}

// load_setup
// file conf.c line 86
void load_setup(struct meterec_s *meterec)
{
  struct _IO_FILE *fd_conf;
  char buf[2l];
  unsigned int take = (unsigned int)1;
  unsigned int port = (unsigned int)0;
  unsigned int index = (unsigned int)0;
  buf[(signed long int)1] = (char)0;
  fd_conf=fopen(meterec->setup_file, "r");
  if(fd_conf == ((struct _IO_FILE *)NULL))
  {
    fprintf(meterec->fd_log, "could not open '%s' for reading\n", meterec->setup_file);
    exit_on_error("Cannot open setup file for reading.");
  }

  fprintf(meterec->fd_log, "Loading '%s'\n", meterec->setup_file);
  unsigned long int return_value_fread$1;
  _Bool tmp_if_expr$2;
  do
  {
    return_value_fread$1=fread((void *)buf, sizeof(char) /*1ul*/ , (unsigned long int)1, fd_conf);
    if(return_value_fread$1 == 0ul)
      break;

    if((signed int)buf[0l] == 76)
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = (signed int)buf[0l] == 108 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
    {
      fprintf(meterec->fd_log, "Playback LOCK on Port %d take %d\n", port + (unsigned int)1, take);
      meterec->takes[(signed long int)take].port_has_lock[(signed long int)port] = (unsigned int)1;
    }

    if((signed int)buf[0l] == 124)
    {
      void *return_value_calloc$3;
      return_value_calloc$3=calloc((unsigned long int)0x20000, sizeof(float) /*4ul*/ );
      meterec->ports[(signed long int)port].read_disk_buffer = (float *)return_value_calloc$3;
      void *return_value_calloc$4;
      return_value_calloc$4=calloc((unsigned long int)0x20000, sizeof(float) /*4ul*/ );
      meterec->ports[(signed long int)port].write_disk_buffer = (float *)return_value_calloc$4;
      create_input_port(meterec, port);
      create_output_port(meterec, port);
      parse_port_con(meterec, fd_conf, port);
      port = port + 1u;
    }

    switch((signed int)buf[0l])
    {
      case 126:
        meterec->ports[(signed long int)port].mute = 1;
      case 61:
      {
        take = (unsigned int)1;
        break;
      }
      case 114:
        meterec->ports[(signed long int)port].mute = 1;
      case 82:
      {
        meterec->ports[(signed long int)port].record = 1;
        meterec->n_tracks = meterec->n_tracks + 1u;
        take = (unsigned int)1;
        break;
      }
      case 100:
        meterec->ports[(signed long int)port].mute = 1;
      case 68:
      {
        meterec->ports[(signed long int)port].record = 2;
        meterec->n_tracks = meterec->n_tracks + 1u;
        take = (unsigned int)1;
        break;
      }
      case 111:
        meterec->ports[(signed long int)port].mute = 1;
      case 79:
      {
        meterec->ports[(signed long int)port].record = 4;
        meterec->n_tracks = meterec->n_tracks + 1u;
        take = (unsigned int)1;
        break;
      }
      case 62:
      {
        parse_time_index(meterec, fd_conf, index);
        index = index + 1u;
        break;
      }
      default:
        take = take + 1u;
    }
  }
  while((_Bool)1);
  fclose(fd_conf);
  meterec->n_ports = port;
}

// main
// file meterec.c line 1083
signed int main(signed int argc, char **argv)
{
  signed int console_width = 0;
  signed int uuid = 0;
  enum JackStatus status;
  float ref_lev = (float)0;
  signed int rate = 24;
  signed int opt;
  signed int decay_len;
  float bias = 1.0f;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct meterec_s) /*43064ul*/ );
  meterec = (struct meterec_s *)return_value_malloc$1;
  init_ports(meterec);
  init_takes(meterec);
  pre_option_init(meterec);
  double return_value_atof$2;
  do
  {
    opt=getopt(argc, argv, "r:w:f:s:j:o:u:ptchvi");
    if(opt == -1)
      break;

    switch(opt)
    {
      case 114:
      {
        return_value_atof$2=atof(optarg);
        ref_lev = (float)return_value_atof$2;
        bias=powf(10.0f, ref_lev * -0.05f);
        break;
      }
      case 102:
      {
        rate=atoi(optarg);
        break;
      }
      case 119:
      {
        console_width=atoi(optarg);
        break;
      }
      case 115:
      {
        conf_file = optarg;
        break;
      }
      case 106:
      {
        meterec->jack_name = optarg;
        break;
      }
      case 111:
      {
        output_ext = optarg;
        break;
      }
      case 117:
      {
        uuid=atoi(optarg);
        break;
      }
      case 116:
      {
        meterec->record_cmd = (unsigned int)1;
        break;
      }
      case 112:
      {
        meterec->playback_cmd = (unsigned int)0;
        break;
      }
      case 99:
      {
        meterec->connect_ports = 0;
        break;
      }
      case 105:
      {
        meterec->jack_transport = (unsigned int)0;
        break;
      }
      case 104:

      case 118:

      default:
        usage(argv[(signed long int)0]);
    }
  }
  while((_Bool)1);
  resolve_conf_file(meterec, conf_file);
  post_option_init(meterec);
  meterec->fd_log=fopen(meterec->log_file, "w");
  if(meterec->fd_log == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "Error: could not open '%s' for writing\n", meterec->log_file);
    exit(1);
  }

  fprintf(meterec->fd_log, "---- Options ----\n");
  fprintf(meterec->fd_log, "Reference level: %.1fdB\n", ref_lev);
  fprintf(meterec->fd_log, "Updates per second: %d\n", rate);
  fprintf(meterec->fd_log, "Console Width: %d\n", console_width);
  fprintf(meterec->fd_log, "Session name: %s\n", meterec->session);
  fprintf(meterec->fd_log, "Jack client name: %s\n", meterec->jack_name);
  fprintf(meterec->fd_log, "Output format: %s\n", output_ext);
  fprintf(meterec->fd_log, "%slayback at startup.\n", meterec->playback_cmd != 0u ? "P" : "No p");
  fprintf(meterec->fd_log, "%secording new take at startup.\n", meterec->record_cmd != 0u ? "R" : "Not r");
  fprintf(meterec->fd_log, "%snteract with jack transport.\n", meterec->jack_transport != 0u ? "I" : "Do not i");
  fprintf(meterec->fd_log, "---- Starting ----\n");
  fprintf(meterec->fd_log, "Connecting to jackd...\n");
  if(!(uuid == 0))
    meterec->client=jack_client_open(meterec->jack_name, (enum JackOptions)JackNullOption, &status, uuid);

  else
    meterec->client=jack_client_open(meterec->jack_name, (enum JackOptions)JackNullOption, &status);
  if(meterec->client == ((struct _jack_client *)NULL))
  {
    fprintf(meterec->fd_log, "Failed to start '%s' jack client: %d\n", meterec->jack_name, status);
    fprintf(stderr, "Failed to start '%s' jack client: %d - Is jackd running?\n", meterec->jack_name, status);
    exit(1);
  }

  char *return_value_jack_get_client_name$3;
  return_value_jack_get_client_name$3=jack_get_client_name(meterec->client);
  fprintf(meterec->fd_log, "Registered as '%s'.\n", return_value_jack_get_client_name$3);
  meterec->jack_sts = (unsigned int)3;
  jack_set_process_callback(meterec->client, process_jack_data, (void *)meterec);
  jack_set_buffer_size_callback(meterec->client, update_jack_buffsize, (void *)meterec);
  if(!(meterec->jack_transport == 0u))
    jack_set_sync_callback(meterec->client, process_jack_sync, (void *)meterec);

  jack_set_port_registration_callback(meterec->client, process_port_register, (void *)meterec);
  jack_set_session_callback(meterec->client, session_callback, (void *)meterec);
  meterec->jack_buffsize=jack_get_buffer_size(meterec->client);
  signed int return_value_jack_activate$4;
  return_value_jack_activate$4=jack_activate(meterec->client);
  if(!(return_value_jack_activate$4 == 0))
  {
    fprintf(meterec->fd_log, "Cannot activate client.\n");
    exit_on_error("Cannot activate client");
  }

  signed int return_value_file_exists$5;
  return_value_file_exists$5=file_exists(meterec->conf_file);
  if(!(return_value_file_exists$5 == 0))
  {
    load_conf(meterec);
    if(!(meterec->connect_ports == 0))
      connect_all_ports((void *)meterec);

  }

  else
  {
    load_setup(meterec);
    load_session(meterec);
    save_conf(meterec);
    fprintf(meterec->fd_log, "Converted old configuration to %s.\n", meterec->conf_file);
    exit_on_error("Converted old configuration");
  }
  unsigned int return_value_jack_get_sample_rate$7;
  if(meterec->jack.sample_rate == 0u)
    meterec->jack.sample_rate=jack_get_sample_rate(meterec->client);

  else
  {
    return_value_jack_get_sample_rate$7=jack_get_sample_rate(meterec->client);
    if(!(meterec->jack.sample_rate == return_value_jack_get_sample_rate$7))
    {
      unsigned int return_value_jack_get_sample_rate$6;
      return_value_jack_get_sample_rate$6=jack_get_sample_rate(meterec->client);
      fprintf(meterec->fd_log, "Session sample rate (%dHz) is not the same as jackd sample rate (%dHz).\n", meterec->jack.sample_rate, return_value_jack_get_sample_rate$6);
      fprintf(meterec->fd_log, "Restart jackd with %dHz saple rate or remove sample rate entry from '%s' configuration file.\n", meterec->jack.sample_rate, meterec->conf_file);
      exit_on_error("Session sample rate is not the same as jackd sample rate.");
    }

  }
  meterec->config_sts = (unsigned int)3;
  create_monitor_port(meterec);
  fprintf(meterec->fd_log, "Starting ncurses interface...\n");
  mainwin=initscr();
  if(mainwin == ((struct _win_st *)NULL))
  {
    fprintf(meterec->fd_log, "Error initialising ncurses.\n");
    exit(1);
  }

  meterec->curses_sts = (unsigned int)3;
  curs_set(0);
  start_color();
  init_pair((signed short int)1, (signed short int)2, (signed short int)0);
  init_pair((signed short int)2, (signed short int)3, (signed short int)0);
  init_pair((signed short int)4, (signed short int)4, (signed short int)0);
  init_pair((signed short int)3, (signed short int)1, (signed short int)0);
  signed int tmp_if_expr$8;
  if(console_width == 0)
  {
    if(!(mainwin == ((struct _win_st *)NULL)))
      tmp_if_expr$8 = (signed int)mainwin->_maxx + 1;

    else
      tmp_if_expr$8 = -1;
    console_width = tmp_if_expr$8;
  }

  console_width = console_width - 1;
  decay_len = (signed int)(1.6f / (1.0f / (float)rate));
  init_display_scale((unsigned int)console_width);
  pthread_create(&kb_dt, (const union pthread_attr_t *)(void *)0, keyboard_thread, (void *)meterec);
  find_existing_takes(meterec);
  if(meterec->record_cmd == 1u)
    start_record(meterec);

  if(meterec->playback_cmd == 1u)
    roll(meterec);

  signal(2, halt);
  meterec->pos.take = meterec->n_takes;
  while(!(running == 0))
  {
    read_peak(bias);
    wclear(stdscr);
    display_header(meterec, (unsigned int)console_width);
    if(meterec->display.view == 0ul)
      display_meter(meterec, (signed int)meterec->display.names, console_width, decay_len);

    else
      if(meterec->display.view == 1ul)
        display_session(meterec);

      else
        if(meterec->display.view == 2ul)
          display_ports(meterec);

    wrefresh(stdscr);
    fsleep(1.0f / (float)rate);
  }
  cleanup();
  pthread_kill(kb_dt, 15);
  pthread_join(kb_dt, (void **)(void *)0);
  free_scale();
  free_ports(meterec);
  free_takes(meterec);
  free_options(meterec);
  free((void *)meterec);
  return 0;
}

// parse_port_con
// file conf.c line 40
void parse_port_con(struct meterec_s *meterec, struct _IO_FILE *fd_conf, unsigned int port)
{
  char parse_port_con$$1$$line[1000l];
  char label[100l];
  char port_name[100l];
  unsigned int i;
  unsigned int u;
  signed int return_value_fscanf$1;
  return_value_fscanf$1=fscanf(fd_conf, "%s%[^\r\n]%*[\r\n ]", (const void *)label, (const void *)parse_port_con$$1$$line);
  i = (unsigned int)return_value_fscanf$1;
  i = (unsigned int)0;
  signed int return_value_sscanf$2;
  do
  {
    return_value_sscanf$2=sscanf(parse_port_con$$1$$line + (signed long int)i, "%s%u", (const void *)port_name, &u);
    if(return_value_sscanf$2 == 0)
      break;

    register_port_old(meterec, port_name, port);
    connect_any_port(meterec, port_name, port);
    i = i + u;
    for( ; (signed int)parse_port_con$$1$$line[(signed long int)i] == 32; i = i + 1u)
      ;
    if((signed int)parse_port_con$$1$$line[(signed long int)i] == 0)
      break;

  }
  while((_Bool)1);
}

// parse_record
// file conf.c line 323
signed int parse_record(const char *record)
{
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(record, "---");
  if(return_value_strcmp$1 == 0)
    return 0;

  else
  {
    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp(record, "rec");
    if(return_value_strcmp$2 == 0)
      return 1;

    else
    {
      signed int return_value_strcmp$3;
      return_value_strcmp$3=strcmp(record, "dub");
      if(return_value_strcmp$3 == 0)
        return 2;

      else
      {
        signed int return_value_strcmp$4;
        return_value_strcmp$4=strcmp(record, "ovr");
        if(return_value_strcmp$4 == 0)
          return 4;

        else
          return 0;
      }
    }
  }
}

// parse_takes
// file conf.c line 353
unsigned int parse_takes(struct meterec_s *meterec, unsigned int port, const char *takes)
{
  unsigned int take = (unsigned int)1;
  unsigned int track;
  for( ; !(*takes == 0); take = take + 1u)
  {
    switch((signed int)*takes)
    {
      case 45:
        break;
      case 108:
      {
        meterec->takes[(signed long int)take].port_has_lock[(signed long int)port] = (unsigned int)1;
        break;
      }
      case 76:
        meterec->takes[(signed long int)take].port_has_lock[(signed long int)port] = (unsigned int)1;
      case 88:
      {
        track = meterec->takes[(signed long int)take].ntrack;
        meterec->takes[(signed long int)take].track_port_map[(signed long int)track] = port;
        meterec->takes[(signed long int)take].port_has_track[(signed long int)port] = (unsigned int)1;
        meterec->takes[(signed long int)take].ntrack = meterec->takes[(signed long int)take].ntrack + 1u;
        meterec->ports[(signed long int)port].playback_take = take;
      }
    }
    takes = takes + 1l;
  }
  return take;
}

// parse_time
// file conf.c line 338
void parse_time(struct meterec_s *meterec, unsigned int index, const char *time_str)
{
  struct time_s time;
  signed int return_value_sscanf$1;
  return_value_sscanf$1=sscanf(time_str, "%u:%u:%u.%u%*s", &time.h, &time.m, &time.s, &time.ms);
  if(return_value_sscanf$1 == 4)
  {
    time.rate=jack_get_sample_rate(meterec->client);
    time_frm(&time);
    meterec->seek_index[(signed long int)index] = time.frm;
  }

}

// parse_time_index
// file conf.c line 66
void parse_time_index(struct meterec_s *meterec, struct _IO_FILE *fd_conf, unsigned int index)
{
  struct time_s time;
  unsigned int u;
  signed int return_value_fscanf$1;
  return_value_fscanf$1=fscanf(fd_conf, "%u:%u:%u.%u%*s", &time.h, &time.m, &time.s, &time.ms);
  u = (unsigned int)return_value_fscanf$1;
  if(u == 4u)
  {
    time.rate=jack_get_sample_rate(meterec->client);
    time_frm(&time);
    meterec->seek_index[(signed long int)index] = time.frm;
  }

  else
  {
    signed int return_value_fscanf$2;
    return_value_fscanf$2=fscanf(fd_conf, "%*s");
    u = (unsigned int)return_value_fscanf$2;
  }
}

// port_rename
// file ports.c line 402
char * port_rename(struct meterec_s *meterec, unsigned int port)
{
  char *new;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)(80 + 1));
  new = (char *)return_value_malloc$1;
  if(!(meterec->ports[(signed long int)port].name == ((char *)NULL)))
    free((void *)meterec->ports[(signed long int)port].name);

  meterec->ports[(signed long int)port].name = new;
  *new = (char)95;
  new[(signed long int)1] = (char)0;
  return new;
}

// post_option_init
// file meterec.c line 627
void post_option_init(struct meterec_s *meterec)
{
  char *session = meterec->session;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(session);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen("..sess");
  void *return_value_malloc$3;
  return_value_malloc$3=malloc(return_value_strlen$1 + return_value_strlen$2 + (unsigned long int)1);
  meterec->session_file = (char *)return_value_malloc$3;
  sprintf(meterec->session_file, ".%s.sess", session);
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(session);
  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(".conf");
  void *return_value_malloc$6;
  return_value_malloc$6=malloc(return_value_strlen$4 + return_value_strlen$5 + (unsigned long int)1);
  meterec->setup_file = (char *)return_value_malloc$6;
  sprintf(meterec->setup_file, "%s.conf", session);
  unsigned long int return_value_strlen$7;
  return_value_strlen$7=strlen(session);
  unsigned long int return_value_strlen$8;
  return_value_strlen$8=strlen(".log");
  void *return_value_malloc$9;
  return_value_malloc$9=malloc(return_value_strlen$7 + return_value_strlen$8 + (unsigned long int)1);
  meterec->log_file = (char *)return_value_malloc$9;
  sprintf(meterec->log_file, "%s.log", session);
  unsigned long int return_value_strlen$10;
  return_value_strlen$10=strlen(output_ext);
  void *return_value_malloc$11;
  return_value_malloc$11=malloc(return_value_strlen$10 + (unsigned long int)1);
  meterec->output_ext = (char *)return_value_malloc$11;
  sprintf(meterec->output_ext, "%s", output_ext);
  signed int return_value_strcmp$16;
  return_value_strcmp$16=strcmp(output_ext, "wav");
  signed int return_value_strcmp$15;
  signed int return_value_strcmp$14;
  signed int return_value_strcmp$13;
  signed int return_value_strcmp$12;
  if(return_value_strcmp$16 == 0)
    meterec->output_fmt = (unsigned int)(65536 | 3);

  else
  {
    return_value_strcmp$15=strcmp(output_ext, "w64");
    if(return_value_strcmp$15 == 0)
      meterec->output_fmt = (unsigned int)(720896 | 3);

    else
    {
      return_value_strcmp$14=strcmp(output_ext, "ogg");
      if(return_value_strcmp$14 == 0)
        meterec->output_fmt = (unsigned int)(2097152 | 96);

      else
      {
        return_value_strcmp$13=strcmp(output_ext, "oga");
        if(return_value_strcmp$13 == 0)
          meterec->output_fmt = (unsigned int)(2097152 | 96);

        else
        {
          return_value_strcmp$12=strcmp(output_ext, "flac");
          if(return_value_strcmp$12 == 0)
            meterec->output_fmt = (unsigned int)(1507328 | 3);

          else
          {
            printf("Sorry, '%s' output record format is not supported.\n", output_ext);
            exit(1);
          }
        }
      }
    }
  }
}

// pre_option_init
// file meterec.c line 422
void pre_option_init(struct meterec_s *meterec)
{
  unsigned int index;
  meterec->n_tracks = (unsigned int)0;
  meterec->connect_ports = 1;
  meterec->jack_name = "meterec";
  meterec->session = (char *)(void *)0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen("meterec");
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(return_value_strlen$1 + (unsigned long int)1);
  meterec->session = (char *)return_value_malloc$2;
  strcpy(meterec->session, "meterec");
  meterec->conf_file = (char *)(void *)0;
  meterec->monitor = (struct _jack_port *)(void *)0;
  meterec->record_sts = (unsigned int)0;
  meterec->record_cmd = (unsigned int)0;
  meterec->playback_sts = (unsigned int)0;
  meterec->playback_cmd = (unsigned int)1;
  meterec->keyboard_cmd = (unsigned int)1;
  meterec->jack_sts = (unsigned int)0;
  meterec->curses_sts = (unsigned int)0;
  meterec->config_sts = (unsigned int)0;
  meterec->jack_transport = (unsigned int)1;
  meterec->pos.port = (unsigned int)0;
  meterec->pos.take = (unsigned int)0;
  meterec->pos.inout = 0;
  meterec->pos.con_in = 0;
  meterec->pos.con_out = 0;
  meterec->pos.n_con_in = 0;
  meterec->pos.n_con_out = 0;
  meterec->jack.sample_rate = (unsigned int)0;
  meterec->jack.playhead = (unsigned long int)0;
  meterec->disk.playhead = (unsigned long int)0;
  meterec->all_input_ports = (const char **)(void *)0;
  meterec->all_output_ports = (const char **)(void *)0;
  meterec->client = (struct _jack_client *)(void *)0;
  meterec->fd_log = (struct _IO_FILE *)(void *)0;
  meterec->write_disk_buffer_thread_pos = (unsigned int)0;
  meterec->write_disk_buffer_process_pos = (unsigned int)0;
  meterec->write_disk_buffer_overflow = (unsigned int)0;
  meterec->read_disk_buffer_thread_pos = (unsigned int)1;
  meterec->read_disk_buffer_process_pos = (unsigned int)0;
  meterec->read_disk_buffer_overflow = (unsigned int)0;
  index = (unsigned int)0;
  for( ; !(index >= 12u); index = index + 1u)
    meterec->seek_index[(signed long int)index] = (unsigned int)-1;
  meterec->loop.low = (unsigned int)-1;
  meterec->loop.high = (unsigned int)-1;
  meterec->loop.enable = (unsigned int)0;
  meterec->display.view = (unsigned long int)0;
  meterec->display.names = (unsigned long int)1;
  meterec->event = (struct event_s *)(void *)0;
  pthread_mutex_init(&meterec->event_mutex, (const union anonymous$0 *)(void *)0);
}

// process_jack_data
// file meterec.c line 727
static signed int process_jack_data(unsigned int nframes, void *arg)
{
  float *in;
  float *out;
  float *mon = (float *)(void *)0;
  struct _jack_position pos;
  unsigned int i;
  unsigned int port;
  unsigned int write_pos;
  unsigned int read_pos;
  unsigned int remaining_write_disk_buffer;
  unsigned int remaining_read_disk_buffer;
  unsigned int playback_ongoing;
  unsigned int record_ongoing;
  float s;
  struct meterec_s *process_jack_data$$1$$meterec;
  struct event_s *event;
  process_jack_data$$1$$meterec = (struct meterec_s *)arg;
  _Bool tmp_if_expr$1;
  if(!(process_jack_data$$1$$meterec->jack_transport == 0u))
  {
    static enum anonymous$2 transport_state = (enum anonymous$2)JackTransportStopped;
    static enum anonymous$2 previous_transport_state;
    previous_transport_state = transport_state;
    transport_state=jack_transport_query(process_jack_data$$1$$meterec->client, &pos);
    if(!(previous_transport_state == transport_state))
    {
      if((signed int)transport_state == JackTransportStopped)
      {
        process_jack_data$$1$$meterec->playback_cmd = (unsigned int)0;
        process_jack_data$$1$$meterec->record_cmd = (unsigned int)0;
      }

    }

    if((signed int)transport_state == JackTransportRolling)
      tmp_if_expr$1 = process_jack_data$$1$$meterec->playback_sts == (unsigned int)3 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    playback_ongoing = (unsigned int)tmp_if_expr$1;
  }

  else
    playback_ongoing = (unsigned int)(process_jack_data$$1$$meterec->playback_sts == (unsigned int)3);
  record_ongoing = (unsigned int)(process_jack_data$$1$$meterec->record_cmd != (unsigned int)0);
  event=find_first_event(process_jack_data$$1$$meterec, (unsigned int)3, (unsigned int)0);
  if(!(event == ((struct event_s *)NULL)))
    switch(event->type)
    {
      case (unsigned int)3:
      {
        process_jack_data$$1$$meterec->read_disk_buffer_process_pos = event->buffer_pos - (unsigned int)1;
        process_jack_data$$1$$meterec->read_disk_buffer_process_pos = process_jack_data$$1$$meterec->read_disk_buffer_process_pos + (unsigned int)(process_jack_data$$1$$meterec->jack.playhead - (unsigned long int)event->new_playhead);
        process_jack_data$$1$$meterec->read_disk_buffer_process_pos = process_jack_data$$1$$meterec->read_disk_buffer_process_pos & (unsigned int)(0x20000 - 1);
        pthread_mutex_lock(&process_jack_data$$1$$meterec->event_mutex);
        rm_event(process_jack_data$$1$$meterec, event);
        event = (struct event_s *)(void *)0;
        pthread_mutex_unlock(&process_jack_data$$1$$meterec->event_mutex);
        break;
      }
      case (unsigned int)1:
      {
        process_jack_data$$1$$meterec->read_disk_buffer_process_pos = event->buffer_pos;
        process_jack_data$$1$$meterec->jack.playhead = (unsigned long int)event->new_playhead;
        pthread_mutex_lock(&process_jack_data$$1$$meterec->event_mutex);
        rm_event(process_jack_data$$1$$meterec, event);
        event = (struct event_s *)(void *)0;
        pthread_mutex_unlock(&process_jack_data$$1$$meterec->event_mutex);
      }
    }

  if(!(process_jack_data$$1$$meterec->monitor == ((struct _jack_port *)NULL)))
  {
    void *return_value_jack_port_get_buffer$2;
    return_value_jack_port_get_buffer$2=jack_port_get_buffer(process_jack_data$$1$$meterec->monitor, nframes);
    mon = (float *)return_value_jack_port_get_buffer$2;
    i = (unsigned int)0;
    for( ; !(i >= nframes); i = i + 1u)
      mon[(signed long int)i] = 0.0f;
  }

  port = (unsigned int)0;
  for( ; !(port >= process_jack_data$$1$$meterec->n_ports); port = port + 1u)
    if(!(process_jack_data$$1$$meterec->ports[(signed long int)port].input == ((struct _jack_port *)NULL)))
    {
      if(!(process_jack_data$$1$$meterec->ports[(signed long int)port].output == ((struct _jack_port *)NULL)))
      {
        void *return_value_jack_port_get_buffer$3;
        return_value_jack_port_get_buffer$3=jack_port_get_buffer(process_jack_data$$1$$meterec->ports[(signed long int)port].output, nframes);
        out = (float *)return_value_jack_port_get_buffer$3;
        void *return_value_jack_port_get_buffer$4;
        return_value_jack_port_get_buffer$4=jack_port_get_buffer(process_jack_data$$1$$meterec->ports[(signed long int)port].input, nframes);
        in = (float *)return_value_jack_port_get_buffer$4;
        if(!(process_jack_data$$1$$meterec->monitor == ((struct _jack_port *)NULL)))
        {
          if(!(process_jack_data$$1$$meterec->ports[(signed long int)port].monitor == 0))
          {
            i = (unsigned int)0;
            for( ; !(i >= nframes); i = i + 1u)
              mon[(signed long int)i] = mon[(signed long int)i] + in[(signed long int)i];
          }

        }

        if(!(playback_ongoing == 0u))
        {
          read_pos = process_jack_data$$1$$meterec->read_disk_buffer_process_pos;
          i = (unsigned int)0;
          for( ; !(i >= nframes); i = i + 1u)
          {
            if(!(process_jack_data$$1$$meterec->ports[(signed long int)port].mute == 0))
              out[(signed long int)i] = 0.0f;

            else
              out[(signed long int)i] = process_jack_data$$1$$meterec->ports[(signed long int)port].read_disk_buffer[(signed long int)read_pos];
            read_pos = read_pos + (unsigned int)1 & (unsigned int)(0x20000 - 1);
            double return_value_fabs$5;
            return_value_fabs$5=fabs((double)(in[(signed long int)i] * 1.0f));
            s = (float)return_value_fabs$5;
            if(s > process_jack_data$$1$$meterec->ports[(signed long int)port].peak_in)
              process_jack_data$$1$$meterec->ports[(signed long int)port].peak_in = s;

            double return_value_fabs$6;
            return_value_fabs$6=fabs((double)(process_jack_data$$1$$meterec->ports[(signed long int)port].read_disk_buffer[(signed long int)read_pos] * 1.0f));
            s = (float)return_value_fabs$6;
            if(s > process_jack_data$$1$$meterec->ports[(signed long int)port].peak_out)
              process_jack_data$$1$$meterec->ports[(signed long int)port].peak_out = s;

          }
          if(!(record_ongoing == 0u))
          {
            write_pos = process_jack_data$$1$$meterec->write_disk_buffer_process_pos;
            i = (unsigned int)0;
            for( ; !(i >= nframes); i = i + 1u)
            {
              if(process_jack_data$$1$$meterec->ports[(signed long int)port].record == 4)
                process_jack_data$$1$$meterec->ports[(signed long int)port].write_disk_buffer[(signed long int)write_pos] = in[(signed long int)i] + out[(signed long int)i];

              else
                if(!(process_jack_data$$1$$meterec->ports[(signed long int)port].record == 0))
                  process_jack_data$$1$$meterec->ports[(signed long int)port].write_disk_buffer[(signed long int)write_pos] = in[(signed long int)i];

              write_pos = write_pos + (unsigned int)1 & (unsigned int)(0x20000 - 1);
            }
          }

        }

        else
        {
          i = (unsigned int)0;
          for( ; !(i >= nframes); i = i + 1u)
          {
            out[(signed long int)i] = 0.0f;
            double return_value_fabs$7;
            return_value_fabs$7=fabs((double)(in[(signed long int)i] * 1.0f));
            s = (float)return_value_fabs$7;
            if(s > process_jack_data$$1$$meterec->ports[(signed long int)port].peak_in)
              process_jack_data$$1$$meterec->ports[(signed long int)port].peak_in = s;

          }
        }
        if(!(process_jack_data$$1$$meterec->ports[(signed long int)port].thru == 0))
        {
          i = (unsigned int)0;
          for( ; !(i >= nframes); i = i + 1u)
            out[(signed long int)i] = out[(signed long int)i] + in[(signed long int)i];
        }

      }

    }

  if(!(playback_ongoing == 0u))
  {
    remaining_read_disk_buffer = (unsigned int)0x20000 - (process_jack_data$$1$$meterec->read_disk_buffer_thread_pos - process_jack_data$$1$$meterec->read_disk_buffer_process_pos & (unsigned int)(0x20000 - 1));
    if(nframes >= remaining_read_disk_buffer)
      process_jack_data$$1$$meterec->read_disk_buffer_overflow = process_jack_data$$1$$meterec->read_disk_buffer_overflow + 1u;

    process_jack_data$$1$$meterec->read_disk_buffer_process_pos = process_jack_data$$1$$meterec->read_disk_buffer_process_pos + nframes & (unsigned int)(0x20000 - 1);
    process_jack_data$$1$$meterec->jack.playhead = process_jack_data$$1$$meterec->jack.playhead + (unsigned long int)nframes;
    if(!(event == ((struct event_s *)NULL)))
    {
      if(event->type == 2u)
      {
        if(!((unsigned long int)event->new_playhead >= process_jack_data$$1$$meterec->jack.playhead))
        {
          process_jack_data$$1$$meterec->jack.playhead = process_jack_data$$1$$meterec->jack.playhead - (unsigned long int)(event->new_playhead - event->old_playhead);
          pthread_mutex_lock(&process_jack_data$$1$$meterec->event_mutex);
          rm_event(process_jack_data$$1$$meterec, event);
          event = (struct event_s *)(void *)0;
          pthread_mutex_unlock(&process_jack_data$$1$$meterec->event_mutex);
        }

      }

    }

    if(!(record_ongoing == 0u))
    {
      remaining_write_disk_buffer = (unsigned int)0x20000 - (process_jack_data$$1$$meterec->write_disk_buffer_process_pos - process_jack_data$$1$$meterec->write_disk_buffer_thread_pos & (unsigned int)(0x20000 - 1));
      if(nframes >= remaining_write_disk_buffer)
        process_jack_data$$1$$meterec->write_disk_buffer_overflow = process_jack_data$$1$$meterec->write_disk_buffer_overflow + 1u;

      process_jack_data$$1$$meterec->write_disk_buffer_process_pos = process_jack_data$$1$$meterec->write_disk_buffer_process_pos + nframes & (unsigned int)(0x20000 - 1);
    }

  }

  else
    process_jack_data$$1$$meterec->jack.playhead = (unsigned long int)0;
  return 0;
}

// process_jack_sync
// file meterec.c line 701
static signed int process_jack_sync(enum anonymous$2 state, struct _jack_position *pos, void *arg)
{
  struct meterec_s *process_jack_sync$$1$$meterec = (struct meterec_s *)arg;
  if((signed int)state == JackTransportStarting)
  {
    if(process_jack_sync$$1$$meterec->playback_sts == 0u)
    {
      start_playback(process_jack_sync$$1$$meterec);
      goto __CPROVER_DUMP_L2;
    }

    if(!(process_jack_sync$$1$$meterec->playback_sts == 3u))
      goto __CPROVER_DUMP_L2;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    if((signed int)state == JackTransportRolling)
      return 1;

    else
      if((signed int)state == JackTransportStopped)
        return 1;

      else
        return 0;
  }
}

// process_port_register
// file ports.c line 32
void process_port_register(unsigned int port_id, signed int new, void *arg)
{
  struct meterec_s *process_port_register$$1$$meterec;
  unsigned int port;
  unsigned int con;
  const char *port_name;
  struct _jack_port *jack_port;
  signed int needs_connection = 0;
  signed int return_value_strcmp$1;
  if(!(new == 0))
  {
    process_port_register$$1$$meterec = (struct meterec_s *)arg;
    if(!(process_port_register$$1$$meterec->connect_ports == 0))
    {
      jack_port=jack_port_by_id(process_port_register$$1$$meterec->client, port_id);
      port_name=jack_port_name(jack_port);
      port = (unsigned int)0;
      for( ; !(port >= process_port_register$$1$$meterec->n_ports); port = port + 1u)
      {
        con = (unsigned int)0;
        for( ; !(con >= process_port_register$$1$$meterec->ports[(signed long int)port].n_cons); con = con + 1u)
        {
          return_value_strcmp$1=strcmp(port_name, process_port_register$$1$$meterec->ports[(signed long int)port].connections[(signed long int)con]);
          if(return_value_strcmp$1 == 0)
          {
            fprintf(process_port_register$$1$$meterec->fd_log, "Found new port '%s' to be connected to port No %d.\n", port_name, port);
            needs_connection = needs_connection + 1;
          }

        }
      }
      if(!(needs_connection == 0))
        pthread_create(&cn_dt, (const union pthread_attr_t *)(void *)0, connect_all_ports, (void *)process_port_register$$1$$meterec);

    }

  }

}

// read_disk_buffer_level
// file disk.h line 25
float read_disk_buffer_level(struct meterec_s *meterec)
{
  float level = (float)(meterec->read_disk_buffer_process_pos - meterec->read_disk_buffer_thread_pos & (unsigned int)(0x20000 - 1));
  return (float)(level / (float)0x20000);
}

// read_disk_close_fd
// file disk.c line 171
void read_disk_close_fd(struct meterec_s *meterec)
{
  unsigned int take = (unsigned int)1;
  for( ; !(take >= 1u + meterec->n_takes); take = take + 1u)
    if(!(meterec->takes[(signed long int)take].take_fd == ((struct SNDFILE_tag *)NULL)))
    {
      sf_close(meterec->takes[(signed long int)take].take_fd);
      free((void *)meterec->takes[(signed long int)take].buf);
      meterec->takes[(signed long int)take].buf = (float *)(void *)0;
      meterec->takes[(signed long int)take].take_fd = (struct SNDFILE_tag *)(void *)0;
    }

}

// read_disk_open_fd
// file disk.c line 185
void read_disk_open_fd(struct meterec_s *meterec)
{
  unsigned int take;
  unsigned int port;
  unsigned int i;
  port = (unsigned int)0;
  for( ; !(port >= meterec->n_ports); port = port + 1u)
  {
    take = meterec->ports[(signed long int)port].playback_take;
    if(take == 0u)
    {
      fprintf(meterec->fd_log, "Reader thread: Port %d does not have a take associated\n", port + (unsigned int)1);
      i = (unsigned int)0;
      for( ; !(i >= 131072u); i = i + 1u)
        meterec->ports[(signed long int)port].read_disk_buffer[(signed long int)i] = 0.0f;
    }

    else
      if(meterec->ports[(signed long int)port].record == 1)
      {
        if(!(meterec->record_cmd == 1u))
          goto __CPROVER_DUMP_L7;

        fprintf(meterec->fd_log, "Reader thread: Port %d beeing recorded in REC mode will not have a playback take associated\n", port + (unsigned int)1);
        i = (unsigned int)0;
        for( ; !(i >= 131072u); i = i + 1u)
          meterec->ports[(signed long int)port].read_disk_buffer[(signed long int)i] = 0.0f;
      }

      else
      {

      __CPROVER_DUMP_L7:
        ;
        fprintf(meterec->fd_log, "Reader thread: Port %d has take %d associated\n", port + (unsigned int)1, take);
        if(meterec->takes[(signed long int)take].take_fd == ((struct SNDFILE_tag *)NULL))
        {
          meterec->takes[(signed long int)take].take_fd=sf_open(meterec->takes[(signed long int)take].take_file, 16, &meterec->takes[(signed long int)take].info);
          if(meterec->takes[(signed long int)take].take_fd == ((struct SNDFILE_tag *)NULL))
          {
            meterec->playback_sts = (unsigned int)0;
            fprintf(meterec->fd_log, "Reader thread: Cannot open file '%s' for reading\n", meterec->takes[(signed long int)take].take_file);
            exit_on_error("Reader thread: Cannot open file for reading");
          }

          fprintf(meterec->fd_log, "Reader thread: Opened '%s' for reading\n", meterec->takes[(signed long int)take].take_file);
          fprintf(meterec->fd_log, "Reader thread: Allocating local buffer space %d*%d for take %d\n", meterec->takes[(signed long int)take].ntrack, 4096, take);
          void *return_value_calloc$1;
          return_value_calloc$1=calloc((unsigned long int)((unsigned int)4096 * meterec->takes[(signed long int)take].ntrack), sizeof(float) /*4ul*/ );
          meterec->takes[(signed long int)take].buf = (float *)return_value_calloc$1;
        }

        else
          fprintf(meterec->fd_log, "Reader thread: File and buffer already setup.\n");
      }
  }
}

// read_disk_seek
// file disk.c line 340
void read_disk_seek(struct meterec_s *meterec, unsigned int seek)
{
  unsigned int take;
  signed long int reached;
  take = (unsigned int)1;
  for( ; !(take >= 1u + meterec->n_takes); take = take + 1u)
    if(!(meterec->takes[(signed long int)take].take_fd == ((struct SNDFILE_tag *)NULL)))
    {
      reached=sf_seek(meterec->takes[(signed long int)take].take_fd, (signed long int)seek, 0);
      if(!((signed long int)seek == reached))
        sf_seek(meterec->takes[(signed long int)take].take_fd, (signed long int)0, 2);

    }

}

// read_peak
// file meterec.c line 179
void read_peak(float bias)
{
  unsigned int port = (unsigned int)0;
  for( ; !(port >= meterec->n_ports); port = port + 1u)
  {
    if(meterec->ports[(signed long int)port].peak_in > meterec->ports[(signed long int)port].max_in)
    {
      meterec->ports[(signed long int)port].max_in = meterec->ports[(signed long int)port].peak_in;
      float return_value_log10f$1;
      return_value_log10f$1=log10f(meterec->ports[(signed long int)port].max_in * bias);
      meterec->ports[(signed long int)port].db_max_in = 20.0f * return_value_log10f$1;
    }

    float return_value_log10f$2;
    return_value_log10f$2=log10f(meterec->ports[(signed long int)port].peak_in * bias);
    meterec->ports[(signed long int)port].db_in = 20.0f * return_value_log10f$2;
    meterec->ports[(signed long int)port].peak_in = 0.0f;
    float return_value_log10f$3;
    return_value_log10f$3=log10f(meterec->ports[(signed long int)port].peak_out * bias);
    meterec->ports[(signed long int)port].db_out = 20.0f * return_value_log10f$3;
    meterec->ports[(signed long int)port].peak_out = 0.0f;
  }
}

// reader_thread
// file disk.c line 368
void * reader_thread(void *d)
{
  unsigned int rdbuff_pos;
  unsigned int zbuff_pos;
  unsigned int thread_delay;
  unsigned int may_loop;
  struct event_s *event;
  struct event_s *event_kill;
  struct meterec_s *reader_thread$$1$$meterec = (struct meterec_s *)d;
  reader_thread$$1$$meterec->playback_sts = (unsigned int)1;
  fprintf(reader_thread$$1$$meterec->fd_log, "Reader thread: started.\n");
  thread_delay=set_thread_delay(reader_thread$$1$$meterec);
  reader_thread$$1$$meterec->read_disk_buffer_thread_pos = reader_thread$$1$$meterec->read_disk_buffer_process_pos + (unsigned int)1;
  reader_thread$$1$$meterec->read_disk_buffer_thread_pos = reader_thread$$1$$meterec->read_disk_buffer_thread_pos & (unsigned int)(0x20000 - 1);
  read_disk_open_fd(reader_thread$$1$$meterec);
  fprintf(reader_thread$$1$$meterec->fd_log, "Reader thread: Start reading files.\n");
  zbuff_pos = (unsigned int)0;
  for( ; !(reader_thread$$1$$meterec->read_disk_buffer_thread_pos == reader_thread$$1$$meterec->read_disk_buffer_process_pos); reader_thread$$1$$meterec->read_disk_buffer_thread_pos = rdbuff_pos)
    rdbuff_pos=fill_buffer(reader_thread$$1$$meterec, &zbuff_pos);
  reader_thread$$1$$meterec->playback_sts = (unsigned int)3;
  while(reader_thread$$1$$meterec->playback_cmd == 1u)
  {
    event=find_last_event(reader_thread$$1$$meterec, (unsigned int)1, (unsigned int)0);
    if(!(event == ((struct event_s *)NULL)))
      switch(event->type)
      {
        case (unsigned int)3:
        {
          read_disk_close_fd(reader_thread$$1$$meterec);
          compute_takes_to_playback(reader_thread$$1$$meterec);
          read_disk_open_fd(reader_thread$$1$$meterec);
        }
        case (unsigned int)1:
        {
          reader_thread$$1$$meterec->read_disk_buffer_thread_pos = reader_thread$$1$$meterec->read_disk_buffer_process_pos - (unsigned int)(0x20000 / 2);
          reader_thread$$1$$meterec->read_disk_buffer_thread_pos = reader_thread$$1$$meterec->read_disk_buffer_thread_pos & (unsigned int)(0x20000 - 1);
          read_disk_seek(reader_thread$$1$$meterec, event->new_playhead);
          zbuff_pos = (unsigned int)0;
          event->buffer_pos = reader_thread$$1$$meterec->read_disk_buffer_thread_pos;
          event->buffer_pos = event->buffer_pos & (unsigned int)(0x20000 - 1);
          reader_thread$$1$$meterec->disk.playhead = (unsigned long int)event->new_playhead;
          event->queue = (unsigned int)2;
          pthread_mutex_lock(&reader_thread$$1$$meterec->event_mutex);
          find_rm_events(reader_thread$$1$$meterec, (unsigned int)3, (unsigned int)0);
          find_rm_events(reader_thread$$1$$meterec, (unsigned int)1, (unsigned int)0);
          pthread_mutex_unlock(&reader_thread$$1$$meterec->event_mutex);
          break;
        }
        case (unsigned int)2:
          if(!(reader_thread$$1$$meterec->loop.enable == 0u))
          {
            if(!((unsigned long int)reader_thread$$1$$meterec->loop.high >= reader_thread$$1$$meterec->disk.playhead))
            {
              if(!(reader_thread$$1$$meterec->jack.playhead >= (unsigned long int)reader_thread$$1$$meterec->loop.high))
              {
                reader_thread$$1$$meterec->read_disk_buffer_thread_pos = reader_thread$$1$$meterec->read_disk_buffer_thread_pos - reader_thread$$1$$meterec->loop.high;
                reader_thread$$1$$meterec->read_disk_buffer_thread_pos = reader_thread$$1$$meterec->read_disk_buffer_thread_pos + (unsigned int)reader_thread$$1$$meterec->disk.playhead;
                reader_thread$$1$$meterec->read_disk_buffer_thread_pos = reader_thread$$1$$meterec->read_disk_buffer_thread_pos & (unsigned int)(0x20000 - 1);
                read_disk_seek(reader_thread$$1$$meterec, reader_thread$$1$$meterec->loop.low);
                zbuff_pos = (unsigned int)0;
                reader_thread$$1$$meterec->disk.playhead = (unsigned long int)reader_thread$$1$$meterec->loop.low;
              }

            }

            pthread_mutex_lock(&reader_thread$$1$$meterec->event_mutex);
            rm_event(reader_thread$$1$$meterec, event);
            event = (struct event_s *)(void *)0;
            pthread_mutex_unlock(&reader_thread$$1$$meterec->event_mutex);
          }

          else
          {
            event_kill=find_first_event(reader_thread$$1$$meterec, (unsigned int)3, (unsigned int)2);
            if(!(event_kill == ((struct event_s *)NULL)))
              reader_thread$$1$$meterec->read_disk_buffer_thread_pos = event_kill->buffer_pos;

            pthread_mutex_lock(&reader_thread$$1$$meterec->event_mutex);
            find_rm_events(reader_thread$$1$$meterec, (unsigned int)0, (unsigned int)2);
            event = (struct event_s *)(void *)0;
            pthread_mutex_unlock(&reader_thread$$1$$meterec->event_mutex);
          }
      }

    may_loop = (unsigned int)0;
    if(!(reader_thread$$1$$meterec->loop.enable == 0u))
    {
      if(!(reader_thread$$1$$meterec->disk.playhead >= (unsigned long int)reader_thread$$1$$meterec->loop.high))
        may_loop = (unsigned int)1;

    }

    rdbuff_pos=fill_buffer(reader_thread$$1$$meterec, &zbuff_pos);
    if(!(may_loop == 0u))
    {
      if(reader_thread$$1$$meterec->disk.playhead >= (unsigned long int)reader_thread$$1$$meterec->loop.high)
      {
        read_disk_seek(reader_thread$$1$$meterec, reader_thread$$1$$meterec->loop.low);
        zbuff_pos = (unsigned int)0;
        rdbuff_pos = rdbuff_pos - (unsigned int)(reader_thread$$1$$meterec->disk.playhead - (unsigned long int)reader_thread$$1$$meterec->loop.high);
        rdbuff_pos = rdbuff_pos & (unsigned int)(0x20000 - 1);
        reader_thread$$1$$meterec->disk.playhead = (unsigned long int)reader_thread$$1$$meterec->loop.low;
        pthread_mutex_lock(&reader_thread$$1$$meterec->event_mutex);
        add_event(reader_thread$$1$$meterec, (unsigned int)3, (unsigned int)2, reader_thread$$1$$meterec->loop.low, reader_thread$$1$$meterec->loop.high, rdbuff_pos);
        pthread_mutex_unlock(&reader_thread$$1$$meterec->event_mutex);
      }

    }

    event=find_first_event(reader_thread$$1$$meterec, (unsigned int)2, (unsigned int)0);
    if(!(event == ((struct event_s *)NULL)))
      switch(event->type)
      {
        case (unsigned int)1:
        {
          if(!(reader_thread$$1$$meterec->read_disk_buffer_thread_pos == rdbuff_pos))
            event->queue = (unsigned int)3;

          break;
        }
        case (unsigned int)3:
          if(!(4096ul + reader_thread$$1$$meterec->jack.playhead >= reader_thread$$1$$meterec->disk.playhead))
            event->queue = (unsigned int)3;

      }

    reader_thread$$1$$meterec->read_disk_buffer_thread_pos = rdbuff_pos;
    usleep(thread_delay);
  }
  read_disk_close_fd(reader_thread$$1$$meterec);
  fprintf(reader_thread$$1$$meterec->fd_log, "Reader thread: done.\n");
  reader_thread$$1$$meterec->playback_sts = (unsigned int)0;
  return NULL;
}

// register_connect_port
// file ports.c line 389
void register_connect_port(struct meterec_s *meterec, char *port_name, unsigned int port)
{
  register_port(meterec, port_name, port);
  connect_any_port(meterec, port_name, port);
}

// register_port
// file ports.h line 29
void register_port(struct meterec_s *meterec, char *port_name, unsigned int port)
{
  struct _jack_port *jack_port;
  unsigned int con = meterec->ports[(signed long int)port].n_cons;
  jack_port=jack_port_by_name(meterec->client, port_name);
  if(jack_port == ((struct _jack_port *)NULL))
    fprintf(meterec->fd_log, "Can't find port '%s' will connect later if port becomes available.\n", port_name);

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(port_name);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(return_value_strlen$1 + (unsigned long int)1);
  meterec->ports[(signed long int)port].connections[(signed long int)con] = (char *)return_value_malloc$2;
  strcpy(meterec->ports[(signed long int)port].connections[(signed long int)con], port_name);
  meterec->ports[(signed long int)port].n_cons = meterec->ports[(signed long int)port].n_cons + (unsigned int)1;
}

// register_port_old
// file ports.h line 28
void register_port_old(struct meterec_s *meterec, char *port_name, unsigned int port)
{
  char *tmp = (char *)(void *)0;
  struct _jack_port *jack_port;
  jack_port=jack_port_by_name(meterec->client, port_name);
  if(jack_port == ((struct _jack_port *)NULL))
  {
    fprintf(meterec->fd_log, "Can't find port '%s' assuming this is part of port name.\n", port_name);
    if(!(meterec->ports[(signed long int)port].name == ((char *)NULL)))
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(meterec->ports[(signed long int)port].name);
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(return_value_strlen$1 + (unsigned long int)1);
      tmp = (char *)return_value_malloc$2;
      strcpy(tmp, meterec->ports[(signed long int)port].name);
      free((void *)meterec->ports[(signed long int)port].name);
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(port_name);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(tmp);
      void *return_value_malloc$5;
      return_value_malloc$5=malloc(return_value_strlen$3 + (unsigned long int)1 + return_value_strlen$4 + (unsigned long int)1);
      meterec->ports[(signed long int)port].name = (char *)return_value_malloc$5;
      sprintf(meterec->ports[(signed long int)port].name, "%s %s", tmp, port_name);
      free((void *)tmp);
    }

    else
    {
      unsigned long int return_value_strlen$6;
      return_value_strlen$6=strlen(port_name);
      void *return_value_malloc$7;
      return_value_malloc$7=malloc(return_value_strlen$6 + (unsigned long int)1);
      meterec->ports[(signed long int)port].name = (char *)return_value_malloc$7;
      strcpy(meterec->ports[(signed long int)port].name, port_name);
    }
    goto __CPROVER_DUMP_L5;
  }

  else
  {
    unsigned long int return_value_strlen$8;
    return_value_strlen$8=strlen(port_name);
    void *return_value_malloc$9;
    return_value_malloc$9=malloc(return_value_strlen$8 + (unsigned long int)1);
    meterec->ports[(signed long int)port].connections[(signed long int)meterec->ports[(signed long int)port].n_cons] = (char *)return_value_malloc$9;
    strcpy(meterec->ports[(signed long int)port].connections[(signed long int)meterec->ports[(signed long int)port].n_cons], port_name);
    meterec->ports[(signed long int)port].n_cons = meterec->ports[(signed long int)port].n_cons + (unsigned int)1;
  }

__CPROVER_DUMP_L5:
  ;
}

// resolve_conf_file
// file meterec.c line 519
void resolve_conf_file(struct meterec_s *meterec, char *conf_file)
{
  char *conf_file_test;
  unsigned int i;
  free((void *)meterec->session);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(conf_file);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(return_value_strlen$1 + (unsigned long int)1);
  meterec->session = (char *)return_value_malloc$2;
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(conf_file);
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(".mrec");
  void *return_value_malloc$5;
  return_value_malloc$5=malloc(return_value_strlen$3 + return_value_strlen$4 + (unsigned long int)1);
  meterec->conf_file = (char *)return_value_malloc$5;
  unsigned long int return_value_strlen$6;
  return_value_strlen$6=strlen(conf_file);
  unsigned long int return_value_strlen$7;
  return_value_strlen$7=strlen("/.mrec");
  void *return_value_malloc$8;
  return_value_malloc$8=malloc((unsigned long int)2 * return_value_strlen$6 + return_value_strlen$7 + (unsigned long int)1);
  conf_file_test = (char *)return_value_malloc$8;
  unsigned long int return_value_strlen$9;
  return_value_strlen$9=strlen(conf_file);
  i = (unsigned int)return_value_strlen$9;
  for( ; !(i == 0u); i = i - 1u)
    if((signed int)conf_file[(signed long int)i] == 47)
      break;

  if(!(i == 0u))
  {
    strcpy(conf_file_test, conf_file);
    conf_file_test[(signed long int)i] = (char)0;
    printf("Changing to session directory '%s'\n", conf_file_test);
    signed int return_value_chdir$10;
    return_value_chdir$10=chdir(conf_file_test);
    conf_file = conf_file + (signed long int)(i + (unsigned int)1);
  }

  unsigned long int return_value_strlen$17;
  return_value_strlen$17=strlen(conf_file);
  unsigned long int return_value_strlen$18;
  return_value_strlen$18=strlen(".mrec");
  signed int return_value_strcmp$19;
  return_value_strcmp$19=strcmp((conf_file + (signed long int)return_value_strlen$17) - (signed long int)return_value_strlen$18, ".mrec");
  if(!(return_value_strcmp$19 == 0))
  {
    sprintf(conf_file_test, "%s.mrec", conf_file);
    signed int return_value_file_exists$11;
    return_value_file_exists$11=file_exists(conf_file_test);
    if(!(return_value_file_exists$11 == 0))
    {
      strcpy(meterec->session, conf_file);
      strcpy(meterec->conf_file, conf_file_test);
      free((void *)conf_file_test);
      goto __CPROVER_DUMP_L9;
    }

    sprintf(conf_file_test, "%s/%s.mrec", conf_file, conf_file);
    signed int return_value_file_exists$13;
    return_value_file_exists$13=file_exists(conf_file_test);
    if(!(return_value_file_exists$13 == 0))
    {
      signed int return_value_chdir$12;
      return_value_chdir$12=chdir(conf_file);
      strcpy(meterec->session, conf_file);
      sprintf(meterec->conf_file, "%s.mrec", conf_file);
      free((void *)conf_file_test);
      goto __CPROVER_DUMP_L9;
    }

    free((void *)conf_file_test);
    exit_on_error("No configuration found based on session name supplied\n");
  }

  else
  {
    signed int return_value_file_exists$16;
    return_value_file_exists$16=file_exists(conf_file);
    if(!(return_value_file_exists$16 == 0))
    {
      strcpy(meterec->conf_file, conf_file);
      strcpy(meterec->session, conf_file);
      unsigned long int return_value_strlen$14;
      return_value_strlen$14=strlen(conf_file);
      unsigned long int return_value_strlen$15;
      return_value_strlen$15=strlen(".mrec");
      meterec->session[(signed long int)(return_value_strlen$14 - return_value_strlen$15)] = (char)0;
      free((void *)conf_file_test);
      goto __CPROVER_DUMP_L9;
    }

    free((void *)conf_file_test);
    exit_on_error("Configuration file does not exists\n");
  }
  free((void *)conf_file_test);

__CPROVER_DUMP_L9:
  ;
}

// retreive_connected_ports
// file ports.c line 65
void retreive_connected_ports(struct meterec_s *meterec)
{
  unsigned int port = (unsigned int)0;
  for( ; !(port >= meterec->n_ports); port = port + 1u)
  {
    free((void *)meterec->ports[(signed long int)port].input_connected);
    free((void *)meterec->ports[(signed long int)port].output_connected);
    meterec->ports[(signed long int)port].input_connected=jack_port_get_connections(meterec->ports[(signed long int)port].input);
    meterec->ports[(signed long int)port].output_connected=jack_port_get_connections(meterec->ports[(signed long int)port].output);
  }
}

// retreive_existing_ports
// file ports.c line 79
void retreive_existing_ports(struct meterec_s *meterec)
{
  if(!(meterec->all_input_ports == ((const char **)NULL)))
    free((void *)meterec->all_input_ports);

  if(!(meterec->all_output_ports == ((const char **)NULL)))
    free((void *)meterec->all_output_ports);

  meterec->all_input_ports=jack_get_ports(meterec->client, (const char *)(void *)0, (const char *)(void *)0, (unsigned long int)1);
  meterec->all_output_ports=jack_get_ports(meterec->client, (const char *)(void *)0, (const char *)(void *)0, (unsigned long int)2);
}

// rm_event
// file queue.c line 138
void rm_event(struct meterec_s *meterec, struct event_s *event)
{
  if(!(event == ((struct event_s *)NULL)))
  {
    if(!(event->prev == ((struct event_s *)NULL)))
      event->prev->next = event->next;

    else
      meterec->event = event->next;
    if(!(event->next == ((struct event_s *)NULL)))
      event->next->prev = event->prev;

    if(event->prev == ((struct event_s *)NULL))
    {
      if(event->next == ((struct event_s *)NULL))
        meterec->event = (struct event_s *)(void *)0;

    }

    free((void *)event);
  }

}

// roll
// file meterec.h line 316
void roll(struct meterec_s *meterec)
{
  fprintf(meterec->fd_log, "Roll requested.\n");
  if(!(meterec->jack_transport == 0u))
  {
    jack_transport_locate(meterec->client, (unsigned int)0);
    jack_transport_start(meterec->client);
  }

  else
    start_playback(meterec);
}

// save_conf
// file conf.c line 234
void save_conf(struct meterec_s *meterec)
{
  char *file;
  struct _IO_FILE *fd_conf;
  unsigned int take;
  unsigned int port;
  unsigned int con;
  unsigned int index;
  struct time_s time;
  char *rec;
  char time_str[14l];
  file = meterec->conf_file;
  time.rate=jack_get_sample_rate(meterec->client);
  fd_conf=fopen(file, "w");
  if(fd_conf == ((struct _IO_FILE *)NULL))
  {
    fprintf(meterec->fd_log, "could not open '%s' for writing\n", file);
    exit_on_error("Cannot open configuration file for writing.");
  }

  fprintf(fd_conf, "ports=\n(\n");
  port = (unsigned int)0;
  char *tmp_if_expr$1;
  for( ; !(port >= meterec->n_ports); port = port + 1u)
  {
    if(!(port == 0u))
      fprintf(fd_conf, ",\n");

    fprintf(fd_conf, "  { takes=\"");
    take = (unsigned int)1;
    for( ; !(take >= 1u + meterec->n_takes); take = take + 1u)
      if(!(meterec->takes[(signed long int)take].port_has_lock[(signed long int)port] == 0u))
        fprintf(fd_conf, meterec->takes[(signed long int)take].port_has_track[(signed long int)port] != 0u ? "L" : "l");

      else
        fprintf(fd_conf, meterec->takes[(signed long int)take].port_has_track[(signed long int)port] != 0u ? "X" : "-");
    fprintf(fd_conf, "\"; ");
    if(meterec->ports[(signed long int)port].record == 1)
      rec = "rec";

    else
      if(meterec->ports[(signed long int)port].record == 2)
        rec = "dub";

      else
        if(meterec->ports[(signed long int)port].record == 4)
          rec = "ovr";

        else
          rec = "---";
    fprintf(fd_conf, "record=\"%s\"; ", rec);
    fprintf(fd_conf, "mute=%s ", meterec->ports[(signed long int)port].mute != 0 ? "true; " : "false;");
    fprintf(fd_conf, "thru=%s ", meterec->ports[(signed long int)port].thru != 0 ? "true; " : "false;");
    fprintf(fd_conf, "connections=(");
    con = (unsigned int)0;
    for( ; !(con >= meterec->ports[(signed long int)port].n_cons); con = con + 1u)
    {
      if(!(con == 0u))
        fprintf(fd_conf, ",");

      fprintf(fd_conf, "\"%s\"", meterec->ports[(signed long int)port].connections[(signed long int)con]);
    }
    fprintf(fd_conf, "); ");
    if(!(meterec->ports[(signed long int)port].name == ((char *)NULL)))
      tmp_if_expr$1 = meterec->ports[(signed long int)port].name;

    else
      tmp_if_expr$1 = "";
    fprintf(fd_conf, "name=\"%s\"; }", tmp_if_expr$1);
  }
  fprintf(fd_conf, "\n);\n\n");
  fprintf(fd_conf, "indexes=\n{\n");
  index = (unsigned int)0;
  for( ; !(index >= 12u); index = index + 1u)
  {
    time.frm = meterec->seek_index[(signed long int)index];
    if(!(time.frm == 4294967295u))
    {
      time_hms(&time);
      time_sprint(&time, time_str);
      fprintf(fd_conf, "  f%d=\"%s\";\n", index + (unsigned int)1, (const void *)time_str);
    }

  }
  fprintf(fd_conf, "};\n\n");
  if(!(meterec->jack.sample_rate == 0u))
  {
    fprintf(fd_conf, "jack=\n{\n");
    fprintf(fd_conf, "  sample_rate=%d;\n", meterec->jack.sample_rate);
    fprintf(fd_conf, "};\n\n");
  }

  fprintf(fd_conf, "version=1;\n\n");
  fclose(fd_conf);
  fprintf(meterec->fd_log, "Saved configuration to '%s'.\n", file);
}

// seek
// file meterec.h line 317
unsigned int seek(struct meterec_s *meterec, signed int seek_sec)
{
  unsigned int nframes;
  unsigned int sample_rate;
  nframes = (unsigned int)meterec->jack.playhead;
  sample_rate = meterec->jack.sample_rate;
  fprintf(meterec->fd_log, "seek: at %d needs to seek %d (sr=%d)\n", nframes, (unsigned int)seek_sec * sample_rate, sample_rate);
  signed int return_value_abs$1;
  if(!(seek_sec >= 0))
  {
    return_value_abs$1=abs(seek_sec);
    if(nframes >= sample_rate * (unsigned int)return_value_abs$1)
      goto __CPROVER_DUMP_L1;

    return (unsigned int)0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return nframes + (unsigned int)seek_sec * sample_rate;
  }
}

// session_callback
// file session.c line 35
void session_callback(struct _jack_session_event *event, void *arg)
{
  char retval[200l];
  struct meterec_s *session_callback$$1$$meterec;
  char *pwd;
  session_callback$$1$$meterec = (struct meterec_s *)arg;
  pwd=getcwd((char *)(void *)0, (unsigned long int)0);
  snprintf(retval, (unsigned long int)200, "meterec -s %s/%s.mrec -j %s -u %s", pwd, session_callback$$1$$meterec->session, session_callback$$1$$meterec->jack_name, event->client_uuid);
  event->command_line=strdup(retval);
  event->flags = (enum JackSessionFlags)JackSessionNeedTerminal;
  jack_session_reply(session_callback$$1$$meterec->client, event);
  if((signed int)event->type == JackSessionSaveAndQuit)
  {
    jack_session_event_free(event);
    halt(0);
  }

  jack_session_event_free(event);
}

// set_loop
// file meterec.h line 322
signed int set_loop(struct meterec_s *meterec, unsigned int loophead)
{
  if(meterec->loop.low == 4294967295u)
  {
    if(meterec->loop.high == 4294967295u)
    {
      meterec->loop.low = loophead;
      return 0;
    }

    if(!(meterec->loop.high >= loophead))
    {
      meterec->loop.low = meterec->loop.high;
      meterec->loop.high = loophead;
    }

  }

  else
    if(!(meterec->loop.low >= loophead))
      meterec->loop.high = loophead;

    else
      if(!(loophead >= meterec->loop.low))
      {
        meterec->loop.high = meterec->loop.low;
        meterec->loop.low = loophead;
      }

  meterec->loop.enable = (unsigned int)1;
  pthread_mutex_lock(&meterec->event_mutex);
  add_event(meterec, (unsigned int)1, (unsigned int)2, meterec->loop.high, meterec->loop.low, (unsigned int)-1);
  pthread_mutex_unlock(&meterec->event_mutex);
  return 1;
}

// set_thread_delay
// file disk.c line 575
unsigned int set_thread_delay(struct meterec_s *meterec)
{
  return (unsigned int)(((1000000ul * (unsigned long int)4096) / (unsigned long int)meterec->jack.sample_rate) / (unsigned long int)10);
}

// start_playback
// file meterec.c line 944
void start_playback(struct meterec_s *meterec)
{
  compute_takes_to_playback(meterec);
  meterec->playback_cmd = (unsigned int)1;
  pthread_create(&rd_dt, (const union pthread_attr_t *)(void *)0, reader_thread, (void *)meterec);
}

// start_record
// file meterec.h line 319
void start_record(struct meterec_s *meterec)
{
  compute_tracks_to_record(meterec);
  if(!(meterec->n_tracks == 0u))
  {
    meterec->record_cmd = (unsigned int)1;
    pthread_create(&wr_dt, (const union pthread_attr_t *)(void *)0, writer_thread, (void *)meterec);
  }

}

// stop
// file meterec.h line 315
void stop(struct meterec_s *meterec)
{
  if(!(meterec->fd_log == ((struct _IO_FILE *)NULL)))
    fprintf(meterec->fd_log, "Stop requested.\n");

  if(!(meterec->jack_transport == 0u))
    jack_transport_stop(meterec->client);

  else
  {
    meterec->playback_cmd = (unsigned int)0;
    meterec->record_cmd = (unsigned int)0;
  }
}

// take_to_playback
// file meterec.c line 249
unsigned int take_to_playback(struct meterec_s *meterec, unsigned int port)
{
  unsigned int take = meterec->n_takes + (unsigned int)1;
  for( ; take >= 1u; take = take - 1u)
    if(!(meterec->takes[(signed long int)take].port_has_lock[(signed long int)port] == 0u))
      break;

  if(take == 0u)
    take = meterec->n_takes + (unsigned int)1;

  for( ; take >= 1u; take = take - 1u)
    if(!(meterec->takes[(signed long int)take].port_has_track[(signed long int)port] == 0u))
      break;

  return take;
}

// time_frm
// file position.h line 31
void time_frm(struct time_s *time)
{
  time->frm = (unsigned int)(time->h * time->rate * (unsigned int)3600 + time->m * time->rate * (unsigned int)60 + time->s * time->rate + (time->ms * time->rate) / (unsigned int)1000);
}

// time_hms
// file position.h line 30
void time_hms(struct time_s *time)
{
  unsigned int rate = time->rate;
  unsigned int frm = time->frm;
  time->h = (unsigned int)(frm / rate) / (unsigned int)3600;
  frm = frm - time->h * rate * (unsigned int)3600;
  time->m = (unsigned int)((time->frm / rate) / (unsigned int)60) % (unsigned int)60;
  frm = frm - time->m * rate * (unsigned int)60;
  time->s = (unsigned int)(time->frm / rate) % (unsigned int)60;
  frm = frm - time->s * rate;
  time->ms = frm * (unsigned int)10000;
  time->ms = time->ms / rate;
  time->ms = time->ms + (unsigned int)5;
  time->ms = time->ms / (unsigned int)10;
  time->ms = time->ms % (unsigned int)1000;
}

// time_sprint
// file position.h line 29
void time_sprint(struct time_s *time, char *string)
{
  sprintf(string, "%u:%02u:%02u.%03u", time->h, time->m, time->s, time->ms);
}

// update_jack_buffsize
// file meterec.c line 691
static signed int update_jack_buffsize(unsigned int nframes, void *arg)
{
  struct meterec_s *update_jack_buffsize$$1$$meterec = (struct meterec_s *)arg;
  update_jack_buffsize$$1$$meterec->jack_buffsize = nframes;
  return 0;
}

// usage
// file meterec.c line 1023
static signed int usage(const char *progname)
{
  fprintf(stderr, "version %s\n\n", (const void *)"0.9.2");
  fprintf(stderr, "%s [-f freqency] [-r ref-level] [-w width] [-s session-name] [-j jack-name] [-o output-format] [-u uuid] [-t][-p][-c][-i]\n\n", progname);
  fprintf(stderr, "where  -f      is how often to update the meter per second [24]\n");
  fprintf(stderr, "       -r      is the reference signal level for 0dB on the meter [0]\n");
  fprintf(stderr, "       -w      is how wide to make the meter [auto]\n");
  fprintf(stderr, "       -s      is session name [%s]\n", meterec->session);
  fprintf(stderr, "       -j      is the jack client name [%s]\n", meterec->jack_name);
  fprintf(stderr, "       -o      is the record output format (w64, wav, flac, ogg) [%s]\n", output_ext);
  fprintf(stderr, "       -u      is the uuid value to be restored [none]\n");
  fprintf(stderr, "       -t      record a new take at start\n");
  fprintf(stderr, "       -p      no playback at start\n");
  fprintf(stderr, "       -c      do not connect to jack ports listed in .mrec file\n");
  fprintf(stderr, "       -i      do not interact with jack transport\n");
  fprintf(stderr, "\n\n");
  fprintf(stderr, "Command keys:\n");
  fprintf(stderr, "       q       quit\n");
  fprintf(stderr, "       <SPACE> start playback; stop playback\n");
  fprintf(stderr, "       <ENTER> start record; stop all\n");
  fprintf(stderr, "       <BKSPS> create new take while record is ongoing; toggle record state when stopped\n");
  fprintf(stderr, "       v       reset maximum level vu-meter markers\n");
  fprintf(stderr, "       n       toggle port names display\n");
  fprintf(stderr, "       i       insert name\n");
  fprintf(stderr, "       t       toggle pass thru for this port\n");
  fprintf(stderr, "       T       toggle pass thru for all ports\n");
  fprintf(stderr, "       m       mute that port playback\n");
  fprintf(stderr, "       M       mute all ports playback\n");
  fprintf(stderr, "       s       mute all but that port playback (solo)\n");
  fprintf(stderr, "       S       unmute all ports playback\n");
  fprintf(stderr, "       r       toggle REC record mode for that port - record without listening playback\n");
  fprintf(stderr, "       R       toggle REC record mode for all ports\n");
  fprintf(stderr, "       d       toggle DUB record mode for that port - record listening playback\n");
  fprintf(stderr, "       D       toggle DUB record mode for all ports\n");
  fprintf(stderr, "       o       toggle OVR record mode for that port - record listening and mixing playback\n");
  fprintf(stderr, "       O       toggle OVR record mode for all ports\n");
  fprintf(stderr, "<SHIFT>F1-F12  set time index\n");
  fprintf(stderr, "       F1-F12  jump to time index\n");
  fprintf(stderr, " <CTRL>F1-F12  use time index as loop boundary\n");
  fprintf(stderr, "       +       use current time as loop boundary\n");
  fprintf(stderr, "       -       clear loop boundaries\n");
  fprintf(stderr, "       /       clear loop lower bound\n");
  fprintf(stderr, "       *       clear loop upper bound\n");
  fprintf(stderr, "       <HOME>  be kind, rewind\n");
  fprintf(stderr, "       <TAB>   vu-meter view (special keys) ------------------------------------\n");
  fprintf(stderr, "       =>      seek forward 5 seconds\n");
  fprintf(stderr, "       <=      seek backward 5 seconds\n");
  fprintf(stderr, "       <TAB>   edit view (special keys) ----------------------------------------\n");
  fprintf(stderr, "       =>      select next take\n");
  fprintf(stderr, "       <=      select previous take\n");
  fprintf(stderr, "       l       lock/unlock selected track for playback\n");
  fprintf(stderr, "       L       lock/unlock selected track for playback and clear all other locks for this port\n");
  fprintf(stderr, "       a       lock/unlock selected take for playback\n");
  fprintf(stderr, "       A       lock/unlock selected take for playback and clear all other locks in the session\n");
  fprintf(stderr, "       <TAB>   connections view (special keys) ---------------------------------\n");
  fprintf(stderr, "       <= =>   select port column\n");
  fprintf(stderr, "       c       connect ports\n");
  fprintf(stderr, "       x       disconnect ports\n");
  exit(1);
}

// write_disk_buffer_level
// file disk.h line 26
float write_disk_buffer_level(struct meterec_s *meterec)
{
  float level = (float)(meterec->write_disk_buffer_process_pos - meterec->write_disk_buffer_thread_pos & (unsigned int)(0x20000 - 1));
  return (float)(level / (float)0x20000);
}

// write_disk_close_fd
// file disk.c line 43
void write_disk_close_fd(struct meterec_s *meterec, struct SNDFILE_tag *out)
{
  sf_write_sync(out);
  sf_close(out);
  meterec->n_takes = meterec->n_takes + 1u;
}

// write_disk_open_fd
// file disk.c line 52
struct SNDFILE_tag * write_disk_open_fd(struct meterec_s *meterec)
{
  struct SF_INFO info;
  struct SNDFILE_tag *out;
  char *take_file;
  info.format = (signed int)meterec->output_fmt;
  info.channels = (signed int)meterec->n_tracks;
  info.samplerate = (signed int)meterec->jack.sample_rate;
  take_file = meterec->takes[(signed long int)(meterec->n_takes + (unsigned int)1)].take_file;
  signed int return_value_sf_format_check$1;
  return_value_sf_format_check$1=sf_format_check(&info);
  if(return_value_sf_format_check$1 == 0)
  {
    fprintf(meterec->fd_log, "Writer thread: Cannot open take file '%s' for writing (%d, %d, %d)\n", take_file, info.format, info.channels, info.samplerate);
    meterec->record_sts = (unsigned int)0;
    exit_on_error("Writer thread: Output file format error\n");
    return (struct SNDFILE_tag *)(void *)0;
  }

  else
  {
    out=sf_open(take_file, 32, &info);
    if(out == ((struct SNDFILE_tag *)NULL))
    {
      fprintf(meterec->fd_log, "Writer thread: Cannot open '%s' file for writing", take_file);
      meterec->record_sts = (unsigned int)0;
      return (struct SNDFILE_tag *)(void *)0;
    }

    else
    {
      fprintf(meterec->fd_log, "Writer thread: Opened %d track(s) file '%s' for writing.\n", meterec->n_tracks, take_file);
      return out;
    }
  }
}

// writer_thread
// file disk.c line 84
void * writer_thread(void *d)
{
  unsigned int i;
  unsigned int port;
  unsigned int zbuff_pos;
  unsigned int track;
  unsigned int thread_delay;
  struct SNDFILE_tag *out;
  float buf[98304l];
  struct meterec_s *writer_thread$$1$$meterec = (struct meterec_s *)d;
  writer_thread$$1$$meterec->record_sts = (unsigned int)1;
  fprintf(writer_thread$$1$$meterec->fd_log, "Writer thread: Started.\n");
  thread_delay=set_thread_delay(writer_thread$$1$$meterec);
  out=write_disk_open_fd(writer_thread$$1$$meterec);
  if(out == ((struct SNDFILE_tag *)NULL))
    return (void *)1;

  else
  {
    writer_thread$$1$$meterec->record_sts = (unsigned int)3;
    zbuff_pos = (unsigned int)0;
    while(!(writer_thread$$1$$meterec->record_sts == 0u))
    {
      i = writer_thread$$1$$meterec->write_disk_buffer_thread_pos;
      for( ; !(i == writer_thread$$1$$meterec->write_disk_buffer_process_pos) && !(zbuff_pos >= 4096u); zbuff_pos = zbuff_pos + 1u)
      {
        track = (unsigned int)0;
        port = (unsigned int)0;
        for( ; !(port >= writer_thread$$1$$meterec->n_ports); port = port + 1u)
          if(!(writer_thread$$1$$meterec->ports[(signed long int)port].record == 0))
          {
            buf[(signed long int)(zbuff_pos * writer_thread$$1$$meterec->n_tracks + track)] = writer_thread$$1$$meterec->ports[(signed long int)port].write_disk_buffer[(signed long int)i];
            track = track + 1u;
          }

        i = i + (unsigned int)1 & (unsigned int)(0x20000 - 1);
      }
      if(zbuff_pos == 4096u)
      {
        sf_writef_float(out, buf, (signed long int)zbuff_pos);
        zbuff_pos = (unsigned int)0;
      }

      writer_thread$$1$$meterec->write_disk_buffer_thread_pos = i;
      if(writer_thread$$1$$meterec->record_cmd == 2u)
      {
        write_disk_close_fd(writer_thread$$1$$meterec, out);
        if(!(writer_thread$$1$$meterec->config_sts == 0u))
          save_conf(writer_thread$$1$$meterec);

        compute_tracks_to_record(writer_thread$$1$$meterec);
        out=write_disk_open_fd(writer_thread$$1$$meterec);
        writer_thread$$1$$meterec->record_cmd = (unsigned int)1;
      }

      if(writer_thread$$1$$meterec->record_sts == 5u)
      {
        if(writer_thread$$1$$meterec->write_disk_buffer_thread_pos == writer_thread$$1$$meterec->write_disk_buffer_process_pos)
        {
          sf_writef_float(out, buf, (signed long int)zbuff_pos);
          break;
        }

      }

      if(writer_thread$$1$$meterec->record_cmd == 0u)
        writer_thread$$1$$meterec->record_sts = (unsigned int)5;

      usleep(thread_delay);
    }
    write_disk_close_fd(writer_thread$$1$$meterec, out);
    if(!(writer_thread$$1$$meterec->config_sts == 0u))
      save_conf(writer_thread$$1$$meterec);

    fprintf(writer_thread$$1$$meterec->fd_log, "Writer thread: done.\n");
    writer_thread$$1$$meterec->record_sts = (unsigned int)0;
    return (void *)0;
  }
}

