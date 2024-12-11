// tag-#anon#ST[ARR1{SYM#tag-#anon#ST[ARR8{S64}_S64_'__cancel_jmp_buf'||S32'__mask_was_saved'||U32'_pad0'|]#}_SYM#tag-#anon#ST[ARR8{S64}_S64_'__cancel_jmp_buf'||S32'__mask_was_saved'||U32'_pad0'|]#_'__cancel_jmp_buf'||ARR4{*{V}_V_}_*{V}_V__'__pad'|]
// file /usr/include/pthread.h line 525
struct anonymous;

// tag-#anon#ST[ARR8{S64}_S64_'__cancel_jmp_buf'||S32'__mask_was_saved'||U32'_pad0'|]
// file /usr/include/pthread.h line 527
struct anonymous_4;

// tag-#anon#UN[ARR16{S8}_S8_'ifrn_name'|]
// file /usr/include/net/if.h line 130
union anonymous_0;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_1;

// tag-#anon#UN[SYM#tag-sockaddr#'ifru_addr'||SYM#tag-sockaddr#'ifru_dstaddr'||SYM#tag-sockaddr#'ifru_broadaddr'||SYM#tag-sockaddr#'ifru_netmask'||SYM#tag-sockaddr#'ifru_hwaddr'||S16'ifru_flags'||S32'ifru_ivalue'||S32'ifru_mtu'||SYM#tag-ifmap#'ifru_map'||ARR16{S8}_S8_'ifru_slave'||ARR16{S8}_S8_'ifru_newname'||*{S8}_S8_'ifru_data'|]
// file /usr/include/net/if.h line 135
union anonymous_3;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__jmp_buf_tag
// file /usr/include/pthread.h line 744
struct __jmp_buf_tag;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_ether_arp_frame
// file arp.c line 29
struct _ether_arp_frame;

// tag-_req_struct
// file arp.c line 34
struct _req_struct;

// tag-arphdr
// file /usr/include/net/if_arp.h line 54
struct arphdr;

// tag-arpreq
// file /usr/include/net/if_arp.h line 138
struct arpreq;

// tag-arptab_entry
// file parprouted.h line 52
struct arptab_entry;

// tag-ether_arp
// file /usr/include/netinet/if_ether.h line 71
struct ether_arp;

// tag-ether_header
// file /usr/include/net/ethernet.h line 38
struct ether_header;

// tag-ifmap
// file /usr/include/net/if.h line 111
struct ifmap;

