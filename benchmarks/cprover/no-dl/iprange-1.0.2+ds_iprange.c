// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_0;

// tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}_U8_'__pad1'||U64'__pad2'||U32'__flags'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 177
struct anonymous_2;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_1;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}_U8_'__pad1'||U64'__pad2'||U32'__flags'||U32'_pad0'|]#'__data'||ARR56{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 174
union anonymous_3;

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

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-dnsrep
// file iprange.c line 1240
struct dnsrep;

// tag-dnsreq
// file iprange.c line 1234
struct dnsreq;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-ipset
// file iprange.c line 359
struct ipset;

// tag-network_addr
// file iprange.c line 49
struct network_addr;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// a_to_hl
// file iprange.c line 232
static inline unsigned int a_to_hl(char *ipstr, signed int *err);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atol
// file /usr/include/stdlib.h line 150
extern signed long int atol(const char *);
// broadcast
// file iprange.c line 83
static inline unsigned int broadcast(unsigned int addr, signed int prefix);
// compar_netaddr
// file iprange.c line 296
static signed int compar_netaddr(const void *p1, const void *p2);
// dns_done
// file iprange.c line 1617
static void dns_done(struct ipset *ips);
// dns_lock_replies
// file iprange.c line 1265
void dns_lock_replies(void);
// dns_lock_requests
// file iprange.c line 1263
void dns_lock_requests(void);
// dns_process_replies
// file iprange.c line 1532
static void dns_process_replies(struct ipset *ips);
// dns_request
// file iprange.c line 1582
static void dns_request(struct ipset *ips, char *hostname);
// dns_request_add
// file iprange.c line 1286
static void dns_request_add(struct dnsreq *d);
// dns_request_done
// file iprange.c line 1330
static void dns_request_done(struct dnsreq *d, signed int added);
// dns_request_failed
// file iprange.c line 1353
static void dns_request_failed(struct dnsreq *d, signed int added, signed int gai_error);
// dns_request_get
// file iprange.c line 1412
static struct dnsreq * dns_request_get(void);
// dns_signal_threats
// file iprange.c line 1271
static void dns_signal_threats(void);
// dns_thread_resolve
// file iprange.c line 1450
static void * dns_thread_resolve(void *ptr);
// dns_unlock_replies
// file iprange.c line 1266
void dns_unlock_replies(void);
// dns_unlock_requests
// file iprange.c line 1264
void dns_unlock_requests(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
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
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// inet_aton
// file /usr/include/arpa/inet.h line 73
extern signed int inet_aton(const char *, struct in_addr *);
// ip2str
// file iprange.c line 130
static inline char * ip2str(unsigned int IP);
// ipset_add
// file iprange.c line 542
static inline void ipset_add(struct ipset *ips, unsigned int from, unsigned int to);
// ipset_add_ipstr
// file iprange.c line 523
static inline signed int ipset_add_ipstr(struct ipset *ips, char *ipstr);
// ipset_added_entry
// file iprange.c line 477
static inline void ipset_added_entry(struct ipset *ips);
// ipset_common
// file iprange.c line 785
static inline struct ipset * ipset_common(struct ipset *ips1, struct ipset *ips2);
// ipset_create
// file iprange.c line 384
static inline struct ipset * ipset_create(const char *filename, signed int entries);
// ipset_diff
// file iprange.c line 664
static inline struct ipset * ipset_diff(struct ipset *ips1, struct ipset *ips2);
// ipset_exclude
// file iprange.c line 869
static inline struct ipset * ipset_exclude(struct ipset *ips1, struct ipset *ips2);
// ipset_expand
// file iprange.c line 460
static inline void ipset_expand(struct ipset *ips, unsigned long int free_entries_needed);
// ipset_free
// file iprange.c line 421
static inline void ipset_free(struct ipset *ips);
// ipset_load
// file iprange.c line 1666
static struct ipset * ipset_load(const char *filename);
// ipset_load_binary_v10
// file iprange.c line 1110
static signed int ipset_load_binary_v10(struct _IO_FILE *fp, struct ipset *ips, signed int first_line_missing);
// ipset_merge
// file iprange.c line 1998
static inline void ipset_merge(struct ipset *to, struct ipset *add);
// ipset_optimize
// file iprange.c line 562
static inline void ipset_optimize(struct ipset *ips);
// ipset_optimize_all
// file iprange.c line 647
static inline void ipset_optimize_all(struct ipset *root);
// ipset_print
// file iprange.c line 1899
static void ipset_print(struct ipset *ips, signed int print);
// ipset_reduce
// file iprange.c line 1788
static void ipset_reduce(struct ipset *ips, signed int acceptable_increase, signed int min_accepted);
// ipset_save_binary_v10
// file iprange.c line 1214
static void ipset_save_binary_v10(struct ipset *ips);
// ipset_unique_ips
// file iprange.c line 633
static unsigned long int ipset_unique_ips(struct ipset *ips);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// netmask
// file iprange.c line 70
static inline unsigned int netmask(signed int prefix);
// network
// file iprange.c line 93
static inline unsigned int network(unsigned int addr, signed int prefix);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// parse_hostname
// file iprange.c line 987
static inline signed int parse_hostname(char *line, signed int lineid, char *ipstr, char *ipstr2, signed int len);
// parse_line
// file iprange.c line 1022
static inline signed int parse_line(char *line, signed int lineid, char *ipstr, char *ipstr2, signed int len);
// print_addr
// file iprange.c line 154
static inline void print_addr(unsigned int addr, signed int prefix);
// print_addr_range
// file iprange.c line 318
static inline void print_addr_range(unsigned int lo, unsigned int hi);
// print_addr_single
// file iprange.c line 344
static inline void print_addr_single(unsigned int x);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_1 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_1 *, union anonymous *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_detach
// file /usr/include/pthread.h line 273
extern signed int pthread_detach(unsigned long int);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// pthread_rwlock_unlock
// file /usr/include/pthread.h line 929
extern signed int pthread_rwlock_unlock(union anonymous_3 *);
// pthread_rwlock_wrlock
// file /usr/include/pthread.h line 914
extern signed int pthread_rwlock_wrlock(union anonymous_3 *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// set_bit
// file iprange.c line 57
static inline unsigned int set_bit(unsigned int addr, signed int bitno, signed int val);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// split_range
// file iprange.c line 178
static inline signed int split_range(unsigned int addr, signed int prefix, unsigned int lo, unsigned int hi);
// str_to_netaddr
// file iprange.c line 250
static inline struct network_addr str_to_netaddr(char *ipstr, signed int *err);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// usage
// file iprange.c line 2104
static void usage(const char *me);
// version
// file iprange.c line 2380
static void version();

struct anonymous_0
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
  // __lock
  signed int __lock;
  // __nr_readers
  unsigned int __nr_readers;
  // __readers_wakeup
  unsigned int __readers_wakeup;
  // __writer_wakeup
  unsigned int __writer_wakeup;
  // __nr_readers_queued
  unsigned int __nr_readers_queued;
  // __nr_writers_queued
  unsigned int __nr_writers_queued;
  // __writer
  signed int __writer;
  // __shared
  signed int __shared;
  // __rwelision
  signed char __rwelision;
  // __pad1
  unsigned char __pad1[7l];
  // __pad2
  unsigned long int __pad2;
  // __flags
  unsigned int __flags;
};

union anonymous_1
{
  // __data
  struct anonymous_0 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous_3
{
  // __data
  struct anonymous_2 __data;
  // __size
  char __size[56l];
  // __align
  signed long int __align;
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

struct dnsrep
{
  // ip
  unsigned int ip;
  // next
  struct dnsrep *next;
};

struct dnsreq
{
  // next
  struct dnsreq *next;
  // tries
  char tries;
  // hostname
  char hostname[0l];
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct ipset
{
  // filename
  char filename[4097l];
  // lines
  unsigned long int lines;
  // entries
  unsigned long int entries;
  // entries_max
  unsigned long int entries_max;
  // unique_ips
  unsigned long int unique_ips;
  // flags
  unsigned int flags;
  // next
  struct ipset *next;
  // prev
  struct ipset *prev;
  // netaddrs
  struct network_addr *netaddrs;
};

struct network_addr
{
  // addr
  unsigned int addr;
  // broadcast
  unsigned int broadcast;
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


// PROG
// file iprange.c line 36
static char *PROG;
// cidr_use_network
// file iprange.c line 38
static signed int cidr_use_network = 1;
// debug
// file iprange.c line 37
static signed int debug;
// default_prefix
// file iprange.c line 39
static signed int default_prefix = 32;
// dns_cond
// file iprange.c line 1259
static union anonymous_1 dns_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// dns_mut
// file iprange.c line 1258
static union anonymous dns_mut = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// dns_progress
// file iprange.c line 1250
static signed int dns_progress;
// dns_replies
// file iprange.c line 1246
static struct dnsrep *dns_replies;
// dns_replies_failed
// file iprange.c line 1256
static unsigned long int dns_replies_failed;
// dns_replies_found
// file iprange.c line 1255
static unsigned long int dns_replies_found;
// dns_replies_rwlock
// file iprange.c line 1261
static union anonymous_3 dns_replies_rwlock = { .__data={ .__lock=0, .__nr_readers=(unsigned int)0, .__readers_wakeup=(unsigned int)0,
    .__writer_wakeup=(unsigned int)0, .__nr_readers_queued=(unsigned int)0,
    .__nr_writers_queued=(unsigned int)0,
    .__writer=0,
    .__shared=0, .__rwelision=(signed char)0, .__pad1={ (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 },
    .__pad2=(unsigned long int)0,
    .__flags=(unsigned int)0 } };
// dns_requests
// file iprange.c line 1245
static struct dnsreq *dns_requests;
// dns_requests_finished
// file iprange.c line 1253
static unsigned long int dns_requests_finished;
// dns_requests_made
// file iprange.c line 1252
static unsigned long int dns_requests_made;
// dns_requests_pending
// file iprange.c line 1251
static unsigned long int dns_requests_pending;
// dns_requests_retries
// file iprange.c line 1254
static unsigned long int dns_requests_retries;
// dns_requests_rwlock
// file iprange.c line 1260
static union anonymous_3 dns_requests_rwlock = { .__data={ .__lock=0, .__nr_readers=(unsigned int)0, .__readers_wakeup=(unsigned int)0,
    .__writer_wakeup=(unsigned int)0, .__nr_readers_queued=(unsigned int)0,
    .__nr_writers_queued=(unsigned int)0,
    .__writer=0,
    .__shared=0, .__rwelision=(signed char)0, .__pad1={ (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 },
    .__pad2=(unsigned long int)0,
    .__flags=(unsigned int)0 } };
// dns_silent
// file iprange.c line 1249
static signed int dns_silent;
// dns_threads
// file iprange.c line 1247
static signed int dns_threads;
// dns_threads_max
// file iprange.c line 1248
static signed int dns_threads_max = 5;
// endianness
// file iprange.c line 34
static unsigned int endianness = (unsigned int)0x1A2B3C4D;
// prefix_counters
// file iprange.c line 104
static signed int prefix_counters[33l];
// prefix_enabled
// file iprange.c line 105
static signed int prefix_enabled[33l] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
// print_prefix_ips
// file iprange.c line 41
static char *print_prefix_ips = "";
// print_prefix_nets
// file iprange.c line 42
static char *print_prefix_nets = "";
// print_suffix_ips
// file iprange.c line 43
static char *print_suffix_ips = "";
// print_suffix_nets
// file iprange.c line 44
static char *print_suffix_nets = "";
// split_range_disable_printing
// file iprange.c line 106
static signed int split_range_disable_printing;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// a_to_hl
// file iprange.c line 232
static inline unsigned int a_to_hl(char *ipstr, signed int *err)
{
  struct in_addr in;
  signed int return_value_inet_aton_2;
  return_value_inet_aton_2=inet_aton(ipstr, &in);
  if(return_value_inet_aton_2 == 0)
  {
    fprintf(stderr, "%s: Invalid address %s.\n", PROG, ipstr);
    in.s_addr = (unsigned int)0;
    if(!(err == ((signed int *)NULL)))
      *err = *err + 1;

    unsigned int return_value_ntohl_1;
    return_value_ntohl_1=ntohl(in.s_addr);
    return return_value_ntohl_1;
  }

  unsigned int return_value_ntohl_3;
  return_value_ntohl_3=ntohl(in.s_addr);
  return return_value_ntohl_3;
}

// broadcast
// file iprange.c line 83
static inline unsigned int broadcast(unsigned int addr, signed int prefix)
{
  unsigned int return_value_netmask_1;
  return_value_netmask_1=netmask(prefix);
  return addr | ~return_value_netmask_1;
}

// compar_netaddr
// file iprange.c line 296
static signed int compar_netaddr(const void *p1, const void *p2)
{
  struct network_addr *na1 = (struct network_addr *)p1;
  struct network_addr *na2 = (struct network_addr *)p2;
  if(!(na1->addr >= na2->addr))
    return -1;

  else
    if(!(na2->addr >= na1->addr))
      return 1;

    else
      if(!(na2->broadcast >= na1->broadcast))
        return -1;

      else
        if(!(na1->broadcast >= na2->broadcast))
          return 1;

        else
          return 0;
}

// dns_done
// file iprange.c line 1617
static void dns_done(struct ipset *ips)
{
  unsigned long int dots = (unsigned long int)40;
  unsigned long int shown = (unsigned long int)0;
  unsigned long int should_show = (unsigned long int)0;
  if(!(dns_requests_made == 0ul))
  {
    while(!(dns_requests_pending == 0ul))
    {
      if(!(debug == 0))
        fprintf(stderr, "%s: DNS: waiting %lu DNS resolutions to finish...\n", PROG, dns_requests_pending);

      else
        if(!(dns_progress == 0))
        {
          should_show = (dots * dns_requests_finished) / dns_requests_made;
          for( ; !(shown >= should_show); shown = shown + 1ul)
            if(shown % 10ul == 0ul)
              fprintf(stderr, "%lu%%", (shown * (unsigned long int)100) / dots);

            else
              fprintf(stderr, ".");
        }

      dns_process_replies(ips);
      if(!(dns_requests_pending == 0ul))
      {
        dns_signal_threats();
        sleep((unsigned int)1);
      }

    }
    dns_process_replies(ips);
    if(!(debug == 0))
      fprintf(stderr, "%s: DNS: made %lu DNS requests, failed %lu, retries: %lu, IPs got %lu, threads used %d of %d\n", PROG, dns_requests_made, dns_replies_failed, dns_requests_retries, dns_replies_found, dns_threads, dns_threads_max);

    else
      if(!(dns_progress == 0))
      {
        for( ; dots >= shown; shown = shown + 1ul)
          if(shown % 10ul == 0ul)
            fprintf(stderr, "%lu%%", (shown * (unsigned long int)100) / dots);

          else
            fprintf(stderr, ".");
        fprintf(stderr, "\n");
      }

  }

}

// dns_lock_replies
// file iprange.c line 1265
void dns_lock_replies(void)
{
  pthread_rwlock_wrlock(&dns_replies_rwlock);
}

// dns_lock_requests
// file iprange.c line 1263
void dns_lock_requests(void)
{
  pthread_rwlock_wrlock(&dns_requests_rwlock);
}

// dns_process_replies
// file iprange.c line 1532
static void dns_process_replies(struct ipset *ips)
{
  if(!(dns_replies == ((struct dnsrep *)NULL)))
  {
    dns_lock_replies();
    while(!(dns_replies == ((struct dnsrep *)NULL)))
    {
      struct dnsrep *p;
      ipset_add(ips, dns_replies->ip, dns_replies->ip);
      p = dns_replies->next;
      free((void *)dns_replies);
      dns_replies = p;
    }
    dns_unlock_replies();
  }

}

// dns_request
// file iprange.c line 1582
static void dns_request(struct ipset *ips, char *hostname)
{
  struct dnsreq *d;
  dns_process_replies(ips);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(hostname);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct dnsreq) /*16ul*/  + return_value_strlen_1 + (unsigned long int)1);
  d = (struct dnsreq *)return_value_malloc_2;
  if(!(d == ((struct dnsreq *)NULL)))
  {
    strcpy(d->hostname, hostname);
    d->tries = (char)20;
    dns_request_add(d);
  }

  else
  {

  cleanup:
    ;
    fprintf(stderr, "%s: out of memory, while trying to resolv '%s'\n", PROG, hostname);
  }
}

// dns_request_add
// file iprange.c line 1286
static void dns_request_add(struct dnsreq *d)
{
  unsigned long int pending;
  dns_lock_requests();
  d->next = dns_requests;
  dns_requests = d;
  dns_requests_pending = dns_requests_pending + 1ul;
  dns_requests_made = dns_requests_made + 1ul;
  pending = dns_requests_pending;
  dns_unlock_requests();
  signed int return_value_pthread_detach_1;
  if(!(dns_threads >= dns_threads_max) && !((unsigned long int)dns_threads >= pending))
  {
    unsigned long int thread;
    if(!(debug == 0))
      fprintf(stderr, "%s: Creating new DNS thread\n", PROG);

    signed int return_value_pthread_create_2;
    return_value_pthread_create_2=pthread_create(&thread, (const union pthread_attr_t *)(void *)0, dns_thread_resolve, (void *)0);
    if(!(return_value_pthread_create_2 == 0))
    {
      fprintf(stderr, "%s: Cannot create DNS thread.\n", PROG);
      goto __CPROVER_DUMP_L5;
    }

    else
    {
      return_value_pthread_detach_1=pthread_detach(thread);
      if(!(return_value_pthread_detach_1 == 0))
      {
        fprintf(stderr, "%s: Cannot detach DNS thread.\n", PROG);
        goto __CPROVER_DUMP_L5;
      }

    }
    dns_threads = dns_threads + 1;
  }

  dns_signal_threats();

__CPROVER_DUMP_L5:
  ;
}

// dns_request_done
// file iprange.c line 1330
static void dns_request_done(struct dnsreq *d, signed int added)
{
  dns_lock_requests();
  dns_requests_pending = dns_requests_pending - 1ul;
  dns_requests_finished = dns_requests_finished + 1ul;
  if(added == 0)
    dns_replies_failed = dns_replies_failed + 1ul;

  else
    dns_replies_found = dns_replies_found + (unsigned long int)added;
  dns_unlock_requests();
  free((void *)d);
}

// dns_request_failed
// file iprange.c line 1353
static void dns_request_failed(struct dnsreq *d, signed int added, signed int gai_error)
{
  const char *return_value_gai_strerror_1;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  const char *return_value_gai_strerror_4;
  if(!(gai_error == -3))
  {
    if(gai_error == -11)
      goto __CPROVER_DUMP_L4;

    if(gai_error == -10 || gai_error == -8 || gai_error == -7 || gai_error == -1)
      goto __CPROVER_DUMP_L5;

    if(gai_error == -6 || gai_error == -4 || gai_error == -2)
      goto __CPROVER_DUMP_L6;

  }

  else
  {
    if((signed int)d->tries >= 1)
    {
      if(dns_silent == 0)
      {
        return_value_gai_strerror_1=gai_strerror(gai_error);
        fprintf(stderr, "%s: DNS: '%s' will be retried: %s\n", PROG, (const void *)d->hostname, return_value_gai_strerror_1);
      }

      d->tries = d->tries - 1;
      dns_lock_requests();
      d->next = dns_requests;
      dns_requests = d;
      dns_requests_retries = dns_requests_retries + 1ul;
      dns_replies_found = dns_replies_found + (unsigned long int)added;
      dns_unlock_requests();
      goto __CPROVER_DUMP_L8;
    }

    dns_request_done(d, added);
    goto __CPROVER_DUMP_L8;

  __CPROVER_DUMP_L4:
    ;
    return_value___errno_location_2=__errno_location();
    return_value_strerror_3=strerror(*return_value___errno_location_2);
    fprintf(stderr, "%s: DNS: '%s' system error: %s\n", PROG, (const void *)d->hostname, return_value_strerror_3);
    dns_request_done(d, added);
    goto __CPROVER_DUMP_L8;

  __CPROVER_DUMP_L5:
    ;
    return_value_gai_strerror_4=gai_strerror(gai_error);
    fprintf(stderr, "%s: DNS: '%s' error: %s\n", PROG, (const void *)d->hostname, return_value_gai_strerror_4);
    dns_request_done(d, added);
    goto __CPROVER_DUMP_L8;
  }

__CPROVER_DUMP_L6:
  ;
  const char *return_value_gai_strerror_5;
  if(dns_silent == 0)
  {
    return_value_gai_strerror_5=gai_strerror(gai_error);
    fprintf(stderr, "%s: DNS: '%s' failed permanently: %s\n", PROG, (const void *)d->hostname, return_value_gai_strerror_5);
  }

  dns_request_done(d, added);
  goto __CPROVER_DUMP_L8;

__CPROVER_DUMP_L8:
  ;
}

// dns_request_get
// file iprange.c line 1412
static struct dnsreq * dns_request_get(void)
{
  struct dnsreq *ret = (struct dnsreq *)(void *)0;
  while(ret == ((struct dnsreq *)NULL))
  {
    if(!(dns_requests == ((struct dnsreq *)NULL)))
    {
      dns_lock_requests();
      if(!(dns_requests == ((struct dnsreq *)NULL)))
      {
        ret = dns_requests;
        dns_requests = dns_requests->next;
        ret->next = (struct dnsreq *)(void *)0;
      }

      dns_unlock_requests();
      if(!(ret == ((struct dnsreq *)NULL)))
        return ret;

    }

    pthread_mutex_lock(&dns_mut);
    while(dns_requests == ((struct dnsreq *)NULL))
      pthread_cond_wait(&dns_cond, &dns_mut);
    pthread_mutex_unlock(&dns_mut);
  }
  return ret;
}

// dns_signal_threats
// file iprange.c line 1271
static void dns_signal_threats(void)
{
  pthread_mutex_lock(&dns_mut);
  pthread_cond_signal(&dns_cond);
  pthread_mutex_unlock(&dns_mut);
}

// dns_thread_resolve
// file iprange.c line 1450
static void * dns_thread_resolve(void *ptr)
{
  struct dnsreq *d;
  char *return_value_ip2str_4;
  do
  {
    d=dns_request_get();
    if(d == ((struct dnsreq *)NULL))
      break;

    signed int added = 0;
    signed int r;
    struct addrinfo *result;
    struct addrinfo *rp;
    struct addrinfo hints;
    hints.ai_family = 2;
    hints.ai_socktype = 2;
    hints.ai_flags = 0;
    hints.ai_protocol = 0;
    r=getaddrinfo(d->hostname, "80", &hints, &result);
    if(!(r == 0))
      dns_request_failed(d, 0, r);

    else
    {
      rp = result;
      for( ; !(rp == ((struct addrinfo *)NULL)); rp = rp->ai_next)
      {
        char host[256l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        struct network_addr net;
        signed int err = 0;
        struct dnsrep *p;
        r=getnameinfo(rp->ai_addr, rp->ai_addrlen, host, (unsigned int)sizeof(char [256l]) /*256ul*/ , (char *)(void *)0, (unsigned int)0, 1);
        if(!(r == 0))
        {
          const char *return_value_gai_strerror_1;
          return_value_gai_strerror_1=gai_strerror(r);
          fprintf(stderr, "%s: DNS: '%s' failed to get IP string: %s\n", PROG, (const void *)d->hostname, return_value_gai_strerror_1);
          goto __CPROVER_DUMP_L8;
        }

        net=str_to_netaddr(host, &err);
        if(!(err == 0))
        {
          const char *return_value_gai_strerror_2;
          return_value_gai_strerror_2=gai_strerror(r);
          fprintf(stderr, "%s: DNS: '%s' cannot parse the IP '%s': %s\n", PROG, (const void *)d->hostname, (const void *)host, return_value_gai_strerror_2);
          goto __CPROVER_DUMP_L8;
        }

        void *return_value_malloc_3;
        return_value_malloc_3=malloc(sizeof(struct dnsrep) /*16ul*/ );
        p = (struct dnsrep *)return_value_malloc_3;
        if(p == ((struct dnsrep *)NULL))
          fprintf(stderr, "%s: DNS: out of memory while resolving host '%s'\n", PROG, (const void *)d->hostname);

        else
        {
          if(!(debug == 0))
          {
            return_value_ip2str_4=ip2str(net.addr);
            fprintf(stderr, "%s: DNS: '%s' = %s\n", PROG, (const void *)d->hostname, return_value_ip2str_4);
          }

          p->ip = net.addr;
          dns_lock_replies();
          p->next = dns_replies;
          dns_replies = p;
          added = added + 1;
          dns_unlock_replies();
        }

      __CPROVER_DUMP_L8:
        ;
      }
      freeaddrinfo(result);
      dns_request_done(d, added);
    }
  }
  while((_Bool)1);
  return (void *)0;
}

// dns_unlock_replies
// file iprange.c line 1266
void dns_unlock_replies(void)
{
  pthread_rwlock_unlock(&dns_replies_rwlock);
}

// dns_unlock_requests
// file iprange.c line 1264
void dns_unlock_requests(void)
{
  pthread_rwlock_unlock(&dns_requests_rwlock);
}

// ip2str
// file iprange.c line 130
static inline char * ip2str(unsigned int IP)
{
  signed int i;
  signed int k = 0;
  char c0;
  char c1;
  i = 0;
  signed int tmp_post_1;
  signed int tmp_post_2;
  signed int tmp_post_3;
  static char buf[10l];
  for( ; !(i >= 4); i = i + 1)
  {
    c0 = (char)(((IP & (unsigned int)(0xff << (3 - i) * 8)) >> (3 - i) * 8) / (unsigned int)100 + (unsigned int)0x30);
    if(!((signed int)c0 == 48))
    {
      tmp_post_1 = k;
      k = k + 1;
      buf[(signed long int)tmp_post_1] = c0;
    }

    c1 = (char)((((IP & (unsigned int)(0xff << (3 - i) * 8)) >> (3 - i) * 8) % (unsigned int)100) / (unsigned int)10 + (unsigned int)0x30);
    if(!((signed int)c0 == 48) || !((signed int)c1 == 48))
    {
      tmp_post_2 = k;
      k = k + 1;
      buf[(signed long int)tmp_post_2] = c1;
    }

    buf[(signed long int)k] = (char)(((IP & (unsigned int)(0xff << (3 - i) * 8)) >> (3 - i) * 8) % (unsigned int)10 + (unsigned int)0x30);
    k = k + 1;
    if(!(i >= 3))
    {
      tmp_post_3 = k;
      k = k + 1;
      buf[(signed long int)tmp_post_3] = (char)46;
    }

  }
  buf[(signed long int)k] = (char)0;
  return buf;
}

// ipset_add
// file iprange.c line 542
static inline void ipset_add(struct ipset *ips, unsigned int from, unsigned int to)
{
  ipset_expand(ips, (unsigned long int)1);
  (ips->netaddrs + (signed long int)ips->entries)->addr = from;
  (ips->netaddrs + (signed long int)ips->entries)->broadcast = to;
  ipset_added_entry(ips);
}

// ipset_add_ipstr
// file iprange.c line 523
static inline signed int ipset_add_ipstr(struct ipset *ips, char *ipstr)
{
  signed int err = 0;
  ipset_expand(ips, (unsigned long int)1);
  ips->netaddrs[(signed long int)ips->entries]=str_to_netaddr(ipstr, &err);
  if(err == 0)
    ipset_added_entry(ips);

  return (signed int)!(err != 0);
}

// ipset_added_entry
// file iprange.c line 477
static inline void ipset_added_entry(struct ipset *ips)
{
  unsigned long int entries = ips->entries;
  ips->lines = ips->lines + 1ul;
  ips->unique_ips = ips->unique_ips + (unsigned long int)(((ips->netaddrs + (signed long int)entries)->broadcast - (ips->netaddrs + (signed long int)entries)->addr) + (unsigned int)1);
  if(entries >= 1ul && !((1u & ips->flags) == 0u))
  {
    if((ips->netaddrs + (signed long int)entries)->addr == 1u + (ips->netaddrs + -1l + (signed long int)entries)->broadcast)
    {
      (ips->netaddrs + (signed long int)(entries - (unsigned long int)1))->broadcast = (ips->netaddrs + (signed long int)entries)->broadcast;
      goto __CPROVER_DUMP_L4;
    }

    if(!((ips->netaddrs + -1l + (signed long int)entries)->broadcast >= (ips->netaddrs + (signed long int)entries)->addr))
    {
      ips->entries = ips->entries + 1ul;
      goto __CPROVER_DUMP_L4;
    }

    ips->flags = ips->flags ^ (unsigned int)0x00000001;
    if(!(debug == 0))
    {
      unsigned int new_from = (ips->netaddrs + (signed long int)ips->entries)->addr;
      unsigned int new_to = (ips->netaddrs + (signed long int)ips->entries)->broadcast;
      unsigned int last_from = (ips->netaddrs + (signed long int)(ips->entries - (unsigned long int)1))->addr;
      unsigned int last_to = (ips->netaddrs + (signed long int)(ips->entries - (unsigned long int)1))->broadcast;
      char *return_value_ip2str_1;
      return_value_ip2str_1=ip2str(last_from);
      fprintf(stderr, "%s: NON-OPTIMIZED %s at line %lu, entry %lu, last was %s (%u) - ", PROG, (const void *)ips->filename, ips->lines, ips->entries, return_value_ip2str_1, last_from);
      char *return_value_ip2str_2;
      return_value_ip2str_2=ip2str(last_to);
      fprintf(stderr, "%s (%u), new is ", return_value_ip2str_2, last_to);
      char *return_value_ip2str_3;
      return_value_ip2str_3=ip2str(new_from);
      fprintf(stderr, "%s (%u) - ", return_value_ip2str_3, new_from);
      char *return_value_ip2str_4;
      return_value_ip2str_4=ip2str(new_to);
      fprintf(stderr, "%s (%u)\n", return_value_ip2str_4, new_to);
    }

  }

  ips->entries = ips->entries + 1ul;

__CPROVER_DUMP_L4:
  ;
}

// ipset_common
// file iprange.c line 785
static inline struct ipset * ipset_common(struct ipset *ips1, struct ipset *ips2)
{
  struct ipset *ips;
  unsigned long int n1;
  unsigned long int n2;
  unsigned long int i1 = (unsigned long int)0;
  unsigned long int i2 = (unsigned long int)0;
  unsigned int lo1;
  unsigned int lo2;
  unsigned int hi1;
  unsigned int hi2;
  unsigned int lo;
  unsigned int hi;
  if((1u & ips1->flags) == 0u)
    ipset_optimize(ips1);

  if((1u & ips2->flags) == 0u)
    ipset_optimize(ips2);

  if(!(debug == 0))
    fprintf(stderr, "%s: Finding common IPs in %s and %s\n", PROG, (const void *)ips1->filename, (const void *)ips2->filename);

  ips=ipset_create("common", 0);
  if(ips == ((struct ipset *)NULL))
    return (struct ipset *)(void *)0;

  else
  {
    n1 = ips1->entries;
    n2 = ips2->entries;
    lo1 = (ips1->netaddrs + (signed long int)0)->addr;
    lo2 = (ips2->netaddrs + (signed long int)0)->addr;
    hi1 = (ips1->netaddrs + (signed long int)0)->broadcast;
    hi2 = (ips2->netaddrs + (signed long int)0)->broadcast;
    while(!(i1 >= n1) && !(i2 >= n2))
      if(!(hi2 >= lo1))
      {
        i2 = i2 + 1ul;
        if(!(i2 >= n2))
        {
          lo2 = (ips2->netaddrs + (signed long int)i2)->addr;
          hi2 = (ips2->netaddrs + (signed long int)i2)->broadcast;
        }

      }

      else
        if(!(hi1 >= lo2))
        {
          i1 = i1 + 1ul;
          if(!(i1 >= n1))
          {
            lo1 = (ips1->netaddrs + (signed long int)i1)->addr;
            hi1 = (ips1->netaddrs + (signed long int)i1)->broadcast;
          }

        }

        else
        {
          if(!(lo2 >= lo1))
            lo = lo1;

          else
            lo = lo2;
          if(!(hi1 >= hi2))
          {
            hi = hi1;
            i1 = i1 + 1ul;
            if(!(i1 >= n1))
            {
              lo1 = (ips1->netaddrs + (signed long int)i1)->addr;
              hi1 = (ips1->netaddrs + (signed long int)i1)->broadcast;
            }

          }

          else
          {
            hi = hi2;
            i2 = i2 + 1ul;
            if(!(i2 >= n2))
            {
              lo2 = (ips2->netaddrs + (signed long int)i2)->addr;
              hi2 = (ips2->netaddrs + (signed long int)i2)->broadcast;
            }

          }
          ipset_add(ips, lo, hi);
        }
    ips->lines = ips1->lines + ips2->lines;
    ips->flags = ips->flags | (unsigned int)0x00000001;
    return ips;
  }
}

// ipset_create
// file iprange.c line 384
static inline struct ipset * ipset_create(const char *filename, signed int entries)
{
  struct ipset *ips;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct ipset) /*4168ul*/ );
  ips = (struct ipset *)return_value_malloc_1;
  _Bool tmp_if_expr_3;
  if(ips == ((struct ipset *)NULL))
    return (struct ipset *)(void *)0;

  else
  {
    if(!(entries >= 1024))
      entries = 1024;

    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)entries * sizeof(struct network_addr) /*8ul*/ );
    ips->netaddrs = (struct network_addr *)return_value_malloc_2;
    if(ips->netaddrs == ((struct network_addr *)NULL))
    {
      free((void *)ips);
      return (struct ipset *)(void *)0;
    }

    else
    {
      ips->lines = (unsigned long int)0;
      ips->entries = (unsigned long int)0;
      ips->entries_max = (unsigned long int)entries;
      ips->unique_ips = (unsigned long int)0;
      ips->next = (struct ipset *)(void *)0;
      ips->prev = (struct ipset *)(void *)0;
      ips->flags = (unsigned int)0;
      if(!(filename == ((const char *)NULL)))
        tmp_if_expr_3 = *filename != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      strncpy(ips->filename, tmp_if_expr_3 ? filename : "stdin", (unsigned long int)4096);
      ips->filename[(signed long int)4096] = (char)0;
      return ips;
    }
  }
}

// ipset_diff
// file iprange.c line 664
static inline struct ipset * ipset_diff(struct ipset *ips1, struct ipset *ips2)
{
  struct ipset *ips;
  unsigned long int n1;
  unsigned long int n2;
  unsigned long int i1 = (unsigned long int)0;
  unsigned long int i2 = (unsigned long int)0;
  unsigned int lo1;
  unsigned int lo2;
  unsigned int hi1;
  unsigned int hi2;
  if((1u & ips1->flags) == 0u)
    ipset_optimize(ips1);

  if((1u & ips2->flags) == 0u)
    ipset_optimize(ips2);

  if(!(debug == 0))
    fprintf(stderr, "%s: Finding diff IPs in %s and %s\n", PROG, (const void *)ips1->filename, (const void *)ips2->filename);

  ips=ipset_create("diff", 0);
  if(ips == ((struct ipset *)NULL))
    return (struct ipset *)(void *)0;

  else
  {
    n1 = ips1->entries;
    n2 = ips2->entries;
    lo1 = (ips1->netaddrs + (signed long int)0)->addr;
    lo2 = (ips2->netaddrs + (signed long int)0)->addr;
    hi1 = (ips1->netaddrs + (signed long int)0)->broadcast;
    hi2 = (ips2->netaddrs + (signed long int)0)->broadcast;
    while(!(i1 >= n1) && !(i2 >= n2))
      if(!(hi2 >= lo1))
      {
        ipset_add(ips, lo2, hi2);
        i2 = i2 + 1ul;
        if(!(i2 >= n2))
        {
          lo2 = (ips2->netaddrs + (signed long int)i2)->addr;
          hi2 = (ips2->netaddrs + (signed long int)i2)->broadcast;
        }

      }

      else
        if(!(hi1 >= lo2))
        {
          ipset_add(ips, lo1, hi1);
          i1 = i1 + 1ul;
          if(!(i1 >= n1))
          {
            lo1 = (ips1->netaddrs + (signed long int)i1)->addr;
            hi1 = (ips1->netaddrs + (signed long int)i1)->broadcast;
          }

        }

        else
        {
          if(!(lo2 >= lo1))
            ipset_add(ips, lo2, lo1 - (unsigned int)1);

          else
            if(!(lo1 >= lo2))
              ipset_add(ips, lo1, lo2 - (unsigned int)1);

          if(!(hi2 >= hi1))
          {
            lo1 = hi2 + (unsigned int)1;
            i2 = i2 + 1ul;
            if(!(i2 >= n2))
            {
              lo2 = (ips2->netaddrs + (signed long int)i2)->addr;
              hi2 = (ips2->netaddrs + (signed long int)i2)->broadcast;
            }

            continue;
          }

          else
            if(!(hi1 >= hi2))
            {
              lo2 = hi1 + (unsigned int)1;
              i1 = i1 + 1ul;
              if(!(i1 >= n1))
              {
                lo1 = (ips1->netaddrs + (signed long int)i1)->addr;
                hi1 = (ips1->netaddrs + (signed long int)i1)->broadcast;
              }

              continue;
            }

            else
            {
              i1 = i1 + 1ul;
              if(!(i1 >= n1))
              {
                lo1 = (ips1->netaddrs + (signed long int)i1)->addr;
                hi1 = (ips1->netaddrs + (signed long int)i1)->broadcast;
              }

              i2 = i2 + 1ul;
              if(!(i2 >= n2))
              {
                lo2 = (ips2->netaddrs + (signed long int)i2)->addr;
                hi2 = (ips2->netaddrs + (signed long int)i2)->broadcast;
              }

            }
        }
    while(!(i1 >= n1))
    {
      ipset_add(ips, lo1, hi1);
      i1 = i1 + 1ul;
      if(!(i1 >= n1))
      {
        lo1 = (ips1->netaddrs + (signed long int)i1)->addr;
        hi1 = (ips1->netaddrs + (signed long int)i1)->broadcast;
      }

    }
    while(!(i2 >= n2))
    {
      ipset_add(ips, lo2, hi2);
      i2 = i2 + 1ul;
      if(!(i2 >= n2))
      {
        lo2 = (ips2->netaddrs + (signed long int)i2)->addr;
        hi2 = (ips2->netaddrs + (signed long int)i2)->broadcast;
      }

    }
    ips->lines = ips1->lines + ips2->lines;
    ips->flags = ips->flags | (unsigned int)0x00000001;
    return ips;
  }
}

// ipset_exclude
// file iprange.c line 869
static inline struct ipset * ipset_exclude(struct ipset *ips1, struct ipset *ips2)
{
  struct ipset *ips;
  unsigned long int n1;
  unsigned long int n2;
  unsigned long int i1 = (unsigned long int)0;
  unsigned long int i2 = (unsigned long int)0;
  unsigned int lo1;
  unsigned int lo2;
  unsigned int hi1;
  unsigned int hi2;
  if((1u & ips1->flags) == 0u)
    ipset_optimize(ips1);

  if((1u & ips2->flags) == 0u)
    ipset_optimize(ips2);

  if(!(debug == 0))
    fprintf(stderr, "%s: Removing IPs in %s from %s\n", PROG, (const void *)ips2->filename, (const void *)ips1->filename);

  ips=ipset_create(ips1->filename, 0);
  if(ips == ((struct ipset *)NULL))
    return (struct ipset *)(void *)0;

  else
  {
    n1 = ips1->entries;
    n2 = ips2->entries;
    lo1 = (ips1->netaddrs + (signed long int)0)->addr;
    lo2 = (ips2->netaddrs + (signed long int)0)->addr;
    hi1 = (ips1->netaddrs + (signed long int)0)->broadcast;
    hi2 = (ips2->netaddrs + (signed long int)0)->broadcast;
    while(!(i1 >= n1) && !(i2 >= n2))
      if(!(hi2 >= lo1))
      {
        i2 = i2 + 1ul;
        if(!(i2 >= n2))
        {
          lo2 = (ips2->netaddrs + (signed long int)i2)->addr;
          hi2 = (ips2->netaddrs + (signed long int)i2)->broadcast;
        }

      }

      else
        if(!(hi1 >= lo2))
        {
          ipset_add(ips, lo1, hi1);
          i1 = i1 + 1ul;
          if(!(i1 >= n1))
          {
            lo1 = (ips1->netaddrs + (signed long int)i1)->addr;
            hi1 = (ips1->netaddrs + (signed long int)i1)->broadcast;
          }

        }

        else
        {
          if(!(lo1 >= lo2))
          {
            ipset_add(ips, lo1, lo2 - (unsigned int)1);
            lo1 = lo2;
          }

          if(hi1 == hi2)
          {
            i1 = i1 + 1ul;
            if(!(i1 >= n1))
            {
              lo1 = (ips1->netaddrs + (signed long int)i1)->addr;
              hi1 = (ips1->netaddrs + (signed long int)i1)->broadcast;
            }

            i2 = i2 + 1ul;
            if(!(i2 >= n2))
            {
              lo2 = (ips2->netaddrs + (signed long int)i2)->addr;
              hi2 = (ips2->netaddrs + (signed long int)i2)->broadcast;
            }

          }

          else
            if(!(hi1 >= hi2))
            {
              i1 = i1 + 1ul;
              if(!(i1 >= n1))
              {
                lo1 = (ips1->netaddrs + (signed long int)i1)->addr;
                hi1 = (ips1->netaddrs + (signed long int)i1)->broadcast;
              }

            }

            else
              if(!(hi2 >= hi1))
              {
                lo1 = hi2 + (unsigned int)1;
                i2 = i2 + 1ul;
                if(!(i2 >= n2))
                {
                  lo2 = (ips2->netaddrs + (signed long int)i2)->addr;
                  hi2 = (ips2->netaddrs + (signed long int)i2)->broadcast;
                }

              }

        }
    if(!(i1 >= n1))
    {
      ipset_add(ips, lo1, hi1);
      i1 = i1 + 1ul;
      for( ; !(i1 >= n1); i1 = i1 + 1ul)
        ipset_add(ips, (ips1->netaddrs + (signed long int)i1)->addr, (ips1->netaddrs + (signed long int)i1)->broadcast);
    }

    ips->lines = ips1->lines + ips2->lines;
    ips->flags = ips->flags | (unsigned int)0x00000001;
    return ips;
  }
}

// ipset_expand
// file iprange.c line 460
static inline void ipset_expand(struct ipset *ips, unsigned long int free_entries_needed)
{
  if(free_entries_needed == 0ul)
    free_entries_needed = (unsigned long int)1;

  _Bool tmp_if_expr_2;
  if(!(ips == ((struct ipset *)NULL)))
    tmp_if_expr_2 = ips->entries_max - ips->entries < free_entries_needed ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
  {
    struct network_addr *n;
    ips->entries_max = ips->entries_max + (free_entries_needed < (unsigned long int)1024 ? (unsigned long int)1024 : free_entries_needed);
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)ips->netaddrs, ips->entries_max * sizeof(struct network_addr) /*8ul*/ );
    n = (struct network_addr *)return_value_realloc_1;
    if(n == ((struct network_addr *)NULL))
    {
      fprintf(stderr, "%s: Cannot re-allocate memory (%ld bytes)\n", PROG, ips->entries_max * sizeof(struct network_addr) /*8ul*/ );
      exit(1);
    }

    ips->netaddrs = n;
  }

}

