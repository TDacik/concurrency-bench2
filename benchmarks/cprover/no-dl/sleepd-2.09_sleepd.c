// tag-#anon#ST[ARR16{S64}_S64_'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_0;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_3;

// tag-#anon#ST[S32'tv_sec'||S32'tv_usec'|]
// file /usr/include/x86_64-linux-gnu/bits/utmp.h line 73
struct anonymous_2;

// tag-#anon#ST[SYM#tag-_GObject#'parent'||*{SYM#tag-_UpClientPrivate#}_SYM#tag-_UpClientPrivate#_'priv'|]
// file /usr/include/libupower-glib/up-client.h line 47
struct anonymous_1;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_4;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-_GData
// file /usr/include/glib-2.0/glib/gdataset.h line 36
struct _GData;

// tag-_GObject
// file /usr/include/glib-2.0/gobject/gobject.h line 187
struct _GObject;

// tag-_GPtrArray
// file /usr/include/glib-2.0/glib/garray.h line 39
struct _GPtrArray;

// tag-_GTypeClass
// file /usr/include/glib-2.0/gobject/gtype.h line 389
struct _GTypeClass;

// tag-_GTypeInstance
// file /usr/include/glib-2.0/gobject/gtype.h line 391
struct _GTypeInstance;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_UpClientPrivate
// file /usr/include/libupower-glib/up-client.h line 45
struct _UpClientPrivate;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-apm_info
// file apm.h line 4
struct apm_info;

// tag-context
// file upower.c line 16
struct context;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-event_data
// file eventmonitor.h line 2
struct event_data;

