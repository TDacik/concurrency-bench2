// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_3;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_1;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_2;

// tag-#anon#UN[SYM#tag-ip6_hdrctl#'ip6_un1'||U8'ip6_un2_vfc'|]
// file /usr/include/netinet/ip6.h line 26
union anonymous_0;

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

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-ip6_hdr
// file /usr/include/netinet/ip6.h line 24
struct ip6_hdr;

// tag-ip6_hdrctl
// file /usr/include/netinet/ip6.h line 28
struct ip6_hdrctl;

// tag-iphdr
// file /usr/include/linux/ip.h line 85
struct iphdr;

// tag-mailserver_list
// file include/mxallowd.h line 7
struct mailserver_list;

// tag-nfgenmsg
// file /usr/include/libnfnetlink/linux_nfnetlink.h line 27
struct nfgenmsg;

// tag-nfq_data
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 27
struct nfq_data;

// tag-nfq_handle
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 25
struct nfq_handle;

// tag-nfq_q_handle
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 26
struct nfq_q_handle;

// tag-nfqnl_msg_packet_hdr
// file /usr/include/libnetfilter_queue/linux_nfnetlink_queue.h line 19
struct nfqnl_msg_packet_hdr;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-whitelist_entry
// file include/whitelist.h line 13
struct whitelist_entry;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __h_errno_location
// file /usr/include/netdb.h line 61
extern signed int * __h_errno_location(void);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// add_mailserver
// file include/mxallowd.h line 44
void add_mailserver(struct mailserver_list **root, char *mailserver_ip);
// add_to_whitelist
// file include/whitelist.h line 41
void add_to_whitelist(char *ip_address, char *rdns, _Bool is_child, signed int af, const void *source_addr);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// atoi_link1
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link1(const char *__nptr_link1);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// checkConfigValue
// file src/config.c line 75
_Bool checkConfigValue(char *value, char *name);
// cleanup_whitelist
// file include/whitelist.h line 40
void cleanup_whitelist();
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// daemon
// file /usr/include/unistd.h line 937
extern signed int daemon(signed int, signed int);
// dief
// file src/log.c line 73
void dief(char *format, ...);
// diem
// file src/log.c line 53
void diem(char *message);
// diep
// file src/log.c line 64
void diep(char *message);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// getNextConfigEntry
// file src/config.c line 47
void getNextConfigEntry(struct _IO_FILE *config, char **destName, char **destValue, char *wholeBuffer, signed int wholeBufferSize);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// gethostbyaddr
// file /usr/include/netdb.h line 137
extern struct hostent * gethostbyaddr(const void *, unsigned int, signed int);
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// handlePacket
// file src/nfq.c line 21
static signed int handlePacket(struct nfq_q_handle *qh, struct nfgenmsg *nfmsg, struct nfq_data *nfdata, void *packet_buffer);
// handle_sighup
// file src/mxallowd.c line 107
void handle_sighup(signed int sig);
// handle_sigusr1
// file src/mxallowd.c line 116
void handle_sigusr1(signed int sig);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// isInteger
// file src/config.c line 25
_Bool isInteger(char *str);
// is_included
// file src/mxallowd.c line 94
_Bool is_included(struct mailserver_list *root, char *ip_address);
// is_whitelisted
// file include/whitelist.h line 39
_Bool is_whitelisted(char *ip_address, _Bool useIt);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// main::_tmp::return_value_signal_5_object
//
void return_value_signal_5_object(signed int);
// main::_tmp::return_value_signal_6_object
//
void return_value_signal_6_object(signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// nfq_bind_pf
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 42
extern signed int nfq_bind_pf(struct nfq_handle *, unsigned short int);
// nfq_close
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 40
extern signed int nfq_close(struct nfq_handle *);
// nfq_create_queue
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 45
extern struct nfq_q_handle * nfq_create_queue(struct nfq_handle *, unsigned short int, signed int (*)(struct nfq_q_handle *, struct nfgenmsg *, struct nfq_data *, void *), void *);
// nfq_destroy_queue
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 49
extern signed int nfq_destroy_queue(struct nfq_q_handle *);
// nfq_fd
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 32
extern signed int nfq_fd(struct nfq_handle *);
// nfq_get_msg_packet_hdr
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 95
extern struct nfqnl_msg_packet_hdr * nfq_get_msg_packet_hdr(struct nfq_data *);
// nfq_get_payload
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 119
extern signed int nfq_get_payload(struct nfq_data *, unsigned char **);
// nfq_handle_packet
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 51
extern signed int nfq_handle_packet(struct nfq_handle *, char *, signed int);
// nfq_init
// file include/nfq.h line 3
void nfq_init();
// nfq_open
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 38
extern struct nfq_handle * nfq_open(void);
// nfq_set_mode
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 53
extern signed int nfq_set_mode(struct nfq_q_handle *, unsigned char, unsigned int);
// nfq_set_verdict
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 62
extern signed int nfq_set_verdict(struct nfq_q_handle *, unsigned int, unsigned int, unsigned int, const unsigned char *);
// nfq_unbind_pf
// file /usr/include/libnetfilter_queue/libnetfilter_queue.h line 43
extern signed int nfq_unbind_pf(struct nfq_handle *, unsigned short int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// print_help
// file src/mxallowd.c line 123
void print_help(char *executable);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_1 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_1 *, union anonymous_2 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_2 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_2 *);
// rdns_for_ip
// file src/resolve.c line 25
char * rdns_for_ip(char *ip_address);
// read_configuration
// file src/config.c line 89
_Bool read_configuration(char *configfile);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// resolve_thread
// file include/resolve.h line 13
void * resolve_thread(void *data);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// slog
// file include/log.h line 11
void slog(char *format, ...);
// slogerror
// file include/log.h line 12
void slogerror(char *message);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 36
static inline signed int vprintf(const char * restrict __fmt, void **__arg);
// vsyslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 200
extern void vsyslog(signed int, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

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

union anonymous
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous_1
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

union anonymous_2
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct ip6_hdrctl
{
  // ip6_un1_flow
  unsigned int ip6_un1_flow;
  // ip6_un1_plen
  unsigned short int ip6_un1_plen;
  // ip6_un1_nxt
  unsigned char ip6_un1_nxt;
  // ip6_un1_hlim
  unsigned char ip6_un1_hlim;
};

union anonymous_0
{
  // ip6_un1
  struct ip6_hdrctl ip6_un1;
  // ip6_un2_vfc
  unsigned char ip6_un2_vfc;
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

struct addrinfo
{
  // ai_flags
  signed int ai_flags;
  // ai_family
  signed int ai_family;
  // ai_socktype
  signed int ai_socktype;
  // ai_protocol
  signed int ai_protocol;
  // ai_addrlen
  unsigned int ai_addrlen;
  // ai_addr
  struct sockaddr *ai_addr;
  // ai_canonname
  char *ai_canonname;
  // ai_next
  struct addrinfo *ai_next;
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

struct in6_addr
{
  // __in6_u
  union anonymous __in6_u;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct ip6_hdr
{
  // ip6_ctlun
  union anonymous_0 ip6_ctlun;
  // ip6_src
  struct in6_addr ip6_src;
  // ip6_dst
  struct in6_addr ip6_dst;
};

struct iphdr
{
  // ihl
  unsigned char ihl : 4;
  // version
  unsigned char version : 4;
  // tos
  unsigned char tos;
  // tot_len
  unsigned short int tot_len;
  // id
  unsigned short int id;
  // frag_off
  unsigned short int frag_off;
  // ttl
  unsigned char ttl;
  // protocol
  unsigned char protocol;
  // check
  unsigned short int check;
  // saddr
  unsigned int saddr;
  // daddr
  unsigned int daddr;
};

struct mailserver_list
{
  // ip_address
  char *ip_address;
  // next
  struct mailserver_list *next;
};

struct nfgenmsg
{
  // nfgen_family
  unsigned char nfgen_family;
  // version
  unsigned char version;
  // res_id
  unsigned short int res_id;
};

struct nfqnl_msg_packet_hdr
{
  // packet_id
  unsigned int packet_id;
  // hw_protocol
  unsigned short int hw_protocol;
  // hook
  unsigned char hook;
} __attribute__ ((__packed__));

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

struct sockaddr
{
  // sa_family
  unsigned short int sa_family;
  // sa_data
  char sa_data[14l];
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

struct whitelist_entry
{
  // ip_address
  char *ip_address;
  // rdns
  char *rdns;
  // is_child
  _Bool is_child;
  // used
  _Bool used;
  // rdns_tried
  _Bool rdns_tried;
  // added
  signed long int added;
  // next
  struct whitelist_entry *next;
};


// allow_time
// file include/mxallowd.h line 13
signed int allow_time = 3600;
// blocked_attempts
// file include/mxallowd.h line 25
unsigned long int blocked_attempts = (unsigned long int)0;
// configfile
// file include/mxallowd.h line 28
char *configfile = "/etc/mxallowd.conf";
// direct_to_fake
// file include/mxallowd.h line 27
unsigned long int direct_to_fake = (unsigned long int)0;
// fake_mailservers
// file include/mxallowd.h line 23
struct mailserver_list *fake_mailservers;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// queue_num
// file include/mxallowd.h line 14
signed int queue_num = -1;
// quiet
// file include/mxallowd.h line 21
_Bool quiet = (_Bool)0;
// rdns_whitelist
// file include/mxallowd.h line 20
_Bool rdns_whitelist = (_Bool)1;
// real_mailservers
// file include/mxallowd.h line 24
struct mailserver_list *real_mailservers;
// resolv_new_cond
// file include/mxallowd.h line 30
union anonymous_1 resolv_new_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// resolv_thread_mutex
// file include/mxallowd.h line 29
union anonymous_2 resolv_thread_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// root
// file include/whitelist.h line 44
struct whitelist_entry *root = (struct whitelist_entry *)(void *)0;
// stay_in_foreground
// file include/mxallowd.h line 22
_Bool stay_in_foreground = (_Bool)0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// successful_connects
// file include/mxallowd.h line 26
unsigned long int successful_connects = (unsigned long int)0;
// to_stdout
// file include/mxallowd.h line 19
_Bool to_stdout = (_Bool)0;

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx)
{
  signed long int return_value___builtin_bswap32_1;
  return_value___builtin_bswap32_1=__builtin_bswap32((signed long int)__bsx);
  return (unsigned int)return_value___builtin_bswap32_1;
}

// add_mailserver
// file include/mxallowd.h line 44
void add_mailserver(struct mailserver_list **root, char *mailserver_ip)
{
  struct mailserver_list *new;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct mailserver_list) /*16ul*/ );
  new = (struct mailserver_list *)return_value_malloc_1;
  if(new == ((struct mailserver_list *)NULL))
    diep("malloc()");

  char *return_value___strdup_2;
  return_value___strdup_2=__strdup(mailserver_ip);
  new->ip_address = return_value___strdup_2;
  new->next = (struct mailserver_list *)(void *)0;
  if(*root == ((struct mailserver_list *)NULL))
    *root = new;

  else
  {
    struct mailserver_list *cur = *root;
    for( ; !(cur->next == ((struct mailserver_list *)NULL)); cur = cur->next)
      ;
    cur->next = new;
  }
}

// add_to_whitelist
// file include/whitelist.h line 41
void add_to_whitelist(char *ip_address, char *rdns, _Bool is_child, signed int af, const void *source_addr)
{
  _Bool return_value_is_whitelisted_1;
  return_value_is_whitelisted_1=is_whitelisted(ip_address, (_Bool)0);
  char *tmp_if_expr_5;
  char *return_value___strdup_4;
  if(return_value_is_whitelisted_1 == (_Bool)0)
  {
    struct whitelist_entry *new_entry;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct whitelist_entry) /*40ul*/ );
    new_entry = (struct whitelist_entry *)return_value_malloc_2;
    new_entry->next = (struct whitelist_entry *)(void *)0;
    char *return_value___strdup_3;
    return_value___strdup_3=__strdup(ip_address);
    new_entry->ip_address = return_value___strdup_3;
    if(!(rdns == ((char *)NULL)))
    {
      return_value___strdup_4=__strdup(rdns);
      tmp_if_expr_5 = return_value___strdup_4;
    }

    else
      tmp_if_expr_5 = (char *)(void *)0;
    new_entry->rdns = tmp_if_expr_5;
    new_entry->rdns_tried = rdns != (char *)(void *)0;
    new_entry->added=time((signed long int *)(void *)0);
    new_entry->is_child = is_child;
    new_entry->used = (_Bool)0;
    if(root == ((struct whitelist_entry *)NULL))
      root = new_entry;

    else
    {
      struct whitelist_entry *cur = root;
      for( ; !(cur->next == ((struct whitelist_entry *)NULL)); cur = cur->next)
        if(cur->ip_address == ((char *)NULL))
          break;

      if(cur->ip_address == ((char *)NULL))
      {
        cur->ip_address = new_entry->ip_address;
        cur->rdns = new_entry->rdns;
        cur->rdns_tried = new_entry->rdns_tried;
        cur->added = new_entry->added;
        cur->is_child = is_child;
        cur->used = (_Bool)0;
        free((void *)new_entry);
      }

      else
        cur->next = new_entry;
    }
    if(!(rdns_whitelist == (_Bool)0))
    {
      pthread_mutex_lock(&resolv_thread_mutex);
      pthread_cond_broadcast(&resolv_new_cond);
      pthread_mutex_unlock(&resolv_thread_mutex);
    }

  }

}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1;
}