// ipset_free
// file iprange.c line 421
static inline void ipset_free(struct ipset *ips)
{
  if(!(ips->next == ((struct ipset *)NULL)))
    ips->next->prev = ips->prev;

  if(!(ips->prev == ((struct ipset *)NULL)))
    ips->prev->next = ips->next;

  free((void *)ips->netaddrs);
  free((void *)ips);
}

// ipset_load
// file iprange.c line 1666
static struct ipset * ipset_load(const char *filename)
{
  struct _IO_FILE *fp = stdin;
  signed int lineid = 0;
  char line[1025l];
  char ipstr[256l];
  char ipstr2[256l];
  struct ipset *ips;
  _Bool tmp_if_expr_1;
  if(!(filename == ((const char *)NULL)))
    tmp_if_expr_1 = *filename != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  ips=ipset_create(tmp_if_expr_1 ? filename : "stdin", 0);
  _Bool tmp_if_expr_4;
  signed int return_value_ipset_add_ipstr_11;
  _Bool tmp_if_expr_9;
  char *return_value_fgets_8;
  if(ips == ((struct ipset *)NULL))
    return (struct ipset *)(void *)0;

  else
  {
    if(!(filename == ((const char *)NULL)))
      tmp_if_expr_4 = *filename != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
    {
      fp=fopen(filename, "r");
      if(fp == ((struct _IO_FILE *)NULL))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        fprintf(stderr, "%s: %s - %s\n", PROG, filename, return_value_strerror_3);
        return (struct ipset *)(void *)0;
      }

    }