// tag-exit_status
// file /usr/include/x86_64-linux-gnu/bits/utmp.h line 50
struct exit_status;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-utmp
// file /usr/include/x86_64-linux-gnu/bits/utmp.h line 58
struct utmp;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// _acpi_compare_strings
// file acpi.c line 160
signed int _acpi_compare_strings(const void *a, const void *b);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// acpi_read
// file acpi.h line 20
signed int acpi_read(signed int battery, struct apm_info *info);
// acpi_supported
// file acpi.h line 18
signed int acpi_supported(void);
// atof
// file /usr/include/stdlib.h line 144
extern double atof(const char *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// check_irqs
// file sleepd.c line 293
signed int check_irqs(signed int activity, signed int autoprobe);
// check_net
// file sleepd.c line 345
signed int check_net(signed int activity);
// check_utmp
// file sleepd.c line 391
signed int check_utmp(signed int total_unused);
// cleanup
// file sleepd.c line 598
void cleanup(signed int signum);
// cleanupIE
// file eventmonitor.c line 66
void cleanupIE(void);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// daemon
// file /usr/include/unistd.h line 937
extern signed int daemon(signed int, signed int);
// eventMonitor
// file eventmonitor.h line 11
extern void * eventMonitor();
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// find_ac_adapters
// file acpi.c line 238
signed int find_ac_adapters(void);
// find_batteries
// file acpi.c line 228
signed int find_batteries(void);
// find_items
// file acpi.c line 169
signed int find_items(char *itemname, char (*infoarray)[128l], char (*statusarray)[128l]);
// flock
// file /usr/include/x86_64-linux-gnu/sys/file.h line 51
extern signed int flock(signed int, signed int);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// g_object_get
// file /usr/include/glib-2.0/gobject/gobject.h line 436
extern void g_object_get(void *, const char *, ...);
// g_ptr_array_foreach
// file /usr/include/glib-2.0/glib/garray.h line 182
extern void g_ptr_array_foreach(struct _GPtrArray *, void (*)(void *, void *), void *);
// g_ptr_array_free
// file /usr/include/glib-2.0/glib/garray.h line 139
extern void ** g_ptr_array_free(struct _GPtrArray *, signed int);
// g_ptr_array_unref
// file /usr/include/glib-2.0/glib/garray.h line 144
extern void g_ptr_array_unref(struct _GPtrArray *);
// g_type_check_instance_cast
// file /usr/include/glib-2.0/gobject/gtype.h line 2168
extern struct _GTypeInstance * g_type_check_instance_cast(struct _GTypeInstance *, unsigned long int);
// get_acpi_batt_capacity
// file acpi.c line 148
signed int get_acpi_batt_capacity(signed int battery);
// get_acpi_file
// file acpi.c line 63
inline char * get_acpi_file(const char *file);
// get_acpi_value
// file acpi.c line 140
char * get_acpi_value(const char *file, const char *key);
// get_devinfo
// file upower.c line 25
static void get_devinfo(void *device, void *result);
// getloadavg
// file /usr/include/stdlib.h line 950
extern signed int getloadavg(double *, signed int);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getutent
// file /usr/include/utmp.h line 62
extern struct utmp * getutent(void);
// idletime
// file sleepd.c line 286
signed int idletime(const char *tty);
// initializeIE
// file eventmonitor.c line 35
void initializeIE(void);
// loadcontrol
// file sleepd.c line 258
void loadcontrol(signed int signum);
// main_loop
// file sleepd.c line 426
void main_loop(void);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// on_ac_power
// file acpi.c line 253
signed int on_ac_power(void);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parse_command_line
// file sleepd.c line 75
void parse_command_line(signed int argc, char **argv);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_4 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_4 *, union anonymous *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// scan_acpi_num
// file acpi.c line 89
inline signed int scan_acpi_num(const char *buf, const char *key);
// scan_acpi_value
// file acpi.c line 112
inline char * scan_acpi_value(const char *buf, const char *key);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_0 *, struct anonymous_0 *, struct anonymous_0 *, struct timeval *);
// setutent
// file /usr/include/utmp.h line 65
extern void setutent(void);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strmcmp
// file acpi.c line 75
signed int strmcmp(const char *s1, const char *s2);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tolower
// file /usr/include/ctype.h line 124
extern signed int tolower(signed int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// up_client_get_devices
// file /usr/include/libupower-glib/up-client.h line 81
struct _GPtrArray * up_client_get_devices(struct anonymous_1 *);
// up_client_new
// file /usr/include/libupower-glib/up-client.h line 74
struct anonymous_1 * up_client_new(void);
// upower_read
// file upower.h line 2
signed int upower_read(signed int battery, struct apm_info *info);
// upower_supported
// file upower.h line 1
signed int upower_supported(void);
// usage
// file sleepd.c line 71
void usage();
// utmpname
// file /usr/include/utmp.h line 59
extern signed int utmpname(const char *);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writecontrol
// file sleepd.c line 272
void writecontrol(signed int value);

struct anonymous_0
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous_3
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

struct anonymous_2
{
  // tv_sec
  signed int tv_sec;
  // tv_usec
  signed int tv_usec;
};

struct _GTypeInstance
{
  // g_class
  struct _GTypeClass *g_class;
};

struct _GObject
{
  // g_type_instance
  struct _GTypeInstance g_type_instance;
  // ref_count
  volatile unsigned int ref_count;
  // qdata
  struct _GData *qdata;
};

struct anonymous_1
{
  // parent
  struct _GObject parent;
  // priv
  struct _UpClientPrivate *priv;
};

union anonymous_4
{
  // __data
  struct anonymous_3 __data;
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

struct _GPtrArray
{
  // pdata
  void **pdata;
  // len
  unsigned int len;
};

struct _GTypeClass
{
  // g_type
  unsigned long int g_type;
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

struct apm_info
{
  // driver_version
  char driver_version[10l];
  // apm_version_major
  signed int apm_version_major;
  // apm_version_minor
  signed int apm_version_minor;
  // apm_flags
  signed int apm_flags;
  // ac_line_status
  signed int ac_line_status;
  // battery_status
  signed int battery_status;
  // battery_flags
  signed int battery_flags;
  // battery_percentage
  signed int battery_percentage;
  // battery_time
  signed int battery_time;
  // using_minutes
  signed int using_minutes;
};

struct context
{
  // current
  signed int current;
  // needed
  signed int needed;
  // state
  unsigned int state;
  // percentage
  signed int percentage;
  // ac
  signed int ac;
  // time
  signed int time;
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

struct event_data
{
  // events
  char events[64l][128l];
  // channels
  signed int channels[64l];
  // emactivity
  signed int emactivity;
};

struct exit_status
{
  // e_termination
  signed short int e_termination;
  // e_exit
  signed short int e_exit;
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

struct utmp
{
  // ut_type
  signed short int ut_type;
  // ut_pid
  signed int ut_pid;
  // ut_line
  char ut_line[32l];
  // ut_id
  char ut_id[4l];
  // ut_user
  char ut_user[32l];
  // ut_host
  char ut_host[256l];
  // ut_exit
  struct exit_status ut_exit;
  // ut_session
  signed int ut_session;
  // ut_tv
  struct anonymous_2 ut_tv;
  // ut_addr_v6
  signed int ut_addr_v6[4l];
  // __glibc_reserved
  char __glibc_reserved[20l];
};


// ac_max_unused
// file sleepd.c line 42
signed int ac_max_unused = 0;
// acpi_ac_adapter_info
// file acpi.c line 33
char acpi_ac_adapter_info[8l][128l];
// acpi_ac_adapter_status
// file acpi.c line 34
char acpi_ac_adapter_status[8l][128l];
// acpi_ac_count
// file acpi.c line 32
signed int acpi_ac_count = 0;
// acpi_batt_capacity
// file acpi.c line 30
signed int acpi_batt_capacity[8l];
// acpi_batt_count
// file acpi.c line 24
signed int acpi_batt_count = 0;
// acpi_batt_info
// file acpi.c line 26
char acpi_batt_info[8l][128l];
// acpi_batt_status
// file acpi.c line 28
char acpi_batt_status[8l][128l];
// acpi_labels
// file acpi.c line 36
char *acpi_labels[13l] = { "uevent", "status", "Battery", "Mains", "POWER_SUPPLY_CAPACITY=", "POWER_SUPPLY_??????_FULL_DESIGN=", "POWER_SUPPLY_PRESENT=", "POWER_SUPPLY_??????_NOW=", "POWER_SUPPLY_CURRENT_NOW=", "POWER_SUPPLY_STATUS=", "POWER_SUPPLY_ONLINE=", "POWER_SUPPLY_??????_FULL=", (char *)(void *)0 };
// acpi_sleep_command
// file sleepd.c line 46
char *acpi_sleep_command = "pm-suspend";
// activity_mutex
// file eventmonitor.c line 31
union anonymous activity_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// autoprobe
// file sleepd.c line 38
signed int autoprobe = 1;
// condition_cond
// file eventmonitor.c line 33
union anonymous_4 condition_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// condition_mutex
// file eventmonitor.c line 32
union anonymous condition_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// daemonize
// file sleepd.c line 49
signed int daemonize = 1;
// debug
// file sleepd.c line 69
signed int debug = 0;
// eventData
// file eventmonitor.h line 9
struct event_data eventData;
// force_hal
// file sleepd.c line 60
signed int force_hal = 0;
// have_irqs
// file sleepd.c line 39
signed int have_irqs = 0;
// hibernate_command
// file sleepd.c line 48
char *hibernate_command = (char *)(void *)0;
// irqs
// file sleepd.c line 37
signed int irqs[255l];
// max_loadavg
// file sleepd.c line 62
double max_loadavg = (double)0;
// max_unused
// file sleepd.c line 41
signed int max_unused = 10 * 60;
// min_batt
// file sleepd.c line 52
signed int min_batt = -1;
// min_rx
// file sleepd.c line 66
signed int min_rx = 25;
// min_tx
// file sleepd.c line 65
signed int min_tx = 15;
// netdevrx
// file sleepd.c line 68
char netdevrx[8l][44l];
// netdevtx
// file sleepd.c line 67
char netdevtx[8l][44l];
// no_sleep
// file sleepd.c line 51
signed int no_sleep = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// require_unused_and_battery
// file sleepd.c line 61
signed int require_unused_and_battery = 0;
// sleep_command
// file sleepd.c line 47
char *sleep_command = (char *)(void *)0;
// sleep_time
// file sleepd.c line 50
signed int sleep_time = 10;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// up
// file upower.c line 14
static struct anonymous_1 *up;
// use_acpi
// file sleepd.c line 59
signed int use_acpi = 0;
// use_events
// file sleepd.c line 40
signed int use_events = 1;
// use_net
// file sleepd.c line 64
signed int use_net = 0;
// use_upower
// file sleepd.c line 57
signed int use_upower = 0;
// use_utmp
// file sleepd.c line 63
signed int use_utmp = 0;

// _acpi_compare_strings
// file acpi.c line 160
signed int _acpi_compare_strings(const void *a, const void *b)
{
  const char **pa = (const char **)a;
  const char **pb = (const char **)b;
  signed int return_value_strcasecmp_1;
  return_value_strcasecmp_1=strcasecmp((const char *)*pa, (const char *)*pb);
  return return_value_strcasecmp_1;
}

// acpi_read
// file acpi.h line 20
signed int acpi_read(signed int battery, struct apm_info *info)
{
  char *buf;
  char *state;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  if(acpi_batt_count == 0)
  {
    info->battery_percentage = 0;
    info->battery_time = 0;
    info->battery_status = 4;
    acpi_batt_capacity[(signed long int)battery] = 0;
    info->ac_line_status = 1;
    return 0;
  }

  else
  {
    battery = battery - 1;
    buf=get_acpi_file(acpi_batt_info[(signed long int)battery]);
    if(buf == ((char *)NULL))
    {
      fprintf(stderr, "unable to read %s\n", (const void *)acpi_batt_info[(signed long int)battery]);
      perror("read");
      exit(1);
    }

    info->ac_line_status = 0;
    info->battery_flags = 0;
    info->using_minutes = 1;
    char *return_value_scan_acpi_value_4;
    return_value_scan_acpi_value_4=scan_acpi_value(buf, acpi_labels[(signed long int)6]);
    signed int return_value_strcmp_5;
    return_value_strcmp_5=strcmp(return_value_scan_acpi_value_4, "1");
    if(return_value_strcmp_5 == 0)
    {
      signed int pcap;
      pcap=scan_acpi_num(buf, acpi_labels[(signed long int)7]);
      signed int rate;
      rate=scan_acpi_num(buf, acpi_labels[(signed long int)8]);
      if(!(rate == 0))
        info->battery_time = (signed int)(((float)pcap / (float)rate) * (float)60);

      else
      {
        char *rate_s;
        rate_s=scan_acpi_value(buf, acpi_labels[(signed long int)8]);
        if(rate_s == ((char *)NULL))
          info->battery_time = 0;

        else
          info->battery_time = -1;
      }
      state=scan_acpi_value(buf, acpi_labels[(signed long int)9]);
      if(!(state == ((char *)NULL)))
      {
        if((signed int)*state == 68)
        {
          info->battery_status = 3;
          info->ac_line_status=on_ac_power();
        }

        else
        {
          if((signed int)*state == 67)
            tmp_if_expr_2 = (signed int)state[(signed long int)1] == 104 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_2 = (_Bool)0;
          if(tmp_if_expr_2)
          {
            info->battery_status = 3;
            info->ac_line_status = 1;
            info->battery_flags = info->battery_flags | 0x8;
            if(!(rate == 0))
              info->battery_time = (signed int)((((float)-1 * (float)(acpi_batt_capacity[(signed long int)battery] - pcap)) / (float)rate) * (float)60);

            else
              info->battery_time = 0;
            signed int return_value_abs_1;
            return_value_abs_1=abs(info->battery_time);
            if((double)return_value_abs_1 < 0.5)
              info->battery_time = 0;

          }

          else
            if((signed int)*state == 70)
            {
              info->battery_status = 0;
              info->ac_line_status = 1;
            }

            else
              if((signed int)*state == 67)
              {
                info->battery_status = 2;
                info->ac_line_status=on_ac_power();
              }

              else
                if((signed int)*state == 85)
                {
                  info->ac_line_status=on_ac_power();
                  signed int current;
                  current=scan_acpi_num(buf, acpi_labels[(signed long int)8]);
                  if(!(info->ac_line_status == 0))
                  {
                    if(current == 0)
                      info->battery_status = 0;

                    else
                      info->battery_status = 3;
                  }

                  else
                    info->battery_status = 3;
                }

                else
                  fprintf(stderr, "unknown battery state: %s\n", state);
        }
      }

      else
        info->battery_status = 4;
      if(acpi_batt_capacity[(signed long int)battery] == 0)
        acpi_batt_capacity[(signed long int)battery]=get_acpi_batt_capacity(battery);

      else
        if(!(acpi_batt_capacity[(signed long int)battery] >= pcap))
          find_batteries();

      if(!(pcap == 0))
        tmp_if_expr_3 = acpi_batt_capacity[(signed long int)battery] != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
      {
        info->battery_percentage = (signed int)(((signed long int)100 * (signed long int)pcap) / (signed long int)acpi_batt_capacity[(signed long int)battery]);
        if(info->battery_percentage >= 101)
          info->battery_percentage = 100;

      }

      else
        info->battery_percentage = -1;
    }

    else
    {
      info->battery_percentage = 0;
      info->battery_time = 0;
      info->battery_status = 4;
      acpi_batt_capacity[(signed long int)battery] = 0;
      if(acpi_batt_count == 0)
        info->ac_line_status = 1;

      else
        info->ac_line_status=on_ac_power();
    }
    return 0;
  }
}

// acpi_supported
// file acpi.h line 18
signed int acpi_supported(void)
{
  char *version;
  struct __dirstream *dir;
  signed int num;
  dir=opendir("/sys/class/power_supply");
  if(dir == ((struct __dirstream *)NULL))
    return 0;

  else
  {
    closedir(dir);
    version=get_acpi_file("/sys/module/acpi/parameters/acpica_version");
    if(version == ((char *)NULL))
      return 0;

    else
    {
      num=atoi(version);
      if(!(num >= 20011018))
      {
        fprintf(stderr, "ACPI subsystem %s too is old, consider upgrading to %i.\n", version, 20011018);
        return 0;
      }

      else
      {
        find_batteries();
        find_ac_adapters();
        return 1;
      }
    }
  }
}

// check_irqs
// file sleepd.c line 293
signed int check_irqs(signed int activity, signed int autoprobe)
{
  struct _IO_FILE *f;
  char line[64l];
  signed int i;
  f=fopen("/proc/interrupts", "r");
  if(f == ((struct _IO_FILE *)NULL))
  {
    perror("/proc/interrupts");
    exit(1);
  }

  char *return_value_fgets_1;
  signed int return_value_tolower_2;
  _Bool tmp_if_expr_5;
  char *return_value_strstr_4;
  _Bool tmp_if_expr_7;
  char *return_value_strstr_6;
  _Bool tmp_if_expr_8;
  static signed int probed = 0;
  do
  {
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [64l]) /*64ul*/ , f);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    signed long int v;
    signed int do_this_one = 0;
    if(!(autoprobe == 0))
    {
      i = 0;
      for( ; !(line[(signed long int)i] == 0); i = i + 1)
      {
        return_value_tolower_2=tolower((signed int)line[(signed long int)i]);
        line[(signed long int)i] = (char)return_value_tolower_2;
      }
      char *return_value_strstr_3;
      return_value_strstr_3=strstr(line, "mouse");
      if(!(return_value_strstr_3 == ((char *)NULL)))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_strstr_4=strstr(line, "keyboard");
        tmp_if_expr_5 = return_value_strstr_4 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        tmp_if_expr_7 = (_Bool)1;

      else
      {
        return_value_strstr_6=strstr(line, "i8042");
        tmp_if_expr_7 = return_value_strstr_6 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_7)
      {
        do_this_one = 1;
        probed = 1;
      }

    }

    signed int return_value_sscanf_9;
    return_value_sscanf_9=sscanf(line, "%d: %ld", &i, &v);
    if(return_value_sscanf_9 == 2)
    {
      if(!(i >= 255))
      {
        if(!(do_this_one == 0))
          tmp_if_expr_8 = (_Bool)1;

        else
          tmp_if_expr_8 = irqs[(signed long int)i] != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_8)
        {
          static signed long int irq_count[255l];
          if(!(irq_count[(signed long int)i] == v))
          {
            if(!(debug == 0))
              printf("sleepd: activity: irq %d\n", i);

            activity = 1;
            irq_count[(signed long int)i] = v;
          }

        }

      }

    }

  }
  while((_Bool)1);
  fclose(f);
  if(probed == 0 && !(autoprobe == 0))
  {
    static signed int no_dev_warned = 0;
    if(no_dev_warned == 0)
    {
      no_dev_warned = 1;
      syslog(4, "no keyboard or mouse irqs autoprobed");
    }

  }

  return activity;
}

// check_net
// file sleepd.c line 345
signed int check_net(signed int activity)
{
  signed long int tx;
  signed long int rx;
  signed int i = 0;
  _Bool tmp_if_expr_3;
  for( ; !(i >= 8); i = i + 1)
  {
    signed int return_value_strncmp_4;
    return_value_strncmp_4=strncmp(netdevtx[(signed long int)i], "", (unsigned long int)1);
    if(!(return_value_strncmp_4 == 0))
    {
      char line[64l];
      struct _IO_FILE *f;
      f=fopen(netdevtx[(signed long int)i], "r");
      char *return_value_fgets_1;
      return_value_fgets_1=fgets(line, (signed int)sizeof(char [64l]) /*64ul*/ , f);
      if(!(return_value_fgets_1 == ((char *)NULL)))
        tx=strtol(line, (char **)(void *)0, 10);

      else
      {
        fprintf(stderr, "sleepd: could not read %s\n", (const void *)netdevtx[(signed long int)i]);
        exit(1);
      }
      fclose(f);
      f=fopen(netdevrx[(signed long int)i], "r");
      char *return_value_fgets_2;
      return_value_fgets_2=fgets(line, (signed int)sizeof(char [64l]) /*64ul*/ , f);
      if(!(return_value_fgets_2 == ((char *)NULL)))
        rx=strtol(line, (char **)(void *)0, 10);

      else
      {
        fprintf(stderr, "sleepd: could not read %s\n", (const void *)netdevrx[(signed long int)i]);
        exit(1);
      }
      fclose(f);
      static signed long int rx_count[8l];
      static signed long int tx_count[8l];
      if(!((signed long int)min_tx >= (tx + -tx_count[(signed long int)i]) / (signed long int)sleep_time))
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (rx - rx_count[(signed long int)i]) / (signed long int)sleep_time > (signed long int)min_rx ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
      {
        if(!(debug == 0))
          printf("sleepd: activity: network txrate: %ld rxrate: %ld\n", (tx - tx_count[(signed long int)i]) / (signed long int)sleep_time, (rx - rx_count[(signed long int)i]) / (signed long int)sleep_time);

        activity = 1;
      }

      tx_count[(signed long int)i] = tx;
      rx_count[(signed long int)i] = rx;
    }

    else
      break;
  }
  return activity;
}

// check_utmp
// file sleepd.c line 391
signed int check_utmp(signed int total_unused)
{
  struct utmp *u;
  signed int min_idle = 2 * max_unused;
  utmpname("/var/run/utmp");
  setutent();
  _Bool tmp_if_expr_2;
  do
  {
    u=getutent();
    if(u == ((struct utmp *)NULL))
      break;

    if((signed int)u->ut_type == 7)
    {
      char tty[38l] = { '/', 'd', 'e', 'v', '/', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
      signed int i = 0;
      for( ; !((unsigned long int)i >= sizeof(char [32l]) /*32ul*/ ); i = i + 1)
      {
        const unsigned short int **return_value___ctype_b_loc_1;
        return_value___ctype_b_loc_1=__ctype_b_loc();
        if(!((8 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)u->ut_line[(signed long int)i]]) == 0))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = (signed int)u->ut_line[(signed long int)i] == 47 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
          tty[(signed long int)(i + 5)] = u->ut_line[(signed long int)i];

        else
          tty[(signed long int)(i + 5)] = (char)0;
      }
      signed int cur_idle;
      cur_idle=idletime(tty);
      min_idle = cur_idle < min_idle ? cur_idle : min_idle;
    }

  }
  while((_Bool)1);
  total_unused = min_idle < total_unused ? min_idle : total_unused;
  if(total_unused == min_idle && !(debug == 0))
    printf("sleepd: activity: utmp %d seconds\n", min_idle);

  return total_unused;
}

// cleanup
// file sleepd.c line 598
void cleanup(signed int signum)
{
  if(!(daemonize == 0))
    unlink("/var/run/sleepd.pid");

  exit(0);
}

// cleanupIE
// file eventmonitor.c line 66
void cleanupIE(void)
{
  signed int i = 0;
  for( ; !(eventData.channels[(signed long int)i] == -1); i = i + 1)
    close(eventData.channels[(signed long int)i]);
}

// eventMonitor
// file eventmonitor.h line 11
extern void * eventMonitor()
{
  signed int i;
  signed int maxfd = 0;
  signed int retval;
  struct anonymous_0 eventWatch;
  while((_Bool)1)
  {
    initializeIE();
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_0) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&eventWatch)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    i = 0;
    for( ; !(eventData.channels[(signed long int)i] == -1); i = i + 1)
    {
      (&eventWatch)->__fds_bits[(signed long int)(eventData.channels[(signed long int)i] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&eventWatch)->__fds_bits[(signed long int)(eventData.channels[(signed long int)i] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << eventData.channels[(signed long int)i] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      if(!(maxfd >= eventData.channels[(signed long int)i]))
        maxfd = eventData.channels[(signed long int)i];

    }
    maxfd = maxfd + 1;
    pthread_mutex_lock(&condition_mutex);
    pthread_cond_wait(&condition_cond, &condition_mutex);
    pthread_mutex_unlock(&condition_mutex);
    pthread_mutex_lock(&activity_mutex);
    eventData.emactivity = 0;
    pthread_mutex_unlock(&activity_mutex);
    retval=select(maxfd, &eventWatch, (struct anonymous_0 *)(void *)0, (struct anonymous_0 *)(void *)0, (struct timeval *)(void *)0);
    if(retval >= 1)
    {
      pthread_mutex_lock(&activity_mutex);
      eventData.emactivity = 1;
      pthread_mutex_unlock(&activity_mutex);
    }

    cleanupIE();
  }
  pthread_exit((void *)0);
}

// find_ac_adapters
// file acpi.c line 238
signed int find_ac_adapters(void)
{
  acpi_ac_count=find_items(acpi_labels[(signed long int)3], acpi_ac_adapter_info, acpi_ac_adapter_status);
  return acpi_ac_count;
}

// find_batteries
// file acpi.c line 228
signed int find_batteries(void)
{
  signed int i;
  acpi_batt_count=find_items(acpi_labels[(signed long int)2], acpi_batt_info, acpi_batt_status);
  i = 0;
  for( ; !(i >= acpi_batt_count); i = i + 1)
    acpi_batt_capacity[(signed long int)i]=get_acpi_batt_capacity(i);
  return acpi_batt_count;
}

// find_items
// file acpi.c line 169
signed int find_items(char *itemname, char (*infoarray)[128l], char (*statusarray)[128l])
{
  struct __dirstream *dir;
  struct dirent *ent;
  signed int num_devices = 0;
  signed int i;
  char **devices;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)8 * sizeof(char *) /*8ul*/ );
  devices = (char **)return_value_malloc_1;
  char pathname[128l];
  sprintf(pathname, "/sys/class/power_supply");
  dir=opendir(pathname);
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  if(dir == ((struct __dirstream *)NULL))
  {
    free((void *)devices);
    return 0;
  }

  else
  {
    do
    {
      ent=readdir(dir);
      if(ent == ((struct dirent *)NULL))
        break;

      char filename[128l];
      char buf[1024l];
      signed int return_value_strcmp_2;
      return_value_strcmp_2=strcmp(".", ent->d_name);
      if(return_value_strcmp_2 == 0)
        tmp_if_expr_4 = (_Bool)1;

      else
      {
        return_value_strcmp_3=strcmp("..", ent->d_name);
        tmp_if_expr_4 = !(return_value_strcmp_3 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_4)
      {
        snprintf(filename, sizeof(char [128l]) /*128ul*/ , "/sys/class/power_supply/%s/type", (const void *)ent->d_name);
        signed int fd;
        fd=open(filename, 00);
        if(!(fd == -1))
        {
          signed int end;
          signed long int return_value_read_5;
          return_value_read_5=read(fd, (void *)buf, sizeof(char [1024l]) /*1024ul*/ );
          end = (signed int)return_value_read_5;
          buf[(signed long int)(end - 1)] = (char)0;
          close(fd);
          char *return_value_strstr_6;
          return_value_strstr_6=strstr(buf, itemname);
          if(!(return_value_strstr_6 == buf))
            continue;

        }

        devices[(signed long int)num_devices]=strdup(ent->d_name);
        num_devices = num_devices + 1;
        if(num_devices >= 8)
          break;

      }

    }
    while((_Bool)1);
    closedir(dir);
    qsort((void *)devices, (unsigned long int)num_devices, sizeof(char *) /*8ul*/ , _acpi_compare_strings);
    i = 0;
    for( ; !(i >= num_devices); i = i + 1)
    {
      snprintf(infoarray[(signed long int)i], sizeof(char [128l]) /*128ul*/ , "/sys/class/power_supply/%s/%s", devices[(signed long int)i], acpi_labels[(signed long int)0]);
      snprintf(statusarray[(signed long int)i], sizeof(char [128l]) /*128ul*/ , "/sys/class/power_supply/%s/%s", devices[(signed long int)i], acpi_labels[(signed long int)1]);
      free((void *)devices[(signed long int)i]);
    }
    free((void *)devices);
    return num_devices;
  }
}

// get_acpi_batt_capacity
// file acpi.c line 148
signed int get_acpi_batt_capacity(signed int battery)
{
  char *s;
  s=get_acpi_value(acpi_batt_info[(signed long int)battery], acpi_labels[(signed long int)11]);
  if(s == ((char *)NULL))
    return 0;

  else
  {
    signed int return_value_atoi_1;
    return_value_atoi_1=atoi(s);
    return return_value_atoi_1;
  }
}

// get_acpi_file
// file acpi.c line 63
inline char * get_acpi_file(const char *file)
{
  signed int fd;
  signed int end;
  fd=open(file, 00);
  if(fd == -1)
    return (char *)(void *)0;

  else
  {
    signed long int return_value_read_1;
    static char buf[1024l];
    return_value_read_1=read(fd, (void *)buf, sizeof(char [1024l]) /*1024ul*/ );
    end = (signed int)return_value_read_1;
    buf[(signed long int)(end - 1)] = (char)0;
    close(fd);
    return buf;
  }
}

// get_acpi_value
// file acpi.c line 140
char * get_acpi_value(const char *file, const char *key)
{
  char *buf;
  buf=get_acpi_file(file);
  if(buf == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    char *return_value_scan_acpi_value_1;
    return_value_scan_acpi_value_1=scan_acpi_value(buf, key);
    return return_value_scan_acpi_value_1;
  }
}

// get_devinfo
// file upower.c line 25
static void get_devinfo(void *device, void *result)
{
  signed int online;
  double percentage;
  unsigned int state;
  unsigned int kind;
  signed long int time_to_empty;
  signed long int time_to_full;
  struct context *ctx = (struct context *)result;
  struct _GTypeInstance *return_value_g_type_check_instance_cast_1;
  return_value_g_type_check_instance_cast_1=g_type_check_instance_cast((struct _GTypeInstance *)device, (unsigned long int)(20 << 2));
  g_object_get((void *)(struct _GObject *)return_value_g_type_check_instance_cast_1, "percentage", &percentage, (const void *)"online", &online, (const void *)"state", &state, (const void *)"kind", &kind, (const void *)"time-to-empty", &time_to_empty, (const void *)"time-to-full", &time_to_full, (void *)0);
  if(kind == 2u)
  {
    if(ctx->current == ctx->needed)
    {
      ctx->percentage = (signed int)percentage;
      ctx->state = state;
      if(!(time_to_empty == 0l))
        ctx->time = (signed int)time_to_empty;

      else
        ctx->time = (signed int)-time_to_full;
    }

    ctx->current = ctx->current + 1;
  }

  else
    if(kind == 1u)
      ctx->ac = ctx->ac | online;

}

// idletime
// file sleepd.c line 286
signed int idletime(const char *tty)
{
  struct stat sbuf;
  signed int return_value_stat_1;
  return_value_stat_1=stat(tty, &sbuf);
  if(!(return_value_stat_1 == 0))
    return 0;

  else
  {
    signed long int return_value_time_2;
    return_value_time_2=time((signed long int *)(void *)0);
    return (signed int)(return_value_time_2 - sbuf.st_atim.tv_sec);
  }
}

// initializeIE
// file eventmonitor.c line 35
void initializeIE(void)
{
  signed int j = 0;
  signed int i;
  signed int tmpfd;
  signed int return_value_strncmp_1;
  return_value_strncmp_1=strncmp(eventData.events[(signed long int)0], "", (unsigned long int)1);
  if(return_value_strncmp_1 == 0)
  {
    signed int result;
    i = 0;
    for( ; !(i >= 64); i = i + 1)
    {
      char devName[128l];
      snprintf(devName, (unsigned long int)127, "/dev/input/event%d", i);
      result=access(devName, 4);
      if(result == 0)
      {
        strncpy(eventData.events[(signed long int)j], devName, (unsigned long int)127);
        j = j + 1;
      }

    }
    strncpy(eventData.events[(signed long int)j], "", (unsigned long int)1);
  }

  i = 0;
  j = 0;
  signed int return_value_strncmp_2;
  do
  {
    return_value_strncmp_2=strncmp(eventData.events[(signed long int)i], "", (unsigned long int)1);
    if(return_value_strncmp_2 == 0)
      break;

    tmpfd=open(eventData.events[(signed long int)i], 00);
    if(!(tmpfd == -1))
    {
      eventData.channels[(signed long int)j] = tmpfd;
      j = j + 1;
    }

    i = i + 1;
  }
  while((_Bool)1);
  eventData.channels[(signed long int)j] = -1;
}

// loadcontrol
// file sleepd.c line 258
void loadcontrol(signed int signum)
{
  signed int f;
  char buf[8l];
  f=open("/var/run/sleepd.ctl", 00);
  _Bool tmp_if_expr_2;
  signed int return_value_flock_1;
  if(f == -1)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_flock_1=flock(f, 1);
    tmp_if_expr_2 = return_value_flock_1 == -1 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_4;
  signed long int return_value_read_3;
  if(tmp_if_expr_2)
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_read_3=read(f, (void *)buf, (unsigned long int)7);
    tmp_if_expr_4 = return_value_read_3 == (signed long int)-1 ? (_Bool)1 : (_Bool)0;
  }
  if(!tmp_if_expr_4)
  {
    no_sleep=atoi(buf);
    close(f);
    signal(1, loadcontrol);
  }

}

