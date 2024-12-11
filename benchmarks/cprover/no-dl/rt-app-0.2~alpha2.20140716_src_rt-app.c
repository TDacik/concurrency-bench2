// ST[U32'size'|U32'sched_policy'|U64'sched_flags'|S32'sched_nice'|U32'sched_priority'|U64'sched_runtime'|U64'sched_deadline'|U64'sched_period']
// file dl_syscalls.h line 51
struct sched_attr_0;

// tag-#anon#ST[ARR16{U64}_U64_'__bits']
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous_1;

// tag-#anon#ST[S32'__lock'|U32'__futex'|U64'__total_seq'|U64'__wakeup_seq'|U64'__woken_seq'|*{V}_V_'__mutex'|U32'__nwaiters'|U32'__broadcast_seq']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous;

// tag-#anon#UN[ARR4{S8}_S8_'__size'|S32'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_4;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'|U32'__futex'|U64'__total_seq'|U64'__wakeup_seq'|U64'__woken_seq'|*{V}_V_'__mutex'|U32'__nwaiters'|U32'__broadcast_seq']#'__data'|ARR48{S8}_S8_'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'|ARR40{S8}_S8_'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_3;

// tag-#anon#UN[SYM#tag-_rtapp_mutex#'mtx'|SYM#tag-_rtapp_cond#'cond'|SYM#tag-_rtapp_signal#'signal']
// file rt-app_types.h line 84
union anonymous_0;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 156
struct _IO_marker;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_ftrace_data_t
// file rt-app_types.h line 137
struct _ftrace_data_t;

// tag-_rtapp_cond
// file rt-app_types.h line 73
struct _rtapp_cond;

// tag-_rtapp_mutex
// file rt-app_types.h line 68
struct _rtapp_mutex;

// tag-_rtapp_options_t
// file rt-app_types.h line 143
struct _rtapp_options_t;

// tag-_rtapp_resource_access_list_t
// file rt-app_types.h line 94
struct _rtapp_resource_access_list_t;

// tag-_rtapp_resource_t
// file rt-app_types.h line 83
struct _rtapp_resource_t;

// tag-_rtapp_signal
// file rt-app_types.h line 78
struct _rtapp_signal;

// tag-_rtapp_tasks_resource_list_t
// file rt-app_types.h line 100
struct _rtapp_tasks_resource_list_t;

// tag-_thread_data_t
// file rt-app_types.h line 105
struct _thread_data_t;

// tag-_timing_point_t
// file rt-app_types.h line 171
struct _timing_point_t;

// tag-array_list
// file /usr/include/json-c/json_object.h line 80
struct array_list;

// tag-json_object
// file /usr/include/json-c/json_object.h line 71
struct json_object;

// tag-json_type
// file /usr/include/json-c/json_object.h line 100
enum json_type { json_type_null=0, json_type_boolean=1, json_type_double=2, json_type_int=3, json_type_object=4, json_type_array=5, json_type_string=6 };

// tag-lh_entry
// file /usr/include/json-c/json_object.h line 72
struct lh_entry;

// tag-lh_table
// file /usr/include/json-c/json_object.h line 79
struct lh_table;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-policy_t
// file rt-app_types.h line 45
enum policy_t { other=0, rr=2, fifo=1, deadline=6 };

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-resource_t
// file rt-app_types.h line 58
enum resource_t { rtapp_mutex=0, rtapp_wait=1, rtapp_signal=2, rtapp_broadcast=3, rtapp_sleep=4, rtapp_run=5 };

// tag-sched_attr
// file ./../libdl/dl_syscalls.h line 51
struct sched_attr;

// tag-sched_param
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 72
struct sched_param;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

#ifndef NULL
#define NULL ((void*)0)
#endif

// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// assure_type_is
// file rt-app_parse_config.c line 78
static inline void assure_type_is(struct json_object *obj, struct json_object *parent, const char *key, enum json_type type);
// calibrate_cpu_cycles
// file rt-app.c line 65
signed int calibrate_cpu_cycles(signed int clock);
// ceil
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern double ceil(double);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// clock_nanosleep
// file /usr/include/time.h line 353
extern signed int clock_nanosleep(signed int, signed int, struct timespec *, struct timespec *);
// close
// file rt-app.c line 238 function shutdown
signed int close(void);
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
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// ftrace_write
// file rt-app_utils.c line 268
void ftrace_write(signed int mark_fd, const char *fmt, ...);
// get_bool_value_from
// file rt-app_parse_config.c line 128
static inline signed int get_bool_value_from(struct json_object *where, const char *key, signed int have_def, signed int def_value);
// get_in_object
// file rt-app_parse_config.c line 93
static inline struct json_object * get_in_object(struct json_object *where, const char *what, signed int nullable);
// get_int_value_from
// file rt-app_parse_config.c line 112
static inline signed int get_int_value_from(struct json_object *where, const char *key, signed int have_def, signed int def_value);
// get_opts_from_json_object
// file rt-app_parse_config.c line 635
static void get_opts_from_json_object(struct json_object *root, struct _rtapp_options_t *opts);
// get_resource
// file rt-app.c line 119
signed int get_resource(struct _rtapp_resource_access_list_t *lock, struct timespec *usage);
// get_resource_index
// file rt-app_parse_config.c line 284
static signed int get_resource_index(char *name, struct _rtapp_resource_t *resources);
// get_string_value_from
// file rt-app_parse_config.c line 144
static inline char * get_string_value_from(struct json_object *where, const char *key, signed int have_def, const char *def_value);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gettid
// file rt-app_utils.c line 163
signed int gettid(void);
// init_cond_resource
// file rt-app_parse_config.c line 177
static signed int init_cond_resource(struct _rtapp_resource_t *data, const struct _rtapp_options_t *opts);
// init_mutex_resource
// file rt-app_parse_config.c line 163
static signed int init_mutex_resource(struct _rtapp_resource_t *data, const struct _rtapp_options_t *opts);
// init_signal_resource
// file rt-app_parse_config.c line 186
static signed int init_signal_resource(struct _rtapp_resource_t *data, const struct _rtapp_options_t *opts, char *target);
// json_object_array_get_idx
// file /usr/include/json-c/json_object.h line 421
extern struct json_object * json_object_array_get_idx(struct json_object *, signed int);
// json_object_array_length
// file /usr/include/json-c/json_object.h line 374
extern signed int json_object_array_length(struct json_object *);
// json_object_from_file
// file /usr/include/json-c/json_util.h line 24
extern struct json_object * json_object_from_file(const char *);
// json_object_get_array
// file /usr/include/json-c/json_object.h line 368
extern struct array_list * json_object_get_array(struct json_object *);
// json_object_get_boolean
// file /usr/include/json-c/json_object.h line 443
extern signed int json_object_get_boolean(struct json_object *);
// json_object_get_int
// file /usr/include/json-c/json_object.h line 478
extern signed int json_object_get_int(struct json_object *);
// json_object_get_object
// file /usr/include/json-c/json_object.h line 228
extern struct lh_table * json_object_get_object(struct json_object *);
// json_object_get_string
// file /usr/include/json-c/json_object.h line 554
extern const char * json_object_get_string(struct json_object *);
// json_object_is_type
// file /usr/include/json-c/json_object.h line 143
extern signed int json_object_is_type(struct json_object *, enum json_type);
// json_object_object_get
// file /usr/include/json-c/json_object.h line 271
extern struct json_object * json_object_object_get(struct json_object *, const char *);
// json_object_put
// file /usr/include/json-c/json_object.h line 129
signed int json_object_put(struct json_object *);
// json_object_to_json_string
// file /usr/include/json-c/json_object.h line 167
extern const char * json_object_to_json_string(struct json_object *);
// json_tokener_parse
// file /usr/include/json-c/json_tokener.h line 132
extern struct json_object * json_tokener_parse(const char *);
// ldexp
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 106
extern double ldexp(double, signed int);
// loadwait
// file rt-app.c line 100
static inline signed int loadwait(struct timespec *exec_time);
// log_timing
// file rt-app_utils.c line 137
void log_timing(struct _IO_FILE *handler, struct _timing_point_t *t);
// lstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 262
extern signed int lstat(const char *, struct stat *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mlockall
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 111
extern signed int mlockall(signed int);
// msec_to_timespec
// file rt-app_utils.c line 61
struct timespec msec_to_timespec(unsigned int msec);
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// open
// file /usr/include/fcntl.h line 156
extern signed int open(const char *, signed int, ...);
// parse_command_line
// file rt-app_args.c line 354
void parse_command_line(signed int argc, char **argv, struct _rtapp_options_t *opts);
// parse_command_line_options
// file rt-app_args.c line 204
static void parse_command_line_options(signed int argc, char **argv, struct _rtapp_options_t *opts);
// parse_config
// file rt-app_parse_config.h line 46
void parse_config(const char *filename, struct _rtapp_options_t *opts);
// parse_config_stdin
// file rt-app_parse_config.c line 666
void parse_config_stdin(struct _rtapp_options_t *opts);
// parse_global
// file rt-app_parse_config.c line 582
static void parse_global(struct json_object *global, struct _rtapp_options_t *opts);
// parse_legacy_resources
// file rt-app_parse_config.c line 241
static void parse_legacy_resources(signed int nresources, struct _rtapp_options_t *opts);
// parse_resource_data
// file rt-app_parse_config.c line 203
static void parse_resource_data(char *name, struct json_object *obj, signed int idx, struct _rtapp_resource_t *data, const struct _rtapp_options_t *opts);
// parse_resources
// file rt-app_parse_config.c line 259
static void parse_resources(struct json_object *resources, struct _rtapp_options_t *opts);
// parse_tasks
// file rt-app_parse_config.c line 564
static void parse_tasks(struct json_object *tasks, struct _rtapp_options_t *opts);
// parse_thread_args
// file rt-app_args.c line 71
void parse_thread_args(char *arg, signed int idx, struct _thread_data_t *tdata, enum policy_t def_policy);
// parse_thread_data
// file rt-app_parse_config.c line 446
static void parse_thread_data(char *name, struct json_object *obj, signed int idx, struct _thread_data_t *data, const struct _rtapp_options_t *opts);
// parse_thread_resources
// file rt-app_parse_config.c line 365
static void parse_thread_resources(const struct _rtapp_options_t *opts, struct json_object *locks, struct json_object *task_resources, struct _thread_data_t *data);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// policy_to_string
// file rt-app_utils.c line 192
signed int policy_to_string(enum policy_t policy, char *policy_name);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 981
extern signed int pthread_cond_broadcast(union anonymous_2 *);
// pthread_cond_init
// file /usr/include/pthread.h line 968
extern signed int pthread_cond_init(union anonymous_2 *, const union anonymous_4 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 977
extern signed int pthread_cond_signal(union anonymous_2 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 989
extern signed int pthread_cond_wait(union anonymous_2 *, union anonymous_3 *);
// pthread_condattr_init
// file /usr/include/pthread.h line 1008
extern signed int pthread_condattr_init(union anonymous_4 *);
// pthread_create
// file /usr/include/pthread.h line 233
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 242
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 250
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 749
extern signed int pthread_mutex_init(union anonymous_3 *, const union anonymous_4 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 762
extern signed int pthread_mutex_lock(union anonymous_3 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 773
extern signed int pthread_mutex_unlock(union anonymous_3 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 806
extern signed int pthread_mutexattr_init(union anonymous_4 *);
// pthread_mutexattr_setprotocol
// file /usr/include/pthread.h line 845
extern signed int pthread_mutexattr_setprotocol(union anonymous_4 *, signed int);
// pthread_self
// file /usr/include/pthread.h line 275
extern unsigned long int pthread_self(void);
// pthread_setaffinity_np
// file /usr/include/pthread.h line 474
extern signed int pthread_setaffinity_np(unsigned long int, unsigned long int, const struct anonymous_1 *);
// pthread_setschedparam
// file /usr/include/pthread.h line 429
extern signed int pthread_setschedparam(unsigned long int, signed int, struct sched_param *);
// put_resource
// file rt-app.c line 147
void put_resource(struct _rtapp_resource_access_list_t *lock);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// resource_to_string
// file rt-app_utils.c line 241
signed int resource_to_string(enum resource_t resource, char *resource_name);
// round
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 309
extern double round(double);
// run
// file rt-app.c line 153
void run(signed int ind, struct timespec *min, struct timespec *max, struct _rtapp_tasks_resource_list_t *blockages, signed int nblockages, struct timespec *t_start);
// sched_getaffinity
// file /usr/include/sched.h line 122
extern signed int sched_getaffinity(signed int, unsigned long int, struct anonymous_1 *);
// sched_getattr
// file dl_syscalls.c line 10
signed int sched_getattr(signed int pid, struct sched_attr_0 *attr, unsigned int size, unsigned int flags);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous_1 *);
// sched_setattr
// file dl_syscalls.c line 3
signed int sched_setattr(signed int pid, struct sched_attr_0 *attr, unsigned int flags);
// serialize_acl
// file rt-app_parse_config.c line 295
static void serialize_acl(struct _rtapp_resource_access_list_t **acl, char *name, struct json_object *task_resources, struct _rtapp_resource_t *resources);
// shutdown
// file rt-app.c line 214
static void shutdown(signed int sig);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sleep
// file rt-app.c line 753 function main
signed int sleep(void);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcat
// file /usr/include/string.h line 133
extern char * strcat(char *, const char *);
// strcmp
// file /usr/include/string.h line 140
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 125
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 171
extern char * strdup(const char *);
// string_to_policy
// file rt-app_utils.c line 169
signed int string_to_policy(const char *policy_name, enum policy_t *policy);
// string_to_resource
// file rt-app_utils.c line 221
signed int string_to_resource(const char *name, enum resource_t *resource);
// strncpy
// file /usr/include/string.h line 128
extern char * strncpy(char *, const char *, unsigned long int);
// strtok
// file /usr/include/string.h line 343
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syscall
// file rt-app_utils.c line 165 function gettid
signed int syscall(void);
// thread_body
// file rt-app.c line 245
void * thread_body(void *arg);
// timespec_add
// file rt-app_utils.c line 72
struct timespec timespec_add(struct timespec *t1, struct timespec *t2);
// timespec_lower
// file rt-app_utils.c line 105
signed int timespec_lower(struct timespec *what, struct timespec *than);
// timespec_sub
// file rt-app_utils.c line 88
struct timespec timespec_sub(struct timespec *t1, struct timespec *t2);
// timespec_sub_to_ns
// file rt-app_utils.c line 120
signed long int timespec_sub_to_ns(struct timespec *t1, struct timespec *t2);
// timespec_to_lusec
// file rt-app_utils.c line 30
signed long int timespec_to_lusec(struct timespec *ts);
// timespec_to_msec
// file rt-app_utils.c line 24
unsigned int timespec_to_msec(struct timespec *ts);
// timespec_to_nsec
// file rt-app_utils.c line 43
unsigned long long int timespec_to_nsec(struct timespec *ts);
// timespec_to_usec
// file rt-app_utils.c line 36
unsigned long int timespec_to_usec(struct timespec *ts);
// usage
// file rt-app_args.c line 24
void usage(const char *msg, signed int ex_code);
// usec_to_timespec
// file rt-app_utils.c line 50
struct timespec usec_to_timespec(unsigned long int usec);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// waste_cpu_cycles
// file rt-app.c line 45
void waste_cpu_cycles(signed int load_loops);
// write
// file rt-app_utils.c line 292 function ftrace_write
signed int write(void);

struct sched_attr_0
{
  // size
  unsigned int size;
  // sched_policy
  unsigned int sched_policy;
  // sched_flags
  unsigned long long int sched_flags;
  // sched_nice
  signed int sched_nice;
  // sched_priority
  unsigned int sched_priority;
  // sched_runtime
  unsigned long long int sched_runtime;
  // sched_deadline
  unsigned long long int sched_deadline;
  // sched_period
  unsigned long long int sched_period;
};

struct anonymous_1
{
  // __bits
  unsigned long int __bits[16l];
};

struct anonymous
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

union anonymous_4
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_2
{
  // __data
  struct anonymous __data;
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

union anonymous_3
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct _rtapp_mutex
{
  // obj
  union anonymous_3 obj;
  // attr
  union anonymous_4 attr;
};

struct _rtapp_cond
{
  // obj
  union anonymous_2 obj;
  // attr
  union anonymous_4 attr;
};

struct _rtapp_signal
{
  // target
  union anonymous_2 *target;
};

union anonymous_0
{
  // mtx
  struct _rtapp_mutex mtx;
  // cond
  struct _rtapp_cond cond;
  // signal
  struct _rtapp_signal signal;
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

struct _ftrace_data_t
{
  // debugfs
  char *debugfs;
  // trace_fd
  signed int trace_fd;
  // marker_fd
  signed int marker_fd;
};

struct _rtapp_options_t
{
  // lock_pages
  signed int lock_pages;
  // threads_data
  struct _thread_data_t *threads_data;
  // nthreads
  signed int nthreads;
  // policy
  enum policy_t policy;
  // duration
  signed int duration;
  // spacing
  unsigned long int spacing;
  // logdir
  char *logdir;
  // logbasename
  char *logbasename;
  // gnuplot
  signed int gnuplot;
  // calib_cpu
  signed int calib_cpu;
  // calib_ns_per_loop
  signed int calib_ns_per_loop;
  // resources
  struct _rtapp_resource_t *resources;
  // nresources
  signed int nresources;
  // pi_enabled
  signed int pi_enabled;
  // ftrace
  signed int ftrace;
  // die_on_dmiss
  signed int die_on_dmiss;
};

struct _rtapp_resource_access_list_t
{
  // res
  struct _rtapp_resource_t *res;
  // next
  struct _rtapp_resource_access_list_t *next;
  // prev
  struct _rtapp_resource_access_list_t *prev;
};

struct _rtapp_resource_t
{
  // res
  union anonymous_0 res;
  // index
  signed int index;
  // type
  enum resource_t type;
  // name
  char *name;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct _rtapp_tasks_resource_list_t
{
  // usage
  struct timespec usage;
  // acl
  struct _rtapp_resource_access_list_t *acl;
};

struct sched_attr
{
  // size
  unsigned int size;
  // sched_policy
  unsigned int sched_policy;
  // sched_flags
  unsigned long long int sched_flags;
  // sched_nice
  signed int sched_nice;
  // __sched_priority
  unsigned int __sched_priority;
  // sched_runtime
  unsigned long long int sched_runtime;
  // sched_deadline
  unsigned long long int sched_deadline;
  // sched_period
  unsigned long long int sched_period;
};

struct _thread_data_t
{
  // ind
  signed int ind;
  // name
  char *name;
  // lock_pages
  signed int lock_pages;
  // duration
  signed int duration;
  // cpuset
  struct anonymous_1 *cpuset;
  // cpuset_str
  char *cpuset_str;
  // wait_before_start
  unsigned long int wait_before_start;
  // min_et
  struct timespec min_et;
  // max_et
  struct timespec max_et;
  // period
  struct timespec period;
  // deadline
  struct timespec deadline;
  // main_app_start
  struct timespec main_app_start;
  // loop
  signed int loop;
  // sleep
  signed int sleep;
  // log_handler
  struct _IO_FILE *log_handler;
  // sched_policy
  enum policy_t sched_policy;
  // sched_policy_descr
  char sched_policy_descr[16l];
  // sched_prio
  signed int sched_prio;
  // blockages
  struct _rtapp_tasks_resource_list_t *blockages;
  // nblockages
  signed int nblockages;
  // dl_params
  struct sched_attr dl_params;
};

struct _timing_point_t
{
  // ind
  signed int ind;
  // period
  unsigned long int period;
  // min_et
  unsigned long int min_et;
  // max_et
  unsigned long int max_et;
  // rel_start_time
  unsigned long int rel_start_time;
  // abs_start_time
  unsigned long int abs_start_time;
  // end_time
  unsigned long int end_time;
  // deadline
  unsigned long int deadline;
  // duration
  unsigned long int duration;
  // slack
  signed long int slack;
};

struct array_list
{
  // array
  void **array;
  // length
  signed int length;
  // size
  signed int size;
  // free_fn
  void (*free_fn)(void *);
};

struct lh_entry
{
  // k
  void *k;
  // v
  const void *v;
  // next
  struct lh_entry *next;
  // prev
  struct lh_entry *prev;
};

struct lh_table
{
  // size
  signed int size;
  // count
  signed int count;
  // collisions
  signed int collisions;
  // resizes
  signed int resizes;
  // lookups
  signed int lookups;
  // inserts
  signed int inserts;
  // deletes
  signed int deletes;
  // name
  const char *name;
  // head
  struct lh_entry *head;
  // tail
  struct lh_entry *tail;
  // table
  struct lh_entry *table;
  // free_fn
  void (*free_fn)(struct lh_entry *);
  // hash_fn
  unsigned long int (*hash_fn)(const void *);
  // equal_fn
  signed int (*equal_fn)(const void *, const void *);
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

struct sched_param
{
  // __sched_priority
  signed int __sched_priority;
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


// continue_running
// file rt-app.c line 29
static volatile signed int continue_running;
// errno
// file rt-app.c line 28
static signed int errno;
// ft_data
// file rt-app.c line 35
static struct _ftrace_data_t ft_data = { .debugfs="/sys/kernel/debug", .trace_fd=-1, .marker_fd=-1 };
// json_tokener_errors
// file /usr/include/json-c/json_tokener.h line 115
extern const char *json_tokener_errors[];
// nthreads
// file rt-app.c line 31
static signed int nthreads;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opts
// file rt-app.c line 33
struct _rtapp_options_t opts;
// p_load
// file rt-app.c line 32
static signed int p_load;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// threads
// file rt-app.c line 30
static unsigned long int *threads;

// assure_type_is
// file rt-app_parse_config.c line 78
static inline void assure_type_is(struct json_object *obj, struct json_object *parent, const char *key, enum json_type type)
{
  signed int return_value_json_object_is_type_2;
  return_value_json_object_is_type_2=json_object_is_type(obj, type);
  if(return_value_json_object_is_type_2 == 0)
  {

  __CPROVER_DUMP_L1:
    ;
    do
      fprintf(stderr, "[rt-app] <crit> Invalid type for key %s\n", key);
    while((_Bool)0);

  __CPROVER_DUMP_L3:
    ;
    do
    {
      const char *return_value_json_object_to_json_string_1;
      return_value_json_object_to_json_string_1=json_object_to_json_string(parent);
      fprintf(stderr, "[rt-app] <crit> %s\n", return_value_json_object_to_json_string_1);
    }
    while((_Bool)0);
    exit(2);
  }

}

// calibrate_cpu_cycles
// file rt-app.c line 65
signed int calibrate_cpu_cycles(signed int clock)
{
  struct timespec start;
  struct timespec stop;
  signed int max_load_loop = 10000;
  unsigned int diff;
  signed int nsec_per_loop;
  signed int avg_per_loop = 0;
  signed int ret;
  signed int cal_trial = 1000;
  while(!(cal_trial == 0))
  {
    cal_trial = cal_trial - 1;
    clock_gettime(clock, &start);
    waste_cpu_cycles(max_load_loop);
    clock_gettime(clock, &stop);
    signed long int return_value_timespec_sub_to_ns_1;
    return_value_timespec_sub_to_ns_1=timespec_sub_to_ns(&stop, &start);
    diff = (unsigned int)(signed int)return_value_timespec_sub_to_ns_1;
    nsec_per_loop = (signed int)(diff / (unsigned int)max_load_loop);
    avg_per_loop = avg_per_loop + nsec_per_loop >> 1;
    signed int return_value_abs_2;
    return_value_abs_2=abs(nsec_per_loop - avg_per_loop);
    if(!(50 * return_value_abs_2 >= avg_per_loop))
      return avg_per_loop;

    max_load_loop = max_load_loop + 33333;
    max_load_loop = max_load_loop % 1000000;
  }
  return 0;
}

// ftrace_write
// file rt-app_utils.c line 268
void ftrace_write(signed int mark_fd, const char *fmt, ...)
{
  void **ap;
  signed int n;
  signed int size = 100;
  char *tmp;
  char *ntmp;
  if(!(mark_fd >= 0))
  {

  __CPROVER_DUMP_L1:
    ;
    do
      fprintf(stderr, "[rt-app] <error> invalid mark_fd\n");
    while((_Bool)0);
    exit(1);
  }

  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)size);
  tmp = (char *)return_value_malloc_1;
  if(tmp == ((char *)NULL))
  {

  __CPROVER_DUMP_L4:
    ;
    do
      fprintf(stderr, "[rt-app] <error> Cannot allocate ftrace buffer\n");
    while((_Bool)0);
    exit(1);
  }

  while((_Bool)1)
  {
    ap = (void **)&fmt;
    n=vsnprintf(tmp, (unsigned long int)100, fmt, ap);
    ap = ((void **)NULL);
    if(n >= 0 && !(n >= size))
    {
      write(mark_fd, tmp, n);
      free((void *)tmp);
      goto __CPROVER_DUMP_L16;
    }

    if(n >= 0)
      size = n + 1;

    else
      size = size * 2;
    void *return_value_realloc_2;
    return_value_realloc_2=realloc((void *)tmp, (unsigned long int)size);
    ntmp = (char *)return_value_realloc_2;
    if(ntmp == ((char *)NULL))
    {
      free((void *)tmp);

    __CPROVER_DUMP_L11:
      ;
      do
        fprintf(stderr, "[rt-app] <error> Cannot reallocate ftrace buffer\n");
      while((_Bool)0);
      exit(1);
    }

    else
      tmp = ntmp;
  }

__CPROVER_DUMP_L16:
  ;
}

// get_bool_value_from
// file rt-app_parse_config.c line 128
static inline signed int get_bool_value_from(struct json_object *where, const char *key, signed int have_def, signed int def_value)
{
  struct json_object *value;
  signed int b_value;
  value=get_in_object(where, key, have_def);
  do
    if(value == ((struct json_object *)NULL))
    {
      if(!(have_def == 0))
      {

      __CPROVER_DUMP_L2:
        ;
        while((_Bool)0)
          ;
        return def_value;
      }

      else
      {

      __CPROVER_DUMP_L4:
        ;
        do
          fprintf(stderr, "[rt-app] <crit> [json] Key %s not found\n", key);
        while((_Bool)0);
        exit(2);
      }
    }

  while((_Bool)0);
  assure_type_is(value, where, key, (enum json_type)json_type_boolean);
  b_value=json_object_get_boolean(value);

__CPROVER_DUMP_L7:
  ;
  while((_Bool)0)
    ;
  return b_value;
}

// get_in_object
// file rt-app_parse_config.c line 93
static inline struct json_object * get_in_object(struct json_object *where, const char *what, signed int nullable)
{
  struct json_object *to;
  to=json_object_object_get(where, what);
  if(to == ((struct json_object *)NULL) && nullable == 0)
  {

  __CPROVER_DUMP_L1:
    ;
    do
      fprintf(stderr, "[rt-app] <crit> [json] Error while parsing config:\n         [json] %s\n", json_tokener_errors[(signed long int)-((unsigned long int)to)]);
    while((_Bool)0);
    exit(2);
  }

  const char *return_value_json_object_to_json_string_1;
  signed int return_value_strcmp_2;
  if(nullable == 0)
  {
    return_value_json_object_to_json_string_1=json_object_to_json_string(to);
    return_value_strcmp_2=strcmp(return_value_json_object_to_json_string_1, "null");
    if(return_value_strcmp_2 == 0)
    {

    __CPROVER_DUMP_L4:
      ;
      do
        fprintf(stderr, "[rt-app] <crit> [json] Cannot find key %s\n", what);
      while((_Bool)0);
      exit(2);
    }

  }

  return to;
}

// get_int_value_from
// file rt-app_parse_config.c line 112
static inline signed int get_int_value_from(struct json_object *where, const char *key, signed int have_def, signed int def_value)
{
  struct json_object *value;
  signed int i_value;
  value=get_in_object(where, key, have_def);
  do
    if(value == ((struct json_object *)NULL))
    {
      if(!(have_def == 0))
      {

      __CPROVER_DUMP_L2:
        ;
        while((_Bool)0)
          ;
        return def_value;
      }

      else
      {

      __CPROVER_DUMP_L4:
        ;
        do
          fprintf(stderr, "[rt-app] <crit> [json] Key %s not found\n", key);
        while((_Bool)0);
        exit(2);
      }
    }

  while((_Bool)0);
  assure_type_is(value, where, key, (enum json_type)json_type_int);
  i_value=json_object_get_int(value);

__CPROVER_DUMP_L7:
  ;
  while((_Bool)0)
    ;
  return i_value;
}

// get_opts_from_json_object
// file rt-app_parse_config.c line 635
static void get_opts_from_json_object(struct json_object *root, struct _rtapp_options_t *opts)
{
  struct json_object *global;
  struct json_object *tasks;
  struct json_object *resources;
  if(root == ((struct json_object *)NULL))
  {

  __CPROVER_DUMP_L1:
    ;
    do
      fprintf(stderr, "[rt-app] <error> [json] Error while parsing input JSON: %s\n", json_tokener_errors[(signed long int)-((unsigned long int)root)]);
    while((_Bool)0);
    exit(2);
  }


__CPROVER_DUMP_L3:
  ;
  while((_Bool)0)
    ;

__CPROVER_DUMP_L5:
  ;
  while((_Bool)0)
    ;
  global=get_in_object(root, "global", (signed int)0);

__CPROVER_DUMP_L7:
  ;
  while((_Bool)0)
    ;
  tasks=get_in_object(root, "tasks", (signed int)0);

__CPROVER_DUMP_L9:
  ;
  while((_Bool)0)
    ;
  resources=get_in_object(root, "resources", (signed int)0);

__CPROVER_DUMP_L11:
  ;
  while((_Bool)0)
    ;
  parse_global(global, opts);
  json_object_put(global);
  parse_resources(resources, opts);
  json_object_put(resources);
  parse_tasks(tasks, opts);
  json_object_put(tasks);
}

// get_resource
// file rt-app.c line 119
signed int get_resource(struct _rtapp_resource_access_list_t *lock, struct timespec *usage)
{
  signed int busywait = 1;
  struct _rtapp_resource_access_list_t *prev;
  switch((signed int)lock->res->type)
  {
    case rtapp_mutex:
    {
      pthread_mutex_lock(&lock->res->res.mtx.obj);
      break;
    }
    case rtapp_wait:
    {
      prev = lock->prev;
      pthread_cond_wait(&lock->res->res.cond.obj, &prev->res->res.mtx.obj);
      break;
    }
    case rtapp_signal:
    {
      pthread_cond_signal(lock->res->res.signal.target);
      break;
    }
    case rtapp_broadcast:
    {
      pthread_cond_broadcast(lock->res->res.signal.target);
      break;
    }
    case rtapp_sleep:
    {
      nanosleep(usage, (struct timespec *)(void *)0);
      busywait = 0;
    }
  }
  return busywait;
}

// get_resource_index
// file rt-app_parse_config.c line 284
static signed int get_resource_index(char *name, struct _rtapp_resource_t *resources)
{
  signed int i = 0;
  signed int return_value_strcmp_1;
  do
  {
    return_value_strcmp_1=strcmp((resources + (signed long int)i)->name, name);
    if(return_value_strcmp_1 == 0)
      break;

    i = i + 1;
  }
  while((_Bool)1);
  return i;
}

// get_string_value_from
// file rt-app_parse_config.c line 144
static inline char * get_string_value_from(struct json_object *where, const char *key, signed int have_def, const char *def_value)
{
  struct json_object *value;
  char *s_value;
  value=get_in_object(where, key, have_def);
  do
    if(value == ((struct json_object *)NULL))
    {
      if(!(have_def == 0))
      {
        if(def_value == ((const char *)NULL))
        {

        __CPROVER_DUMP_L2:
          ;
          while((_Bool)0)
            ;
          return (char *)(void *)0;
        }


      __CPROVER_DUMP_L4:
        ;
        while((_Bool)0)
          ;
        char *return_value_strdup_1;
        return_value_strdup_1=strdup(def_value);
        return return_value_strdup_1;
      }

      else
      {

      __CPROVER_DUMP_L6:
        ;
        do
          fprintf(stderr, "[rt-app] <crit> [json] Key %s not found\n", key);
        while((_Bool)0);
        exit(2);
      }
    }

  while((_Bool)0);
  signed int return_value_json_object_is_type_2;
  return_value_json_object_is_type_2=json_object_is_type(value, (enum json_type)json_type_null);
  if(!(return_value_json_object_is_type_2 == 0))
  {

  __CPROVER_DUMP_L9:
    ;
    while((_Bool)0)
      ;
    return (char *)(void *)0;
  }

  else
  {
    assure_type_is(value, where, key, (enum json_type)json_type_string);
    const char *return_value_json_object_get_string_3;
    return_value_json_object_get_string_3=json_object_get_string(value);
    s_value=strdup(return_value_json_object_get_string_3);

  __CPROVER_DUMP_L12:
    ;
    while((_Bool)0)
      ;
    return s_value;
  }
}

// gettid
// file rt-app_utils.c line 163
signed int gettid(void)
{
  signed int return_value_syscall_1;
  return_value_syscall_1=syscall(186);
  return return_value_syscall_1;
}

// init_cond_resource
// file rt-app_parse_config.c line 177
static signed int init_cond_resource(struct _rtapp_resource_t *data, const struct _rtapp_options_t *opts)
{

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  pthread_condattr_init(&data->res.cond.attr);
  pthread_cond_init(&data->res.cond.obj, &data->res.cond.attr);
}

// init_mutex_resource
// file rt-app_parse_config.c line 163
static signed int init_mutex_resource(struct _rtapp_resource_t *data, const struct _rtapp_options_t *opts)
{

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  pthread_mutexattr_init(&data->res.mtx.attr);
  if(!(opts->pi_enabled == 0))
    pthread_mutexattr_setprotocol(&data->res.mtx.attr, 1);

  pthread_mutex_init(&data->res.mtx.obj, &data->res.mtx.attr);
}

// init_signal_resource
// file rt-app_parse_config.c line 186
static signed int init_signal_resource(struct _rtapp_resource_t *data, const struct _rtapp_options_t *opts, char *target)
{

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  signed int i = 0;
  signed int return_value_strcmp_1;
  do
  {
    return_value_strcmp_1=strcmp((opts->resources + (signed long int)i)->name, target);
    if(return_value_strcmp_1 == 0)
      break;

    if(data->index == i)
    {

    __CPROVER_DUMP_L4:
      ;
      do
        fprintf(stderr, "[rt-app] <crit> [json]         Invalid target %s\n", target);
      while((_Bool)0);
      exit(2);
    }

    i = i + 1;
  }
  while((_Bool)1);
  data->res.signal.target = &(opts->resources + (signed long int)i)->res.cond.obj;
}

// loadwait
// file rt-app.c line 100
static inline signed int loadwait(struct timespec *exec_time)
{
  unsigned long int exec;
  unsigned long int load_count;
  exec=timespec_to_usec(exec_time);
  load_count = (exec * (unsigned long int)1000) / (unsigned long int)p_load;
  waste_cpu_cycles((signed int)load_count);
}

// log_timing
// file rt-app_utils.c line 137
void log_timing(struct _IO_FILE *handler, struct _timing_point_t *t)
{
  fprintf(handler, "%d\t%lu\t%lu\t%lu\t%lu\t%lu\t%lu\t%lu\t%lu\t%ld", t->ind, t->period, t->min_et, t->max_et, t->rel_start_time, t->abs_start_time, t->end_time, t->deadline, t->duration, t->slack);
  fprintf(handler, "\n");
}

// main
// file rt-app.c line 576
signed int main(signed int argc, char **argv)
{
  struct timespec t_curr;
  struct timespec t_next;
  struct timespec t_start;
  struct _IO_FILE *gnuplot_script = (struct _IO_FILE *)(void *)0;
  signed int i;
  signed int res;
  struct _thread_data_t *tdata;
  char tmp[256l];
  parse_command_line(argc, argv, &opts);
  nthreads = opts.nthreads;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)nthreads * sizeof(unsigned long int) /*8ul*/ );
  threads = (unsigned long int *)return_value_malloc_1;
  signal(3, shutdown);
  signal(15, shutdown);
  signal(1, shutdown);
  signal(2, shutdown);
  if(!(opts.ftrace == 0))
  {

  __CPROVER_DUMP_L1:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> configuring ftrace\n");
    while((_Bool)0);
    strcpy(tmp, ft_data.debugfs);
    strcat(tmp, "/tracing/tracing_on");
    ft_data.trace_fd=open(tmp, 01);
    if(!(ft_data.trace_fd >= 0))
    {

    __CPROVER_DUMP_L3:
      ;
      do
        fprintf(stderr, "[rt-app] <error> Cannot open trace_fd file %s\n", (const void *)tmp);
      while((_Bool)0);
      exit(1);
    }

    strcpy(tmp, ft_data.debugfs);
    strcat(tmp, "/tracing/trace_marker");
    ft_data.marker_fd=open(tmp, 01);
    if(!(ft_data.trace_fd >= 0))
    {

    __CPROVER_DUMP_L6:
      ;
      do
        fprintf(stderr, "[rt-app] <error> Cannot open trace_marker file %s\n", (const void *)tmp);
      while((_Bool)0);
      exit(1);
    }

    do
      ftrace_write(ft_data.trace_fd, "1");
    while((_Bool)0);
    do
      ftrace_write(ft_data.marker_fd, "main creates threads\n");
    while((_Bool)0);
  }

  continue_running = 1;
  if(opts.calib_ns_per_loop == 0)
  {
    struct anonymous_1 calib_set;
    do
      __builtin_memset((void *)&calib_set, 0, sizeof(struct anonymous_1) /*128ul*/ );
    while((_Bool)0);
    unsigned long int __cpu = (unsigned long int)opts.calib_cpu;
    if(!(__cpu / 8ul >= sizeof(struct anonymous_1) /*128ul*/ ))
      ((unsigned long int *)(&calib_set)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&calib_set)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

    else
      (unsigned long int)0;
    static struct anonymous_1 orig_set;
    sched_getaffinity(0, sizeof(struct anonymous_1) /*128ul*/ , &orig_set);
    sched_setaffinity(0, sizeof(struct anonymous_1) /*128ul*/ , &calib_set);
    p_load=calibrate_cpu_cycles(3);
    sched_setaffinity(0, sizeof(struct anonymous_1) /*128ul*/ , &orig_set);

  __CPROVER_DUMP_L14:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> pLoad = %dns : calib_cpu %d\n", p_load, opts.calib_cpu);
    while((_Bool)0);
  }

  else
  {
    p_load = opts.calib_ns_per_loop;

  __CPROVER_DUMP_L17:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> pLoad = %dns\n", p_load);
    while((_Bool)0);
  }
  clock_gettime(1, &t_start);
  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
  {
    tdata = &opts.threads_data[(signed long int)i];
    if(tdata->wait_before_start == 0ul)
    {
      if(opts.spacing >= 1ul)
        tdata->wait_before_start = opts.spacing * (unsigned long int)(i + 1);

    }

    tdata->duration = opts.duration;
    tdata->main_app_start = t_start;
    tdata->lock_pages = opts.lock_pages;
    if(!(opts.logdir == ((char *)NULL)))
    {
      snprintf(tmp, (unsigned long int)256, "%s/%s-%s.log", opts.logdir, opts.logbasename, tdata->name);
      tdata->log_handler=fopen(tmp, "w");
      if(tdata->log_handler == ((struct _IO_FILE *)NULL))
      {

      __CPROVER_DUMP_L22:
        ;
        do
          fprintf(stderr, "[rt-app] <error> Cannot open logfile %s\n", (const void *)tmp);
        while((_Bool)0);
        exit(1);
      }

    }

    else
      tdata->log_handler = stdout;
    signed int return_value_pthread_create_2;
    return_value_pthread_create_2=pthread_create(&threads[(signed long int)i], (const union pthread_attr_t *)(void *)0, thread_body, (void *)tdata);
    if(!(return_value_pthread_create_2 == 0))
      goto exit_err;

  }
  if(!(opts.logdir == ((char *)NULL)) && !(opts.gnuplot == 0))
  {
    snprintf(tmp, (unsigned long int)256, "%s/%s-duration.plot", opts.logdir, opts.logbasename);
    gnuplot_script=fopen(tmp, "w+");
    snprintf(tmp, (unsigned long int)256, "%s-duration.eps", opts.logbasename);
    fprintf(gnuplot_script, "set terminal postscript enhanced color\nset output '%s'\nset grid\nset key outside right\nset title \"Measured exec time per period\"\nset xlabel \"Cycle start time [usec]\"\nset ylabel \"Exec Time [usec]\"\nplot ", (const void *)tmp);
    i = 0;
    for( ; !(i >= nthreads); i = i + 1)
    {
      snprintf(tmp, (unsigned long int)256, "%s/%s-duration.plot", opts.logdir, opts.logbasename);
      fprintf(gnuplot_script, "\"%s-%s.log\" u (_5/1000):9 w l title \"thread [%s] (%s)\"", opts.logbasename, (opts.threads_data + (signed long int)i)->name, (opts.threads_data + (signed long int)i)->name, (const void *)(opts.threads_data + (signed long int)i)->sched_policy_descr);
      if(i == nthreads + -1)
        fprintf(gnuplot_script, "\n");

      else
        fprintf(gnuplot_script, ", ");
    }
    fprintf(gnuplot_script, "set terminal wxt\nreplot\n");
    fclose(gnuplot_script);
    snprintf(tmp, (unsigned long int)256, "%s/%s-slack.plot", opts.logdir, opts.logbasename);
    gnuplot_script=fopen(tmp, "w+");
    snprintf(tmp, (unsigned long int)256, "%s-slack.eps", opts.logbasename);
    fprintf(gnuplot_script, "set terminal postscript enhanced color\nset output '%s'\nset grid\nset key outside right\nset title \"Slack (negative = tardiness)\"\nset xlabel \"Cycle start time [msec]\"\nset ylabel \"Slack/Tardiness [usec]\"\nplot ", (const void *)tmp);
    i = 0;
    for( ; !(i >= nthreads); i = i + 1)
    {
      fprintf(gnuplot_script, "\"%s-%s.log\" u (_5/1000):10 w l title \"thread [%s] (%s)\"", opts.logbasename, (opts.threads_data + (signed long int)i)->name, (opts.threads_data + (signed long int)i)->name, (const void *)(opts.threads_data + (signed long int)i)->sched_policy_descr);
      if(i == nthreads + -1)
        fprintf(gnuplot_script, ", 0 notitle\n");

      else
        fprintf(gnuplot_script, ", ");
    }
    fprintf(gnuplot_script, "set terminal wxt\nreplot\n");
    fclose(gnuplot_script);
  }

  if(opts.duration >= 1)
  {
    sleep(opts.duration);
    if(!(opts.ftrace == 0))
      do
        ftrace_write(ft_data.marker_fd, "main shutdown\n");
      while((_Bool)0);

    shutdown(15);
  }

  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
    pthread_join(threads[(signed long int)i], (void **)(void *)0);
  if(!(opts.ftrace == 0))
  {

  __CPROVER_DUMP_L42:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> stopping ftrace\n");
    while((_Bool)0);
    do
      ftrace_write(ft_data.marker_fd, "main ends\n");
    while((_Bool)0);
    do
      ftrace_write(ft_data.trace_fd, "0");
    while((_Bool)0);
    close(ft_data.trace_fd);
    close(ft_data.marker_fd);
  }

  exit(0);

exit_err:
  ;
  exit(1);
}

// msec_to_timespec
// file rt-app_utils.c line 61
struct timespec msec_to_timespec(unsigned int msec)
{
  struct timespec ts;
  ts.tv_sec = (signed long int)(msec / (unsigned int)1000);
  ts.tv_nsec = (signed long int)((msec % (unsigned int)1000) * (unsigned int)1000000);
  return ts;
}

// parse_command_line
// file rt-app_args.c line 354
void parse_command_line(signed int argc, char **argv, struct _rtapp_options_t *opts)
{
  struct stat config_file_stat;
  if(!(argc >= 2))
    usage((const char *)(void *)0, 0);

  signed int return_value_stat_2;
  return_value_stat_2=stat(argv[(signed long int)1], &config_file_stat);
  signed int return_value_strcmp_1;
  if(return_value_stat_2 == 0)
  {
    parse_config(argv[(signed long int)1], opts);
    goto __CPROVER_DUMP_L5;
  }

  else
  {
    return_value_strcmp_1=strcmp(argv[(signed long int)1], "-");
    if(return_value_strcmp_1 == 0)
    {
      parse_config_stdin(opts);
      goto __CPROVER_DUMP_L5;
    }

  }
  parse_command_line_options(argc, argv, opts);
  opts->resources = (struct _rtapp_resource_t *)(void *)0;
  opts->nresources = 0;

__CPROVER_DUMP_L5:
  ;
}

// parse_command_line_options
// file rt-app_args.c line 204
static void parse_command_line_options(signed int argc, char **argv, struct _rtapp_options_t *opts)
{
  char tmp[256l];
  signed char ch;
  signed int longopt_idx;
  signed int i;
  struct stat dirstat;
  opts->spacing = (unsigned long int)0;
  opts->gnuplot = 0;
  opts->lock_pages = 1;
  opts->duration = -1;
  opts->logbasename=strdup("rt-app");
  opts->logdir = (char *)(void *)0;
  opts->nthreads = 0;
  opts->ftrace = 0;
  opts->die_on_dmiss = 0;
  opts->pi_enabled = 0;
  opts->policy = (enum policy_t)other;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _thread_data_t) /*232ul*/ );
  opts->threads_data = (struct _thread_data_t *)return_value_malloc_1;
  signed int return_value_getopt_long_2;
  signed long int return_value_strtol_3;
  signed long int return_value_strtol_5;
  do
  {
    static struct option long_options[13l] = { { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 },
    { .name="fifo", .has_arg=0, .flag=((signed int *)NULL), .val=102 },
    { .name="rr", .has_arg=0, .flag=((signed int *)NULL), .val=114 },
    { .name="thread", .has_arg=1, .flag=((signed int *)NULL), .val=116 },
    { .name="spacing", .has_arg=1, .flag=((signed int *)NULL), .val=115 },
    { .name="logdir", .has_arg=1, .flag=((signed int *)NULL), .val=108 },
    { .name="baselog", .has_arg=1, .flag=((signed int *)NULL), .val=98 },
    { .name="gnuplot", .has_arg=1, .flag=((signed int *)NULL), .val=71 },
    { .name="duration", .has_arg=1, .flag=((signed int *)NULL), .val=68 },
    { .name="ftrace", .has_arg=0, .flag=((signed int *)NULL), .val=84 },
    { .name="pi_enabled", .has_arg=0, .flag=((signed int *)NULL), .val=84 },
    { .name="die_on_dmiss", .has_arg=0, .flag=((signed int *)NULL), .val=77 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
    return_value_getopt_long_2=getopt_long(argc, argv, "D:GKhfrb:s:l:t:TM", long_options, &longopt_idx);
    ch = (signed char)return_value_getopt_long_2;
    if((signed int)ch == -1)
      break;

    switch((signed int)ch)
    {
      case 104:
      {
        usage((const char *)(void *)0, 0);
        break;
      }
      case 102:
      {
        if(!((signed int)opts->policy == other))
          usage("Cannot set multiple policies", 3);

        opts->policy = (enum policy_t)fifo;
        break;
      }
      case 114:
      {
        if(!((signed int)opts->policy == other))
          usage("Cannot set multiple policies", 3);

        opts->policy = (enum policy_t)rr;
        break;
      }
      case 98:
      {
        if(opts->logdir == ((char *)NULL))
          opts->logdir=strdup(".");

        opts->logbasename=strdup(optarg);
        break;
      }
      case 115:
      {
        return_value_strtol_3=strtol(optarg, (char ** restrict )(void *)0, 0);
        opts->spacing = (unsigned long int)return_value_strtol_3;
        break;
      }
      case 108:
      {
        opts->logdir=strdup(optarg);
        lstat(opts->logdir, &dirstat);
        if(!((61440u & dirstat.st_mode) == 16384u))
          usage("Cannot stat log directory", 3);

        break;
      }
      case 116:
      {
        if(opts->nthreads >= 1)
        {
          void *return_value_realloc_4;
          return_value_realloc_4=realloc((void *)opts->threads_data, (unsigned long int)(opts->nthreads + 1) * sizeof(struct _thread_data_t) /*232ul*/ );
          opts->threads_data = (struct _thread_data_t *)return_value_realloc_4;
        }

        parse_thread_args(optarg, opts->nthreads, &opts->threads_data[(signed long int)opts->nthreads], opts->policy);
        opts->nthreads = opts->nthreads + 1;
        break;
      }
      case 71:
      {
        opts->gnuplot = 1;
        break;
      }
      case 68:
      {
        return_value_strtol_5=strtol(optarg, (char ** restrict )(void *)0, 10);
        opts->duration = (signed int)return_value_strtol_5;
        if(!(opts->duration >= 0))
          usage("Cannot set negative duration", 3);

        break;
      }
      case 75:
      {
        opts->lock_pages = 0;
        break;
      }
      case 84:
      {
        opts->ftrace = 1;
        break;
      }
      case 80:
      {
        opts->pi_enabled = 1;
        break;
      }
      case 77:
      {
        opts->die_on_dmiss = 1;
        break;
      }
      default:
      {

      __CPROVER_DUMP_L22:
        ;
        do
          fprintf(stderr, "[rt-app] <error> Invalid option %c\n", ch);
        while((_Bool)0);
        usage((const char *)(void *)0, 3);
      }
    }
  }
  while((_Bool)1);
  if(!(opts->nthreads >= 1))
    usage("You have to set parameters for at least one thread", 3);

}

// parse_config
// file rt-app_parse_config.h line 46
void parse_config(const char *filename, struct _rtapp_options_t *opts)
{
  signed int done;
  char *fn;
  fn=strdup(filename);
  struct json_object *js;

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  js=json_object_from_file(fn);
  get_opts_from_json_object(js, opts);
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// parse_config_stdin
// file rt-app_parse_config.c line 666
void parse_config_stdin(struct _rtapp_options_t *opts)
{
  unsigned long int in_length;
  char buf[4096l];
  struct json_object *js;

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  in_length=fread((void *)buf, sizeof(char) /*1ul*/ , (unsigned long int)4096, stdin);
  buf[(signed long int)in_length] = (char)0;
  js=json_tokener_parse(buf);
  get_opts_from_json_object(js, opts);
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// parse_global
// file rt-app_parse_config.c line 582
static void parse_global(struct json_object *global, struct _rtapp_options_t *opts)
{
  char *policy;
  char *cal_str;
  struct json_object *cal_obj;
  signed int scan_cnt;

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  signed int return_value_get_int_value_from_1;
  return_value_get_int_value_from_1=get_int_value_from(global, "spacing", (signed int)1, 0);
  opts->spacing = (unsigned long int)return_value_get_int_value_from_1;
  opts->duration=get_int_value_from(global, "duration", (signed int)1, -1);
  opts->gnuplot=get_bool_value_from(global, "gnuplot", (signed int)1, 0);
  policy=get_string_value_from(global, "default_policy", (signed int)1, "SCHED_OTHER");
  signed int return_value_string_to_policy_2;
  return_value_string_to_policy_2=string_to_policy(policy, &opts->policy);
  if(!(return_value_string_to_policy_2 == 0))
  {

  __CPROVER_DUMP_L3:
    ;
    do
      fprintf(stderr, "[rt-app] <crit> [json] Invalid policy %s\n", policy);
    while((_Bool)0);
    exit(2);
  }

  cal_obj=get_in_object(global, "calibration", (signed int)1);
  if(cal_obj == ((struct json_object *)NULL))
  {
    opts->calib_cpu = 0;
    opts->calib_ns_per_loop = 0;

  __CPROVER_DUMP_L6:
    ;
    do
      fprintf(stderr, "[rt-app] <error> missing calibration setting force CPU0\n");
    while((_Bool)0);
  }

  else
  {
    signed int return_value_json_object_is_type_3;
    return_value_json_object_is_type_3=json_object_is_type(cal_obj, (enum json_type)json_type_int);
    if(!(return_value_json_object_is_type_3 == 0))
    {
      opts->calib_ns_per_loop=json_object_get_int(cal_obj);

    __CPROVER_DUMP_L9:
      ;
      while((_Bool)0)
        ;
    }

    else
    {
      cal_str=get_string_value_from(global, "calibration", (signed int)1, "CPU0");
      scan_cnt=sscanf(cal_str, "CPU%d", &opts->calib_cpu);
      if(scan_cnt == 0)
      {

      __CPROVER_DUMP_L12:
        ;
        do
          fprintf(stderr, "[rt-app] <crit> [json] Invalid calibration CPU%d\n", opts->calib_cpu);
        while((_Bool)0);
        exit(2);
      }


    __CPROVER_DUMP_L14:
      ;
      while((_Bool)0)
        ;
    }
  }
  opts->logdir=get_string_value_from(global, "logdir", (signed int)1, (const char *)(void *)0);
  opts->lock_pages=get_bool_value_from(global, "lock_pages", (signed int)1, 1);
  opts->logbasename=get_string_value_from(global, "log_basename", (signed int)1, "rt-app");
  opts->ftrace=get_bool_value_from(global, "ftrace", (signed int)1, 0);
  opts->pi_enabled=get_bool_value_from(global, "pi_enabled", (signed int)1, 0);
}

// parse_legacy_resources
// file rt-app_parse_config.c line 241
static void parse_legacy_resources(signed int nresources, struct _rtapp_options_t *opts)
{
  signed int i;
  char name[5l];

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _rtapp_resource_t) /*72ul*/  * (unsigned long int)nresources);
  opts->resources = (struct _rtapp_resource_t *)return_value_malloc_1;
  i = 0;
  for( ; !(i >= nresources); i = i + 1)
  {
    (opts->resources + (signed long int)i)->index = i;
    snprintf(name, (unsigned long int)5, "%d", i);
    (opts->resources + (signed long int)i)->name=strdup(name);
    init_mutex_resource(&opts->resources[(signed long int)i], opts);
  }
  opts->nresources = nresources;
}

// parse_resource_data
// file rt-app_parse_config.c line 203
static void parse_resource_data(char *name, struct json_object *obj, signed int idx, struct _rtapp_resource_t *data, const struct _rtapp_options_t *opts)
{
  char *type;
  char *target;
  char def_type[16l];
  signed int duration;

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  data->index = idx;
  data->name=strdup(name);
  resource_to_string((enum resource_t)0, def_type);
  type=get_string_value_from(obj, "type", (signed int)1, def_type);
  if(!(type == ((char *)NULL)))
  {
    signed int return_value_string_to_resource_1;
    return_value_string_to_resource_1=string_to_resource(type, &data->type);
    if(!(return_value_string_to_resource_1 == 0))
    {

    __CPROVER_DUMP_L3:
      ;
      do
        fprintf(stderr, "[rt-app] <crit> [json]         Invalid type of resource %s\n", type);
      while((_Bool)0);
      exit(2);
    }

  }

  switch((signed int)data->type)
  {
    case rtapp_mutex:
    {
      init_mutex_resource(data, opts);
      goto __CPROVER_DUMP_L10;
    }
    case rtapp_wait:
    {
      init_cond_resource(data, opts);
      goto __CPROVER_DUMP_L10;
    }
    case rtapp_signal:

    case rtapp_broadcast:
    {
      target=get_string_value_from(obj, "target", (signed int)0, (const char *)(void *)0);
      init_signal_resource(data, opts, target);
    }
    default:

      __CPROVER_DUMP_L10:
        ;
  }
}

// parse_resources
// file rt-app_parse_config.c line 259
static void parse_resources(struct json_object *resources, struct _rtapp_options_t *opts)
{
  signed int i;
  struct lh_entry *entry;
  char *key;
  struct json_object *val;
  signed int idx;

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  signed int return_value_json_object_is_type_7;
  return_value_json_object_is_type_7=json_object_is_type(resources, (enum json_type)json_type_int);
  struct lh_entry *tmp_statement_expression_3;
  struct lh_entry *tmp_statement_expression_6;
  if(!(return_value_json_object_is_type_7 == 0))
  {
    signed int return_value_json_object_get_int_1;
    return_value_json_object_get_int_1=json_object_get_int(resources);
    parse_legacy_resources(return_value_json_object_get_int_1, opts);
  }

  else
  {
    opts->nresources = 0;
    idx = 0;
    struct lh_table *return_value_json_object_get_object_2;
    return_value_json_object_get_object_2=json_object_get_object(resources);
    entry = return_value_json_object_get_object_2->head;
    do
    {
      if(!(entry == ((struct lh_entry *)NULL)))
      {
        key = (char *)entry->k;
        val = (struct json_object *)entry->v;
      }

      tmp_statement_expression_3 = entry;
      if(tmp_statement_expression_3 == ((struct lh_entry *)NULL))
        break;

      opts->nresources = opts->nresources + 1;
      entry = entry->next;
      idx = idx + 1;
    }
    while((_Bool)1);

  __CPROVER_DUMP_L7:
    ;
    while((_Bool)0)
      ;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(struct _rtapp_resource_t) /*72ul*/  * (unsigned long int)opts->nresources);
    opts->resources = (struct _rtapp_resource_t *)return_value_malloc_4;
    idx = 0;
    struct lh_table *return_value_json_object_get_object_5;
    return_value_json_object_get_object_5=json_object_get_object(resources);
    entry = return_value_json_object_get_object_5->head;
    do
    {
      if(!(entry == ((struct lh_entry *)NULL)))
      {
        key = (char *)entry->k;
        val = (struct json_object *)entry->v;
      }

      tmp_statement_expression_6 = entry;
      if(tmp_statement_expression_6 == ((struct lh_entry *)NULL))
        break;

      parse_resource_data(key, val, idx, &opts->resources[(signed long int)idx], opts);
      entry = entry->next;
      idx = idx + 1;
    }
    while((_Bool)1);
  }
}

// parse_tasks
// file rt-app_parse_config.c line 564
static void parse_tasks(struct json_object *tasks, struct _rtapp_options_t *opts)
{
  struct lh_entry *entry;
  char *key;
  struct json_object *val;
  signed int idx;

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  opts->nthreads = 0;
  idx = 0;
  struct lh_table *return_value_json_object_get_object_1;
  return_value_json_object_get_object_1=json_object_get_object(tasks);
  entry = return_value_json_object_get_object_1->head;
  struct lh_entry *tmp_statement_expression_2;
  do
  {
    if(!(entry == ((struct lh_entry *)NULL)))
    {
      key = (char *)entry->k;
      val = (struct json_object *)entry->v;
    }

    tmp_statement_expression_2 = entry;
    if(tmp_statement_expression_2 == ((struct lh_entry *)NULL))
      break;

    opts->nthreads = opts->nthreads + 1;
    entry = entry->next;
    idx = idx + 1;
  }
  while((_Bool)1);

__CPROVER_DUMP_L6:
  ;
  while((_Bool)0)
    ;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct _thread_data_t) /*232ul*/  * (unsigned long int)opts->nthreads);
  opts->threads_data = (struct _thread_data_t *)return_value_malloc_3;
  idx = 0;
  struct lh_table *return_value_json_object_get_object_4;
  return_value_json_object_get_object_4=json_object_get_object(tasks);
  entry = return_value_json_object_get_object_4->head;
  struct lh_entry *tmp_statement_expression_5;
  do
  {
    if(!(entry == ((struct lh_entry *)NULL)))
    {
      key = (char *)entry->k;
      val = (struct json_object *)entry->v;
    }

    tmp_statement_expression_5 = entry;
    if(tmp_statement_expression_5 == ((struct lh_entry *)NULL))
      break;

    parse_thread_data(key, val, idx, &opts->threads_data[(signed long int)idx], opts);
    entry = entry->next;
    idx = idx + 1;
  }
  while((_Bool)1);
}

// parse_thread_args
// file rt-app_args.c line 71
void parse_thread_args(char *arg, signed int idx, struct _thread_data_t *tdata, enum policy_t def_policy)
{
  char *str;
  str=strdup(arg);
  char *token;
  signed long int period;
  signed long int exec;
  signed long int dline;
  char tmp[256l];
  signed int i = 0;
  signed int cpu;
  dline = (signed long int)0;
  token=strtok(str, ":");
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(char) /*1ul*/  * (unsigned long int)5);
  tdata->name = (char *)return_value_malloc_1;
  tdata->ind = idx;
  snprintf(tdata->name, (unsigned long int)1, "t%d", tdata->ind);
  tdata->sched_prio = 10;
  tdata->sched_policy = def_policy;
  tdata->cpuset = (struct anonymous_1 *)(void *)0;
  tdata->cpuset_str = (char *)(void *)0;
  signed int return_value_strcmp_5;
  signed int return_value_strcmp_4;
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_7;
  signed long int return_value_strtol_8;
  while(!(token == ((char *)NULL)))
  {
    switch(i)
    {
      case 0:
      {
        period=strtol(token, (char ** restrict )(void *)0, 10);
        if(!(period >= 1l))
          usage("Cannot set negative period.", 3);

        tdata->period=usec_to_timespec((unsigned long int)period);
        i = i + 1;
        break;
      }
      case 1:
      {
        exec=strtol(token, (char ** restrict )(void *)0, 10);
        if(!(period >= exec))
          usage("Exec time cannot be greater than period.", 3);

        if(!(exec >= 1l))
          usage("Cannot set negative exec time", 3);

        tdata->min_et=usec_to_timespec((unsigned long int)exec);
        tdata->max_et=usec_to_timespec((unsigned long int)exec);
        i = i + 1;
        break;
      }
      case 2:
      {
        return_value_strcmp_5=strcmp(token, "d");
        if(return_value_strcmp_5 == 0)
          tdata->sched_policy = (enum policy_t)deadline;

        else
        {
          return_value_strcmp_4=strcmp(token, "f");
          if(return_value_strcmp_4 == 0)
            tdata->sched_policy = (enum policy_t)fifo;

          else
          {
            return_value_strcmp_3=strcmp(token, "r");
            if(return_value_strcmp_3 == 0)
              tdata->sched_policy = (enum policy_t)rr;

            else
            {
              return_value_strcmp_2=strcmp(token, "o");
              if(return_value_strcmp_2 == 0)
                tdata->sched_policy = (enum policy_t)other;

              else
              {
                snprintf(tmp, (unsigned long int)256, "Invalid scheduling policy %s in %s", token, arg);
                usage(tmp, 3);
              }
            }
          }
        }
        policy_to_string(tdata->sched_policy, tdata->sched_policy_descr);
        i = i + 1;
        break;
      }
      case 3:
      {
        return_value_strcmp_7=strcmp(token, "-");
        if(return_value_strcmp_7 == 0)
          tdata->cpuset = (struct anonymous_1 *)(void *)0;

        else
        {
          void *return_value_malloc_6;
          return_value_malloc_6=malloc(sizeof(struct anonymous_1) /*128ul*/ );
          tdata->cpuset = (struct anonymous_1 *)return_value_malloc_6;
          tdata->cpuset_str=strdup(token);
        }
        i = i + 1;
        break;
      }
      case 4:
      {
        return_value_strtol_8=strtol(token, (char ** restrict )(void *)0, 10);
        tdata->sched_prio = (signed int)return_value_strtol_8;
        i = i + 1;
        break;
      }
      case 5:
      {
        dline=strtol(token, (char ** restrict )(void *)0, 10);
        if(!(dline >= exec))
          usage("Deadline cannot be less than execution time", 3);

        if(!(period >= dline))
          usage("Deadline cannot be greater than period", 3);

        if(!(dline >= 1l))
          usage("Cannot set negative deadline", 3);

        tdata->deadline=usec_to_timespec((unsigned long int)dline);
        i = i + 1;
      }
    }
    token=strtok((char *)(void *)0, ":");
  }
  if(!(i >= 2))
  {
    printf("Period and exec time are mandatory\n");
    exit(3);
  }

  if(dline == 0l)
    tdata->deadline = tdata->period;

  if(!(tdata->cpuset_str == ((char *)NULL)))
  {
    snprintf(tmp, (unsigned long int)256, "%s", tdata->cpuset_str);
    token=strtok(tmp, ",");
    while(!(token == ((char *)NULL)) && !(i >= 1000))
    {
      signed long int return_value_strtol_9;
      return_value_strtol_9=strtol(token, (char ** restrict )(void *)0, 10);
      cpu = (signed int)return_value_strtol_9;
      unsigned long int __cpu = (unsigned long int)cpu;
      if(!(__cpu / 8ul >= sizeof(struct anonymous_1) /*128ul*/ ))
        ((unsigned long int *)tdata->cpuset->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)tdata->cpuset->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

      else
        (unsigned long int)0;
      strtok((char *)(void *)0, ",");
      i = i + 1;
    }
  }

  else
    tdata->cpuset_str=strdup("-");
  free((void *)str);
}

// parse_thread_data
// file rt-app_parse_config.c line 446
static void parse_thread_data(char *name, struct json_object *obj, signed int idx, struct _thread_data_t *data, const struct _rtapp_options_t *opts)
{
  signed long int exec;
  signed long int period;
  signed long int dline;
  char *policy;
  char def_policy[16l];
  struct array_list *cpuset;
  struct json_object *cpuset_obj;
  struct json_object *cpu;
  struct json_object *resources;
  struct json_object *locks;
  signed int i;
  signed int cpu_idx;
  signed int prior_def;

__CPROVER_DUMP_L1:
  ;
  while((_Bool)0)
    ;
  data->ind = idx;
  data->name=strdup(name);
  data->lock_pages = opts->lock_pages;
  data->cpuset = (struct anonymous_1 *)(void *)0;
  data->cpuset_str = (char *)(void *)0;
  data->loop=get_int_value_from(obj, "loop", (signed int)1, -1);
  signed int return_value_get_int_value_from_1;
  return_value_get_int_value_from_1=get_int_value_from(obj, "period", (signed int)0, 0);
  period = (signed long int)return_value_get_int_value_from_1;
  if(!(period >= 1l))
  {

  __CPROVER_DUMP_L3:
    ;
    do
      fprintf(stderr, "[rt-app] <crit> [json]         Cannot set negative period\n");
    while((_Bool)0);
    exit(2);
  }

  data->period=usec_to_timespec((unsigned long int)period);
  signed int return_value_get_int_value_from_2;
  return_value_get_int_value_from_2=get_int_value_from(obj, "exec", (signed int)0, 0);
  exec = (signed long int)return_value_get_int_value_from_2;
  if(!(period >= exec))
  {

  __CPROVER_DUMP_L6:
    ;
    do
      fprintf(stderr, "[rt-app] <crit> [json]         Exec must be greather than period\n");
    while((_Bool)0);
    exit(2);
  }

  if(!(exec >= 0l))
  {

  __CPROVER_DUMP_L9:
    ;
    do
      fprintf(stderr, "[rt-app] <crit> [json]         Cannot set negative exec time\n");
    while((_Bool)0);
    exit(2);
  }

  data->min_et=usec_to_timespec((unsigned long int)exec);
  data->max_et=usec_to_timespec((unsigned long int)exec);
  signed int return_value_get_int_value_from_3;
  return_value_get_int_value_from_3=get_int_value_from(obj, "deadline", (signed int)1, (signed int)period);
  dline = (signed long int)return_value_get_int_value_from_3;
  if(!(dline >= exec))
  {

  __CPROVER_DUMP_L12:
    ;
    do
      fprintf(stderr, "[rt-app] <crit> [json]         Deadline cannot be less than exec time\n");
    while((_Bool)0);
    exit(2);
  }

  if(!(period >= dline))
  {

  __CPROVER_DUMP_L15:
    ;
    do
      fprintf(stderr, "[rt-app] <crit> [json]         Deadline cannot be greater than period\n");
    while((_Bool)0);
    exit(2);
  }

  data->deadline=usec_to_timespec((unsigned long int)dline);
  policy_to_string(opts->policy, def_policy);
  policy=get_string_value_from(obj, "policy", (signed int)1, def_policy);
  if(!(policy == ((char *)NULL)))
  {
    signed int return_value_string_to_policy_4;
    return_value_string_to_policy_4=string_to_policy(policy, &data->sched_policy);
    if(!(return_value_string_to_policy_4 == 0))
    {

    __CPROVER_DUMP_L18:
      ;
      do
        fprintf(stderr, "[rt-app] <crit> [json]         Invalid policy %s\n", policy);
      while((_Bool)0);
      exit(2);
    }

  }

  policy_to_string(data->sched_policy, data->sched_policy_descr);
  if((signed int)data->sched_policy == other)
    prior_def = 0;

  else
    prior_def = 10;
  data->sched_prio=get_int_value_from(obj, "priority", (signed int)1, prior_def);
  signed int return_value_get_int_value_from_5;
  return_value_get_int_value_from_5=get_int_value_from(obj, "delay", (signed int)1, 0);
  data->wait_before_start = (unsigned long int)return_value_get_int_value_from_5;
  data->sleep=get_bool_value_from(obj, "sleep", (signed int)1, 1);
  cpuset_obj=get_in_object(obj, "cpus", (signed int)1);
  signed int return_value_json_object_array_length_8;
  if(!(cpuset_obj == ((struct json_object *)NULL)))
  {
    assure_type_is(cpuset_obj, obj, "cpus", (enum json_type)json_type_array);
    const char *return_value_json_object_to_json_string_6;
    return_value_json_object_to_json_string_6=json_object_to_json_string(cpuset_obj);
    data->cpuset_str=strdup(return_value_json_object_to_json_string_6);
    void *return_value_malloc_7;
    return_value_malloc_7=malloc(sizeof(struct anonymous_1) /*128ul*/ );
    data->cpuset = (struct anonymous_1 *)return_value_malloc_7;
    cpuset=json_object_get_array(cpuset_obj);
    do
      __builtin_memset((void *)data->cpuset, 0, sizeof(struct anonymous_1) /*128ul*/ );
    while((_Bool)0);
    i = 0;
    do
    {
      return_value_json_object_array_length_8=json_object_array_length(cpuset_obj);
      if(i >= return_value_json_object_array_length_8)
        break;

      cpu=json_object_array_get_idx(cpuset_obj, i);
      cpu_idx=json_object_get_int(cpu);
      unsigned long int __cpu = (unsigned long int)cpu_idx;
      if(!(__cpu / 8ul >= sizeof(struct anonymous_1) /*128ul*/ ))
        ((unsigned long int *)data->cpuset->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)data->cpuset->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

      else
        (unsigned long int)0;
      i = i + 1;
    }
    while((_Bool)1);
  }

  else
  {
    data->cpuset_str=strdup("-");
    data->cpuset = (struct anonymous_1 *)(void *)0;
  }

__CPROVER_DUMP_L30:
  ;
  while((_Bool)0)
    ;
  resources=get_in_object(obj, "resources", (signed int)1);
  locks=get_in_object(obj, "lock_order", (signed int)1);
  if(!(locks == ((struct json_object *)NULL)))
  {
    assure_type_is(locks, obj, "lock_order", (enum json_type)json_type_array);

  __CPROVER_DUMP_L32:
    ;
    while((_Bool)0)
      ;
    if(!(resources == ((struct json_object *)NULL)))
    {
      assure_type_is(resources, obj, "resources", (enum json_type)json_type_object);

    __CPROVER_DUMP_L34:
      ;
      while((_Bool)0)
        ;
    }

    parse_thread_resources(opts, locks, resources, data);
  }

}

// parse_thread_resources
// file rt-app_parse_config.c line 365
static void parse_thread_resources(const struct _rtapp_options_t *opts, struct json_object *locks, struct json_object *task_resources, struct _thread_data_t *data)
{
  signed int i;
  signed int j;
  signed int usage_usec;
  struct json_object *res;
  signed int res_dur;
  char res_name[5l];
  const char *cur_res_name;
  struct _rtapp_resource_access_list_t *tmp;
  struct _rtapp_resource_access_list_t *head;
  struct _rtapp_resource_access_list_t *last;
  char debug_msg[512l];
  char tmpmsg[512l];
  data->nblockages=json_object_array_length(locks);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _rtapp_tasks_resource_list_t) /*24ul*/  * (unsigned long int)data->nblockages);
  data->blockages = (struct _rtapp_tasks_resource_list_t *)return_value_malloc_1;
  i = 0;
  for( ; !(i >= data->nblockages); i = i + 1)
  {
    res=json_object_array_get_idx(locks, i);
    signed int return_value_json_object_is_type_4;
    return_value_json_object_is_type_4=json_object_is_type(res, (enum json_type)json_type_string);
    if(return_value_json_object_is_type_4 == 0)
    {
      signed int return_value_json_object_is_type_3;
      return_value_json_object_is_type_3=json_object_is_type(res, (enum json_type)json_type_int);
      if(return_value_json_object_is_type_3 == 0)
      {

      __CPROVER_DUMP_L2:
        ;
        do
          fprintf(stderr, "[rt-app] <crit> Invalid resource index\n");
        while((_Bool)0);
        exit(2);
      }

      else
      {
        signed int return_value_json_object_get_int_2;
        return_value_json_object_get_int_2=json_object_get_int(res);
        snprintf(res_name, (unsigned long int)5, "%d", return_value_json_object_get_int_2);
        cur_res_name = res_name;
      }

    __CPROVER_DUMP_L6:
      ;
      do
        fprintf(stderr, "[rt-app] <crit> Legacy resource index\n");
      while((_Bool)0);
    }

    else
      cur_res_name=json_object_get_string(res);
    (data->blockages + (signed long int)i)->usage=usec_to_timespec((unsigned long int)0);
    (data->blockages + (signed long int)i)->acl = (struct _rtapp_resource_access_list_t *)(void *)0;
    serialize_acl(&(data->blockages + (signed long int)i)->acl, (char *)cur_res_name, task_resources, opts->resources);
    tmp = (data->blockages + (signed long int)i)->acl;
    head = (data->blockages + (signed long int)i)->acl;
    do
    {
      last = tmp;
      tmp = tmp->next;
    }
    while(!(tmp == ((struct _rtapp_resource_access_list_t *)NULL)));
    if(!(last == head))
    {
      (data->blockages + (signed long int)i)->acl = head->next;
      (data->blockages + (signed long int)i)->acl->prev = (struct _rtapp_resource_access_list_t *)(void *)0;
      last->next = head;
      head->next = (struct _rtapp_resource_access_list_t *)(void *)0;
      head->prev = last;
    }

    tmp = (data->blockages + (signed long int)i)->acl;
    debug_msg[(signed long int)0] = (char)0;
    do
    {
      snprintf(tmpmsg, (unsigned long int)512, "%s %d", (const void *)debug_msg, tmp->res->index);
      strncpy(debug_msg, tmpmsg, (unsigned long int)512);
      last = tmp;
      tmp = tmp->next;
    }
    while(!(tmp == ((struct _rtapp_resource_access_list_t *)NULL)));

  __CPROVER_DUMP_L13:
    ;
    while((_Bool)0)
      ;
    res=get_in_object(task_resources, cur_res_name, (signed int)1);
    if(res == ((struct json_object *)NULL))
    {
      usage_usec = 0;
      (data->blockages + (signed long int)i)->usage=usec_to_timespec((unsigned long int)0);
    }

    else
    {
      assure_type_is(res, task_resources, res_name, (enum json_type)json_type_object);
      usage_usec=get_int_value_from(res, "duration", (signed int)1, 0);
      (data->blockages + (signed long int)i)->usage=usec_to_timespec((unsigned long int)usage_usec);
    }

  __CPROVER_DUMP_L16:
    ;
    while((_Bool)0)
      ;
  }
}