    if(!(debug == 0))
      fprintf(stderr, "%s: Loading from %s\n", PROG, (const void *)ips->filename);

    ips->flags = ips->flags | (unsigned int)0x00000001;
    char *return_value_fgets_5;
    return_value_fgets_5=fgets(line, 1024, fp);
    if(return_value_fgets_5 == ((char *)NULL))
      return ips;

    else
    {
      signed int return_value_strcmp_7;
      return_value_strcmp_7=strcmp(line, "iprange binary format v1.0\n");
      if(return_value_strcmp_7 == 0)
      {
        signed int return_value_ipset_load_binary_v10_6;
        return_value_ipset_load_binary_v10_6=ipset_load_binary_v10(fp, ips, 1);
        if(!(return_value_ipset_load_binary_v10_6 == 0))
        {
          fprintf(stderr, "%s: Cannot fast load %s\n", PROG, filename);
          ipset_free(ips);
          ips = (struct ipset *)(void *)0;
        }

        if(!(fp == stdin))
          fclose(fp);

        if(!(debug == 0))
        {
          if(!(ips == ((struct ipset *)NULL)))
            fprintf(stderr, "%s: Binary loaded %s %s\n", PROG, (ips->flags & (unsigned int)0x00000001) != 0u ? "optimized" : "non-optimized", (const void *)ips->filename);

        }

        return ips;
      }

      do
      {
        lineid = lineid + 1;
        signed int return_value_parse_line_10;
        return_value_parse_line_10=parse_line(line, lineid, ipstr, ipstr2, 255);
        if(!(return_value_parse_line_10 == -1))
        {
          if(return_value_parse_line_10 == 0)
            goto __CPROVER_DUMP_L14;

          if(return_value_parse_line_10 == 1)
            goto __CPROVER_DUMP_L15;

          if(return_value_parse_line_10 == 2)
            goto __CPROVER_DUMP_L17;

          if(return_value_parse_line_10 == 3)
            goto __CPROVER_DUMP_L20;

        }

        else
        {
          fprintf(stderr, "%s: Cannot understand line No %d from %s: %s\n", PROG, lineid, (const void *)ips->filename, (const void *)line);
          goto __CPROVER_DUMP_L23;

        __CPROVER_DUMP_L14:
          ;
          goto __CPROVER_DUMP_L23;

        __CPROVER_DUMP_L15:
          ;
          return_value_ipset_add_ipstr_11=ipset_add_ipstr(ips, ipstr);
          if(return_value_ipset_add_ipstr_11 == 0)
            fprintf(stderr, "%s: Cannot understand line No %d from %s: %s\n", PROG, lineid, (const void *)ips->filename, (const void *)line);

          goto __CPROVER_DUMP_L23;

        __CPROVER_DUMP_L17:
          ;
          signed int err = 0;
          unsigned int lo;
          unsigned int hi;
          struct network_addr netaddr1;
          struct network_addr netaddr2;
          netaddr1=str_to_netaddr(ipstr, &err);
          if(err == 0)
            netaddr2=str_to_netaddr(ipstr2, &err);

          if(!(err == 0))
          {
            fprintf(stderr, "%s: Cannot understand line No %d from %s: %s\n", PROG, lineid, (const void *)ips->filename, (const void *)line);
            goto __CPROVER_DUMP_L24;
          }

          lo = netaddr1.addr < netaddr2.addr ? netaddr1.addr : netaddr2.addr;
          hi = netaddr1.broadcast > netaddr2.broadcast ? netaddr1.broadcast : netaddr2.broadcast;
          ipset_add(ips, lo, hi);
          goto __CPROVER_DUMP_L23;

        __CPROVER_DUMP_L20:
          ;
          if(!(debug == 0))
            fprintf(stderr, "%s: DNS resolution for hostname '%s' from line %d of file %s.\n", PROG, (const void *)ipstr, lineid, (const void *)ips->filename);

          dns_request(ips, ipstr);
          goto __CPROVER_DUMP_L23;
        }
        fprintf(stderr, "%s: Cannot understand result code. This is an internal error.\n", PROG);
        exit(1);

      __CPROVER_DUMP_L23:
        ;

      __CPROVER_DUMP_L24:
        ;
        if(!(ips == ((struct ipset *)NULL)))
        {
          return_value_fgets_8=fgets(line, 1024, fp);
          tmp_if_expr_9 = return_value_fgets_8 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_9 = (_Bool)0;
      }
      while(tmp_if_expr_9);
      if(!(fp == stdin))
        fclose(fp);

      dns_done(ips);
      if(ips == ((struct ipset *)NULL))
        return (struct ipset *)(void *)0;

      else
      {
        if(!(debug == 0))
          fprintf(stderr, "%s: Loaded %s %s\n", PROG, (ips->flags & (unsigned int)0x00000001) != 0u ? "optimized" : "non-optimized", (const void *)ips->filename);

        return ips;
      }
    }
  }
}

