// tag-#anon#ST[ARR16{S64}_S64_'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_1;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

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

// tag-dce_config
// file src/modem_core.h line 76
struct dce_config;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-line_config
// file src/modem_core.h line 53
struct line_config;

// tag-modem_config
// file src/modem_core.h line 89
struct modem_config;

// tag-nvt_vars
// file src/nvt.h line 41
struct nvt_vars;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-termios
// file /usr/include/x86_64-linux-gnu/bits/termios.h line 28
struct termios;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-x_config
// file src/modem_core.h line 62
struct x_config;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// accept_connection
// file src/bridge.c line 27
signed int accept_connection(struct modem_config *cfg);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// cfsetispeed
// file /usr/include/termios.h line 57
extern signed int cfsetispeed(struct termios *, unsigned int);
// cfsetospeed
// file /usr/include/termios.h line 54
extern signed int cfsetospeed(struct termios *, unsigned int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// ctrl_thread
// file src/bridge.c line 173
void * ctrl_thread(void *arg);
// dce_check_control_lines
// file src/dce.h line 10
signed int dce_check_control_lines(struct modem_config *cfg);
// dce_get_control_lines
// file src/dce.h line 9
signed int dce_get_control_lines(struct modem_config *cfg);
// dce_init_config
// file src/dce.h line 5
signed int dce_init_config(struct modem_config *cfg);
// dce_init_conn
// file src/dce.h line 6
signed int dce_init_conn(struct modem_config *cfg);
// dce_read
// file src/dce.h line 11
signed int dce_read(struct modem_config *cfg, unsigned char *data, signed int len);
// dce_set_control_lines
// file src/dce.h line 8
signed int dce_set_control_lines(struct modem_config *cfg, signed int state);
// dce_set_flow_control
// file src/dce.h line 7
signed int dce_set_flow_control(struct modem_config *cfg, signed int opts);
// dce_write
// file src/dce.h line 12
signed int dce_write(struct modem_config *cfg, unsigned char *data, signed int len);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// getCommand
// file src/getcmd.c line 88
signed int getCommand(unsigned char *line, signed int flags, signed int *index, signed int *num, signed int len);
// getData
// file src/getcmd.c line 7
signed int getData(unsigned char *line, signed int *index, signed int len, signed int *data_start, signed int *data_end, signed int complex_parse);
// getNumber
// file src/getcmd.c line 68
signed int getNumber(unsigned char *line, signed int *index, signed int len);
// get_connect_response
// file src/modem_core.c line 36
signed int get_connect_response(signed int speed, signed int level);
// get_new_cts_state
// file src/modem_core.c line 120
signed int get_new_cts_state(struct modem_config *cfg, signed int up);
// get_new_dcd_state
// file src/modem_core.c line 137
signed int get_new_dcd_state(struct modem_config *cfg, signed int up);
// get_new_dsr_state
// file src/modem_core.c line 125
signed int get_new_dsr_state(struct modem_config *cfg, signed int up);
// get_nvt_cmd_response
// file src/nvt.c line 18
unsigned char get_nvt_cmd_response(unsigned char action, unsigned char type);
// getcmd
// file src/getcmd.c line 150
signed int getcmd(unsigned char *line, signed int *index, signed int *num, signed int *data_start, signed int *data_end);
// gethostbyname
// file /usr/include/netdb.h line 144
extern struct hostent * gethostbyname(const char *);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpeername
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 141
extern signed int getpeername(signed int, struct sockaddr *, unsigned int *);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// inet_aton
// file /usr/include/arpa/inet.h line 73
extern signed int inet_aton(const char *, struct in_addr *);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// init
// file src/init.c line 40
signed int init(signed int argc, char **argv, struct modem_config *cfg, signed int max_modem, signed int *port, unsigned char *all_busy, signed int all_busy_len);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// ip232_get_control_lines
// file src/ip232.c line 130
signed int ip232_get_control_lines(struct modem_config *cfg);
// ip232_init_conn
// file src/ip232.c line 88
signed int ip232_init_conn(struct modem_config *cfg);
// ip232_read
// file src/ip232.c line 202
signed int ip232_read(struct modem_config *cfg, unsigned char *data, signed int len);
// ip232_set_control_lines
// file src/ip232.c line 141
signed int ip232_set_control_lines(struct modem_config *cfg, signed int state);
// ip232_set_flow_control
// file src/ip232.c line 125
signed int ip232_set_flow_control(struct modem_config *cfg, signed int status);
// ip232_thread
// file src/ip232.c line 18
void * ip232_thread(void *arg);
// ip232_write
// file src/ip232.c line 159
signed int ip232_write(struct modem_config *cfg, unsigned char *data, signed int len);
// ip_accept
// file src/ip.h line 12
signed int ip_accept(signed int sSocket);
// ip_connect
// file src/ip.c line 80
signed int ip_connect(unsigned char *addy);
// ip_disconnect
// file src/ip.c line 163
signed int ip_disconnect(signed int fd);
// ip_init_server_conn
// file src/ip.c line 15
signed int ip_init_server_conn(signed int port);
// ip_read
// file src/ip.c line 174
signed int ip_read(signed int fd, unsigned char *data, signed int len);
// ip_thread
// file src/bridge.c line 116
void * ip_thread(void *arg);
// ip_write
// file src/ip.c line 169
signed int ip_write(signed int fd, unsigned char *data, signed int len);
// line_connect
// file src/line.h line 11
signed int line_connect(struct modem_config *cfg);
// line_disconnect
// file src/line.h line 12
signed int line_disconnect(struct modem_config *cfg);
// line_init_config
// file src/line.h line 6
signed int line_init_config(struct modem_config *cfg);
// line_listen
// file src/line.h line 9
signed int line_listen(struct modem_config *cfg);
// line_off_hook
// file src/line.h line 10
signed int line_off_hook(struct modem_config *cfg);
// line_write
// file src/line.h line 8
signed int line_write(struct modem_config *cfg, unsigned char *data, signed int len);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// log_end
// file src/debug.h line 58
void log_end();
// log_get_trace_flags
// file src/debug.c line 55
signed int log_get_trace_flags();
// log_init
// file src/debug.c line 16
signed int log_init(void);
// log_set_file
// file src/debug.c line 40
void log_set_file(struct _IO_FILE *a);
// log_set_level
// file src/debug.c line 45
void log_set_level(signed int a);
// log_set_trace_flags
// file src/debug.c line 50
void log_set_trace_flags(signed int a);
// log_start
// file src/debug.h line 57
void log_start(signed int level);
// log_trace
// file src/debug.h line 56
void log_trace(signed int type, unsigned char *line, signed int len);
// main_getcmd
// file src/getcmd.c line 275
signed int main_getcmd(signed int argc, char **argv);
// mdm_answer
// file src/modem_core.c line 206
signed int mdm_answer(struct modem_config *cfg);
// mdm_clear_break
// file src/modem_core.c line 564
signed int mdm_clear_break(struct modem_config *cfg);
// mdm_connect
// file src/modem_core.c line 238
signed int mdm_connect(struct modem_config *cfg);
// mdm_disconnect
// file src/modem_core.h line 150
signed int mdm_disconnect(struct modem_config *cfg);
// mdm_handle_char
// file src/modem_core.c line 523
signed int mdm_handle_char(struct modem_config *cfg, unsigned char ch);
// mdm_handle_timeout
// file src/modem_core.h line 155
signed int mdm_handle_timeout(struct modem_config *cfg);
// mdm_init
// file src/modem_core.c line 10
signed int mdm_init(void);
// mdm_init_config
// file src/modem_core.h line 137
void mdm_init_config(struct modem_config *cfg);
// mdm_listen
// file src/modem_core.c line 254
signed int mdm_listen(struct modem_config *cfg);
// mdm_off_hook
// file src/modem_core.h line 145
signed int mdm_off_hook(struct modem_config *cfg);
// mdm_parse_cmd
// file src/modem_core.h line 151
signed int mdm_parse_cmd(struct modem_config *cfg);
// mdm_parse_data
// file src/modem_core.h line 154
signed int mdm_parse_data(struct modem_config *cfg, unsigned char *data, signed int len);
// mdm_print_speed
// file src/modem_core.c line 222
signed int mdm_print_speed(struct modem_config *cfg);
// mdm_send_response
// file src/modem_core.h line 144
void mdm_send_response(signed int msg, struct modem_config *cfg);
// mdm_send_ring
// file src/modem_core.h line 156
signed int mdm_send_ring(struct modem_config *cfg);
// mdm_set_control_lines
// file src/modem_core.h line 141
signed int mdm_set_control_lines(struct modem_config *cfg);
// mdm_write
// file src/modem_core.h line 143
void mdm_write(struct modem_config *cfg, unsigned char *data, signed int len);
// mdm_write_char
// file src/modem_core.c line 167
void mdm_write_char(struct modem_config *cfg, unsigned char data);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// nvt_init_config
// file src/nvt.c line 7
signed int nvt_init_config(struct nvt_vars *vars);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// parseCommand
// file src/getcmd.c line 100
signed int parseCommand(unsigned char *line, signed int flags, signed int *index, signed int *num, signed int len);
// parseRegister
// file src/getcmd.c line 113
signed int parseRegister(unsigned char *line, signed int flags, signed int *index, signed int *num, signed int len, signed int *data_start, signed int *data_end, signed int complex_parse);
// parse_ip_data
// file src/bridge.c line 51
signed int parse_ip_data(struct modem_config *cfg, unsigned char *data, signed int len);
// parse_nvt_command
// file src/nvt.h line 50
signed int parse_nvt_command(signed int fd, struct nvt_vars *vars, unsigned char action, unsigned char opt);
// parse_nvt_subcommand
// file src/nvt.h line 49
signed int parse_nvt_subcommand(signed int fd, struct nvt_vars *vars, unsigned char *data, signed int len);
// pb_add
// file src/phone_book.h line 2
signed int pb_add(unsigned char *from, unsigned char *to);
// pb_init
// file src/phone_book.c line 11
signed int pb_init(void);
// pb_search
// file src/phone_book.c line 34
unsigned char * pb_search(unsigned char *number);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// print_help
// file src/init.c line 8
void print_help(unsigned char *name);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous_0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// run_bridge
// file src/bridge.c line 231
void * run_bridge(void *arg);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_1 *, struct anonymous_1 *, struct anonymous_1 *, struct timeval *);
// send_nvt_command
// file src/nvt.c line 101
signed int send_nvt_command(signed int fd, struct nvt_vars *vars, unsigned char action, unsigned char opt);
// ser_get_bps_const
// file src/serial.c line 10
signed int ser_get_bps_const(signed int speed);
// ser_get_control_lines
// file src/serial.c line 137
signed int ser_get_control_lines(signed int fd);
// ser_init_conn
// file src/serial.c line 75
signed int ser_init_conn(unsigned char *tty, signed int speed);
// ser_read
// file src/serial.c line 173
signed int ser_read(signed int fd, unsigned char *data, signed int len);
// ser_set_control_lines
// file src/serial.c line 148
signed int ser_set_control_lines(signed int fd, signed int state);
// ser_set_flow_control
// file src/serial.c line 120
signed int ser_set_flow_control(signed int fd, signed int status);
// ser_write
// file src/serial.c line 168
signed int ser_write(signed int fd, unsigned char *data, signed int len);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// sh_init_config
// file src/shared.h line 4
signed int sh_init_config(struct modem_config *cfg);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// skip
// file src/getcmd.c line 81
signed int skip(unsigned char *line, signed int *index, signed int len, unsigned char ch);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// spawn_ctrl_thread
// file src/bridge.c line 203
signed int spawn_ctrl_thread(struct modem_config *cfg);
// spawn_ip232_thread
// file src/ip232.c line 73
signed int spawn_ip232_thread(struct modem_config *cfg);
// spawn_ip_thread
// file src/bridge.c line 217
signed int spawn_ip_thread(struct modem_config *cfg);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// tcflush
// file /usr/include/termios.h line 90
extern signed int tcflush(signed int, signed int);
// tcgetattr
// file /usr/include/termios.h line 66
extern signed int tcgetattr(signed int, struct termios *);
// tcsetattr
// file /usr/include/termios.h line 70
extern signed int tcsetattr(signed int, signed int, struct termios *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writeFile
// file src/util.h line 2
signed int writeFile(unsigned char *name, signed int fd);
// writePipe
// file src/util.h line 1
signed int writePipe(signed int fd, unsigned char msg);

struct anonymous_1
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

union anonymous_0
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

struct dce_config
{
  // is_ip232
  signed int is_ip232;
  // tty
  unsigned char tty[256l];
  // first_char
  signed int first_char;
  // fd
  signed int fd;
  // dp
  signed int dp[2l][2l];
  // sSocket
  signed int sSocket;
  // ip232_is_connected
  signed int ip232_is_connected;
  // ip232_dtr
  signed int ip232_dtr;
  // ip232_dcd
  signed int ip232_dcd;
  // ip232_iac
  signed int ip232_iac;
};

struct hostent
{
  // h_name
  char *h_name;
  // h_aliases
  char **h_aliases;
  // h_addrtype
  signed int h_addrtype;
  // h_length
  signed int h_length;
  // h_addr_list
  char **h_addr_list;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct nvt_vars
{
  // binary_xmit
  signed int binary_xmit;
  // binary_recv
  signed int binary_recv;
  // term
  unsigned char term[256l];
};

struct line_config
{
  // valid_conn
  signed int valid_conn;
  // fd
  signed int fd;
  // sfd
  signed int sfd;
  // is_telnet
  signed int is_telnet;
  // first_char
  signed int first_char;
  // nvt_data
  struct nvt_vars nvt_data;
};

struct x_config
{
  // mp
  signed int mp[2l][2l];
  // cp
  signed int cp[2l][2l];
  // wp
  signed int wp[2l][2l];
  // no_answer
  unsigned char no_answer[256l];
  // local_connect
  unsigned char local_connect[256l];
  // remote_connect
  unsigned char remote_connect[256l];
  // local_answer
  unsigned char local_answer[256l];
  // remote_answer
  unsigned char remote_answer[256l];
  // inactive
  unsigned char inactive[256l];
  // direct_conn
  unsigned int direct_conn;
  // direct_conn_num
  unsigned char direct_conn_num[256l];
};

struct modem_config
{
  // dce_data
  struct dce_config dce_data;
  // line_data
  struct line_config line_data;
  // data
  struct x_config data;
  // config0
  unsigned char config0[1024l];
  // config1
  unsigned char config1[1024l];
  // dce_speed
  signed int dce_speed;
  // dte_speed
  signed int dte_speed;
  // conn_type
  signed int conn_type;
  // line_ringing
  signed int line_ringing;
  // off_hook
  signed int off_hook;
  // dsr_active
  signed int dsr_active;
  // dsr_on
  signed int dsr_on;
  // dcd_on
  signed int dcd_on;
  // invert_dsr
  signed int invert_dsr;
  // invert_dcd
  signed int invert_dcd;
  // allow_transmit
  signed int allow_transmit;
  // rings
  signed int rings;
  // pre_break_delay
  signed int pre_break_delay;
  // found_a
  signed int found_a;
  // cmd_started
  signed int cmd_started;
  // cmd_mode
  signed int cmd_mode;
  // last_cmd
  unsigned char last_cmd[1024l];
  // cur_line
  unsigned char cur_line[1024l];
  // cur_line_idx
  signed int cur_line_idx;
  // dialno
  unsigned char dialno[256l];
  // last_dialno
  unsigned char last_dialno[256l];
  // dial_type
  unsigned char dial_type;
  // last_dial_type
  unsigned char last_dial_type;
  // memory_dial
  signed int memory_dial;
  // connect_response
  signed int connect_response;
  // response_code_level
  signed int response_code_level;
  // send_responses
  signed int send_responses;
  // text_responses
  signed int text_responses;
  // echo
  signed int echo;
  // s
  signed int s[100l];
  // break_len
  signed int break_len;
  // disconnect_delay
  signed int disconnect_delay;
  // crlf
  unsigned char crlf[3l];
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct sockaddr
{
  // sa_family
  unsigned short int sa_family;
  // sa_data
  char sa_data[14l];
};

struct sockaddr_in
{
  // sin_family
  unsigned short int sin_family;
  // sin_port
  unsigned short int sin_port;
  // sin_addr
  struct in_addr sin_addr;
  // sin_zero
  unsigned char sin_zero[8l];
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

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
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


// BACK_LOG
// file src/ip.c line 13
const signed int BACK_LOG = 5;
// MDM_BUSY
// file src/tcpser.c line 19
const unsigned char MDM_BUSY[6l] = { 'B', 'U', 'S', 'Y', 10, 0 };
// MDM_NO_ANSWER
// file src/bridge.c line 21
const unsigned char MDM_NO_ANSWER[11l] = { 'N', 'O', ' ', 'A', 'N', 'S', 'W', 'E', 'R', 10, 0 };
// log_desc
// file src/debug.c line 12
unsigned char *log_desc[11l];
// log_file
// file src/debug.c line 9
struct _IO_FILE *log_file;
// log_level
// file src/debug.c line 8
signed int log_level = 0;
// log_mutex
// file src/debug.c line 13
union anonymous log_mutex;
// mdm_responses
// file src/modem_core.c line 8
unsigned char *mdm_responses[37l];
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// phone_book
// file src/phone_book.c line 8
unsigned char phone_book[100l][2l][128l];
// size
// file src/phone_book.c line 9
signed int size = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// trace_flags
// file src/debug.c line 10
signed int trace_flags = 0;
// trace_type
// file src/debug.c line 11
unsigned char *trace_type[9l];

// accept_connection
// file src/bridge.c line 27
signed int accept_connection(struct modem_config *cfg)
{
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"accept_connection");
      log_end();
    }

  while((_Bool)0);
  cfg->line_data.fd=ip_accept(cfg->line_data.sfd);
  if(cfg->line_data.fd >= 0)
  {
    cfg->line_data.valid_conn = 1;
    if(cfg->data.direct_conn == 1u)
    {
      cfg->conn_type = 2;
      mdm_off_hook(cfg);
      cfg->cmd_mode = 1;
    }

    else
    {
      cfg->rings = 0;
      mdm_send_ring(cfg);
    }
    do
      if(log_level >= 5)
      {
        log_start(5);
        fprintf(log_file, "Informing parent task that I am busy");
        log_end();
      }

    while((_Bool)0);
    writePipe(cfg->data.mp[(signed long int)0][(signed long int)1], (unsigned char)43);
  }

  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"accept_connection");
      log_end();
    }

  while((_Bool)0);
  return 0;
}