// atoi_link1
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link1(const char *__nptr_link1)
{
  signed long int return_value_strtol_1_link1;
  return_value_strtol_1_link1=strtol(__nptr_link1, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link1;
}

// checkConfigValue
// file src/config.c line 75
_Bool checkConfigValue(char *value, char *name)
{
  _Bool return_value_isInteger_1;
  if(value == ((char *)NULL))
    slog("Option \"%s\" requires argument\n", name);

  else
  {
    return_value_isInteger_1=isInteger(value);
    if(!(return_value_isInteger_1 == (_Bool)0))
      return (_Bool)1;

    else
      slog("Argument for \"%s\" is not an integer (%s)\n", value, name);
  }
  return (_Bool)0;
}

// cleanup_whitelist
// file include/whitelist.h line 40
void cleanup_whitelist()
{
  char *tmp_if_expr_1;
  if(!(root == ((struct whitelist_entry *)NULL)))
  {
    signed long int current_time;
    current_time=time((signed long int *)(void *)0);
    struct whitelist_entry *cur = root;
    while((_Bool)1)
    {
      if(!(cur->ip_address == ((char *)NULL)))
      {
        if(!((signed long int)allow_time >= current_time + -cur->added))
        {
          if(!(cur->rdns == ((char *)NULL)))
            tmp_if_expr_1 = cur->rdns;

          else
            tmp_if_expr_1 = "unresolvable";
          slog("Cleaning %s (RDNS: %s) from whitelist (timeout)\n", cur->ip_address, tmp_if_expr_1);
          if(cur->is_child == (_Bool)0)
          {
            if(!(cur->used == (_Bool)0))
              successful_connects = successful_connects + 1ul;

            else
              direct_to_fake = direct_to_fake + 1ul;
          }

          free((void *)cur->ip_address);
          cur->ip_address = (char *)(void *)0;
          if(!(cur->rdns == ((char *)NULL)))
          {
            free((void *)cur->rdns);
            cur->rdns = (char *)(void *)0;
          }

        }

      }

      cur = cur->next;
      if(cur == ((struct whitelist_entry *)NULL))
        break;

    }
  }

}

// dief
// file src/log.c line 73
void dief(char *format, ...)
{
  void **ap = (void **)&format;
  if(!(to_stdout == (_Bool)0))
    vfprintf(stderr, format, ap);

  else
    vsyslog(0x02 | 0x01 | 3 << 3, format, ap);
  ap = ((void **)NULL);
  exit(1);
}

// diem
// file src/log.c line 53
void diem(char *message)
{
  if(!(to_stdout == (_Bool)0))
    fprintf(stderr, "%s\n", message);

  else
    syslog(0x02 | 0x01 | 3 << 3 | 0x20, "%s\n", message);
  exit(1);
}

// diep
// file src/log.c line 64
void diep(char *message)
{
  slogerror(message);
  exit(1);
}

// getNextConfigEntry
// file src/config.c line 47
void getNextConfigEntry(struct _IO_FILE *config, char **destName, char **destValue, char *wholeBuffer, signed int wholeBufferSize)
{
  char *return_value_fgets_1;
  return_value_fgets_1=fgets(wholeBuffer, wholeBufferSize, config);
  if(return_value_fgets_1 == wholeBuffer)
  {
    char *c = wholeBuffer;
    for( ; (_Bool)1; c = c + 1l)
    {
      if(!((signed int)*c == 32))
      {
        if(!((signed int)*c == 9))
          goto __CPROVER_DUMP_L3;

      }

      if((signed int)*c == 0)
        break;

    }

  __CPROVER_DUMP_L3:
    ;
    *destName = c;
    for( ; !((signed int)*c == 0); c = c + 1l)
    {
      if((signed int)*c == 13)
        break;

      if((signed int)*c == 10)
        break;

      if((signed int)*c == 32)
        break;

      if((signed int)*c == 9)
        break;

    }
    *c = (char)0;
    c = c + 1l;
    for( ; (_Bool)1; c = c + 1l)
    {
      if(!((signed int)*c == 32))
      {
        if(!((signed int)*c == 9))
          goto __CPROVER_DUMP_L8;

      }

      if((signed int)*c == 0)
        break;

    }

  __CPROVER_DUMP_L8:
    ;
    *destValue = c;
    for( ; !((signed int)*c == 0); c = c + 1l)
    {
      if((signed int)*c == 13)
        break;

      if((signed int)*c == 10)
        break;

      if((signed int)*c == 32)
        break;

      if((signed int)*c == 9)
        break;

    }
    *c = (char)0;
  }

}

// handlePacket
// file src/nfq.c line 21
static signed int handlePacket(struct nfq_q_handle *qh, struct nfgenmsg *nfmsg, struct nfq_data *nfdata, void *packet_buffer)
{
  (void)nfmsg;
  (void)packet_buffer;
  struct nfqnl_msg_packet_hdr *header;
  unsigned char *payload = (unsigned char *)(void *)0;
  signed int payload_length;
  header=nfq_get_msg_packet_hdr(nfdata);
  _Bool tmp_if_expr_3;
  const char *return_value_inet_ntop_2;
  _Bool tmp_if_expr_6;
  const char *return_value_inet_ntop_5;
  _Bool return_value_is_included_10;
  if(header == ((struct nfqnl_msg_packet_hdr *)NULL))
    return -1;

  else
  {
    payload_length=nfq_get_payload(nfdata, (unsigned char **)&payload);
    if(payload_length == -1)
      return -1;

    else
    {
      cleanup_whitelist();
      char dest_address[47l];
      char source_address[47l];
      memset((void *)dest_address, 0, (unsigned long int)(46 + 1));
      memset((void *)source_address, 0, (unsigned long int)(46 + 1));
      struct iphdr *ip_header = (struct iphdr *)payload;
      if((signed int)ip_header->version == 4)
      {
        const char *return_value_inet_ntop_1;
        return_value_inet_ntop_1=inet_ntop(2, (const void *)&ip_header->daddr, dest_address, (unsigned int)sizeof(char [47l]) /*47ul*/ );
        if(return_value_inet_ntop_1 == ((const char *)NULL))
          tmp_if_expr_3 = (_Bool)1;

        else
        {
          return_value_inet_ntop_2=inet_ntop(2, (const void *)&ip_header->saddr, source_address, (unsigned int)sizeof(char [47l]) /*47ul*/ );
          tmp_if_expr_3 = return_value_inet_ntop_2 == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_3)
          return -1;

      }

      else
      {
        struct ip6_hdr *ip6_header = (struct ip6_hdr *)payload;
        const char *return_value_inet_ntop_4;
        return_value_inet_ntop_4=inet_ntop(10, (const void *)&ip6_header->ip6_dst, dest_address, (unsigned int)sizeof(char [47l]) /*47ul*/ );
        if(return_value_inet_ntop_4 == ((const char *)NULL))
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          return_value_inet_ntop_5=inet_ntop(10, (const void *)&ip6_header->ip6_src, source_address, (unsigned int)sizeof(char [47l]) /*47ul*/ );
          tmp_if_expr_6 = return_value_inet_ntop_5 == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
          return -1;

      }
      _Bool return_value_is_included_11;
      return_value_is_included_11=is_included(fake_mailservers, dest_address);
      if(!(return_value_is_included_11 == (_Bool)0))
      {
        slog("Successful connection from %s to a fake mailserver, adding to whitelist\n", (const void *)source_address);
        add_to_whitelist(source_address, (char *)(void *)0, (_Bool)0, 0, (void *)0);
      }

      else
      {
        return_value_is_included_10=is_included(real_mailservers, dest_address);
        if(!(return_value_is_included_10 == (_Bool)0))
        {
          _Bool return_value_is_whitelisted_9;
          return_value_is_whitelisted_9=is_whitelisted(source_address, (_Bool)1);
          if(return_value_is_whitelisted_9 == (_Bool)0)
          {
            slog("Dropping connection attempt from %s to a real mailserver\n", (const void *)source_address);
            blocked_attempts = blocked_attempts + 1ul;
            unsigned int return_value___bswap_32_7;
            return_value___bswap_32_7=__bswap_32(header->packet_id);
            signed int return_value_nfq_set_verdict_8;
            return_value_nfq_set_verdict_8=nfq_set_verdict(qh, return_value___bswap_32_7, (unsigned int)0, (unsigned int)0, (const unsigned char *)(void *)0);
            return return_value_nfq_set_verdict_8;
          }

          slog("Successful connection from %s to a real mailserver\n", (const void *)source_address);
        }

      }
      unsigned int return_value___bswap_32_12;
      return_value___bswap_32_12=__bswap_32(header->packet_id);
      signed int return_value_nfq_set_verdict_13;
      return_value_nfq_set_verdict_13=nfq_set_verdict(qh, return_value___bswap_32_12, (unsigned int)1, (unsigned int)0, (const unsigned char *)(void *)0);
      return return_value_nfq_set_verdict_13;
    }
  }
}

// handle_sighup
// file src/mxallowd.c line 107
void handle_sighup(signed int sig)
{
  slog("Reloading configuration (upon SIGHUP)\n");
  read_configuration(configfile);
}

// handle_sigusr1
// file src/mxallowd.c line 116
void handle_sigusr1(signed int sig)
{
  cleanup_whitelist();
  slog("Statistics: %lu blocked connection attempts, %lu successful connections, %lu direct-to-fake-mx\n", blocked_attempts, successful_connects, direct_to_fake);
}

// isInteger
// file src/config.c line 25
_Bool isInteger(char *str)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(str);
  _Bool tmp_if_expr_3;
  unsigned long int return_value_strlen_2;
  if(return_value_strlen_1 == 0ul)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_strlen_2=strlen(str);
    tmp_if_expr_3 = return_value_strlen_2 > (unsigned long int)10 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    return (_Bool)0;

  else
  {
    char *c = str;
    for( ; !((signed int)*c == 0); c = c + 1l)
    {
      if(!((signed int)*c >= 48))
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)*c > 57 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        return (_Bool)0;

    }
    return (_Bool)1;
  }
}

