// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$2;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$1;

// tag-_GHashTable
// file /usr/include/glib-2.0/glib/ghash.h line 37
struct _GHashTable;

// tag-_GPtrArray
// file /usr/include/glib-2.0/glib/garray.h line 39
struct _GPtrArray;

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

// tag-_glibtop
// file /usr/include/libgtop-2.0/glibtop.h line 34
struct _glibtop;

// tag-_glibtop_cpu
// file /usr/include/libgtop-2.0/glibtop/cpu.h line 59
struct _glibtop_cpu;

// tag-_glibtop_entry
// file /usr/include/libgtop-2.0/glibtop/sysinfo.h line 40
struct _glibtop_entry;

// tag-_glibtop_loadavg
// file /usr/include/libgtop-2.0/glibtop/loadavg.h line 37
struct _glibtop_loadavg;

// tag-_glibtop_machine
// file /usr/include/libgtop-2.0/glibtop.h line 35
struct _glibtop_machine;

// tag-_glibtop_mem
// file /usr/include/libgtop-2.0/glibtop/mem.h line 41
struct _glibtop_mem;

// tag-_glibtop_netload
// file /usr/include/libgtop-2.0/glibtop/netload.h line 51
struct _glibtop_netload;

// tag-_glibtop_swap
// file /usr/include/libgtop-2.0/glibtop/swap.h line 38
struct _glibtop_swap;

// tag-_glibtop_sysdeps
// file /usr/include/libgtop-2.0/glibtop/sysdeps.h line 64
struct _glibtop_sysdeps;

// tag-_glibtop_sysinfo
// file /usr/include/libgtop-2.0/glibtop/sysinfo.h line 38
struct _glibtop_sysinfo;

// tag-_glibtop_uptime
// file /usr/include/libgtop-2.0/glibtop/uptime.h line 36
struct _glibtop_uptime;

// tag-g15_stats_bat_info
// file g15stats.h line 43
struct g15_stats_bat_info;

// tag-g15_stats_info
// file g15stats.h line 50
struct g15_stats_info;

// tag-g15canvas
// file /usr/include/libg15render.h line 46
struct g15canvas;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// _exit
// file /usr/include/unistd.h line 603
extern void _exit(signed int);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// calc_info_cycle
// file g15stats.c line 1321
void calc_info_cycle(void);
// ceil
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern double ceil(double);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// ctime
// file /usr/include/time.h line 264
extern char * ctime(const signed long int *);
// daemonise
// file g15stats.c line 276
signed int daemonise(signed int nochdir, signed int noclose);
// drawAll_both
// file g15stats.c line 271
void drawAll_both(struct g15canvas *canvas, signed int y1, signed int y2, signed int bar_current, signed int bar_total, signed int rbar_current, signed int rbar_total);
// drawBar_both
// file g15stats.c line 261
void drawBar_both(struct g15canvas *canvas, signed int y1, signed int y2, signed int bar_current, signed int bar_total, signed int rbar_current, signed int rbar_total);
// drawBar_reversed
// file g15stats.c line 214
void drawBar_reversed(struct g15canvas *canvas, signed int x1, signed int y1, signed int x2, signed int y2, signed int color, signed int num, signed int max, signed int type);
// drawLine_both
// file g15stats.c line 266
void drawLine_both(struct g15canvas *canvas, signed int y1, signed int y2);
// draw_bat_screen
// file g15stats.c line 1105
void draw_bat_screen(struct g15canvas *canvas, char *tmpstr, signed int all);
// draw_cpu_screen_multicore
// file g15stats.c line 811
void draw_cpu_screen_multicore(struct g15canvas *canvas, char *tmpstr, signed int unicore);
// draw_cpu_screen_unicore
// file g15stats.c line 804
void draw_cpu_screen_unicore(struct g15canvas *canvas, char *tmpstr, signed int drawgraph, signed int printlabels);
// draw_cpu_screen_unicore_logic
// file g15stats.c line 747
void draw_cpu_screen_unicore_logic(struct g15canvas *canvas, struct _glibtop_cpu cpu, char *tmpstr, signed int drawgraph, signed int printlabels, signed int cpuandmemory);
// draw_g15_stats_info_screen
// file g15stats.c line 1302
void draw_g15_stats_info_screen(struct g15canvas *canvas, char *tmpstr, signed int all, signed int screen_type);
// draw_g15_stats_info_screen_logic
// file g15stats.c line 1257
void draw_g15_stats_info_screen_logic(struct g15canvas *canvas, char *tmpstr, signed int all, signed int screen_type, struct g15_stats_info *probes, signed int count, float tot_max, signed int *sensor_lost, signed int sensor_id, char *vert_label, char *format_main, char *format_bottom);
// draw_mem_screen
// file g15stats.c line 572
void draw_mem_screen(struct g15canvas *canvas, char *tmpstr);
// draw_net_screen
// file g15stats.c line 1041
void draw_net_screen(struct g15canvas *canvas, char *tmpstr, char *interface);
// draw_summary_screen
// file g15stats.c line 651
void draw_summary_screen(struct g15canvas *canvas, char *tmpstr, signed int y1, signed int y2, signed int move, signed int shift, signed int text_shift, signed int id);
// draw_summary_sensors_logic
// file g15stats.c line 625
void draw_summary_sensors_logic(struct g15canvas *canvas, char *tmpstr, struct g15_stats_info *sensors, char *label, signed int text_shift, signed int y1, signed int y2, signed int move, signed int cur_shift, signed int shift, signed int count, float tot_cur, float tot_max);
// draw_swap_screen
// file g15stats.c line 602
void draw_swap_screen(struct g15canvas *canvas, char *tmpstr);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// format_float
// file g15stats.c line 118
void format_float(char *tmpstr, char *format_less, char *format_great, float value);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freopen
// file /usr/include/stdio.h line 278
extern struct _IO_FILE * freopen(const char *, const char *, struct _IO_FILE *);
// g15_send
// file /usr/include/g15daemon_client.h line 67
signed int g15_send(signed int, char *, unsigned int);
// g15r_clearScreen
// file /usr/include/libg15render.h line 134
void g15r_clearScreen(struct g15canvas *, signed int);
// g15r_drawBar
// file /usr/include/libg15render.h line 112
void g15r_drawBar(struct g15canvas *, signed int, signed int, signed int, signed int, signed int, signed int, signed int, signed int);
// g15r_drawLine
// file /usr/include/libg15render.h line 100
void g15r_drawLine(struct g15canvas *, signed int, signed int, signed int, signed int, const signed int);
// g15r_initCanvas
// file /usr/include/libg15render.h line 136
void g15r_initCanvas(struct g15canvas *);
// g15r_pixelBox
// file /usr/include/libg15render.h line 103
void g15r_pixelBox(struct g15canvas *, signed int, signed int, signed int, signed int, signed int, signed int, signed int);
// g15r_renderString
// file /usr/include/libg15render.h line 151
void g15r_renderString(struct g15canvas *, unsigned char *, signed int, signed int, unsigned int, unsigned int);
// g15r_setPixel
// file /usr/include/libg15render.h line 131
void g15r_setPixel(struct g15canvas *, unsigned int, unsigned int, signed int);
// g15stats_wait
// file g15stats.c line 1616
void g15stats_wait(signed int seconds);
// get_cpu_freq_cur
// file g15stats.c line 344
signed int get_cpu_freq_cur(signed int core);
// get_cpu_freq_max
// file g15stats.c line 364
signed int get_cpu_freq_max(signed int core);
// get_cpu_freq_min
// file g15stats.c line 368
signed int get_cpu_freq_min(signed int core);
// get_hwmon
// file g15stats.c line 372
signed int get_hwmon(signed int sensor_id, char *sensor, char *which, signed int id, _Bool sensor_type);
// get_next
// file g15stats.c line 398
signed int get_next(signed int sensor_id, signed int *sensor_lost);
// get_processor_freq
// file g15stats.c line 338
signed int get_processor_freq(char *which, signed int core);
// get_sensor_cur
// file g15stats.c line 382
signed int get_sensor_cur(signed int id, signed int screen_id);
// get_sensor_max
// file g15stats.c line 390
signed int get_sensor_max(signed int id, signed int screen_id);
// get_sensors
// file g15stats.c line 413
signed int get_sensors(struct g15_stats_info *sensors, signed int screen_id, _Bool *sensor_type, signed int *sensor_lost, signed int sensor_id);
// get_sysfs_value
// file g15stats.c line 320
signed int get_sysfs_value(char *filename);
// glibtop_close
// file /usr/include/libgtop-2.0/glibtop/close.h line 29
void glibtop_close(void);
// glibtop_get_cpu
// file /usr/include/libgtop-2.0/glibtop/cpu.h line 84
void glibtop_get_cpu(struct _glibtop_cpu *);
// glibtop_get_loadavg
// file /usr/include/libgtop-2.0/glibtop/loadavg.h line 48
void glibtop_get_loadavg(struct _glibtop_loadavg *);
// glibtop_get_mem
// file /usr/include/libgtop-2.0/glibtop/mem.h line 56
void glibtop_get_mem(struct _glibtop_mem *);
// glibtop_get_netload
// file /usr/include/libgtop-2.0/glibtop/netload.h line 109
void glibtop_get_netload(struct _glibtop_netload *, const char *);
// glibtop_get_swap
// file /usr/include/libgtop-2.0/glibtop/swap.h line 51
void glibtop_get_swap(struct _glibtop_swap *);
// glibtop_get_sysinfo
// file /usr/include/libgtop-2.0/glibtop/sysinfo.h line 59
const struct _glibtop_sysinfo * glibtop_get_sysinfo(void);
// glibtop_get_uptime
// file /usr/include/libgtop-2.0/glibtop/uptime.h line 46
void glibtop_get_uptime(struct _glibtop_uptime *);
// glibtop_init
// file /usr/include/libgtop-2.0/glibtop.h line 113
struct _glibtop * glibtop_init(void);
// init_cpu_count
// file g15stats.c line 307
void init_cpu_count(void);
// keyboard_watch
// file g15stats.c line 1424
void keyboard_watch(void);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// maxi
// file g15stats.c line 112
unsigned long int maxi(unsigned long int a, unsigned long int b);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// network_watch
// file g15stats.c line 1563
void network_watch(void *iface);
// new_g15_screen
// file /usr/include/g15daemon_client.h line 60
signed int new_g15_screen(signed int);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// print_freq_info
// file g15stats.c line 542
void print_freq_info(struct g15canvas *canvas, char *tmpstr);
// print_info_label
// file g15stats.c line 1383
void print_info_label(struct g15canvas *canvas, char *tmpstr);
// print_label
// file g15stats.c line 621
void print_label(struct g15canvas *canvas, char *tmpstr, signed int cur_shift);
// print_mem_info
// file g15stats.c line 510
void print_mem_info(struct g15canvas *canvas, char *tmpstr);
// print_net_current_info
// file g15stats.c line 534
void print_net_current_info(struct g15canvas *canvas, char *tmpstr);
// print_net_peak_info
// file g15stats.c line 526
void print_net_peak_info(struct g15canvas *canvas, char *tmpstr);
// print_swap_info
// file g15stats.c line 518
void print_swap_info(struct g15canvas *canvas, char *tmpstr);
// print_sys_load_info
// file g15stats.c line 490
void print_sys_load_info(struct g15canvas *canvas, char *tmpstr);
// print_time_info
// file g15stats.c line 564
void print_time_info(struct g15canvas *canvas, char *tmpstr);
// print_vert_label
// file g15stats.c line 210
void print_vert_label(struct g15canvas *canvas, char *label);
// print_vert_label_logic
// file g15stats.c line 178
void print_vert_label_logic(struct g15canvas *canvas, char *label, unsigned int sx);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous$0 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous$0 *, union anonymous$1 *, struct timespec *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$1 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$1 *, const union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$1 *);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// show_bytes
// file g15stats.c line 141
char * show_bytes(unsigned long int bytes);
// show_bytes_short
// file g15stats.c line 126
char * show_bytes_short(unsigned long int bytes);
// show_hertz
// file g15stats.c line 174
char * show_hertz(signed int hertz);
// show_hertz_logic
// file g15stats.c line 155
char * show_hertz_logic(signed int hertz, char *hz);
// show_hertz_short
// file g15stats.c line 170
char * show_hertz_short(signed int hertz);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strcasestr
// file /usr/include/string.h line 372
extern char * strcasestr(const char *, const char *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);

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

union anonymous
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$0
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