// ctrl_thread
// file src/bridge.c line 173
void * ctrl_thread(void *arg)
{
  struct modem_config *cfg = (struct modem_config *)arg;
  signed int status;
  signed int new_status;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ctrl_thread");
      log_end();
    }

  while((_Bool)0);
  status=dce_get_control_lines(cfg);
  for( ; status >= 0; status = new_status)
  {
    new_status=dce_check_control_lines(cfg);
    if(new_status >= 0 && !(status == new_status))
    {
      if(!((8 & status) == (8 & new_status)))
      {
        if((8 & new_status) == 0)
        {
          do
            if(log_level >= 4)
            {
              log_start(4);
              fprintf(log_file, "DTR has gone low");
              log_end();
            }

          while((_Bool)0);
          writePipe(cfg->data.wp[(signed long int)0][(signed long int)1], (unsigned char)100);
        }

        else
        {
          do
            if(log_level >= 4)
            {
              log_start(4);
              fprintf(log_file, "DTR has gone high");
              log_end();
            }

          while((_Bool)0);
          writePipe(cfg->data.wp[(signed long int)0][(signed long int)1], (unsigned char)68);
        }
      }

    }

  }
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"ctrl_thread");
      log_end();
    }

  while((_Bool)0);
  exit(-1);
}

// dce_check_control_lines
// file src/dce.h line 10
signed int dce_check_control_lines(struct modem_config *cfg)
{
  signed int status = 0;
  signed int new_status = 0;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"dce_check_control_lines");
      log_end();
    }

  while((_Bool)0);
  status=dce_get_control_lines(cfg);
  new_status = status;
  while(status == new_status && new_status >= 0)
  {
    usleep((unsigned int)100000);
    new_status=dce_get_control_lines(cfg);
  }
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"dce_check_control_lines");
      log_end();
    }

  while((_Bool)0);
  return new_status;
}

// dce_get_control_lines
// file src/dce.h line 9
signed int dce_get_control_lines(struct modem_config *cfg)
{
  signed int status;
  signed int rc_status;
  if(!(cfg->dce_data.is_ip232 == 0))
    status=ip232_get_control_lines(cfg);

  else
    status=ser_get_control_lines(cfg->dce_data.fd);
  if(status >= 0)
    rc_status = (status & 0x100) != 0 ? 8 : 0;

  else
    rc_status = status;
  return rc_status;
}

// dce_init_config
// file src/dce.h line 5
signed int dce_init_config(struct modem_config *cfg)
{
  return 0;
}

// dce_init_conn
// file src/dce.h line 6
signed int dce_init_conn(struct modem_config *cfg)
{
  signed int rc;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"dce_init_conn");
      log_end();
    }

  while((_Bool)0);
  if(!(cfg->dce_data.is_ip232 == 0))
    rc=ip232_init_conn(cfg);

  else
  {
    rc=ser_init_conn(cfg->dce_data.tty, cfg->dte_speed);
    cfg->dce_data.fd = rc;
  }
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"dce_init_conn");
      log_end();
    }

  while((_Bool)0);
  return rc;
}

// dce_read
// file src/dce.h line 11
signed int dce_read(struct modem_config *cfg, unsigned char *data, signed int len)
{
  if(!(cfg->dce_data.is_ip232 == 0))
  {
    signed int return_value_ip232_read_1;
    return_value_ip232_read_1=ip232_read(cfg, data, len);
    return return_value_ip232_read_1;
  }

  signed int return_value_ser_read_2;
  return_value_ser_read_2=ser_read(cfg->dce_data.fd, data, len);
  return return_value_ser_read_2;
}

// dce_set_control_lines
// file src/dce.h line 8
signed int dce_set_control_lines(struct modem_config *cfg, signed int state)
{
  signed int status = 0;
  signed int rc;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"dce_set_control_lines");
      log_end();
    }

  while((_Bool)0);
  if(!((4 & state) == 0))
  {
    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Setting CTS pin high");
        log_end();
      }

    while((_Bool)0);
    status = status | 0x004;
  }

  else
    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Setting CTS pin low");
        log_end();
      }

    while((_Bool)0);
  if(!((2 & state) == 0))
  {
    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Setting DCD pin high");
        log_end();
      }

    while((_Bool)0);
    status = status | 0x002;
  }

  else
    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Setting DCD pin low");
        log_end();
      }

    while((_Bool)0);
  if(!(cfg->dce_data.is_ip232 == 0))
    rc=ip232_set_control_lines(cfg, status);

  else
    rc=ser_set_control_lines(cfg->dce_data.fd, status);
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"dce_set_control_lines");
      log_end();
    }

  while((_Bool)0);
  return rc;
}

// dce_set_flow_control
// file src/dce.h line 7
signed int dce_set_flow_control(struct modem_config *cfg, signed int opts)
{
  signed int status = 0;
  signed int rc = 0;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"dce_set_flow_control");
      log_end();
    }

  while((_Bool)0);
  if(opts == 0)
    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Setting NONE flow control");
        log_end();
      }

    while((_Bool)0);

  else
  {
    if(!((1 & opts) == 0))
    {
      do
        if(log_level >= 7)
        {
          log_start(7);
          fprintf(log_file, "Setting RTSCTS flow control");
          log_end();
        }

      while((_Bool)0);
      status = status | (signed int)020000000000;
    }

    if(!(opts == 0))
    {
      status = status | 0002000 | 0010000;
      do
        if(log_level >= 7)
        {
          log_start(7);
          fprintf(log_file, "Setting XON/XOFF flow control");
          log_end();
        }

      while((_Bool)0);
    }

  }
  if(!(cfg->dce_data.is_ip232 == 0))
    rc=ip232_set_flow_control(cfg, status);

  else
    rc=ser_set_flow_control(cfg->dce_data.fd, status);
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"dce_set_flow_control");
      log_end();
    }

  while((_Bool)0);
  return rc;
}

// dce_write
// file src/dce.h line 12
signed int dce_write(struct modem_config *cfg, unsigned char *data, signed int len)
{
  if(!(cfg->dce_data.is_ip232 == 0))
  {
    signed int return_value_ip232_write_1;
    return_value_ip232_write_1=ip232_write(cfg, data, len);
    return return_value_ip232_write_1;
  }

  signed int return_value_ser_write_2;
  return_value_ser_write_2=ser_write(cfg->dce_data.fd, data, len);
  return return_value_ser_write_2;
}

// getCommand
// file src/getcmd.c line 88
signed int getCommand(unsigned char *line, signed int flags, signed int *index, signed int *num, signed int len)
{
  signed int cmd;
  signed int tmp_post_1 = *index;
  *index = *index + 1;
  cmd = (signed int)line[(signed long int)tmp_post_1];
  *num=getNumber(line, index, len);
  return cmd;
}

// getData
// file src/getcmd.c line 7
signed int getData(unsigned char *line, signed int *index, signed int len, signed int *data_start, signed int *data_end, signed int complex_parse)
{
  signed int alpha = 0;
  signed int done = 0;
  *data_start = *index;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  while(!(*index >= len))
  {
    if(done == 1)
      break;

    switch((signed int)line[(signed long int)*index])
    {
      case 32:
      {
        if(complex_parse == 0)
          tmp_if_expr_1 = *index != *data_start ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(tmp_if_expr_1)
          done = 1;

        else
          if(!(*index == *data_start))
            *index = *index + 1;

          else
          {
            *index = *index + 1;
            *data_start = *index;
          }
        break;
      }
      case 0:
      {
        done = 1;
        break;
      }
      case 48:

      case 49:

      case 50:

      case 51:

      case 52:

      case 53:

      case 54:

      case 55:

      case 56:

      case 57:
      {
        *index = *index + 1;
        break;
      }
      default:
      {
        if(complex_parse == 0)
          tmp_if_expr_2 = *index != *data_start ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_2 = (_Bool)0;
        if(alpha == 0 && tmp_if_expr_2)
          done = 1;

        else
        {
          *index = *index + 1;
          alpha = 1;
        }
      }
    }
  }
  *data_end = *index;
  return 0;
}

// getNumber
// file src/getcmd.c line 68
signed int getNumber(unsigned char *line, signed int *index, signed int len)
{
  signed int num = 0;
  signed int found = 0;
  const unsigned short int **return_value___ctype_b_loc_1;
  signed int tmp_post_2;
  for( ; !(*index >= len); found = 1)
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)line[(signed long int)*index]]) == 0)
      break;

    tmp_post_2 = *index;
    *index = *index + 1;
    num = (num * 10 + (signed int)line[(signed long int)tmp_post_2]) - 48;
  }
  if(found == 0)
    return -1;

  else
    return num;
}

// get_connect_response
// file src/modem_core.c line 36
signed int get_connect_response(signed int speed, signed int level)
{
  if(level == 0)
    return 1;

  else
    switch(speed)
    {
      case 115200:
        return 19;
      case 57600:
        return 18;
      case 38400:
        return 17;
      case 19200:
        return 16;
      case 9600:
        return 12;
      case 4800:
        return 11;
      case 2400:
        return 10;
      case 1200:
        return 5;
      case 600:
        return 9;
      default:
        return 1;
    }
}

// get_new_cts_state
// file src/modem_core.c line 120
signed int get_new_cts_state(struct modem_config *cfg, signed int up)
{
  return 4;
}

// get_new_dcd_state
// file src/modem_core.c line 137
signed int get_new_dcd_state(struct modem_config *cfg, signed int up)
{
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(cfg->dcd_on == 1)
    return cfg->invert_dcd == 1 ? 0 : 2;

  else
  {
    if(up == 1)
      tmp_if_expr_1 = cfg->invert_dcd == 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(up == 0)
        tmp_if_expr_2 = cfg->invert_dcd == 1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      return 2;

    else
      return 0;
  }
}

// get_new_dsr_state
// file src/modem_core.c line 125
signed int get_new_dsr_state(struct modem_config *cfg, signed int up)
{
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(cfg->dsr_on == 1)
    return cfg->invert_dsr == 1 ? 0 : 1;

  else
  {
    if(up == 1)
      tmp_if_expr_1 = cfg->invert_dsr == 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(up == 0)
        tmp_if_expr_2 = cfg->invert_dsr == 1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      return 1;

    else
      return 0;
  }
}

// get_nvt_cmd_response
// file src/nvt.c line 18
unsigned char get_nvt_cmd_response(unsigned char action, unsigned char type)
{
  unsigned char rc = (unsigned char)0;
  if((signed int)type == 1)
    switch((signed int)action)
    {
      case 253:
      {
        rc = (unsigned char)251;
        break;
      }
      case 254:
      {
        rc = (unsigned char)252;
        break;
      }
      case 251:
      {
        rc = (unsigned char)253;
        break;
      }
      case 252:
        rc = (unsigned char)254;
    }

  else
    switch((signed int)action)
    {
      case 253:

      case 254:
      {
        rc = (unsigned char)252;
        break;
      }
      case 251:

      case 252:
        rc = (unsigned char)254;
      default:
        ;
    }
  return rc;
}

// getcmd
// file src/getcmd.c line 150
signed int getcmd(unsigned char *line, signed int *index, signed int *num, signed int *data_start, signed int *data_end)
{
  signed int len = 0;
  signed int cmd = -1;
  *num = 0;
  *data_start = 0;
  *data_end = 0;
  signed int return_value_parseCommand_3;
  signed int return_value_parseCommand_5;
  signed int return_value_parseCommand_7;
  signed int return_value_parseCommand_9;
  signed int return_value_parseRegister_11;
  signed int return_value_parseCommand_12;
  signed int return_value_parseRegister_14;
  signed int return_value_parseCommand_15;
  if(line == ((unsigned char *)NULL))
    return -4;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen((const char *)line);
    len = (signed int)return_value_strlen_1;
    for( ; !(*index >= len); *index = *index + 1)
    {
      cmd=toupper((signed int)line[(signed long int)*index]);
      switch(cmd)
      {
        case 32:
          break;
        case 0:
          return -1;
        case 37:
        {
          *index = *index + 1;
          while(!(*index >= len))
          {
            signed int return_value_toupper_2;
            return_value_toupper_2=toupper((signed int)line[(signed long int)*index]);
            switch(return_value_toupper_2)
            {
              case 32:
                break;
              case 0:
                return -2;
              default:
              {
                return_value_parseCommand_3=parseCommand(line, 512, index, num, len);
                return return_value_parseCommand_3;
              }
            }
            *index = *index + 1;
          }
          break;
        }
        case 92:
        {
          *index = *index + 1;
          while(!(*index >= len))
          {
            signed int return_value_toupper_4;
            return_value_toupper_4=toupper((signed int)line[(signed long int)*index]);
            switch(return_value_toupper_4)
            {
              case 32:
                break;
              case 0:
                return -2;
              default:
              {
                return_value_parseCommand_5=parseCommand(line, 1024, index, num, len);
                return return_value_parseCommand_5;
              }
            }
            *index = *index + 1;
          }
          break;
        }
        case 58:
        {
          *index = *index + 1;
          while(!(*index >= len))
          {
            signed int return_value_toupper_6;
            return_value_toupper_6=toupper((signed int)line[(signed long int)*index]);
            switch(return_value_toupper_6)
            {
              case 32:
                break;
              case 0:
                return -2;
              default:
              {
                return_value_parseCommand_7=parseCommand(line, 8192, index, num, len);
                return return_value_parseCommand_7;
              }
            }
            *index = *index + 1;
          }
          break;
        }
        case 45:
        {
          *index = *index + 1;
          while(!(*index >= len))
          {
            signed int return_value_toupper_8;
            return_value_toupper_8=toupper((signed int)line[(signed long int)*index]);
            switch(return_value_toupper_8)
            {
              case 32:
                break;
              case 0:
                return -2;
              default:
              {
                return_value_parseCommand_9=parseCommand(line, 2048, index, num, len);
                return return_value_parseCommand_9;
              }
            }
            *index = *index + 1;
          }
          break;
        }
        case 38:
        {
          *index = *index + 1;
          while(!(*index >= len))
          {
            signed int return_value_toupper_10;
            return_value_toupper_10=toupper((signed int)line[(signed long int)*index]);
            switch(return_value_toupper_10)
            {
              case 32:
                break;
              case 0:
                return -2;
              case 90:
              {
                return_value_parseRegister_11=parseRegister(line, 256, index, num, len, data_start, data_end, 1);
                return return_value_parseRegister_11;
              }
              default:
              {
                return_value_parseCommand_12=parseCommand(line, 256, index, num, len);
                return return_value_parseCommand_12;
              }
            }
            *index = *index + 1;
          }
          break;
        }
        case 68:
        {
          *index = *index + 1;
          *num = 0;
          if(!(*index >= len))
          {
            signed int return_value_toupper_13;
            return_value_toupper_13=toupper((signed int)line[(signed long int)*index]);
            switch(return_value_toupper_13)
            {
              case 0:
                return cmd;
              case 84:

              case 80:

              case 76:
              {
                *num=toupper((signed int)line[(signed long int)*index]);
                *index = *index + 1;
              }
              default:
              {
                getData(line, index, len, data_start, data_end, 1);
                return cmd;
              }
            }
            *index = *index + 1;
          }

          return cmd;
        }
        case 83:
        {
          return_value_parseRegister_14=parseRegister(line, 0, index, num, len, data_start, data_end, 0);
          return return_value_parseRegister_14;
        }
        default:
        {
          return_value_parseCommand_15=parseCommand(line, 0, index, num, len);
          return return_value_parseCommand_15;
        }
      }
    }
    return cmd;
  }
}

// init
// file src/init.c line 40
signed int init(signed int argc, char **argv, struct modem_config *cfg, signed int max_modem, signed int *port, unsigned char *all_busy, signed int all_busy_len)
{
  signed int i = 0;
  signed int j = 0;
  signed int opt = 0;
  signed int init__1__trace_flags = 0;
  unsigned char *tok;
  signed int dce_set = 0;
  signed int tty_set = 0;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"init");
      log_end();
    }

  while((_Bool)0);
  *port = 6400;
  mdm_init_config(&cfg[(signed long int)0]);
  (cfg + (signed long int)0)->dte_speed = 38400;
  (cfg + (signed long int)0)->dce_speed = 38400;
  unsigned long int return_value_strlen_1;
  char *return_value_strtok_2;
  char *return_value_strtok_3;
  signed int return_value_atoi_4;
  struct _IO_FILE *return_value_fopen_5;
  while(opt >= 0 && !(i >= max_modem))
  {
    opt=getopt(argc, argv, "p:s:S:d:v:hw:i:Il:L:t:n:a:A:c:C:N:B:T:D:");
    switch(opt)
    {
      case 116:
      {
        init__1__trace_flags=log_get_trace_flags();
        j = 0;
        do
        {
          return_value_strlen_1=strlen(optarg);
          if((unsigned long int)j >= return_value_strlen_1)
            break;

          switch((signed int)optarg[(signed long int)j])
          {
            case 115:
            {
              init__1__trace_flags = init__1__trace_flags | 1;
              break;
            }
            case 83:
            {
              init__1__trace_flags = init__1__trace_flags | 2;
              break;
            }
            case 105:
            {
              init__1__trace_flags = init__1__trace_flags | 4;
              break;
            }
            case 73:
              init__1__trace_flags = init__1__trace_flags | 8;
          }
          log_set_trace_flags(init__1__trace_flags);
          j = j + 1;
        }
        while((_Bool)1);
        break;
      }
      case 97:
      {
        strncpy((char *)(cfg + (signed long int)i)->data.local_answer, optarg, sizeof(unsigned char [256l]) /*256ul*/ );
        break;
      }
      case 65:
      {
        strncpy((char *)(cfg + (signed long int)i)->data.remote_answer, optarg, sizeof(unsigned char [256l]) /*256ul*/ );
        break;
      }
      case 99:
      {
        strncpy((char *)(cfg + (signed long int)i)->data.local_connect, optarg, sizeof(unsigned char [256l]) /*256ul*/ );
        break;
      }
      case 67:
      {
        strncpy((char *)(cfg + (signed long int)i)->data.remote_connect, optarg, sizeof(unsigned char [256l]) /*256ul*/ );
        break;
      }
      case 66:
      {
        strncpy((char *)all_busy, optarg, (unsigned long int)all_busy_len);
        break;
      }
      case 78:
      {
        strncpy((char *)(cfg + (signed long int)i)->data.no_answer, optarg, sizeof(unsigned char [256l]) /*256ul*/ );
        break;
      }
      case 84:
      {
        strncpy((char *)(cfg + (signed long int)i)->data.inactive, optarg, sizeof(unsigned char [256l]) /*256ul*/ );
        break;
      }
      case 105:
      {
        strncpy((char *)(cfg + (signed long int)i)->config0, optarg, (unsigned long int)255);
        break;
      }
      case 73:
      {
        (cfg + (signed long int)i)->invert_dcd = 1;
        break;
      }
      case 112:
      {
        *port=atoi(optarg);
        break;
      }
      case 110:
      {
        return_value_strtok_2=strtok(optarg, "=");
        tok = (unsigned char *)return_value_strtok_2;
        return_value_strtok_3=strtok((char *)(void *)0, "=");
        pb_add(tok, (unsigned char *)return_value_strtok_3);
        break;
      }
      case 108:
      {
        return_value_atoi_4=atoi(optarg);
        log_set_level(return_value_atoi_4);
        break;
      }
      case 76:
      {
        return_value_fopen_5=fopen(optarg, "w+");
        log_set_file(return_value_fopen_5);
        break;
      }
      case 115:
      {
        (cfg + (signed long int)i)->dte_speed=atoi(optarg);
        do
          if(log_level >= 7)
          {
            log_start(7);
            fprintf(log_file, "Setting DTE speed to %d", (cfg + (signed long int)i)->dte_speed);
            log_end();
          }

        while((_Bool)0);
        if(dce_set == 0)
          (cfg + (signed long int)i)->dce_speed = (cfg + (signed long int)i)->dte_speed;

        break;
      }
      case 63:

      case 104:
      {
        print_help((unsigned char *)argv[(signed long int)0]);
        break;
      }
      case 100:

      case 118:
      {
        if(!(tty_set == 0))
        {
          i = i + 1;
          if(!(i >= max_modem))
          {
            dce_set = 0;
            mdm_init_config(&cfg[(signed long int)i]);
            (cfg + (signed long int)i)->dte_speed = (cfg + (signed long int)(i - 1))->dte_speed;
            (cfg + (signed long int)i)->dce_speed = (cfg + (signed long int)(i - 1))->dce_speed;
            (cfg + (signed long int)i)->dce_data.is_ip232 = 0;
            strncpy((char *)(cfg + (signed long int)i)->config0, (const char *)(cfg + (signed long int)(i - 1))->config0, sizeof(unsigned char [1024l]) /*1024ul*/ );
            strncpy((char *)(cfg + (signed long int)i)->data.local_connect, (const char *)(cfg + (signed long int)(i - 1))->data.local_connect, sizeof(unsigned char [256l]) /*256ul*/ );
            strncpy((char *)(cfg + (signed long int)i)->data.remote_connect, (const char *)(cfg + (signed long int)(i - 1))->data.remote_connect, sizeof(unsigned char [256l]) /*256ul*/ );
            strncpy((char *)(cfg + (signed long int)i)->data.local_answer, (const char *)(cfg + (signed long int)(i - 1))->data.local_answer, sizeof(unsigned char [256l]) /*256ul*/ );
            strncpy((char *)(cfg + (signed long int)i)->data.remote_answer, (const char *)(cfg + (signed long int)(i - 1))->data.remote_answer, sizeof(unsigned char [256l]) /*256ul*/ );
            strncpy((char *)(cfg + (signed long int)i)->data.no_answer, (const char *)(cfg + (signed long int)(i - 1))->data.no_answer, sizeof(unsigned char [256l]) /*256ul*/ );
            strncpy((char *)(cfg + (signed long int)i)->data.inactive, (const char *)(cfg + (signed long int)(i - 1))->data.inactive, sizeof(unsigned char [256l]) /*256ul*/ );
          }

          else
          {
            do
              if(log_level >= 3)
              {
                log_start(3);
                fprintf(log_file, "Maximum modems defined - ignoring extra");
                log_end();
              }

            while((_Bool)0);
            break;
          }
        }

        strncpy((char *)(cfg + (signed long int)i)->dce_data.tty, optarg, sizeof(unsigned char [256l]) /*256ul*/ );
        (cfg + (signed long int)i)->dce_data.is_ip232 = (signed int)(118 == opt);
        tty_set = 1;
        break;
      }
      case 83:
      {
        (cfg + (signed long int)i)->dce_speed=atoi(optarg);
        dce_set = 1;
        break;
      }
      case 68:
      {
        (cfg + (signed long int)i)->data.direct_conn = (unsigned int)1;
        strncpy((char *)(cfg + (signed long int)i)->data.direct_conn_num, optarg, sizeof(unsigned char [256l]) /*256ul*/ );
      }
    }
  }
  if(!(tty_set == 0))
  {
    if(!(i >= max_modem))
      i = i + 1;

  }

  else
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "No modems defined");
        log_end();
      }

    while((_Bool)0);
    print_help((unsigned char *)argv[(signed long int)0]);
  }
  do
    if(log_level >= 5)
    {
      log_start(5);
      fprintf(log_file, "Read configuration for %i serial port(s)", i);
      log_end();
    }

  while((_Bool)0);
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"init");
      log_end();
    }

  while((_Bool)0);
  return i;
}