// main
// file sleepd.c line 604
signed int main(signed int argc, char **argv)
{
  struct _IO_FILE *f;
  parse_command_line(argc, argv);
  openlog("sleepd", 0x01 | (daemonize != 0 ? 0 : 0x20), 3 << 3);
  signal(15, cleanup);
  signal(1, loadcontrol);
  loadcontrol(0);
  if(use_events == 0)
  {
    if(autoprobe == 0 && have_irqs == 0)
    {
      fprintf(stderr, "No irqs specified.\n");
      exit(1);
    }

  }

  if(!(daemonize == 0))
  {
    signed int return_value_daemon_1;
    return_value_daemon_1=daemon(0, 0);
    if(return_value_daemon_1 == -1)
    {
      perror("daemon");
      exit(1);
    }

    f=fopen("/var/run/sleepd.pid", "w");
    if(f == ((struct _IO_FILE *)NULL))
    {
      syslog(3, "unable to write %s", (const void *)"/var/run/sleepd.pid");
      exit(1);
    }

    else
    {
      signed int return_value_getpid_2;
      return_value_getpid_2=getpid();
      fprintf(f, "%i\n", return_value_getpid_2);
      fclose(f);
    }
  }

  _Bool tmp_if_expr_5;
  signed int return_value_acpi_supported_4;
  signed int return_value_upower_supported_3;
  if(sleep_command == ((char *)NULL))
    sleep_command = acpi_sleep_command;

  if(force_hal == 0)
  {
    return_value_acpi_supported_4=acpi_supported();
    tmp_if_expr_5 = return_value_acpi_supported_4 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  if((acpi_ac_count >= 1 || acpi_batt_count >= 1) && tmp_if_expr_5)
    use_acpi = 1;

  else
  {
    return_value_upower_supported_3=upower_supported();
    if(!(return_value_upower_supported_3 == 0))
      use_upower = 1;

    else
      syslog(5, "failed to connect to upower");
  }
  if(sleep_command == ((char *)NULL))
    sleep_command = acpi_sleep_command;

  if(hibernate_command == ((char *)NULL))
    hibernate_command = sleep_command;

  main_loop();
  return 0;
}

// main_loop
// file sleepd.c line 426
void main_loop(void)
{
  signed int activity = 0;
  signed int sleep_now = 0;
  signed int total_unused = 0;
  signed int sleep_battery = 0;
  signed int prev_ac_line_status = -1;
  signed long int nowtime;
  signed long int oldtime = (signed long int)0;
  struct apm_info ai;
  double loadavg[1l];
  if(!(use_events == 0))
  {
    unsigned long int emthread;
    pthread_create(&emthread, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))eventMonitor, (void *)0);
  }

  signed int return_value_abs_1;
  signed int return_value_abs_2;
  signed int return_value_getloadavg_4;
  while((_Bool)1)
  {
    activity = 0;
    if(!(use_events == 0))
    {
      pthread_mutex_lock(&condition_mutex);
      pthread_cond_signal(&condition_cond);
      pthread_mutex_unlock(&condition_mutex);
    }

    if(!(use_acpi == 0))
      acpi_read(1, &ai);

    else
      if(!(use_upower == 0))
        upower_read(1, &ai);

      else
      {
        syslog(2, "APM support is disabled, no other methods available. Abort.");
        abort();
      }
    if(!(debug == 0))
    {
      return_value_abs_1=abs(ai.battery_time);
      return_value_abs_2=abs(ai.battery_time);
      printf("sleepd: battery level: %d%%, remaining time: %c%d:%02d\n", ai.battery_percentage, ai.battery_time < 0 ? 45 : 32, return_value_abs_1 / 3600, (return_value_abs_2 / 60) % 60);
    }

    if(!(ai.ac_line_status == 1) && !(ai.battery_percentage == -1) && !(ai.battery_status == 4) && !(min_batt == -1) && !(ai.battery_percentage >= min_batt))
      sleep_battery = 1;

    if(require_unused_and_battery == 0 && !(sleep_battery == 0))
    {
      syslog(5, "battery level %d%% is below %d%%; forcing hibernation", ai.battery_percentage, min_batt);
      signed int return_value_system_3;
      return_value_system_3=system(hibernate_command);
      if(!(return_value_system_3 == 0))
        syslog(3, "%s failed", hibernate_command);

      if(!(debug == 0))
        printf("sleepd: activity: just woke up\n");

      activity = 1;
      oldtime = (signed long int)0;
      sleep_battery = 0;
    }

    if(!(ai.ac_line_status == prev_ac_line_status) && !(prev_ac_line_status == -1))
    {
      if(!(debug == 0))
        printf("sleepd: activity: AC status change\n");

      activity = 1;
    }

    prev_ac_line_status = ai.ac_line_status;
    if(ac_max_unused == 0 && max_unused == 0)
      sleep((unsigned int)sleep_time);

    else
    {
      if(!(autoprobe == 0) || !(have_irqs == 0))
        activity=check_irqs(activity, autoprobe);

      if(!(use_net == 0))
        activity=check_net(activity);

      if(IEEE_FLOAT_NOTEQUAL(max_loadavg, 0.000000))
      {
        return_value_getloadavg_4=getloadavg(loadavg, 1);
        if(return_value_getloadavg_4 == 1)
        {
          if(loadavg[0l] >= max_loadavg)
          {
            if(!(debug == 0))
              printf("sleepd: activity: load average %f\n", loadavg[(signed long int)0]);

            activity = 1;
          }

        }

      }

      if(use_utmp == 1)
        total_unused=check_utmp(total_unused);

      sleep((unsigned int)sleep_time);
      if(!(use_events == 0))
      {
        pthread_mutex_lock(&activity_mutex);
        if(eventData.emactivity == 1)
        {
          if(!(debug == 0))
            printf("sleepd: activity: keyboard/mouse events\n");

          activity = 1;
        }

        pthread_mutex_unlock(&activity_mutex);
      }

      if(!(activity == 0))
        total_unused = 0;

      else
      {
        total_unused = total_unused + sleep_time;
        if(ai.ac_line_status == 1)
        {
          if(ac_max_unused >= 1)
            sleep_now = (signed int)(total_unused >= ac_max_unused);

        }

        else
          if(max_unused >= 1)
            sleep_now = (signed int)(total_unused >= max_unused);

        if(no_sleep == 0 && require_unused_and_battery == 0 && !(sleep_now == 0))
        {
          syslog(5, "system inactive for %ds; forcing sleep", total_unused);
          signed int return_value_system_5;
          return_value_system_5=system(sleep_command);
          if(!(return_value_system_5 == 0))
            syslog(3, "%s failed", sleep_command);

          total_unused = 0;
          oldtime = (signed long int)0;
          sleep_now = 0;
        }

        else
          if(no_sleep == 0 && !(sleep_battery == 0) && !(sleep_now == 0))
          {
            syslog(5, "system inactive for %ds and battery level %d%% is below %d%%; forcing hibernaton", total_unused, ai.battery_percentage, min_batt);
            signed int return_value_system_6;
            return_value_system_6=system(hibernate_command);
            if(!(return_value_system_6 == 0))
              syslog(3, "%s failed", hibernate_command);

            total_unused = 0;
            oldtime = (signed long int)0;
            sleep_now = 0;
            sleep_battery = 0;
          }

      }
      nowtime=time((signed long int *)(void *)0);
      if(!(oldtime == 0l) && !(1l + oldtime >= nowtime + -((signed long int)sleep_time)))
      {
        no_sleep = 0;
        writecontrol(no_sleep);
        syslog(5, "%i sec sleep; resetting timer", (signed int)(nowtime - oldtime));
        total_unused = 0;
      }

      oldtime = nowtime;
    }
  }
}