// ipset_load_binary_v10
// file iprange.c line 1110
static signed int ipset_load_binary_v10(struct _IO_FILE *fp, struct ipset *ips, signed int first_line_missing)
{
  char buffer[1025l];
  char *s;
  unsigned long int entries;
  unsigned long int bytes;
  unsigned long int lines;
  unsigned long int unique_ips;
  unsigned int endian;
  unsigned long int loaded;
  _Bool tmp_if_expr_2;
  signed int return_value_strcmp_1;
  if(first_line_missing == 0)
  {
    s=fgets(buffer, 1024, fp);
    buffer[(signed long int)1024] = (char)0;
    if(s == ((char *)NULL))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      return_value_strcmp_1=strcmp(s, "iprange binary format v1.0\n");
      tmp_if_expr_2 = return_value_strcmp_1 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
    {
      fprintf(stderr, "%s: %s expecting binary header but found '%s'.\n", PROG, (const void *)ips->filename, s != ((char *)NULL) ? s : "");
      return 1;
    }

  }

  s=fgets(buffer, 1024, fp);
  buffer[(signed long int)1024] = (char)0;
  _Bool tmp_if_expr_6;
  signed int return_value_strcmp_3;
  _Bool tmp_if_expr_5;
  signed int return_value_strcmp_4;
  if(s == ((char *)NULL))
    tmp_if_expr_6 = (_Bool)1;

  else
  {
    return_value_strcmp_3=strcmp(s, "optimized\n");
    if(!(return_value_strcmp_3 == 0))
    {
      return_value_strcmp_4=strcmp(s, "non-optimized\n");
      tmp_if_expr_5 = return_value_strcmp_4 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_5 = (_Bool)0;
    tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  signed int return_value_strncmp_8;
  _Bool tmp_if_expr_13;
  signed int return_value_strncmp_12;
  _Bool tmp_if_expr_15;
  signed int return_value_strncmp_14;
  _Bool tmp_if_expr_17;
  signed int return_value_strncmp_16;
  _Bool tmp_if_expr_19;
  signed int return_value_strncmp_18;
  if(tmp_if_expr_6)
  {
    fprintf(stderr, "%s: %s 2nd line should be the optimized flag, but found '%s'.\n", PROG, (const void *)ips->filename, s != ((char *)NULL) ? s : "");
    return 1;
  }

  else
  {
    signed int return_value_strcmp_7;
    return_value_strcmp_7=strcmp(s, "optimized\n");
    if(return_value_strcmp_7 == 0)
      ips->flags = ips->flags | (unsigned int)0x00000001;

    else
      if(!((1u & ips->flags) == 0u))
        ips->flags = ips->flags ^ (unsigned int)0x00000001;

    s=fgets(buffer, 1024, fp);
    buffer[(signed long int)1024] = (char)0;
    if(s == ((char *)NULL))
      tmp_if_expr_9 = (_Bool)1;

    else
    {
      return_value_strncmp_8=strncmp(s, "record size ", (unsigned long int)12);
      tmp_if_expr_9 = return_value_strncmp_8 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_9)
    {
      fprintf(stderr, "%s: %s 3rd line should be the record size, but found '%s'.\n", PROG, (const void *)ips->filename, s != ((char *)NULL) ? s : "");
      return 1;
    }

    else
    {
      signed long int return_value_atol_11;
      return_value_atol_11=atol(&s[(signed long int)12]);
      if(!((unsigned long int)return_value_atol_11 == sizeof(struct network_addr) /*8ul*/ ))
      {
        signed long int return_value_atol_10;
        return_value_atol_10=atol(&s[(signed long int)12]);
        fprintf(stderr, "%s: %s: invalid record size %lu (expected %lu)\n", PROG, (const void *)ips->filename, return_value_atol_10, (unsigned long int)sizeof(struct network_addr) /*8ul*/ );
        return 1;
      }

      s=fgets(buffer, 1024, fp);
      buffer[(signed long int)1024] = (char)0;
      if(s == ((char *)NULL))
        tmp_if_expr_13 = (_Bool)1;

      else
      {
        return_value_strncmp_12=strncmp(s, "records ", (unsigned long int)8);
        tmp_if_expr_13 = return_value_strncmp_12 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_13)
      {
        fprintf(stderr, "%s: %s 4th line should be the number of records, but found '%s'.\n", PROG, (const void *)ips->filename, s != ((char *)NULL) ? s : "");
        return 1;
      }

      else
      {
        entries=strtoul(&s[(signed long int)8], (char ** restrict )(void *)0, 10);
        s=fgets(buffer, 1024, fp);
        buffer[(signed long int)1024] = (char)0;
        if(s == ((char *)NULL))
          tmp_if_expr_15 = (_Bool)1;

        else
        {
          return_value_strncmp_14=strncmp(s, "bytes ", (unsigned long int)6);
          tmp_if_expr_15 = return_value_strncmp_14 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_15)
        {
          fprintf(stderr, "%s: %s 5th line should be the number of bytes, but found '%s'.\n", PROG, (const void *)ips->filename, s != ((char *)NULL) ? s : "");
          return 1;
        }

        else
        {
          bytes=strtoul(&s[(signed long int)6], (char ** restrict )(void *)0, 10);
          s=fgets(buffer, 1024, fp);
          buffer[(signed long int)1024] = (char)0;
          if(s == ((char *)NULL))
            tmp_if_expr_17 = (_Bool)1;

          else
          {
            return_value_strncmp_16=strncmp(s, "lines ", (unsigned long int)6);
            tmp_if_expr_17 = return_value_strncmp_16 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_17)
          {
            fprintf(stderr, "%s: %s 6th line should be the number of lines read, but found '%s'.\n", PROG, (const void *)ips->filename, s != ((char *)NULL) ? s : "");
            return 1;
          }

          else
          {
            lines=strtoul(&s[(signed long int)6], (char ** restrict )(void *)0, 10);
            s=fgets(buffer, 1024, fp);
            buffer[(signed long int)1024] = (char)0;
            if(s == ((char *)NULL))
              tmp_if_expr_19 = (_Bool)1;

            else
            {
              return_value_strncmp_18=strncmp(s, "unique ips ", (unsigned long int)11);
              tmp_if_expr_19 = return_value_strncmp_18 != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_19)
            {
              fprintf(stderr, "%s: %s 7th line should be the number of unique IPs, but found '%s'.\n", PROG, (const void *)ips->filename, s != ((char *)NULL) ? s : "");
              return 1;
            }

            else
            {
              unique_ips=strtoul(&s[(signed long int)11], (char ** restrict )(void *)0, 10);
              if(!(bytes == sizeof(struct network_addr) /*8ul*/  * entries + sizeof(unsigned int) /*4ul*/ ))
              {
                fprintf(stderr, "%s: %s invalid number of bytes, found %lu, expected %lu.\n", PROG, (const void *)ips->filename, bytes, sizeof(struct network_addr) /*8ul*/  * entries + sizeof(unsigned int) /*4ul*/ );
                return 1;
              }

              else
              {
                loaded=fread((void *)&endian, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, fp);
                if(!(endian == endianness))
                {
                  fprintf(stderr, "%s: %s: incompatible endianness\n", PROG, (const void *)ips->filename);
                  return 1;
                }

                else
                  if(!(unique_ips >= entries))
                  {
                    fprintf(stderr, "%s: %s: unique IPs (%lu) cannot be less than entries (%lu)\n", PROG, (const void *)ips->filename, unique_ips, entries);
                    return 1;
                  }

                  else
                    if(!(lines >= entries))
                    {
                      fprintf(stderr, "%s: %s: lines (%lu) cannot be less than entries (%lu)\n", PROG, (const void *)ips->filename, lines, entries);
                      return 1;
                    }

                    else
                    {
                      ipset_expand(ips, entries);
                      loaded=fread((void *)&ips->netaddrs[(signed long int)ips->entries], sizeof(struct network_addr) /*8ul*/ , entries, fp);
                      if(!(loaded == entries))
                      {
                        fprintf(stderr, "%s: %s: expected to load %lu entries, loaded %zd\n", PROG, (const void *)ips->filename, entries, loaded);
                        return 1;
                      }

                      else
                      {
                        ips->entries = ips->entries + loaded;
                        ips->lines = ips->lines + lines;
                        ips->unique_ips = ips->unique_ips + unique_ips;
                        return 0;
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

// ipset_merge
// file iprange.c line 1998
static inline void ipset_merge(struct ipset *to, struct ipset *add)
{
  if(!(debug == 0))
    fprintf(stderr, "%s: Merging %s to %s\n", PROG, (const void *)add->filename, (const void *)to->filename);

  ipset_expand(to, add->entries);
  memcpy((void *)&to->netaddrs[(signed long int)to->entries], (const void *)&add->netaddrs[(signed long int)0], add->entries * sizeof(struct network_addr) /*8ul*/ );
  to->entries = to->entries + add->entries;
  to->lines = to->lines + add->lines;
  if(!((1u & to->flags) == 0u))
    to->flags = to->flags ^ (unsigned int)0x00000001;

}

// ipset_optimize
// file iprange.c line 562
static inline void ipset_optimize(struct ipset *ips)
{
  struct network_addr *naddrs;
  signed int i;
  signed int n = (signed int)ips->entries;
  signed int lines = (signed int)ips->lines;
  struct network_addr *oaddrs = ips->netaddrs;
  unsigned int lo;
  unsigned int hi;
  if(!((1u & ips->flags) == 0u))
    fprintf(stderr, "%s: Is already optimized %s\n", PROG, (const void *)ips->filename);

  else
  {
    if(!(debug == 0))
      fprintf(stderr, "%s: Optimizing %s\n", PROG, (const void *)ips->filename);

    qsort((void *)ips->netaddrs, ips->entries, sizeof(struct network_addr) /*8ul*/ , compar_netaddr);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(ips->entries * sizeof(struct network_addr) /*8ul*/ );
    naddrs = (struct network_addr *)return_value_malloc_1;
    if(naddrs == ((struct network_addr *)NULL))
    {
      ipset_free(ips);
      fprintf(stderr, "%s: Cannot allocate memory (%ld bytes)\n", PROG, ips->entries * sizeof(struct network_addr) /*8ul*/ );
      exit(1);
    }

    ips->netaddrs = naddrs;
    ips->entries = (unsigned long int)0;
    ips->unique_ips = (unsigned long int)0;
    ips->lines = (unsigned long int)0;
    if(!(n == 0))
    {
      lo = (oaddrs + (signed long int)0)->addr;
      hi = (oaddrs + (signed long int)0)->broadcast;
      i = 1;
      for( ; !(i >= n); i = i + 1)
        if(!(hi >= (oaddrs + (signed long int)i)->broadcast))
        {
          if(1u + hi >= (oaddrs + (signed long int)i)->addr)
            hi = (oaddrs + (signed long int)i)->broadcast;

          else
          {
            ipset_add(ips, lo, hi);
            lo = (oaddrs + (signed long int)i)->addr;
            hi = (oaddrs + (signed long int)i)->broadcast;
          }
        }

      ipset_add(ips, lo, hi);
      ips->lines = (unsigned long int)lines;
      ips->flags = ips->flags | (unsigned int)0x00000001;
      free((void *)oaddrs);
    }

  }
}

// ipset_optimize_all
// file iprange.c line 647
static inline void ipset_optimize_all(struct ipset *root)
{
  struct ipset *ips = root;
  for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
    ipset_optimize(ips);
}

// ipset_print
// file iprange.c line 1899
static void ipset_print(struct ipset *ips, signed int print)
{
  signed int i;
  signed int n = (signed int)ips->entries;
  unsigned long int total = (unsigned long int)0;
  if((1u & ips->flags) == 0u)
    ipset_optimize(ips);

  if(print == 4)
    ipset_save_binary_v10(ips);

  else
  {
    if(!(debug == 0))
      fprintf(stderr, "%s: Printing %s having %lu entries, %lu unique IPs\n", PROG, (const void *)ips->filename, ips->entries, ips->unique_ips);

    switch(print)
    {
      case 2:
      {
        i = 0;
        for( ; !(i >= 33); i = i + 1)
          prefix_counters[(signed long int)i] = 0;
        n = (signed int)ips->entries;
        i = 0;
        for( ; !(i >= n); i = i + 1)
        {
          signed int return_value_split_range_1;
          return_value_split_range_1=split_range((unsigned int)0, 0, (ips->netaddrs + (signed long int)i)->addr, (ips->netaddrs + (signed long int)i)->broadcast);
          total = total + (unsigned long int)return_value_split_range_1;
        }
        break;
      }
      case 3:
      {
        n = (signed int)ips->entries;
        i = 0;
        for( ; !(i >= n); i = i + 1)
        {
          unsigned int x;
          unsigned int start = (ips->netaddrs + (signed long int)i)->addr;
          unsigned int end = (ips->netaddrs + (signed long int)i)->broadcast;
          if(!(end >= start))
          {
            char *return_value_ip2str_2;
            return_value_ip2str_2=ip2str(start);
            fprintf(stderr, "%s: WARNING: invalid range reversed start=%s", PROG, return_value_ip2str_2);
            char *return_value_ip2str_3;
            return_value_ip2str_3=ip2str(end);
            fprintf(stderr, " end=%s\n", return_value_ip2str_3);
            x = end;
            end = start;
            start = x;
          }

          if(end + -start >= 16777217u)
          {
            char *return_value_ip2str_4;
            return_value_ip2str_4=ip2str(start);
            fprintf(stderr, "%s: too big range eliminated start=%s", PROG, return_value_ip2str_4);
            char *return_value_ip2str_5;
            return_value_ip2str_5=ip2str(end);
            fprintf(stderr, " end=%s gives %lu IPs\n", return_value_ip2str_5, (unsigned long int)(end - start));
            goto __CPROVER_DUMP_L15;
          }

          x = start;
          for( ; end >= x && x >= start; x = x + 1u)
          {
            print_addr_single(x);
            total = total + 1ul;
          }

        __CPROVER_DUMP_L15:
          ;
        }
        break;
      }
      default:
      {
        n = (signed int)ips->entries;
        i = 0;
        for( ; !(i >= n); i = i + 1)
        {
          print_addr_range((ips->netaddrs + (signed long int)i)->addr, (ips->netaddrs + (signed long int)i)->broadcast);
          total = total + 1ul;
        }
      }
    }
    if(!(debug == 0))
    {
      signed int prefixes = 0;
      if(print == 2)
      {
        fprintf(stderr, "\n%lu printed CIDRs, break down by prefix:\n", total);
        total = (unsigned long int)0;
        i = 0;
        for( ; !(i >= 33); i = i + 1)
          if(!(prefix_counters[(signed long int)i] == 0))
          {
            fprintf(stderr, "\t- prefix /%d counts %d entries\n", i, prefix_counters[(signed long int)i]);
            total = total + (unsigned long int)prefix_counters[(signed long int)i];
            prefixes = prefixes + 1;
          }

      }

      else
        if(print == 3)
          prefixes = 1;

      char *units = "";
      if(print == 2)
        units = "CIDRs";

      else
        if(print == 3)
          units = "IPs";

        else
          units = "ranges";
      fprintf(stderr, "\ntotals: %lu lines read, %lu distinct IP ranges found, %d CIDR prefixes, %lu %s printed, %lu unique IPs\n", ips->lines, ips->entries, prefixes, total, units, ips->unique_ips);
    }

  }
}

// ipset_reduce
// file iprange.c line 1788
static void ipset_reduce(struct ipset *ips, signed int acceptable_increase, signed int min_accepted)
{
  signed int i;
  signed int n = (signed int)ips->entries;
  signed int total = 0;
  signed int acceptable;
  signed int iterations = 0;
  signed int initial = 0;
  signed int eliminated = 0;
  if((1u & ips->flags) == 0u)
    ipset_optimize(ips);

  i = 0;
  for( ; !(i >= 33); i = i + 1)
    prefix_counters[(signed long int)i] = 0;
  split_range_disable_printing = 1;
  if(!(debug == 0))
    fprintf(stderr, "\nCounting prefixes in %s\n", (const void *)ips->filename);

  i = 0;
  for( ; !(i >= n); i = i + 1)
    split_range((unsigned int)0, 0, (ips->netaddrs + (signed long int)i)->addr, (ips->netaddrs + (signed long int)i)->broadcast);
  if(!(debug == 0))
    fprintf(stderr, "Break down by prefix:\n");

  total = 0;
  i = 0;
  for( ; !(i >= 33); i = i + 1)
    if(!(prefix_counters[(signed long int)i] == 0))
    {
      if(!(debug == 0))
        fprintf(stderr, "\t- prefix /%d counts %d entries\n", i, prefix_counters[(signed long int)i]);

      total = total + prefix_counters[(signed long int)i];
      initial = initial + 1;
    }

    else
      prefix_enabled[(signed long int)i] = 0;
  if(!(debug == 0))
    fprintf(stderr, "Total %d entries generated\n", total);

  acceptable = (total * acceptable_increase) / 100;
  if(!(acceptable >= min_accepted))
    acceptable = min_accepted;

  if(!(debug == 0))
    fprintf(stderr, "Acceptable is to reach %d entries by reducing prefixes\n", acceptable);

  _Bool tmp_if_expr_1;
  while(!(total >= acceptable))
  {
    signed int min = -1;
    signed int to = -1;
    signed int min_increase = acceptable * 10;
    signed int j;
    signed int multiplier;
    signed int increase;
    signed int old_to_counters;
    iterations = iterations + 1;
    i = 0;
    for( ; !(i >= 32); i = i + 1)
    {
      if(prefix_counters[(signed long int)i] == 0)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = !(prefix_enabled[(signed long int)i] != 0) ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_1)
      {
        j = i + 1;
        multiplier = 2;
        for( ; !(j >= 33); multiplier = multiplier * 2)
        {
          if(!(prefix_counters[(signed long int)j] == 0))
          {
            increase = prefix_counters[(signed long int)i] * (multiplier - 1);
            if(!(debug == 0))
              fprintf(stderr, "\t\t> Examining merging prefix %d to %d (increase by %d)\n", i, j, increase);

            if(!(increase >= min_increase))
            {
              min_increase = increase;
              min = i;
              to = j;
            }

            break;
          }

          j = j + 1;
        }
      }

    }
    if(min == -1 || min == to || to == -1)
    {
      if(!(debug == 0))
        fprintf(stderr, "\tNothing more to reduce\n");

      break;
    }

    multiplier = 1;
    i = min;
    for( ; !(i >= to); i = i + 1)
      multiplier = multiplier * 2;
    increase = prefix_counters[(signed long int)min] * multiplier - prefix_counters[(signed long int)min];
    if(!(debug == 0))
      fprintf(stderr, "\t\t> Selected prefix %d (%d entries) to be merged in %d (total increase by %d)\n", min, prefix_counters[(signed long int)min], to, increase);

    if(!(acceptable >= increase + total))
    {
      if(!(debug == 0))
        fprintf(stderr, "\tCannot proceed to increase total %d by %d, above acceptable %d.\n", total, increase, acceptable);

      break;
    }

    old_to_counters = prefix_counters[(signed long int)to];
    total = total + increase;
    prefix_counters[(signed long int)to] = prefix_counters[(signed long int)to] + increase + prefix_counters[(signed long int)min];
    prefix_counters[(signed long int)min] = 0;
    prefix_enabled[(signed long int)min] = 0;
    eliminated = eliminated + 1;
    if(!(debug == 0))
      fprintf(stderr, "\t\tEliminating prefix %d in %d (had %d, now has %d entries), total is now %d (increased by %d)\n", min, to, old_to_counters, prefix_counters[(signed long int)to], total, increase);

  }
  if(!(debug == 0))
    fprintf(stderr, "\nEliminated %d out of %d prefixes (%d remain in the final set).\n\n", eliminated, initial, initial - eliminated);

  i = 0;
  for( ; !(i >= 33); i = i + 1)
    prefix_counters[(signed long int)i] = 0;
  split_range_disable_printing = 0;
}

// ipset_save_binary_v10
// file iprange.c line 1214
static void ipset_save_binary_v10(struct ipset *ips)
{
  if(!(ips->entries == 0ul))
  {
    fprintf(stdout, "iprange binary format v1.0\n");
    if(!((1u & ips->flags) == 0u))
      fprintf(stdout, "optimized\n");

    else
      fprintf(stdout, "non-optimized\n");
    fprintf(stdout, "record size %lu\n", (unsigned long int)sizeof(struct network_addr) /*8ul*/ );
    fprintf(stdout, "records %lu\n", ips->entries);
    fprintf(stdout, "bytes %lu\n", sizeof(struct network_addr) /*8ul*/  * ips->entries + sizeof(unsigned int) /*4ul*/ );
    fprintf(stdout, "lines %lu\n", ips->entries);
    fprintf(stdout, "unique ips %lu\n", ips->unique_ips);
    fwrite((const void *)&endianness, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, stdout);
    fwrite((const void *)ips->netaddrs, sizeof(struct network_addr) /*8ul*/ , ips->entries, stdout);
  }

}

// ipset_unique_ips
// file iprange.c line 633
static unsigned long int ipset_unique_ips(struct ipset *ips)
{
  if((1u & ips->flags) == 0u)
    ipset_optimize(ips);

  return ips->unique_ips;
}

// main
// file iprange.c line 2407
signed int main(signed int argc, char **argv)
{
  struct timeval start_dt;
  struct timeval load_dt;
  struct timeval print_dt;
  struct timeval stop_dt;
  signed int ipset_reduce_factor = 120;
  signed int ipset_reduce_min_accepted = 16384;
  signed int ret = 0;
  signed int quiet = 0;
  struct ipset *root = (struct ipset *)(void *)0;
  struct ipset *ips = (struct ipset *)(void *)0;
  struct ipset *first = (struct ipset *)(void *)0;
  struct ipset *second = (struct ipset *)(void *)0;
  signed int i;
  signed int mode = 1;
  signed int print = 2;
  signed int header = 0;
  signed int read_second = 0;
  gettimeofday(&start_dt, (struct timezone *)(void *)0);
  PROG=strrchr(argv[(signed long int)0], 47);
  if(!(PROG == ((char *)NULL)))
    PROG = PROG + 1l;

  else
    PROG = argv[(signed long int)0];
  i = 1;
  _Bool tmp_if_expr_89;
  signed int return_value_strcmp_88;
  _Bool tmp_if_expr_87;
  signed int return_value_strcmp_86;
  _Bool tmp_if_expr_85;
  signed int return_value_strcmp_84;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_83;
  signed int return_value_strcmp_80;
  _Bool tmp_if_expr_82;
  signed int return_value_strcmp_81;
  _Bool tmp_if_expr_79;
  signed int return_value_strcmp_76;
  _Bool tmp_if_expr_78;
  signed int return_value_strcmp_77;
  _Bool tmp_if_expr_75;
  signed int return_value_strcmp_72;
  _Bool tmp_if_expr_74;
  signed int return_value_strcmp_73;
  signed int return_value_strcmp_61;
  _Bool tmp_if_expr_63;
  signed int return_value_strcmp_62;
  _Bool tmp_if_expr_65;
  signed int return_value_strcmp_64;
  _Bool tmp_if_expr_67;
  signed int return_value_strcmp_66;
  _Bool tmp_if_expr_69;
  signed int return_value_strcmp_68;
  _Bool tmp_if_expr_71;
  signed int return_value_strcmp_70;
  signed int return_value_strcmp_56;
  _Bool tmp_if_expr_58;
  signed int return_value_strcmp_57;
  _Bool tmp_if_expr_60;
  signed int return_value_strcmp_59;
  signed int return_value_strcmp_49;
  _Bool tmp_if_expr_51;
  signed int return_value_strcmp_50;
  _Bool tmp_if_expr_53;
  signed int return_value_strcmp_52;
  _Bool tmp_if_expr_55;
  signed int return_value_strcmp_54;
  signed int return_value_strcmp_46;
  _Bool tmp_if_expr_48;
  signed int return_value_strcmp_47;
  signed int return_value_strcmp_45;
  signed int return_value_strcmp_44;
  signed int return_value_strcmp_43;
  signed int return_value_strcmp_40;
  _Bool tmp_if_expr_42;
  signed int return_value_strcmp_41;
  signed int return_value_strcmp_39;
  signed int return_value_strcmp_38;
  signed int return_value_strcmp_35;
  _Bool tmp_if_expr_37;
  signed int return_value_strcmp_36;
  signed int return_value_strcmp_34;
  signed int return_value_strcmp_31;
  _Bool tmp_if_expr_33;
  signed int return_value_strcmp_32;
  signed int return_value_strcmp_30;
  signed int return_value_strcmp_27;
  _Bool tmp_if_expr_29;
  signed int return_value_strcmp_28;
  _Bool tmp_if_expr_26;
  signed int return_value_strcmp_25;
  _Bool tmp_if_expr_24;
  signed int return_value_strcmp_23;
  _Bool tmp_if_expr_22;
  signed int return_value_strcmp_21;
  _Bool tmp_if_expr_20;
  signed int return_value_strcmp_19;
  _Bool tmp_if_expr_18;
  signed int return_value_strcmp_17;
  _Bool tmp_if_expr_16;
  signed int return_value_strcmp_15;
  signed int return_value_strcmp_14;
  signed int return_value_strcmp_13;
  signed int return_value_strcmp_12;
  _Bool tmp_if_expr_11;
  signed int return_value_strcmp_10;
  signed int return_value_strcmp_9;
  signed int return_value_strcmp_8;
  signed int return_value_strcmp_5;
  _Bool tmp_if_expr_7;
  signed int return_value_strcmp_6;
  for( ; !(i >= argc); i = i + 1)
  {
    if(!(1 + i >= argc))
    {
      return_value_strcmp_88=strcmp(argv[(signed long int)i], "as");
      tmp_if_expr_89 = !(return_value_strcmp_88 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_89 = (_Bool)0;
    if(tmp_if_expr_89)
    {
      if(read_second == 0)
      {
        if(!(root == ((struct ipset *)NULL)))
        {
          i = i + 1;
          strncpy(root->filename, argv[(signed long int)i], (unsigned long int)4096);
          root->filename[(signed long int)4096] = (char)0;
        }

      }

      else
        if(!(second == ((struct ipset *)NULL)))
        {
          i = i + 1;
          strncpy(second->filename, argv[(signed long int)i], (unsigned long int)4096);
          second->filename[(signed long int)4096] = (char)0;
        }

    }

    else
    {
      if(!(1 + i >= argc))
      {
        return_value_strcmp_86=strcmp(argv[(signed long int)i], "--min-prefix");
        tmp_if_expr_87 = !(return_value_strcmp_86 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_87 = (_Bool)0;
      if(tmp_if_expr_87)
      {
        signed int j;
        signed int min_prefix;
        i = i + 1;
        min_prefix=atoi(argv[(signed long int)i]);
        if(min_prefix >= 33 || !(min_prefix >= 1))
        {
          fprintf(stderr, "Only prefixes 1 to 31 can be disabled. %d is invalid.\n", min_prefix);
          exit(1);
        }

        j = 0;
        for( ; !(j >= min_prefix); j = j + 1)
          prefix_enabled[(signed long int)j] = 0;
      }

      else
      {
        if(!(1 + i >= argc))
        {
          return_value_strcmp_84=strcmp(argv[(signed long int)i], "--prefixes");
          tmp_if_expr_85 = !(return_value_strcmp_84 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_85 = (_Bool)0;
        if(tmp_if_expr_85)
        {
          char *s = (char *)(void *)0;
          char *e;
          i = i + 1;
          e = argv[(signed long int)i];
          signed int main__1__1__1__3__j = 0;
          for( ; !(main__1__1__1__3__j >= 32); main__1__1__1__3__j = main__1__1__1__3__j + 1)
            prefix_enabled[(signed long int)main__1__1__1__3__j] = 0;
          while(!(e == ((char *)NULL)))
          {
            if(*e == 0)
              break;

            if(e == s)
              break;

            s = e;
            signed long int return_value_strtol_1;
            return_value_strtol_1=strtol(s, &e, 10);
            main__1__1__1__3__j = (signed int)return_value_strtol_1;
            if(main__1__1__1__3__j >= 33 || !(main__1__1__1__3__j >= 1))
            {
              fprintf(stderr, "%s: Only prefixes from 1 to 32 can be set (32 is always enabled). %d is invalid.\n", PROG, main__1__1__1__3__j);
              exit(1);
            }

            if(!(debug == 0))
              fprintf(stderr, "Enabling prefix %d\n", main__1__1__1__3__j);

            prefix_enabled[(signed long int)main__1__1__1__3__j] = 1;
            if((signed int)*e == 44)
              tmp_if_expr_2 = (_Bool)1;

            else
              tmp_if_expr_2 = (signed int)*e == 32 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_2)
              e = e + 1l;

          }
          if(!(e == ((char *)NULL)))
          {
            if(!(*e == 0))
            {
              fprintf(stderr, "%s: Invalid prefix '%s'\n", PROG, e);
              exit(1);
            }

          }

        }

        else
        {
          if(!(1 + i >= argc))
          {
            return_value_strcmp_80=strcmp(argv[(signed long int)i], "--default-prefix");
            if(return_value_strcmp_80 == 0)
              tmp_if_expr_82 = (_Bool)1;

            else
            {
              return_value_strcmp_81=strcmp(argv[(signed long int)i], "-p");
              tmp_if_expr_82 = !(return_value_strcmp_81 != 0) ? (_Bool)1 : (_Bool)0;
            }
            tmp_if_expr_83 = tmp_if_expr_82 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_83 = (_Bool)0;
          if(tmp_if_expr_83)
          {
            i = i + 1;
            default_prefix=atoi(argv[(signed long int)i]);
          }

          else
          {
            if(!(1 + i >= argc))
            {
              return_value_strcmp_76=strcmp(argv[(signed long int)i], "--ipset-reduce");
              if(return_value_strcmp_76 == 0)
                tmp_if_expr_78 = (_Bool)1;

              else
              {
                return_value_strcmp_77=strcmp(argv[(signed long int)i], "--reduce-factor");
                tmp_if_expr_78 = !(return_value_strcmp_77 != 0) ? (_Bool)1 : (_Bool)0;
              }
              tmp_if_expr_79 = tmp_if_expr_78 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_79 = (_Bool)0;
            if(tmp_if_expr_79)
            {
              i = i + 1;
              signed int return_value_atoi_3;
              return_value_atoi_3=atoi(argv[(signed long int)i]);
              ipset_reduce_factor = 100 + return_value_atoi_3;
              mode = 7;
            }

            else
            {
              if(!(1 + i >= argc))
              {
                return_value_strcmp_72=strcmp(argv[(signed long int)i], "--ipset-reduce-entries");
                if(return_value_strcmp_72 == 0)
                  tmp_if_expr_74 = (_Bool)1;

                else
                {
                  return_value_strcmp_73=strcmp(argv[(signed long int)i], "--reduce-entries");
                  tmp_if_expr_74 = !(return_value_strcmp_73 != 0) ? (_Bool)1 : (_Bool)0;
                }
                tmp_if_expr_75 = tmp_if_expr_74 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_75 = (_Bool)0;
              if(tmp_if_expr_75)
              {
                i = i + 1;
                ipset_reduce_min_accepted=atoi(argv[(signed long int)i]);
                mode = 7;
              }

              else
              {
                return_value_strcmp_61=strcmp(argv[(signed long int)i], "--optimize");
                if(return_value_strcmp_61 == 0)
                  tmp_if_expr_63 = (_Bool)1;

                else
                {
                  return_value_strcmp_62=strcmp(argv[(signed long int)i], "--combine");
                  tmp_if_expr_63 = !(return_value_strcmp_62 != 0) ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_63)
                  tmp_if_expr_65 = (_Bool)1;

                else
                {
                  return_value_strcmp_64=strcmp(argv[(signed long int)i], "--merge");
                  tmp_if_expr_65 = !(return_value_strcmp_64 != 0) ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_65)
                  tmp_if_expr_67 = (_Bool)1;

                else
                {
                  return_value_strcmp_66=strcmp(argv[(signed long int)i], "--union");
                  tmp_if_expr_67 = !(return_value_strcmp_66 != 0) ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_67)
                  tmp_if_expr_69 = (_Bool)1;

                else
                {
                  return_value_strcmp_68=strcmp(argv[(signed long int)i], "--union-all");
                  tmp_if_expr_69 = !(return_value_strcmp_68 != 0) ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_69)
                  tmp_if_expr_71 = (_Bool)1;

                else
                {
                  return_value_strcmp_70=strcmp(argv[(signed long int)i], "-J");
                  tmp_if_expr_71 = !(return_value_strcmp_70 != 0) ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_71)
                  mode = 1;

                else
                {
                  return_value_strcmp_56=strcmp(argv[(signed long int)i], "--common");
                  if(return_value_strcmp_56 == 0)
                    tmp_if_expr_58 = (_Bool)1;

                  else
                  {
                    return_value_strcmp_57=strcmp(argv[(signed long int)i], "--intersect");
                    tmp_if_expr_58 = !(return_value_strcmp_57 != 0) ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_58)
                    tmp_if_expr_60 = (_Bool)1;

                  else
                  {
                    return_value_strcmp_59=strcmp(argv[(signed long int)i], "--intersect-all");
                    tmp_if_expr_60 = !(return_value_strcmp_59 != 0) ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_60)
                    mode = 8;

                  else
                  {
                    return_value_strcmp_49=strcmp(argv[(signed long int)i], "--exclude-next");
                    if(return_value_strcmp_49 == 0)
                      tmp_if_expr_51 = (_Bool)1;

                    else
                    {
                      return_value_strcmp_50=strcmp(argv[(signed long int)i], "--except");
                      tmp_if_expr_51 = !(return_value_strcmp_50 != 0) ? (_Bool)1 : (_Bool)0;
                    }
                    if(tmp_if_expr_51)
                      tmp_if_expr_53 = (_Bool)1;

                    else
                    {
                      return_value_strcmp_52=strcmp(argv[(signed long int)i], "--complement-next");
                      tmp_if_expr_53 = !(return_value_strcmp_52 != 0) ? (_Bool)1 : (_Bool)0;
                    }
                    if(tmp_if_expr_53)
                      tmp_if_expr_55 = (_Bool)1;

                    else
                    {
                      return_value_strcmp_54=strcmp(argv[(signed long int)i], "--complement");
                      tmp_if_expr_55 = !(return_value_strcmp_54 != 0) ? (_Bool)1 : (_Bool)0;
                    }
                    if(tmp_if_expr_55)
                    {
                      mode = 9;
                      read_second = 1;
                      if(root == ((struct ipset *)NULL))
                      {
                        fprintf(stderr, "%s: An ipset is needed before --except\n", PROG);
                        exit(1);
                      }

                    }

                    else
                    {
                      return_value_strcmp_46=strcmp(argv[(signed long int)i], "--diff");
                      if(return_value_strcmp_46 == 0)
                        tmp_if_expr_48 = (_Bool)1;

                      else
                      {
                        return_value_strcmp_47=strcmp(argv[(signed long int)i], "--diff-next");
                        tmp_if_expr_48 = !(return_value_strcmp_47 != 0) ? (_Bool)1 : (_Bool)0;
                      }
                      if(tmp_if_expr_48)
                      {
                        mode = 10;
                        read_second = 1;
                        if(root == ((struct ipset *)NULL))
                        {
                          fprintf(stderr, "%s: An ipset is needed before --diff\n", PROG);
                          exit(1);
                        }

                      }

                      else
                      {
                        return_value_strcmp_45=strcmp(argv[(signed long int)i], "--compare");
                        if(return_value_strcmp_45 == 0)
                          mode = 2;

                        else
                        {
                          return_value_strcmp_44=strcmp(argv[(signed long int)i], "--compare-first");
                          if(return_value_strcmp_44 == 0)
                            mode = 3;

                          else
                          {
                            return_value_strcmp_43=strcmp(argv[(signed long int)i], "--compare-next");
                            if(return_value_strcmp_43 == 0)
                            {
                              mode = 4;
                              read_second = 1;
                              if(root == ((struct ipset *)NULL))
                              {
                                fprintf(stderr, "%s: An ipset is needed before --compare-next\n", PROG);
                                exit(1);
                              }

                            }

                            else
                            {
                              return_value_strcmp_40=strcmp(argv[(signed long int)i], "--count-unique");
                              if(return_value_strcmp_40 == 0)
                                tmp_if_expr_42 = (_Bool)1;

                              else
                              {
                                return_value_strcmp_41=strcmp(argv[(signed long int)i], "-C");
                                tmp_if_expr_42 = !(return_value_strcmp_41 != 0) ? (_Bool)1 : (_Bool)0;
                              }
                              if(tmp_if_expr_42)
                                mode = 5;

                              else
                              {
                                return_value_strcmp_39=strcmp(argv[(signed long int)i], "--count-unique-all");
                                if(return_value_strcmp_39 == 0)
                                  mode = 6;

                                else
                                {
                                  return_value_strcmp_38=strcmp(argv[(signed long int)i], "--version");
                                  if(return_value_strcmp_38 == 0)
                                    version();

                                  else
                                  {
                                    return_value_strcmp_35=strcmp(argv[(signed long int)i], "--help");
                                    if(return_value_strcmp_35 == 0)
                                      tmp_if_expr_37 = (_Bool)1;

                                    else
                                    {
                                      return_value_strcmp_36=strcmp(argv[(signed long int)i], "-h");
                                      tmp_if_expr_37 = !(return_value_strcmp_36 != 0) ? (_Bool)1 : (_Bool)0;
                                    }
                                    if(tmp_if_expr_37)
                                      usage(argv[(signed long int)0]);

                                    else
                                    {
                                      return_value_strcmp_34=strcmp(argv[(signed long int)i], "-v");
                                      if(return_value_strcmp_34 == 0)
                                        debug = 1;

                                      else
                                      {
                                        return_value_strcmp_31=strcmp(argv[(signed long int)i], "--print-ranges");
                                        if(return_value_strcmp_31 == 0)
                                          tmp_if_expr_33 = (_Bool)1;

                                        else
                                        {
                                          return_value_strcmp_32=strcmp(argv[(signed long int)i], "-j");
                                          tmp_if_expr_33 = !(return_value_strcmp_32 != 0) ? (_Bool)1 : (_Bool)0;
                                        }
                                        if(tmp_if_expr_33)
                                          print = 1;

                                        else
                                        {
                                          return_value_strcmp_30=strcmp(argv[(signed long int)i], "--print-binary");
                                          if(return_value_strcmp_30 == 0)
                                            print = 4;

                                          else
                                          {
                                            return_value_strcmp_27=strcmp(argv[(signed long int)i], "--print-single-ips");
                                            if(return_value_strcmp_27 == 0)
                                              tmp_if_expr_29 = (_Bool)1;

                                            else
                                            {
                                              return_value_strcmp_28=strcmp(argv[(signed long int)i], "-1");
                                              tmp_if_expr_29 = !(return_value_strcmp_28 != 0) ? (_Bool)1 : (_Bool)0;
                                            }
                                            if(tmp_if_expr_29)
                                              print = 3;

                                            else
                                            {
                                              if(!(1 + i >= argc))
                                              {
                                                return_value_strcmp_25=strcmp(argv[(signed long int)i], "--print-prefix");
                                                tmp_if_expr_26 = !(return_value_strcmp_25 != 0) ? (_Bool)1 : (_Bool)0;
                                              }

                                              else
                                                tmp_if_expr_26 = (_Bool)0;
                                              if(tmp_if_expr_26)
                                              {
                                                i = i + 1;
                                                print_prefix_ips = argv[(signed long int)i];
                                                print_prefix_nets = print_prefix_ips;
                                              }

                                              else
                                              {
                                                if(!(1 + i >= argc))
                                                {
                                                  return_value_strcmp_23=strcmp(argv[(signed long int)i], "--print-prefix-ips");
                                                  tmp_if_expr_24 = !(return_value_strcmp_23 != 0) ? (_Bool)1 : (_Bool)0;
                                                }

                                                else
                                                  tmp_if_expr_24 = (_Bool)0;
                                                if(tmp_if_expr_24)
                                                {
                                                  i = i + 1;
                                                  print_prefix_ips = argv[(signed long int)i];
                                                }

                                                else
                                                {
                                                  if(!(1 + i >= argc))
                                                  {
                                                    return_value_strcmp_21=strcmp(argv[(signed long int)i], "--print-prefix-nets");
                                                    tmp_if_expr_22 = !(return_value_strcmp_21 != 0) ? (_Bool)1 : (_Bool)0;
                                                  }

                                                  else
                                                    tmp_if_expr_22 = (_Bool)0;
                                                  if(tmp_if_expr_22)
                                                  {
                                                    i = i + 1;
                                                    print_prefix_nets = argv[(signed long int)i];
                                                  }

                                                  else
                                                  {
                                                    if(!(1 + i >= argc))
                                                    {
                                                      return_value_strcmp_19=strcmp(argv[(signed long int)i], "--print-suffix");
                                                      tmp_if_expr_20 = !(return_value_strcmp_19 != 0) ? (_Bool)1 : (_Bool)0;
                                                    }

                                                    else
                                                      tmp_if_expr_20 = (_Bool)0;
                                                    if(tmp_if_expr_20)
                                                    {
                                                      i = i + 1;
                                                      print_suffix_ips = argv[(signed long int)i];
                                                      print_suffix_nets = print_suffix_ips;
                                                    }

                                                    else
                                                    {
                                                      if(!(1 + i >= argc))
                                                      {
                                                        return_value_strcmp_17=strcmp(argv[(signed long int)i], "--print-suffix-ips");
                                                        tmp_if_expr_18 = !(return_value_strcmp_17 != 0) ? (_Bool)1 : (_Bool)0;
                                                      }

                                                      else
                                                        tmp_if_expr_18 = (_Bool)0;
                                                      if(tmp_if_expr_18)
                                                      {
                                                        i = i + 1;
                                                        print_suffix_ips = argv[(signed long int)i];
                                                      }

                                                      else
                                                      {
                                                        if(!(1 + i >= argc))
                                                        {
                                                          return_value_strcmp_15=strcmp(argv[(signed long int)i], "--print-suffix-nets");
                                                          tmp_if_expr_16 = !(return_value_strcmp_15 != 0) ? (_Bool)1 : (_Bool)0;
                                                        }

                                                        else
                                                          tmp_if_expr_16 = (_Bool)0;
                                                        if(tmp_if_expr_16)
                                                        {
                                                          i = i + 1;
                                                          print_suffix_nets = argv[(signed long int)i];
                                                        }

                                                        else
                                                        {
                                                          return_value_strcmp_14=strcmp(argv[(signed long int)i], "--header");
                                                          if(return_value_strcmp_14 == 0)
                                                            header = 1;

                                                          else
                                                          {
                                                            return_value_strcmp_13=strcmp(argv[(signed long int)i], "--quiet");
                                                            if(return_value_strcmp_13 == 0)
                                                              quiet = 1;

                                                            else
                                                            {
                                                              return_value_strcmp_12=strcmp(argv[(signed long int)i], "--dont-fix-network");
                                                              if(return_value_strcmp_12 == 0)
                                                                cidr_use_network = 0;

                                                              else
                                                              {
                                                                if(!(1 + i >= argc))
                                                                {
                                                                  return_value_strcmp_10=strcmp(argv[(signed long int)i], "--dns-threads");
                                                                  tmp_if_expr_11 = !(return_value_strcmp_10 != 0) ? (_Bool)1 : (_Bool)0;
                                                                }

                                                                else
                                                                  tmp_if_expr_11 = (_Bool)0;
                                                                if(tmp_if_expr_11)
                                                                {
                                                                  i = i + 1;
                                                                  dns_threads_max=atoi(argv[(signed long int)i]);
                                                                  if(!(dns_threads_max >= 1))
                                                                    dns_threads_max = 1;

                                                                }

                                                                else
                                                                {
                                                                  return_value_strcmp_9=strcmp(argv[(signed long int)i], "--dns-silent");
                                                                  if(return_value_strcmp_9 == 0)
                                                                    dns_silent = 1;

                                                                  else
                                                                  {
                                                                    return_value_strcmp_8=strcmp(argv[(signed long int)i], "--dns-progress");
                                                                    if(return_value_strcmp_8 == 0)
                                                                      dns_progress = 1;

                                                                    else
                                                                    {
                                                                      return_value_strcmp_5=strcmp(argv[(signed long int)i], "--has-compare");
                                                                      if(return_value_strcmp_5 == 0)
                                                                        tmp_if_expr_7 = (_Bool)1;

                                                                      else
                                                                      {
                                                                        return_value_strcmp_6=strcmp(argv[(signed long int)i], "--has-reduce");
                                                                        tmp_if_expr_7 = !(return_value_strcmp_6 != 0) ? (_Bool)1 : (_Bool)0;
                                                                      }
                                                                      if(tmp_if_expr_7)
                                                                      {
                                                                        fprintf(stderr, "yes, compare and reduce is present.\n");
                                                                        exit(0);
                                                                      }

                                                                      else
                                                                      {
                                                                        signed int return_value_strcmp_4;
                                                                        return_value_strcmp_4=strcmp(argv[(signed long int)i], "-");
                                                                        if(return_value_strcmp_4 == 0)
                                                                          ips=ipset_load((const char *)(void *)0);

                                                                        else
                                                                          ips=ipset_load(argv[(signed long int)i]);
                                                                        if(ips == ((struct ipset *)NULL))
                                                                        {
                                                                          fprintf(stderr, "%s: Cannot load ipset: %s\n", PROG, argv[(signed long int)i]);
                                                                          exit(1);
                                                                        }

                                                                        if(!(read_second == 0))
                                                                        {
                                                                          ips->next = second;
                                                                          second = ips;
                                                                          if(!(ips->next == ((struct ipset *)NULL)))
                                                                            ips->next->prev = ips;

                                                                        }

                                                                        else
                                                                        {
                                                                          if(first == ((struct ipset *)NULL))
                                                                            first = ips;

                                                                          ips->next = root;
                                                                          root = ips;
                                                                          if(!(ips->next == ((struct ipset *)NULL)))
                                                                            ips->next->prev = ips;

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
  if(root == ((struct ipset *)NULL))
  {
    root=ipset_load((const char *)(void *)0);
    first = root;
    if(root == ((struct ipset *)NULL))
    {
      fprintf(stderr, "%s: No ipsets to merge.\n", PROG);
      exit(1);
    }

  }

  gettimeofday(&load_dt, (struct timezone *)(void *)0);
  if(mode == 1 || mode == 5 || mode == 7)
  {
    strcpy(root->filename, "combined ipset");
    ips = root->next;
    for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
      ipset_merge(root, ips);
    if(mode == 7)
      ipset_reduce(root, ipset_reduce_factor, ipset_reduce_min_accepted);

    gettimeofday(&print_dt, (struct timezone *)(void *)0);
    if(mode == 1 || mode == 7)
      ipset_print(root, print);

    else
      if(mode == 5)
      {
        if(!(header == 0))
          printf("entries,unique_ips\n");

        unsigned long int return_value_ipset_unique_ips_90;
        return_value_ipset_unique_ips_90=ipset_unique_ips(root);
        printf("%lu,%lu\n", root->lines, return_value_ipset_unique_ips_90);
      }

  }

  else
    if(mode == 8)
    {
      struct ipset *main__1__4__common = (struct ipset *)(void *)0;
      struct ipset *ips2 = (struct ipset *)(void *)0;
      if(root->next == ((struct ipset *)NULL))
      {
        fprintf(stderr, "%s: two ipsets at least are needed to be compared to find their common IPs.\n", PROG);
        exit(1);
      }

      main__1__4__common=ipset_common(root, root->next);
      ips = root->next->next;
      for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
      {
        ips2=ipset_common(main__1__4__common, ips);
        ipset_free(main__1__4__common);
        main__1__4__common = ips2;
      }
      gettimeofday(&print_dt, (struct timezone *)(void *)0);
      ipset_print(main__1__4__common, print);
    }

    else
      if(mode == 10)
      {
        if(root == ((struct ipset *)NULL) || second == ((struct ipset *)NULL))
        {
          fprintf(stderr, "%s: two ipsets at least are needed to be diffed.\n", PROG);
          exit(1);
        }

        ips = root->next;
        for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
          ipset_merge(root, ips);
        if(!(root->next == ((struct ipset *)NULL)))
          strcpy(root->filename, "ipset A");

        ips = second->next;
        for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
          ipset_merge(second, ips);
        if(!(second->next == ((struct ipset *)NULL)))
          strcpy(root->filename, "ipset B");

        ips=ipset_diff(root, second);
        gettimeofday(&print_dt, (struct timezone *)(void *)0);
        if(quiet == 0)
          ipset_print(ips, print);

        gettimeofday(&print_dt, (struct timezone *)(void *)0);
        if(!(ips->unique_ips == 0ul))
          ret = 1;

        else
          ret = 0;
      }

      else
        if(mode == 2)
        {
          struct ipset *main__1__6__ips2;
          if(root->next == ((struct ipset *)NULL))
          {
            fprintf(stderr, "%s: two ipsets at least are needed to be compared.\n", PROG);
            exit(1);
          }

          if(!(header == 0))
            printf("name1,name2,entries1,entries2,ips1,ips2,combined_ips,common_ips\n");

          ips = root;
          for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
          {
            main__1__6__ips2 = ips;
            for( ; !(main__1__6__ips2 == ((struct ipset *)NULL)); main__1__6__ips2 = main__1__6__ips2->next)
            {
              struct ipset *comips;
              if(!(ips == main__1__6__ips2))
              {
                comips=ipset_common(ips, main__1__6__ips2);
                if(comips == ((struct ipset *)NULL))
                {
                  fprintf(stderr, "%s: Cannot find the common IPs of ipset %s and %s\n", PROG, (const void *)ips->filename, (const void *)main__1__6__ips2->filename);
                  exit(1);
                }

                fprintf(stdout, "%s,%s,%lu,%lu,%lu,%lu,%lu,%lu\n", (const void *)ips->filename, (const void *)main__1__6__ips2->filename, ips->lines, main__1__6__ips2->lines, ips->unique_ips, main__1__6__ips2->unique_ips, (ips->unique_ips + main__1__6__ips2->unique_ips) - comips->unique_ips, comips->unique_ips);
                ipset_free(comips);
              }

            }
          }
          gettimeofday(&print_dt, (struct timezone *)(void *)0);
        }

        else
          if(mode == 4)
          {
            struct ipset *main__1__7__ips2;
            if(second == ((struct ipset *)NULL))
            {
              fprintf(stderr, "%s: no files given after the --compare-next parameter.\n", PROG);
              exit(1);
            }

            if(!(header == 0))
              printf("name1,name2,entries1,entries2,ips1,ips2,combined_ips,common_ips\n");

            ips = root;
            for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
            {
              main__1__7__ips2 = second;
              for( ; !(main__1__7__ips2 == ((struct ipset *)NULL)); main__1__7__ips2 = main__1__7__ips2->next)
              {
                struct ipset *common;
                common=ipset_common(ips, main__1__7__ips2);
                if(common == ((struct ipset *)NULL))
                {
                  fprintf(stderr, "%s: Cannot find the common IPs of ipset %s and %s\n", PROG, (const void *)ips->filename, (const void *)main__1__7__ips2->filename);
                  exit(1);
                }

                fprintf(stdout, "%s,%s,%lu,%lu,%lu,%lu,%lu,%lu\n", (const void *)ips->filename, (const void *)main__1__7__ips2->filename, ips->lines, main__1__7__ips2->lines, ips->unique_ips, main__1__7__ips2->unique_ips, (ips->unique_ips + main__1__7__ips2->unique_ips) - common->unique_ips, common->unique_ips);
                ipset_free(common);
              }
            }
            gettimeofday(&print_dt, (struct timezone *)(void *)0);
          }

          else
            if(mode == 3)
            {
              if(root->next == ((struct ipset *)NULL))
              {
                fprintf(stderr, "%s: two ipsets at least are needed to be compared.\n", PROG);
                exit(1);
              }

              if(!(header == 0))
                printf("name,entries,unique_ips,common_ips\n");

              ips = root;
              for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
              {
                struct ipset *main__1__8__2__1__comips;
                if(!(ips == first))
                {
                  main__1__8__2__1__comips=ipset_common(ips, first);
                  if(main__1__8__2__1__comips == ((struct ipset *)NULL))
                  {
                    fprintf(stderr, "%s: Cannot find the comips IPs of ipset %s and %s\n", PROG, (const void *)ips->filename, (const void *)first->filename);
                    exit(1);
                  }

                  printf("%s,%lu,%lu,%lu\n", (const void *)ips->filename, ips->lines, ips->unique_ips, main__1__8__2__1__comips->unique_ips);
                  ipset_free(main__1__8__2__1__comips);
                }

              }
              gettimeofday(&print_dt, (struct timezone *)(void *)0);
            }

            else
              if(mode == 9)
              {
                struct ipset *excluded;
                if(second == ((struct ipset *)NULL))
                {
                  fprintf(stderr, "%s: no files given after the --exclude-next parameter.\n", PROG);
                  exit(1);
                }

                ips = root->next;
                for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
                  ipset_merge(root, ips);
                excluded = root;
                root = root->next;
                ips = second;
                for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
                {
                  struct ipset *tmp;
                  tmp=ipset_exclude(excluded, ips);
                  if(tmp == ((struct ipset *)NULL))
                  {
                    fprintf(stderr, "%s: Cannot exclude the IPs of ipset %s from %s\n", PROG, (const void *)ips->filename, (const void *)excluded->filename);
                    exit(1);
                  }

                  ipset_free(excluded);
                  excluded = tmp;
                }
                gettimeofday(&print_dt, (struct timezone *)(void *)0);
                ipset_print(excluded, print);
              }

              else
                if(mode == 6)
                {
                  if(!(header == 0))
                    printf("name,entries,unique_ips\n");

                  ipset_optimize_all(root);
                  ips = root;
                  for( ; !(ips == ((struct ipset *)NULL)); ips = ips->next)
                    printf("%s,%lu,%lu\n", (const void *)ips->filename, ips->lines, ips->unique_ips);
                  gettimeofday(&print_dt, (struct timezone *)(void *)0);
                }

                else
                {
                  fprintf(stderr, "%s: Unknown mode.\n", PROG);
                  exit(1);
                }
  gettimeofday(&stop_dt, (struct timezone *)(void *)0);
  if(!(debug == 0))
    fprintf(stderr, "completed in %0.5f seconds (read %0.5f + think %0.5f + speak %0.5f)\n", ((double)(stop_dt.tv_sec * (signed long int)1000000 + stop_dt.tv_usec) - (double)(start_dt.tv_sec * (signed long int)1000000 + start_dt.tv_usec)) / (double)1000000, ((double)(load_dt.tv_sec * (signed long int)1000000 + load_dt.tv_usec) - (double)(start_dt.tv_sec * (signed long int)1000000 + start_dt.tv_usec)) / (double)1000000, ((double)(print_dt.tv_sec * (signed long int)1000000 + print_dt.tv_usec) - (double)(load_dt.tv_sec * (signed long int)1000000 + load_dt.tv_usec)) / (double)1000000, ((double)(stop_dt.tv_sec * (signed long int)1000000 + stop_dt.tv_usec) - (double)(print_dt.tv_sec * (signed long int)1000000 + print_dt.tv_usec)) / (double)1000000);

  exit(ret);
}

// netmask
// file iprange.c line 70
static inline unsigned int netmask(signed int prefix)
{
  if(prefix == 0)
    return ~((unsigned int)-1);

  else
    return (unsigned int)~((1 << 32 - prefix) - 1);
}

// network
// file iprange.c line 93
static inline unsigned int network(unsigned int addr, signed int prefix)
{
  unsigned int return_value_netmask_1;
  return_value_netmask_1=netmask(prefix);
  return addr & return_value_netmask_1;
}

// parse_hostname
// file iprange.c line 987
static inline signed int parse_hostname(char *line, signed int lineid, char *ipstr, char *ipstr2, signed int len)
{
  char *s = line;
  signed int i = 0;
  _Bool tmp_if_expr_1;
  do
  {
    if((signed int)*s == 32)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)*s == 9 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    s = s + 1l;
  }
  while((_Bool)1);
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  signed int tmp_post_11;
  char *tmp_post_12;
  do
  {
    if(!(i >= len))
    {
      if((signed int)*s >= 48)
        tmp_if_expr_2 = (signed int)*s <= 57 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_4 = (_Bool)1;

      else
      {
        if((signed int)*s >= 97)
          tmp_if_expr_3 = (signed int)*s <= 122 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_4)
        tmp_if_expr_6 = (_Bool)1;

      else
      {
        if((signed int)*s >= 65)
          tmp_if_expr_5 = (signed int)*s <= 90 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_5 = (_Bool)0;
        tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_6)
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = (signed int)*s == 95 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_7)
        tmp_if_expr_8 = (_Bool)1;

      else
        tmp_if_expr_8 = (signed int)*s == 45 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_8)
        tmp_if_expr_9 = (_Bool)1;

      else
        tmp_if_expr_9 = (signed int)*s == 46 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_10 = (_Bool)0;
    if(!tmp_if_expr_10)
      break;

    tmp_post_11 = i;
    i = i + 1;
    tmp_post_12 = s;
    s = s + 1l;
    ipstr[(signed long int)tmp_post_11] = *tmp_post_12;
  }
  while((_Bool)1);
  ipstr[(signed long int)i] = (char)0;
  _Bool tmp_if_expr_13;
  do
  {
    if((signed int)*s == 32)
      tmp_if_expr_13 = (_Bool)1;

    else
      tmp_if_expr_13 = (signed int)*s == 9 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_13)
      break;

    s = s + 1l;
  }
  while((_Bool)1);
  _Bool tmp_if_expr_14;
  if((signed int)*s == 35)
    tmp_if_expr_14 = (_Bool)1;

  else
    tmp_if_expr_14 = (signed int)*s == 59 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  if(tmp_if_expr_14)
    return 3;

  else
  {
    if((signed int)*s == 13)
      tmp_if_expr_15 = (_Bool)1;

    else
      tmp_if_expr_15 = (signed int)*s == 10 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_15)
      tmp_if_expr_16 = (_Bool)1;

    else
      tmp_if_expr_16 = (signed int)*s == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_16)
      return 3;

    else
    {
      fprintf(stderr, "%s: Ignoring text after hostname '%s' on line %d: '%s'\n", PROG, ipstr, lineid, s);
      return 3;
    }
  }
}

// parse_line
// file iprange.c line 1022
static inline signed int parse_line(char *line, signed int lineid, char *ipstr, char *ipstr2, signed int len)
{
  char *s = line;
  signed int i = 0;
  _Bool tmp_if_expr_1;
  do
  {
    if((signed int)*s == 32)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)*s == 9 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    s = s + 1l;
  }
  while((_Bool)1);
  _Bool tmp_if_expr_2;
  if((signed int)*s == 35)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)*s == 59 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  signed int tmp_post_9;
  char *tmp_post_10;
  signed int return_value_parse_hostname_11;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_17;
  _Bool tmp_if_expr_18;
  _Bool tmp_if_expr_19;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_24;
  _Bool tmp_if_expr_21;
  _Bool tmp_if_expr_22;
  _Bool tmp_if_expr_23;
  signed int tmp_post_25;
  char *tmp_post_26;
  _Bool tmp_if_expr_28;
  _Bool tmp_if_expr_29;
  _Bool tmp_if_expr_30;
  _Bool tmp_if_expr_31;
  if(tmp_if_expr_2)
    return 0;

  else
  {
    if((signed int)*s == 13)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)*s == 10 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (signed int)*s == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      return 0;

    else
    {
      do
      {
        if(!(i >= len))
        {
          if((signed int)*s >= 48)
            tmp_if_expr_5 = (signed int)*s <= 57 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_5 = (_Bool)0;
          if(tmp_if_expr_5)
            tmp_if_expr_6 = (_Bool)1;

          else
            tmp_if_expr_6 = (signed int)*s == 46 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_6)
            tmp_if_expr_7 = (_Bool)1;

          else
            tmp_if_expr_7 = (signed int)*s == 47 ? (_Bool)1 : (_Bool)0;
          tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_8 = (_Bool)0;
        if(!tmp_if_expr_8)
          break;

        tmp_post_9 = i;
        i = i + 1;
        tmp_post_10 = s;
        s = s + 1l;
        ipstr[(signed long int)tmp_post_9] = *tmp_post_10;
      }
      while((_Bool)1);
      if(i == 0)
      {
        return_value_parse_hostname_11=parse_hostname(line, lineid, ipstr, ipstr2, len);
        return return_value_parse_hostname_11;
      }

      else
      {
        ipstr[(signed long int)i] = (char)0;
        do
        {
          if((signed int)*s == 32)
            tmp_if_expr_12 = (_Bool)1;

          else
            tmp_if_expr_12 = (signed int)*s == 9 ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_12)
            break;

          s = s + 1l;
        }
        while((_Bool)1);
        if((signed int)*s == 35)
          tmp_if_expr_13 = (_Bool)1;

        else
          tmp_if_expr_13 = (signed int)*s == 59 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_13)
          return 1;

        else
        {
          if((signed int)*s == 13)
            tmp_if_expr_14 = (_Bool)1;

          else
            tmp_if_expr_14 = (signed int)*s == 10 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_14)
            tmp_if_expr_15 = (_Bool)1;

          else
            tmp_if_expr_15 = (signed int)*s == 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_15)
            return 1;

          else
          {
            if(!((signed int)*s == 45))
            {
              signed int return_value_parse_hostname_16;
              return_value_parse_hostname_16=parse_hostname(line, lineid, ipstr, ipstr2, len);
              return return_value_parse_hostname_16;
            }

            s = s + 1l;
            do
            {
              if((signed int)*s == 32)
                tmp_if_expr_17 = (_Bool)1;

              else
                tmp_if_expr_17 = (signed int)*s == 9 ? (_Bool)1 : (_Bool)0;
              if(!tmp_if_expr_17)
                break;

              s = s + 1l;
            }
            while((_Bool)1);
            if((signed int)*s == 35)
              tmp_if_expr_18 = (_Bool)1;

            else
              tmp_if_expr_18 = (signed int)*s == 59 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_18)
            {
              fprintf(stderr, "%s: Ignoring text on line %d, expected an ip address after -, but found '%s'\n", PROG, lineid, s);
              return 1;
            }

            else
            {
              if((signed int)*s == 13)
                tmp_if_expr_19 = (_Bool)1;

              else
                tmp_if_expr_19 = (signed int)*s == 10 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_19)
                tmp_if_expr_20 = (_Bool)1;

              else
                tmp_if_expr_20 = (signed int)*s == 0 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_20)
              {
                fprintf(stderr, "%s: Incomplete range on line %d, expected an ip address after -, but line ended\n", PROG, lineid);
                return 1;
              }

              else
              {
                i = 0;
                do
                {
                  if(!(i >= len))
                  {
                    if((signed int)*s >= 48)
                      tmp_if_expr_21 = (signed int)*s <= 57 ? (_Bool)1 : (_Bool)0;

                    else
                      tmp_if_expr_21 = (_Bool)0;
                    if(tmp_if_expr_21)
                      tmp_if_expr_22 = (_Bool)1;

                    else
                      tmp_if_expr_22 = (signed int)*s == 46 ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr_22)
                      tmp_if_expr_23 = (_Bool)1;

                    else
                      tmp_if_expr_23 = (signed int)*s == 47 ? (_Bool)1 : (_Bool)0;
                    tmp_if_expr_24 = tmp_if_expr_23 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr_24 = (_Bool)0;
                  if(!tmp_if_expr_24)
                    break;

                  tmp_post_25 = i;
                  i = i + 1;
                  tmp_post_26 = s;
                  s = s + 1l;
                  ipstr2[(signed long int)tmp_post_25] = *tmp_post_26;
                }
                while((_Bool)1);
                if(i == 0)
                {
                  signed int return_value_parse_hostname_27;
                  return_value_parse_hostname_27=parse_hostname(line, lineid, ipstr, ipstr2, len);
                  return return_value_parse_hostname_27;
                }

                ipstr2[(signed long int)i] = (char)0;
                do
                {
                  if((signed int)*s == 32)
                    tmp_if_expr_28 = (_Bool)1;

                  else
                    tmp_if_expr_28 = (signed int)*s == 9 ? (_Bool)1 : (_Bool)0;
                  if(!tmp_if_expr_28)
                    break;

                  s = s + 1l;
                }
                while((_Bool)1);
                if((signed int)*s == 35)
                  tmp_if_expr_29 = (_Bool)1;

                else
                  tmp_if_expr_29 = (signed int)*s == 59 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_29)
                  return 2;

                else
                {
                  if((signed int)*s == 13)
                    tmp_if_expr_30 = (_Bool)1;

                  else
                    tmp_if_expr_30 = (signed int)*s == 10 ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr_30)
                    tmp_if_expr_31 = (_Bool)1;

                  else
                    tmp_if_expr_31 = (signed int)*s == 0 ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr_31)
                    return 2;

                  else
                  {
                    signed int return_value_parse_hostname_32;
                    return_value_parse_hostname_32=parse_hostname(line, lineid, ipstr, ipstr2, len);
                    return return_value_parse_hostname_32;
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

// print_addr
// file iprange.c line 154
static inline void print_addr(unsigned int addr, signed int prefix)
{
  if(prefix >= 0 && !(prefix >= 33))
    prefix_counters[(signed long int)prefix] = prefix_counters[(signed long int)prefix] + 1;

  char *return_value_ip2str_1;
  char *return_value_ip2str_2;
  if(split_range_disable_printing == 0)
  {
    if(!(prefix >= 32))
    {
      return_value_ip2str_1=ip2str(addr);
      printf("%s%s/%d%s\n", print_prefix_nets, return_value_ip2str_1, prefix, print_suffix_nets);
    }

    else
    {
      return_value_ip2str_2=ip2str(addr);
      printf("%s%s%s\n", print_prefix_ips, return_value_ip2str_2, print_suffix_ips);
    }
  }

}

// print_addr_range
// file iprange.c line 318
static inline void print_addr_range(unsigned int lo, unsigned int hi)
{
  if(!(hi >= lo))
  {
    unsigned int t = hi;
    char *return_value_ip2str_1;
    return_value_ip2str_1=ip2str(lo);
    fprintf(stderr, "%s: WARNING: invalid range reversed start=%s", PROG, return_value_ip2str_1);
    char *return_value_ip2str_2;
    return_value_ip2str_2=ip2str(hi);
    fprintf(stderr, " end=%s\n", return_value_ip2str_2);
    hi = lo;
    lo = t;
  }

  if(lo == hi)
  {
    char *return_value_ip2str_3;
    return_value_ip2str_3=ip2str(lo);
    printf("%s%s-", print_prefix_ips, return_value_ip2str_3);
    char *return_value_ip2str_4;
    return_value_ip2str_4=ip2str(hi);
    printf("%s%s\n", return_value_ip2str_4, print_suffix_ips);
  }

  else
  {
    char *return_value_ip2str_5;
    return_value_ip2str_5=ip2str(lo);
    printf("%s%s-", print_prefix_nets, return_value_ip2str_5);
    char *return_value_ip2str_6;
    return_value_ip2str_6=ip2str(hi);
    printf("%s%s\n", return_value_ip2str_6, print_suffix_nets);
  }
}

// print_addr_single
// file iprange.c line 344
static inline void print_addr_single(unsigned int x)
{
  char *return_value_ip2str_1;
  return_value_ip2str_1=ip2str(x);
  printf("%s%s%s\n", print_prefix_ips, return_value_ip2str_1, print_suffix_ips);
}

// set_bit
// file iprange.c line 57
static inline unsigned int set_bit(unsigned int addr, signed int bitno, signed int val)
{
  if(!(val == 0))
    return addr | (unsigned int)(1 << 32 - bitno);

  else
    return addr & (unsigned int)~(1 << 32 - bitno);
}

// split_range
// file iprange.c line 178
static inline signed int split_range(unsigned int addr, signed int prefix, unsigned int lo, unsigned int hi)
{
  unsigned int bc;
  unsigned int lower_half;
  unsigned int upper_half;
  if(!(hi >= lo))
  {
    unsigned int t = hi;
    char *return_value_ip2str_1;
    return_value_ip2str_1=ip2str(lo);
    fprintf(stderr, "%s: WARNING: invalid range reversed start=%s", PROG, return_value_ip2str_1);
    char *return_value_ip2str_2;
    return_value_ip2str_2=ip2str(hi);
    fprintf(stderr, " end=%s\n", return_value_ip2str_2);
    hi = lo;
    lo = t;
  }

  if(prefix >= 33 || !(prefix >= 0))
  {
    fprintf(stderr, "%s: Invalid netmask %d!\n", PROG, prefix);
    return 0;
  }

  else
  {
    bc=broadcast(addr, prefix);
    if(!(bc >= hi) || !(lo >= addr))
    {
      fprintf(stderr, "%s: Out of range limits: %x, %x for network %x/%d, broadcast: %x!\n", PROG, lo, hi, addr, prefix, bc);
      return 0;
    }

    else
      if(hi == bc && lo == addr)
      {
        if(prefix_enabled[(signed long int)prefix] == 0)
          goto __CPROVER_DUMP_L4;

        print_addr(addr, prefix);
        return 1;
      }

      else
      {

      __CPROVER_DUMP_L4:
        ;
        prefix = prefix + 1;
        lower_half = addr;
        upper_half=set_bit(addr, prefix, 1);
        if(!(hi >= upper_half))
        {
          signed int return_value_split_range_3;
          return_value_split_range_3=split_range(lower_half, prefix, lo, hi);
          return return_value_split_range_3;
        }

        else
          if(lo >= upper_half)
          {
            signed int return_value_split_range_4;
            return_value_split_range_4=split_range(upper_half, prefix, lo, hi);
            return return_value_split_range_4;
          }

        unsigned int return_value_broadcast_5;
        return_value_broadcast_5=broadcast(lower_half, prefix);
        signed int return_value_split_range_6;
        return_value_split_range_6=split_range(lower_half, prefix, lo, return_value_broadcast_5);
        signed int return_value_split_range_7;
        return_value_split_range_7=split_range(upper_half, prefix, upper_half, hi);
        return return_value_split_range_6 + return_value_split_range_7;
      }
  }
}

// str_to_netaddr
// file iprange.c line 250
static inline struct network_addr str_to_netaddr(char *ipstr, signed int *err)
{
  signed long int prefix = (signed long int)default_prefix;
  char *prefixstr;
  struct network_addr netaddr;
  prefixstr=strchr(ipstr, 47);
  _Bool tmp_if_expr_4;
  if(!(prefixstr == ((char *)NULL)))
  {
    *prefixstr = (char)0;
    prefixstr = prefixstr + 1l;
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 0;
    prefix=strtol(prefixstr, (char **)(void *)0, 10);
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    if(!(*return_value___errno_location_3 == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (signed int)*prefixstr == 0 ? (_Bool)1 : (_Bool)0;
    if(prefix >= 33l || !(prefix >= 0l) || tmp_if_expr_4)
    {
      unsigned int mask;
      unsigned int return_value_a_to_hl_2;
      return_value_a_to_hl_2=a_to_hl(prefixstr, err);
      mask = ~return_value_a_to_hl_2;
      prefix = (signed long int)32;
      for( ; !((1u & mask) == 0u); prefix = prefix - 1l)
        mask = mask >> 1;
      if(!(mask == 0u))
      {
        if(!(err == ((signed int *)NULL)))
          *err = *err + 1;

        fprintf(stderr, "%s: Invalid netmask %s\n", PROG, prefixstr);
        netaddr.addr = (unsigned int)0;
        netaddr.broadcast = (unsigned int)0;
        return netaddr;
      }

    }

  }

  unsigned int return_value_a_to_hl_5;
  if(!(cidr_use_network == 0))
  {
    return_value_a_to_hl_5=a_to_hl(ipstr, err);
    netaddr.addr=network(return_value_a_to_hl_5, (signed int)prefix);
  }

  else
    netaddr.addr=a_to_hl(ipstr, err);
  netaddr.broadcast=broadcast(netaddr.addr, (signed int)prefix);
  return netaddr;
}

// usage
// file iprange.c line 2104
static void usage(const char *me)
{
  fprintf(stdout, "iprange manages IP ranges\n\nUsage: %s [options] file1 file2 file3 ...\n\nOptions:\nmultiple options are aliases\n\nCIDR output modes:\n\t--optimize\n\t--combine\n\t--merge\n\t--union\n\t-J\n\t\t> MERGE mode (the default)\n\t\tReturns all IPs found on all files.\n\t\tThe resulting set is sorted.\n\n\t--common\n\t--intersect\n\t\t> COMMON mode\n\t\tIntersect all files to find their common IPs.\n\t\tThe resulting set is sorted.\n\n\t--except\n\t--exclude-next\n\t\t> EXCEPT mode\n\t\tHere is how it works:\n\t\t(1) merge all files before this parameter (ipset A);\n\t\t(2) remove all IPs found in the files after this\n\t\tparameter, from ipset A and print what remains.\n\t\tThe resulting set is sorted.\n\n\t--diff\n\t--diff-next\n\t\t> DIFF mode\n\t\tHere is how it works:\n\t\t(1) merge all files before this parameter (ipset A);\n\t\t(2) merge all files after this parameter (ipset B);\n\t\t(3) print all differences between A and B, i.e IPs\n\t\tfound is either A or B, but not both.\n\t\tThe resulting set is sorted.\n\t\tWhen there are differences between A and B, iprange\n\t\texits with 1, with 0 otherwise.\n\t--ipset-reduce PERCENT\n\t--reduce-factor PERCENT\n\t\t> IPSET REDUCE mode\n\t\tMerge all files and print the merged set,\n\t\tbut try to reduce the number of prefixes (subnets)\n\t\tfound, while allowing some increase in entries.\n\t\tThe PERCENT is how much percent to allow increase\n\t\ton the number of entries in order to reduce\n\t\tthe prefixes (subnets)\n\t\t(the internal default PERCENT is 20).\n\t\tUse -v to see exactly what it does.\n\t\tThe resulting set is sorted.\n\n\t--ipset-reduce-entries ENTRIES\n\t--reduce-entries ENTRIES\n\t\t> IPSET REDUCE mode\n\t\tAllow increasing the entries above PERCENT,\n\t\tif they are below ENTRIES\n\t\t(the internal default ENTRIES is 16384).\n\n\nCSV output modes:\n\t--compare\n\t\t> COMPARE ALL mode\n\t\tCompare all files with all other files.\n\t\tAdd --header to get the CSV header too.\n\n\t--compare-first\n\t\t> COMPARE FIRST mode\n\t\tCompare the first file with all other files.\n\t\tAdd --header to get the CSV header too.\n\n\t--compare-next\n\t\t> COMPARE NEXT mode\n\t\tCompare all the files that appear before this\n\t\tparameter, to all files that appear after this\n\t\tparameter.\n\t\tAdd --header to get the CSV header too.\n\n\t--count-unique\n\t-C\n\t\t> COUNT UNIQUE mode\n\t\tMerge all files and print its counts.\n\t\tAdd --header to get the CSV header too.\n\n\t--count-unique-all\n\t\t> COUNT UNIQUE ALL mode\n\t\tPrint counts for each file.\n\t\tAdd --header to get the CSV header too.\n\n\nControlling input:\n\t--dont-fix-network\n\t\tBy default, the network address of all CIDRs\n\t\tis used (i.e., 1.1.1.17/24 is read as 1.1.1.0/24):\n\t\tthis option disables this feature\n\t\t(i.e., 1.1.1.17/24 is read as 1.1.1.17-1.1.1.255).\n\n\t--default-prefix PREFIX\n\t-p PREFIX\n\t\tSet the default prefix for all IPs without mask\n\t\t(the default is 32).\n\n\nControlling CIDR output:\n\t--min-prefix N\n\t\tDo not generate prefixes larger than N,\n\t\ti.e., if N is 24 then /24 to /32 entries will be\n\t\tgenerated (a /16 network will be generated\n\t\tusing multiple /24 networks).\n\t\tThis is useful to optimize netfilter/iptables\n\t\tipsets where each different prefix increases the\n\t\tlookup time for each packet whereas the number of\n\t\tentries in the ipset do not affect its performance.\n\t\tWith this setting more entries will be produced\n\t\tto accomplish the same match.\n\t\tWARNING: misuse of this parameter can create a large\n\t\tnumber of entries in the generated set.\n\n\t--prefixes N,N,N, ...\n\t\tEnable only the given prefixes to express all CIDRs;\n\t\tprefix 32 is always enabled.\n\t\tWARNING: misuse of this parameter can create a large\n\t\tnumber of entries in the generated set.\n\n\t--print-ranges\n\t-j\n\t\tPrint IP ranges (A.A.A.A-B.B.B.B)\n\t\t(the default is to print CIDRs (A.A.A.A/B)).\n\t\tIt only applies when the output is not CSV.\n\n\t--print-single-ips\n\t-1\n\t\tPrint single IPs;\n\t\tthis can produce large output\n\t\t(the default is to print CIDRs (A.A.A.A/B)).\n\t\tIt only applies when the output is not CSV.\n\n\t--print-binary\n\t\tPrint binary data:\n\t\tthis is the fastest way to print a large ipset.\n\t\tThe result can be read by iprange on the same\n\t\tarchitecture (no conversion of endianness).\n\n\t--print-prefix STRING\n\t\tPrint STRING before each IP, range or CIDR.\n\t\tThis sets both --print-prefix-ips and\n\t\t--print-prefix-nets .\n\n\t--print-prefix-ips STRING\n\t\tPrint STRING before each single IP:\n\t\tuseful for entering single IPs to a different\n\t\tipset than the networks.\n\n\t--print-prefix-nets STRING\n\t\tPrint STRING before each range or CIDR:\n\t\tuseful for entering sunbets to a different\n\t\tipset than single IPs.\n\n\t--print-suffix STRING\n\t\tPrint STRING after each IP, range or CIDR.\n\t\tThis sets both --print-suffix-ips and\n\t\t--print-suffix-nets .\n\n\t--print-suffix-ips STRING\n\t\tPrint STRING after each single IP:\n\t\tuseful for giving single IPs different\n\t\tipset options.\n\n\t--print-suffix-nets STRING\n\t\tPrint STRING after each range or CIDR:\n\t\tuseful for giving subnets different\n\t\tipset options.\n\n\t--quiet\n\t\tDo not print the actual ipset.\n\t\tCan only be used in DIFF mode.\n\n\nControlling CSV output:\n\t--header\n\t\tWhen the output is CSV, print the header line\n\t\t(the default is to not print the header line).\n\n\nControlling DNS resolution:\n\t--dns-threads NUMBER\n\t\tThe number of parallel DNS queries to execute\n\t\twhen the input files contain hostnames\n\t\t(the default is %d).\n\n\t--dns-silent\n\t\tDo not print DNS resolution errors\n\t\t(the default is to print all DNS related errors).\n\n\t--dns-progress\n\t\tPrint DNS resolution progress bar.\n\n\nOther options:\n\t--has-compare\n\t--has-reduce\n\t\tExits with 0,\n\t\tother versions of iprange will exit with 1.\n\t\tUse this option in scripts to find if this\n\t\tversion of iprange is present in a system.\n\n\t-v\n\t\tBe verbose on stderr.\n\n\nGetting help:\n\t--version\n\t\tPrint version and exit.\n\n\t--help\n\t-h\n\t\tPrint this message and exit.\n\n\nFiles:\nInput files:\n\t> fileN\n\t\tA filename or - for stdin.\n\t\tEach filename can be followed by [as NAME]\n\t\tto change its name in the CSV output.\n\t\tIf no filename is given, stdin is assumed.\n\n\t\tFiles may contain any or all of the following:\n\t\t(1) comments starting with hashes (#) or semicolons (;);\n\t\t(2) one IP per line (without mask);\n\t\t(3) a CIDR per line (A.A.A.A/B);\n\t\t(4) an IP range per line (A.A.A.A - B.B.B.B);\n\t\t(5) a CIDR range per line (A.A.A.A/B - C.C.C.C/D);\n\t\tthe range is calculated as the network address of\n\t\tA.A.A.A/B to the broadcast address of C.C.C.C/D\n\t\t(this is affected by --dont-fix-network);\n\t\t(6) CIDRs can be given in either prefix or netmask\n\t\tformat in all cases (including ranges);\n\t\t(7) one hostname per line, to be resolved with DNS\n\t\t(if the IP resolves to multiple IPs, all of them\n\t\twill be added to the ipset)\n\t\thostnames cannot be given as ranges;\n\t\t(8) spaces and empty lines are ignored.\n\n\t\tAny number of files can be given.\n\n", me, dns_threads_max);
  exit(1);
}

// version
// file iprange.c line 2380
static void version()
{
  fprintf(stdout, "iprange 1.0.2\nCopyright (C) 2015 Costa Tsaousis for FireHOL (Refactored)\nCopyright (C) 2004 Paul Townsend (Adapted)\nCopyright (C) 2003 Gabriel L. Somlo (Original)\n\nLicense: GPLv2+: GNU GPL version 2 or later <http://gnu.org/licenses/gpl2.html>.\nThis program comes with ABSOLUTELY NO WARRANTY; This is free software, and\nyou are welcome to redistribute it under certain conditions;\nSee COPYING distributed in the source for details.\n");
  exit(1);
}