// policy_to_string
// file rt-app_utils.c line 192
signed int policy_to_string(enum policy_t policy, char *policy_name)
{
  switch((signed int)policy)
  {
    case other:
    {
      strcpy(policy_name, "SCHED_OTHER");
      break;
    }
    case rr:
    {
      strcpy(policy_name, "SCHED_RR");
      break;
    }
    case fifo:
    {
      strcpy(policy_name, "SCHED_FIFO");
      break;
    }
    case deadline:
    {
      strcpy(policy_name, "SCHED_DEADLINE");
      break;
    }
    default:
      return 1;
  }
  return 0;
}

// put_resource
// file rt-app.c line 147
void put_resource(struct _rtapp_resource_access_list_t *lock)
{
  if((signed int)lock->res->type == rtapp_mutex)
    pthread_mutex_unlock(&lock->res->res.mtx.obj);

}

// resource_to_string
// file rt-app_utils.c line 241
signed int resource_to_string(enum resource_t resource, char *resource_name)
{
  switch((signed int)resource)
  {
    case rtapp_mutex:
    {
      strcpy(resource_name, "mutex");
      break;
    }
    case rtapp_wait:
    {
      strcpy(resource_name, "wait");
      break;
    }
    case rtapp_signal:
    {
      strcpy(resource_name, "signal");
      break;
    }
    case rtapp_broadcast:
    {
      strcpy(resource_name, "broadcast");
      break;
    }
    case rtapp_sleep:
    {
      strcpy(resource_name, "sleep");
      break;
    }
    case rtapp_run:
    {
      strcpy(resource_name, "run");
      break;
    }
    default:
      return 1;
  }
  return 0;
}