struct _GPtrArray
{
  // pdata
  void **pdata;
  // len
  unsigned int len;
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

struct _glibtop_sysdeps
{
  // flags
  unsigned long int flags;
  // features
  unsigned long int features;
  // cpu
  unsigned long int cpu;
  // mem
  unsigned long int mem;
  // swap
  unsigned long int swap;
  // uptime
  unsigned long int uptime;
  // loadavg
  unsigned long int loadavg;
  // shm_limits
  unsigned long int shm_limits;
  // msg_limits
  unsigned long int msg_limits;
  // sem_limits
  unsigned long int sem_limits;
  // proclist
  unsigned long int proclist;
  // proc_state
  unsigned long int proc_state;
  // proc_uid
  unsigned long int proc_uid;
  // proc_mem
  unsigned long int proc_mem;
  // proc_time
  unsigned long int proc_time;
  // proc_signal
  unsigned long int proc_signal;
  // proc_kernel
  unsigned long int proc_kernel;
  // proc_segment
  unsigned long int proc_segment;
  // proc_args
  unsigned long int proc_args;
  // proc_map
  unsigned long int proc_map;
  // proc_open_files
  unsigned long int proc_open_files;
  // mountlist
  unsigned long int mountlist;
  // fsusage
  unsigned long int fsusage;
  // netlist
  unsigned long int netlist;
  // netload
  unsigned long int netload;
  // ppp
  unsigned long int ppp;
  // proc_wd
  unsigned long int proc_wd;
  // proc_affinity
  unsigned long int proc_affinity;
};

struct _glibtop
{
  // flags
  unsigned int flags;
  // method
  unsigned int method;
  // error_method
  unsigned int error_method;
  // input
  signed int input[2l];
  // output
  signed int output[2l];
  // socket
  signed int socket;
  // ncpu
  signed int ncpu;
  // real_ncpu
  signed int real_ncpu;
  // os_version_code
  unsigned long int os_version_code;
  // name
  const char *name;
  // server_command
  const char *server_command;
  // server_host
  const char *server_host;
  // server_user
  const char *server_user;
  // server_rsh
  const char *server_rsh;
  // features
  unsigned long int features;
  // server_port
  unsigned long int server_port;
  // sysdeps
  struct _glibtop_sysdeps sysdeps;
  // required
  struct _glibtop_sysdeps required;
  // pid
  signed int pid;
  // uid
  unsigned int uid;
  // euid
  unsigned int euid;
  // gid
  unsigned int gid;
  // egid
  unsigned int egid;
  // machine
  struct _glibtop_machine *machine;
};

struct _glibtop_cpu
{
  // flags
  unsigned long int flags;
  // total
  unsigned long int total;
  // user
  unsigned long int user;
  // nice
  unsigned long int nice;
  // sys
  unsigned long int sys;
  // idle
  unsigned long int idle;
  // iowait
  unsigned long int iowait;
  // irq
  unsigned long int irq;
  // softirq
  unsigned long int softirq;
  // frequency
  unsigned long int frequency;
  // xcpu_total
  unsigned long int xcpu_total[1024l];
  // xcpu_user
  unsigned long int xcpu_user[1024l];
  // xcpu_nice
  unsigned long int xcpu_nice[1024l];
  // xcpu_sys
  unsigned long int xcpu_sys[1024l];
  // xcpu_idle
  unsigned long int xcpu_idle[1024l];
  // xcpu_iowait
  unsigned long int xcpu_iowait[1024l];
  // xcpu_irq
  unsigned long int xcpu_irq[1024l];
  // xcpu_softirq
  unsigned long int xcpu_softirq[1024l];
  // xcpu_flags
  unsigned long int xcpu_flags;
};

struct _glibtop_entry
{
  // labels
  struct _GPtrArray *labels;
  // values
  struct _GHashTable *values;
  // descriptions
  struct _GHashTable *descriptions;
};

struct _glibtop_loadavg
{
  // flags
  unsigned long int flags;
  // loadavg
  double loadavg[3l];
  // nr_running
  unsigned long int nr_running;
  // nr_tasks
  unsigned long int nr_tasks;
  // last_pid
  unsigned long int last_pid;
};

struct _glibtop_mem
{
  // flags
  unsigned long int flags;
  // total
  unsigned long int total;
  // used
  unsigned long int used;
  // free
  unsigned long int free;
  // shared
  unsigned long int shared;
  // buffer
  unsigned long int buffer;
  // cached
  unsigned long int cached;
  // user
  unsigned long int user;
  // locked
  unsigned long int locked;
};

struct _glibtop_netload
{
  // flags
  unsigned long int flags;
  // if_flags
  unsigned long int if_flags;
  // mtu
  unsigned int mtu;
  // subnet
  unsigned int subnet;
  // address
  unsigned int address;
  // packets_in
  unsigned long int packets_in;
  // packets_out
  unsigned long int packets_out;
  // packets_total
  unsigned long int packets_total;
  // bytes_in
  unsigned long int bytes_in;
  // bytes_out
  unsigned long int bytes_out;
  // bytes_total
  unsigned long int bytes_total;
  // errors_in
  unsigned long int errors_in;
  // errors_out
  unsigned long int errors_out;
  // errors_total
  unsigned long int errors_total;
  // collisions
  unsigned long int collisions;
  // address6
  unsigned char address6[16l];
  // prefix6
  unsigned char prefix6[16l];
  // scope6
  unsigned char scope6;
  // hwaddress
  unsigned char hwaddress[8l];
};

struct _glibtop_swap
{
  // flags
  unsigned long int flags;
  // total
  unsigned long int total;
  // used
  unsigned long int used;
  // free
  unsigned long int free;
  // pagein
  unsigned long int pagein;
  // pageout
  unsigned long int pageout;
};

struct _glibtop_sysinfo
{
  // flags
  unsigned long int flags;
  // ncpu
  unsigned long int ncpu;
  // cpuinfo
  struct _glibtop_entry cpuinfo[1024l];
};

struct _glibtop_uptime
{
  // flags
  unsigned long int flags;
  // uptime
  double uptime;
  // idletime
  double idletime;
  // boot_time
  unsigned long int boot_time;
};

struct g15_stats_bat_info
{
  // max_charge
  signed long int max_charge;
  // cur_charge
  signed long int cur_charge;
  // status
  signed long int status;
};

struct g15_stats_info
{
  // cur
  float cur;
  // max
  float max;
};

struct g15canvas
{
  // buffer
  unsigned char buffer[1048l];
  // mode_xor
  signed int mode_xor;
  // mode_cache
  signed int mode_cache;
  // mode_reverse
  signed int mode_reverse;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};


// cycle
// file g15stats.c line 60
signed int cycle = 0;
// fan_tot_cur
// file g15stats.c line 105
float fan_tot_cur = (float)1;
// fan_tot_max
// file g15stats.c line 106
float fan_tot_max = (float)1;
// g15screen_fd
// file g15stats.c line 58
signed int g15screen_fd;
// have_bat
// file g15stats.c line 75
_Bool have_bat = (_Bool)1;
// have_fan
// file g15stats.c line 74
_Bool have_fan = (_Bool)1;
// have_freq
// file g15stats.c line 72
signed int have_freq = 2;
// have_nic
// file g15stats.c line 76
_Bool have_nic = (_Bool)0;
// have_temp
// file g15stats.c line 73
_Bool have_temp = (_Bool)1;
// info_cycle
// file g15stats.c line 61
signed int info_cycle = 0;
// info_cycle_timer
// file g15stats.c line 67
signed int info_cycle_timer = -1;
// mode
// file g15stats.c line 63
signed int mode[8l];
// ncpu
// file g15stats.c line 91
signed int ncpu;
// net_cur_in
// file g15stats.c line 99
unsigned long int net_cur_in = (unsigned long int)0;
// net_cur_out
// file g15stats.c line 100
unsigned long int net_cur_out = (unsigned long int)0;
// net_hist
// file g15stats.c line 93
unsigned int net_hist[107l][2l];
// net_max_in
// file g15stats.c line 96
unsigned long int net_max_in = (unsigned long int)100;
// net_max_out
// file g15stats.c line 97
unsigned long int net_max_out = (unsigned long int)100;
// net_rr_index
// file g15stats.c line 94
signed int net_rr_index = 0;
// net_scale_absolute
// file g15stats.c line 108
_Bool net_scale_absolute = (_Bool)0;
// sensor_fan_id
// file g15stats.c line 88
signed int sensor_fan_id = 0;
// sensor_lost_bat
// file g15stats.c line 83
signed int sensor_lost_bat = 1;
// sensor_lost_fan
// file g15stats.c line 82
signed int sensor_lost_fan[4l];
// sensor_lost_temp
// file g15stats.c line 81
signed int sensor_lost_temp[4l];
// sensor_temp_id
// file g15stats.c line 85
signed int sensor_temp_id = 0;
// sensor_temp_main
// file g15stats.c line 86
signed int sensor_temp_main = 0;
// sensor_type_fan
// file g15stats.c line 79
_Bool sensor_type_fan[4l];
// sensor_type_temp
// file g15stats.c line 78
_Bool sensor_type_temp[4l];
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// submode
// file g15stats.c line 65
signed int submode = 0;
// summary_rows
// file g15stats.c line 70
signed int summary_rows = 4;
// temp_tot_cur
// file g15stats.c line 102
float temp_tot_cur = (float)1;
// temp_tot_max
// file g15stats.c line 103
float temp_tot_max = (float)1;
// wake_now
// file g15stats.c line 110
union anonymous$0 wake_now = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1;
}

// calc_info_cycle
// file g15stats.c line 1321
void calc_info_cycle(void)
{
  info_cycle = cycle;
  info_cycle_timer = info_cycle_timer + 1;
  if(submode == 0)
    switch((signed int)(info_cycle_timer / 6))
    {
      case 0:
      {
        info_cycle = 0;
        break;
      }
      case 1:
      {
        info_cycle = 1;
        break;
      }
      case 2:
      {
        if(!(have_freq == 0))
        {
          info_cycle = 2;
          break;
        }

        info_cycle_timer = info_cycle_timer + 6;
      }
      case 3:
      {
        info_cycle = 3;
        break;
      }
      case 4:
      {
        info_cycle = 4;
        break;
      }
      case 5:
      {
        if(!(have_nic == (_Bool)0))
        {
          info_cycle = 5;
          break;
        }

        info_cycle_timer = info_cycle_timer + 6;
      }
      case 6:
      {
        if(!(have_bat == (_Bool)0))
        {
          info_cycle = 6;
          break;
        }

        info_cycle_timer = info_cycle_timer + 6;
      }
      case 7:
      {
        if(!(have_temp == (_Bool)0))
        {
          info_cycle = 7;
          break;
        }

        info_cycle_timer = info_cycle_timer + 6;
      }
      case 8:
      {
        if(!(have_fan == (_Bool)0))
        {
          info_cycle = 8;
          break;
        }

        info_cycle_timer = info_cycle_timer + 6;
      }
      case 9:
      {
        if(!(have_nic == (_Bool)0))
        {
          info_cycle = 9;
          break;
        }

        info_cycle_timer = info_cycle_timer + 6;
      }
      default:
      {
        info_cycle_timer = 0;
        info_cycle = 0;
      }
    }

}

// daemonise
// file g15stats.c line 276
signed int daemonise(signed int nochdir, signed int noclose)
{
  signed int pid;
  if(!(nochdir >= 1))
    chdir("/");

  pid=fork();
  if(!(pid == -1))
  {
    if(pid == 0)
      goto __CPROVER_DUMP_L3;

  }

  else
  {
    printf("Unable to daemonise!\n");
    return -1;

  __CPROVER_DUMP_L3:
    ;
    umask((unsigned int)0);
    signed int return_value_setsid$1;
    return_value_setsid$1=setsid();
    if(return_value_setsid$1 == -1)
    {
      perror("setsid");
      return -1;
    }

    if(!(noclose >= 1))
    {
      freopen("/dev/null", "r", stdin);
      freopen("/dev/null", "w", stdout);
      freopen("/dev/null", "w", stderr);
    }

    goto __CPROVER_DUMP_L7;
  }
  _exit(0);

__CPROVER_DUMP_L7:
  ;
  return 0;
}

// drawAll_both
// file g15stats.c line 271
void drawAll_both(struct g15canvas *canvas, signed int y1, signed int y2, signed int bar_current, signed int bar_total, signed int rbar_current, signed int rbar_total)
{
  drawBar_both(canvas, y1, y2, bar_current, bar_total, rbar_current, rbar_total);
  drawLine_both(canvas, y1, y2);
}

// drawBar_both
// file g15stats.c line 261
void drawBar_both(struct g15canvas *canvas, signed int y1, signed int y2, signed int bar_current, signed int bar_total, signed int rbar_current, signed int rbar_total)
{
  g15r_drawBar(canvas, 45, y1, 153, y2, 1, bar_current, bar_total, 4);
  drawBar_reversed(canvas, 45, y1, 153, y2, 1, rbar_current, rbar_total, 5);
}