// ip232_get_control_lines
// file src/ip232.c line 130
signed int ip232_get_control_lines(struct modem_config *cfg)
{
  signed int status = 0;
  if(!(cfg->dce_data.ip232_is_connected == 0))
  {
    if(!(cfg->dce_data.ip232_dtr == 0))
      status = status | 0x100;

  }

  return status;
}

// ip232_init_conn
// file src/ip232.c line 88
signed int ip232_init_conn(struct modem_config *cfg)
{
  signed int rc = -1;
  signed int port;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ip232_init_conn");
      log_end();
    }

  while((_Bool)0);
  do
    if(log_level >= 4)
    {
      log_start(4);
      fprintf(log_file, "Opening ip232 device");
      log_end();
    }

  while((_Bool)0);
  port=atoi((const char *)cfg->dce_data.tty);
  rc=ip_init_server_conn(port);
  if(!(rc >= 0))
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "Could not initialize ip232 server socket");
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(log_file, " (%s)\n", return_value_strerror_2);
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  signed int return_value_pipe_5;
  return_value_pipe_5=pipe(cfg->dce_data.dp[(signed long int)0]);
  if(return_value_pipe_5 == -1)
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "ip232 thread incoming IPC pipe could not be created");
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        char *return_value_strerror_4;
        return_value_strerror_4=strerror(*return_value___errno_location_3);
        fprintf(log_file, " (%s)\n", return_value_strerror_4);
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  signed int return_value_pipe_8;
  return_value_pipe_8=pipe(cfg->dce_data.dp[(signed long int)1]);
  if(return_value_pipe_8 == -1)
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "ip232 thread outgoing IPC pipe could not be created");
        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        char *return_value_strerror_7;
        return_value_strerror_7=strerror(*return_value___errno_location_6);
        fprintf(log_file, " (%s)\n", return_value_strerror_7);
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  cfg->dce_data.sSocket = rc;
  cfg->dce_data.ip232_is_connected = 0;
  cfg->dce_data.fd = cfg->dce_data.dp[(signed long int)0][(signed long int)0];
  spawn_ip232_thread(cfg);
  do
    if(log_level >= 4)
    {
      log_start(4);
      fprintf(log_file, "ip232 device configured");
      log_end();
    }

  while((_Bool)0);
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"ip232_init_conn");
      log_end();
    }

  while((_Bool)0);
  return rc;
}

// ip232_read
// file src/ip232.c line 202
signed int ip232_read(struct modem_config *cfg, unsigned char *data, signed int len)
{
  signed int res;
  signed int rc;
  unsigned char buf[256l];
  signed int i = 0;
  unsigned char ch;
  signed int text_len = 0;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ip232_read");
      log_end();
    }

  while((_Bool)0);
  if((unsigned long int)len >= 257ul)
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "ip232_read: len > sizeof(buf)");
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  signed int tmp_post_2;
  signed int tmp_post_3;
  if(!(cfg->dce_data.ip232_is_connected == 0))
  {
    signed long int return_value_recv_1;
    return_value_recv_1=recv(cfg->dce_data.fd, (void *)buf, (unsigned long int)len, 0);
    res = (signed int)return_value_recv_1;
    if(!(res >= 1))
    {
      do
        if(log_level >= 4)
        {
          log_start(4);
          fprintf(log_file, "No ip232 socket data read, assume closed peer");
          log_end();
        }

      while((_Bool)0);
      ip_disconnect(cfg->dce_data.fd);
      cfg->dce_data.fd = cfg->dce_data.dp[(signed long int)0][(signed long int)0];
      cfg->dce_data.ip232_is_connected = 0;
    }

    else
    {
      do
        if(log_level >= 5)
        {
          log_start(5);
          fprintf(log_file, "Read %d bytes from ip232 socket", res);
          log_end();
        }

      while((_Bool)0);
      log_trace(1, buf, res);
      for( ; !(i >= res); i = i + 1)
      {
        ch = buf[(signed long int)i];
        if(!(cfg->dce_data.ip232_iac == 0))
        {
          cfg->dce_data.ip232_iac = 0;
          switch((signed int)ch)
          {
            case 0:
            {
              cfg->dce_data.ip232_dtr = 0;
              break;
            }
            case 1:
            {
              cfg->dce_data.ip232_dtr = 1;
              break;
            }
            case 255:
            {
              tmp_post_2 = text_len;
              text_len = text_len + 1;
              data[(signed long int)tmp_post_2] = (unsigned char)255;
            }
          }
        }

        else
          if((signed int)ch == 255)
            cfg->dce_data.ip232_iac = 1;

          else
          {
            tmp_post_3 = text_len;
            text_len = text_len + 1;
            data[(signed long int)tmp_post_3] = ch;
          }
      }
    }
  }

  else
  {
    signed long int return_value_read_4;
    return_value_read_4=read(cfg->dce_data.dp[(signed long int)0][(signed long int)0], (void *)buf, sizeof(unsigned char [256l]) /*256ul*/ );
    res = (signed int)return_value_read_4;
    if((signed int)buf[0l] == 43)
    {
      do
        if(log_level >= 4)
        {
          log_start(4);
          fprintf(log_file, "Accepting ip232 connection...");
          log_end();
        }

      while((_Bool)0);
      rc=ip_accept(cfg->dce_data.sSocket);
      if(res >= 0)
      {
        cfg->dce_data.fd = rc;
        cfg->dce_data.ip232_is_connected = 1;
        cfg->dce_data.ip232_dtr = 0;
        cfg->dce_data.ip232_dcd = 0;
        writePipe(cfg->dce_data.dp[(signed long int)1][(signed long int)1], (unsigned char)43);
      }

    }

  }
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"ip232_read");
      log_end();
    }

  while((_Bool)0);
  return text_len;
}

// ip232_set_control_lines
// file src/ip232.c line 141
signed int ip232_set_control_lines(struct modem_config *cfg, signed int state)
{
  signed int dcd;
  unsigned char cmd[2l];
  if(!(cfg->dce_data.ip232_is_connected == 0))
  {
    dcd = (state & 0x002) != 0 ? 1 : 0;
    if(!(dcd == cfg->dce_data.ip232_dcd))
    {
      cfg->dce_data.ip232_dcd = dcd;
      cmd[(signed long int)0] = (unsigned char)255;
      cmd[(signed long int)1] = (unsigned char)(dcd != 0 ? 1 : 0);
      ip_write(cfg->dce_data.fd, cmd, (signed int)sizeof(unsigned char [2l]) /*2ul*/ );
    }

  }

  return 0;
}

// ip232_set_flow_control
// file src/ip232.c line 125
signed int ip232_set_flow_control(struct modem_config *cfg, signed int status)
{
  return 0;
}

// ip232_thread
// file src/ip232.c line 18
void * ip232_thread(void *arg)
{
  struct modem_config *cfg = (struct modem_config *)arg;
  signed int accept_pending = 0;
  signed int rc;
  signed int res = 0;
  unsigned char buf[256l];
  struct anonymous_1 readfs;
  signed int max_fd = 0;
  signed int cSocket;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ip232_thread");
      log_end();
    }

  while((_Bool)0);
  signed int tmp_if_expr_1;
  do
  {

  __CPROVER_DUMP_L3:
    ;
    signed int __d0;
    signed int __d1;
    asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_1) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readfs)->__fds_bits[(signed long int)0]) : "memory");
    (&readfs)->__fds_bits[(signed long int)(cfg->dce_data.dp[(signed long int)1][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(cfg->dce_data.dp[(signed long int)1][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cfg->dce_data.dp[(signed long int)1][(signed long int)0] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    max_fd = cfg->dce_data.dp[(signed long int)1][(signed long int)0];
    if(accept_pending == 0)
    {
      (&readfs)->__fds_bits[(signed long int)(cfg->dce_data.sSocket / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(cfg->dce_data.sSocket / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cfg->dce_data.sSocket % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      if(!(cfg->dce_data.sSocket >= max_fd))
        tmp_if_expr_1 = max_fd;

      else
        tmp_if_expr_1 = cfg->dce_data.sSocket;
      max_fd = tmp_if_expr_1;
    }

    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Waiting for incoming ip232 connections");
        log_end();
      }

    while((_Bool)0);
    rc=select(max_fd + 1, &readfs, (struct anonymous_1 *)(void *)0, (struct anonymous_1 *)(void *)0, (struct timeval *)(void *)0);
    if(rc >= 0)
    {
      if(!((readfs.__fds_bits[(signed long int)(cfg->dce_data.dp[1l][0l] / 8)] & (signed long int)(1UL << cfg->dce_data.dp[1l][0l] % 8)) == 0l))
      {
        signed long int return_value_read_2;
        return_value_read_2=read(cfg->dce_data.dp[(signed long int)1][(signed long int)0], (void *)buf, sizeof(unsigned char [256l]) /*256ul*/  - (unsigned long int)1);
        res = (signed int)return_value_read_2;
        do
          if(log_level >= 5)
          {
            log_start(5);
            fprintf(log_file, "ip232 thread notified");
            log_end();
          }

        while((_Bool)0);
        accept_pending = 0;
      }

      if(!((readfs.__fds_bits[(signed long int)(cfg->dce_data.sSocket / 8)] & (signed long int)(1UL << cfg->dce_data.sSocket % 8)) == 0l))
      {
        if(!(cfg->dce_data.ip232_is_connected == 0))
        {
          do
            if(log_level >= 5)
            {
              log_start(5);
              fprintf(log_file, "Already have ip232 connection, rejecting new");
              log_end();
            }

          while((_Bool)0);
          cSocket=ip_accept(cfg->dce_data.sSocket);
          if(cSocket >= 0)
            close(cSocket);

        }

        else
        {
          do
            if(log_level >= 5)
            {
              log_start(5);
              fprintf(log_file, "Incoming ip232 connection");
              log_end();
            }

          while((_Bool)0);
          writePipe(cfg->dce_data.dp[(signed long int)0][(signed long int)1], (unsigned char)43);
          accept_pending = 1;
        }
      }

    }

  }
  while((_Bool)1);
  if(log_level >= 6)
  {
    log_start(6);
    fprintf(log_file, "Exitting %s function", (const void *)"ip232_thread");
    log_end();
  }

}

// ip232_write
// file src/ip232.c line 159
signed int ip232_write(struct modem_config *cfg, unsigned char *data, signed int len)
{
  signed int retval;
  signed int i = 0;
  signed int double_iac = 0;
  unsigned char text[1024l];
  signed int text_len = 0;
  log_trace(2, data, len);
  retval = len;
  signed int tmp_post_1;
  signed int tmp_post_2;
  signed int tmp_post_3;
  signed int tmp_post_4;
  if(!(cfg->dce_data.ip232_is_connected == 0))
  {
    while(!(i >= len))
    {
      if(!(double_iac == 0))
      {
        tmp_post_1 = text_len;
        text_len = text_len + 1;
        text[(signed long int)tmp_post_1] = (unsigned char)255;
        double_iac = 0;
        i = i + 1;
      }

      else
        if((signed int)data[(signed long int)i] == 255)
        {
          tmp_post_2 = text_len;
          text_len = text_len + 1;
          text[(signed long int)tmp_post_2] = (unsigned char)255;
          double_iac = 1;
        }

        else
        {
          tmp_post_3 = text_len;
          text_len = text_len + 1;
          tmp_post_4 = i;
          i = i + 1;
          text[(signed long int)tmp_post_3] = data[(signed long int)tmp_post_4];
        }
      if((unsigned long int)text_len == sizeof(unsigned char [1024l]) /*1024ul*/ )
      {
        retval=ip_write(cfg->dce_data.fd, text, text_len);
        text_len = 0;
      }

    }
    if(!(text_len == 0))
      retval=ip_write(cfg->dce_data.fd, text, text_len);

  }

  return retval;
}

// ip_accept
// file src/ip.h line 12
signed int ip_accept(signed int sSocket)
{
  struct sockaddr_in clientName = { .sin_family=(unsigned short int)0, .sin_port=0, .sin_addr={ .s_addr=0u },
    .sin_zero={ 0, 0, 0, 0, 0, 0, 0, 0 } };
  signed int clientLength = (signed int)sizeof(struct sockaddr_in) /*16ul*/ ;
  signed int cSocket = -1;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ip_accept");
      log_end();
    }

  while((_Bool)0);
  memset((void *)&clientName, 0, sizeof(struct sockaddr_in) /*16ul*/ );
  cSocket=accept(sSocket, (struct sockaddr *)&clientName, (unsigned int *)&clientLength);
  if(cSocket == -1)
  {
    do
      if(log_level >= 2)
      {
        log_start(2);
        fprintf(log_file, "Could not accept incoming connection");
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(log_file, " (%s)\n", return_value_strerror_2);
        log_end();
      }

    while((_Bool)0);
    return -1;
  }

  else
  {
    signed int return_value_getpeername_6;
    return_value_getpeername_6=getpeername(cSocket, (struct sockaddr *)&clientName, (unsigned int *)&clientLength);
    if(return_value_getpeername_6 == -1)
      do
        if(log_level >= 3)
        {
          log_start(3);
          fprintf(log_file, "Could not obtain peer name");
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          char *return_value_strerror_4;
          return_value_strerror_4=strerror(*return_value___errno_location_3);
          fprintf(log_file, " (%s)\n", return_value_strerror_4);
          log_end();
        }

      while((_Bool)0);

    else
      do
        if(log_level >= 4)
        {
          log_start(4);
          char *return_value_inet_ntoa_5;
          return_value_inet_ntoa_5=inet_ntoa(clientName.sin_addr);
          fprintf(log_file, "Connection accepted from %s", return_value_inet_ntoa_5);
          log_end();
        }

      while((_Bool)0);
    do
      if(log_level >= 6)
      {
        log_start(6);
        fprintf(log_file, "Exitting %s function", (const void *)"ip_accept");
        log_end();
      }

    while((_Bool)0);
    return cSocket;
  }
}

// ip_connect
// file src/ip.c line 80
signed int ip_connect(unsigned char *addy)
{
  struct sockaddr_in pin;
  struct in_addr cin_addr;
  struct hostent *hp;
  signed int sd = 0;
  signed int port = 23;
  unsigned char *address;
  unsigned char *tmp;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ip_connect");
      log_end();
    }

  while((_Bool)0);
  char *return_value_strtok_1;
  return_value_strtok_1=strtok((char *)addy, ":");
  address = (unsigned char *)return_value_strtok_1;
  char *return_value_strtok_2;
  return_value_strtok_2=strtok((char *)(unsigned char *)0, ":");
  tmp = (unsigned char *)return_value_strtok_2;
  unsigned long int return_value_strlen_3;
  if(!(tmp == ((unsigned char *)NULL)))
  {
    return_value_strlen_3=strlen((const char *)tmp);
    if(return_value_strlen_3 >= 1ul)
      port=atoi((const char *)tmp);

  }

  do
    if(log_level >= 5)
    {
      log_start(5);
      fprintf(log_file, "Calling %s", addy);
      log_end();
    }

  while((_Bool)0);
  memset((void *)&pin, 0, sizeof(struct sockaddr_in) /*16ul*/ );
  hp=gethostbyname((const char *)address);
  if(hp == ((struct hostent *)NULL))
  {
    signed int return_value_inet_aton_6;
    return_value_inet_aton_6=inet_aton((const char *)address, &cin_addr);
    if(!(return_value_inet_aton_6 == 1))
    {
      do
        if(log_level >= 2)
        {
          log_start(2);
          fprintf(log_file, "Host %s was invalid", addy);
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          char *return_value_strerror_5;
          return_value_strerror_5=strerror(*return_value___errno_location_4);
          fprintf(log_file, " (%s)\n", return_value_strerror_5);
          log_end();
        }

      while((_Bool)0);
      return -1;
    }

  }

  else
    cin_addr = *((struct in_addr *)hp->h_addr_list[(signed long int)0]);
  pin.sin_family = (unsigned short int)2;
  pin.sin_addr.s_addr = cin_addr.s_addr;
  pin.sin_port=htons((unsigned short int)port);
  sd=socket(2, 1, 0);
  if(sd == -1)
  {
    do
      if(log_level >= 2)
      {
        log_start(2);
        fprintf(log_file, "could not create client socket");
        signed int *return_value___errno_location_7;
        return_value___errno_location_7=__errno_location();
        char *return_value_strerror_8;
        return_value_strerror_8=strerror(*return_value___errno_location_7);
        fprintf(log_file, " (%s)\n", return_value_strerror_8);
        log_end();
      }

    while((_Bool)0);
    return -1;
  }

  else
  {
    signed int return_value_connect_11;
    return_value_connect_11=connect(sd, (struct sockaddr *)&pin, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
    if(return_value_connect_11 == -1)
    {
      do
        if(log_level >= 2)
        {
          log_start(2);
          fprintf(log_file, "could not connect to address");
          signed int *return_value___errno_location_9;
          return_value___errno_location_9=__errno_location();
          char *return_value_strerror_10;
          return_value_strerror_10=strerror(*return_value___errno_location_9);
          fprintf(log_file, " (%s)\n", return_value_strerror_10);
          log_end();
        }

      while((_Bool)0);
      return -1;
    }

    else
    {
      do
        if(log_level >= 4)
        {
          log_start(4);
          fprintf(log_file, "Connection to %s established", addy);
          log_end();
        }

      while((_Bool)0);
      do
        if(log_level >= 6)
        {
          log_start(6);
          fprintf(log_file, "Exitting %s function", (const void *)"ip_connect");
          log_end();
        }

      while((_Bool)0);
      return sd;
    }
  }
}

// ip_disconnect
// file src/ip.c line 163
signed int ip_disconnect(signed int fd)
{
  if(fd >= 0)
    close(fd);

  return 0;
}

// ip_init_server_conn
// file src/ip.c line 15
signed int ip_init_server_conn(signed int port)
{
  signed int sSocket = 0;
  signed int on = 0;
  signed int rc = 0;
  struct sockaddr_in serverName = { .sin_family=(unsigned short int)0, .sin_port=0, .sin_addr={ .s_addr=0u },
    .sin_zero={ 0, 0, 0, 0, 0, 0, 0, 0 } };
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ip_init_server_conn");
      log_end();
    }

  while((_Bool)0);
  do
    if(log_level >= 5)
    {
      log_start(5);
      fprintf(log_file, "Creating server socket");
      log_end();
    }

  while((_Bool)0);
  sSocket=socket(2, 1, 6);
  if(sSocket == -1)
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "Server socket could not be created");
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(log_file, " (%s)\n", return_value_strerror_2);
        log_end();
      }

    while((_Bool)0);

  else
  {
    on = 1;
    rc=setsockopt(sSocket, 1, 2, (const void *)(const char *)&on, (unsigned int)sizeof(signed int) /*4ul*/ );
    if(rc == -1)
      do
        if(log_level >= 2)
        {
          log_start(2);
          fprintf(log_file, "bind address checking could not be turned off");
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          char *return_value_strerror_4;
          return_value_strerror_4=strerror(*return_value___errno_location_3);
          fprintf(log_file, " (%s)\n", return_value_strerror_4);
          log_end();
        }

      while((_Bool)0);

    serverName.sin_addr.s_addr=htonl((unsigned int)0x00000000);
    serverName.sin_family = (unsigned short int)2;
    serverName.sin_port=htons((unsigned short int)port);
    do
      if(log_level >= 5)
      {
        log_start(5);
        fprintf(log_file, "Binding server socket to port %d", port);
        log_end();
      }

    while((_Bool)0);
    rc=bind(sSocket, (struct sockaddr *)&serverName, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
    if(rc == -1)
    {
      do
        if(log_level >= 1)
        {
          log_start(1);
          fprintf(log_file, "Server socket could not be bound to port");
          signed int *return_value___errno_location_5;
          return_value___errno_location_5=__errno_location();
          char *return_value_strerror_6;
          return_value_strerror_6=strerror(*return_value___errno_location_5);
          fprintf(log_file, " (%s)\n", return_value_strerror_6);
          log_end();
        }

      while((_Bool)0);
      sSocket = -1;
    }

    else
    {
      do
        if(log_level >= 4)
        {
          log_start(4);
          fprintf(log_file, "Server socket bound to port");
          log_end();
        }

      while((_Bool)0);
      rc=listen(sSocket, BACK_LOG);
      do
        if(log_level >= 4)
        {
          log_start(4);
          fprintf(log_file, "Server socket listening for connections");
          log_end();
        }

      while((_Bool)0);
      if(rc == -1)
      {
        do
          if(log_level >= 1)
          {
            log_start(1);
            fprintf(log_file, "Server socket could not listen on port");
            signed int *return_value___errno_location_7;
            return_value___errno_location_7=__errno_location();
            char *return_value_strerror_8;
            return_value_strerror_8=strerror(*return_value___errno_location_7);
            fprintf(log_file, " (%s)\n", return_value_strerror_8);
            log_end();
          }

        while((_Bool)0);
        sSocket = -1;
      }

    }
  }
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"ip_init_server_conn");
      log_end();
    }

  while((_Bool)0);
  return sSocket;
}