// run
// file rt-app.c line 153
void run(signed int ind, struct timespec *min, struct timespec *max, struct _rtapp_tasks_resource_list_t *blockages, signed int nblockages, struct timespec *t_start)
{
  signed int i;
  signed int busywait = 1;
  struct timespec t_exec;
  struct _rtapp_resource_access_list_t *lock;
  struct _rtapp_resource_access_list_t *last;
  t_exec = *min;
  i = 0;
  for( ; !(i >= nblockages); i = i + 1)
  {
    lock = (blockages + (signed long int)i)->acl;
    for( ; !(lock == ((struct _rtapp_resource_access_list_t *)NULL)) && !(continue_running == 0); lock = lock->next)
    {

    __CPROVER_DUMP_L3:
      ;
      while((_Bool)0)
        ;
      if(!(opts.ftrace == 0))
        do
          ftrace_write(ft_data.marker_fd, "[%d] locking %d", ind, lock->res->index);
        while((_Bool)0);

      busywait=get_resource(lock, &(blockages + (signed long int)i)->usage);
      last = lock;
    }
    if(i == 0 && !(t_start == ((struct timespec *)NULL)))
      clock_gettime(1, t_start);

    if(!(busywait == 0))
    {

    __CPROVER_DUMP_L9:
      ;
      while((_Bool)0)
        ;
      if(!(opts.ftrace == 0))
        do
        {
          unsigned long int return_value_timespec_to_usec_2;
          return_value_timespec_to_usec_2=timespec_to_usec(&(blockages + (signed long int)i)->usage);
          ftrace_write(ft_data.marker_fd, "[%d] busywait for %d", ind, return_value_timespec_to_usec_2);
        }
        while((_Bool)0);

      loadwait(&(blockages + (signed long int)i)->usage);
      t_exec=timespec_sub(&t_exec, &(blockages + (signed long int)i)->usage);
    }

    lock = last;
    for( ; !(lock == ((struct _rtapp_resource_access_list_t *)NULL)); lock = lock->prev)
    {

    __CPROVER_DUMP_L15:
      ;
      while((_Bool)0)
        ;
      if(!(opts.ftrace == 0))
        do
          ftrace_write(ft_data.marker_fd, "[%d] unlocking %d", ind, lock->res->index);
        while((_Bool)0);

      put_resource(lock);
    }
  }

__CPROVER_DUMP_L20:
  ;
  while((_Bool)0)
    ;
  if(!(opts.ftrace == 0))
    do
    {
      unsigned long int return_value_timespec_to_usec_4;
      return_value_timespec_to_usec_4=timespec_to_usec(&t_exec);
      ftrace_write(ft_data.marker_fd, "[%d] busywait for %d", ind, return_value_timespec_to_usec_4);
    }
    while((_Bool)0);

  loadwait(&t_exec);
}