// drawBar_reversed
// file g15stats.c line 214
void drawBar_reversed(struct g15canvas *canvas, signed int x1, signed int y1, signed int x2, signed int y2, signed int color, signed int num, signed int max, signed int type)
{
  float len;
  float length;
  if(max >= 1 && num >= 1)
  {
    if(!(max >= num))
      num = max;

    if(type == 2)
    {
      y1 = y1 + 2;
      y2 = y2 - 2;
      x1 = x1 + 2;
      x2 = x2 - 2;
    }

    len = (float)max / (float)num;
    length = (float)(x2 - x1) / len;
    if(type == 1)
    {
      g15r_pixelBox(canvas, x1, y1 - type, x2, y2 + type, color ^ 1, 1, 1);
      g15r_pixelBox(canvas, x1, y1 - type, x2, y2 + type, color, 1, 0);
    }

    else
      if(type == 2)
      {
        g15r_pixelBox(canvas, x1 - 2, y1 - type, x2 + 2, y2 + type, color ^ 1, 1, 1);
        g15r_pixelBox(canvas, x1 - 2, y1 - type, x2 + 2, y2 + type, color, 1, 0);
      }

      else
        if(type == 3)
        {
          g15r_drawLine(canvas, x1, y1 - type, x1, y2 + type, color);
          g15r_drawLine(canvas, x2, y1 - type, x2, y2 + type, color);
          g15r_drawLine(canvas, x1, y1 + (y2 - y1) / 2, x2, y1 + (y2 - y1) / 2, color);
        }

    double return_value_ceil$1;
    return_value_ceil$1=ceil((double)((float)x2 - length));
    g15r_pixelBox(canvas, (signed int)return_value_ceil$1, y1, x2, y2, color, 1, 1);
    if(type == 5)
    {
      signed int x = x2 - 2;
      for( ; (float)x > (float)x2 + -length; x = x - 2)
        g15r_drawLine(canvas, x, y1, x, y2, color ^ 1);
    }

  }

}

// drawLine_both
// file g15stats.c line 266
void drawLine_both(struct g15canvas *canvas, signed int y1, signed int y2)
{
  g15r_drawLine(canvas, 42, y1, 42, y2, 1);
  g15r_drawLine(canvas, 42 + 1, y1, 42 + 1, y2, 1);
}

// draw_bat_screen
// file g15stats.c line 1105
void draw_bat_screen(struct g15canvas *canvas, char *tmpstr, signed int all)
{
  struct g15_stats_bat_info bats[3l];
  signed long int tot_max_charge = (signed long int)0;
  signed long int tot_cur_charge = (signed long int)0;
  struct _IO_FILE *fd_state;
  struct _IO_FILE *fd_info;
  char line[128l];
  char value[128l];
  signed int i = 0;
  i = 0;
  char *return_value_fgets$1;
  char *return_value_fgets$8;
  for( ; !(i >= 3); i = i + 1)
  {
    char filename[30l];
    bats[(signed long int)i].max_charge = (signed long int)0;
    bats[(signed long int)i].cur_charge = (signed long int)0;
    bats[(signed long int)i].status = (signed long int)-1;
    sprintf(filename, "/proc/acpi/battery/BAT%d/state", i);
    fd_state=fopen(filename, "r");
    if(!(fd_state == ((struct _IO_FILE *)NULL)))
    {
      do
      {
        return_value_fgets$1=fgets(line, 128, fd_state);
        if(return_value_fgets$1 == ((char *)NULL))
          break;

        char *return_value_strcasestr$3;
        return_value_strcasestr$3=strcasestr(line, "remaining capacity");
        if(!(return_value_strcasestr$3 == ((char *)NULL)))
        {
          __builtin_strncpy((char *)value, (char *)line + (signed long int)25, (unsigned long int)5);
          signed int return_value_atoi$2;
          return_value_atoi$2=atoi(value);
          bats[(signed long int)i].cur_charge = (signed long int)return_value_atoi$2;
        }

        char *return_value_strcasestr$7;
        return_value_strcasestr$7=strcasestr(line, "charging state");
        if(!(return_value_strcasestr$7 == ((char *)NULL)))
        {
          char *return_value_strcasestr$4;
          return_value_strcasestr$4=strcasestr(line, "charged");
          if(!(return_value_strcasestr$4 == ((char *)NULL)))
            bats[(signed long int)i].status = (signed long int)0;

          char *return_value_strcasestr$5;
          return_value_strcasestr$5=strcasestr(line, " charging");
          if(!(return_value_strcasestr$5 == ((char *)NULL)))
            bats[(signed long int)i].status = (signed long int)1;

          char *return_value_strcasestr$6;
          return_value_strcasestr$6=strcasestr(line, "discharging");
          if(!(return_value_strcasestr$6 == ((char *)NULL)))
            bats[(signed long int)i].status = (signed long int)2;

        }

      }
      while((_Bool)1);
      fclose(fd_state);
      sprintf(filename, "/proc/acpi/battery/BAT%d/info", i);
      fd_info=fopen(filename, "r");
      if(!(fd_info == ((struct _IO_FILE *)NULL)))
      {
        do
        {
          return_value_fgets$8=fgets(line, 128, fd_info);
          if(return_value_fgets$8 == ((char *)NULL))
            break;

          char *return_value_strcasestr$10;
          return_value_strcasestr$10=strcasestr(line, "last full capacity");
          if(!(return_value_strcasestr$10 == ((char *)NULL)))
          {
            __builtin_strncpy((char *)value, (char *)line + (signed long int)25, (unsigned long int)5);
            signed int return_value_atoi$9;
            return_value_atoi$9=atoi(value);
            bats[(signed long int)i].max_charge = (signed long int)return_value_atoi$9;
          }

        }
        while((_Bool)1);
        fclose(fd_info);
      }

      tot_cur_charge = tot_cur_charge + bats[(signed long int)i].cur_charge;
      tot_max_charge = tot_max_charge + bats[(signed long int)i].max_charge;
    }

    else
      break;
  }
  if(!(i == 0))
    sensor_lost_bat = 10;

  else
  {
    sensor_lost_bat = sensor_lost_bat - 1;
    if(!(sensor_lost_bat >= 1))
    {
      printf("Battery sensor doesn't appear to exist. Battery screen will be disabled.\n");
      have_bat = (_Bool)0;
      goto __CPROVER_DUMP_L31;
    }

  }
  if(!(all == 0))
  {
    g15r_clearScreen(canvas, 0);
    print_vert_label(canvas, "FULL");
    drawLine_both(canvas, 1, 32);
    i = 0;
    for( ; !(i >= 3); i = i + 1)
    {
      float charge = (float)0;
      signed int bar_top = i * 10 + 1 + i;
      signed int bar_bottom = (i + 1) * 10 + i;
      if(bats[(signed long int)i].max_charge >= 1l)
        charge = ((float)bats[(signed long int)i].cur_charge / (float)bats[(signed long int)i].max_charge) * (float)100;

      sprintf(tmpstr, "Bt%d %2.f%%", i, charge);
      g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)(i * 12 + 2));
      g15r_drawBar(canvas, 45, bar_top, 153, bar_bottom, 1, (signed int)bats[(signed long int)i].cur_charge, (signed int)bats[(signed long int)i].max_charge, 4);
    }
    drawBar_reversed(canvas, 45, 1, 153, 32, 1, (signed int)((float)100 - ((float)tot_cur_charge / (float)tot_max_charge) * (float)100), 100, 5);
  }

  if(all == 0 || info_cycle == 6)
  {
    float total_charge = (float)0;
    if(tot_max_charge >= 1l)
      total_charge = ((float)tot_cur_charge / (float)tot_max_charge) * (float)100;

    sprintf(tmpstr, "Total %2.f%% | ", total_charge);
    i = 0;
    for( ; !(i >= 3); i = i + 1)
    {
      char extension[11l];
      if(!(bats[(signed long int)i].status == -1l))
      {
        if(bats[(signed long int)i].status == 0l)
          goto __CPROVER_DUMP_L25;

        if(bats[(signed long int)i].status == 1l)
          goto __CPROVER_DUMP_L26;

        if(bats[(signed long int)i].status == 2l)
          goto __CPROVER_DUMP_L27;

      }

      else
      {
        sprintf(extension, "Bt%d - | ", i);
        goto __CPROVER_DUMP_L28;

      __CPROVER_DUMP_L25:
        ;
        sprintf(extension, "Bt%d F | ", i);
        goto __CPROVER_DUMP_L28;

      __CPROVER_DUMP_L26:
        ;
        sprintf(extension, "Bt%d C | ", i);
        goto __CPROVER_DUMP_L28;

      __CPROVER_DUMP_L27:
        ;
        sprintf(extension, "Bt%d D | ", i);
      }

    __CPROVER_DUMP_L28:
      ;
      strcat(tmpstr, extension);
    }
    unsigned long int return_value_strlen$11;
    return_value_strlen$11=strlen(tmpstr);
    g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)((unsigned long int)80 - (return_value_strlen$11 * (unsigned long int)4) / (unsigned long int)2), (unsigned int)37);
  }


__CPROVER_DUMP_L31:
  ;
}