// ip_read
// file src/ip.c line 174
signed int ip_read(signed int fd, unsigned char *data, signed int len)
{
  signed int res;
  signed long int return_value_recv_1;
  return_value_recv_1=recv(fd, (void *)data, (unsigned long int)len, 0);
  res = (signed int)return_value_recv_1;
  log_trace(4, data, res);
  return res;
}

// ip_thread
// file src/bridge.c line 116
void * ip_thread(void *arg)
{
  struct modem_config *cfg = (struct modem_config *)arg;
  signed int action_pending = 0;
  struct anonymous_1 readfs;
  signed int max_fd;
  signed int res = 0;
  unsigned char buf[256l];
  signed int rc;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ip_thread");
      log_end();
    }

  while((_Bool)0);
  signed int tmp_if_expr_1;
  while((_Bool)1)
  {
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_1) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readfs)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&readfs)->__fds_bits[(signed long int)(cfg->data.cp[(signed long int)1][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(cfg->data.cp[(signed long int)1][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cfg->data.cp[(signed long int)1][(signed long int)0] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    max_fd = cfg->data.cp[(signed long int)1][(signed long int)0];
    if(action_pending == 0)
    {
      if(!(cfg->conn_type == 0))
      {
        if(cfg->cmd_mode == 0)
        {
          if(cfg->line_data.fd >= 0)
          {
            if(cfg->line_data.valid_conn == 1)
            {
              (&readfs)->__fds_bits[(signed long int)(cfg->line_data.fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(cfg->line_data.fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cfg->line_data.fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
              if(!(cfg->line_data.fd >= max_fd))
                tmp_if_expr_1 = max_fd;

              else
                tmp_if_expr_1 = cfg->line_data.fd;
              max_fd = tmp_if_expr_1;
            }

          }

        }

      }

    }

    max_fd = max_fd + 1;
    rc=select(max_fd, &readfs, (struct anonymous_1 *)(void *)0, (struct anonymous_1 *)(void *)0, (struct timeval *)(void *)0);
    if(rc == -1)
      do
        if(log_level >= 3)
        {
          log_start(3);
          fprintf(log_file, "Select returned error");
          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          char *return_value_strerror_3;
          return_value_strerror_3=strerror(*return_value___errno_location_2);
          fprintf(log_file, " (%s)\n", return_value_strerror_3);
          log_end();
        }

      while((_Bool)0);

    else
    {
      if(cfg->line_data.valid_conn == 1)
      {
        if(!((readfs.__fds_bits[(signed long int)(cfg->line_data.fd / 8)] & (signed long int)(1UL << cfg->line_data.fd % 8)) == 0l))
        {
          do
            if(log_level >= 5)
            {
              log_start(5);
              fprintf(log_file, "Data available on socket");
              log_end();
            }

          while((_Bool)0);
          signed long int return_value_recv_4;
          return_value_recv_4=recv(cfg->line_data.fd, (void *)buf, sizeof(unsigned char [256l]) /*256ul*/ , 0);
          res = (signed int)return_value_recv_4;
          if(!(res >= 1))
          {
            do
              if(log_level >= 4)
              {
                log_start(4);
                fprintf(log_file, "No socket data read, assume closed peer");
                log_end();
              }

            while((_Bool)0);
            writePipe(cfg->data.cp[(signed long int)0][(signed long int)1], (unsigned char)68);
            action_pending = 1;
          }

          else
          {
            do
              if(log_level >= 5)
              {
                log_start(5);
                fprintf(log_file, "Read %d bytes from socket", res);
                log_end();
              }

            while((_Bool)0);
            buf[(signed long int)res] = (unsigned char)0;
            log_trace(4, buf, res);
            parse_ip_data(cfg, buf, res);
          }
        }

      }

      if(!((readfs.__fds_bits[(signed long int)(cfg->data.cp[1l][0l] / 8)] & (signed long int)(1UL << cfg->data.cp[1l][0l] % 8)) == 0l))
      {
        signed long int return_value_read_5;
        return_value_read_5=read(cfg->data.cp[(signed long int)1][(signed long int)0], (void *)buf, sizeof(unsigned char [256l]) /*256ul*/  - (unsigned long int)1);
        res = (signed int)return_value_read_5;
        do
          if(log_level >= 5)
          {
            log_start(5);
            fprintf(log_file, "IP thread notified");
            log_end();
          }

        while((_Bool)0);
        action_pending = 0;
      }

    }
  }
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"ip_thread");
      log_end();
    }

  while((_Bool)0);
}

// ip_write
// file src/ip.c line 169
signed int ip_write(signed int fd, unsigned char *data, signed int len)
{
  log_trace(8, data, len);
  signed long int return_value_write_1;
  return_value_write_1=write(fd, (const void *)data, (unsigned long int)len);
  return (signed int)return_value_write_1;
}

// line_connect
// file src/line.h line 11
signed int line_connect(struct modem_config *cfg)
{
  unsigned char *addy = cfg->dialno;
  do
    if(log_level >= 4)
    {
      log_start(4);
      fprintf(log_file, "Connecting");
      log_end();
    }

  while((_Bool)0);
  addy=pb_search(addy);
  cfg->line_data.fd=ip_connect(addy);
  if(cfg->line_data.fd >= 0)
  {
    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Connected to %s", addy);
        log_end();
      }

    while((_Bool)0);
    cfg->line_data.valid_conn = 1;
    return 0;
  }

  else
  {
    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Could not connect to %s", addy);
        log_end();
      }

    while((_Bool)0);
    cfg->line_data.valid_conn = 0;
    return -1;
  }
}

// line_disconnect
// file src/line.h line 12
signed int line_disconnect(struct modem_config *cfg)
{
  do
    if(log_level >= 4)
    {
      log_start(4);
      fprintf(log_file, "Disconnecting");
      log_end();
    }

  while((_Bool)0);
  if(cfg->data.direct_conn == 1u)
  {
    do
      if(log_level >= 4)
      {
        log_start(4);
        fprintf(log_file, "Direct connection active, maintaining link");
        log_end();
      }

    while((_Bool)0);
    return -1;
  }

  else
  {
    cfg->line_data.is_telnet = 0;
    cfg->line_data.first_char = 1;
    if(cfg->line_data.valid_conn == 1)
    {
      ip_disconnect(cfg->line_data.fd);
      cfg->line_data.valid_conn = 0;
    }

  }
  return 0;
}

// line_init_config
// file src/line.h line 6
signed int line_init_config(struct modem_config *cfg)
{
  cfg->line_data.fd = -1;
  cfg->line_data.is_telnet = 0;
  cfg->line_data.first_char = 1;
  cfg->line_data.valid_conn = 0;
  nvt_init_config(&cfg->line_data.nvt_data);
  return 0;
}

// line_listen
// file src/line.h line 9
signed int line_listen(struct modem_config *cfg)
{
  return 0;
}

// line_off_hook
// file src/line.h line 10
signed int line_off_hook(struct modem_config *cfg)
{
  return 0;
}

// line_write
// file src/line.h line 8
signed int line_write(struct modem_config *cfg, unsigned char *data, signed int len)
{
  signed int retval;
  signed int i = 0;
  signed int double_iac = 0;
  unsigned char text[1024l];
  signed int text_len = 0;
  signed int tmp_post_1;
  signed int tmp_post_2;
  signed int tmp_post_3;
  signed int tmp_post_4;
  if(!(cfg->line_data.is_telnet == 0))
  {
    if(cfg->line_data.nvt_data.binary_xmit == 0)
      goto __CPROVER_DUMP_L8;

    retval = 0;
    while(!(i >= len))
    {
      if(!(double_iac == 0))
      {
        tmp_post_1 = text_len;
        text_len = text_len + 1;
        text[(signed long int)tmp_post_1] = (unsigned char)255;
        double_iac = 0;
        i = i + 1;
      }

      else
        if((signed int)data[(signed long int)i] == 255)
        {
          tmp_post_2 = text_len;
          text_len = text_len + 1;
          text[(signed long int)tmp_post_2] = (unsigned char)255;
          double_iac = 1;
        }

        else
        {
          tmp_post_3 = text_len;
          text_len = text_len + 1;
          tmp_post_4 = i;
          i = i + 1;
          text[(signed long int)tmp_post_3] = data[(signed long int)tmp_post_4];
        }
      if(text_len == 1024)
      {
        retval=ip_write(cfg->line_data.fd, text, text_len);
        text_len = 0;
      }

    }
    if(!(text_len == 0))
      retval=ip_write(cfg->line_data.fd, text, text_len);

    return retval;
  }

  else
  {

  __CPROVER_DUMP_L8:
    ;
    signed int return_value_ip_write_5;
    return_value_ip_write_5=ip_write(cfg->line_data.fd, data, len);
    return return_value_ip_write_5;
  }
}

// log_end
// file src/debug.h line 58
void log_end()
{
  fprintf(log_file, "\n");
  fflush(log_file);
  signed int return_value_pthread_mutex_unlock_1;
  return_value_pthread_mutex_unlock_1=pthread_mutex_unlock(&log_mutex);
  if(return_value_pthread_mutex_unlock_1 == -1)
    perror("Could not lock the log mutex");

}

// log_get_trace_flags
// file src/debug.c line 55
signed int log_get_trace_flags()
{
  return trace_flags;
}

// log_init
// file src/debug.c line 16
signed int log_init(void)
{
  log_file = stdout;
  log_level = 0;
  trace_flags = 0;
  trace_type[(signed long int)1] = (unsigned char *)"RS<-";
  trace_type[(signed long int)2] = (unsigned char *)"RS->";
  trace_type[(signed long int)4] = (unsigned char *)"IP<-";
  trace_type[(signed long int)8] = (unsigned char *)"IP->";
  log_desc[(signed long int)1] = (unsigned char *)"FATAL";
  log_desc[(signed long int)2] = (unsigned char *)"ERROR";
  log_desc[(signed long int)3] = (unsigned char *)"WARN";
  log_desc[(signed long int)4] = (unsigned char *)"INFO";
  log_desc[(signed long int)5] = (unsigned char *)"DEBUG";
  log_desc[(signed long int)6] = (unsigned char *)"ENTER_EXIT";
  log_desc[(signed long int)7] = (unsigned char *)"DEBUG_X";
  log_desc[(signed long int)10] = (unsigned char *)"";
  signed int return_value_pthread_mutex_init_1;
  return_value_pthread_mutex_init_1=pthread_mutex_init(&log_mutex, (const union anonymous_0 *)(void *)0);
  if(return_value_pthread_mutex_init_1 == -1)
  {
    perror("Could not create Log Mutex");
    exit(-1);
  }

  return 0;
}

// log_set_file
// file src/debug.c line 40
void log_set_file(struct _IO_FILE *a)
{
  log_file = a;
}

// log_set_level
// file src/debug.c line 45
void log_set_level(signed int a)
{
  log_level = a;
}

// log_set_trace_flags
// file src/debug.c line 50
void log_set_trace_flags(signed int a)
{
  trace_flags = a;
}

// log_start
// file src/debug.h line 57
void log_start(signed int level)
{
  unsigned char t[23l];
  signed long int now;
  signed int return_value_pthread_mutex_lock_3;
  return_value_pthread_mutex_lock_3=pthread_mutex_lock(&log_mutex);
  if(return_value_pthread_mutex_lock_3 == -1)
    perror("Could not lock the log mutex");

  else
  {
    now=time((signed long int *)(void *)0);
    struct tm *return_value_localtime_1;
    return_value_localtime_1=localtime(&now);
    strftime((char *)t, (unsigned long int)22, "%Y-%m-%d %H:%M:%S", return_value_localtime_1);
    unsigned long int return_value_pthread_self_2;
    return_value_pthread_self_2=pthread_self();
    fprintf(log_file, "%s:%5.5d:%s:", (const void *)t, (signed int)return_value_pthread_self_2, log_desc[(signed long int)level]);
  }
}

// log_trace
// file src/debug.h line 56
void log_trace(signed int type, unsigned char *line, signed int len)
{
  signed int i = 0;
  signed int ch;
  unsigned char data[64l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned char *dptr = (unsigned char *)(void *)0;
  unsigned char text[17l];
  if(!(len == 0))
  {
    if(!((type & trace_flags) == 0))
    {
      text[(signed long int)16] = (unsigned char)0;
      i = 0;
      for( ; !(i >= len); i = i + 1)
      {
        if(i % 16 == 0)
        {
          dptr = data;
          sprintf((char *)dptr, "%4.4x|", i);
        }

        ch = (signed int)line[(signed long int)i];
        sprintf((char *)(dptr + (signed long int)5 + (signed long int)((i % 16) * 3)), "%2.2x", ch);
        if(ch >= 32 && !(ch >= 127))
          text[(signed long int)(i % 16)] = (unsigned char)ch;

        else
          text[(signed long int)(i % 16)] = (unsigned char)46;
        if(i % 16 == 15)
        {
          log_start(10);
          fprintf(log_file, "%s|%s|%s|", trace_type[(signed long int)type], (const void *)data, (const void *)text);
          log_end();
        }

        else
          sprintf((char *)(dptr + (signed long int)7 + (signed long int)((i % 16) * 3)), " ");
      }
      i = i % 16;
      if(i >= 1)
      {
        for( ; !(i >= 16); i = i + 1)
        {
          sprintf((char *)(dptr + (signed long int)5 + (signed long int)((i % 16) * 3)), "  ");
          if(!(i % 16 == 15))
            sprintf((char *)(dptr + (signed long int)7 + (signed long int)((i % 16) * 3)), " ");

          text[(signed long int)(i % 16)] = (unsigned char)32;
        }
        log_start(10);
        fprintf(log_file, "%s|%s|%s|", trace_type[(signed long int)type], (const void *)data, (const void *)text);
      }

      log_end();
    }

  }

}

// main
// file src/tcpser.c line 22
signed int main(signed int argc, char **argv)
{
  struct modem_config cfg[64l];
  signed int modem_count;
  signed int port = 0;
  unsigned char all_busy[255l];
  unsigned long int thread_id;
  signed int i;
  signed int rc;
  signed int sSocket = 0;
  struct anonymous_1 readfs;
  signed int max_fd = 0;
  signed int accept_pending = 0;
  signed int res = 0;
  unsigned char buf[255l];
  signed int cSocket;
  log_init();
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"main");
      log_end();
    }

  while((_Bool)0);
  log_set_level(1);
  mdm_init();
  pb_init();
  signal(29, (void (*)(signed int))1);
  modem_count=init(argc, argv, cfg, 64, &port, all_busy, (signed int)sizeof(unsigned char [255l]) /*255ul*/ );
  sSocket=ip_init_server_conn(port);
  i = 0;
  for( ; !(i >= modem_count); i = i + 1)
  {
    signed int return_value_pipe_3;
    return_value_pipe_3=pipe(cfg[(signed long int)i].data.mp[(signed long int)0]);
    if(return_value_pipe_3 == -1)
    {
      do
        if(log_level >= 1)
        {
          log_start(1);
          fprintf(log_file, "Bridge task incoming IPC pipe could not be created");
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          char *return_value_strerror_2;
          return_value_strerror_2=strerror(*return_value___errno_location_1);
          fprintf(log_file, " (%s)\n", return_value_strerror_2);
          log_end();
        }

      while((_Bool)0);
      exit(-1);
    }

    signed int return_value_pipe_6;
    return_value_pipe_6=pipe(cfg[(signed long int)i].data.mp[(signed long int)1]);
    if(return_value_pipe_6 == -1)
    {
      do
        if(log_level >= 1)
        {
          log_start(1);
          fprintf(log_file, "Bridge task outgoing IPC pipe could not be created");
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          char *return_value_strerror_5;
          return_value_strerror_5=strerror(*return_value___errno_location_4);
          fprintf(log_file, " (%s)\n", return_value_strerror_5);
          log_end();
        }

      while((_Bool)0);
      exit(-1);
    }

    signed int return_value_dce_init_conn_7;
    return_value_dce_init_conn_7=dce_init_conn(&cfg[(signed long int)i]);
    if(!(return_value_dce_init_conn_7 >= 0))
    {
      do
        if(log_level >= 1)
        {
          log_start(1);
          fprintf(log_file, "Could not open serial port %s", (const void *)cfg[0l].dce_data.tty);
          log_end();
        }

      while((_Bool)0);
      exit(-1);
    }

    cfg[(signed long int)i].line_data.sfd = sSocket;
    rc=pthread_create(&thread_id, (const union pthread_attr_t *)(void *)0, ((run_bridge)), (void *)&cfg[(signed long int)i]);
    if(!(rc >= 0))
    {
      do
        if(log_level >= 1)
        {
          log_start(1);
          fprintf(log_file, "IP thread could not be started");
          signed int *return_value___errno_location_8;
          return_value___errno_location_8=__errno_location();
          char *return_value_strerror_9;
          return_value_strerror_9=strerror(*return_value___errno_location_8);
          fprintf(log_file, " (%s)\n", return_value_strerror_9);
          log_end();
        }

      while((_Bool)0);
      exit(-1);
    }

  }
  signed int tmp_if_expr_10;
  do
  {

  __CPROVER_DUMP_L16:
    ;
    signed int __d0;
    signed int __d1;
    asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_1) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readfs)->__fds_bits[(signed long int)0]) : "memory");
    max_fd = 0;
    i = 0;
    for( ; !(i >= modem_count); i = i + 1)
    {
      (&readfs)->__fds_bits[(signed long int)(cfg[(signed long int)i].data.mp[(signed long int)0][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(cfg[(signed long int)i].data.mp[(signed long int)0][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cfg[(signed long int)i].data.mp[(signed long int)0][(signed long int)0] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      if(!(cfg[(signed long int)i].data.mp[0l][0l] >= max_fd))
        tmp_if_expr_10 = max_fd;

      else
        tmp_if_expr_10 = cfg[(signed long int)i].data.mp[(signed long int)0][(signed long int)0];
      max_fd = tmp_if_expr_10;
    }
    if(accept_pending == 0)
    {
      max_fd = max_fd > sSocket ? max_fd : sSocket;
      (&readfs)->__fds_bits[(signed long int)(sSocket / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(sSocket / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << sSocket % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    }

    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Waiting for incoming connections and/or indicators");
        log_end();
      }

    while((_Bool)0);
    select(max_fd + 1, &readfs, (struct anonymous_1 *)(void *)0, (struct anonymous_1 *)(void *)0, (struct timeval *)(void *)0);
    i = 0;
    for( ; !(i >= modem_count); i = i + 1)
      if(!((readfs.__fds_bits[(signed long int)(cfg[(signed long int)i].data.mp[0l][0l] / 8)] & (signed long int)(1UL << cfg[(signed long int)i].data.mp[0l][0l] % 8)) == 0l))
      {
        signed long int return_value_read_11;
        return_value_read_11=read(cfg[(signed long int)i].data.mp[(signed long int)0][(signed long int)0], (void *)buf, sizeof(unsigned char [255l]) /*255ul*/  - (unsigned long int)1);
        res = (signed int)return_value_read_11;
        if(res >= 0)
        {
          buf[(signed long int)res] = (unsigned char)0;
          do
            if(log_level >= 5)
            {
              log_start(5);
              fprintf(log_file, "modem core #%d sent response '%c'", i, buf[(signed long int)0]);
              log_end();
            }

          while((_Bool)0);
          accept_pending = 0;
        }

      }

    if(!((readfs.__fds_bits[(signed long int)(sSocket / 8)] & (signed long int)(1UL << sSocket % 8)) == 0l))
    {
      if(accept_pending == 0)
      {
        do
          if(log_level >= 5)
          {
            log_start(5);
            fprintf(log_file, "Incoming connection pending");
            log_end();
          }

        while((_Bool)0);
        i = 0;
        for( ; !(i >= modem_count); i = i + 1)
          if(!(cfg[(signed long int)i].s[0l] == 0))
          {
            if(cfg[(signed long int)i].off_hook == 0)
            {
              do
                if(log_level >= 5)
                {
                  log_start(5);
                  fprintf(log_file, "Sending incoming connection to listening modem #%d", i);
                  log_end();
                }

              while((_Bool)0);
              writePipe(cfg[(signed long int)i].data.mp[(signed long int)1][(signed long int)1], (unsigned char)43);
              accept_pending = 1;
              break;
            }

          }

        i = 0;
        for( ; !(i >= modem_count); i = i + 1)
          if(cfg[(signed long int)i].off_hook == 0)
          {
            do
              if(log_level >= 5)
              {
                log_start(5);
                fprintf(log_file, "Sending incoming connection to non-connected modem #%d", i);
                log_end();
              }

            while((_Bool)0);
            writePipe(cfg[(signed long int)i].data.mp[(signed long int)1][(signed long int)1], (unsigned char)43);
            accept_pending = 1;
            break;
          }

        if(i == modem_count)
        {
          do
            if(log_level >= 5)
            {
              log_start(5);
              fprintf(log_file, "No open modem to send to, send notice and close");
              log_end();
            }

          while((_Bool)0);
          cSocket=ip_accept(sSocket);
          if(cSocket >= 0)
          {
            unsigned long int return_value_strlen_13;
            return_value_strlen_13=strlen((const char *)all_busy);
            if(!(return_value_strlen_13 >= 1ul))
            {
              unsigned long int return_value_strlen_12;
              return_value_strlen_12=strlen((const char *)MDM_BUSY);
              ip_write(cSocket, (unsigned char *)MDM_BUSY, (signed int)return_value_strlen_12);
            }

            else
              writeFile(all_busy, cSocket);
            close(cSocket);
          }

        }

      }

    }

  }
  while((_Bool)1);
  if(log_level >= 6)
  {
    log_start(6);
    fprintf(log_file, "Exitting %s function", (const void *)"main");
    log_end();
  }

  return rc;
}

// main_getcmd
// file src/getcmd.c line 275
signed int main_getcmd(signed int argc, char **argv)
{
  unsigned char data[12l] = { 'D', 'T', ' ', '5', '5', '5', '-', '1', '2', '1', '2', 0 };
  signed int index = 0;
  signed int num = 0;
  signed int start = 0;
  signed int end = 0;
  signed int cmd = 0;
  while(!(cmd == -1))
  {
    cmd=getcmd(data, &index, &num, &start, &end);
    printf("Cmd: %c Index: %d Num: %d Start: %d End: %d\n", cmd, index, num, start, end);
  }
  return 0;
}

// mdm_answer
// file src/modem_core.c line 206
signed int mdm_answer(struct modem_config *cfg)
{
  if(cfg->line_ringing == 1)
  {
    cfg->conn_type = 2;
    mdm_off_hook(cfg);
    mdm_set_control_lines(cfg);
    mdm_print_speed(cfg);
  }

  else
    if(cfg->conn_type == 2)
    {
      mdm_off_hook(cfg);
      mdm_set_control_lines(cfg);
    }

    else
      mdm_disconnect(cfg);
  return 0;
}

// mdm_clear_break
// file src/modem_core.c line 564
signed int mdm_clear_break(struct modem_config *cfg)
{
  cfg->break_len = 0;
  cfg->pre_break_delay = 0;
  return 0;
}

// mdm_connect
// file src/modem_core.c line 238
signed int mdm_connect(struct modem_config *cfg)
{
  mdm_off_hook(cfg);
  if(cfg->conn_type == 0)
  {
    signed int return_value_line_connect_1;
    return_value_line_connect_1=line_connect(cfg);
    if(return_value_line_connect_1 == 0)
    {
      cfg->conn_type = 1;
      mdm_set_control_lines(cfg);
      mdm_print_speed(cfg);
    }

    else
    {
      cfg->conn_type = 1;
      mdm_disconnect(cfg);
    }
  }

  return 0;
}

// mdm_disconnect
// file src/modem_core.h line 150
signed int mdm_disconnect(struct modem_config *cfg)
{
  signed int type;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"mdm_disconnect");
      log_end();
    }

  while((_Bool)0);
  do
    if(log_level >= 4)
    {
      log_start(4);
      fprintf(log_file, "Disconnecting modem");
      log_end();
    }

  while((_Bool)0);
  cfg->cmd_mode = 1;
  cfg->off_hook = 0;
  cfg->break_len = 0;
  cfg->line_ringing = 0;
  cfg->pre_break_delay = 0;
  signed int return_value_line_disconnect_1;
  return_value_line_disconnect_1=line_disconnect(cfg);
  if(return_value_line_disconnect_1 == 0)
  {
    type = cfg->conn_type;
    cfg->conn_type = 0;
    mdm_set_control_lines(cfg);
    if(!(type == 0))
    {
      mdm_send_response(3, cfg);
      usleep((unsigned int)(cfg->disconnect_delay * 1000));
    }

    cfg->rings = 0;
    mdm_listen(cfg);
  }

  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"mdm_disconnect");
      log_end();
    }

  while((_Bool)0);
  return 0;
}

// mdm_handle_char
// file src/modem_core.c line 523
signed int mdm_handle_char(struct modem_config *cfg, unsigned char ch)
{
  if(cfg->echo == 1)
    mdm_write_char(cfg, ch);

  _Bool tmp_if_expr_1;
  signed int tmp_post_2;
  if(cfg->cmd_started == 1)
  {
    if(ch == (unsigned char)cfg->s[5l])
    {
      if(cfg->cur_line_idx == 0)
        tmp_if_expr_1 = cfg->echo == 1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
        mdm_write_char(cfg, (unsigned char)84);

      else
        cfg->cur_line_idx = cfg->cur_line_idx - 1;
    }

    else
      if(ch == (unsigned char)cfg->s[3l])
      {
        cfg->cur_line[(signed long int)cfg->cur_line_idx] = (unsigned char)0;
        strncpy((char *)cfg->last_cmd, (const char *)cfg->cur_line, sizeof(unsigned char [1024l]) /*1024ul*/  - (unsigned long int)1);
        mdm_parse_cmd(cfg);
        cfg->found_a = 0;
        cfg->cmd_started = 0;
      }

      else
      {
        tmp_post_2 = cfg->cur_line_idx;
        cfg->cur_line_idx = cfg->cur_line_idx + 1;
        cfg->cur_line[(signed long int)((unsigned long int)tmp_post_2 % sizeof(unsigned char [1024l]) /*1024ul*/ )] = ch;
      }
  }

  else
    if(cfg->found_a == 1)
    {
      if((signed int)ch == 84 || (signed int)ch == 116)
      {
        cfg->cmd_started = 1;
        do
          if(log_level >= 7)
          {
            log_start(7);
            fprintf(log_file, "'T' parsed in serial stream, switching to command parse mode");
            log_end();
          }

        while((_Bool)0);
      }

      else
        if((signed int)ch == 47)
        {
          do
            if(log_level >= 7)
            {
              log_start(7);
              fprintf(log_file, "'/' parsed in the serial stream, replaying last command");
              log_end();
            }

          while((_Bool)0);
          unsigned long int return_value_strlen_3;
          return_value_strlen_3=strlen((const char *)cfg->last_cmd);
          cfg->cur_line_idx = (signed int)return_value_strlen_3;
          strncpy((char *)cfg->cur_line, (const char *)cfg->last_cmd, (unsigned long int)cfg->cur_line_idx);
          mdm_parse_cmd(cfg);
          cfg->cmd_started = 0;
        }

        else
          if(!((signed int)ch == 65) && !((signed int)ch == 97))
            cfg->found_a = 0;

    }

    else
      if((signed int)ch == 65 || (signed int)ch == 97)
      {
        do
          if(log_level >= 7)
          {
            log_start(7);
            fprintf(log_file, "'A' parsed in serial stream");
            log_end();
          }

        while((_Bool)0);
        cfg->found_a = 1;
      }

  return 0;
}

// mdm_handle_timeout
// file src/modem_core.h line 155
signed int mdm_handle_timeout(struct modem_config *cfg)
{
  _Bool tmp_if_expr_2;
  if(cfg->pre_break_delay == 1)
    tmp_if_expr_2 = cfg->break_len == 3 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_1;
  if(tmp_if_expr_2)
  {
    do
      if(log_level >= 4)
      {
        log_start(4);
        fprintf(log_file, "Break condition detected");
        log_end();
      }

    while((_Bool)0);
    cfg->cmd_mode = 1;
    mdm_send_response(0, cfg);
    mdm_clear_break(cfg);
  }

  else
    if(cfg->pre_break_delay == 0)
    {
      do
        if(log_level >= 5)
        {
          log_start(5);
          fprintf(log_file, "Initial Break Delay detected");
          log_end();
        }

      while((_Bool)0);
      cfg->pre_break_delay = 1;
    }

    else
    {
      if(cfg->pre_break_delay == 1)
        tmp_if_expr_1 = cfg->break_len > 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        do
          if(log_level >= 7)
          {
            log_start(7);
            fprintf(log_file, "Inter-break-char delay time exceeded");
            log_end();
          }

        while((_Bool)0);
        mdm_clear_break(cfg);
      }

      else
        if(!(cfg->s[30l] == 0))
        {
          do
            if(log_level >= 4)
            {
              log_start(4);
              fprintf(log_file, "DTE communication inactivity timeout");
              log_end();
            }

          while((_Bool)0);
          mdm_disconnect(cfg);
        }

    }
  return 0;
}