// sched_getattr
// file dl_syscalls.c line 10
signed int sched_getattr(signed int pid, struct sched_attr_0 *attr, unsigned int size, unsigned int flags)
{
  signed int return_value_syscall_1;
  return_value_syscall_1=syscall(315, pid, attr, size, flags);
  return return_value_syscall_1;
}

// sched_setattr
// file dl_syscalls.c line 3
signed int sched_setattr(signed int pid, struct sched_attr_0 *attr, unsigned int flags)
{
  signed int return_value_syscall_1;
  return_value_syscall_1=syscall(314, pid, attr, flags);
  return return_value_syscall_1;
}

// serialize_acl
// file rt-app_parse_config.c line 295
static void serialize_acl(struct _rtapp_resource_access_list_t **acl, char *name, struct json_object *task_resources, struct _rtapp_resource_t *resources)
{
  signed int i;
  signed int idx;
  signed int found;
  struct json_object *access;
  struct json_object *res;
  struct json_object *next_res;
  struct _rtapp_resource_access_list_t *tmp;
  const char *next_name;
  idx=get_resource_index(name, resources);
  if(*acl == ((struct _rtapp_resource_access_list_t *)NULL))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct _rtapp_resource_access_list_t) /*24ul*/ );
    *acl = (struct _rtapp_resource_access_list_t *)return_value_malloc_1;
    (*acl)->res = &resources[(signed long int)idx];
    (*acl)->next = (struct _rtapp_resource_access_list_t *)(void *)0;
    (*acl)->prev = (struct _rtapp_resource_access_list_t *)(void *)0;
    tmp = *acl;
  }

  else
  {
    found = 0;
    tmp = *acl;
    for( ; !(tmp->next == ((struct _rtapp_resource_access_list_t *)NULL)); tmp = tmp->next)
      if(tmp->res->index == idx)
        found = 1;

    if(found == 0)
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct _rtapp_resource_access_list_t) /*24ul*/ );
      tmp->next = (struct _rtapp_resource_access_list_t *)return_value_malloc_2;
      tmp->next->next = (struct _rtapp_resource_access_list_t *)(void *)0;
      tmp->next->prev = tmp;
      tmp->next->res = &resources[(signed long int)idx];
    }

  }
  res=get_in_object(task_resources, name, (signed int)1);
  signed int return_value_json_object_array_length_3;
  if(!(res == ((struct json_object *)NULL)))
  {
    assure_type_is(res, task_resources, name, (enum json_type)json_type_object);
    access=get_in_object(res, "access", (signed int)1);
    if(!(access == ((struct json_object *)NULL)))
    {
      assure_type_is(access, res, "access", (enum json_type)json_type_array);
      i = 0;
      do
      {
        return_value_json_object_array_length_3=json_object_array_length(access);
        if(i >= return_value_json_object_array_length_3)
          break;

        char res_name[5l];
        next_res=json_object_array_get_idx(access, i);
        signed int return_value_json_object_is_type_6;
        return_value_json_object_is_type_6=json_object_is_type(next_res, (enum json_type)json_type_string);
        if(return_value_json_object_is_type_6 == 0)
        {
          signed int return_value_json_object_is_type_5;
          return_value_json_object_is_type_5=json_object_is_type(next_res, (enum json_type)json_type_int);
          if(return_value_json_object_is_type_5 == 0)
          {

          __CPROVER_DUMP_L9:
            ;
            do
              fprintf(stderr, "[rt-app] <crit> Invalid resource index\n");
            while((_Bool)0);
            exit(2);
          }

          else
          {
            signed int return_value_json_object_get_int_4;
            return_value_json_object_get_int_4=json_object_get_int(next_res);
            snprintf(res_name, (unsigned long int)5, "%d", return_value_json_object_get_int_4);
            next_name = res_name;
          }

        __CPROVER_DUMP_L13:
          ;
          do
            fprintf(stderr, "[rt-app] <crit> Legacy resource index\n");
          while((_Bool)0);
        }

        else
          next_name=json_object_get_string(next_res);
        serialize_acl(&(*acl), (char *)next_name, task_resources, resources);
        i = i + 1;
      }
      while((_Bool)1);
    }

  }

}