// draw_cpu_screen_multicore
// file g15stats.c line 811
void draw_cpu_screen_multicore(struct g15canvas *canvas, char *tmpstr, signed int unicore)
{
  struct _glibtop_cpu cpu;
  signed int core;
  signed int ncpumax;
  signed int divider = 0;
  signed int total;
  signed int user;
  signed int nice;
  signed int sys;
  signed int idle;
  signed int b_total;
  signed int b_user;
  signed int b_nice;
  signed int b_sys;
  signed int b_idle;
  signed int b_irq;
  signed int b_iowait;
  signed int sub_val;
  init_cpu_count();
  ncpumax = ncpu;
  glibtop_get_cpu(&cpu);
  switch(cycle)
  {
    case 0:
    {
      draw_cpu_screen_unicore_logic(canvas, cpu, tmpstr, 0, 0, 1);
      break;
    }
    case 1:
    {
      if(ncpu == 1 || !(unicore == 0))
      {
        draw_cpu_screen_unicore_logic(canvas, cpu, tmpstr, 1, 1, 0);
        goto __CPROVER_DUMP_L56;
      }

      draw_cpu_screen_unicore_logic(canvas, cpu, tmpstr, 0, 1, 0);
      break;
    }
    case 2:
      draw_cpu_screen_unicore_logic(canvas, cpu, tmpstr, 0, 0, 0);
  }
  signed int y1 = 0;
  signed int y2 = 32;
  signed int shift = 12;
  signed int shift2 = 24;
  signed int current_value = 1;
  signed int freq_cur = 1;
  signed int freq_total = 1;
  signed int freq_sum = 0;
  float result;
  signed int spacer = 1;
  signed int height = 9;
  signed int move = 0;
  switch(cycle)
  {
    case 2:
    {
      if(ncpu >= 12)
        spacer = 0;

      height = 36;
      break;
    }
    case 1:
    {
      if(ncpu >= 5)
        spacer = 0;

      height = 12;
      break;
    }
    case 0:
    {
      spacer = 0;
      if(mode[0l] == 0)
      {
        summary_rows = 5;
        if(ncpu == 1 || ncpu == 2 || ncpu == 3 || ncpu == 5 || ncpu == 7)
        {
          move = 1;
          height = 6;
          goto __CPROVER_DUMP_L13;
        }

        height = 8;
      }

      else
      {
        summary_rows = 4;
        if(ncpu == 3 || ncpu == 5)
          move = 1;

        height = 8;
      }

    __CPROVER_DUMP_L13:
      ;
      shift = height + 1;
      shift2 = 2 * shift;
    }
  }
  ncpumax = height;
  if(!(ncpumax >= ncpu))
    height = (height - (ncpumax - 1) * spacer) / ncpumax;

  else
    height = (height - (ncpu - 1) * spacer) / ncpu;
  if(!(height >= 1))
    height = 1;

  core = 0;
  double tmp_if_expr$1;
  double tmp_if_expr$2;
  double tmp_if_expr$3;
  double tmp_if_expr$4;
  double tmp_if_expr$5;
  for( ; !(core >= ncpumax) && !(core >= ncpu); core = core + 1)
  {
    if(!(cpu.xcpu_total[(signed long int)core] == 0ul))
      tmp_if_expr$1 = (double)cpu.xcpu_total[(signed long int)core];

    else
      tmp_if_expr$1 = 1.0;
    total = (signed int)tmp_if_expr$1;
    if(!(cpu.xcpu_user[(signed long int)core] == 0ul))
      tmp_if_expr$2 = (double)cpu.xcpu_user[(signed long int)core];

    else
      tmp_if_expr$2 = 1.0;
    user = (signed int)tmp_if_expr$2;
    if(!(cpu.xcpu_nice[(signed long int)core] == 0ul))
      tmp_if_expr$3 = (double)cpu.xcpu_nice[(signed long int)core];

    else
      tmp_if_expr$3 = 1.0;
    nice = (signed int)tmp_if_expr$3;
    if(!(cpu.xcpu_sys[(signed long int)core] == 0ul))
      tmp_if_expr$4 = (double)cpu.xcpu_sys[(signed long int)core];

    else
      tmp_if_expr$4 = 1.0;
    sys = (signed int)tmp_if_expr$4;
    if(!(cpu.xcpu_idle[(signed long int)core] == 0ul))
      tmp_if_expr$5 = (double)cpu.xcpu_idle[(signed long int)core];

    else
      tmp_if_expr$5 = 1.0;
    idle = (signed int)tmp_if_expr$5;
    static signed int last_total[1024l];
    b_total = total - last_total[(signed long int)core];
    static signed int last_user[1024l];
    b_user = user - last_user[(signed long int)core];
    static signed int last_nice[1024l];
    b_nice = nice - last_nice[(signed long int)core];
    static signed int last_sys[1024l];
    b_sys = sys - last_sys[(signed long int)core];
    static signed int last_idle[1024l];
    b_idle = idle - last_idle[(signed long int)core];
    static signed int last_irq[1024l];
    b_irq = (signed int)(cpu.xcpu_irq[(signed long int)core] - (unsigned long int)last_irq[(signed long int)core]);
    static signed int last_iowait[1024l];
    b_iowait = (signed int)(cpu.xcpu_iowait[(signed long int)core] - (unsigned long int)last_iowait[(signed long int)core]);
    last_total[(signed long int)core] = total;
    last_user[(signed long int)core] = user;
    last_nice[(signed long int)core] = nice;
    last_sys[(signed long int)core] = sys;
    last_idle[(signed long int)core] = idle;
    last_irq[(signed long int)core] = (signed int)cpu.xcpu_irq[(signed long int)core];
    last_iowait[(signed long int)core] = (signed int)cpu.xcpu_iowait[(signed long int)core];
    y1 = core * height + core * spacer;
    y2 = (y1 + height) - 1;
    switch(cycle)
    {
      case 2:
      {
        if(!(mode[2l] == 0) && !(have_freq == 0))
        {
          freq_cur=get_cpu_freq_cur(core);
          if(!(core >= 6))
          {
            result = ((float)(b_total - b_idle) / (float)b_total) * (float)100;
            if(result < 100.000000f)
            {
              char *return_value_show_hertz_short$6;
              return_value_show_hertz_short$6=show_hertz_short(freq_cur);
              sprintf(tmpstr, "%2.f%% %s", result, return_value_show_hertz_short$6);
            }

            else
            {
              char *return_value_show_hertz_short$7;
              return_value_show_hertz_short$7=show_hertz_short(freq_cur);
              sprintf(tmpstr, "%3.f%%%s", result, return_value_show_hertz_short$7);
            }
            if(!(ncpu >= 5))
              g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)(y1 + 1));

            else
              g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)1, (unsigned int)(core * 6));
          }

          freq_total=get_cpu_freq_max(core);
          drawBar_both(canvas, y1, y2, freq_cur, freq_total, freq_total - freq_cur, freq_total);
          y1 = 0;
        }

        else
        {
          if(!(core >= 6))
          {
            if(!(have_freq == 0))
            {
              freq_cur=get_cpu_freq_cur(core);
              char *return_value_show_hertz_short$8;
              return_value_show_hertz_short$8=show_hertz_short(freq_cur);
              sprintf(tmpstr, "%s%3.f%%", return_value_show_hertz_short$8, ((float)(b_total - b_idle) / (float)b_total) * (float)100);
            }

            else
              sprintf(tmpstr, "CPU%.f%3.f%%", (float)core, ((float)(b_total - b_idle) / (float)b_total) * (float)100);
            if(!(ncpu >= 5))
              g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)(y1 + 1));

            else
              g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)1, (unsigned int)(core * 6));
          }

          current_value = b_total - b_idle;
          drawBar_both(canvas, y1, y2, current_value, b_total, b_total - current_value, b_total);
          y1 = 0;
        }
        break;
      }
      case 1:
      {
        if(!(mode[1l] == 0))
        {
          divider = 9 / ncpu;
          sub_val = divider * core;
          g15r_drawBar(canvas, 45, sub_val, 153, divider + sub_val, 1, b_user + 1, b_total, 4);
          g15r_drawBar(canvas, 45, shift + sub_val, 153, shift + divider + sub_val, 1, b_sys + 1, b_total, 4);
          y1 = 0;
          y2 = shift2 + divider + sub_val;
          g15r_drawBar(canvas, 45, shift2 + sub_val, 153, y2, 1, b_nice + 1, b_total, 4);
          divider = y2 / ncpu;
          drawBar_reversed(canvas, 45, sub_val, 153, y2, 1, b_idle + 1, b_total, 5);
        }

        else
        {
          current_value = b_total - b_idle;
          drawBar_both(canvas, y1, y2, current_value, b_total, b_total - current_value, b_total);
          drawBar_both(canvas, shift + y1, shift + y2, b_sys + 1, b_total, b_total - b_sys, b_total);
          y2 = y2 + shift2;
          drawBar_both(canvas, shift2 + y1, y2, b_nice + 1, b_total, b_total - b_nice, b_total);
          y1 = 0;
        }
        break;
      }
      case 0:
      {
        current_value = b_total - b_idle;
        drawBar_both(canvas, y1 + move, y2 + move, current_value, b_total, b_total - current_value, b_total);
        if(!(have_freq == 0))
        {
          freq_cur=get_cpu_freq_cur(core);
          freq_total=get_cpu_freq_max(core);
          unsigned long int return_value_maxi$9;
          return_value_maxi$9=maxi((unsigned long int)freq_sum, (unsigned long int)freq_cur);
          freq_sum = (signed int)return_value_maxi$9;
          drawBar_both(canvas, shift + y1 + move, shift + y2 + move, freq_cur, freq_total, freq_total - freq_cur, freq_total);
        }

        y1 = 0;
      }
    }
  }
  drawLine_both(canvas, y1 + move, y2 + move);
  if(cycle == 0)
  {
    signed int text_shift;
    if(summary_rows >= 5)
      text_shift = 7;

    else
      text_shift = 9;
    if(!(have_freq == 0))
    {
      drawLine_both(canvas, shift + y1 + move, shift + y2 + move);
      char *return_value_show_hertz_short$10;
      return_value_show_hertz_short$10=show_hertz_short((signed int)freq_sum);
      sprintf(tmpstr, "FRQ %s", return_value_show_hertz_short$10);
      print_label(canvas, tmpstr, text_shift);
      draw_summary_screen(canvas, tmpstr, y1, y2, move, shift, text_shift, 2);
    }

    else
      draw_summary_screen(canvas, tmpstr, y1, y2, move, shift, text_shift, 1);
  }


__CPROVER_DUMP_L56:
  ;
}

// draw_cpu_screen_unicore
// file g15stats.c line 804
void draw_cpu_screen_unicore(struct g15canvas *canvas, char *tmpstr, signed int drawgraph, signed int printlabels)
{
  struct _glibtop_cpu cpu;
  glibtop_get_cpu(&cpu);
  draw_cpu_screen_unicore_logic(canvas, cpu, tmpstr, drawgraph, printlabels, 0);
}

// draw_cpu_screen_unicore_logic
// file g15stats.c line 747
void draw_cpu_screen_unicore_logic(struct g15canvas *canvas, struct _glibtop_cpu cpu, char *tmpstr, signed int drawgraph, signed int printlabels, signed int cpuandmemory)
{
  signed int total;
  signed int user;
  signed int nice;
  signed int sys;
  signed int idle;
  signed int b_total;
  signed int b_user;
  signed int b_nice;
  signed int b_sys;
  signed int b_idle;
  signed int b_irq;
  signed int b_iowait;
  g15r_clearScreen(canvas, 0);
  total = (signed int)((unsigned long int)cpu.total != 0ul ? (double)cpu.total : 1.0);
  user = (signed int)((unsigned long int)cpu.user != 0ul ? (double)cpu.user : 1.0);
  nice = (signed int)((unsigned long int)cpu.nice != 0ul ? (double)cpu.nice : 1.0);
  sys = (signed int)((unsigned long int)cpu.sys != 0ul ? (double)cpu.sys : 1.0);
  idle = (signed int)((unsigned long int)cpu.idle != 0ul ? (double)cpu.idle : 1.0);
  static signed int last_total;
  b_total = total - last_total;
  static signed int last_user;
  b_user = user - last_user;
  static signed int last_nice;
  b_nice = nice - last_nice;
  static signed int last_sys;
  b_sys = sys - last_sys;
  static signed int last_idle;
  b_idle = idle - last_idle;
  static signed int last_irq;
  b_irq = (signed int)(cpu.irq - (unsigned long int)last_irq);
  static signed int last_iowait;
  b_iowait = (signed int)(cpu.iowait - (unsigned long int)last_iowait);
  last_total = total;
  last_user = user;
  last_nice = nice;
  last_sys = sys;
  last_idle = idle;
  last_irq = (signed int)cpu.irq;
  last_iowait = (signed int)cpu.iowait;
  if(!(printlabels == 0))
  {
    sprintf(tmpstr, "Usr %2.f%%", ((float)b_user / (float)b_total) * (float)100);
    g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)2);
    sprintf(tmpstr, "Sys %2.f%%", ((float)b_sys / (float)b_total) * (float)100);
    g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)14);
    sprintf(tmpstr, "Nce %2.f%%", ((float)b_nice / (float)b_total) * (float)100);
    g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)26);
  }

  if(!(drawgraph == 0))
  {
    g15r_drawBar(canvas, 45, 1, 153, 10, 1, b_user + 1, b_total, 4);
    g15r_drawBar(canvas, 45, 12, 153, 21, 1, b_sys + 1, b_total, 4);
    g15r_drawBar(canvas, 45, 23, 153, 32, 1, b_nice + 1, b_total, 4);
    drawBar_reversed(canvas, 45, 1, 153, 32, 1, b_idle + 1, b_total, 5);
    drawLine_both(canvas, 1, 32);
  }

  _Bool tmp_if_expr$1;
  if(!(cpuandmemory == 0))
  {
    print_vert_label(canvas, "TOTAL");
    sprintf(tmpstr, "CPU %3.f%%", ((float)(b_total - b_idle) / (float)b_total) * (float)100);
    print_label(canvas, tmpstr, 0);
  }

  else
  {
    if(cycle == 2)
      tmp_if_expr$1 = mode[(signed long int)2] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(!(have_freq == 0) && tmp_if_expr$1)
      print_vert_label(canvas, "FREQ");

    else
      print_vert_label(canvas, "Idle");
  }
}

// draw_g15_stats_info_screen
// file g15stats.c line 1302
void draw_g15_stats_info_screen(struct g15canvas *canvas, char *tmpstr, signed int all, signed int screen_type)
{
  signed int count;
  switch(screen_type)
  {    static struct g15_stats_info probes[4l];
    case 7:
    {
      count=get_sensors(probes, 7, sensor_type_temp, sensor_lost_temp, sensor_temp_id);
      draw_g15_stats_info_screen_logic(canvas, tmpstr, all, screen_type, probes, count, temp_tot_max, sensor_lost_temp, sensor_temp_id, "TEMP", "t-%d %3.f°", "temp%d %1.f° ");
      break;
    }
    case 8:
    {
      count=get_sensors(probes, 8, sensor_type_fan, sensor_lost_fan, sensor_fan_id);
      draw_g15_stats_info_screen_logic(canvas, tmpstr, all, screen_type, probes, count, fan_tot_max, sensor_lost_fan, sensor_fan_id, "RPM", "F-%d%5.f", "Fan%d %1.f ");
    }
  }
}

// draw_g15_stats_info_screen_logic
// file g15stats.c line 1257
void draw_g15_stats_info_screen_logic(struct g15canvas *canvas, char *tmpstr, signed int all, signed int screen_type, struct g15_stats_info *probes, signed int count, float tot_max, signed int *sensor_lost, signed int sensor_id, char *vert_label, char *format_main, char *format_bottom)
{
  _Bool tmp_if_expr$1;
  if(count == 0)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = IEEE_FLOAT_EQUAL((probes + (signed long int)0)->cur, (float)-100) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    goto __CPROVER_DUMP_L12;

  else
    sensor_lost[(signed long int)sensor_id] = 10;
  signed int j = 0;
  signed int shift = 32 / count;
  if(!(count == 0))
  {
    if(!(all == 0))
    {
      g15r_clearScreen(canvas, 0);
      print_vert_label(canvas, vert_label);
      j = 0;
      for( ; !(j >= count); j = j + 1)
      {
        signed int bar_top = j * shift + 1 + j;
        signed int bar_bottom = (j + 1) * shift + j;
        sprintf(tmpstr, format_main, j + 1, (probes + (signed long int)j)->cur);
        g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)(bar_top + 1));
        drawBar_both(canvas, bar_top, bar_bottom, (signed int)((probes + (signed long int)j)->cur + (float)1), (signed int)tot_max, (signed int)(tot_max - (probes + (signed long int)j)->cur), (signed int)tot_max);
      }
      drawLine_both(canvas, 1, (j * shift + j) - 1);
    }

    if(all == 0 || info_cycle == screen_type)
    {
      char extension[16l];
      tmpstr[(signed long int)0] = (char)0;
      j = 0;
      for( ; !(j >= count); j = j + 1)
      {
        sprintf(extension, format_bottom, j + 1, (probes + (signed long int)j)->cur);
        if(!(j == 0))
          strcat(tmpstr, "| ");

        strcat(tmpstr, extension);
      }
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(tmpstr);
      g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)((unsigned long int)80 - (return_value_strlen$2 * (unsigned long int)4) / (unsigned long int)2), (unsigned int)37);
    }

  }