// mdm_init
// file src/modem_core.c line 10
signed int mdm_init(void)
{
  mdm_responses[(signed long int)0] = (unsigned char *)"OK";
  mdm_responses[(signed long int)2] = (unsigned char *)"RING";
  mdm_responses[(signed long int)4] = (unsigned char *)"ERROR";
  mdm_responses[(signed long int)1] = (unsigned char *)"CONNECT";
  mdm_responses[(signed long int)3] = (unsigned char *)"NO CARRIER";
  mdm_responses[(signed long int)5] = (unsigned char *)"CONNECT 1200";
  mdm_responses[(signed long int)6] = (unsigned char *)"NO DIALTONE";
  mdm_responses[(signed long int)7] = (unsigned char *)"BUSY";
  mdm_responses[(signed long int)8] = (unsigned char *)"NO ANSWER";
  mdm_responses[(signed long int)9] = (unsigned char *)"CONNECT 0600";
  mdm_responses[(signed long int)10] = (unsigned char *)"CONNECT 2400";
  mdm_responses[(signed long int)11] = (unsigned char *)"CONNECT 4800";
  mdm_responses[(signed long int)12] = (unsigned char *)"CONNECT 9600";
  mdm_responses[(signed long int)13] = (unsigned char *)"CONNECT 7200";
  mdm_responses[(signed long int)14] = (unsigned char *)"CONNECT 12000";
  mdm_responses[(signed long int)15] = (unsigned char *)"CONNECT 14400";
  mdm_responses[(signed long int)16] = (unsigned char *)"CONNECT 19200";
  mdm_responses[(signed long int)17] = (unsigned char *)"CONNECT 38400";
  mdm_responses[(signed long int)18] = (unsigned char *)"CONNECT 57600";
  mdm_responses[(signed long int)19] = (unsigned char *)"CONNECT 115200";
  mdm_responses[(signed long int)20] = (unsigned char *)"CONNECT 230400";
  return 0;
}

// mdm_init_config
// file src/modem_core.h line 137
void mdm_init_config(struct modem_config *cfg)
{
  signed int i = 0;
  cfg->send_responses = 1;
  cfg->connect_response = 0;
  cfg->response_code_level = 4;
  cfg->text_responses = 1;
  cfg->echo = 1;
  cfg->cmd_mode = 1;
  cfg->conn_type = 0;
  cfg->off_hook = 0;
  cfg->line_ringing = 0;
  cfg->cur_line_idx = 0;
  i = 0;
  for( ; !(i >= 100); i = i + 1)
    cfg->s[(signed long int)i] = 0;
  cfg->s[(signed long int)2] = 43;
  cfg->s[(signed long int)3] = 13;
  cfg->s[(signed long int)4] = 10;
  cfg->s[(signed long int)5] = 8;
  cfg->s[(signed long int)6] = 2;
  cfg->s[(signed long int)7] = 50;
  cfg->s[(signed long int)8] = 2;
  cfg->s[(signed long int)9] = 6;
  cfg->s[(signed long int)10] = 14;
  cfg->s[(signed long int)11] = 95;
  cfg->s[(signed long int)12] = 50;
  cfg->crlf[(signed long int)0] = (unsigned char)cfg->s[(signed long int)3];
  cfg->crlf[(signed long int)1] = (unsigned char)cfg->s[(signed long int)4];
  cfg->crlf[(signed long int)2] = (unsigned char)0;
  cfg->dial_type = (unsigned char)0;
  cfg->last_dial_type = (unsigned char)0;
  cfg->disconnect_delay = 0;
  cfg->pre_break_delay = 0;
  cfg->break_len = 0;
  cfg->memory_dial = 0;
  cfg->dsr_active = 0;
  cfg->dsr_on = 1;
  cfg->dcd_on = 0;
  cfg->found_a = 0;
  cfg->cmd_started = 0;
  cfg->allow_transmit = 1;
  cfg->invert_dsr = 0;
  cfg->invert_dcd = 0;
  cfg->config0[(signed long int)0] = (unsigned char)0;
  cfg->config1[(signed long int)0] = (unsigned char)0;
  dce_init_config(cfg);
  sh_init_config(cfg);
  line_init_config(cfg);
}