// on_ac_power
// file acpi.c line 253
signed int on_ac_power(void)
{
  signed int i = 0;
  _Bool tmp_if_expr_2;
  signed int return_value_atoi_1;
  if(!(i >= acpi_ac_count))
  {
    char *online;
    online=get_acpi_value(acpi_ac_adapter_info[(signed long int)i], acpi_labels[(signed long int)10]);
    if(!(online == ((char *)NULL)))
    {
      return_value_atoi_1=atoi(online);
      tmp_if_expr_2 = return_value_atoi_1 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      return 1;

    else
      return 0;
    i = i + 1;
  }

  return 0;
}

// parse_command_line
// file sleepd.c line 75
void parse_command_line(signed int argc, char **argv)
{
  struct option long_options[23l] = { { .name="nodaemon", .has_arg=0, .flag=(signed int *)(void *)0, .val=110 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="unused", .has_arg=1, .flag=(signed int *)(void *)0, .val=117 },
    { .name="ac-unused", .has_arg=1, .flag=(signed int *)(void *)0, .val=85 },
    { .name="load", .has_arg=1, .flag=(signed int *)(void *)0, .val=108 },
    { .name="utmp", .has_arg=0, .flag=(signed int *)(void *)0, .val=119 },
    { .name="no-irq", .has_arg=0, .flag=(signed int *)(void *)0, .val=73 },
    { .name="irq", .has_arg=1, .flag=(signed int *)(void *)0, .val=105 },
    { .name="no-events", .has_arg=0, .flag=(signed int *)(void *)0, .val=69 },
    { .name="event", .has_arg=1, .flag=(signed int *)(void *)0, .val=101 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="sleep-command", .has_arg=1, .flag=(signed int *)(void *)0, .val=115 },
    { .name="hibernate-command", .has_arg=1, .flag=(signed int *)(void *)0,
    .val=100 },
    { .name="auto", .has_arg=0, .flag=(signed int *)(void *)0, .val=97 },
    { .name="check-period", .has_arg=1, .flag=(signed int *)(void *)0, .val=99 },
    { .name="battery", .has_arg=1, .flag=(signed int *)(void *)0, .val=98 },
    { .name="and", .has_arg=0, .flag=(signed int *)(void *)0, .val=65 },
    { .name="netdev", .has_arg=2, .flag=(signed int *)(void *)0, .val=78 },
    { .name="rx-min", .has_arg=1, .flag=(signed int *)(void *)0, .val=114 },
    { .name="tx-min", .has_arg=1, .flag=(signed int *)(void *)0, .val=116 },
    { .name="force-hal", .has_arg=0, .flag=(signed int *)(void *)0, .val=72 },
    { .name="force-upower", .has_arg=0, .flag=(signed int *)(void *)0, .val=1 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
  signed int force_autoprobe = 0;
  signed int noirq = 0;
  signed int i;
  signed int c = 0;
  signed int event = 0;
  signed int netcount = 0;
  signed int result;
  char tmpdev[8l];
  char tx_statfile[44l];
  char rx_statfile[44l];
  signed int return_value_atoi_1;
  signed int return_value_access_2;
  _Bool tmp_if_expr_4;
  signed int return_value_access_3;
  while(!(c == -1))
  {
    c=getopt_long(argc, argv, "s:d:nvu:U:l:wIi:Ee:hac:b:AN::r:t:H", long_options, (signed int *)(void *)0);
    switch(c)
    {
      case 115:
      {
        sleep_command=strdup(optarg);
        break;
      }
      case 100:
      {
        hibernate_command=strdup(optarg);
        break;
      }
      case 110:
      {
        daemonize = 0;
        break;
      }
      case 118:
      {
        debug = 1;
        break;
      }
      case 117:
      {
        max_unused=atoi(optarg);
        break;
      }
      case 85:
      {
        ac_max_unused=atoi(optarg);
        break;
      }
      case 108:
      {
        max_loadavg=atof(optarg);
        break;
      }
      case 119:
      {
        use_utmp = 1;
        break;
      }
      case 1:

      case 72:
      {
        force_hal = 1;
        break;
      }
      case 105:
      {
        i=atoi(optarg);
        if(i >= 255 || !(i >= 0))
        {
          fprintf(stderr, "sleepd: bad irq number %d\n", i);
          exit(1);
        }

        return_value_atoi_1=atoi(optarg);
        irqs[(signed long int)return_value_atoi_1] = 1;
        autoprobe = 0;
        have_irqs = 1;
        break;
      }
      case 101:
      {
        result=access(optarg, 4);
        switch(result)
        {
          case 0:
          {
            strncpy(eventData.events[(signed long int)event], optarg, (unsigned long int)127);
            use_events = 1;
            event = event + 1;
            break;
          }
          case 40:

          case 36:

          case 2:

          case 20:

          case 14:
          {
            fprintf(stderr, "sleepd: event file not found: %s\n", optarg);
            exit(1);
          }
          case 13:
          {
            fprintf(stderr, "sleepd: can't read %s\n", optarg);
            exit(1);
          }
        }
        break;
      }
      case 69:
      {
        use_events = 0;
        break;
      }
      case 97:
      {
        force_autoprobe = 1;
        break;
      }
      case 73:
      {
        noirq = 1;
        break;
      }
      case 104:
      {
        usage();
        exit(0);
        break;
      }
      case 99:
      {
        sleep_time=atoi(optarg);
        if(!(sleep_time >= 1))
        {
          fprintf(stderr, "sleepd: bad sleep time %d\n", sleep_time);
          exit(1);
        }

        break;
      }
      case 98:
      {
        min_batt=atoi(optarg);
        if(!(min_batt >= 0))
        {
          fprintf(stderr, "sleepd: bad minimumn battery percentage %d\n", min_batt);
          exit(1);
        }

        break;
      }
      case 78:
      {
        if(optarg == ((char *)NULL))
        {
          if(netcount == 0)
            sprintf(tmpdev, "eth0");

          else
          {
            fprintf(stderr, "sleepd: multiple -N options with no arguments\n");
            exit(1);
          }
        }

        else
          strncpy(tmpdev, optarg, (unsigned long int)8);
        sprintf(tx_statfile, "/sys/class/net/%s/statistics/tx_packets", (const void *)tmpdev);
        sprintf(rx_statfile, "/sys/class/net/%s/statistics/rx_packets", (const void *)tmpdev);
        return_value_access_2=access(tx_statfile, 4);
        if(return_value_access_2 == 0)
        {
          return_value_access_3=access(rx_statfile, 4);
          tmp_if_expr_4 = return_value_access_3 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
        {
          strncpy(netdevtx[(signed long int)netcount], tx_statfile, (unsigned long int)44);
          strncpy(netdevrx[(signed long int)netcount], rx_statfile, (unsigned long int)44);
          use_net = 1;
          netcount = netcount + 1;
        }

        else
        {
          fprintf(stderr, "sleepd: %s not found in sysfs\n", (const void *)tmpdev);
          exit(1);
        }
        break;
      }
      case 116:
      {
        min_tx=atoi(optarg);
        break;
      }
      case 114:
      {
        min_rx=atoi(optarg);
        break;
      }
      case 65:
        require_unused_and_battery = 1;
    }
  }
  if(!(optind >= argc))
  {
    usage();
    exit(1);
  }

  if(!(use_events == 0))
    strncpy(eventData.events[(signed long int)event], "", (unsigned long int)1);

  if(!(use_net == 0))
    strncpy(netdevtx[(signed long int)netcount], "", (unsigned long int)1);

  strncpy(netdevrx[(signed long int)netcount], "", (unsigned long int)1);
  if(!(noirq == 0))
    autoprobe = 0;

  if(!(force_autoprobe == 0))
    autoprobe = 1;

}

// scan_acpi_num
// file acpi.c line 89
inline signed int scan_acpi_num(const char *buf, const char *key)
{
  char *ptr;
  signed int ret = 0;
  do
  {
    ptr=strchr(buf, 10);
    signed int return_value_strmcmp_1;
    return_value_strmcmp_1=strmcmp(buf, key);
    if(return_value_strmcmp_1 == 0)
    {
      ptr=strchr(buf, 61);
      if(!(ptr == ((char *)NULL)))
      {
        sscanf(ptr + (signed long int)1, "%d", &ret);
        return ret;
      }

      else
        return 0;
    }

    if(!(ptr == ((char *)NULL)))
      ptr = ptr + 1l;

    buf = ptr;
  }
  while(!(buf == ((const char *)NULL)));
  return 0;
}

// scan_acpi_value
// file acpi.c line 112
inline char * scan_acpi_value(const char *buf, const char *key)
{
  char *ptr;
  do
  {
    ptr=strchr(buf, 10);
    signed int return_value_strmcmp_2;
    return_value_strmcmp_2=strmcmp(buf, key);
    if(return_value_strmcmp_2 == 0)
    {
      ptr=strchr(buf, 61);
      if(!(ptr == ((char *)NULL)))
      {
        signed int return_value_sscanf_1;
        static char ret[256l];
        return_value_sscanf_1=sscanf(ptr + (signed long int)1, "%255s", (const void *)ret);
        if(return_value_sscanf_1 == 1)
          return ret;

        else
          return (char *)(void *)0;
      }

      else
        return (char *)(void *)0;
    }

    if(!(ptr == ((char *)NULL)))
      ptr = ptr + 1l;

    buf = ptr;
  }
  while(!(buf == ((const char *)NULL)));
  return (char *)(void *)0;
}

// strmcmp
// file acpi.c line 75
signed int strmcmp(const char *s1, const char *s2)
{
  _Bool tmp_if_expr_1;
  do
  {
    if(*s1 == *s2)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)*s2 == 63 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    if((signed int)*s1 == 0)
      return 0;

    s1 = s1 + 1l;
    s2 = s2 + 1l;
  }
  while((_Bool)1);
  if((signed int)*s2 == 0)
    return 0;

  else
    return 1;
}

// upower_read
// file upower.h line 2
signed int upower_read(signed int battery, struct apm_info *info)
{
  struct _GPtrArray *devices = (struct _GPtrArray *)(void *)0;
  up=up_client_new();
  if(up == ((struct anonymous_1 *)NULL))
    return -1;

  else
  {
    devices=up_client_get_devices(up);
    static signed int retries = 0;
    if(devices == ((struct _GPtrArray *)NULL))
    {
      retries = retries + 1;
      if(!(retries >= 3))
        return 0;

      return -1;
    }

    else
    {
      retries = 0;
      info->battery_flags = 0;
      info->using_minutes = 0;
      struct context ctx = { .current=0, .needed=battery - 1, .state=(unsigned int)0, .percentage=-1,
    .ac=0, .time=-1 };
      g_ptr_array_foreach(devices, get_devinfo, (void *)&ctx);
      info->ac_line_status = ctx.ac;
      info->battery_time = ctx.time;
      info->battery_percentage = ctx.percentage;
      if(ctx.state == 2u)
      {
        info->battery_status = 3;
        if(!(info->battery_percentage >= 1))
          info->battery_status = 2;

        else
          if(!(info->battery_percentage >= 10))
            info->battery_status = 1;

      }

      else
        if(ctx.state == 1u && !(info->ac_line_status == 0))
        {
          info->battery_status = 3;
          info->battery_flags = info->battery_flags | 0x8;
        }

        else
          if(!(info->ac_line_status == 0))
            info->battery_status = 0;

          else
            fprintf(stderr, "unknown battery state\n");
      if(!(ctx.percentage >= 0))
      {
        info->battery_percentage = 0;
        info->battery_time = 0;
        info->battery_status = 4;
      }

      g_ptr_array_free(devices, (signed int)!(0 != 0));
      return 0;
    }
  }
}

// upower_supported
// file upower.h line 1
signed int upower_supported(void)
{
  up=up_client_new();
  if(up == ((struct anonymous_1 *)NULL))
    return 0;

  else
  {
    struct _GPtrArray *devices;
    devices=up_client_get_devices(up);
    if(devices == ((struct _GPtrArray *)NULL))
      return 0;

    else
    {
      g_ptr_array_unref(devices);
      return 1;
    }
  }
}

// usage
// file sleepd.c line 71
void usage()
{
  fprintf(stderr, "Usage: sleepd [-s command] [-d command] [-u n] [-U n] [-I] [-i n] [-E] [-e filename] [-a] [-l n] [-w] [-n] [-v] [-c n] [-b n] [-A] [-H] [-N [dev] [-t n] [-r n]]\n");
}

// writecontrol
// file sleepd.c line 272
void writecontrol(signed int value)
{
  signed int f;
  char buf[10l];
  f=open("/var/run/sleepd.ctl", 01 | 0100, 0644);
  if(f == -1)
    perror("/var/run/sleepd.ctl");

  snprintf(buf, (unsigned long int)9, "%i\n", value);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(buf);
  write(f, (const void *)buf, return_value_strlen_1);
  close(f);
}