__CPROVER_DUMP_L12:
  ;
}

// draw_mem_screen
// file g15stats.c line 572
void draw_mem_screen(struct g15canvas *canvas, char *tmpstr)
{
  struct _glibtop_mem mem;
  glibtop_get_mem(&mem);
  signed int mem_total = (signed int)(mem.total / (unsigned long int)1024);
  signed int mem_free = (signed int)(mem.free / (unsigned long int)1024);
  signed int mem_user = (signed int)(mem.user / (unsigned long int)1024);
  signed int mem_buffer = (signed int)(mem.buffer / (unsigned long int)1024);
  signed int mem_cached = (signed int)(mem.cached / (unsigned long int)1024);
  g15r_clearScreen(canvas, 0);
  sprintf(tmpstr, "Usr %2.f%%", ((float)mem_user / (float)mem_total) * (float)100);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)2);
  sprintf(tmpstr, "Buf %2.f%%", ((float)mem_buffer / (float)mem_total) * (float)100);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)14);
  sprintf(tmpstr, "Che %2.f%%", ((float)mem_cached / (float)mem_total) * (float)100);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)26);
  g15r_drawBar(canvas, 45, 1, 153, 10, 1, mem_user, mem_total, 4);
  g15r_drawBar(canvas, 45, 12, 153, 21, 1, mem_buffer, mem_total, 4);
  g15r_drawBar(canvas, 45, 23, 153, 32, 1, mem_cached, mem_total, 4);
  drawBar_reversed(canvas, 45, 1, 153, 32, 1, mem_free, mem_total, 5);
  drawLine_both(canvas, 1, 32);
  print_vert_label(canvas, "FREE");
}

// draw_net_screen
// file g15stats.c line 1041
void draw_net_screen(struct g15canvas *canvas, char *tmpstr, char *interface)
{
  signed int i;
  signed int x = 0;
  float diff = (float)0;
  float height = (float)0;
  float last = (float)0;
  g15r_clearScreen(canvas, 0);
  struct _glibtop_netload netload;
  glibtop_get_netload(&netload, interface);
  x = 53;
  i = net_rr_index + 1;
  for( ; !(i >= 107); i = i + 1)
  {
    diff = (float)net_max_in / (float)net_hist[(signed long int)i][(signed long int)0];
    height = (float)16 - (float)16 / diff;
    g15r_setPixel(canvas, (unsigned int)x, (unsigned int)height, 1);
    g15r_drawLine(canvas, x, (signed int)height, x - 1, (signed int)last, 1);
    last = height;
    x = x + 1;
  }
  i = 0;
  for( ; !(i >= net_rr_index); i = i + 1)
  {
    diff = (float)net_max_in / (float)net_hist[(signed long int)i][(signed long int)0];
    height = (float)16 - (float)16 / diff;
    g15r_drawLine(canvas, x, (signed int)height, x - 1, (signed int)last, 1);
    last = height;
    x = x + 1;
  }
  x = 53;
  i = net_rr_index + 1;
  for( ; !(i >= 107); i = i + 1)
  {
    diff = (float)net_max_out / (float)net_hist[(signed long int)i][(signed long int)1];
    height = (float)34 - (float)16 / diff;
    g15r_setPixel(canvas, (unsigned int)x, (unsigned int)height, 1);
    g15r_drawLine(canvas, x, (signed int)height, x - 1, (signed int)last, 1);
    last = height;
    x = x + 1;
  }
  i = 0;
  for( ; !(i >= net_rr_index); i = i + 1)
  {
    diff = (float)net_max_out / (float)net_hist[(signed long int)i][(signed long int)1];
    height = (float)34 - (float)16 / diff;
    g15r_drawLine(canvas, x, (signed int)height, x - 1, (signed int)last, 1);
    last = height;
    x = x + 1;
  }
  g15r_drawLine(canvas, 52, 0, 52, 34, 1);
  g15r_drawLine(canvas, 53, 0, 53, 34, 1);
  g15r_drawLine(canvas, 54, 0, 54, 34, 1);
  char *return_value_show_bytes$1;
  return_value_show_bytes$1=show_bytes(netload.bytes_in);
  sprintf(tmpstr, "IN %s", return_value_show_bytes$1);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)2);
  char *return_value_show_bytes$2;
  return_value_show_bytes$2=show_bytes(netload.bytes_out);
  sprintf(tmpstr, "OUT %s", return_value_show_bytes$2);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)26);
  sprintf(tmpstr, "%s", interface);
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(tmpstr);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 2, (unsigned int)((unsigned long int)25 - (return_value_strlen$3 * (unsigned long int)9) / (unsigned long int)2), (unsigned int)14);
  if(!(net_scale_absolute == (_Bool)0))
    print_vert_label_logic(canvas, "ABS  ", (unsigned int)47);

  else
    print_vert_label_logic(canvas, "REL  ", (unsigned int)47);
}

// draw_summary_screen
// file g15stats.c line 651
void draw_summary_screen(struct g15canvas *canvas, char *tmpstr, signed int y1, signed int y2, signed int move, signed int shift, signed int text_shift, signed int id)
{
  struct _glibtop_mem mem;
  glibtop_get_mem(&mem);
  signed int mem_total = (signed int)(mem.total / (unsigned long int)1024);
  signed int mem_used = (signed int)((unsigned long int)mem_total - mem.free / (unsigned long int)1024);
  signed int cur_shift = shift * id;
  if(summary_rows >= 5)
  {
    if(shift >= 8)
    {
      if(id == 2)
      {
        y2 = 4;
        shift = 6;
      }

      else
      {
        y2 = 5;
        shift = 7;
      }
    }

  }

  signed int y;
  signed int count;
  sprintf(tmpstr, "MEM %3.f%%", ((float)mem_used / (float)mem_total) * (float)100);
  print_label(canvas, tmpstr, text_shift * id);
  drawAll_both(canvas, cur_shift + y1 + move, cur_shift + y2 + move, mem_used + 1, mem_total, mem_total - mem_used, mem_total);
  id = id + 1;
  cur_shift = cur_shift + shift;
  if(!(have_nic == (_Bool)0))
  {
    y = y2 / 2;
    drawLine_both(canvas, cur_shift + y1 + move, cur_shift + y2 + move);
    drawBar_both(canvas, cur_shift + y1 + move, cur_shift + y + move, (signed int)(net_cur_in + (unsigned long int)1), (signed int)net_max_in, (signed int)(net_max_in - net_cur_in), (signed int)net_max_in);
    drawBar_both(canvas, cur_shift + y + move, cur_shift + y2 + move, (signed int)(net_cur_out + (unsigned long int)1), (signed int)net_max_out, (signed int)(net_max_out - net_cur_out), (signed int)net_max_out);
    if(!(net_cur_out >= net_cur_in))
    {
      char *return_value_show_bytes_short$1;
      return_value_show_bytes_short$1=show_bytes_short((unsigned long int)(signed int)net_cur_in);
      sprintf(tmpstr, "IN %s", return_value_show_bytes_short$1);
    }

    else
    {
      char *return_value_show_bytes_short$2;
      return_value_show_bytes_short$2=show_bytes_short((unsigned long int)(signed int)net_cur_out);
      sprintf(tmpstr, "OUT%s", return_value_show_bytes_short$2);
    }
    print_label(canvas, tmpstr, text_shift * id);
    id = id + 1;
    cur_shift = cur_shift + shift;
  }

  if(!(have_fan == (_Bool)0) || !(have_temp == (_Bool)0))
  {
    struct g15_stats_info sensors[4l];
    if(!(id >= summary_rows) && !(have_temp == (_Bool)0))
    {
      count=get_sensors(sensors, 7, sensor_type_temp, sensor_lost_temp, sensor_temp_id);
      if(!(count == 0) && !(have_temp == (_Bool)0))
      {
        draw_summary_sensors_logic(canvas, tmpstr, sensors, "TEM %3.f°", text_shift * id, y1, y2, move, cur_shift, shift, count, temp_tot_cur, temp_tot_max);
        id = id + 1;
        cur_shift = cur_shift + shift;
      }

    }

    if(!(id >= summary_rows) && !(have_fan == (_Bool)0))
    {
      count=get_sensors(sensors, 8, sensor_type_fan, sensor_lost_fan, sensor_fan_id);
      if(!(count == 0) && !(have_fan == (_Bool)0))
      {
        draw_summary_sensors_logic(canvas, tmpstr, sensors, "RPM%5.f", text_shift * id, y1, y2, move, cur_shift, shift, count, fan_tot_cur, fan_tot_max);
        id = id + 1;
        cur_shift = cur_shift + shift;
      }

    }

  }

  if(!(id >= summary_rows))
  {
    struct _glibtop_swap swap;
    glibtop_get_swap(&swap);
    signed int swap_used = (signed int)(swap.used / (unsigned long int)1024);
    signed int swap_total = (signed int)(swap.total / (unsigned long int)1024);
    drawAll_both(canvas, cur_shift + y1 + move, cur_shift + y2 + move, swap_used, swap_total, swap_total - swap_used, swap_total);
    sprintf(tmpstr, "Swp %3i%%", (unsigned int)(((float)swap_used / (float)swap_total) * (float)100));
    print_label(canvas, tmpstr, text_shift * id);
    id = id + 1;
    cur_shift = cur_shift + shift;
  }

}

// draw_summary_sensors_logic
// file g15stats.c line 625
void draw_summary_sensors_logic(struct g15canvas *canvas, char *tmpstr, struct g15_stats_info *sensors, char *label, signed int text_shift, signed int y1, signed int y2, signed int move, signed int cur_shift, signed int shift, signed int count, float tot_cur, float tot_max)
{
  if(!(count == 0))
  {
    signed int j = 0;
    signed int rest;
    signed int step = (signed int)(y2 / count);
    rest = y2 - step * count;
    signed int y = cur_shift + y1;
    signed int last_y;
    j = 0;
    for( ; !(j >= count); j = j + 1)
    {
      last_y = y;
      y = y + step;
      if(rest >= 1)
      {
        rest = rest - 1;
        y = y + 1;
      }

      drawBar_both(canvas, last_y + move, y + move, (signed int)((sensors + (signed long int)j)->cur + (float)1), (signed int)tot_max, (signed int)(tot_max - (sensors + (signed long int)j)->cur), (signed int)tot_max);
    }
    drawLine_both(canvas, cur_shift + y1 + move, y + move);
    sprintf(tmpstr, label, tot_cur);
    print_label(canvas, tmpstr, text_shift);
  }

}

// draw_swap_screen
// file g15stats.c line 602
void draw_swap_screen(struct g15canvas *canvas, char *tmpstr)
{
  struct _glibtop_swap swap;
  g15r_clearScreen(canvas, 0);
  glibtop_get_swap(&swap);
  signed int swap_used = (signed int)(swap.used / (unsigned long int)1024);
  signed int swap_total = (signed int)(swap.total / (unsigned long int)1024);
  g15r_renderString(canvas, (unsigned char *)"Swap", 0, 1, (unsigned int)1, (unsigned int)9);
  sprintf(tmpstr, "Used %i%%", (unsigned int)(((float)swap_used / (float)swap_total) * (float)100));
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)19);
  drawAll_both(canvas, 1, 32, swap_used, swap_total, swap_total - swap_used, swap_total);
  print_vert_label(canvas, "FREE");
}

// format_float
// file g15stats.c line 118
void format_float(char *tmpstr, char *format_less, char *format_great, float value)
{
  if((double)value < 9.9)
    sprintf(tmpstr, format_less, value);

  else
    sprintf(tmpstr, format_great, (unsigned long int)value);
}

// g15stats_wait
// file g15stats.c line 1616
void g15stats_wait(signed int seconds)
{
  union anonymous$1 dummy_mutex;
  struct timespec timeout;
  pthread_mutex_init(&dummy_mutex, (const union anonymous *)(void *)0);
  pthread_mutex_lock(&dummy_mutex);
  time(&timeout.tv_sec);
  timeout.tv_sec = timeout.tv_sec + (signed long int)seconds;
  timeout.tv_nsec = 0L;
  pthread_cond_timedwait(&wake_now, &dummy_mutex, &timeout);
  pthread_mutex_unlock(&dummy_mutex);
  pthread_mutex_destroy(&dummy_mutex);
}