// mdm_listen
// file src/modem_core.c line 254
signed int mdm_listen(struct modem_config *cfg)
{
  signed int return_value_line_listen_1;
  return_value_line_listen_1=line_listen(cfg);
  return return_value_line_listen_1;
}

// mdm_off_hook
// file src/modem_core.h line 145
signed int mdm_off_hook(struct modem_config *cfg)
{
  do
    if(log_level >= 4)
    {
      log_start(4);
      fprintf(log_file, "taking modem off hook");
      log_end();
    }

  while((_Bool)0);
  cfg->off_hook = 1;
  cfg->cmd_mode = 0;
  line_off_hook(cfg);
  return 0;
}

// mdm_parse_cmd
// file src/modem_core.h line 151
signed int mdm_parse_cmd(struct modem_config *cfg)
{
  signed int done = 0;
  signed int index = 0;
  signed int num = 0;
  signed int start = 0;
  signed int end = 0;
  signed int cmd = -4;
  unsigned char *command = cfg->cur_line;
  unsigned char tmp[256l];
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"mdm_parse_cmd");
      log_end();
    }

  while((_Bool)0);
  do
    if(log_level >= 5)
    {
      log_start(5);
      fprintf(log_file, "Evaluating AT%s", command);
      log_end();
    }

  while((_Bool)0);
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_4;
  while(!(done == 1))
  {
    if(!(cmd == -2))
    {
      cmd=getcmd(command, &index, &num, &start, &end);
      do
        if(log_level >= 5)
        {
          log_start(5);
          fprintf(log_file, "Command: %c (%d), Flags: %d, index=%d, num=%d, data=%d-%d", cmd > -1 ? cmd & 0xff : 32, cmd, cmd >> 8, index, num, start, end);
          log_end();
        }

      while((_Bool)0);
    }

    if(!(cmd == -2))
    {
      if(cmd == -1)
        goto __CPROVER_DUMP_L10;

      if(cmd == -4)
        goto __CPROVER_DUMP_L12;

      if(cmd == 65 || cmd == 79)
        goto __CPROVER_DUMP_L13;

      if(cmd == 66)
        goto __CPROVER_DUMP_L14;

      if(cmd == 68)
        goto __CPROVER_DUMP_L16;

      if(cmd == 69)
        goto __CPROVER_DUMP_L22;

      if(cmd == 72)
        goto __CPROVER_DUMP_L26;

      if(cmd == 73)
        goto __CPROVER_DUMP_L30;

      if(cmd == 76)
        goto __CPROVER_DUMP_L31;

      if(cmd == 77)
        goto __CPROVER_DUMP_L33;

      if(cmd == 78)
        goto __CPROVER_DUMP_L35;

      if(cmd == 80)
        goto __CPROVER_DUMP_L37;

      if(cmd == 81)
        goto __CPROVER_DUMP_L38;

      if(cmd == 83)
        goto __CPROVER_DUMP_L43;

      if(cmd == 32851)
        goto __CPROVER_DUMP_L47;

      if(cmd == 84)
        goto __CPROVER_DUMP_L48;

      if(cmd == 86)
        goto __CPROVER_DUMP_L49;

      if(cmd == 87)
        goto __CPROVER_DUMP_L53;

      if(cmd == 88)
        goto __CPROVER_DUMP_L56;

      if(cmd == 89)
        goto __CPROVER_DUMP_L59;

      if(cmd == 90)
        goto __CPROVER_DUMP_L61;

      if(cmd == 323)
        goto __CPROVER_DUMP_L63;

      if(cmd == 331)
        goto __CPROVER_DUMP_L68;

    }

    else
    {
      mdm_send_response(4, cfg);
      done = 1;
      continue;

    __CPROVER_DUMP_L10:
      ;
      if(cfg->cmd_mode == 1)
        mdm_send_response(0, cfg);

      done = 1;
      continue;

    __CPROVER_DUMP_L12:
      ;
      done = 1;
      continue;

    __CPROVER_DUMP_L13:
      ;
      mdm_answer(cfg);
      cmd = -1;
      done = 1;
      continue;

    __CPROVER_DUMP_L14:
      ;
      if(num >= 2)
        cmd = -2;

      continue;

    __CPROVER_DUMP_L16:
      ;
      if(!(start >= end))
      {
        strncpy((char *)cfg->dialno, (const char *)(command + (signed long int)start), (unsigned long int)(end - start));
        cfg->dialno[(signed long int)(end - start)] = (unsigned char)0;
        cfg->dial_type = (unsigned char)num;
        cfg->last_dial_type = (unsigned char)num;
        strncpy((char *)cfg->last_dialno, (const char *)(command + (signed long int)start), (unsigned long int)(end - start));
        cfg->last_dialno[(signed long int)(end - start)] = (unsigned char)0;
        cfg->memory_dial = 0;
      }

      else
        if(num == 76)
        {
          unsigned long int return_value_strlen_1;
          return_value_strlen_1=strlen((const char *)cfg->last_dialno);
          strncpy((char *)cfg->dialno, (const char *)cfg->last_dialno, return_value_strlen_1);
          cfg->dial_type = cfg->dial_type;
          cfg->memory_dial = 1;
          mdm_write(cfg, cfg->crlf, 2);
          unsigned long int return_value_strlen_2;
          return_value_strlen_2=strlen((const char *)cfg->dialno);
          mdm_write(cfg, cfg->dialno, (signed int)return_value_strlen_2);
        }

        else
        {
          cfg->dialno[(signed long int)0] = (unsigned char)0;
          cfg->last_dialno[(signed long int)0] = (unsigned char)0;
          cfg->dial_type = (unsigned char)0;
          cfg->last_dial_type = (unsigned char)0;
        }
      return_value_strlen_3=strlen((const char *)cfg->dialno);
      if(return_value_strlen_3 >= 1ul)
        mdm_connect(cfg);

      else
        mdm_off_hook(cfg);
      done = 1;
      continue;

    __CPROVER_DUMP_L22:
      ;
      if(num == 0)
        cfg->echo = 0;

      else
        if(num == 1)
          cfg->echo = 1;

        else
          cmd = -2;
      continue;

    __CPROVER_DUMP_L26:
      ;
      if(num == 0)
        mdm_disconnect(cfg);

      else
        if(num == 1)
          mdm_answer(cfg);

        else
          cmd = -2;
      continue;

    __CPROVER_DUMP_L30:
      ;
      continue;

    __CPROVER_DUMP_L31:
      ;
      if(num >= 4 || !(num >= 1))
        cmd = -2;

      continue;

    __CPROVER_DUMP_L33:
      ;
      if(num >= 4)
        cmd = -2;

      continue;

    __CPROVER_DUMP_L35:
      ;
      if(num >= 2)
        cmd = -2;

      continue;

    __CPROVER_DUMP_L37:
      ;
      continue;

    __CPROVER_DUMP_L38:
      ;
      if(num == 0)
        cfg->send_responses = 1;

      else
        if(num == 1)
          cfg->send_responses = 0;

        else
          if(num == 2)
            cfg->send_responses = 1;

          else
            cmd = -2;
      continue;

    __CPROVER_DUMP_L43:
      ;
      strncpy((char *)tmp, (const char *)(command + (signed long int)start), (unsigned long int)(end - start));
      tmp[(signed long int)(end - start)] = (unsigned char)0;
      cfg->s[(signed long int)num]=atoi((const char *)tmp);
      switch(num)
      {
        case 3:
        {
          cfg->crlf[(signed long int)0] = (unsigned char)cfg->s[(signed long int)3];
          break;
        }
        case 4:
          cfg->crlf[(signed long int)1] = (unsigned char)cfg->s[(signed long int)4];
      }
      continue;

    __CPROVER_DUMP_L47:
      ;
      sprintf((char *)tmp, "%s%3.3d", (const void *)cfg->crlf, cfg->s[(signed long int)num]);
      return_value_strlen_4=strlen((const char *)tmp);
      mdm_write(cfg, tmp, (signed int)return_value_strlen_4);
      continue;

    __CPROVER_DUMP_L48:
      ;
      continue;

    __CPROVER_DUMP_L49:
      ;
      if(num == 0)
        cfg->text_responses = 0;

      else
        if(num == 1)
          cfg->text_responses = 1;

        else
          cmd = -2;
      continue;

    __CPROVER_DUMP_L53:
      ;
      if(num >= 0 && !(num >= 3))
        cfg->connect_response = num;

      else
        cmd = -2;
      continue;

    __CPROVER_DUMP_L56:
      ;
      if(num >= 0 && !(num >= 5))
        cfg->response_code_level = num;

      else
        cmd = -2;
      continue;

    __CPROVER_DUMP_L59:
      ;
      if(num >= 2)
        cmd = -2;

      continue;

    __CPROVER_DUMP_L61:
      ;
      if(num >= 2)
        cmd = -2;

      continue;

    __CPROVER_DUMP_L63:
      ;
      switch(num)
      {
        case 0:
        {
          cfg->dcd_on = 1;
          mdm_set_control_lines(cfg);
          break;
        }
        case 1:
        {
          cfg->dcd_on = 0;
          mdm_set_control_lines(cfg);
          break;
        }
        default:
          cmd = -2;
      }
      continue;

    __CPROVER_DUMP_L68:
      ;
      switch(num)
      {
        case 0:
        {
          dce_set_flow_control(cfg, 0);
          break;
        }
        case 3:
        {
          dce_set_flow_control(cfg, 1);
          break;
        }
        case 4:
        {
          dce_set_flow_control(cfg, 2);
          break;
        }
        case 5:
        {
          dce_set_flow_control(cfg, 2);
          break;
        }
        case 6:
        {
          dce_set_flow_control(cfg, 2 | 1);
          break;
        }
        default:
          cmd = -2;
      }
      continue;
    }
  }
  cfg->cur_line_idx = 0;
  return cmd;
}

// mdm_parse_data
// file src/modem_core.h line 154
signed int mdm_parse_data(struct modem_config *cfg, unsigned char *data, signed int len)
{
  signed int i;
  if(cfg->cmd_mode == 1)
  {
    i = 0;
    for( ; !(i >= len); i = i + 1)
      mdm_handle_char(cfg, data[(signed long int)i]);
  }

  else
  {
    line_write(cfg, data, len);
    if(cfg->pre_break_delay == 1)
    {
      i = 0;
      for( ; !(i >= len); i = i + 1)
        if(data[(signed long int)i] == (unsigned char)cfg->s[2l])
        {
          do
            if(log_level >= 5)
            {
              log_start(5);
              fprintf(log_file, "Break character received");
              log_end();
            }

          while((_Bool)0);
          cfg->break_len = cfg->break_len + 1;
          if(cfg->break_len >= 4)
          {
            cfg->pre_break_delay = 0;
            cfg->break_len = 0;
          }

        }

        else
        {
          do
            if(log_level >= 7)
            {
              log_start(7);
              fprintf(log_file, "Found non-break character, cancelling break");
              log_end();
            }

          while((_Bool)0);
          mdm_clear_break(cfg);
        }
    }

  }
  return 0;
}

// mdm_print_speed
// file src/modem_core.c line 222
signed int mdm_print_speed(struct modem_config *cfg)
{
  signed int speed;
  if(cfg->connect_response == 2)
  {
    speed = cfg->dte_speed;
    goto __CPROVER_DUMP_L3;
  }

  speed = cfg->dce_speed;

__CPROVER_DUMP_L3:
  ;
  signed int return_value_get_connect_response_1;
  return_value_get_connect_response_1=get_connect_response(speed, cfg->response_code_level);
  mdm_send_response(return_value_get_connect_response_1, cfg);
  return 0;
}

// mdm_send_response
// file src/modem_core.h line 144
void mdm_send_response(signed int msg, struct modem_config *cfg)
{
  unsigned char msgID[17l];
  do
    if(log_level >= 5)
    {
      log_start(5);
      fprintf(log_file, "Sending %s response to modem", mdm_responses[(signed long int)msg]);
      log_end();
    }

  while((_Bool)0);
  if(cfg->send_responses == 1)
  {
    mdm_write(cfg, cfg->crlf, 2);
    if(cfg->text_responses == 1)
    {
      do
        if(log_level >= 7)
        {
          log_start(7);
          fprintf(log_file, "Sending text response");
          log_end();
        }

      while((_Bool)0);
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen((const char *)mdm_responses[(signed long int)msg]);
      mdm_write(cfg, mdm_responses[(signed long int)msg], (signed int)return_value_strlen_1);
    }

    else
    {
      do
        if(log_level >= 7)
        {
          log_start(7);
          fprintf(log_file, "Sending numeric response");
          log_end();
        }

      while((_Bool)0);
      sprintf((char *)msgID, "%d", msg);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen((const char *)msgID);
      mdm_write(cfg, msgID, (signed int)return_value_strlen_2);
    }
    mdm_write(cfg, cfg->crlf, 2);
  }

}

// mdm_send_ring
// file src/modem_core.h line 156
signed int mdm_send_ring(struct modem_config *cfg)
{
  do
    if(log_level >= 5)
    {
      log_start(5);
      fprintf(log_file, "Sending 'RING' to modem");
      log_end();
    }

  while((_Bool)0);
  cfg->line_ringing = 1;
  mdm_send_response(2, cfg);
  cfg->rings = cfg->rings + 1;
  do
    if(log_level >= 7)
    {
      log_start(7);
      fprintf(log_file, "Sent #%d ring", cfg->rings);
      log_end();
    }

  while((_Bool)0);
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(cfg->cmd_mode == 0)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(cfg->s[0l] == 0))
      tmp_if_expr_1 = cfg->rings >= cfg->s[(signed long int)0] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    mdm_answer(cfg);

  return 0;
}

// mdm_set_control_lines
// file src/modem_core.h line 141
signed int mdm_set_control_lines(struct modem_config *cfg)
{
  signed int state = 0;
  signed int up = cfg->conn_type == 0 ? 0 : 1;
  signed int return_value_get_new_cts_state_1;
  return_value_get_new_cts_state_1=get_new_cts_state(cfg, up);
  state = state | return_value_get_new_cts_state_1;
  signed int return_value_get_new_dsr_state_2;
  return_value_get_new_dsr_state_2=get_new_dsr_state(cfg, up);
  state = state | return_value_get_new_dsr_state_2;
  signed int return_value_get_new_dcd_state_3;
  return_value_get_new_dcd_state_3=get_new_dcd_state(cfg, up);
  state = state | return_value_get_new_dcd_state_3;
  do
    if(log_level >= 4)
    {
      log_start(4);
      fprintf(log_file, "Control Lines: DSR:%d DCD:%d CTS:%d", (state & 1) != 0 ? 1 : 0, (state & 2) != 0 ? 1 : 0, (state & 4) != 0 ? 1 : 0);
      log_end();
    }

  while((_Bool)0);
  dce_set_control_lines(cfg, state);
  return 0;
}

// mdm_write
// file src/modem_core.h line 143
void mdm_write(struct modem_config *cfg, unsigned char *data, signed int len)
{
  if(cfg->allow_transmit == 1)
    dce_write(cfg, data, len);

}

// mdm_write_char
// file src/modem_core.c line 167
void mdm_write_char(struct modem_config *cfg, unsigned char data)
{
  unsigned char str[2l];
  str[(signed long int)0] = data;
  mdm_write(cfg, str, 1);
}

// nvt_init_config
// file src/nvt.c line 7
signed int nvt_init_config(struct nvt_vars *vars)
{
  signed int i;
  vars->binary_xmit = 0;
  vars->binary_recv = 0;
  i = 0;
  for( ; !(i >= 256); i = i + 1)
    vars->term[(signed long int)i] = (unsigned char)0;
  return 0;
}

// parseCommand
// file src/getcmd.c line 100
signed int parseCommand(unsigned char *line, signed int flags, signed int *index, signed int *num, signed int len)
{
  signed int cmd;
  cmd=getCommand(line, flags, index, num, len);
  if(cmd >= 1)
  {
    if(!(*num >= 0))
      *num = 0;

  }

  signed int return_value_toupper_1;
  return_value_toupper_1=toupper(cmd);
  return return_value_toupper_1 | flags;
}

// parseRegister
// file src/getcmd.c line 113
signed int parseRegister(unsigned char *line, signed int flags, signed int *index, signed int *num, signed int len, signed int *data_start, signed int *data_end, signed int complex_parse)
{
  signed int cmd = 0;
  cmd=getCommand(line, flags, index, num, len);
  signed int tmp_post_1;
  signed int return_value_getData_2;
  if(num < ((signed int *)NULL))
    return -2;

  else
  {
    skip(line, index, len, (unsigned char)32);
    if(len == *index)
      return -2;

    else
    {
      tmp_post_1 = *index;
      *index = *index + 1;
      switch((signed int)line[(signed long int)tmp_post_1])
      {
        case 61:
        {
          skip(line, index, len, (unsigned char)32);
          return_value_getData_2=getData(line, index, len, data_start, data_end, complex_parse);
          if(!(return_value_getData_2 >= 0))
            return -2;

          break;
        }
        case 63:
        {
          flags = flags | 32768;
          if(!(*num >= 0))
            *num = 0;

          break;
        }
        default:
          return -2;
      }
      signed int return_value_toupper_3;
      return_value_toupper_3=toupper(cmd);
      return return_value_toupper_3 | flags;
    }
  }
}