// is_included
// file src/mxallowd.c line 94
_Bool is_included(struct mailserver_list *root, char *ip_address)
{
  struct mailserver_list *cur = root;
  signed int tmp_statement_expression_1;
  do
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp_2;
    return_value___builtin_strcmp_2=__builtin_strcmp(cur->ip_address, ip_address);
    tmp_statement_expression_1 = return_value___builtin_strcmp_2;
    if(tmp_statement_expression_1 == 0)
      return (_Bool)1;

    cur = cur->next;
  }
  while(!(cur == ((struct mailserver_list *)NULL)));
  return (_Bool)0;
}

// is_whitelisted
// file include/whitelist.h line 39
_Bool is_whitelisted(char *ip_address, _Bool useIt)
{
  signed int tmp_statement_expression_1;
  if(root == ((struct whitelist_entry *)NULL))
    return (_Bool)0;

  else
  {
    struct whitelist_entry *cur = root;
    while((_Bool)1)
    {
      if(!(cur->ip_address == ((char *)NULL)))
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp_2;
        return_value___builtin_strcmp_2=__builtin_strcmp(cur->ip_address, ip_address);
        tmp_statement_expression_1 = return_value___builtin_strcmp_2;
        if(tmp_statement_expression_1 == 0)
        {
          if(!(useIt == (_Bool)0))
            cur->used = (_Bool)1;

          return (_Bool)1;
        }

      }

      cur = cur->next;
      if(cur == ((struct whitelist_entry *)NULL))
        break;

    }
    return (_Bool)0;
  }
}