// get_cpu_freq_cur
// file g15stats.c line 344
signed int get_cpu_freq_cur(signed int core)
{
  signed int ret_val;
  if(have_freq == 2)
  {
    ret_val=get_processor_freq("scaling_cur_freq", core);
    goto __CPROVER_DUMP_L3;
  }

  ret_val=get_processor_freq("cpuinfo_%d_freq", core);

__CPROVER_DUMP_L3:
  ;
  if(ret_val == -100 && core == 0)
  {
    have_freq = have_freq - 1;
    if(!(have_freq >= 0))
      have_freq = 0;

    printf("Frequency sensor doesn't appear to exist for core=%d . ", core);
  }

  return ret_val;
}

// get_cpu_freq_max
// file g15stats.c line 364
signed int get_cpu_freq_max(signed int core)
{
  signed int return_value_get_processor_freq$1;
  return_value_get_processor_freq$1=get_processor_freq("cpuinfo_max_freq", core);
  return return_value_get_processor_freq$1;
}

// get_cpu_freq_min
// file g15stats.c line 368
signed int get_cpu_freq_min(signed int core)
{
  signed int return_value_get_processor_freq$1;
  return_value_get_processor_freq$1=get_processor_freq("cpuinfo_min_freq", core);
  return return_value_get_processor_freq$1;
}

// get_hwmon
// file g15stats.c line 372
signed int get_hwmon(signed int sensor_id, char *sensor, char *which, signed int id, _Bool sensor_type)
{
  char tmpstr[128l];
  if(!(sensor_type == (_Bool)0))
    sprintf(tmpstr, "/sys/class/hwmon/hwmon%d/device/%s%d_%s", sensor_id, sensor, id, which);

  else
    sprintf(tmpstr, "/sys/class/hwmon/hwmon%d/%s%d_%s", sensor_id, sensor, id, which);
  signed int return_value_get_sysfs_value$1;
  return_value_get_sysfs_value$1=get_sysfs_value(tmpstr);
  return return_value_get_sysfs_value$1;
}

// get_next
// file g15stats.c line 398
signed int get_next(signed int sensor_id, signed int *sensor_lost)
{
  signed int new_sensor_id = sensor_id;
  do
  {
    new_sensor_id = new_sensor_id + 1;
    if(new_sensor_id >= 4)
      new_sensor_id = 0;

    if(!(sensor_lost[(signed long int)new_sensor_id] == 0))
      return new_sensor_id;

  }
  while(!(sensor_id == new_sensor_id));
  return -100;
}

// get_processor_freq
// file g15stats.c line 338
signed int get_processor_freq(char *which, signed int core)
{
  static char tmpstr[128l];
  sprintf(tmpstr, "/sys/devices/system/cpu/cpu%d/cpufreq/%s", core, which);
  signed int return_value_get_sysfs_value$1;
  return_value_get_sysfs_value$1=get_sysfs_value(tmpstr);
  return return_value_get_sysfs_value$1;
}

// get_sensor_cur
// file g15stats.c line 382
signed int get_sensor_cur(signed int id, signed int screen_id)
{
  if(screen_id == 7)
  {
    signed int return_value_get_hwmon$1;
    return_value_get_hwmon$1=get_hwmon(sensor_temp_id, "temp", "input", id, sensor_type_temp[(signed long int)sensor_temp_id]);
    return return_value_get_hwmon$1;
  }

  else
  {
    signed int return_value_get_hwmon$2;
    return_value_get_hwmon$2=get_hwmon(sensor_fan_id, "fan", "input", id, sensor_type_fan[(signed long int)sensor_fan_id]);
    return return_value_get_hwmon$2;
  }
}

// get_sensor_max
// file g15stats.c line 390
signed int get_sensor_max(signed int id, signed int screen_id)
{
  if(screen_id == 7)
  {
    signed int return_value_get_hwmon$1;
    return_value_get_hwmon$1=get_hwmon(sensor_temp_id, "temp", "max", id, sensor_type_temp[(signed long int)sensor_temp_id]);
    return return_value_get_hwmon$1;
  }

  else
  {
    signed int return_value_get_hwmon$2;
    return_value_get_hwmon$2=get_hwmon(sensor_fan_id, "fan", "alarm", id, sensor_type_fan[(signed long int)sensor_fan_id]);
    return return_value_get_hwmon$2;
  }
}

// get_sensors
// file g15stats.c line 413
signed int get_sensors(struct g15_stats_info *sensors, signed int screen_id, _Bool *sensor_type, signed int *sensor_lost, signed int sensor_id)
{
  char label[16l];
  signed int count = 0;
  if(screen_id == 7)
  {
    temp_tot_cur = (float)0;
    sprintf(label, "Temperature");
  }

  else
  {
    fan_tot_cur = (float)0;
    sprintf(label, "Fan");
  }
  count = 0;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  for( ; !(count >= 4); count = count + 1)
  {
    signed int return_value_get_sensor_cur$1;
    return_value_get_sensor_cur$1=get_sensor_cur(count + 1, screen_id);
    (sensors + (signed long int)count)->cur = (float)return_value_get_sensor_cur$1;
    if(IEEE_FLOAT_EQUAL((sensors + (signed long int)count)->cur, -100.000000f))
      break;

    signed int return_value_get_sensor_max$2;
    return_value_get_sensor_max$2=get_sensor_max(count + 1, screen_id);
    (sensors + (signed long int)count)->max = (float)return_value_get_sensor_max$2;
    if(screen_id == 7)
    {
      (sensors + (signed long int)count)->cur = (sensors + (signed long int)count)->cur / (float)1000;
      (sensors + (signed long int)count)->max = (sensors + (signed long int)count)->max / (float)1000;
      if(temp_tot_max < (sensors + (signed long int)count)->max)
        temp_tot_max = (sensors + (signed long int)count)->max;

      if(sensor_temp_main == 1 + count)
        tmp_if_expr$4 = (_Bool)1;

      else
      {
        if(sensor_temp_main == 0)
          tmp_if_expr$3 = temp_tot_cur < (sensors + (signed long int)count)->cur ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$3 = (_Bool)0;
        tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$4)
        temp_tot_cur = (sensors + (signed long int)count)->cur;

    }

    else
    {
      if(fan_tot_cur < (sensors + (signed long int)count)->cur)
        fan_tot_cur = (sensors + (signed long int)count)->cur;

      if(fan_tot_max < fan_tot_cur)
        fan_tot_max = (float)((double)fan_tot_cur * 1.2);

    }
  }
  if(count == 0)
  {
    if(!IEEE_FLOAT_EQUAL(sensors->cur, -100.000000f))
      goto __CPROVER_DUMP_L22;

    if(!(sensor_type[(signed long int)sensor_id] == (_Bool)0))
    {
      sensor_lost[(signed long int)sensor_id] = sensor_lost[(signed long int)sensor_id] - 1;
      if(!(sensor_lost[(signed long int)sensor_id] >= 0))
        sensor_lost[(signed long int)sensor_id] = 0;

      printf("%s sensor doesn't appear to exist with id=%d .\n", (const void *)label, sensor_id);
      sensor_id=get_next(sensor_id, sensor_lost);
      if(screen_id == 7)
        sensor_temp_id = sensor_id;

      else
        sensor_fan_id = sensor_id;
      if(!(sensor_id == -100))
      {
        signed int return_value_get_sensors$5;
        return_value_get_sensors$5=get_sensors(sensors, screen_id, sensor_type, sensor_lost, sensor_id);
        return return_value_get_sensors$5;
      }

    }

    else
    {
      sensor_type[(signed long int)sensor_id] = (_Bool)1;
      signed int return_value_get_sensors$6;
      return_value_get_sensors$6=get_sensors(sensors, screen_id, sensor_type, sensor_lost, sensor_id);
      return return_value_get_sensors$6;
    }
    if(!(sensor_id == -100))
      goto __CPROVER_DUMP_L22;

    if(screen_id == 7)
      have_temp = (_Bool)0;

    else
      have_fan = (_Bool)0;
    printf("%s sensor doesn't appear to exist. %s screen will be disabled.\n", (const void *)label, (const void *)label);
    return 0;
  }

  else
  {

  __CPROVER_DUMP_L22:
    ;
    if(count >= 4)
      count = 4;

    else
      if(IEEE_FLOAT_NOTEQUAL((sensors + (signed long int)count)->cur, -100.000000f))
        count = count + 1;

    return count;
  }
}

// get_sysfs_value
// file g15stats.c line 320
signed int get_sysfs_value(char *filename)
{
  signed int ret_val = -1;
  struct _IO_FILE *fd_main;
  fd_main=fopen(filename, "r");
  if(!(fd_main == ((struct _IO_FILE *)NULL)))
  {
    char *return_value_fgets$1;
    static char tmpstr[128l];
    return_value_fgets$1=fgets(tmpstr, 128, fd_main);
    if(!(return_value_fgets$1 == ((char *)NULL)))
    {
      fclose(fd_main);
      ret_val=atoi(tmpstr);
    }

    else
      fclose(fd_main);
  }

  else
    ret_val = -100;
  return ret_val;
}

// init_cpu_count
// file g15stats.c line 307
void init_cpu_count(void)
{
  if(ncpu == 0)
  {
    const struct _glibtop_sysinfo *cpuinfo;
    cpuinfo=glibtop_get_sysinfo();
    if(cpuinfo->ncpu == 0ul)
      ncpu = 1;

    else
      ncpu = (signed int)cpuinfo->ncpu;
  }

}

// keyboard_watch
// file g15stats.c line 1424
void keyboard_watch(void)
{
  unsigned int keystate;
  signed int change = 0;
  while((_Bool)1)
  {
    recv(g15screen_fd, (void *)&keystate, (unsigned long int)4, 0);
    if((4194304u & keystate) == 0u)
    {
      if(!((8388608u & keystate) == 0u))
      {
        cycle = cycle - 1;
        change = 1;
      }

      else
        if(!((16777216u & keystate) == 0u))
        {
          cycle = cycle + 1;
          change = 2;
        }

        else
          if(!((33554432u & keystate) == 0u))
          {
            mode[(signed long int)cycle] = mode[(signed long int)cycle] + 1;
            change = 3;
          }

          else
            if(!((67108864u & keystate) == 0u))
            {
              submode = submode + 1;
              change = 4;
            }

    }

    if(!(change == 0))
    {
      switch(change)
      {
        case 2:
        {
          if(cycle >= 9)
            cycle = 0;

          switch(cycle)
          {
            case 5:
            {
              if(have_nic != (_Bool)0)
                break;

              cycle = cycle + 1;
            }
            case 6:
            {
              if(have_bat != (_Bool)0)
                break;

              cycle = cycle + 1;
            }
            case 7:
            {
              if(have_temp != (_Bool)0)
                break;

              cycle = cycle + 1;
            }
            case 8:
              if(have_fan == (_Bool)0)
                cycle = 0;

          }
          info_cycle_timer = cycle * 6;
          break;
        }
        case 1:
        {
          if(!(cycle >= 0))
            cycle = 8;

          switch(cycle)
          {
            case 8:
            {
              if(have_fan != (_Bool)0)
                break;

              cycle = cycle - 1;
            }
            case 7:
            {
              if(have_temp != (_Bool)0)
                break;

              cycle = cycle - 1;
            }
            case 6:
            {
              if(have_bat != (_Bool)0)
                break;

              cycle = cycle - 1;
            }
            case 5:
              if(have_nic == (_Bool)0)
                cycle = cycle - 1;

          }
          info_cycle_timer = cycle * 6;
          break;
        }
        case 3:
          switch(cycle)
          {
            case 5:
            {
              if(!(have_nic == (_Bool)0))
                net_scale_absolute = ((signed int)net_scale_absolute ^ 1) != 0;

              else
                change = 0;
              break;
            }
            case 7:
            {
              sensor_temp_id=get_next(sensor_temp_id, sensor_lost_temp);
              if(sensor_temp_id == -100)
                sensor_temp_id = 0;

              break;
            }
            case 8:
            {
              sensor_fan_id=get_next(sensor_fan_id, sensor_lost_fan);
              if(sensor_fan_id == -100)
                sensor_fan_id = 0;

              break;
            }
            case 4:

            case 3:

            case 6:
              change = 0;
            default:
              ;
          }
      }
      if(cycle >= 9)
        cycle = 0;

      if(mode[(signed long int)cycle] >= 2)
        mode[(signed long int)cycle] = 0;

      if(submode >= 2)
        submode = 0;

      if(!(change == 0))
        pthread_cond_broadcast(&wake_now);

      change = 0;
    }

    usleep((unsigned int)(100 * 900));
  }
  goto __CPROVER_DUMP_L36;

__CPROVER_DUMP_L36:
  ;
}