// parse_ip_data
// file src/bridge.c line 51
signed int parse_ip_data(struct modem_config *cfg, unsigned char *data, signed int len)
{
  signed int i = 0;
  unsigned char ch;
  unsigned char text[1025l];
  signed int text_len = 0;
  _Bool tmp_if_expr_1;
  if(cfg->line_data.first_char == 1)
  {
    cfg->line_data.first_char = 0;
    if((signed int)*data == 0xff)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)data[(signed long int)0] == 0x1a ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      do
        if(log_level >= 4)
        {
          log_start(4);
          fprintf(log_file, "Detected telnet");
          log_end();
        }

      while((_Bool)0);
      cfg->line_data.is_telnet = 1;
    }

  }

  signed int return_value_parse_nvt_subcommand_2;
  signed int tmp_post_3;
  signed int tmp_post_4;
  signed int tmp_post_5;
  if(cfg->line_data.is_telnet == 1)
  {
    while(!(i >= len))
    {
      ch = data[(signed long int)i];
      if((signed int)ch == 255)
      {
        ch = data[(signed long int)(i + 1)];
        switch((signed int)ch)
        {
          case 251:

          case 253:

          case 252:

          case 254:
          {
            do
              if(log_level >= 4)
              {
                log_start(4);
                fprintf(log_file, "Parsing nvt command");
                log_end();
              }

            while((_Bool)0);
            parse_nvt_command(cfg->line_data.fd, &cfg->line_data.nvt_data, ch, data[(signed long int)(i + 2)]);
            i = i + 3;
            break;
          }
          case 250:
          {
            return_value_parse_nvt_subcommand_2=parse_nvt_subcommand(cfg->line_data.fd, &cfg->line_data.nvt_data, data + (signed long int)i, len - i);
            i = i + return_value_parse_nvt_subcommand_2;
            break;
          }
          case 255:
            if(!(cfg->line_data.nvt_data.binary_recv == 0))
            {
              tmp_post_3 = text_len;
              text_len = text_len + 1;
              text[(signed long int)tmp_post_3] = (unsigned char)255;
            }

          default:
            i = i + 2;
        }
      }

      else
      {
        tmp_post_4 = text_len;
        text_len = text_len + 1;
        tmp_post_5 = i;
        i = i + 1;
        text[(signed long int)tmp_post_4] = data[(signed long int)tmp_post_5];
      }
      if(text_len == 1024)
      {
        text[(signed long int)text_len] = (unsigned char)0;
        mdm_write(cfg, text, text_len);
        text_len = 0;
      }

    }
    if(!(text_len == 0))
    {
      text[(signed long int)text_len] = (unsigned char)0;
      mdm_write(cfg, text, text_len);
    }

  }

  else
    mdm_write(cfg, data, len);
  return 0;
}

// parse_nvt_command
// file src/nvt.h line 50
signed int parse_nvt_command(signed int fd, struct nvt_vars *vars, unsigned char action, unsigned char opt)
{
  unsigned char resp[3l];
  resp[(signed long int)0] = (unsigned char)255;
  resp[(signed long int)2] = opt;
  switch((signed int)opt)
  {
    case 0:
      switch((signed int)action)
      {
        case 253:
        {
          do
            if(log_level >= 4)
            {
              log_start(4);
              fprintf(log_file, "Enabling telnet binary xmit");
              log_end();
            }

          while((_Bool)0);
          vars->binary_xmit = 1;
          break;
        }
        case 254:
        {
          do
            if(log_level >= 4)
            {
              log_start(4);
              fprintf(log_file, "Disabling telnet binary xmit");
              log_end();
            }

          while((_Bool)0);
          vars->binary_xmit = 0;
          break;
        }
        case 251:
        {
          do
            if(log_level >= 4)
            {
              log_start(4);
              fprintf(log_file, "Enabling telnet binary recv");
              log_end();
            }

          while((_Bool)0);
          vars->binary_recv = 1;
          break;
        }
        case 252:
        {
          do
            if(log_level >= 4)
            {
              log_start(4);
              fprintf(log_file, "Disabling telnet binary recv");
              log_end();
            }

          while((_Bool)0);
          vars->binary_recv = 0;
        }
      }
    case 31:

    case 24:

    case 3:

    case 1:

    case 35:

    case 36:

    case 39:

    case 32:
    {
      resp[(signed long int)1]=get_nvt_cmd_response(action, (unsigned char)1);
      break;
    }
    default:
      resp[(signed long int)1]=get_nvt_cmd_response(action, (unsigned char)0);
  }
  ip_write(fd, resp, 3);
  return 0;
}

// parse_nvt_subcommand
// file src/nvt.h line 49
signed int parse_nvt_subcommand(signed int fd, struct nvt_vars *vars, unsigned char *data, signed int len)
{
  signed int opt = (signed int)data[(signed long int)2];
  unsigned char resp[100l];
  unsigned char *response = resp + (signed long int)3;
  signed int resp_len = 0;
  signed int response_len = 0;
  unsigned char tty_type[6l] = { 'V', 'T', '1', '0', '0', 0 };
  signed int rc;
  signed int slen = 0;
  rc = 2;
  for( ; !(rc >= len + -1); rc = rc + 1)
    if((signed int)data[(signed long int)rc] == 255)
    {
      if((signed int)data[(signed long int)(1 + rc)] == 240)
      {
        rc = rc + 2;
        break;
      }

    }

  signed int tmp_post_1;
  if(rc >= 6)
  {
    if((signed int)data[4l] == 1)
    {
      if(opt == 24 || opt == 32 || opt == 35 || opt == 36 || opt == 39)
      {
        tmp_post_1 = response_len;
        response_len = response_len + 1;
        response[(signed long int)tmp_post_1] = (unsigned char)0;
        if(opt == 24)
        {
          unsigned long int return_value_strlen_2;
          return_value_strlen_2=strlen((const char *)tty_type);
          slen = (signed int)return_value_strlen_2;
          strncpy((char *)(response + (signed long int)response_len), (const char *)tty_type, (unsigned long int)slen);
          response_len = response_len + slen;
          goto __CPROVER_DUMP_L6;
        }

      }

    }

  }


__CPROVER_DUMP_L6:
  ;
  signed int tmp_post_3;
  signed int tmp_post_4;
  signed int tmp_post_5;
  signed int tmp_post_6;
  signed int tmp_post_7;
  if(!(response_len == 0))
  {
    tmp_post_3 = resp_len;
    resp_len = resp_len + 1;
    resp[(signed long int)tmp_post_3] = (unsigned char)255;
    tmp_post_4 = resp_len;
    resp_len = resp_len + 1;
    resp[(signed long int)tmp_post_4] = (unsigned char)250;
    tmp_post_5 = resp_len;
    resp_len = resp_len + 1;
    resp[(signed long int)tmp_post_5] = (unsigned char)opt;
    resp_len = resp_len + response_len;
    tmp_post_6 = resp_len;
    resp_len = resp_len + 1;
    resp[(signed long int)tmp_post_6] = (unsigned char)255;
    tmp_post_7 = resp_len;
    resp_len = resp_len + 1;
    resp[(signed long int)tmp_post_7] = (unsigned char)240;
    ip_write(fd, resp, resp_len);
  }

  return rc;
}

// pb_add
// file src/phone_book.h line 2
signed int pb_add(unsigned char *from, unsigned char *to)
{
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"pb_add");
      log_end();
    }

  while((_Bool)0);
  unsigned long int return_value_strlen_2;
  unsigned long int return_value_strlen_1;
  if(!(from == ((unsigned char *)NULL)) && !(to == ((unsigned char *)NULL)) && !(size >= 100))
  {
    return_value_strlen_2=strlen((const char *)from);
    if(!(return_value_strlen_2 >= 1ul))
      goto __CPROVER_DUMP_L5;

    return_value_strlen_1=strlen((const char *)to);
    if(!(return_value_strlen_1 >= 1ul))
      goto __CPROVER_DUMP_L5;

    strncpy((char *)phone_book[(signed long int)size][(signed long int)0], (const char *)from, sizeof(unsigned char [128l]) /*128ul*/ );
    strncpy((char *)phone_book[(signed long int)size][(signed long int)1], (const char *)to, sizeof(unsigned char [128l]) /*128ul*/ );
    size = size + 1;
    do
      if(log_level >= 6)
      {
        log_start(6);
        fprintf(log_file, "Exitting %s function", (const void *)"pb_add");
        log_end();
      }

    while((_Bool)0);
    return 0;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    do
      if(log_level >= 6)
      {
        log_start(6);
        fprintf(log_file, "Exitting %s function", (const void *)"pb_add");
        log_end();
      }

    while((_Bool)0);
    return -1;
  }
}

// pb_init
// file src/phone_book.c line 11
signed int pb_init(void)
{
  return 0;
}

// pb_search
// file src/phone_book.c line 34
unsigned char * pb_search(unsigned char *number)
{
  signed int i = 0;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"pb_search");
      log_end();
    }

  while((_Bool)0);
  i = 0;
  for( ; !(i >= size); i = i + 1)
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp((const char *)phone_book[(signed long int)i][(signed long int)0], (const char *)number);
    if(return_value_strcmp_1 == 0)
    {
      do
        if(log_level >= 4)
        {
          log_start(4);
          fprintf(log_file, "Found a match for '%s': '%s'", number, (const void *)phone_book[(signed long int)i][(signed long int)1]);
          log_end();
        }

      while((_Bool)0);
      strcpy((char *)number, (const char *)phone_book[(signed long int)i][(signed long int)1]);
      break;
    }

  }
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"pb_search");
      log_end();
    }

  while((_Bool)0);
  return number;
}