// main
// file src/mxallowd.c line 173
signed int main(signed int argc, char **argv)
{
  signed int o;
  signed int option_index = 0;
  char *options_string = "f:r:t:c:n:shdFq";
  static struct option long_options[11l] = { { .name="fake-mailserver", .has_arg=1, .flag=((signed int *)NULL), .val=102 },
    { .name="foreground", .has_arg=1, .flag=((signed int *)NULL), .val=70 },
    { .name="real-mailserver", .has_arg=1, .flag=((signed int *)NULL), .val=114 },
    { .name="whitelist-time", .has_arg=1, .flag=((signed int *)NULL), .val=116 },
    { .name="no-rdns-whitelist", .has_arg=0, .flag=((signed int *)NULL),
    .val=100 },
    { .name="stdout", .has_arg=0, .flag=((signed int *)NULL), .val=115 },
    { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 },
    { .name="config", .has_arg=1, .flag=((signed int *)NULL), .val=99 },
    { .name="queue-num", .has_arg=1, .flag=((signed int *)NULL), .val=110 },
    { .name="quiet", .has_arg=0, .flag=((signed int *)NULL), .val=113 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
  do
  {
    o=getopt_long(argc, argv, options_string, long_options, &option_index);
    if(o == -1)
      break;

    if((signed int)(char)o == 99)
    {
      configfile = optarg;
      break;
    }

  }
  while((_Bool)1);
  _Bool return_value_read_configuration_1;
  return_value_read_configuration_1=read_configuration(configfile);
  signed int return_value_pthread_create_7;
  if(return_value_read_configuration_1 == (_Bool)0)
  {
    if(!(argc == 1))
      goto __CPROVER_DUMP_L4;

    fprintf(stderr, "Error: Missing arguments and no configuration file could be read\n");
    print_help(argv[(signed long int)0]);
    return 1;
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    optind = 0;
    do
    {
      o=getopt_long(argc, argv, options_string, long_options, &option_index);
      if(o == -1)
        break;

      switch((signed int)(char)o)
      {
        case 102:
        {
          add_mailserver(&fake_mailservers, optarg);
          break;
        }
        case 70:
        {
          stay_in_foreground = (_Bool)1;
          break;
        }
        case 114:
        {
          add_mailserver(&real_mailservers, optarg);
          break;
        }
        case 116:
        {
          allow_time=atoi_link1(optarg);
          break;
        }
        case 115:
        {
          to_stdout = (_Bool)1;
          break;
        }
        case 100:
        {
          rdns_whitelist = (_Bool)0;
          break;
        }
        case 104:
        {
          print_help(argv[(signed long int)0]);
          return 0;
        }
        case 113:
        {
          quiet = (_Bool)1;
          break;
        }
        case 110:
          queue_num=atoi_link1(optarg);
        default:
          ;
      }
    }
    while((_Bool)1);
    if(fake_mailservers == ((struct mailserver_list *)NULL) || real_mailservers == ((struct mailserver_list *)NULL))
    {
      fprintf(stderr, "Error: fake and real mailserver have to be specified\n");
      print_help(argv[(signed long int)0]);
      return 1;
    }

    else
      if(queue_num == -1)
      {
        fprintf(stderr, "Error: queue-num has to be specified\n");
        print_help(argv[(signed long int)0]);
        return 1;
      }

      else
      {
        if(stay_in_foreground == (_Bool)0)
        {
          slog("Daemonizing...\n");
          signed int return_value_daemon_2;
          return_value_daemon_2=daemon(0, 0);
          if(!(return_value_daemon_2 >= 0))
            slog("Cannot daemonize\n");

          signed int fd;
          fd=open("/var/run/mxallowd.pid", 01 | 0100 | 01000, 0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3);
          if(!(fd >= 0))
            fprintf(stderr, "Error: Could not create /var/run/mxallowd.pid\n");

          else
          {
            char buffer[256l];
            signed int return_value_getpid_3;
            return_value_getpid_3=getpid();
            snprintf(buffer, (unsigned long int)255, "%d", return_value_getpid_3);
            unsigned long int return_value_strlen_4;
            return_value_strlen_4=strlen(buffer);
            write(fd, (const void *)buffer, return_value_strlen_4);
            close(fd);
          }
        }

        void (*return_value_signal_5)(signed int);
        return_value_signal_5=signal(1, handle_sighup);
        if(return_value_signal_5 == (void (*)(signed int))-1)
          diep("signal(SIGHUP)");

        void (*return_value_signal_6)(signed int);
        return_value_signal_6=signal(10, handle_sigusr1);
        if(return_value_signal_6 == (void (*)(signed int))-1)
          diep("signal(SIGUSR1)");

        if(quiet == (_Bool)0)
        {
          slog("mxallowd %s starting...\n", (const void *)"1.9");
          struct mailserver_list *cur = fake_mailservers;
          do
          {
            slog("Fake Mailserver: %s\n", cur->ip_address);
            cur = cur->next;
          }
          while(!(cur == ((struct mailserver_list *)NULL)));
          cur = real_mailservers;
          do
          {
            slog("Real Mailserver: %s\n", cur->ip_address);
            cur = cur->next;
          }
          while(!(cur == ((struct mailserver_list *)NULL)));
        }

        unsigned long int resolv_thread;
        if(!(rdns_whitelist == (_Bool)0))
        {
          return_value_pthread_create_7=pthread_create(&resolv_thread, (const union pthread_attr_t *)(void *)0, resolve_thread, (void *)0);
          if(!(return_value_pthread_create_7 == 0))
            diep("Cannot create thread");

        }

        nfq_init();
        return 0;
      }
  }
}

// nfq_init
// file include/nfq.h line 3
void nfq_init()
{
  struct nfq_handle *nfq;
  nfq=nfq_open();
  if(nfq == ((struct nfq_handle *)NULL))
    diem("Error creating an nfq-handle");

  nfq_unbind_pf(nfq, (unsigned short int)2);
  signed int return_value_nfq_bind_pf_1;
  return_value_nfq_bind_pf_1=nfq_bind_pf(nfq, (unsigned short int)2);
  if(!(return_value_nfq_bind_pf_1 == 0))
    diem("Error binding to AF_INET");

  nfq_unbind_pf(nfq, (unsigned short int)10);
  signed int return_value_nfq_bind_pf_2;
  return_value_nfq_bind_pf_2=nfq_bind_pf(nfq, (unsigned short int)10);
  if(!(return_value_nfq_bind_pf_2 == 0))
    diem("Error binding to AF_INET6");

  struct nfq_q_handle *qh;
  qh=nfq_create_queue(nfq, (unsigned short int)queue_num, handlePacket, (void *)0);
  if(qh == ((struct nfq_q_handle *)NULL))
    dief("Error creating queue %d\n", queue_num);

  signed int return_value_nfq_set_mode_3;
  return_value_nfq_set_mode_3=nfq_set_mode(qh, (unsigned char)2, (unsigned int)4096);
  if(return_value_nfq_set_mode_3 == -1)
    diem("Cannot set mode to NFQNL_COPY_PACKET");

  char *packet_buffer;
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(sizeof(unsigned char) /*1ul*/  * (unsigned long int)(4096 + 1));
  packet_buffer = (char *)return_value_malloc_4;
  if(packet_buffer == ((char *)NULL))
    diep("malloc()");

  signed int fd;
  fd=nfq_fd(nfq);
  signed int rv;
  signed long int return_value_recv_5;
  do
  {
    return_value_recv_5=recv(fd, (void *)packet_buffer, (unsigned long int)4096, 0);
    rv = (signed int)return_value_recv_5;
    if(!(rv >= 0))
      break;

    nfq_handle_packet(nfq, packet_buffer, rv);
  }
  while((_Bool)1);
  nfq_destroy_queue(qh);
  nfq_close(nfq);
  free((void *)packet_buffer);
}

// print_help
// file src/mxallowd.c line 123
void print_help(char *executable)
{
  printf("\nmxallowd %s (c) 2007-2008 Michael Stapelberg\n(IPv6 %s in this build)\n\nSyntax: %s [-F] [-d] [-c configfile] [-t 3600] [-s] [-q]\n\t -f 192.168.1.254 -r 192.168.1.2 -n 23\n\n-c\t--config\n\tSpecify the path to a configuration file (default\n\t/etc/mxallowd.conf)\n\n-f\t--fake-mailserver\n\tSpecify which IP-address of the fake mailserver\n\t(connecting will whitelist you for the real server)\n\n-F\t--foreground\n\tDo not fork into background, stay on console\n\n-r\t--real-mailserver\n\tSpecify which IP-address the real mailserver has\n\n-t\t--whitelist-time\n\tSpecify the amount of time (in seconds) until an\n\tIP-address will be removed from the whitelist\n\n-d\t--no-rdns-whitelist\n\tDisable whitelisting all IP-addresses that have\n\tthe same RDNS as the connecting one (for google\n\tmail it is necessary to enable this!)\n\n-s\t--stdout\n\tLog to stdout, not to syslog\n\n-q\t--quiet\n\tDon't log anything but errors\n\n-n\t--queue-num\n\tThe queue number which will be used (--queue-num in NFQUEUE target)\n\n-h\t--help\n\tDisplay this help\n\n", (const void *)"1.9", (const void *)"supported", executable);
}

// rdns_for_ip
// file src/resolve.c line 25
char * rdns_for_ip(char *ip_address)
{
  struct in_addr address4;
  struct hostent *lookup = (struct hostent *)(void *)0;
  signed int return_value_inet_pton_1;
  return_value_inet_pton_1=inet_pton(2, ip_address, (void *)&address4);
  if(return_value_inet_pton_1 >= 1)
    lookup=gethostbyaddr((const void *)(const char *)&address4, (unsigned int)sizeof(struct in_addr) /*4ul*/ , 2);

  else
  {
    struct in6_addr address6;
    inet_pton(10, ip_address, (void *)&address6);
    lookup=gethostbyaddr((const void *)(const char *)&address6, (unsigned int)sizeof(struct in6_addr) /*16ul*/ , 10);
  }
  signed int *return_value___h_errno_location_5;
  signed int *return_value___h_errno_location_4;
  signed int *return_value___h_errno_location_3;
  if(lookup == ((struct hostent *)NULL))
  {
    signed int *return_value___h_errno_location_6;
    return_value___h_errno_location_6=__h_errno_location();
    if(!(*return_value___h_errno_location_6 == 1))
    {
      return_value___h_errno_location_5=__h_errno_location();
      if(!(*return_value___h_errno_location_5 == 4))
      {
        return_value___h_errno_location_4=__h_errno_location();
        if(!(*return_value___h_errno_location_4 == 4))
        {
          signed int *return_value___h_errno_location_2;
          return_value___h_errno_location_2=__h_errno_location();
          switch(*return_value___h_errno_location_2)
          {
            case 3:
            {
              fprintf(stderr, "Non-recoverable error during gethostbyaddr()\n");
              break;
            }
            case 2:
            {
              fprintf(stderr, "Temporary error resolving using gethostbyaddr()\n");
              break;
            }
            default:
            {
              return_value___h_errno_location_3=__h_errno_location();
              fprintf(stderr, "Unknown error (code %d) during gethostbyaddr()\n", *return_value___h_errno_location_3);
            }
          }
        }

      }

    }

    return (char *)(void *)0;
  }

  return lookup->h_name;
}

// read_configuration
// file src/config.c line 89
_Bool read_configuration(char *configfile)
{
  struct _IO_FILE *config;
  config=fopen(configfile, "r");
  signed int return_value_feof_1;
  _Bool tmp_if_expr_3;
  unsigned long int return_value_strlen_2;
  signed int return_value_strcasecmp_11;
  signed int return_value_strcasecmp_10;
  signed int return_value_strcasecmp_9;
  signed int return_value_strcasecmp_8;
  signed int return_value_strcasecmp_7;
  signed int return_value_strcasecmp_6;
  if(config == ((struct _IO_FILE *)NULL))
  {
    slogerror("Could not open configfile");
    return (_Bool)0;
  }

  else
  {
    char *destName = (char *)(void *)0;
    char *destValue = (char *)(void *)0;
    char wholeBuffer[1024l];
    do
    {
      return_value_feof_1=feof(config);
      if(!(return_value_feof_1 == 0))
        break;

      getNextConfigEntry(config, &destName, &destValue, wholeBuffer, 1024);
      if(destName == ((char *)NULL))
        break;

      if((signed int)*destName == 35)
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value_strlen_2=strlen(destName);
        tmp_if_expr_3 = return_value_strlen_2 < (unsigned long int)3 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_3)
      {
        signed int return_value_strcasecmp_12;
        return_value_strcasecmp_12=strcasecmp(destName, "fake-mailserver");
        if(return_value_strcasecmp_12 == 0)
        {
          if(!(destValue == ((char *)NULL)))
            add_mailserver(&fake_mailservers, destValue);

          else
            slog("Error: Option \"fake-mailserver\" requires an argument\n");
        }

        else
        {
          return_value_strcasecmp_11=strcasecmp(destName, "real-mailserver");
          if(return_value_strcasecmp_11 == 0)
          {
            if(!(destValue == ((char *)NULL)))
              add_mailserver(&real_mailservers, destValue);

            else
              slog("Error: Option \"real-mailserver\" requires an argument\n");
          }

          else
          {
            return_value_strcasecmp_10=strcasecmp(destName, "whitelist-time");
            if(return_value_strcasecmp_10 == 0)
            {
              _Bool return_value_checkConfigValue_4;
              return_value_checkConfigValue_4=checkConfigValue(destValue, destName);
              if(!(return_value_checkConfigValue_4 == (_Bool)0))
                allow_time=atoi(destValue);

            }

            else
            {
              return_value_strcasecmp_9=strcasecmp(destName, "queue-num");
              if(return_value_strcasecmp_9 == 0)
              {
                _Bool return_value_checkConfigValue_5;
                return_value_checkConfigValue_5=checkConfigValue(destValue, destName);
                if(!(return_value_checkConfigValue_5 == (_Bool)0))
                  queue_num=atoi(destValue);

              }

              else
              {
                return_value_strcasecmp_8=strcasecmp(destName, "no-rdns-whitelist");
                if(return_value_strcasecmp_8 == 0)
                  rdns_whitelist = (_Bool)0;

                else
                {
                  return_value_strcasecmp_7=strcasecmp(destName, "stdout");
                  if(return_value_strcasecmp_7 == 0)
                    to_stdout = (_Bool)1;

                  else
                  {
                    return_value_strcasecmp_6=strcasecmp(destName, "quiet");
                    if(return_value_strcasecmp_6 == 0)
                      quiet = (_Bool)1;

                    else
                      slog("Unknown configfile option: %s\n", destName);
                  }
                }
              }
            }
          }
        }
        destValue = (char *)(void *)0;
        destName = destValue;
      }

    }
    while((_Bool)1);
    fclose(config);
    return (_Bool)1;
  }
}

// resolve_thread
// file include/resolve.h line 13
void * resolve_thread(void *data)
{
  struct whitelist_entry *cur;
  char *rdns;
  char address[47l];
  _Bool tmp_if_expr_1;
  signed int tmp_statement_expression_4;
  while((_Bool)1)
  {
    pthread_mutex_lock(&resolv_thread_mutex);
    pthread_cond_wait(&resolv_new_cond, &resolv_thread_mutex);
    pthread_mutex_unlock(&resolv_thread_mutex);
    cur = root;
    do
    {
      if(cur->ip_address == ((char *)NULL))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = cur->rdns_tried != (_Bool)0 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_1)
      {
        rdns=rdns_for_ip(cur->ip_address);
        slog("Resolved %s to %s\n", cur->ip_address, rdns);
        cur->rdns_tried = (_Bool)1;
        if(!(rdns == ((char *)NULL)))
        {
          char *return_value___strdup_2;
          return_value___strdup_2=__strdup(rdns);
          rdns = return_value___strdup_2;
          cur->rdns = rdns;
          if(!(rdns_whitelist == (_Bool)0))
          {
            struct addrinfo hints;
            struct addrinfo *res;
            struct addrinfo *res0;
            signed int error;
            memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
            hints.ai_socktype = 1;
            error=getaddrinfo(rdns, "smtp", &hints, &res0);
            if(!(error == 0))
            {
              const char *return_value_gai_strerror_3;
              return_value_gai_strerror_3=gai_strerror(error);
              fprintf(stderr, "Could not resolve \"%s\":smtp: %s\n", rdns, return_value_gai_strerror_3);
              goto __CPROVER_DUMP_L10;
            }

            res = res0;
            for( ; !(res == ((struct addrinfo *)NULL)); res = res->ai_next)
            {
              memset((void *)address, 0, (unsigned long int)(46 + 1));
              getnameinfo(res->ai_addr, res->ai_addrlen, address, (unsigned int)sizeof(char [47l]) /*47ul*/ , (char *)(void *)0, (unsigned int)0, 1);
              unsigned long int __s1_len;
              unsigned long int __s2_len;
              signed int return_value___builtin_strcmp_5;
              return_value___builtin_strcmp_5=__builtin_strcmp(address, cur->ip_address);
              tmp_statement_expression_4 = return_value___builtin_strcmp_5;
              if(!(tmp_statement_expression_4 == 0))
                add_to_whitelist(address, rdns, (_Bool)1, res->ai_family, (const void *)res->ai_addr);

            }
            cur->added=time((signed long int *)(void *)0);
          }

        }

      }


    __CPROVER_DUMP_L10:
      ;
      cur = cur->next;
    }
    while(!(cur == ((struct whitelist_entry *)NULL)));
  }
}