// main
// file g15stats.c line 1632
signed int main(signed int argc, char **argv)
{
  struct g15canvas *canvas;
  unsigned long int keys_thread;
  unsigned long int net_thread;
  signed int i;
  signed int go_daemon = 0;
  unsigned char interface[128l];
  signed int unicore = 0;
  i = 0;
  _Bool tmp_if_expr$3;
  signed int return_value_strncmp$2;
  _Bool tmp_if_expr$6;
  signed int return_value_strncmp$5;
  _Bool tmp_if_expr$9;
  signed int return_value_strncmp$8;
  _Bool tmp_if_expr$12;
  signed int return_value_strncmp$11;
  _Bool tmp_if_expr$15;
  signed int return_value_strncmp$14;
  _Bool tmp_if_expr$18;
  signed int return_value_strncmp$17;
  _Bool tmp_if_expr$21;
  signed int return_value_strncmp$20;
  _Bool tmp_if_expr$24;
  signed int return_value_strncmp$23;
  _Bool tmp_if_expr$27;
  signed int return_value_strncmp$26;
  for( ; !(i >= argc); i = i + 1)
  {
    signed int return_value_strncmp$1;
    return_value_strncmp$1=strncmp(argv[(signed long int)i], "-d", (unsigned long int)2);
    if(return_value_strncmp$1 == 0)
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_strncmp$2=strncmp(argv[(signed long int)i], "--daemon", (unsigned long int)8);
      tmp_if_expr$3 = 0 == return_value_strncmp$2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$3)
      go_daemon = 1;

    signed int return_value_strncmp$4;
    return_value_strncmp$4=strncmp(argv[(signed long int)i], "-u", (unsigned long int)2);
    if(return_value_strncmp$4 == 0)
      tmp_if_expr$6 = (_Bool)1;

    else
    {
      return_value_strncmp$5=strncmp(argv[(signed long int)i], "--unicore", (unsigned long int)9);
      tmp_if_expr$6 = 0 == return_value_strncmp$5 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$6)
      unicore = 1;

    signed int return_value_strncmp$7;
    return_value_strncmp$7=strncmp(argv[(signed long int)i], "-nsa", (unsigned long int)4);
    if(return_value_strncmp$7 == 0)
      tmp_if_expr$9 = (_Bool)1;

    else
    {
      return_value_strncmp$8=strncmp(argv[(signed long int)i], "--net-scale-absolute", (unsigned long int)20);
      tmp_if_expr$9 = 0 == return_value_strncmp$8 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$9)
      net_scale_absolute = (_Bool)1;

    signed int return_value_strncmp$10;
    return_value_strncmp$10=strncmp(argv[(signed long int)i], "-df", (unsigned long int)3);
    if(return_value_strncmp$10 == 0)
      tmp_if_expr$12 = (_Bool)1;

    else
    {
      return_value_strncmp$11=strncmp(argv[(signed long int)i], "--disable-freq", (unsigned long int)14);
      tmp_if_expr$12 = 0 == return_value_strncmp$11 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$12)
      have_freq = 0;

    signed int return_value_strncmp$13;
    return_value_strncmp$13=strncmp(argv[(signed long int)i], "-h", (unsigned long int)2);
    if(return_value_strncmp$13 == 0)
      tmp_if_expr$15 = (_Bool)1;

    else
    {
      return_value_strncmp$14=strncmp(argv[(signed long int)i], "--help", (unsigned long int)6);
      tmp_if_expr$15 = 0 == return_value_strncmp$14 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$15)
    {
      printf("%s %s - (c) 2008-2009 Mike Lampard, Piotr Czarnecki\n", (const void *)"g15stats", (const void *)"1.9.2");
      printf("Usage: %s [Options]\n", (const void *)"g15stats");
      printf("Options:\n");
      printf("--daemon (-d) run in background\n");
      printf("--unicore (-u) display unicore graphs only on the CPU screen\n");
      printf("--help (-h) this help text.\n");
      printf("--interface [interface] (-i) monitor network interface [interface] ie -i eth0\n");
      printf("--temperature [id] (-t) monitor temperatures sensor [id] ie -t 1\n\t[id] should point to sysfs path /sys/class/hwmon/hwmon[id]/device/temp1_input\n");
      printf("--global-temp [id] (-gt) force to show temperature [id] in place of the maximal one\n\ton the Summary Screen ie -gt 1\n\t[id] should point to sysfs path /sys/class/hwmon/hwmon../device/temp[id]_input\n");
      printf("--fan [id] (-f) monitor fans sensor [id] ie -f 1\n\t[id] should point to sysfs path /sys/class/hwmon/hwmon[id]/device/fan1_input\n");
      printf("--net-scale-absolute (-nsa) scale net graphs against maximum speed seen.\n\tDefault is to scale fullsize, similar to apps like gkrellm.\n");
      printf("--disable-freq (-df) disable monitoring CPUs frequencies.\n\n");
      return 0;
    }

    signed int return_value_strncmp$16;
    return_value_strncmp$16=strncmp(argv[(signed long int)i], "-i", (unsigned long int)2);
    if(return_value_strncmp$16 == 0)
      tmp_if_expr$18 = (_Bool)1;

    else
    {
      return_value_strncmp$17=strncmp(argv[(signed long int)i], "--interface", (unsigned long int)11);
      tmp_if_expr$18 = 0 == return_value_strncmp$17 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$18)
    {
      if(!(argv[(signed long int)(1 + i)] == ((char *)NULL)))
      {
        have_nic = (_Bool)1;
        i = i + 1;
        __builtin_strncpy((char *)interface, argv[(signed long int)i], (unsigned long int)128);
      }

    }

    signed int return_value_strncmp$19;
    return_value_strncmp$19=strncmp(argv[(signed long int)i], "-t", (unsigned long int)2);
    if(return_value_strncmp$19 == 0)
      tmp_if_expr$21 = (_Bool)1;

    else
    {
      return_value_strncmp$20=strncmp(argv[(signed long int)i], "--temperature", (unsigned long int)13);
      tmp_if_expr$21 = 0 == return_value_strncmp$20 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$21)
    {
      if(!(argv[(signed long int)(1 + i)] == ((char *)NULL)))
      {
        i = i + 1;
        sensor_temp_id=atoi(argv[(signed long int)i]);
        if(sensor_temp_id >= 4)
          sensor_temp_id = 0;

      }

    }

    signed int return_value_strncmp$22;
    return_value_strncmp$22=strncmp(argv[(signed long int)i], "-gt", (unsigned long int)3);
    if(return_value_strncmp$22 == 0)
      tmp_if_expr$24 = (_Bool)1;

    else
    {
      return_value_strncmp$23=strncmp(argv[(signed long int)i], "--global-temp", (unsigned long int)13);
      tmp_if_expr$24 = 0 == return_value_strncmp$23 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$24)
    {
      if(!(argv[(signed long int)(1 + i)] == ((char *)NULL)))
      {
        i = i + 1;
        sensor_temp_main=atoi(argv[(signed long int)i]);
      }

    }

    signed int return_value_strncmp$25;
    return_value_strncmp$25=strncmp(argv[(signed long int)i], "-f", (unsigned long int)2);
    if(return_value_strncmp$25 == 0)
      tmp_if_expr$27 = (_Bool)1;

    else
    {
      return_value_strncmp$26=strncmp(argv[(signed long int)i], "--fan", (unsigned long int)5);
      tmp_if_expr$27 = 0 == return_value_strncmp$26 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$27)
    {
      if(!(argv[(signed long int)(1 + i)] == ((char *)NULL)))
      {
        i = i + 1;
        sensor_fan_id=atoi(argv[(signed long int)i]);
        if(sensor_fan_id >= 4)
          sensor_fan_id = 0;

      }

    }

  }
  g15screen_fd=new_g15_screen(3);
  if(!(g15screen_fd >= 0))
  {
    printf("Sorry, cant connect to the G15daemon\n");
    return -1;
  }

  else
  {
    void *return_value_malloc$28;
    return_value_malloc$28=malloc(sizeof(struct g15canvas) /*1060ul*/ );
    canvas = (struct g15canvas *)return_value_malloc$28;
    if(go_daemon == 1)
      daemonise(0, 0);

    if(!(canvas == ((struct g15canvas *)NULL)))
      g15r_initCanvas(canvas);

    else
      return -1;
    glibtop_init();
    pthread_create(&keys_thread, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)keyboard_watch, (void *)0);
    if((signed int)have_nic == 1)
      pthread_create(&net_thread, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)network_watch, (void *)&interface);

    i = 0;
    for( ; !(i >= 4); i = i + 1)
    {
      sensor_lost_fan[(signed long int)i] = 1;
      sensor_lost_temp[(signed long int)i] = 1;
    }
    signed int cycle_old = cycle;
    while((_Bool)1)
    {
      calc_info_cycle();
      static char tmpstr[128l];
      switch(cycle)
      {
        case 0:

        case 1:

        case 2:
        {
          draw_cpu_screen_multicore(canvas, tmpstr, unicore);
          break;
        }
        case 3:
        {
          draw_mem_screen(canvas, tmpstr);
          break;
        }
        case 4:
        {
          draw_swap_screen(canvas, tmpstr);
          break;
        }
        case 5:

        case 6:

        case 7:

        case 8:
        {
          if(!(cycle_old == cycle) && cycle_old == 0 ^ !(cycle_old >= cycle))
            switch(cycle)
            {
              case 8:
              {
                if(!(have_fan == (_Bool)0))
                {
                  draw_g15_stats_info_screen(canvas, tmpstr, 1, 8);
                  if(have_fan != (_Bool)0)
                    break;

                }

                cycle = cycle - 1;
                info_cycle = cycle;
              }
              case 7:
              {
                if(!(have_temp == (_Bool)0))
                {
                  draw_g15_stats_info_screen(canvas, tmpstr, 1, 7);
                  if(have_temp != (_Bool)0)
                    break;

                }

                cycle = cycle - 1;
                info_cycle = cycle;
              }
              case 6:
              {
                if(!(have_bat == (_Bool)0))
                {
                  draw_bat_screen(canvas, tmpstr, 1);
                  if(have_bat != (_Bool)0)
                    break;

                }

                cycle = cycle - 1;
                info_cycle = cycle;
              }
              case 5:
              {
                if(!(have_nic == (_Bool)0))
                {
                  draw_net_screen(canvas, tmpstr, (char *)interface);
                  if(have_nic != (_Bool)0)
                    break;

                }

                cycle = cycle - 1;
                info_cycle = cycle;
              }
              case 4:
                draw_swap_screen(canvas, tmpstr);
            }

          else
            switch(cycle)
            {
              case 5:
              {
                if(!(have_nic == (_Bool)0))
                {
                  draw_net_screen(canvas, tmpstr, (char *)interface);
                  break;
                }

                cycle = cycle + 1;
                info_cycle = cycle;
              }
              case 6:
              {
                if(!(have_bat == (_Bool)0))
                {
                  draw_bat_screen(canvas, tmpstr, 1);
                  if(have_bat != (_Bool)0)
                    break;

                }

                cycle = cycle + 1;
                info_cycle = cycle;
              }
              case 7:
              {
                if(!(have_temp == (_Bool)0))
                {
                  draw_g15_stats_info_screen(canvas, tmpstr, 1, 7);
                  if(have_temp != (_Bool)0)
                    break;

                }

                cycle = cycle + 1;
                info_cycle = cycle;
              }
              case 8:
              {
                if(!(have_fan == (_Bool)0))
                {
                  draw_g15_stats_info_screen(canvas, tmpstr, 1, 8);
                  if(have_fan != (_Bool)0)
                    break;

                }

                cycle = cycle + 1;
                info_cycle = cycle;
              }
            }
          if(!(cycle >= 9))
            break;

        }
        default:
        {
          draw_cpu_screen_multicore(canvas, tmpstr, unicore);
          cycle = 0;
          info_cycle = cycle;
        }
      }
      cycle_old = cycle;
      print_info_label(canvas, tmpstr);
      canvas->mode_xor = 0;
      g15_send(g15screen_fd, (char *)canvas->buffer, (unsigned int)1048);
      g15stats_wait(1);
    }
    glibtop_close();
    close(g15screen_fd);
    free((void *)canvas);
    return 0;
  }
}

// maxi
// file g15stats.c line 112
unsigned long int maxi(unsigned long int a, unsigned long int b)
{
  if(!(b >= a))
    return a;

  else
    return b;
}