// print_help
// file src/init.c line 8
void print_help(unsigned char *name)
{
  fprintf(stderr, "Usage: %s <parameters>\n", name);
  fprintf(stderr, "  -p   port to listen on (defaults to 6400)\n");
  fprintf(stderr, "  -t   trace flags: (can be combined)\n");
  fprintf(stderr, "       's' = modem input\n");
  fprintf(stderr, "       'S' = modem output\n");
  fprintf(stderr, "       'i' = IP input\n");
  fprintf(stderr, "       'I' = IP output\n");
  fprintf(stderr, "  -l   0 (NONE), 1 (FATAL) - 7 (DEBUG_X) (defaults to 0)\n");
  fprintf(stderr, "  -L   log file (defaults to stderr)\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "  The following can be repeated for each modem desired\n");
  fprintf(stderr, "  (-s, -S, and -i will apply to any subsequent device if not set again)\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "  -d   serial device (e.g. /dev/ttyS0). Cannot be used with -v\n");
  fprintf(stderr, "  -v   tcp port for VICE RS232 (e.g. 25232). Cannot be used with -d\n");
  fprintf(stderr, "  -s   serial port speed (defaults to 38400)\n");
  fprintf(stderr, "  -S   speed modem will report (defaults to -s value)\n");
  fprintf(stderr, "  -I   invert DCD pin\n");
  fprintf(stderr, "  -n   add phone entry (number=replacement)\n");
  fprintf(stderr, "  -a   filename to send to local side upon answer\n");
  fprintf(stderr, "  -A   filename to send to remote side upon answer\n");
  fprintf(stderr, "  -c   filename to send to local side upon connect\n");
  fprintf(stderr, "  -C   filename to send to remote side upon connect\n");
  fprintf(stderr, "  -N   filename to send when no answer\n");
  fprintf(stderr, "  -B   filename to send when modem(s) busy\n");
  fprintf(stderr, "  -T   filename to send upon inactivity timeout\n");
  fprintf(stderr, "  -i   modem init string (defaults to '', leave off 'at' prefix when specifying)\n");
  fprintf(stderr, "  -D   direct connection (follow with hostname:port for caller, : for receiver)\n");
  exit(1);
}

// run_bridge
// file src/bridge.c line 231
void * run_bridge(void *arg)
{
  struct modem_config *cfg = (struct modem_config *)arg;
  struct timeval timer;
  struct timeval *ptimer;
  signed int max_fd = 0;
  struct anonymous_1 readfs;
  signed int res = 0;
  unsigned char buf[256l];
  signed int rc = 0;
  signed int last_conn_type;
  signed int last_cmd_mode = cfg->cmd_mode;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"run_bridge");
      log_end();
    }

  while((_Bool)0);
  signed int return_value_pipe_3;
  return_value_pipe_3=pipe(cfg->data.wp[(signed long int)0]);
  if(return_value_pipe_3 == -1)
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "Control line watch task incoming IPC pipe could not be created");
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(log_file, " (%s)\n", return_value_strerror_2);
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  signed int return_value_pipe_6;
  return_value_pipe_6=pipe(cfg->data.cp[(signed long int)0]);
  if(return_value_pipe_6 == -1)
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "IP thread incoming IPC pipe could not be created");
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        char *return_value_strerror_5;
        return_value_strerror_5=strerror(*return_value___errno_location_4);
        fprintf(log_file, " (%s)\n", return_value_strerror_5);
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  signed int return_value_pipe_9;
  return_value_pipe_9=pipe(cfg->data.cp[(signed long int)1]);
  if(return_value_pipe_9 == -1)
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "IP thread outgoing IPC pipe could not be created");
        signed int *return_value___errno_location_7;
        return_value___errno_location_7=__errno_location();
        char *return_value_strerror_8;
        return_value_strerror_8=strerror(*return_value___errno_location_7);
        fprintf(log_file, " (%s)\n", return_value_strerror_8);
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  spawn_ctrl_thread(cfg);
  spawn_ip_thread(cfg);
  mdm_set_control_lines(cfg);
  strncpy((char *)cfg->cur_line, (const char *)cfg->config0, sizeof(unsigned char [1024l]) /*1024ul*/ );
  last_conn_type = cfg->conn_type;
  last_cmd_mode = cfg->cmd_mode;
  cfg->allow_transmit = 0;
  mdm_disconnect(cfg);
  mdm_parse_cmd(cfg);
  if(cfg->data.direct_conn == 1u)
  {
    unsigned long int return_value_strlen_11;
    return_value_strlen_11=strlen((const char *)cfg->data.direct_conn_num);
    if(return_value_strlen_11 >= 1ul)
    {
      if(!((signed int)cfg->data.direct_conn_num[0l] == 58))
      {
        strncpy((char *)cfg->dialno, (const char *)cfg->data.direct_conn_num, sizeof(unsigned char [256l]) /*256ul*/ );
        signed int return_value_line_connect_10;
        return_value_line_connect_10=line_connect(cfg);
        if(!(return_value_line_connect_10 == 0))
        {
          do
            if(log_level >= 1)
            {
              log_start(1);
              fprintf(log_file, "Cannot connect to Direct line address!");
              log_end();
            }

          while((_Bool)0);
          exit(-1);
        }

        else
          cfg->conn_type = 1;
      }

    }

  }

  cfg->allow_transmit = 1;
  signed int tmp_if_expr_16;
  signed int tmp_if_expr_17;
  signed int tmp_if_expr_18;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_19;
  _Bool tmp_if_expr_26;
  _Bool tmp_if_expr_27;
  _Bool tmp_if_expr_25;
  _Bool tmp_if_expr_28;
  while((_Bool)1)
  {
    if(!(last_conn_type == cfg->conn_type))
    {
      do
        if(log_level >= 7)
        {
          log_start(7);
          fprintf(log_file, "Connection status change, handling");
          log_end();
        }

      while((_Bool)0);
      writePipe(cfg->data.cp[(signed long int)1][(signed long int)1], (unsigned char)78);
      if(cfg->conn_type == 1)
      {
        unsigned long int return_value_strlen_12;
        return_value_strlen_12=strlen((const char *)cfg->data.local_connect);
        if(return_value_strlen_12 >= 1ul)
          writeFile(cfg->data.local_connect, cfg->line_data.fd);

        unsigned long int return_value_strlen_13;
        return_value_strlen_13=strlen((const char *)cfg->data.remote_connect);
        if(return_value_strlen_13 >= 1ul)
          writeFile(cfg->data.remote_connect, cfg->line_data.fd);

      }

      else
        if(cfg->conn_type == 2)
        {
          unsigned long int return_value_strlen_14;
          return_value_strlen_14=strlen((const char *)cfg->data.local_answer);
          if(return_value_strlen_14 >= 1ul)
            writeFile(cfg->data.local_answer, cfg->line_data.fd);

          unsigned long int return_value_strlen_15;
          return_value_strlen_15=strlen((const char *)cfg->data.remote_answer);
          if(return_value_strlen_15 >= 1ul)
            writeFile(cfg->data.remote_answer, cfg->line_data.fd);

        }

      last_conn_type = cfg->conn_type;
    }

    if(!(last_cmd_mode == cfg->cmd_mode))
    {
      writePipe(cfg->data.cp[(signed long int)1][(signed long int)1], (unsigned char)78);
      last_cmd_mode = cfg->cmd_mode;
    }

    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Waiting for modem/control line/timer/socket activity");
        log_end();
      }

    while((_Bool)0);
    do
      if(log_level >= 7)
      {
        log_start(7);
        fprintf(log_file, "Command Mode=%d, Connection status=%d", cfg->cmd_mode, cfg->conn_type);
        log_end();
      }

    while((_Bool)0);
    if(!(cfg->dce_data.fd >= cfg->data.mp[1l][0l]))
      tmp_if_expr_16 = cfg->data.mp[(signed long int)1][(signed long int)0];

    else
      tmp_if_expr_16 = cfg->dce_data.fd;
    max_fd = tmp_if_expr_16;
    if(!(cfg->data.wp[0l][0l] >= max_fd))
      tmp_if_expr_17 = max_fd;

    else
      tmp_if_expr_17 = cfg->data.wp[(signed long int)0][(signed long int)0];
    max_fd = tmp_if_expr_17;
    if(!(cfg->data.cp[0l][0l] >= max_fd))
      tmp_if_expr_18 = max_fd;

    else
      tmp_if_expr_18 = cfg->data.cp[(signed long int)0][(signed long int)0];
    max_fd = tmp_if_expr_18;
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_1) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readfs)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&readfs)->__fds_bits[(signed long int)(cfg->data.mp[(signed long int)1][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(cfg->data.mp[(signed long int)1][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cfg->data.mp[(signed long int)1][(signed long int)0] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    (&readfs)->__fds_bits[(signed long int)(cfg->dce_data.fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(cfg->dce_data.fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cfg->dce_data.fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    (&readfs)->__fds_bits[(signed long int)(cfg->data.wp[(signed long int)0][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(cfg->data.wp[(signed long int)0][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cfg->data.wp[(signed long int)0][(signed long int)0] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    (&readfs)->__fds_bits[(signed long int)(cfg->data.cp[(signed long int)0][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfs)->__fds_bits[(signed long int)(cfg->data.cp[(signed long int)0][(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cfg->data.cp[(signed long int)0][(signed long int)0] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    ptimer = (struct timeval *)(void *)0;
    if(cfg->cmd_mode == 0)
    {
      if(cfg->pre_break_delay == 0)
        tmp_if_expr_20 = (_Bool)1;

      else
        tmp_if_expr_20 = cfg->break_len == 3 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_20)
      {
        do
          if(log_level >= 7)
          {
            log_start(7);
            fprintf(log_file, "Setting timer for break delay");
            log_end();
          }

        while((_Bool)0);
        timer.tv_sec = (signed long int)0;
        timer.tv_usec = (signed long int)(cfg->s[(signed long int)12] * 20000);
        ptimer = &timer;
      }

      else
      {
        if(cfg->pre_break_delay == 1)
          tmp_if_expr_19 = cfg->break_len > 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_19 = (_Bool)0;
        if(tmp_if_expr_19)
        {
          do
            if(log_level >= 7)
            {
              log_start(7);
              fprintf(log_file, "Setting timer for inter-break character delay");
              log_end();
            }

          while((_Bool)0);
          timer.tv_sec = (signed long int)1;
          timer.tv_usec = (signed long int)0;
          ptimer = &timer;
        }

        else
          if(!(cfg->s[30l] == 0))
          {
            do
              if(log_level >= 7)
              {
                log_start(7);
                fprintf(log_file, "Setting timer for inactivity delay");
                log_end();
              }

            while((_Bool)0);
            timer.tv_sec = (signed long int)(cfg->s[(signed long int)30] * 10);
            timer.tv_usec = (signed long int)0;
            ptimer = &timer;
          }

      }
    }

    else
      if(cfg->cmd_mode == 1)
      {
        if(cfg->conn_type == 0)
        {
          if(cfg->line_data.valid_conn == 1)
          {
            do
              if(log_level >= 7)
              {
                log_start(7);
                fprintf(log_file, "Setting timer for rings");
                log_end();
              }

            while((_Bool)0);
            timer.tv_sec = (signed long int)4;
            timer.tv_usec = (signed long int)0;
            ptimer = &timer;
          }

        }

      }

    max_fd = max_fd + 1;
    rc=select(max_fd, &readfs, (struct anonymous_1 *)(void *)0, (struct anonymous_1 *)(void *)0, ptimer);
    if(rc == -1)
      do
        if(log_level >= 3)
        {
          log_start(3);
          fprintf(log_file, "Select returned error");
          signed int *return_value___errno_location_21;
          return_value___errno_location_21=__errno_location();
          char *return_value_strerror_22;
          return_value_strerror_22=strerror(*return_value___errno_location_21);
          fprintf(log_file, " (%s)\n", return_value_strerror_22);
          log_end();
        }

      while((_Bool)0);

    else
      if(rc == 0)
      {
        if(cfg->cmd_mode == 1)
          tmp_if_expr_26 = cfg->conn_type == 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_26 = (_Bool)0;
        if(tmp_if_expr_26)
          tmp_if_expr_27 = cfg->line_data.valid_conn == 1 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_27 = (_Bool)0;
        if(tmp_if_expr_27)
        {
          if(cfg->s[0l] == 0)
            tmp_if_expr_25 = cfg->rings == 10 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_25 = (_Bool)0;
          if(tmp_if_expr_25)
          {
            unsigned long int return_value_strlen_24;
            return_value_strlen_24=strlen((const char *)cfg->data.no_answer);
            if(return_value_strlen_24 == 0ul)
            {
              unsigned long int return_value_strlen_23;
              return_value_strlen_23=strlen((const char *)MDM_NO_ANSWER);
              line_write(cfg, (unsigned char *)MDM_NO_ANSWER, (signed int)return_value_strlen_23);
            }

            else
              writeFile(cfg->data.no_answer, cfg->line_data.fd);
            mdm_disconnect(cfg);
          }

          else
            mdm_send_ring(cfg);
        }

        else
          mdm_handle_timeout(cfg);
      }

    if(!((readfs.__fds_bits[(signed long int)(cfg->dce_data.fd / 8)] & (signed long int)(1UL << cfg->dce_data.fd % 8)) == 0l))
    {
      do
        if(log_level >= 5)
        {
          log_start(5);
          fprintf(log_file, "Data available on serial port");
          log_end();
        }

      while((_Bool)0);
      res=dce_read(cfg, buf, (signed int)sizeof(unsigned char [256l]) /*256ul*/ );
      do
        if(log_level >= 5)
        {
          log_start(5);
          fprintf(log_file, "Read %d bytes from serial port", res);
          log_end();
        }

      while((_Bool)0);
      if(res >= 1)
      {
        if(cfg->conn_type == 0)
          tmp_if_expr_28 = cfg->off_hook == 1 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_28 = (_Bool)0;
        if(tmp_if_expr_28)
        {
          mdm_disconnect(cfg);
          mdm_send_response(0, cfg);
        }

        else
          mdm_parse_data(cfg, buf, res);
      }

    }

    if(!((readfs.__fds_bits[(signed long int)(cfg->data.wp[0l][0l] / 8)] & (signed long int)(1UL << cfg->data.wp[0l][0l] % 8)) == 0l))
    {
      signed long int return_value_read_29;
      return_value_read_29=read(cfg->data.wp[(signed long int)0][(signed long int)0], (void *)buf, sizeof(unsigned char [256l]) /*256ul*/  - (unsigned long int)1);
      res = (signed int)return_value_read_29;
      buf[(signed long int)res] = (unsigned char)0;
      do
        if(log_level >= 5)
        {
          log_start(5);
          fprintf(log_file, "Received %c from Control line watch task", buf[(signed long int)0]);
          log_end();
        }

      while((_Bool)0);
      if(!((signed int)buf[0l] == 100))
      {
        if((signed int)buf[0l] == 68)
          goto __CPROVER_DUMP_L82;

      }

      else
        mdm_disconnect(cfg);
    }


  __CPROVER_DUMP_L82:
    ;
    if(!((readfs.__fds_bits[(signed long int)(cfg->data.cp[0l][0l] / 8)] & (signed long int)(1UL << cfg->data.cp[0l][0l] % 8)) == 0l))
    {
      signed long int return_value_read_30;
      return_value_read_30=read(cfg->data.cp[(signed long int)0][(signed long int)0], (void *)buf, sizeof(unsigned char [256l]) /*256ul*/ );
      res = (signed int)return_value_read_30;
      do
        if(log_level >= 5)
        {
          log_start(5);
          fprintf(log_file, "Received %c from ip thread", buf[(signed long int)0]);
          log_end();
        }

      while((_Bool)0);
      if((signed int)buf[0l] == 68)
      {
        if(cfg->data.direct_conn == 1u)
        {
          do
            if(log_level >= 2)
            {
              log_start(2);
              fprintf(log_file, "Direct Connection Link broken, disconnecting and awaiting new direct connection");
              log_end();
            }

          while((_Bool)0);
          cfg->data.direct_conn = (unsigned int)0;
          mdm_disconnect(cfg);
          cfg->data.direct_conn = (unsigned int)1;
        }

        else
          mdm_disconnect(cfg);
      }

    }

    if(!((readfs.__fds_bits[(signed long int)(cfg->data.mp[1l][0l] / 8)] & (signed long int)(1UL << cfg->data.mp[1l][0l] % 8)) == 0l))
    {
      do
        if(log_level >= 5)
        {
          log_start(5);
          fprintf(log_file, "Data available on incoming IPC pipe");
          log_end();
        }

      while((_Bool)0);
      signed long int return_value_read_31;
      return_value_read_31=read(cfg->data.mp[(signed long int)1][(signed long int)0], (void *)buf, sizeof(unsigned char [256l]) /*256ul*/ );
      res = (signed int)return_value_read_31;
      if((signed int)buf[0l] == 43)
        accept_connection(cfg);

    }

  }
  if(log_level >= 6)
  {
    log_start(6);
    fprintf(log_file, "Exitting %s function", (const void *)"run_bridge");
    log_end();
  }

}

// send_nvt_command
// file src/nvt.c line 101
signed int send_nvt_command(signed int fd, struct nvt_vars *vars, unsigned char action, unsigned char opt)
{
  unsigned char cmd[3l];
  cmd[(signed long int)0] = (unsigned char)255;
  cmd[(signed long int)1] = action;
  cmd[(signed long int)2] = opt;
  ip_write(fd, cmd, 3);
  vars->term[(signed long int)opt] = action;
  return 0;
}

// ser_get_bps_const
// file src/serial.c line 10
signed int ser_get_bps_const(signed int speed)
{
  signed int bps_rate = 0;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ser_get_bps_const");
      log_end();
    }

  while((_Bool)0);
  do
    if(log_level >= 5)
    {
      log_start(5);
      fprintf(log_file, "Checking speed: %d", speed);
      log_end();
    }

  while((_Bool)0);
  switch(speed)
  {
    case 115200:
    {
      bps_rate = 0010002;
      break;
    }
    case 57600:
    {
      bps_rate = 0010001;
      break;
    }
    case 38400:
    {
      bps_rate = 0000017;
      break;
    }
    case 19200:
    {
      bps_rate = 0000016;
      break;
    }
    case 9600:
    {
      bps_rate = 0000015;
      break;
    }
    case 4800:
    {
      bps_rate = 0000014;
      break;
    }
    case 2400:
    {
      bps_rate = 0000013;
      break;
    }
    case 1200:
    {
      bps_rate = 0000011;
      break;
    }
    case 600:
    {
      bps_rate = 0000010;
      break;
    }
    case 300:
    {
      bps_rate = 0000007;
      break;
    }
    case 150:
    {
      bps_rate = 0000005;
      break;
    }
    case 134:
    {
      bps_rate = 0000004;
      break;
    }
    case 110:
    {
      bps_rate = 0000003;
      break;
    }
    case 75:
    {
      bps_rate = 0000002;
      break;
    }
    case 50:
    {
      bps_rate = 0000001;
      break;
    }
    case 0:
    {
      bps_rate = 0000000;
      break;
    }
    default:
    {
      do
        if(log_level >= 1)
        {
          log_start(1);
          fprintf(log_file, "Unknown baud rate");
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          char *return_value_strerror_2;
          return_value_strerror_2=strerror(*return_value___errno_location_1);
          fprintf(log_file, " (%s)\n", return_value_strerror_2);
          log_end();
        }

      while((_Bool)0);
      bps_rate = -1;
    }
  }
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"ser_get_bps_const");
      log_end();
    }

  while((_Bool)0);
  return bps_rate;
}

// ser_get_control_lines
// file src/serial.c line 137
signed int ser_get_control_lines(signed int fd)
{
  signed int status;
  signed int return_value_ioctl_3;
  return_value_ioctl_3=ioctl(fd, (unsigned long int)0x5415, &status);
  if(!(return_value_ioctl_3 >= 0))
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "Could not obtain serial port status");
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(log_file, " (%s)\n", return_value_strerror_2);
        log_end();
      }

    while((_Bool)0);
    return -1;
  }

  else
    return status;
}

// ser_init_conn
// file src/serial.c line 75
signed int ser_init_conn(unsigned char *tty, signed int speed)
{
  signed int fd = -1;
  struct termios tio;
  signed int bps_rate = 0;
  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Entering %s function", (const void *)"ser_init_conn");
      log_end();
    }

  while((_Bool)0);
  bps_rate=ser_get_bps_const(speed);
  if(bps_rate >= 0)
  {
    do
      if(log_level >= 4)
      {
        log_start(4);
        fprintf(log_file, "Opening serial device");
        log_end();
      }

    while((_Bool)0);
    fd=open((const char *)tty, 02 | 0400);
    if(!(fd >= 0))
      do
        if(log_level >= 1)
        {
          log_start(1);
          fprintf(log_file, "TTY %s could not be opened", tty);
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          char *return_value_strerror_2;
          return_value_strerror_2=strerror(*return_value___errno_location_1);
          fprintf(log_file, " (%s)\n", return_value_strerror_2);
          log_end();
        }

      while((_Bool)0);

    else
    {
      do
        if(log_level >= 4)
        {
          log_start(4);
          fprintf(log_file, "Opened serial device %s at speed %d as fd %d", tty, speed, fd);
          log_end();
        }

      while((_Bool)0);
      fcntl(fd, 4, 020000);
      tio.c_cflag = (unsigned int)(bps_rate | 0000060 | 0004000 | 0000200) | 020000000000;
      tio.c_iflag = (unsigned int)0000001;
      tio.c_oflag = (unsigned int)0;
      tio.c_lflag = (unsigned int)0;
      tio.c_cc[(signed long int)6] = (unsigned char)1;
      tio.c_cc[(signed long int)5] = (unsigned char)0;
      tcflush(fd, 0);
      cfsetispeed(&tio, (unsigned int)bps_rate);
      cfsetospeed(&tio, (unsigned int)bps_rate);
      tcsetattr(fd, 0, &tio);
      do
        if(log_level >= 4)
        {
          log_start(4);
          fprintf(log_file, "serial device configured");
          log_end();
        }

      while((_Bool)0);
    }
  }

  do
    if(log_level >= 6)
    {
      log_start(6);
      fprintf(log_file, "Exitting %s function", (const void *)"ser_init_conn");
      log_end();
    }

  while((_Bool)0);
  return fd;
}

// ser_read
// file src/serial.c line 173
signed int ser_read(signed int fd, unsigned char *data, signed int len)
{
  signed int res;
  signed long int return_value_read_1;
  return_value_read_1=read(fd, (void *)data, (unsigned long int)len);
  res = (signed int)return_value_read_1;
  log_trace(1, data, res);
  return res;
}

// ser_set_control_lines
// file src/serial.c line 148
signed int ser_set_control_lines(signed int fd, signed int state)
{
  unsigned int status;
  signed int return_value_ser_get_control_lines_1;
  return_value_ser_get_control_lines_1=ser_get_control_lines(fd);
  status = (unsigned int)return_value_ser_get_control_lines_1;
  {
    status = status & (unsigned int)~(0x004 | 0x002);
    status = status | (unsigned int)state;
    signed int return_value_ioctl_4;
    return_value_ioctl_4=ioctl(fd, (unsigned long int)0x5418, &status);
    if(!(return_value_ioctl_4 >= 0))
    {
      do
        if(log_level >= 1)
        {
          log_start(1);
          fprintf(log_file, "Could not set serial port status");
          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          char *return_value_strerror_3;
          return_value_strerror_3=strerror(*return_value___errno_location_2);
          fprintf(log_file, " (%s)\n", return_value_strerror_3);
          log_end();
        }

      while((_Bool)0);
      return -1;
    }

    else
      return 0;
  }
}

// ser_set_flow_control
// file src/serial.c line 120
signed int ser_set_flow_control(signed int fd, signed int status)
{
  struct termios tio;
  signed int return_value_tcgetattr_3;
  return_value_tcgetattr_3=tcgetattr(fd, &tio);
  if(!(return_value_tcgetattr_3 == 0))
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "Could not get serial port attributes");
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(log_file, " (%s)\n", return_value_strerror_2);
        log_end();
      }

    while((_Bool)0);
    return -1;
  }

  else
  {
    tio.c_cflag = tio.c_cflag & ~((unsigned int)(0002000 | 0010000) | 020000000000);
    tio.c_cflag = tio.c_cflag | (unsigned int)status;
    signed int return_value_tcsetattr_6;
    return_value_tcsetattr_6=tcsetattr(fd, 0, &tio);
    if(!(return_value_tcsetattr_6 == 0))
    {
      do
        if(log_level >= 1)
        {
          log_start(1);
          fprintf(log_file, "Could not set serial port attributes");
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          char *return_value_strerror_5;
          return_value_strerror_5=strerror(*return_value___errno_location_4);
          fprintf(log_file, " (%s)\n", return_value_strerror_5);
          log_end();
        }

      while((_Bool)0);
      return -1;
    }

    else
      return 0;
  }
}

// ser_write
// file src/serial.c line 168
signed int ser_write(signed int fd, unsigned char *data, signed int len)
{
  log_trace(2, data, len);
  signed long int return_value_write_1;
  return_value_write_1=write(fd, (const void *)data, (unsigned long int)len);
  return (signed int)return_value_write_1;
}

// sh_init_config
// file src/shared.h line 4
signed int sh_init_config(struct modem_config *cfg)
{
  cfg->data.local_connect[(signed long int)0] = (unsigned char)0;
  cfg->data.remote_connect[(signed long int)0] = (unsigned char)0;
  cfg->data.local_answer[(signed long int)0] = (unsigned char)0;
  cfg->data.remote_answer[(signed long int)0] = (unsigned char)0;
  cfg->data.no_answer[(signed long int)0] = (unsigned char)0;
  cfg->data.inactive[(signed long int)0] = (unsigned char)0;
  cfg->data.direct_conn = (unsigned int)0;
  cfg->data.direct_conn_num[(signed long int)0] = (unsigned char)0;
  return 0;
}

// skip
// file src/getcmd.c line 81
signed int skip(unsigned char *line, signed int *index, signed int len, unsigned char ch)
{
  for( ; !(*index >= len); *index = *index + 1)
    if(!(ch == line[(signed long int)*index]))
      break;

  return 0;
}

// spawn_ctrl_thread
// file src/bridge.c line 203
signed int spawn_ctrl_thread(struct modem_config *cfg)
{
  signed int rc;
  unsigned long int thread_id;
  rc=pthread_create(&thread_id, (const union pthread_attr_t *)(void *)0, ctrl_thread, (void *)cfg);
  do
    if(log_level >= 7)
    {
      log_start(7);
      fprintf(log_file, "CTRL thread ID=%d", (signed int)thread_id);
      log_end();
    }

  while((_Bool)0);
  if(!(rc >= 0))
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "CTRL thread could not be started");
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(log_file, " (%s)\n", return_value_strerror_2);
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  return 0;
}

// spawn_ip232_thread
// file src/ip232.c line 73
signed int spawn_ip232_thread(struct modem_config *cfg)
{
  signed int rc;
  unsigned long int thread_id;
  rc=pthread_create(&thread_id, (const union pthread_attr_t *)(void *)0, ip232_thread, (void *)cfg);
  do
    if(log_level >= 7)
    {
      log_start(7);
      fprintf(log_file, "ip232 thread ID=%d", (signed int)thread_id);
      log_end();
    }

  while((_Bool)0);
  if(!(rc >= 0))
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "ip232 thread could not be started");
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(log_file, " (%s)\n", return_value_strerror_2);
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  return 0;
}

// spawn_ip_thread
// file src/bridge.c line 217
signed int spawn_ip_thread(struct modem_config *cfg)
{
  signed int rc;
  unsigned long int thread_id;
  rc=pthread_create(&thread_id, (const union pthread_attr_t *)(void *)0, ip_thread, (void *)cfg);
  do
    if(log_level >= 7)
    {
      log_start(7);
      fprintf(log_file, "IP thread ID=%d", (signed int)thread_id);
      log_end();
    }

  while((_Bool)0);
  if(!(rc >= 0))
  {
    do
      if(log_level >= 1)
      {
        log_start(1);
        fprintf(log_file, "IP thread could not be started");
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        fprintf(log_file, " (%s)\n", return_value_strerror_2);
        log_end();
      }

    while((_Bool)0);
    exit(-1);
  }

  return 0;
}

// writeFile
// file src/util.h line 2
signed int writeFile(unsigned char *name, signed int fd)
{
  struct _IO_FILE *file;
  unsigned char buf[255l];
  unsigned long int len;
  unsigned long int writeFile__1__size = (unsigned long int)1;
  unsigned long int max = (unsigned long int)255;
  file=fopen((const char *)name, "rb");
  if(!(file == ((struct _IO_FILE *)NULL)))
  {
    do
    {
      len=fread((void *)buf, writeFile__1__size, max, file);
      if(!(len >= 1ul))
        break;

      write(fd, (const void *)buf, len);
    }
    while((_Bool)1);
    fclose(file);
    return 0;
  }

  else
    return -1;
}

// writePipe
// file src/util.h line 1
signed int writePipe(signed int fd, unsigned char msg)
{
  unsigned char tmp[3l];
  tmp[(signed long int)0] = msg;
  tmp[(signed long int)1] = (unsigned char)10;
  tmp[(signed long int)2] = (unsigned char)0;
  signed long int return_value_write_1;
  return_value_write_1=write(fd, (const void *)tmp, (unsigned long int)2);
  return (signed int)return_value_write_1;
}

