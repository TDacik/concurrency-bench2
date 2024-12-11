// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_18;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_14;

// tag-#anon#ST[ARR16{S64}_S64_'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_5;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_7;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_10;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_13;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_12;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_21;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_11;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_17;

// tag-#anon#UN[*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'socks_dst'||*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'socks_dst6'|]
// file ocat.h line 326
union anonymous_8;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_9;

// tag-#anon#UN[ARR16{S8}_S8_'ifrn_name'|]
// file /usr/include/net/if.h line 130
union anonymous_15;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous_4;

// tag-#anon#UN[ARR1{U32}_U32_'icmp6_un_data32'||ARR2{U16}_U16_'icmp6_un_data16'||ARR4{U8}_U8_'icmp6_un_data8'|]
// file /usr/include/netinet/icmp6.h line 43
union anonymous_1;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_19;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_0;

// tag-#anon#UN[SYM#tag-icmp6_hdr#'icmp6'||SYM#tag-nd_neighbor_solicit#'ndp_sol'||SYM#tag-nd_neighbor_advert#'ndp_adv'|]
// file ocat.h line 478
union anonymous_3;

// tag-#anon#UN[SYM#tag-in6_addr#'in6addr'||SYM#tag-in_addr#'inaddr'|]
// file ocat.h line 465
union anonymous_2;

// tag-#anon#UN[SYM#tag-ip6_hdrctl#'ip6_un1'||U8'ip6_un2_vfc'|]
// file /usr/include/netinet/ip6.h line 26
union anonymous_6;

// tag-#anon#UN[SYM#tag-sockaddr#'ifru_addr'||SYM#tag-sockaddr#'ifru_dstaddr'||SYM#tag-sockaddr#'ifru_broadaddr'||SYM#tag-sockaddr#'ifru_netmask'||SYM#tag-sockaddr#'ifru_hwaddr'||S16'ifru_flags'||S32'ifru_ivalue'||S32'ifru_mtu'||SYM#tag-ifmap#'ifru_map'||ARR16{S8}_S8_'ifru_slave'||ARR16{S8}_S8_'ifru_newname'||*{S8}_S8_'ifru_data'|]
// file /usr/include/net/if.h line 135
union anonymous_16;

// tag-IPv4Route
// file ocat.h line 436
struct IPv4Route;

// tag-IPv6Route
// file ocat.h line 445
struct IPv6Route;

// tag-MACTable
// file ocat.h line 462
struct MACTable;

// tag-NetDesc
// file ocat_netdesc.h line 27
struct NetDesc;

// tag-OcatPeer
// file ocat.h line 388
struct OcatPeer;

// tag-OcatSetup
// file ocat.h line 272
struct OcatSetup;

// tag-OcatThread
// file ocat.h line 411
struct OcatThread;

// tag-SocksHdr
// file ocat.h line 371
struct SocksHdr;

// tag-SocksQueue
// file ocat.h line 423
struct SocksQueue;

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

// tag-ether_addr
// file /usr/include/net/ethernet.h line 32
struct ether_addr;

// tag-ether_header
// file /usr/include/net/ethernet.h line 38
struct ether_header;

// tag-hosts_ent
// file ocathosts.h line 40
struct hosts_ent;

// tag-hosts_info
// file ocathosts.h line 46
struct hosts_info;

// tag-icmp6_hdr
// file /usr/include/netinet/icmp6.h line 38
struct icmp6_hdr;

// tag-ifmap
// file /usr/include/net/if.h line 111
struct ifmap;

// tag-ifreq
// file /usr/include/net/if.h line 126
struct ifreq;

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

// tag-ip6_psh
// file ocat.h line 453
struct ip6_psh;

// tag-iphdr
// file /usr/include/netinet/ip.h line 44
struct iphdr;

// tag-nd_neighbor_advert
// file /usr/include/netinet/icmp6.h line 152
struct nd_neighbor_advert;

// tag-nd_neighbor_solicit
// file /usr/include/netinet/icmp6.h line 140
struct nd_neighbor_solicit;

// tag-nd_opt_hdr
// file /usr/include/netinet/icmp6.h line 186
struct nd_opt_hdr;

// tag-ndp6
// file ocat.h line 474
struct ndp6;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/netinet/in.h line 252
struct sockaddr_in6;

// tag-sockaddr_str
// file ocat.h line 487
struct sockaddr_str;

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

// tag-tm
// file /usr/include/time.h line 133
struct tm;

#ifndef NULL
#define NULL ((void*)0)
#endif

// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// add_listener
// file ocat.h line 653
void add_listener(const char *buf);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// background
// file ocat.c line 153
void background(void);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// check_tor_prefix
// file ocatroute.c line 181
signed int check_tor_prefix(struct ip6_hdr *ihd);
// checksum
// file ocateth.c line 182
unsigned short int checksum(const unsigned short int *buf, signed int len);
// cleanup_socket
// file ocatroute.c line 199
void cleanup_socket(signed int fd, struct OcatPeer *peer);
// cleanup_system
// file ocat.c line 240
void cleanup_system(void);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// create_listener
// file ocatroute.c line 639
signed int create_listener(struct sockaddr *addr, signed int sock_len);
// ctrl_handler
// file ocat.h line 575
void * ctrl_handler(void *p);
// delete_listeners
// file ocat.h line 654
void delete_listeners(struct sockaddr **addr, signed int *fd, signed int cnt);
// delete_peer
// file ocat.h line 612
void delete_peer(struct OcatPeer *peer);
// detach_thread
// file ocat.h line 590
void detach_thread(void);
// eth_check
// file ocat.h line 629
signed int eth_check(char *buf, signed int len);
// eth_ndp
// file ocateth.c line 419
signed int eth_ndp(char *buf, signed int len, signed int ndp_type);
// ether_ntoa_r
// file /usr/include/netinet/ether.h line 31
extern char * ether_ntoa_r(struct ether_addr *, char *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fdaprintf
// file ocatlibe.c line 181
signed int fdaprintf(signed int fd, signed int bsiz, const char *fmt, void **ap);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// fdprintf
// file ocatlibe.c line 216
signed int fdprintf(signed int fd, const char *fmt, void **ap);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// forward_packet
// file ocatroute.c line 50
signed int forward_packet(struct in6_addr *addr, const char *buf, signed int buflen);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_ckbuf
// file ocateth.c line 206
void free_ckbuf(unsigned short int *buf);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// freopen
// file /usr/include/stdio.h line 278
extern struct _IO_FILE * freopen(const char *, const char *, struct _IO_FILE *);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// get_6dst_ptr
// file ocatroute.c line 804
static struct in6_addr * get_6dst_ptr(struct ip6_hdr *i6hdr);
// get_empty_peer
// file ocat.h line 611
struct OcatPeer * get_empty_peer(void);
// get_first_peer
// file ocat.h line 604
struct OcatPeer * get_first_peer(void);
// get_first_peer_ptr
// file ocat.h line 605
struct OcatPeer ** get_first_peer_ptr(void);
// get_saddr
// file ocatroute.c line 790
static unsigned int get_saddr(struct iphdr *ihdr);
// get_thread
// file ocat.h line 587
const struct OcatThread * get_thread(void);
// get_tunheader
// file ocatroute.c line 274
unsigned int get_tunheader(char *buf);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// getgid
// file /usr/include/unistd.h line 681
extern unsigned int getgid(void);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwnam_r
// file /usr/include/pwd.h line 149
extern signed int getpwnam_r(const char *, struct passwd *, char *, unsigned long int, struct passwd ** restrict );
// getsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 219
extern signed int getsockopt(signed int, signed int, signed int, void *, unsigned int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// has_tor_prefix
// file ocat.h line 551
signed int has_tor_prefix(struct in6_addr *addr);
// hosts_check
// file ocathosts.h line 55
signed int hosts_check(void);
// hosts_file_modified_r
// file ocathosts.c line 75
signed int hosts_file_modified_r(struct timespec *ts);
// hosts_get_name
// file ocathosts.h line 56
signed int hosts_get_name(struct in6_addr *addr, char *buf, signed int s);
// hosts_init
// file ocathosts.h line 57
void hosts_init(const char *dom);
// hosts_list
// file ocathosts.h line 58
signed int hosts_list(struct _IO_FILE *f);
// hosts_read
// file ocathosts.c line 107
signed int hosts_read(struct hosts_ent **hent);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// inet_ntops
// file ocatv6conv.c line 157
const char * inet_ntops(struct sockaddr *saddr, struct sockaddr_str *sas);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// init_ocat_thread
// file ocat.h line 585
const struct OcatThread * init_ocat_thread(const char *name);
// init_ocat_thread_struct
// file ocatthread.c line 36
void init_ocat_thread_struct(struct OcatThread *th);
// init_setup
// file ocat.h line 618
void init_setup(void);
// insert_anon_peer
// file ocatroute.c line 633
signed int insert_anon_peer(signed int fd);
// insert_peer
// file ocatroute.c line 591
signed int insert_peer(signed int fd, const struct SocksQueue *sq, signed long int dly);
// install_sig
// file ocat.c line 219
void install_sig(void);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// ipv4_add_route
// file ocatipv4route.c line 40
signed int ipv4_add_route(struct IPv4Route *route, struct IPv4Route **root, unsigned int cur_nm);
// ipv4_lookup_route
// file ocat.h line 624
struct in6_addr * ipv4_lookup_route(unsigned int ip);
// ipv4_lookup_route__
// file ocatipv4route.c line 83
struct IPv4Route * ipv4_lookup_route__(unsigned int ip, struct IPv4Route *route, unsigned int cur_nm);
// ipv4_print
// file ocatipv4route.c line 131
void ipv4_print(struct IPv4Route *route, void *f);
// ipv4_traverse
// file ocatipv4route.c line 120
void ipv4_traverse(struct IPv4Route *route, void (*func)(struct IPv4Route *, void *), void *p);
// ipv4_traverse::func_object
//
void func_object(struct IPv4Route *, void *);
// ipv6_add_route
// file ocatipv6route.c line 83
signed int ipv6_add_route(const struct IPv6Route *route);
// ipv6_lookup_route
// file ocat.h line 658
struct in6_addr * ipv6_lookup_route(struct in6_addr *dest);
// ipv6_parse_route
// file ocat.h line 660
signed int ipv6_parse_route(const char *rs);
// ipv6_print
// file ocatipv6route.c line 100
void ipv6_print(struct IPv6Route *route, void *f);
// ipv6_print_routes
// file ocat.h line 659
void ipv6_print_routes(struct _IO_FILE *f);
// ipv6_reduce
// file ocatipv6route.c line 42
void ipv6_reduce(struct in6_addr *net, signed int prefixlen);
// ipv6tonion
// file ocat.h line 548
char * ipv6tonion(struct in6_addr *ip6, char *onion);
// join_threads
// file ocat.h line 589
signed int join_threads(void);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// lock_peer
// file ocat.h line 608
signed int lock_peer(struct OcatPeer *peer);
// lock_peers
// file ocat.h line 606
signed int lock_peers(void);
// lock_setup
// file ocat.h line 620
void lock_setup(void);
// log_msg
// file ocat.h line 540
void log_msg(signed int lf, const char *fmt, ...);
// mac_add_entry
// file ocateth.c line 128
signed int mac_add_entry(const unsigned char *hwaddr, struct in6_addr *in6);
// mac_cleanup
// file ocat.h line 632
void mac_cleanup(void);
// mac_get_ip
// file ocateth.c line 156
signed int mac_get_ip(const unsigned char *hwaddr, struct in6_addr *in6);
// mac_set
// file ocat.h line 630
signed int mac_set(struct in6_addr *in6, unsigned char *hwaddr);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// malloc_ckbuf
// file ocateth.c line 214
unsigned short int * malloc_ckbuf(struct in6_addr *src, struct in6_addr *dst, unsigned short int plen, unsigned char proto, const void *payload);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mk_pid_file
// file ocat.c line 95
signed int mk_pid_file(void);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// ndp_recadv
// file ocateth.c line 404
signed int ndp_recadv(char *buf, signed int len);
// ndp_soladv
// file ocateth.c line 305
signed int ndp_soladv(char *buf, signed int rlen);
// ndp_solicit
// file ocat.h line 634
signed int ndp_solicit(struct in6_addr *src, struct in6_addr *dst);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// ocat_controller
// file ocat.h line 574
void * ocat_controller(void *p);
// oe_close
// file ocat.h line 649
void oe_close(signed int fd);
// oe_remtr
// file ocatlibe.c line 55
signed int oe_remtr(char *s);
// oniontipv4
// file ocat.h line 550
signed int oniontipv4(const char *onion, struct in_addr *ip, signed int prefix_mask);
// oniontipv6
// file ocat.h line 549
signed int oniontipv6(const char *onion, struct in6_addr *ip6);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// open_connect_log
// file ocat.h line 539
signed int open_connect_log(const char *dir);
// open_logfile
// file ocat.c line 72
signed int open_logfile(void);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// packet_forwarder
// file ocat.h line 568
void packet_forwarder(void);
// parse_opt
// file ocat.c line 329
signed int parse_opt(signed int argc, char **argv);
// parse_opt_early
// file ocat.c line 292
void parse_opt_early(signed int argc, char **argv_orig);
// parse_route
// file ocatipv4route.c line 155
signed int parse_route(const char *rs);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// post_init_setup
// file ocat.h line 619
void post_init_setup(void);
// print_mac_tbl
// file ocateth.c line 48
void print_mac_tbl(struct _IO_FILE *f);
// print_routes
// file ocatipv4route.c line 149
void print_routes(struct _IO_FILE *f);
// print_setup_struct
// file ocatsetup.c line 224
void print_setup_struct(struct _IO_FILE *f);
// print_socks_queue
// file ocatsocks.c line 263
void print_socks_queue(struct _IO_FILE *f);
// print_threads
// file ocatthread.c line 197
void print_threads(struct _IO_FILE *f);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_attr_getstacksize
// file /usr/include/pthread.h line 370
extern signed int pthread_attr_getstacksize(const union pthread_attr_t *, unsigned long int *);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setstacksize
// file /usr/include/pthread.h line 377
extern signed int pthread_attr_setstacksize(union pthread_attr_t *, unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_detach
// file /usr/include/pthread.h line 273
extern signed int pthread_detach(unsigned long int);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_0 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_0 *, const union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_0 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous_7 *, struct anonymous_7 *);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// rand_onion
// file ocat.h line 552
void rand_onion(char *onion);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// run_ctrl_handler
// file ocatctrl.c line 332
signed int run_ctrl_handler(signed int fd);
// run_listeners
// file ocatroute.c line 697
signed int run_listeners(struct sockaddr **addr, signed int *sockfd, signed int cnt, signed int (*action_accept)(signed int));
// run_listeners::action_accept_object
//
signed int action_accept_object(signed int);
// run_ocat_thread
// file ocat.h line 586
signed int run_ocat_thread(const char *name, void * (*thfunc)(void *), void *parm);
// run_ocat_thread::thfunc_object
//
void * thfunc_object(void *);
// search_peer
// file ocat.h line 610
struct OcatPeer * search_peer(struct in6_addr *addr);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_5 *, struct anonymous_5 *, struct anonymous_5 *, struct timeval *);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// send_keepalive
// file ocatroute.c line 957
signed int send_keepalive(struct OcatPeer *peer);
// set_nonblock
// file ocatroute.c line 575
void set_nonblock(signed int fd);
// set_peer_dest
// file ocatroute.c line 239
signed int set_peer_dest(struct in6_addr *dest, struct in6_addr *addr);
// set_select_timeout
// file ocatroute.c line 259
void set_select_timeout(struct timeval *tv);
// set_term_req
// file ocat.h line 593
void set_term_req(void);
// set_thread_name
// file ocatthread.c line 177
signed int set_thread_name(const char *n);
// set_tor_prefix
// file ocatv6conv.c line 51
void set_tor_prefix(struct in6_addr *addr);
// set_tunheader
// file ocatroute.c line 267
void set_tunheader(char *buf, unsigned int tunhdr);
// setgid
// file /usr/include/unistd.h line 717
extern signed int setgid(unsigned int);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// setvbuf
// file /usr/include/stdio.h line 336
extern signed int setvbuf(struct _IO_FILE *, char *, signed int, unsigned long int);
// shl5
// file ocatv6conv.c line 61
void shl5(char *bin);
// sig_handler
// file ocat.c line 193
void sig_handler(signed int sig);
// sig_socks_connector
// file ocat.h line 645
void sig_socks_connector(void);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigfillset
// file /usr/include/signal.h line 218
extern signed int sigfillset(struct anonymous_7 *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// socket_acceptor
// file ocat.h line 572
void * socket_acceptor(void *p);
// socket_cleaner
// file ocat.h line 573
void * socket_cleaner(void *ptr);
// socket_receiver
// file ocat.h line 567
void * socket_receiver(void *p);
// socks_activate_peer
// file ocatsocks.c line 122
signed int socks_activate_peer(struct SocksQueue *sq);
// socks_connector_sel
// file ocat.h line 646
void * socks_connector_sel(void *p);
// socks_enqueue
// file ocatsocks.c line 200
void socks_enqueue(const struct SocksQueue *sq);
// socks_output_queue
// file ocatsocks.c line 273
void socks_output_queue(struct _IO_FILE *f);
// socks_pipe_request
// file ocatsocks.c line 145
void socks_pipe_request(const struct SocksQueue *sq);
// socks_queue
// file ocat.h line 643
void socks_queue(struct in6_addr addr, signed int perm);
// socks_rec_response
// file ocatsocks.c line 93
signed int socks_rec_response(struct SocksQueue *sq);
// socks_reschedule
// file ocatsocks.c line 357
void socks_reschedule(struct SocksQueue *squeue);
// socks_send_request
// file ocatsocks.c line 39
signed int socks_send_request(const struct SocksQueue *sq);
// socks_tcp_connect
// file ocatsocks.c line 335
signed int socks_tcp_connect(signed int fd, struct sockaddr *addr, signed int len);
// socks_unqueue
// file ocatsocks.c line 248
void socks_unqueue(struct SocksQueue *squeue);
// srand
// file /usr/include/stdlib.h line 376
extern void srand(unsigned int);
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
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlcat
// file ocat.h line 597
unsigned long int strlcat(char *dst, const char *src, unsigned long int siz);
// strlcpy
// file ocat.h line 600
unsigned long int strlcpy(char *dst, const char *src, unsigned long int siz);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strsockaddr
// file ocat.h line 651
signed int strsockaddr(const char *src, struct sockaddr *addr);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtok_r
// file /usr/include/string.h line 358
extern char * strtok_r(char *, const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// system_w
// file ocattun.c line 37
void system_w(const char *s);
// term_req
// file ocat.h line 592
signed int term_req(void);
// thread_run
// file ocatthread.c line 67
void * thread_run(void *p);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// tun_alloc
// file ocat.h line 561
signed int tun_alloc(char *dev, signed int dev_s, struct in6_addr addr);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// ungetc
// file /usr/include/stdio.h line 702
extern signed int ungetc(signed int, struct _IO_FILE *);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// unlock_peer
// file ocat.h line 609
signed int unlock_peer(struct OcatPeer *peer);
// unlock_peers
// file ocat.h line 607
signed int unlock_peers(void);
// unlock_setup
// file ocat.h line 621
void unlock_setup(void);
// usage
// file ocat.c line 23
void usage(const char *s);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vlog_msgf
// file ocatlog.c line 90
void vlog_msgf(struct _IO_FILE *out, signed int lf, const char *fmt, void **ap);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous_18
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_14
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous_5
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous_7
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_10
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_13
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_status
  signed int si_status;
  // si_utime
  signed long int si_utime;
  // si_stime
  signed long int si_stime;
};

union sigval
{
  // sival_int
  signed int sival_int;
  // sival_ptr
  void *sival_ptr;
};

struct anonymous_12
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_11
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_17
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_19
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_10 _kill;
  // _timer
  struct anonymous_11 _timer;
  // _rt
  struct anonymous_12 _rt;
  // _sigchld
  struct anonymous_13 _sigchld;
  // _sigfault
  struct anonymous_14 _sigfault;
  // _sigpoll
  struct anonymous_17 _sigpoll;
  // _sigsys
  struct anonymous_18 _sigsys;
};

struct anonymous_21
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_19 _sifields;
};

union anonymous_8
{
  // socks_dst
  struct sockaddr_in *socks_dst;
  // socks_dst6
  struct sockaddr_in6 *socks_dst6;
};

union anonymous_9
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_21 *, void *);
};

union anonymous_15
{
  // ifrn_name
  char ifrn_name[16l];
};

union anonymous_4
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
  // icmp6_un_data32
  unsigned int icmp6_un_data32[1l];
  // icmp6_un_data16
  unsigned short int icmp6_un_data16[2l];
  // icmp6_un_data8
  unsigned char icmp6_un_data8[4l];
};

union anonymous
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

union anonymous_0
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct icmp6_hdr
{
  // icmp6_type
  unsigned char icmp6_type;
  // icmp6_code
  unsigned char icmp6_code;
  // icmp6_cksum
  unsigned short int icmp6_cksum;
  // icmp6_dataun
  union anonymous_1 icmp6_dataun;
};

struct in6_addr
{
  // __in6_u
  union anonymous_4 __in6_u;
};

struct nd_neighbor_solicit
{
  // nd_ns_hdr
  struct icmp6_hdr nd_ns_hdr;
  // nd_ns_target
  struct in6_addr nd_ns_target;
};

struct nd_neighbor_advert
{
  // nd_na_hdr
  struct icmp6_hdr nd_na_hdr;
  // nd_na_target
  struct in6_addr nd_na_target;
};