// tag-ifreq
// file /usr/include/net/if.h line 126
struct ifreq;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 309
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_ll
// file /usr/include/linux/if_packet.h line 12
struct sockaddr_ll;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __pthread_register_cancel
// file /usr/include/pthread.h line 682
extern void __pthread_register_cancel(struct anonymous *);
// __pthread_unregister_cancel
// file /usr/include/pthread.h line 694
extern void __pthread_unregister_cancel(struct anonymous *);
// __pthread_unwind_next
// file /usr/include/pthread.h line 735
extern void __pthread_unwind_next(struct anonymous *);
// __sigsetjmp
// file /usr/include/pthread.h line 745
extern signed int __sigsetjmp(struct __jmp_buf_tag *, signed int);
// __xpg_basename
// file /usr/include/libgen.h line 34
extern char * __xpg_basename(char *);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// arp
// file parprouted.h line 75
extern void * arp(char *ifname);
// arp_recv
// file arp.c line 68
signed int arp_recv(signed int sock, struct _ether_arp_frame *frame);
// arp_reply
// file arp.c line 88
void arp_reply(struct _ether_arp_frame *reqframe, struct sockaddr_ll *ifs);
// arp_req
// file parprouted.h line 77
extern void arp_req(char *ifname, struct in_addr remaddr, signed int gratuitous);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// cleanup
// file parprouted.c line 333
void cleanup();
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// ferror
// file /usr/include/stdio.h line 830
extern signed int ferror(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// findentry
// file parprouted.c line 69
signed int findentry(struct in_addr ipaddr);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// inet_aton
// file /usr/include/arpa/inet.h line 73
extern signed int inet_aton(const char *, struct in_addr *);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// ipaddr_known
// file arp.c line 47
signed int ipaddr_known(struct arptab_entry *list, struct in_addr addr, char *ifname);
// main_thread
// file parprouted.c line 355
void * main_thread();
// main_thread::1::1::__cancel_routine_object
//
void __cancel_routine_object(void *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parseproc
// file parprouted.c line 213
extern void parseproc();
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// processarp
// file parprouted.c line 164
extern void processarp(signed int in_cleanup);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_1 *, const union anonymous_2 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_1 *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous_1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_1 *);
// pthread_setcancelstate
// file /usr/include/pthread.h line 508
extern signed int pthread_setcancelstate(signed int, signed int *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 512
extern signed int pthread_setcanceltype(signed int, signed int *);
// pthread_testcancel
// file /usr/include/pthread.h line 520
extern void pthread_testcancel(void);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// refresharp
// file parprouted.h line 76
extern void refresharp(struct arptab_entry *list);
// remove_other_routes
// file parprouted.c line 86
signed int remove_other_routes(struct in_addr ipaddr, const char *dev);
// replace_entry
// file parprouted.c line 40
struct arptab_entry * replace_entry(struct in_addr ipaddr, char *dev);
// route_add
// file parprouted.c line 133
signed int route_add(struct arptab_entry *cur_entry);
// route_remove
// file parprouted.c line 103
signed int route_remove(struct arptab_entry *cur_entry);
// rq_add
// file arp.c line 219
signed int rq_add(struct _ether_arp_frame *req_frame, struct sockaddr_ll *req_if);
// rq_process
// file arp.c line 265
void rq_process(struct in_addr ipaddr, signed int ifindex);
// sendto
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 163
extern signed long int sendto(signed int, const void *, unsigned long int, signed int, struct sockaddr *, unsigned int);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// sighandler
// file parprouted.c line 349
void sighandler();
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);

struct anonymous_4
{
  // __cancel_jmp_buf
  signed long int __cancel_jmp_buf[8l];
  // __mask_was_saved
  signed int __mask_was_saved;
};

struct anonymous
{
  // __cancel_jmp_buf
  struct anonymous_4 __cancel_jmp_buf[1l];
  // __pad
  void *__pad[4l];
};

union anonymous_0
{
  // ifrn_name
  char ifrn_name[16l];
};

union anonymous_2
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

union anonymous_1
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
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

struct ifmap
{
  // mem_start
  unsigned long int mem_start;
  // mem_end
  unsigned long int mem_end;
  // base_addr
  unsigned short int base_addr;
  // irq
  unsigned char irq;
  // dma
  unsigned char dma;
  // port
  unsigned char port;
};

union anonymous_3
{
  // ifru_addr
  struct sockaddr ifru_addr;
  // ifru_dstaddr
  struct sockaddr ifru_dstaddr;
  // ifru_broadaddr
  struct sockaddr ifru_broadaddr;
  // ifru_netmask
  struct sockaddr ifru_netmask;
  // ifru_hwaddr
  struct sockaddr ifru_hwaddr;
  // ifru_flags
  signed short int ifru_flags;
  // ifru_ivalue
  signed int ifru_ivalue;
  // ifru_mtu
  signed int ifru_mtu;
  // ifru_map
  struct ifmap ifru_map;
  // ifru_slave
  char ifru_slave[16l];
  // ifru_newname
  char ifru_newname[16l];
  // ifru_data
  char *ifru_data;
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

struct ether_header
{
  // ether_dhost
  unsigned char ether_dhost[6l];
  // ether_shost
  unsigned char ether_shost[6l];
  // ether_type
  unsigned short int ether_type;
} __attribute__ ((__packed__));

struct arphdr
{
  // ar_hrd
  unsigned short int ar_hrd;
  // ar_pro
  unsigned short int ar_pro;
  // ar_hln
  unsigned char ar_hln;
  // ar_pln
  unsigned char ar_pln;
  // ar_op
  unsigned short int ar_op;
};

struct ether_arp
{
  // ea_hdr
  struct arphdr ea_hdr;
  // arp_sha
  unsigned char arp_sha[6l];
  // arp_spa
  unsigned char arp_spa[4l];
  // arp_tha
  unsigned char arp_tha[6l];
  // arp_tpa
  unsigned char arp_tpa[4l];
};

struct _ether_arp_frame
{
  // ether_hdr
  struct ether_header ether_hdr;
  // arp
  struct ether_arp arp;
} __attribute__ ((__packed__));

struct sockaddr_ll
{
  // sll_family
  unsigned short int sll_family;
  // sll_protocol
  unsigned short int sll_protocol;
  // sll_ifindex
  signed int sll_ifindex;
  // sll_hatype
  unsigned short int sll_hatype;
  // sll_pkttype
  unsigned char sll_pkttype;
  // sll_halen
  unsigned char sll_halen;
  // sll_addr
  unsigned char sll_addr[8l];
};

struct _req_struct
{
  // req_frame
  struct _ether_arp_frame req_frame;
  // req_if
  struct sockaddr_ll req_if;
  // next
  struct _req_struct *next;
};

struct arpreq
{
  // arp_pa
  struct sockaddr arp_pa;
  // arp_ha
  struct sockaddr arp_ha;
  // arp_flags
  signed int arp_flags;
  // arp_netmask
  struct sockaddr arp_netmask;
  // arp_dev
  char arp_dev[16l];
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct arptab_entry
{
  // ipaddr_ia
  struct in_addr ipaddr_ia;
  // hwaddr
  char hwaddr[20l];
  // ifname
  char ifname[20l];
  // tstamp
  signed long int tstamp;
  // route_added
  signed int route_added;
  // incomplete
  signed int incomplete;
  // want_route
  signed int want_route;
  // next
  struct arptab_entry *next;
};

struct ifreq
{
  // ifr_ifrn
  union anonymous_0 ifr_ifrn;
  // ifr_ifru
  union anonymous_3 ifr_ifru;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
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


// arptab
// file parprouted.c line 37
struct arptab_entry **arptab;
// arptab_mutex
// file parprouted.c line 38
union anonymous_1 arptab_mutex;
// debug
// file parprouted.c line 24
signed int debug = 0;
// errstr
// file parprouted.c line 29
char *errstr;
// ifaces
// file parprouted.c line 34
char *ifaces[10l];
// last_iface_idx
// file parprouted.c line 35
signed int last_iface_idx = -1;
// last_thread_idx
// file parprouted.c line 32
signed int last_thread_idx = -1;
// my_threads
// file parprouted.c line 31
unsigned long int my_threads[11l];
// option_arpperm
// file parprouted.c line 26
signed int option_arpperm = 0;
// perform_shutdown
// file parprouted.c line 27
static signed int perform_shutdown = 0;
// progname
// file parprouted.c line 23
char *progname;
// req_queue
// file arp.c line 40
struct _req_struct *req_queue = (struct _req_struct *)(void *)0;
// req_queue_len
// file arp.c line 42
signed int req_queue_len = 0;
// req_queue_mutex
// file arp.c line 43
union anonymous_1 req_queue_mutex;
// req_queue_tail
// file arp.c line 41
struct _req_struct *req_queue_tail = (struct _req_struct *)(void *)0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// verbose
// file parprouted.c line 25
signed int verbose = 0;

// arp
// file parprouted.h line 75
extern void * arp(char *ifname)
{
  signed int sock;
  signed int i;
  struct sockaddr_ll ifs;
  struct ifreq ifr;
  pthread_setcancelstate(0, (signed int *)(void *)0);
  pthread_setcanceltype(0, (signed int *)(void *)0);
  unsigned short int tmp_statement_expression_1;
  unsigned short int arp__1__1____v;
  unsigned short int __x = (unsigned short int)0x0806;
  asm("rorw _8, %w0" : "=r"(arp__1__1____v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = arp__1__1____v;
  sock=socket(17, 3, (signed int)tmp_statement_expression_1);
  if(sock == -1)
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    fprintf(stderr, "Socket error %d.\n", *return_value___errno_location_2);
    exit(1);
  }

  memset((void *)ifr.ifr_ifrn.ifrn_name, 0, (unsigned long int)16);
  __builtin_strncpy(ifr.ifr_ifrn.ifrn_name, (char *)ifname, (unsigned long int)16);
  signed int return_value_ioctl_5;
  return_value_ioctl_5=ioctl(sock, (unsigned long int)0x8927, &ifr);
  if(!(return_value_ioctl_5 >= 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    char *return_value_strerror_4;
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    syslog(3, "error: ioctl SIOCGIFHWADDR for %s: %s\n", (char *)ifname, return_value_strerror_4);
    abort();
  }

  memset((void *)ifs.sll_addr, 0, (unsigned long int)6);
  memcpy((void *)ifs.sll_addr, (const void *)ifr.ifr_ifru.ifru_hwaddr.sa_data, (unsigned long int)6);
  signed int return_value_ioctl_8;
  return_value_ioctl_8=ioctl(sock, (unsigned long int)0x8933, &ifr);
  if(!(return_value_ioctl_8 >= 0))
  {
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    char *return_value_strerror_7;
    return_value_strerror_7=strerror(*return_value___errno_location_6);
    syslog(3, "error: ioctl SIOCGIFINDEX for %s: %s", (char *)ifname, return_value_strerror_7);
    abort();
  }

  ifs.sll_family = (unsigned short int)17;
  unsigned short int tmp_statement_expression_9;
  unsigned short int __v;
  unsigned short int arp__1__5____x = (unsigned short int)0x0806;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(arp__1__5____x) : "cc");
  tmp_statement_expression_9 = __v;
  ifs.sll_protocol = tmp_statement_expression_9;
  ifs.sll_ifindex = ifr.ifr_ifru.ifru_ivalue;
  ifs.sll_hatype = (unsigned short int)1;
  ifs.sll_pkttype = (unsigned char)1;
  ifs.sll_halen = (unsigned char)6;
  signed int return_value_bind_11;
  return_value_bind_11=bind(sock, (struct sockaddr *)&ifs, (unsigned int)sizeof(struct sockaddr_ll) /*20ul*/ );
  if(!(return_value_bind_11 >= 0))
  {
    signed int *return_value___errno_location_10;
    return_value___errno_location_10=__errno_location();
    fprintf(stderr, "Bind %s: %d\n", (char *)ifname, *return_value___errno_location_10);
    abort();
  }

  unsigned short int tmp_statement_expression_23;
  char *return_value_inet_ntoa_16;
  signed int tmp_statement_expression_21;
  unsigned short int tmp_statement_expression_12;
  char *return_value_inet_ntoa_24;
  signed int tmp_statement_expression_25;
  char *return_value_inet_ntoa_27;
  while((_Bool)1)
  {
    struct _ether_arp_frame frame;
    unsigned long int src;
    unsigned long int dst;
    struct in_addr sia;
    struct in_addr dia;
    do
    {
      pthread_testcancel();
      usleep((unsigned int)300);
      signed int return_value_arp_recv_13;
      return_value_arp_recv_13=arp_recv(sock, &frame);
      if(return_value_arp_recv_13 >= 1)
      {
        unsigned short int arp__1__7__1__1____v;
        unsigned short int arp__1__7__1__1____x = (unsigned short int)2;
        asm("rorw _8, %w0" : "=r"(arp__1__7__1__1____v) : "0"(arp__1__7__1__1____x) : "cc");
        tmp_statement_expression_23 = arp__1__7__1__1____v;
        if(frame.arp.ea_hdr.ar_op == tmp_statement_expression_23)
        {
          struct arpreq k_arpreq;
          signed int arpsock;
          struct sockaddr_in *sin;
          arpsock=socket(2, 2, 0);
          if(!(arpsock >= 0))
          {
            signed int *return_value___errno_location_14;
            return_value___errno_location_14=__errno_location();
            char *return_value_strerror_15;
            return_value_strerror_15=strerror(*return_value___errno_location_14);
            syslog(3, "error: ARP socket for %s: %s", (char *)ifname, return_value_strerror_15);
            goto __CPROVER_DUMP_L20;
          }

          k_arpreq.arp_ha.sa_family = (unsigned short int)1;
          memcpy((void *)&k_arpreq.arp_ha.sa_data, (const void *)&frame.arp.arp_sha, sizeof(unsigned char [6l]) /*6ul*/ );
          k_arpreq.arp_flags = 0x02;
          if(!(option_arpperm == 0))
            k_arpreq.arp_flags = k_arpreq.arp_flags | 0x04;

          __builtin_strncpy(k_arpreq.arp_dev, ifname, sizeof(char [16l]) /*16ul*/ );
          k_arpreq.arp_pa.sa_family = (unsigned short int)2;
          sin = (struct sockaddr_in *)&k_arpreq.arp_pa;
          memcpy((void *)&sin->sin_addr.s_addr, (const void *)&frame.arp.arp_spa, sizeof(struct in_addr) /*4ul*/ );
          if(!(debug == 0))
          {
            return_value_inet_ntoa_16=inet_ntoa(sin->sin_addr);
            printf("Received reply: updating kernel ARP table for %s(%s).\n", return_value_inet_ntoa_16, (char *)ifname);
          }

          signed int return_value_ioctl_20;
          return_value_ioctl_20=ioctl(arpsock, (unsigned long int)0x8955, &k_arpreq);
          if(!(return_value_ioctl_20 >= 0))
          {
            char *return_value_inet_ntoa_17;
            return_value_inet_ntoa_17=inet_ntoa(sin->sin_addr);
            signed int *return_value___errno_location_18;
            return_value___errno_location_18=__errno_location();
            char *return_value_strerror_19;
            return_value_strerror_19=strerror(*return_value___errno_location_18);
            syslog(3, "error: ioctl SIOCSARP for %s(%s): %s", return_value_inet_ntoa_17, (char *)ifname, return_value_strerror_19);
            close(arpsock);
            goto __CPROVER_DUMP_L20;
          }

          close(arpsock);
          rq_process(sin->sin_addr, ifs.sll_ifindex);
          i = 0;
          for( ; last_iface_idx >= i; i = i + 1)
          {
            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp_22;
            return_value___builtin_strcmp_22=__builtin_strcmp(ifaces[(signed long int)i], ifname);
            tmp_statement_expression_21 = return_value___builtin_strcmp_22;
            if(!(tmp_statement_expression_21 == 0))
              arp_req(ifaces[(signed long int)i], sin->sin_addr, 1);

          }
        }

      }


    __CPROVER_DUMP_L20:
      ;
      unsigned short int arp__1__7__2____v;
      unsigned short int arp__1__7__2____x = (unsigned short int)1;
      asm("rorw _8, %w0" : "=r"(arp__1__7__2____v) : "0"(arp__1__7__2____x) : "cc");
      tmp_statement_expression_12 = arp__1__7__2____v;
    }
    while(!(frame.arp.ea_hdr.ar_op == tmp_statement_expression_12));
    memcpy((void *)&src, (const void *)(char *)frame.arp.arp_spa, (unsigned long int)4);
    memcpy((void *)&dst, (const void *)(char *)frame.arp.arp_tpa, (unsigned long int)4);
    dia.s_addr = (unsigned int)dst;
    sia.s_addr = (unsigned int)src;
    if(!(debug == 0))
    {
      return_value_inet_ntoa_24=inet_ntoa(dia);
      printf("Received ARP request for %s on iface %s\n", return_value_inet_ntoa_24, (char *)ifname);
    }

    signed int return_value_memcmp_28;
    return_value_memcmp_28=memcmp((const void *)&dia, (const void *)&sia, sizeof(struct in_addr) /*4ul*/ );
    if(!(return_value_memcmp_28 == 0))
    {
      if(!(dia.s_addr == 0u))
      {
        pthread_mutex_lock(&arptab_mutex);
        i = 0;
        for( ; last_iface_idx >= i; i = i + 1)
        {
          unsigned long int arp__1__7__3__1__1__1____s1_len;
          unsigned long int arp__1__7__3__1__1__1____s2_len;
          signed int return_value___builtin_strcmp_26;
          return_value___builtin_strcmp_26=__builtin_strcmp(ifaces[(signed long int)i], ifname);
          tmp_statement_expression_25 = return_value___builtin_strcmp_26;
          if(!(tmp_statement_expression_25 == 0))
            arp_req(ifaces[(signed long int)i], dia, 0);

        }
        if(!(debug == 0))
        {
          return_value_inet_ntoa_27=inet_ntoa(sia);
          printf("Adding %s to request queue\n", return_value_inet_ntoa_27);
        }

        rq_add(&frame, &ifs);
        pthread_mutex_unlock(&arptab_mutex);
      }

    }

  }
}

// arp_recv
// file arp.c line 68
signed int arp_recv(signed int sock, struct _ether_arp_frame *frame)
{
  char packet[4096l];
  signed int nread;
  memset((void *)frame, 0, sizeof(struct _ether_arp_frame) /*42ul*/ );
  signed long int return_value_recv_1;
  return_value_recv_1=recv(sock, (void *)&packet, sizeof(char [4096l]) /*4096ul*/ , 0);
  nread = (signed int)return_value_recv_1;
  if((unsigned long int)nread >= 43ul)
    nread = (signed int)sizeof(struct _ether_arp_frame) /*42ul*/ ;

  memcpy((void *)frame, (const void *)&packet, (unsigned long int)nread);
  return nread;
}

// arp_reply
// file arp.c line 88
void arp_reply(struct _ether_arp_frame *reqframe, struct sockaddr_ll *ifs)
{
  struct ether_arp *arp_reply__1__arp = &reqframe->arp;
  unsigned char ip[4l];
  signed int sock;
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)0x0806;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  sock=socket(17, 3, (signed int)tmp_statement_expression_1);
  signed int return_value_bind_4;
  return_value_bind_4=bind(sock, (struct sockaddr *)ifs, (unsigned int)sizeof(struct sockaddr_ll) /*20ul*/ );
  if(!(return_value_bind_4 >= 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    char *return_value_strerror_3;
    return_value_strerror_3=strerror(*return_value___errno_location_2);
    fprintf(stderr, "arp_reply() bind: %s\n", return_value_strerror_3);
    abort();
  }

  memcpy((void *)&reqframe->ether_hdr.ether_dhost, (const void *)&arp_reply__1__arp->arp_sha, (unsigned long int)6);
  memcpy((void *)&reqframe->ether_hdr.ether_shost, (const void *)ifs->sll_addr, (unsigned long int)6);
  memcpy((void *)&arp_reply__1__arp->arp_tha, (const void *)&arp_reply__1__arp->arp_sha, (unsigned long int)6);
  memcpy((void *)&arp_reply__1__arp->arp_sha, (const void *)ifs->sll_addr, (unsigned long int)6);
  memcpy((void *)ip, (const void *)&arp_reply__1__arp->arp_spa, (unsigned long int)4);
  memcpy((void *)&arp_reply__1__arp->arp_spa, (const void *)&arp_reply__1__arp->arp_tpa, (unsigned long int)4);
  memcpy((void *)&arp_reply__1__arp->arp_tpa, (const void *)ip, (unsigned long int)4);
  unsigned short int tmp_statement_expression_5;
  unsigned short int arp_reply__1__3____v;
  unsigned short int arp_reply__1__3____x = (unsigned short int)2;
  asm("rorw _8, %w0" : "=r"(arp_reply__1__3____v) : "0"(arp_reply__1__3____x) : "cc");
  tmp_statement_expression_5 = arp_reply__1__3____v;
  arp_reply__1__arp->ea_hdr.ar_op = tmp_statement_expression_5;
  if(!(debug == 0))
  {
    struct in_addr sia;
    struct in_addr dia;
    sia.s_addr = (unsigned int)*((signed long int *)arp_reply__1__arp->arp_spa);
    dia.s_addr = (unsigned int)*((signed long int *)arp_reply__1__arp->arp_tpa);
    char *return_value_inet_ntoa_6;
    return_value_inet_ntoa_6=inet_ntoa(sia);
    char *return_value_inet_ntoa_7;
    return_value_inet_ntoa_7=inet_ntoa(dia);
    printf("Replying to %s faking %s\n", return_value_inet_ntoa_6, return_value_inet_ntoa_7);
  }

  sendto(sock, (const void *)reqframe, sizeof(struct _ether_arp_frame) /*42ul*/ , 0, (struct sockaddr *)ifs, (unsigned int)sizeof(struct sockaddr_ll) /*20ul*/ );
  close(sock);
}

// arp_req
// file parprouted.h line 77
extern void arp_req(char *ifname, struct in_addr remaddr, signed int gratuitous)
{
  struct _ether_arp_frame frame;
  struct ether_arp *arp_req__1__arp = &frame.arp;
  signed int sock;
  struct sockaddr_ll ifs;
  struct ifreq ifr;
  unsigned long int ifaddr;
  struct sockaddr_in *sin;
  signed int tmp_statement_expression_1;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp_2;
  return_value___builtin_strcmp_2=__builtin_strcmp(ifname, "");
  tmp_statement_expression_1 = return_value___builtin_strcmp_2;
  unsigned short int tmp_statement_expression_3;
  unsigned short int tmp_statement_expression_10;
  unsigned short int tmp_statement_expression_14;
  unsigned short int tmp_statement_expression_15;
  unsigned short int tmp_statement_expression_16;
  unsigned short int tmp_statement_expression_17;
  char *return_value_inet_ntoa_18;
  if(!(tmp_statement_expression_1 == 0))
  {
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)0x0806;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_3 = __v;
    sock=socket(17, 3, (signed int)tmp_statement_expression_3);
    memset((void *)ifr.ifr_ifrn.ifrn_name, 0, (unsigned long int)16);
    __builtin_strncpy(ifr.ifr_ifrn.ifrn_name, (char *)ifname, (unsigned long int)16);
    signed int return_value_ioctl_6;
    return_value_ioctl_6=ioctl(sock, (unsigned long int)0x8927, &ifr);
    if(!(return_value_ioctl_6 >= 0))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      char *return_value_strerror_5;
      return_value_strerror_5=strerror(*return_value___errno_location_4);
      syslog(3, "error in arp_req(): ioctl SIOCGIFHWADDR for %s: %s\n", (char *)ifname, return_value_strerror_5);
      abort();
    }

    memset((void *)ifs.sll_addr, 0, (unsigned long int)6);
    memcpy((void *)ifs.sll_addr, (const void *)ifr.ifr_ifru.ifru_hwaddr.sa_data, (unsigned long int)6);
    signed int return_value_ioctl_9;
    return_value_ioctl_9=ioctl(sock, (unsigned long int)0x8933, &ifr);
    if(!(return_value_ioctl_9 >= 0))
    {
      signed int *return_value___errno_location_7;
      return_value___errno_location_7=__errno_location();
      char *return_value_strerror_8;
      return_value_strerror_8=strerror(*return_value___errno_location_7);
      syslog(3, "error in arp_req(): ioctl SIOCGIFINDEX for %s: %s", (char *)ifname, return_value_strerror_8);
      goto __CPROVER_DUMP_L21;
    }

    ifs.sll_family = (unsigned short int)17;
    unsigned short int arp_req__1__5____v;
    unsigned short int arp_req__1__5____x = (unsigned short int)0x0806;
    asm("rorw _8, %w0" : "=r"(arp_req__1__5____v) : "0"(arp_req__1__5____x) : "cc");
    tmp_statement_expression_10 = arp_req__1__5____v;
    ifs.sll_protocol = tmp_statement_expression_10;
    ifs.sll_ifindex = ifr.ifr_ifru.ifru_ivalue;
    ifs.sll_hatype = (unsigned short int)1;
    ifs.sll_pkttype = (unsigned char)1;
    ifs.sll_halen = (unsigned char)6;
    signed int return_value_ioctl_13;
    return_value_ioctl_13=ioctl(sock, (unsigned long int)0x8915, &ifr);
    if(return_value_ioctl_13 == 0)
    {
      sin = (struct sockaddr_in *)&ifr.ifr_ifru.ifru_addr;
      ifaddr = (unsigned long int)sin->sin_addr.s_addr;
    }

    else
    {
      signed int *return_value___errno_location_11;
      return_value___errno_location_11=__errno_location();
      char *return_value_strerror_12;
      return_value_strerror_12=strerror(*return_value___errno_location_11);
      syslog(3, "error: ioctl SIOCGIFADDR for %s: %s", (char *)ifname, return_value_strerror_12);
      goto __CPROVER_DUMP_L21;
    }
    memset((void *)&frame.ether_hdr.ether_dhost, 0xFF, (unsigned long int)6);
    memcpy((void *)&frame.ether_hdr.ether_shost, (const void *)ifs.sll_addr, (unsigned long int)6);
    unsigned short int arp_req__1__8____v;
    unsigned short int arp_req__1__8____x = (unsigned short int)0x0806;
    asm("rorw _8, %w0" : "=r"(arp_req__1__8____v) : "0"(arp_req__1__8____x) : "cc");
    tmp_statement_expression_14 = arp_req__1__8____v;
    frame.ether_hdr.ether_type = tmp_statement_expression_14;
    unsigned short int arp_req__1__9____v;
    unsigned short int arp_req__1__9____x = (unsigned short int)1;
    asm("rorw _8, %w0" : "=r"(arp_req__1__9____v) : "0"(arp_req__1__9____x) : "cc");
    tmp_statement_expression_15 = arp_req__1__9____v;
    arp_req__1__arp->ea_hdr.ar_hrd = tmp_statement_expression_15;
    unsigned short int arp_req__1__10____v;
    unsigned short int arp_req__1__10____x = (unsigned short int)0x0800;
    asm("rorw _8, %w0" : "=r"(arp_req__1__10____v) : "0"(arp_req__1__10____x) : "cc");
    tmp_statement_expression_16 = arp_req__1__10____v;
    arp_req__1__arp->ea_hdr.ar_pro = tmp_statement_expression_16;
    arp_req__1__arp->ea_hdr.ar_hln = (unsigned char)6;
    arp_req__1__arp->ea_hdr.ar_pln = (unsigned char)4;
    memset((void *)&arp_req__1__arp->arp_tha, 0, (unsigned long int)6);
    memcpy((void *)&arp_req__1__arp->arp_sha, (const void *)ifs.sll_addr, (unsigned long int)6);
    memcpy((void *)&arp_req__1__arp->arp_tpa, (const void *)&remaddr.s_addr, (unsigned long int)4);
    if(!(gratuitous == 0))
      memcpy((void *)&arp_req__1__arp->arp_spa, (const void *)&remaddr.s_addr, (unsigned long int)4);

    else
      memcpy((void *)&arp_req__1__arp->arp_spa, (const void *)&ifaddr, (unsigned long int)4);
    unsigned short int arp_req__1__11____v;
    unsigned short int arp_req__1__11____x = (unsigned short int)1;
    asm("rorw _8, %w0" : "=r"(arp_req__1__11____v) : "0"(arp_req__1__11____x) : "cc");
    tmp_statement_expression_17 = arp_req__1__11____v;
    arp_req__1__arp->ea_hdr.ar_op = tmp_statement_expression_17;
    if(!(debug == 0))
    {
      return_value_inet_ntoa_18=inet_ntoa(remaddr);
      printf("Sending ARP request for %s to %s\n", return_value_inet_ntoa_18, ifname);
    }

    sendto(sock, (const void *)&frame, sizeof(struct _ether_arp_frame) /*42ul*/ , 0, (struct sockaddr *)&ifs, (unsigned int)sizeof(struct sockaddr_ll) /*20ul*/ );
    close(sock);
  }


__CPROVER_DUMP_L21:
  ;
}

// cleanup
// file parprouted.c line 333
void cleanup()
{
  syslog(6, "Received signal; cleaning up.");
  pthread_mutex_trylock(&arptab_mutex);
  processarp(1);
  syslog(6, "Terminating.");
  exit(1);
}

// findentry
// file parprouted.c line 69
signed int findentry(struct in_addr ipaddr)
{
  struct arptab_entry *cur_entry = *arptab;
  struct arptab_entry *prev_entry = (struct arptab_entry *)(void *)0;
  for( ; !(cur_entry == ((struct arptab_entry *)NULL)); cur_entry = cur_entry->next)
  {
    if(ipaddr.s_addr == cur_entry->ipaddr_ia.s_addr)
      break;

    prev_entry = cur_entry;
  }
  if(cur_entry == ((struct arptab_entry *)NULL))
    return 0;

  else
    return 1;
}

// ipaddr_known
// file arp.c line 47
signed int ipaddr_known(struct arptab_entry *list, struct in_addr addr, char *ifname)
{
  signed int tmp_statement_expression_1;
  for( ; !(list == ((struct arptab_entry *)NULL)); list = list->next)
    if(addr.s_addr == list->ipaddr_ia.s_addr)
    {
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp_2;
      return_value___builtin_strcmp_2=__builtin_strcmp(ifname, list->ifname);
      tmp_statement_expression_1 = return_value___builtin_strcmp_2;
      if(!(tmp_statement_expression_1 == 0))
      {
        if(list->incomplete == 0)
          return 1;

      }

    }

  char *return_value_inet_ntoa_3;
  if(!(debug == 0))
  {
    return_value_inet_ntoa_3=inet_ntoa(addr);
    printf("Did not find match for %s(%s)\n", return_value_inet_ntoa_3, ifname);
  }

  return 0;
}

// main
// file parprouted.c line 387
signed int main(signed int argc, char **argv)
{
  signed int child_pid;
  signed int i;
  signed int help = 1;
  char *return_value___xpg_basename_1;
  return_value___xpg_basename_1=__xpg_basename(argv[(signed long int)0]);
  progname = (char *)return_value___xpg_basename_1;
  i = 1;
  signed int tmp_statement_expression_9;
  signed int tmp_statement_expression_7;
  signed int tmp_statement_expression_2;
  _Bool tmp_if_expr_6;
  signed int tmp_statement_expression_4;
  for( ; !(i >= argc); i = i + 1)
  {
    unsigned long int main__1__1__1__1____s1_len;
    unsigned long int main__1__1__1__1____s2_len;
    signed int return_value___builtin_strcmp_10;
    return_value___builtin_strcmp_10=__builtin_strcmp(argv[(signed long int)i], "-d");
    tmp_statement_expression_9 = return_value___builtin_strcmp_10;
    if(tmp_statement_expression_9 == 0)
    {
      debug = 1;
      help = 0;
    }

    else
    {
      unsigned long int main__1__1__1__3____s1_len;
      unsigned long int main__1__1__1__3____s2_len;
      signed int return_value___builtin_strcmp_8;
      return_value___builtin_strcmp_8=__builtin_strcmp(argv[(signed long int)i], "-p");
      tmp_statement_expression_7 = return_value___builtin_strcmp_8;
      if(tmp_statement_expression_7 == 0)
      {
        option_arpperm = 1;
        help = 0;
      }

      else
      {
        unsigned long int main__1__1__1__5____s1_len;
        unsigned long int main__1__1__1__5____s2_len;
        signed int return_value___builtin_strcmp_3;
        return_value___builtin_strcmp_3=__builtin_strcmp(argv[(signed long int)i], "-h");
        tmp_statement_expression_2 = return_value___builtin_strcmp_3;
        if(tmp_statement_expression_2 == 0)
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          unsigned long int __s1_len;
          unsigned long int __s2_len;
          signed int return_value___builtin_strcmp_5;
          return_value___builtin_strcmp_5=__builtin_strcmp(argv[(signed long int)i], "--help");
          tmp_statement_expression_4 = return_value___builtin_strcmp_5;
          tmp_if_expr_6 = !(tmp_statement_expression_4 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
          break;

        else
        {
          last_iface_idx = last_iface_idx + 1;
          ifaces[(signed long int)last_iface_idx] = argv[(signed long int)i];
          help = 0;
        }
      }
    }
  }
  if(!(help == 0) || !(last_iface_idx >= 0))
  {
    printf("parprouted: proxy ARP routing daemon, version %s.\n", (const void *)"0.7");
    printf("(C) 2007 Vladimir Ivaschenko <vi@maks.net>, GPL2 license.\n");
    printf("Usage: parprouted [-d] [-p] interface [interface]\n");
    exit(1);
  }

  if(debug == 0)
  {
    child_pid=fork();
    if(!(child_pid >= 0))
    {
      signed int *return_value___errno_location_11;
      return_value___errno_location_11=__errno_location();
      char *return_value_strerror_12;
      return_value_strerror_12=strerror(*return_value___errno_location_11);
      fprintf(stderr, "could not fork(): %s", return_value_strerror_12);
      exit(1);
    }

    else
      if(child_pid >= 1)
      {
        signed int return_value_waitpid_13;
        return_value_waitpid_13=waitpid(child_pid, (signed int *)(void *)0, 0);
        if(!(return_value_waitpid_13 == child_pid))
        {
          perror(progname);
          exit(1);
        }

        exit(0);
      }

    child_pid=fork();
    if(!(child_pid >= 0))
    {
      perror(progname);
      exit(1);
    }

    else
      if(child_pid >= 1)
        exit(0);

    setsid();
    close(0);
    close(1);
    close(2);
  }

  openlog(progname, 0x01 | 0x02 | 0x20, 3 << 3);
  syslog(6, "Starting.");
  signal(2, (void (*)(signed int))sighandler);
  signal(15, (void (*)(signed int))sighandler);
  signal(1, (void (*)(signed int))sighandler);
  void *return_value_malloc_15;
  return_value_malloc_15=malloc(sizeof(struct arptab_entry **) /*8ul*/ );
  arptab = (struct arptab_entry **)return_value_malloc_15;
  if(arptab == ((struct arptab_entry **)NULL))
  {
    signed int *return_value___errno_location_14;
    return_value___errno_location_14=__errno_location();
    errstr=strerror(*return_value___errno_location_14);
    syslog(6, "No memory: %s", errstr);
  }

  *arptab = (struct arptab_entry *)(void *)0;
  pthread_mutex_init(&arptab_mutex, (const union anonymous_2 *)(void *)0);
  pthread_mutex_init(&req_queue_mutex, (const union anonymous_2 *)(void *)0);
  last_thread_idx = last_thread_idx + 1;
  signed int return_value_pthread_create_16;
  return_value_pthread_create_16=pthread_create(&my_threads[(signed long int)last_thread_idx], (const union pthread_attr_t *)(void *)0, (void * (*)(void *))main_thread, (void *)0);
  if(!(return_value_pthread_create_16 == 0))
  {
    syslog(3, "Error creating main thread.");
    abort();
  }

  i = 0;
  for( ; last_iface_idx >= i; i = i + 1)
  {
    last_thread_idx = last_thread_idx + 1;
    signed int return_value_pthread_create_17;
    return_value_pthread_create_17=pthread_create(&my_threads[(signed long int)last_thread_idx], (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)arp, (void *)ifaces[(signed long int)i]);
    if(!(return_value_pthread_create_17 == 0))
    {
      syslog(3, "Error creating ARP thread for %s.", ifaces[(signed long int)i]);
      abort();
    }

    if(!(debug == 0))
      printf("Created ARP thread for %s.\n", ifaces[(signed long int)i]);

  }
  signed int return_value_pthread_join_18;
  return_value_pthread_join_18=pthread_join(my_threads[(signed long int)0], (void **)(void *)0);
  if(!(return_value_pthread_join_18 == 0))
  {
    syslog(3, "Error joining thread.");
    abort();
  }

  signed int return_value_waitpid_19;
  do
  {
    return_value_waitpid_19=waitpid(-1, (signed int *)(void *)0, 1);
    if(return_value_waitpid_19 == 0)
      break;

  }
  while((_Bool)1);
  exit(1);
}

// main_thread
// file parprouted.c line 355
void * main_thread()
{
  signed long int last_refresh;
  signal(2, (void (*)(signed int))sighandler);
  signal(15, (void (*)(signed int))sighandler);
  signal(1, (void (*)(signed int))sighandler);
  pthread_setcancelstate(0, (signed int *)(void *)0);
  pthread_setcanceltype(0, (signed int *)(void *)0);
  signed long int return_value_time_1;
  do
  {
    struct anonymous __cancel_buf;
    void (*__cancel_routine)(void *) = (void (*)(void *))cleanup;
    void *__cancel_arg = (void *)0;
    signed int __not_first_call;
    __not_first_call=__sigsetjmp((struct __jmp_buf_tag *)(void *)__cancel_buf.__cancel_jmp_buf, 0);
    if(!((signed long int)__not_first_call == 0l))
    {
      __cancel_routine(__cancel_arg);
      __pthread_unwind_next(&__cancel_buf);
    }

    __pthread_register_cancel(&__cancel_buf);

  __CPROVER_DUMP_L3:
    ;
    do
    {
      if(!(perform_shutdown == 0))
        pthread_exit(NULL);

      pthread_testcancel();
      pthread_mutex_lock(&arptab_mutex);
      parseproc();
      processarp(0);
      pthread_mutex_unlock(&arptab_mutex);
      usleep((unsigned int)1000000);
      if(option_arpperm == 0)
      {
        return_value_time_1=time((signed long int *)(void *)0);
        if(return_value_time_1 + -last_refresh >= 51l)
        {
          pthread_mutex_lock(&arptab_mutex);
          refresharp(*arptab);
          pthread_mutex_unlock(&arptab_mutex);
          time(&last_refresh);
        }

      }

      goto __CPROVER_DUMP_L3;

    __CPROVER_DUMP_L6:
      ;
    }
    while((_Bool)0);
    __pthread_unregister_cancel(&__cancel_buf);
  }
  while((_Bool)0);
}

// parseproc
// file parprouted.c line 213
extern void parseproc()
{
  struct _IO_FILE *arpf;
  signed int firstline;
  struct arptab_entry *entry;
  char line[255l];
  struct in_addr ipaddr;
  signed int incomplete = 0;
  signed int i;
  char *ip;
  char *mac;
  char *dev;
  char *hw;
  char *flags;
  char *mask;
  arpf=fopen("/proc/net/arp", "r");
  if(arpf == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    errstr=strerror(*return_value___errno_location_1);
    syslog(6, "Error during ARP table open: %s", errstr);
  }

  firstline = 1;
  signed int return_value_feof_2;
  char *return_value_inet_ntoa_8;
  char *return_value_inet_ntoa_14;
  char *return_value_inet_ntoa_15;
  do
  {
    return_value_feof_2=feof(arpf);
    if(!(return_value_feof_2 == 0))
      break;

    char *return_value_fgets_18;
    return_value_fgets_18=fgets(line, 255, arpf);
    if(return_value_fgets_18 == ((char *)NULL))
    {
      signed int return_value_ferror_4;
      return_value_ferror_4=ferror(arpf);
      if(return_value_ferror_4 == 0)
        break;

      else
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        errstr=strerror(*return_value___errno_location_3);
        syslog(6, "Error during ARP table open: %s", errstr);
      }
    }

    else
    {
      if(!(firstline == 0))
      {
        firstline = 0;
        continue;
      }

      if(!(debug == 0) && !(verbose == 0))
        printf("read ARP line %s", (const void *)line);

      incomplete = 0;
      char *return_value_strstr_5;
      return_value_strstr_5=strstr(line, "00:00:00:00:00:00");
      if(!(return_value_strstr_5 == ((char *)NULL)))
        incomplete = 1;

      char *return_value_strstr_6;
      return_value_strstr_6=strstr(line, "0x0");
      if(!(return_value_strstr_6 == ((char *)NULL)))
        incomplete = 1;

      ip=strtok(line, " ");
      signed int return_value_inet_aton_7;
      return_value_inet_aton_7=inet_aton(ip, &ipaddr);
      if(return_value_inet_aton_7 == -1)
        syslog(6, "Error parsing IP address %s", ip);

      signed int return_value_findentry_9;
      return_value_findentry_9=findentry(ipaddr);
      if(!((incomplete & (signed int)(return_value_findentry_9 == 0)) == 0))
      {
        if(!(debug == 0))
        {
          return_value_inet_ntoa_8=inet_ntoa(ipaddr);
          printf("incomplete entry %s found, request on all interfaces\n", return_value_inet_ntoa_8);
        }

        i = 0;
        for( ; last_iface_idx >= i; i = i + 1)
          arp_req(ifaces[(signed long int)i], ipaddr, 0);
      }

      hw=strtok((char *)(void *)0, " ");
      flags=strtok((char *)(void *)0, " ");
      mac=strtok((char *)(void *)0, " ");
      mask=strtok((char *)(void *)0, " ");
      dev=strtok((char *)(void *)0, " ");
      unsigned long int return_value_strlen_11;
      return_value_strlen_11=strlen(dev);
      if((signed int)dev[-1l + (signed long int)return_value_strlen_11] == 10)
      {
        unsigned long int return_value_strlen_10;
        return_value_strlen_10=strlen(dev);
        dev[(signed long int)(return_value_strlen_10 - (unsigned long int)1)] = (char)0;
      }

      entry=replace_entry(ipaddr, dev);
      if(!(entry->incomplete == incomplete))
      {
        if(!(debug == 0))
          printf("change entry %s(%s) to incomplete=%d\n", ip, dev, incomplete);

      }

      entry->ipaddr_ia.s_addr = ipaddr.s_addr;
      entry->incomplete = incomplete;
      unsigned long int return_value_strlen_12;
      return_value_strlen_12=strlen(mac);
      if(!(return_value_strlen_12 >= 20ul))
        __builtin_strncpy(entry->hwaddr, mac, (unsigned long int)20);

      else
        syslog(6, "Error during ARP table parsing");
      unsigned long int return_value_strlen_13;
      return_value_strlen_13=strlen(dev);
      if(!(return_value_strlen_13 >= 20ul))
        __builtin_strncpy(entry->ifname, dev, (unsigned long int)20);

      else
        syslog(6, "Error during ARP table parsing");
      if(!(debug == 0))
      {
        if(!(entry->want_route == (signed int)(incomplete == 0)))
        {
          return_value_inet_ntoa_14=inet_ntoa(entry->ipaddr_ia);
          printf("%s(%s): set want_route %d\n", return_value_inet_ntoa_14, (const void *)entry->ifname, !(incomplete != 0));
        }

      }

      entry->want_route = (signed int)!(incomplete != 0);
      if(!(entry->want_route == 0))
      {
        signed int return_value_remove_other_routes_16;
        return_value_remove_other_routes_16=remove_other_routes(entry->ipaddr_ia, entry->ifname);
        if(return_value_remove_other_routes_16 >= 1)
        {
          if(!(debug == 0))
          {
            return_value_inet_ntoa_15=inet_ntoa(entry->ipaddr_ia);
            printf("Found ARP entry %s(%s), removed entries via other interfaces\n", return_value_inet_ntoa_15, (const void *)entry->ifname);
          }

        }

      }

      time(&entry->tstamp);
      if(!(debug == 0))
      {
        if(entry->route_added == 0)
        {
          if(!(entry->want_route == 0))
          {
            char *return_value_inet_ntoa_17;
            return_value_inet_ntoa_17=inet_ntoa(entry->ipaddr_ia);
            printf("arptab entry: '%s' HWAddr: '%s' Dev: '%s' route_added:%d want_route:%d\n", return_value_inet_ntoa_17, (const void *)entry->hwaddr, (const void *)entry->ifname, entry->route_added, entry->want_route);
          }

        }

      }

    }
  }
  while((_Bool)1);
  signed int return_value_fclose_20;
  return_value_fclose_20=fclose(arpf);
  if(!(return_value_fclose_20 == 0))
  {
    signed int *return_value___errno_location_19;
    return_value___errno_location_19=__errno_location();
    errstr=strerror(*return_value___errno_location_19);
    syslog(6, "Error during ARP table open: %s", errstr);
  }

}

// processarp
// file parprouted.c line 164
extern void processarp(signed int in_cleanup)
{
  struct arptab_entry *cur_entry = *arptab;
  struct arptab_entry *prev_entry = (struct arptab_entry *)(void *)0;
  char *return_value_inet_ntoa_1;
  _Bool tmp_if_expr_4;
  signed long int return_value_time_3;
  char *return_value_inet_ntoa_2;
  while(!(cur_entry == ((struct arptab_entry *)NULL)))
  {
    if(!(debug == 0) && !(verbose == 0))
    {
      return_value_inet_ntoa_1=inet_ntoa(cur_entry->ipaddr_ia);
      printf("Working on route %s(%s) tstamp %u want_route %d\n", return_value_inet_ntoa_1, (const void *)cur_entry->ifname, (signed int)cur_entry->tstamp, cur_entry->want_route);
    }

    if(cur_entry->want_route == 0)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_time_3=time((signed long int *)(void *)0);
      tmp_if_expr_4 = return_value_time_3 - cur_entry->tstamp > (signed long int)60 ? (_Bool)1 : (_Bool)0;
    }
    if(!(in_cleanup == 0) || tmp_if_expr_4)
    {
      if(!(cur_entry->route_added == 0))
        route_remove(cur_entry);

      if(!(debug == 0))
      {
        return_value_inet_ntoa_2=inet_ntoa(cur_entry->ipaddr_ia);
        printf("Delete arp %s(%s)\n", return_value_inet_ntoa_2, (const void *)cur_entry->ifname);
      }

      if(!(prev_entry == ((struct arptab_entry *)NULL)))
      {
        prev_entry->next = cur_entry->next;
        free((void *)cur_entry);
        cur_entry = prev_entry->next;
      }

      else
      {
        *arptab = cur_entry->next;
        free((void *)cur_entry);
        cur_entry = *arptab;
      }
    }

    else
    {
      prev_entry = cur_entry;
      cur_entry = cur_entry->next;
    }
  }
  cur_entry = *arptab;
  while(!(cur_entry == ((struct arptab_entry *)NULL)))
  {
    signed long int return_value_time_5;
    return_value_time_5=time((signed long int *)(void *)0);
    if(!(return_value_time_5 + -cur_entry->tstamp >= 61l))
    {
      if(!(cur_entry->want_route == 0))
      {
        if(cur_entry->route_added == 0)
        {
          if(in_cleanup == 0)
            route_add(cur_entry);

        }

      }

    }

    cur_entry = cur_entry->next;
  }
}

// refresharp
// file parprouted.h line 76
extern void refresharp(struct arptab_entry *list)
{
  if(!(debug == 0))
    printf("Refreshing ARP entries.\n");

  for( ; !(list == ((struct arptab_entry *)NULL)); list = list->next)
    arp_req(list->ifname, list->ipaddr_ia, 0);
}

// remove_other_routes
// file parprouted.c line 86
signed int remove_other_routes(struct in_addr ipaddr, const char *dev)
{
  struct arptab_entry *cur_entry;
  signed int removed = 0;
  cur_entry = *arptab;
  signed int tmp_statement_expression_2;
  char *return_value_inet_ntoa_1;
  for( ; !(cur_entry == ((struct arptab_entry *)NULL)); cur_entry = cur_entry->next)
    if(ipaddr.s_addr == cur_entry->ipaddr_ia.s_addr)
    {
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp_3;
      return_value___builtin_strcmp_3=__builtin_strcmp(dev, cur_entry->ifname);
      tmp_statement_expression_2 = return_value___builtin_strcmp_3;
      if(!(tmp_statement_expression_2 == 0))
      {
        if(!(debug == 0))
        {
          if(!(cur_entry->want_route == 0))
          {
            return_value_inet_ntoa_1=inet_ntoa(ipaddr);
            printf("Marking entry %s(%s) for removal\n", return_value_inet_ntoa_1, (const void *)cur_entry->ifname);
          }

        }

        cur_entry->want_route = 0;
        removed = removed + 1;
      }

    }

  return removed;
}

// replace_entry
// file parprouted.c line 40
struct arptab_entry * replace_entry(struct in_addr ipaddr, char *dev)
{
  struct arptab_entry *cur_entry = *arptab;
  struct arptab_entry *prev_entry = (struct arptab_entry *)(void *)0;
  unsigned long int return_value_strlen_1;
  signed int return_value_strncmp_2;
  for( ; !(cur_entry == ((struct arptab_entry *)NULL)); cur_entry = cur_entry->next)
  {
    if(ipaddr.s_addr == cur_entry->ipaddr_ia.s_addr)
    {
      return_value_strlen_1=strlen(dev);
      return_value_strncmp_2=strncmp(cur_entry->ifname, dev, return_value_strlen_1);
      if(return_value_strncmp_2 == 0)
        break;

    }

    prev_entry = cur_entry;
  }
  char *return_value_inet_ntoa_3;
  if(cur_entry == ((struct arptab_entry *)NULL))
  {
    if(!(debug == 0))
    {
      return_value_inet_ntoa_3=inet_ntoa(ipaddr);
      printf("Creating new arptab entry %s(%s)\n", return_value_inet_ntoa_3, dev);
    }

    void *return_value_malloc_5;
    return_value_malloc_5=malloc(sizeof(struct arptab_entry) /*80ul*/ );
    cur_entry = (struct arptab_entry *)return_value_malloc_5;
    if(cur_entry == ((struct arptab_entry *)NULL))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      errstr=strerror(*return_value___errno_location_4);
      syslog(6, "No memory: %s", errstr);
    }

    else
    {
      if(prev_entry == ((struct arptab_entry *)NULL))
        *arptab = cur_entry;

      else
        prev_entry->next = cur_entry;
      cur_entry->next = (struct arptab_entry *)(void *)0;
      cur_entry->ifname[(signed long int)0] = (char)0;
      cur_entry->route_added = 0;
      cur_entry->want_route = 1;
    }
  }

  return cur_entry;
}

// route_add
// file parprouted.c line 133
signed int route_add(struct arptab_entry *cur_entry)
{
  char routecmd_str[255l];
  signed int success = 1;
  char *return_value_inet_ntoa_2;
  return_value_inet_ntoa_2=inet_ntoa(cur_entry->ipaddr_ia);
  signed int return_value_snprintf_3;
  return_value_snprintf_3=snprintf(routecmd_str, (unsigned long int)(255 - 1), "/sbin/ip route add %s/32 metric 50 dev %s scope link", return_value_inet_ntoa_2, (const void *)cur_entry->ifname);
  if(return_value_snprintf_3 >= 255)
    syslog(6, "ip route command too large to fit in buffer!");

  else
  {
    signed int return_value_system_1;
    return_value_system_1=system(routecmd_str);
    if(!(return_value_system_1 == 0))
    {
      syslog(6, "'%s' unsuccessful, will try to remove!", (const void *)routecmd_str);
      if(!(debug == 0))
        printf("%s failed\n", (const void *)routecmd_str);

      route_remove(cur_entry);
      success = 0;
    }

    else
    {
      if(!(debug == 0))
        printf("%s success\n", (const void *)routecmd_str);

      success = 1;
    }
  }
  if(!(success == 0))
    cur_entry->route_added = 1;

  return success;
}

// route_remove
// file parprouted.c line 103
signed int route_remove(struct arptab_entry *cur_entry)
{
  char routecmd_str[255l];
  signed int success = 1;
  char *return_value_inet_ntoa_2;
  return_value_inet_ntoa_2=inet_ntoa(cur_entry->ipaddr_ia);
  signed int return_value_snprintf_3;
  return_value_snprintf_3=snprintf(routecmd_str, (unsigned long int)(255 - 1), "/sbin/ip route del %s/32 metric 50 dev %s scope link", return_value_inet_ntoa_2, (const void *)cur_entry->ifname);
  if(return_value_snprintf_3 >= 255)
    syslog(6, "ip route command too large to fit in buffer!");

  else
  {
    signed int return_value_system_1;
    return_value_system_1=system(routecmd_str);
    if(!(return_value_system_1 == 0))
    {
      syslog(6, "'%s' unsuccessful!", (const void *)routecmd_str);
      if(!(debug == 0))
        printf("%s failed\n", (const void *)routecmd_str);

      success = 0;
    }

    else
    {
      if(!(debug == 0))
        printf("%s success\n", (const void *)routecmd_str);

      success = 1;
    }
  }
  if(!(success == 0))
    cur_entry->route_added = 0;

  return success;
}

// rq_add
// file arp.c line 219
signed int rq_add(struct _ether_arp_frame *req_frame, struct sockaddr_ll *req_if)
{
  struct _req_struct *new_entry;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct _req_struct) /*72ul*/ );
  new_entry = (struct _req_struct *)return_value_malloc_3;
  if(new_entry == ((struct _req_struct *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    syslog(6, "No memory: %s", return_value_strerror_2);
    return 0;
  }

  pthread_mutex_lock(&req_queue_mutex);
  req_queue_len = req_queue_len + 1;
  if(req_queue_len >= 51)
  {
    struct _req_struct *temp;
    if(!(debug == 0))
      printf("Request queue has grown too large, deleting last element\n");

    temp = req_queue;
    req_queue = req_queue->next;
    req_queue_len = req_queue_len - 1;
    free((void *)temp);
  }

  if(!(req_queue == ((struct _req_struct *)NULL)))
    req_queue_tail->next = new_entry;

  else
    req_queue = new_entry;
  req_queue_tail = new_entry;
  new_entry->next = (struct _req_struct *)(void *)0;
  memcpy((void *)&new_entry->req_frame, (const void *)req_frame, sizeof(struct _ether_arp_frame) /*42ul*/ );
  memcpy((void *)&new_entry->req_if, (const void *)req_if, sizeof(struct sockaddr_ll) /*20ul*/ );
  pthread_mutex_unlock(&req_queue_mutex);
  return 1;
}

// rq_process
// file arp.c line 265
void rq_process(struct in_addr ipaddr, signed int ifindex)
{
  struct _req_struct *cur_entry;
  struct _req_struct *prev_entry = (struct _req_struct *)(void *)0;
  pthread_mutex_lock(&arptab_mutex);
  parseproc();
  processarp(0);
  pthread_mutex_unlock(&arptab_mutex);
  pthread_mutex_lock(&req_queue_mutex);
  cur_entry = req_queue;
  char *return_value_inet_ntoa_1;
  while(!(cur_entry == ((struct _req_struct *)NULL)))
  {
    if((signed long int)ipaddr.s_addr == *((signed long int *)cur_entry->req_frame.arp.arp_tpa))
    {
      if(!(ifindex == cur_entry->req_if.sll_ifindex))
      {
        if(!(debug == 0))
        {
          return_value_inet_ntoa_1=inet_ntoa(ipaddr);
          printf("Found %s in request queue\n", return_value_inet_ntoa_1);
        }

        arp_reply(&cur_entry->req_frame, &cur_entry->req_if);
        if(cur_entry == req_queue_tail)
          req_queue_tail = prev_entry;

        if(!(prev_entry == ((struct _req_struct *)NULL)))
          prev_entry->next = cur_entry->next;

        else
          req_queue = cur_entry->next;
        free((void *)cur_entry);
        cur_entry = prev_entry;
        req_queue_len = req_queue_len - 1;
      }

    }

    if(!(cur_entry == ((struct _req_struct *)NULL)))
    {
      prev_entry = cur_entry;
      cur_entry = cur_entry->next;
    }

  }
  pthread_mutex_unlock(&req_queue_mutex);
}

// sighandler
// file parprouted.c line 349
void sighandler()
{
  perform_shutdown = 1;
}