// slog
// file include/log.h line 11
void slog(char *format, ...)
{
  void **ap;
  if(quiet == (_Bool)0)
  {
    ap = (void **)&format;
    if(!(to_stdout == (_Bool)0))
    {
      char timebuf[23l];
      signed long int t;
      t=time((signed long int *)(void *)0);
      struct tm *tmp;
      tmp=localtime(&t);
      strftime(timebuf, sizeof(char [23l]) /*23ul*/ , "%d.%m.%Y %H:%M:%S - ", tmp);
      printf("%s", (const void *)timebuf);
      vprintf(format, ap);
    }

    else
      vsyslog(0x02 | 0x01 | 3 << 3, format, ap);
    ap = ((void **)NULL);
  }

}

// slogerror
// file include/log.h line 12
void slogerror(char *message)
{
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  if(!(to_stdout == (_Bool)0))
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "%s: %s\n", message, return_value_strerror_2);
  }

  else
  {
    return_value___errno_location_3=__errno_location();
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    syslog(0x02 | 0x01 | 3 << 3 | 0x20, "%s: %s\n", message, return_value_strerror_4);
  }
}

// vprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 36
static inline signed int vprintf(const char * restrict __fmt, void **__arg)
{
  signed int return_value_vfprintf_1;
  return_value_vfprintf_1=vfprintf(stdout, __fmt, __arg);
  return return_value_vfprintf_1;
}