union anonymous_3
{
  // icmp6
  struct icmp6_hdr icmp6;
  // ndp_sol
  struct nd_neighbor_solicit ndp_sol;
  // ndp_adv
  struct nd_neighbor_advert ndp_adv;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

union anonymous_2
{
  // in6addr
  struct in6_addr in6addr;
  // inaddr
  struct in_addr inaddr;
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

union anonymous_6
{
  // ip6_un1
  struct ip6_hdrctl ip6_un1;
  // ip6_un2_vfc
  unsigned char ip6_un2_vfc;
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

union anonymous_16
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

struct IPv4Route
{
  // next
  struct IPv4Route *next[2l];
  // dest
  unsigned int dest;
  // netmask
  unsigned int netmask;
  // gw
  struct in6_addr gw;
};

struct IPv6Route
{
  // dest
  struct in6_addr dest;
  // prefixlen
  signed int prefixlen;
  // gw
  struct in6_addr gw;
};

struct MACTable
{
  // family
  unsigned short int family;
  // _anon0
  union anonymous_2 _anon0;
  // hwaddr
  unsigned char hwaddr[6l];
  // age
  signed long int age;
};

struct NetDesc
{
  // prefix
  struct in6_addr prefix;
  // prefix_len
  signed int prefix_len;
  // prefix4
  struct in_addr prefix4;
  // addr4_mask
  signed int addr4_mask;
  // name_size
  signed int name_size;
  // domain
  char *domain;
  // listen_port
  signed short int listen_port;
  // ctrl_port
  signed short int ctrl_port;
  // vdest_port
  signed short int vdest_port;
  // socks_port
  signed short int socks_port;
  // clog_file
  char *clog_file;
  // pid_file
  char *pid_file;
  // config_file
  char *config_file;
  // hosts_lookup
  signed int hosts_lookup;
};

struct OcatPeer
{
  // next
  struct OcatPeer *next;
  // addr
  struct in6_addr addr;
  // tcpfd
  signed int tcpfd;
  // time
  signed long int time;
  // sdelay
  signed long int sdelay;
  // otime
  signed long int otime;
  // state
  signed int state;
  // dir
  signed int dir;
  // out
  unsigned long int out;
  // in
  unsigned long int in;
  // tunhdr
  unsigned int *tunhdr;
  // fragbuf
  char *fragbuf;
  // _fragbuf
  char _fragbuf[65580l];
  // fraglen
  signed int fraglen;
  // mutex
  union anonymous_0 mutex;
  // perm
  signed int perm;
  // last_io
  signed long int last_io;
  // inm
  unsigned int inm;
  // outm
  unsigned int outm;
};

struct OcatSetup
{
  // fhd_key
  unsigned int fhd_key[2l];
  // fhd_key_len
  signed int fhd_key_len;
  // ocat_dest_port
  unsigned short int ocat_dest_port;
  // ocat_ctrl_port
  unsigned short int ocat_ctrl_port;
  // tunfd
  signed int tunfd[2l];
  // debug_level
  signed int debug_level;
  // usrname
  char *usrname;
  // onion_url
  char onion_url[256l];
  // ocat_addr
  struct in6_addr ocat_addr;
  // create_clog
  signed int create_clog;
  // runasroot
  signed int runasroot;
  // controller
  signed int controller;
  // ocat_dir
  char *ocat_dir;
  // tun_dev
  char *tun_dev;
  // tunname
  char tunname[256l];
  // ipv4_enable
  signed int ipv4_enable;
  // ocat_addr4
  struct in_addr ocat_addr4;
  // ocat_addr4_mask
  signed int ocat_addr4_mask;
  // config_file
  char *config_file;
  // config_read
  signed int config_read;
  // config_failed
  signed int config_failed;
  // use_tap
  signed int use_tap;
  // ocat_hwaddr
  unsigned char ocat_hwaddr[6l];
  // pid_file
  char *pid_file;
  // create_pid_file
  signed int create_pid_file;
  // logfn
  char *logfn;
  // logf
  struct _IO_FILE *logf;
  // use_syslog
  signed int use_syslog;
  // daemon
  signed int daemon;
  // uptime
  signed long int uptime;
  // frandn
  char *frandn;
  // _anon0
  union anonymous_8 _anon0;
  // oc_listen
  struct sockaddr **oc_listen;
  // oc_listen_fd
  signed int *oc_listen_fd;
  // oc_listen_cnt
  signed int oc_listen_cnt;
  // rand_addr
  signed int rand_addr;
  // version
  char version[256l];
  // sizeof_setup
  signed int sizeof_setup;
  // sig_term
  signed int sig_term;
  // term_req
  signed int term_req;
  // mutex
  union anonymous_0 mutex;
  // ctrl_listen
  struct sockaddr **ctrl_listen;
  // ctrl_listen_fd
  signed int *ctrl_listen_fd;
  // ctrl_listen_cnt
  signed int ctrl_listen_cnt;
  // socksfd
  signed int socksfd[2l];
  // net_type
  signed int net_type;
  // max_ctrl
  signed int max_ctrl;
  // ctrl_active
  signed int ctrl_active;
  // pid_fd
  signed int pid_fd[2l];
  // sig_usr1
  signed int sig_usr1;
  // clear_stats
  signed int clear_stats;
  // unidirectional
  signed int unidirectional;
  // hosts_lookup
  signed int hosts_lookup;
  // domain
  const char *domain;
  // oc_vdns
  struct in6_addr oc_vdns;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct OcatThread
{
  // next
  struct OcatThread *next;
  // handle
  unsigned long int handle;
  // attr
  union pthread_attr_t attr;
  // detached
  signed int detached;
  // id
  signed int id;
  // name
  char name[11l];
  // entry
  void * (*entry)(void *);
  // parm
  void *parm;
};

struct SocksHdr
{
  // ver
  char ver;
  // cmd
  char cmd;
  // port
  unsigned short int port;
  // addr
  struct in_addr addr;
} __attribute__ ((__packed__));

struct SocksQueue
{
  // next
  struct SocksQueue *next;
  // addr
  struct in6_addr addr;
  // state
  signed int state;
  // perm
  signed int perm;
  // fd
  signed int fd;
  // restart_time
  signed long int restart_time;
  // connect_time
  signed long int connect_time;
  // retry
  signed int retry;
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

struct ether_addr
{
  // ether_addr_octet
  unsigned char ether_addr_octet[6l];
} __attribute__ ((__packed__));

struct ether_header
{
  // ether_dhost
  unsigned char ether_dhost[6l];
  // ether_shost
  unsigned char ether_shost[6l];
  // ether_type
  unsigned short int ether_type;
} __attribute__ ((__packed__));

struct hosts_ent
{
  // addr
  struct in6_addr addr;
  // name
  char name[1025l];
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct hosts_info
{
  // hosts_ts
  struct timespec hosts_ts;
  // hosts_fd
  signed int hosts_fd;
  // hosts_ent
  struct hosts_ent *hosts_ent;
  // hosts_ent_cnt
  signed int hosts_ent_cnt;
  // hdom
  const char *hdom;
};

struct ifreq
{
  // ifr_ifrn
  union anonymous_15 ifr_ifrn;
  // ifr_ifru
  union anonymous_16 ifr_ifru;
};

struct ip6_hdr
{
  // ip6_ctlun
  union anonymous_6 ip6_ctlun;
  // ip6_src
  struct in6_addr ip6_src;
  // ip6_dst
  struct in6_addr ip6_dst;
};

struct ip6_psh
{
  // src
  struct in6_addr src;
  // dst
  struct in6_addr dst;
  // len
  unsigned int len;
  // _pad
  char _pad[3l];
  // nxt
  unsigned char nxt;
} __attribute__ ((__packed__));

struct iphdr
{
  // ihl
  unsigned int ihl : 4;
  // version
  unsigned int version : 4;
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

struct nd_opt_hdr
{
  // nd_opt_type
  unsigned char nd_opt_type;
  // nd_opt_len
  unsigned char nd_opt_len;
};

struct ndp6
{
  // eth
  struct ether_header eth;
  // ip6
  struct ip6_hdr ip6;
  // _anon0
  union anonymous_3 _anon0;
} __attribute__ ((__packed__));

struct passwd
{
  // pw_name
  char *pw_name;
  // pw_passwd
  char *pw_passwd;
  // pw_uid
  unsigned int pw_uid;
  // pw_gid
  unsigned int pw_gid;
  // pw_gecos
  char *pw_gecos;
  // pw_dir
  char *pw_dir;
  // pw_shell
  char *pw_shell;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous_9 __sigaction_handler;
  // sa_mask
  struct anonymous_7 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
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

struct sockaddr_in6
{
  // sin6_family
  unsigned short int sin6_family;
  // sin6_port
  unsigned short int sin6_port;
  // sin6_flowinfo
  unsigned int sin6_flowinfo;
  // sin6_addr
  struct in6_addr sin6_addr;
  // sin6_scope_id
  unsigned int sin6_scope_id;
};

struct sockaddr_str
{
  // sstr_family
  unsigned short int sstr_family;
  // sstr_port
  unsigned short int sstr_port;
  // sstr_addr
  char sstr_addr[46l];
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


// BASE32
// file ocatv6conv.c line 31
static const char BASE32[33l] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '2', '3', '4', '5', '6', '7', 0 };
// clog_
// file ocatlog.c line 37
static struct _IO_FILE *clog_ = (struct _IO_FILE *)(void *)0;
// ctrl_fd_
// file ocatsetup.c line 41
static signed int ctrl_fd_[2l] = { -1, -1 };
// ctrl_listen6_
// file ocatsetup.c line 33
static struct sockaddr_in6 ctrl_listen6_;
// ctrl_listen_
// file ocatsetup.c line 32
static struct sockaddr_in ctrl_listen_;
// ctrl_listen_ptr_
// file ocatsetup.c line 34
static struct sockaddr *ctrl_listen_ptr_[3l];
// ctrl_listen_ptr_
// file ocatsetup.c line 34
static struct sockaddr *ctrl_listen_ptr_[3l] = { (struct sockaddr *)&ctrl_listen_, (struct sockaddr *)&ctrl_listen6_, (struct sockaddr *)(void *)0 };
// deBASE32_
// file ocatv6conv.c line 33
static const char deBASE32_[41l] = { (const char)26, (const char)27, (const char)28, (const char)29, (const char)30, (const char)31, (const char)-1, (const char)-1, (const char)-1, (const char)-1, (const char)-1, (const char)-1, (const char)-1, (const char)-1, (const char)-1, (const char)0, (const char)1, (const char)2, (const char)3, (const char)4, (const char)5, (const char)6, (const char)7, (const char)8, (const char)9, (const char)10, (const char)11, (const char)12, (const char)13, (const char)14, (const char)15, (const char)16, (const char)17, (const char)18, (const char)19, (const char)20, (const char)21, (const char)22, (const char)23, (const char)24, (const char)25 };
// flty_
// file ocatlog.c line 35
static const char *flty_[8l] = { "emerg", "alert", "crit", "err", "warning", "notice", "info", "debug" };
// hosts_
// file ocathosts.c line 63
static struct hosts_info hosts_ = { .hosts_ts={ .tv_sec=(signed long int)0, .tv_nsec=(signed long int)0 }, .hosts_fd=-1,
    .hosts_ent=(struct hosts_ent *)(void *)0, .hosts_ent_cnt=0,
    .hdom="" };
// hosts_mutex_
// file ocathosts.c line 65
static union anonymous_0 hosts_mutex_ = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// in6addr_any
// file /usr/include/netinet/in.h line 227
extern struct in6_addr in6addr_any;
// in6addr_loopback
// file /usr/include/netinet/in.h line 228
extern struct in6_addr in6addr_loopback;
// log_mutex_
// file ocatlog.c line 34
static union anonymous_0 log_mutex_ = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// lpfd_
// file ocatroute.c line 39
static signed int lpfd_[2l];
// mac_cnt_
// file ocateth.c line 30
static signed int mac_cnt_ = 0;
// mac_mutex_
// file ocateth.c line 31
static union anonymous_0 mac_mutex_ = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// mac_tbl_
// file ocateth.c line 29
static struct MACTable mac_tbl_[128l];
// netdesc_
// file ocat_netdesc.c line 22
struct NetDesc netdesc_[2l] = { { .prefix={ .__in6_u={ .__u6_addr8={ (unsigned char)0xfd, (unsigned char)0x87, (unsigned char)0xd8, (unsigned char)0x7e, (unsigned char)0xeb, (unsigned char)0x43, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 } } }, .prefix_len=48,
    .prefix4={ .s_addr=(unsigned int)0x0000000a }, .addr4_mask=0x000000ff,
    .name_size=16 + 7, .domain=".onion",
    .listen_port=(signed short int)8060, .ctrl_port=(signed short int)8066,
    .vdest_port=(signed short int)8060, .socks_port=(signed short int)9050,
    .clog_file="ocat_connect_log", .pid_file="/var/run/ocat.pid",
    .config_file="ocat.conf", .hosts_lookup=0 },
    { .prefix={ .__in6_u={ .__u6_addr8={ (unsigned char)0xfd, (unsigned char)0x60, (unsigned char)0xdb, (unsigned char)0x4d, (unsigned char)0xdd, (unsigned char)0xb5, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 } } }, .prefix_len=48,
    .prefix4={ .s_addr=(unsigned int)0x0000000a }, .addr4_mask=0x000000ff,
    .name_size=16 + 12, .domain=".b32.i2p",
    .listen_port=(signed short int)8061, .ctrl_port=(signed short int)8067,
    .vdest_port=(signed short int)8061, .socks_port=(signed short int)9051,
    .clog_file="gcat_connect_log", .pid_file="/var/run/gcat.pid",
    .config_file="gcat.conf", .hosts_lookup=1 } };
// octh_
// file ocatthread.c line 33
struct OcatThread *octh_ = (struct OcatThread *)(void *)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opterr
// file /usr/include/getopt.h line 76
extern signed int opterr;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// path_hosts_
// file ocathosts.c line 64
static char *path_hosts_ = (char *)(void *)0;
// peer_
// file ocatpeer.c line 31
static struct OcatPeer *peer_ = (struct OcatPeer *)(void *)0;
// peer_mutex_
// file ocatpeer.c line 33
static union anonymous_0 peer_mutex_ = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// route_mutex_
// file ocatipv4route.c line 34
static union anonymous_0 route_mutex_ = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rroot_
// file ocatipv4route.c line 33
static struct IPv4Route *rroot_ = (struct IPv4Route *)(void *)0;
// setup_
// file ocatsetup.c line 43
struct OcatSetup setup_;
// socks_dst6_
// file ocatsetup.c line 31
static struct sockaddr_in6 socks_dst6_;
// setup_
// file ocatsetup.c line 43
struct OcatSetup setup_ = { .fhd_key={ (unsigned int)0, (unsigned int)0 }, .fhd_key_len=(signed int)sizeof(unsigned int) /*4ul*/ ,
    .ocat_dest_port=(unsigned short int)0,
    .ocat_ctrl_port=(unsigned short int)0,
    .tunfd={ 0, 1 },
    .debug_level=7, .usrname="tor", .onion_url={ (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .ocat_addr={ .__in6_u={ .__u6_addr8={ (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } },
    .create_clog=0,
    .runasroot=0, .controller=1, .ocat_dir=".ocat",
    .tun_dev="/dev/net/tun", .tunname={ (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .ipv4_enable=0,
    .ocat_addr4={ .s_addr=(unsigned int)0 }, .ocat_addr4_mask=0,
    .config_file=(char *)(void *)0, .config_read=0,
    .config_failed=0, .use_tap=0, .ocat_hwaddr={ (unsigned char)0x00, (unsigned char)0x00, (unsigned char)0x6c, (unsigned char)0x00, (unsigned char)0x00, (unsigned char)0x00 },
    .pid_file="/var/run/ocat.pid",
    .create_pid_file=0, .logfn=(char *)(void *)0,
    .logf=(struct _IO_FILE *)(void *)0, .use_syslog=0,
    .daemon=1, .uptime=(signed long int)0, .frandn="/dev/urandom",
    ._anon0={ .socks_dst=(struct sockaddr_in *)&socks_dst6_ }, .oc_listen=(struct sockaddr **)(void *)0,
    .oc_listen_fd=(signed int *)(void *)0,
    .oc_listen_cnt=0,
    .rand_addr=0, .version={ (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .sizeof_setup=(signed int)sizeof(struct OcatSetup) /*1136ul*/ ,
    .sig_term=0,
    .term_req=0, .mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .ctrl_listen=ctrl_listen_ptr_,
    .ctrl_listen_fd=ctrl_fd_, .ctrl_listen_cnt=2,
    .socksfd={ -1, -1 }, .net_type=0,
    .max_ctrl=5, .ctrl_active=0, .pid_fd={ -1, -1 },
    .sig_usr1=0, .clear_stats=0, .unidirectional=1,
    .hosts_lookup=0, .domain="", .oc_vdns={ .__in6_u={ .__u6_addr8={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } } };
// socks_queue_
// file ocatsocks.c line 33
static struct SocksQueue *socks_queue_ = (struct SocksQueue *)(void *)0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// thread_id_
// file ocatthread.c line 31
static signed int thread_id_ = 0;
// thread_mutex_
// file ocatthread.c line 32
union anonymous_0 thread_mutex_ = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// tun_dev_
// file ocattun.c line 32
char *tun_dev_ = "/dev/net/tun";
// v6route_
// file ocatipv6route.c line 33
static struct IPv6Route *v6route_ = (struct IPv6Route *)(void *)0;
// v6route_cnt_
// file ocatipv6route.c line 34
static signed int v6route_cnt_ = 0;
// v6route_mutex_
// file ocatipv6route.c line 35
static union anonymous_0 v6route_mutex_ = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };

// add_listener
// file ocat.h line 653
void add_listener(const char *buf)
{
  struct sockaddr_in6 saddr;
  memset((void *)&saddr, 0, sizeof(struct sockaddr_in6) /*28ul*/ );
  signed int return_value_strsockaddr_1;
  return_value_strsockaddr_1=strsockaddr(buf, (struct sockaddr *)&saddr);
  if(return_value_strsockaddr_1 == -1)
  {
    log_msg(0, "could not convert address string '%s'", buf);
    exit(1);
  }

  setup_.oc_listen_cnt = setup_.oc_listen_cnt + 1;
  log_msg(7, "reallocating sockaddr list to %d elements", setup_.oc_listen_cnt);
  void *return_value_realloc_4;
  return_value_realloc_4=realloc((void *)setup_.oc_listen, sizeof(struct sockaddr *) /*8ul*/  * (unsigned long int)setup_.oc_listen_cnt);
  setup_.oc_listen = (struct sockaddr **)return_value_realloc_4;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  if(setup_.oc_listen == ((struct sockaddr **)NULL))
  {
    return_value___errno_location_2=__errno_location();
    return_value_strerror_3=strerror(*return_value___errno_location_2);
    log_msg(3, "could not get memory for listener list: \"%s\"", return_value_strerror_3);
    exit(1);
  }

  void *return_value_realloc_7;
  return_value_realloc_7=realloc((void *)setup_.oc_listen_fd, sizeof(signed int) /*4ul*/  * (unsigned long int)setup_.oc_listen_cnt);
  setup_.oc_listen_fd = (signed int *)return_value_realloc_7;
  signed int *return_value___errno_location_5;
  char *return_value_strerror_6;
  if(setup_.oc_listen_fd == ((signed int *)NULL))
  {
    return_value___errno_location_5=__errno_location();
    return_value_strerror_6=strerror(*return_value___errno_location_5);
    log_msg(3, "could not get memory for listener fds: \"%s\"", return_value_strerror_6);
    exit(1);
  }

  log_msg(7, "allocating sockaddr mem for \"%s\"", buf);
  void *return_value_calloc_10;
  return_value_calloc_10=calloc((unsigned long int)1, sizeof(struct sockaddr_in6) /*28ul*/ );
  setup_.oc_listen[(signed long int)(setup_.oc_listen_cnt - 1)] = (struct sockaddr *)return_value_calloc_10;
  signed int *return_value___errno_location_8;
  char *return_value_strerror_9;
  if(setup_.oc_listen[(signed long int)(setup_.oc_listen_cnt + -1)] == ((struct sockaddr *)NULL))
  {
    return_value___errno_location_8=__errno_location();
    return_value_strerror_9=strerror(*return_value___errno_location_8);
    log_msg(3, "could not get memory for listener : \"%s\"", return_value_strerror_9);
    exit(1);
  }

  setup_.oc_listen_fd[(signed long int)(setup_.oc_listen_cnt - 1)] = -1;
  memcpy((void *)setup_.oc_listen[(signed long int)(setup_.oc_listen_cnt - 1)], (const void *)&saddr, sizeof(struct sockaddr_in6) /*28ul*/ );
}

// background
// file ocat.c line 153
void background(void)
{
  signed int pid;
  signed int ppid;
  log_msg(7, "backgrounding");
  ppid=getpid();
  pid=fork();
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  signed int return_value_getpid_3;
  signed int return_value_setsid_6;
  signed int *return_value___errno_location_4;
  char *return_value_strerror_5;
  signed int return_value_chdir_9;
  signed int *return_value___errno_location_7;
  char *return_value_strerror_8;
  struct _IO_FILE *return_value_freopen_12;
  signed int *return_value___errno_location_10;
  char *return_value_strerror_11;
  struct _IO_FILE *return_value_freopen_15;
  signed int *return_value___errno_location_13;
  char *return_value_strerror_14;
  struct _IO_FILE *return_value_freopen_18;
  signed int *return_value___errno_location_16;
  char *return_value_strerror_17;
  if(!(pid == -1))
  {
    if(pid == 0)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    setup_.daemon = 0;
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "fork failed: %s. Staying in foreground", return_value_strerror_2);
    goto __CPROVER_DUMP_L10;

  __CPROVER_DUMP_L2:
    ;
    return_value_getpid_3=getpid();
    log_msg(6, "process backgrounded by parent %d, new pid = %d", ppid, return_value_getpid_3);
    umask((unsigned int)0);
    return_value_setsid_6=setsid();
    if(return_value_setsid_6 == -1)
    {
      return_value___errno_location_4=__errno_location();
      return_value_strerror_5=strerror(*return_value___errno_location_4);
      log_msg(3, "could not set process group ID: \"%s\"", return_value_strerror_5);
    }

    return_value_chdir_9=chdir("/");
    if(return_value_chdir_9 == -1)
    {
      return_value___errno_location_7=__errno_location();
      return_value_strerror_8=strerror(*return_value___errno_location_7);
      log_msg(3, "could not change directory to /: \"%s\"", return_value_strerror_8);
    }

    return_value_freopen_12=freopen("/dev/null", "r", stdin);
    if(return_value_freopen_12 == ((struct _IO_FILE *)NULL))
    {
      return_value___errno_location_10=__errno_location();
      return_value_strerror_11=strerror(*return_value___errno_location_10);
      log_msg(3, "could not reconnect stdin to /dev/null: \"%s\"", return_value_strerror_11);
    }

    return_value_freopen_15=freopen("/dev/null", "w", stdout);
    if(return_value_freopen_15 == ((struct _IO_FILE *)NULL))
    {
      return_value___errno_location_13=__errno_location();
      return_value_strerror_14=strerror(*return_value___errno_location_13);
      log_msg(3, "could not reconnect stdout to /dev/null: \"%s\"", return_value_strerror_14);
    }

    return_value_freopen_18=freopen("/dev/null", "w", stderr);
    if(return_value_freopen_18 == ((struct _IO_FILE *)NULL))
    {
      return_value___errno_location_16=__errno_location();
      return_value_strerror_17=strerror(*return_value___errno_location_16);
      log_msg(3, "could not reconnect stderr to /dev/null: \"%s\"", return_value_strerror_17);
    }

    goto __CPROVER_DUMP_L10;
  }
  log_msg(7, "parent %d exits, background pid = %d", ppid, pid);
  if(!(setup_.logf == ((struct _IO_FILE *)NULL)))
    fclose(setup_.logf);

  exit(0);

__CPROVER_DUMP_L10:
  ;
}

// check_tor_prefix
// file ocatroute.c line 181
signed int check_tor_prefix(struct ip6_hdr *ihd)
{
  char buf[46l];
  signed int return_value_has_tor_prefix_2;
  return_value_has_tor_prefix_2=has_tor_prefix(&ihd->ip6_dst);
  if(return_value_has_tor_prefix_2 == 0)
  {
    const char *return_value_inet_ntop_1;
    return_value_inet_ntop_1=inet_ntop(10, (const void *)&ihd->ip6_dst, buf, (unsigned int)46);
    log_msg(3, "destination %s unreachable", return_value_inet_ntop_1);
    return 0;
  }

  signed int return_value_has_tor_prefix_3;
  return_value_has_tor_prefix_3=has_tor_prefix(&ihd->ip6_src);
  if(return_value_has_tor_prefix_3 == 0)
  {
    log_msg(3, "source address invalid. Remote ocat could not reply");
    return 0;
  }

  else
  {
    unsigned short int return_value_ntohs_4;
    return_value_ntohs_4=ntohs(ihd->ip6_ctlun.ip6_un1.ip6_un1_plen);
    return (signed int)return_value_ntohs_4;
  }
}

// checksum
// file ocateth.c line 182
unsigned short int checksum(const unsigned short int *buf, signed int len)
{
  unsigned int sum = (unsigned int)0;
  for( ; len >= 2; buf = buf + 1l)
  {
    sum = sum + (unsigned int)*buf;
    len = len - 2;
  }
  if(!(len == 0))
    sum = sum + (unsigned int)*((unsigned char *)buf);

  for( ; !(sum >> 16 == 0u); sum = (sum & (unsigned int)0xffff) + (sum >> 16))
    ;
  return (unsigned short int)~sum;
}

// cleanup_socket
// file ocatroute.c line 199
void cleanup_socket(signed int fd, struct OcatPeer *peer)
{
  log_msg(6 | 0x400, "fd %d reached EOF, closing.", fd);
  oe_close(fd);
  lock_peers();
  delete_peer(peer);
  unlock_peers();
}

// cleanup_system
// file ocat.c line 240
void cleanup_system(void)
{
  struct OcatPeer *peer;
  struct OcatPeer *next;
  char c;
  log_msg(5, "waiting for system cleanup...");
  log_msg(7, "closing tunfd %d (and %d)", setup_.tunfd[(signed long int)0], setup_.tunfd[(signed long int)1]);
  oe_close(setup_.tunfd[(signed long int)0]);
  if(!(setup_.tunfd[0l] == setup_.tunfd[1l]))
    oe_close(setup_.tunfd[(signed long int)1]);

  log_msg(7, "deleting peers");
  lock_peers();
  peer=get_first_peer();
  for( ; !(peer == ((struct OcatPeer *)NULL)); peer = next)
  {
    lock_peer(peer);
    log_msg(7, "closing tcpfd %d", peer->tcpfd);
    oe_close(peer->tcpfd);
    unlock_peer(peer);
    next = peer->next;
    log_msg(7, "deleting peer at %p", peer);
    delete_peer(peer);
  }
  unlock_peers();
  sig_socks_connector();
  signed int return_value_join_threads_1;
  return_value_join_threads_1=join_threads();
  if(return_value_join_threads_1 >= 2)
  {
    log_msg(7, "waiting %ds for detached threads", 10);
    sleep((unsigned int)10);
  }

  delete_listeners(setup_.oc_listen, setup_.oc_listen_fd, setup_.oc_listen_cnt);
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  if(!(setup_.create_pid_file == 0))
  {
    if(!(setup_.pid_fd[1l] == -1))
    {
      signed long int return_value_write_4;
      return_value_write_4=write(setup_.pid_fd[(signed long int)1], (const void *)&c, (unsigned long int)1);
      if(return_value_write_4 == -1l)
      {
        return_value___errno_location_2=__errno_location();
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        log_msg(3, "cout not write to pid fd %d: \"%s\"", setup_.pid_fd[(signed long int)1], return_value_strerror_3);
      }

    }

  }

}

// create_listener
// file ocatroute.c line 639
signed int create_listener(struct sockaddr *addr, signed int sock_len)
{
  signed int family;
  signed int fd;
  signed int so;
  switch((signed int)addr->sa_family)
  {
    case 2:
    {
      family = 2;
      break;
    }
    case 10:
    {
      family = 10;
      break;
    }
    default:
    {
      log_msg(0, "unknown address family %d", addr->sa_family);
      return -1;
    }
  }
  fd=socket(family, 1, 0);
  if(!(fd >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(0, "could not create listener socker: \"%s\"", return_value_strerror_2);
    return -1;
  }

  so = 1;
  signed int return_value_setsockopt_5;
  return_value_setsockopt_5=setsockopt(fd, 1, 2, (const void *)&so, (unsigned int)sizeof(signed int) /*4ul*/ );
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  if(return_value_setsockopt_5 == -1)
  {
    return_value___errno_location_3=__errno_location();
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    log_msg(4, "could not set socket %d to SO_REUSEADDR: \"%s\"", fd, return_value_strerror_4);
  }

  signed int return_value_bind_8;
  return_value_bind_8=bind(fd, addr, (unsigned int)sock_len);
  if(return_value_bind_8 == -1)
  {
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    char *return_value_strerror_7;
    return_value_strerror_7=strerror(*return_value___errno_location_6);
    log_msg(0, "could not bind listener %d: \"%s\"", fd, return_value_strerror_7);
    oe_close(fd);
    return -1;
  }

  signed int return_value_listen_11;
  return_value_listen_11=listen(fd, 32);
  if(!(return_value_listen_11 >= 0))
  {
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    char *return_value_strerror_10;
    return_value_strerror_10=strerror(*return_value___errno_location_9);
    log_msg(0, "could not bring listener %d to listening state: \"%s\"", fd, return_value_strerror_10);
    oe_close(fd);
    return -1;
  }

  log_msg(7, "created listener, fd = %d", fd);
  return fd;
}

// ctrl_handler
// file ocat.h line 575
void * ctrl_handler(void *p)
{
  signed int fd;
  signed int c;
  struct _IO_FILE *ff;
  struct _IO_FILE *fo;
  const signed long int addrstr_array_size0 = (signed long int)netdesc_[(signed long int)setup_.net_type].name_size;
  char buf[65580l];
  char addrstr[46l];
  char onionstr[addrstr_array_size0];
  char timestr[32l];
  char *s;
  char *tokbuf;
  char *bufp;
  signed int rlen;
  signed int cfd;
  struct tm *tm;
  struct OcatPeer *peer;
  struct in6_addr in6;
  signed int pfd[2l];
  detach_thread();
  signed int return_value_pipe_3;
  return_value_pipe_3=pipe(pfd);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(return_value_pipe_3 == -1)
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(0, "couldn't create pipe: \"%s\"", return_value_strerror_2);
    exit(1);
  }

  fd = (signed int)(signed long int)p;
  signed int *return_value___errno_location_6;
  char *return_value_strerror_7;
  if(!(setup_.config_read == 0))
  {
    ff=fdopen(fd, "r+");
    if(ff == ((struct _IO_FILE *)NULL))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      char *return_value_strerror_5;
      return_value_strerror_5=strerror(*return_value___errno_location_4);
      log_msg(3, "could not open %d for writing: %s", fd, return_value_strerror_5);
      oe_close(pfd[(signed long int)0]);
      oe_close(pfd[(signed long int)1]);
      return (void *)0;
    }

    log_msg(7, "fd %d fdopen'ed \"r+\"", fd);
    fo = ff;
    signed int return_value_setvbuf_8;
    return_value_setvbuf_8=setvbuf(ff, (char *)(void *)0, 2, (unsigned long int)0);
    if(!(return_value_setvbuf_8 == 0))
    {
      return_value___errno_location_6=__errno_location();
      return_value_strerror_7=strerror(*return_value___errno_location_6);
      log_msg(3, "could not setup line buffering: %s", return_value_strerror_7);
    }

  }

  else
  {
    ff=fdopen(fd, "r");
    if(ff == ((struct _IO_FILE *)NULL))
    {
      signed int *return_value___errno_location_9;
      return_value___errno_location_9=__errno_location();
      char *return_value_strerror_10;
      return_value_strerror_10=strerror(*return_value___errno_location_9);
      log_msg(3, "could not open %d for reading: %s", fd, return_value_strerror_10);
      setup_.config_read = 1;
      oe_close(pfd[(signed long int)0]);
      oe_close(pfd[(signed long int)1]);
      return (void *)0;
    }

    log_msg(7, "fd %d fdopen'ed \"r\"", fd);
    fo = setup_.logf != ((struct _IO_FILE *)NULL) ? setup_.logf : stderr;
  }
  lock_setup();
  setup_.ctrl_active = setup_.ctrl_active + 1;
  unlock_setup();
  fprintf(fo, "%s\n", (const void *)setup_.version);
  fprintf(fo, "*** ATTENTION! Controller interface not thread-safe yet! Usage could cause deadlocks. ***\n");
  unsigned long int return_value_strlen_15;
  unsigned long int return_value_strlen_16;
  unsigned long int return_value_strlen_17;
  _Bool tmp_if_expr_49;
  signed int return_value_strncmp_48;
  signed int return_value_strcmp_46;
  _Bool tmp_statement_expression_19;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_21;
  _Bool tmp_if_expr_22;
  char *tmp_if_expr_24;
  char *return_value_ipv6tonion_23;
  signed int return_value_strcmp_45;
  signed int return_value_strcmp_44;
  signed int return_value_strcmp_43;
  signed int return_value_strcmp_42;
  signed int return_value_strcmp_41;
  _Bool tmp_if_expr_31;
  signed int return_value_oniontipv6_30;
  signed int return_value_strcmp_28;
  signed int return_value_strcmp_40;
  signed int return_value_strcmp_39;
  signed int return_value_strcmp_38;
  signed int return_value_strcmp_37;
  signed int return_value_strcmp_36;
  signed int return_value_strcmp_35;
  signed int return_value_strcmp_32;
  _Bool tmp_if_expr_34;
  signed int return_value_strcmp_33;
  while((_Bool)1)
  {
    if(!(setup_.config_read == 0))
      fprintf(fo, "%s> ", (const void *)setup_.onion_url);

    c=_IO_getc(ff);
    if(c == -1)
    {
      log_msg(7, "EOF received.");
      break;
    }

    else
      if(c == 4)
      {
        log_msg(7, "^D received.");
        break;
      }

      else
        if(c == 0x1b)
        {
          log_msg(7, "ESC received");
          signed int return_value_ungetc_11;
          return_value_ungetc_11=ungetc(c, ff);
          if(return_value_ungetc_11 == -1)
          {
            log_msg(7, "received EOF on ungetc");
            break;
          }

        }

        else
        {
          signed int return_value_ungetc_12;
          return_value_ungetc_12=ungetc(c, ff);
          if(return_value_ungetc_12 == -1)
          {
            log_msg(7, "received EOF on ungetc");
            break;
          }

        }
    char *return_value_fgets_14;
    return_value_fgets_14=fgets(buf, 65580, ff);
    if(return_value_fgets_14 == ((char *)NULL))
    {
      signed int return_value_feof_13;
      return_value_feof_13=feof(ff);
      if(return_value_feof_13 == 0)
        log_msg(3, "error reading from %d");

      break;
    }

    c = 0;
    do
    {
      return_value_strlen_15=strlen(buf);
      if((unsigned long int)c >= return_value_strlen_15)
        break;

      return_value_strlen_16=strlen(buf);
      return_value_strlen_17=strlen(buf);
      snprintf(&buf[(signed long int)(return_value_strlen_16 + (unsigned long int)2 + (unsigned long int)(c * 3))], (((unsigned long int)65580 - return_value_strlen_17) - (unsigned long int)2) - (unsigned long int)(c * 3), "%02x ", buf[(signed long int)c]);
      c = c + 1;
    }
    while((_Bool)1);
    unsigned long int return_value_strlen_18;
    return_value_strlen_18=strlen(buf);
    log_msg(7, "xenc input buf: %s", &buf[(signed long int)(return_value_strlen_18 + (unsigned long int)2)]);
    rlen=oe_remtr(buf);
    if(!(rlen == 0))
    {
      bufp=strtok_r(buf, " \t\r\n", &tokbuf);
      if(!(bufp == ((char *)NULL)))
      {
        signed int return_value_strncmp_47;
        return_value_strncmp_47=strncmp(bufp, "exit", (unsigned long int)4);
        if(return_value_strncmp_47 == 0)
          tmp_if_expr_49 = (_Bool)1;

        else
        {
          return_value_strncmp_48=strncmp(bufp, "quit", (unsigned long int)4);
          tmp_if_expr_49 = !(return_value_strncmp_48 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_49)
          break;

        else
        {
          return_value_strcmp_46=strcmp(bufp, "status");
          if(return_value_strcmp_46 == 0)
          {
            lock_peers();
            peer=get_first_peer();
            for( ; !(peer == ((struct OcatPeer *)NULL)); peer = peer->next)
              if(peer->state == 1)
              {
                tm=localtime(&peer->otime);
                strftime(timestr, (unsigned long int)32, "%c", tm);
                struct in6_addr *__a = (struct in6_addr *)&peer->addr;
                if(__a->__in6_u.__u6_addr32[0l] == 0u)
                  tmp_if_expr_20 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_20 = (_Bool)0;
                if(tmp_if_expr_20)
                  tmp_if_expr_21 = __a->__in6_u.__u6_addr32[(signed long int)2] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_21 = (_Bool)0;
                if(tmp_if_expr_21)
                  tmp_if_expr_22 = __a->__in6_u.__u6_addr32[(signed long int)3] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_22 = (_Bool)0;
                tmp_statement_expression_19 = tmp_if_expr_22;
                if(tmp_statement_expression_19)
                  tmp_if_expr_24 = "--unidentified--";

                else
                {
                  return_value_ipv6tonion_23=ipv6tonion(&peer->addr, onionstr);
                  tmp_if_expr_24 = return_value_ipv6tonion_23;
                }
                const char *return_value_inet_ntop_25;
                return_value_inet_ntop_25=inet_ntop(10, (const void *)&peer->addr, addrstr, (unsigned int)46);
                signed long int return_value_time_26;
                return_value_time_26=time((signed long int *)(void *)0);
                fprintf(fo, "[%s]\n fd = %d\n addr = %s\n dir = \"%s\" (%d)\n idle = %lds\n bytes_in = %ld\n bytes_out = %ld\n setup_delay = %lds\n opening_time = \"%s\"\n conn type = \"%s\" (%d)\n", tmp_if_expr_24, peer->tcpfd, return_value_inet_ntop_25, peer->dir == 0 ? "IN" : "OUT", peer->dir, (signed long int)(return_value_time_26 - peer->time), peer->in, peer->out, (signed long int)peer->sdelay, (const void *)timestr, peer->perm != 0 ? "PERMANENT" : "TEMPORARY", peer->perm);
              }

            unlock_peers();
          }

          else
          {
            return_value_strcmp_45=strcmp(bufp, "close");
            if(return_value_strcmp_45 == 0)
            {
              cfd=atoi(bufp + (signed long int)6);
              lock_peers();
              peer=get_first_peer();
              for( ; !(peer == ((struct OcatPeer *)NULL)); peer = peer->next)
                if(peer->tcpfd == cfd)
                {
                  oe_close(cfd);
                  delete_peer(peer);
                  log_msg(6 | 0x400, "%d was successfully closed up on user request", cfd);
                  break;
                }

              if(peer == ((struct OcatPeer *)NULL))
              {
                log_msg(6, "no peer with fd %d exists\n", cfd);
                fprintf(fo, "no peer with fd %d exists\n", cfd);
              }

              unlock_peers();
            }

            else
            {
              return_value_strcmp_44=strcmp(bufp, "threads");
              if(return_value_strcmp_44 == 0)
                print_threads(ff);

              else
              {
                return_value_strcmp_43=strcmp(bufp, "terminate");
                if(return_value_strcmp_43 == 0)
                {
                  log_msg(6, "terminate request from control port");
                  signed int return_value_getpid_27;
                  return_value_getpid_27=getpid();
                  kill(return_value_getpid_27, 2);
                }

                else
                {
                  return_value_strcmp_42=strcmp(bufp, "route");
                  if(return_value_strcmp_42 == 0)
                  {
                    if(rlen >= 7)
                    {
                      c=parse_route(bufp + (signed long int)6);
                      if(c == -4)
                      {
                        c=ipv6_parse_route(bufp + (signed long int)6);
                        if(c >= 1)
                          c = 0;

                      }

                      if(!(c == -6))
                      {
                        if(c == -3)
                          goto __CPROVER_DUMP_L43;

                        if(c == -2)
                          goto __CPROVER_DUMP_L44;

                        if(c == -7)
                          goto __CPROVER_DUMP_L45;

                      }

                      else
                      {
                        s = "gateway has not TOR prefix";
                        goto __CPROVER_DUMP_L47;

                      __CPROVER_DUMP_L43:
                        ;
                        s = "illegal netmask or prefix length";
                        goto __CPROVER_DUMP_L47;

                      __CPROVER_DUMP_L44:
                        ;
                        s = "route already exists";
                        goto __CPROVER_DUMP_L47;

                      __CPROVER_DUMP_L45:
                        ;
                        s = "gateway points to me";
                        goto __CPROVER_DUMP_L47;
                      }
                      s = "";

                    __CPROVER_DUMP_L47:
                      ;
                      if(!(c == 0))
                        fprintf(ff, "ERR %d %s\n", c, s);

                    }

                    else
                    {
                      print_routes(fo);
                      ipv6_print_routes(fo);
                    }
                  }

                  else
                  {
                    return_value_strcmp_41=strcmp(bufp, "connect");
                    if(return_value_strcmp_41 == 0)
                    {
                      s=strtok_r((char *)(void *)0, " \t\r\n", &tokbuf);
                      if(!(s == ((char *)NULL)))
                      {
                        unsigned long int return_value_strlen_29;
                        return_value_strlen_29=strlen(s);
                        if(!(return_value_strlen_29 == 16ul))
                          tmp_if_expr_31 = (_Bool)1;

                        else
                        {
                          return_value_oniontipv6_30=oniontipv6(s, &in6);
                          tmp_if_expr_31 = return_value_oniontipv6_30 == -1 ? (_Bool)1 : (_Bool)0;
                        }
                        if(tmp_if_expr_31)
                          fprintf(ff, "ERR \"%s\" not valid .onion-URL\n", bufp + (signed long int)8);

                        else
                        {
                          s=strtok_r((char *)(void *)0, " \t\r\n", &tokbuf);
                          if(s == ((char *)NULL))
                            socks_queue(in6, 0);

                          else
                          {
                            return_value_strcmp_28=strcmp(s, "perm");
                            if(return_value_strcmp_28 == 0)
                              socks_queue(in6, 1);

                            else
                              fprintf(ff, "ERR unknown param \"%s\"\n", s);
                          }
                        }
                      }

                      else
                        fprintf(ff, "ERR missing args\n");
                    }

                    else
                    {
                      return_value_strcmp_40=strcmp(bufp, "macs");
                      if(return_value_strcmp_40 == 0)
                        print_mac_tbl(ff);

                      else
                      {
                        return_value_strcmp_39=strcmp(bufp, "queue");
                        if(return_value_strcmp_39 == 0)
                        {
                          print_socks_queue((struct _IO_FILE *)(signed long int)pfd[(signed long int)1]);
                          do
                          {
                            read(pfd[(signed long int)0], (void *)buf, (unsigned long int)1);
                            if(buf[0l] == 0)
                              break;

                            fprintf(ff, "%c", buf[(signed long int)0]);
                          }
                          while((_Bool)1);
                        }

                        else
                        {
                          return_value_strcmp_38=strcmp(bufp, "setup");
                          if(return_value_strcmp_38 == 0)
                            print_setup_struct(ff);

                          else
                          {
                            return_value_strcmp_37=strcmp(bufp, "version");
                            if(return_value_strcmp_37 == 0)
                              fprintf(ff, "%s\n", (const void *)setup_.version);

                            else
                            {
                              return_value_strcmp_36=strcmp(bufp, "hosts");
                              if(return_value_strcmp_36 == 0)
                                hosts_list(ff);

                              else
                              {
                                return_value_strcmp_35=strcmp(bufp, "hreload");
                                if(return_value_strcmp_35 == 0)
                                  hosts_check();

                                else
                                {
                                  return_value_strcmp_32=strcmp(bufp, "help");
                                  if(return_value_strcmp_32 == 0)
                                    tmp_if_expr_34 = (_Bool)1;

                                  else
                                  {
                                    return_value_strcmp_33=strcmp(bufp, "?");
                                    tmp_if_expr_34 = !(return_value_strcmp_33 != 0) ? (_Bool)1 : (_Bool)0;
                                  }
                                  if(tmp_if_expr_34)
                                    fprintf(fo, "commands:\nexit | quit .... exit from control interface\nterminate ...... terminate OnionCat\nclose <n> ...... close file descriptor <n> of a peer\nhosts .......... list hosts database\nhreload ........ reload hosts database\nstatus ......... list peer status\nthreads ........ show active threads\nroute .......... show routing table\nroute <dst IP> <netmask> <IPv6 gw>\n   ............. add route to routing table\nconnect <.onion-URL> [\"perm\"]\n   ............. connect to a hidden service. if \"perm\" is set,\n   ............. connection will stay open forever\nmacs ........... show MAC address table\nqueue .......... list pending SOCKS connections\nsetup .......... show internal setup struct\nversion ........ show version\n");

                                  else
                                    fprintf(fo, "ERR unknown command: \"%s\"\n", (const void *)buf);
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
  if(!(setup_.config_read == 0))
    fprintf(fo, "Good bye!\n");

  log_msg(6 | 0x400, "closing session %d", fd);
  signed int return_value_fclose_52;
  return_value_fclose_52=fclose(ff);
  signed int *return_value___errno_location_50;
  char *return_value_strerror_51;
  if(return_value_fclose_52 == -1)
  {
    return_value___errno_location_50=__errno_location();
    return_value_strerror_51=strerror(*return_value___errno_location_50);
    log_msg(3, "error closing control stream: \"%s\"", return_value_strerror_51);
  }

  if(setup_.config_read == 0)
    setup_.config_read = 1;

  oe_close(pfd[(signed long int)0]);
  oe_close(pfd[(signed long int)1]);
  lock_setup();
  setup_.ctrl_active = setup_.ctrl_active - 1;
  unlock_setup();
  return (void *)0;
}

// delete_listeners
// file ocat.h line 654
void delete_listeners(struct sockaddr **addr, signed int *fd, signed int cnt)
{
  log_msg(7, "freeing %d sockaddrs", cnt);
  for( ; !(cnt == 0); cnt = cnt - 1)
    free((void *)addr[(signed long int)(cnt - 1)]);
  log_msg(7, "freeing sockaddr lists");
  free((void *)addr);
  free((void *)fd);
}

// delete_peer
// file ocat.h line 612
void delete_peer(struct OcatPeer *peer)
{
  signed int rc;
  struct OcatPeer **p = &peer_;
  char *return_value_strerror_1;
  for( ; !(*p == ((struct OcatPeer *)NULL)); p = &(*p)->next)
    if(*p == peer)
    {
      log_msg(7, "going to delete peer at %p", peer);
      lock_peer(peer);
      *p = peer->next;
      unlock_peer(peer);
      rc=pthread_mutex_destroy(&peer->mutex);
      if(!(rc == 0))
      {
        return_value_strerror_1=strerror(rc);
        log_msg(0, "cannot destroy mutex: \"%s\"", return_value_strerror_1);
      }

      free((void *)peer);
      goto __CPROVER_DUMP_L5;
    }


__CPROVER_DUMP_L5:
  ;
}

// detach_thread
// file ocat.h line 590
void detach_thread(void)
{
  struct OcatThread *th;
  unsigned long int thread;
  thread=pthread_self();
  signed int rc = 0;
  pthread_mutex_lock(&thread_mutex_);
  th = octh_;
  for( ; !(th == ((struct OcatThread *)NULL)); th = th->next)
    if(th->handle == thread)
      break;

  if(!(th == ((struct OcatThread *)NULL)))
  {
    rc=pthread_detach(thread);
    if(rc == 0)
      th->detached = 1;

  }

  pthread_mutex_unlock(&thread_mutex_);
  char *return_value_strerror_1;
  if(th == ((struct OcatThread *)NULL))
    log_msg(0, "thread tries to detach but is not in list");

  else
    if(!(rc == 0))
    {
      return_value_strerror_1=strerror(rc);
      log_msg(3, "could not detach thread: \"%s\"", return_value_strerror_1);
    }

    else
      log_msg(7, "thread detached");
}

// eth_check
// file ocat.h line 629
signed int eth_check(char *buf, signed int len)
{
  struct ndp6 *ndp6 = (struct ndp6 *)(buf + (signed long int)4);
  signed int return_value_memcmp_1;
  if(!((unsigned long int)len >= 18ul))
  {
    log_msg(3, "frame too short, len = %d < 4 + %d", len, sizeof(struct ether_header) /*14ul*/ );
    return -8;
  }

  else
    if(!((signed int)ndp6->eth.ether_dhost[0l] == 0x33))
    {
      if((signed int)ndp6->eth.ether_dhost[1l] == 0x33)
        goto __CPROVER_DUMP_L2;

      return_value_memcmp_1=memcmp((const void *)ndp6->eth.ether_dhost, (const void *)setup_.ocat_hwaddr, (unsigned long int)6);
      if(return_value_memcmp_1 == 0)
        goto __CPROVER_DUMP_L2;

      log_msg(7, "unknown destination MAC");
      return -9;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      unsigned short int return_value_htons_3;
      return_value_htons_3=htons((unsigned short int)0x86dd);
      if(!(ndp6->eth.ether_type == return_value_htons_3))
      {
        unsigned short int return_value_ntohs_2;
        return_value_ntohs_2=ntohs(ndp6->eth.ether_type);
        log_msg(3, "L3 protocol not implemented 0x%04x", return_value_ntohs_2);
        return -10;
      }

      if((unsigned long int)len >= 82ul)
      {
        if((signed int)ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_nxt == 58)
        {
          log_msg(7, "ICMPv6 frame intercepted, icmp6_type = %d", ndp6->_anon0.icmp6.icmp6_type);
          signed int return_value_eth_ndp_4;
          return_value_eth_ndp_4=eth_ndp(buf, len, (signed int)ndp6->_anon0.icmp6.icmp6_type);
          if(!(return_value_eth_ndp_4 == -1))
            return -11;

        }

      }

      return 0;
    }
}

// eth_ndp
// file ocateth.c line 419
signed int eth_ndp(char *buf, signed int len, signed int ndp_type)
{
  switch(ndp_type)
  {
    case 135:
    {
      log_msg(7, "ND_NEIGHBOR_SOLICIT received");
      ndp_soladv(buf, len);
      return 0;
    }
    case 136:
    {
      log_msg(7, "ND_NEIGHBOR_ADVERT received");
      ndp_recadv(buf, len);
      return 0;
    }
    default:
      return -1;
  }
}

// fdaprintf
// file ocatlibe.c line 181
signed int fdaprintf(signed int fd, signed int bsiz, const char *fmt, void **ap)
{
  const signed long int fdaprintf_array_size0 = (signed long int)bsiz;
  char buf[fdaprintf_array_size0];
  signed int s;
  signed int e;
  s=vsnprintf(buf, (unsigned long int)bsiz, fmt, ap);
  if(s >= bsiz)
  {
    signed int return_value_fdaprintf_1;
    return_value_fdaprintf_1=fdaprintf(fd, s + 1, fmt, ap);
    return return_value_fdaprintf_1;
  }

  else
    if(s == -1)
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      e = *return_value___errno_location_2;
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(e);
      log_msg(4, "vnsprintf failed: \"%s\"", return_value_strerror_3);
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      *return_value___errno_location_4 = e;
      return -1;
    }

  signed long int return_value_write_8;
  return_value_write_8=write(fd, (const void *)buf, (unsigned long int)s);
  s = (signed int)return_value_write_8;
  if(s == -1)
  {
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    e = *return_value___errno_location_5;
    char *return_value_strerror_6;
    return_value_strerror_6=strerror(e);
    log_msg(4, "write failed: \"%s\"", return_value_strerror_6);
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    *return_value___errno_location_7 = e;
    return -1;
  }

  return s;
}

// fdprintf
// file ocatlibe.c line 216
signed int fdprintf(signed int fd, const char *fmt, void **ap)
{
  signed int return_value_fdaprintf_1;
  return_value_fdaprintf_1=fdaprintf(fd, 256, fmt, ap);
  return return_value_fdaprintf_1;
}

// forward_packet
// file ocatroute.c line 50
signed int forward_packet(struct in6_addr *addr, const char *buf, signed int buflen)
{
  struct OcatPeer *peer;
  signed int len;
  lock_peers();
  peer=search_peer(addr);
  if(!(peer == ((struct OcatPeer *)NULL)))
    lock_peer(peer);

  unlock_peers();
  if(peer == ((struct OcatPeer *)NULL))
  {
    log_msg(7, "no peer for forwarding");
    return -1;
  }

  else
  {
    log_msg(7, "forwarding %d bytes to TCP fd %d", buflen, peer->tcpfd);
    signed long int return_value_send_3;
    return_value_send_3=send(peer->tcpfd, (const void *)buf, (unsigned long int)buflen, 64);
    len = (signed int)return_value_send_3;
    if(len == -1)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      log_msg(3, "could not write %d bytes to peer %d: \"%s\", dropping", buflen, peer->tcpfd, return_value_strerror_2);
    }

    else
    {
      if(!(len == buflen))
        log_msg(3, "could not write %d bytes to peer %d, %d bytes written", buflen, peer->tcpfd, len);

      peer->time=time((signed long int *)(void *)0);
      peer->out = peer->out + (unsigned long int)len;
    }
    unlock_peer(peer);
    return 0;
  }
}

// free_ckbuf
// file ocateth.c line 206
void free_ckbuf(unsigned short int *buf)
{
  free((void *)buf);
}

// get_6dst_ptr
// file ocatroute.c line 804
static struct in6_addr * get_6dst_ptr(struct ip6_hdr *i6hdr)
{
  return &i6hdr->ip6_dst;
}

// get_empty_peer
// file ocat.h line 611
struct OcatPeer * get_empty_peer(void)
{
  signed int rc;
  struct OcatPeer *peer;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct OcatPeer) /*65744ul*/ );
  peer = (struct OcatPeer *)return_value_calloc_3;
  if(peer == ((struct OcatPeer *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "cannot get memory for new peer: \"%s\"", return_value_strerror_2);
    return (struct OcatPeer *)(void *)0;
  }

  peer->tunhdr = (unsigned int *)peer->_fragbuf;
  peer->fragbuf = &peer->_fragbuf[(signed long int)setup_.fhd_key_len];
  rc=pthread_mutex_init(&peer->mutex, (const union anonymous *)(void *)0);
  if(!(rc == 0))
  {
    char *return_value_strerror_4;
    return_value_strerror_4=strerror(rc);
    log_msg(0, "cannot init new peer mutex: \"%s\"", return_value_strerror_4);
    free((void *)peer);
    return (struct OcatPeer *)(void *)0;
  }

  peer->next = peer_;
  peer_ = peer;
  return peer;
}

// get_first_peer
// file ocat.h line 604
struct OcatPeer * get_first_peer(void)
{
  return peer_;
}

// get_first_peer_ptr
// file ocat.h line 605
struct OcatPeer ** get_first_peer_ptr(void)
{
  return &peer_;
}

// get_saddr
// file ocatroute.c line 790
static unsigned int get_saddr(struct iphdr *ihdr)
{
  return ihdr->daddr;
}

// get_thread
// file ocat.h line 587
const struct OcatThread * get_thread(void)
{
  struct OcatThread *th;
  unsigned long int thread;
  thread=pthread_self();
  pthread_mutex_lock(&thread_mutex_);
  th = octh_;
  for( ; !(th == ((struct OcatThread *)NULL)); th = th->next)
    if(th->handle == thread)
      break;

  pthread_mutex_unlock(&thread_mutex_);
  return th;
}

// get_tunheader
// file ocatroute.c line 274
unsigned int get_tunheader(char *buf)
{
  unsigned int *ibuf = (unsigned int *)buf;
  return *ibuf;
}

// has_tor_prefix
// file ocat.h line 551
signed int has_tor_prefix(struct in6_addr *addr)
{
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)addr, (const void *)&netdesc_[(signed long int)setup_.net_type].prefix, (unsigned long int)6);
  return (signed int)(return_value_memcmp_1 == 0);
}

// hosts_check
// file ocathosts.h line 55
signed int hosts_check(void)
{
  if(path_hosts_ == ((char *)NULL))
    path_hosts_ = "/etc/hosts";

  signed int return_value_hosts_file_modified_r_1;
  return_value_hosts_file_modified_r_1=hosts_file_modified_r(&hosts_.hosts_ts);
  if(!(return_value_hosts_file_modified_r_1 == 0))
    hosts_.hosts_ent_cnt=hosts_read(&hosts_.hosts_ent);

  return 0;
}

// hosts_file_modified_r
// file ocathosts.c line 75
signed int hosts_file_modified_r(struct timespec *ts)
{
  struct stat st;
  log_msg(7, "checking if file \"%s\" was modified", path_hosts_);
  signed int return_value_stat_3;
  return_value_stat_3=stat(path_hosts_, &st);
  if(return_value_stat_3 == -1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(7, "stat on \"%s\" failed: \"%s\"", path_hosts_, return_value_strerror_2);
    return -1;
  }

  if(st.st_mtim.tv_sec == ts->tv_sec)
  {
    if(!(st.st_mtim.tv_nsec == ts->tv_nsec))
      goto __CPROVER_DUMP_L2;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    log_msg(7, "%s modified", path_hosts_);
    *ts = st.st_mtim;
    return 1;
  }
}

// hosts_get_name
// file ocathosts.h line 56
signed int hosts_get_name(struct in6_addr *addr, char *buf, signed int s)
{
  signed int i;
  struct hosts_ent *h;
  log_msg(7, "looking up name");
  pthread_mutex_lock(&hosts_mutex_);
  i = hosts_.hosts_ent_cnt - 1;
  h = hosts_.hosts_ent;
  _Bool tmp_statement_expression_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  for( ; i >= 0; h = h + 1l)
  {
    struct in6_addr *__a = (struct in6_addr *)addr;
    struct in6_addr *__b = (struct in6_addr *)&h->addr;
    if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
      tmp_if_expr_2 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    tmp_statement_expression_1 = tmp_if_expr_4;
    if(tmp_statement_expression_1)
    {
      strlcpy(buf, h->name, (unsigned long int)s);
      log_msg(7, "name \"%s\" found", buf);
      break;
    }

    i = i - 1;
  }
  pthread_mutex_unlock(&hosts_mutex_);
  if(!(i >= 0))
    return -1;

  else
    return 0;
}

// hosts_init
// file ocathosts.h line 57
void hosts_init(const char *dom)
{
  hosts_.hdom = dom;
}

// hosts_list
// file ocathosts.h line 58
signed int hosts_list(struct _IO_FILE *f)
{
  char in6[46l];
  signed int i;
  struct hosts_ent *h;
  pthread_mutex_lock(&hosts_mutex_);
  i = hosts_.hosts_ent_cnt - 1;
  h = hosts_.hosts_ent;
  for( ; i >= 0; h = h + 1l)
  {
    const char *return_value_inet_ntop_3;
    return_value_inet_ntop_3=inet_ntop(10, (const void *)&h->addr, in6, (unsigned int)sizeof(char [46l]) /*46ul*/ );
    if(return_value_inet_ntop_3 == ((const char *)NULL))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      log_msg(3, "inet_ntop() failed: %s", return_value_strerror_2);
      goto __CPROVER_DUMP_L3;
    }

    fprintf(f, "%s %s\n", (const void *)in6, (const void *)h->name);

  __CPROVER_DUMP_L3:
    ;
    i = i - 1;
  }
  pthread_mutex_unlock(&hosts_mutex_);
  return 0;
}

// hosts_read
// file ocathosts.c line 107
signed int hosts_read(struct hosts_ent **hent)
{
  signed int e;
  signed int n = 0;
  signed int c;
  char buf[1025l];
  char *s;
  struct addrinfo hints;
  struct addrinfo *res;
  struct hosts_ent *h;
  struct _IO_FILE *f;
  f=fopen(path_hosts_, "r");
  if(f == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(7, "fopen(\"%s\"...) failed: \"%s\"", path_hosts_, return_value_strerror_2);
    return -1;
  }

  pthread_mutex_lock(&hosts_mutex_);
  if(!(*hent == ((struct hosts_ent *)NULL)))
  {
    free((void *)*hent);
    *hent = (struct hosts_ent *)(void *)0;
  }

  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_family = 10;
  hints.ai_flags = 0x0004;
  char *return_value_fgets_3;
  unsigned long int return_value_strlen_8;
  unsigned long int return_value_strlen_9;
  signed int return_value_strcasecmp_10;
  do
  {
    return_value_fgets_3=fgets(buf, 1024, f);
    if(return_value_fgets_3 == ((char *)NULL))
      break;

    s=strtok(buf, " \t\r\n");
    if(!(s == ((char *)NULL)))
    {
      if(!((signed int)*s == 35))
      {
        e=getaddrinfo(s, (const char *)(void *)0, &hints, &res);
        if(!(e == 0))
        {
          const char *return_value_gai_strerror_4;
          return_value_gai_strerror_4=gai_strerror(e);
          log_msg(7, "getaddrinfo(\"%s\"...) failed: \"%s\"", s, return_value_gai_strerror_4);
          continue;
        }

        if(!(res->ai_family == 10))
        {
          log_msg(7, "ai_family = %d (!= AF_INET6)", res->ai_family);
          freeaddrinfo(res);
        }

        else
        {
          c = 0;
          do
          {
            s=strtok((char *)(void *)0, " \t\r\n");
            if(s == ((char *)NULL))
              break;

            unsigned long int return_value_strlen_11;
            return_value_strlen_11=strlen(s);
            unsigned long int return_value_strlen_12;
            return_value_strlen_12=strlen(hosts_.hdom);
            if(!(return_value_strlen_12 >= return_value_strlen_11))
            {
              return_value_strlen_8=strlen(s);
              return_value_strlen_9=strlen(hosts_.hdom);
              return_value_strcasecmp_10=strcasecmp(s + (signed long int)(return_value_strlen_8 - return_value_strlen_9), hosts_.hdom);
              if(return_value_strcasecmp_10 == 0)
              {
                n = n + 1;
                void *return_value_realloc_7;
                return_value_realloc_7=realloc((void *)*hent, (unsigned long int)n * sizeof(struct hosts_ent) /*1044ul*/ );
                *hent = (struct hosts_ent *)return_value_realloc_7;
                if(*hent == ((struct hosts_ent *)NULL))
                {
                  signed int *return_value___errno_location_5;
                  return_value___errno_location_5=__errno_location();
                  char *return_value_strerror_6;
                  return_value_strerror_6=strerror(*return_value___errno_location_5);
                  log_msg(3, "realloc failed: \"%s\"", return_value_strerror_6);
                  n = n - 1;
                  break;
                }

                h = (*hent + (signed long int)n) - (signed long int)1;
                h->addr = ((struct sockaddr_in6 *)res->ai_addr)->sin6_addr;
                strlcpy(h->name, s, (unsigned long int)1025);
                break;
              }

            }

            c = c + 1;
          }
          while((_Bool)1);
          freeaddrinfo(res);
        }
      }

    }

  }
  while((_Bool)1);
  pthread_mutex_unlock(&hosts_mutex_);
  fclose(f);
  log_msg(7, "found %d valid IPv6 records in %s", n, path_hosts_);
  return n;
}

// inet_ntops
// file ocatv6conv.c line 157
const char * inet_ntops(struct sockaddr *saddr, struct sockaddr_str *sas)
{
  char *src;
  log_msg(7, "convert sockaddr %p to sockaddr_str %p", saddr, sas);
  signed int *return_value___errno_location_1;
  switch((signed int)saddr->sa_family)
  {
    case 2:
    {
      src = (char *)&((struct sockaddr_in *)saddr)->sin_addr;
      sas->sstr_port = ((struct sockaddr_in *)saddr)->sin_port;
      break;
    }
    case 10:
    {
      src = (char *)&((struct sockaddr_in6 *)saddr)->sin6_addr;
      sas->sstr_port = ((struct sockaddr_in6 *)saddr)->sin6_port;
      break;
    }
    default:
    {
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = 97;
      return (const char *)(void *)0;
    }
  }
  sas->sstr_family = saddr->sa_family;
  const char *return_value_inet_ntop_2;
  return_value_inet_ntop_2=inet_ntop((signed int)saddr->sa_family, (const void *)src, sas->sstr_addr, (unsigned int)sizeof(char [46l]) /*46ul*/ );
  return return_value_inet_ntop_2;
}

// init_ocat_thread
// file ocat.h line 585
const struct OcatThread * init_ocat_thread(const char *name)
{
  struct OcatThread *th;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct OcatThread) /*112ul*/ );
  th = (struct OcatThread *)return_value_calloc_3;
  if(th == ((struct OcatThread *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "could not get memory for thread struct: \"%s\"", return_value_strerror_2);
    return (const struct OcatThread *)(void *)0;
  }

  strlcpy(th->name, name, (unsigned long int)11);
  init_ocat_thread_struct(th);
  return th;
}

// init_ocat_thread_struct
// file ocatthread.c line 36
void init_ocat_thread_struct(struct OcatThread *th)
{
  th->handle=pthread_self();
  pthread_mutex_lock(&thread_mutex_);
  signed int tmp_post_1 = thread_id_;
  thread_id_ = thread_id_ + 1;
  th->id = tmp_post_1;
  th->next = octh_;
  octh_ = th;
  pthread_mutex_unlock(&thread_mutex_);
  log_msg(7, "_init_ thread %d", th->id);
}

// init_setup
// file ocat.h line 618
void init_setup(void)
{
  struct timeval tv;
  unsigned int loop_;
  loop_=htonl((unsigned int)0x7f000001);
  signed int return_value_gettimeofday_3;
  return_value_gettimeofday_3=gettimeofday(&tv, (struct timezone *)(void *)0);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(return_value_gettimeofday_3 == -1)
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(4, "could gettimeofday(): \"%s\"", return_value_strerror_2);
  }

  srand((unsigned int)(tv.tv_sec ^ tv.tv_usec));
  setup_.uptime=time((signed long int *)(void *)0);
  memset((void *)&socks_dst6_, 0, sizeof(struct sockaddr_in6) /*28ul*/ );
  setup_._anon0.socks_dst->sin_family = (unsigned short int)2;
  memcpy((void *)&setup_._anon0.socks_dst->sin_addr, (const void *)&loop_, sizeof(struct in_addr) /*4ul*/ );
  memset((void *)&ctrl_listen_, 0, sizeof(struct sockaddr_in) /*16ul*/ );
  memset((void *)&ctrl_listen6_, 0, sizeof(struct sockaddr_in6) /*28ul*/ );
  setup_.fhd_key[(signed long int)1]=htonl((unsigned int)0x86dd);
  setup_.fhd_key[(signed long int)0]=htonl((unsigned int)0x0800);
}

// insert_anon_peer
// file ocatroute.c line 633
signed int insert_anon_peer(signed int fd)
{
  signed int return_value_insert_peer_1;
  return_value_insert_peer_1=insert_peer(fd, (const struct SocksQueue *)(void *)0, (signed long int)0);
  return return_value_insert_peer_1;
}

// insert_peer
// file ocatroute.c line 591
signed int insert_peer(signed int fd, const struct SocksQueue *sq, signed long int dly)
{
  struct OcatPeer *peer;
  log_msg(6 | 0x400, "inserting peer fd %d to active peer list", fd);
  set_nonblock(fd);
  lock_peers();
  peer=get_empty_peer();
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(peer == ((struct OcatPeer *)NULL))
  {
    unlock_peers();
    log_msg(3, "could not get new empty peer");
    return 0;
  }

  else
  {
    lock_peer(peer);
    unlock_peers();
    peer->tcpfd = fd;
    peer->state = 1;
    peer->time=time((signed long int *)(void *)0);
    peer->otime = peer->time;
    peer->sdelay = dly;
    if(!(sq == ((const struct SocksQueue *)NULL)))
    {
      *((struct in6_addr *)&peer->addr) = *((struct in6_addr *)&sq->addr);
      peer->dir = 1;
      peer->perm = sq->perm;
    }

    else
      peer->dir = 0;
    unlock_peer(peer);
    log_msg(7, "waking up socket_receiver");
    signed long int return_value_write_3;
    return_value_write_3=write(lpfd_[(signed long int)1], (const void *)&fd, (unsigned long int)1);
    if(!(return_value_write_3 == 1l))
    {
      return_value___errno_location_1=__errno_location();
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      log_msg(0, "couldn't write to socket_receiver pipe: \"%s\"", return_value_strerror_2);
    }

    return 1;
  }
}

// install_sig
// file ocat.c line 219
void install_sig(void)
{
  struct sigaction sa;
  memset((void *)&sa, 0, sizeof(struct sigaction) /*152ul*/ );
  sa.__sigaction_handler.sa_handler = sig_handler;
  log_msg(7, "installing signal handler");
  signed int return_value_sigaction_3;
  return_value_sigaction_3=sigaction(15, &sa, (struct sigaction *)(void *)0);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(return_value_sigaction_3 == -1)
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "could not install SIGINT handler: \"%s\"", return_value_strerror_2);
    exit(1);
  }

  signed int return_value_sigaction_6;
  return_value_sigaction_6=sigaction(2, &sa, (struct sigaction *)(void *)0);
  signed int *return_value___errno_location_4;
  char *return_value_strerror_5;
  if(return_value_sigaction_6 == -1)
  {
    return_value___errno_location_4=__errno_location();
    return_value_strerror_5=strerror(*return_value___errno_location_4);
    log_msg(3, "could not install SIGINT handler: \"%s\"", return_value_strerror_5);
    exit(1);
  }

  signed int return_value_sigaction_9;
  return_value_sigaction_9=sigaction(1, &sa, (struct sigaction *)(void *)0);
  signed int *return_value___errno_location_7;
  char *return_value_strerror_8;
  if(return_value_sigaction_9 == -1)
  {
    return_value___errno_location_7=__errno_location();
    return_value_strerror_8=strerror(*return_value___errno_location_7);
    log_msg(3, "could not install SIGHUP handler: \"%s\"", return_value_strerror_8);
    exit(1);
  }

  signed int return_value_sigaction_12;
  return_value_sigaction_12=sigaction(10, &sa, (struct sigaction *)(void *)0);
  signed int *return_value___errno_location_10;
  char *return_value_strerror_11;
  if(return_value_sigaction_12 == -1)
  {
    return_value___errno_location_10=__errno_location();
    return_value_strerror_11=strerror(*return_value___errno_location_10);
    log_msg(3, "could not install SIGUSR1 handler: \"%s\"", return_value_strerror_11);
    exit(1);
  }

  signed int return_value_sigaction_15;
  return_value_sigaction_15=sigaction(17, &sa, (struct sigaction *)(void *)0);
  signed int *return_value___errno_location_13;
  char *return_value_strerror_14;
  if(return_value_sigaction_15 == -1)
  {
    return_value___errno_location_13=__errno_location();
    return_value_strerror_14=strerror(*return_value___errno_location_13);
    log_msg(3, "could not install SIGCHLD handler: \"%s\"", return_value_strerror_14);
    exit(1);
  }

}

// ipv4_add_route
// file ocatipv4route.c line 40
signed int ipv4_add_route(struct IPv4Route *route, struct IPv4Route **root, unsigned int cur_nm)
{
  if(*root == ((struct IPv4Route *)NULL))
  {
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct IPv4Route) /*40ul*/ );
    *root = (struct IPv4Route *)return_value_calloc_3;
    if(*root == ((struct IPv4Route *)NULL))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      log_msg(0, "ipv4_add_route: %s", return_value_strerror_2);
      return -1;
    }

    (*root)->dest = route->dest & cur_nm;
    (*root)->netmask = cur_nm;
  }

  _Bool tmp_statement_expression_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_statement_expression_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_11;
  if(route->netmask == cur_nm)
  {
    struct in6_addr *__a = (struct in6_addr *)&(*root)->gw;
    struct in6_addr *__b = (struct in6_addr *)&in6addr_any;
    if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
      tmp_if_expr_5 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
      tmp_if_expr_6 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_6 = (_Bool)0;
    if(tmp_if_expr_6)
      tmp_if_expr_7 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_7 = (_Bool)0;
    tmp_statement_expression_4 = tmp_if_expr_7;
    if(tmp_statement_expression_4)
    {
      memcpy((void *)&(*root)->gw, (const void *)&route->gw, sizeof(struct in6_addr) /*16ul*/ );
      return 0;
    }

    struct in6_addr *ipv4_add_route__1__2__3____a = (struct in6_addr *)&(*root)->gw;
    struct in6_addr *ipv4_add_route__1__2__3____b = (struct in6_addr *)&route->gw;
    if(ipv4_add_route__1__2__3____a->__in6_u.__u6_addr32[0l] == ipv4_add_route__1__2__3____b->__in6_u.__u6_addr32[0l])
      tmp_if_expr_9 = ipv4_add_route__1__2__3____a->__in6_u.__u6_addr32[(signed long int)1] == ipv4_add_route__1__2__3____b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_9 = (_Bool)0;
    if(tmp_if_expr_9)
      tmp_if_expr_10 = ipv4_add_route__1__2__3____a->__in6_u.__u6_addr32[(signed long int)2] == ipv4_add_route__1__2__3____b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_10 = (_Bool)0;
    if(tmp_if_expr_10)
      tmp_if_expr_11 = ipv4_add_route__1__2__3____a->__in6_u.__u6_addr32[(signed long int)3] == ipv4_add_route__1__2__3____b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_11 = (_Bool)0;
    tmp_statement_expression_8 = tmp_if_expr_11;
    if(tmp_statement_expression_8)
      return 0;

    log_msg(3, "route already exists");
    return -2;
  }

  else
    if(cur_nm == 0xffffffff)
    {
      log_msg(3, "netmask error in netmask of route: %08x", route->netmask);
      return -3;
    }

    else
    {
      cur_nm = cur_nm >> 1;
      cur_nm = cur_nm | 0x80000000;
      signed int return_value_ipv4_add_route_12;
      return_value_ipv4_add_route_12=ipv4_add_route(route, &(*root)->next[(signed long int)((route->dest & cur_nm & ~(cur_nm << 1)) != (unsigned int)0)], cur_nm);
      return return_value_ipv4_add_route_12;
    }
}

// ipv4_lookup_route
// file ocat.h line 624
struct in6_addr * ipv4_lookup_route(unsigned int ip)
{
  struct IPv4Route *r;
  pthread_mutex_lock(&route_mutex_);
  r=ipv4_lookup_route__(ip, rroot_, (unsigned int)0);
  pthread_mutex_unlock(&route_mutex_);
  struct in6_addr *tmp_if_expr_1;
  if(!(r == ((struct IPv4Route *)NULL)))
    tmp_if_expr_1 = &r->gw;

  else
    tmp_if_expr_1 = (struct in6_addr *)(void *)0;
  return tmp_if_expr_1;
}

// ipv4_lookup_route__
// file ocatipv4route.c line 83
struct IPv4Route * ipv4_lookup_route__(unsigned int ip, struct IPv4Route *route, unsigned int cur_nm)
{
  struct IPv4Route *return_value_ipv4_lookup_route___1;
  _Bool tmp_statement_expression_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  if(route == ((struct IPv4Route *)NULL))
  {
    log_msg(7, "NULL route");
    return (struct IPv4Route *)(void *)0;
  }

  else
  {
    cur_nm = cur_nm >> 1;
    cur_nm = cur_nm | 0x80000000;
    if(!(route->next[(signed long int)!((~(cur_nm << 1) & cur_nm & ip) == 0u)] == ((struct IPv4Route *)NULL)))
    {
      return_value_ipv4_lookup_route___1=ipv4_lookup_route__(ip, route->next[(signed long int)((ip & cur_nm & ~(cur_nm << 1)) != (unsigned int)0)], cur_nm);
      return return_value_ipv4_lookup_route___1;
    }

    else
    {
      struct in6_addr *__a = (struct in6_addr *)&route->gw;
      struct in6_addr *__b = (struct in6_addr *)&in6addr_any;
      if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
        tmp_if_expr_3 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_4 = (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      tmp_statement_expression_2 = tmp_if_expr_5;
      if(!tmp_statement_expression_2)
        return route;

      else
        return (struct IPv4Route *)(void *)0;
    }
  }
}

// ipv4_print
// file ocatipv4route.c line 131
void ipv4_print(struct IPv4Route *route, void *f)
{
  char addr[46l];
  struct in_addr iaddr;
  _Bool tmp_statement_expression_1;
  struct in6_addr *__a = (struct in6_addr *)&route->gw;
  struct in6_addr *__b = (struct in6_addr *)&in6addr_any;
  _Bool tmp_if_expr_2;
  if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
    tmp_if_expr_2 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_4 = (_Bool)0;
  tmp_statement_expression_1 = tmp_if_expr_4;
  if(!tmp_statement_expression_1)
  {
    iaddr.s_addr=htonl(route->dest);
    char *return_value_inet_ntoa_5;
    return_value_inet_ntoa_5=inet_ntoa(iaddr);
    fprintf((struct _IO_FILE *)f, "IN  %s ", return_value_inet_ntoa_5);
    iaddr.s_addr=htonl(route->netmask);
    char *return_value_inet_ntoa_6;
    return_value_inet_ntoa_6=inet_ntoa(iaddr);
    fprintf((struct _IO_FILE *)f, "%s ", return_value_inet_ntoa_6);
    inet_ntop(10, (const void *)&route->gw, addr, (unsigned int)46);
    fprintf((struct _IO_FILE *)f, "%s %p\n", (const void *)addr, route);
  }

}

// ipv4_traverse
// file ocatipv4route.c line 120
void ipv4_traverse(struct IPv4Route *route, void (*func)(struct IPv4Route *, void *), void *p)
{
  if(!(route == ((struct IPv4Route *)NULL)))
  {
    func(route, p);
    ipv4_traverse(route->next[(signed long int)0], func, p);
    ipv4_traverse(route->next[(signed long int)1], func, p);
  }

}

// ipv6_add_route
// file ocatipv6route.c line 83
signed int ipv6_add_route(const struct IPv6Route *route)
{
  signed int r = -1;
  struct IPv6Route *rt;
  pthread_mutex_lock(&v6route_mutex_);
  void *return_value_realloc_2;
  return_value_realloc_2=realloc((void *)v6route_, sizeof(struct IPv6Route) /*36ul*/  * (unsigned long int)(v6route_cnt_ + 1));
  rt = (struct IPv6Route *)return_value_realloc_2;
  signed int tmp_post_1;
  if(!(rt == ((struct IPv6Route *)NULL)))
  {
    v6route_ = rt;
    r = v6route_cnt_;
    tmp_post_1 = v6route_cnt_;
    v6route_cnt_ = v6route_cnt_ + 1;
    memcpy((void *)&v6route_[(signed long int)tmp_post_1], (const void *)route, sizeof(struct IPv6Route) /*36ul*/ );
  }

  pthread_mutex_unlock(&v6route_mutex_);
  return r;
}

// ipv6_lookup_route
// file ocat.h line 658
struct in6_addr * ipv6_lookup_route(struct in6_addr *dest)
{
  struct in6_addr addr;
  signed int i;
  signed int n;
  pthread_mutex_lock(&v6route_mutex_);
  n = v6route_cnt_;
  i = 0;
  _Bool tmp_statement_expression_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  for( ; !(i >= n); i = i + 1)
  {
    addr = *dest;
    ipv6_reduce(&addr, (v6route_ + (signed long int)i)->prefixlen);
    struct in6_addr *__a = (struct in6_addr *)&(v6route_ + (signed long int)i)->dest;
    struct in6_addr *__b = (struct in6_addr *)&addr;
    if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
      tmp_if_expr_2 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    tmp_statement_expression_1 = tmp_if_expr_4;
    if(tmp_statement_expression_1)
    {
      log_msg(7, "IPv6 route found");
      break;
    }

  }
  pthread_mutex_unlock(&v6route_mutex_);
  struct in6_addr *tmp_if_expr_5;
  if(!(i >= n))
    tmp_if_expr_5 = &(v6route_ + (signed long int)i)->gw;

  else
    tmp_if_expr_5 = (struct in6_addr *)(void *)0;
  return tmp_if_expr_5;
}

// ipv6_parse_route
// file ocat.h line 660
signed int ipv6_parse_route(const char *rs)
{
  signed long int ipv6_parse_route_array_size0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(rs);
  ipv6_parse_route_array_size0 = (signed long int)(return_value_strlen_1 + (unsigned long int)1);
  char buf[ipv6_parse_route_array_size0];
  char *s;
  char *b;
  struct IPv6Route route6;
  _Bool tmp_statement_expression_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  if(rs == ((const char *)NULL))
    return -5;

  else
  {
    log_msg(7, "IPv6 route parser: \"%s\"", rs);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(rs);
    strlcpy(buf, rs, return_value_strlen_2 + (unsigned long int)1);
    s=strtok_r(buf, " \t", &b);
    if(s == ((char *)NULL))
      return -4;

    else
    {
      signed int return_value_inet_pton_3;
      return_value_inet_pton_3=inet_pton(10, s, (void *)&route6.dest);
      if(!(return_value_inet_pton_3 == 1))
        return -4;

      else
      {
        s=strtok_r((char *)(void *)0, " \t", &b);
        if(s == ((char *)NULL))
          return -4;

        else
        {
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          *return_value___errno_location_4 = 0;
          signed long int return_value_strtol_5;
          return_value_strtol_5=strtol(s, (char ** restrict )(void *)0, 10);
          route6.prefixlen = (signed int)return_value_strtol_5;
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          if(!(*return_value___errno_location_6 == 0))
            return -4;

          else
            if(route6.prefixlen >= 129 || !(route6.prefixlen >= 0))
              return -3;

            else
            {
              s=strtok_r((char *)(void *)0, " \t", &b);
              if(s == ((char *)NULL))
                return -4;

              else
              {
                signed int return_value_inet_pton_7;
                return_value_inet_pton_7=inet_pton(10, s, (void *)&route6.gw);
                if(!(return_value_inet_pton_7 == 1))
                  return -4;

                else
                {
                  signed int return_value_has_tor_prefix_8;
                  return_value_has_tor_prefix_8=has_tor_prefix(&route6.gw);
                  if(return_value_has_tor_prefix_8 == 0)
                    return -6;

                  else
                  {
                    struct in6_addr *__a = (struct in6_addr *)&route6.gw;
                    struct in6_addr *__b = (struct in6_addr *)&setup_.ocat_addr;
                    if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
                      tmp_if_expr_10 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

                    else
                      tmp_if_expr_10 = (_Bool)0;
                    if(tmp_if_expr_10)
                      tmp_if_expr_11 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

                    else
                      tmp_if_expr_11 = (_Bool)0;
                    if(tmp_if_expr_11)
                      tmp_if_expr_12 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

                    else
                      tmp_if_expr_12 = (_Bool)0;
                    tmp_statement_expression_9 = tmp_if_expr_12;
                    if(tmp_statement_expression_9)
                      return -7;

                    else
                    {
                      ipv6_reduce(&route6.dest, route6.prefixlen);
                      struct in6_addr *return_value_ipv6_lookup_route_13;
                      return_value_ipv6_lookup_route_13=ipv6_lookup_route(&route6.dest);
                      if(!(return_value_ipv6_lookup_route_13 == ((struct in6_addr *)NULL)))
                        return -2;

                      else
                      {
                        signed int return_value_ipv6_add_route_14;
                        return_value_ipv6_add_route_14=ipv6_add_route(&route6);
                        return return_value_ipv6_add_route_14;
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

// ipv6_print
// file ocatipv6route.c line 100
void ipv6_print(struct IPv6Route *route, void *f)
{
  char addr[46l];
  inet_ntop(10, (const void *)&route->dest, addr, (unsigned int)46);
  fprintf((struct _IO_FILE *)f, "IN6 %s %3d ", (const void *)addr, route->prefixlen);
  inet_ntop(10, (const void *)&route->gw, addr, (unsigned int)46);
  fprintf((struct _IO_FILE *)f, "%s %p\n", (const void *)addr, route);
}

// ipv6_print_routes
// file ocat.h line 659
void ipv6_print_routes(struct _IO_FILE *f)
{
  signed int i;
  pthread_mutex_lock(&v6route_mutex_);
  i = 0;
  for( ; !(i >= v6route_cnt_); i = i + 1)
    ipv6_print(&v6route_[(signed long int)i], (void *)f);
  pthread_mutex_unlock(&v6route_mutex_);
}

// ipv6_reduce
// file ocatipv6route.c line 42
void ipv6_reduce(struct in6_addr *net, signed int prefixlen)
{
  signed int i;
  char m;
  i = 0;
  for( ; !(i >= 128 + -prefixlen >> 3); i = i + 1)
    net->__in6_u.__u6_addr8[(signed long int)(15 - i)] = (unsigned char)0;
  m = (char)(0xff << 8 - prefixlen % 8);
  net->__in6_u.__u6_addr8[(signed long int)(prefixlen >> 3)] = net->__in6_u.__u6_addr8[(signed long int)(prefixlen >> 3)] & (unsigned char)m;
}

// ipv6tonion
// file ocat.h line 548
char * ipv6tonion(struct in6_addr *ip6, char *onion)
{
  signed int i;
  char bin[16l];
  char *r = onion;
  memcpy((void *)bin, (const void *)((char *)ip6 + (signed long int)6), (unsigned long int)10);
  i = 0;
  for( ; !(i >= 16); onion = onion + 1l)
  {
    *onion = BASE32[(signed long int)((signed int)bin[(signed long int)0] >> 3 & 0x1f)];
    shl5(bin);
    i = i + 1;
  }
  *onion = (char)0;
  return r;
}

// join_threads
// file ocat.h line 589
signed int join_threads(void)
{
  struct OcatThread *th;
  struct OcatThread thb;
  void *ret;
  signed int rc;
  _Bool tmp_if_expr_1;
  char *return_value_strerror_2;
  do
  {
    pthread_mutex_lock(&thread_mutex_);
    th = octh_;
    rc = 0;
    do
    {
      if(!(th == ((struct OcatThread *)NULL)))
        tmp_if_expr_1 = th->detached != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      th = th->next;
      rc = rc + 1;
    }
    while((_Bool)1);
    if(th == ((struct OcatThread *)NULL))
    {
      pthread_mutex_unlock(&thread_mutex_);
      break;
    }

    memcpy((void *)&thb, (const void *)th, sizeof(struct OcatThread) /*112ul*/ );
    pthread_mutex_unlock(&thread_mutex_);
    log_msg(7, "joing thread \"%s\" (%d)", (const void *)thb.name, thb.id);
    rc=pthread_join(thb.handle, &ret);
    if(!(rc == 0))
    {
      return_value_strerror_2=strerror(rc);
      log_msg(3, "error joining thread: \"%s\"", return_value_strerror_2);
    }

    log_msg(7, "thread successful joined and return %p", ret);
  }
  while((_Bool)1);
  log_msg(7, "no more joinable threads available, %d detached", rc);
  return rc;
}

// lock_peer
// file ocat.h line 608
signed int lock_peer(struct OcatPeer *peer)
{
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(&peer->mutex);
  return return_value_pthread_mutex_lock_1;
}

// lock_peers
// file ocat.h line 606
signed int lock_peers(void)
{
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(&peer_mutex_);
  return return_value_pthread_mutex_lock_1;
}

// lock_setup
// file ocat.h line 620
void lock_setup(void)
{
  pthread_mutex_lock(&setup_.mutex);
}

// log_msg
// file ocat.h line 540
void log_msg(signed int lf, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  vlog_msgf(setup_.logf, lf, fmt, ap);
  ap = ((void **)NULL);
  if(!((0x400 & lf) == 0) && !(clog_ == ((struct _IO_FILE *)NULL)))
  {
    ap = (void **)&fmt;
    vlog_msgf(clog_, lf, fmt, ap);
    ap = ((void **)NULL);
    fflush(clog_);
  }

  if(!((0x800 & lf) == 0))
  {
    ap = (void **)&fmt;
    vfprintf(stderr, fmt, ap);
    ap = ((void **)NULL);
    fprintf(stderr, "\n");
  }

}

// mac_add_entry
// file ocateth.c line 128
signed int mac_add_entry(const unsigned char *hwaddr, struct in6_addr *in6)
{
  signed int e = -1;
  pthread_mutex_lock(&mac_mutex_);
  signed int tmp_post_1;
  if(!(mac_cnt_ >= 128))
  {
    log_msg(7, "adding entry to MAC table %d", mac_cnt_);
    memcpy((void *)&mac_tbl_[(signed long int)mac_cnt_].hwaddr, (const void *)hwaddr, (unsigned long int)6);
    memcpy((void *)&mac_tbl_[(signed long int)mac_cnt_]._anon0.in6addr, (const void *)in6, sizeof(struct in6_addr) /*16ul*/ );
    mac_tbl_[(signed long int)mac_cnt_].age=time((signed long int *)(void *)0);
    mac_tbl_[(signed long int)mac_cnt_].family = (unsigned short int)10;
    tmp_post_1 = mac_cnt_;
    mac_cnt_ = mac_cnt_ + 1;
    e = tmp_post_1;
  }

  pthread_mutex_unlock(&mac_mutex_);
  return e;
}

// mac_cleanup
// file ocat.h line 632
void mac_cleanup(void)
{
  signed int i;
  char hw[20l];
  pthread_mutex_lock(&mac_mutex_);
  i = 0;
  signed long int return_value_time_2;
  for( ; !(i >= mac_cnt_); i = i + 1)
  {
    return_value_time_2=time((signed long int *)(void *)0);
    if(!(120l + mac_tbl_[(signed long int)i].age >= return_value_time_2))
    {
      char *return_value_ether_ntoa_r_1;
      return_value_ether_ntoa_r_1=ether_ntoa_r((struct ether_addr *)mac_tbl_[(signed long int)i].hwaddr, hw);
      log_msg(7, "mac table entry %d (%s) timed out", i, return_value_ether_ntoa_r_1);
      memmove((void *)&mac_tbl_[(signed long int)i], (const void *)&mac_tbl_[(signed long int)(i + 1)], sizeof(struct MACTable) /*40ul*/  * (unsigned long int)(128 - i));
      mac_cnt_ = mac_cnt_ - 1;
      i = i - 1;
    }

  }
  pthread_mutex_unlock(&mac_mutex_);
}

// mac_get_ip
// file ocateth.c line 156
signed int mac_get_ip(const unsigned char *hwaddr, struct in6_addr *in6)
{
  signed int i;
  pthread_mutex_lock(&mac_mutex_);
  i = mac_cnt_ - 1;
  signed int return_value_memcmp_1;
  for( ; i >= 0; i = i - 1)
  {
    return_value_memcmp_1=memcmp((const void *)hwaddr, (const void *)&mac_tbl_[(signed long int)i].hwaddr, (unsigned long int)6);
    if(return_value_memcmp_1 == 0)
    {
      if(!(in6 == ((struct in6_addr *)NULL)))
        memcpy((void *)in6, (const void *)&mac_tbl_[(signed long int)i]._anon0.in6addr, sizeof(struct in6_addr) /*16ul*/ );

      mac_tbl_[(signed long int)i].age=time((signed long int *)(void *)0);
      break;
    }

  }
  pthread_mutex_unlock(&mac_mutex_);
  return i;
}

// mac_set
// file ocat.h line 630
signed int mac_set(struct in6_addr *in6, unsigned char *hwaddr)
{
  signed int i;
  pthread_mutex_lock(&mac_mutex_);
  i = mac_cnt_ - 1;
  _Bool tmp_statement_expression_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  for( ; i >= 0; i = i - 1)
  {
    struct in6_addr *__a = (struct in6_addr *)in6;
    struct in6_addr *__b = (struct in6_addr *)&mac_tbl_[(signed long int)i]._anon0.in6addr;
    if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
      tmp_if_expr_7 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
      tmp_if_expr_8 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_8 = (_Bool)0;
    if(tmp_if_expr_8)
      tmp_if_expr_9 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_9 = (_Bool)0;
    tmp_statement_expression_6 = tmp_if_expr_9;
    if(tmp_statement_expression_6)
    {
      if(!(hwaddr == ((unsigned char *)NULL)))
      {
        if(*hwaddr == 0)
          tmp_if_expr_1 = !(hwaddr[(signed long int)1] != 0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(tmp_if_expr_1)
          tmp_if_expr_2 = !(hwaddr[(signed long int)2] != 0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_2 = (_Bool)0;
        if(tmp_if_expr_2)
          tmp_if_expr_3 = !(hwaddr[(signed long int)3] != 0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = !(hwaddr[(signed long int)4] != 0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          tmp_if_expr_5 = !(hwaddr[(signed long int)5] != 0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_5 = (_Bool)0;
        if(tmp_if_expr_5)
          memcpy((void *)hwaddr, (const void *)&mac_tbl_[(signed long int)i].hwaddr, (unsigned long int)6);

        else
          memcpy((void *)&mac_tbl_[(signed long int)i].hwaddr, (const void *)hwaddr, (unsigned long int)6);
      }

      mac_tbl_[(signed long int)i].age=time((signed long int *)(void *)0);
      break;
    }

  }
  pthread_mutex_unlock(&mac_mutex_);
  return i;
}

// main
// file ocat.c line 458
signed int main(signed int argc, char **argv)
{
  char pwdbuf[1024l];
  char *s;
  char ip6addr[46l];
  char hw[20l];
  char def[100l];
  signed int c;
  struct passwd *pwd;
  struct passwd pwdm;
  signed int urlconv = 0;
  signed int mode_detect = 0;
  init_setup();
  char *return_value_strstr_1;
  return_value_strstr_1=strstr(argv[(signed long int)0], "gcat");
  if(!(return_value_strstr_1 == ((char *)NULL)))
  {
    setup_.net_type = 1;
    snprintf(def, (unsigned long int)100, "127.0.0.1:%d", netdesc_[(signed long int)setup_.net_type].listen_port);
    post_init_setup();
    mode_detect = 1;
  }

  c = 0;
  for( ; !(c >= argc); c = c + 1)
    log_msg(7, "argv[%d] = \"%s\"", c, argv[(signed long int)c]);
  parse_opt_early(argc, argv);
  if(mode_detect == 0)
  {
    snprintf(def, (unsigned long int)100, "127.0.0.1:%d", netdesc_[(signed long int)setup_.net_type].listen_port);
    post_init_setup();
  }

  c=open(setup_.config_file, 00);
  if(c == -1)
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    setup_.config_failed = *return_value___errno_location_2;
    setup_.config_read = 1;
    char *return_value_strerror_3;
    return_value_strerror_3=strerror(setup_.config_failed);
    log_msg(7, "opening config file \"%s\" failed: \"%s\"", setup_.config_file, return_value_strerror_3);
  }

  else
    ctrl_handler((void *)(signed long int)c);
  c = 0;
  for( ; !(c >= argc); c = c + 1)
    log_msg(7, "argv[%d] = \"%s\"", c, argv[(signed long int)c]);
  urlconv=parse_opt(argc, argv);
  if(!(argc >= 2))
  {
    usage(argv[(signed long int)0]);
    exit(1);
  }

  if(setup_.rand_addr == 0)
  {
    if(argv[(signed long int)optind] == ((char *)NULL))
    {
      usage(argv[(signed long int)0]);
      exit(1);
    }

  }

  if(!(urlconv == 0))
    setup_.daemon = 0;

  if(setup_.daemon == 0 && setup_.use_syslog == 0)
    setup_.logf = stderr;

  signed int return_value_open_logfile_4;
  return_value_open_logfile_4=open_logfile();
  if(return_value_open_logfile_4 == -1)
  {
    if(setup_.logf == ((struct _IO_FILE *)NULL))
      openlog("onioncat", 0x08 | 0x01, 3 << 3);

  }

  init_ocat_thread("main");
  detach_thread();
  char *return_value_strerror_5;
  if(!(setup_.config_failed == 0) && !(setup_.config_failed == 2))
  {
    return_value_strerror_5=strerror(setup_.config_failed);
    log_msg(5, "could not open config file %s: %s", setup_.config_file, return_value_strerror_5);
  }

  signed int *return_value___errno_location_6;
  char *return_value_strerror_7;
  if(urlconv == 2)
  {
    c=inet_pton(10, argv[(signed long int)optind], (void *)&setup_.ocat_addr);
    if(!(c >= 0))
    {
      return_value___errno_location_6=__errno_location();
      return_value_strerror_7=strerror(*return_value___errno_location_6);
      log_msg(3, "inet_pton failed: %s", return_value_strerror_7);
      exit(1);
    }

    else
      if(c == 0)
      {
        log_msg(3, "%s is not a valid IPv6 address", argv[(signed long int)optind]);
        exit(1);
      }

    signed int return_value_has_tor_prefix_8;
    return_value_has_tor_prefix_8=has_tor_prefix(&setup_.ocat_addr);
    if(return_value_has_tor_prefix_8 == 0)
    {
      log_msg(3, "address does not have TOR prefix");
      exit(1);
    }

    ipv6tonion(&setup_.ocat_addr, setup_.onion_url);
    printf("%s%s\n", (const void *)setup_.onion_url, netdesc_[(signed long int)setup_.net_type].domain);
    exit(0);
  }

  char *tmp_if_expr_9;
  if(!(argv[(signed long int)optind] == ((char *)NULL)))
    tmp_if_expr_9 = argv[(signed long int)optind];

  else
    tmp_if_expr_9 = "(nil)";
  log_msg(7, "argv[%d] = \"%s\"", optind, tmp_if_expr_9);
  if(setup_.rand_addr == 0)
    strncpy(setup_.onion_url, argv[(signed long int)optind], (unsigned long int)netdesc_[(signed long int)setup_.net_type].name_size);

  else
    rand_onion(setup_.onion_url);
  s=strchr(setup_.onion_url, 46);
  if(!(s == ((char *)NULL)))
    *s = (char)0;

  unsigned long int return_value_strlen_10;
  return_value_strlen_10=strlen(setup_.onion_url);
  if(!(return_value_strlen_10 == 16ul))
  {
    log_msg(3, "parameter seems not to be valid onion hostname");
    exit(1);
  }

  signed int return_value_oniontipv6_11;
  return_value_oniontipv6_11=oniontipv6(setup_.onion_url, &setup_.ocat_addr);
  if(return_value_oniontipv6_11 == -1)
  {
    log_msg(3, "parameter seems not to be valid onion hostname");
    exit(1);
  }

  unsigned int return_value_ntohl_12;
  if(!(setup_.ipv4_enable == 0))
  {
    return_value_ntohl_12=ntohl((unsigned int)setup_.ocat_addr4_mask);
    oniontipv4(setup_.onion_url, &setup_.ocat_addr4, (signed int)return_value_ntohl_12);
  }

  const char *return_value_inet_ntop_15;
  return_value_inet_ntop_15=inet_ntop(10, (const void *)&setup_.ocat_addr, ip6addr, (unsigned int)46);
  signed int *return_value___errno_location_13;
  char *return_value_strerror_14;
  if(return_value_inet_ntop_15 == ((const char *)NULL))
  {
    return_value___errno_location_13=__errno_location();
    return_value_strerror_14=strerror(*return_value___errno_location_13);
    log_msg(3, "cannot convert IP address with inet_ntop: \"%s\"", return_value_strerror_14);
    exit(1);
  }

  char *return_value_inet_ntoa_16;
  if(urlconv == 1)
  {
    printf("%s\n", (const void *)ip6addr);
    if(!(setup_.ipv4_enable == 0))
    {
      return_value_inet_ntoa_16=inet_ntoa(setup_.ocat_addr4);
      printf("%s\n", return_value_inet_ntoa_16);
    }

    exit(0);
  }

  log_msg(6, "%s", (const void *)setup_.version);
  memcpy((void *)&setup_.ocat_hwaddr[(signed long int)3], (const void *)&setup_.ocat_addr.__in6_u.__u6_addr8[(signed long int)13], (unsigned long int)3);
  char *return_value_ether_ntoa_r_17;
  if(!(setup_.use_tap == 0))
  {
    return_value_ether_ntoa_r_17=ether_ntoa_r((struct ether_addr *)setup_.ocat_hwaddr, hw);
    log_msg(6, "MAC address %s", return_value_ether_ntoa_r_17);
  }

  setup_.tunfd[(signed long int)1]=tun_alloc(setup_.tunname, (signed int)sizeof(char [256l]) /*256ul*/ , setup_.ocat_addr);
  setup_.tunfd[(signed long int)0] = setup_.tunfd[(signed long int)1];
  if(setup_.tunfd[0l] == -1)
  {
    log_msg(2, "error opening TUN/TAP device");
    exit(1);
  }

  log_msg(6, "IPv6 address %s", (const void *)ip6addr);
  log_msg(6, "TUN/TAP device %s", (const void *)setup_.tunname);
  char *return_value_inet_ntoa_18;
  if(!(setup_.ipv4_enable == 0))
  {
    return_value_inet_ntoa_18=inet_ntoa(setup_.ocat_addr4);
    log_msg(6, "IP address %s", return_value_inet_ntoa_18);
  }

  unsigned int return_value_ntohl_19;
  return_value_ntohl_19=ntohl(setup_.fhd_key[(signed long int)1]);
  unsigned int return_value_ntohl_20;
  return_value_ntohl_20=ntohl(setup_.fhd_key[(signed long int)0]);
  log_msg(7, "tun frameheader v6 = 0x%08x, v4 = 0x%08x", return_value_ntohl_19, return_value_ntohl_20);
  if(!(setup_.daemon == 0))
    background();

  if(!(setup_.create_pid_file == 0))
    mk_pid_file();

  if(setup_.oc_listen_cnt == 0)
    add_listener(def);

  run_ocat_thread("receiver", socket_receiver, (void *)0);
  if(setup_.oc_listen_cnt >= 1)
    run_ocat_thread("acceptor", socket_acceptor, (void *)0);

  else
    log_msg(6, "acceptor not started");
  run_ocat_thread("cleaner", socket_cleaner, (void *)0);
  log_msg(7, "getting user info for \"%s\"", setup_.usrname);
  c=getpwnam_r(setup_.usrname, &pwdm, pwdbuf, (unsigned long int)1024, &pwd);
  char *tmp_if_expr_22;
  char *return_value_strerror_21;
  if(pwd == ((struct passwd *)NULL))
  {
    if(!(c == 0))
    {
      return_value_strerror_21=strerror(c);
      tmp_if_expr_22 = return_value_strerror_21;
    }

    else
      tmp_if_expr_22 = "user not found";
    log_msg(4, "can't get information for user \"%s\": \"%s\", defaulting to uid %d", setup_.usrname, tmp_if_expr_22, 65534);
    memset((void *)&pwdm, 0, sizeof(struct passwd) /*48ul*/ );
    pwd = &pwdm;
    pwd->pw_name = "(unknown)";
    pwd->pw_uid = (unsigned int)65534;
    pwd->pw_gid = (unsigned int)65534;
    setup_.usrname = pwd->pw_name;
    log_msg(5, "disabling connect log");
    setup_.create_clog = 0;
  }

  unsigned int return_value_getuid_29;
  signed int *return_value___errno_location_23;
  char *return_value_strerror_24;
  signed int *return_value___errno_location_26;
  char *return_value_strerror_27;
  if(setup_.runasroot == 0)
  {
    return_value_getuid_29=getuid();
    if(return_value_getuid_29 == 0u)
    {
      log_msg(6, "running as root, changing uid/gid to %s (uid %d/gid %d)", setup_.usrname, pwd->pw_uid, pwd->pw_gid);
      signed int return_value_setgid_25;
      return_value_setgid_25=setgid(pwd->pw_gid);
      if(!(return_value_setgid_25 == 0))
      {
        return_value___errno_location_23=__errno_location();
        return_value_strerror_24=strerror(*return_value___errno_location_23);
        log_msg(3, "could not change gid: \"%s\"", return_value_strerror_24);
        exit(1);
      }

      signed int return_value_setuid_28;
      return_value_setuid_28=setuid(pwd->pw_uid);
      if(!(return_value_setuid_28 == 0))
      {
        return_value___errno_location_26=__errno_location();
        return_value_strerror_27=strerror(*return_value___errno_location_26);
        log_msg(3, "could not change uid: \"%d\"", return_value_strerror_27);
        exit(1);
      }

    }

  }

  unsigned int return_value_getuid_30;
  return_value_getuid_30=getuid();
  unsigned int return_value_getgid_31;
  return_value_getgid_31=getgid();
  log_msg(7, "uid/gid = %d/%d", return_value_getuid_30, return_value_getgid_31);
  if(!(setup_.create_clog == 0))
    open_connect_log(pwd->pw_dir);

  signed int return_value_pipe_34;
  return_value_pipe_34=pipe(setup_.socksfd);
  signed int *return_value___errno_location_32;
  char *return_value_strerror_33;
  if(return_value_pipe_34 == -1)
  {
    return_value___errno_location_32=__errno_location();
    return_value_strerror_33=strerror(*return_value___errno_location_32);
    log_msg(0, "couldn't create socks connector pipe: \"%s\"", return_value_strerror_33);
    exit(1);
  }

  if(!(setup_._anon0.socks_dst->sin_family == 0))
    run_ocat_thread("connector", socks_connector_sel, (void *)0);

  else
    log_msg(6, "connector not started");
  if(!(setup_.controller == 0))
    run_ocat_thread("controller", ocat_controller, (void *)0);

  install_sig();
  log_msg(6, "starting packet forwarder");
  packet_forwarder();
  cleanup_system();
  log_msg(6, "Thanks for using OnionCat. Good Bye!");
  const struct OcatThread *return_value_get_thread_35;
  return_value_get_thread_35=get_thread();
  free((void *)(struct OcatThread *)return_value_get_thread_35);
  return 0;
}

// malloc_ckbuf
// file ocateth.c line 214
unsigned short int * malloc_ckbuf(struct in6_addr *src, struct in6_addr *dst, unsigned short int plen, unsigned char proto, const void *payload)
{
  struct ip6_psh *psh;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct ip6_psh) /*40ul*/  + (unsigned long int)plen);
  psh = (struct ip6_psh *)return_value_calloc_3;
  if(psh == ((struct ip6_psh *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(0, "error creating checksum buffer: %s", return_value_strerror_2);
    exit(1);
  }

  psh->src = *src;
  psh->dst = *dst;
  unsigned short int return_value_htons_4;
  return_value_htons_4=htons(plen);
  psh->len = (unsigned int)return_value_htons_4;
  psh->nxt = proto;
  memcpy((void *)(psh + (signed long int)1), payload, (unsigned long int)plen);
  return (unsigned short int *)psh;
}

// mk_pid_file
// file ocat.c line 95
signed int mk_pid_file(void)
{
  struct _IO_FILE *f;
  char c;
  f=fopen(setup_.pid_file, "w");
  if(f == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "could not create pid_file %s: %s", setup_.pid_file, return_value_strerror_2);
    return -1;
  }

  signed int return_value_getpid_3;
  return_value_getpid_3=getpid();
  fprintf(f, "%d\n", (signed int)return_value_getpid_3);
  fclose(f);
  signed int return_value_getpid_4;
  return_value_getpid_4=getpid();
  log_msg(7, "pid_file %s created, pid = %d", setup_.pid_file, return_value_getpid_4);
  signed int return_value_pipe_7;
  return_value_pipe_7=pipe(setup_.pid_fd);
  if(return_value_pipe_7 == -1)
  {
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    char *return_value_strerror_6;
    return_value_strerror_6=strerror(*return_value___errno_location_5);
    log_msg(4, "could not open pid pipe: \"%s\"", return_value_strerror_6);
    return -1;
  }

  signed int return_value_fork_8;
  return_value_fork_8=fork();
  signed long int return_value_read_11;
  signed int *return_value___errno_location_9;
  char *return_value_strerror_10;
  signed int return_value_unlink_14;
  signed int *return_value___errno_location_12;
  char *return_value_strerror_13;
  if(!(return_value_fork_8 == -1))
  {
    if(return_value_fork_8 == 0)
      goto __CPROVER_DUMP_L4;

  }

  else
  {
    oe_close(setup_.pid_fd[(signed long int)0]);
    oe_close(setup_.pid_fd[(signed long int)1]);
    return -1;

  __CPROVER_DUMP_L4:
    ;
    oe_close(setup_.pid_fd[(signed long int)1]);
    oe_close(setup_.tunfd[(signed long int)0]);
    if(!(setup_.tunfd[0l] == setup_.tunfd[1l]))
      oe_close(setup_.tunfd[(signed long int)1]);

    return_value_read_11=read(setup_.pid_fd[(signed long int)0], (void *)&c, (unsigned long int)1);
    if(return_value_read_11 == -1l)
    {
      return_value___errno_location_9=__errno_location();
      return_value_strerror_10=strerror(*return_value___errno_location_9);
      log_msg(3, "error reading from pid_fd %d: \"%s\"", setup_.pid_fd[(signed long int)0], return_value_strerror_10);
      exit(1);
    }

    return_value_unlink_14=unlink(setup_.pid_file);
    if(return_value_unlink_14 == -1)
    {
      return_value___errno_location_12=__errno_location();
      return_value_strerror_13=strerror(*return_value___errno_location_12);
      log_msg(4, "error deleting pid ]ile \"%s\": \"%s\"", setup_.pid_file, return_value_strerror_13);
      exit(1);
    }

    log_msg(6, "pid file deleted, exiting.");
    exit(0);
  }
  oe_close(setup_.pid_fd[(signed long int)0]);
  return setup_.pid_fd[(signed long int)1];
}

// ndp_recadv
// file ocateth.c line 404
signed int ndp_recadv(char *buf, signed int len)
{
  struct ndp6 *ndp6 = (struct ndp6 *)(buf + (signed long int)4);
  signed int return_value_mac_set_2;
  return_value_mac_set_2=mac_set(&ndp6->ip6.ip6_src, ndp6->eth.ether_shost);
  signed int return_value_mac_add_entry_1;
  if(return_value_mac_set_2 == -1)
  {
    return_value_mac_add_entry_1=mac_add_entry(ndp6->eth.ether_shost, &ndp6->ip6.ip6_src);
    if(!(return_value_mac_add_entry_1 == -1))
      goto __CPROVER_DUMP_L1;

    log_msg(3, "MAC table full");
    return -1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return 0;
  }
}

// ndp_soladv
// file ocateth.c line 305
signed int ndp_soladv(char *buf, signed int rlen)
{
  struct ndp6 *ndp6 = (struct ndp6 *)(buf + (signed long int)4);
  struct nd_opt_hdr *ohd = (struct nd_opt_hdr *)(ndp6 + (signed long int)1);
  unsigned short int *ckb;
  unsigned short int cksum;
  char hw[20l];
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_statement_expression_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  signed int return_value_mac_add_entry_11;
  if(!((1 & (signed int)ndp6->eth.ether_dhost[0l]) == 0))
  {
    if(!((signed int)ndp6->eth.ether_dhost[2l] == 0xff))
    {
      char *return_value_ether_ntoa_r_1;
      return_value_ether_ntoa_r_1=ether_ntoa_r((struct ether_addr *)ndp6->eth.ether_dhost, hw);
      log_msg(7, "ethernet multicast destination %s cannot be solicited node address", return_value_ether_ntoa_r_1);
      return -1;
    }

    if(!((signed int)*((const unsigned char *)&ndp6->ip6.ip6_dst) == 0xff))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if((signed int)*((const unsigned char *)&ndp6->ip6.ip6_dst) == 0xff)
        tmp_if_expr_2 = ((signed int)((const unsigned char *)&ndp6->ip6.ip6_dst)[(signed long int)1] & 0xf) == 0x2 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = !tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_3)
      goto __CPROVER_DUMP_L6;

    log_msg(7, "IPv6 multicast destination not solicited node address");
    return -1;
  }

  else
  {

  __CPROVER_DUMP_L6:
    ;
    unsigned short int return_value_ntohs_4;
    return_value_ntohs_4=ntohs(ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_plen);
    ckb=malloc_ckbuf(&ndp6->ip6.ip6_src, &ndp6->ip6.ip6_dst, return_value_ntohs_4, (unsigned char)58, (const void *)&ndp6->_anon0.icmp6);
    unsigned short int return_value_ntohs_5;
    return_value_ntohs_5=ntohs(ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_plen);
    cksum=checksum(ckb, (signed int)((unsigned long int)return_value_ntohs_5 + sizeof(struct ip6_psh) /*40ul*/ ));
    free_ckbuf(ckb);
    if(!(cksum == 0))
    {
      log_msg(3, "icmpv6 checksum wrong");
      return -1;
    }

    else
    {
      struct in6_addr *__a = (struct in6_addr *)&ndp6->ip6.ip6_src;
      if(__a->__in6_u.__u6_addr32[0l] == 0u)
        tmp_if_expr_7 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_7 = (_Bool)0;
      if(tmp_if_expr_7)
        tmp_if_expr_8 = __a->__in6_u.__u6_addr32[(signed long int)2] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
        tmp_if_expr_9 = __a->__in6_u.__u6_addr32[(signed long int)3] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_9 = (_Bool)0;
      tmp_statement_expression_6 = tmp_if_expr_9;
      if(tmp_statement_expression_6)
      {
        log_msg(7, "duplicate address detection in progress");
        return -1;
      }

      else
      {
        signed int return_value_has_tor_prefix_10;
        return_value_has_tor_prefix_10=has_tor_prefix(&ndp6->_anon0.ndp_sol.nd_ns_target);
        if(return_value_has_tor_prefix_10 == 0)
        {
          log_msg(7, "solicit target is not TOR IPv6");
          return -1;
        }

        else
        {
          log_msg(7, "generating response");
          signed int return_value_mac_set_12;
          return_value_mac_set_12=mac_set(&ndp6->ip6.ip6_src, ndp6->eth.ether_shost);
          if(return_value_mac_set_12 == -1)
          {
            return_value_mac_add_entry_11=mac_add_entry(ndp6->eth.ether_shost, &ndp6->ip6.ip6_src);
            if(!(return_value_mac_add_entry_11 == -1))
              goto __CPROVER_DUMP_L16;

            log_msg(3, "MAC table full");
            return -1;
          }

          else
          {

          __CPROVER_DUMP_L16:
            ;
            memcpy((void *)ndp6->eth.ether_dhost, (const void *)ndp6->eth.ether_shost, (unsigned long int)6);
            memcpy((void *)ndp6->eth.ether_shost, (const void *)setup_.ocat_hwaddr, (unsigned long int)6);
            memcpy((void *)&ndp6->ip6.ip6_dst, (const void *)&ndp6->ip6.ip6_src, sizeof(struct in6_addr) /*16ul*/ );
            memcpy((void *)&ndp6->ip6.ip6_src, (const void *)&ndp6->_anon0.ndp_sol.nd_ns_target, sizeof(struct in6_addr) /*16ul*/ );
            ndp6->_anon0.ndp_adv.nd_na_hdr.icmp6_type = (unsigned char)136;
            ndp6->_anon0.ndp_adv.nd_na_hdr.icmp6_code = (unsigned char)0;
            ndp6->_anon0.ndp_adv.nd_na_hdr.icmp6_cksum = (unsigned short int)0;
            ndp6->_anon0.ndp_adv.nd_na_hdr.icmp6_dataun.icmp6_un_data32[(signed long int)0] = (unsigned int)0x00000040;
            ohd->nd_opt_type = (unsigned char)2;
            memcpy((void *)(ohd + (signed long int)1), (const void *)setup_.ocat_hwaddr, (unsigned long int)6);
            unsigned short int return_value_ntohs_13;
            return_value_ntohs_13=ntohs(ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_plen);
            ckb=malloc_ckbuf(&ndp6->ip6.ip6_src, &ndp6->ip6.ip6_dst, return_value_ntohs_13, (unsigned char)58, (const void *)&ndp6->_anon0.icmp6);
            unsigned short int return_value_ntohs_14;
            return_value_ntohs_14=ntohs(ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_plen);
            ndp6->_anon0.ndp_adv.nd_na_hdr.icmp6_cksum=checksum(ckb, (signed int)((unsigned long int)return_value_ntohs_14 + sizeof(struct ip6_psh) /*40ul*/ ));
            free_ckbuf(ckb);
            log_msg(7, "writing %d bytes to tunfd %d", rlen, setup_.tunfd[(signed long int)1]);
            signed long int return_value_write_15;
            return_value_write_15=write(setup_.tunfd[(signed long int)1], (const void *)buf, (unsigned long int)rlen);
            if(!(return_value_write_15 >= (signed long int)rlen))
              log_msg(3, "short write");

            return 0;
          }
        }
      }
    }
  }
}

// ndp_solicit
// file ocat.h line 634
signed int ndp_solicit(struct in6_addr *src, struct in6_addr *dst)
{
  char buf[90l];
  struct ndp6 *ndp6 = (struct ndp6 *)(buf + (signed long int)4);
  struct nd_opt_hdr *ohd = (struct nd_opt_hdr *)(ndp6 + (signed long int)1);
  unsigned short int *ckb;
  struct in6_addr mcastd = { .__in6_u={ .__u6_addr8={ (unsigned char)0xff, (unsigned char)2, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)1, (unsigned char)0xff, (unsigned char)0, (unsigned char)0, (unsigned char)0 } } };
  memset((void *)buf, 0, sizeof(char [90l]) /*90ul*/ );
  memcpy((void *)((char *)&mcastd + (signed long int)13), (const void *)((char *)dst + (signed long int)13), (unsigned long int)3);
  unsigned int return_value_htonl_1;
  return_value_htonl_1=htonl(setup_.fhd_key[(signed long int)1]);
  set_tunheader(buf, return_value_htonl_1);
  ndp6->eth.ether_dhost[(signed long int)0] = (unsigned char)0x33;
  ndp6->eth.ether_dhost[(signed long int)1] = (unsigned char)0x33;
  memcpy((void *)&ndp6->eth.ether_dhost[(signed long int)2], (const void *)((char *)&mcastd + (signed long int)12), (unsigned long int)4);
  memcpy((void *)ndp6->eth.ether_shost, (const void *)setup_.ocat_hwaddr, (unsigned long int)6);
  ndp6->eth.ether_type=htons((unsigned short int)0x86dd);
  ndp6->ip6.ip6_ctlun.ip6_un2_vfc = (unsigned char)0x60;
  ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_plen=htons((unsigned short int)(sizeof(struct nd_neighbor_advert) /*24ul*/  + sizeof(struct nd_opt_hdr) /*2ul*/  + (unsigned long int)6));
  ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_nxt = (unsigned char)58;
  ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_hlim = (unsigned char)255;
  memcpy((void *)&ndp6->ip6.ip6_src, (const void *)src, sizeof(struct in6_addr) /*16ul*/ );
  memcpy((void *)&ndp6->ip6.ip6_dst, (const void *)&mcastd, sizeof(struct in6_addr) /*16ul*/ );
  ndp6->_anon0.icmp6.icmp6_type = (unsigned char)135;
  memcpy((void *)&ndp6->_anon0.ndp_sol.nd_ns_target, (const void *)dst, sizeof(struct in6_addr) /*16ul*/ );
  ohd->nd_opt_type = (unsigned char)1;
  ohd->nd_opt_len = (unsigned char)1;
  memcpy((void *)(ohd + (signed long int)1), (const void *)ndp6->eth.ether_shost, (unsigned long int)6);
  unsigned short int return_value_ntohs_2;
  return_value_ntohs_2=ntohs(ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_plen);
  ckb=malloc_ckbuf(&ndp6->ip6.ip6_src, &ndp6->ip6.ip6_dst, return_value_ntohs_2, (unsigned char)58, (const void *)&ndp6->_anon0.icmp6);
  unsigned short int return_value_ntohs_3;
  return_value_ntohs_3=ntohs(ndp6->ip6.ip6_ctlun.ip6_un1.ip6_un1_plen);
  ndp6->_anon0.icmp6.icmp6_cksum=checksum(ckb, (signed int)((unsigned long int)return_value_ntohs_3 + sizeof(struct ip6_psh) /*40ul*/ ));
  free_ckbuf(ckb);
  log_msg(7, "writing %d bytes ndp solicitation to tunfd %d", sizeof(char [90l]) /*90ul*/ , setup_.tunfd[(signed long int)1]);
  signed long int return_value_write_4;
  return_value_write_4=write(setup_.tunfd[(signed long int)1], (const void *)buf, sizeof(char [90l]) /*90ul*/ );
  if(!((unsigned long int)return_value_write_4 >= sizeof(char [90l]) /*90ul*/ ))
    log_msg(3, "short write to tun fd %d", setup_.tunfd[(signed long int)1]);

  return 0;
}

// ocat_controller
// file ocat.h line 574
void * ocat_controller(void *p)
{
  run_listeners(setup_.ctrl_listen, setup_.ctrl_listen_fd, setup_.ctrl_listen_cnt, run_ctrl_handler);
  return (void *)0;
}

// oe_close
// file ocat.h line 649
void oe_close(signed int fd)
{
  signed int r;
  log_msg(7, "closing %d", fd);
  signed int return_value_close_1;
  do
  {
    return_value_close_1=close(fd);
    if(!(return_value_close_1 == -1))
      break;

    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    r = *return_value___errno_location_2;
    char *return_value_strerror_3;
    return_value_strerror_3=strerror(r);
    log_msg(2, "close(%d) failed: \"%s\"", fd, return_value_strerror_3);
    if(r == 4)
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(r);
      log_msg(3, "close(%d) failed: \"%s\". restarting...", fd, return_value_strerror_4);
      continue;
    }

    break;
  }
  while((_Bool)1);
}

// oe_remtr
// file ocatlibe.c line 55
signed int oe_remtr(char *s)
{
  unsigned long int return_value_strlen_2;
  unsigned long int return_value_strlen_1;
  unsigned long int return_value_strlen_4;
  unsigned long int return_value_strlen_3;
  if(*s == 0)
    return 0;

  else
  {
    if(!(*s == 0))
    {
      return_value_strlen_2=strlen(s);
      if((signed int)s[-1l + (signed long int)return_value_strlen_2] == 10)
      {
        return_value_strlen_1=strlen(s);
        s[(signed long int)(return_value_strlen_1 - (unsigned long int)1)] = (char)0;
      }

    }

    if(!(*s == 0))
    {
      return_value_strlen_4=strlen(s);
      if((signed int)s[-1l + (signed long int)return_value_strlen_4] == 13)
      {
        return_value_strlen_3=strlen(s);
        s[(signed long int)(return_value_strlen_3 - (unsigned long int)1)] = (char)0;
      }

    }

    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(s);
    return (signed int)return_value_strlen_5;
  }
}

// oniontipv4
// file ocat.h line 550
signed int oniontipv4(const char *onion, struct in_addr *ip, signed int prefix_mask)
{
  struct in6_addr ip6;
  unsigned int netmask = (unsigned int)prefix_mask;
  unsigned int ip4;
  signed int return_value_oniontipv6_1;
  return_value_oniontipv6_1=oniontipv6(onion, &ip6);
  if(!(return_value_oniontipv6_1 == 0))
    return -1;

  else
  {
    memcpy((void *)&ip4, (const void *)&ip6.__in6_u.__u6_addr8[(signed long int)12], sizeof(unsigned int) /*4ul*/ );
    unsigned int return_value_htonl_2;
    return_value_htonl_2=htonl(~netmask);
    ip4 = ip4 & return_value_htonl_2;
    ip->s_addr = ip->s_addr | ip4;
    return 0;
  }
}

// oniontipv6
// file ocat.h line 549
signed int oniontipv6(const char *onion, struct in6_addr *ip6)
{
  signed int i;
  signed int j;
  memset((void *)ip6, 0, sizeof(struct in6_addr) /*16ul*/ );
  i = 0;
  for( ; !(i >= 16); i = i + 1)
  {
    shl5((char *)ip6);
    j=toupper((signed int)onion[(signed long int)i]);
    if(j >= 91 || !(j >= 50))
      return -1;

    j = (signed int)deBASE32_[(signed long int)(j - 50)];
    if(j == -1)
      return -1;

    ((char *)ip6)[(signed long int)15] = ((char *)ip6)[(signed long int)15] | (char)j;
  }
  set_tor_prefix(ip6);
  return 0;
}

// open_connect_log
// file ocat.h line 539
signed int open_connect_log(const char *dir)
{
  char buf[1024l];
  signed int *return_value___errno_location_3;
  if(!(clog_ == ((struct _IO_FILE *)NULL)))
    return 0;

  else
    if(dir == ((const char *)NULL))
    {
      log_msg(7, "dir has NULL pointer");
      return -1;
    }

    else
    {
      strlcpy(buf, dir, (unsigned long int)1024);
      strlcat(buf, "/", (unsigned long int)1024);
      strlcat(buf, setup_.ocat_dir, (unsigned long int)1024);
      log_msg(7, "creating ocat log dir \"%s\"", (const void *)buf);
      signed int return_value_mkdir_4;
      return_value_mkdir_4=mkdir(buf, (unsigned int)(0400 | 0200 | 0100 | 0400 >> 3 | 0100 >> 3));
      if(!(return_value_mkdir_4 == 0))
      {
        return_value___errno_location_3=__errno_location();
        if(!(*return_value___errno_location_3 == 17))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          char *return_value_strerror_2;
          return_value_strerror_2=strerror(*return_value___errno_location_1);
          log_msg(3, "could not create ocat directory \"%s\": \"%s\"", (const void *)buf, return_value_strerror_2);
          return -1;
        }

      }

      strlcat(buf, "/", (unsigned long int)1024);
      strlcat(buf, netdesc_[(signed long int)setup_.net_type].clog_file, (unsigned long int)1024);
      log_msg(7, "opening connect log \"%s\"", (const void *)buf);
      clog_=fopen(buf, "a");
      if(clog_ == ((struct _IO_FILE *)NULL))
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        char *return_value_strerror_6;
        return_value_strerror_6=strerror(*return_value___errno_location_5);
        log_msg(3, "could not open connect log \"%s\": \"%s\"", (const void *)buf, return_value_strerror_6);
        return -1;
      }

      log_msg(5 | 0x400, "connect log started");
      return 0;
    }
}

// open_logfile
// file ocat.c line 72
signed int open_logfile(void)
{
  struct _IO_FILE *f;
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(!(setup_.logfn == ((char *)NULL)))
  {
    log_msg(7, "opening log file \"%s\"", setup_.logfn);
    f=fopen(setup_.logfn, "a");
    if(!(f == ((struct _IO_FILE *)NULL)))
    {
      setup_.logf = f;
      log_msg(7, "logfile %s opened", setup_.logfn);
      signed int return_value_setvbuf_3;
      return_value_setvbuf_3=setvbuf(setup_.logf, (char *)(void *)0, 1, (unsigned long int)0);
      if(!(return_value_setvbuf_3 == 0))
      {
        return_value___errno_location_1=__errno_location();
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        log_msg(3, "could not setup line buffering: %s", return_value_strerror_2);
      }

      fflush(setup_.logf);
      return 0;
    }

    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    char *return_value_strerror_5;
    return_value_strerror_5=strerror(*return_value___errno_location_4);
    log_msg(3, "could not open logfile %s: %s.", setup_.logfn, return_value_strerror_5);
  }

  return -1;
}

// packet_forwarder
// file ocat.h line 568
void packet_forwarder(void)
{
  char buf[65580l];
  signed int rlen;
  struct in6_addr *dest;
  struct in_addr in;
  struct ether_header *eh = (struct ether_header *)&buf[(signed long int)4];
  unsigned int return_value_get_tunheader_12;
  do
  {
    signed int return_value_term_req_1;
    return_value_term_req_1=term_req();
    if(!(return_value_term_req_1 == 0))
      break;

    log_msg(7, "reading from tunfd[0] = %d", setup_.tunfd[(signed long int)0]);
    signed long int return_value_read_4;
    return_value_read_4=read(setup_.tunfd[(signed long int)0], (void *)(buf + (signed long int)0), (unsigned long int)(65580 - 0));
    rlen = (signed int)return_value_read_4;
    if(rlen == -1)
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      rlen = *return_value___errno_location_2;
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(rlen);
      log_msg(7, "read from tun %d returned on error: \"%s\"", setup_.tunfd[(signed long int)0], return_value_strerror_3);
      if(rlen == 4)
      {
        log_msg(7, "signal caught");
        if(!(setup_.sig_term == 0))
        {
          log_msg(5, "caught termination request");
          set_term_req();
        }

        if(!(setup_.sig_usr1 == 0))
        {
          lock_setup();
          setup_.clear_stats = 1;
          unlock_setup();
          log_msg(5, "stats will be cleared after next stats output");
        }

      }

      log_msg(7, "restarting");
      continue;
    }

    rlen = rlen + 0;
    log_msg(7, "received on tunfd %d, framesize %d + %d", setup_.tunfd[(signed long int)0], rlen - 4, 4 - 0);
    if(setup_.use_tap == 0 && !(rlen >= 4) || !(setup_.use_tap == 0) && !((unsigned long int)rlen >= 18ul))
      log_msg(3, "frame effectively too short (rlen = %d)", rlen);

    else
    {
      if(!(setup_.use_tap == 0))
      {
        signed int return_value_eth_check_5;
        return_value_eth_check_5=eth_check(buf, rlen);
        if(!(return_value_eth_check_5 == 0))
          continue;

        rlen = rlen - (signed int)sizeof(struct ether_header) /*14ul*/ ;
        memmove((void *)eh, (const void *)(eh + (signed long int)1), (unsigned long int)(rlen - 4));
      }

      unsigned int return_value_get_tunheader_13;
      return_value_get_tunheader_13=get_tunheader(buf);
      if(return_value_get_tunheader_13 == setup_.fhd_key[1l])
      {
        if(!((unsigned long int)(rlen + -4) >= sizeof(struct ip6_hdr) /*40ul*/ ))
        {
          log_msg(7, "IPv6 packet too short (%d bytes). dropping", rlen - 4);
          continue;
        }

        signed int return_value_check_tor_prefix_6;
        return_value_check_tor_prefix_6=check_tor_prefix((struct ip6_hdr *)&buf[(signed long int)4]);
        if(return_value_check_tor_prefix_6 == 0)
        {
          log_msg(3, "dropping frame");
          continue;
        }

        struct in6_addr *return_value_get_6dst_ptr_7;
        return_value_get_6dst_ptr_7=get_6dst_ptr((struct ip6_hdr *)&buf[(signed long int)4]);
        dest=ipv6_lookup_route(return_value_get_6dst_ptr_7);
        if(dest == ((struct in6_addr *)NULL))
          dest=get_6dst_ptr((struct ip6_hdr *)&buf[(signed long int)4]);

      }

      else
      {
        return_value_get_tunheader_12=get_tunheader(buf);
        if(return_value_get_tunheader_12 == setup_.fhd_key[0l])
        {
          if(!((unsigned long int)(rlen + -4) >= sizeof(struct iphdr) /*20ul*/ ))
          {
            log_msg(7, "IPv4 packet too short (%d bytes). dropping", rlen - 4);
            continue;
          }

          in.s_addr=get_saddr((struct iphdr *)&buf[(signed long int)4]);
          unsigned int return_value_ntohl_9;
          return_value_ntohl_9=ntohl(in.s_addr);
          dest=ipv4_lookup_route(return_value_ntohl_9);
          if(dest == ((struct in6_addr *)NULL))
          {
            char *return_value_inet_ntoa_8;
            return_value_inet_ntoa_8=inet_ntoa(in);
            log_msg(3, "no route to destination %s, dropping frame.", return_value_inet_ntoa_8);
            continue;
          }

        }

        else
        {
          unsigned int return_value_get_tunheader_10;
          return_value_get_tunheader_10=get_tunheader(buf);
          unsigned int return_value_ntohl_11;
          return_value_ntohl_11=ntohl(return_value_get_tunheader_10);
          log_msg(3, "protocol 0x%08x not supported. dropping frame.", return_value_ntohl_11);
          continue;
        }
      }
      signed int return_value_forward_packet_14;
      return_value_forward_packet_14=forward_packet(dest, buf + (signed long int)4, rlen - 4);
      if(return_value_forward_packet_14 == -1)
      {
        log_msg(7, "adding destination to SOCKS queue");
        socks_queue(*dest, 0);
      }

    }
  }
  while((_Bool)1);
}

// parse_opt
// file ocat.c line 329
signed int parse_opt(signed int argc, char **argv)
{
  signed int c;
  signed int urlconv = 0;
  log_msg(7, "parse_opt_early()");
  opterr = 1;
  optind = 1;
  signed int return_value_strcasecmp_1;
  signed int return_value_strcmp_2;
  signed int return_value_atoi_3;
  signed int return_value_strcasecmp_5;
  signed int return_value_strsockaddr_4;
  do
  {
    c=getopt(argc, argv, "f:IabBCd:hHrRiopl:t:T:s:Uu:4L:P:");
    if(c == -1)
      break;

    log_msg(7, "getopt(): c = %c, optind = %d, opterr = %d, optarg = \"%s\"", c, optind, opterr, optarg != (char *)(void *)0 ? optarg : "(nil)");
    switch(c)
    {
      case 102:

      case 73:
        break;
      case 97:
      {
        setup_.create_clog = 1;
        break;
      }
      case 98:
      {
        setup_.daemon = 1;
        break;
      }
      case 66:
      {
        setup_.daemon = 0;
        break;
      }
      case 67:
      {
        setup_.controller = 0;
        break;
      }
      case 100:
      {
        setup_.debug_level=atoi(optarg);
        break;
      }
      case 105:
      {
        urlconv = 1;
        break;
      }
      case 104:
      {
        usage(argv[(signed long int)0]);
        exit(1);
      }
      case 72:
      {
        setup_.hosts_lookup = (signed int)!(setup_.hosts_lookup != 0);
        break;
      }
      case 108:
      {
        if(setup_.oc_listen_cnt == -1)
          break;

        return_value_strcasecmp_1=strcasecmp(optarg, "none");
        if(return_value_strcasecmp_1 == 0)
          setup_.oc_listen_cnt = -1;

        else
          add_listener(optarg);
        break;
      }
      case 76:
      {
        return_value_strcmp_2=strcmp(optarg, "syslog");
        if(return_value_strcmp_2 == 0)
          setup_.use_syslog = 1;

        else
          setup_.logfn = optarg;
        break;
      }
      case 111:
      {
        urlconv = 2;
        break;
      }
      case 112:
      {
        setup_.use_tap = 1;
        break;
      }
      case 80:
      {
        setup_.create_pid_file = 1;
        if((signed int)*optarg == 45)
          optind = optind - 1;

        else
          setup_.pid_file = optarg;
        break;
      }
      case 114:
      {
        setup_.runasroot = 1;
        setup_.usrname = "root";
        break;
      }
      case 82:
      {
        setup_.rand_addr = 1;
        break;
      }
      case 115:
      {
        return_value_atoi_3=atoi(optarg);
        setup_.ocat_dest_port = (unsigned short int)return_value_atoi_3;
        break;
      }
      case 116:
      {
        return_value_strcasecmp_5=strcasecmp(optarg, "none");
        if(return_value_strcasecmp_5 == 0)
          setup_._anon0.socks_dst->sin_family = (unsigned short int)0;

        else
        {
          return_value_strsockaddr_4=strsockaddr(optarg, (struct sockaddr *)setup_._anon0.socks_dst);
          if(return_value_strsockaddr_4 == -1)
            exit(1);

        }
        break;
      }
      case 84:
      {
        tun_dev_ = optarg;
        break;
      }
      case 85:
      {
        setup_.unidirectional = 0;
        break;
      }
      case 117:
      {
        setup_.usrname = optarg;
        break;
      }
      case 52:
      {
        setup_.ipv4_enable = 1;
        break;
      }
      default:
      {
        usage(argv[(signed long int)0]);
        exit(1);
      }
    }
  }
  while((_Bool)1);
  return urlconv;
}

// parse_opt_early
// file ocat.c line 292
void parse_opt_early(signed int argc, char **argv_orig)
{
  signed int c;
  signed int optf = 0;
  const signed long int optf_array_size0 = (signed long int)(argc + 1);
  char *argv[optf_array_size0];
  log_msg(7, "parse_opt_early()");
  memcpy((void *)&argv, (const void *)argv_orig, sizeof(char *) /*8ul*/  * (unsigned long int)(argc + 1));
  opterr = 0;
  do
  {
    c=getopt(argc, argv, "f:I");
    if(c == -1)
      break;

    log_msg(7, "getopt(): c = %c, optind = %d, opterr = %d, optarg = \"%s\"", c, optind, opterr, optarg != (char *)(void *)0 ? optarg : "(nil)");
    switch(c)
    {
      case 102:
      {
        if(optf == 0)
        {
          free((void *)setup_.config_file);
          setup_.config_file = optarg;
          optf = optf + 1;
        }

        else
          log_msg(3, "multiple options -f ignored");
        break;
      }
      case 73:
        setup_.net_type = 1;
      case 63:

      default:
        ;
    }
  }
  while((_Bool)1);
}

// parse_route
// file ocatipv4route.c line 155
signed int parse_route(const char *rs)
{
  signed long int parse_route_array_size0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(rs);
  parse_route_array_size0 = (signed long int)(return_value_strlen_1 + (unsigned long int)1);
  char buf[parse_route_array_size0];
  char *s;
  char *b;
  struct IPv4Route route;
  signed int r;
  _Bool tmp_statement_expression_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  if(rs == ((const char *)NULL))
    return -5;

  else
  {
    log_msg(7, "IPv4 route parser: \"%s\"", rs);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(rs);
    strlcpy(buf, rs, return_value_strlen_2 + (unsigned long int)1);
    s=strtok_r(buf, " \t", &b);
    if(s == ((char *)NULL))
      return -4;

    else
    {
      signed int return_value_inet_pton_3;
      return_value_inet_pton_3=inet_pton(2, s, (void *)&route.dest);
      if(!(return_value_inet_pton_3 == 1))
        return -4;

      else
      {
        s=strtok_r((char *)(void *)0, " \t", &b);
        if(s == ((char *)NULL))
          return -4;

        else
        {
          signed int return_value_inet_pton_4;
          return_value_inet_pton_4=inet_pton(2, s, (void *)&route.netmask);
          if(!(return_value_inet_pton_4 == 1))
            return -4;

          else
          {
            s=strtok_r((char *)(void *)0, " \t", &b);
            if(s == ((char *)NULL))
              return -4;

            else
            {
              signed int return_value_inet_pton_5;
              return_value_inet_pton_5=inet_pton(10, s, (void *)&route.gw);
              if(!(return_value_inet_pton_5 == 1))
                return -4;

              else
              {
                signed int return_value_has_tor_prefix_6;
                return_value_has_tor_prefix_6=has_tor_prefix(&route.gw);
                if(return_value_has_tor_prefix_6 == 0)
                  return -6;

                else
                {
                  struct in6_addr *__a = (struct in6_addr *)&route.gw;
                  struct in6_addr *__b = (struct in6_addr *)&setup_.ocat_addr;
                  if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
                    tmp_if_expr_8 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr_8 = (_Bool)0;
                  if(tmp_if_expr_8)
                    tmp_if_expr_9 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr_9 = (_Bool)0;
                  if(tmp_if_expr_9)
                    tmp_if_expr_10 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr_10 = (_Bool)0;
                  tmp_statement_expression_7 = tmp_if_expr_10;
                  if(tmp_statement_expression_7)
                    return -7;

                  else
                  {
                    route.netmask=ntohl(route.netmask);
                    route.dest=ntohl(route.dest);
                    pthread_mutex_lock(&route_mutex_);
                    r=ipv4_add_route(&route, &rroot_, (unsigned int)0);
                    pthread_mutex_unlock(&route_mutex_);
                    return r;
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

// post_init_setup
// file ocat.h line 619
void post_init_setup(void)
{
  unsigned long int l;
  unsigned int loop_;
  loop_=htonl((unsigned int)0x7f000001);
  setup_.ocat_addr4 = netdesc_[(signed long int)setup_.net_type].prefix4;
  setup_.ocat_addr4_mask = netdesc_[(signed long int)setup_.net_type].addr4_mask;
  setup_.ocat_dest_port = (unsigned short int)netdesc_[(signed long int)setup_.net_type].vdest_port;
  setup_.ocat_ctrl_port = (unsigned short int)netdesc_[(signed long int)setup_.net_type].ctrl_port;
  setup_.hosts_lookup = netdesc_[(signed long int)setup_.net_type].hosts_lookup;
  setup_.domain = netdesc_[(signed long int)setup_.net_type].domain;
  hosts_init(netdesc_[(signed long int)setup_.net_type].domain);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen("/etc");
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(netdesc_[(signed long int)setup_.net_type].config_file);
  l = return_value_strlen_1 + return_value_strlen_2 + (unsigned long int)2;
  void *return_value_malloc_5;
  return_value_malloc_5=malloc(l);
  setup_.config_file = (char *)return_value_malloc_5;
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  if(!(setup_.config_file == ((char *)NULL)))
    snprintf(setup_.config_file, l, "%s/%s", (const void *)"/etc", netdesc_[(signed long int)setup_.net_type].config_file);

  else
  {
    return_value___errno_location_3=__errno_location();
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    log_msg(4, "could not get memory for config file string: \"%s\"", return_value_strerror_4);
  }
  if(setup_._anon0.socks_dst->sin_port == 0)
    setup_._anon0.socks_dst->sin_port=htons((unsigned short int)netdesc_[(signed long int)setup_.net_type].socks_port);

  ctrl_listen_.sin_family = (unsigned short int)2;
  ctrl_listen_.sin_port=htons(setup_.ocat_ctrl_port);
  memcpy((void *)&ctrl_listen_.sin_addr, (const void *)&loop_, sizeof(struct in_addr) /*4ul*/ );
  ctrl_listen6_.sin6_family = (unsigned short int)10;
  ctrl_listen6_.sin6_port=htons(setup_.ocat_ctrl_port);
  ctrl_listen6_.sin6_addr = in6addr_loopback;
  snprintf(setup_.version, (unsigned long int)256, "%s (c) %s (%s mode)", (const void *)"onioncat 0.2.2.r1", (const void *)"Bernhard R. Fischer", setup_.net_type == 0 ? "OnionCat" : (setup_.net_type == 1 ? "GarliCat" : "unknown"));
  setup_.pid_file = netdesc_[(signed long int)setup_.net_type].pid_file;
  setup_.oc_vdns = netdesc_[(signed long int)setup_.net_type].prefix;
  setup_.oc_vdns.__in6_u.__u6_addr8[(signed long int)15] = (unsigned char)1;
}

// print_mac_tbl
// file ocateth.c line 48
void print_mac_tbl(struct _IO_FILE *f)
{
  signed int i;
  char buf[46l];
  pthread_mutex_lock(&mac_mutex_);
  i = 0;
  for( ; !(i >= mac_cnt_); i = i + 1)
  {
    signed long int return_value_time_1;
    return_value_time_1=time((signed long int *)(void *)0);
    char *return_value_ether_ntoa_r_2;
    return_value_ether_ntoa_r_2=ether_ntoa_r((struct ether_addr *)mac_tbl_[(signed long int)i].hwaddr, buf);
    fprintf(f, "%3d %3d %s ", i, (signed int)(return_value_time_1 - mac_tbl_[(signed long int)i].age), return_value_ether_ntoa_r_2);
    fprintf(f, "%s ", (signed int)mac_tbl_[(signed long int)i].family == 10 ? "IN6" : "IN ");
    inet_ntop((signed int)mac_tbl_[(signed long int)i].family, (const void *)&mac_tbl_[(signed long int)i]._anon0.in6addr, buf, (unsigned int)46);
    fprintf(f, "%s\n", (const void *)buf);
  }
  pthread_mutex_unlock(&mac_mutex_);
}

// print_routes
// file ocatipv4route.c line 149
void print_routes(struct _IO_FILE *f)
{
  ipv4_traverse(rroot_, ipv4_print, (void *)f);
}

// print_setup_struct
// file ocatsetup.c line 224
void print_setup_struct(struct _IO_FILE *f)
{
  char *c;
  char ip[100l];
  char nm[100l];
  char ip6[100l];
  char logf[100l];
  char hw[100l];
  signed int i;
  signed int t;
  struct sockaddr_str sas;
  inet_ntop(2, (const void *)&setup_.ocat_addr4, ip, (unsigned int)100);
  inet_ntop(2, (const void *)&setup_.ocat_addr4_mask, nm, (unsigned int)100);
  inet_ntop(10, (const void *)&setup_.ocat_addr, ip6, (unsigned int)100);
  ether_ntoa_r((struct ether_addr *)setup_.ocat_hwaddr, hw);
  if(setup_.logf == stderr)
    strlcpy(logf, "stderr", sizeof(char [100l]) /*100ul*/ );

  else
    snprintf(logf, sizeof(char [100l]) /*100ul*/ , "%p", setup_.logf);
  signed long int return_value_time_1;
  return_value_time_1=time((signed long int *)(void *)0);
  t = (signed int)(return_value_time_1 - setup_.uptime);
  unsigned int return_value_ntohl_2;
  return_value_ntohl_2=ntohl(setup_.fhd_key[(signed long int)0]);
  unsigned int return_value_ntohl_3;
  return_value_ntohl_3=ntohl(setup_.fhd_key[(signed long int)1]);
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(setup_.version);
  fprintf(f, "fhd_key[IPV4(%d)]       = 0x%04x\nfhd_key[IPV6(%d)]       = 0x%04x\nfhd_key_len            = %d\nocat_dest_port         = %d\nocat_ctrl_port         = %d\ntunfd[0]               = %d\ntunfd[1]               = %d\ndebug_level            = %d\nusrname                = \"%s\"\nonion_url              = \"%s\"\nocat_addr              = %s\ncreate_clog            = %d\nrunasroot              = %d\ncontroller             = %d\nocat_dir               = \"%s\"\ntun_dev                = \"%s\"\ntunname                = \"%s\"\nipv4_enable            = %d\nocat_addr4             = %s\nocat_addr4_mask        = %s\nconfig_file            = \"%s\"\nconfig_read            = %d\nuse_tap                = %d\nocat_hwaddr            = %s\npid_file               = \"%s\"\nlogfn                  = \"%s\"\nlogf                   = %s\ndaemon                 = %d\nuptime                 = %d days, %d:%02d\nversion[%3d+1/%3d]     = \"%s\"\nsizeof_setup           = %d\nterm_req               = %d\nnet_type               = %d (%s)\nmax_ctrl               = %d\nctrl_active            = %d\npid_fd[2]              = {%d, %d}\nclear_stats            = %d\nctrl_listen_cnt        = %d\nunidirectional         = %d\nhosts_lookup           = %d\ndomain                 = \"%s\"\n----------------------\n", 0, return_value_ntohl_2, 1, return_value_ntohl_3, setup_.fhd_key_len, setup_.ocat_dest_port, setup_.ocat_ctrl_port, setup_.tunfd[(signed long int)0], setup_.tunfd[(signed long int)1], setup_.debug_level, setup_.usrname, (const void *)setup_.onion_url, (const void *)ip6, setup_.create_clog, setup_.runasroot, setup_.controller, setup_.ocat_dir, setup_.tun_dev, (const void *)setup_.tunname, setup_.ipv4_enable, (const void *)ip, (const void *)nm, setup_.config_file, setup_.config_read, setup_.use_tap, (const void *)hw, setup_.pid_file, setup_.logfn != (char *)(void *)0 ? setup_.logfn : "(nil)", (const void *)logf, setup_.daemon, t / (3600 * 24), (t / 3600) % 24, (t / 60) % 60, (signed int)return_value_strlen_4, 256, (const void *)setup_.version, setup_.sizeof_setup, setup_.term_req, setup_.net_type, setup_.net_type == 0 ? "NTYPE_TOR" : (setup_.net_type == 1 ? "NTYPE_I2P" : "unknown"), setup_.max_ctrl, setup_.ctrl_active, setup_.pid_fd[(signed long int)0], setup_.pid_fd[(signed long int)1], setup_.clear_stats, setup_.ctrl_listen_cnt, setup_.unidirectional, setup_.hosts_lookup, setup_.domain);
  const char *return_value_inet_ntops_8;
  return_value_inet_ntops_8=inet_ntops((struct sockaddr *)setup_._anon0.socks_dst, &sas);
  signed int *return_value___errno_location_6;
  char *return_value_strerror_7;
  if(!(return_value_inet_ntops_8 == ((const char *)NULL)))
  {
    c = (signed int)sas.sstr_family == 10 ? "6" : "";
    unsigned short int return_value_ntohs_5;
    return_value_ntohs_5=ntohs(sas.sstr_port);
    fprintf(f, "socks_dst%s.sin_family   = 0x%04x\nsocks_dst%s.sin_port     = %d\nsocks_dst%s.sin_addr     = %s\n", c, sas.sstr_family, c, return_value_ntohs_5, c, (const void *)sas.sstr_addr);
  }

  else
  {
    return_value___errno_location_6=__errno_location();
    return_value_strerror_7=strerror(*return_value___errno_location_6);
    log_msg(4, "could not convert struct sockaddr: \"%s\"", return_value_strerror_7);
  }
  i = 0;
  unsigned short int return_value_ntohs_9;
  signed int *return_value___errno_location_10;
  char *return_value_strerror_11;
  for( ; !(i >= setup_.oc_listen_cnt); i = i + 1)
  {
    const char *return_value_inet_ntops_12;
    return_value_inet_ntops_12=inet_ntops(setup_.oc_listen[(signed long int)i], &sas);
    if(!(return_value_inet_ntops_12 == ((const char *)NULL)))
    {
      return_value_ntohs_9=ntohs(sas.sstr_port);
      fprintf(f, "oc_listen[%d]           = %s:%d\n", i, (const void *)sas.sstr_addr, return_value_ntohs_9);
    }

    else
    {
      return_value___errno_location_10=__errno_location();
      return_value_strerror_11=strerror(*return_value___errno_location_10);
      log_msg(4, "could not convert struct sockaddr: \"%s\"", return_value_strerror_11);
    }
    fprintf(f, "oc_listen_fd[%d]        = %d\n", i, setup_.oc_listen_fd[(signed long int)i]);
  }
  i = 0;
  unsigned short int return_value_ntohs_13;
  signed int *return_value___errno_location_14;
  char *return_value_strerror_15;
  for( ; !(i >= setup_.ctrl_listen_cnt); i = i + 1)
  {
    const char *return_value_inet_ntops_16;
    return_value_inet_ntops_16=inet_ntops(ctrl_listen_ptr_[(signed long int)i], &sas);
    if(!(return_value_inet_ntops_16 == ((const char *)NULL)))
    {
      return_value_ntohs_13=ntohs(sas.sstr_port);
      fprintf(f, "ctrl_listen_ptr_[%d]    = %s:%d (0x%04x)\n", i, (const void *)sas.sstr_addr, return_value_ntohs_13, sas.sstr_family);
    }

    else
    {
      return_value___errno_location_14=__errno_location();
      return_value_strerror_15=strerror(*return_value___errno_location_14);
      log_msg(4, "could not convert struct sockaddr: \"%s\"", return_value_strerror_15);
    }
  }
  inet_ntop(10, (const void *)&setup_.oc_vdns, ip6, (unsigned int)100);
  fprintf(f, "oc_vdns                = %s\n", (const void *)ip6);
}

// print_socks_queue
// file ocatsocks.c line 263
void print_socks_queue(struct _IO_FILE *f)
{
  struct SocksQueue sq;
  memset((void *)&sq, 0, sizeof(struct SocksQueue) /*64ul*/ );
  sq.next = (struct SocksQueue *)f;
  socks_pipe_request(&sq);
}

// print_threads
// file ocatthread.c line 197
void print_threads(struct _IO_FILE *f)
{
  struct OcatThread *th;
  pthread_mutex_lock(&thread_mutex_);
  th = octh_;
  for( ; !(th == ((struct OcatThread *)NULL)); th = th->next)
    fprintf(f, "[%s] handle = 0x%08lx, id = %d, entry = %p, parm = %p, detached = %d\n", (const void *)th->name, (signed long int)th->handle, th->id, th->entry, th->parm, th->detached);
  pthread_mutex_unlock(&thread_mutex_);
}

// rand_onion
// file ocat.h line 552
void rand_onion(char *onion)
{
  signed int i;
  i = 0;
  signed int return_value_rand_1;
  for( ; !(i >= 16); onion = onion + 1l)
  {
    return_value_rand_1=rand();
    *onion = BASE32[(signed long int)(return_value_rand_1 & 0x1f)];
    i = i + 1;
  }
  *onion = (char)0;
}

// run_ctrl_handler
// file ocatctrl.c line 332
signed int run_ctrl_handler(signed int fd)
{
  lock_setup();
  if(setup_.ctrl_active >= setup_.max_ctrl)
  {
    log_msg(4, "maximum number of controller sessions reached");
    oe_close(fd);
    fd = -1;
  }

  unlock_setup();
  if(fd == -1)
    return -1;

  else
  {
    signed int return_value_run_ocat_thread_1;
    return_value_run_ocat_thread_1=run_ocat_thread("ctrl_handler", ctrl_handler, (void *)(signed long int)fd);
    return (signed int)return_value_run_ocat_thread_1;
  }
}

// run_listeners
// file ocatroute.c line 697
signed int run_listeners(struct sockaddr **addr, signed int *sockfd, signed int cnt, signed int (*action_accept)(signed int))
{
  signed int fd;
  struct sockaddr_in6 in6;
  struct anonymous_5 rset;
  signed int maxfd;
  signed int i;
  unsigned int alen;
  char iabuf[46l];
  struct timeval tv;
  i = 0;
  unsigned long int tmp_if_expr_1;
  for( ; !(i >= cnt); i = i + 1)
  {
    log_msg(7, "create listener");
    if((signed int)addr[(signed long int)i]->sa_family == 2)
      tmp_if_expr_1 = sizeof(struct sockaddr_in) /*16ul*/ ;

    else
      tmp_if_expr_1 = (signed int)((struct sockaddr *)addr[(signed long int)i])->sa_family == 10 ? sizeof(struct sockaddr_in6) /*28ul*/  : (unsigned long int)0;
    sockfd[(signed long int)i]=create_listener(addr[(signed long int)i], (signed int)tmp_if_expr_1);
    if(sockfd[(signed long int)i] == -1)
    {
      log_msg(0, "exiting");
      exit(1);
    }

  }
  struct in6_addr *tmp_if_expr_7;
  do
  {
    signed int return_value_term_req_2;
    return_value_term_req_2=term_req();
    if(!(return_value_term_req_2 == 0))
      break;

    log_msg(7, "setting up fd_set");
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_5) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rset)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    maxfd = -1;
    i = 0;
    for( ; !(i >= cnt); i = i + 1)
      if(!(sockfd[(signed long int)i] == -1))
      {
        (&rset)->__fds_bits[(signed long int)(sockfd[(signed long int)i] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rset)->__fds_bits[(signed long int)(sockfd[(signed long int)i] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << sockfd[(signed long int)i] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
        if(!(maxfd >= sockfd[(signed long int)i]))
          maxfd = sockfd[(signed long int)i];

      }

    if(maxfd == -1)
    {
      log_msg(7, "no active listener fds available");
      break;
    }

    set_select_timeout(&tv);
    log_msg(7, "selecting (maxfd = %d)", maxfd);
    maxfd=select(maxfd + 1, &rset, (struct anonymous_5 *)(void *)0, (struct anonymous_5 *)(void *)0, &tv);
    if(maxfd == -1)
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(*return_value___errno_location_3);
      log_msg(7, "select returned: \"%s\"", return_value_strerror_4);
      continue;
    }

    log_msg(7, "select returned %d fds ready", maxfd);
    i = 0;
    for( ; !(maxfd == 0) && !(i >= cnt); i = i + 1)
    {
      log_msg(7, "checking fd %d (maxfd = %d, i = %d)", sockfd[(signed long int)i], maxfd, i);
      if(!((rset.__fds_bits[(signed long int)(sockfd[(signed long int)i] / 8)] & (signed long int)(1UL << sockfd[(signed long int)i] % 8)) == 0l))
      {
        maxfd = maxfd - 1;
        alen = (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ ;
        log_msg(7, "accepting connection on %d", sockfd[(signed long int)i]);
        fd=accept(sockfd[(signed long int)i], (struct sockaddr *)&in6, &alen);
        if(!(fd >= 0))
        {
          signed int *return_value___errno_location_5;
          return_value___errno_location_5=__errno_location();
          char *return_value_strerror_6;
          return_value_strerror_6=strerror(*return_value___errno_location_5);
          log_msg(3, "error accepting connection on %d: \"%s\"", sockfd[(signed long int)i], return_value_strerror_6);
          goto __CPROVER_DUMP_L16;
        }

        if((signed int)in6.sin6_family == 10)
          tmp_if_expr_7 = &in6.sin6_addr;

        else
          tmp_if_expr_7 = (struct in6_addr *)(void *)&((struct sockaddr_in *)&in6)->sin_addr;
        inet_ntop((signed int)in6.sin6_family, (const void *)tmp_if_expr_7, iabuf, (unsigned int)46);
        unsigned short int return_value_ntohs_8;
        return_value_ntohs_8=ntohs(in6.sin6_port);
        log_msg(6 | 0x400, "connection %d [%d] accepted on listener %d from %s port %d", fd, i, sockfd[(signed long int)i], (const void *)iabuf, return_value_ntohs_8);
        action_accept(fd);
      }


    __CPROVER_DUMP_L16:
      ;
    }
  }
  while((_Bool)1);
  i = 0;
  for( ; !(i >= cnt); i = i + 1)
    oe_close(sockfd[(signed long int)i]);
  log_msg(7, "run_listeners returns");
  return 0;
}

// run_ocat_thread
// file ocat.h line 586
signed int run_ocat_thread(const char *name, void * (*thfunc)(void *), void *parm)
{
  signed int rc;
  struct OcatThread *th;
  void *return_value_calloc_4;
  return_value_calloc_4=calloc((unsigned long int)1, sizeof(struct OcatThread) /*112ul*/ );
  th = (struct OcatThread *)return_value_calloc_4;
  if(th == ((struct OcatThread *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    rc = *return_value___errno_location_1;
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    char *return_value_strerror_3;
    return_value_strerror_3=strerror(*return_value___errno_location_2);
    log_msg(0, "could not create thread %s: \"%s\"", name, return_value_strerror_3);
    return rc;
  }

  strlcpy(th->name, name, (unsigned long int)11);
  th->entry = thfunc;
  th->parm = parm;
  rc=pthread_attr_init(&th->attr);
  if(!(rc == 0))
  {
    char *return_value_strerror_5;
    return_value_strerror_5=strerror(rc);
    log_msg(3, "could not init pthread attr: \"%s\"", return_value_strerror_5);
    return rc;
  }

  unsigned long int ss;
  signed int return_value_pthread_attr_getstacksize_7;
  return_value_pthread_attr_getstacksize_7=pthread_attr_getstacksize(&th->attr, &ss);
  char *return_value_strerror_6;
  if(!(rc == return_value_pthread_attr_getstacksize_7))
  {
    return_value_strerror_6=strerror(rc);
    log_msg(7, "could not get thread stack size attr: \"%s\"", return_value_strerror_6);
  }

  else
    log_msg(7, "default thread stack size %dk, setting to %dk", ss / (unsigned long int)1024, 262144 / 1024);
  signed int return_value_pthread_attr_setstacksize_9;
  return_value_pthread_attr_setstacksize_9=pthread_attr_setstacksize(&th->attr, (unsigned long int)262144);
  if(!(rc == return_value_pthread_attr_setstacksize_9))
  {
    char *return_value_strerror_8;
    return_value_strerror_8=strerror(rc);
    log_msg(0, "could not init thread stack size attr - system may be unstable: \"%s\"", return_value_strerror_8);
    return rc;
  }

  log_msg(7, "starting [%s]", name);
  rc=pthread_create(&th->handle, &th->attr, thread_run, (void *)th);
  if(!(rc == 0))
  {
    char *return_value_strerror_10;
    return_value_strerror_10=strerror(rc);
    log_msg(0, "could not start thread %s: \"%s\"", name, return_value_strerror_10);
    free((void *)th);
  }

  return rc;
}

// search_peer
// file ocat.h line 610
struct OcatPeer * search_peer(struct in6_addr *addr)
{
  struct OcatPeer *peer = peer_;
  _Bool tmp_statement_expression_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  for( ; !(peer == ((struct OcatPeer *)NULL)); peer = peer->next)
  {
    struct in6_addr *__a = (struct in6_addr *)addr;
    struct in6_addr *__b = (struct in6_addr *)&peer->addr;
    if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
      tmp_if_expr_2 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    tmp_statement_expression_1 = tmp_if_expr_4;
    if(tmp_statement_expression_1)
      return peer;

  }
  return (struct OcatPeer *)(void *)0;
}

// send_keepalive
// file ocatroute.c line 957
signed int send_keepalive(struct OcatPeer *peer)
{
  struct ip6_hdr hdr;
  signed int len;
  memset((void *)&hdr, 0, sizeof(struct ip6_hdr) /*40ul*/ );
  *((struct in6_addr *)&hdr.ip6_dst) = *((struct in6_addr *)&peer->addr);
  *((struct in6_addr *)&hdr.ip6_src) = *((struct in6_addr *)&setup_.ocat_addr);
  hdr.ip6_ctlun.ip6_un2_vfc = (unsigned char)0x60;
  hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = (unsigned char)59;
  hdr.ip6_ctlun.ip6_un1.ip6_un1_hlim = (unsigned char)1;
  log_msg(7, "sending %d bytes keepalive to fd %d", sizeof(struct ip6_hdr) /*40ul*/ , peer->tcpfd);
  signed long int return_value_send_3;
  return_value_send_3=send(peer->tcpfd, (const void *)&hdr, sizeof(struct ip6_hdr) /*40ul*/ , 64);
  len = (signed int)return_value_send_3;
  if(len == -1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "could not send keepalive: %s", return_value_strerror_2);
    return -1;
  }

  peer->out = peer->out + (unsigned long int)len;
  if(!((unsigned long int)len == sizeof(struct ip6_hdr) /*40ul*/ ))
  {
    log_msg(3, "sending of %d bytes keepalive truncated to %d", sizeof(struct ip6_hdr) /*40ul*/ , len);
    return -1;
  }

  else
    return 0;
}

// set_nonblock
// file ocatroute.c line 575
void set_nonblock(signed int fd)
{
  signed long int flags;
  signed int return_value_fcntl_3;
  return_value_fcntl_3=fcntl(fd, 3, 0);
  flags = (signed long int)return_value_fcntl_3;
  if(flags == -1l)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "could not get socket flags for %d: \"%s\"", fd, return_value_strerror_2);
    flags = (signed long int)0;
  }

  log_msg(7, "O_NONBLOCK currently is %x", flags & (signed long int)04000);
  signed int return_value_fcntl_6;
  return_value_fcntl_6=fcntl(fd, 4, flags | (signed long int)04000);
  signed int *return_value___errno_location_4;
  char *return_value_strerror_5;
  if(return_value_fcntl_6 == -1)
  {
    return_value___errno_location_4=__errno_location();
    return_value_strerror_5=strerror(*return_value___errno_location_4);
    log_msg(3, "could not set O_NONBLOCK for %d: \"%s\"", fd, return_value_strerror_5);
  }

}

// set_peer_dest
// file ocatroute.c line 239
signed int set_peer_dest(struct in6_addr *dest, struct in6_addr *addr)
{
  signed int return_value_has_tor_prefix_1;
  return_value_has_tor_prefix_1=has_tor_prefix(addr);
  _Bool tmp_statement_expression_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  if(return_value_has_tor_prefix_1 == 0)
  {
    log_msg(7, "remote address does not have OC prefix");
    return -1;
  }

  else
  {
    struct in6_addr *__a = (struct in6_addr *)addr;
    struct in6_addr *__b = (struct in6_addr *)&setup_.ocat_addr;
    if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
      tmp_if_expr_3 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    tmp_statement_expression_2 = tmp_if_expr_5;
    if(tmp_statement_expression_2)
    {
      log_msg(7, "source address is local address");
      return -1;
    }

    else
    {
      *dest = *addr;
      return 0;
    }
  }
}

// set_select_timeout
// file ocatroute.c line 259
void set_select_timeout(struct timeval *tv)
{
  signed int return_value_rand_1;
  return_value_rand_1=rand();
  tv->tv_usec = (signed long int)(return_value_rand_1 % 1000000);
  tv->tv_sec = (signed long int)10 + (tv->tv_usec & (signed long int)1);
  log_msg(7, "timeout %d.%06d", tv->tv_sec, tv->tv_usec);
}

// set_term_req
// file ocat.h line 593
void set_term_req(void)
{
  lock_setup();
  setup_.term_req = 1;
  unlock_setup();
}

// set_thread_name
// file ocatthread.c line 177
signed int set_thread_name(const char *n)
{
  signed int e = -1;
  struct OcatThread *th;
  unsigned long int thread;
  thread=pthread_self();
  pthread_mutex_lock(&thread_mutex_);
  th = octh_;
  for( ; !(th == ((struct OcatThread *)NULL)); th = th->next)
    if(th->handle == thread)
    {
      strlcpy(th->name, n, (unsigned long int)11);
      e = 0;
      break;
    }

  pthread_mutex_unlock(&thread_mutex_);
  return e;
}

// set_tor_prefix
// file ocatv6conv.c line 51
void set_tor_prefix(struct in6_addr *addr)
{
  memcpy((void *)addr, (const void *)&netdesc_[(signed long int)setup_.net_type].prefix, (unsigned long int)6);
}

// set_tunheader
// file ocatroute.c line 267
void set_tunheader(char *buf, unsigned int tunhdr)
{
  unsigned int *ibuf = (unsigned int *)buf;
  *ibuf = tunhdr;
}

// shl5
// file ocatv6conv.c line 61
void shl5(char *bin)
{
  signed int i = 0;
  for( ; !(i >= 16); i = i + 1)
  {
    bin[(signed long int)i] = bin[(signed long int)i] << 5;
    bin[(signed long int)i] = bin[(signed long int)i] | (char)((signed int)bin[(signed long int)(i + 1)] >> 3 & 0x1f);
  }
  bin[(signed long int)i] = bin[(signed long int)i] << 5;
}

// sig_handler
// file ocat.c line 193
void sig_handler(signed int sig)
{
  signed int status;
  switch(sig)
  {
    case 17:
      waitpid(-1, &status, 1);
    case 15:

    case 2:
    {
      if(!(setup_.sig_term == 0))
        exit(0);

      setup_.sig_term = 1;
      break;
    }
    case 10:
      setup_.sig_usr1 = 1;
  }
}

// sig_socks_connector
// file ocat.h line 645
void sig_socks_connector(void)
{
  struct SocksQueue sq;
  memset((void *)&sq, 0, sizeof(struct SocksQueue) /*64ul*/ );
  socks_pipe_request(&sq);
}

// socket_acceptor
// file ocat.h line 572
void * socket_acceptor(void *p)
{
  run_listeners(setup_.oc_listen, setup_.oc_listen_fd, setup_.oc_listen_cnt, insert_anon_peer);
  return (void *)0;
}

// socket_cleaner
// file ocat.h line 573
void * socket_cleaner(void *ptr)
{
  struct OcatPeer *peer;
  struct OcatPeer **p;
  signed int stat_wup = 0;
  signed long int act_time;
  _Bool tmp_if_expr_2;
  do
  {
    signed int return_value_term_req_1;
    return_value_term_req_1=term_req();
    if(!(return_value_term_req_1 == 0))
      break;

    sleep((unsigned int)10);
    log_msg(7, "wakeup");
    act_time=time((signed long int *)(void *)0);
    if(act_time + -((signed long int)stat_wup) >= 600l)
    {
      stat_wup = (signed int)act_time;
      lock_setup();
      if(!(setup_.clear_stats == 0))
      {
        setup_.clear_stats = 0;
        log_msg(7, "stats cleared");
      }

      unlock_setup();
    }

    mac_cleanup();
    lock_peers();
    p=get_first_peer_ptr();
    for( ; !(*p == ((struct OcatPeer *)NULL)); p = &(*p)->next)
    {
      lock_peer(*p);
      if(!((*p)->perm == 0))
      {
        if(act_time + -(*p)->time >= 60l)
        {
          send_keepalive(*p);
          (*p)->time = act_time;
        }

        unlock_peer(*p);
      }

      else
      {
        if(!((*p)->state == 0))
          tmp_if_expr_2 = act_time - (*p)->time >= (signed long int)180 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_2 = (_Bool)0;
        if(tmp_if_expr_2)
        {
          peer = *p;
          *p = peer->next;
          log_msg(6 | 0x400, "peer %d timed out, closing.", peer->tcpfd);
          oe_close(peer->tcpfd);
          unlock_peer(peer);
          delete_peer(peer);
          if(*p == ((struct OcatPeer *)NULL))
          {
            log_msg(7, "last peer in list deleted, breaking loop");
            break;
          }

        }

        else
          unlock_peer(*p);
      }
    }
    unlock_peers();
  }
  while((_Bool)1);
  return (void *)0;
}

// socket_receiver
// file ocat.h line 567
void * socket_receiver(void *p)
{
  signed int maxfd;
  signed int len;
  char buf[65580l];
  char addr[46l];
  struct anonymous_5 rset;
  struct OcatPeer *peer;
  struct in6_addr *in6;
  signed int drop = 0;
  struct ether_header *eh = (struct ether_header *)(buf + (signed long int)4);
  struct timeval tv;
  signed int return_value_pipe_3;
  return_value_pipe_3=pipe(lpfd_);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(!(return_value_pipe_3 >= 0))
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(0, "could not create pipe for socket_receiver: \"%s\"", return_value_strerror_2);
    exit(1);
  }

  _Bool tmp_if_expr_11;
  unsigned short int return_value_ntohs_10;
  _Bool tmp_if_expr_14;
  unsigned short int return_value_ntohs_13;
  _Bool tmp_statement_expression_20;
  _Bool tmp_if_expr_21;
  _Bool tmp_if_expr_22;
  _Bool tmp_if_expr_23;
  const char *return_value_inet_ntop_19;
  do
  {
    signed int return_value_term_req_4;
    return_value_term_req_4=term_req();
    if(!(return_value_term_req_4 == 0))
      break;

    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_5) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rset)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&rset)->__fds_bits[(signed long int)(lpfd_[(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rset)->__fds_bits[(signed long int)(lpfd_[(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << lpfd_[(signed long int)0] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    maxfd = lpfd_[(signed long int)0];
    lock_peers();
    peer=get_first_peer();
    for( ; !(peer == ((struct OcatPeer *)NULL)); peer = peer->next)
    {
      lock_peer(peer);
      if(!(peer->state == 1))
        unlock_peer(peer);

      else
      {
        if(peer->tcpfd >= 1024)
        {
          log_msg(0, "%d >= FD_SETIZE(%d)", peer->tcpfd, 1024);
          exit(1);
        }

        (&rset)->__fds_bits[(signed long int)(peer->tcpfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rset)->__fds_bits[(signed long int)(peer->tcpfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << peer->tcpfd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
        if(!(maxfd >= peer->tcpfd))
          maxfd = peer->tcpfd;

        unlock_peer(peer);
      }
    }
    unlock_peers();
    set_select_timeout(&tv);
    log_msg(7, "selecting (maxfd = %d)", maxfd);
    maxfd=select(maxfd + 1, &rset, (struct anonymous_5 *)(void *)0, (struct anonymous_5 *)(void *)0, &tv);
    if(maxfd == -1)
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      char *return_value_strerror_6;
      return_value_strerror_6=strerror(*return_value___errno_location_5);
      log_msg(3, "select encountered error: \"%s\", restarting", return_value_strerror_6);
      continue;
    }

    if(!((rset.__fds_bits[(signed long int)(lpfd_[0l] / 8)] & (signed long int)(1UL << lpfd_[0l] % 8)) == 0l))
    {
      read(lpfd_[(signed long int)0], (void *)buf, (unsigned long int)(65580 - 4));
      maxfd = maxfd - 1;
    }

    peer = (struct OcatPeer *)(void *)0;
    while(!(maxfd == 0))
    {
      lock_peers();
      if(peer == ((struct OcatPeer *)NULL))
        peer=get_first_peer();

      else
      {
        peer = peer->next;
        if(peer == ((struct OcatPeer *)NULL))
        {
          log_msg(0, "fd %d ready but no peer found");
          unlock_peers();
          break;
        }

      }
      lock_peer(peer);
      unlock_peers();
      if(!(peer->state == 1))
        unlock_peer(peer);

      else
        if((rset.__fds_bits[(signed long int)(peer->tcpfd / 8)] & (signed long int)(1UL << peer->tcpfd % 8)) == 0l)
          unlock_peer(peer);

        else
        {
          maxfd = maxfd - 1;
          log_msg(7, "reading from %d", peer->tcpfd);
          signed long int return_value_read_9;
          return_value_read_9=read(peer->tcpfd, (void *)(peer->fragbuf + (signed long int)peer->fraglen), (unsigned long int)((65580 - 4) - peer->fraglen));
          len = (signed int)return_value_read_9;
          if(len == -1)
          {
            signed int *return_value___errno_location_7;
            return_value___errno_location_7=__errno_location();
            char *return_value_strerror_8;
            return_value_strerror_8=strerror(*return_value___errno_location_7);
            log_msg(7, "spurious wakup of %d: \"%s\"", peer->tcpfd, return_value_strerror_8);
            unlock_peer(peer);
            continue;
          }

          log_msg(7, "received %d bytes on %d", len, peer->tcpfd);
          if(len == 0)
          {
            log_msg(6 | 0x400, "fd %d reached EOF, closing.", peer->tcpfd);
            oe_close(peer->tcpfd);
            if(!(peer->perm == 0))
            {
              log_msg(7, "reconnection permanent peer");
              socks_queue(peer->addr, 1);
            }

            unlock_peer(peer);
            lock_peers();
            delete_peer(peer);
            unlock_peers();
          }

          else
          {
            peer->fraglen = peer->fraglen + len;
            peer->time=time((signed long int *)(void *)0);
            peer->in = peer->in + (unsigned long int)len;
            while(!(peer->fraglen == 0))
            {
              if((0xf0 & (signed int)*peer->fragbuf) == 0x60)
              {
                log_msg(7, "identified IPv6 packet");
                if(!((unsigned long int)peer->fraglen >= sizeof(struct ip6_hdr) /*40ul*/ ))
                  tmp_if_expr_11 = (_Bool)1;

                else
                {
                  return_value_ntohs_10=ntohs(((struct ip6_hdr *)peer->fragbuf)->ip6_ctlun.ip6_un1.ip6_un1_plen);
                  tmp_if_expr_11 = (unsigned long int)peer->fraglen < (unsigned long int)return_value_ntohs_10 + sizeof(struct ip6_hdr) /*40ul*/  ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_11)
                {
                  log_msg(7, "keeping %d bytes frag", peer->fraglen);
                  break;
                }

                unsigned short int return_value_ntohs_12;
                return_value_ntohs_12=ntohs(((struct ip6_hdr *)peer->fragbuf)->ip6_ctlun.ip6_un1.ip6_un1_plen);
                len = (signed int)((unsigned long int)return_value_ntohs_12 + sizeof(struct ip6_hdr) /*40ul*/ );
                *peer->tunhdr = setup_.fhd_key[(signed long int)1];
              }

              else
                if((0xf0 & (signed int)*peer->fragbuf) == 0x40)
                {
                  if(!((0x0f & (signed int)*peer->fragbuf) >= 5))
                  {
                    log_msg(7, "dropping packet, not IPv4 - resetting fragment buffer");
                    peer->fraglen = 0;
                    break;
                  }

                  log_msg(7, "identified IPv4 packet");
                  if(!((unsigned long int)peer->fraglen >= sizeof(struct iphdr) /*20ul*/ ))
                    tmp_if_expr_14 = (_Bool)1;

                  else
                  {
                    return_value_ntohs_13=ntohs(((struct iphdr *)peer->fragbuf)->tot_len);
                    tmp_if_expr_14 = peer->fraglen < (signed int)return_value_ntohs_13 ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_14)
                  {
                    log_msg(7, "keeping %d bytes frag", peer->fraglen);
                    break;
                  }

                  unsigned short int return_value_ntohs_15;
                  return_value_ntohs_15=ntohs(((struct iphdr *)peer->fragbuf)->tot_len);
                  len = (signed int)return_value_ntohs_15;
                  *peer->tunhdr = setup_.fhd_key[(signed long int)0];
                }

                else
                {
                  log_msg(7, "fragment buffer resynchronization");
                  len = 1;
                  drop = 1;
                  break;
                }
              if(setup_.unidirectional == 0 && drop == 0)
              {
                struct in6_addr *__a = (struct in6_addr *)&peer->addr;
                if(__a->__in6_u.__u6_addr32[0l] == 0u)
                  tmp_if_expr_21 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_21 = (_Bool)0;
                if(tmp_if_expr_21)
                  tmp_if_expr_22 = __a->__in6_u.__u6_addr32[(signed long int)2] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_22 = (_Bool)0;
                if(tmp_if_expr_22)
                  tmp_if_expr_23 = __a->__in6_u.__u6_addr32[(signed long int)3] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_23 = (_Bool)0;
                tmp_statement_expression_20 = tmp_if_expr_23;
                if(tmp_statement_expression_20)
                {
                  if(*peer->tunhdr == setup_.fhd_key[1l])
                  {
                    signed int return_value_set_peer_dest_16;
                    return_value_set_peer_dest_16=set_peer_dest(&peer->addr, &((struct ip6_hdr *)peer->fragbuf)->ip6_src);
                    if(!(return_value_set_peer_dest_16 == 0))
                      drop = 1;

                  }

                  else
                    if(*peer->tunhdr == setup_.fhd_key[0l])
                    {
                      unsigned int return_value_ntohl_18;
                      return_value_ntohl_18=ntohl(((struct iphdr *)peer->fragbuf)->saddr);
                      in6=ipv4_lookup_route(return_value_ntohl_18);
                      if(in6 == ((struct in6_addr *)NULL))
                      {
                        drop = 1;
                        log_msg(7, "no route back");
                      }

                      else
                      {
                        signed int return_value_set_peer_dest_17;
                        return_value_set_peer_dest_17=set_peer_dest(&peer->addr, in6);
                        if(!(return_value_set_peer_dest_17 == 0))
                          drop = 1;

                      }
                    }

                  if(drop == 0)
                  {
                    return_value_inet_ntop_19=inet_ntop(10, (const void *)&peer->addr, addr, (unsigned int)46);
                    log_msg(6 | 0x400, "incoming connection on %d from %s is now identified", peer->tcpfd, return_value_inet_ntop_19);
                  }

                }

              }

              if(drop == 0)
              {
                if(setup_.use_tap == 0)
                {
                  log_msg(7, "writing to tun %d framesize %d + %d", setup_.tunfd[(signed long int)1], len, 4 - 0);
                  signed long int return_value_write_24;
                  return_value_write_24=write(setup_.tunfd[(signed long int)1], (const void *)((char *)peer->tunhdr + (signed long int)0), (unsigned long int)((len + 4) - 0));
                  if(!(return_value_write_24 == (signed long int)(4 + len)))
                    log_msg(3, "could not write %d bytes to tunnel %d", (len + 4) - 0, setup_.tunfd[(signed long int)1]);

                }

                else
                  if(*peer->tunhdr == setup_.fhd_key[1l])
                  {
                    log_msg(7, "creating ethernet header");
                    memset((void *)eh->ether_dhost, 0, (unsigned long int)6);
                    signed int return_value_mac_set_26;
                    return_value_mac_set_26=mac_set(&((struct ip6_hdr *)peer->fragbuf)->ip6_dst, eh->ether_dhost);
                    if(return_value_mac_set_26 == -1)
                    {
                      log_msg(7, "dest MAC unknown, resolving");
                      ndp_solicit(&((struct ip6_hdr *)peer->fragbuf)->ip6_src, &((struct ip6_hdr *)peer->fragbuf)->ip6_dst);
                    }

                    else
                    {
                      set_tunheader(buf, *peer->tunhdr);
                      memcpy((void *)(buf + (signed long int)4 + (signed long int)sizeof(struct ether_header) /*14ul*/ ), (const void *)peer->fragbuf, (unsigned long int)len);
                      memcpy((void *)eh->ether_shost, (const void *)setup_.ocat_hwaddr, (unsigned long int)6);
                      if(*peer->tunhdr == setup_.fhd_key[1l])
                        eh->ether_type=htons((unsigned short int)0x86dd);

                      else
                        if(*peer->tunhdr == setup_.fhd_key[0l])
                          eh->ether_type=htons((unsigned short int)0x0800);

                      signed long int return_value_write_25;
                      return_value_write_25=write(setup_.tunfd[(signed long int)1], (const void *)(buf + (signed long int)0), ((unsigned long int)(len + 4) + sizeof(struct ether_header) /*14ul*/ ) - (unsigned long int)0);
                      if(!((unsigned long int)return_value_write_25 == sizeof(struct ether_header) /*14ul*/  + (unsigned long int)(4 + len)))
                        log_msg(3, "could not write %d bytes to tunnel %d", ((unsigned long int)(len + 4) + sizeof(struct ether_header) /*14ul*/ ) - (unsigned long int)0, setup_.tunfd[(signed long int)1]);

                    }
                  }

                  else
                  {
                    unsigned short int return_value_ntohs_27;
                    return_value_ntohs_27=ntohs((unsigned short int)*peer->tunhdr);
                    log_msg(7, "protocol %x not implemented on TAP device", return_value_ntohs_27);
                  }
              }

              else
              {
                log_msg(3, "dropping packet with %d bytes", len);
                drop = 0;
              }
              peer->fraglen = peer->fraglen - len;
              if(!(peer->fraglen == 0))
              {
                log_msg(7, "moving fragment. fragsize %d", peer->fraglen);
                memmove((void *)peer->fragbuf, (const void *)(peer->fragbuf + (signed long int)len), (unsigned long int)((65580 - 4) - len));
              }

              else
                log_msg(7, "fragbuf empty");
            }
            unlock_peer(peer);
          }
        }
    }
  }
  while((_Bool)1);
  oe_close(lpfd_[(signed long int)0]);
  oe_close(lpfd_[(signed long int)1]);
  return (void *)0;
}

// socks_activate_peer
// file ocatsocks.c line 122
signed int socks_activate_peer(struct SocksQueue *sq)
{
  struct OcatPeer *peer;
  signed long int return_value_time_1;
  return_value_time_1=time((signed long int *)(void *)0);
  insert_peer(sq->fd, sq, return_value_time_1 - sq->connect_time);
  lock_peers();
  peer=search_peer(&sq->addr);
  if(!(peer == ((struct OcatPeer *)NULL)))
    lock_peer(peer);

  else
    log_msg(0, "newly inserted peer not found, fd = %d", sq->fd);
  unlock_peers();
  if(!(peer == ((struct OcatPeer *)NULL)))
  {
    send_keepalive(peer);
    unlock_peer(peer);
  }

  return 0;
}

// socks_connector_sel
// file ocat.h line 646
void * socks_connector_sel(void *p)
{
  struct anonymous_5 rset;
  struct anonymous_5 wset;
  signed int maxfd = 0;
  signed int len;
  signed int so_err;
  struct SocksQueue *squeue;
  struct SocksQueue sq;
  signed long int t;
  struct timeval tv;
  unsigned int err_len;
  signed int tmp_if_expr_2;
  unsigned long int tmp_if_expr_5;
  signed int return_value_socks_tcp_connect_6;
  signed int tmp_if_expr_7;
  signed int tmp_if_expr_8;
  signed int *return_value___errno_location_11;
  char *return_value_strerror_12;
  _Bool tmp_statement_expression_14;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  _Bool tmp_if_expr_17;
  do
  {
    signed int return_value_term_req_1;
    return_value_term_req_1=term_req();
    if(!(return_value_term_req_1 == 0))
      return (void *)0;

    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_5) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rset)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    do
    {
      signed int socks_connector_sel__1__1__1__2____d0;
      signed int socks_connector_sel__1__1__1__2____d1;
      asm("cld; rep; stosq" : "=c"(socks_connector_sel__1__1__1__2____d0), "=D"(socks_connector_sel__1__1__1__2____d1) : "a"(0), "0"(sizeof(struct anonymous_5) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&wset)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&rset)->__fds_bits[(signed long int)(setup_.socksfd[(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rset)->__fds_bits[(signed long int)(setup_.socksfd[(signed long int)0] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << setup_.socksfd[(signed long int)0] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    if(!(maxfd >= setup_.socksfd[0l]))
      tmp_if_expr_2 = setup_.socksfd[(signed long int)0];

    else
      tmp_if_expr_2 = maxfd;
    maxfd = tmp_if_expr_2;
    t=time((signed long int *)(void *)0);
    squeue = socks_queue_;
    for( ; !(squeue == ((struct SocksQueue *)NULL)); squeue = squeue->next)
      switch(squeue->state)
      {
        case 0:
        {
          if(!(t >= squeue->restart_time))
          {
            log_msg(7, "SOCKS request is scheduled for connection not before %ds", squeue->restart_time - t);
            break;
          }

          squeue->retry = squeue->retry + 1;
          if(squeue->perm == 0)
          {
            if(squeue->retry >= 4)
            {
              log_msg(5, "temporary request failed %d times and will be removed", squeue->retry - 1);
              squeue->state = 127;
              break;
            }

          }

          log_msg(7, "creating socket for unconnected SOCKS request");
          squeue->fd=socket((signed int)setup_._anon0.socks_dst->sin_family == 2 ? 2 : 10, 1, 0);
          if(squeue->fd == -1)
          {
            signed int *return_value___errno_location_3;
            return_value___errno_location_3=__errno_location();
            char *return_value_strerror_4;
            return_value_strerror_4=strerror(*return_value___errno_location_3);
            log_msg(3, "cannot create socket for new SOCKS request: \"%s\"", return_value_strerror_4);
            break;
          }

          set_nonblock(squeue->fd);
          log_msg(7, "queueing fd %d for connect", squeue->fd);
          squeue->connect_time = t;
          if((signed int)((struct sockaddr *)setup_._anon0.socks_dst)->sa_family == 2)
            tmp_if_expr_5 = sizeof(struct sockaddr_in) /*16ul*/ ;

          else
            tmp_if_expr_5 = (signed int)((struct sockaddr *)setup_._anon0.socks_dst)->sa_family == 10 ? sizeof(struct sockaddr_in6) /*28ul*/  : (unsigned long int)0;
          return_value_socks_tcp_connect_6=socks_tcp_connect(squeue->fd, (struct sockaddr *)setup_._anon0.socks_dst, (signed int)tmp_if_expr_5);
          if(return_value_socks_tcp_connect_6 == -1)
          {
            socks_reschedule(squeue);
            break;
          }

          squeue->state = 1;
          (&wset)->__fds_bits[(signed long int)(squeue->fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&wset)->__fds_bits[(signed long int)(squeue->fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << squeue->fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
          if(!(maxfd >= squeue->fd))
            tmp_if_expr_7 = squeue->fd;

          else
            tmp_if_expr_7 = maxfd;
          maxfd = tmp_if_expr_7;
          break;
        }
        case 2:
        {
          (&rset)->__fds_bits[(signed long int)(squeue->fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rset)->__fds_bits[(signed long int)(squeue->fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << squeue->fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
          if(!(maxfd >= squeue->fd))
            tmp_if_expr_8 = squeue->fd;

          else
            tmp_if_expr_8 = maxfd;
          maxfd = tmp_if_expr_8;
        }
      }
    set_select_timeout(&tv);
    log_msg(7, "selecting (maxfd = %d)", maxfd);
    maxfd=select(maxfd + 1, &rset, &wset, (struct anonymous_5 *)(void *)0, &tv);
    if(maxfd == -1)
    {
      signed int *return_value___errno_location_9;
      return_value___errno_location_9=__errno_location();
      char *return_value_strerror_10;
      return_value_strerror_10=strerror(*return_value___errno_location_9);
      log_msg(0, "select encountered error: \"%s\", restarting", return_value_strerror_10);
      continue;
    }

    log_msg(7, "select returned %d", maxfd);
    if(!((rset.__fds_bits[(signed long int)(setup_.socksfd[0l] / 8)] & (signed long int)(1UL << setup_.socksfd[0l] % 8)) == 0l))
    {
      maxfd = maxfd - 1;
      signed long int return_value_read_13;
      return_value_read_13=read(setup_.socksfd[(signed long int)0], (void *)&sq, sizeof(struct SocksQueue) /*64ul*/ );
      len = (signed int)return_value_read_13;
      if(len == -1)
      {
        return_value___errno_location_11=__errno_location();
        return_value_strerror_12=strerror(*return_value___errno_location_11);
        log_msg(3, "failed to read from SOCKS request pipe, fd = %d: \"%s\"", setup_.socksfd[(signed long int)0], return_value_strerror_12);
      }

      if(!((unsigned long int)len >= sizeof(struct SocksQueue) /*64ul*/ ))
        log_msg(3, "read from SOCKS request pipe truncated to %d of %d bytes, ignoring.", len, sizeof(struct SocksQueue) /*64ul*/ );

      else
      {
        log_msg(7, "received %d bytes on SOCKS request pipe fd %d", len, setup_.socksfd[(signed long int)0]);
        if(!(sq.next == ((struct SocksQueue *)NULL)))
        {
          log_msg(7, "output of SOCKS request queue triggered");
          socks_output_queue((struct _IO_FILE *)sq.next);
        }

        else
        {
          struct in6_addr *__a = (struct in6_addr *)&sq.addr;
          if(__a->__in6_u.__u6_addr32[0l] == 0u)
            tmp_if_expr_15 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_15 = (_Bool)0;
          if(tmp_if_expr_15)
            tmp_if_expr_16 = __a->__in6_u.__u6_addr32[(signed long int)2] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_16 = (_Bool)0;
          if(tmp_if_expr_16)
            tmp_if_expr_17 = __a->__in6_u.__u6_addr32[(signed long int)3] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_17 = (_Bool)0;
          tmp_statement_expression_14 = tmp_if_expr_17;
          if(tmp_statement_expression_14)
            log_msg(7, "termination request on SOCKS request queue received");

          else
          {
            log_msg(7, "SOCKS queuing request received");
            socks_enqueue(&sq);
          }
        }
      }
    }

    t=time((signed long int *)(void *)0);
    squeue = socks_queue_;
    for( ; !(squeue == ((struct SocksQueue *)NULL)) && !(maxfd == 0); squeue = squeue->next)
    {
      if(!((wset.__fds_bits[(signed long int)(squeue->fd / 8)] & (signed long int)(1UL << squeue->fd % 8)) == 0l))
      {
        maxfd = maxfd - 1;
        if(squeue->state == 1)
        {
          log_msg(7, "check socket error");
          err_len = (unsigned int)sizeof(signed int) /*4ul*/ ;
          signed int return_value_getsockopt_20;
          return_value_getsockopt_20=getsockopt(squeue->fd, 1, 4, (void *)&so_err, &err_len);
          if(return_value_getsockopt_20 == -1)
          {
            signed int *return_value___errno_location_18;
            return_value___errno_location_18=__errno_location();
            char *return_value_strerror_19;
            return_value_strerror_19=strerror(*return_value___errno_location_18);
            log_msg(3, "getsockopt failed: \"%s\", rescheduling request", return_value_strerror_19);
            socks_reschedule(squeue);
            goto __CPROVER_DUMP_L42;
          }

          if(!(so_err == 0))
          {
            char *return_value_strerror_21;
            return_value_strerror_21=strerror(so_err);
            log_msg(3, "getsockopt returned %d (\"%s\")", so_err, return_value_strerror_21);
            socks_reschedule(squeue);
            goto __CPROVER_DUMP_L42;
          }

          signed int return_value_socks_send_request_22;
          return_value_socks_send_request_22=socks_send_request(squeue);
          if(return_value_socks_send_request_22 == -1)
          {
            log_msg(3, "SOCKS request failed");
            socks_reschedule(squeue);
            goto __CPROVER_DUMP_L42;
          }

          squeue->state = 2;
        }

        else
          log_msg(7, "unknown state %d in write set", squeue->state);
      }

      if(!((rset.__fds_bits[(signed long int)(squeue->fd / 8)] & (signed long int)(1UL << squeue->fd % 8)) == 0l))
      {
        maxfd = maxfd - 1;
        if(squeue->state == 2)
        {
          signed int return_value_socks_rec_response_23;
          return_value_socks_rec_response_23=socks_rec_response(squeue);
          if(return_value_socks_rec_response_23 == -1)
          {
            socks_reschedule(squeue);
            goto __CPROVER_DUMP_L42;
          }

          log_msg(7, "activating peer fd %d", squeue->fd);
          socks_activate_peer(squeue);
          squeue->state = 127;
        }

        else
          log_msg(7, "unknown state %d in read set", squeue->state);
      }


    __CPROVER_DUMP_L42:
      ;
    }
    squeue = socks_queue_;
    for( ; !(squeue == ((struct SocksQueue *)NULL)); squeue = squeue->next)
      if(squeue->state == 127)
      {
        socks_unqueue(squeue);
        squeue = socks_queue_;
        if(squeue == ((struct SocksQueue *)NULL))
        {
          log_msg(7, "last entry deleted, breaking loop");
          break;
        }

      }

  }
  while((_Bool)1);
}

// socks_enqueue
// file ocatsocks.c line 200
void socks_enqueue(const struct SocksQueue *sq)
{
  struct SocksQueue *squeue;
  log_msg(7, "queueing new SOCKS connection request");
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct SocksQueue) /*64ul*/ );
  squeue = (struct SocksQueue *)return_value_malloc_3;
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(squeue == ((struct SocksQueue *)NULL))
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(0, "could not get memory for SocksQueue entry: \"%s\"", return_value_strerror_2);
    exit(1);
  }

  memcpy((void *)squeue, (const void *)sq, sizeof(struct SocksQueue) /*64ul*/ );
  squeue->next = socks_queue_;
  socks_queue_ = squeue;
}

// socks_output_queue
// file ocatsocks.c line 273
void socks_output_queue(struct _IO_FILE *f)
{
  signed int i;
  const signed long int addrstr_array_size0 = (signed long int)netdesc_[(signed long int)setup_.net_type].name_size;
  char addrstr[46l];
  char onstr[addrstr_array_size0];
  char buf[1024l];
  struct SocksQueue *squeue = socks_queue_;
  i = 0;
  for( ; !(squeue == ((struct SocksQueue *)NULL)); i = i + 1)
  {
    const char *return_value_inet_ntop_3;
    return_value_inet_ntop_3=inet_ntop(10, (const void *)&squeue->addr, addrstr, (unsigned int)46);
    if(return_value_inet_ntop_3 == ((const char *)NULL))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      log_msg(3, "inet_ntop returned NULL pointer: \"%s\"", return_value_strerror_2);
      strlcpy(addrstr, "ERROR", (unsigned long int)46);
    }

    char *return_value_ipv6tonion_4;
    return_value_ipv6tonion_4=ipv6tonion(&squeue->addr, onstr);
    snprintf(buf, (unsigned long int)1024, "%d: %39s, %s%s, state = %d, %s(%d), retry = %d, connect_time = %d, restart_time = %d", i, (const void *)addrstr, return_value_ipv6tonion_4, setup_.domain, squeue->state, squeue->perm != 0 ? "PERMANENT" : "TEMPORARY", squeue->perm, squeue->retry, (signed int)squeue->connect_time, (signed int)squeue->restart_time);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(buf);
    write((signed int)(signed long int)f, (const void *)buf, return_value_strlen_5);
    write((signed int)(signed long int)f, (const void *)"\n", (unsigned long int)1);
    squeue = squeue->next;
  }
  write((signed int)(signed long int)f, (const void *)"\0", (unsigned long int)1);
  log_msg(7, "socks_output_queue() finished");
}

// socks_pipe_request
// file ocatsocks.c line 145
void socks_pipe_request(const struct SocksQueue *sq)
{
  struct anonymous_5 wset;
  signed int maxfd;
  signed int len = (signed int)sizeof(const struct SocksQueue) /*64ul*/ ;
  signed int ret;
  do
  {
    signed int __d0;
    signed int __d1;
    asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_5) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&wset)->__fds_bits[(signed long int)0]) : "memory");
  }
  while((_Bool)0);
  (&wset)->__fds_bits[(signed long int)(setup_.socksfd[(signed long int)1] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&wset)->__fds_bits[(signed long int)(setup_.socksfd[(signed long int)1] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << setup_.socksfd[(signed long int)1] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
  maxfd = setup_.socksfd[(signed long int)1];
  log_msg(7, "selecting until socks request pipe gets ready");
  log_msg(7, "selecting (maxfd = %d)", maxfd);
  maxfd=select(maxfd + 1, (struct anonymous_5 *)(void *)0, &wset, (struct anonymous_5 *)(void *)0, (struct timeval *)(void *)0);
  if(maxfd == -1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(0, "select encountered error: \"%s\", restarting", return_value_strerror_2);
    goto __CPROVER_DUMP_L10;
  }

  log_msg(7, "select returned %d", maxfd);
  _Bool tmp_if_expr_6;
  if(!(maxfd == 0))
    tmp_if_expr_6 = ((&wset)->__fds_bits[(signed long int)(setup_.socksfd[(signed long int)1] / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & (signed long int)(1UL << setup_.socksfd[(signed long int)1] % (8 * (signed int)sizeof(signed long int) /*8ul*/ ))) != (signed long int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_6 = (_Bool)0;
  if(tmp_if_expr_6)
  {
    log_msg(7, "writing %d bytes to fd %d", len, setup_.socksfd[(signed long int)1]);
    signed long int return_value_write_5;
    return_value_write_5=write(setup_.socksfd[(signed long int)1], (const void *)sq, (unsigned long int)len);
    ret = (signed int)return_value_write_5;
    if(ret == -1)
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(*return_value___errno_location_3);
      log_msg(4, "error writing to SOCKS request pipe fd %d: \"%s\"", setup_.socksfd[(signed long int)1], return_value_strerror_4);
    }

    else
      if(!(ret >= len))
        log_msg(4, "write to SOCKS request pipe fd %d truncated to %d bytes of %d", setup_.socksfd[(signed long int)1], ret, len);

      else
        log_msg(7, "wrote %d bytes to SOCKS request pipe fd %d", len, setup_.socksfd[(signed long int)1]);
  }

  else
    log_msg(4, "fd %d not in write set", setup_.socksfd[(signed long int)1]);

__CPROVER_DUMP_L10:
  ;
}

// socks_queue
// file ocat.h line 643
void socks_queue(struct in6_addr addr, signed int perm)
{
  struct SocksQueue *squeue;
  struct SocksQueue sq;
  _Bool tmp_statement_expression_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if(!(setup_._anon0.socks_dst->sin_family == 0))
  {
    squeue = socks_queue_;
    for( ; !(squeue == ((struct SocksQueue *)NULL)); squeue = squeue->next)
    {
      struct in6_addr *__a = (struct in6_addr *)&squeue->addr;
      struct in6_addr *__b = (struct in6_addr *)&addr;
      if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
        tmp_if_expr_2 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_4 = (_Bool)0;
      tmp_statement_expression_1 = tmp_if_expr_4;
      if(tmp_statement_expression_1)
        break;

    }
    if(squeue == ((struct SocksQueue *)NULL))
    {
      log_msg(7, "queueing new SOCKS connection request");
      memset((void *)&sq, 0, sizeof(struct SocksQueue) /*64ul*/ );
      *((struct in6_addr *)&sq.addr) = *((struct in6_addr *)&addr);
      sq.perm = perm;
      log_msg(7, "signalling connector");
      socks_pipe_request(&sq);
    }

    else
      log_msg(7, "connection already exists, not queueing SOCKS connection");
  }

}

// socks_rec_response
// file ocatsocks.c line 93
signed int socks_rec_response(struct SocksQueue *sq)
{
  struct SocksHdr shdr;
  signed int ret;
  signed int len = (signed int)sizeof(struct SocksHdr) /*8ul*/ ;
  signed long int return_value_read_3;
  return_value_read_3=read(sq->fd, (void *)&shdr, (unsigned long int)len);
  ret = (signed int)return_value_read_3;
  if(ret == -1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "reading SOCKS response on fd %d failed: \"%s\"", sq->fd, return_value_strerror_2);
    return -1;
  }

  if(!(ret >= len))
  {
    log_msg(3, "SOCKS response truncated to %d of %d bytes", ret, len);
    return -1;
  }

  else
  {
    log_msg(7, "SOCKS response received");
    if(!(shdr.ver == 0) || !((signed int)shdr.cmd == 90))
    {
      log_msg(3, "SOCKS request failed, reason = %d", shdr.cmd);
      return -1;
    }

    else
    {
      log_msg(6 | 0x400, "SOCKS connection successfully opened on fd %d", sq->fd);
      return 0;
    }
  }
}

// socks_reschedule
// file ocatsocks.c line 357
void socks_reschedule(struct SocksQueue *squeue)
{
  log_msg(3, "rescheduling SOCKS request");
  if(squeue->fd >= 1)
  {
    oe_close(squeue->fd);
    squeue->fd = 0;
  }

  signed long int return_value_time_1;
  return_value_time_1=time((signed long int *)(void *)0);
  squeue->restart_time = return_value_time_1 + (signed long int)30;
  squeue->state = 0;
}

// socks_send_request
// file ocatsocks.c line 39
signed int socks_send_request(const struct SocksQueue *sq)
{
  signed int len;
  signed int ret = -1;
  signed long int ret_array_size0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(setup_.usrname);
  unsigned long int tmp_if_expr_3;
  unsigned long int return_value_strlen_2;
  if(!(10ul + return_value_strlen_1 + (unsigned long int)netdesc_[(signed long int)setup_.net_type].name_size >= 46ul))
    tmp_if_expr_3 = (unsigned long int)46;

  else
  {
    return_value_strlen_2=strlen(setup_.usrname);
    tmp_if_expr_3 = sizeof(struct SocksHdr) /*8ul*/  + (unsigned long int)netdesc_[(signed long int)setup_.net_type].name_size + return_value_strlen_2 + (unsigned long int)2;
  }
  ret_array_size0 = (signed long int)tmp_if_expr_3;
  char buf[ret_array_size0];
  char onion[1025l];
  struct SocksHdr *shdr = (struct SocksHdr *)buf;
  if(!(setup_.hosts_lookup == 0))
  {
    hosts_check();
    ret=hosts_get_name(&sq->addr, onion, (signed int)sizeof(char [1025l]) /*1025ul*/ );
  }

  if(ret == -1)
  {
    ipv6tonion(&sq->addr, onion);
    strlcat(onion, setup_.domain, sizeof(char [1025l]) /*1025ul*/ );
  }

  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(setup_.usrname);
  unsigned long int tmp_if_expr_6;
  unsigned long int return_value_strlen_5;
  if(!(10ul + return_value_strlen_4 + (unsigned long int)netdesc_[(signed long int)setup_.net_type].name_size >= 46ul))
    tmp_if_expr_6 = (unsigned long int)46;

  else
  {
    return_value_strlen_5=strlen(setup_.usrname);
    tmp_if_expr_6 = sizeof(struct SocksHdr) /*8ul*/  + (unsigned long int)netdesc_[(signed long int)setup_.net_type].name_size + return_value_strlen_5 + (unsigned long int)2;
  }
  log_msg(7, "SOCKS_BUFLEN = %d, NI_MAXHOST = %d", tmp_if_expr_6, 1025);
  const char *return_value_inet_ntop_9;
  return_value_inet_ntop_9=inet_ntop(10, (const void *)&sq->addr, buf, (unsigned int)(unsigned long int)ret_array_size0);
  if(return_value_inet_ntop_9 == ((const char *)NULL))
  {
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    char *return_value_strerror_8;
    return_value_strerror_8=strerror(*return_value___errno_location_7);
    log_msg(4, "inet_ntop failed: \"%s\"", return_value_strerror_8);
    buf[(signed long int)0] = (char)0;
  }

  log_msg(6, "trying to connect to \"%s\" [%s] on %d", (const void *)onion, (const void *)buf, sq->fd);
  log_msg(7, "doing SOCKS4a handshake");
  shdr->ver = (char)4;
  shdr->cmd = (char)1;
  shdr->port=htons(setup_.ocat_dest_port);
  shdr->addr.s_addr=htonl((unsigned int)0x00000001);
  unsigned long int return_value_strlen_10;
  return_value_strlen_10=strlen(setup_.usrname);
  memcpy((void *)(buf + (signed long int)sizeof(struct SocksHdr) /*8ul*/ ), (const void *)setup_.usrname, return_value_strlen_10 + (unsigned long int)1);
  unsigned long int return_value_strlen_11;
  return_value_strlen_11=strlen(setup_.usrname);
  unsigned long int return_value_strlen_12;
  return_value_strlen_12=strlen(onion);
  memcpy((void *)(buf + (signed long int)sizeof(struct SocksHdr) /*8ul*/  + (signed long int)return_value_strlen_11 + (signed long int)1), (const void *)onion, return_value_strlen_12 + (unsigned long int)1);
  unsigned long int return_value_strlen_13;
  return_value_strlen_13=strlen(setup_.usrname);
  unsigned long int return_value_strlen_14;
  return_value_strlen_14=strlen(onion);
  len = (signed int)(sizeof(struct SocksHdr) /*8ul*/  + return_value_strlen_13 + return_value_strlen_14 + (unsigned long int)2);
  signed long int return_value_write_17;
  return_value_write_17=write(sq->fd, (const void *)shdr, (unsigned long int)len);
  ret = (signed int)return_value_write_17;
  if(ret == -1)
  {
    signed int *return_value___errno_location_15;
    return_value___errno_location_15=__errno_location();
    char *return_value_strerror_16;
    return_value_strerror_16=strerror(*return_value___errno_location_15);
    log_msg(3, "error writing %d bytes to fd %d: \"%s\"", len, sq->fd, return_value_strerror_16);
    return -1;
  }

  if(!(ret >= len))
  {
    log_msg(3, "SOCKS request truncated to %d of %d bytes", ret, len);
    return -1;
  }

  else
  {
    log_msg(7, "SOCKS request sent successfully");
    return 0;
  }
}

// socks_tcp_connect
// file ocatsocks.c line 335
signed int socks_tcp_connect(signed int fd, struct sockaddr *addr, signed int len)
{
  char astr[46l];
  signed int return_value_connect_7;
  return_value_connect_7=connect(fd, addr, (unsigned int)len);
  char *tmp_if_expr_1;
  if(return_value_connect_7 == -1)
  {
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    if(!(*return_value___errno_location_6 == 115))
    {
      if((signed int)setup_._anon0.socks_dst->sin_family == 2)
        tmp_if_expr_1 = (char *)&setup_._anon0.socks_dst->sin_addr;

      else
        tmp_if_expr_1 = (char *)&setup_._anon0.socks_dst6->sin6_addr;
      const char *return_value_inet_ntop_2;
      return_value_inet_ntop_2=inet_ntop((signed int)setup_._anon0.socks_dst->sin_family, (const void *)tmp_if_expr_1, astr, (unsigned int)sizeof(char [46l]) /*46ul*/ );
      unsigned short int return_value_ntohs_3;
      return_value_ntohs_3=ntohs(setup_._anon0.socks_dst->sin_port);
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      char *return_value_strerror_5;
      return_value_strerror_5=strerror(*return_value___errno_location_4);
      log_msg(3, "connect() to SOCKS port %s:%d failed: \"%s\". Sleeping for %d seconds.", return_value_inet_ntop_2, return_value_ntohs_3, return_value_strerror_5, 30);
      return -1;
    }

    log_msg(7, "connection in progress");
  }

  else
    log_msg(7, "connected");
  return 0;
}

// socks_unqueue
// file ocatsocks.c line 248
void socks_unqueue(struct SocksQueue *squeue)
{
  struct SocksQueue **sq = &socks_queue_;
  for( ; !(*sq == ((struct SocksQueue *)NULL)); sq = &(*sq)->next)
    if(*sq == squeue)
    {
      *sq = (*sq)->next;
      log_msg(7, "freeing SOCKS queue element at %p", squeue);
      free((void *)squeue);
      break;
    }

}

// strlcat
// file ocat.h line 597
unsigned long int strlcat(char *dst, const char *src, unsigned long int siz)
{
  char *d = dst;
  const char *s = src;
  unsigned long int n = siz;
  unsigned long int dlen;
  unsigned long int tmp_post_1;
  do
  {
    tmp_post_1 = n;
    n = n - 1ul;
    if(tmp_post_1 == 0ul)
      break;

    if((signed int)*d == 0)
      break;

    d = d + 1l;
  }
  while((_Bool)1);
  dlen = (unsigned long int)(d - dst);
  n = siz - dlen;
  unsigned long int return_value_strlen_2;
  char *tmp_post_3;
  if(n == 0ul)
  {
    return_value_strlen_2=strlen(s);
    return dlen + return_value_strlen_2;
  }

  else
  {
    for( ; !((signed int)*s == 0); s = s + 1l)
      if(!(n == 1ul))
      {
        tmp_post_3 = d;
        d = d + 1l;
        *tmp_post_3 = *s;
        n = n - 1ul;
      }

    *d = (char)0;
    return dlen + (unsigned long int)(s - src);
  }
}

// strlcpy
// file ocat.h line 600
unsigned long int strlcpy(char *dst, const char *src, unsigned long int siz)
{
  char *d = dst;
  const char *s = src;
  unsigned long int n = siz;
  unsigned long int return_value_strlen_1;
  char *tmp_post_2;
  if(n == 0ul)
  {
    return_value_strlen_1=strlen(s);
    return return_value_strlen_1;
  }

  else
  {
    for( ; !((signed int)*s == 0); s = s + 1l)
      if(!(n == 1ul))
      {
        tmp_post_2 = d;
        d = d + 1l;
        *tmp_post_2 = *s;
        n = n - 1ul;
      }

    *d = (char)0;
    return (unsigned long int)(s - src);
  }
}

// strsockaddr
// file ocat.h line 651
signed int strsockaddr(const char *src, struct sockaddr *addr)
{
  char *s;
  char buf[100l];
  signed int p;
  strlcpy(buf, src, (unsigned long int)100);
  s=strchr(buf, 91);
  if(!(s == ((char *)NULL)))
  {
    s = s + 1l;
    ((struct sockaddr_in6 *)addr)->sin6_family = (unsigned short int)10;
    s=strtok(s, "]");
    signed int return_value_inet_pton_1;
    return_value_inet_pton_1=inet_pton(10, s, (void *)&((struct sockaddr_in6 *)addr)->sin6_addr);
    if(return_value_inet_pton_1 == 0)
    {
      log_msg(1, "\"%s\" contains no valid IPv6 address", s);
      return -1;
    }

    s=strtok((char *)(void *)0, " ");
    if(!(s == ((char *)NULL)))
    {
      if((signed int)*s == 58)
      {
        s = s + 1l;
        p=atoi(s);
        if(p >= 1)
          ((struct sockaddr_in6 *)addr)->sin6_port=htons((unsigned short int)p);

      }

    }

    return 10;
  }

  char *return_value_strchr_3;
  return_value_strchr_3=strchr(buf, 46);
  if(!(return_value_strchr_3 == ((char *)NULL)))
  {
    ((struct sockaddr_in *)addr)->sin_family = (unsigned short int)2;
    s=strtok(buf, ":");
    signed int return_value_inet_pton_2;
    return_value_inet_pton_2=inet_pton(2, s, (void *)&((struct sockaddr_in *)addr)->sin_addr);
    if(return_value_inet_pton_2 == 0)
    {
      log_msg(1, "\"%s\" is not a valid IPv4 address", s);
      return -1;
    }

    s=strtok((char *)(void *)0, ":");
    if(!(s == ((char *)NULL)))
    {
      p=atoi(s);
      if(p >= 1)
        ((struct sockaddr_in *)addr)->sin_port=htons((unsigned short int)p);

    }

    return 2;
  }

  p=atoi(buf);
  if(p >= 1)
    switch((signed int)((struct sockaddr_in *)addr)->sin_family)
    {
      case 2:
      {
        ((struct sockaddr_in *)addr)->sin_port=htons((unsigned short int)p);
        return 2;
      }
      case 10:
      {
        ((struct sockaddr_in6 *)addr)->sin6_port=htons((unsigned short int)p);
        return 2;
      }
      default:
      {
        log_msg(7, "address family 0x%04x not supported", ((struct sockaddr_in *)addr)->sin_family);
        return -1;
      }
    }

  else
    return -1;
}

// system_w
// file ocattun.c line 37
void system_w(const char *s)
{
  signed int e;
  log_msg(7, "running command \"%s\"", s);
  e=system(s);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(e == -1)
  {
    return_value___errno_location_1=__errno_location();
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "could not exec \"%s\": \"%s\"", s, return_value_strerror_2);
  }

  /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous_20
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
  ;
  log_msg(7, "exit status = %d", (((union anonymous_20){ .__in=e }).__i & 0xff00) >> 8);
}

// term_req
// file ocat.h line 592
signed int term_req(void)
{
  signed int trq;
  lock_setup();
  trq = setup_.term_req;
  unlock_setup();
  return trq;
}

// thread_run
// file ocatthread.c line 67
void * thread_run(void *p)
{
  struct OcatThread **tl;
  void *r;
  struct anonymous_7 ss;
  signed int ecnt;
  signed int icnt;
  sigfillset(&ss);
  pthread_sigmask(0, &ss, (struct anonymous_7 *)(void *)0);
  init_ocat_thread_struct((struct OcatThread *)p);
  log_msg(7, "calling thread entry");
  r=((struct OcatThread *)p)->entry(((struct OcatThread *)p)->parm);
  log_msg(7, "thread function returned");
  pthread_mutex_lock(&thread_mutex_);
  tl = &octh_;
  if(!(*tl == ((struct OcatThread *)NULL)))
  {
    if(!((*tl)->handle == ((struct OcatThread *)p)->handle))
      tl = &(*tl)->next;

  }

  p = (void *)*tl;
  if(!(p == NULL))
  {
    *tl = (*tl)->next;
    free(p);
  }

  static signed int exit_cnt_ = 0;
  exit_cnt_ = exit_cnt_ + 1;
  ecnt = exit_cnt_;
  icnt = thread_id_;
  pthread_mutex_unlock(&thread_mutex_);
  log_msg(7, "_exit_ thread, %d inits, %d exits", icnt, ecnt);
  return r;
}

// tun_alloc
// file ocat.h line 561
signed int tun_alloc(char *dev, signed int dev_s, struct in6_addr addr)
{
  struct ifreq ifr;
  signed int fd;
  char astr[46l];
  char astr4[16l];
  char buf[1024l];
  struct in_addr netmask;
  memcpy((void *)&netmask, (const void *)&setup_.ocat_addr4_mask, sizeof(struct in_addr) /*4ul*/ );
  inet_ntop(10, (const void *)&addr, astr, (unsigned int)46);
  inet_ntop(2, (const void *)&setup_.ocat_addr4, astr4, (unsigned int)16);
  log_msg(7, "opening tun \"%s\"", tun_dev_);
  fd=open(tun_dev_, 02);
  if(!(fd >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(0, "could not open tundev %s: %s", tun_dev_, return_value_strerror_2);
    return -1;
  }

  memset((void *)&ifr, 0, sizeof(struct ifreq) /*40ul*/ );
  if(!(setup_.use_tap == 0))
    ifr.ifr_ifru.ifru_flags = (signed short int)0x0002;

  else
    ifr.ifr_ifru.ifru_flags = (signed short int)0x0001;
  if(!(*dev == 0))
    strncpy(ifr.ifr_ifrn.ifrn_name, dev, (unsigned long int)16);

  signed int return_value_ioctl_5;
  return_value_ioctl_5=ioctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(84 << 0 + 8) | (unsigned int)(202 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, (void *)&ifr);
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  if(!(return_value_ioctl_5 >= 0))
  {
    return_value___errno_location_3=__errno_location();
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    log_msg(0, "could not set TUNSETIFF: %s", return_value_strerror_4);
    exit(1);
  }

  strlcpy(dev, ifr.ifr_ifrn.ifrn_name, (unsigned long int)16);
  if(setup_.use_tap == 0)
  {
    snprintf(buf, sizeof(char [1024l]) /*1024ul*/ , "ifconfig %s add %s/%d up", dev, (const void *)astr, netdesc_[(signed long int)setup_.net_type].prefix_len);
    system_w(buf);
  }

  if(setup_.use_tap == 0 && !(setup_.ipv4_enable == 0))
  {
    char *return_value_inet_ntoa_6;
    return_value_inet_ntoa_6=inet_ntoa(netmask);
    snprintf(buf, sizeof(char [1024l]) /*1024ul*/ , "ifconfig %s %s netmask %s", dev, (const void *)astr4, return_value_inet_ntoa_6);
    system_w(buf);
  }

  if(!(setup_.use_tap == 0))
  {
    snprintf(buf, sizeof(char [1024l]) /*1024ul*/ , "ifconfig %s up", dev);
    system_w(buf);
  }

  return fd;
}

// unlock_peer
// file ocat.h line 609
signed int unlock_peer(struct OcatPeer *peer)
{
  signed int return_value_pthread_mutex_unlock_1;
  return_value_pthread_mutex_unlock_1=pthread_mutex_unlock(&peer->mutex);
  return return_value_pthread_mutex_unlock_1;
}

// unlock_peers
// file ocat.h line 607
signed int unlock_peers(void)
{
  signed int return_value_pthread_mutex_unlock_1;
  return_value_pthread_mutex_unlock_1=pthread_mutex_unlock(&peer_mutex_);
  return return_value_pthread_mutex_unlock_1;
}

// unlock_setup
// file ocat.h line 621
void unlock_setup(void)
{
  pthread_mutex_unlock(&setup_.mutex);
}

// usage
// file ocat.c line 23
void usage(const char *s)
{
  unsigned short int return_value_ntohs_1;
  return_value_ntohs_1=ntohs(setup_._anon0.socks_dst->sin_port);
  fprintf(stderr, "%s\nusage: %s [OPTIONS] <onion_hostname>\n   -a                    create connect log at \"_HOME/%s/%s\" (default = %d)\n   -b                    daemonize (default = %d)\n   -B                    do not daemonize (default = %d)\n   -h                    display usage message\n   -H                    toggle /etc/hosts lookup (default = %d)\n   -C                    disable local controller interface\n   -d <n>                set debug level to n, default = %d\n   -f <config_file>      read config from config_file (default = %s)\n   -i                    convert onion hostname to IPv6 and exit\n   -I                    GarliCat mode, use I2P instead of Tor\n   -l [<ip>:]<port>      set ocat listen address and port, default = 127.0.0.1:%d\n   -L <log_file>         log output to <log_file> (default = stderr)\n   -o <ipv6_addr>        convert IPv6 address to onion url and exit\n   -p                    use TAP device instead of TUN\n   -P [<pid_file>]       create pid file at location of <pid_file> (default = %s)\n   -r                    run as root, i.e. do not change uid/gid\n   -R                    generate a random local onion URL\n   -s <port>             set hidden service virtual port, default = %d\n   -t [<ip>:]<port>      set Tor SOCKS address and port, default = 127.0.0.1:%d\n   -T <tun_device>       path to tun character device, default = \"%s\"\n   -U                    disable unidirectional mode\n   -u <user>             change UID to user, default = \"%s\"\n   -4                    enable IPv4 support (default = %d)\n", (const void *)setup_.version, s, (const void *)".ocat", netdesc_[(signed long int)setup_.net_type].clog_file, setup_.create_clog, setup_.daemon, setup_.daemon ^ 1, setup_.hosts_lookup, setup_.debug_level, setup_.config_file, netdesc_[(signed long int)setup_.net_type].listen_port, setup_.pid_file, setup_.ocat_dest_port, return_value_ntohs_1, (const void *)"/dev/net/tun", (const void *)"tor", setup_.ipv4_enable);
}

// vlog_msgf
// file ocatlog.c line 90
void vlog_msgf(struct _IO_FILE *out, signed int lf, const char *fmt, void **ap)
{
  struct timeval tv;
  struct tm *tm;
  signed long int t;
  char timestr[64l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char timez[64l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  const struct OcatThread *th;
  th=get_thread();
  struct OcatThread ths;
  signed int level = lf & 0x07;
  char buf[1024l];
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(setup_.debug_level >= level)
  {
    signed int return_value_gettimeofday_3;
    return_value_gettimeofday_3=gettimeofday(&tv, (struct timezone *)(void *)0);
    if(return_value_gettimeofday_3 == -1)
    {
      return_value___errno_location_1=__errno_location();
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      fprintf(stderr, "%s:%d: %s\n", (const void *)"ocatlog.c", 106, return_value_strerror_2);
      exit(1);
    }

    t = tv.tv_sec;
    tm=localtime(&t);
    if(!(tm == ((struct tm *)NULL)))
    {
      strftime(timestr, (unsigned long int)64, "%a, %d %b %Y %H:%M:%S", tm);
      strftime(timez, (unsigned long int)64, "%z", tm);
    }

    if(th == ((const struct OcatThread *)NULL))
    {
      strlcpy(ths.name, "<NEW/DIE>", (unsigned long int)11);
      ths.id = -1;
      th = &ths;
    }

    pthread_mutex_lock(&log_mutex_);
    if(!(out == ((struct _IO_FILE *)NULL)))
    {
      fprintf(out, "%s.%03d %s [%d:%-*s:%6s] ", (const void *)timestr, (signed int)(tv.tv_usec / (signed long int)1000), (const void *)timez, th->id, 11 - 1, (const void *)th->name, flty_[(signed long int)level]);
      vfprintf(out, fmt, ap);
      fprintf(out, "\n");
    }

    else
    {
      vsnprintf(buf, (unsigned long int)1024, fmt, ap);
      syslog(level | 3 << 3, "[%s] %s", (const void *)th->name, (const void *)buf);
    }
    pthread_mutex_unlock(&log_mutex_);
  }

}