// network_watch
// file g15stats.c line 1563
void network_watch(void *iface)
{
  char *interface = (char *)iface;
  signed int i = 0;
  signed int j = 0;
  signed int max_in = 0;
  signed int max_out = 0;
  struct _glibtop_netload netload;
  signed int mac = 0;
  glibtop_get_netload(&netload, interface);
  i = 0;
  for( ; !(i >= 8); i = i + 1)
    mac = mac + (signed int)netload.hwaddress[(signed long int)i];
  if(mac == 0)
  {
    printf("Interface %s does not appear to exist. Net screen will be disabled.\n", interface);
    have_nic = (_Bool)0;
  }

  else
    while((_Bool)1)
    {
      j = 0;
      max_in = 0;
      max_out = 0;
      static unsigned long int previous_out;
      static unsigned long int previous_in;
      if(!(previous_in + previous_out == 0ul))
      {
        net_cur_in = netload.bytes_in - previous_in;
        net_cur_out = netload.bytes_out - previous_out;
        net_hist[(signed long int)i][(signed long int)0] = (unsigned int)net_cur_in;
        net_hist[(signed long int)i][(signed long int)1] = (unsigned int)net_cur_out;
        if((signed int)net_scale_absolute == 1)
        {
          net_max_in=maxi(net_max_in, net_cur_in);
          net_max_out=maxi(net_max_out, net_cur_out);
        }

        else
        {
          j = 0;
          for( ; !(j >= 107); j = j + 1)
          {
            unsigned long int return_value_maxi$1;
            return_value_maxi$1=maxi((unsigned long int)max_in, (unsigned long int)net_hist[(signed long int)j][(signed long int)0]);
            max_in = (signed int)return_value_maxi$1;
            unsigned long int return_value_maxi$2;
            return_value_maxi$2=maxi((unsigned long int)max_out, (unsigned long int)net_hist[(signed long int)j][(signed long int)1]);
            max_out = (signed int)return_value_maxi$2;
          }
          net_max_in = (unsigned long int)max_in;
          net_max_out = (unsigned long int)max_out;
        }
        net_rr_index = i;
        i = i + 1;
        if(i >= 108)
          i = 0;

      }

      previous_in = netload.bytes_in;
      previous_out = netload.bytes_out;
      sleep((unsigned int)1);
      glibtop_get_netload(&netload, interface);
    }
}

// print_freq_info
// file g15stats.c line 542
void print_freq_info(struct g15canvas *canvas, char *tmpstr)
{
  char proc[12l];
  signed int core;
  init_cpu_count();
  sprintf(tmpstr, "%s", (const void *)"");
  core = 0;
  for( ; !(core >= 6) && !(core >= ncpu); core = core + 1)
  {
    sprintf(proc, "C%d ", core);
    strcat(tmpstr, proc);
    if(!(ncpu >= 5))
    {
      signed int return_value_get_cpu_freq_cur$1;
      return_value_get_cpu_freq_cur$1=get_cpu_freq_cur(core);
      char *return_value_show_hertz$2;
      return_value_show_hertz$2=show_hertz(return_value_get_cpu_freq_cur$1);
      strcat(tmpstr, return_value_show_hertz$2);
    }

    else
    {
      signed int return_value_get_cpu_freq_cur$3;
      return_value_get_cpu_freq_cur$3=get_cpu_freq_cur(core);
      char *return_value_show_hertz_short$4;
      return_value_show_hertz_short$4=show_hertz_short(return_value_get_cpu_freq_cur$3);
      strcat(tmpstr, return_value_show_hertz_short$4);
    }
    if(!(1 + core >= ncpu))
      strcat(tmpstr, "|");

  }
  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(tmpstr);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)((unsigned long int)80 - (return_value_strlen$5 * (unsigned long int)4) / (unsigned long int)2), (unsigned int)37);
}

// print_info_label
// file g15stats.c line 1383
void print_info_label(struct g15canvas *canvas, char *tmpstr)
{
  switch(info_cycle)
  {
    case 0:
    {
      print_time_info(canvas, tmpstr);
      break;
    }
    case 1:
    {
      print_sys_load_info(canvas, tmpstr);
      break;
    }
    case 2:
    {
      print_freq_info(canvas, tmpstr);
      break;
    }
    case 3:
    {
      print_mem_info(canvas, tmpstr);
      break;
    }
    case 4:
    {
      print_swap_info(canvas, tmpstr);
      break;
    }
    case 5:
    {
      print_net_peak_info(canvas, tmpstr);
      break;
    }
    case 6:
    {
      if(!(cycle == 6))
        draw_bat_screen(canvas, tmpstr, 0);

      break;
    }
    case 7:
    {
      if(!(cycle == 7))
        draw_g15_stats_info_screen(canvas, tmpstr, 0, 7);

      break;
    }
    case 8:
    {
      if(!(cycle == 8))
        draw_g15_stats_info_screen(canvas, tmpstr, 0, 8);

      break;
    }
    case 9:
      print_net_current_info(canvas, tmpstr);
  }
}

// print_label
// file g15stats.c line 621
void print_label(struct g15canvas *canvas, char *tmpstr, signed int cur_shift)
{
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 1, (unsigned int)1, (unsigned int)(cur_shift + 1));
}

// print_mem_info
// file g15stats.c line 510
void print_mem_info(struct g15canvas *canvas, char *tmpstr)
{
  struct _glibtop_mem mem;
  glibtop_get_mem(&mem);
  sprintf(tmpstr, "Memory Used %dMB | Memory Total %dMB", (unsigned int)((mem.buffer + mem.cached + mem.user) / (unsigned long int)(1024 * 1024)), (unsigned int)(mem.total / (unsigned long int)(1024 * 1024)));
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(tmpstr);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)((unsigned long int)80 - (return_value_strlen$1 * (unsigned long int)4) / (unsigned long int)2), (unsigned int)37);
}

// print_net_current_info
// file g15stats.c line 534
void print_net_current_info(struct g15canvas *canvas, char *tmpstr)
{
  char *return_value_show_bytes$1;
  return_value_show_bytes$1=show_bytes(net_cur_in);
  sprintf(tmpstr, "Current IN %s/s|", return_value_show_bytes$1);
  strcat(tmpstr, "Current OUT ");
  char *return_value_show_bytes$2;
  return_value_show_bytes$2=show_bytes(net_cur_out);
  strcat(tmpstr, return_value_show_bytes$2);
  strcat(tmpstr, "/s");
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(tmpstr);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)((unsigned long int)80 - (return_value_strlen$3 * (unsigned long int)4) / (unsigned long int)2), (unsigned int)37);
}

// print_net_peak_info
// file g15stats.c line 526
void print_net_peak_info(struct g15canvas *canvas, char *tmpstr)
{
  char *return_value_show_bytes$1;
  return_value_show_bytes$1=show_bytes(net_max_in);
  sprintf(tmpstr, "Peak IN %s/s|", return_value_show_bytes$1);
  strcat(tmpstr, "Peak OUT ");
  char *return_value_show_bytes$2;
  return_value_show_bytes$2=show_bytes(net_max_out);
  strcat(tmpstr, return_value_show_bytes$2);
  strcat(tmpstr, "/s");
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(tmpstr);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)((unsigned long int)80 - (return_value_strlen$3 * (unsigned long int)4) / (unsigned long int)2), (unsigned int)37);
}

// print_swap_info
// file g15stats.c line 518
void print_swap_info(struct g15canvas *canvas, char *tmpstr)
{
  struct _glibtop_swap swap;
  glibtop_get_swap(&swap);
  sprintf(tmpstr, "Swap Used %dMB | Swap Avail. %dMB", (unsigned int)(swap.used / (unsigned long int)(1024 * 1024)), (unsigned int)(swap.total / (unsigned long int)(1024 * 1024)));
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(tmpstr);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)((unsigned long int)80 - (return_value_strlen$1 * (unsigned long int)4) / (unsigned long int)2), (unsigned int)37);
}

// print_sys_load_info
// file g15stats.c line 490
void print_sys_load_info(struct g15canvas *canvas, char *tmpstr)
{
  struct _glibtop_loadavg loadavg;
  struct _glibtop_uptime uptime;
  glibtop_get_loadavg(&loadavg);
  glibtop_get_uptime(&uptime);
  float minutes = (float)(uptime.uptime / (double)60);
  float hours = minutes / (float)60;
  float days = (float)0.0;
  if(hours > 24.000000f)
    days = (float)(signed int)(hours / (float)24);

  if(IEEE_FLOAT_NOTEQUAL(days, 0.000000f))
    hours = (float)(signed int)hours - days * (float)24;

  sprintf(tmpstr, "LoadAVG %.2f %.2f %.2f | Uptime %.fd%.fh", loadavg.loadavg[(signed long int)0], loadavg.loadavg[(signed long int)1], loadavg.loadavg[(signed long int)2], days, hours);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(tmpstr);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)((unsigned long int)80 - (return_value_strlen$1 * (unsigned long int)4) / (unsigned long int)2), (unsigned int)37);
}

// print_time_info
// file g15stats.c line 564
void print_time_info(struct g15canvas *canvas, char *tmpstr)
{
  signed long int now;
  time(&now);
  char *return_value_ctime$1;
  return_value_ctime$1=ctime(&now);
  sprintf(tmpstr, "%s", return_value_ctime$1);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(tmpstr);
  g15r_renderString(canvas, (unsigned char *)tmpstr, 0, 0, (unsigned int)((unsigned long int)80 - (return_value_strlen$2 * (unsigned long int)4) / (unsigned long int)2), (unsigned int)37);
}

// print_vert_label
// file g15stats.c line 210
void print_vert_label(struct g15canvas *canvas, char *label)
{
  print_vert_label_logic(canvas, label, (unsigned int)155);
}

// print_vert_label_logic
// file g15stats.c line 178
void print_vert_label_logic(struct g15canvas *canvas, char *label, unsigned int sx)
{
  signed int i;
  signed int len;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen((char *)label);
  len = (signed int)return_value_strlen$1;
  if(len >= 6)
    len = 5;

  signed int starty = 0;
  signed int incy = 0;
  switch(len)
  {
    case 6:
      break;
    case 5:
    {
      starty = 0;
      break;
    }
    case 4:
    {
      starty = 4;
      break;
    }
    case 3:
    {
      starty = 3;
      incy = 4;
      break;
    }
    default:
      goto __CPROVER_DUMP_L10;
  }
  char val[2l];
  i = 0;
  for( ; !(i >= len); i = i + 1)
  {
    memcpy((void *)val, (const void *)&label[(signed long int)i], (unsigned long int)1);
    val[(signed long int)1] = (char)0;
    g15r_renderString(canvas, (unsigned char *)val, i, 1, sx, (unsigned int)(starty + i * incy));
  }

__CPROVER_DUMP_L10:
  ;
}

// show_bytes
// file g15stats.c line 141
char * show_bytes(unsigned long int bytes)
{
  static char tmpstr[32l];
  if(bytes >= 1048576ul)
    format_float(tmpstr, "%2.1fMB", "%liMB", (float)bytes / (float)(1024 * 1024));

  else
    if(bytes >= 1024ul)
      format_float(tmpstr, "%2.1fkB", "%likB", (float)bytes / (float)1024);

    else
      sprintf(tmpstr, "%liB", bytes);
  return tmpstr;
}

// show_bytes_short
// file g15stats.c line 126
char * show_bytes_short(unsigned long int bytes)
{
  static char tmpstr[32l];
  if(bytes >= 1048576ul)
    format_float(tmpstr, "%4.1fM", "%4liM", (float)bytes / (float)(1024 * 1024));

  else
    if(bytes >= 1024ul)
      format_float(tmpstr, "%4.1fk", "%4lik", (float)bytes / (float)1024);

    else
      sprintf(tmpstr, "%4liB", bytes);
  return tmpstr;
}

// show_hertz
// file g15stats.c line 174
char * show_hertz(signed int hertz)
{
  char *return_value_show_hertz_logic$1;
  return_value_show_hertz_logic$1=show_hertz_logic(hertz, "Hz");
  return return_value_show_hertz_logic$1;
}

// show_hertz_logic
// file g15stats.c line 155
char * show_hertz_logic(signed int hertz, char *hz)
{
  static char tmpstr[32l];
  if(hertz >= 1000000)
    format_float(tmpstr, "%3.1fG", "%3.fG", (float)hertz / (float)1000000);

  else
    if(hertz >= 1000)
      format_float(tmpstr, "%3.1fM", "%3liM", (float)hertz / (float)1000);

    else
      sprintf(tmpstr, "%3iK", hertz);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen((char *)hz);
  if(return_value_strlen$1 >= 1ul)
    strcat(tmpstr, hz);

  return tmpstr;
}

// show_hertz_short
// file g15stats.c line 170
char * show_hertz_short(signed int hertz)
{
  char *return_value_show_hertz_logic$1;
  return_value_show_hertz_logic$1=show_hertz_logic(hertz, "");
  return return_value_show_hertz_logic$1;
}