// shutdown
// file rt-app.c line 214
static void shutdown(signed int sig)
{
  signed int i;
  continue_running = 0;
  i = 0;
  for( ; !(i >= opts.nresources); i = i + 1)
    if((signed int)(opts.resources + (signed long int)i)->type == rtapp_signal || (signed int)(opts.resources + (signed long int)i)->type == rtapp_broadcast)
      pthread_cond_broadcast((opts.resources + (signed long int)i)->res.signal.target);

  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
    pthread_join(threads[(signed long int)i], (void **)(void *)0);
  if(!(opts.ftrace == 0))
  {

  __CPROVER_DUMP_L7:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> stopping ftrace\n");
    while((_Bool)0);
    do
      ftrace_write(ft_data.marker_fd, "main ends\n");
    while((_Bool)0);
    do
      ftrace_write(ft_data.trace_fd, "0");
    while((_Bool)0);
    close(ft_data.trace_fd);
    close(ft_data.marker_fd);
  }

  exit(0);
}

// string_to_policy
// file rt-app_utils.c line 169
signed int string_to_policy(const char *policy_name, enum policy_t *policy)
{
  signed int return_value_strcmp_4;
  return_value_strcmp_4=strcmp(policy_name, "SCHED_OTHER");
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(return_value_strcmp_4 == 0)
    *policy = (enum policy_t)other;

  else
  {
    return_value_strcmp_3=strcmp(policy_name, "SCHED_RR");
    if(return_value_strcmp_3 == 0)
      *policy = (enum policy_t)rr;

    else
    {
      return_value_strcmp_2=strcmp(policy_name, "SCHED_FIFO");
      if(return_value_strcmp_2 == 0)
        *policy = (enum policy_t)fifo;

      else
      {
        return_value_strcmp_1=strcmp(policy_name, "SCHED_DEADLINE");
        if(return_value_strcmp_1 == 0)
          *policy = (enum policy_t)deadline;

        else
          return 1;
      }
    }
  }
  return 0;
}

// string_to_resource
// file rt-app_utils.c line 221
signed int string_to_resource(const char *name, enum resource_t *resource)
{
  signed int return_value_strcmp_6;
  return_value_strcmp_6=strcmp(name, "mutex");
  signed int return_value_strcmp_5;
  signed int return_value_strcmp_4;
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(return_value_strcmp_6 == 0)
    *resource = (enum resource_t)rtapp_mutex;

  else
  {
    return_value_strcmp_5=strcmp(name, "signal");
    if(return_value_strcmp_5 == 0)
      *resource = (enum resource_t)rtapp_signal;

    else
    {
      return_value_strcmp_4=strcmp(name, "wait");
      if(return_value_strcmp_4 == 0)
        *resource = (enum resource_t)rtapp_wait;

      else
      {
        return_value_strcmp_3=strcmp(name, "broadcast");
        if(return_value_strcmp_3 == 0)
          *resource = (enum resource_t)rtapp_broadcast;

        else
        {
          return_value_strcmp_2=strcmp(name, "sleep");
          if(return_value_strcmp_2 == 0)
            *resource = (enum resource_t)rtapp_sleep;

          else
          {
            return_value_strcmp_1=strcmp(name, "run");
            if(return_value_strcmp_1 == 0)
              *resource = (enum resource_t)rtapp_run;

            else
              return 1;
          }
        }
      }
    }
  }
  return 0;
}

// thread_body
// file rt-app.c line 245
void * thread_body(void *arg)
{
  struct _thread_data_t *data = (struct _thread_data_t *)arg;
  struct sched_param param;
  struct timespec t_now;
  struct timespec t_next;
  unsigned long int t_start_usec;
  unsigned long int my_duration_usec;
  signed int nperiods;
  struct _timing_point_t *timings;
  struct _timing_point_t tmp_timing;
  struct _timing_point_t *curr_timing;
  signed int tid;
  struct sched_attr attr;
  unsigned int flags = (unsigned int)0;
  signed int ret;
  signed int i = 0;
  signed int j;
  if(!(data->cpuset == ((struct anonymous_1 *)NULL)))
  {

  __CPROVER_DUMP_L1:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> [%d] setting cpu affinity to CPU(s) %s\n", data->ind, data->cpuset_str);
    while((_Bool)0);
    unsigned long int return_value_pthread_self_1;
    return_value_pthread_self_1=pthread_self();
    ret=pthread_setaffinity_np(return_value_pthread_self_1, sizeof(struct anonymous_1) /*128ul*/ , data->cpuset);
    if(!(ret >= 0))
    {
      errno = ret;
      perror("pthread_setaffinity_np");
      exit(1);
    }

  }


__CPROVER_DUMP_L4:
  ;
  do
    fprintf(stderr, "[rt-app] <notice> [%d] Using %s policy:\n", data->ind, (const void *)data->sched_policy_descr);
  while((_Bool)0);
  unsigned long int return_value_pthread_self_2;
  unsigned long long int return_value_timespec_to_nsec_10;
  unsigned long long int return_value_timespec_to_nsec_11;
  switch((signed int)data->sched_policy)
  {
    case rr:

    case fifo:
    {
      fprintf(data->log_handler, "# Policy : %s\n", (signed int)data->sched_policy == rr ? "SCHED_RR" : "SCHED_FIFO");
      param.__sched_priority = data->sched_prio;
      return_value_pthread_self_2=pthread_self();
      ret=pthread_setschedparam(return_value_pthread_self_2, (signed int)data->sched_policy, &param);
      if(!(ret == 0))
      {
        errno = ret;
        perror("pthread_setschedparam");
        exit(1);
      }


    __CPROVER_DUMP_L7:
      ;
      do
      {
        unsigned long int return_value_timespec_to_usec_3;
        return_value_timespec_to_usec_3=timespec_to_usec(&data->period);
        unsigned long int return_value_timespec_to_usec_4;
        return_value_timespec_to_usec_4=timespec_to_usec(&data->min_et);
        unsigned long int return_value_timespec_to_usec_5;
        return_value_timespec_to_usec_5=timespec_to_usec(&data->deadline);
        fprintf(stderr, "[rt-app] <notice> [%d] starting thread with period: %lu, exec: %lu,deadline: %lu, priority: %d\n", data->ind, return_value_timespec_to_usec_3, return_value_timespec_to_usec_4, return_value_timespec_to_usec_5, data->sched_prio);
      }
      while((_Bool)0);
      break;
    }
    case other:
    {
      fprintf(data->log_handler, "# Policy : SCHED_OTHER\n");
      ret=sched_getattr(0, &attr, (unsigned int)sizeof(struct sched_attr) /*48ul*/ , (unsigned int)0);
      if(!(ret == 0))
      {

      __CPROVER_DUMP_L10:
        ;
        do
          fprintf(stderr, "[rt-app] <crit> [%d] sched_getattr returned %d\n", data->ind, ret);
        while((_Bool)0);
        errno = ret;
        perror("sched_getattr");
        exit(1);
      }

      attr.sched_policy = (unsigned int)data->sched_policy;
      _Bool tmp_if_expr_6;
      if(data->sched_prio >= 20)
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = data->sched_prio < -20 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_6)
      {

      __CPROVER_DUMP_L15:
        ;
        do
          fprintf(stderr, "[rt-app] <crit> [%d] sched_getattr %d nice invalid. Valid between -20 and 19\n", data->ind, data->sched_prio);
        while((_Bool)0);
        perror("sched_getattr");
        exit(1);
      }

      attr.sched_nice = data->sched_prio;
      ret=sched_setattr(0, &attr, (unsigned int)0);
      if(!(ret == 0))
      {

      __CPROVER_DUMP_L18:
        ;
        do
          fprintf(stderr, "[rt-app] <crit> [%d] sched_setattrreturned %d\n", data->ind, ret);
        while((_Bool)0);
        errno = ret;
        perror("sched_setattr");
        exit(1);
      }


    __CPROVER_DUMP_L20:
      ;
      do
      {
        unsigned long int return_value_timespec_to_usec_7;
        return_value_timespec_to_usec_7=timespec_to_usec(&data->period);
        unsigned long int return_value_timespec_to_usec_8;
        return_value_timespec_to_usec_8=timespec_to_usec(&data->min_et);
        unsigned long int return_value_timespec_to_usec_9;
        return_value_timespec_to_usec_9=timespec_to_usec(&data->deadline);
        fprintf(stderr, "[rt-app] <notice> [%d] starting thread with period: %lu, exec: %lu,deadline: %lu, nice: %d\n", data->ind, return_value_timespec_to_usec_7, return_value_timespec_to_usec_8, return_value_timespec_to_usec_9, data->sched_prio);
      }
      while((_Bool)0);
      data->lock_pages = 0;
      break;
    }
    case deadline:
    {
      fprintf(data->log_handler, "# Policy : SCHED_DEADLINE\n");
      tid=gettid();
      attr.size = (unsigned int)sizeof(struct sched_attr) /*48ul*/ ;
      attr.sched_flags = (unsigned long long int)0;
      attr.sched_policy = (unsigned int)6;
      attr.__sched_priority = (unsigned int)0;
      return_value_timespec_to_nsec_10=timespec_to_nsec(&data->max_et);
      return_value_timespec_to_nsec_11=timespec_to_nsec(&data->max_et);
      attr.sched_runtime = return_value_timespec_to_nsec_10 + (return_value_timespec_to_nsec_11 / (unsigned long int)100) * (unsigned long int)5;
      attr.sched_deadline=timespec_to_nsec(&data->period);
      attr.sched_period=timespec_to_nsec(&data->period);
      break;
    }
    default:
    {

    __CPROVER_DUMP_L23:
      ;
      do
        fprintf(stderr, "[rt-app] <error> Unknown scheduling policy %d\n", data->sched_policy);
      while((_Bool)0);
      exit(1);
    }
  }
  if(data->lock_pages == 1)
  {

  __CPROVER_DUMP_L26:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> [%d] Locking pages in memory\n", data->ind);
    while((_Bool)0);
    ret=mlockall(1 | 2);
    if(!(ret >= 0))
    {
      errno = ret;
      perror("mlockall");
      exit(1);
    }

  }

  if(data->wait_before_start >= 1ul)
  {

  __CPROVER_DUMP_L29:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> [%d] Waiting %ld usecs... \n", data->ind, data->wait_before_start);
    while((_Bool)0);
    clock_gettime(1, &t_now);
    t_next=usec_to_timespec(data->wait_before_start);
    t_next=timespec_add(&t_now, &t_next);
    clock_nanosleep(1, 1, &t_next, (struct timespec *)(void *)0);

  __CPROVER_DUMP_L31:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> [%d] Starting...\n", data->ind);
    while((_Bool)0);
  }

  timings = (struct _timing_point_t *)(void *)0;
  if(data->duration >= 1)
  {
    my_duration_usec = (unsigned long int)((double)data->duration * 10e6 - (double)(data->wait_before_start * (unsigned long int)1000));
    unsigned long int return_value_timespec_to_usec_12;
    return_value_timespec_to_usec_12=timespec_to_usec(&data->period);
    double return_value_ceil_13;
    return_value_ceil_13=ceil((double)my_duration_usec / (double)return_value_timespec_to_usec_12);
    nperiods = (signed int)return_value_ceil_13;
    void *return_value_malloc_14;
    return_value_malloc_14=malloc((unsigned long int)nperiods * sizeof(struct _timing_point_t) /*80ul*/ );
    timings = (struct _timing_point_t *)return_value_malloc_14;
  }

  fprintf(data->log_handler, "#idx\tperiod\tmin_et\tmax_et\trel_st\tstart\t\tend\t\tdeadline\tdur.\tslack\tBudget\tUsed Budget\n");
  if((signed int)data->sched_policy == 6)
  {

  __CPROVER_DUMP_L35:
    ;
    do
      fprintf(stderr, "[rt-app] <notice> [%d] starting thread with period: %llu, exec: %llu,deadline: %llu, priority: %d\n", data->ind, attr.sched_period / (unsigned long int)1000, attr.sched_runtime / (unsigned long int)1000, attr.sched_deadline / (unsigned long int)1000, attr.__sched_priority);
    while((_Bool)0);
    ret=sched_setattr(tid, &attr, flags);
    if(!(ret == 0))
    {

    __CPROVER_DUMP_L37:
      ;
      do
        fprintf(stderr, "[rt-app] <crit> [%d] sched_setattr returned %d\n", data->ind, ret);
      while((_Bool)0);
      errno = ret;
      perror("sched_setattr");
      exit(1);
    }

  }

  if(!(opts.ftrace == 0))
    do
      ftrace_write(ft_data.marker_fd, "[%d] starts", data->ind);
    while((_Bool)0);

  clock_gettime(1, &t_now);
  t_next = t_now;
  data->deadline=timespec_add(&t_now, &data->deadline);
  signed int return_value_timespec_lower_16;
  while(!(continue_running == 0))
  {
    if(i == data->loop)
      break;

    struct timespec t_start;
    struct timespec t_end;
    struct timespec t_diff;
    struct timespec t_slack;
    if(!(opts.ftrace == 0))
      do
        ftrace_write(ft_data.marker_fd, "[%d] begins loop %d", data->ind, i);
      while((_Bool)0);

    clock_gettime(1, &t_start);
    run(data->ind, &data->min_et, &data->max_et, data->blockages, data->nblockages, data->sleep != 0 ? (struct timespec *)(void *)0 : &t_start);
    clock_gettime(1, &t_end);
    t_diff=timespec_sub(&t_end, &t_start);
    t_slack=timespec_sub(&data->deadline, &t_end);
    t_start_usec=timespec_to_usec(&t_start);
    if(!(timings == ((struct _timing_point_t *)NULL)))
      curr_timing = &timings[(signed long int)i];

    else
      curr_timing = &tmp_timing;
    curr_timing->ind = data->ind;
    curr_timing->period=timespec_to_usec(&data->period);
    curr_timing->min_et=timespec_to_usec(&data->min_et);
    curr_timing->max_et=timespec_to_usec(&data->max_et);
    unsigned long int return_value_timespec_to_usec_15;
    return_value_timespec_to_usec_15=timespec_to_usec(&data->main_app_start);
    curr_timing->rel_start_time = t_start_usec - return_value_timespec_to_usec_15;
    curr_timing->abs_start_time = t_start_usec;
    curr_timing->end_time=timespec_to_usec(&t_end);
    curr_timing->deadline=timespec_to_usec(&data->deadline);
    curr_timing->duration=timespec_to_usec(&t_diff);
    curr_timing->slack=timespec_to_lusec(&t_slack);
    if(timings == ((struct _timing_point_t *)NULL))
      log_timing(data->log_handler, curr_timing);

    t_next=timespec_add(&t_next, &data->period);
    data->deadline=timespec_add(&data->deadline, &data->period);
    if(!(opts.ftrace == 0))
      do
        ftrace_write(ft_data.marker_fd, "[%d] end loop %d", data->ind, i);
      while((_Bool)0);

    if(!(curr_timing->slack >= 0l))
    {
      if(!(opts.die_on_dmiss == 0))
      {

      __CPROVER_DUMP_L50:
        ;
        do
          fprintf(stderr, "[rt-app] <crit> [%d] DEADLINE MISS !!!\n", data->ind);
        while((_Bool)0);
        if(!(opts.ftrace == 0))
          do
            ftrace_write(ft_data.marker_fd, "[%d] DEADLINE MISS!!", data->ind);
          while((_Bool)0);

        shutdown(15);
        break;
      }

    }

    clock_gettime(1, &t_now);
    if(!(data->sleep == 0))
    {
      return_value_timespec_lower_16=timespec_lower(&t_now, &t_next);
      if(!(return_value_timespec_lower_16 == 0))
        clock_nanosleep(1, 1, &t_next, (struct timespec *)(void *)0);

    }

    i = i + 1;
  }

exit_miss:
  ;
  param.__sched_priority = 0;
  unsigned long int return_value_pthread_self_17;
  return_value_pthread_self_17=pthread_self();
  ret=pthread_setschedparam(return_value_pthread_self_17, 0, &param);
  if(!(ret == 0))
  {
    errno = ret;
    perror("pthread_setschedparam");
    exit(1);
  }

  if(!(timings == ((struct _timing_point_t *)NULL)))
  {
    j = 0;
    for( ; !(j >= i); j = j + 1)
      log_timing(data->log_handler, &timings[(signed long int)j]);
  }

  if(!(opts.ftrace == 0))
    do
      ftrace_write(ft_data.marker_fd, "[%d] exiting", data->ind);
    while((_Bool)0);


__CPROVER_DUMP_L62:
  ;
  do
    fprintf(stderr, "[rt-app] <notice> [%d] Exiting.\n", data->ind);
  while((_Bool)0);
  fclose(data->log_handler);
  pthread_exit((void *)0);
}

// timespec_add
// file rt-app_utils.c line 72
struct timespec timespec_add(struct timespec *t1, struct timespec *t2)
{
  struct timespec ts;
  ts.tv_sec = t1->tv_sec + t2->tv_sec;
  ts.tv_nsec = t1->tv_nsec + t2->tv_nsec;
  for( ; (double)ts.tv_nsec >= 1E9; ts.tv_sec = ts.tv_sec + 1l)
    ts.tv_nsec = ts.tv_nsec - (signed long int)1E9;
  return ts;
}

// timespec_lower
// file rt-app_utils.c line 105
signed int timespec_lower(struct timespec *what, struct timespec *than)
{
  if(!(than->tv_sec >= what->tv_sec))
    return 0;

  else
    if(!(what->tv_sec >= than->tv_sec))
      return 1;

    else
      if(!(what->tv_nsec >= than->tv_nsec))
        return 1;

      else
        return 0;
}

// timespec_sub
// file rt-app_utils.c line 88
struct timespec timespec_sub(struct timespec *t1, struct timespec *t2)
{
  struct timespec ts;
  if(!(t1->tv_nsec >= t2->tv_nsec))
  {
    ts.tv_sec = (t1->tv_sec - t2->tv_sec) - (signed long int)1;
    ts.tv_nsec = (t1->tv_nsec + (signed long int)1000000000) - t2->tv_nsec;
  }

  else
  {
    ts.tv_sec = t1->tv_sec - t2->tv_sec;
    ts.tv_nsec = t1->tv_nsec - t2->tv_nsec;
  }
  return ts;
}

// timespec_sub_to_ns
// file rt-app_utils.c line 120
signed long int timespec_sub_to_ns(struct timespec *t1, struct timespec *t2)
{
  signed long int diff;
  if(!(t1->tv_nsec >= t2->tv_nsec))
  {
    diff = (signed long int)(1E9 * (double)(signed long int)(((signed int)t1->tv_sec - (signed int)t2->tv_sec) - 1));
    diff = diff + (signed long int)(((double)(signed int)t1->tv_nsec + 1E9) - (double)(signed int)t2->tv_nsec);
  }

  else
  {
    diff = (signed long int)(1E9 * (double)(signed long int)((signed int)t1->tv_sec - (signed int)t2->tv_sec));
    diff = diff + (signed long int)((signed int)t1->tv_nsec - (signed int)t2->tv_nsec);
  }
  return diff;
}

// timespec_to_lusec
// file rt-app_utils.c line 30
signed long int timespec_to_lusec(struct timespec *ts)
{
  double return_value_round_1;
  return_value_round_1=round(((double)ts->tv_sec * 1E9 + (double)ts->tv_nsec) / 1000.0);
  return (signed long int)return_value_round_1;
}

// timespec_to_msec
// file rt-app_utils.c line 24
unsigned int timespec_to_msec(struct timespec *ts)
{
  return (unsigned int)(((double)ts->tv_sec * 1E9 + (double)ts->tv_nsec) / (double)1000000);
}

// timespec_to_nsec
// file rt-app_utils.c line 43
unsigned long long int timespec_to_nsec(struct timespec *ts)
{
  double return_value_round_1;
  return_value_round_1=round((double)ts->tv_sec * 1E9 + (double)ts->tv_nsec);
  return (unsigned long long int)return_value_round_1;
}

// timespec_to_usec
// file rt-app_utils.c line 36
unsigned long int timespec_to_usec(struct timespec *ts)
{
  double return_value_round_1;
  return_value_round_1=round(((double)ts->tv_sec * 1E9 + (double)ts->tv_nsec) / 1000.0);
  return (unsigned long int)return_value_round_1;
}

// usage
// file rt-app_args.c line 24
void usage(const char *msg, signed int ex_code)
{
  printf("usage:\nrt-app <taskset.json>\nOR\n");
  printf("rt-app [options] -t <period>:<exec>[:policy[:CPU affinity[:prio[:deadline]]]] -t ...\n\n");
  printf("-h, --help\t\t:\tshow this help\n");
  printf("-f, --fifo\t\t:\tset default policy for threads to SCHED_FIFO\n");
  printf("-r, --rr\t\t:\tset default policy fior threads to SCHED_RR\n");
  printf("-s, --spacing\t\t:\tmsec to wait beetween thread starts\n");
  printf("-l, --logdir\t\t:\tsave logs to different directory\n");
  printf("-b, --baselog\t\t:\tbasename for logs (implies -l . if not set)\n");
  printf("-G, --gnuplot\t\t:\tgenerate gnuplot script (needs -l)\n");
  printf("-D, --duration\t\t:\ttime (in seconds) before stopping threads\n");
  printf("-K, --no-mlock\t\t:\tDo not lock pages in memory\n");
  printf("-T, --ftrace\t\t:\tenable ftrace prints\n");
  printf("-P, --pi_enabled\t:\tenable priority inheritance on resources\n");
  printf("-M, --die_on_dmiss\t:\texit with an error if a task misses a deadline\n");
  printf("\nPOLICY: f=SCHED_FIFO, r=SCHED_RR, o=SCHED_OTHER");
  printf(", d=SCHED_DEADLINE");
  printf("\n");
  printf("AFFINITY: comma-separated cpu index (starting from 0)\n");
  printf("\ti.e. 0,2,3 for first, third and fourth CPU\n");
  if(!(msg == ((const char *)NULL)))
    printf("\n%s\n", msg);

  exit(ex_code);
}

// usec_to_timespec
// file rt-app_utils.c line 50
struct timespec usec_to_timespec(unsigned long int usec)
{
  struct timespec ts;
  ts.tv_sec = (signed long int)(usec / (unsigned long int)1000000);
  ts.tv_nsec = (signed long int)((usec % (unsigned long int)1000000) * (unsigned long int)1000);
  return ts;
}

// waste_cpu_cycles
// file rt-app.c line 45
void waste_cpu_cycles(signed int load_loops)
{
  double param;
  double result;
  double n;
  double i;
  param = 0.95;
  n = (double)4;
  i = (double)0;
  for( ; i < (double)load_loops; i = i + 1.000000)
  {
    double return_value_ldexp_1;
    return_value_ldexp_1=ldexp(param, (signed int)n);
    double return_value_ldexp_2;
    return_value_ldexp_2=ldexp(param, (signed int)return_value_ldexp_1);
    result=ldexp(param, (signed int)return_value_ldexp_2);
    double return_value_ldexp_3;
    return_value_ldexp_3=ldexp(param, (signed int)n);
    double return_value_ldexp_4;
    return_value_ldexp_4=ldexp(param, (signed int)return_value_ldexp_3);
    result=ldexp(param, (signed int)return_value_ldexp_4);
    double return_value_ldexp_5;
    return_value_ldexp_5=ldexp(param, (signed int)n);
    double return_value_ldexp_6;
    return_value_ldexp_6=ldexp(param, (signed int)return_value_ldexp_5);
    result=ldexp(param, (signed int)return_value_ldexp_6);
    double return_value_ldexp_7;
    return_value_ldexp_7=ldexp(param, (signed int)n);
    double return_value_ldexp_8;
    return_value_ldexp_8=ldexp(param, (signed int)return_value_ldexp_7);
    result=ldexp(param, (signed int)return_value_ldexp_8);
  }
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

