// #anon_enum_PBUF_RAM=0_PBUF_ROM=1_PBUF_REF=2_PBUF_POOL=3
// file ./lwip/src/include/lwip/pbuf.h line 64
enum anonymous_0 { PBUF_RAM=0, PBUF_ROM=1, PBUF_REF=2, PBUF_POOL=3 };

// #anon_enum_PBUF_TRANSPORT=0_PBUF_IP=1_PBUF_LINK=2_PBUF_RAW=3
// file ./lwip/src/include/lwip/pbuf.h line 57
enum anonymous { PBUF_TRANSPORT=0, PBUF_IP=1, PBUF_LINK=2, PBUF_RAW=3 };

// tag-#anon#ST[*{SYM#tag-pbuf#}_SYM#tag-pbuf#_'p'||*{SYM#tag-netif#}_SYM#tag-netif#_'netif'|]
// file ./lwip/src/include/lwip/tcpip.h line 202
struct anonymous_9;

// tag-#anon#ST[*{V(*{V}_V_)->V}_V(*{V}_V_)->V_'function'||*{V}_V_'ctx'|]
// file ./lwip/src/include/lwip/tcpip.h line 206
struct anonymous_10;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_2;

// tag-#anon#ST[U32'dst_addr'||U16'dst_port'||U8'end'||U8'_pad0'|]
// file src/ocproxy.c line 144
struct anonymous_6;

// tag-#anon#ST[U32'msecs'||U32'_pad0'||*{V(*{V}_V_)->V}_V(*{V}_V_)->V_'h'||*{V}_V_'arg'|]
// file ./lwip/src/include/lwip/tcpip.h line 211
struct anonymous_11;

// tag-#anon#ST[U8'fqdn_len'||ARR255{U8}_U8_'fqdn_name'||U16'port'|]
// file src/ocproxy.c line 149
struct anonymous_7;

// tag-#anon#UN[*{V(*{V}_V_|*{SYM#tag-udp_pcb#}_SYM#tag-udp_pcb#_|*{SYM#tag-pbuf#}_SYM#tag-pbuf#_|*{SYM#tag-ip_addr#}_SYM#tag-ip_addr#_|U16)->V}_V(*{V}_V_|*{SYM#tag-udp_pcb#}_SYM#tag-udp_pcb#_|*{SYM#tag-pbuf#}_SYM#tag-pbuf#_|*{SYM#tag-ip_addr#}_SYM#tag-ip_addr#_|U16)->V_'ip4'|]
// file ./lwip/src/include/lwip/udp.h line 135
union anonymous_1;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_5;

// tag-#anon#UN[SYM#tag-#anon#ST[*{SYM#tag-pbuf#}_SYM#tag-pbuf#_'p'||*{SYM#tag-netif#}_SYM#tag-netif#_'netif'|]#'inp'||SYM#tag-#anon#ST[*{V(*{V}_V_)->V}_V(*{V}_V_)->V_'function'||*{V}_V_'ctx'|]#'cb'||SYM#tag-#anon#ST[U32'msecs'||U32'_pad0'||*{V(*{V}_V_)->V}_V(*{V}_V_)->V_'h'||*{V}_V_'arg'|]#'tmo'|]
// file ./lwip/src/include/lwip/tcpip.h line 192
union anonymous_12;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_3;

// tag-#anon#UN[SYM#tag-#anon#ST[U32'dst_addr'||U16'dst_port'||U8'end'||U8'_pad0'|]#'ipv4'||SYM#tag-#anon#ST[U8'fqdn_len'||ARR255{U8}_U8_'fqdn_name'||U16'port'|]#'fqdn'||U2080'_pad'|]
// file src/ocproxy.c line 143
union anonymous_8;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_4;

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

// tag-dns_answer
// file lwip/src/core/dns.c line 157
struct dns_answer;

// tag-dns_hdr
// file lwip/src/core/dns.c line 130
struct dns_hdr;

// tag-dns_query
// file lwip/src/core/dns.c line 147
struct dns_query;

// tag-dns_table_entry
// file lwip/src/core/dns.c line 168
struct dns_table_entry;

// tag-elem
// file ./contrib/ports/unix/include/netif/list.h line 5
struct elem;

// tag-evconnlistener
// file /usr/include/event2/listener.h line 37
struct evconnlistener;

// tag-event
// file /usr/include/event2/event.h line 272
struct event;

// tag-event_base
// file /usr/include/event2/event.h line 213
struct event_base;

// tag-icmp_dur_type
// file ./lwip/src/include/ipv4/lwip/icmp.h line 60
enum icmp_dur_type { ICMP_DUR_NET=0, ICMP_DUR_HOST=1, ICMP_DUR_PROTO=2, ICMP_DUR_PORT=3, ICMP_DUR_FRAG=4, ICMP_DUR_SR=5 };

// tag-icmp_echo_hdr
// file ./lwip/src/include/ipv4/lwip/icmp.h line 83
struct icmp_echo_hdr;

// tag-icmp_te_type
// file ./lwip/src/include/ipv4/lwip/icmp.h line 69
enum icmp_te_type { ICMP_TE_TTL=0, ICMP_TE_FRAG=1 };

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-ip_addr
// file ./lwip/src/include/ipv4/lwip/ip4_addr.h line 44
struct ip_addr;

// tag-ip_addr_packed
// file ./lwip/src/include/ipv4/lwip/ip4_addr.h line 54
struct ip_addr_packed;

// tag-ip_globals
// file ./lwip/src/include/lwip/ip.h line 118
struct ip_globals;

// tag-ip_hdr
// file ./lwip/src/include/ipv4/lwip/ip4.h line 64
struct ip_hdr;

// tag-ip_reass_helper
// file lwip/src/core/ipv4/ip_frag.c line 92
struct ip_reass_helper;

// tag-ip_reassdata
// file ./lwip/src/include/ipv4/lwip/ip_frag.h line 54
struct ip_reassdata;

// tag-list
// file ./contrib/ports/unix/include/netif/list.h line 7
struct list;

// tag-mem
// file lwip/src/core/mem.c line 156
struct mem;

// tag-netif
// file ./lwip/src/include/ipv4/lwip/ip4_addr.h line 84
struct netif;

// tag-ocp_sock
// file src/ocproxy.c line 102
struct ocp_sock;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pbuf
// file ./lwip/src/include/lwip/pbuf.h line 86
struct pbuf;

// tag-pbuf_custom
// file ./lwip/src/include/lwip/pbuf.h line 124
struct pbuf_custom;

// tag-pbuf_custom_ref
// file ./lwip/src/include/ipv4/lwip/ip_frag.h line 75
struct pbuf_custom_ref;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in;

// tag-socks_auth
// file src/ocproxy.c line 132
struct socks_auth;

// tag-socks_reply
// file src/ocproxy.c line 157
struct socks_reply;

// tag-socks_req
// file src/ocproxy.c line 138
struct socks_req;

// tag-stats_
// file ./lwip/src/include/lwip/stats.h line 113
struct stats_;

// tag-stats_mem
// file ./lwip/src/include/lwip/stats.h line 90
struct stats_mem;

// tag-stats_proto
// file ./lwip/src/include/lwip/stats.h line 58
struct stats_proto;

// tag-stats_sys
// file ./lwip/src/include/lwip/stats.h line 107
struct stats_sys;

// tag-stats_syselem
// file ./lwip/src/include/lwip/stats.h line 101
struct stats_syselem;

// tag-sys_mbox
// file ./contrib/ports/unix/include/arch/sys_arch.h line 50
struct sys_mbox;

// tag-sys_sem
// file ./contrib/ports/unix/include/arch/sys_arch.h line 42
struct sys_sem;

// tag-sys_thread
// file ./contrib/ports/unix/include/arch/sys_arch.h line 55
struct sys_thread;

// tag-sys_timeo
// file ./lwip/src/include/lwip/timers.h line 67
struct sys_timeo;

// tag-tcp_hdr
// file ./lwip/src/include/lwip/tcp_impl.h line 161
struct tcp_hdr;

// tag-tcp_listen_pcbs_t
// file ./lwip/src/include/lwip/tcp_impl.h line 343
union tcp_listen_pcbs_t;

// tag-tcp_pcb
// file ./lwip/src/include/lwip/tcp.h line 51
struct tcp_pcb;

// tag-tcp_pcb_listen
// file ./lwip/src/include/lwip/tcp.h line 306
struct tcp_pcb_listen;

// tag-tcp_seg
// file ./lwip/src/include/lwip/tcp.h line 259
struct tcp_seg;

// tag-tcp_state
// file ./lwip/src/include/lwip/tcp.h line 140
enum tcp_state { CLOSED=0, LISTEN=1, SYN_SENT=2, SYN_RCVD=3, ESTABLISHED=4, FIN_WAIT_1=5, FIN_WAIT_2=6, CLOSE_WAIT=7, CLOSING=8, LAST_ACK=9, TIME_WAIT=10 };

// tag-tcpip_callback_msg
// file ./lwip/src/include/lwip/tcpip.h line 130
struct tcpip_callback_msg;

// tag-tcpip_msg
// file ./lwip/src/include/lwip/tcpip.h line 189
struct tcpip_msg;

// tag-tcpip_msg_type
// file ./lwip/src/include/lwip/tcpip.h line 170
enum tcpip_msg_type { TCPIP_MSG_INPKT=0, TCPIP_MSG_TIMEOUT=1, TCPIP_MSG_UNTIMEOUT=2, TCPIP_MSG_CALLBACK=3, TCPIP_MSG_CALLBACK_STATIC=4 };

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-tms
// file /usr/include/x86_64-linux-gnu/sys/times.h line 34
struct tms;

// tag-udp_hdr
// file ./lwip/src/include/lwip/udp.h line 56
struct udp_hdr;

// tag-udp_pcb
// file ./lwip/src/include/lwip/udp.h line 72
struct udp_pcb;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// bind_all_listeners
// file src/ocproxy.c line 799
static void bind_all_listeners(void);
// cb_dns_tmr
// file src/ocproxy.c line 759
static void cb_dns_tmr(signed int fd, signed short int what, void *ctx);
// cb_housekeeping
// file src/ocproxy.c line 764
static void cb_housekeeping(signed int fd, signed short int what, void *ctx);
// cb_tcp_tmr
// file src/ocproxy.c line 754
static void cb_tcp_tmr(signed int fd, signed short int what, void *ctx);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// cond_wait
// file contrib/ports/unix/sys_arch.c line 375
static unsigned int cond_wait(union anonymous_3 *cond, union anonymous_4 *mutex, unsigned int timeout);
// connect_cb
// file src/ocproxy.c line 501
static signed char connect_cb(void *arg, struct tcp_pcb *tpcb, signed char err);
// die
// file src/ocproxy.c line 191
static void die(const char *fmt, ...);
// dns_check_entries
// file lwip/src/core/dns.c line 721
static void dns_check_entries(void);
// dns_check_entry
// file lwip/src/core/dns.c line 639
static void dns_check_entry(unsigned char i);
// dns_compare_name
// file lwip/src/core/dns.c line 493
static unsigned char dns_compare_name(unsigned char *query, unsigned char *response);
// dns_enqueue
// file lwip/src/core/dns.c line 872
static signed char dns_enqueue(const char *name, unsigned long int hostnamelen, void (*found)(const char *, struct ip_addr *, void *), void *callback_arg);
// dns_enqueue::found_object
//
void found_object(const char *, struct ip_addr *, void *);
// dns_gethostbyname
// file lwip/src/core/dns.c line 949
signed char dns_gethostbyname(const char *hostname, struct ip_addr *addr, void (*found)(const char *, struct ip_addr *, void *), void *callback_arg);
// dns_gethostbyname::found_object
//
void found_object(const char *, struct ip_addr *, void *);
// dns_getserver
// file lwip/src/core/dns.c line 289
struct ip_addr dns_getserver(unsigned char numdns);
// dns_init
// file lwip/src/core/dns.c line 232
void dns_init(void);
// dns_lookup
// file lwip/src/core/dns.c line 450
static unsigned int dns_lookup(const char *name);
// dns_parse_name
// file lwip/src/core/dns.c line 528
static unsigned char * dns_parse_name(unsigned char *query);
// dns_recv
// file lwip/src/core/dns.c line 736
static void dns_recv(void *arg, struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *addr, unsigned short int port);
// dns_send
// file lwip/src/core/dns.c line 560
static signed char dns_send(unsigned char numdns, const char *name, unsigned char id);
// dns_setserver
// file lwip/src/core/dns.c line 273
void dns_setserver(unsigned char numdns, struct ip_addr *dnsserver);
// dns_timer
// file lwip/src/core/timers.c line 215
static void dns_timer(void *arg);
// dns_tmr
// file lwip/src/core/dns.c line 303
void dns_tmr(void);
// enqueue_dns_req
// file src/ocproxy.c line 569
static void enqueue_dns_req(struct ocp_sock *s, const char *hostname, const char *domain, void (*found)(const char *, struct ip_addr *, void *));
// enqueue_dns_req::found_object
//
void found_object(const char *, struct ip_addr *, void *);
// evconnlistener_new_bind
// file /usr/include/event2/listener.h line 108
struct evconnlistener * evconnlistener_new_bind(struct event_base *, void (*)(struct evconnlistener *, signed int, struct sockaddr *, signed int, void *), void *, unsigned int, signed int, struct sockaddr *, signed int);
// event_add
// file /usr/include/event2/event.h line 937
signed int event_add(struct event *, struct timeval *);
// event_base_dispatch
// file /usr/include/event2/event.h line 364
signed int event_base_dispatch(struct event_base *);
// event_base_loopbreak
// file /usr/include/event2/event.h line 692
signed int event_base_loopbreak(struct event_base *);
// event_base_new
// file /usr/include/event2/event.h line 337
struct event_base * event_base_new(void);
// event_free
// file /usr/include/event2/event.h line 889
void event_free(struct event *);
// event_new
// file /usr/include/event2/event.h line 840
struct event * event_new(struct event_base *, signed int, signed short int, void (*)(signed int, signed short int, void *), void *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// finish_resolution
// file src/ocproxy.c line 543
static void finish_resolution(const char *hostname, struct ip_addr *ipaddr, void *arg);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fwd_add
// file src/ocproxy.c line 833
static void fwd_add(const char *opt);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// handle_sig
// file src/ocproxy.c line 733
static void handle_sig(signed int sig);
// icmp_dest_unreach
// file ./lwip/src/include/ipv4/lwip/icmp.h line 106
void icmp_dest_unreach(struct pbuf *p, enum icmp_dur_type t);
// icmp_input
// file lwip/src/core/ipv4/icmp.c line 77
void icmp_input(struct pbuf *p, struct netif *inp);
// icmp_send_response
// file lwip/src/core/ipv4/icmp.c line 292
static void icmp_send_response(struct pbuf *p, unsigned char type, unsigned char code);
// icmp_time_exceeded
// file lwip/src/core/ipv4/icmp.c line 276
void icmp_time_exceeded(struct pbuf *p, enum icmp_te_type t);
// inet_chksum
// file lwip/src/core/inet_chksum.c line 491
unsigned short int inet_chksum(void *dataptr, unsigned short int len);
// inet_chksum_pbuf
// file lwip/src/core/inet_chksum.c line 504
unsigned short int inet_chksum_pbuf(struct pbuf *p);
// inet_chksum_pseudo
// file lwip/src/core/inet_chksum.c line 311
unsigned short int inet_chksum_pseudo(struct pbuf *p, unsigned char proto, unsigned short int proto_len, struct ip_addr *src, struct ip_addr *dest);
// inet_chksum_pseudo_partial
// file lwip/src/core/inet_chksum.c line 423
unsigned short int inet_chksum_pseudo_partial(struct pbuf *p, unsigned char proto, unsigned short int proto_len, unsigned short int chksum_len, struct ip_addr *src, struct ip_addr *dest);
// inet_cksum_pseudo_base
// file lwip/src/core/inet_chksum.c line 262
static unsigned short int inet_cksum_pseudo_base(struct pbuf *p, unsigned char proto, unsigned short int proto_len, unsigned int acc);
// inet_cksum_pseudo_partial_base
// file lwip/src/core/inet_chksum.c line 367
static unsigned short int inet_cksum_pseudo_partial_base(struct pbuf *p, unsigned char proto, unsigned short int proto_len, unsigned short int chksum_len, unsigned int acc);
// init_oc_netif
// file src/ocproxy.c line 791
static signed char init_oc_netif(struct netif *netif);
// introduce_thread
// file contrib/ports/unix/sys_arch.c line 110
static struct sys_thread * introduce_thread(unsigned long int id);
// ip4_addr_isbroadcast
// file ./lwip/src/include/ipv4/lwip/ip4_addr.h line 203
unsigned char ip4_addr_isbroadcast(unsigned int addr, struct netif *netif);
// ip4_addr_netmask_valid
// file lwip/src/core/ipv4/ip4_addr.c line 90
unsigned char ip4_addr_netmask_valid(unsigned int netmask);
// ip_frag
// file ./lwip/src/include/ipv4/lwip/ip_frag.h line 84
signed char ip_frag(struct pbuf *p, struct netif *netif, struct ip_addr *dest);
// ip_frag_alloc_pbuf_custom_ref
// file lwip/src/core/ipv4/ip_frag.c line 637
static struct pbuf_custom_ref * ip_frag_alloc_pbuf_custom_ref(void);
// ip_frag_free_pbuf_custom_ref
// file lwip/src/core/ipv4/ip_frag.c line 644
static void ip_frag_free_pbuf_custom_ref(struct pbuf_custom_ref *p);
// ip_input
// file lwip/src/core/ipv4/ip4.c line 298
signed char ip_input(struct pbuf *p, struct netif *inp);
// ip_output
// file ./lwip/src/include/ipv4/lwip/ip4.h line 117
signed char ip_output(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest, unsigned char ttl, unsigned char tos, unsigned char proto);
// ip_output_if
// file ./lwip/src/include/ipv4/lwip/ip4.h line 119
signed char ip_output_if(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest, unsigned char ttl, unsigned char tos, unsigned char proto, struct netif *netif);
// ip_output_if_src
// file ./lwip/src/include/ipv4/lwip/ip4.h line 121
signed char ip_output_if_src(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest, unsigned char ttl, unsigned char tos, unsigned char proto, struct netif *netif);
// ip_reass
// file ./lwip/src/include/ipv4/lwip/ip_frag.h line 65
struct pbuf * ip_reass(struct pbuf *p);
// ip_reass_chain_frag_into_datagram_and_validate
// file lwip/src/core/ipv4/ip_frag.c line 331
static signed int ip_reass_chain_frag_into_datagram_and_validate(struct ip_reassdata *ipr, struct pbuf *new_p);
// ip_reass_dequeue_datagram
// file lwip/src/core/ipv4/ip_frag.c line 304
static void ip_reass_dequeue_datagram(struct ip_reassdata *ipr, struct ip_reassdata *prev);
// ip_reass_enqueue_new_datagram
// file lwip/src/core/ipv4/ip_frag.c line 269
static struct ip_reassdata * ip_reass_enqueue_new_datagram(struct ip_hdr *fraghdr, signed int clen);
// ip_reass_free_complete_datagram
// file lwip/src/core/ipv4/ip_frag.c line 158
static signed int ip_reass_free_complete_datagram(struct ip_reassdata *ipr, struct ip_reassdata *prev);
// ip_reass_remove_oldest_datagram
// file lwip/src/core/ipv4/ip_frag.c line 221
static signed int ip_reass_remove_oldest_datagram(struct ip_hdr *fraghdr, signed int pbufs_needed);
// ip_reass_timer
// file lwip/src/core/timers.c line 121
static void ip_reass_timer(void *arg);
// ip_reass_tmr
// file ./lwip/src/include/ipv4/lwip/ip_frag.h line 64
void ip_reass_tmr(void);
// ip_route
// file ./lwip/src/include/ipv4/lwip/ip4.h line 115
struct netif * ip_route(struct ip_addr *dest);
// ipaddr_addr
// file ./lwip/src/include/ipv4/lwip/ip4_addr.h line 237
unsigned int ipaddr_addr(const char *cp);
// ipaddr_aton
// file lwip/src/core/ipv4/ip4_addr.c line 152
signed int ipaddr_aton(const char *cp, struct ip_addr *addr);
// ipaddr_ntoa
// file lwip/src/core/ipv4/ip4_addr.c line 261
char * ipaddr_ntoa(const struct ip_addr *addr);
// ipaddr_ntoa_r
// file lwip/src/core/ipv4/ip4_addr.c line 276
char * ipaddr_ntoa_r(const struct ip_addr *addr, char *buf, signed int buflen);
// ipfrag_free_pbuf_custom
// file lwip/src/core/ipv4/ip_frag.c line 653
static void ipfrag_free_pbuf_custom(struct pbuf *p);
// list_delete
// file contrib/ports/unix/netif/list.c line 109
void list_delete(struct list *list);
// list_elems
// file contrib/ports/unix/netif/list.c line 103
signed int list_elems(struct list *list);
// list_first
// file contrib/ports/unix/netif/list.c line 97
void * list_first(struct list *list);
// list_map
// file contrib/ports/unix/netif/list.c line 144
void list_map(struct list *list, void (*func)(void *));
// list_map::func_object
//
void func_object(void *);
// list_new
// file contrib/ports/unix/netif/list.c line 41
struct list * list_new(signed int size);
// list_pop
// file contrib/ports/unix/netif/list.c line 74
void * list_pop(struct list *list);
// list_push
// file contrib/ports/unix/netif/list.c line 52
signed int list_push(struct list *list, void *data);
// list_remove
// file contrib/ports/unix/netif/list.c line 116
signed int list_remove(struct list *list, void *elem);
// local_data_cb
// file src/ocproxy.c line 283
static void local_data_cb(signed int fd, signed short int what, void *ctx);
// lwip_data_cb
// file src/ocproxy.c line 660
static void lwip_data_cb(signed int fd, signed short int what, void *ctx);
// lwip_data_out
// file src/ocproxy.c line 695
static signed char lwip_data_out(struct netif *netif, struct pbuf *p, struct ip_addr *ipaddr);
// lwip_htonl
// file lwip/src/core/def.c line 88
unsigned int lwip_htonl(unsigned int n);
// lwip_htons
// file lwip/src/core/def.c line 64
unsigned short int lwip_htons(unsigned short int n);
// lwip_init
// file lwip/src/core/init.c line 305
void lwip_init(void);
// lwip_ntohl
// file lwip/src/core/def.c line 103
unsigned int lwip_ntohl(unsigned int n);
// lwip_ntohs
// file lwip/src/core/def.c line 76
unsigned short int lwip_ntohs(unsigned short int n);
// lwip_standard_chksum
// file lwip/src/core/inet_chksum.c line 136
unsigned short int lwip_standard_chksum(void *dataptr, signed int len);
// lwip_strerr
// file ./lwip/src/include/lwip/err.h line 76
extern const char * lwip_strerr(signed char err);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mem_calloc
// file lwip/src/core/mem.c line 646
void * mem_calloc(unsigned int count, unsigned int size);
// mem_free
// file lwip/src/core/mem.c line 311
void mem_free(void *rmem);
// mem_free_callback
// file lwip/src/api/tcpip.c line 561
signed char mem_free_callback(void *m);
// mem_init
// file ./lwip/src/include/lwip/mem.h line 88
void mem_init(void);
// mem_malloc
// file lwip/src/core/mem.c line 494
void * mem_malloc(unsigned int size);
// mem_trim
// file lwip/src/core/mem.c line 369
void * mem_trim(void *rmem, unsigned int newsize);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// netif_add
// file lwip/src/core/netif.c line 174
struct netif * netif_add(struct netif *netif, struct ip_addr *ipaddr, struct ip_addr *netmask, struct ip_addr *gw, void *state, signed char (*init)(struct netif *), signed char (*input)(struct pbuf *, struct netif *));
// netif_add::init_object
//
signed char init_object(struct netif *);
// netif_add::input_object
//
signed char input_object(struct pbuf *, struct netif *);
// netif_find
// file lwip/src/core/netif.c line 353
struct netif * netif_find(char *name);
// netif_init
// file ./lwip/src/include/lwip/netif.h line 308
void netif_init(void);
// netif_remove
// file lwip/src/core/netif.c line 294
void netif_remove(struct netif *netif);
// netif_set_addr
// file lwip/src/core/netif.c line 280
void netif_set_addr(struct netif *netif, struct ip_addr *ipaddr, struct ip_addr *netmask, struct ip_addr *gw);
// netif_set_default
// file lwip/src/core/netif.c line 493
void netif_set_default(struct netif *netif);
// netif_set_down
// file lwip/src/core/netif.c line 563
void netif_set_down(struct netif *netif);
// netif_set_gw
// file lwip/src/core/netif.c line 451
void netif_set_gw(struct netif *netif, struct ip_addr *gw);
// netif_set_ipaddr
// file lwip/src/core/netif.c line 386
void netif_set_ipaddr(struct netif *netif, struct ip_addr *ipaddr);
// netif_set_link_down
// file lwip/src/core/netif.c line 651
void netif_set_link_down(struct netif *netif);
// netif_set_link_up
// file lwip/src/core/netif.c line 608
void netif_set_link_up(struct netif *netif);
// netif_set_netmask
// file lwip/src/core/netif.c line 472
void netif_set_netmask(struct netif *netif, struct ip_addr *netmask);
// netif_set_up
// file lwip/src/core/netif.c line 516
void netif_set_up(struct netif *netif);
// new_conn_cb
// file src/ocproxy.c line 625
static void new_conn_cb(struct evconnlistener *listener, signed int fd, struct sockaddr *address, signed int socklen, void *ctx);
// new_listener
// file src/ocproxy.c line 822
static struct ocp_sock * new_listener(signed int port, void (*cb)(struct evconnlistener *, signed int, struct sockaddr *, signed int, void *));
// new_listener::cb_object
//
void cb_object(struct evconnlistener *, signed int, struct sockaddr *, signed int, void *);
// new_periodic_event
// file src/ocproxy.c line 741
static void new_periodic_event(void (*cb)(signed int, signed short int, void *), void *arg, signed int timeout_ms);
// new_periodic_event::cb_object
//
void cb_object(signed int, signed short int, void *);
// ocp_atoi
// file src/ocproxy.c line 221
static signed int ocp_atoi(const char *s);
// ocp_sock_del
// file src/ocproxy.c line 260
static void ocp_sock_del(struct ocp_sock *s);
// ocp_sock_new
// file src/ocproxy.c line 230
static struct ocp_sock * ocp_sock_new(signed int fd, void (*cb)(signed int, signed short int, void *), signed int flags);
// ocp_sock_new::cb_object
//
void cb_object(signed int, signed short int, void *);
// pbuf_alloc
// file ./lwip/src/include/lwip/pbuf.h line 153
struct pbuf * pbuf_alloc(enum anonymous layer, unsigned short int length, enum anonymous_0 type);
// pbuf_alloced_custom
// file lwip/src/core/pbuf.c line 367
struct pbuf * pbuf_alloced_custom(enum anonymous l, unsigned short int length, enum anonymous_0 type, struct pbuf_custom *p, void *payload_mem, unsigned short int payload_mem_len);
// pbuf_cat
// file lwip/src/core/pbuf.c line 745
void pbuf_cat(struct pbuf *h, struct pbuf *t);
// pbuf_chain
// file lwip/src/core/pbuf.c line 786
void pbuf_chain(struct pbuf *h, struct pbuf *t);
// pbuf_clen
// file lwip/src/core/pbuf.c line 704
unsigned char pbuf_clen(struct pbuf *p);
// pbuf_coalesce
// file lwip/src/core/pbuf.c line 1060
struct pbuf * pbuf_coalesce(struct pbuf *p, enum anonymous layer);
// pbuf_copy
// file lwip/src/core/pbuf.c line 852
signed char pbuf_copy(struct pbuf *p_to, struct pbuf *p_from);
// pbuf_copy_partial
// file ./lwip/src/include/lwip/pbuf.h line 168
unsigned short int pbuf_copy_partial(struct pbuf *buf, void *dataptr, unsigned short int len, unsigned short int offset);
// pbuf_dechain
// file lwip/src/core/pbuf.c line 803
struct pbuf * pbuf_dechain(struct pbuf *p);
// pbuf_free
// file ./lwip/src/include/lwip/pbuf.h line 162
unsigned char pbuf_free(struct pbuf *p);
// pbuf_free_callback
// file lwip/src/api/tcpip.c line 548
signed char pbuf_free_callback(struct pbuf *p);
// pbuf_free_int
// file lwip/src/api/tcpip.c line 535
static void pbuf_free_int(void *p);
// pbuf_free_ooseq
// file lwip/src/core/pbuf.c line 118
static void pbuf_free_ooseq(void);
// pbuf_free_ooseq_callback
// file lwip/src/core/pbuf.c line 143
static void pbuf_free_ooseq_callback(void *arg);
// pbuf_get_at
// file lwip/src/core/pbuf.c line 1127
unsigned char pbuf_get_at(struct pbuf *p, unsigned short int offset);
// pbuf_header
// file lwip/src/core/pbuf.c line 511
unsigned char pbuf_header(struct pbuf *p, signed short int header_size_increment);
// pbuf_memcmp
// file lwip/src/core/pbuf.c line 1154
unsigned short int pbuf_memcmp(struct pbuf *p, unsigned short int offset, const void *s2, unsigned short int n);
// pbuf_memfind
// file lwip/src/core/pbuf.c line 1190
unsigned short int pbuf_memfind(struct pbuf *p, const void *mem, unsigned short int mem_len, unsigned short int start_offset);
// pbuf_pool_is_empty
// file lwip/src/core/pbuf.c line 152
static void pbuf_pool_is_empty(void);
// pbuf_realloc
// file ./lwip/src/include/lwip/pbuf.h line 159
void pbuf_realloc(struct pbuf *p, unsigned short int new_len);
// pbuf_ref
// file lwip/src/core/pbuf.c line 723
void pbuf_ref(struct pbuf *p);
// pbuf_strstr
// file lwip/src/core/pbuf.c line 1216
unsigned short int pbuf_strstr(struct pbuf *p, const char *substr);
// pbuf_take
// file lwip/src/core/pbuf.c line 1016
signed char pbuf_take(struct pbuf *buf, const void *dataptr, unsigned short int len);
// perf_init
// file contrib/ports/unix/perf.c line 61
void perf_init(char *fname);
// perf_print
// file contrib/ports/unix/perf.c line 40
void perf_print(unsigned long int c1l, unsigned long int c1h, unsigned long int c2l, unsigned long int c2h, char *key);
// perf_print_times
// file contrib/ports/unix/perf.c line 54
void perf_print_times(struct tms *start, struct tms *end, char *key);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// plug_holes
// file lwip/src/core/mem.c line 236
static void plug_holes(struct mem *mem);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_3 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_3 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_3 *, const union anonymous_5 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous_3 *, union anonymous_4 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_3 *, union anonymous_4 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_4 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_4 *, const union anonymous_5 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_4 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_4 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// recv_cb
// file src/ocproxy.c line 330
static signed char recv_cb(void *ctx, struct tcp_pcb *tpcb, struct pbuf *p, signed char err);
// retry_resolution
// file src/ocproxy.c line 595
static void retry_resolution(const char *hostname, struct ip_addr *ipaddr, void *arg);
// sent_cb
// file src/ocproxy.c line 314
static signed char sent_cb(void *ctx, struct tcp_pcb *tpcb, unsigned short int len);
// setlinebuf
// file /usr/include/stdio.h line 347
extern void setlinebuf(struct _IO_FILE *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socks_cmd_cb
// file src/ocproxy.c line 402
static void socks_cmd_cb(signed int fd, signed short int what, void *ctx);
// socks_reply
// file src/ocproxy.c line 382
static void socks_reply(struct ocp_sock *s, signed int rep);
// start_connection
// file src/ocproxy.c line 516
static void start_connection(struct ocp_sock *s, struct ip_addr *ipaddr);
// start_resolution
// file src/ocproxy.c line 609
static void start_resolution(struct ocp_sock *s, const char *hostname);
// stats_display
// file lwip/src/core/stats.c line 155
void stats_display(void);
// stats_display_mem
// file lwip/src/core/stats.c line 113
void stats_display_mem(struct stats_mem *mem, const char *name);
// stats_display_proto
// file lwip/src/core/stats.c line 72
void stats_display_proto(struct stats_proto *proto, const char *name);
// stats_display_sys
// file lwip/src/core/stats.c line 139
void stats_display_sys(struct stats_sys *sys);
// stats_init
// file ./lwip/src/include/lwip/stats.h line 166
void stats_init(void);
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
// strsep
// file /usr/include/string.h line 556
extern char * strsep(char ** restrict , const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// sys_arch_mbox_fetch
// file ./lwip/src/include/lwip/sys.h line 191
unsigned int sys_arch_mbox_fetch(struct sys_mbox **mb, void **msg, unsigned int timeout);
// sys_arch_mbox_tryfetch
// file contrib/ports/unix/sys_arch.c line 268
unsigned int sys_arch_mbox_tryfetch(struct sys_mbox **mb, void **msg);
// sys_arch_protect
// file ./lwip/src/include/lwip/sys.h line 277
unsigned int sys_arch_protect(void);
// sys_arch_sem_wait
// file ./lwip/src/include/lwip/sys.h line 148
unsigned int sys_arch_sem_wait(struct sys_sem **s, unsigned int timeout);
// sys_arch_unprotect
// file ./lwip/src/include/lwip/sys.h line 278
void sys_arch_unprotect(unsigned int pval);
// sys_init
// file ./lwip/src/include/lwip/sys.h line 228
void sys_init(void);
// sys_jiffies
// file contrib/ports/unix/sys_arch.c line 567
unsigned int sys_jiffies(void);
// sys_mbox_free
// file contrib/ports/unix/sys_arch.c line 177
void sys_mbox_free(struct sys_mbox **mb);
// sys_mbox_new
// file ./lwip/src/include/lwip/sys.h line 174
signed char sys_mbox_new(struct sys_mbox **mb, signed int size);
// sys_mbox_post
// file ./lwip/src/include/lwip/sys.h line 179
void sys_mbox_post(struct sys_mbox **mb, void *msg);
// sys_mbox_trypost
// file ./lwip/src/include/lwip/sys.h line 183
signed char sys_mbox_trypost(struct sys_mbox **mb, void *msg);
// sys_msleep
// file lwip/src/core/sys.c line 55
void sys_msleep(unsigned int ms);
// sys_now
// file contrib/ports/unix/sys_arch.c line 480
unsigned int sys_now(void);
// sys_sem_free
// file ./lwip/src/include/lwip/sys.h line 151
void sys_sem_free(struct sys_sem **sem);
// sys_sem_free_internal
// file contrib/ports/unix/sys_arch.c line 462
static void sys_sem_free_internal(struct sys_sem *sem);
// sys_sem_new
// file ./lwip/src/include/lwip/sys.h line 139
signed char sys_sem_new(struct sys_sem **sem, unsigned char count);
// sys_sem_new_internal
// file contrib/ports/unix/sys_arch.c line 350
static struct sys_sem * sys_sem_new_internal(unsigned char count);
// sys_sem_signal
// file ./lwip/src/include/lwip/sys.h line 142
void sys_sem_signal(struct sys_sem **s);
// sys_thread_new
// file ./lwip/src/include/lwip/sys.h line 223
struct sys_thread * sys_thread_new(const char *name, void (*function)(void *), void *arg, signed int stacksize, signed int prio);
// sys_thread_new::function_object
//
void function_object(void *);
// sys_timeout
// file lwip/src/core/timers.c line 325
void sys_timeout(unsigned int msecs, void (*handler)(void *), void *arg);
// sys_timeout::handler_object
//
void handler_object(void *);
// sys_timeouts_init
// file ./lwip/src/include/lwip/timers.h line 77
void sys_timeouts_init(void);
// sys_timeouts_mbox_fetch
// file lwip/src/core/timers.c line 498
void sys_timeouts_mbox_fetch(struct sys_mbox **mbox, void **msg);
// sys_timeouts_mbox_fetch::1::handler_object
//
void handler_object(void *);
// sys_untimeout
// file lwip/src/core/timers.c line 396
void sys_untimeout(void (*handler)(void *), void *arg);
// sys_untimeout::handler_object
//
void handler_object(void *);
// tcp_abandon
// file lwip/src/core/tcp.c line 360
void tcp_abandon(struct tcp_pcb *pcb, signed int reset);
// tcp_abandon::1::errf_object
//
void errf_object(void *, signed char);
// tcp_abort
// file ./lwip/src/include/lwip/tcp.h line 375
void tcp_abort(struct tcp_pcb *pcb);
// tcp_accept
// file lwip/src/core/tcp.c line 1529
void tcp_accept(struct tcp_pcb *pcb, signed char (*accept)(void *, struct tcp_pcb *, signed char));
// tcp_accept::accept_object
//
signed char accept_object(void *, struct tcp_pcb *, signed char);
// tcp_accept_null
// file lwip/src/core/tcp.c line 500
static signed char tcp_accept_null(void *arg, struct tcp_pcb *pcb, signed char err);
// tcp_alloc
// file lwip/src/core/tcp.c line 1348
struct tcp_pcb * tcp_alloc(unsigned char prio);
// tcp_arg
// file lwip/src/core/tcp.c line 1469
void tcp_arg(struct tcp_pcb *pcb, void *arg);
// tcp_bind
// file lwip/src/core/tcp.c line 437
signed char tcp_bind(struct tcp_pcb *pcb, struct ip_addr *ipaddr, unsigned short int port);
// tcp_close
// file lwip/src/core/tcp.c line 288
signed char tcp_close(struct tcp_pcb *pcb);
// tcp_close_shutdown
// file lwip/src/core/tcp.c line 173
static signed char tcp_close_shutdown(struct tcp_pcb *pcb, unsigned char rst_on_unacked_data);
// tcp_connect
// file lwip/src/core/tcp.c line 728
signed char tcp_connect(struct tcp_pcb *pcb, struct ip_addr *ipaddr, unsigned short int port, signed char (*connected)(void *, struct tcp_pcb *, signed char));
// tcp_connect::connected_object
//
signed char connected_object(void *, struct tcp_pcb *, signed char);
// tcp_create_segment
// file lwip/src/core/tcp_out.c line 162
static struct tcp_seg * tcp_create_segment(struct tcp_pcb *pcb, struct pbuf *p, unsigned char flags, unsigned int seqno, unsigned char optflags);
// tcp_debug_state_str
// file lwip/src/core/tcp.c line 1721
const char * tcp_debug_state_str(enum tcp_state s);
// tcp_eff_send_mss_impl
// file lwip/src/core/tcp.c line 1680
unsigned short int tcp_eff_send_mss_impl(unsigned short int sendmss, struct ip_addr *dest);
// tcp_enqueue_flags
// file ./lwip/src/include/lwip/tcp_impl.h line 472
signed char tcp_enqueue_flags(struct tcp_pcb *pcb, unsigned char flags);
// tcp_err
// file lwip/src/core/tcp.c line 1514
void tcp_err(struct tcp_pcb *pcb, void (*err)(void *, signed char));
// tcp_err::err_object
//
void err_object(void *, signed char);
// tcp_err_cb
// file src/ocproxy.c line 486
static void tcp_err_cb(void *arg, signed char err);
// tcp_fasttmr
// file lwip/src/core/tcp.c line 1093
void tcp_fasttmr(void);
// tcp_getoptbyte
// file lwip/src/core/tcp_in.c line 1645
static unsigned char tcp_getoptbyte(void);
// tcp_init
// file ./lwip/src/include/lwip/tcp_impl.h line 55
void tcp_init(void);
// tcp_input
// file lwip/src/core/tcp_in.c line 100
void tcp_input(struct pbuf *p, struct netif *inp);
// tcp_keepalive
// file ./lwip/src/include/lwip/tcp_impl.h line 493
void tcp_keepalive(struct tcp_pcb *pcb);
// tcp_kill_prio
// file lwip/src/core/tcp.c line 1287
static void tcp_kill_prio(unsigned char prio);
// tcp_kill_timewait
// file lwip/src/core/tcp.c line 1320
static void tcp_kill_timewait(void);
// tcp_listen_input
// file lwip/src/core/tcp_in.c line 526
static signed char tcp_listen_input(struct tcp_pcb_listen *pcb);
// tcp_listen_with_backlog
// file lwip/src/core/tcp.c line 525
struct tcp_pcb * tcp_listen_with_backlog(struct tcp_pcb *pcb, unsigned char backlog);
// tcp_new
// file lwip/src/core/tcp.c line 1438
struct tcp_pcb * tcp_new(void);
// tcp_new_port
// file lwip/src/core/tcp.c line 690
static unsigned short int tcp_new_port(void);
// tcp_next_iss
// file lwip/src/core/tcp.c line 1665
unsigned int tcp_next_iss(void);
// tcp_oos_insert_segment
// file lwip/src/core/tcp_in.c line 892
static void tcp_oos_insert_segment(struct tcp_seg *cseg, struct tcp_seg *next);
// tcp_output
// file ./lwip/src/include/lwip/tcp.h line 392
signed char tcp_output(struct tcp_pcb *pcb);
// tcp_output_alloc_header
// file lwip/src/core/tcp_out.c line 97
static struct pbuf * tcp_output_alloc_header(struct tcp_pcb *pcb, unsigned short int optlen, unsigned short int datalen, unsigned int seqno_be);
// tcp_output_segment
// file lwip/src/core/tcp_out.c line 1092
static void tcp_output_segment(struct tcp_seg *seg, struct tcp_pcb *pcb);
// tcp_parseopt
// file lwip/src/core/tcp_in.c line 1665
static void tcp_parseopt(struct tcp_pcb *pcb);
// tcp_pbuf_prealloc
// file lwip/src/core/tcp_out.c line 223
static struct pbuf * tcp_pbuf_prealloc(enum anonymous layer, unsigned short int length, unsigned short int max_length, unsigned short int *oversize, struct tcp_pcb *pcb, unsigned char apiflags, unsigned char first_seg);
// tcp_pcb_purge
// file lwip/src/core/tcp.c line 1563
void tcp_pcb_purge(struct tcp_pcb *pcb);
// tcp_pcb_remove
// file lwip/src/core/tcp.c line 1632
void tcp_pcb_remove(struct tcp_pcb **pcblist, struct tcp_pcb *pcb);
// tcp_poll
// file lwip/src/core/tcp.c line 1545
void tcp_poll(struct tcp_pcb *pcb, signed char (*poll)(void *, struct tcp_pcb *), unsigned char interval);
// tcp_poll::poll_object
//
signed char poll_object(void *, struct tcp_pcb *);
// tcp_process
// file lwip/src/core/tcp_in.c line 666
static signed char tcp_process(struct tcp_pcb *pcb);
// tcp_process_refused_data
// file lwip/src/core/tcp.c line 1134
signed char tcp_process_refused_data(struct tcp_pcb *pcb);
// tcp_receive
// file lwip/src/core/tcp_in.c line 939
static void tcp_receive(struct tcp_pcb *pcb);
// tcp_recv
// file lwip/src/core/tcp.c line 1485
void tcp_recv(struct tcp_pcb *pcb, signed char (*recv)(void *, struct tcp_pcb *, struct pbuf *, signed char));
// tcp_recv::recv_object
//
signed char recv_object(void *, struct tcp_pcb *, struct pbuf *, signed char);
// tcp_recv_null
// file lwip/src/core/tcp.c line 1267
signed char tcp_recv_null(void *arg, struct tcp_pcb *pcb, struct pbuf *p, signed char err);
// tcp_recved
// file lwip/src/core/tcp.c line 646
void tcp_recved(struct tcp_pcb *pcb, unsigned short int len);
// tcp_rexmit
// file ./lwip/src/include/lwip/tcp_impl.h line 71
void tcp_rexmit(struct tcp_pcb *pcb);
// tcp_rexmit_fast
// file ./lwip/src/include/lwip/tcp_impl.h line 73
void tcp_rexmit_fast(struct tcp_pcb *pcb);
// tcp_rexmit_rto
// file ./lwip/src/include/lwip/tcp_impl.h line 72
void tcp_rexmit_rto(struct tcp_pcb *pcb);
// tcp_rst_impl
// file ./lwip/src/include/lwip/tcp_impl.h line 476
void tcp_rst_impl(unsigned int seqno, unsigned int ackno, struct ip_addr *local_ip, struct ip_addr *remote_ip, unsigned short int local_port, unsigned short int remote_port);
// tcp_seg_copy
// file lwip/src/core/tcp.c line 1247
struct tcp_seg * tcp_seg_copy(struct tcp_seg *seg);
// tcp_seg_free
// file lwip/src/core/tcp.c line 1213
void tcp_seg_free(struct tcp_seg *seg);
// tcp_segs_free
// file ./lwip/src/include/lwip/tcp_impl.h line 451
void tcp_segs_free(struct tcp_seg *seg);
// tcp_send_empty_ack
// file ./lwip/src/include/lwip/tcp_impl.h line 70
signed char tcp_send_empty_ack(struct tcp_pcb *pcb);
// tcp_send_fin
// file ./lwip/src/include/lwip/tcp_impl.h line 471
signed char tcp_send_fin(struct tcp_pcb *pcb);
// tcp_sent
// file lwip/src/core/tcp.c line 1499
void tcp_sent(struct tcp_pcb *pcb, signed char (*sent)(void *, struct tcp_pcb *, unsigned short int));
// tcp_sent::sent_object
//
signed char sent_object(void *, struct tcp_pcb *, unsigned short int);
// tcp_setprio
// file lwip/src/core/tcp.c line 1233
void tcp_setprio(struct tcp_pcb *pcb, unsigned char prio);
// tcp_shutdown
// file lwip/src/core/tcp.c line 316
signed char tcp_shutdown(struct tcp_pcb *pcb, signed int shut_rx, signed int shut_tx);
// tcp_slowtmr
// file lwip/src/core/tcp.c line 835
void tcp_slowtmr(void);
// tcp_slowtmr::1::2::14::err_fn_object
//
void err_fn_object(void *, signed char);
// tcp_timer_needed
// file ./lwip/src/include/lwip/tcp_impl.h line 529
void tcp_timer_needed(void);
// tcp_timewait_input
// file lwip/src/core/tcp_in.c line 620
static signed char tcp_timewait_input(struct tcp_pcb *pcb);
// tcp_tmr
// file lwip/src/core/tcp.c line 144
void tcp_tmr(void);
// tcp_update_rcv_ann_wnd
// file lwip/src/core/tcp.c line 612
unsigned int tcp_update_rcv_ann_wnd(struct tcp_pcb *pcb);
// tcp_write
// file lwip/src/core/tcp_out.c line 358
signed char tcp_write(struct tcp_pcb *pcb, const void *arg, unsigned short int len, unsigned char apiflags);
// tcp_write_checks
// file lwip/src/core/tcp_out.c line 298
static signed char tcp_write_checks(struct tcp_pcb *pcb, unsigned short int len);
// tcp_zero_window_probe
// file ./lwip/src/include/lwip/tcp_impl.h line 494
void tcp_zero_window_probe(struct tcp_pcb *pcb);
// tcpdump
// file contrib/ports/unix/netif/tcpdump.c line 61
void tcpdump(struct pbuf *p);
// tcpdump_init
// file contrib/ports/unix/netif/tcpdump.c line 50
void tcpdump_init(void);
// tcpip_callback_with_block
// file ./lwip/src/include/lwip/tcpip.h line 154
signed char tcpip_callback_with_block(void (*function)(void *), void *ctx, unsigned char block);
// tcpip_callback_with_block::function_object
//
void function_object(void *);
// tcpip_callbackmsg_delete
// file lwip/src/api/tcpip.c line 480
void tcpip_callbackmsg_delete(struct tcpip_callback_msg *msg);
// tcpip_callbackmsg_new
// file lwip/src/api/tcpip.c line 463
struct tcpip_callback_msg * tcpip_callbackmsg_new(void (*function)(void *), void *ctx);
// tcpip_callbackmsg_new::function_object
//
void function_object(void *);
// tcpip_init
// file lwip/src/api/tcpip.c line 510
void tcpip_init(void (*initfunc)(void *), void *arg);
// tcpip_init::initfunc_object
//
void initfunc_object(void *);
// tcpip_init_done_object
//
void tcpip_init_done_object(void *);
// tcpip_input
// file lwip/src/api/tcpip.c line 184
signed char tcpip_input(struct pbuf *p, struct netif *inp);
// tcpip_tcp_timer
// file lwip/src/core/timers.c line 81
static void tcpip_tcp_timer(void *arg);
// tcpip_thread
// file lwip/src/api/tcpip.c line 80
static void tcpip_thread(void *arg);
// tcpip_timeout
// file lwip/src/api/tcpip.c line 270
signed char tcpip_timeout(unsigned int msecs, void (*h)(void *), void *arg);
// tcpip_timeout::h_object
//
void h_object(void *);
// tcpip_trycallback
// file lwip/src/api/tcpip.c line 493
signed char tcpip_trycallback(struct tcpip_callback_msg *msg);
// tcpip_untimeout
// file lwip/src/api/tcpip.c line 299
signed char tcpip_untimeout(void (*h)(void *), void *arg);
// tcpip_untimeout::h_object
//
void h_object(void *);
// udp_bind
// file ./lwip/src/include/lwip/udp.h line 149
signed char udp_bind(struct udp_pcb *pcb, struct ip_addr *ipaddr, unsigned short int port);
// udp_connect
// file ./lwip/src/include/lwip/udp.h line 151
signed char udp_connect(struct udp_pcb *pcb, struct ip_addr *ipaddr, unsigned short int port);
// udp_disconnect
// file lwip/src/core/udp.c line 1036
void udp_disconnect(struct udp_pcb *pcb);
// udp_init
// file ./lwip/src/include/lwip/udp.h line 187
void udp_init(void);
// udp_input
// file lwip/src/core/udp.c line 155
void udp_input(struct pbuf *p, struct netif *inp);
// udp_new
// file ./lwip/src/include/lwip/udp.h line 147
struct udp_pcb * udp_new(void);
// udp_new_port
// file lwip/src/core/udp.c line 103
static unsigned short int udp_new_port(void);
// udp_recv
// file ./lwip/src/include/lwip/udp.h line 154
void udp_recv(struct udp_pcb *pcb, void (*recv)(void *, struct udp_pcb *, struct pbuf *, struct ip_addr *, unsigned short int), void *recv_arg);
// udp_recv::recv_object
//
void recv_object(void *, struct udp_pcb *, struct pbuf *, struct ip_addr *, unsigned short int);
// udp_remove
// file lwip/src/core/udp.c line 1071
void udp_remove(struct udp_pcb *pcb);
// udp_send
// file lwip/src/core/udp.c line 506
signed char udp_send(struct udp_pcb *pcb, struct pbuf *p);
// udp_sendto
// file ./lwip/src/include/lwip/udp.h line 162
signed char udp_sendto(struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *dst_ip, unsigned short int dst_port);
// udp_sendto_if
// file lwip/src/core/udp.c line 615
signed char udp_sendto_if(struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *dst_ip, unsigned short int dst_port, struct netif *netif);
// udp_sendto_if_src
// file lwip/src/core/udp.c line 673
signed char udp_sendto_if_src(struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *dst_ip, unsigned short int dst_port, struct netif *netif, struct ip_addr *src_ip);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vpn_conn_down
// file src/ocproxy.c line 653
static void vpn_conn_down(void);
// warn
// file src/ocproxy.c line 202
static void warn(const char *fmt, ...);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writev
// file /usr/include/x86_64-linux-gnu/sys/uio.h line 50
extern signed long int writev(signed int, struct iovec *, signed int);
// xstrdup
// file src/ocproxy.c line 213
static char * xstrdup(const char *s);

struct anonymous_9
{
  // p
  struct pbuf *p;
  // netif
  struct netif *netif;
};

struct anonymous_10
{
  // function
  void (*function)(void *);
  // ctx
  void *ctx;
};

struct anonymous_2
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

struct anonymous_6
{
  // dst_addr
  unsigned int dst_addr;
  // dst_port
  unsigned short int dst_port;
  // end
  unsigned char end;
};

struct anonymous_11
{
  // msecs
  unsigned int msecs;
  // h
  void (*h)(void *);
  // arg
  void *arg;
};

struct anonymous_7
{
  // fqdn_len
  unsigned char fqdn_len;
  // fqdn_name
  unsigned char fqdn_name[255l];
  // port
  unsigned short int port;
};

union anonymous_1
{
  // ip4
  void (*ip4)(void *, struct udp_pcb *, struct pbuf *, struct ip_addr *, unsigned short int);
};

union anonymous_5
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_12
{
  // inp
  struct anonymous_9 inp;
  // cb
  struct anonymous_10 cb;
  // tmo
  struct anonymous_11 tmo;
};

union anonymous_3
{
  // __data
  struct anonymous_2 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous_8
{
  // ipv4
  struct anonymous_6 ipv4;
  // fqdn
  struct anonymous_7 fqdn;
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

union anonymous_4
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

struct dns_answer
{
  // type
  unsigned short int type;
  // cls
  unsigned short int cls;
  // ttl
  unsigned int ttl;
  // len
  unsigned short int len;
};

struct dns_hdr
{
  // id
  unsigned short int id;
  // flags1
  unsigned char flags1;
  // flags2
  unsigned char flags2;
  // numquestions
  unsigned short int numquestions;
  // numanswers
  unsigned short int numanswers;
  // numauthrr
  unsigned short int numauthrr;
  // numextrarr
  unsigned short int numextrarr;
} __attribute__ ((__packed__));

struct dns_query
{
  // type
  unsigned short int type;
  // cls
  unsigned short int cls;
};

struct ip_addr
{
  // addr
  unsigned int addr;
};

struct dns_table_entry
{
  // state
  unsigned char state;
  // numdns
  unsigned char numdns;
  // tmr
  unsigned char tmr;
  // retries
  unsigned char retries;
  // seqno
  unsigned char seqno;
  // err
  unsigned char err;
  // ttl
  unsigned int ttl;
  // name
  char name[256l];
  // ipaddr
  struct ip_addr ipaddr;
  // found
  void (*found)(const char *, struct ip_addr *, void *);
  // arg
  void *arg;
};

struct elem
{
  // next
  struct elem *next;
  // data
  void *data;
};

struct icmp_echo_hdr
{
  // type
  unsigned char type;
  // code
  unsigned char code;
  // chksum
  unsigned short int chksum;
  // id
  unsigned short int id;
  // seqno
  unsigned short int seqno;
} __attribute__ ((__packed__));

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
};

struct ip_addr_packed
{
  // addr
  unsigned int addr;
} __attribute__ ((__packed__));

struct ip_globals
{
  // current_netif
  struct netif *current_netif;
  // current_ip4_header
  struct ip_hdr *current_ip4_header;
  // current_ip_header_tot_len
  unsigned short int current_ip_header_tot_len;
  // current_iphdr_src
  struct ip_addr current_iphdr_src;
  // current_iphdr_dest
  struct ip_addr current_iphdr_dest;
};

struct ip_hdr
{
  // _v_hl
  unsigned char _v_hl;
  // _tos
  unsigned char _tos;
  // _len
  unsigned short int _len;
  // _id
  unsigned short int _id;
  // _offset
  unsigned short int _offset;
  // _ttl
  unsigned char _ttl;
  // _proto
  unsigned char _proto;
  // _chksum
  unsigned short int _chksum;
  // src
  struct ip_addr_packed src;
  // dest
  struct ip_addr_packed dest;
} __attribute__ ((__packed__));

struct ip_reass_helper
{
  // next_pbuf
  struct pbuf *next_pbuf;
  // start
  unsigned short int start;
  // end
  unsigned short int end;
} __attribute__ ((__packed__));

struct ip_reassdata
{
  // next
  struct ip_reassdata *next;
  // p
  struct pbuf *p;
  // iphdr
  struct ip_hdr iphdr;
  // datagram_len
  unsigned short int datagram_len;
  // flags
  unsigned char flags;
  // timer
  unsigned char timer;
};

struct list
{
  // first
  struct elem *first;
  // last
  struct elem *last;
  // size
  signed int size;
  // elems
  signed int elems;
};

struct mem
{
  // next
  unsigned int next;
  // prev
  unsigned int prev;
  // used
  unsigned char used;
};

struct netif
{
  // next
  struct netif *next;
  // ip_addr
  struct ip_addr ip_addr;
  // netmask
  struct ip_addr netmask;
  // gw
  struct ip_addr gw;
  // input
  signed char (*input)(struct pbuf *, struct netif *);
  // output
  signed char (*output)(struct netif *, struct pbuf *, struct ip_addr *);
  // linkoutput
  signed char (*linkoutput)(struct netif *, struct pbuf *);
  // state
  void *state;
  // rs_count
  unsigned char rs_count;
  // mtu
  unsigned short int mtu;
  // hwaddr_len
  unsigned char hwaddr_len;
  // hwaddr
  unsigned char hwaddr[6l];
  // flags
  unsigned char flags;
  // name
  char name[2l];
  // num
  unsigned char num;
};

struct ocp_sock
{
  // fd
  signed int fd;
  // listener
  struct evconnlistener *listener;
  // ev
  struct event *ev;
  // tpcb
  struct tcp_pcb *tpcb;
  // state
  signed int state;
  // conn_type
  signed int conn_type;
  // next
  struct ocp_sock *next;
  // done_len
  signed int done_len;
  // lwip_blocked
  signed int lwip_blocked;
  // sock_pos
  signed int sock_pos;
  // sock_total
  signed int sock_total;
  // sockbuf
  char sockbuf[2048l];
  // lport
  signed int lport;
  // listen_cb
  void (*listen_cb)(struct evconnlistener *, signed int, struct sockaddr *, signed int, void *);
  // rhost_name
  char *rhost_name;
  // rhost
  struct ip_addr rhost;
  // rport
  signed int rport;
  // netif
  struct netif *netif;
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

struct pbuf
{
  // next
  struct pbuf *next;
  // payload
  void *payload;
  // tot_len
  unsigned short int tot_len;
  // len
  unsigned short int len;
  // type
  unsigned char type;
  // flags
  unsigned char flags;
  // ref
  unsigned short int ref;
};

struct pbuf_custom
{
  // pbuf
  struct pbuf pbuf;
  // custom_free_function
  void (*custom_free_function)(struct pbuf *);
};

struct pbuf_custom_ref
{
  // pc
  struct pbuf_custom pc;
  // original
  struct pbuf *original;
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

struct socks_auth
{
  // ver
  unsigned char ver;
  // n_methods
  unsigned char n_methods;
  // methods
  unsigned char methods;
} __attribute__ ((__packed__));

struct socks_reply
{
  // ver
  unsigned char ver;
  // rep
  unsigned char rep;
  // rsv
  unsigned char rsv;
  // atyp
  unsigned char atyp;
  // bnd_addr
  unsigned int bnd_addr;
  // bnd_port
  unsigned short int bnd_port;
} __attribute__ ((__packed__));

struct socks_req
{
  // ver
  unsigned char ver;
  // cmd
  unsigned char cmd;
  // rsv
  unsigned char rsv;
  // atyp
  unsigned char atyp;
  // u
  union anonymous_8 u;
} __attribute__ ((__packed__));

struct stats_proto
{
  // xmit
  unsigned short int xmit;
  // recv
  unsigned short int recv;
  // fw
  unsigned short int fw;
  // drop
  unsigned short int drop;
  // chkerr
  unsigned short int chkerr;
  // lenerr
  unsigned short int lenerr;
  // memerr
  unsigned short int memerr;
  // rterr
  unsigned short int rterr;
  // proterr
  unsigned short int proterr;
  // opterr
  unsigned short int opterr;
  // err
  unsigned short int err;
  // cachehit
  unsigned short int cachehit;
};

struct stats_mem
{
  // name
  const char *name;
  // avail
  unsigned int avail;
  // used
  unsigned int used;
  // max
  unsigned int max;
  // err
  unsigned short int err;
  // illegal
  unsigned short int illegal;
};

struct stats_syselem
{
  // used
  unsigned short int used;
  // max
  unsigned short int max;
  // err
  unsigned short int err;
};

struct stats_sys
{
  // sem
  struct stats_syselem sem;
  // mutex
  struct stats_syselem mutex;
  // mbox
  struct stats_syselem mbox;
};

struct stats_
{
  // link
  struct stats_proto link;
  // ip_frag
  struct stats_proto ip_frag;
  // ip
  struct stats_proto ip;
  // icmp
  struct stats_proto icmp;
  // udp
  struct stats_proto udp;
  // tcp
  struct stats_proto tcp;
  // mem
  struct stats_mem mem;
  // sys
  struct stats_sys sys;
};

struct sys_mbox
{
  // first
  signed int first;
  // last
  signed int last;
  // msgs
  void *msgs[128l];
  // not_empty
  struct sys_sem *not_empty;
  // not_full
  struct sys_sem *not_full;
  // mutex
  struct sys_sem *mutex;
  // wait_send
  signed int wait_send;
};

struct sys_sem
{
  // c
  unsigned int c;
  // cond
  union anonymous_3 cond;
  // mutex
  union anonymous_4 mutex;
};

struct sys_thread
{
  // next
  struct sys_thread *next;
  // pthread
  unsigned long int pthread;
};

struct sys_timeo
{
  // next
  struct sys_timeo *next;
  // time
  unsigned int time;
  // h
  void (*h)(void *);
  // arg
  void *arg;
};

struct tcp_hdr
{
  // src
  unsigned short int src;
  // dest
  unsigned short int dest;
  // seqno
  unsigned int seqno;
  // ackno
  unsigned int ackno;
  // _hdrlen_rsvd_flags
  unsigned short int _hdrlen_rsvd_flags;
  // wnd
  unsigned short int wnd;
  // chksum
  unsigned short int chksum;
  // urgp
  unsigned short int urgp;
} __attribute__ ((__packed__));

union tcp_listen_pcbs_t
{
  // listen_pcbs
  struct tcp_pcb_listen *listen_pcbs;
  // pcbs
  struct tcp_pcb *pcbs;
};

struct tcp_pcb
{
  // local_ip
  struct ip_addr local_ip;
  // remote_ip
  struct ip_addr remote_ip;
  // so_options
  unsigned char so_options;
  // tos
  unsigned char tos;
  // ttl
  unsigned char ttl;
  // next
  struct tcp_pcb *next;
  // callback_arg
  void *callback_arg;
  // accept
  signed char (*accept)(void *, struct tcp_pcb *, signed char);
  // state
  enum tcp_state state;
  // prio
  unsigned char prio;
  // local_port
  unsigned short int local_port;
  // remote_port
  unsigned short int remote_port;
  // flags
  unsigned char flags;
  // polltmr
  unsigned char polltmr;
  // pollinterval
  unsigned char pollinterval;
  // last_timer
  unsigned char last_timer;
  // tmr
  unsigned int tmr;
  // rcv_nxt
  unsigned int rcv_nxt;
  // rcv_wnd
  unsigned short int rcv_wnd;
  // rcv_ann_wnd
  unsigned short int rcv_ann_wnd;
  // rcv_ann_right_edge
  unsigned int rcv_ann_right_edge;
  // rtime
  signed short int rtime;
  // mss
  unsigned short int mss;
  // rttest
  unsigned int rttest;
  // rtseq
  unsigned int rtseq;
  // sa
  signed short int sa;
  // sv
  signed short int sv;
  // rto
  signed short int rto;
  // nrtx
  unsigned char nrtx;
  // dupacks
  unsigned char dupacks;
  // lastack
  unsigned int lastack;
  // cwnd
  unsigned short int cwnd;
  // ssthresh
  unsigned short int ssthresh;
  // snd_nxt
  unsigned int snd_nxt;
  // snd_wl1
  unsigned int snd_wl1;
  // snd_wl2
  unsigned int snd_wl2;
  // snd_lbb
  unsigned int snd_lbb;
  // snd_wnd
  unsigned short int snd_wnd;
  // snd_wnd_max
  unsigned short int snd_wnd_max;
  // acked
  unsigned short int acked;
  // snd_buf
  unsigned short int snd_buf;
  // snd_queuelen
  unsigned short int snd_queuelen;
  // unsent_oversize
  unsigned short int unsent_oversize;
  // unsent
  struct tcp_seg *unsent;
  // unacked
  struct tcp_seg *unacked;
  // ooseq
  struct tcp_seg *ooseq;
  // refused_data
  struct pbuf *refused_data;
  // sent
  signed char (*sent)(void *, struct tcp_pcb *, unsigned short int);
  // recv
  signed char (*recv)(void *, struct tcp_pcb *, struct pbuf *, signed char);
  // connected
  signed char (*connected)(void *, struct tcp_pcb *, signed char);
  // poll
  signed char (*poll)(void *, struct tcp_pcb *);
  // errf
  void (*errf)(void *, signed char);
  // keep_idle
  unsigned int keep_idle;
  // keep_intvl
  unsigned int keep_intvl;
  // keep_cnt
  unsigned int keep_cnt;
  // persist_cnt
  unsigned char persist_cnt;
  // persist_backoff
  unsigned char persist_backoff;
  // keep_cnt_sent
  unsigned char keep_cnt_sent;
};

struct tcp_pcb_listen
{
  // local_ip
  struct ip_addr local_ip;
  // remote_ip
  struct ip_addr remote_ip;
  // so_options
  unsigned char so_options;
  // tos
  unsigned char tos;
  // ttl
  unsigned char ttl;
  // next
  struct tcp_pcb_listen *next;
  // callback_arg
  void *callback_arg;
  // accept
  signed char (*accept)(void *, struct tcp_pcb *, signed char);
  // state
  enum tcp_state state;
  // prio
  unsigned char prio;
  // local_port
  unsigned short int local_port;
};

struct tcp_seg
{
  // next
  struct tcp_seg *next;
  // p
  struct pbuf *p;
  // len
  unsigned short int len;
  // oversize_left
  unsigned short int oversize_left;
  // flags
  unsigned char flags;
  // tcphdr
  struct tcp_hdr *tcphdr;
};

struct tcpip_msg
{
  // type
  enum tcpip_msg_type type;
  // sem
  struct sys_sem **sem;
  // msg
  union anonymous_12 msg;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
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

struct tms
{
  // tms_utime
  signed long int tms_utime;
  // tms_stime
  signed long int tms_stime;
  // tms_cutime
  signed long int tms_cutime;
  // tms_cstime
  signed long int tms_cstime;
};

struct udp_hdr
{
  // src
  unsigned short int src;
  // dest
  unsigned short int dest;
  // len
  unsigned short int len;
  // chksum
  unsigned short int chksum;
} __attribute__ ((__packed__));

struct udp_pcb
{
  // local_ip
  struct ip_addr local_ip;
  // remote_ip
  struct ip_addr remote_ip;
  // so_options
  unsigned char so_options;
  // tos
  unsigned char tos;
  // ttl
  unsigned char ttl;
  // next
  struct udp_pcb *next;
  // flags
  unsigned char flags;
  // local_port
  unsigned short int local_port;
  // remote_port
  unsigned short int remote_port;
  // recv
  union anonymous_1 recv;
  // recv_arg
  void *recv_arg;
};


// ackno
// file lwip/src/core/tcp_in.c line 73
static unsigned int ackno;
// allow_remote
// file src/ocproxy.c line 177
static signed int allow_remote;
// debug_flags
// file src/ocproxy.c line 175
unsigned char debug_flags = (unsigned char)0;
// dns_domain
// file src/ocproxy.c line 182
static char *dns_domain;
// dns_payload
// file lwip/src/core/dns.c line 225
static unsigned char *dns_payload;
// dns_payload_buffer
// file lwip/src/core/dns.c line 224
static unsigned char dns_payload_buffer[515l];
// dns_pcb
// file lwip/src/core/dns.c line 219
static struct udp_pcb *dns_pcb;
// dns_seqno
// file lwip/src/core/dns.c line 220
static unsigned char dns_seqno;
// dns_servers
// file lwip/src/core/dns.c line 222
static struct ip_addr dns_servers[2l];
// dns_table
// file lwip/src/core/dns.c line 221
static struct dns_table_entry dns_table[128l];
// err_strerr
// file lwip/src/api/err.c line 43
static const char *err_strerr[16l] = { "Ok.", "Out of memory error.", "Buffer error.", "Timeout.", "Routing problem.", "Operation in progress.", "Illegal value.", "Operation would block.", "Address in use.", "Already connected.", "Connection aborted.", "Connection reset.", "Connection closed.", "Not connected.", "Illegal argument.", "Low-level netif error." };
// event_base
// file src/ocproxy.c line 166
static struct event_base *event_base;
// f
// file contrib/ports/unix/perf.c line 37
static struct _IO_FILE *f;
// file
// file contrib/ports/unix/netif/tcpdump.c line 46
static struct _IO_FILE *file = (struct _IO_FILE *)(void *)0;
// flags
// file lwip/src/core/tcp_in.c line 74
static unsigned char flags;
// got_sighup
// file src/ocproxy.c line 180
static signed int got_sighup;
// got_sigusr1
// file src/ocproxy.c line 181
static signed int got_sigusr1;
// inseg
// file lwip/src/core/tcp_in.c line 68
static struct tcp_seg inseg;
// ip_addr_any
// file lwip/src/core/ipv4/ip4_addr.c line 44
const struct ip_addr ip_addr_any = { .addr=(unsigned int)0x00000000UL };
// ip_addr_broadcast
// file lwip/src/core/ipv4/ip4_addr.c line 45
const struct ip_addr ip_addr_broadcast = { .addr=(unsigned int)0xffffffffUL };
// ip_data
// file lwip/src/core/ipv4/ip4.c line 97
struct ip_globals ip_data;
// ip_id
// file lwip/src/core/ipv4/ip4.c line 100
static unsigned short int ip_id;
// ip_reass_pbufcount
// file lwip/src/core/ipv4/ip_frag.c line 109
static unsigned short int ip_reass_pbufcount;
// keep_intvl
// file src/ocproxy.c line 179
static signed int keep_intvl;
// lfree
// file lwip/src/core/mem.c line 191
static struct mem *lfree;
// lock_tcpip_core
// file lwip/src/api/tcpip.c line 65
struct sys_sem *lock_tcpip_core;
// longopts
// file src/ocproxy.c line 863
static struct option longopts[11l] = { { .name="ip", .has_arg=1, .flag=(signed int *)(void *)0, .val=73 },
    { .name="mtu", .has_arg=1, .flag=(signed int *)(void *)0, .val=77 },
    { .name="dns", .has_arg=1, .flag=(signed int *)(void *)0, .val=100 },
    { .name="domain", .has_arg=1, .flag=(signed int *)(void *)0, .val=111 },
    { .name="localfw", .has_arg=1, .flag=(signed int *)(void *)0, .val=76 },
    { .name="dynfw", .has_arg=1, .flag=(signed int *)(void *)0, .val=68 },
    { .name="keepalive", .has_arg=1, .flag=(signed int *)(void *)0, .val=107 },
    { .name="allow-remote", .has_arg=0, .flag=(signed int *)(void *)0, .val=103 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="tcpdump", .has_arg=0, .flag=(signed int *)(void *)0, .val=84 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
// lwip_stats
// file lwip/src/core/stats.c line 49
struct stats_ lwip_stats;
// lwprot_count
// file contrib/ports/unix/sys_arch.c line 99
static signed int lwprot_count = 0;
// lwprot_mutex
// file contrib/ports/unix/sys_arch.c line 97
static union anonymous_4 lwprot_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// lwprot_thread
// file contrib/ports/unix/sys_arch.c line 98
static unsigned long int lwprot_thread = (unsigned long int)0xDEAD;
// mbox
// file lwip/src/api/tcpip.c line 61
static struct sys_mbox *mbox;
// mem_mutex
// file lwip/src/core/mem.c line 195
static struct sys_sem *mem_mutex;
// memp_sizes
// file lwip/src/core/memp.c line 135
const unsigned short int memp_sizes[11l] = { (const unsigned short int)((sizeof(struct udp_pcb) /*48ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((sizeof(struct tcp_pcb) /*216ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((sizeof(struct tcp_pcb_listen) /*48ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((sizeof(struct tcp_seg) /*32ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((sizeof(struct ip_reassdata) /*40ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((sizeof(struct pbuf_custom_ref) /*40ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((sizeof(struct tcpip_msg) /*40ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((sizeof(struct tcpip_msg) /*40ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((sizeof(struct sys_timeo) /*32ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((((sizeof(struct pbuf) /*24ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) + (unsigned long int)((0 + 4) - 1 & ~(4 - 1)) + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)),
    (const unsigned short int)((((sizeof(struct pbuf) /*24ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) + (unsigned long int)((2048 + 4) - 1 & ~(4 - 1)) + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) };
// netif_default
// file lwip/src/core/netif.c line 83
struct netif *netif_default;
// netif_list
// file lwip/src/core/netif.c line 82
struct netif *netif_list;
// netif_num
// file lwip/src/core/netif.c line 85
static unsigned char netif_num;
// next_timeout
// file lwip/src/core/timers.c line 66
static struct sys_timeo *next_timeout;
// ocp_sock_bind_list
// file src/ocproxy.c line 170
static struct ocp_sock *ocp_sock_bind_list;
// ocp_sock_free_list
// file src/ocproxy.c line 169
static struct ocp_sock *ocp_sock_free_list;
// ocp_sock_max
// file src/ocproxy.c line 172
static signed int ocp_sock_max;
// ocp_sock_pool
// file src/ocproxy.c line 168
static struct ocp_sock ocp_sock_pool[1024l];
// ocp_sock_used
// file src/ocproxy.c line 171
static signed int ocp_sock_used;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// pbuf_free_ooseq_pending
// file lwip/src/core/pbuf.c line 103
volatile unsigned char pbuf_free_ooseq_pending;
// ram
// file lwip/src/core/mem.c line 187
static unsigned char *ram;
// ram_end
// file lwip/src/core/mem.c line 189
static struct mem *ram_end;
// ram_heap
// file lwip/src/core/mem.c line 182
unsigned char ram_heap[1024028l];
// reassdatagrams
// file lwip/src/core/ipv4/ip_frag.c line 108
static struct ip_reassdata *reassdatagrams;
// recv_data
// file lwip/src/core/tcp_in.c line 78
static struct pbuf *recv_data;
// recv_flags
// file lwip/src/core/tcp_in.c line 77
static unsigned char recv_flags;
// seqno
// file lwip/src/core/tcp_in.c line 73
static unsigned int seqno;
// starttime
// file contrib/ports/unix/sys_arch.c line 62
static struct timeval starttime;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// tcp_active_pcbs
// file lwip/src/core/tcp.c line 109
struct tcp_pcb *tcp_active_pcbs;
// tcp_active_pcbs_changed
// file lwip/src/core/tcp.c line 122
unsigned char tcp_active_pcbs_changed;
// tcp_backoff
// file lwip/src/core/tcp.c line 96
const unsigned char tcp_backoff[13l] = { (const unsigned char)1, (const unsigned char)2, (const unsigned char)3, (const unsigned char)4, (const unsigned char)5, (const unsigned char)6, (const unsigned char)7, (const unsigned char)7, (const unsigned char)7, (const unsigned char)7, (const unsigned char)7, (const unsigned char)7, (const unsigned char)7 };
// tcp_bound_pcbs
// file lwip/src/core/tcp.c line 104
struct tcp_pcb *tcp_bound_pcbs;
// tcp_input_pcb
// file lwip/src/core/tcp_in.c line 80
struct tcp_pcb *tcp_input_pcb;
// tcp_listen_pcbs
// file lwip/src/core/tcp.c line 106
union tcp_listen_pcbs_t tcp_listen_pcbs;
// tcp_optidx
// file lwip/src/core/tcp_in.c line 72
static unsigned short int tcp_optidx;
// tcp_pcb_lists
// file lwip/src/core/tcp.c line 116
struct tcp_pcb ** const tcp_pcb_lists[4l];
// tcp_tw_pcbs
// file lwip/src/core/tcp.c line 111
struct tcp_pcb *tcp_tw_pcbs;
// tcp_pcb_lists
// file lwip/src/core/tcp.c line 116
struct tcp_pcb ** const tcp_pcb_lists[4l] = { &tcp_listen_pcbs.pcbs, &tcp_bound_pcbs, &tcp_active_pcbs, &tcp_tw_pcbs };
// tcp_persist_backoff
// file lwip/src/core/tcp.c line 99
const unsigned char tcp_persist_backoff[7l] = { (const unsigned char)3, (const unsigned char)6, (const unsigned char)12, (const unsigned char)24, (const unsigned char)48, (const unsigned char)96, (const unsigned char)120 };
// tcp_port
// file lwip/src/core/tcp.c line 92
static unsigned short int tcp_port = (unsigned short int)0xc000;
// tcp_state_str
// file lwip/src/core/tcp.c line 77
const char * const tcp_state_str[11l] = { "CLOSED", "LISTEN", "SYN_SENT", "SYN_RCVD", "ESTABLISHED", "FIN_WAIT_1", "FIN_WAIT_2", "CLOSE_WAIT", "CLOSING", "LAST_ACK", "TIME_WAIT" };
// tcp_ticks
// file lwip/src/core/tcp.c line 95
unsigned int tcp_ticks;
// tcp_timer
// file lwip/src/core/tcp.c line 125
static unsigned char tcp_timer;
// tcp_timer_ctr
// file lwip/src/core/tcp.c line 126
static unsigned char tcp_timer_ctr;
// tcp_tmp_pcb
// file lwip/src/core/tcp.c line 120
struct tcp_pcb *tcp_tmp_pcb;
// tcpdump_enabled
// file src/ocproxy.c line 178
static signed int tcpdump_enabled;
// tcphdr
// file lwip/src/core/tcp_in.c line 69
static struct tcp_hdr *tcphdr;
// tcphdr_opt1len
// file lwip/src/core/tcp_in.c line 70
static unsigned short int tcphdr_opt1len;
// tcphdr_opt2
// file lwip/src/core/tcp_in.c line 71
static unsigned char *tcphdr_opt2;
// tcpip_init_done
// file lwip/src/api/tcpip.c line 59
static void (*tcpip_init_done)(void *);
// tcpip_init_done_arg
// file lwip/src/api/tcpip.c line 60
static void *tcpip_init_done_arg;
// tcpip_tcp_timer_active
// file lwip/src/core/timers.c line 73
static signed int tcpip_tcp_timer_active;
// tcplen
// file lwip/src/core/tcp_in.c line 75
static unsigned short int tcplen;
// threads
// file contrib/ports/unix/sys_arch.c line 66
static struct sys_thread *threads = (struct sys_thread *)(void *)0;
// threads_mutex
// file contrib/ports/unix/sys_arch.c line 67
static union anonymous_4 threads_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// udp_pcbs
// file lwip/src/core/udp.c line 84
struct udp_pcb *udp_pcbs;
// udp_port
// file lwip/src/core/udp.c line 80
static unsigned short int udp_port = (unsigned short int)0xc000;

// bind_all_listeners
// file src/ocproxy.c line 799
static void bind_all_listeners(void)
{
  struct ocp_sock *s;
  struct sockaddr_in sock;
  s = ocp_sock_bind_list;
  for( ; !(s == ((struct ocp_sock *)NULL)); s = s->next)
    if(!(s->listen_cb == ((void (*)(struct evconnlistener *, signed int, struct sockaddr *, signed int, void *))NULL)))
    {
      memset((void *)&sock, 0, sizeof(struct sockaddr_in) /*16ul*/ );
      sock.sin_family = (unsigned short int)2;
      sock.sin_port=lwip_htons((unsigned short int)s->lport);
      sock.sin_addr.s_addr=lwip_htonl(allow_remote != 0 ? (unsigned int)0x00000000 : (unsigned int)0x7f000001);
      s->listener=evconnlistener_new_bind(event_base, s->listen_cb, (void *)s, 1u << 1 | 1u << 3, -1, (struct sockaddr *)&sock, (signed int)sizeof(struct sockaddr_in) /*16ul*/ );
      if(s->listener == ((struct evconnlistener *)NULL))
        die("can't set up listener on port %d/tcp\n", s->lport);

    }

}

// cb_dns_tmr
// file src/ocproxy.c line 759
static void cb_dns_tmr(signed int fd, signed short int what, void *ctx)
{
  dns_tmr();
}

// cb_housekeeping
// file src/ocproxy.c line 764
static void cb_housekeeping(signed int fd, signed short int what, void *ctx)
{
  signed int *vpnfd = (signed int *)ctx;
  signed long int return_value_write_1;
  return_value_write_1=write(*vpnfd, (const void *)vpnfd, (unsigned long int)0);
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_2;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  if(!(return_value_write_1 >= 0l))
  {
    return_value___errno_location_2=__errno_location();
    if(*return_value___errno_location_2 == 111)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value___errno_location_3=__errno_location();
      tmp_if_expr_4 = *return_value___errno_location_3 == 107 ? (_Bool)1 : (_Bool)0;
    }
    tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  if(tmp_if_expr_5)
    vpn_conn_down();

  else
    if(!(got_sighup == 0))
      vpn_conn_down();

  if(!(got_sigusr1 == 0))
  {
    stats_display_proto(&lwip_stats.link, "LINK");
    stats_display_mem(&lwip_stats.mem, "HEAP");
    printf("open connections: %d / %d, max %d\n", ocp_sock_used, 1024, ocp_sock_max);
    got_sigusr1 = 0;
  }

}

// cb_tcp_tmr
// file src/ocproxy.c line 754
static void cb_tcp_tmr(signed int fd, signed short int what, void *ctx)
{
  tcp_tmr();
}

// cond_wait
// file contrib/ports/unix/sys_arch.c line 375
static unsigned int cond_wait(union anonymous_3 *cond, union anonymous_4 *mutex, unsigned int timeout)
{
  signed long int tdiff;
  signed long int sec;
  signed long int usec;
  struct timeval rtime1;
  struct timeval rtime2;
  struct timespec ts;
  signed int retval;
  if(timeout >= 1u)
  {
    gettimeofday(&rtime1, (struct timezone *)(void *)0);
    sec = rtime1.tv_sec;
    usec = rtime1.tv_usec;
    usec = usec + (signed long int)((timeout % (unsigned int)1000) * (unsigned int)1000);
    sec = sec + (signed long int)((signed int)(timeout / (unsigned int)1000) + (signed int)(usec / (signed long int)1000000));
    usec = usec % (signed long int)1000000;
    ts.tv_nsec = usec * (signed long int)1000;
    ts.tv_sec = sec;
    retval=pthread_cond_timedwait(cond, mutex, &ts);
    if(retval == 110)
      return (unsigned int)0xffffffffUL;

    else
    {
      gettimeofday(&rtime2, (struct timezone *)(void *)0);
      tdiff = (rtime2.tv_sec - rtime1.tv_sec) * (signed long int)1000 + (rtime2.tv_usec - rtime1.tv_usec) / (signed long int)1000;
      if(!(tdiff >= 1l))
        return (unsigned int)0;

      return (unsigned int)tdiff;
    }
  }

  else
  {
    pthread_cond_wait(cond, mutex);
    return (unsigned int)0;
  }
}

// connect_cb
// file src/ocproxy.c line 501
static signed char connect_cb(void *arg, struct tcp_pcb *tpcb, signed char err)
{
  struct ocp_sock *s = (struct ocp_sock *)arg;
  if(s->conn_type == 1)
    socks_reply(s, 0x00);

  s->state = 5;
  event_add(s->ev, (struct timeval *)(void *)0);
  tcp_recv(tpcb, recv_cb);
  tcp_sent(tpcb, sent_cb);
  return (signed char)0;
}

// die
// file src/ocproxy.c line 191
static void die(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fflush(stdout);
  vfprintf(stderr, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// dns_check_entries
// file lwip/src/core/dns.c line 721
static void dns_check_entries(void)
{
  unsigned char i = (unsigned char)0;
  for( ; !((signed int)i >= 128); i = i + 1)
    dns_check_entry(i);
}

// dns_check_entry
// file lwip/src/core/dns.c line 639
static void dns_check_entry(unsigned char i)
{
  signed char err;
  struct dns_table_entry *pEntry = &dns_table[(signed long int)i];
  do
    if((signed int)i >= 128)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"array index out of bounds", 644, (const void *)"lwip/src/core/dns.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_5;
  switch((signed int)pEntry->state)
  {
    case 1:
    {
      pEntry->state = (unsigned char)2;
      pEntry->numdns = (unsigned char)0;
      pEntry->tmr = (unsigned char)1;
      pEntry->retries = (unsigned char)0;
      err=dns_send(pEntry->numdns, pEntry->name, i);
      if(!((signed int)err == 0))
        while((_Bool)0)
          ;

      break;
    }
    case 2:
    {
      pEntry->tmr = pEntry->tmr - 1;
      if((signed int)pEntry->tmr == 0)
      {
        pEntry->retries = pEntry->retries + 1;
        if((signed int)pEntry->retries == 4)
        {
          if(!(1 + (signed int)pEntry->numdns >= 2))
          {
            if(dns_servers + (signed long int)(1 + (signed int)pEntry->numdns) == ((struct ip_addr *)NULL))
              tmp_if_expr_2 = (_Bool)1;

            else
              tmp_if_expr_2 = (&dns_servers[(signed long int)((signed int)pEntry->numdns + 1)])->addr == (unsigned int)0x00000000UL ? (_Bool)1 : (_Bool)0;
            tmp_if_expr_3 = !tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_3 = (_Bool)0;
          if(tmp_if_expr_3)
          {
            pEntry->numdns = pEntry->numdns + 1;
            pEntry->tmr = (unsigned char)1;
            pEntry->retries = (unsigned char)0;
            break;
          }

          else
          {
            while((_Bool)0)
              ;
            if(!(pEntry->found == ((void (*)(const char *, struct ip_addr *, void *))NULL)))
              pEntry->found(pEntry->name, (struct ip_addr *)(void *)0, pEntry->arg);

            pEntry->state = (unsigned char)0;
            pEntry->found = (void (*)(const char *, struct ip_addr *, void *))(void *)0;
            break;
          }
        }

        pEntry->tmr = pEntry->retries;
        err=dns_send(pEntry->numdns, pEntry->name, i);
        if(!((signed int)err == 0))
          while((_Bool)0)
            ;

      }

      break;
    }
    case 3:
    {
      if(pEntry->ttl == 0u)
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        pEntry->ttl = pEntry->ttl - 1u;
        tmp_if_expr_5 = pEntry->ttl == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
      {
        while((_Bool)0)
          ;
        pEntry->state = (unsigned char)0;
        pEntry->found = (void (*)(const char *, struct ip_addr *, void *))(void *)0;
      }

      break;
    }
    case 0:
      break;
    default:
      do
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"unknown dns_table entry state:", 712, (const void *)"lwip/src/core/dns.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);
      while((_Bool)0);
  }
}

// dns_compare_name
// file lwip/src/core/dns.c line 493
static unsigned char dns_compare_name(unsigned char *query, unsigned char *response)
{
  unsigned char n;
  unsigned char *tmp_post_1;
  do
  {
    tmp_post_1 = response;
    response = response + 1l;
    n = *tmp_post_1;
    if((0xc0 & (signed int)n) == 0xc0)
      break;

    else
    {
      for( ; (signed int)n >= 1; n = n - 1)
      {
        if(!(*query == *response))
          return (unsigned char)1;

        response = response + 1l;
        query = query + 1l;
      }
      query = query + 1l;
    }
  }
  while(!((signed int)*response == 0));
  return (unsigned char)0;
}

// dns_enqueue
// file lwip/src/core/dns.c line 872
static signed char dns_enqueue(const char *name, unsigned long int hostnamelen, void (*found)(const char *, struct ip_addr *, void *), void *callback_arg)
{
  unsigned char i;
  unsigned char lseq;
  unsigned char lseqi;
  struct dns_table_entry *pEntry = (struct dns_table_entry *)(void *)0;
  unsigned long int namelen;
  lseqi = (unsigned char)0;
  lseq = lseqi;
  i = (unsigned char)0;
  for( ; !((signed int)i >= 128); i = i + 1)
  {
    pEntry = &dns_table[(signed long int)i];
    if((signed int)pEntry->state == 0)
      break;

    if((signed int)pEntry->state == 3)
    {
      if(!((signed int)lseq >= (signed int)((unsigned char)(signed int)dns_seqno + -((unsigned char)(signed int)pEntry->seqno))))
      {
        lseq = (unsigned char)((signed int)dns_seqno - (signed int)pEntry->seqno);
        lseqi = i;
      }

    }

  }
  _Bool tmp_if_expr_1;
  if((signed int)i == 128)
  {
    if((signed int)lseqi >= 128)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)dns_table[(signed long int)lseqi].state != 3 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      while((_Bool)0)
        ;
      return (signed char)-1;
    }

    else
    {
      i = lseqi;
      pEntry = &dns_table[(signed long int)i];
    }
  }

  while((_Bool)0)
    ;
  pEntry->state = (unsigned char)1;
  unsigned char tmp_post_2 = dns_seqno;
  dns_seqno = dns_seqno + 1;
  pEntry->seqno = tmp_post_2;
  pEntry->found = found;
  pEntry->arg = callback_arg;
  namelen = hostnamelen < (unsigned long int)(256 - 1) ? hostnamelen : (unsigned long int)(256 - 1);
  memcpy((void *)pEntry->name, (const void *)name, namelen);
  pEntry->name[(signed long int)namelen] = (char)0;
  dns_check_entry(i);
  return (signed char)-5;
}

// dns_gethostbyname
// file lwip/src/core/dns.c line 949
signed char dns_gethostbyname(const char *hostname, struct ip_addr *addr, void (*found)(const char *, struct ip_addr *, void *), void *callback_arg)
{
  unsigned int ipaddr;
  unsigned long int hostnamelen;
  _Bool tmp_if_expr_1;
  if(hostname == ((const char *)NULL) || addr == ((struct ip_addr *)NULL) || dns_pcb == ((struct udp_pcb *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(hostname[(signed long int)0] != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (signed char)-14;

  else
  {
    hostnamelen=strlen(hostname);
    if(hostnamelen >= 256ul)
      return (signed char)-14;

    else
    {
      ipaddr=ipaddr_addr(hostname);
      if(ipaddr == 4294967295u)
        ipaddr=dns_lookup(hostname);

      if(!(ipaddr == 4294967295u))
      {
        addr->addr = ipaddr;
        return (signed char)0;
      }

      else
      {
        signed char return_value_dns_enqueue_2;
        return_value_dns_enqueue_2=dns_enqueue(hostname, hostnamelen, found, callback_arg);
        return return_value_dns_enqueue_2;
      }
    }
  }
}

// dns_getserver
// file lwip/src/core/dns.c line 289
struct ip_addr dns_getserver(unsigned char numdns)
{
  if(!((signed int)numdns >= 2))
    return dns_servers[(signed long int)numdns];

  else
    return *((struct ip_addr *)&ip_addr_any);
}

// dns_init
// file lwip/src/core/dns.c line 232
void dns_init(void)
{
  struct ip_addr dnsserver;
  dns_payload = (unsigned char *)(void *)(((unsigned long int)dns_payload_buffer + (unsigned long int)4) - (unsigned long int)1 & ~((unsigned long int)(4 - 1)));
  (&dnsserver)->addr=ipaddr_addr("208.67.222.222");
  while((_Bool)0)
    ;
  if(dns_pcb == ((struct udp_pcb *)NULL))
  {
    dns_pcb=udp_new();
    if(!(dns_pcb == ((struct udp_pcb *)NULL)))
    {
      while((_Bool)0)
        ;
      udp_bind(dns_pcb, (struct ip_addr *)&ip_addr_any, (unsigned short int)0);
      udp_recv(dns_pcb, dns_recv, (void *)0);
      dns_setserver((unsigned char)0, &dnsserver);
    }

  }

}

// dns_lookup
// file lwip/src/core/dns.c line 450
static unsigned int dns_lookup(const char *name)
{
  unsigned char i = (unsigned char)0;
  signed int return_value_strcmp_1;
  for( ; !((signed int)i >= 128); i = i + 1)
    if((signed int)dns_table[(signed long int)i].state == 3)
    {
      return_value_strcmp_1=strcmp(name, dns_table[(signed long int)i].name);
      if(return_value_strcmp_1 == 0)
      {
        while((_Bool)0)
          ;
        while((_Bool)0)
          ;
        while((_Bool)0)
          ;
        return (&dns_table[(signed long int)i].ipaddr)->addr;
      }

    }

  return (unsigned int)0xffffffffUL;
}

// dns_parse_name
// file lwip/src/core/dns.c line 528
static unsigned char * dns_parse_name(unsigned char *query)
{
  unsigned char n;
  unsigned char *tmp_post_1;
  do
  {
    tmp_post_1 = query;
    query = query + 1l;
    n = *tmp_post_1;
    if((0xc0 & (signed int)n) == 0xc0)
      break;

    else
      for( ; (signed int)n >= 1; n = n - 1)
        query = query + 1l;
  }
  while(!((signed int)*query == 0));
  return query + (signed long int)1;
}

// dns_recv
// file lwip/src/core/dns.c line 736
static void dns_recv(void *arg, struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *addr, unsigned short int port)
{
  unsigned short int i;
  char *pHostname;
  struct dns_hdr *hdr;
  struct dns_answer ans;
  struct dns_table_entry *pEntry;
  unsigned short int nquestions;
  unsigned short int nanswers;
  (void)arg;
  (void)pcb;
  (void)addr;
  (void)port;
  unsigned short int return_value_pbuf_copy_partial_6;
  _Bool tmp_if_expr_1;
  if((signed int)p->tot_len >= 513)
    while((_Bool)0)
      ;

  else
    if(!((signed int)p->tot_len >= 10))
      while((_Bool)0)
        ;

    else
    {
      return_value_pbuf_copy_partial_6=pbuf_copy_partial(p, (void *)dns_payload, p->tot_len, (unsigned short int)0);
      if(return_value_pbuf_copy_partial_6 == p->tot_len)
      {
        hdr = (struct dns_hdr *)dns_payload;
        i=lwip_htons(hdr->id);
        if(!((signed int)i >= 128))
        {
          pEntry = &dns_table[(signed long int)i];
          if((signed int)pEntry->state == 2)
          {
            pEntry->state = (unsigned char)3;
            pEntry->err = (unsigned char)((signed int)hdr->flags2 & 0x0f);
            nquestions=lwip_htons(hdr->numquestions);
            nanswers=lwip_htons(hdr->numanswers);
            if((0x80 & (signed int)hdr->flags1) == 0)
              tmp_if_expr_1 = (_Bool)1;

            else
              tmp_if_expr_1 = (signed int)pEntry->err != 0 ? (_Bool)1 : (_Bool)0;
            if(!((signed int)nquestions == 1) || tmp_if_expr_1)
            {
              while((_Bool)0)
                ;
              goto responseerr;
            }

            unsigned char return_value_dns_compare_name_2;
            return_value_dns_compare_name_2=dns_compare_name((unsigned char *)pEntry->name, (unsigned char *)dns_payload + (signed long int)12);
            if(!((signed int)return_value_dns_compare_name_2 == 0))
            {
              while((_Bool)0)
                ;
              goto responseerr;
            }

            unsigned char *return_value_dns_parse_name_3;
            return_value_dns_parse_name_3=dns_parse_name((unsigned char *)dns_payload + (signed long int)12);
            pHostname = (char *)return_value_dns_parse_name_3 + (signed long int)4;
            while((signed int)nanswers >= 1)
            {
              unsigned char *return_value_dns_parse_name_4;
              return_value_dns_parse_name_4=dns_parse_name((unsigned char *)pHostname);
              pHostname = (char *)return_value_dns_parse_name_4;
              memcpy((void *)&ans, (const void *)pHostname, (unsigned long int)10);
              if((signed int)ans.cls == 256 && (unsigned long int)ans.len == 1024ul && (signed int)ans.type == 256)
              {
                pEntry->ttl=lwip_ntohl(ans.ttl);
                if(pEntry->ttl >= 604801u)
                  pEntry->ttl = (unsigned int)604800;

                memcpy((void *)&pEntry->ipaddr, (const void *)(pHostname + (signed long int)10), sizeof(struct ip_addr) /*4ul*/ );
                while((_Bool)0)
                  ;
                while((_Bool)0)
                  ;
                while((_Bool)0)
                  ;
                if(!(pEntry->found == ((void (*)(const char *, struct ip_addr *, void *))NULL)))
                  pEntry->found(pEntry->name, &pEntry->ipaddr, pEntry->arg);

                if(pEntry->ttl == 0u)
                  goto flushentry;

                goto memerr;
              }

              else
              {
                unsigned short int return_value_lwip_htons_5;
                return_value_lwip_htons_5=lwip_htons(ans.len);
                pHostname = pHostname + (signed long int)10 + (signed long int)return_value_lwip_htons_5;
              }
              nanswers = nanswers - 1;
            }
            while((_Bool)0)
              ;
            goto responseerr;
          }

        }

      }

      goto memerr;

    responseerr:
      ;
      if(!(pEntry->found == ((void (*)(const char *, struct ip_addr *, void *))NULL)))
        pEntry->found(pEntry->name, (struct ip_addr *)(void *)0, pEntry->arg);


    flushentry:
      ;
      pEntry->state = (unsigned char)0;
      pEntry->found = (void (*)(const char *, struct ip_addr *, void *))(void *)0;
    }

memerr:
  ;
  pbuf_free(p);
  goto __CPROVER_DUMP_L48;

__CPROVER_DUMP_L48:
  ;
}

// dns_send
// file lwip/src/core/dns.c line 560
static signed char dns_send(unsigned char numdns, const char *name, unsigned char id)
{
  signed char err;
  struct dns_hdr *hdr;
  struct dns_query qry;
  struct pbuf *p;
  char *query;
  char *nptr;
  const char *pHostname;
  unsigned char n;
  while((_Bool)0)
    ;
  do
    if((signed int)numdns >= 2)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"dns server out of array", 572, (const void *)"lwip/src/core/dns.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  _Bool tmp_if_expr_1;
  do
  {
    if(dns_servers + (signed long int)numdns == ((struct ip_addr *)NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (&dns_servers[(signed long int)numdns])->addr == (unsigned int)0x00000000UL ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"dns server has no IP address set", 573, (const void *)"lwip/src/core/dns.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  }
  while((_Bool)0);
  p=pbuf_alloc((enum anonymous)PBUF_TRANSPORT, (unsigned short int)(12 + 256 + 1 + 4), (enum anonymous_0)PBUF_RAM);
  _Bool tmp_if_expr_2;
  char *tmp_post_3;
  if(!(p == ((struct pbuf *)NULL)))
  {
    unsigned short int realloc_size;
    do
      if(!(p->next == ((struct pbuf *)NULL)))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf must be in one piece", 580, (const void *)"lwip/src/core/dns.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    hdr = (struct dns_hdr *)p->payload;
    memset((void *)hdr, 0, (unsigned long int)12);
    hdr->id=lwip_htons((unsigned short int)id);
    hdr->flags1 = (unsigned char)0x01;
    hdr->numquestions = (unsigned short int)((1 & 0xff) << 8 | (1 & 0xff00) >> 8);
    query = (char *)hdr + (signed long int)12;
    pHostname = name;
    pHostname = pHostname - 1l;
    do
    {
      pHostname = pHostname + 1l;
      nptr = query;
      query = query + 1l;
      n = (unsigned char)0;
      do
      {
        if(!((signed int)*pHostname == 46))
          tmp_if_expr_2 = (signed int)*pHostname != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_2 = (_Bool)0;
        if(!tmp_if_expr_2)
          break;

        *query = *pHostname;
        query = query + 1l;
        n = n + 1;
        pHostname = pHostname + 1l;
      }
      while((_Bool)1);
      *nptr = (char)n;
    }
    while(!((signed int)*pHostname == 0));
    tmp_post_3 = query;
    query = query + 1l;
    *tmp_post_3 = (char)0;
    qry.type = (unsigned short int)((1 & 0xff) << 8 | (1 & 0xff00) >> 8);
    qry.cls = (unsigned short int)((1 & 0xff) << 8 | (1 & 0xff00) >> 8);
    memcpy((void *)query, (const void *)&qry, (unsigned long int)4);
    realloc_size = (unsigned short int)((query + (signed long int)4) - (char *)p->payload);
    do
      if(!((signed int)p->tot_len >= (signed int)realloc_size))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->tot_len >= realloc_size", 612, (const void *)"lwip/src/core/dns.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    pbuf_realloc(p, realloc_size);
    udp_connect(dns_pcb, &dns_servers[(signed long int)numdns], (unsigned short int)53);
    err=udp_sendto(dns_pcb, p, &dns_servers[(signed long int)numdns], (unsigned short int)53);
    pbuf_free(p);
  }

  else
    err = (signed char)-1;
  return err;
}

// dns_setserver
// file lwip/src/core/dns.c line 273
void dns_setserver(unsigned char numdns, struct ip_addr *dnsserver)
{
  _Bool tmp_if_expr_1;
  if(!(dnsserver == ((struct ip_addr *)NULL)) && !(dns_pcb == ((struct udp_pcb *)NULL)) && !((signed int)numdns >= 2))
  {
    if(dnsserver == ((struct ip_addr *)NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = dnsserver->addr == (unsigned int)0x00000000UL ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
      dns_servers[(signed long int)numdns] = *dnsserver;

  }

}

// dns_timer
// file lwip/src/core/timers.c line 215
static void dns_timer(void *arg)
{
  (void)arg;
  while((_Bool)0)
    ;
  dns_tmr();
  sys_timeout((unsigned int)1000, dns_timer, (void *)0);
}

// dns_tmr
// file lwip/src/core/dns.c line 303
void dns_tmr(void)
{
  if(!(dns_pcb == ((struct udp_pcb *)NULL)))
  {
    while((_Bool)0)
      ;
    dns_check_entries();
  }

}

// enqueue_dns_req
// file src/ocproxy.c line 569
static void enqueue_dns_req(struct ocp_sock *s, const char *hostname, const char *domain, void (*found)(const char *, struct ip_addr *, void *))
{
  signed char err;
  if(domain == ((const char *)NULL))
    err=dns_gethostbyname(hostname, &s->rhost, found, (void *)s);

  else
  {
    snprintf(s->sockbuf, (unsigned long int)2048, "%s.%s", hostname, dns_domain);
    err=dns_gethostbyname(s->sockbuf, &s->rhost, found, (void *)s);
  }
  if((signed int)err == -5)
    goto __CPROVER_DUMP_L7;

  else
    if((signed int)err == 0)
      start_connection(s, &s->rhost);

    else
      if((signed int)err == -1)
      {
        warn("%s: DNS table full, aborting lookup\n", (const void *)"enqueue_dns_req");
        found(hostname, (struct ip_addr *)(void *)0, (void *)s);
      }

      else
      {
        warn("%s: invalid hostname '%s'\n", (const void *)"enqueue_dns_req", hostname);
        found(hostname, (struct ip_addr *)(void *)0, (void *)s);
      }

__CPROVER_DUMP_L7:
  ;
}

// finish_resolution
// file src/ocproxy.c line 543
static void finish_resolution(const char *hostname, struct ip_addr *ipaddr, void *arg)
{
  struct ocp_sock *s = (struct ocp_sock *)arg;
  if(s->state == 6)
    ocp_sock_del(s);

  else
    if(!(ipaddr == ((struct ip_addr *)NULL)))
      start_connection(s, ipaddr);

    else
      if(s->conn_type == 1)
        socks_reply(s, 0x04);

      else
        ocp_sock_del(s);
}

// fwd_add
// file src/ocproxy.c line 833
static void fwd_add(const char *opt)
{
  char *str;
  str=xstrdup(opt);
  char *tmp = str;
  char *p;
  signed int lport;
  struct ocp_sock *s;
  p=strsep(&str, ":");
  if(!(str == ((char *)NULL)))
  {
    lport=ocp_atoi(p);
    p=strsep(&str, ":");
    if(str == ((char *)NULL))
      goto bad;

    s=new_listener(lport, new_conn_cb);
    s->rhost_name=xstrdup(p);
    s->rport=ocp_atoi(str);
    s->conn_type = 0;
    if(!(s->rport >= 1))
      die("Remote port must be a positive integer\n");

    free((void *)tmp);
  }

  else
  {

  bad:
    ;
    die("Invalid port forward specifier: '%s'\n", opt);
  }
}

// handle_sig
// file src/ocproxy.c line 733
static void handle_sig(signed int sig)
{
  if(sig == 1)
    got_sighup = 1;

  else
    if(sig == 10)
      got_sigusr1 = 1;

}

// icmp_dest_unreach
// file ./lwip/src/include/ipv4/lwip/icmp.h line 106
void icmp_dest_unreach(struct pbuf *p, enum icmp_dur_type t)
{
  icmp_send_response(p, (unsigned char)3, (unsigned char)t);
}

// icmp_input
// file lwip/src/core/ipv4/icmp.c line 77
void icmp_input(struct pbuf *p, struct netif *inp)
{
  unsigned char type;
  unsigned char code;
  struct icmp_echo_hdr *iecho;
  struct ip_hdr *iphdr;
  signed short int hlen;
  lwip_stats.icmp.recv = lwip_stats.icmp.recv + 1;
  iphdr = (struct ip_hdr *)ip_data.current_ip4_header;
  hlen = (signed short int)(((signed int)iphdr->_v_hl & 0x0f) * 4);
  unsigned short int return_value_inet_chksum_pbuf_2;
  unsigned char return_value_pbuf_header_7;
  unsigned char return_value_pbuf_header_8;
  if(!((unsigned long int)p->len >= sizeof(unsigned short int) * 2 /*4ul*/ ))
    while((_Bool)0)
      ;

  else
  {
    type = *((unsigned char *)p->payload);
    code = ((unsigned char *)p->payload)[(signed long int)1];
    switch((signed int)type)
    {
      case 0:
        break;
      case 8:
      {
        signed int accepted = 1;
        if((240ul & (unsigned long int)ip_data.current_iphdr_dest.addr) == 224ul)
          accepted = 0;

        unsigned char return_value_ip4_addr_isbroadcast_1;
        return_value_ip4_addr_isbroadcast_1=ip4_addr_isbroadcast((&ip_data.current_iphdr_dest)->addr, inp);
        if(!(return_value_ip4_addr_isbroadcast_1 == 0))
          accepted = 0;

        if(accepted == 0)
        {
          while((_Bool)0)
            ;
          lwip_stats.icmp.err = lwip_stats.icmp.err + 1;
          pbuf_free(p);
          goto __CPROVER_DUMP_L73;
        }

        while((_Bool)0)
          ;
        if(!((unsigned long int)p->tot_len >= sizeof(struct icmp_echo_hdr) /*8ul*/ ))
        {
          while((_Bool)0)
            ;
          goto lenerr;
        }

        return_value_inet_chksum_pbuf_2=inet_chksum_pbuf(p);
        if(!((signed int)return_value_inet_chksum_pbuf_2 == 0))
        {
          while((_Bool)0)
            ;
          pbuf_free(p);
          lwip_stats.icmp.chkerr = lwip_stats.icmp.chkerr + 1;
          goto __CPROVER_DUMP_L73;
        }

        return_value_pbuf_header_7=pbuf_header(p, (signed short int)(20 + 16));
        if(!(return_value_pbuf_header_7 == 0))
        {
          struct pbuf *r;
          unsigned char return_value_pbuf_header_3;
          return_value_pbuf_header_3=pbuf_header(p, hlen);
          if(!(return_value_pbuf_header_3 == 0))
          {
            do
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"icmp_input: moving p->payload to ip header failed\n", 153, (const void *)"lwip/src/core/ipv4/icmp.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);
            while((_Bool)0);
            goto memerr;
          }

          r=pbuf_alloc((enum anonymous)PBUF_LINK, p->tot_len, (enum anonymous_0)PBUF_RAM);
          if(r == ((struct pbuf *)NULL))
          {
            while((_Bool)0)
              ;
            goto memerr;
          }

          do
            if(!((unsigned long int)r->len >= sizeof(struct icmp_echo_hdr) /*8ul*/  + (unsigned long int)hlen))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"check that first pbuf can hold struct the ICMP header", 163, (const void *)"lwip/src/core/ipv4/icmp.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          signed char return_value_pbuf_copy_4;
          return_value_pbuf_copy_4=pbuf_copy(r, p);
          if(!((signed int)return_value_pbuf_copy_4 == 0))
          {
            do
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"icmp_input: copying to new pbuf failed\n", 166, (const void *)"lwip/src/core/ipv4/icmp.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);
            while((_Bool)0);
            goto memerr;
          }

          iphdr = (struct ip_hdr *)r->payload;
          unsigned char return_value_pbuf_header_5;
          return_value_pbuf_header_5=pbuf_header(r, (signed short int)-((signed int)hlen));
          if(!(return_value_pbuf_header_5 == 0))
          {
            do
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"icmp_input: restoring original p->payload failed\n", 172, (const void *)"lwip/src/core/ipv4/icmp.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);
            while((_Bool)0);
            goto memerr;
          }

          pbuf_free(p);
          p = r;
        }

        else
        {
          unsigned char return_value_pbuf_header_6;
          return_value_pbuf_header_6=pbuf_header(p, (signed short int)-((signed int)(signed short int)(20 + 16)));
          if(!(return_value_pbuf_header_6 == 0))
          {
            do
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"icmp_input: restoring original p->payload failed\n", 182, (const void *)"lwip/src/core/ipv4/icmp.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);
            while((_Bool)0);
            goto memerr;
          }

        }
        iecho = (struct icmp_echo_hdr *)p->payload;
        iphdr->src.addr = (&ip_data.current_iphdr_dest)->addr;
        iphdr->dest.addr = (&ip_data.current_iphdr_src)->addr;
        iecho->type = (unsigned char)0;
        if((unsigned int)iecho->chksum >= 65527u)
          iecho->chksum = iecho->chksum + (unsigned short int)(((8 << 8 & 0xff) << 8 | (8 << 8 & 0xff00) >> 8) + 1);

        else
          iecho->chksum = iecho->chksum + (unsigned short int)((8 << 8 & 0xff) << 8 | (8 << 8 & 0xff00) >> 8);
        iphdr->_ttl = (unsigned char)255;
        iphdr->_chksum = (unsigned short int)0;
        iphdr->_chksum=inet_chksum((void *)iphdr, (unsigned short int)20);
        lwip_stats.icmp.xmit = lwip_stats.icmp.xmit + 1;
        return_value_pbuf_header_8=pbuf_header(p, hlen);
        if(!(return_value_pbuf_header_8 == 0))
          do
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"Can't move over header in packet", 219, (const void *)"lwip/src/core/ipv4/icmp.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);
          while((_Bool)0);

        else
        {
          signed char ret;
          ret=ip_output_if(p, &ip_data.current_iphdr_dest, (struct ip_addr *)(void *)0, (unsigned char)255, (unsigned char)0, (unsigned char)1, inp);
          if(!((signed int)ret == 0))
            while((_Bool)0)
              ;

        }
        break;
      }
      default:
      {
        while((_Bool)0)
          ;
        lwip_stats.icmp.proterr = lwip_stats.icmp.proterr + 1;
        lwip_stats.icmp.drop = lwip_stats.icmp.drop + 1;
      }
    }
    pbuf_free(p);
    goto __CPROVER_DUMP_L73;
  }

lenerr:
  ;
  pbuf_free(p);
  lwip_stats.icmp.lenerr = lwip_stats.icmp.lenerr + 1;
  goto __CPROVER_DUMP_L73;

memerr:
  ;
  pbuf_free(p);
  lwip_stats.icmp.err = lwip_stats.icmp.err + 1;
  goto __CPROVER_DUMP_L73;

__CPROVER_DUMP_L73:
  ;
}

// icmp_send_response
// file lwip/src/core/ipv4/icmp.c line 292
static void icmp_send_response(struct pbuf *p, unsigned char type, unsigned char code)
{
  struct pbuf *q;
  struct ip_hdr *iphdr;
  struct icmp_echo_hdr *icmphdr;
  struct ip_addr iphdr_src;
  q=pbuf_alloc((enum anonymous)PBUF_IP, (unsigned short int)(sizeof(struct icmp_echo_hdr) /*8ul*/  + (unsigned long int)20 + (unsigned long int)8), (enum anonymous_0)PBUF_RAM);
  if(q == ((struct pbuf *)NULL))
    while((_Bool)0)
      ;

  else
  {
    do
      if(!((unsigned long int)q->len >= 36ul))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"check that first pbuf can hold icmp message", 308, (const void *)"lwip/src/core/ipv4/icmp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    iphdr = (struct ip_hdr *)p->payload;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    icmphdr = (struct icmp_echo_hdr *)q->payload;
    icmphdr->type = type;
    icmphdr->code = code;
    icmphdr->id = (unsigned short int)0;
    icmphdr->seqno = (unsigned short int)0;
    memcpy((void *)((unsigned char *)q->payload + (signed long int)sizeof(struct icmp_echo_hdr) /*8ul*/ ), (const void *)(unsigned char *)p->payload, (unsigned long int)(20 + 8));
    icmphdr->chksum = (unsigned short int)0;
    icmphdr->chksum=inet_chksum((void *)icmphdr, q->len);
    lwip_stats.icmp.xmit = lwip_stats.icmp.xmit + 1;
    iphdr_src.addr = iphdr->src.addr;
    ip_output(q, (struct ip_addr *)(void *)0, &iphdr_src, (unsigned char)255, (unsigned char)0, (unsigned char)1);
    pbuf_free(q);
  }
}

// icmp_time_exceeded
// file lwip/src/core/ipv4/icmp.c line 276
void icmp_time_exceeded(struct pbuf *p, enum icmp_te_type t)
{
  icmp_send_response(p, (unsigned char)11, (unsigned char)t);
}

// inet_chksum
// file lwip/src/core/inet_chksum.c line 491
unsigned short int inet_chksum(void *dataptr, unsigned short int len)
{
  unsigned short int return_value_lwip_standard_chksum_1;
  return_value_lwip_standard_chksum_1=lwip_standard_chksum(dataptr, (signed int)len);
  return (unsigned short int)~((signed int)return_value_lwip_standard_chksum_1);
}

// inet_chksum_pbuf
// file lwip/src/core/inet_chksum.c line 504
unsigned short int inet_chksum_pbuf(struct pbuf *p)
{
  unsigned int acc;
  struct pbuf *q;
  unsigned char swapped;
  acc = (unsigned int)0;
  swapped = (unsigned char)0;
  q = p;
  for( ; !(q == ((struct pbuf *)NULL)); q = q->next)
  {
    unsigned short int return_value_lwip_standard_chksum_1;
    return_value_lwip_standard_chksum_1=lwip_standard_chksum(q->payload, (signed int)q->len);
    acc = acc + (unsigned int)return_value_lwip_standard_chksum_1;
    acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
    if(!((signed int)q->len % 2 == 0))
    {
      swapped = (unsigned char)(1 - (signed int)swapped);
      acc = (acc & (unsigned int)0xff) << 8 | (acc & (unsigned int)0xff00) >> 8;
    }

  }
  if(!(swapped == 0))
    acc = (acc & (unsigned int)0xff) << 8 | (acc & (unsigned int)0xff00) >> 8;

  return (unsigned short int)~((unsigned long int)acc & 0xffffUL);
}

// inet_chksum_pseudo
// file lwip/src/core/inet_chksum.c line 311
unsigned short int inet_chksum_pseudo(struct pbuf *p, unsigned char proto, unsigned short int proto_len, struct ip_addr *src, struct ip_addr *dest)
{
  unsigned int acc;
  unsigned int addr = src->addr;
  acc = (unsigned int)((unsigned long int)addr & 0xffffUL);
  acc = acc + (unsigned int)((unsigned long int)(addr >> 16) & 0xffffUL);
  addr = dest->addr;
  acc = acc + (unsigned int)((unsigned long int)addr & 0xffffUL);
  acc = acc + (unsigned int)((unsigned long int)(addr >> 16) & 0xffffUL);
  acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
  acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
  unsigned short int return_value_inet_cksum_pseudo_base_1;
  return_value_inet_cksum_pseudo_base_1=inet_cksum_pseudo_base(p, proto, proto_len, acc);
  return return_value_inet_cksum_pseudo_base_1;
}

// inet_chksum_pseudo_partial
// file lwip/src/core/inet_chksum.c line 423
unsigned short int inet_chksum_pseudo_partial(struct pbuf *p, unsigned char proto, unsigned short int proto_len, unsigned short int chksum_len, struct ip_addr *src, struct ip_addr *dest)
{
  unsigned int acc;
  unsigned int addr = src->addr;
  acc = (unsigned int)((unsigned long int)addr & 0xffffUL);
  acc = acc + (unsigned int)((unsigned long int)(addr >> 16) & 0xffffUL);
  addr = dest->addr;
  acc = acc + (unsigned int)((unsigned long int)addr & 0xffffUL);
  acc = acc + (unsigned int)((unsigned long int)(addr >> 16) & 0xffffUL);
  acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
  acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
  unsigned short int return_value_inet_cksum_pseudo_partial_base_1;
  return_value_inet_cksum_pseudo_partial_base_1=inet_cksum_pseudo_partial_base(p, proto, proto_len, chksum_len, acc);
  return return_value_inet_cksum_pseudo_partial_base_1;
}

// inet_cksum_pseudo_base
// file lwip/src/core/inet_chksum.c line 262
static unsigned short int inet_cksum_pseudo_base(struct pbuf *p, unsigned char proto, unsigned short int proto_len, unsigned int acc)
{
  struct pbuf *q;
  unsigned char swapped = (unsigned char)0;
  q = p;
  for( ; !(q == ((struct pbuf *)NULL)); q = q->next)
  {
    while((_Bool)0)
      ;
    unsigned short int return_value_lwip_standard_chksum_1;
    return_value_lwip_standard_chksum_1=lwip_standard_chksum(q->payload, (signed int)q->len);
    acc = acc + (unsigned int)return_value_lwip_standard_chksum_1;
    acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
    if(!((signed int)q->len % 2 == 0))
    {
      swapped = (unsigned char)(1 - (signed int)swapped);
      acc = (acc & (unsigned int)0xff) << 8 | (acc & (unsigned int)0xff00) >> 8;
    }

  }
  if(!(swapped == 0))
    acc = (acc & (unsigned int)0xff) << 8 | (acc & (unsigned int)0xff00) >> 8;

  unsigned short int return_value_lwip_htons_2;
  return_value_lwip_htons_2=lwip_htons((unsigned short int)proto);
  acc = acc + (unsigned int)return_value_lwip_htons_2;
  unsigned short int return_value_lwip_htons_3;
  return_value_lwip_htons_3=lwip_htons(proto_len);
  acc = acc + (unsigned int)return_value_lwip_htons_3;
  acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
  acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
  while((_Bool)0)
    ;
  return (unsigned short int)~((unsigned long int)acc & 0xffffUL);
}

// inet_cksum_pseudo_partial_base
// file lwip/src/core/inet_chksum.c line 367
static unsigned short int inet_cksum_pseudo_partial_base(struct pbuf *p, unsigned char proto, unsigned short int proto_len, unsigned short int chksum_len, unsigned int acc)
{
  struct pbuf *q;
  unsigned char swapped = (unsigned char)0;
  unsigned short int chklen;
  q = p;
  for( ; (signed int)chksum_len >= 1 && !(q == ((struct pbuf *)NULL)); q = q->next)
  {
    while((_Bool)0)
      ;
    chklen = q->len;
    if(!((signed int)chksum_len >= (signed int)chklen))
      chklen = chksum_len;

    unsigned short int return_value_lwip_standard_chksum_1;
    return_value_lwip_standard_chksum_1=lwip_standard_chksum(q->payload, (signed int)chklen);
    acc = acc + (unsigned int)return_value_lwip_standard_chksum_1;
    chksum_len = chksum_len - chklen;
    do
      if((signed int)chksum_len >= 0x7fff)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"delete me", 384, (const void *)"lwip/src/core/inet_chksum.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
    if(!((signed int)q->len % 2 == 0))
    {
      swapped = (unsigned char)(1 - (signed int)swapped);
      acc = (acc & (unsigned int)0xff) << 8 | (acc & (unsigned int)0xff00) >> 8;
    }

  }
  if(!(swapped == 0))
    acc = (acc & (unsigned int)0xff) << 8 | (acc & (unsigned int)0xff00) >> 8;

  unsigned short int return_value_lwip_htons_2;
  return_value_lwip_htons_2=lwip_htons((unsigned short int)proto);
  acc = acc + (unsigned int)return_value_lwip_htons_2;
  unsigned short int return_value_lwip_htons_3;
  return_value_lwip_htons_3=lwip_htons(proto_len);
  acc = acc + (unsigned int)return_value_lwip_htons_3;
  acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
  acc = (unsigned int)((unsigned long int)(acc >> 16) + ((unsigned long int)acc & 0x0000ffffUL));
  while((_Bool)0)
    ;
  return (unsigned short int)~((unsigned long int)acc & 0xffffUL);
}

// init_oc_netif
// file src/ocproxy.c line 791
static signed char init_oc_netif(struct netif *netif)
{
  netif->name[(signed long int)0] = (char)117;
  netif->name[(signed long int)1] = (char)110;
  netif->output = lwip_data_out;
  return (signed char)0;
}

// introduce_thread
// file contrib/ports/unix/sys_arch.c line 110
static struct sys_thread * introduce_thread(unsigned long int id)
{
  struct sys_thread *thread;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct sys_thread) /*16ul*/ );
  thread = (struct sys_thread *)return_value_malloc_1;
  if(!(thread == ((struct sys_thread *)NULL)))
  {
    pthread_mutex_lock(&threads_mutex);
    thread->next = threads;
    thread->pthread = id;
    threads = thread;
    pthread_mutex_unlock(&threads_mutex);
  }

  return thread;
}

// ip4_addr_isbroadcast
// file ./lwip/src/include/ipv4/lwip/ip4_addr.h line 203
unsigned char ip4_addr_isbroadcast(unsigned int addr, struct netif *netif)
{
  struct ip_addr ipaddr;
  (&ipaddr)->addr = addr;
  _Bool tmp_if_expr_1;
  if(~addr == 0u || addr == 0u)
    return (unsigned char)1;

  else
    if((0x02U & (unsigned int)netif->flags) == 0u)
      return (unsigned char)0;

    else
      if(addr == netif->ip_addr.addr)
        return (unsigned char)0;

      else
      {
        if((netif->netmask.addr & ipaddr.addr) == (netif->ip_addr.addr & netif->netmask.addr))
          tmp_if_expr_1 = (addr & ~(&netif->netmask)->addr) == ((unsigned int)0xffffffffUL & ~(&netif->netmask)->addr) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(tmp_if_expr_1)
          return (unsigned char)1;

        else
          return (unsigned char)0;
      }
}

// ip4_addr_netmask_valid
// file lwip/src/core/ipv4/ip4_addr.c line 90
unsigned char ip4_addr_netmask_valid(unsigned int netmask)
{
  unsigned int mask;
  unsigned int nm_hostorder;
  nm_hostorder=lwip_htonl(netmask);
  mask = (unsigned int)(1UL << 31);
  for( ; !(mask == 0u); mask = mask >> 1)
    if((mask & nm_hostorder) == 0u)
      break;

  for( ; !(mask == 0u); mask = mask >> 1)
    if(!((mask & nm_hostorder) == 0u))
      return (unsigned char)0;

  return (unsigned char)1;
}

// ip_frag
// file ./lwip/src/include/ipv4/lwip/ip_frag.h line 84
signed char ip_frag(struct pbuf *p, struct netif *netif, struct ip_addr *dest)
{
  struct pbuf *rambuf;
  struct pbuf *newpbuf;
  struct ip_hdr *original_iphdr;
  struct ip_hdr *iphdr;
  unsigned short int nfb;
  unsigned short int left;
  unsigned short int cop;
  unsigned short int mtu = netif->mtu;
  unsigned short int ofo;
  unsigned short int omf;
  unsigned short int last;
  unsigned short int poff = (unsigned short int)20;
  unsigned short int tmp;
  unsigned short int newpbuflen = (unsigned short int)0;
  unsigned short int left_to_copy;
  original_iphdr = (struct ip_hdr *)p->payload;
  iphdr = original_iphdr;
  tmp=lwip_ntohs(iphdr->_offset);
  ofo = (unsigned short int)((unsigned int)tmp & 0x1fffU);
  omf = (unsigned short int)((unsigned int)tmp & 0x2000U);
  left = (unsigned short int)((signed int)p->tot_len - 20);
  nfb = (unsigned short int)(((signed int)mtu - 20) / 8);
  signed int tmp_if_expr_1;
  if(!(left == 0))
  {
    last = (unsigned short int)((signed int)left <= (signed int)mtu - 20);
    tmp = (unsigned short int)((unsigned int)omf | 0x1fffU & (unsigned int)ofo);
    if(last == 0)
      tmp = (unsigned short int)((unsigned int)tmp | 0x2000U);

    cop = (unsigned short int)(last != 0 ? (signed int)left : (signed int)nfb * 8);
    rambuf=pbuf_alloc((enum anonymous)PBUF_LINK, (unsigned short int)20, (enum anonymous_0)PBUF_RAM);
    if(rambuf == ((struct pbuf *)NULL))
      return (signed char)-1;

    do
      if(!((signed int)p->len >= 20))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"this needs a pbuf in one piece!", 777, (const void *)"lwip/src/core/ipv4/ip_frag.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    memcpy(rambuf->payload, (const void *)original_iphdr, (unsigned long int)20);
    iphdr = (struct ip_hdr *)rambuf->payload;
    p->payload = (void *)((unsigned char *)p->payload + (signed long int)poff);
    p->len = p->len - poff;
    left_to_copy = cop;
    while(!(left_to_copy == 0))
    {
      struct pbuf_custom_ref *pcr;
      if(!((signed int)left_to_copy >= (signed int)p->len))
        tmp_if_expr_1 = (signed int)left_to_copy;

      else
        tmp_if_expr_1 = (signed int)p->len;
      newpbuflen = (unsigned short int)tmp_if_expr_1;
      if(newpbuflen == 0)
        p = p->next;

      else
      {
        pcr=ip_frag_alloc_pbuf_custom_ref();
        if(pcr == ((struct pbuf_custom_ref *)NULL))
        {
          pbuf_free(rambuf);
          return (signed char)-1;
        }

        newpbuf=pbuf_alloced_custom((enum anonymous)PBUF_RAW, newpbuflen, (enum anonymous_0)PBUF_REF, &pcr->pc, p->payload, newpbuflen);
        if(newpbuf == ((struct pbuf *)NULL))
        {
          ip_frag_free_pbuf_custom_ref(pcr);
          pbuf_free(rambuf);
          return (signed char)-1;
        }

        pbuf_ref(p);
        pcr->original = p;
        pcr->pc.custom_free_function = ipfrag_free_pbuf_custom;
        pbuf_cat(rambuf, newpbuf);
        left_to_copy = left_to_copy - newpbuflen;
        if(!(left_to_copy == 0))
          p = p->next;

      }
    }
    poff = newpbuflen;
    iphdr->_offset=lwip_htons(tmp);
    iphdr->_len=lwip_htons((unsigned short int)((signed int)cop + 20));
    iphdr->_chksum = (unsigned short int)0;
    iphdr->_chksum=inet_chksum((void *)iphdr, (unsigned short int)20);
    netif->output(netif, rambuf, dest);
    lwip_stats.ip_frag.xmit = lwip_stats.ip_frag.xmit + 1;
    pbuf_free(rambuf);
    left = left - cop;
    ofo = ofo + nfb;
  }

  return (signed char)0;
}

// ip_frag_alloc_pbuf_custom_ref
// file lwip/src/core/ipv4/ip_frag.c line 637
static struct pbuf_custom_ref * ip_frag_alloc_pbuf_custom_ref(void)
{
  void *return_value_mem_malloc_1;
  return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)5]);
  return (struct pbuf_custom_ref *)return_value_mem_malloc_1;
}

// ip_frag_free_pbuf_custom_ref
// file lwip/src/core/ipv4/ip_frag.c line 644
static void ip_frag_free_pbuf_custom_ref(struct pbuf_custom_ref *p)
{
  do
    if(p == ((struct pbuf_custom_ref *)NULL))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p != NULL", 646, (const void *)"lwip/src/core/ipv4/ip_frag.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  mem_free((void *)p);
}

// ip_input
// file lwip/src/core/ipv4/ip4.c line 298
signed char ip_input(struct pbuf *p, struct netif *inp)
{
  struct ip_hdr *iphdr;
  struct netif *netif;
  unsigned short int iphdr_hlen;
  unsigned short int iphdr_len;
  lwip_stats.ip.recv = lwip_stats.ip.recv + 1;
  iphdr = (struct ip_hdr *)p->payload;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_5;
  unsigned char return_value_ip4_addr_isbroadcast_4;
  _Bool tmp_if_expr_7;
  if(!((signed int)iphdr->_v_hl >> 4 == 4))
  {
    while((_Bool)0)
      ;
    pbuf_free(p);
    lwip_stats.ip.err = lwip_stats.ip.err + 1;
    lwip_stats.ip.drop = lwip_stats.ip.drop + 1;
    return (signed char)0;
  }

  else
  {
    iphdr_hlen = (unsigned short int)((signed int)iphdr->_v_hl & 0x0f);
    iphdr_hlen = iphdr_hlen * (unsigned short int)4;
    iphdr_len=lwip_ntohs(iphdr->_len);
    if(!((signed int)p->len >= (signed int)iphdr_hlen))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)iphdr_len > (signed int)p->tot_len ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      if(!((signed int)p->len >= (signed int)iphdr_hlen))
        while((_Bool)0)
          ;

      if(!((signed int)p->tot_len >= (signed int)iphdr_len))
        while((_Bool)0)
          ;

      pbuf_free(p);
      lwip_stats.ip.lenerr = lwip_stats.ip.lenerr + 1;
      lwip_stats.ip.drop = lwip_stats.ip.drop + 1;
      return (signed char)0;
    }

    else
    {
      unsigned short int return_value_inet_chksum_3;
      return_value_inet_chksum_3=inet_chksum((void *)iphdr, iphdr_hlen);
      if(!((signed int)return_value_inet_chksum_3 == 0))
      {
        while((_Bool)0)
          ;
        pbuf_free(p);
        lwip_stats.ip.chkerr = lwip_stats.ip.chkerr + 1;
        lwip_stats.ip.drop = lwip_stats.ip.drop + 1;
        return (signed char)0;
      }

      else
      {
        pbuf_realloc(p, iphdr_len);
        (&ip_data.current_iphdr_dest)->addr = iphdr->dest.addr;
        (&ip_data.current_iphdr_src)->addr = iphdr->src.addr;
        signed int first = 1;
        netif = inp;

      __CPROVER_DUMP_L24:
        ;
        while((_Bool)1)
        {
          if(!((0x01U & (unsigned int)netif->flags) == 0u))
          {
            if(!(netif->ip_addr.addr == 0u))
            {
              if(ip_data.current_iphdr_dest.addr == netif->ip_addr.addr)
                tmp_if_expr_5 = (_Bool)1;

              else
              {
                return_value_ip4_addr_isbroadcast_4=ip4_addr_isbroadcast((&ip_data.current_iphdr_dest)->addr, netif);
                tmp_if_expr_5 = return_value_ip4_addr_isbroadcast_4 != 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_5)
              {
                while((_Bool)0)
                  ;
                break;
              }

            }

          }

          if(!(first == 0))
          {
            first = 0;
            netif = netif_list;
          }

          else
            netif = netif->next;
          if(netif == inp)
            netif = netif->next;

          if(netif == ((struct netif *)NULL))
            break;

        }
        unsigned char return_value_ip4_addr_isbroadcast_6;
        return_value_ip4_addr_isbroadcast_6=ip4_addr_isbroadcast((&ip_data.current_iphdr_src)->addr, inp);
        if(!(return_value_ip4_addr_isbroadcast_6 == 0))
          tmp_if_expr_7 = (_Bool)1;

        else
          tmp_if_expr_7 = ((unsigned long int)(&ip_data.current_iphdr_src)->addr & ((0xf0000000UL & (unsigned long int)0xff) << 24 | (0xf0000000UL & (unsigned long int)0xff00) << 8 | (0xf0000000UL & 0xff0000UL) >> 8 | (0xf0000000UL & 0xff000000UL) >> 24)) == ((0xe0000000UL & (unsigned long int)0xff) << 24 | (0xe0000000UL & (unsigned long int)0xff00) << 8 | (0xe0000000UL & 0xff0000UL) >> 8 | (0xe0000000UL & 0xff000000UL) >> 24) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_7)
        {
          while((_Bool)0)
            ;
          pbuf_free(p);
          lwip_stats.ip.drop = lwip_stats.ip.drop + 1;
          return (signed char)0;
        }

        else
          if(netif == ((struct netif *)NULL))
          {
            while((_Bool)0)
              ;
            pbuf_free(p);
            return (signed char)0;
          }

          else
          {
            if(!((65343u & (unsigned int)iphdr->_offset) == 0u))
            {
              while((_Bool)0)
                ;
              p=ip_reass(p);
              if(p == ((struct pbuf *)NULL))
                return (signed char)0;

              iphdr = (struct ip_hdr *)p->payload;
            }

            while((_Bool)0)
              ;
            while((_Bool)0)
              ;
            ip_data.current_netif = inp;
            ip_data.current_ip4_header = iphdr;
            ip_data.current_ip_header_tot_len = (unsigned short int)(((signed int)iphdr->_v_hl & 0x0f) * 4);
            pbuf_header(p, (signed short int)-((signed int)iphdr_hlen));
            switch((signed int)iphdr->_proto)
            {
              case 17:
              {
                udp_input(p, inp);
                break;
              }
              case 6:
              {
                tcp_input(p, inp);
                break;
              }
              case 1:
              {
                icmp_input(p, inp);
                break;
              }
              default:
              {
                unsigned char return_value_ip4_addr_isbroadcast_11;
                return_value_ip4_addr_isbroadcast_11=ip4_addr_isbroadcast((&ip_data.current_iphdr_dest)->addr, inp);
                if(return_value_ip4_addr_isbroadcast_11 == 0)
                {
                  if(!((240ul & (unsigned long int)ip_data.current_iphdr_dest.addr) == 224ul))
                  {
                    pbuf_header(p, (signed short int)iphdr_hlen);
                    p->payload = (void *)iphdr;
                    icmp_dest_unreach(p, (enum icmp_dur_type)ICMP_DUR_PROTO);
                  }

                }

                pbuf_free(p);
                while((_Bool)0)
                  ;
                lwip_stats.ip.proterr = lwip_stats.ip.proterr + 1;
                lwip_stats.ip.drop = lwip_stats.ip.drop + 1;
              }
            }
            ip_data.current_netif = (struct netif *)(void *)0;
            ip_data.current_ip4_header = (struct ip_hdr *)(void *)0;
            ip_data.current_ip_header_tot_len = (unsigned short int)0;
            (&ip_data.current_iphdr_src)->addr = (unsigned int)0x00000000UL;
            (&ip_data.current_iphdr_dest)->addr = (unsigned int)0x00000000UL;
            return (signed char)0;
          }
      }
    }
  }
}

// ip_output
// file ./lwip/src/include/ipv4/lwip/ip4.h line 117
signed char ip_output(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest, unsigned char ttl, unsigned char tos, unsigned char proto)
{
  struct netif *netif;
  do
    if(!((signed int)p->ref == 1))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->ref == 1", 861, (const void *)"lwip/src/core/ipv4/ip4.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  netif=ip_route(dest);
  if(netif == ((struct netif *)NULL))
  {
    while((_Bool)0)
      ;
    lwip_stats.ip.rterr = lwip_stats.ip.rterr + 1;
    return (signed char)-4;
  }

  else
  {
    signed char return_value_ip_output_if_1;
    return_value_ip_output_if_1=ip_output_if(p, src, dest, ttl, tos, proto, netif);
    return return_value_ip_output_if_1;
  }
}

// ip_output_if
// file ./lwip/src/include/ipv4/lwip/ip4.h line 119
signed char ip_output_if(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest, unsigned char ttl, unsigned char tos, unsigned char proto, struct netif *netif)
{
  struct ip_addr *src_used = src;
  _Bool tmp_if_expr_1;
  if(!(dest == ((struct ip_addr *)NULL)))
  {
    if(src == ((struct ip_addr *)NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = src->addr == (unsigned int)0x00000000UL ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      src_used = &netif->ip_addr;

  }

  signed char return_value_ip_output_if_src_2;
  return_value_ip_output_if_src_2=ip_output_if_src(p, src_used, dest, ttl, tos, proto, netif);
  return return_value_ip_output_if_src_2;
}

// ip_output_if_src
// file ./lwip/src/include/ipv4/lwip/ip4.h line 121
signed char ip_output_if_src(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest, unsigned char ttl, unsigned char tos, unsigned char proto, struct netif *netif)
{
  struct ip_hdr *iphdr;
  struct ip_addr dest_addr;
  unsigned int chk_sum = (unsigned int)0;
  do
    if(!((signed int)p->ref == 1))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->ref == 1", 704, (const void *)"lwip/src/core/ipv4/ip4.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  if(!(dest == ((struct ip_addr *)NULL)))
  {
    unsigned short int ip_hlen = (unsigned short int)20;
    unsigned char return_value_pbuf_header_1;
    return_value_pbuf_header_1=pbuf_header(p, (signed short int)20);
    if(!(return_value_pbuf_header_1 == 0))
    {
      while((_Bool)0)
        ;
      lwip_stats.ip.err = lwip_stats.ip.err + 1;
      return (signed char)-2;
    }

    iphdr = (struct ip_hdr *)p->payload;
    do
      if(!((unsigned long int)p->len >= sizeof(struct ip_hdr) /*20ul*/ ))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"check that first pbuf can hold struct ip_hdr", 750, (const void *)"lwip/src/core/ipv4/ip4.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    iphdr->_ttl = (unsigned char)ttl;
    iphdr->_proto = (unsigned char)proto;
    chk_sum = chk_sum + (unsigned int)((signed int)proto << 8 | (signed int)ttl);
    iphdr->dest.addr = dest->addr;
    chk_sum = chk_sum + ((&iphdr->dest)->addr & (unsigned int)0xFFFF);
    chk_sum = chk_sum + ((&iphdr->dest)->addr >> 16);
    iphdr->_v_hl = (unsigned char)(4 << 4 | (signed int)ip_hlen / 4);
    iphdr->_tos = tos;
    chk_sum = chk_sum + (unsigned int)((signed int)tos << 8 | (signed int)iphdr->_v_hl);
    iphdr->_len=lwip_htons(p->tot_len);
    chk_sum = chk_sum + (unsigned int)iphdr->_len;
    iphdr->_offset = (unsigned short int)0;
    iphdr->_id=lwip_htons(ip_id);
    chk_sum = chk_sum + (unsigned int)iphdr->_id;
    ip_id = ip_id + 1;
    if(src == ((struct ip_addr *)NULL))
      iphdr->src.addr = ip_addr_any.addr;

    else
      iphdr->src.addr = src->addr;
    chk_sum = chk_sum + ((&iphdr->src)->addr & (unsigned int)0xFFFF);
    chk_sum = chk_sum + ((&iphdr->src)->addr >> 16);
    chk_sum = (chk_sum >> 16) + (chk_sum & (unsigned int)0xFFFF);
    chk_sum = (chk_sum >> 16) + chk_sum;
    chk_sum = ~chk_sum;
    iphdr->_chksum = (unsigned short int)chk_sum;
  }

  else
  {
    iphdr = (struct ip_hdr *)p->payload;
    dest_addr.addr = iphdr->dest.addr;
    dest = &dest_addr;
  }
  lwip_stats.ip.xmit = lwip_stats.ip.xmit + 1;
  while((_Bool)0)
    ;
  if(!(netif->mtu == 0))
  {
    if(!((signed int)netif->mtu >= (signed int)p->tot_len))
    {
      signed char return_value_ip_frag_2;
      return_value_ip_frag_2=ip_frag(p, netif, dest);
      return return_value_ip_frag_2;
    }

  }

  while((_Bool)0)
    ;
  signed char return_value;
  return_value=netif->output(netif, p, dest);
  return return_value;
}

// ip_reass
// file ./lwip/src/include/ipv4/lwip/ip_frag.h line 65
struct pbuf * ip_reass(struct pbuf *p)
{
  struct pbuf *r;
  struct ip_hdr *fraghdr;
  struct ip_reassdata *ipr;
  struct ip_reass_helper *iprh;
  unsigned short int offset;
  unsigned short int len;
  unsigned char clen;
  lwip_stats.ip_frag.recv = lwip_stats.ip_frag.recv + 1;
  fraghdr = (struct ip_hdr *)p->payload;
  unsigned short int return_value_lwip_ntohs_1;
  unsigned short int return_value_lwip_ntohs_2;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  unsigned short int return_value_lwip_ntohs_7;
  signed int return_value_ip_reass_chain_frag_into_datagram_and_validate_10;
  if(!((0x0f & (signed int)fraghdr->_v_hl) * 4 == 20))
  {
    while((_Bool)0)
      ;
    lwip_stats.ip_frag.err = lwip_stats.ip_frag.err + 1;
  }

  else
  {
    return_value_lwip_ntohs_1=lwip_ntohs(fraghdr->_offset);
    offset = (unsigned short int)(((unsigned int)return_value_lwip_ntohs_1 & 0x1fffU) * (unsigned int)8);
    return_value_lwip_ntohs_2=lwip_ntohs(fraghdr->_len);
    len = (unsigned short int)((signed int)return_value_lwip_ntohs_2 - ((signed int)fraghdr->_v_hl & 0x0f) * 4);
    clen=pbuf_clen(p);
    if((signed int)ip_reass_pbufcount + (signed int)clen >= 11)
    {
      signed int return_value_ip_reass_remove_oldest_datagram_3;
      return_value_ip_reass_remove_oldest_datagram_3=ip_reass_remove_oldest_datagram(fraghdr, (signed int)clen);
      if(return_value_ip_reass_remove_oldest_datagram_3 == 0 || (signed int)ip_reass_pbufcount + (signed int)clen >= 11)
      {
        while((_Bool)0)
          ;
        lwip_stats.ip_frag.memerr = lwip_stats.ip_frag.memerr + 1;
        goto nullreturn;
      }

    }

    ipr = reassdatagrams;
    for( ; !(ipr == ((struct ip_reassdata *)NULL)); ipr = ipr->next)
    {
      if(ipr->iphdr.src.addr == fraghdr->src.addr)
        tmp_if_expr_5 = (&(&ipr->iphdr)->dest)->addr == (&fraghdr->dest)->addr ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
        tmp_if_expr_6 = (&ipr->iphdr)->_id == fraghdr->_id ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      if(tmp_if_expr_6)
      {
        while((_Bool)0)
          ;
        lwip_stats.ip_frag.cachehit = lwip_stats.ip_frag.cachehit + 1;
        break;
      }

    }
    if(ipr == ((struct ip_reassdata *)NULL))
    {
      ipr=ip_reass_enqueue_new_datagram(fraghdr, (signed int)clen);
      if(ipr == ((struct ip_reassdata *)NULL))
        goto nullreturn;

    }

    else
    {
      unsigned short int return_value_lwip_ntohs_8;
      return_value_lwip_ntohs_8=lwip_ntohs(fraghdr->_offset);
      if((0x1fffU & (unsigned int)return_value_lwip_ntohs_8) == 0u)
      {
        return_value_lwip_ntohs_7=lwip_ntohs((&ipr->iphdr)->_offset);
        if(!((0x1fffU & (unsigned int)return_value_lwip_ntohs_7) == 0u))
          memcpy((void *)&ipr->iphdr, (const void *)fraghdr, (unsigned long int)20);

      }

    }
    ip_reass_pbufcount = ip_reass_pbufcount + (unsigned short int)clen;
    if((32u & (unsigned int)fraghdr->_offset) == 0u)
    {
      ipr->flags = ipr->flags | (unsigned char)0x01;
      ipr->datagram_len = (unsigned short int)((signed int)offset + (signed int)len);
      while((_Bool)0)
        ;
    }

    return_value_ip_reass_chain_frag_into_datagram_and_validate_10=ip_reass_chain_frag_into_datagram_and_validate(ipr, p);
    if(!(return_value_ip_reass_chain_frag_into_datagram_and_validate_10 == 0))
    {
      struct ip_reassdata *ipr_prev;
      ipr->datagram_len = ipr->datagram_len + (unsigned short int)20;
      r = ((struct ip_reass_helper *)ipr->p->payload)->next_pbuf;
      fraghdr = (struct ip_hdr *)ipr->p->payload;
      memcpy((void *)fraghdr, (const void *)&ipr->iphdr, (unsigned long int)20);
      fraghdr->_len=lwip_htons(ipr->datagram_len);
      fraghdr->_offset = (unsigned short int)0;
      fraghdr->_chksum = (unsigned short int)0;
      fraghdr->_chksum=inet_chksum((void *)fraghdr, (unsigned short int)20);
      p = ipr->p;
      for( ; !(r == ((struct pbuf *)NULL)); r = iprh->next_pbuf)
      {
        iprh = (struct ip_reass_helper *)r->payload;
        pbuf_header(r, (signed short int)-20);
        pbuf_cat(p, r);
      }
      if(ipr == reassdatagrams)
        ipr_prev = (struct ip_reassdata *)(void *)0;

      else
      {
        ipr_prev = reassdatagrams;
        for( ; !(ipr_prev == ((struct ip_reassdata *)NULL)); ipr_prev = ipr_prev->next)
          if(ipr_prev->next == ipr)
            break;

      }
      ip_reass_dequeue_datagram(ipr, ipr_prev);
      unsigned char return_value_pbuf_clen_9;
      return_value_pbuf_clen_9=pbuf_clen(p);
      ip_reass_pbufcount = ip_reass_pbufcount - (unsigned short int)return_value_pbuf_clen_9;
      return p;
    }

    while((_Bool)0)
      ;
    return (struct pbuf *)(void *)0;
  }

nullreturn:
  ;
  while((_Bool)0)
    ;
  lwip_stats.ip_frag.drop = lwip_stats.ip_frag.drop + 1;
  pbuf_free(p);
  return (struct pbuf *)(void *)0;
}

// ip_reass_chain_frag_into_datagram_and_validate
// file lwip/src/core/ipv4/ip_frag.c line 331
static signed int ip_reass_chain_frag_into_datagram_and_validate(struct ip_reassdata *ipr, struct pbuf *new_p)
{
  struct ip_reass_helper *iprh;
  struct ip_reass_helper *iprh_tmp;
  struct ip_reass_helper *iprh_prev = (struct ip_reass_helper *)(void *)0;
  struct pbuf *q;
  unsigned short int offset;
  unsigned short int len;
  struct ip_hdr *fraghdr;
  signed int valid = 1;
  fraghdr = (struct ip_hdr *)new_p->payload;
  unsigned short int return_value_lwip_ntohs_1;
  return_value_lwip_ntohs_1=lwip_ntohs(fraghdr->_len);
  len = (unsigned short int)((signed int)return_value_lwip_ntohs_1 - ((signed int)fraghdr->_v_hl & 0x0f) * 4);
  unsigned short int return_value_lwip_ntohs_2;
  return_value_lwip_ntohs_2=lwip_ntohs(fraghdr->_offset);
  offset = (unsigned short int)(((unsigned int)return_value_lwip_ntohs_2 & 0x1fffU) * (unsigned int)8);
  while((_Bool)0)
    ;
  iprh = (struct ip_reass_helper *)new_p->payload;
  iprh->next_pbuf = (struct pbuf *)(void *)0;
  iprh->start = offset;
  iprh->end = (unsigned short int)((signed int)offset + (signed int)len);
  q = ipr->p;
  _Bool tmp_if_expr_3;
  for( ; !(q == ((struct pbuf *)NULL)); iprh_prev = iprh_tmp)
  {
    iprh_tmp = (struct ip_reass_helper *)q->payload;
    if(!((signed int)iprh->start >= (signed int)iprh_tmp->start))
    {
      iprh->next_pbuf = q;
      if(!(iprh_prev == ((struct ip_reass_helper *)NULL)))
      {
        if(!((signed int)iprh->start >= (signed int)iprh_prev->end))
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = (signed int)iprh->end > (signed int)iprh_tmp->start ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          goto freepbuf;

        iprh_prev->next_pbuf = new_p;
      }

      else
        ipr->p = new_p;
      break;
    }

    else
      if(iprh->start == iprh_tmp->start)
        goto freepbuf;

      else
        if(!((signed int)iprh->start >= (signed int)iprh_tmp->end))
          goto freepbuf;

        else
          if(!(iprh_prev == ((struct ip_reass_helper *)NULL)))
          {
            if(!(iprh_prev->end == iprh_tmp->start))
              valid = 0;

          }

    q = iprh_tmp->next_pbuf;
  }
  if(q == ((struct pbuf *)NULL))
  {
    if(!(iprh_prev == ((struct ip_reass_helper *)NULL)))
    {
      do
        if(!((signed int)iprh->start >= (signed int)iprh_prev->end))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"check fragments don't overlap", 403, (const void *)"lwip/src/core/ipv4/ip_frag.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      iprh_prev->next_pbuf = new_p;
      if(!(iprh_prev->end == iprh->start))
        valid = 0;

    }

    else
    {
      do
        if(!(ipr->p == ((struct pbuf *)NULL)))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"no previous fragment, this must be the first fragment!", 412, (const void *)"lwip/src/core/ipv4/ip_frag.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      ipr->p = new_p;
    }
  }

  _Bool tmp_if_expr_4;
  if(!((0x01 & (signed int)ipr->flags) == 0))
  {
    if(!(valid == 0))
    {
      if(ipr->p == ((struct pbuf *)NULL))
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)((struct ip_reass_helper *)ipr->p->payload)->start != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        valid = 0;

      else
      {
        iprh_prev = iprh;
        q = iprh->next_pbuf;
        for( ; !(q == ((struct pbuf *)NULL)); q = iprh->next_pbuf)
        {
          iprh = (struct ip_reass_helper *)q->payload;
          if(!(iprh_prev->end == iprh->start))
          {
            valid = 0;
            break;
          }

          iprh_prev = iprh;
        }
        if(!(valid == 0))
        {
          do
            if(ipr->p == ((struct pbuf *)NULL))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"sanity check", 444, (const void *)"lwip/src/core/ipv4/ip_frag.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          do
            if((struct ip_reass_helper *)ipr->p->payload == iprh)
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"sanity check", 446, (const void *)"lwip/src/core/ipv4/ip_frag.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          do
            if(!(iprh->next_pbuf == ((struct pbuf *)NULL)))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"validate_datagram:next_pbuf!=NULL", 448, (const void *)"lwip/src/core/ipv4/ip_frag.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          do
            if(!(iprh->end == ipr->datagram_len))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"validate_datagram:datagram end!=datagram len", 450, (const void *)"lwip/src/core/ipv4/ip_frag.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
        }

      }
    }

    return valid;
  }

  else
  {
    return 0;

  freepbuf:
    ;
    unsigned char return_value_pbuf_clen_5;
    return_value_pbuf_clen_5=pbuf_clen(new_p);
    ip_reass_pbufcount = ip_reass_pbufcount - (unsigned short int)return_value_pbuf_clen_5;
    pbuf_free(new_p);
    return 0;
  }
}

// ip_reass_dequeue_datagram
// file lwip/src/core/ipv4/ip_frag.c line 304
static void ip_reass_dequeue_datagram(struct ip_reassdata *ipr, struct ip_reassdata *prev)
{
  if(reassdatagrams == ipr)
    reassdatagrams = ipr->next;

  else
  {
    do
      if(prev == ((struct ip_reassdata *)NULL))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"sanity check linked list", 313, (const void *)"lwip/src/core/ipv4/ip_frag.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    prev->next = ipr->next;
  }
  mem_free((void *)ipr);
}

// ip_reass_enqueue_new_datagram
// file lwip/src/core/ipv4/ip_frag.c line 269
static struct ip_reassdata * ip_reass_enqueue_new_datagram(struct ip_hdr *fraghdr, signed int clen)
{
  struct ip_reassdata *ipr;
  void *return_value_mem_malloc_1;
  return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)4]);
  ipr = (struct ip_reassdata *)return_value_mem_malloc_1;
  if(ipr == ((struct ip_reassdata *)NULL))
  {
    signed int return_value_ip_reass_remove_oldest_datagram_3;
    return_value_ip_reass_remove_oldest_datagram_3=ip_reass_remove_oldest_datagram(fraghdr, clen);
    if(return_value_ip_reass_remove_oldest_datagram_3 >= clen)
    {
      void *return_value_mem_malloc_2;
      return_value_mem_malloc_2=mem_malloc((unsigned int)memp_sizes[(signed long int)4]);
      ipr = (struct ip_reassdata *)return_value_mem_malloc_2;
    }

    if(ipr == ((struct ip_reassdata *)NULL))
    {
      lwip_stats.ip_frag.memerr = lwip_stats.ip_frag.memerr + 1;
      while((_Bool)0)
        ;
      return (struct ip_reassdata *)(void *)0;
    }

  }

  memset((void *)ipr, 0, sizeof(struct ip_reassdata) /*40ul*/ );
  ipr->timer = (unsigned char)3;
  ipr->next = reassdatagrams;
  reassdatagrams = ipr;
  memcpy((void *)&ipr->iphdr, (const void *)fraghdr, (unsigned long int)20);
  return ipr;
}

// ip_reass_free_complete_datagram
// file lwip/src/core/ipv4/ip_frag.c line 158
static signed int ip_reass_free_complete_datagram(struct ip_reassdata *ipr, struct ip_reassdata *prev)
{
  unsigned short int pbufs_freed = (unsigned short int)0;
  unsigned char clen;
  struct pbuf *p;
  struct ip_reass_helper *iprh;
  do
    if(prev == ipr)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"prev != ipr", 165, (const void *)"lwip/src/core/ipv4/ip_frag.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  if(!(prev == ((struct ip_reassdata *)NULL)))
    do
      if(!(prev->next == ipr))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"prev->next == ipr", 167, (const void *)"lwip/src/core/ipv4/ip_frag.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);

  iprh = (struct ip_reass_helper *)ipr->p->payload;
  if((signed int)iprh->start == 0)
  {
    p = ipr->p;
    ipr->p = iprh->next_pbuf;
    memcpy(p->payload, (const void *)&ipr->iphdr, (unsigned long int)20);
    icmp_time_exceeded(p, (enum icmp_te_type)ICMP_TE_FRAG);
    clen=pbuf_clen(p);
    do
      if((signed int)pbufs_freed + (signed int)clen >= 65536)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbufs_freed + clen <= 0xffff", 182, (const void *)"lwip/src/core/ipv4/ip_frag.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    pbufs_freed = pbufs_freed + (unsigned short int)clen;
    pbuf_free(p);
  }

  p = ipr->p;
  while(!(p == ((struct pbuf *)NULL)))
  {
    struct pbuf *pcur;
    iprh = (struct ip_reass_helper *)p->payload;
    pcur = p;
    p = iprh->next_pbuf;
    clen=pbuf_clen(pcur);
    do
      if((signed int)pbufs_freed + (signed int)clen >= 65536)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbufs_freed + clen <= 0xffff", 198, (const void *)"lwip/src/core/ipv4/ip_frag.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    pbufs_freed = pbufs_freed + (unsigned short int)clen;
    pbuf_free(pcur);
  }
  ip_reass_dequeue_datagram(ipr, prev);
  do
    if(!((signed int)ip_reass_pbufcount >= (signed int)pbufs_freed))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"ip_reass_pbufcount >= clen", 204, (const void *)"lwip/src/core/ipv4/ip_frag.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  ip_reass_pbufcount = ip_reass_pbufcount - pbufs_freed;
  return (signed int)pbufs_freed;
}

// ip_reass_remove_oldest_datagram
// file lwip/src/core/ipv4/ip_frag.c line 221
static signed int ip_reass_remove_oldest_datagram(struct ip_hdr *fraghdr, signed int pbufs_needed)
{
  struct ip_reassdata *r;
  struct ip_reassdata *oldest;
  struct ip_reassdata *prev;
  signed int pbufs_freed = 0;
  signed int pbufs_freed_current;
  signed int other_datagrams;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  do
  {
    oldest = (struct ip_reassdata *)(void *)0;
    prev = (struct ip_reassdata *)(void *)0;
    other_datagrams = 0;
    r = reassdatagrams;
    for( ; !(r == ((struct ip_reassdata *)NULL)); r = r->next)
    {
      if(r->iphdr.src.addr == fraghdr->src.addr)
        tmp_if_expr_1 = (&(&r->iphdr)->dest)->addr == (&fraghdr->dest)->addr ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = (&r->iphdr)->_id == fraghdr->_id ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(!tmp_if_expr_2)
      {
        other_datagrams = other_datagrams + 1;
        if(oldest == ((struct ip_reassdata *)NULL))
          oldest = r;

        else
          if((signed int)oldest->timer >= (signed int)r->timer)
            oldest = r;

      }

      if(!(r->next == ((struct ip_reassdata *)NULL)))
        prev = r;

    }
    if(!(oldest == ((struct ip_reassdata *)NULL)))
    {
      pbufs_freed_current=ip_reass_free_complete_datagram(oldest, prev);
      pbufs_freed = pbufs_freed + pbufs_freed_current;
    }

  }
  while(other_datagrams >= 2 && !(pbufs_freed >= pbufs_needed));
  return pbufs_freed;
}

// ip_reass_timer
// file lwip/src/core/timers.c line 121
static void ip_reass_timer(void *arg)
{
  (void)arg;
  while((_Bool)0)
    ;
  ip_reass_tmr();
  sys_timeout((unsigned int)1000, ip_reass_timer, (void *)0);
}

// ip_reass_tmr
// file ./lwip/src/include/ipv4/lwip/ip_frag.h line 64
void ip_reass_tmr(void)
{
  struct ip_reassdata *r;
  struct ip_reassdata *prev = (struct ip_reassdata *)(void *)0;
  r = reassdatagrams;
  while(!(r == ((struct ip_reassdata *)NULL)))
    if((signed int)r->timer >= 1)
    {
      r->timer = r->timer - 1;
      while((_Bool)0)
        ;
      prev = r;
      r = r->next;
    }

    else
    {
      struct ip_reassdata *tmp;
      while((_Bool)0)
        ;
      tmp = r;
      r = r->next;
      ip_reass_free_complete_datagram(tmp, prev);
    }
}

// ip_route
// file ./lwip/src/include/ipv4/lwip/ip4.h line 115
struct netif * ip_route(struct ip_addr *dest)
{
  struct netif *netif = netif_list;
  for( ; !(netif == ((struct netif *)NULL)); netif = netif->next)
    if(!((0x01U & (unsigned int)netif->flags) == 0u))
    {
      if((dest->addr & netif->netmask.addr) == (netif->ip_addr.addr & netif->netmask.addr))
        return netif;

    }

  _Bool tmp_if_expr_1;
  if(netif_default == ((struct netif *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !((((unsigned int)netif_default->flags & 0x01U) != 0u ? (signed int)(unsigned char)1 : (signed int)(unsigned char)0) != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
  {
    while((_Bool)0)
      ;
    lwip_stats.ip.rterr = lwip_stats.ip.rterr + 1;
    return (struct netif *)(void *)0;
  }

  else
    return netif_default;
}

// ipaddr_addr
// file ./lwip/src/include/ipv4/lwip/ip4_addr.h line 237
unsigned int ipaddr_addr(const char *cp)
{
  struct ip_addr val;
  signed int return_value_ipaddr_aton_1;
  return_value_ipaddr_aton_1=ipaddr_aton(cp, &val);
  if(!(return_value_ipaddr_aton_1 == 0))
    return (&val)->addr;

  else
    return (unsigned int)0xffffffffUL;
}

// ipaddr_aton
// file lwip/src/core/ipv4/ip4_addr.c line 152
signed int ipaddr_aton(const char *cp, struct ip_addr *addr)
{
  unsigned int val;
  unsigned char base;
  char c;
  unsigned int parts[4l];
  unsigned int *pp = parts;
  c = *cp;
  unsigned int *tmp_post_1;
  while((_Bool)1)
  {
    if(!((signed int)(unsigned char)c >= 48) || (signed int)(unsigned char)c >= 58)
      return 0;

    val = (unsigned int)0;
    base = (unsigned char)10;
    if((signed int)c == 48)
    {
      cp = cp + 1l;
      c = *cp;
      if((signed int)c == 88 || (signed int)c == 120)
      {
        base = (unsigned char)16;
        cp = cp + 1l;
        c = *cp;
      }

      else
        base = (unsigned char)8;
    }

    while((_Bool)1)
      if((signed int)(unsigned char)c >= 48 && !((signed int)(unsigned char)c >= 58))
      {
        val = val * (unsigned int)base + (unsigned int)(signed int)((signed int)c - 48);
        cp = cp + 1l;
        c = *cp;
      }

      else
        if((signed int)base == 16 && ((signed int)(unsigned char)c >= 48 && !((signed int)(unsigned char)c >= 58) || (signed int)(unsigned char)c >= 65 && !((signed int)(unsigned char)c >= 71) || (signed int)(unsigned char)c >= 97 && !((signed int)(unsigned char)c >= 103)))
        {
          val = val << 4 | (unsigned int)(signed int)(((signed int)c + 10) - ((signed int)(unsigned char)c >= 97 && (signed int)(unsigned char)c <= 122 ? 97 : 65));
          cp = cp + 1l;
          c = *cp;
        }

        else
          goto __CPROVER_DUMP_L8;

  __CPROVER_DUMP_L8:
    ;
    if((signed int)c == 46)
    {
      if(pp >= parts + 3l)
        return 0;

      tmp_post_1 = pp;
      pp = pp + 1l;
      *tmp_post_1 = val;
      cp = cp + 1l;
      c = *cp;
    }

    else
      break;
  }
  if(!((signed int)c == 0) && !((signed int)c == 9) && !((signed int)c == 10) && !((signed int)c == 11) && !((signed int)c == 12) && !((signed int)c == 13) && !((signed int)c == 32))
    return 0;

  else
  {
    switch((pp - parts) + (signed long int)1)
    {
      case (signed long int)0:
        return 0;
      case (signed long int)1:
        break;
      case (signed long int)2:
      {
        if((unsigned long int)val >= 16777216ul)
          return 0;

        val = val | parts[(signed long int)0] << 24;
        break;
      }
      case (signed long int)3:
      {
        if(val >= 65536u)
          return 0;

        val = val | parts[(signed long int)0] << 24 | parts[(signed long int)1] << 16;
        break;
      }
      case (signed long int)4:
      {
        if(val >= 256u)
          return 0;

        val = val | parts[(signed long int)0] << 24 | parts[(signed long int)1] << 16 | parts[(signed long int)2] << 8;
        break;
      }
      default:
        do
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"unhandled", 243, (const void *)"lwip/src/core/ipv4/ip4_addr.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);
        while((_Bool)0);
    }
    if(!(addr == ((struct ip_addr *)NULL)))
      addr->addr=lwip_htonl(val);

    return 1;
  }
}

// ipaddr_ntoa
// file lwip/src/core/ipv4/ip4_addr.c line 261
char * ipaddr_ntoa(const struct ip_addr *addr)
{
  char *return_value_ipaddr_ntoa_r_1;
  static char str[16l];
  return_value_ipaddr_ntoa_r_1=ipaddr_ntoa_r(addr, str, 16);
  return return_value_ipaddr_ntoa_r_1;
}

// ipaddr_ntoa_r
// file lwip/src/core/ipv4/ip4_addr.c line 276
char * ipaddr_ntoa_r(const struct ip_addr *addr, char *buf, signed int buflen)
{
  unsigned int s_addr;
  char inv[3l];
  char *rp;
  unsigned char *ap;
  unsigned char rem;
  unsigned char n;
  unsigned char i;
  signed int len = 0;
  s_addr = addr->addr;
  rp = buf;
  ap = (unsigned char *)&s_addr;
  n = (unsigned char)0;
  unsigned char tmp_post_1;
  unsigned char tmp_post_2;
  signed int tmp_post_3;
  char *tmp_post_4;
  signed int tmp_post_5;
  char *tmp_post_6;
  for( ; !((signed int)n >= 4); n = n + 1)
  {
    i = (unsigned char)0;
    do
    {
      rem = (unsigned char)((signed int)*ap % (signed int)(unsigned char)10);
      *ap = *ap / (unsigned char)10;
      tmp_post_1 = i;
      i = i + 1;
      inv[(signed long int)tmp_post_1] = (char)(48 + (signed int)rem);
    }
    while(!(*ap == 0));
    do
    {
      tmp_post_2 = i;
      i = i - 1;
      if(tmp_post_2 == 0)
        break;

      tmp_post_3 = len;
      len = len + 1;
      if(tmp_post_3 >= buflen)
        return (char *)(void *)0;

      tmp_post_4 = rp;
      rp = rp + 1l;
      *tmp_post_4 = inv[(signed long int)i];
    }
    while((_Bool)1);
    tmp_post_5 = len;
    len = len + 1;
    if(tmp_post_5 >= buflen)
      return (char *)(void *)0;

    tmp_post_6 = rp;
    rp = rp + 1l;
    *tmp_post_6 = (char)46;
    ap = ap + 1l;
  }
  rp = rp - 1l;
  *rp = (char)0;
  return buf;
}

// ipfrag_free_pbuf_custom
// file lwip/src/core/ipv4/ip_frag.c line 653
static void ipfrag_free_pbuf_custom(struct pbuf *p)
{
  struct pbuf_custom_ref *pcr = (struct pbuf_custom_ref *)p;
  do
    if(pcr == ((struct pbuf_custom_ref *)NULL))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pcr != NULL", 656, (const void *)"lwip/src/core/ipv4/ip_frag.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  do
    if(!((void *)pcr == (void *)p))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pcr == p", 657, (const void *)"lwip/src/core/ipv4/ip_frag.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  if(!(pcr->original == ((struct pbuf *)NULL)))
    pbuf_free(pcr->original);

  ip_frag_free_pbuf_custom_ref(pcr);
}

// list_delete
// file contrib/ports/unix/netif/list.c line 109
void list_delete(struct list *list)
{
  void *return_value_list_pop_1;
  do
  {
    return_value_list_pop_1=list_pop(list);
    if(return_value_list_pop_1 == NULL)
      break;

  }
  while((_Bool)1);
  free((void *)list);
}

// list_elems
// file contrib/ports/unix/netif/list.c line 103
signed int list_elems(struct list *list)
{
  return list->elems;
}

// list_first
// file contrib/ports/unix/netif/list.c line 97
void * list_first(struct list *list)
{
  return (void *)list->first;
}

// list_map
// file contrib/ports/unix/netif/list.c line 144
void list_map(struct list *list, void (*func)(void *))
{
  struct elem *e = list->first;
  if(!(e == ((struct elem *)NULL)))
  {
    func(e->data);
    e = e->next;
  }

}

// list_new
// file contrib/ports/unix/netif/list.c line 41
struct list * list_new(signed int size)
{
  struct list *list;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct list) /*24ul*/ );
  list = (struct list *)return_value_malloc_1;
  list->last = (struct elem *)(void *)0;
  list->first = list->last;
  list->size = size;
  list->elems = 0;
  return list;
}

// list_pop
// file contrib/ports/unix/netif/list.c line 74
void * list_pop(struct list *list)
{
  struct elem *elem;
  void *data;
  if(list->elems >= 1)
  {
    elem = list->first;
    if(elem == list->last)
      list->last = elem->next;

    list->first = elem->next;
    list->elems = list->elems - 1;
    data = elem->data;
    free((void *)elem);
    return data;
  }

  else
    return (void *)0;
}

// list_push
// file contrib/ports/unix/netif/list.c line 52
signed int list_push(struct list *list, void *data)
{
  struct elem *elem;
  if(!(list->elems >= list->size))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct elem) /*16ul*/ );
    elem = (struct elem *)return_value_malloc_1;
    elem->data = data;
    elem->next = (struct elem *)(void *)0;
    if(!(list->last == ((struct elem *)NULL)))
      list->last->next = elem;

    list->last = elem;
    if(list->first == ((struct elem *)NULL))
      list->first = elem;

    list->elems = list->elems + 1;
    return 1;
  }

  return 0;
}

// list_remove
// file contrib/ports/unix/netif/list.c line 116
signed int list_remove(struct list *list, void *elem)
{
  struct elem *e;
  struct elem *p = (struct elem *)(void *)0;
  e = list->first;
  for( ; !(e == ((struct elem *)NULL)); e = e->next)
  {
    if(e->data == elem)
    {
      if(!(p == ((struct elem *)NULL)))
        p->next = e->next;

      else
        list->first = e->next;
      if(list->last == e)
      {
        list->last = p;
        if(!(p == ((struct elem *)NULL)))
          p->next = (struct elem *)(void *)0;

      }

      free((void *)e);
      list->elems = list->elems - 1;
      return 1;
    }

    p = e;
  }
  return 0;
}

// local_data_cb
// file src/ocproxy.c line 283
static void local_data_cb(signed int fd, signed short int what, void *ctx)
{
  struct ocp_sock *s = (struct ocp_sock *)ctx;
  signed long int len;
  signed int try_len;
  signed char err;
  try_len = (signed int)s->tpcb->snd_buf;
  if(try_len >= 2049)
    try_len = 2048;

  _Bool tmp_if_expr_1;
  if(try_len == 0)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)s->tpcb->snd_queuelen > ((4 * 65534) / 1024) / 2 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    s->lwip_blocked = 1;

  else
  {
    len=read(s->fd, (void *)s->sockbuf, (unsigned long int)try_len);
    if(!(len >= 1l))
      ocp_sock_del(s);

    else
    {
      err=tcp_write(s->tpcb, (const void *)s->sockbuf, (unsigned short int)len, (unsigned char)0x01);
      if((signed int)err == -1)
        die("%s: out of memory\n", (const void *)"local_data_cb");

      else
        if(!((signed int)err == 0))
          warn("tcp_write returned %d\n", (signed int)err);

      tcp_output(s->tpcb);
      event_add(s->ev, (struct timeval *)(void *)0);
    }
  }
}

// lwip_data_cb
// file src/ocproxy.c line 660
static void lwip_data_cb(signed int fd, signed short int what, void *ctx)
{
  struct ocp_sock *s = (struct ocp_sock *)ctx;
  signed long int len;
  struct pbuf *p;
  len=read(s->fd, (void *)s->sockbuf, (unsigned long int)2048);
  if(!(len >= 1l))
    vpn_conn_down();

  p=pbuf_alloc((enum anonymous)PBUF_RAW, (unsigned short int)len, (enum anonymous_0)PBUF_POOL);
  signed long int tmp_if_expr_1;
  if(!(p == ((struct pbuf *)NULL)))
  {
    char *bufptr;
    struct pbuf *q;
    bufptr = s->sockbuf;
    q = p;
    while(len >= 1l)
    {
      signed int copy;
      if(!((signed long int)q->len >= len))
        tmp_if_expr_1 = (signed long int)q->len;

      else
        tmp_if_expr_1 = len;
      copy = (signed int)tmp_if_expr_1;
      memcpy(q->payload, (const void *)bufptr, (unsigned long int)copy);
      len = len - (signed long int)copy;
      bufptr = bufptr + (signed long int)copy;
      q = q->next;
    }
    lwip_stats.link.recv = lwip_stats.link.recv + 1;
    if(!(tcpdump_enabled == 0))
      tcpdump(p);

    s->netif->input(p, s->netif);
  }

  else
    warn("%s: could not allocate pbuf\n", (const void *)"lwip_data_cb");
  event_add(s->ev, (struct timeval *)(void *)0);
}

// lwip_data_out
// file src/ocproxy.c line 695
static signed char lwip_data_out(struct netif *netif, struct pbuf *p, struct ip_addr *ipaddr)
{
  struct ocp_sock *s = (struct ocp_sock *)netif->state;
  signed int i = 0;
  signed int total = 0;
  signed long int ret;
  struct iovec iov[128l];
  if(!(tcpdump_enabled == 0))
    tcpdump(p);

  signed int tmp_post_1;
  for( ; !(p == ((struct pbuf *)NULL)); p = p->next)
  {
    if(i >= 128)
    {
      warn("%s: too many chunks, dropping packet\n", (const void *)"lwip_data_out");
      return (signed char)0;
    }

    iov[(signed long int)i].iov_base = p->payload;
    tmp_post_1 = i;
    i = i + 1;
    iov[(signed long int)tmp_post_1].iov_len = (unsigned long int)p->len;
    total = total + (signed int)p->len;
  }
  ret=writev(s->fd, iov, i);
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  if(!(ret >= 0l))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    if(*return_value___errno_location_2 == 111)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value___errno_location_3=__errno_location();
      tmp_if_expr_4 = *return_value___errno_location_3 == 107 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      vpn_conn_down();

    else
      lwip_stats.link.drop = lwip_stats.link.drop + 1;
  }

  else
    if(!(ret == (signed long int)total))
      lwip_stats.link.lenerr = lwip_stats.link.lenerr + 1;

    else
      lwip_stats.link.xmit = lwip_stats.link.xmit + 1;
  return (signed char)0;
}

// lwip_htonl
// file lwip/src/core/def.c line 88
unsigned int lwip_htonl(unsigned int n)
{
  return (unsigned int)((unsigned long int)((n & (unsigned int)0xff) << 24 | (n & (unsigned int)0xff00) << 8) | ((unsigned long int)n & 0xff0000UL) >> 8 | ((unsigned long int)n & 0xff000000UL) >> 24);
}

// lwip_htons
// file lwip/src/core/def.c line 64
unsigned short int lwip_htons(unsigned short int n)
{
  return (unsigned short int)(((signed int)n & 0xff) << 8 | ((signed int)n & 0xff00) >> 8);
}

// lwip_init
// file lwip/src/core/init.c line 305
void lwip_init(void)
{
  stats_init();
  sys_init();
  mem_init();
  netif_init();
  udp_init();
  tcp_init();
  dns_init();
  sys_timeouts_init();
}

// lwip_ntohl
// file lwip/src/core/def.c line 103
unsigned int lwip_ntohl(unsigned int n)
{
  unsigned int return_value_lwip_htonl_1;
  return_value_lwip_htonl_1=lwip_htonl(n);
  return return_value_lwip_htonl_1;
}

// lwip_ntohs
// file lwip/src/core/def.c line 76
unsigned short int lwip_ntohs(unsigned short int n)
{
  unsigned short int return_value_lwip_htons_1;
  return_value_lwip_htons_1=lwip_htons(n);
  return return_value_lwip_htons_1;
}

// lwip_standard_chksum
// file lwip/src/core/inet_chksum.c line 136
unsigned short int lwip_standard_chksum(void *dataptr, signed int len)
{
  unsigned char *pb = (unsigned char *)dataptr;
  unsigned short int *ps;
  unsigned short int t = (unsigned short int)0;
  unsigned int sum = (unsigned int)0;
  signed int odd = (signed int)((unsigned long int)pb & (unsigned long int)1);
  unsigned char *tmp_post_1;
  if(len >= 1 && !(odd == 0))
  {
    tmp_post_1 = pb;
    pb = pb + 1l;
    ((unsigned char *)&t)[(signed long int)1] = *tmp_post_1;
    len = len - 1;
  }

  ps = (unsigned short int *)(void *)pb;
  unsigned short int *tmp_post_2;
  for( ; len >= 2; len = len - 2)
  {
    tmp_post_2 = ps;
    ps = ps + 1l;
    sum = sum + (unsigned int)*tmp_post_2;
  }
  if(len >= 1)
    ((unsigned char *)&t)[(signed long int)0] = *((unsigned char *)ps);

  sum = sum + (unsigned int)t;
  sum = (unsigned int)((unsigned long int)(sum >> 16) + ((unsigned long int)sum & 0x0000ffffUL));
  sum = (unsigned int)((unsigned long int)(sum >> 16) + ((unsigned long int)sum & 0x0000ffffUL));
  if(!(odd == 0))
    sum = (sum & (unsigned int)0xff) << 8 | (sum & (unsigned int)0xff00) >> 8;

  return (unsigned short int)sum;
}

// lwip_strerr
// file ./lwip/src/include/lwip/err.h line 76
extern const char * lwip_strerr(signed char err)
{
  return err_strerr[(signed long int)-((signed int)err)];
}

// main
// file src/ocproxy.c line 877
signed int main(signed int argc, char **argv)
{
  signed int opt;
  signed int i;
  signed int vpnfd;
  char *str;
  char *ip_str;
  char *mtu_str;
  char *dns_str;
  struct ip_addr ip;
  struct ip_addr netmask;
  struct ip_addr gw;
  struct ip_addr dns;
  struct ocp_sock *s;
  struct netif netif;
  dns_str = (char *)(void *)0;
  mtu_str = dns_str;
  ip_str = mtu_str;
  ocp_sock_free_list = &ocp_sock_pool[(signed long int)0];
  i = 1;
  for( ; !(i >= 1024); i = i + 1)
    ocp_sock_pool[(signed long int)(i - 1)].next = &ocp_sock_pool[(signed long int)i];
  event_base=event_base_new();
  if(event_base == ((struct event_base *)NULL))
    die("can't initialize libevent\n");

  str=getenv("VPNFD");
  if(str == ((char *)NULL))
    die("VPNFD is not set, aborting\n");

  vpnfd=ocp_atoi(str);
  ip_str=getenv("INTERNAL_IP4_ADDRESS");
  mtu_str=getenv("INTERNAL_IP4_MTU");
  dns_domain=getenv("CISCO_DEF_DOMAIN");
  str=getenv("INTERNAL_IP4_DNS");
  if(!(str == ((char *)NULL)))
  {
    char *p;
    dns_str=xstrdup(str);
    p=strchr(dns_str, 32);
    if(!(p == ((char *)NULL)))
      *p = (char)0;

  }

  signed int return_value_ocp_atoi_1;
  do
  {
    opt=getopt_long(argc, argv, "I:M:d:o:D:k:gL:vT", longopts, (signed int *)(void *)0);
    if(opt == -1)
      break;

    switch(opt)
    {
      case 73:
      {
        ip_str = optarg;
        break;
      }
      case 77:
      {
        mtu_str = optarg;
        break;
      }
      case 100:
      {
        dns_str = optarg;
        break;
      }
      case 111:
      {
        dns_domain = optarg;
        break;
      }
      case 68:
      {
        return_value_ocp_atoi_1=ocp_atoi(optarg);
        s=new_listener(return_value_ocp_atoi_1, new_conn_cb);
        s->conn_type = 1;
        break;
      }
      case 107:
      {
        keep_intvl=ocp_atoi(optarg);
        break;
      }
      case 103:
      {
        allow_remote = 1;
        break;
      }
      case 76:
      {
        fwd_add(optarg);
        break;
      }
      case 118:
      {
        debug_flags = (unsigned char)(0x80U | 0x40U | 0x20U | 0x10U | 0x08U);
        break;
      }
      case 84:
      {
        tcpdump_enabled = 1;
        break;
      }
      default:
        die("unknown option: %c\n", opt);
    }
  }
  while((_Bool)1);
  if(ip_str == ((char *)NULL) || mtu_str == ((char *)NULL))
    die("missing -I or -M\n");

  signed int return_value_ipaddr_aton_2;
  return_value_ipaddr_aton_2=ipaddr_aton(ip_str, &ip);
  if(return_value_ipaddr_aton_2 == 0)
    die("Invalid IP address: '%s'\n", ip_str);

  signal(1, handle_sig);
  signal(10, handle_sig);
  signal(13, (void (*)(signed int))1);
  setlinebuf(stdout);
  setlinebuf(stderr);
  s=ocp_sock_new(vpnfd, lwip_data_cb, 1 | 2);
  memset((void *)&netif, 0, sizeof(struct netif) /*72ul*/ );
  s->netif = &netif;
  lwip_init();
  dns_init();
  if(!(dns_str == ((char *)NULL)))
  {
    signed int return_value_ipaddr_aton_3;
    return_value_ipaddr_aton_3=ipaddr_aton(dns_str, &dns);
    if(return_value_ipaddr_aton_3 == 0)
      die("Invalid DNS IP: '%s'\n", dns_str);

    dns_setserver((unsigned char)0, &dns);
  }

  (&netmask)->addr = (unsigned int)0;
  (&gw)->addr = (unsigned int)0;
  netif_add(&netif, &ip, &netmask, &gw, (void *)s, init_oc_netif, ip_input);
  signed int return_value_ocp_atoi_4;
  return_value_ocp_atoi_4=ocp_atoi(mtu_str);
  netif.mtu = (unsigned short int)return_value_ocp_atoi_4;
  netif_set_default(&netif);
  netif_set_up(&netif);
  bind_all_listeners();
  if(!(tcpdump_enabled == 0))
    tcpdump_init();

  new_periodic_event(cb_tcp_tmr, (void *)0, 250);
  new_periodic_event(cb_dns_tmr, (void *)0, 1000);
  new_periodic_event(cb_housekeeping, (void *)&vpnfd, 1000);
  event_base_dispatch(event_base);
  return 0;
}

// mem_calloc
// file lwip/src/core/mem.c line 646
void * mem_calloc(unsigned int count, unsigned int size)
{
  void *p;
  p=mem_malloc(count * size);
  if(!(p == NULL))
    memset(p, 0, (unsigned long int)(count * size));

  return p;
}

// mem_free
// file lwip/src/core/mem.c line 311
void mem_free(void *rmem)
{
  struct mem *mem;
  if(rmem == NULL)
    while((_Bool)0)
      ;

  else
  {
    do
      if(!((3ul & (unsigned long int)rmem) == 0ul))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_free: sanity check alignment", 320, (const void *)"lwip/src/core/mem.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    do
      if(!((unsigned char *)rmem >= ram) || (unsigned char *)rmem >= (unsigned char *)ram_end)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_free: legal memory", 323, (const void *)"lwip/src/core/mem.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    if((unsigned char *)rmem >= (unsigned char *)ram_end || !((unsigned char *)rmem >= ram))
    {
      unsigned int lev;
      while((_Bool)0)
        ;
      lev=sys_arch_protect();
      lwip_stats.mem.illegal = lwip_stats.mem.illegal + 1;
      sys_arch_unprotect(lev);
      goto __CPROVER_DUMP_L20;
    }

    sys_arch_sem_wait(&mem_mutex, (unsigned int)0);
    mem = (struct mem *)(void *)((unsigned char *)rmem - (signed long int)((sizeof(struct mem) /*12ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)));
    do
      if(mem->used == 0)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_free: mem->used", 339, (const void *)"lwip/src/core/mem.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    mem->used = (unsigned char)0;
    if(!(mem >= lfree))
      lfree = mem;

    lwip_stats.mem.used = lwip_stats.mem.used - (mem->next - (unsigned int)((unsigned char *)mem - ram));
    plug_holes(mem);
    sys_sem_signal(&mem_mutex);
  }

__CPROVER_DUMP_L20:
  ;
}

// mem_free_callback
// file lwip/src/api/tcpip.c line 561
signed char mem_free_callback(void *m)
{
  signed char return_value_tcpip_callback_with_block_1;
  return_value_tcpip_callback_with_block_1=tcpip_callback_with_block(mem_free, m, (unsigned char)0);
  return return_value_tcpip_callback_with_block_1;
}

// mem_init
// file ./lwip/src/include/lwip/mem.h line 88
void mem_init(void)
{
  struct mem *mem;
  while((_Bool)0)
    ;
  ram = (unsigned char *)(void *)(((unsigned long int)ram_heap + (unsigned long int)4) - (unsigned long int)1 & ~((unsigned long int)(4 - 1)));
  mem = (struct mem *)(void *)ram;
  mem->next = (unsigned int)((1024000 + 4) - 1 & ~(4 - 1));
  mem->prev = (unsigned int)0;
  mem->used = (unsigned char)0;
  ram_end = (struct mem *)(void *)&ram[(signed long int)((1024000 + 4) - 1 & ~(4 - 1))];
  ram_end->used = (unsigned char)1;
  ram_end->next = (unsigned int)((1024000 + 4) - 1 & ~(4 - 1));
  ram_end->prev = (unsigned int)((1024000 + 4) - 1 & ~(4 - 1));
  lfree = (struct mem *)(void *)ram;
  lwip_stats.mem.avail = (unsigned int)((1024000 + 4) - 1 & ~(4 - 1));
  signed char return_value_sys_sem_new_1;
  return_value_sys_sem_new_1=sys_sem_new(&mem_mutex, (unsigned char)1);
  if(!((signed int)return_value_sys_sem_new_1 == 0))
    do
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"failed to create mem_mutex", 300, (const void *)"lwip/src/core/mem.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
    while((_Bool)0);

}

// mem_malloc
// file lwip/src/core/mem.c line 494
void * mem_malloc(unsigned int size)
{
  unsigned int ptr;
  unsigned int ptr2;
  struct mem *mem;
  struct mem *mem2;
  _Bool tmp_if_expr_1;
  if(size == 0u)
    return (void *)0;

  else
  {
    size = (size + (unsigned int)4) - (unsigned int)1 & (unsigned int)~(4 - 1);
    if(!(size >= 12u))
      size = (unsigned int)((12 + 4) - 1 & ~(4 - 1));

    if(size >= 1024001u)
      return (void *)0;

    else
    {
      sys_arch_sem_wait(&mem_mutex, (unsigned int)0);
      ptr = (unsigned int)((unsigned char *)lfree - ram);
      for( ; !(ptr >= 1024000u + -size); ptr = ((struct mem *)(void *)&ram[(signed long int)ptr])->next)
      {
        mem = (struct mem *)(void *)&ram[(signed long int)ptr];
        if(mem->used == 0)
        {
          if((unsigned long int)mem->next + -(12ul + (unsigned long int)ptr) >= (unsigned long int)size)
          {
            if((unsigned long int)mem->next + -(12ul + (unsigned long int)ptr) >= 24ul + (unsigned long int)size)
            {
              ptr2 = (unsigned int)((unsigned long int)ptr + ((sizeof(struct mem) /*12ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) + (unsigned long int)size);
              mem2 = (struct mem *)(void *)&ram[(signed long int)ptr2];
              mem2->used = (unsigned char)0;
              mem2->next = mem->next;
              mem2->prev = ptr;
              mem->next = ptr2;
              mem->used = (unsigned char)1;
              if(!(mem2->next == 1024000u))
                ((struct mem *)(void *)&ram[(signed long int)mem2->next])->prev = ptr2;

              do
              {
                lwip_stats.mem.used = lwip_stats.mem.used + (unsigned int)((unsigned long int)size + ((sizeof(struct mem) /*12ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)));
                if(!(lwip_stats.mem.max >= lwip_stats.mem.used))
                  lwip_stats.mem.max = lwip_stats.mem.used;

              }
              while((_Bool)0);
            }

            else
            {
              mem->used = (unsigned char)1;
              do
              {
                lwip_stats.mem.used = lwip_stats.mem.used + (mem->next - (unsigned int)((unsigned char *)mem - ram));
                if(!(lwip_stats.mem.max >= lwip_stats.mem.used))
                  lwip_stats.mem.max = lwip_stats.mem.used;

              }
              while((_Bool)0);
            }
            if(mem == lfree)
            {
              struct mem *cur = lfree;
              for( ; !(cur->used == 0); cur = (struct mem *)(void *)&ram[(signed long int)cur->next])
                if(cur == ram_end)
                  break;

              lfree = cur;
              do
              {
                if(lfree == ram_end)
                  tmp_if_expr_1 = (_Bool)1;

                else
                  tmp_if_expr_1 = !(lfree->used != 0) ? (_Bool)1 : (_Bool)0;
                if(!tmp_if_expr_1)
                  do
                  {
                    printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_malloc: !lfree->used", 610, (const void *)"lwip/src/core/mem.c");
                    fflush((struct _IO_FILE *)(void *)0);
                    abort();
                  }
                  while((_Bool)0);

              }
              while((_Bool)0);
            }

            sys_sem_signal(&mem_mutex);
            do
              if(!((unsigned long int)ram_end >= 12ul + (unsigned long int)mem + (unsigned long int)size))
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_malloc: allocated memory not above ram_end.", 615, (const void *)"lwip/src/core/mem.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            while((_Bool)0);
            do
              if(!((12ul + (unsigned long int)mem) % 4ul == 0ul))
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_malloc: allocated memory properly aligned.", 617, (const void *)"lwip/src/core/mem.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            while((_Bool)0);
            do
              if(!((3ul & (unsigned long int)mem) == 0ul))
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_malloc: sanity check alignment", 619, (const void *)"lwip/src/core/mem.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            while((_Bool)0);
            return (void *)((unsigned char *)mem + (signed long int)((sizeof(struct mem) /*12ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)));
          }

        }

      }
      while((_Bool)0)
        ;
      lwip_stats.mem.err = lwip_stats.mem.err + 1;
      sys_sem_signal(&mem_mutex);
      return (void *)0;
    }
  }
}

// mem_trim
// file lwip/src/core/mem.c line 369
void * mem_trim(void *rmem, unsigned int newsize)
{
  unsigned int size;
  unsigned int ptr;
  unsigned int ptr2;
  struct mem *mem;
  struct mem *mem2;
  newsize = (newsize + (unsigned int)4) - (unsigned int)1 & (unsigned int)~(4 - 1);
  if(!(newsize >= 12u))
    newsize = (unsigned int)((12 + 4) - 1 & ~(4 - 1));

  if(newsize >= 1024001u)
    return (void *)0;

  else
  {
    do
      if(!((unsigned char *)rmem >= ram) || (unsigned char *)rmem >= (unsigned char *)ram_end)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_trim: legal memory", 391, (const void *)"lwip/src/core/mem.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    if((unsigned char *)rmem >= (unsigned char *)ram_end || !((unsigned char *)rmem >= ram))
    {
      unsigned int lev;
      while((_Bool)0)
        ;
      lev=sys_arch_protect();
      lwip_stats.mem.illegal = lwip_stats.mem.illegal + 1;
      sys_arch_unprotect(lev);
      return rmem;
    }

    mem = (struct mem *)(void *)((unsigned char *)rmem - (signed long int)((sizeof(struct mem) /*12ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)));
    ptr = (unsigned int)((unsigned char *)mem - ram);
    size = (unsigned int)((unsigned long int)(mem->next - ptr) - ((sizeof(struct mem) /*12ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)));
    do
      if(!(size >= newsize))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_trim can only shrink memory", 408, (const void *)"lwip/src/core/mem.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    if(!(size >= newsize))
      return (void *)0;

    else
      if(newsize == size)
        return rmem;

      else
      {
        sys_arch_sem_wait(&mem_mutex, (unsigned int)0);
        mem2 = (struct mem *)(void *)&ram[(signed long int)mem->next];
        if((signed int)mem2->used == 0)
        {
          unsigned int next = mem2->next;
          ptr2 = (unsigned int)((unsigned long int)ptr + ((sizeof(struct mem) /*12ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) + (unsigned long int)newsize);
          if(lfree == mem2)
            lfree = (struct mem *)(void *)&ram[(signed long int)ptr2];

          mem2 = (struct mem *)(void *)&ram[(signed long int)ptr2];
          mem2->used = (unsigned char)0;
          mem2->next = next;
          mem2->prev = ptr;
          mem->next = ptr2;
          if(!(mem2->next == 1024000u))
            ((struct mem *)(void *)&ram[(signed long int)mem2->next])->prev = ptr2;

          lwip_stats.mem.used = lwip_stats.mem.used - (size - newsize);
        }

        else
          if((unsigned long int)size >= 24ul + (unsigned long int)newsize)
          {
            ptr2 = (unsigned int)((unsigned long int)ptr + ((sizeof(struct mem) /*12ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) + (unsigned long int)newsize);
            mem2 = (struct mem *)(void *)&ram[(signed long int)ptr2];
            if(!(mem2 >= lfree))
              lfree = mem2;

            mem2->used = (unsigned char)0;
            mem2->next = mem->next;
            mem2->prev = ptr;
            mem->next = ptr2;
            if(!(mem2->next == 1024000u))
              ((struct mem *)(void *)&ram[(signed long int)mem2->next])->prev = ptr2;

            lwip_stats.mem.used = lwip_stats.mem.used - (size - newsize);
          }

        sys_sem_signal(&mem_mutex);
        return rmem;
      }
  }
}

// netif_add
// file lwip/src/core/netif.c line 174
struct netif * netif_add(struct netif *netif, struct ip_addr *ipaddr, struct ip_addr *netmask, struct ip_addr *gw, void *state, signed char (*init)(struct netif *), signed char (*input)(struct pbuf *, struct netif *))
{
  do
    if(init == ((signed char (*)(struct netif *))NULL))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"No init function given", 181, (const void *)"lwip/src/core/netif.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  (&netif->ip_addr)->addr = (unsigned int)0;
  (&netif->netmask)->addr = (unsigned int)0;
  (&netif->gw)->addr = (unsigned int)0;
  netif->flags = (unsigned char)0;
  netif->rs_count = (unsigned char)3;
  netif->state = state;
  unsigned char tmp_post_1 = netif_num;
  netif_num = netif_num + 1;
  netif->num = tmp_post_1;
  netif->input = input;
  netif_set_addr(netif, ipaddr, netmask, gw);
  signed char return_value;
  return_value=init(netif);
  signed int tmp_if_expr_2;
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_4;
  signed int tmp_if_expr_5;
  signed int tmp_if_expr_6;
  signed int tmp_if_expr_7;
  signed int tmp_if_expr_8;
  signed int tmp_if_expr_9;
  signed int tmp_if_expr_10;
  signed int tmp_if_expr_11;
  signed int tmp_if_expr_12;
  signed int tmp_if_expr_13;
  if(!((signed int)return_value == 0))
    return (struct netif *)(void *)0;

  else
  {
    netif->next = netif_list;
    netif_list = netif;
    return netif;
  }
}

// netif_find
// file lwip/src/core/netif.c line 353
struct netif * netif_find(char *name)
{
  struct netif *netif;
  unsigned char num;
  if(name == ((char *)NULL))
    return (struct netif *)(void *)0;

  else
  {
    num = (unsigned char)((signed int)name[(signed long int)2] - 48);
    netif = netif_list;
    for( ; !(netif == ((struct netif *)NULL)); netif = netif->next)
      if(num == netif->num)
      {
        if(*name == netif->name[0l])
        {
          if(name[1l] == netif->name[1l])
          {
            while((_Bool)0)
              ;
            return netif;
          }

        }

      }

    while((_Bool)0)
      ;
    return (struct netif *)(void *)0;
  }
}

// netif_init
// file ./lwip/src/include/lwip/netif.h line 308
void netif_init(void)
{
  ;
}

// netif_remove
// file lwip/src/core/netif.c line 294
void netif_remove(struct netif *netif)
{
  if(!(netif == ((struct netif *)NULL)))
  {
    if(!((0x01U & (unsigned int)netif->flags) == 0u))
      netif_set_down(netif);

    if(netif_list == netif)
      netif_list = netif->next;

    else
    {
      struct netif *tmpNetif = netif_list;
      for( ; !(tmpNetif == ((struct netif *)NULL)); tmpNetif = tmpNetif->next)
        if(tmpNetif->next == netif)
        {
          tmpNetif->next = netif->next;
          break;
        }

      if(tmpNetif == ((struct netif *)NULL))
        goto __CPROVER_DUMP_L12;

    }
    if(netif_default == netif)
      netif_set_default((struct netif *)(void *)0);

    while((_Bool)0)
      ;
  }


__CPROVER_DUMP_L12:
  ;
}

// netif_set_addr
// file lwip/src/core/netif.c line 280
void netif_set_addr(struct netif *netif, struct ip_addr *ipaddr, struct ip_addr *netmask, struct ip_addr *gw)
{
  netif_set_ipaddr(netif, ipaddr);
  netif_set_netmask(netif, netmask);
  netif_set_gw(netif, gw);
}

// netif_set_default
// file lwip/src/core/netif.c line 493
void netif_set_default(struct netif *netif)
{
  netif_default = netif;
  signed int tmp_if_expr_1;
  signed int tmp_if_expr_2;
  while((_Bool)0)
    ;
}

// netif_set_down
// file lwip/src/core/netif.c line 563
void netif_set_down(struct netif *netif)
{
  if(!((0x01U & (unsigned int)netif->flags) == 0u))
    netif->flags = netif->flags & (unsigned char)~0x01U;

}

// netif_set_gw
// file lwip/src/core/netif.c line 451
void netif_set_gw(struct netif *netif, struct ip_addr *gw)
{
  unsigned int tmp_if_expr_1;
  if(gw == ((struct ip_addr *)NULL))
    tmp_if_expr_1 = (unsigned int)0;

  else
    tmp_if_expr_1 = gw->addr;
  (&netif->gw)->addr = tmp_if_expr_1;
  while((_Bool)0)
    ;
}

// netif_set_ipaddr
// file lwip/src/core/netif.c line 386
void netif_set_ipaddr(struct netif *netif, struct ip_addr *ipaddr)
{
  struct tcp_pcb *pcb;
  struct tcp_pcb_listen *lpcb;
  unsigned int tmp_if_expr_1;
  if(!(ipaddr == ((struct ip_addr *)NULL)))
  {
    if(!(ipaddr->addr == netif->ip_addr.addr))
    {
      while((_Bool)0)
        ;
      pcb = tcp_active_pcbs;
      while(!(pcb == ((struct tcp_pcb *)NULL)))
        if(pcb->local_ip.addr == netif->ip_addr.addr)
        {
          struct tcp_pcb *next = pcb->next;
          while((_Bool)0)
            ;
          tcp_abort(pcb);
          pcb = next;
        }

        else
          pcb = pcb->next;
      lpcb = tcp_listen_pcbs.listen_pcbs;
      for( ; !(lpcb == ((struct tcp_pcb_listen *)NULL)); lpcb = lpcb->next)
        if(!(lpcb->local_ip.addr == 0u))
        {
          if(lpcb->local_ip.addr == netif->ip_addr.addr)
          {
            if(ipaddr == ((struct ip_addr *)NULL))
              tmp_if_expr_1 = (unsigned int)0;

            else
              tmp_if_expr_1 = ipaddr->addr;
            (&lpcb->local_ip)->addr = tmp_if_expr_1;
          }

        }

    }

  }

  unsigned int tmp_if_expr_2;
  if(ipaddr == ((struct ip_addr *)NULL))
    tmp_if_expr_2 = (unsigned int)0;

  else
    tmp_if_expr_2 = ipaddr->addr;
  (&netif->ip_addr)->addr = tmp_if_expr_2;
  while((_Bool)0)
    ;
}

// netif_set_link_down
// file lwip/src/core/netif.c line 651
void netif_set_link_down(struct netif *netif)
{
  if(!((0x10U & (unsigned int)netif->flags) == 0u))
    netif->flags = netif->flags & (unsigned char)~0x10U;

}

// netif_set_link_up
// file lwip/src/core/netif.c line 608
void netif_set_link_up(struct netif *netif)
{
  if((0x10U & (unsigned int)netif->flags) == 0u)
    netif->flags = netif->flags | (unsigned char)0x10U;

}

// netif_set_netmask
// file lwip/src/core/netif.c line 472
void netif_set_netmask(struct netif *netif, struct ip_addr *netmask)
{
  unsigned int tmp_if_expr_1;
  if(netmask == ((struct ip_addr *)NULL))
    tmp_if_expr_1 = (unsigned int)0;

  else
    tmp_if_expr_1 = netmask->addr;
  (&netif->netmask)->addr = tmp_if_expr_1;
  while((_Bool)0)
    ;
}

// netif_set_up
// file lwip/src/core/netif.c line 516
void netif_set_up(struct netif *netif)
{
  if((0x01U & (unsigned int)netif->flags) == 0u)
  {
    netif->flags = netif->flags | (unsigned char)0x01U;
    if(!((0x10U & (unsigned int)netif->flags) == 0u))
      netif->rs_count = (unsigned char)3;

  }

}

// new_conn_cb
// file src/ocproxy.c line 625
static void new_conn_cb(struct evconnlistener *listener, signed int fd, struct sockaddr *address, signed int socklen, void *ctx)
{
  struct ocp_sock *lsock = (struct ocp_sock *)ctx;
  struct ocp_sock *s;
  s=ocp_sock_new(fd, lsock->conn_type == 0 ? local_data_cb : socks_cmd_cb, 0);
  if(s == ((struct ocp_sock *)NULL))
    warn("too many connections\n");

  else
  {
    s->conn_type = lsock->conn_type;
    s->rport = lsock->rport;
    if(s->conn_type == 0)
    {
      s->rport = lsock->rport;
      start_resolution(s, lsock->rhost_name);
    }

    else
    {
      s->state = 1;
      event_add(s->ev, (struct timeval *)(void *)0);
    }
  }
}

// new_listener
// file src/ocproxy.c line 822
static struct ocp_sock * new_listener(signed int port, void (*cb)(struct evconnlistener *, signed int, struct sockaddr *, signed int, void *))
{
  struct ocp_sock *s;
  s=ocp_sock_new(-1, (void (*)(signed int, signed short int, void *))(void *)0, 2);
  s->lport = port;
  s->listen_cb = cb;
  return s;
}

// new_periodic_event
// file src/ocproxy.c line 741
static void new_periodic_event(void (*cb)(signed int, signed short int, void *), void *arg, signed int timeout_ms)
{
  struct timeval tv;
  struct event *ev;
  tv.tv_sec = (signed long int)(timeout_ms / 1000);
  tv.tv_usec = (signed long int)(1000 * (timeout_ms % 1000));
  ev=event_new(event_base, -1, (signed short int)0x10, cb, arg);
  if(ev == ((struct event *)NULL))
    die("can't create new periodic event\n");

  event_add(ev, &tv);
}

// ocp_atoi
// file src/ocproxy.c line 221
static signed int ocp_atoi(const char *s)
{
  char *p;
  signed long int val;
  val=strtol(s, &p, 0);
  _Bool tmp_if_expr_1;
  if(*s == 0)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = *p != 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    die("invalid integer: '%s'\n", s);

  return (signed int)val;
}

// ocp_sock_del
// file src/ocproxy.c line 260
static void ocp_sock_del(struct ocp_sock *s)
{
  if(s->state == 3)
    s->state = 6;

  else
  {
    close(s->fd);
    if(!(s->tpcb == ((struct tcp_pcb *)NULL)))
    {
      tcp_arg(s->tpcb, (void *)0);
      tcp_close(s->tpcb);
    }

    event_free(s->ev);
    memset((void *)s, 0xdd, sizeof(struct ocp_sock) /*2152ul*/ );
    s->next = ocp_sock_free_list;
    ocp_sock_free_list = s;
    ocp_sock_used = ocp_sock_used - 1;
  }
}

// ocp_sock_new
// file src/ocproxy.c line 230
static struct ocp_sock * ocp_sock_new(signed int fd, void (*cb)(signed int, signed short int, void *), signed int flags)
{
  struct ocp_sock *s = ocp_sock_free_list;
  if(s == ((struct ocp_sock *)NULL))
  {
    if(!((2 & flags) == 0))
      die("%s: ran out of ocp_socks\n", (const void *)"ocp_sock_new");

    return (struct ocp_sock *)(void *)0;
  }

  else
  {
    ocp_sock_free_list = s->next;
    memset((void *)s, 0, sizeof(struct ocp_sock) /*2152ul*/ );
    ocp_sock_used = ocp_sock_used + 1;
    if(!(ocp_sock_max >= ocp_sock_used))
      ocp_sock_max = ocp_sock_used;

    s->next = ocp_sock_bind_list;
    ocp_sock_bind_list = s;
    if(!(fd >= 0))
      return s;

    else
    {
      s->fd = fd;
      s->ev=event_new(event_base, fd, (signed short int)0x02, cb, (void *)s);
      if(!((1 & flags) == 0))
        event_add(s->ev, (struct timeval *)(void *)0);

      return s;
    }
  }
}

// pbuf_alloc
// file ./lwip/src/include/lwip/pbuf.h line 153
struct pbuf * pbuf_alloc(enum anonymous layer, unsigned short int length, enum anonymous_0 type)
{
  struct pbuf *p;
  struct pbuf *q;
  struct pbuf *r;
  unsigned short int offset;
  signed int rem_len;
  while((_Bool)0)
    ;
  switch((signed int)layer)
  {
    case PBUF_TRANSPORT:
    {
      offset = (unsigned short int)(16 + 20 + 20);
      break;
    }
    case PBUF_IP:
    {
      offset = (unsigned short int)(16 + 20);
      break;
    }
    case PBUF_LINK:
    {
      offset = (unsigned short int)16;
      break;
    }
    case PBUF_RAW:
    {
      offset = (unsigned short int)0;
      break;
    }
    default:
    {
      do
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_alloc: bad pbuf layer", 232, (const void *)"lwip/src/core/pbuf.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);
      while((_Bool)0);
      return (struct pbuf *)(void *)0;
    }
  }
  void *return_value_mem_malloc_1;
  void *return_value_mem_malloc_3;
  void *return_value_mem_malloc_4;
  switch((signed int)type)
  {
    case PBUF_POOL:
    {
      return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)10]);
      p = (struct pbuf *)return_value_mem_malloc_1;
      while((_Bool)0)
        ;
      if(p == ((struct pbuf *)NULL))
      {
        pbuf_pool_is_empty();
        return (struct pbuf *)(void *)0;
      }

      p->type = (unsigned char)type;
      p->next = (struct pbuf *)(void *)0;
      p->payload = (void *)(((unsigned long int)(void *)((unsigned char *)p + (signed long int)(((sizeof(struct pbuf) /*24ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) + (unsigned long int)offset)) + (unsigned long int)4) - (unsigned long int)1 & ~((unsigned long int)(4 - 1)));
      do
        if(!((unsigned long int)p->payload % 4ul == 0ul))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_alloc: pbuf p->payload properly aligned", 251, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      p->tot_len = length;
      p->len = (unsigned short int)((signed int)length < ((2048 + 4) - 1 & ~(4 - 1)) - (((signed int)offset + 4) - 1 & ~(4 - 1)) ? (signed int)length : ((2048 + 4) - 1 & ~(4 - 1)) - (((signed int)offset + 4) - 1 & ~(4 - 1)));
      do
        if(!((unsigned char *)p + 2072l >= (unsigned char *)p->payload + (signed long int)p->len))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"check p->payload + p->len does not overflow pbuf", 258, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      do
        if(!(2048 + -(4 + (signed int)offset + -1 & -4) >= 1))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"PBUF_POOL_BUFSIZE must be bigger than MEM_ALIGNMENT", 260, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      p->ref = (unsigned short int)1;
      r = p;
      rem_len = (signed int)length - (signed int)p->len;
      while(rem_len >= 1)
      {
        void *return_value_mem_malloc_2;
        return_value_mem_malloc_2=mem_malloc((unsigned int)memp_sizes[(signed long int)10]);
        q = (struct pbuf *)return_value_mem_malloc_2;
        if(q == ((struct pbuf *)NULL))
        {
          pbuf_pool_is_empty();
          pbuf_free(p);
          return (struct pbuf *)(void *)0;
        }

        q->type = (unsigned char)type;
        q->flags = (unsigned char)0;
        q->next = (struct pbuf *)(void *)0;
        r->next = q;
        do
          if(rem_len >= 0xffff)
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"rem_len < max_u16_t", 286, (const void *)"lwip/src/core/pbuf.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        q->tot_len = (unsigned short int)rem_len;
        q->len = (unsigned short int)((signed int)(unsigned short int)rem_len < ((2048 + 4) - 1 & ~(4 - 1)) ? (signed int)(unsigned short int)rem_len : (2048 + 4) - 1 & ~(4 - 1));
        q->payload = (void *)((unsigned char *)q + (signed long int)((sizeof(struct pbuf) /*24ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)));
        do
          if(!((unsigned long int)q->payload % 4ul == 0ul))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_alloc: pbuf q->payload properly aligned", 292, (const void *)"lwip/src/core/pbuf.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        do
          if(!((unsigned char *)p + 2072l >= (unsigned char *)p->payload + (signed long int)p->len))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"check p->payload + p->len does not overflow pbuf", 295, (const void *)"lwip/src/core/pbuf.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        q->ref = (unsigned short int)1;
        rem_len = rem_len - (signed int)q->len;
        r = q;
      }
      break;
    }
    case PBUF_RAM:
    {
      return_value_mem_malloc_3=mem_malloc((unsigned int)(((((sizeof(struct pbuf) /*24ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) + (unsigned long int)offset + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) + (unsigned long int)(((signed int)length + 4) - 1 & ~(4 - 1))));
      p = (struct pbuf *)return_value_mem_malloc_3;
      if(p == ((struct pbuf *)NULL))
        return (struct pbuf *)(void *)0;

      p->payload = (void *)(((unsigned long int)(void *)((unsigned char *)p + (signed long int)((sizeof(struct pbuf) /*24ul*/  + (unsigned long int)4) - (unsigned long int)1 & (unsigned long int)~(4 - 1)) + (signed long int)offset) + (unsigned long int)4) - (unsigned long int)1 & ~((unsigned long int)(4 - 1)));
      p->tot_len = length;
      p->len = p->tot_len;
      p->next = (struct pbuf *)(void *)0;
      p->type = (unsigned char)type;
      do
        if(!((unsigned long int)p->payload % 4ul == 0ul))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_alloc: pbuf->payload properly aligned", 319, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      break;
    }
    case PBUF_ROM:

    case PBUF_REF:
    {
      return_value_mem_malloc_4=mem_malloc((unsigned int)memp_sizes[(signed long int)9]);
      p = (struct pbuf *)return_value_mem_malloc_4;
      if(p == ((struct pbuf *)NULL))
      {
        while((_Bool)0)
          ;
        return (struct pbuf *)(void *)0;
      }

      p->payload = (void *)0;
      p->tot_len = length;
      p->len = p->tot_len;
      p->next = (struct pbuf *)(void *)0;
      p->type = (unsigned char)type;
      break;
    }
    default:
    {
      do
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_alloc: erroneous type", 340, (const void *)"lwip/src/core/pbuf.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);
      while((_Bool)0);
      return (struct pbuf *)(void *)0;
    }
  }
  p->ref = (unsigned short int)1;
  p->flags = (unsigned char)0;
  while((_Bool)0)
    ;
  return p;
}

// pbuf_alloced_custom
// file lwip/src/core/pbuf.c line 367
struct pbuf * pbuf_alloced_custom(enum anonymous l, unsigned short int length, enum anonymous_0 type, struct pbuf_custom *p, void *payload_mem, unsigned short int payload_mem_len)
{
  unsigned short int offset;
  while((_Bool)0)
    ;
  switch((signed int)l)
  {
    case PBUF_TRANSPORT:
    {
      offset = (unsigned short int)(16 + 20 + 20);
      break;
    }
    case PBUF_IP:
    {
      offset = (unsigned short int)(16 + 20);
      break;
    }
    case PBUF_LINK:
    {
      offset = (unsigned short int)16;
      break;
    }
    case PBUF_RAW:
    {
      offset = (unsigned short int)0;
      break;
    }
    default:
    {
      do
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_alloced_custom: bad pbuf layer", 391, (const void *)"lwip/src/core/pbuf.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);
      while((_Bool)0);
      return (struct pbuf *)(void *)0;
    }
  }
  if(!((signed int)payload_mem_len >= (4 + (signed int)offset + -1 & -4) + (signed int)length))
  {
    while((_Bool)0)
      ;
    return (struct pbuf *)(void *)0;
  }

  else
  {
    p->pbuf.next = (struct pbuf *)(void *)0;
    if(!(payload_mem == NULL))
      p->pbuf.payload = (void *)((unsigned char *)payload_mem + (signed long int)(((signed int)offset + 4) - 1 & ~(4 - 1)));

    else
      p->pbuf.payload = (void *)0;
    p->pbuf.flags = (unsigned char)0x02U;
    p->pbuf.tot_len = length;
    p->pbuf.len = p->pbuf.tot_len;
    p->pbuf.type = (unsigned char)type;
    p->pbuf.ref = (unsigned short int)1;
    return &p->pbuf;
  }
}

// pbuf_cat
// file lwip/src/core/pbuf.c line 745
void pbuf_cat(struct pbuf *h, struct pbuf *t)
{
  struct pbuf *p;
  do
    if(h == ((struct pbuf *)NULL) || t == ((struct pbuf *)NULL))
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"(h != NULL) && (t != NULL) (programmer violates API)", 750, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      goto __CPROVER_DUMP_L11;
    }

  while((_Bool)0);
  p = h;
  for( ; !(p->next == ((struct pbuf *)NULL)); p = p->next)
    p->tot_len = p->tot_len + t->tot_len;
  do
    if(!(p->tot_len == p->len))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->tot_len == p->len (of last pbuf in chain)", 758, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  do
    if(!(p->next == ((struct pbuf *)NULL)))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->next == NULL", 759, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  p->tot_len = p->tot_len + t->tot_len;
  p->next = t;

__CPROVER_DUMP_L11:
  ;
}

// pbuf_chain
// file lwip/src/core/pbuf.c line 786
void pbuf_chain(struct pbuf *h, struct pbuf *t)
{
  pbuf_cat(h, t);
  pbuf_ref(t);
  while((_Bool)0)
    ;
}

// pbuf_clen
// file lwip/src/core/pbuf.c line 704
unsigned char pbuf_clen(struct pbuf *p)
{
  unsigned char len = (unsigned char)0;
  for( ; !(p == ((struct pbuf *)NULL)); p = p->next)
    len = len + 1;
  return len;
}

// pbuf_coalesce
// file lwip/src/core/pbuf.c line 1060
struct pbuf * pbuf_coalesce(struct pbuf *p, enum anonymous layer)
{
  struct pbuf *q;
  signed char err;
  if(p->next == ((struct pbuf *)NULL))
    return p;

  else
  {
    q=pbuf_alloc(layer, p->tot_len, (enum anonymous_0)PBUF_RAM);
    if(q == ((struct pbuf *)NULL))
      return p;

    else
    {
      err=pbuf_copy(q, p);
      do
        if(!((signed int)err == 0))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_copy failed", 1073, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      pbuf_free(p);
      return q;
    }
  }
}

// pbuf_copy
// file lwip/src/core/pbuf.c line 852
signed char pbuf_copy(struct pbuf *p_to, struct pbuf *p_from)
{
  unsigned short int offset_to = (unsigned short int)0;
  unsigned short int offset_from = (unsigned short int)0;
  unsigned short int len;
  while((_Bool)0)
    ;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(p_from == ((struct pbuf *)NULL)) && !(p_to == ((struct pbuf *)NULL)))
      tmp_if_expr_1 = (signed int)p_to->tot_len >= (signed int)p_from->tot_len ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_copy: target not big enough to hold source", 861, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      return (signed char)-14;
    }

  }
  while((_Bool)0);
  while((_Bool)1)
  {
    if((signed int)p_to->len + -((signed int)offset_to) >= (signed int)p_from->len + -((signed int)offset_from))
      len = (unsigned short int)((signed int)p_from->len - (signed int)offset_from);

    else
      len = (unsigned short int)((signed int)p_to->len - (signed int)offset_to);
    memcpy((void *)((unsigned char *)p_to->payload + (signed long int)offset_to), (const void *)((unsigned char *)p_from->payload + (signed long int)offset_from), (unsigned long int)len);
    offset_to = offset_to + len;
    offset_from = offset_from + len;
    do
      if(!((signed int)p_to->len >= (signed int)offset_to))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"offset_to <= p_to->len", 877, (const void *)"lwip/src/core/pbuf.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    do
      if(!((signed int)p_from->len >= (signed int)offset_from))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"offset_from <= p_from->len", 878, (const void *)"lwip/src/core/pbuf.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    if((signed int)offset_from >= (signed int)p_from->len)
    {
      offset_from = (unsigned short int)0;
      p_from = p_from->next;
    }

    if(offset_to == p_to->len)
    {
      offset_to = (unsigned short int)0;
      p_to = p_to->next;
      do
        if(!(p_from == ((struct pbuf *)NULL)) && p_to == ((struct pbuf *)NULL))
        {
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p_to != NULL", 888, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);
          return (signed char)-14;
        }

      while((_Bool)0);
    }

    if(!(p_from == ((struct pbuf *)NULL)))
    {
      if(p_from->len == p_from->tot_len)
        do
          if(!(p_from->next == ((struct pbuf *)NULL)))
          {
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_copy() does not allow packet queues!", 894, (const void *)"lwip/src/core/pbuf.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);
            return (signed char)-6;
          }

        while((_Bool)0);

    }

    if(!(p_to == ((struct pbuf *)NULL)))
    {
      if(p_to->len == p_to->tot_len)
        do
          if(!(p_to->next == ((struct pbuf *)NULL)))
          {
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_copy() does not allow packet queues!", 899, (const void *)"lwip/src/core/pbuf.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);
            return (signed char)-6;
          }

        while((_Bool)0);

    }

    if(p_from == ((struct pbuf *)NULL))
      break;

  }
  while((_Bool)0)
    ;
  return (signed char)0;
}

// pbuf_copy_partial
// file ./lwip/src/include/lwip/pbuf.h line 168
unsigned short int pbuf_copy_partial(struct pbuf *buf, void *dataptr, unsigned short int len, unsigned short int offset)
{
  struct pbuf *p;
  unsigned short int left;
  unsigned short int buf_copy_len;
  unsigned short int copied_total = (unsigned short int)0;
  do
    if(buf == ((struct pbuf *)NULL))
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_copy_partial: invalid buf", 925, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      return (unsigned short int)0;
    }

  while((_Bool)0);
  do
    if(dataptr == NULL)
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_copy_partial: invalid dataptr", 926, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      return (unsigned short int)0;
    }

  while((_Bool)0);
  left = (unsigned short int)0;
  _Bool tmp_if_expr_1;
  if(dataptr == NULL || buf == ((struct pbuf *)NULL))
    return (unsigned short int)0;

  else
  {
    p = buf;
    for( ; !(p == ((struct pbuf *)NULL)) && !((signed int)len == 0); p = p->next)
    {
      if(!((signed int)offset == 0))
        tmp_if_expr_1 = (signed int)offset >= (signed int)p->len ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
        offset = offset - p->len;

      else
      {
        buf_copy_len = (unsigned short int)((signed int)p->len - (signed int)offset);
        if(!((signed int)len >= (signed int)buf_copy_len))
          buf_copy_len = len;

        memcpy((void *)&((char *)dataptr)[(signed long int)left], (const void *)&((char *)p->payload)[(signed long int)offset], (unsigned long int)buf_copy_len);
        copied_total = copied_total + buf_copy_len;
        left = left + buf_copy_len;
        len = len - buf_copy_len;
        offset = (unsigned short int)0;
      }
    }
    return copied_total;
  }
}

// pbuf_dechain
// file lwip/src/core/pbuf.c line 803
struct pbuf * pbuf_dechain(struct pbuf *p)
{
  struct pbuf *q;
  unsigned char tail_gone = (unsigned char)1;
  q = p->next;
  if(!(q == ((struct pbuf *)NULL)))
  {
    do
      if(!((signed int)q->tot_len == (signed int)p->tot_len + -((signed int)p->len)))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->tot_len == p->len + q->tot_len", 812, (const void *)"lwip/src/core/pbuf.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    q->tot_len = (unsigned short int)((signed int)p->tot_len - (signed int)p->len);
    p->next = (struct pbuf *)(void *)0;
    p->tot_len = p->len;
    while((_Bool)0)
      ;
    tail_gone=pbuf_free(q);
    if((signed int)tail_gone >= 1)
      while((_Bool)0)
        ;

  }

  do
    if(!(p->tot_len == p->len))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->tot_len == p->len", 829, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  return (signed int)tail_gone > 0 ? (struct pbuf *)(void *)0 : q;
}

// pbuf_free
// file ./lwip/src/include/lwip/pbuf.h line 162
unsigned char pbuf_free(struct pbuf *p)
{
  unsigned short int type;
  struct pbuf *q;
  unsigned char count;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  if(p == ((struct pbuf *)NULL))
  {
    do
      if(p == ((struct pbuf *)NULL))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p != NULL", 625, (const void *)"lwip/src/core/pbuf.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    while((_Bool)0)
      ;
    return (unsigned char)0;
  }

  else
  {
    while((_Bool)0)
      ;
    do
    {
      if((signed int)p->type == PBUF_RAM)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)p->type == PBUF_ROM ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (signed int)p->type == PBUF_REF ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (signed int)p->type == PBUF_POOL ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_3)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_free: sane type", 637, (const void *)"lwip/src/core/pbuf.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    }
    while((_Bool)0);
    count = (unsigned char)0;
    while(!(p == ((struct pbuf *)NULL)))
    {
      unsigned short int ref;
      unsigned int old_level;
      old_level=sys_arch_protect();
      do
        if(!((signed int)p->ref >= 1))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_free: p->ref > 0", 650, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      p->ref = p->ref - 1;
      ref = p->ref;
      sys_arch_unprotect(old_level);
      if((signed int)ref == 0)
      {
        q = p->next;
        while((_Bool)0)
          ;
        type = (unsigned short int)p->type;
        if(!((0x02U & (unsigned int)p->flags) == 0u))
        {
          struct pbuf_custom *pc = (struct pbuf_custom *)p;
          do
            if(pc->custom_free_function == ((void (*)(struct pbuf *))NULL))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pc->custom_free_function != NULL", 664, (const void *)"lwip/src/core/pbuf.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          pc->custom_free_function(p);
        }

        else
          if((signed int)type == PBUF_POOL)
            mem_free((void *)p);

          else
            if((signed int)type == PBUF_ROM || (signed int)type == PBUF_REF)
              mem_free((void *)p);

            else
              mem_free((void *)p);
        count = count + 1;
        p = q;
      }

      else
      {
        while((_Bool)0)
          ;
        p = (struct pbuf *)(void *)0;
      }
    }
    return count;
  }
}

// pbuf_free_callback
// file lwip/src/api/tcpip.c line 548
signed char pbuf_free_callback(struct pbuf *p)
{
  signed char return_value_tcpip_callback_with_block_1;
  return_value_tcpip_callback_with_block_1=tcpip_callback_with_block(pbuf_free_int, (void *)p, (unsigned char)0);
  return return_value_tcpip_callback_with_block_1;
}

// pbuf_free_int
// file lwip/src/api/tcpip.c line 535
static void pbuf_free_int(void *p)
{
  struct pbuf *q = (struct pbuf *)p;
  pbuf_free(q);
}

// pbuf_free_ooseq
// file lwip/src/core/pbuf.c line 118
static void pbuf_free_ooseq(void)
{
  struct tcp_pcb *pcb;
  unsigned int old_level;
  old_level=sys_arch_protect();
  pbuf_free_ooseq_pending = (volatile unsigned char)0;
  sys_arch_unprotect(old_level);
  pcb = tcp_active_pcbs;
  for( ; !(pcb == ((struct tcp_pcb *)NULL)); pcb = pcb->next)
    if(!(pcb->ooseq == ((struct tcp_seg *)NULL)))
    {
      while((_Bool)0)
        ;
      tcp_segs_free(pcb->ooseq);
      pcb->ooseq = (struct tcp_seg *)(void *)0;
      goto __CPROVER_DUMP_L8;
    }


__CPROVER_DUMP_L8:
  ;
}

// pbuf_free_ooseq_callback
// file lwip/src/core/pbuf.c line 143
static void pbuf_free_ooseq_callback(void *arg)
{
  (void)arg;
  pbuf_free_ooseq();
}

// pbuf_get_at
// file lwip/src/core/pbuf.c line 1127
unsigned char pbuf_get_at(struct pbuf *p, unsigned short int offset)
{
  unsigned short int copy_from = offset;
  struct pbuf *q = p;
  for( ; !(q == ((struct pbuf *)NULL)); q = q->next)
  {
    if(!((signed int)copy_from >= (signed int)q->len))
      break;

    copy_from = copy_from - q->len;
  }
  if(!(q == ((struct pbuf *)NULL)))
  {
    if((signed int)copy_from >= (signed int)q->len)
      goto __CPROVER_DUMP_L3;

    return ((unsigned char *)q->payload)[(signed long int)copy_from];
  }

  else
  {

  __CPROVER_DUMP_L3:
    ;
    return (unsigned char)0;
  }
}

// pbuf_header
// file lwip/src/core/pbuf.c line 511
unsigned char pbuf_header(struct pbuf *p, signed short int header_size_increment)
{
  unsigned short int type;
  void *payload;
  unsigned short int increment_magnitude;
  do
    if(p == ((struct pbuf *)NULL))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p != NULL", 517, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  _Bool tmp_if_expr_1;
  if(p == ((struct pbuf *)NULL) || (signed int)header_size_increment == 0)
    return (unsigned char)0;

  else
  {
    if(!((signed int)header_size_increment >= 0))
    {
      increment_magnitude = (unsigned short int)-((signed int)header_size_increment);
      do
        if(!((signed int)p->len >= (signed int)increment_magnitude))
        {
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"increment_magnitude <= p->len", 525, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);
          return (unsigned char)1;
        }

      while((_Bool)0);
    }

    else
      increment_magnitude = (unsigned short int)header_size_increment;
    type = (unsigned short int)p->type;
    payload = p->payload;
    if((signed int)type == PBUF_RAM || (signed int)type == PBUF_POOL)
    {
      p->payload = (void *)((unsigned char *)p->payload - (signed long int)header_size_increment);
      if(!((unsigned char *)p->payload >= (unsigned char *)p + 24l))
      {
        while((_Bool)0)
          ;
        p->payload = payload;
        return (unsigned char)1;
      }

    }

    else
      if((signed int)type == PBUF_ROM || (signed int)type == PBUF_REF)
      {
        if(!((signed int)header_size_increment >= 0))
          tmp_if_expr_1 = (signed int)increment_magnitude <= (signed int)p->len ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(tmp_if_expr_1)
          p->payload = (void *)((unsigned char *)p->payload - (signed long int)header_size_increment);

        else
          return (unsigned char)1;
      }

      else
      {
        do
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"bad pbuf type", 571, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);
        while((_Bool)0);
        return (unsigned char)1;
      }
    p->len = p->len + (unsigned short int)header_size_increment;
    p->tot_len = p->tot_len + (unsigned short int)header_size_increment;
    while((_Bool)0)
      ;
    return (unsigned char)0;
  }
}

// pbuf_memcmp
// file lwip/src/core/pbuf.c line 1154
unsigned short int pbuf_memcmp(struct pbuf *p, unsigned short int offset, const void *s2, unsigned short int n)
{
  unsigned short int start = offset;
  struct pbuf *q = p;
  for( ; !(q == ((struct pbuf *)NULL)); q = q->next)
  {
    if(!((signed int)start >= (signed int)q->len))
      break;

    start = start - q->len;
  }
  if(!(q == ((struct pbuf *)NULL)))
  {
    if(!((signed int)start >= (signed int)q->len))
    {
      unsigned short int i = (unsigned short int)0;
      for( ; !((signed int)i >= (signed int)n); i = i + 1)
      {
        unsigned char a;
        a=pbuf_get_at(q, (unsigned short int)((signed int)start + (signed int)i));
        unsigned char b = ((unsigned char *)s2)[(signed long int)i];
        if(!(a == b))
          return (unsigned short int)((signed int)i + 1);

      }
      return (unsigned short int)0;
    }

  }

  return (unsigned short int)0xffff;
}

// pbuf_memfind
// file lwip/src/core/pbuf.c line 1190
unsigned short int pbuf_memfind(struct pbuf *p, const void *mem, unsigned short int mem_len, unsigned short int start_offset)
{
  unsigned short int i;
  unsigned short int max = (unsigned short int)((signed int)p->tot_len - (signed int)mem_len);
  if((signed int)p->tot_len >= (signed int)mem_len + (signed int)start_offset)
  {
    i = start_offset;
    for( ; (signed int)max >= (signed int)i; i = i + 1)
    {
      unsigned short int plus;
      plus=pbuf_memcmp(p, i, mem, mem_len);
      if((signed int)plus == 0)
        return i;

    }
  }

  return (unsigned short int)0xFFFF;
}

// pbuf_pool_is_empty
// file lwip/src/core/pbuf.c line 152
static void pbuf_pool_is_empty(void)
{
  unsigned char queued;
  unsigned int old_level;
  old_level=sys_arch_protect();
  queued = pbuf_free_ooseq_pending;
  pbuf_free_ooseq_pending = (volatile unsigned char)1;
  sys_arch_unprotect(old_level);
  if(queued == 0)
    do
    {
      signed char return_value_tcpip_callback_with_block_1;
      return_value_tcpip_callback_with_block_1=tcpip_callback_with_block(pbuf_free_ooseq_callback, (void *)0, (unsigned char)0);
      if(!((signed int)return_value_tcpip_callback_with_block_1 == 0))
      {
        old_level=sys_arch_protect();
        pbuf_free_ooseq_pending = (volatile unsigned char)0;
        sys_arch_unprotect(old_level);
      }

    }
    while((_Bool)0);

}

// pbuf_realloc
// file ./lwip/src/include/lwip/pbuf.h line 159
void pbuf_realloc(struct pbuf *p, unsigned short int new_len)
{
  struct pbuf *q;
  unsigned short int rem_len;
  signed int grow;
  do
    if(p == ((struct pbuf *)NULL))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_realloc: p != NULL", 436, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  do
  {
    if((signed int)p->type == PBUF_POOL)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)p->type == PBUF_ROM ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)p->type == PBUF_RAM ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)p->type == PBUF_REF ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_3)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_realloc: sane p->type", 440, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  }
  while((_Bool)0);
  if(!((signed int)new_len >= (signed int)p->tot_len))
  {
    grow = (signed int)new_len - (signed int)p->tot_len;
    rem_len = new_len;
    q = p;
    while(!((signed int)q->len >= (signed int)rem_len))
    {
      rem_len = rem_len - q->len;
      do
        if(grow >= 0xffff)
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"grow < max_u16_t", 460, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      q->tot_len = q->tot_len + (unsigned short int)grow;
      q = q->next;
      do
        if(q == ((struct pbuf *)NULL))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_realloc: q != NULL", 464, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
    }
    if((signed int)q->type == PBUF_RAM)
    {
      if(!(rem_len == q->len))
      {
        void *return_value_mem_trim_4;
        return_value_mem_trim_4=mem_trim((void *)q, (unsigned int)((signed int)(unsigned short int)((unsigned char *)q->payload - (unsigned char *)q) + (signed int)rem_len));
        q = (struct pbuf *)return_value_mem_trim_4;
        do
          if(q == ((struct pbuf *)NULL))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mem_trim returned q == NULL", 474, (const void *)"lwip/src/core/pbuf.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
      }

    }

    q->len = rem_len;
    q->tot_len = q->len;
    if(!(q->next == ((struct pbuf *)NULL)))
      pbuf_free(q->next);

    q->next = (struct pbuf *)(void *)0;
  }

}

// pbuf_ref
// file lwip/src/core/pbuf.c line 723
void pbuf_ref(struct pbuf *p)
{
  unsigned int old_level;
  if(!(p == ((struct pbuf *)NULL)))
  {
    old_level=sys_arch_protect();
    p->ref = p->ref + 1;
    sys_arch_unprotect(old_level);
  }

}

// pbuf_strstr
// file lwip/src/core/pbuf.c line 1216
unsigned short int pbuf_strstr(struct pbuf *p, const char *substr)
{
  unsigned long int substr_len;
  _Bool tmp_if_expr_1;
  if(substr == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)substr[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)p->tot_len == 0xFFFF ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (unsigned short int)0xFFFF;

  else
  {
    substr_len=strlen(substr);
    if(substr_len >= 65535ul)
      return (unsigned short int)0xFFFF;

    else
    {
      unsigned short int return_value_pbuf_memfind_3;
      return_value_pbuf_memfind_3=pbuf_memfind(p, (const void *)substr, (unsigned short int)substr_len, (unsigned short int)0);
      return return_value_pbuf_memfind_3;
    }
  }
}

// pbuf_take
// file lwip/src/core/pbuf.c line 1016
signed char pbuf_take(struct pbuf *buf, const void *dataptr, unsigned short int len)
{
  struct pbuf *p;
  unsigned short int buf_copy_len;
  unsigned short int total_copy_len = len;
  unsigned short int copied_total = (unsigned short int)0;
  do
    if(buf == ((struct pbuf *)NULL))
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_take: invalid buf", 1023, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      return (signed char)0;
    }

  while((_Bool)0);
  do
    if(dataptr == NULL)
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_take: invalid dataptr", 1024, (const void *)"lwip/src/core/pbuf.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      return (signed char)0;
    }

  while((_Bool)0);
  _Bool tmp_if_expr_1;
  if(dataptr == NULL || buf == ((struct pbuf *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)buf->tot_len < (signed int)len ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (signed char)-14;

  else
  {
    p = buf;
    for( ; !((signed int)total_copy_len == 0); p = p->next)
    {
      do
        if(p == ((struct pbuf *)NULL))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_take: invalid pbuf", 1032, (const void *)"lwip/src/core/pbuf.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      buf_copy_len = total_copy_len;
      if(!((signed int)p->len >= (signed int)buf_copy_len))
        buf_copy_len = p->len;

      memcpy(p->payload, (const void *)&((char *)dataptr)[(signed long int)copied_total], (unsigned long int)buf_copy_len);
      total_copy_len = total_copy_len - buf_copy_len;
      copied_total = copied_total + buf_copy_len;
    }
    do
      if(!(copied_total == len) || !((signed int)total_copy_len == 0))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"did not copy all data", 1043, (const void *)"lwip/src/core/pbuf.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    return (signed char)0;
  }
}

// perf_init
// file contrib/ports/unix/perf.c line 61
void perf_init(char *fname)
{
  f=fopen(fname, "w");
}

// perf_print
// file contrib/ports/unix/perf.c line 40
void perf_print(unsigned long int c1l, unsigned long int c1h, unsigned long int c2l, unsigned long int c2h, char *key)
{
  unsigned long int sub_ms;
  unsigned long int sub_ls;
  sub_ms = c2h - c1h;
  sub_ls = c2l - c1l;
  if(!(c2l >= c1l))
    sub_ms = sub_ms - 1ul;

  fprintf(f, "%s: %.8lu%.8lu\n", key, sub_ms, sub_ls);
  fflush((struct _IO_FILE *)(void *)0);
}

// perf_print_times
// file contrib/ports/unix/perf.c line 54
void perf_print_times(struct tms *start, struct tms *end, char *key)
{
  fprintf(f, "%s: %lu\n", key, end->tms_stime - start->tms_stime);
  fflush((struct _IO_FILE *)(void *)0);
}

// plug_holes
// file lwip/src/core/mem.c line 236
static void plug_holes(struct mem *mem)
{
  struct mem *nmem;
  struct mem *pmem;
  do
    if(!((unsigned char *)mem >= ram))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"plug_holes: mem >= ram", 241, (const void *)"lwip/src/core/mem.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  do
    if((unsigned char *)mem >= (unsigned char *)ram_end)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"plug_holes: mem < ram_end", 242, (const void *)"lwip/src/core/mem.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  do
    if(!((signed int)mem->used == 0))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"plug_holes: mem->used == 0", 243, (const void *)"lwip/src/core/mem.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  do
    if(mem->next >= 1024001u)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"plug_holes: mem->next <= MEM_SIZE_ALIGNED", 246, (const void *)"lwip/src/core/mem.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  nmem = (struct mem *)(void *)&ram[(signed long int)mem->next];
  if(!(mem == nmem))
  {
    if((signed int)nmem->used == 0)
    {
      if(!((unsigned char *)nmem == (unsigned char *)ram_end))
      {
        if(lfree == nmem)
          lfree = mem;

        mem->next = nmem->next;
        ((struct mem *)(void *)&ram[(signed long int)nmem->next])->prev = (unsigned int)((unsigned char *)mem - ram);
      }

    }

  }

  pmem = (struct mem *)(void *)&ram[(signed long int)mem->prev];
  if(!(pmem == mem))
  {
    if((signed int)pmem->used == 0)
    {
      if(lfree == mem)
        lfree = pmem;

      pmem->next = mem->next;
      ((struct mem *)(void *)&ram[(signed long int)mem->next])->prev = (unsigned int)((unsigned char *)pmem - ram);
    }

  }

}

// recv_cb
// file src/ocproxy.c line 330
static signed char recv_cb(void *ctx, struct tcp_pcb *tpcb, struct pbuf *p, signed char err)
{
  struct ocp_sock *s = (struct ocp_sock *)ctx;
  struct pbuf *first = p;
  signed int offset;
  signed long int wlen;
  _Bool tmp_if_expr_1;
  if(s == ((struct ocp_sock *)NULL))
    return (signed char)-10;

  else
    if(p == ((struct pbuf *)NULL))
    {
      ocp_sock_del(s);
      return (signed char)0;
    }

    else
    {
      offset = s->done_len;
      do
      {
        if(!(p == ((struct pbuf *)NULL)))
          tmp_if_expr_1 = offset >= (signed int)p->len ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(!tmp_if_expr_1)
          break;

        p = p->next;
        offset = offset - (signed int)p->len;
      }
      while((_Bool)1);
      for( ; !(p == ((struct pbuf *)NULL)); p = p->next)
      {
        signed int try_len = (signed int)p->len - offset;
        wlen=write(s->fd, (const void *)((char *)p->payload + (signed long int)offset), (unsigned long int)try_len);
        offset = 0;
        if(!(wlen >= 0l))
        {
          ocp_sock_del(s);
          return (signed char)-10;
        }

        s->done_len = s->done_len + (signed int)wlen;
        tcp_recved(tpcb, (unsigned short int)wlen);
        if(!(wlen >= (signed long int)try_len))
          return (signed char)-7;

      }
      s->done_len = 0;
      pbuf_free(first);
      return (signed char)0;
    }
}

// retry_resolution
// file src/ocproxy.c line 595
static void retry_resolution(const char *hostname, struct ip_addr *ipaddr, void *arg)
{
  struct ocp_sock *s = (struct ocp_sock *)arg;
  if(dns_domain == ((char *)NULL) || !(ipaddr == ((struct ip_addr *)NULL)))
    finish_resolution(hostname, ipaddr, arg);

  else
    enqueue_dns_req(s, hostname, dns_domain, finish_resolution);
}

// sent_cb
// file src/ocproxy.c line 314
static signed char sent_cb(void *ctx, struct tcp_pcb *tpcb, unsigned short int len)
{
  struct ocp_sock *s = (struct ocp_sock *)ctx;
  if(s == ((struct ocp_sock *)NULL))
    return (signed char)0;

  else
  {
    if(!(s->lwip_blocked == 0))
    {
      s->lwip_blocked = 0;
      event_add(s->ev, (struct timeval *)(void *)0);
    }

    return (signed char)0;
  }
}

// socks_cmd_cb
// file src/ocproxy.c line 402
static void socks_cmd_cb(signed int fd, signed short int what, void *ctx)
{
  struct ocp_sock *s = (struct ocp_sock *)ctx;
  signed long int ret;
  struct socks_auth *auth = (struct socks_auth *)(void *)s->sockbuf;
  struct socks_req *req = (struct socks_req *)(void *)s->sockbuf;
  struct ip_addr ip;
  if(s->state == 5)
    local_data_cb(fd, what, ctx);

  else
  {
    ret=read(s->fd, (void *)(s->sockbuf + (signed long int)s->sock_pos), (unsigned long int)(2048 - s->sock_pos));
    if(ret >= 1l)
    {
      s->sock_pos = s->sock_pos + (signed int)ret;
      if(!((signed int)req->ver == 0x05))
        goto disconnect;

      if(s->state == 1)
      {
        if(!((unsigned long int)s->sock_pos >= 2ul))
          goto req_more;

        else
          if(1ul + (unsigned long int)auth->n_methods >= (unsigned long int)s->sock_pos)
            goto req_more;

        signed long int return_value_write_1;
        return_value_write_1=write(s->fd, (const void *)"\005\0", (unsigned long int)2);
        if(!(return_value_write_1 == 2l))
          goto disconnect;

        s->state = 2;
        s->sock_pos = 0;
        goto req_more;
      }

      else
        if(s->state == 2)
        {
          if((unsigned long int)s->sock_pos >= 4ul)
          {
            if(!((signed int)req->cmd == 0x01))
            {
              socks_reply(s, 0x07);
              goto __CPROVER_DUMP_L10;
            }

            if((signed int)req->atyp == 0x01)
            {
              if(!((unsigned long int)s->sock_pos >= 10ul))
                goto req_more;

              ip.addr = req->u.ipv4.dst_addr;
              unsigned short int return_value_lwip_ntohs_2;
              return_value_lwip_ntohs_2=lwip_ntohs(req->u.ipv4.dst_port);
              s->rport = (signed int)return_value_lwip_ntohs_2;
              start_connection(s, &ip);
              goto __CPROVER_DUMP_L10;
            }

            else
              if((signed int)req->atyp == 0x03)
              {
                unsigned char *name = req->u.fqdn.fqdn_name;
                unsigned short int namelen = (unsigned short int)req->u.fqdn.fqdn_len;
                if(!((unsigned long int)s->sock_pos >= 5ul))
                  goto req_more;

                if(4ul + (unsigned long int)req->u.fqdn.fqdn_len >= (unsigned long int)s->sock_pos)
                  goto req_more;

                s->rport = (signed int)name[(signed long int)namelen] << 8 | (signed int)name[(signed long int)((signed int)namelen + 1)];
                name[(signed long int)namelen] = (unsigned char)0;
                start_resolution(s, (char *)name);
                goto __CPROVER_DUMP_L10;
              }

              else
              {
                socks_reply(s, 0x08);
                goto __CPROVER_DUMP_L10;
              }
          }

        }


    req_more:
      ;
      event_add(s->ev, (struct timeval *)(void *)0);
    }

    else
    {

    disconnect:
      ;
      ocp_sock_del(s);
    }
  }

__CPROVER_DUMP_L10:
  ;
}

// socks_reply
// file src/ocproxy.c line 382
static void socks_reply(struct ocp_sock *s, signed int rep)
{
  struct socks_reply rsp;
  memset((void *)&rsp, 0, sizeof(struct socks_reply) /*10ul*/ );
  rsp.ver = (unsigned char)0x05;
  rsp.rep = (unsigned char)rep;
  rsp.atyp = (unsigned char)0x01;
  if(rep == 0)
  {
    if(!(s->tpcb == ((struct tcp_pcb *)NULL)))
    {
      rsp.bnd_addr=lwip_htonl(s->tpcb->local_ip.addr);
      rsp.bnd_port=lwip_htons(s->tpcb->local_port);
    }

  }

  signed long int return_value_write_1;
  return_value_write_1=write(s->fd, (const void *)&rsp, sizeof(struct socks_reply) /*10ul*/ );
  if(!((unsigned long int)return_value_write_1 == sizeof(struct socks_reply) /*10ul*/ ))
    rep = -1;

  if(!(rep == 0))
    ocp_sock_del(s);

}

// start_connection
// file src/ocproxy.c line 516
static void start_connection(struct ocp_sock *s, struct ip_addr *ipaddr)
{
  struct tcp_pcb *tpcb;
  signed char err;
  s->state = 4;
  tpcb=tcp_new();
  if(tpcb == ((struct tcp_pcb *)NULL))
    die("%s: out of memory\n", (const void *)"start_connection");

  tpcb->flags = tpcb->flags | (unsigned char)0x0040U;
  tcp_arg(tpcb, (void *)s);
  tcp_recv(tpcb, (signed char (*)(void *, struct tcp_pcb *, struct pbuf *, signed char))(void *)0);
  tcp_err(tpcb, tcp_err_cb);
  s->tpcb = tpcb;
  if(!(keep_intvl == 0))
  {
    tpcb->so_options = tpcb->so_options | (unsigned char)0x08U;
    tpcb->keep_intvl = (unsigned int)(keep_intvl * 1000);
    tpcb->keep_idle = tpcb->keep_intvl;
  }

  err=tcp_connect(tpcb, ipaddr, (unsigned short int)s->rport, connect_cb);
  if(!((signed int)err == 0))
    warn("%s: tcp_connect() returned %d\n", (const void *)"start_connection", (signed int)err);

}

// start_resolution
// file src/ocproxy.c line 609
static void start_resolution(struct ocp_sock *s, const char *hostname)
{
  s->state = 3;
  char *return_value_strchr_1;
  return_value_strchr_1=strchr(hostname, 46);
  if(!(return_value_strchr_1 == ((char *)NULL)))
    enqueue_dns_req(s, hostname, (const char *)(void *)0, retry_resolution);

  else
    enqueue_dns_req(s, hostname, dns_domain, finish_resolution);
}

// stats_display
// file lwip/src/core/stats.c line 155
void stats_display(void)
{
  signed short int i;
  stats_display_proto(&lwip_stats.link, "LINK");
  stats_display_proto(&lwip_stats.ip_frag, "IP_FRAG");
  stats_display_proto(&lwip_stats.ip, "IP");
  stats_display_proto(&lwip_stats.icmp, "ICMP");
  stats_display_proto(&lwip_stats.udp, "UDP");
  stats_display_proto(&lwip_stats.tcp, "TCP");
  stats_display_mem(&lwip_stats.mem, "HEAP");
  i = (signed short int)0;
  for( ; !((signed int)i >= 11); i = i + 1)
    ;
  stats_display_sys(&lwip_stats.sys);
}

// stats_display_mem
// file lwip/src/core/stats.c line 113
void stats_display_mem(struct stats_mem *mem, const char *name)
{
  do
    printf("\nMEM %s\n\t", name);
  while((_Bool)0);
  do
    printf("avail: %u\n\t", (unsigned int)mem->avail);
  while((_Bool)0);
  do
    printf("used: %u\n\t", (unsigned int)mem->used);
  while((_Bool)0);
  do
    printf("max: %u\n\t", (unsigned int)mem->max);
  while((_Bool)0);
  do
    printf("err: %u\n", (unsigned int)mem->err);
  while((_Bool)0);
}

// stats_display_proto
// file lwip/src/core/stats.c line 72
void stats_display_proto(struct stats_proto *proto, const char *name)
{
  do
    printf("\n%s\n\t", name);
  while((_Bool)0);
  do
    printf("xmit: %hu\n\t", proto->xmit);
  while((_Bool)0);
  do
    printf("recv: %hu\n\t", proto->recv);
  while((_Bool)0);
  do
    printf("fw: %hu\n\t", proto->fw);
  while((_Bool)0);
  do
    printf("drop: %hu\n\t", proto->drop);
  while((_Bool)0);
  do
    printf("chkerr: %hu\n\t", proto->chkerr);
  while((_Bool)0);
  do
    printf("lenerr: %hu\n\t", proto->lenerr);
  while((_Bool)0);
  do
    printf("memerr: %hu\n\t", proto->memerr);
  while((_Bool)0);
  do
    printf("rterr: %hu\n\t", proto->rterr);
  while((_Bool)0);
  do
    printf("proterr: %hu\n\t", proto->proterr);
  while((_Bool)0);
  do
    printf("opterr: %hu\n\t", proto->opterr);
  while((_Bool)0);
  do
    printf("err: %hu\n\t", proto->err);
  while((_Bool)0);
  do
    printf("cachehit: %hu\n", proto->cachehit);
  while((_Bool)0);
}

// stats_display_sys
// file lwip/src/core/stats.c line 139
void stats_display_sys(struct stats_sys *sys)
{
  do
    printf("\nSYS\n\t");
  while((_Bool)0);
  do
    printf("sem.used:  %u\n\t", (unsigned int)sys->sem.used);
  while((_Bool)0);
  do
    printf("sem.max:   %u\n\t", (unsigned int)sys->sem.max);
  while((_Bool)0);
  do
    printf("sem.err:   %u\n\t", (unsigned int)sys->sem.err);
  while((_Bool)0);
  do
    printf("mutex.used: %u\n\t", (unsigned int)sys->mutex.used);
  while((_Bool)0);
  do
    printf("mutex.max:  %u\n\t", (unsigned int)sys->mutex.max);
  while((_Bool)0);
  do
    printf("mutex.err:  %u\n\t", (unsigned int)sys->mutex.err);
  while((_Bool)0);
  do
    printf("mbox.used:  %u\n\t", (unsigned int)sys->mbox.used);
  while((_Bool)0);
  do
    printf("mbox.max:   %u\n\t", (unsigned int)sys->mbox.max);
  while((_Bool)0);
  do
    printf("mbox.err:   %u\n\t", (unsigned int)sys->mbox.err);
  while((_Bool)0);
}

// stats_init
// file ./lwip/src/include/lwip/stats.h line 166
void stats_init(void)
{
  lwip_stats.mem.name = "MEM";
}

// sys_arch_mbox_fetch
// file ./lwip/src/include/lwip/sys.h line 191
unsigned int sys_arch_mbox_fetch(struct sys_mbox **mb, void **msg, unsigned int timeout)
{
  unsigned int time_needed = (unsigned int)0;
  struct sys_mbox *sys_arch_mbox_fetch__1__mbox;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(mb == ((struct sys_mbox **)NULL)))
      tmp_if_expr_1 = *mb != (struct sys_mbox *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid mbox", 305, (const void *)"contrib/ports/unix/sys_arch.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  }
  while((_Bool)0);
  sys_arch_mbox_fetch__1__mbox = *mb;
  sys_arch_sem_wait(&sys_arch_mbox_fetch__1__mbox->mutex, (unsigned int)0);
  while(sys_arch_mbox_fetch__1__mbox->first == sys_arch_mbox_fetch__1__mbox->last)
  {
    sys_sem_signal(&sys_arch_mbox_fetch__1__mbox->mutex);
    if(!(timeout == 0u))
    {
      time_needed=sys_arch_sem_wait(&sys_arch_mbox_fetch__1__mbox->not_empty, timeout);
      if((unsigned long int)time_needed == 0xffffffffUL)
        return (unsigned int)0xffffffffUL;

    }

    else
      sys_arch_sem_wait(&sys_arch_mbox_fetch__1__mbox->not_empty, (unsigned int)0);
    sys_arch_sem_wait(&sys_arch_mbox_fetch__1__mbox->mutex, (unsigned int)0);
  }
  if(!(msg == ((void **)NULL)))
  {
    while((_Bool)0)
      ;
    *msg = sys_arch_mbox_fetch__1__mbox->msgs[(signed long int)(sys_arch_mbox_fetch__1__mbox->first % 128)];
  }

  else
    while((_Bool)0)
      ;
  sys_arch_mbox_fetch__1__mbox->first = sys_arch_mbox_fetch__1__mbox->first + 1;
  if(!(sys_arch_mbox_fetch__1__mbox->wait_send == 0))
    sys_sem_signal(&sys_arch_mbox_fetch__1__mbox->not_full);

  sys_sem_signal(&sys_arch_mbox_fetch__1__mbox->mutex);
  return time_needed;
}

// sys_arch_mbox_tryfetch
// file contrib/ports/unix/sys_arch.c line 268
unsigned int sys_arch_mbox_tryfetch(struct sys_mbox **mb, void **msg)
{
  struct sys_mbox *sys_arch_mbox_tryfetch__1__mbox;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(mb == ((struct sys_mbox **)NULL)))
      tmp_if_expr_1 = *mb != (struct sys_mbox *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid mbox", 271, (const void *)"contrib/ports/unix/sys_arch.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  }
  while((_Bool)0);
  sys_arch_mbox_tryfetch__1__mbox = *mb;
  sys_arch_sem_wait(&sys_arch_mbox_tryfetch__1__mbox->mutex, (unsigned int)0);
  if(sys_arch_mbox_tryfetch__1__mbox->first == sys_arch_mbox_tryfetch__1__mbox->last)
  {
    sys_sem_signal(&sys_arch_mbox_tryfetch__1__mbox->mutex);
    return (unsigned int)0xffffffffUL;
  }

  else
  {
    if(!(msg == ((void **)NULL)))
    {
      while((_Bool)0)
        ;
      *msg = sys_arch_mbox_tryfetch__1__mbox->msgs[(signed long int)(sys_arch_mbox_tryfetch__1__mbox->first % 128)];
    }

    else
      while((_Bool)0)
        ;
    sys_arch_mbox_tryfetch__1__mbox->first = sys_arch_mbox_tryfetch__1__mbox->first + 1;
    if(!(sys_arch_mbox_tryfetch__1__mbox->wait_send == 0))
      sys_sem_signal(&sys_arch_mbox_tryfetch__1__mbox->not_full);

    sys_sem_signal(&sys_arch_mbox_tryfetch__1__mbox->mutex);
    return (unsigned int)0;
  }
}

// sys_arch_protect
// file ./lwip/src/include/lwip/sys.h line 277
unsigned int sys_arch_protect(void)
{
  unsigned long int return_value_pthread_self_1;
  return_value_pthread_self_1=pthread_self();
  if(!(lwprot_thread == return_value_pthread_self_1))
  {
    pthread_mutex_lock(&lwprot_mutex);
    lwprot_thread=pthread_self();
    lwprot_count = 1;
  }

  else
    lwprot_count = lwprot_count + 1;
  return (unsigned int)0;
}

// sys_arch_sem_wait
// file ./lwip/src/include/lwip/sys.h line 148
unsigned int sys_arch_sem_wait(struct sys_sem **s, unsigned int timeout)
{
  unsigned int time_needed = (unsigned int)0;
  struct sys_sem *sem;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(s == ((struct sys_sem **)NULL)))
      tmp_if_expr_1 = *s != (struct sys_sem *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid sem", 420, (const void *)"contrib/ports/unix/sys_arch.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  }
  while((_Bool)0);
  sem = *s;
  pthread_mutex_lock(&sem->mutex);
  while(!(sem->c >= 1u))
    if(timeout >= 1u)
    {
      time_needed=cond_wait(&sem->cond, &sem->mutex, timeout);
      if((unsigned long int)time_needed == 0xffffffffUL)
      {
        pthread_mutex_unlock(&sem->mutex);
        return (unsigned int)0xffffffffUL;
      }

    }

    else
      cond_wait(&sem->cond, &sem->mutex, (unsigned int)0);
  sem->c = sem->c - 1u;
  pthread_mutex_unlock(&sem->mutex);
  return (unsigned int)time_needed;
}

// sys_arch_unprotect
// file ./lwip/src/include/lwip/sys.h line 278
void sys_arch_unprotect(unsigned int pval)
{
  (void)pval;
  unsigned long int return_value_pthread_self_1;
  return_value_pthread_self_1=pthread_self();
  if(lwprot_thread == return_value_pthread_self_1)
  {
    lwprot_count = lwprot_count - 1;
    if(lwprot_count == 0)
    {
      lwprot_thread = (unsigned long int)0xDEAD;
      pthread_mutex_unlock(&lwprot_mutex);
    }

  }

}

// sys_init
// file ./lwip/src/include/lwip/sys.h line 228
void sys_init(void)
{
  gettimeofday(&starttime, (struct timezone *)(void *)0);
}

// sys_jiffies
// file contrib/ports/unix/sys_arch.c line 567
unsigned int sys_jiffies(void)
{
  struct timeval tv;
  unsigned long int sec;
  signed long int usec;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  sec = (unsigned long int)(tv.tv_sec - starttime.tv_sec);
  usec = tv.tv_usec;
  if(sec >= 21474836ul)
    return (~0U >> 1) - (unsigned int)1;

  else
  {
    usec = usec + (1000000L / (signed long int)100 - (signed long int)1);
    usec = usec / (1000000L / (signed long int)100);
    return (unsigned int)((unsigned long int)100 * sec + (unsigned long int)usec);
  }
}

// sys_mbox_free
// file contrib/ports/unix/sys_arch.c line 177
void sys_mbox_free(struct sys_mbox **mb)
{
  if(!(mb == ((struct sys_mbox **)NULL)))
  {
    if(!(*mb == ((struct sys_mbox *)NULL)))
    {
      struct sys_mbox *sys_mbox_free__1__1__mbox = *mb;
      lwip_stats.sys.mbox.used = lwip_stats.sys.mbox.used - 1;
      sys_arch_sem_wait(&sys_mbox_free__1__1__mbox->mutex, (unsigned int)0);
      sys_sem_free_internal(sys_mbox_free__1__1__mbox->not_empty);
      sys_sem_free_internal(sys_mbox_free__1__1__mbox->not_full);
      sys_sem_free_internal(sys_mbox_free__1__1__mbox->mutex);
      sys_mbox_free__1__1__mbox->mutex = (struct sys_sem *)(void *)0;
      sys_mbox_free__1__1__mbox->not_full = sys_mbox_free__1__1__mbox->mutex;
      sys_mbox_free__1__1__mbox->not_empty = sys_mbox_free__1__1__mbox->not_full;
      free((void *)sys_mbox_free__1__1__mbox);
    }

  }

}

// sys_mbox_new
// file ./lwip/src/include/lwip/sys.h line 174
signed char sys_mbox_new(struct sys_mbox **mb, signed int size)
{
  struct sys_mbox *sys_mbox_new__1__mbox;
  (void)size;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct sys_mbox) /*1064ul*/ );
  sys_mbox_new__1__mbox = (struct sys_mbox *)return_value_malloc_1;
  if(sys_mbox_new__1__mbox == ((struct sys_mbox *)NULL))
    return (signed char)-1;

  else
  {
    sys_mbox_new__1__mbox->last = 0;
    sys_mbox_new__1__mbox->first = sys_mbox_new__1__mbox->last;
    sys_mbox_new__1__mbox->not_empty=sys_sem_new_internal((unsigned char)0);
    sys_mbox_new__1__mbox->not_full=sys_sem_new_internal((unsigned char)0);
    sys_mbox_new__1__mbox->mutex=sys_sem_new_internal((unsigned char)1);
    sys_mbox_new__1__mbox->wait_send = 0;
    do
    {
      lwip_stats.sys.mbox.used = lwip_stats.sys.mbox.used + (unsigned short int)1;
      if(!((signed int)lwip_stats.sys.mbox.max >= (signed int)lwip_stats.sys.mbox.used))
        lwip_stats.sys.mbox.max = lwip_stats.sys.mbox.used;

    }
    while((_Bool)0);
    *mb = sys_mbox_new__1__mbox;
    return (signed char)0;
  }
}

// sys_mbox_post
// file ./lwip/src/include/lwip/sys.h line 179
void sys_mbox_post(struct sys_mbox **mb, void *msg)
{
  unsigned char first;
  struct sys_mbox *sys_mbox_post__1__mbox;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(mb == ((struct sys_mbox **)NULL)))
      tmp_if_expr_1 = *mb != (struct sys_mbox *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid mbox", 235, (const void *)"contrib/ports/unix/sys_arch.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  }
  while((_Bool)0);
  sys_mbox_post__1__mbox = *mb;
  sys_arch_sem_wait(&sys_mbox_post__1__mbox->mutex, (unsigned int)0);
  while((_Bool)0)
    ;
  for( ; 1 + sys_mbox_post__1__mbox->last >= 128 + sys_mbox_post__1__mbox->first; sys_mbox_post__1__mbox->wait_send = sys_mbox_post__1__mbox->wait_send - 1)
  {
    sys_mbox_post__1__mbox->wait_send = sys_mbox_post__1__mbox->wait_send + 1;
    sys_sem_signal(&sys_mbox_post__1__mbox->mutex);
    sys_arch_sem_wait(&sys_mbox_post__1__mbox->not_full, (unsigned int)0);
    sys_arch_sem_wait(&sys_mbox_post__1__mbox->mutex, (unsigned int)0);
  }
  sys_mbox_post__1__mbox->msgs[(signed long int)(sys_mbox_post__1__mbox->last % 128)] = msg;
  if(sys_mbox_post__1__mbox->last == sys_mbox_post__1__mbox->first)
    first = (unsigned char)1;

  else
    first = (unsigned char)0;
  sys_mbox_post__1__mbox->last = sys_mbox_post__1__mbox->last + 1;
  if(!(first == 0))
    sys_sem_signal(&sys_mbox_post__1__mbox->not_empty);

  sys_sem_signal(&sys_mbox_post__1__mbox->mutex);
}

// sys_mbox_trypost
// file ./lwip/src/include/lwip/sys.h line 183
signed char sys_mbox_trypost(struct sys_mbox **mb, void *msg)
{
  unsigned char first;
  struct sys_mbox *sys_mbox_trypost__1__mbox;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(mb == ((struct sys_mbox **)NULL)))
      tmp_if_expr_1 = *mb != (struct sys_mbox *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid mbox", 198, (const void *)"contrib/ports/unix/sys_arch.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  }
  while((_Bool)0);
  sys_mbox_trypost__1__mbox = *mb;
  sys_arch_sem_wait(&sys_mbox_trypost__1__mbox->mutex, (unsigned int)0);
  while((_Bool)0)
    ;
  if(1 + sys_mbox_trypost__1__mbox->last >= 128 + sys_mbox_trypost__1__mbox->first)
  {
    sys_sem_signal(&sys_mbox_trypost__1__mbox->mutex);
    return (signed char)-1;
  }

  else
  {
    sys_mbox_trypost__1__mbox->msgs[(signed long int)(sys_mbox_trypost__1__mbox->last % 128)] = msg;
    if(sys_mbox_trypost__1__mbox->last == sys_mbox_trypost__1__mbox->first)
      first = (unsigned char)1;

    else
      first = (unsigned char)0;
    sys_mbox_trypost__1__mbox->last = sys_mbox_trypost__1__mbox->last + 1;
    if(!(first == 0))
      sys_sem_signal(&sys_mbox_trypost__1__mbox->not_empty);

    sys_sem_signal(&sys_mbox_trypost__1__mbox->mutex);
    return (signed char)0;
  }
}

// sys_msleep
// file lwip/src/core/sys.c line 55
void sys_msleep(unsigned int ms)
{
  if(ms >= 1u)
  {
    struct sys_sem *delaysem;
    signed char err;
    err=sys_sem_new(&delaysem, (unsigned char)0);
    if((signed int)err == 0)
    {
      sys_arch_sem_wait(&delaysem, ms);
      sys_sem_free(&delaysem);
    }

  }

}

// sys_now
// file contrib/ports/unix/sys_arch.c line 480
unsigned int sys_now(void)
{
  struct timeval tv;
  unsigned int sec;
  unsigned int usec;
  unsigned int msec;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  sec = (unsigned int)(tv.tv_sec - starttime.tv_sec);
  usec = (unsigned int)(tv.tv_usec - starttime.tv_usec);
  msec = sec * (unsigned int)1000 + usec / (unsigned int)1000;
  return msec;
}

// sys_sem_free
// file ./lwip/src/include/lwip/sys.h line 151
void sys_sem_free(struct sys_sem **sem)
{
  if(!(sem == ((struct sys_sem **)NULL)))
  {
    if(!(*sem == ((struct sys_sem *)NULL)))
    {
      lwip_stats.sys.sem.used = lwip_stats.sys.sem.used - 1;
      sys_sem_free_internal(*sem);
    }

  }

}

// sys_sem_free_internal
// file contrib/ports/unix/sys_arch.c line 462
static void sys_sem_free_internal(struct sys_sem *sem)
{
  pthread_cond_destroy(&sem->cond);
  pthread_mutex_destroy(&sem->mutex);
  free((void *)sem);
}

// sys_sem_new
// file ./lwip/src/include/lwip/sys.h line 139
signed char sys_sem_new(struct sys_sem **sem, unsigned char count)
{
  do
  {
    lwip_stats.sys.sem.used = lwip_stats.sys.sem.used + (unsigned short int)1;
    if(!((signed int)lwip_stats.sys.sem.max >= (signed int)lwip_stats.sys.sem.used))
      lwip_stats.sys.sem.max = lwip_stats.sys.sem.used;

  }
  while((_Bool)0);
  *sem=sys_sem_new_internal(count);
  if(*sem == ((struct sys_sem *)NULL))
    return (signed char)-1;

  else
    return (signed char)0;
}

// sys_sem_new_internal
// file contrib/ports/unix/sys_arch.c line 350
static struct sys_sem * sys_sem_new_internal(unsigned char count)
{
  struct sys_sem *sem;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct sys_sem) /*96ul*/ );
  sem = (struct sys_sem *)return_value_malloc_1;
  if(!(sem == ((struct sys_sem *)NULL)))
  {
    sem->c = (unsigned int)count;
    pthread_cond_init(&sem->cond, (const union anonymous_5 *)(void *)0);
    pthread_mutex_init(&sem->mutex, (const union anonymous_5 *)(void *)0);
  }

  return sem;
}

// sys_sem_signal
// file ./lwip/src/include/lwip/sys.h line 142
void sys_sem_signal(struct sys_sem **s)
{
  struct sys_sem *sem;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(s == ((struct sys_sem **)NULL)))
      tmp_if_expr_1 = *s != (struct sys_sem *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid sem", 447, (const void *)"contrib/ports/unix/sys_arch.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  }
  while((_Bool)0);
  sem = *s;
  pthread_mutex_lock(&sem->mutex);
  sem->c = sem->c + 1u;
  if(sem->c >= 2u)
    sem->c = (unsigned int)1;

  pthread_cond_broadcast(&sem->cond);
  pthread_mutex_unlock(&sem->mutex);
}

// sys_thread_new
// file ./lwip/src/include/lwip/sys.h line 223
struct sys_thread * sys_thread_new(const char *name, void (*function)(void *), void *arg, signed int stacksize, signed int prio)
{
  signed int code;
  unsigned long int tmp;
  struct sys_thread *st = (struct sys_thread *)(void *)0;
  (void)name;
  (void)stacksize;
  (void)prio;
  code=pthread_create(&tmp, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))function, arg);
  if(code == 0)
    st=introduce_thread(tmp);

  if(st == ((struct sys_thread *)NULL))
  {
    while((_Bool)0)
      ;
    abort();
  }

  return st;
}

// sys_timeout
// file lwip/src/core/timers.c line 325
void sys_timeout(unsigned int msecs, void (*handler)(void *), void *arg)
{
  struct sys_timeo *timeout;
  struct sys_timeo *t;
  void *return_value_mem_malloc_1;
  return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)8]);
  timeout = (struct sys_timeo *)return_value_mem_malloc_1;
  _Bool tmp_if_expr_2;
  if(timeout == ((struct sys_timeo *)NULL))
    do
      if(timeout == ((struct sys_timeo *)NULL))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"sys_timeout: timeout != NULL, pool MEMP_SYS_TIMEOUT is empty", 335, (const void *)"lwip/src/core/timers.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);

  else
  {
    timeout->next = (struct sys_timeo *)(void *)0;
    timeout->h = handler;
    timeout->arg = arg;
    timeout->time = msecs;
    if(next_timeout == ((struct sys_timeo *)NULL))
      next_timeout = timeout;

    else
      if(!(msecs >= next_timeout->time))
      {
        next_timeout->time = next_timeout->time - msecs;
        timeout->next = next_timeout;
        next_timeout = timeout;
      }

      else
      {
        t = next_timeout;
        for( ; !(t == ((struct sys_timeo *)NULL)); t = t->next)
        {
          timeout->time = timeout->time - t->time;
          if(t->next == ((struct sys_timeo *)NULL))
            tmp_if_expr_2 = (_Bool)1;

          else
            tmp_if_expr_2 = t->next->time > timeout->time ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_2)
          {
            if(!(t->next == ((struct sys_timeo *)NULL)))
              t->next->time = t->next->time - timeout->time;

            timeout->next = t->next;
            t->next = timeout;
            break;
          }

        }
      }
  }
}

// sys_timeouts_init
// file ./lwip/src/include/lwip/timers.h line 77
void sys_timeouts_init(void)
{
  sys_timeout((unsigned int)1000, ip_reass_timer, (void *)0);
  sys_timeout((unsigned int)1000, dns_timer, (void *)0);
}

// sys_timeouts_mbox_fetch
// file lwip/src/core/timers.c line 498
void sys_timeouts_mbox_fetch(struct sys_mbox **mbox, void **msg)
{
  unsigned int time_needed;
  struct sys_timeo *tmptimeout;
  void (*handler)(void *);
  void *arg;

again:
  ;
  while((_Bool)1)
  {
    if(next_timeout == ((struct sys_timeo *)NULL))
    {
      time_needed=sys_arch_mbox_fetch(mbox, msg, (unsigned int)0);
      goto __CPROVER_DUMP_L8;
    }

    if(next_timeout->time >= 1u)
      time_needed=sys_arch_mbox_fetch(mbox, msg, next_timeout->time);

    else
      time_needed = (unsigned int)0xffffffffUL;
    if(!((unsigned long int)time_needed == 0xffffffffUL))
      break;

    tmptimeout = next_timeout;
    next_timeout = tmptimeout->next;
    handler = tmptimeout->h;
    arg = tmptimeout->arg;
    mem_free((void *)tmptimeout);
    if(!(handler == ((void (*)(void *))NULL)))
    {
      sys_arch_sem_wait(&lock_tcpip_core, (unsigned int)0);
      handler(arg);
      sys_sem_signal(&lock_tcpip_core);
    }

  }
  if(!(time_needed >= next_timeout->time))
    next_timeout->time = next_timeout->time - time_needed;

  else
    next_timeout->time = (unsigned int)0;

__CPROVER_DUMP_L8:
  ;
}

// sys_untimeout
// file lwip/src/core/timers.c line 396
void sys_untimeout(void (*handler)(void *), void *arg)
{
  struct sys_timeo *prev_t;
  struct sys_timeo *t;
  if(!(next_timeout == ((struct sys_timeo *)NULL)))
  {
    t = next_timeout;
    prev_t = (struct sys_timeo *)(void *)0;
    for( ; !(t == ((struct sys_timeo *)NULL)); t = t->next)
    {
      if(t->h == handler)
      {
        if(t->arg == arg)
        {
          if(prev_t == ((struct sys_timeo *)NULL))
            next_timeout = t->next;

          else
            prev_t->next = t->next;
          if(!(t->next == ((struct sys_timeo *)NULL)))
            t->next->time = t->next->time + t->time;

          mem_free((void *)t);
          goto __CPROVER_DUMP_L8;
        }

      }

      prev_t = t;
    }
    goto __CPROVER_DUMP_L8;
  }


__CPROVER_DUMP_L8:
  ;
}

// tcp_abandon
// file lwip/src/core/tcp.c line 360
void tcp_abandon(struct tcp_pcb *pcb, signed int reset)
{
  unsigned int tcp_abandon__1__seqno;
  unsigned int tcp_abandon__1__ackno;
  void (*errf)(void *, signed char);
  void *errf_arg;
  do
    if((signed int)pcb->state == LISTEN)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"don't call tcp_abort/tcp_abandon for listen-pcbs", 370, (const void *)"lwip/src/core/tcp.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  _Bool tmp_if_expr_1;
  if((signed int)pcb->state == TIME_WAIT)
  {
    tcp_pcb_remove(&tcp_tw_pcbs, pcb);
    mem_free((void *)pcb);
  }

  else
  {
    signed int send_rst;
    if(!(reset == 0))
      tmp_if_expr_1 = (signed int)pcb->state != CLOSED ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    send_rst = (signed int)tmp_if_expr_1;
    tcp_abandon__1__seqno = pcb->snd_nxt;
    tcp_abandon__1__ackno = pcb->rcv_nxt;
    errf = pcb->errf;
    errf_arg = pcb->callback_arg;
    do
    {
      tcp_pcb_remove(&tcp_active_pcbs, pcb);
      tcp_active_pcbs_changed = (unsigned char)1;
    }
    while((_Bool)0);
    if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
      tcp_segs_free(pcb->unacked);

    if(!(pcb->unsent == ((struct tcp_seg *)NULL)))
      tcp_segs_free(pcb->unsent);

    if(!(pcb->ooseq == ((struct tcp_seg *)NULL)))
      tcp_segs_free(pcb->ooseq);

    if(!(send_rst == 0))
    {
      while((_Bool)0)
        ;
      tcp_rst_impl(tcp_abandon__1__seqno, tcp_abandon__1__ackno, &pcb->local_ip, &pcb->remote_ip, pcb->local_port, pcb->remote_port);
    }

    mem_free((void *)pcb);
    do
      if(!(errf == ((void (*)(void *, signed char))NULL)))
        errf(errf_arg, (signed char)-10);

    while((_Bool)0);
  }
}

// tcp_abort
// file ./lwip/src/include/lwip/tcp.h line 375
void tcp_abort(struct tcp_pcb *pcb)
{
  tcp_abandon(pcb, 1);
}

// tcp_accept
// file lwip/src/core/tcp.c line 1529
void tcp_accept(struct tcp_pcb *pcb, signed char (*accept)(void *, struct tcp_pcb *, signed char))
{
  pcb->accept = accept;
}

// tcp_accept_null
// file lwip/src/core/tcp.c line 500
static signed char tcp_accept_null(void *arg, struct tcp_pcb *pcb, signed char err)
{
  (void)arg;
  (void)pcb;
  (void)err;
  return (signed char)-10;
}

// tcp_alloc
// file lwip/src/core/tcp.c line 1348
struct tcp_pcb * tcp_alloc(unsigned char prio)
{
  struct tcp_pcb *pcb;
  unsigned int iss;
  void *return_value_mem_malloc_1;
  return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)1]);
  pcb = (struct tcp_pcb *)return_value_mem_malloc_1;
  if(pcb == ((struct tcp_pcb *)NULL))
  {
    while((_Bool)0)
      ;
    tcp_kill_timewait();
    void *return_value_mem_malloc_2;
    return_value_mem_malloc_2=mem_malloc((unsigned int)memp_sizes[(signed long int)1]);
    pcb = (struct tcp_pcb *)return_value_mem_malloc_2;
    if(pcb == ((struct tcp_pcb *)NULL))
    {
      while((_Bool)0)
        ;
      tcp_kill_prio(prio);
      void *return_value_mem_malloc_3;
      return_value_mem_malloc_3=mem_malloc((unsigned int)memp_sizes[(signed long int)1]);
      pcb = (struct tcp_pcb *)return_value_mem_malloc_3;
    }

  }

  if(!(pcb == ((struct tcp_pcb *)NULL)))
  {
    memset((void *)pcb, 0, sizeof(struct tcp_pcb) /*216ul*/ );
    pcb->prio = prio;
    pcb->snd_buf = (unsigned short int)65534;
    pcb->snd_queuelen = (unsigned short int)0;
    pcb->rcv_wnd = (unsigned short int)65534;
    pcb->rcv_ann_wnd = (unsigned short int)65534;
    pcb->tos = (unsigned char)0;
    pcb->ttl = (unsigned char)255;
    pcb->mss = (unsigned short int)(1024 > 536 ? 536 : 1024);
    pcb->rto = (signed short int)(3000 / (2 * 250));
    pcb->sa = (signed short int)0;
    pcb->sv = (signed short int)(3000 / (2 * 250));
    pcb->rtime = (signed short int)-1;
    pcb->cwnd = (unsigned short int)1;
    iss=tcp_next_iss();
    pcb->snd_wl2 = iss;
    pcb->snd_nxt = iss;
    pcb->lastack = iss;
    pcb->snd_lbb = iss;
    pcb->tmr = tcp_ticks;
    pcb->last_timer = tcp_timer_ctr;
    pcb->polltmr = (unsigned char)0;
    pcb->recv = tcp_recv_null;
    pcb->keep_idle = (unsigned int)7200000UL;
    pcb->keep_intvl = (unsigned int)75000UL;
    pcb->keep_cnt = 9U;
    pcb->keep_cnt_sent = (unsigned char)0;
  }

  return pcb;
}

// tcp_arg
// file lwip/src/core/tcp.c line 1469
void tcp_arg(struct tcp_pcb *pcb, void *arg)
{
  pcb->callback_arg = arg;
}

// tcp_bind
// file lwip/src/core/tcp.c line 437
signed char tcp_bind(struct tcp_pcb *pcb, struct ip_addr *ipaddr, unsigned short int port)
{
  signed int i;
  signed int max_pcb_list = 4;
  struct tcp_pcb *cpcb;
  do
    if(!((signed int)pcb->state == CLOSED))
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_bind: can only bind in state CLOSED", 443, (const void *)"lwip/src/core/tcp.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      return (signed char)-6;
    }

  while((_Bool)0);
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  unsigned int tmp_if_expr_4;
  if((signed int)port == 0)
  {
    port=tcp_new_port();
    if(!((signed int)port == 0))
      goto __CPROVER_DUMP_L4;

    return (signed char)-2;
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    i = 0;
    for( ; !(i >= max_pcb_list); i = i + 1)
    {
      cpcb = *tcp_pcb_lists[(signed long int)i];
      for( ; !(cpcb == ((struct tcp_pcb *)NULL)); cpcb = cpcb->next)
        if(cpcb->local_port == port)
        {
          if(cpcb->local_ip.addr == 0u)
            tmp_if_expr_2 = (_Bool)1;

          else
          {
            if(ipaddr == ((struct ip_addr *)NULL))
              tmp_if_expr_1 = (_Bool)1;

            else
              tmp_if_expr_1 = ipaddr->addr == (unsigned int)0x00000000UL ? (_Bool)1 : (_Bool)0;
            tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_2)
            tmp_if_expr_3 = (_Bool)1;

          else
            tmp_if_expr_3 = (&cpcb->local_ip)->addr == ipaddr->addr ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_3)
            return (signed char)-8;

        }

    }
    if(ipaddr == ((struct ip_addr *)NULL))
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = ipaddr->addr == (unsigned int)0x00000000UL ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_5)
    {
      if(ipaddr == ((struct ip_addr *)NULL))
        tmp_if_expr_4 = (unsigned int)0;

      else
        tmp_if_expr_4 = ipaddr->addr;
      (&pcb->local_ip)->addr = tmp_if_expr_4;
    }

    pcb->local_port = port;
    do
    {
      pcb->next = *(&tcp_bound_pcbs);
      *(&tcp_bound_pcbs) = pcb;
      tcp_timer_needed();
    }
    while((_Bool)0);
    while((_Bool)0)
      ;
    return (signed char)0;
  }
}

// tcp_close
// file lwip/src/core/tcp.c line 288
signed char tcp_close(struct tcp_pcb *pcb)
{
  if(!((signed int)pcb->state == LISTEN))
    pcb->flags = pcb->flags | (unsigned char)0x0010U;

  signed char return_value_tcp_close_shutdown_1;
  return_value_tcp_close_shutdown_1=tcp_close_shutdown(pcb, (unsigned char)1);
  return return_value_tcp_close_shutdown_1;
}

// tcp_close_shutdown
// file lwip/src/core/tcp.c line 173
static signed char tcp_close_shutdown(struct tcp_pcb *pcb, unsigned char rst_on_unacked_data)
{
  signed char err;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(!(rst_on_unacked_data == 0))
  {
    if((signed int)pcb->state == ESTABLISHED)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)pcb->state == CLOSE_WAIT ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_2)
      goto __CPROVER_DUMP_L16;

    if(!(pcb->refused_data == ((struct pbuf *)NULL)))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)pcb->rcv_wnd != 65534 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
      goto __CPROVER_DUMP_L16;

    do
      if((16 & (signed int)pcb->flags) == 0)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pcb->flags & TF_RXCLOSED", 181, (const void *)"lwip/src/core/tcp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    tcp_rst_impl(pcb->snd_nxt, pcb->rcv_nxt, &pcb->local_ip, &pcb->remote_ip, pcb->local_port, pcb->remote_port);
    tcp_pcb_purge(pcb);

  __CPROVER_DUMP_L8:
    ;
    do
    {
      if(tcp_active_pcbs == pcb)
        *(&tcp_active_pcbs) = (*(&tcp_active_pcbs))->next;

      else
      {
        tcp_tmp_pcb = *(&tcp_active_pcbs);
        for( ; !(tcp_tmp_pcb == ((struct tcp_pcb *)NULL)); tcp_tmp_pcb = tcp_tmp_pcb->next)
          if(tcp_tmp_pcb->next == pcb)
          {
            tcp_tmp_pcb->next = pcb->next;
            break;
          }

      }
      pcb->next = (struct tcp_pcb *)(void *)0;
      tcp_active_pcbs_changed = (unsigned char)1;
    }
    while((_Bool)0);
    if((signed int)pcb->state == ESTABLISHED)
    {
      pcb->state = (enum tcp_state)TIME_WAIT;
      do
      {
        pcb->next = *(&tcp_tw_pcbs);
        *(&tcp_tw_pcbs) = pcb;
        tcp_timer_needed();
      }
      while((_Bool)0);
    }

    else
      mem_free((void *)pcb);
    return (signed char)0;
  }

  else
  {

  __CPROVER_DUMP_L16:
    ;
    switch((signed int)pcb->state)
    {
      case CLOSED:
      {
        err = (signed char)0;
        if(!((signed int)pcb->local_port == 0))
          do
          {
            if(tcp_bound_pcbs == pcb)
              *(&tcp_bound_pcbs) = (*(&tcp_bound_pcbs))->next;

            else
            {
              tcp_tmp_pcb = *(&tcp_bound_pcbs);
              for( ; !(tcp_tmp_pcb == ((struct tcp_pcb *)NULL)); tcp_tmp_pcb = tcp_tmp_pcb->next)
                if(tcp_tmp_pcb->next == pcb)
                {
                  tcp_tmp_pcb->next = pcb->next;
                  break;
                }

            }
            pcb->next = (struct tcp_pcb *)(void *)0;
          }
          while((_Bool)0);

        mem_free((void *)pcb);
        pcb = (struct tcp_pcb *)(void *)0;
        break;
      }
      case LISTEN:
      {
        err = (signed char)0;
        tcp_pcb_remove(&tcp_listen_pcbs.pcbs, pcb);
        mem_free((void *)pcb);
        pcb = (struct tcp_pcb *)(void *)0;
        break;
      }
      case SYN_SENT:
      {
        err = (signed char)0;
        do
        {
          tcp_pcb_remove(&tcp_active_pcbs, pcb);
          tcp_active_pcbs_changed = (unsigned char)1;
        }
        while((_Bool)0);
        mem_free((void *)pcb);
        pcb = (struct tcp_pcb *)(void *)0;
        break;
      }
      case SYN_RCVD:
      {
        err=tcp_send_fin(pcb);
        if((signed int)err == 0)
          pcb->state = (enum tcp_state)FIN_WAIT_1;

        break;
      }
      case ESTABLISHED:
      {
        err=tcp_send_fin(pcb);
        if((signed int)err == 0)
          pcb->state = (enum tcp_state)FIN_WAIT_1;

        break;
      }
      case CLOSE_WAIT:
      {
        err=tcp_send_fin(pcb);
        if((signed int)err == 0)
          pcb->state = (enum tcp_state)LAST_ACK;

        break;
      }
      default:
      {
        err = (signed char)0;
        pcb = (struct tcp_pcb *)(void *)0;
      }
    }
    if((signed int)err == 0 && !(pcb == ((struct tcp_pcb *)NULL)))
      tcp_output(pcb);

    return err;
  }
}

// tcp_connect
// file lwip/src/core/tcp.c line 728
signed char tcp_connect(struct tcp_pcb *pcb, struct ip_addr *ipaddr, unsigned short int port, signed char (*connected)(void *, struct tcp_pcb *, signed char))
{
  signed char ret;
  unsigned int iss;
  unsigned short int old_local_port;
  do
    if(!((signed int)pcb->state == CLOSED))
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_connect: can only connect from state CLOSED", 735, (const void *)"lwip/src/core/tcp.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      return (signed char)-9;
    }

  while((_Bool)0);
  while((_Bool)0)
    ;
  unsigned int tmp_if_expr_1;
  if(!(ipaddr == ((struct ip_addr *)NULL)))
  {
    if(ipaddr == ((struct ip_addr *)NULL))
      tmp_if_expr_1 = (unsigned int)0;

    else
      tmp_if_expr_1 = ipaddr->addr;
    (&pcb->remote_ip)->addr = tmp_if_expr_1;
  }

  else
    return (signed char)-6;
  pcb->remote_port = port;
  struct ip_addr *tmp_if_expr_2;
  if(pcb->local_ip.addr == 0u)
  {
    struct netif *netif;
    struct ip_addr *local_ip;
    do
    {
      netif=ip_route(&pcb->remote_ip);
      if(!(netif == ((struct netif *)NULL)))
        tmp_if_expr_2 = &netif->ip_addr;

      else
        tmp_if_expr_2 = (struct ip_addr *)(void *)0;
      local_ip = tmp_if_expr_2;
    }
    while((_Bool)0);
    if(local_ip == ((struct ip_addr *)NULL) || netif == ((struct netif *)NULL))
      return (signed char)-4;

    pcb->local_ip.addr = local_ip->addr;
  }

  old_local_port = pcb->local_port;
  if((signed int)pcb->local_port == 0)
  {
    pcb->local_port=tcp_new_port();
    if(!((signed int)pcb->local_port == 0))
      goto __CPROVER_DUMP_L17;

    return (signed char)-2;
  }

  else
  {

  __CPROVER_DUMP_L17:
    ;
    iss=tcp_next_iss();
    pcb->rcv_nxt = (unsigned int)0;
    pcb->snd_nxt = iss;
    pcb->lastack = iss - (unsigned int)1;
    pcb->snd_lbb = iss - (unsigned int)1;
    pcb->rcv_wnd = (unsigned short int)65534;
    pcb->rcv_ann_wnd = (unsigned short int)65534;
    pcb->rcv_ann_right_edge = pcb->rcv_nxt;
    pcb->snd_wnd = (unsigned short int)65534;
    pcb->mss = (unsigned short int)(1024 > 536 ? 536 : 1024);
    pcb->mss=tcp_eff_send_mss_impl(pcb->mss, &pcb->remote_ip);
    pcb->cwnd = (unsigned short int)1;
    pcb->ssthresh = (unsigned short int)((signed int)pcb->mss * 10);
    pcb->connected = connected;
    ret=tcp_enqueue_flags(pcb, (unsigned char)0x02U);
    if((signed int)ret == 0)
    {
      pcb->state = (enum tcp_state)SYN_SENT;
      if(!((signed int)old_local_port == 0))
        do
        {
          if(tcp_bound_pcbs == pcb)
            *(&tcp_bound_pcbs) = (*(&tcp_bound_pcbs))->next;

          else
          {
            tcp_tmp_pcb = *(&tcp_bound_pcbs);
            for( ; !(tcp_tmp_pcb == ((struct tcp_pcb *)NULL)); tcp_tmp_pcb = tcp_tmp_pcb->next)
              if(tcp_tmp_pcb->next == pcb)
              {
                tcp_tmp_pcb->next = pcb->next;
                break;
              }

          }
          pcb->next = (struct tcp_pcb *)(void *)0;
        }
        while((_Bool)0);

      do
      {

      __CPROVER_DUMP_L23:
        ;
        pcb->next = *(&tcp_active_pcbs);
        *(&tcp_active_pcbs) = pcb;
        tcp_timer_needed();
        tcp_active_pcbs_changed = (unsigned char)1;
      }
      while((_Bool)0);
      tcp_output(pcb);
    }

    return ret;
  }
}

// tcp_create_segment
// file lwip/src/core/tcp_out.c line 162
static struct tcp_seg * tcp_create_segment(struct tcp_pcb *pcb, struct pbuf *p, unsigned char flags, unsigned int seqno, unsigned char optflags)
{
  struct tcp_seg *seg;
  unsigned char optlen = (unsigned char)((((signed int)optflags & (signed int)(unsigned char)0x01U) != 0 ? 4 : 0) + (((signed int)optflags & (signed int)(unsigned char)0x02U) != 0 ? 0 : 0) + (((signed int)optflags & (signed int)(unsigned char)0x08U) != 0 ? 0 : 0));
  void *return_value_mem_malloc_1;
  return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)3]);
  seg = (struct tcp_seg *)return_value_mem_malloc_1;
  if(seg == ((struct tcp_seg *)NULL))
  {
    while((_Bool)0)
      ;
    pbuf_free(p);
    return (struct tcp_seg *)(void *)0;
  }

  else
  {
    seg->flags = optflags;
    seg->next = (struct tcp_seg *)(void *)0;
    seg->p = p;
    do
      if(!((signed int)p->tot_len >= (signed int)optlen))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->tot_len >= optlen", 175, (const void *)"lwip/src/core/tcp_out.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    seg->len = (unsigned short int)((signed int)p->tot_len - (signed int)optlen);
    seg->oversize_left = (unsigned short int)0;
    unsigned char return_value_pbuf_header_2;
    return_value_pbuf_header_2=pbuf_header(p, (signed short int)20);
    if(!(return_value_pbuf_header_2 == 0))
    {
      while((_Bool)0)
        ;
      lwip_stats.tcp.err = lwip_stats.tcp.err + 1;
      tcp_seg_free(seg);
      return (struct tcp_seg *)(void *)0;
    }

    else
    {
      seg->tcphdr = (struct tcp_hdr *)seg->p->payload;
      seg->tcphdr->src=lwip_htons(pcb->local_port);
      seg->tcphdr->dest=lwip_htons(pcb->remote_port);
      seg->tcphdr->seqno=lwip_htonl(seqno);
      seg->tcphdr->_hdrlen_rsvd_flags=lwip_htons((unsigned short int)(5 + (signed int)optlen / 4 << 12 | (signed int)flags));
      seg->tcphdr->urgp = (unsigned short int)0;
      return seg;
    }
  }
}

// tcp_debug_state_str
// file lwip/src/core/tcp.c line 1721
const char * tcp_debug_state_str(enum tcp_state s)
{
  return tcp_state_str[(signed long int)s];
}

// tcp_eff_send_mss_impl
// file lwip/src/core/tcp.c line 1680
unsigned short int tcp_eff_send_mss_impl(unsigned short int sendmss, struct ip_addr *dest)
{
  unsigned short int mss_s;
  struct netif *outif;
  signed short int mtu;
  outif=ip_route(dest);
  if(outif == ((struct netif *)NULL))
    return sendmss;

  else
  {
    mtu = (signed short int)outif->mtu;
    if(!((signed int)mtu == 0))
    {
      mss_s = (unsigned short int)(((signed int)mtu - 20) - 20);
      sendmss = (unsigned short int)((signed int)sendmss < (signed int)mss_s ? (signed int)sendmss : (signed int)mss_s);
    }

    return sendmss;
  }
}

// tcp_enqueue_flags
// file ./lwip/src/include/lwip/tcp_impl.h line 472
signed char tcp_enqueue_flags(struct tcp_pcb *pcb, unsigned char flags)
{
  struct pbuf *p;
  struct tcp_seg *seg;
  unsigned char optflags = (unsigned char)0;
  unsigned char optlen = (unsigned char)0;
  while((_Bool)0)
    ;
  do
    if((3u & (unsigned int)flags) == 0u)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_enqueue_flags: need either TCP_SYN or TCP_FIN in flags (programmer violates API)", 746, (const void *)"lwip/src/core/tcp_out.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  _Bool tmp_if_expr_1;
  if((signed int)pcb->snd_queuelen >= 255)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (unsigned int)pcb->snd_queuelen > 0xffffU - (unsigned int)3 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_6;
  if(tmp_if_expr_1)
  {
    while((_Bool)0)
      ;
    lwip_stats.tcp.memerr = lwip_stats.tcp.memerr + 1;
    pcb->flags = pcb->flags | (unsigned char)0x0080U;
    return (signed char)-1;
  }

  else
  {
    if(!((0x02U & (unsigned int)flags) == 0u))
      optflags = (unsigned char)0x01U;

    optlen = (unsigned char)((((signed int)optflags & (signed int)(unsigned char)0x01U) != 0 ? 4 : 0) + (((signed int)optflags & (signed int)(unsigned char)0x02U) != 0 ? 0 : 0) + (((signed int)optflags & (signed int)(unsigned char)0x08U) != 0 ? 0 : 0));
    if((signed int)pcb->snd_buf == 0)
    {
      while((_Bool)0)
        ;
      lwip_stats.tcp.memerr = lwip_stats.tcp.memerr + 1;
      return (signed char)-1;
    }

    else
    {
      p=pbuf_alloc((enum anonymous)PBUF_TRANSPORT, (unsigned short int)optlen, (enum anonymous_0)PBUF_RAM);
      if(p == ((struct pbuf *)NULL))
      {
        pcb->flags = pcb->flags | (unsigned char)0x0080U;
        lwip_stats.tcp.memerr = lwip_stats.tcp.memerr + 1;
        return (signed char)-1;
      }

      else
      {
        do
          if(!((signed int)p->len >= (signed int)optlen))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_enqueue_flags: check that first pbuf can hold optlen", 793, (const void *)"lwip/src/core/tcp_out.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        seg=tcp_create_segment(pcb, p, flags, pcb->snd_lbb, optflags);
        if(seg == ((struct tcp_seg *)NULL))
        {
          pcb->flags = pcb->flags | (unsigned char)0x0080U;
          lwip_stats.tcp.memerr = lwip_stats.tcp.memerr + 1;
          return (signed char)-1;
        }

        else
        {
          do
            if(!((unsigned long int)seg->tcphdr % 4ul == 0ul))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"seg->tcphdr not aligned", 801, (const void *)"lwip/src/core/tcp_out.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          do
            if(!((signed int)seg->len == 0))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_enqueue_flags: invalid segment length", 802, (const void *)"lwip/src/core/tcp_out.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          while((_Bool)0)
            ;
          if(pcb->unsent == ((struct tcp_seg *)NULL))
            pcb->unsent = seg;

          else
          {
            struct tcp_seg *useg = pcb->unsent;
            for( ; !(useg->next == ((struct tcp_seg *)NULL)); useg = useg->next)
              ;
            useg->next = seg;
          }
          pcb->unsent_oversize = (unsigned short int)0;
          if(!((0x01U & (unsigned int)flags) == 0u) || !((0x02U & (unsigned int)flags) == 0u))
          {
            pcb->snd_lbb = pcb->snd_lbb + 1u;
            pcb->snd_buf = pcb->snd_buf - 1;
          }

          if(!((0x01U & (unsigned int)flags) == 0u))
            pcb->flags = pcb->flags | (unsigned char)0x0020U;

          unsigned char return_value_pbuf_clen_5;
          return_value_pbuf_clen_5=pbuf_clen(seg->p);
          pcb->snd_queuelen = pcb->snd_queuelen + (unsigned short int)return_value_pbuf_clen_5;
          while((_Bool)0)
            ;
          if(!((signed int)pcb->snd_queuelen == 0))
            do
            {
              if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
                tmp_if_expr_6 = (_Bool)1;

              else
                tmp_if_expr_6 = pcb->unsent != (struct tcp_seg *)(void *)0 ? (_Bool)1 : (_Bool)0;
              if(!tmp_if_expr_6)
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_enqueue_flags: invalid queue length", 838, (const void *)"lwip/src/core/tcp_out.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            }
            while((_Bool)0);

          return (signed char)0;
        }
      }
    }
  }
}

// tcp_err
// file lwip/src/core/tcp.c line 1514
void tcp_err(struct tcp_pcb *pcb, void (*err)(void *, signed char))
{
  do
    if((signed int)pcb->state == LISTEN)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid socket state for err callback", 1516, (const void *)"lwip/src/core/tcp.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  pcb->errf = err;
}

// tcp_err_cb
// file src/ocproxy.c line 486
static void tcp_err_cb(void *arg, signed char err)
{
  struct ocp_sock *s = (struct ocp_sock *)arg;
  _Bool tmp_if_expr_1;
  if(!(s == ((struct ocp_sock *)NULL)))
  {
    s->tpcb = (struct tcp_pcb *)(void *)0;
    if(s->state == 4)
      tmp_if_expr_1 = s->conn_type == 1 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      socks_reply(s, 0x05);

    else
      ocp_sock_del(s);
  }

}

// tcp_fasttmr
// file lwip/src/core/tcp.c line 1093
void tcp_fasttmr(void)
{
  struct tcp_pcb *pcb;
  tcp_timer_ctr = tcp_timer_ctr + 1;
  struct tcp_pcb *next;
  do
  {

  tcp_fasttmr_start:
    ;
    pcb = tcp_active_pcbs;

  __CPROVER_DUMP_L2:
    ;
    if(pcb == ((struct tcp_pcb *)NULL))
      goto __CPROVER_DUMP_L12;

    if(pcb->last_timer == tcp_timer_ctr)
      goto __CPROVER_DUMP_L10;

    pcb->last_timer = tcp_timer_ctr;
    if(!((1 & (signed int)pcb->flags) == 0))
    {
      while((_Bool)0)
        ;
      do
        pcb->flags = pcb->flags | (unsigned char)0x0002U;
      while((_Bool)0);
      tcp_output(pcb);
      pcb->flags = pcb->flags & (unsigned char)~((signed int)(unsigned char)0x0001U | (signed int)(unsigned char)0x0002U);
    }

    next = pcb->next;
    if(pcb->refused_data == ((struct pbuf *)NULL))
      break;

    tcp_active_pcbs_changed = (unsigned char)0;
    tcp_process_refused_data(pcb);
  }
  while(!(tcp_active_pcbs_changed == 0));
  pcb = next;
  goto __CPROVER_DUMP_L11;

__CPROVER_DUMP_L10:
  ;
  pcb = pcb->next;

__CPROVER_DUMP_L11:
  ;
  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L12:
  ;
}

// tcp_getoptbyte
// file lwip/src/core/tcp_in.c line 1645
static unsigned char tcp_getoptbyte(void)
{
  unsigned short int tmp_post_1;
  unsigned short int tmp_post_2;
  if(tcphdr_opt2 == ((unsigned char *)NULL) || !((signed int)tcp_optidx >= (signed int)tcphdr_opt1len))
  {
    unsigned char *opts = (unsigned char *)tcphdr + (signed long int)20;
    tmp_post_1 = tcp_optidx;
    tcp_optidx = tcp_optidx + 1;
    return opts[(signed long int)tmp_post_1];
  }

  else
  {
    unsigned char idx;
    tmp_post_2 = tcp_optidx;
    tcp_optidx = tcp_optidx + 1;
    idx = (unsigned char)((signed int)tmp_post_2 - (signed int)tcphdr_opt1len);
    return tcphdr_opt2[(signed long int)idx];
  }
}

// tcp_init
// file ./lwip/src/include/lwip/tcp_impl.h line 55
void tcp_init(void)
{
  ;
}

// tcp_input
// file lwip/src/core/tcp_in.c line 100
void tcp_input(struct pbuf *p, struct netif *inp)
{
  struct tcp_pcb *pcb;
  struct tcp_pcb *prev;
  struct tcp_pcb_listen *lpcb;
  unsigned char hdrlen;
  signed char err;
  unsigned short int chksum;
  lwip_stats.tcp.recv = lwip_stats.tcp.recv + 1;
  tcphdr = (struct tcp_hdr *)p->payload;
  unsigned char return_value_ip4_addr_isbroadcast_1;
  _Bool tmp_if_expr_2;
  unsigned short int return_value_lwip_ntohs_3;
  unsigned short int return_value_lwip_ntohs_4;
  _Bool tmp_if_expr_6;
  if(!((unsigned long int)p->len >= sizeof(struct tcp_hdr) /*20ul*/ ))
  {
    while((_Bool)0)
      ;
    lwip_stats.tcp.lenerr = lwip_stats.tcp.lenerr + 1;
  }

  else
  {
    return_value_ip4_addr_isbroadcast_1=ip4_addr_isbroadcast((&ip_data.current_iphdr_dest)->addr, inp);
    if(!(return_value_ip4_addr_isbroadcast_1 == 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = ((unsigned long int)(&ip_data.current_iphdr_dest)->addr & ((0xf0000000UL & (unsigned long int)0xff) << 24 | (0xf0000000UL & (unsigned long int)0xff00) << 8 | (0xf0000000UL & 0xff0000UL) >> 8 | (0xf0000000UL & 0xff000000UL) >> 24)) == ((0xe0000000UL & (unsigned long int)0xff) << 24 | (0xe0000000UL & (unsigned long int)0xff00) << 8 | (0xe0000000UL & 0xff0000UL) >> 8 | (0xe0000000UL & 0xff000000UL) >> 24) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      lwip_stats.tcp.proterr = lwip_stats.tcp.proterr + 1;

    else
    {
      chksum=inet_chksum_pseudo(p, (unsigned char)6, p->tot_len, &ip_data.current_iphdr_src, &ip_data.current_iphdr_dest);
      if(!((signed int)chksum == 0))
      {
        while((_Bool)0)
          ;
        lwip_stats.tcp.chkerr = lwip_stats.tcp.chkerr + 1;
      }

      else
      {
        return_value_lwip_ntohs_3=lwip_ntohs(tcphdr->_hdrlen_rsvd_flags);
        hdrlen = (unsigned char)((signed int)return_value_lwip_ntohs_3 >> 12);
        tcphdr_opt1len = (unsigned short int)((signed int)hdrlen * 4 - 20);
        tcphdr_opt2 = (unsigned char *)(void *)0;
        if(!((signed int)p->len >= 4 * (signed int)hdrlen))
        {
          if((signed int)p->len >= 20)
          {
            unsigned short int optlen = tcphdr_opt1len;
            pbuf_header(p, (signed short int)-20);
            do
              if(!((signed int)tcphdr_opt1len >= (signed int)p->len))
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcphdr_opt1len >= p->len", 163, (const void *)"lwip/src/core/tcp_in.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            while((_Bool)0);
            do
              if(p->next == ((struct pbuf *)NULL))
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->next != NULL", 164, (const void *)"lwip/src/core/tcp_in.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            while((_Bool)0);
            tcphdr_opt1len = p->len;
            if(!((signed int)tcphdr_opt1len >= (signed int)optlen))
            {
              signed short int opt2len;
              unsigned char phret;
              phret=pbuf_header(p, (signed short int)-((signed int)(signed short int)tcphdr_opt1len));
              do
                if(!((signed int)phret == 0))
                  do
                  {
                    printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"phret == 0", 171, (const void *)"lwip/src/core/tcp_in.c");
                    fflush((struct _IO_FILE *)(void *)0);
                    abort();
                  }
                  while((_Bool)0);

              while((_Bool)0);
              tcphdr_opt2 = (unsigned char *)p->next->payload;
              opt2len = (signed short int)((signed int)optlen - (signed int)tcphdr_opt1len);
              phret=pbuf_header(p->next, (signed short int)-((signed int)opt2len));
              do
                if(!((signed int)phret == 0))
                  do
                  {
                    printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"phret == 0", 175, (const void *)"lwip/src/core/tcp_in.c");
                    fflush((struct _IO_FILE *)(void *)0);
                    abort();
                  }
                  while((_Bool)0);

              while((_Bool)0);
              p->tot_len = p->tot_len - (unsigned short int)opt2len;
            }

            do
              if(!((signed int)p->len == 0))
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"p->len == 0", 180, (const void *)"lwip/src/core/tcp_in.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            while((_Bool)0);
          }

          else
          {
            while((_Bool)0)
              ;
            lwip_stats.tcp.lenerr = lwip_stats.tcp.lenerr + 1;
            goto dropped;
          }
        }

        else
          pbuf_header(p, (signed short int)-((signed int)hdrlen * 4));
        tcphdr->src=lwip_ntohs(tcphdr->src);
        tcphdr->dest=lwip_ntohs(tcphdr->dest);
        tcphdr->seqno=lwip_ntohl(tcphdr->seqno);
        seqno = tcphdr->seqno;
        tcphdr->ackno=lwip_ntohl(tcphdr->ackno);
        ackno = tcphdr->ackno;
        tcphdr->wnd=lwip_ntohs(tcphdr->wnd);
        return_value_lwip_ntohs_4=lwip_ntohs(tcphdr->_hdrlen_rsvd_flags);
        flags = (unsigned char)((unsigned int)return_value_lwip_ntohs_4 & 0x3fU);
        tcplen = (unsigned short int)((signed int)p->tot_len + (((unsigned int)flags & (0x01U | 0x02U)) != 0u ? 1 : 0));
        prev = (struct tcp_pcb *)(void *)0;
        pcb = tcp_active_pcbs;
        for( ; !(pcb == ((struct tcp_pcb *)NULL)); pcb = pcb->next)
        {
          do
            if((signed int)pcb->state == CLOSED)
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_input: active pcb->state != CLOSED", 207, (const void *)"lwip/src/core/tcp_in.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          do
            if((signed int)pcb->state == TIME_WAIT)
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_input: active pcb->state != TIME-WAIT", 208, (const void *)"lwip/src/core/tcp_in.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          do
            if((signed int)pcb->state == LISTEN)
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_input: active pcb->state != LISTEN", 209, (const void *)"lwip/src/core/tcp_in.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
          if(pcb->remote_port == tcphdr->src)
          {
            if(pcb->local_port == tcphdr->dest)
            {
              if(pcb->remote_ip.addr == ip_data.current_iphdr_src.addr)
              {
                if(pcb->local_ip.addr == ip_data.current_iphdr_dest.addr)
                {
                  do
                    if(pcb->next == pcb)
                      do
                      {
                        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_input: pcb->next != pcb (before cache)", 218, (const void *)"lwip/src/core/tcp_in.c");
                        fflush((struct _IO_FILE *)(void *)0);
                        abort();
                      }
                      while((_Bool)0);

                  while((_Bool)0);
                  if(!(prev == ((struct tcp_pcb *)NULL)))
                  {
                    prev->next = pcb->next;
                    pcb->next = tcp_active_pcbs;
                    tcp_active_pcbs = pcb;
                  }

                  do
                    if(pcb->next == pcb)
                      do
                      {
                        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_input: pcb->next != pcb (after cache)", 224, (const void *)"lwip/src/core/tcp_in.c");
                        fflush((struct _IO_FILE *)(void *)0);
                        abort();
                      }
                      while((_Bool)0);

                  while((_Bool)0);
                  break;
                }

              }

            }

          }

          prev = pcb;
        }
        if(pcb == ((struct tcp_pcb *)NULL))
        {
          pcb = tcp_tw_pcbs;
          for( ; !(pcb == ((struct tcp_pcb *)NULL)); pcb = pcb->next)
          {
            do
              if(!((signed int)pcb->state == TIME_WAIT))
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_input: TIME-WAIT pcb->state == TIME-WAIT", 234, (const void *)"lwip/src/core/tcp_in.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            while((_Bool)0);
            if(pcb->remote_port == tcphdr->src)
            {
              if(pcb->local_port == tcphdr->dest)
              {
                if(pcb->remote_ip.addr == ip_data.current_iphdr_src.addr)
                {
                  if(pcb->local_ip.addr == ip_data.current_iphdr_dest.addr)
                  {
                    while((_Bool)0)
                      ;
                    tcp_timewait_input(pcb);
                    pbuf_free(p);
                    goto __CPROVER_DUMP_L116;
                  }

                }

              }

            }

          }
          prev = (struct tcp_pcb *)(void *)0;
          lpcb = tcp_listen_pcbs.listen_pcbs;
          for( ; !(lpcb == ((struct tcp_pcb_listen *)NULL)); lpcb = lpcb->next)
          {
            if(lpcb->local_port == tcphdr->dest)
            {
              if(lpcb->local_ip.addr == ip_data.current_iphdr_dest.addr)
                break;

              else
                if(lpcb->local_ip.addr == 0u)
                  break;

            }

            prev = (struct tcp_pcb *)lpcb;
          }
          if(!(lpcb == ((struct tcp_pcb_listen *)NULL)))
          {
            if(!(prev == ((struct tcp_pcb *)NULL)))
            {
              ((struct tcp_pcb_listen *)prev)->next = lpcb->next;
              lpcb->next = tcp_listen_pcbs.listen_pcbs;
              tcp_listen_pcbs.listen_pcbs = lpcb;
            }

            while((_Bool)0)
              ;
            tcp_listen_input(lpcb);
            pbuf_free(p);
            goto __CPROVER_DUMP_L116;
          }

        }

        if(!(pcb == ((struct tcp_pcb *)NULL)))
        {
          inseg.next = (struct tcp_seg *)(void *)0;
          inseg.len = p->tot_len;
          inseg.p = p;
          inseg.tcphdr = tcphdr;
          recv_data = (struct pbuf *)(void *)0;
          recv_flags = (unsigned char)0;
          if(!((0x08U & (unsigned int)flags) == 0u))
            p->flags = p->flags | (unsigned char)0x01U;

          if(!(pcb->refused_data == ((struct pbuf *)NULL)))
          {
            signed char return_value_tcp_process_refused_data_5;
            return_value_tcp_process_refused_data_5=tcp_process_refused_data(pcb);
            if((signed int)return_value_tcp_process_refused_data_5 == -10)
              tmp_if_expr_6 = (_Bool)1;

            else
              tmp_if_expr_6 = (pcb->refused_data != (struct pbuf *)(void *)0 ? ((signed int)tcplen > 0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_6)
            {
              lwip_stats.tcp.drop = lwip_stats.tcp.drop + 1;
              goto aborted;
            }

          }

          tcp_input_pcb = pcb;
          err=tcp_process(pcb);
          if(!((signed int)err == -10))
          {
            if(!((8 & (signed int)recv_flags) == 0))
            {
              do
                if(!(pcb->errf == ((void (*)(void *, signed char))NULL)))
                  pcb->errf(pcb->callback_arg, (signed char)-11);

              while((_Bool)0);
              tcp_pcb_remove(&tcp_active_pcbs, pcb);
              mem_free((void *)pcb);
            }

            else
              if(!((16 & (signed int)recv_flags) == 0))
              {
                if((16 & (signed int)pcb->flags) == 0)
                  do
                    if(!(pcb->errf == ((void (*)(void *, signed char))NULL)))
                      pcb->errf(pcb->callback_arg, (signed char)-12);

                  while((_Bool)0);

                tcp_pcb_remove(&tcp_active_pcbs, pcb);
                mem_free((void *)pcb);
              }

              else
              {
                err = (signed char)0;
                if((signed int)pcb->acked >= 1)
                {
                  unsigned short int acked = pcb->acked;
                  do
                    if(!(pcb->sent == ((signed char (*)(void *, struct tcp_pcb *, unsigned short int))NULL)))
                      err=pcb->sent(pcb->callback_arg, pcb, (unsigned short int)acked);

                    else
                      err = (signed char)0;
                  while((_Bool)0);
                  if((signed int)err == -10)
                    goto aborted;

                }

                if(!(recv_data == ((struct pbuf *)NULL)))
                {
                  do
                    if(!(pcb->refused_data == ((struct pbuf *)NULL)))
                      do
                      {
                        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pcb->refused_data == NULL", 406, (const void *)"lwip/src/core/tcp_in.c");
                        fflush((struct _IO_FILE *)(void *)0);
                        abort();
                      }
                      while((_Bool)0);

                  while((_Bool)0);
                  if(!((16 & (signed int)pcb->flags) == 0))
                  {
                    pbuf_free(recv_data);
                    tcp_abort(pcb);
                    goto aborted;
                  }

                  do
                    if(!(pcb->recv == ((signed char (*)(void *, struct tcp_pcb *, struct pbuf *, signed char))NULL)))
                      err=pcb->recv(pcb->callback_arg, pcb, recv_data, (signed char)0);

                    else
                      err=tcp_recv_null((void *)0, pcb, recv_data, (signed char)0);
                  while((_Bool)0);
                  if((signed int)err == -10)
                    goto aborted;

                  if(!((signed int)err == 0))
                  {
                    pcb->refused_data = recv_data;
                    while((_Bool)0)
                      ;
                  }

                }

                if(!((32 & (signed int)recv_flags) == 0))
                {
                  if(!(pcb->refused_data == ((struct pbuf *)NULL)))
                    pcb->refused_data->flags = pcb->refused_data->flags | (unsigned char)0x20U;

                  else
                  {
                    if(!((signed int)pcb->rcv_wnd == 65534))
                      pcb->rcv_wnd = pcb->rcv_wnd + 1;

                    do
                      if(!(pcb->recv == ((signed char (*)(void *, struct tcp_pcb *, struct pbuf *, signed char))NULL)))
                        err=pcb->recv(pcb->callback_arg, pcb, (struct pbuf *)(void *)0, (signed char)0);

                      else
                        err = (signed char)0;
                    while((_Bool)0);
                    if((signed int)err == -10)
                      goto aborted;

                  }
                }

                tcp_input_pcb = (struct tcp_pcb *)(void *)0;
                tcp_output(pcb);
              }
          }


        aborted:
          ;
          tcp_input_pcb = (struct tcp_pcb *)(void *)0;
          recv_data = (struct pbuf *)(void *)0;
          if(!(inseg.p == ((struct pbuf *)NULL)))
          {
            pbuf_free(inseg.p);
            inseg.p = (struct pbuf *)(void *)0;
          }

        }

        else
        {
          while((_Bool)0)
            ;
          unsigned short int return_value_lwip_ntohs_7;
          return_value_lwip_ntohs_7=lwip_ntohs(tcphdr->_hdrlen_rsvd_flags);
          if((4u & (unsigned int)return_value_lwip_ntohs_7) == 0u)
          {
            lwip_stats.tcp.proterr = lwip_stats.tcp.proterr + 1;
            lwip_stats.tcp.drop = lwip_stats.tcp.drop + 1;
            tcp_rst_impl(ackno, seqno + (unsigned int)tcplen, &ip_data.current_iphdr_dest, &ip_data.current_iphdr_src, tcphdr->dest, tcphdr->src);
          }

          pbuf_free(p);
        }
        while((_Bool)0)
          ;
        goto __CPROVER_DUMP_L116;
      }
    }
  }

dropped:
  ;
  lwip_stats.tcp.drop = lwip_stats.tcp.drop + 1;
  pbuf_free(p);

__CPROVER_DUMP_L116:
  ;
}

// tcp_keepalive
// file ./lwip/src/include/lwip/tcp_impl.h line 493
void tcp_keepalive(struct tcp_pcb *pcb)
{
  struct pbuf *p;
  struct tcp_hdr *tcp_keepalive__1__tcphdr;
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  unsigned int return_value_lwip_htonl_1;
  return_value_lwip_htonl_1=lwip_htonl(pcb->snd_nxt - (unsigned int)1);
  p=tcp_output_alloc_header(pcb, (unsigned short int)0, (unsigned short int)0, return_value_lwip_htonl_1);
  if(p == ((struct pbuf *)NULL))
    while((_Bool)0)
      ;

  else
  {
    tcp_keepalive__1__tcphdr = (struct tcp_hdr *)p->payload;
    tcp_keepalive__1__tcphdr->chksum=inet_chksum_pseudo(p, (unsigned char)6, p->tot_len, &pcb->local_ip, &pcb->remote_ip);
    lwip_stats.tcp.xmit = lwip_stats.tcp.xmit + 1;
    ip_output(p, &pcb->local_ip, &pcb->remote_ip, pcb->ttl, (unsigned char)0, (unsigned char)6);
    pbuf_free(p);
    while((_Bool)0)
      ;
  }
}

// tcp_kill_prio
// file lwip/src/core/tcp.c line 1287
static void tcp_kill_prio(unsigned char prio)
{
  struct tcp_pcb *pcb;
  struct tcp_pcb *inactive;
  unsigned int inactivity;
  unsigned char mprio = (unsigned char)127;
  inactivity = (unsigned int)0;
  inactive = (struct tcp_pcb *)(void *)0;
  pcb = tcp_active_pcbs;
  for( ; !(pcb == ((struct tcp_pcb *)NULL)); pcb = pcb->next)
    if((signed int)prio >= (signed int)pcb->prio)
    {
      if((signed int)mprio >= (signed int)pcb->prio)
      {
        if(tcp_ticks + -pcb->tmr >= inactivity)
        {
          inactivity = tcp_ticks - pcb->tmr;
          inactive = pcb;
          mprio = pcb->prio;
        }

      }

    }

  if(!(inactive == ((struct tcp_pcb *)NULL)))
  {
    while((_Bool)0)
      ;
    tcp_abort(inactive);
  }

}

// tcp_kill_timewait
// file lwip/src/core/tcp.c line 1320
static void tcp_kill_timewait(void)
{
  struct tcp_pcb *pcb;
  struct tcp_pcb *inactive;
  unsigned int inactivity = (unsigned int)0;
  inactive = (struct tcp_pcb *)(void *)0;
  pcb = tcp_tw_pcbs;
  for( ; !(pcb == ((struct tcp_pcb *)NULL)); pcb = pcb->next)
    if(tcp_ticks + -pcb->tmr >= inactivity)
    {
      inactivity = tcp_ticks - pcb->tmr;
      inactive = pcb;
    }

  if(!(inactive == ((struct tcp_pcb *)NULL)))
  {
    while((_Bool)0)
      ;
    tcp_abort(inactive);
  }

}

// tcp_listen_input
// file lwip/src/core/tcp_in.c line 526
static signed char tcp_listen_input(struct tcp_pcb_listen *pcb)
{
  struct tcp_pcb *npcb;
  signed char rc;
  if(!((0x04U & (unsigned int)flags) == 0u))
    return (signed char)0;

  else
  {
    if(!((0x10U & (unsigned int)flags) == 0u))
    {
      while((_Bool)0)
        ;
      tcp_rst_impl(ackno, seqno + (unsigned int)tcplen, &ip_data.current_iphdr_dest, &ip_data.current_iphdr_src, tcphdr->dest, tcphdr->src);
    }

    else
      if(!((0x02U & (unsigned int)flags) == 0u))
      {
        while((_Bool)0)
          ;
        npcb=tcp_alloc(pcb->prio);
        if(npcb == ((struct tcp_pcb *)NULL))
        {
          while((_Bool)0)
            ;
          lwip_stats.tcp.memerr = lwip_stats.tcp.memerr + 1;
          return (signed char)-1;
        }

        npcb->local_ip.addr = (&ip_data.current_iphdr_dest)->addr;
        npcb->remote_ip.addr = (&ip_data.current_iphdr_src)->addr;
        npcb->local_port = pcb->local_port;
        npcb->remote_port = tcphdr->src;
        npcb->state = (enum tcp_state)SYN_RCVD;
        npcb->rcv_nxt = seqno + (unsigned int)1;
        npcb->rcv_ann_right_edge = npcb->rcv_nxt;
        npcb->snd_wl1 = seqno - (unsigned int)1;
        npcb->callback_arg = pcb->callback_arg;
        npcb->accept = pcb->accept;
        npcb->so_options = (unsigned char)((unsigned int)pcb->so_options & (0x04U | 0x08U | 0x80U));
        do
        {

        __CPROVER_DUMP_L16:
          ;
          npcb->next = *(&tcp_active_pcbs);
          *(&tcp_active_pcbs) = npcb;
          tcp_timer_needed();
          tcp_active_pcbs_changed = (unsigned char)1;
        }
        while((_Bool)0);
        tcp_parseopt(npcb);
        npcb->snd_wnd = tcphdr->wnd;
        npcb->snd_wnd_max = npcb->snd_wnd;
        npcb->ssthresh = npcb->snd_wnd;
        npcb->mss=tcp_eff_send_mss_impl(npcb->mss, &npcb->remote_ip);
        rc=tcp_enqueue_flags(npcb, (unsigned char)(0x02U | 0x10U));
        if(!((signed int)rc == 0))
        {
          tcp_abandon(npcb, 0);
          return rc;
        }

        signed char return_value_tcp_output_1;
        return_value_tcp_output_1=tcp_output(npcb);
        return return_value_tcp_output_1;
      }

    return (signed char)0;
  }
}

// tcp_listen_with_backlog
// file lwip/src/core/tcp.c line 525
struct tcp_pcb * tcp_listen_with_backlog(struct tcp_pcb *pcb, unsigned char backlog)
{
  struct tcp_pcb_listen *lpcb;
  (void)backlog;
  do
    if(!((signed int)pcb->state == CLOSED))
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_listen: pcb already connected", 530, (const void *)"lwip/src/core/tcp.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      return (struct tcp_pcb *)(void *)0;
    }

  while((_Bool)0);
  if((signed int)pcb->state == LISTEN)
    return pcb;

  else
  {
    void *return_value_mem_malloc_1;
    return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)2]);
    lpcb = (struct tcp_pcb_listen *)return_value_mem_malloc_1;
    if(lpcb == ((struct tcp_pcb_listen *)NULL))
      return (struct tcp_pcb *)(void *)0;

    else
    {
      lpcb->callback_arg = pcb->callback_arg;
      lpcb->local_port = pcb->local_port;
      lpcb->state = (enum tcp_state)LISTEN;
      lpcb->prio = pcb->prio;
      lpcb->so_options = pcb->so_options;
      lpcb->so_options = lpcb->so_options | (unsigned char)0x02U;
      lpcb->ttl = pcb->ttl;
      lpcb->tos = pcb->tos;
      lpcb->local_ip.addr = pcb->local_ip.addr;
      if(!((signed int)pcb->local_port == 0))
        do
        {
          if(tcp_bound_pcbs == pcb)
            *(&tcp_bound_pcbs) = (*(&tcp_bound_pcbs))->next;

          else
          {
            tcp_tmp_pcb = *(&tcp_bound_pcbs);
            for( ; !(tcp_tmp_pcb == ((struct tcp_pcb *)NULL)); tcp_tmp_pcb = tcp_tmp_pcb->next)
              if(tcp_tmp_pcb->next == pcb)
              {
                tcp_tmp_pcb->next = pcb->next;
                break;
              }

          }
          pcb->next = (struct tcp_pcb *)(void *)0;
        }
        while((_Bool)0);

      mem_free((void *)pcb);
      lpcb->accept = tcp_accept_null;
      do
      {
        ((struct tcp_pcb *)lpcb)->next = *(&tcp_listen_pcbs.pcbs);
        *(&tcp_listen_pcbs.pcbs) = (struct tcp_pcb *)lpcb;
        tcp_timer_needed();
      }
      while((_Bool)0);
      return (struct tcp_pcb *)lpcb;
    }
  }
}

// tcp_new
// file lwip/src/core/tcp.c line 1438
struct tcp_pcb * tcp_new(void)
{
  struct tcp_pcb *return_value_tcp_alloc_1;
  return_value_tcp_alloc_1=tcp_alloc((unsigned char)64);
  return return_value_tcp_alloc_1;
}

// tcp_new_port
// file lwip/src/core/tcp.c line 690
static unsigned short int tcp_new_port(void)
{
  unsigned char i;
  unsigned short int n = (unsigned short int)0;
  struct tcp_pcb *pcb;
  unsigned short int tmp_post_1;
  do
  {

  again:
    ;
    tmp_post_1 = tcp_port;
    tcp_port = tcp_port + 1;
    if((signed int)tmp_post_1 == 0xffff)
      tcp_port = (unsigned short int)0xc000;

    i = (unsigned char)0;

  __CPROVER_DUMP_L3:
    ;
    if((signed int)i >= 4)
      goto __CPROVER_DUMP_L8;

    pcb = *tcp_pcb_lists[(signed long int)i];

  __CPROVER_DUMP_L4:
    ;
    if(pcb == ((struct tcp_pcb *)NULL))
      goto __CPROVER_DUMP_L7;

    if(!(pcb->local_port == tcp_port))
      break;

    n = n + 1;
    if((signed int)n >= 16384)
      return (unsigned short int)0;

  }
  while((_Bool)1);
  pcb = pcb->next;
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L7:
  ;
  i = i + 1;
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L8:
  ;
  return tcp_port;
}

// tcp_next_iss
// file lwip/src/core/tcp.c line 1665
unsigned int tcp_next_iss(void)
{
  static unsigned int iss = (unsigned int)6510;
  iss = iss + tcp_ticks;
  return iss;
}

// tcp_oos_insert_segment
// file lwip/src/core/tcp_in.c line 892
static void tcp_oos_insert_segment(struct tcp_seg *cseg, struct tcp_seg *next)
{
  struct tcp_seg *old_seg;
  unsigned short int return_value_lwip_ntohs_3;
  return_value_lwip_ntohs_3=lwip_ntohs(cseg->tcphdr->_hdrlen_rsvd_flags);
  if(!((1u & (unsigned int)return_value_lwip_ntohs_3) == 0u))
  {
    tcp_segs_free(next);
    next = (struct tcp_seg *)(void *)0;
  }

  else
  {
    while(!(next == ((struct tcp_seg *)NULL)))
    {
      if(!((signed int)seqno + (signed int)(unsigned int)cseg->len + -((signed int)next->tcphdr->seqno + (signed int)(unsigned int)next->len) >= 0))
        break;

      unsigned short int return_value_lwip_ntohs_2;
      return_value_lwip_ntohs_2=lwip_ntohs(next->tcphdr->_hdrlen_rsvd_flags);
      if(!((1u & (unsigned int)return_value_lwip_ntohs_2) == 0u))
      {
        unsigned short int return_value_lwip_htons_1;
        return_value_lwip_htons_1=lwip_htons((unsigned short int)0x01U);
        cseg->tcphdr->_hdrlen_rsvd_flags = (unsigned short int)((signed int)cseg->tcphdr->_hdrlen_rsvd_flags | (signed int)return_value_lwip_htons_1);
      }

      old_seg = next;
      next = next->next;
      tcp_seg_free(old_seg);
    }
    if(!(next == ((struct tcp_seg *)NULL)))
    {
      if((signed int)seqno + (signed int)(unsigned int)cseg->len + -((signed int)next->tcphdr->seqno) >= 1)
      {
        cseg->len = (unsigned short int)(next->tcphdr->seqno - seqno);
        pbuf_realloc(cseg->p, cseg->len);
      }

    }

  }
  cseg->next = next;
}

// tcp_output
// file ./lwip/src/include/lwip/tcp.h line 392
signed char tcp_output(struct tcp_pcb *pcb)
{
  struct tcp_seg *seg;
  struct tcp_seg *useg;
  unsigned int wnd;
  unsigned int snd_nxt;
  do
    if((signed int)pcb->state == LISTEN)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"don't call tcp_output for listen-pcbs", 948, (const void *)"lwip/src/core/tcp_out.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  signed int tmp_if_expr_1;
  _Bool tmp_if_expr_4;
  unsigned int return_value_lwip_ntohl_3;
  unsigned int return_value_lwip_ntohl_5;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_11;
  unsigned int return_value_lwip_ntohl_16;
  unsigned int return_value_lwip_ntohl_17;
  if(tcp_input_pcb == pcb)
    return (signed char)0;

  else
  {
    if(!((signed int)pcb->snd_wnd >= (signed int)pcb->cwnd))
      tmp_if_expr_1 = (signed int)pcb->snd_wnd;

    else
      tmp_if_expr_1 = (signed int)pcb->cwnd;
    wnd = (unsigned int)tmp_if_expr_1;
    seg = pcb->unsent;
    if(!((2 & (signed int)pcb->flags) == 0))
    {
      if(seg == ((struct tcp_seg *)NULL))
        tmp_if_expr_4 = (_Bool)1;

      else
      {
        return_value_lwip_ntohl_3=lwip_ntohl(seg->tcphdr->seqno);
        tmp_if_expr_4 = (return_value_lwip_ntohl_3 - pcb->lastack) + (unsigned int)seg->len > wnd ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_4)
      {
        signed char return_value_tcp_send_empty_ack_2;
        return_value_tcp_send_empty_ack_2=tcp_send_empty_ack(pcb);
        return return_value_tcp_send_empty_ack_2;
      }

    }

    useg = pcb->unacked;
    if(!(useg == ((struct tcp_seg *)NULL)))
      for( ; !(useg->next == ((struct tcp_seg *)NULL)); useg = useg->next)
        ;

    while(!(seg == ((struct tcp_seg *)NULL)))
    {
      return_value_lwip_ntohl_5=lwip_ntohl(seg->tcphdr->seqno);
      if(!(wnd >= return_value_lwip_ntohl_5 + (unsigned int)seg->len + -pcb->lastack))
        break;

      do
      {
        unsigned short int return_value_lwip_ntohs_6;
        return_value_lwip_ntohs_6=lwip_ntohs(seg->tcphdr->_hdrlen_rsvd_flags);
        if(!((4u & (unsigned int)return_value_lwip_ntohs_6) == 0u))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"RST not expected here!", 1005, (const void *)"lwip/src/core/tcp_out.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      }
      while((_Bool)0);
      if(pcb->unacked == ((struct tcp_seg *)NULL))
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = ((signed int)pcb->flags & ((signed int)(unsigned char)0x0040U | (signed int)(unsigned char)0x0004U)) != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_7)
        tmp_if_expr_10 = (_Bool)1;

      else
      {
        if(!(pcb->unsent == ((struct tcp_seg *)NULL)))
        {
          if(!(pcb->unsent->next == ((struct tcp_seg *)NULL)))
            tmp_if_expr_8 = (_Bool)1;

          else
            tmp_if_expr_8 = (signed int)pcb->unsent->len >= (signed int)pcb->mss ? (_Bool)1 : (_Bool)0;
          tmp_if_expr_9 = tmp_if_expr_8 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_9 = (_Bool)0;
        tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_10)
        tmp_if_expr_12 = (_Bool)1;

      else
      {
        if((signed int)pcb->snd_buf == 0)
          tmp_if_expr_11 = (_Bool)1;

        else
          tmp_if_expr_11 = (signed int)pcb->snd_queuelen >= (4 * 65534) / 1024 ? (_Bool)1 : (_Bool)0;
        tmp_if_expr_12 = tmp_if_expr_11 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_12)
      {
        if((160 & (signed int)pcb->flags) == 0)
          break;

      }

      pcb->unsent = seg->next;
      if(!((signed int)pcb->state == SYN_SENT))
      {
        unsigned short int return_value_lwip_htons_13;
        return_value_lwip_htons_13=lwip_htons((unsigned short int)0x10U);
        seg->tcphdr->_hdrlen_rsvd_flags = (unsigned short int)((signed int)seg->tcphdr->_hdrlen_rsvd_flags | (signed int)return_value_lwip_htons_13);
        pcb->flags = pcb->flags & (unsigned char)~((signed int)(unsigned char)0x0001U | (signed int)(unsigned char)0x0002U);
      }

      seg->oversize_left = (unsigned short int)0;
      tcp_output_segment(seg, pcb);
      unsigned int return_value_lwip_ntohl_14;
      return_value_lwip_ntohl_14=lwip_ntohl(seg->tcphdr->seqno);
      unsigned short int return_value_lwip_ntohs_15;
      return_value_lwip_ntohs_15=lwip_ntohs(seg->tcphdr->_hdrlen_rsvd_flags);
      snd_nxt = return_value_lwip_ntohl_14 + (unsigned int)seg->len + (((unsigned int)return_value_lwip_ntohs_15 & 0x3fU & (0x01U | 0x02U)) != (unsigned int)0 ? 1U : 0U);
      if(!((signed int)pcb->snd_nxt + -((signed int)snd_nxt) >= 0))
        pcb->snd_nxt = snd_nxt;

      unsigned short int return_value_lwip_ntohs_20;
      return_value_lwip_ntohs_20=lwip_ntohs(seg->tcphdr->_hdrlen_rsvd_flags);
      if(((3u & (unsigned int)return_value_lwip_ntohs_20) == 0u ? 0U : 1U) + (unsigned int)seg->len >= 1u)
      {
        seg->next = (struct tcp_seg *)(void *)0;
        if(pcb->unacked == ((struct tcp_seg *)NULL))
        {
          pcb->unacked = seg;
          useg = seg;
        }

        else
        {
          unsigned int return_value_lwip_ntohl_18;
          return_value_lwip_ntohl_18=lwip_ntohl(seg->tcphdr->seqno);
          unsigned int return_value_lwip_ntohl_19;
          return_value_lwip_ntohl_19=lwip_ntohl(useg->tcphdr->seqno);
          if(!((signed int)return_value_lwip_ntohl_18 + -((signed int)return_value_lwip_ntohl_19) >= 0))
          {
            struct tcp_seg **cur_seg = &pcb->unacked;
            for( ; !(*cur_seg == ((struct tcp_seg *)NULL)); cur_seg = &(*cur_seg)->next)
            {
              return_value_lwip_ntohl_16=lwip_ntohl((*cur_seg)->tcphdr->seqno);
              return_value_lwip_ntohl_17=lwip_ntohl(seg->tcphdr->seqno);
              if((signed int)return_value_lwip_ntohl_16 + -((signed int)return_value_lwip_ntohl_17) >= 0)
                break;

            }
            seg->next = *cur_seg;
            *cur_seg = seg;
          }

          else
          {
            useg->next = seg;
            useg = useg->next;
          }
        }
      }

      else
        tcp_seg_free(seg);
      seg = pcb->unsent;
    }
    if(pcb->unsent == ((struct tcp_seg *)NULL))
      pcb->unsent_oversize = (unsigned short int)0;

    pcb->flags = pcb->flags & (unsigned char)~((signed int)(unsigned char)0x0080U);
    return (signed char)0;
  }
}

// tcp_output_alloc_header
// file lwip/src/core/tcp_out.c line 97
static struct pbuf * tcp_output_alloc_header(struct tcp_pcb *pcb, unsigned short int optlen, unsigned short int datalen, unsigned int seqno_be)
{
  struct tcp_hdr *tcp_output_alloc_header__1__tcphdr;
  struct pbuf *p;
  p=pbuf_alloc((enum anonymous)PBUF_IP, (unsigned short int)(20 + (signed int)optlen + (signed int)datalen), (enum anonymous_0)PBUF_RAM);
  if(!(p == ((struct pbuf *)NULL)))
  {
    do
      if(!((signed int)p->len >= 20 + (signed int)optlen))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"check that first pbuf can hold struct tcp_hdr", 104, (const void *)"lwip/src/core/tcp_out.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    tcp_output_alloc_header__1__tcphdr = (struct tcp_hdr *)p->payload;
    tcp_output_alloc_header__1__tcphdr->src=lwip_htons(pcb->local_port);
    tcp_output_alloc_header__1__tcphdr->dest=lwip_htons(pcb->remote_port);
    tcp_output_alloc_header__1__tcphdr->seqno = seqno_be;
    tcp_output_alloc_header__1__tcphdr->ackno=lwip_htonl(pcb->rcv_nxt);
    tcp_output_alloc_header__1__tcphdr->_hdrlen_rsvd_flags=lwip_htons((unsigned short int)((unsigned int)(5 + (signed int)optlen / 4 << 12) | 0x10U));
    tcp_output_alloc_header__1__tcphdr->wnd=lwip_htons(pcb->rcv_ann_wnd);
    tcp_output_alloc_header__1__tcphdr->chksum = (unsigned short int)0;
    tcp_output_alloc_header__1__tcphdr->urgp = (unsigned short int)0;
    pcb->rcv_ann_right_edge = pcb->rcv_nxt + (unsigned int)pcb->rcv_ann_wnd;
  }

  return p;
}

// tcp_output_segment
// file lwip/src/core/tcp_out.c line 1092
static void tcp_output_segment(struct tcp_seg *seg, struct tcp_pcb *pcb)
{
  unsigned short int len;
  unsigned int *opts;
  seg->tcphdr->ackno=lwip_htonl(pcb->rcv_nxt);
  seg->tcphdr->wnd=lwip_htons(pcb->rcv_ann_wnd);
  pcb->rcv_ann_right_edge = pcb->rcv_nxt + (unsigned int)pcb->rcv_ann_wnd;
  opts = (unsigned int *)(void *)(seg->tcphdr + (signed long int)1);
  if(!((1 & (signed int)seg->flags) == 0))
  {
    unsigned short int mss;
    mss=tcp_eff_send_mss_impl((unsigned short int)1024, &pcb->remote_ip);
    *opts=lwip_htonl((unsigned int)(0x02040000 | (signed int)mss & 0xFFFF));
    opts = opts + (signed long int)1;
  }

  if((signed int)pcb->rtime == -1)
    pcb->rtime = (signed short int)0;

  struct ip_addr *tmp_if_expr_1;
  if(pcb->local_ip.addr == 0u)
  {
    struct netif *netif;
    struct ip_addr *local_ip;
    do
    {
      netif=ip_route(&pcb->remote_ip);
      if(!(netif == ((struct netif *)NULL)))
        tmp_if_expr_1 = &netif->ip_addr;

      else
        tmp_if_expr_1 = (struct ip_addr *)(void *)0;
      local_ip = tmp_if_expr_1;
    }
    while((_Bool)0);
    if(local_ip == ((struct ip_addr *)NULL) || netif == ((struct netif *)NULL))
      goto __CPROVER_DUMP_L16;

    pcb->local_ip.addr = local_ip->addr;
  }

  if(pcb->rttest == 0u)
  {
    pcb->rttest = tcp_ticks;
    pcb->rtseq=lwip_ntohl(seg->tcphdr->seqno);
    while((_Bool)0)
      ;
  }

  while((_Bool)0)
    ;
  len = (unsigned short int)((unsigned char *)seg->tcphdr - (unsigned char *)seg->p->payload);
  seg->p->len = seg->p->len - len;
  seg->p->tot_len = seg->p->tot_len - len;
  seg->p->payload = (void *)seg->tcphdr;
  seg->tcphdr->chksum = (unsigned short int)0;
  seg->tcphdr->chksum=inet_chksum_pseudo(seg->p, (unsigned char)6, seg->p->tot_len, &pcb->local_ip, &pcb->remote_ip);
  lwip_stats.tcp.xmit = lwip_stats.tcp.xmit + 1;
  ip_output(seg->p, &pcb->local_ip, &pcb->remote_ip, pcb->ttl, pcb->tos, (unsigned char)6);

__CPROVER_DUMP_L16:
  ;
}

// tcp_parseopt
// file lwip/src/core/tcp_in.c line 1665
static void tcp_parseopt(struct tcp_pcb *pcb)
{
  unsigned char data;
  unsigned short int mss;
  unsigned short int return_value_lwip_ntohs_5;
  return_value_lwip_ntohs_5=lwip_ntohs(tcphdr->_hdrlen_rsvd_flags);
  unsigned char return_value_tcp_getoptbyte_2;
  unsigned char return_value_tcp_getoptbyte_3;
  unsigned char return_value_tcp_getoptbyte_4;
  if((signed int)return_value_lwip_ntohs_5 >> 12 >= 6)
  {
    unsigned short int max_c;
    unsigned short int return_value_lwip_ntohs_1;
    return_value_lwip_ntohs_1=lwip_ntohs(tcphdr->_hdrlen_rsvd_flags);
    max_c = (unsigned short int)(((signed int)return_value_lwip_ntohs_1 >> 12) - 5 << 2);
    tcp_optidx = (unsigned short int)0;
    while(!((signed int)tcp_optidx >= (signed int)max_c))
    {
      unsigned char opt;
      opt=tcp_getoptbyte();
      switch((signed int)opt)
      {
        case 0:
        {
          while((_Bool)0)
            ;
          goto __CPROVER_DUMP_L31;
        }
        case 1:
        {
          while((_Bool)0)
            ;
          break;
        }
        case 2:
        {
          while((_Bool)0)
            ;
          return_value_tcp_getoptbyte_2=tcp_getoptbyte();
          if(!((signed int)return_value_tcp_getoptbyte_2 == 4) || !((signed int)max_c >= 4 + (signed int)tcp_optidx))
          {
            while((_Bool)0)
              ;
            goto __CPROVER_DUMP_L31;
          }

          return_value_tcp_getoptbyte_3=tcp_getoptbyte();
          mss = (unsigned short int)((signed int)return_value_tcp_getoptbyte_3 << 8);
          return_value_tcp_getoptbyte_4=tcp_getoptbyte();
          mss = mss | (unsigned short int)return_value_tcp_getoptbyte_4;
          pcb->mss = (unsigned short int)((signed int)mss > 1024 || (signed int)mss == 0 ? 1024 : (signed int)mss);
          break;
        }
        default:
        {
          while((_Bool)0)
            ;
          data=tcp_getoptbyte();
          if(!((signed int)data >= 2))
          {
            while((_Bool)0)
              ;
            goto __CPROVER_DUMP_L31;
          }

          tcp_optidx = tcp_optidx + (unsigned short int)((signed int)data - 2);
        }
      }
    }
  }


__CPROVER_DUMP_L31:
  ;
}

// tcp_pbuf_prealloc
// file lwip/src/core/tcp_out.c line 223
static struct pbuf * tcp_pbuf_prealloc(enum anonymous layer, unsigned short int length, unsigned short int max_length, unsigned short int *oversize, struct tcp_pcb *pcb, unsigned char apiflags, unsigned char first_seg)
{
  struct pbuf *p;
  unsigned short int alloc = length;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  if(!((signed int)length >= (signed int)max_length))
  {
    if(!((0x02 & (signed int)apiflags) == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      if((64 & (signed int)pcb->flags) == 0)
      {
        if(first_seg == 0)
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = pcb->unsent != (struct tcp_seg *)(void *)0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = pcb->unacked != (struct tcp_seg *)(void *)0 ? (_Bool)1 : (_Bool)0;
        tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_3 = (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      alloc = (unsigned short int)((signed int)max_length < (((signed int)length + 1024 + 4) - 1 & ~(4 - 1)) ? (signed int)max_length : ((signed int)length + 1024 + 4) - 1 & ~(4 - 1));

  }

  p=pbuf_alloc(layer, alloc, (enum anonymous_0)PBUF_RAM);
  if(p == ((struct pbuf *)NULL))
    return (struct pbuf *)(void *)0;

  else
  {
    do
      if(!(p->next == ((struct pbuf *)NULL)))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"need unchained pbuf", 263, (const void *)"lwip/src/core/tcp_out.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    *oversize = (unsigned short int)((signed int)p->len - (signed int)length);
    p->tot_len = length;
    p->len = p->tot_len;
    return p;
  }
}

// tcp_pcb_purge
// file lwip/src/core/tcp.c line 1563
void tcp_pcb_purge(struct tcp_pcb *pcb)
{
  if(!((signed int)pcb->state == CLOSED))
  {
    if(!((signed int)pcb->state == TIME_WAIT))
    {
      if(!((signed int)pcb->state == LISTEN))
      {
        while((_Bool)0)
          ;
        if(!(pcb->refused_data == ((struct pbuf *)NULL)))
        {
          while((_Bool)0)
            ;
          pbuf_free(pcb->refused_data);
          pcb->refused_data = (struct pbuf *)(void *)0;
        }

        if(!(pcb->unsent == ((struct tcp_seg *)NULL)))
          while((_Bool)0)
            ;

        if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
          while((_Bool)0)
            ;

        if(!(pcb->ooseq == ((struct tcp_seg *)NULL)))
          while((_Bool)0)
            ;

        tcp_segs_free(pcb->ooseq);
        pcb->ooseq = (struct tcp_seg *)(void *)0;
        pcb->rtime = (signed short int)-1;
        tcp_segs_free(pcb->unsent);
        tcp_segs_free(pcb->unacked);
        pcb->unsent = (struct tcp_seg *)(void *)0;
        pcb->unacked = pcb->unsent;
        pcb->unsent_oversize = (unsigned short int)0;
      }

    }

  }

}

// tcp_pcb_remove
// file lwip/src/core/tcp.c line 1632
void tcp_pcb_remove(struct tcp_pcb **pcblist, struct tcp_pcb *pcb)
{
  do
  {
    if(*pcblist == pcb)
      *pcblist = (*pcblist)->next;

    else
    {
      tcp_tmp_pcb = *pcblist;
      for( ; !(tcp_tmp_pcb == ((struct tcp_pcb *)NULL)); tcp_tmp_pcb = tcp_tmp_pcb->next)
        if(tcp_tmp_pcb->next == pcb)
        {
          tcp_tmp_pcb->next = pcb->next;
          break;
        }

    }
    pcb->next = (struct tcp_pcb *)(void *)0;
  }
  while((_Bool)0);
  tcp_pcb_purge(pcb);
  if(!((signed int)pcb->state == TIME_WAIT))
  {
    if(!((signed int)pcb->state == LISTEN))
    {
      if(!((1 & (signed int)pcb->flags) == 0))
      {
        pcb->flags = pcb->flags | (unsigned char)0x0002U;
        tcp_output(pcb);
      }

    }

  }

  if(!((signed int)pcb->state == LISTEN))
  {
    do
      if(!(pcb->unsent == ((struct tcp_seg *)NULL)))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"unsent segments leaking", 1647, (const void *)"lwip/src/core/tcp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    do
      if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"unacked segments leaking", 1648, (const void *)"lwip/src/core/tcp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    do
      if(!(pcb->ooseq == ((struct tcp_seg *)NULL)))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"ooseq segments leaking", 1650, (const void *)"lwip/src/core/tcp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
  }

  pcb->state = (enum tcp_state)CLOSED;
  while((_Bool)0)
    ;
}

// tcp_poll
// file lwip/src/core/tcp.c line 1545
void tcp_poll(struct tcp_pcb *pcb, signed char (*poll)(void *, struct tcp_pcb *), unsigned char interval)
{
  do
    if((signed int)pcb->state == LISTEN)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid socket state for poll", 1547, (const void *)"lwip/src/core/tcp.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  pcb->poll = poll;
  pcb->pollinterval = interval;
}

// tcp_process
// file lwip/src/core/tcp_in.c line 666
static signed char tcp_process(struct tcp_pcb *pcb)
{
  struct tcp_seg *rseg;
  unsigned char acceptable = (unsigned char)0;
  signed char err = (signed char)0;
  _Bool tmp_if_expr_4;
  unsigned int return_value_lwip_ntohl_3;
  signed int tmp_if_expr_2;
  _Bool tmp_if_expr_6;
  signed int tmp_if_expr_5;
  _Bool tmp_if_expr_7;
  if(!((0x04U & (unsigned int)flags) == 0u))
  {
    if((signed int)pcb->state == SYN_SENT)
    {
      if(ackno == pcb->snd_nxt)
        acceptable = (unsigned char)1;

    }

    else
      if((signed int)seqno + -((signed int)pcb->rcv_nxt) >= 0)
      {
        if(!((signed int)seqno + -((signed int)pcb->rcv_nxt + (signed int)(unsigned int)pcb->rcv_wnd) >= 1))
          acceptable = (unsigned char)1;

      }

    if(!(acceptable == 0))
    {
      while((_Bool)0)
        ;
      do
        if((signed int)pcb->state == CLOSED)
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_input: pcb->state != CLOSED", 690, (const void *)"lwip/src/core/tcp_in.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      recv_flags = recv_flags | (unsigned char)0x08U;
      pcb->flags = pcb->flags & (unsigned char)~((signed int)(unsigned char)0x0001U);
      return (signed char)-11;
    }

    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    return (signed char)0;
  }

  else
    if(!((0x02U & (unsigned int)flags) == 0u))
    {
      if((signed int)pcb->state == SYN_SENT)
        goto __CPROVER_DUMP_L21;

      if((signed int)pcb->state == SYN_RCVD)
        goto __CPROVER_DUMP_L21;

      do
        pcb->flags = pcb->flags | (unsigned char)0x0002U;
      while((_Bool)0);
      return (signed char)0;
    }

    else
    {

    __CPROVER_DUMP_L21:
      ;
      if((16 & (signed int)pcb->flags) == 0)
        pcb->tmr = tcp_ticks;

      pcb->keep_cnt_sent = (unsigned char)0;
      tcp_parseopt(pcb);
      switch((signed int)pcb->state)
      {
        case SYN_SENT:
        {
          while((_Bool)0)
            ;
          if(!((0x02U & (unsigned int)flags) == 0u) && !((0x10U & (unsigned int)flags) == 0u))
          {
            return_value_lwip_ntohl_3=lwip_ntohl(pcb->unacked->tcphdr->seqno);
            tmp_if_expr_4 = ackno == return_value_lwip_ntohl_3 + (unsigned int)1 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_4 = (_Bool)0;
          if(tmp_if_expr_4)
          {
            pcb->snd_buf = pcb->snd_buf + 1;
            pcb->rcv_nxt = seqno + (unsigned int)1;
            pcb->rcv_ann_right_edge = pcb->rcv_nxt;
            pcb->lastack = ackno;
            pcb->snd_wnd = tcphdr->wnd;
            pcb->snd_wnd_max = pcb->snd_wnd;
            pcb->snd_wl1 = seqno - (unsigned int)1;
            pcb->state = (enum tcp_state)ESTABLISHED;
            pcb->mss=tcp_eff_send_mss_impl(pcb->mss, &pcb->remote_ip);
            pcb->ssthresh = (unsigned short int)((signed int)pcb->mss * 10);
            if((signed int)pcb->cwnd == 1)
              tmp_if_expr_2 = (signed int)pcb->mss * 2;

            else
              tmp_if_expr_2 = (signed int)pcb->mss;
            pcb->cwnd = (unsigned short int)tmp_if_expr_2;
            do
              if(!((signed int)pcb->snd_queuelen >= 1))
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pcb->snd_queuelen > 0", 744, (const void *)"lwip/src/core/tcp_in.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            while((_Bool)0);
            pcb->snd_queuelen = pcb->snd_queuelen - 1;
            while((_Bool)0)
              ;
            rseg = pcb->unacked;
            pcb->unacked = rseg->next;
            tcp_seg_free(rseg);
            if(pcb->unacked == ((struct tcp_seg *)NULL))
              pcb->rtime = (signed short int)-1;

            else
            {
              pcb->rtime = (signed short int)0;
              pcb->nrtx = (unsigned char)0;
            }
            do
              if(!(pcb->connected == ((signed char (*)(void *, struct tcp_pcb *, signed char))NULL)))
                err=pcb->connected(pcb->callback_arg, pcb, (signed char)0);

              else
                err = (signed char)0;
            while((_Bool)0);
            if((signed int)err == -10)
              return (signed char)-10;

            do
              pcb->flags = pcb->flags | (unsigned char)0x0002U;
            while((_Bool)0);
          }

          else
            if(!((0x10U & (unsigned int)flags) == 0u))
              tcp_rst_impl(ackno, seqno + (unsigned int)tcplen, &ip_data.current_iphdr_dest, &ip_data.current_iphdr_src, tcphdr->dest, tcphdr->src);

          break;
        }
        case SYN_RCVD:
        {
          if(!((0x10U & (unsigned int)flags) == 0u))
          {
            if((signed int)ackno + -(1 + (signed int)pcb->lastack) >= 0)
              tmp_if_expr_6 = (signed int)((unsigned int)ackno - (unsigned int)pcb->snd_nxt) <= 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_6 = (_Bool)0;
            if(tmp_if_expr_6)
            {
              unsigned short int old_cwnd;
              pcb->state = (enum tcp_state)ESTABLISHED;
              while((_Bool)0)
                ;
              do
                if(pcb->accept == ((signed char (*)(void *, struct tcp_pcb *, signed char))NULL))
                  do
                  {
                    printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pcb->accept != NULL", 783, (const void *)"lwip/src/core/tcp_in.c");
                    fflush((struct _IO_FILE *)(void *)0);
                    abort();
                  }
                  while((_Bool)0);

              while((_Bool)0);
              do
                if(!(pcb->accept == ((signed char (*)(void *, struct tcp_pcb *, signed char))NULL)))
                  err=pcb->accept(pcb->callback_arg, pcb, (signed char)0);

                else
                  err = (signed char)-14;
              while((_Bool)0);
              if(!((signed int)err == 0))
              {
                if(!((signed int)err == -10))
                  tcp_abort(pcb);

                return (signed char)-10;
              }

              old_cwnd = pcb->cwnd;
              tcp_receive(pcb);
              if(!((signed int)pcb->acked == 0))
                pcb->acked = pcb->acked - 1;

              if((signed int)old_cwnd == 1)
                tmp_if_expr_5 = (signed int)pcb->mss * 2;

              else
                tmp_if_expr_5 = (signed int)pcb->mss;
              pcb->cwnd = (unsigned short int)tmp_if_expr_5;
              if(!((32 & (signed int)recv_flags) == 0))
              {
                do
                  pcb->flags = pcb->flags | (unsigned char)0x0002U;
                while((_Bool)0);
                pcb->state = (enum tcp_state)CLOSE_WAIT;
              }

            }

            else
              tcp_rst_impl(ackno, seqno + (unsigned int)tcplen, &ip_data.current_iphdr_dest, &ip_data.current_iphdr_src, tcphdr->dest, tcphdr->src);
          }

          else
            if(!((0x02U & (unsigned int)flags) == 0u))
            {
              if(seqno == pcb->rcv_nxt + 4294967295u)
                tcp_rexmit(pcb);

            }

          break;
        }
        case CLOSE_WAIT:

        case ESTABLISHED:
        {
          tcp_receive(pcb);
          if(!((32 & (signed int)recv_flags) == 0))
          {
            do
              pcb->flags = pcb->flags | (unsigned char)0x0002U;
            while((_Bool)0);
            pcb->state = (enum tcp_state)CLOSE_WAIT;
          }

          break;
        }
        case FIN_WAIT_1:
        {
          tcp_receive(pcb);
          if(!((32 & (signed int)recv_flags) == 0))
          {
            if(!((0x10U & (unsigned int)flags) == 0u))
              tmp_if_expr_7 = ackno == pcb->snd_nxt ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_7 = (_Bool)0;
            if(tmp_if_expr_7)
            {
              while((_Bool)0)
                ;
              do
                pcb->flags = pcb->flags | (unsigned char)0x0002U;
              while((_Bool)0);
              tcp_pcb_purge(pcb);

            __CPROVER_DUMP_L80:
              ;
              do
              {
                if(tcp_active_pcbs == pcb)
                  *(&tcp_active_pcbs) = (*(&tcp_active_pcbs))->next;

                else
                {
                  tcp_tmp_pcb = *(&tcp_active_pcbs);
                  for( ; !(tcp_tmp_pcb == ((struct tcp_pcb *)NULL)); tcp_tmp_pcb = tcp_tmp_pcb->next)
                    if(tcp_tmp_pcb->next == pcb)
                    {
                      tcp_tmp_pcb->next = pcb->next;
                      break;
                    }

                }
                pcb->next = (struct tcp_pcb *)(void *)0;
                tcp_active_pcbs_changed = (unsigned char)1;
              }
              while((_Bool)0);
              pcb->state = (enum tcp_state)TIME_WAIT;
              do
              {
                pcb->next = *(&tcp_tw_pcbs);
                *(&tcp_tw_pcbs) = pcb;
                tcp_timer_needed();
              }
              while((_Bool)0);
            }

            else
            {
              do
                pcb->flags = pcb->flags | (unsigned char)0x0002U;
              while((_Bool)0);
              pcb->state = (enum tcp_state)CLOSING;
            }
          }

          else
            if(!((0x10U & (unsigned int)flags) == 0u))
            {
              if(ackno == pcb->snd_nxt)
                pcb->state = (enum tcp_state)FIN_WAIT_2;

            }

          break;
        }
        case FIN_WAIT_2:
        {
          tcp_receive(pcb);
          if(!((32 & (signed int)recv_flags) == 0))
          {
            while((_Bool)0)
              ;
            do
              pcb->flags = pcb->flags | (unsigned char)0x0002U;
            while((_Bool)0);
            tcp_pcb_purge(pcb);

          __CPROVER_DUMP_L96:
            ;
            do
            {
              if(tcp_active_pcbs == pcb)
                *(&tcp_active_pcbs) = (*(&tcp_active_pcbs))->next;

              else
              {
                tcp_tmp_pcb = *(&tcp_active_pcbs);
                for( ; !(tcp_tmp_pcb == ((struct tcp_pcb *)NULL)); tcp_tmp_pcb = tcp_tmp_pcb->next)
                  if(tcp_tmp_pcb->next == pcb)
                  {
                    tcp_tmp_pcb->next = pcb->next;
                    break;
                  }

              }
              pcb->next = (struct tcp_pcb *)(void *)0;
              tcp_active_pcbs_changed = (unsigned char)1;
            }
            while((_Bool)0);
            pcb->state = (enum tcp_state)TIME_WAIT;
            do
            {
              pcb->next = *(&tcp_tw_pcbs);
              *(&tcp_tw_pcbs) = pcb;
              tcp_timer_needed();
            }
            while((_Bool)0);
          }

          break;
        }
        case CLOSING:
        {
          tcp_receive(pcb);
          if(!((0x10U & (unsigned int)flags) == 0u))
          {
            if(ackno == pcb->snd_nxt)
            {
              while((_Bool)0)
                ;
              tcp_pcb_purge(pcb);

            __CPROVER_DUMP_L108:
              ;
              do
              {
                if(tcp_active_pcbs == pcb)
                  *(&tcp_active_pcbs) = (*(&tcp_active_pcbs))->next;

                else
                {
                  tcp_tmp_pcb = *(&tcp_active_pcbs);
                  for( ; !(tcp_tmp_pcb == ((struct tcp_pcb *)NULL)); tcp_tmp_pcb = tcp_tmp_pcb->next)
                    if(tcp_tmp_pcb->next == pcb)
                    {
                      tcp_tmp_pcb->next = pcb->next;
                      break;
                    }

                }
                pcb->next = (struct tcp_pcb *)(void *)0;
                tcp_active_pcbs_changed = (unsigned char)1;
              }
              while((_Bool)0);
              pcb->state = (enum tcp_state)TIME_WAIT;
              do
              {
                pcb->next = *(&tcp_tw_pcbs);
                *(&tcp_tw_pcbs) = pcb;
                tcp_timer_needed();
              }
              while((_Bool)0);
            }

          }

          break;
        }
        case LAST_ACK:
        {
          tcp_receive(pcb);
          if(!((0x10U & (unsigned int)flags) == 0u))
          {
            if(ackno == pcb->snd_nxt)
            {
              while((_Bool)0)
                ;
              recv_flags = recv_flags | (unsigned char)0x10U;
            }

          }

          break;
        }
        default:
          ;
      }
      return (signed char)0;
    }
}

// tcp_process_refused_data
// file lwip/src/core/tcp.c line 1134
signed char tcp_process_refused_data(struct tcp_pcb *pcb)
{
  signed char err;
  unsigned char refused_flags = pcb->refused_data->flags;
  struct pbuf *refused_data = pcb->refused_data;
  pcb->refused_data = (struct pbuf *)(void *)0;
  while((_Bool)0)
    ;
  do
    if(!(pcb->recv == ((signed char (*)(void *, struct tcp_pcb *, struct pbuf *, signed char))NULL)))
      err=pcb->recv(pcb->callback_arg, pcb, refused_data, (signed char)0);

    else
      err=tcp_recv_null((void *)0, pcb, refused_data, (signed char)0);
  while((_Bool)0);
  if((signed int)err == 0)
  {
    if(!((0x20U & (unsigned int)refused_flags) == 0u))
    {
      if(!((signed int)pcb->rcv_wnd == 65534))
        pcb->rcv_wnd = pcb->rcv_wnd + 1;

      do
        if(!(pcb->recv == ((signed char (*)(void *, struct tcp_pcb *, struct pbuf *, signed char))NULL)))
          err=pcb->recv(pcb->callback_arg, pcb, (struct pbuf *)(void *)0, (signed char)0);

        else
          err = (signed char)0;
      while((_Bool)0);
      if((signed int)err == -10)
        return (signed char)-10;

    }

  }

  else
    if((signed int)err == -10)
    {
      while((_Bool)0)
        ;
      return (signed char)-10;
    }

    else
    {
      pcb->refused_data = refused_data;
      return (signed char)-5;
    }
  return (signed char)0;
}

// tcp_receive
// file lwip/src/core/tcp_in.c line 939
static void tcp_receive(struct tcp_pcb *pcb)
{
  struct tcp_seg *next;
  struct tcp_seg *prev;
  struct tcp_seg *cseg;
  struct pbuf *p;
  signed int off;
  signed short int m;
  unsigned int right_wnd_edge;
  unsigned short int new_tot_len;
  signed int found_dupack = 0;
  do
    if(!((signed int)pcb->state >= ESTABLISHED))
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_receive: wrong state", 956, (const void *)"lwip/src/core/tcp_in.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_19;
  unsigned int tmp_if_expr_6;
  unsigned int return_value_lwip_ntohl_5;
  unsigned int tmp_if_expr_9;
  unsigned int return_value_lwip_ntohl_7;
  unsigned short int return_value_lwip_ntohs_8;
  unsigned int return_value_lwip_ntohl_10;
  unsigned short int return_value_lwip_ntohs_11;
  unsigned short int return_value_lwip_ntohs_16;
  _Bool tmp_if_expr_18;
  unsigned int return_value_lwip_ntohl_20;
  unsigned short int return_value_lwip_ntohs_21;
  unsigned short int return_value_lwip_ntohs_26;
  _Bool tmp_if_expr_28;
  if(!((0x10U & (unsigned int)flags) == 0u))
  {
    right_wnd_edge = (unsigned int)pcb->snd_wnd + pcb->snd_wl2;
    if(!((signed int)pcb->snd_wl1 + -((signed int)seqno) >= 0))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      if(pcb->snd_wl1 == seqno)
        tmp_if_expr_1 = (signed int)((unsigned int)pcb->snd_wl2 - (unsigned int)ackno) < 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      if(pcb->snd_wl2 == ackno)
        tmp_if_expr_3 = (signed int)tcphdr->wnd > (signed int)pcb->snd_wnd ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
    {
      pcb->snd_wnd = tcphdr->wnd;
      if(!((signed int)pcb->snd_wnd_max >= (signed int)pcb->snd_wnd))
        pcb->snd_wnd_max = pcb->snd_wnd;

      pcb->snd_wl1 = seqno;
      pcb->snd_wl2 = ackno;
      if((signed int)pcb->snd_wnd == 0)
      {
        if((signed int)pcb->persist_backoff == 0)
        {
          pcb->persist_cnt = (unsigned char)0;
          pcb->persist_backoff = (unsigned char)1;
        }

      }

      else
        if((signed int)pcb->persist_backoff >= 1)
          pcb->persist_backoff = (unsigned char)0;

      while((_Bool)0)
        ;
    }

    if(!((signed int)ackno + -((signed int)pcb->lastack) >= 1))
    {
      pcb->acked = (unsigned short int)0;
      if((signed int)tcplen == 0)
      {
        if(pcb->snd_wl2 + (unsigned int)pcb->snd_wnd == right_wnd_edge)
        {
          if((signed int)pcb->rtime >= 0)
          {
            if(pcb->lastack == ackno)
            {
              found_dupack = 1;
              if(!((signed int)pcb->dupacks >= (signed int)(1 + (unsigned char)(signed int)pcb->dupacks)))
                pcb->dupacks = pcb->dupacks + 1;

              if((signed int)pcb->dupacks >= 4)
              {
                if(!((signed int)pcb->cwnd >= (signed int)((unsigned short int)(signed int)pcb->cwnd + (unsigned short int)(signed int)pcb->mss)))
                  pcb->cwnd = pcb->cwnd + pcb->mss;

              }

              else
                if((signed int)pcb->dupacks == 3)
                  tcp_rexmit_fast(pcb);

            }

          }

        }

      }

      if(found_dupack == 0)
        pcb->dupacks = (unsigned char)0;

    }

    else
    {
      if((signed int)ackno + -(1 + (signed int)pcb->lastack) >= 0)
        tmp_if_expr_19 = (signed int)((unsigned int)ackno - (unsigned int)pcb->snd_nxt) <= 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_19 = (_Bool)0;
      if(tmp_if_expr_19)
      {
        if(!((4 & (signed int)pcb->flags) == 0))
        {
          pcb->flags = pcb->flags & (unsigned char)~((signed int)(unsigned char)0x0004U);
          pcb->cwnd = pcb->ssthresh;
        }

        pcb->nrtx = (unsigned char)0;
        pcb->rto = (signed short int)(((signed int)pcb->sa >> 3) + (signed int)pcb->sv);
        pcb->acked = (unsigned short int)(ackno - pcb->lastack);
        pcb->snd_buf = pcb->snd_buf + pcb->acked;
        pcb->dupacks = (unsigned char)0;
        pcb->lastack = ackno;
        if((signed int)pcb->state >= ESTABLISHED)
        {
          if(!((signed int)pcb->cwnd >= (signed int)pcb->ssthresh))
          {
            if(!((signed int)pcb->cwnd >= (signed int)((unsigned short int)(signed int)pcb->cwnd + (unsigned short int)(signed int)pcb->mss)))
              pcb->cwnd = pcb->cwnd + pcb->mss;

            while((_Bool)0)
              ;
          }

          else
          {
            unsigned short int new_cwnd = (unsigned short int)((signed int)pcb->cwnd + ((signed int)pcb->mss * (signed int)pcb->mss) / (signed int)pcb->cwnd);
            if(!((signed int)pcb->cwnd >= (signed int)new_cwnd))
              pcb->cwnd = new_cwnd;

            while((_Bool)0)
              ;
          }
        }

        while((_Bool)0)
          ;
        while(!(pcb->unacked == ((struct tcp_seg *)NULL)))
        {
          return_value_lwip_ntohl_10=lwip_ntohl(pcb->unacked->tcphdr->seqno);
          return_value_lwip_ntohs_11=lwip_ntohs(pcb->unacked->tcphdr->_hdrlen_rsvd_flags);
          if((signed int)((3u & (unsigned int)return_value_lwip_ntohs_11) == 0u ? 0U : 1U) + (signed int)return_value_lwip_ntohl_10 + (signed int)(unsigned int)pcb->unacked->len + -((signed int)ackno) >= 1)
            break;

          while((_Bool)0)
            ;
          next = pcb->unacked;
          pcb->unacked = pcb->unacked->next;
          while((_Bool)0)
            ;
          do
          {
            unsigned char return_value_pbuf_clen_15;
            return_value_pbuf_clen_15=pbuf_clen(next->p);
            if(!((signed int)pcb->snd_queuelen >= (signed int)return_value_pbuf_clen_15))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pcb->snd_queuelen >= pbuf_clen(next->p)", 1113, (const void *)"lwip/src/core/tcp_in.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          }
          while((_Bool)0);
          if(!((signed int)pcb->acked == 0))
          {
            return_value_lwip_ntohs_16=lwip_ntohs(next->tcphdr->_hdrlen_rsvd_flags);
            if(!((1u & (unsigned int)return_value_lwip_ntohs_16) == 0u))
              pcb->acked = pcb->acked - 1;

          }

          unsigned char return_value_pbuf_clen_17;
          return_value_pbuf_clen_17=pbuf_clen(next->p);
          pcb->snd_queuelen = pcb->snd_queuelen - (unsigned short int)return_value_pbuf_clen_17;
          tcp_seg_free(next);
          while((_Bool)0)
            ;
          if(!((signed int)pcb->snd_queuelen == 0))
            do
            {
              if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
                tmp_if_expr_18 = (_Bool)1;

              else
                tmp_if_expr_18 = pcb->unsent != (struct tcp_seg *)(void *)0 ? (_Bool)1 : (_Bool)0;
              if(!tmp_if_expr_18)
                do
                {
                  printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_receive: valid queue length", 1125, (const void *)"lwip/src/core/tcp_in.c");
                  fflush((struct _IO_FILE *)(void *)0);
                  abort();
                }
                while((_Bool)0);

            }
            while((_Bool)0);

        }
        if(pcb->unacked == ((struct tcp_seg *)NULL))
          pcb->rtime = (signed short int)-1;

        else
          pcb->rtime = (signed short int)0;
        pcb->polltmr = (unsigned char)0;
      }

      else
      {
        pcb->acked = (unsigned short int)0;
        tcp_send_empty_ack(pcb);
      }
    }
    while(!(pcb->unsent == ((struct tcp_seg *)NULL)))
    {
      return_value_lwip_ntohl_20=lwip_ntohl(pcb->unsent->tcphdr->seqno);
      return_value_lwip_ntohs_21=lwip_ntohs(pcb->unsent->tcphdr->_hdrlen_rsvd_flags);
      if(!((signed int)ackno + -((signed int)((3u & (unsigned int)return_value_lwip_ntohs_21) == 0u ? 0U : 1U) + (signed int)return_value_lwip_ntohl_20 + (signed int)(unsigned int)pcb->unsent->len) >= 0))
        break;

      if((signed int)ackno + -((signed int)pcb->snd_nxt) >= 1)
        break;

      while((_Bool)0)
        ;
      next = pcb->unsent;
      pcb->unsent = pcb->unsent->next;
      if(pcb->unsent == ((struct tcp_seg *)NULL))
        pcb->unsent_oversize = (unsigned short int)0;

      while((_Bool)0)
        ;
      do
      {
        unsigned char return_value_pbuf_clen_25;
        return_value_pbuf_clen_25=pbuf_clen(next->p);
        if(!((signed int)pcb->snd_queuelen >= (signed int)return_value_pbuf_clen_25))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pcb->snd_queuelen >= pbuf_clen(next->p)", 1172, (const void *)"lwip/src/core/tcp_in.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      }
      while((_Bool)0);
      if(!((signed int)pcb->acked == 0))
      {
        return_value_lwip_ntohs_26=lwip_ntohs(next->tcphdr->_hdrlen_rsvd_flags);
        if(!((1u & (unsigned int)return_value_lwip_ntohs_26) == 0u))
          pcb->acked = pcb->acked - 1;

      }

      unsigned char return_value_pbuf_clen_27;
      return_value_pbuf_clen_27=pbuf_clen(next->p);
      pcb->snd_queuelen = pcb->snd_queuelen - (unsigned short int)return_value_pbuf_clen_27;
      tcp_seg_free(next);
      while((_Bool)0)
        ;
      if(!((signed int)pcb->snd_queuelen == 0))
        do
        {
          if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
            tmp_if_expr_28 = (_Bool)1;

          else
            tmp_if_expr_28 = pcb->unsent != (struct tcp_seg *)(void *)0 ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_28)
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_receive: valid queue length", 1182, (const void *)"lwip/src/core/tcp_in.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        }
        while((_Bool)0);

    }
    while((_Bool)0)
      ;
    if(!(pcb->rttest == 0u))
    {
      if(!((signed int)pcb->rtseq + -((signed int)ackno) >= 0))
      {
        m = (signed short int)(tcp_ticks - pcb->rttest);
        while((_Bool)0)
          ;
        m = (signed short int)((signed int)m - ((signed int)pcb->sa >> 3));
        pcb->sa = pcb->sa + m;
        if(!((signed int)m >= 0))
          m = (signed short int)-((signed int)m);

        m = (signed short int)((signed int)m - ((signed int)pcb->sv >> 2));
        pcb->sv = pcb->sv + m;
        pcb->rto = (signed short int)(((signed int)pcb->sa >> 3) + (signed int)pcb->sv);
        while((_Bool)0)
          ;
        pcb->rttest = (unsigned int)0;
      }

    }

  }

  _Bool tmp_if_expr_57;
  if((signed int)tcplen >= 1)
    tmp_if_expr_57 = (signed int)pcb->state < CLOSE_WAIT ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_57 = (_Bool)0;
  _Bool tmp_if_expr_31;
  _Bool tmp_if_expr_55;
  unsigned short int return_value_lwip_ntohs_40;
  _Bool tmp_if_expr_56;
  if(tmp_if_expr_57)
  {
    if((signed int)pcb->rcv_nxt + -(1 + (signed int)seqno) >= 0)
      tmp_if_expr_31 = (signed int)((unsigned int)pcb->rcv_nxt - (unsigned int)((seqno + (unsigned int)tcplen) - (unsigned int)1)) <= 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_31 = (_Bool)0;
    if(tmp_if_expr_31)
    {
      off = (signed int)(pcb->rcv_nxt - seqno);
      p = inseg.p;
      do
        if(inseg.p == ((struct pbuf *)NULL))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"inseg.p != NULL", 1276, (const void *)"lwip/src/core/tcp_in.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      do
        if(off >= 0x7fff)
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"insane offset!", 1277, (const void *)"lwip/src/core/tcp_in.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      if(!((signed int)inseg.p->len >= off))
      {
        do
          if(!((signed int)inseg.p->tot_len >= off))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf too short!", 1279, (const void *)"lwip/src/core/tcp_in.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        new_tot_len = (unsigned short int)((signed int)inseg.p->tot_len - off);
        for( ; !((signed int)p->len >= off); p = p->next)
        {
          off = off - (signed int)p->len;
          p->tot_len = new_tot_len;
          p->len = (unsigned short int)0;
        }
        unsigned char return_value_pbuf_header_29;
        return_value_pbuf_header_29=pbuf_header(p, (signed short int)-off);
        if(!(return_value_pbuf_header_29 == 0))
          do
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_header failed", 1292, (const void *)"lwip/src/core/tcp_in.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);
          while((_Bool)0);

      }

      else
      {
        unsigned char return_value_pbuf_header_30;
        return_value_pbuf_header_30=pbuf_header(inseg.p, (signed short int)-off);
        if(!(return_value_pbuf_header_30 == 0))
          do
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_header failed", 1297, (const void *)"lwip/src/core/tcp_in.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);
          while((_Bool)0);

      }
      inseg.len = inseg.len - (unsigned short int)(pcb->rcv_nxt - seqno);
      seqno = pcb->rcv_nxt;
      inseg.tcphdr->seqno = seqno;
    }

    else
      if(!((signed int)seqno + -((signed int)pcb->rcv_nxt) >= 0))
      {
        while((_Bool)0)
          ;
        do
          pcb->flags = pcb->flags | (unsigned char)0x0002U;
        while((_Bool)0);
      }

    if((signed int)seqno + -((signed int)pcb->rcv_nxt) >= 0)
      tmp_if_expr_55 = (signed int)((unsigned int)seqno - (unsigned int)((pcb->rcv_nxt + (unsigned int)pcb->rcv_wnd) - (unsigned int)1)) <= 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_55 = (_Bool)0;
    if(tmp_if_expr_55)
    {
      if(pcb->rcv_nxt == seqno)
      {
        unsigned short int return_value_lwip_ntohs_32;
        return_value_lwip_ntohs_32=lwip_ntohs((&inseg)->tcphdr->_hdrlen_rsvd_flags);
        tcplen = (unsigned short int)((unsigned int)(&inseg)->len + (((unsigned int)return_value_lwip_ntohs_32 & 0x3fU & (0x01U | 0x02U)) != (unsigned int)0 ? 1U : 0U));
        if(!((signed int)pcb->rcv_wnd >= (signed int)tcplen))
        {
          while((_Bool)0)
            ;
          unsigned short int return_value_lwip_ntohs_35;
          return_value_lwip_ntohs_35=lwip_ntohs(inseg.tcphdr->_hdrlen_rsvd_flags);
          if(!((1u & (unsigned int)return_value_lwip_ntohs_35) == 0u))
          {
            unsigned short int return_value_lwip_ntohs_33;
            return_value_lwip_ntohs_33=lwip_ntohs(inseg.tcphdr->_hdrlen_rsvd_flags);
            unsigned short int return_value_lwip_htons_34;
            return_value_lwip_htons_34=lwip_htons((unsigned short int)((unsigned int)return_value_lwip_ntohs_33 & 0x3fU & ~0x01U));
            inseg.tcphdr->_hdrlen_rsvd_flags = (unsigned short int)((signed int)inseg.tcphdr->_hdrlen_rsvd_flags & (((signed int)(unsigned short int)~((signed int)(unsigned short int)0x3fU) & 0xff) << 8 | ((signed int)(unsigned short int)~((signed int)(unsigned short int)0x3fU) & 0xff00) >> 8) | (signed int)return_value_lwip_htons_34);
          }

          inseg.len = pcb->rcv_wnd;
          unsigned short int return_value_lwip_ntohs_36;
          return_value_lwip_ntohs_36=lwip_ntohs(inseg.tcphdr->_hdrlen_rsvd_flags);
          if(!((2u & (unsigned int)return_value_lwip_ntohs_36) == 0u))
            inseg.len = inseg.len - (unsigned short int)1;

          pbuf_realloc(inseg.p, inseg.len);
          unsigned short int return_value_lwip_ntohs_37;
          return_value_lwip_ntohs_37=lwip_ntohs((&inseg)->tcphdr->_hdrlen_rsvd_flags);
          tcplen = (unsigned short int)((unsigned int)(&inseg)->len + (((unsigned int)return_value_lwip_ntohs_37 & 0x3fU & (0x01U | 0x02U)) != (unsigned int)0 ? 1U : 0U));
          do
            if(!(seqno + (unsigned int)tcplen == pcb->rcv_nxt + (unsigned int)pcb->rcv_wnd))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_receive: segment not trimmed correctly to rcv_wnd\n", 1342, (const void *)"lwip/src/core/tcp_in.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          while((_Bool)0);
        }

        if(!(pcb->ooseq == ((struct tcp_seg *)NULL)))
        {
          unsigned short int return_value_lwip_ntohs_44;
          return_value_lwip_ntohs_44=lwip_ntohs(inseg.tcphdr->_hdrlen_rsvd_flags);
          if(!((1u & (unsigned int)return_value_lwip_ntohs_44) == 0u))
          {
            while((_Bool)0)
              ;
            while(!(pcb->ooseq == ((struct tcp_seg *)NULL)))
            {
              struct tcp_seg *old_ooseq = pcb->ooseq;
              pcb->ooseq = pcb->ooseq->next;
              tcp_seg_free(old_ooseq);
            }
          }

          else
          {
            next = pcb->ooseq;
            while(!(next == ((struct tcp_seg *)NULL)))
            {
              if(!((signed int)seqno + (signed int)(unsigned int)tcplen + -((signed int)next->tcphdr->seqno + (signed int)(unsigned int)next->len) >= 0))
                break;

              unsigned short int return_value_lwip_ntohs_41;
              return_value_lwip_ntohs_41=lwip_ntohs(next->tcphdr->_hdrlen_rsvd_flags);
              if(!((1u & (unsigned int)return_value_lwip_ntohs_41) == 0u))
              {
                return_value_lwip_ntohs_40=lwip_ntohs(inseg.tcphdr->_hdrlen_rsvd_flags);
                if((2u & (unsigned int)return_value_lwip_ntohs_40) == 0u)
                {
                  unsigned short int return_value_lwip_htons_38;
                  return_value_lwip_htons_38=lwip_htons((unsigned short int)0x01U);
                  inseg.tcphdr->_hdrlen_rsvd_flags = (unsigned short int)((signed int)inseg.tcphdr->_hdrlen_rsvd_flags | (signed int)return_value_lwip_htons_38);
                  unsigned short int return_value_lwip_ntohs_39;
                  return_value_lwip_ntohs_39=lwip_ntohs((&inseg)->tcphdr->_hdrlen_rsvd_flags);
                  tcplen = (unsigned short int)((unsigned int)(&inseg)->len + (((unsigned int)return_value_lwip_ntohs_39 & 0x3fU & (0x01U | 0x02U)) != (unsigned int)0 ? 1U : 0U));
                }

              }

              prev = next;
              next = next->next;
              tcp_seg_free(prev);
            }
            if(!(next == ((struct tcp_seg *)NULL)))
            {
              if((signed int)seqno + (signed int)(unsigned int)tcplen + -((signed int)next->tcphdr->seqno) >= 1)
              {
                inseg.len = (unsigned short int)(next->tcphdr->seqno - seqno);
                unsigned short int return_value_lwip_ntohs_42;
                return_value_lwip_ntohs_42=lwip_ntohs(inseg.tcphdr->_hdrlen_rsvd_flags);
                if(!((2u & (unsigned int)return_value_lwip_ntohs_42) == 0u))
                  inseg.len = inseg.len - (unsigned short int)1;

                pbuf_realloc(inseg.p, inseg.len);
                unsigned short int return_value_lwip_ntohs_43;
                return_value_lwip_ntohs_43=lwip_ntohs((&inseg)->tcphdr->_hdrlen_rsvd_flags);
                tcplen = (unsigned short int)((unsigned int)(&inseg)->len + (((unsigned int)return_value_lwip_ntohs_43 & 0x3fU & (0x01U | 0x02U)) != (unsigned int)0 ? 1U : 0U));
                do
                  if(!(seqno + (unsigned int)tcplen == next->tcphdr->seqno))
                    do
                    {
                      printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_receive: segment not trimmed correctly to ooseq queue\n", 1390, (const void *)"lwip/src/core/tcp_in.c");
                      fflush((struct _IO_FILE *)(void *)0);
                      abort();
                    }
                    while((_Bool)0);

                while((_Bool)0);
              }

            }

            pcb->ooseq = next;
          }
        }

        pcb->rcv_nxt = seqno + (unsigned int)tcplen;
        do
          if(!((signed int)pcb->rcv_wnd >= (signed int)tcplen))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_receive: tcplen > rcv_wnd\n", 1400, (const void *)"lwip/src/core/tcp_in.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        pcb->rcv_wnd = pcb->rcv_wnd - tcplen;
        tcp_update_rcv_ann_wnd(pcb);
        if((signed int)inseg.p->tot_len >= 1)
        {
          recv_data = inseg.p;
          inseg.p = (struct pbuf *)(void *)0;
        }

        unsigned short int return_value_lwip_ntohs_45;
        return_value_lwip_ntohs_45=lwip_ntohs(inseg.tcphdr->_hdrlen_rsvd_flags);
        if(!((1u & (unsigned int)return_value_lwip_ntohs_45) == 0u))
        {
          while((_Bool)0)
            ;
          recv_flags = recv_flags | (unsigned char)0x20U;
        }

        while(!(pcb->ooseq == ((struct tcp_seg *)NULL)))
        {
          if(!(pcb->ooseq->tcphdr->seqno == pcb->rcv_nxt))
            break;

          cseg = pcb->ooseq;
          seqno = pcb->ooseq->tcphdr->seqno;
          unsigned short int return_value_lwip_ntohs_46;
          return_value_lwip_ntohs_46=lwip_ntohs(cseg->tcphdr->_hdrlen_rsvd_flags);
          pcb->rcv_nxt = pcb->rcv_nxt + (unsigned int)cseg->len + (((unsigned int)return_value_lwip_ntohs_46 & 0x3fU & (0x01U | 0x02U)) != (unsigned int)0 ? 1U : 0U);
          do
          {
            unsigned short int return_value_lwip_ntohs_47;
            return_value_lwip_ntohs_47=lwip_ntohs(cseg->tcphdr->_hdrlen_rsvd_flags);
            if(!((unsigned int)pcb->rcv_wnd >= ((3u & (unsigned int)return_value_lwip_ntohs_47) == 0u ? 0U : 1U) + (unsigned int)cseg->len))
              do
              {
                printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_receive: ooseq tcplen > rcv_wnd\n", 1437, (const void *)"lwip/src/core/tcp_in.c");
                fflush((struct _IO_FILE *)(void *)0);
                abort();
              }
              while((_Bool)0);

          }
          while((_Bool)0);
          unsigned short int return_value_lwip_ntohs_48;
          return_value_lwip_ntohs_48=lwip_ntohs(cseg->tcphdr->_hdrlen_rsvd_flags);
          pcb->rcv_wnd = pcb->rcv_wnd - (unsigned short int)((unsigned int)cseg->len + (((unsigned int)return_value_lwip_ntohs_48 & 0x3fU & (0x01U | 0x02U)) != (unsigned int)0 ? 1U : 0U));
          tcp_update_rcv_ann_wnd(pcb);
          if((signed int)cseg->p->tot_len >= 1)
          {
            if(!(recv_data == ((struct pbuf *)NULL)))
              pbuf_cat(recv_data, cseg->p);

            else
              recv_data = cseg->p;
            cseg->p = (struct pbuf *)(void *)0;
          }

          unsigned short int return_value_lwip_ntohs_49;
          return_value_lwip_ntohs_49=lwip_ntohs(cseg->tcphdr->_hdrlen_rsvd_flags);
          if(!((1u & (unsigned int)return_value_lwip_ntohs_49) == 0u))
          {
            while((_Bool)0)
              ;
            recv_flags = recv_flags | (unsigned char)0x20U;
            if((signed int)pcb->state == ESTABLISHED)
              pcb->state = (enum tcp_state)CLOSE_WAIT;

          }

          pcb->ooseq = cseg->next;
          tcp_seg_free(cseg);
        }
        do
          if(!((1 & (signed int)pcb->flags) == 0))
          {
            pcb->flags = pcb->flags & (unsigned char)~((signed int)(unsigned char)0x0001U);
            pcb->flags = pcb->flags | (unsigned char)0x0002U;
          }

          else
            pcb->flags = pcb->flags | (unsigned char)0x0001U;
        while((_Bool)0);
      }

      else
      {
        tcp_send_empty_ack(pcb);
        if(pcb->ooseq == ((struct tcp_seg *)NULL))
          pcb->ooseq=tcp_seg_copy(&inseg);

        else
        {
          prev = (struct tcp_seg *)(void *)0;
          next = pcb->ooseq;
          for( ; !(next == ((struct tcp_seg *)NULL)); next = next->next)
          {
            if(seqno == next->tcphdr->seqno)
            {
              if(!((signed int)next->len >= (signed int)inseg.len))
              {
                cseg=tcp_seg_copy(&inseg);
                if(!(cseg == ((struct tcp_seg *)NULL)))
                {
                  if(!(prev == ((struct tcp_seg *)NULL)))
                    prev->next = cseg;

                  else
                    pcb->ooseq = cseg;
                  tcp_oos_insert_segment(cseg, next);
                }

                break;
              }

              else
                break;
            }

            else
            {
              if(prev == ((struct tcp_seg *)NULL))
              {
                if(!((signed int)seqno + -((signed int)next->tcphdr->seqno) >= 0))
                {
                  cseg=tcp_seg_copy(&inseg);
                  if(!(cseg == ((struct tcp_seg *)NULL)))
                  {
                    pcb->ooseq = cseg;
                    tcp_oos_insert_segment(cseg, next);
                  }

                  break;
                }

              }

              else
                if((signed int)seqno + -(1 + (signed int)prev->tcphdr->seqno) >= 0)
                {
                  if(!((signed int)seqno + -(-1 + (signed int)next->tcphdr->seqno) >= 1))
                  {
                    cseg=tcp_seg_copy(&inseg);
                    if(!(cseg == ((struct tcp_seg *)NULL)))
                    {
                      if((signed int)prev->tcphdr->seqno + (signed int)(unsigned int)prev->len + -((signed int)seqno) >= 1)
                      {
                        prev->len = (unsigned short int)(seqno - prev->tcphdr->seqno);
                        pbuf_realloc(prev->p, prev->len);
                      }

                      prev->next = cseg;
                      tcp_oos_insert_segment(cseg, next);
                    }

                    break;
                  }

                }

              if(next->next == ((struct tcp_seg *)NULL))
              {
                if((signed int)seqno + -((signed int)next->tcphdr->seqno) >= 1)
                {
                  unsigned short int return_value_lwip_ntohs_50;
                  return_value_lwip_ntohs_50=lwip_ntohs(next->tcphdr->_hdrlen_rsvd_flags);
                  if(!((1u & (unsigned int)return_value_lwip_ntohs_50) == 0u))
                    break;

                  next->next=tcp_seg_copy(&inseg);
                  if(!(next->next == ((struct tcp_seg *)NULL)))
                  {
                    if((signed int)next->tcphdr->seqno + (signed int)(unsigned int)next->len + -((signed int)seqno) >= 1)
                    {
                      next->len = (unsigned short int)(seqno - next->tcphdr->seqno);
                      pbuf_realloc(next->p, next->len);
                    }

                    if(!(pcb->rcv_nxt + (unsigned int)pcb->rcv_wnd >= seqno + (unsigned int)tcplen))
                    {
                      while((_Bool)0)
                        ;
                      unsigned short int return_value_lwip_ntohs_53;
                      return_value_lwip_ntohs_53=lwip_ntohs(next->next->tcphdr->_hdrlen_rsvd_flags);
                      if(!((1u & (unsigned int)return_value_lwip_ntohs_53) == 0u))
                      {
                        unsigned short int return_value_lwip_ntohs_51;
                        return_value_lwip_ntohs_51=lwip_ntohs(next->next->tcphdr->_hdrlen_rsvd_flags);
                        unsigned short int return_value_lwip_htons_52;
                        return_value_lwip_htons_52=lwip_htons((unsigned short int)((unsigned int)return_value_lwip_ntohs_51 & 0x3fU & ~0x01U));
                        next->next->tcphdr->_hdrlen_rsvd_flags = (unsigned short int)((signed int)next->next->tcphdr->_hdrlen_rsvd_flags & (((signed int)(unsigned short int)~((signed int)(unsigned short int)0x3fU) & 0xff) << 8 | ((signed int)(unsigned short int)~((signed int)(unsigned short int)0x3fU) & 0xff00) >> 8) | (signed int)return_value_lwip_htons_52);
                      }

                      next->next->len = (unsigned short int)((pcb->rcv_nxt + (unsigned int)pcb->rcv_wnd) - seqno);
                      pbuf_realloc(next->next->p, next->next->len);
                      unsigned short int return_value_lwip_ntohs_54;
                      return_value_lwip_ntohs_54=lwip_ntohs(next->next->tcphdr->_hdrlen_rsvd_flags);
                      tcplen = (unsigned short int)((unsigned int)next->next->len + (((unsigned int)return_value_lwip_ntohs_54 & 0x3fU & (0x01U | 0x02U)) != (unsigned int)0 ? 1U : 0U));
                      do
                        if(!(seqno + (unsigned int)tcplen == pcb->rcv_nxt + (unsigned int)pcb->rcv_wnd))
                          do
                          {
                            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_receive: segment not trimmed correctly to rcv_wnd\n", 1594, (const void *)"lwip/src/core/tcp_in.c");
                            fflush((struct _IO_FILE *)(void *)0);
                            abort();
                          }
                          while((_Bool)0);

                      while((_Bool)0);
                    }

                  }

                  break;
                }

              }

            }
            prev = next;
          }
        }
      }
    }

    else
      tcp_send_empty_ack(pcb);
  }

  else
  {
    if((signed int)seqno + -((signed int)pcb->rcv_nxt) >= 0)
      tmp_if_expr_56 = (signed int)((unsigned int)seqno - (unsigned int)((pcb->rcv_nxt + (unsigned int)pcb->rcv_wnd) - (unsigned int)1)) <= 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_56 = (_Bool)0;
    if(!tmp_if_expr_56)
      do
        pcb->flags = pcb->flags | (unsigned char)0x0002U;
      while((_Bool)0);

  }
}

// tcp_recv
// file lwip/src/core/tcp.c line 1485
void tcp_recv(struct tcp_pcb *pcb, signed char (*recv)(void *, struct tcp_pcb *, struct pbuf *, signed char))
{
  do
    if((signed int)pcb->state == LISTEN)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid socket state for recv callback", 1487, (const void *)"lwip/src/core/tcp.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  pcb->recv = recv;
}

// tcp_recv_null
// file lwip/src/core/tcp.c line 1267
signed char tcp_recv_null(void *arg, struct tcp_pcb *pcb, struct pbuf *p, signed char err)
{
  (void)arg;
  if(!(p == ((struct pbuf *)NULL)))
  {
    tcp_recved(pcb, p->tot_len);
    pbuf_free(p);
  }

  else
    if((signed int)err == 0)
    {
      signed char return_value_tcp_close_1;
      return_value_tcp_close_1=tcp_close(pcb);
      return return_value_tcp_close_1;
    }

  return (signed char)0;
}

// tcp_recved
// file lwip/src/core/tcp.c line 646
void tcp_recved(struct tcp_pcb *pcb, unsigned short int len)
{
  signed int wnd_inflation;
  do
    if((signed int)pcb->state == LISTEN)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"don't call tcp_recved for listen-pcbs", 652, (const void *)"lwip/src/core/tcp.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  pcb->rcv_wnd = pcb->rcv_wnd + len;
  _Bool tmp_if_expr_1;
  if((signed int)pcb->rcv_wnd >= 65535)
    pcb->rcv_wnd = (unsigned short int)65534;

  else
    if((signed int)pcb->rcv_wnd == 0)
    {
      if((signed int)pcb->state == CLOSE_WAIT)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)pcb->state == LAST_ACK ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        pcb->rcv_wnd = (unsigned short int)65534;

      else
        do
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_recved: len wrapped rcv_wnd\n", 665, (const void *)"lwip/src/core/tcp.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);
        while((_Bool)0);
    }

  unsigned int return_value_tcp_update_rcv_ann_wnd_2;
  return_value_tcp_update_rcv_ann_wnd_2=tcp_update_rcv_ann_wnd(pcb);
  wnd_inflation = (signed int)return_value_tcp_update_rcv_ann_wnd_2;
  if(wnd_inflation >= 16383)
  {
    do
      pcb->flags = pcb->flags | (unsigned char)0x0002U;
    while((_Bool)0);
    tcp_output(pcb);
  }

  while((_Bool)0)
    ;
}

// tcp_rexmit
// file ./lwip/src/include/lwip/tcp_impl.h line 71
void tcp_rexmit(struct tcp_pcb *pcb)
{
  struct tcp_seg *seg;
  struct tcp_seg **cur_seg;
  unsigned int return_value_lwip_ntohl_1;
  unsigned int return_value_lwip_ntohl_2;
  if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
  {
    seg = pcb->unacked;
    pcb->unacked = seg->next;
    cur_seg = &pcb->unsent;
    for( ; !(*cur_seg == ((struct tcp_seg *)NULL)); cur_seg = &(*cur_seg)->next)
    {
      return_value_lwip_ntohl_1=lwip_ntohl((*cur_seg)->tcphdr->seqno);
      return_value_lwip_ntohl_2=lwip_ntohl(seg->tcphdr->seqno);
      if((signed int)return_value_lwip_ntohl_1 + -((signed int)return_value_lwip_ntohl_2) >= 0)
        break;

    }
    seg->next = *cur_seg;
    *cur_seg = seg;
    if(seg->next == ((struct tcp_seg *)NULL))
      pcb->unsent_oversize = (unsigned short int)0;

    pcb->nrtx = pcb->nrtx + 1;
    pcb->rttest = (unsigned int)0;
  }

}

// tcp_rexmit_fast
// file ./lwip/src/include/lwip/tcp_impl.h line 73
void tcp_rexmit_fast(struct tcp_pcb *pcb)
{
  if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
  {
    if((4 & (signed int)pcb->flags) == 0)
    {
      while((_Bool)0)
        ;
      tcp_rexmit(pcb);
      if(!((signed int)pcb->snd_wnd >= (signed int)pcb->cwnd))
        pcb->ssthresh = (unsigned short int)((signed int)pcb->snd_wnd / 2);

      else
        pcb->ssthresh = (unsigned short int)((signed int)pcb->cwnd / 2);
      if(!((unsigned int)pcb->ssthresh >= 2U * (unsigned int)pcb->mss))
      {
        while((_Bool)0)
          ;
        pcb->ssthresh = (unsigned short int)(2 * (signed int)pcb->mss);
      }

      pcb->cwnd = (unsigned short int)((signed int)pcb->ssthresh + 3 * (signed int)pcb->mss);
      pcb->flags = pcb->flags | (unsigned char)0x0004U;
    }

  }

}

// tcp_rexmit_rto
// file ./lwip/src/include/lwip/tcp_impl.h line 72
void tcp_rexmit_rto(struct tcp_pcb *pcb)
{
  struct tcp_seg *seg;
  if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
  {
    seg = pcb->unacked;
    for( ; !(seg->next == ((struct tcp_seg *)NULL)); seg = seg->next)
      ;
    seg->next = pcb->unsent;
    if(pcb->unsent == ((struct tcp_seg *)NULL))
      pcb->unsent_oversize = seg->oversize_left;

    pcb->unsent = pcb->unacked;
    pcb->unacked = (struct tcp_seg *)(void *)0;
    pcb->nrtx = pcb->nrtx + 1;
    pcb->rttest = (unsigned int)0;
    tcp_output(pcb);
  }

}

// tcp_rst_impl
// file ./lwip/src/include/lwip/tcp_impl.h line 476
void tcp_rst_impl(unsigned int seqno, unsigned int ackno, struct ip_addr *local_ip, struct ip_addr *remote_ip, unsigned short int local_port, unsigned short int remote_port)
{
  struct pbuf *p;
  struct tcp_hdr *tcp_rst_impl__1__tcphdr;
  p=pbuf_alloc((enum anonymous)PBUF_IP, (unsigned short int)20, (enum anonymous_0)PBUF_RAM);
  if(p == ((struct pbuf *)NULL))
    while((_Bool)0)
      ;

  else
  {
    do
      if(!((unsigned long int)p->len >= sizeof(struct tcp_hdr) /*20ul*/ ))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"check that first pbuf can hold struct tcp_hdr", 1267, (const void *)"lwip/src/core/tcp_out.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    tcp_rst_impl__1__tcphdr = (struct tcp_hdr *)p->payload;
    tcp_rst_impl__1__tcphdr->src=lwip_htons(local_port);
    tcp_rst_impl__1__tcphdr->dest=lwip_htons(remote_port);
    tcp_rst_impl__1__tcphdr->seqno=lwip_htonl(seqno);
    tcp_rst_impl__1__tcphdr->ackno=lwip_htonl(ackno);
    tcp_rst_impl__1__tcphdr->_hdrlen_rsvd_flags=lwip_htons((unsigned short int)((unsigned int)(20 / 4 << 12) | 0x04U | 0x10U));
    tcp_rst_impl__1__tcphdr->wnd = (unsigned short int)((65534 & 0xff) << 8 | (65534 & 0xff00) >> 8);
    tcp_rst_impl__1__tcphdr->chksum = (unsigned short int)0;
    tcp_rst_impl__1__tcphdr->urgp = (unsigned short int)0;
    lwip_stats.tcp.xmit = lwip_stats.tcp.xmit + 1;
    tcp_rst_impl__1__tcphdr->chksum=inet_chksum_pseudo(p, (unsigned char)6, p->tot_len, local_ip, remote_ip);
    ip_output(p, local_ip, remote_ip, (unsigned char)255, (unsigned char)0, (unsigned char)6);
    pbuf_free(p);
    while((_Bool)0)
      ;
  }
}

// tcp_seg_copy
// file lwip/src/core/tcp.c line 1247
struct tcp_seg * tcp_seg_copy(struct tcp_seg *seg)
{
  struct tcp_seg *cseg;
  void *return_value_mem_malloc_1;
  return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)3]);
  cseg = (struct tcp_seg *)return_value_mem_malloc_1;
  if(cseg == ((struct tcp_seg *)NULL))
    return (struct tcp_seg *)(void *)0;

  else
  {
    memcpy((void *)(unsigned char *)cseg, (const void *)(const unsigned char *)seg, sizeof(struct tcp_seg) /*32ul*/ );
    pbuf_ref(cseg->p);
    return cseg;
  }
}

// tcp_seg_free
// file lwip/src/core/tcp.c line 1213
void tcp_seg_free(struct tcp_seg *seg)
{
  if(!(seg == ((struct tcp_seg *)NULL)))
  {
    if(!(seg->p == ((struct pbuf *)NULL)))
      pbuf_free(seg->p);

    mem_free((void *)seg);
  }

}

// tcp_segs_free
// file ./lwip/src/include/lwip/tcp_impl.h line 451
void tcp_segs_free(struct tcp_seg *seg)
{
  while(!(seg == ((struct tcp_seg *)NULL)))
  {
    struct tcp_seg *next = seg->next;
    tcp_seg_free(seg);
    seg = next;
  }
}

// tcp_send_empty_ack
// file ./lwip/src/include/lwip/tcp_impl.h line 70
signed char tcp_send_empty_ack(struct tcp_pcb *pcb)
{
  struct pbuf *p;
  unsigned char optlen = (unsigned char)0;
  struct tcp_hdr *tcp_send_empty_ack__1__tcphdr;
  unsigned int return_value_lwip_htonl_1;
  return_value_lwip_htonl_1=lwip_htonl(pcb->snd_nxt);
  p=tcp_output_alloc_header(pcb, (unsigned short int)optlen, (unsigned short int)0, return_value_lwip_htonl_1);
  if(p == ((struct pbuf *)NULL))
  {
    while((_Bool)0)
      ;
    return (signed char)-2;
  }

  else
  {
    tcp_send_empty_ack__1__tcphdr = (struct tcp_hdr *)p->payload;
    while((_Bool)0)
      ;
    pcb->flags = pcb->flags & (unsigned char)~((signed int)(unsigned char)0x0001U | (signed int)(unsigned char)0x0002U);
    tcp_send_empty_ack__1__tcphdr->chksum=inet_chksum_pseudo(p, (unsigned char)6, p->tot_len, &pcb->local_ip, &pcb->remote_ip);
    ip_output(p, &pcb->local_ip, &pcb->remote_ip, pcb->ttl, pcb->tos, (unsigned char)6);
    pbuf_free(p);
    return (signed char)0;
  }
}

// tcp_send_fin
// file ./lwip/src/include/lwip/tcp_impl.h line 471
signed char tcp_send_fin(struct tcp_pcb *pcb)
{
  if(!(pcb->unsent == ((struct tcp_seg *)NULL)))
  {
    struct tcp_seg *last_unsent = pcb->unsent;
    for( ; !(last_unsent->next == ((struct tcp_seg *)NULL)); last_unsent = last_unsent->next)
      ;
    unsigned short int return_value_lwip_ntohs_2;
    return_value_lwip_ntohs_2=lwip_ntohs(last_unsent->tcphdr->_hdrlen_rsvd_flags);
    if((7u & (unsigned int)return_value_lwip_ntohs_2) == 0u)
    {
      unsigned short int return_value_lwip_htons_1;
      return_value_lwip_htons_1=lwip_htons((unsigned short int)0x01U);
      last_unsent->tcphdr->_hdrlen_rsvd_flags = (unsigned short int)((signed int)last_unsent->tcphdr->_hdrlen_rsvd_flags | (signed int)return_value_lwip_htons_1);
      pcb->flags = pcb->flags | (unsigned char)0x0020U;
      return (signed char)0;
    }

  }

  signed char return_value_tcp_enqueue_flags_3;
  return_value_tcp_enqueue_flags_3=tcp_enqueue_flags(pcb, (unsigned char)0x01U);
  return return_value_tcp_enqueue_flags_3;
}

// tcp_sent
// file lwip/src/core/tcp.c line 1499
void tcp_sent(struct tcp_pcb *pcb, signed char (*sent)(void *, struct tcp_pcb *, unsigned short int))
{
  do
    if((signed int)pcb->state == LISTEN)
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"invalid socket state for sent callback", 1501, (const void *)"lwip/src/core/tcp.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);

  while((_Bool)0);
  pcb->sent = sent;
}

// tcp_setprio
// file lwip/src/core/tcp.c line 1233
void tcp_setprio(struct tcp_pcb *pcb, unsigned char prio)
{
  pcb->prio = prio;
}

// tcp_shutdown
// file lwip/src/core/tcp.c line 316
signed char tcp_shutdown(struct tcp_pcb *pcb, signed int shut_rx, signed int shut_tx)
{
  signed char return_value_tcp_close_shutdown_2;
  if((signed int)pcb->state == LISTEN)
    return (signed char)-13;

  else
  {
    if(!(shut_rx == 0))
    {
      pcb->flags = pcb->flags | (unsigned char)0x0010U;
      if(!(shut_tx == 0))
      {
        signed char return_value_tcp_close_shutdown_1;
        return_value_tcp_close_shutdown_1=tcp_close_shutdown(pcb, (unsigned char)1);
        return return_value_tcp_close_shutdown_1;
      }

      if(!(pcb->refused_data == ((struct pbuf *)NULL)))
      {
        pbuf_free(pcb->refused_data);
        pcb->refused_data = (struct pbuf *)(void *)0;
      }

    }

    if(!(shut_tx == 0))
    {
      if((signed int)pcb->state == SYN_RCVD || (signed int)pcb->state == ESTABLISHED || (signed int)pcb->state == CLOSE_WAIT)
      {
        return_value_tcp_close_shutdown_2=tcp_close_shutdown(pcb, (unsigned char)shut_rx);
        return return_value_tcp_close_shutdown_2;
      }

      return (signed char)-13;
    }

    return (signed char)0;
  }
}

// tcp_slowtmr
// file lwip/src/core/tcp.c line 835
void tcp_slowtmr(void)
{
  struct tcp_pcb *pcb;
  struct tcp_pcb *prev;
  unsigned short int eff_wnd;
  unsigned char pcb_remove;
  unsigned char pcb_reset;
  signed char err = (signed char)0;
  tcp_ticks = tcp_ticks + 1u;
  tcp_timer_ctr = tcp_timer_ctr + 1;
  _Bool tmp_if_expr_2;
  signed int tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  do
  {

  tcp_slowtmr_start:
    ;
    prev = (struct tcp_pcb *)(void *)0;
    pcb = tcp_active_pcbs;
    if(pcb == ((struct tcp_pcb *)NULL))
      while((_Bool)0)
        ;


  __CPROVER_DUMP_L6:
    ;
    if(pcb == ((struct tcp_pcb *)NULL))
      goto __CPROVER_DUMP_L105;

    while((_Bool)0)
      ;
    do
      if((signed int)pcb->state == CLOSED)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_slowtmr: active pcb->state != CLOSED\n", 857, (const void *)"lwip/src/core/tcp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    do
      if((signed int)pcb->state == LISTEN)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_slowtmr: active pcb->state != LISTEN\n", 858, (const void *)"lwip/src/core/tcp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    do
      if((signed int)pcb->state == TIME_WAIT)
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_slowtmr: active pcb->state != TIME-WAIT\n", 859, (const void *)"lwip/src/core/tcp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    if(pcb->last_timer == tcp_timer_ctr)
    {
      pcb = pcb->next;
      goto __CPROVER_DUMP_L104;
    }

    pcb->last_timer = tcp_timer_ctr;
    pcb_remove = (unsigned char)0;
    pcb_reset = (unsigned char)0;
    if((signed int)pcb->state == SYN_SENT)
      tmp_if_expr_2 = (signed int)pcb->nrtx == 4 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      pcb_remove = pcb_remove + 1;
      while((_Bool)0)
        ;
    }

    else
      if((signed int)pcb->nrtx == 12)
      {
        pcb_remove = pcb_remove + 1;
        while((_Bool)0)
          ;
      }

      else
        if((signed int)pcb->persist_backoff >= 1)
        {
          pcb->persist_cnt = pcb->persist_cnt + 1;
          if((signed int)pcb->persist_cnt >= (signed int)tcp_persist_backoff[(signed long int)((signed int)pcb->persist_backoff + -1)])
          {
            pcb->persist_cnt = (unsigned char)0;
            if(!((unsigned long int)pcb->persist_backoff >= sizeof(const unsigned char [7l]) /*7ul*/ ))
              pcb->persist_backoff = pcb->persist_backoff + 1;

            tcp_zero_window_probe(pcb);
          }

        }

        else
        {
          if((signed int)pcb->rtime >= 0)
            pcb->rtime = pcb->rtime + 1;

          if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
          {
            if((signed int)pcb->rtime >= (signed int)pcb->rto)
            {
              while((_Bool)0)
                ;
              if(!((signed int)pcb->state == SYN_SENT))
                pcb->rto = (signed short int)(((signed int)pcb->sa >> 3) + (signed int)pcb->sv << (signed int)tcp_backoff[(signed long int)pcb->nrtx]);

              pcb->rtime = (signed short int)0;
              if(!((signed int)pcb->cwnd >= (signed int)pcb->snd_wnd))
                tmp_if_expr_1 = (signed int)pcb->cwnd;

              else
                tmp_if_expr_1 = (signed int)pcb->snd_wnd;
              eff_wnd = (unsigned short int)tmp_if_expr_1;
              pcb->ssthresh = (unsigned short int)((signed int)eff_wnd >> 1);
              if(!((signed int)pcb->ssthresh >= (signed int)(unsigned short int)((signed int)pcb->mss << 1)))
                pcb->ssthresh = (unsigned short int)((signed int)pcb->mss << 1);

              pcb->cwnd = pcb->mss;
              while((_Bool)0)
                ;
              tcp_rexmit_rto(pcb);
            }

          }

        }
    if((signed int)pcb->state == FIN_WAIT_2)
    {
      if(!((16 & (signed int)pcb->flags) == 0))
      {
        if(tcp_ticks + -pcb->tmr >= 41u)
        {
          pcb_remove = pcb_remove + 1;
          while((_Bool)0)
            ;
        }

      }

    }

    if(!((0x08U & (unsigned int)pcb->so_options) == 0u))
    {
      if((signed int)pcb->state == ESTABLISHED)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (signed int)pcb->state == CLOSE_WAIT ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
      {
        if(!((pcb->keep_cnt * pcb->keep_intvl + pcb->keep_idle) / 500u >= tcp_ticks + -pcb->tmr))
        {
          while((_Bool)0)
            ;
          while((_Bool)0)
            ;
          while((_Bool)0)
            ;
          pcb_remove = pcb_remove + 1;
          pcb_reset = pcb_reset + 1;
        }

        else
          if(!((pcb->keep_intvl * (unsigned int)pcb->keep_cnt_sent + pcb->keep_idle) / 500u >= tcp_ticks + -pcb->tmr))
          {
            tcp_keepalive(pcb);
            pcb->keep_cnt_sent = pcb->keep_cnt_sent + 1;
          }

      }

    }

    if(!(pcb->ooseq == ((struct tcp_seg *)NULL)))
    {
      if(tcp_ticks + -pcb->tmr >= 6U * (unsigned int)pcb->rto)
      {
        tcp_segs_free(pcb->ooseq);
        pcb->ooseq = (struct tcp_seg *)(void *)0;
        while((_Bool)0)
          ;
      }

    }

    if((signed int)pcb->state == SYN_RCVD)
    {
      if(tcp_ticks + -pcb->tmr >= 41u)
      {
        pcb_remove = pcb_remove + 1;
        while((_Bool)0)
          ;
      }

    }

    if((signed int)pcb->state == LAST_ACK)
    {
      if((unsigned long int)(tcp_ticks + -pcb->tmr) >= 241ul)
      {
        pcb_remove = pcb_remove + 1;
        while((_Bool)0)
          ;
      }

    }

    if(!(pcb_remove == 0))
    {
      struct tcp_pcb *pcb2;
      void (*err_fn)(void *, signed char);
      void *err_arg;
      tcp_pcb_purge(pcb);
      if(!(prev == ((struct tcp_pcb *)NULL)))
      {
        do
          if(pcb == tcp_active_pcbs)
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_slowtmr: middle tcp != tcp_active_pcbs", 1001, (const void *)"lwip/src/core/tcp.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        prev->next = pcb->next;
      }

      else
      {
        do
          if(!(tcp_active_pcbs == pcb))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_slowtmr: first pcb == tcp_active_pcbs", 1005, (const void *)"lwip/src/core/tcp.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        tcp_active_pcbs = pcb->next;
      }
      if(!(pcb_reset == 0))
        tcp_rst_impl(pcb->snd_nxt, pcb->rcv_nxt, &pcb->local_ip, &pcb->remote_ip, pcb->local_port, pcb->remote_port);

      err_fn = pcb->errf;
      err_arg = pcb->callback_arg;
      pcb2 = pcb;
      pcb = pcb->next;
      mem_free((void *)pcb2);
      tcp_active_pcbs_changed = (unsigned char)0;
      do
        if(!(err_fn == ((void (*)(void *, signed char))NULL)))
          err_fn(err_arg, (signed char)-10);

      while((_Bool)0);
      if(!(tcp_active_pcbs_changed == 0))
        goto tcp_slowtmr_start;

      goto __CPROVER_DUMP_L104;
    }

    prev = pcb;
    pcb = pcb->next;
    prev->polltmr = prev->polltmr + 1;
    if(!((signed int)prev->polltmr >= (signed int)prev->pollinterval))
      goto __CPROVER_DUMP_L104;

    prev->polltmr = (unsigned char)0;
    while((_Bool)0)
      ;
    tcp_active_pcbs_changed = (unsigned char)0;
    do
      if(!(prev->poll == ((signed char (*)(void *, struct tcp_pcb *))NULL)))
        err=prev->poll(prev->callback_arg, prev);

      else
        err = (signed char)0;
    while((_Bool)0);
  }
  while(!(tcp_active_pcbs_changed == 0));
  if((signed int)err == 0)
    tcp_output(prev);


__CPROVER_DUMP_L104:
  ;
  goto __CPROVER_DUMP_L6;

__CPROVER_DUMP_L105:
  ;
  prev = (struct tcp_pcb *)(void *)0;
  pcb = tcp_tw_pcbs;
  while(!(pcb == ((struct tcp_pcb *)NULL)))
  {
    do
      if(!((signed int)pcb->state == TIME_WAIT))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_slowtmr: TIME-WAIT pcb->state == TIME-WAIT", 1053, (const void *)"lwip/src/core/tcp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    pcb_remove = (unsigned char)0;
    if((unsigned long int)(tcp_ticks + -pcb->tmr) >= 241ul)
      pcb_remove = pcb_remove + 1;

    if(!(pcb_remove == 0))
    {
      struct tcp_pcb *tcp_slowtmr__1__3__3__pcb2;
      tcp_pcb_purge(pcb);
      if(!(prev == ((struct tcp_pcb *)NULL)))
      {
        do
          if(pcb == tcp_tw_pcbs)
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_slowtmr: middle tcp != tcp_tw_pcbs", 1069, (const void *)"lwip/src/core/tcp.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        prev->next = pcb->next;
      }

      else
      {
        do
          if(!(tcp_tw_pcbs == pcb))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_slowtmr: first pcb == tcp_tw_pcbs", 1073, (const void *)"lwip/src/core/tcp.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        tcp_tw_pcbs = pcb->next;
      }
      tcp_slowtmr__1__3__3__pcb2 = pcb;
      pcb = pcb->next;
      mem_free((void *)tcp_slowtmr__1__3__3__pcb2);
    }

    else
    {
      prev = pcb;
      pcb = pcb->next;
    }
  }
}

// tcp_timer_needed
// file ./lwip/src/include/lwip/tcp_impl.h line 529
void tcp_timer_needed(void)
{
  if(tcpip_tcp_timer_active == 0 && (!(tcp_active_pcbs == ((struct tcp_pcb *)NULL)) || !(tcp_tw_pcbs == ((struct tcp_pcb *)NULL))))
  {
    tcpip_tcp_timer_active = 1;
    sys_timeout((unsigned int)250, tcpip_tcp_timer, (void *)0);
  }

}

// tcp_timewait_input
// file lwip/src/core/tcp_in.c line 620
static signed char tcp_timewait_input(struct tcp_pcb *pcb)
{
  if(!((0x04U & (unsigned int)flags) == 0u))
    return (signed char)0;

  else
  {
    if(!((0x02U & (unsigned int)flags) == 0u))
    {
      if((signed int)seqno + -((signed int)pcb->rcv_nxt) >= 0)
      {
        if(!((signed int)seqno + -((signed int)pcb->rcv_nxt + (signed int)(unsigned int)pcb->rcv_wnd) >= 1))
        {
          tcp_rst_impl(ackno, seqno + (unsigned int)tcplen, &ip_data.current_iphdr_dest, &ip_data.current_iphdr_src, tcphdr->dest, tcphdr->src);
          return (signed char)0;
        }

      }

    }

    else
      if(!((0x01U & (unsigned int)flags) == 0u))
        pcb->tmr = tcp_ticks;

    if((signed int)tcplen >= 1)
    {
      pcb->flags = pcb->flags | (unsigned char)0x0002U;
      signed char return_value_tcp_output_1;
      return_value_tcp_output_1=tcp_output(pcb);
      return return_value_tcp_output_1;
    }

    return (signed char)0;
  }
}

// tcp_tmr
// file lwip/src/core/tcp.c line 144
void tcp_tmr(void)
{
  tcp_fasttmr();
  tcp_timer = tcp_timer + 1;
  if(!((1 & (signed int)tcp_timer) == 0))
    tcp_slowtmr();

}

// tcp_update_rcv_ann_wnd
// file lwip/src/core/tcp.c line 612
unsigned int tcp_update_rcv_ann_wnd(struct tcp_pcb *pcb)
{
  unsigned int new_right_edge = pcb->rcv_nxt + (unsigned int)pcb->rcv_wnd;
  signed int tmp_if_expr_1;
  if((signed int)pcb->mss >= 32768)
    tmp_if_expr_1 = 65534 / 2;

  else
    tmp_if_expr_1 = (signed int)pcb->mss;
  if((signed int)new_right_edge + -((signed int)pcb->rcv_ann_right_edge + (signed int)(unsigned int)tmp_if_expr_1) >= 0)
  {
    pcb->rcv_ann_wnd = pcb->rcv_wnd;
    return new_right_edge - pcb->rcv_ann_right_edge;
  }

  else
  {
    if((signed int)pcb->rcv_nxt + -((signed int)pcb->rcv_ann_right_edge) >= 1)
      pcb->rcv_ann_wnd = (unsigned short int)0;

    else
    {
      unsigned int new_rcv_ann_wnd = pcb->rcv_ann_right_edge - pcb->rcv_nxt;
      do
        if(new_rcv_ann_wnd >= 65536u)
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"new_rcv_ann_wnd <= 0xffff", 629, (const void *)"lwip/src/core/tcp.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      pcb->rcv_ann_wnd = (unsigned short int)new_rcv_ann_wnd;
    }
    return (unsigned int)0;
  }
}

// tcp_write
// file lwip/src/core/tcp_out.c line 358
signed char tcp_write(struct tcp_pcb *pcb, const void *arg, unsigned short int len, unsigned char apiflags)
{
  struct pbuf *concat_p = (struct pbuf *)(void *)0;
  struct tcp_seg *last_unsent = (struct tcp_seg *)(void *)0;
  struct tcp_seg *seg = (struct tcp_seg *)(void *)0;
  struct tcp_seg *prev_seg = (struct tcp_seg *)(void *)0;
  struct tcp_seg *queue = (struct tcp_seg *)(void *)0;
  unsigned short int pos = (unsigned short int)0;
  unsigned short int queuelen;
  unsigned char optlen = (unsigned char)0;
  unsigned char optflags = (unsigned char)0;
  unsigned short int oversize = (unsigned short int)0;
  unsigned short int oversize_used = (unsigned short int)0;
  signed char err;
  unsigned short int mss_local;
  signed int tmp_if_expr_1;
  if(!((signed int)pcb->mss >= (signed int)pcb->snd_wnd_max / 2))
    tmp_if_expr_1 = (signed int)pcb->mss;

  else
    tmp_if_expr_1 = (signed int)pcb->snd_wnd_max / 2;
  mss_local = (unsigned short int)tmp_if_expr_1;
  signed int tmp_if_expr_2;
  if(!(mss_local == 0))
    tmp_if_expr_2 = (signed int)mss_local;

  else
    tmp_if_expr_2 = (signed int)pcb->mss;
  mss_local = (unsigned short int)tmp_if_expr_2;
  while((_Bool)0)
    ;
  do
    if(arg == NULL)
    {
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_write: arg == NULL (programmer violates API)", 388, (const void *)"lwip/src/core/tcp_out.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
      return (signed char)-14;
    }

  while((_Bool)0);
  err=tcp_write_checks(pcb, len);
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_10;
  if(!((signed int)err == 0))
    return err;

  else
  {
    queuelen = pcb->snd_queuelen;
    if(!(pcb->unsent == ((struct tcp_seg *)NULL)))
    {
      unsigned short int space;
      unsigned short int unsent_optlen;
      last_unsent = pcb->unsent;
      for( ; !(last_unsent->next == ((struct tcp_seg *)NULL)); last_unsent = last_unsent->next)
        ;
      unsent_optlen = (unsigned short int)((((signed int)last_unsent->flags & (signed int)(unsigned char)0x01U) != 0 ? 4 : 0) + (((signed int)last_unsent->flags & (signed int)(unsigned char)0x02U) != 0 ? 0 : 0) + (((signed int)last_unsent->flags & (signed int)(unsigned char)0x08U) != 0 ? 0 : 0));
      do
        if(!((signed int)mss_local >= (signed int)last_unsent->len + (signed int)unsent_optlen))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"mss_local is too small", 441, (const void *)"lwip/src/core/tcp_out.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      space = (unsigned short int)((signed int)mss_local - ((signed int)last_unsent->len + (signed int)unsent_optlen));
      do
        if(!(pcb->unsent_oversize == last_unsent->oversize_left))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"unsent_oversize mismatch (pcb vs. last_unsent)", 455, (const void *)"lwip/src/core/tcp_out.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      oversize = pcb->unsent_oversize;
      if((signed int)oversize >= 1)
      {
        do
          if(!((signed int)space >= (signed int)oversize_used))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"inconsistent oversize vs. space", 459, (const void *)"lwip/src/core/tcp_out.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        seg = last_unsent;
        oversize_used = (unsigned short int)((signed int)oversize < (signed int)len ? (signed int)oversize : (signed int)len);
        pos = pos + oversize_used;
        oversize = oversize - oversize_used;
        space = space - oversize_used;
      }

      do
        if(!(pos == len) && !((signed int)oversize == 0))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"inconsistend oversize vs. len", 467, (const void *)"lwip/src/core/tcp_out.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      if((signed int)space >= 1 && !((signed int)pos >= (signed int)len))
      {
        if((signed int)last_unsent->len >= 1)
        {
          unsigned short int seglen = (unsigned short int)((signed int)space < (signed int)len - (signed int)pos ? (signed int)space : (signed int)len - (signed int)pos);
          seg = last_unsent;
          if(!((0x01 & (signed int)apiflags) == 0))
          {
            concat_p=tcp_pbuf_prealloc((enum anonymous)PBUF_RAW, seglen, space, &oversize, pcb, apiflags, (unsigned char)1);
            if(concat_p == ((struct pbuf *)NULL))
            {
              while((_Bool)0)
                ;
              goto memerr;
            }

            last_unsent->oversize_left = last_unsent->oversize_left + oversize;
            memcpy(concat_p->payload, (const void *)((unsigned char *)arg + (signed long int)pos), (unsigned long int)seglen);
          }

          else
          {
            concat_p=pbuf_alloc((enum anonymous)PBUF_RAW, seglen, (enum anonymous_0)PBUF_ROM);
            if(concat_p == ((struct pbuf *)NULL))
            {
              while((_Bool)0)
                ;
              goto memerr;
            }

            concat_p->payload = (void *)((unsigned char *)arg + (signed long int)pos);
          }
          pos = pos + seglen;
          unsigned char return_value_pbuf_clen_3;
          return_value_pbuf_clen_3=pbuf_clen(concat_p);
          queuelen = queuelen + (unsigned short int)return_value_pbuf_clen_3;
        }

      }

    }

    else
      do
        if(!((signed int)pcb->unsent_oversize == 0))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"unsent_oversize mismatch (pcb->unsent is NULL)", 522, (const void *)"lwip/src/core/tcp_out.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
    while(!((signed int)pos >= (signed int)len))
    {
      struct pbuf *tcp_write__1__6__p;
      unsigned short int left = (unsigned short int)((signed int)len - (signed int)pos);
      unsigned short int max_len = (unsigned short int)((signed int)mss_local - (signed int)optlen);
      unsigned short int tcp_write__1__6__seglen = (unsigned short int)((signed int)left > (signed int)max_len ? (signed int)max_len : (signed int)left);
      if(!((0x01 & (signed int)apiflags) == 0))
      {
        tcp_write__1__6__p=tcp_pbuf_prealloc((enum anonymous)PBUF_TRANSPORT, (unsigned short int)((signed int)tcp_write__1__6__seglen + (signed int)optlen), mss_local, &oversize, pcb, apiflags, (unsigned char)(queue == (struct tcp_seg *)(void *)0));
        if(tcp_write__1__6__p == ((struct pbuf *)NULL))
        {
          while((_Bool)0)
            ;
          goto memerr;
        }

        do
          if(!((signed int)tcp_write__1__6__p->len >= (signed int)tcp_write__1__6__seglen))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_write: check that first pbuf can hold the complete seglen", 550, (const void *)"lwip/src/core/tcp_out.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        memcpy((void *)((char *)tcp_write__1__6__p->payload + (signed long int)optlen), (const void *)((unsigned char *)arg + (signed long int)pos), (unsigned long int)tcp_write__1__6__seglen);
      }

      else
      {
        struct pbuf *p2;
        do
          if(!((signed int)oversize == 0))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"oversize == 0", 560, (const void *)"lwip/src/core/tcp_out.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        p2=pbuf_alloc((enum anonymous)PBUF_TRANSPORT, tcp_write__1__6__seglen, (enum anonymous_0)PBUF_ROM);
        if(p2 == ((struct pbuf *)NULL))
        {
          while((_Bool)0)
            ;
          goto memerr;
        }

        p2->payload = (void *)((unsigned char *)arg + (signed long int)pos);
        tcp_write__1__6__p=pbuf_alloc((enum anonymous)PBUF_TRANSPORT, (unsigned short int)optlen, (enum anonymous_0)PBUF_RAM);
        if(tcp_write__1__6__p == ((struct pbuf *)NULL))
        {
          pbuf_free(p2);
          while((_Bool)0)
            ;
          goto memerr;
        }

        pbuf_cat(tcp_write__1__6__p, p2);
      }
      unsigned char return_value_pbuf_clen_4;
      return_value_pbuf_clen_4=pbuf_clen(tcp_write__1__6__p);
      queuelen = queuelen + (unsigned short int)return_value_pbuf_clen_4;
      if((signed int)queuelen >= 256 || (unsigned int)queuelen >= 65533u)
      {
        while((_Bool)0)
          ;
        pbuf_free(tcp_write__1__6__p);
        goto memerr;
      }

      seg=tcp_create_segment(pcb, tcp_write__1__6__p, (unsigned char)0, pcb->snd_lbb + (unsigned int)pos, optflags);
      if(seg == ((struct tcp_seg *)NULL))
        goto memerr;

      seg->oversize_left = oversize;
      if(queue == ((struct tcp_seg *)NULL))
        queue = seg;

      else
      {
        do
          if(prev_seg == ((struct tcp_seg *)NULL))
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"prev_seg != NULL", 613, (const void *)"lwip/src/core/tcp_out.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        while((_Bool)0);
        prev_seg->next = seg;
      }
      prev_seg = seg;
      while((_Bool)0)
        ;
      pos = pos + tcp_write__1__6__seglen;
    }
    if((signed int)oversize_used >= 1)
    {
      struct pbuf *p = last_unsent->p;
      for( ; !(p == ((struct pbuf *)NULL)); p = p->next)
      {
        p->tot_len = p->tot_len + oversize_used;
        if(p->next == ((struct pbuf *)NULL))
        {
          memcpy((void *)((char *)p->payload + (signed long int)p->len), arg, (unsigned long int)oversize_used);
          p->len = p->len + oversize_used;
        }

      }
      last_unsent->len = last_unsent->len + oversize_used;
      do
        if(!((signed int)last_unsent->oversize_left >= (signed int)oversize_used))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"last_unsent->oversize_left >= oversize_used", 649, (const void *)"lwip/src/core/tcp_out.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      last_unsent->oversize_left = last_unsent->oversize_left - oversize_used;
    }

    pcb->unsent_oversize = oversize;
    if(!(concat_p == ((struct pbuf *)NULL)))
    {
      do
        if(last_unsent == ((struct tcp_seg *)NULL))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_write: cannot concatenate when pcb->unsent is empty", 661, (const void *)"lwip/src/core/tcp_out.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      pbuf_cat(last_unsent->p, concat_p);
      last_unsent->len = last_unsent->len + concat_p->tot_len;
    }

    if(last_unsent == ((struct tcp_seg *)NULL))
      pcb->unsent = queue;

    else
      last_unsent->next = queue;
    pcb->snd_lbb = pcb->snd_lbb + (unsigned int)len;
    pcb->snd_buf = pcb->snd_buf - len;
    pcb->snd_queuelen = queuelen;
    while((_Bool)0)
      ;
    if(!((signed int)pcb->snd_queuelen == 0))
      do
      {
        if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
          tmp_if_expr_8 = (_Bool)1;

        else
          tmp_if_expr_8 = pcb->unsent != (struct tcp_seg *)(void *)0 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_8)
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_write: valid queue length", 698, (const void *)"lwip/src/core/tcp_out.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      }
      while((_Bool)0);

    if(!(seg == ((struct tcp_seg *)NULL)))
    {
      if(!(seg->tcphdr == ((struct tcp_hdr *)NULL)))
      {
        if((0x02 & (signed int)apiflags) == 0)
        {
          unsigned short int return_value_lwip_htons_9;
          return_value_lwip_htons_9=lwip_htons((unsigned short int)0x08U);
          seg->tcphdr->_hdrlen_rsvd_flags = (unsigned short int)((signed int)seg->tcphdr->_hdrlen_rsvd_flags | (signed int)return_value_lwip_htons_9);
        }

      }

    }

    return (signed char)0;

  memerr:
    ;
    pcb->flags = pcb->flags | (unsigned char)0x0080U;
    lwip_stats.tcp.memerr = lwip_stats.tcp.memerr + 1;
    if(!(concat_p == ((struct pbuf *)NULL)))
      pbuf_free(concat_p);

    if(!(queue == ((struct tcp_seg *)NULL)))
      tcp_segs_free(queue);

    if(!((signed int)pcb->snd_queuelen == 0))
      do
      {
        if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
          tmp_if_expr_10 = (_Bool)1;

        else
          tmp_if_expr_10 = pcb->unsent != (struct tcp_seg *)(void *)0 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_10)
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_write: valid queue length", 719, (const void *)"lwip/src/core/tcp_out.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      }
      while((_Bool)0);

    while((_Bool)0)
      ;
    return (signed char)-1;
  }
}

// tcp_write_checks
// file lwip/src/core/tcp_out.c line 298
static signed char tcp_write_checks(struct tcp_pcb *pcb, unsigned short int len)
{
  _Bool tmp_if_expr_1;
  if(!((signed int)pcb->state == ESTABLISHED))
    tmp_if_expr_1 = (signed int)pcb->state != CLOSE_WAIT ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (signed int)pcb->state != SYN_SENT ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (signed int)pcb->state != SYN_RCVD ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  if(tmp_if_expr_3)
  {
    while((_Bool)0)
      ;
    return (signed char)-13;
  }

  else
    if((signed int)len == 0)
      return (signed char)0;

  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  if(!((signed int)pcb->snd_buf >= (signed int)len))
  {
    while((_Bool)0)
      ;
    pcb->flags = pcb->flags | (unsigned char)0x0080U;
    return (signed char)-1;
  }

  else
  {
    while((_Bool)0)
      ;
    if((signed int)pcb->snd_queuelen >= 255)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (unsigned int)pcb->snd_queuelen > 0xffffU - (unsigned int)3 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
    {
      while((_Bool)0)
        ;
      lwip_stats.tcp.memerr = lwip_stats.tcp.memerr + 1;
      pcb->flags = pcb->flags | (unsigned char)0x0080U;
      return (signed char)-1;
    }

    else
    {
      if(!((signed int)pcb->snd_queuelen == 0))
        do
        {
          if(!(pcb->unacked == ((struct tcp_seg *)NULL)))
            tmp_if_expr_5 = (_Bool)1;

          else
            tmp_if_expr_5 = pcb->unsent != (struct tcp_seg *)(void *)0 ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_5)
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_write: pbufs on queue => at least one queue non-empty", 333, (const void *)"lwip/src/core/tcp_out.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        }
        while((_Bool)0);

      else
        do
        {
          if(pcb->unacked == ((struct tcp_seg *)NULL))
            tmp_if_expr_6 = pcb->unsent == (struct tcp_seg *)(void *)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_6 = (_Bool)0;
          if(!tmp_if_expr_6)
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcp_write: no pbufs on queue => both queues empty", 336, (const void *)"lwip/src/core/tcp_out.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);

        }
        while((_Bool)0);
      return (signed char)0;
    }
  }
}

// tcp_zero_window_probe
// file ./lwip/src/include/lwip/tcp_impl.h line 494
void tcp_zero_window_probe(struct tcp_pcb *pcb)
{
  struct pbuf *p;
  struct tcp_hdr *tcp_zero_window_probe__1__tcphdr;
  struct tcp_seg *seg;
  unsigned short int len;
  unsigned char is_fin;
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  seg = pcb->unacked;
  if(seg == ((struct tcp_seg *)NULL))
    seg = pcb->unsent;

  _Bool tmp_if_expr_2;
  if(!(seg == ((struct tcp_seg *)NULL)))
  {
    unsigned short int return_value_lwip_ntohs_1;
    return_value_lwip_ntohs_1=lwip_ntohs(seg->tcphdr->_hdrlen_rsvd_flags);
    if(!((1u & (unsigned int)return_value_lwip_ntohs_1) == 0u))
      tmp_if_expr_2 = (signed int)seg->len == 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    is_fin = (unsigned char)tmp_if_expr_2;
    len = (unsigned short int)(is_fin != 0 ? 0 : 1);
    p=tcp_output_alloc_header(pcb, (unsigned short int)0, len, seg->tcphdr->seqno);
    if(p == ((struct pbuf *)NULL))
      while((_Bool)0)
        ;

    else
    {
      tcp_zero_window_probe__1__tcphdr = (struct tcp_hdr *)p->payload;
      if(!(is_fin == 0))
      {
        unsigned short int return_value_lwip_htons_3;
        return_value_lwip_htons_3=lwip_htons((unsigned short int)(0x10U | 0x01U));
        tcp_zero_window_probe__1__tcphdr->_hdrlen_rsvd_flags = (unsigned short int)((signed int)tcp_zero_window_probe__1__tcphdr->_hdrlen_rsvd_flags & (((signed int)(unsigned short int)~((signed int)(unsigned short int)0x3fU) & 0xff) << 8 | ((signed int)(unsigned short int)~((signed int)(unsigned short int)0x3fU) & 0xff00) >> 8) | (signed int)return_value_lwip_htons_3);
      }

      else
      {
        char *d = (char *)p->payload + (signed long int)20;
        pbuf_copy_partial(seg->p, (void *)d, (unsigned short int)1, (unsigned short int)((signed int)seg->p->tot_len - (signed int)seg->len));
      }
      tcp_zero_window_probe__1__tcphdr->chksum=inet_chksum_pseudo(p, (unsigned char)6, p->tot_len, &pcb->local_ip, &pcb->remote_ip);
      lwip_stats.tcp.xmit = lwip_stats.tcp.xmit + 1;
      ip_output(p, &pcb->local_ip, &pcb->remote_ip, pcb->ttl, (unsigned char)0, (unsigned char)6);
      pbuf_free(p);
      while((_Bool)0)
        ;
    }
  }

}

// tcpdump
// file contrib/ports/unix/netif/tcpdump.c line 61
void tcpdump(struct pbuf *p)
{
  struct ip_hdr *iphdr;
  struct tcp_hdr *tcpdump__1__tcphdr;
  struct udp_hdr *udphdr;
  char tcpdump__1__flags[5l];
  signed int i;
  signed int len;
  signed int offset;
  unsigned short int return_value_inet_chksum_pseudo_1;
  unsigned short int return_value_lwip_ntohs_3;
  signed int tmp_post_2;
  unsigned short int return_value_lwip_ntohs_5;
  signed int tmp_post_4;
  unsigned short int return_value_lwip_ntohs_7;
  signed int tmp_post_6;
  unsigned short int return_value_lwip_ntohs_9;
  signed int tmp_post_8;
  signed int tmp_post_10;
  signed int tmp_post_11;
  unsigned int return_value_lwip_ntohl_12;
  unsigned int return_value_lwip_ntohl_13;
  unsigned int return_value_lwip_ntohl_14;
  unsigned int return_value_lwip_ntohl_15;
  unsigned short int return_value_lwip_ntohs_16;
  unsigned int return_value_lwip_ntohl_17;
  unsigned int return_value_lwip_ntohl_18;
  unsigned int return_value_lwip_ntohl_19;
  unsigned int return_value_lwip_ntohl_20;
  unsigned short int return_value_lwip_ntohs_21;
  unsigned short int return_value_lwip_ntohs_22;
  unsigned short int return_value_lwip_ntohs_23;
  _Bool tmp_if_expr_26;
  unsigned short int return_value_lwip_ntohs_28;
  unsigned short int return_value_lwip_ntohs_29;
  unsigned short int return_value_inet_chksum_pseudo_30;
  unsigned int return_value_lwip_ntohl_31;
  unsigned int return_value_lwip_ntohl_32;
  unsigned int return_value_lwip_ntohl_33;
  unsigned int return_value_lwip_ntohl_34;
  unsigned short int return_value_lwip_ntohs_35;
  unsigned int return_value_lwip_ntohl_36;
  unsigned int return_value_lwip_ntohl_37;
  unsigned int return_value_lwip_ntohl_38;
  unsigned int return_value_lwip_ntohl_39;
  unsigned short int return_value_lwip_ntohs_40;
  unsigned short int return_value_lwip_ntohs_41;
  if(!(file == ((struct _IO_FILE *)NULL)))
  {
    iphdr = (struct ip_hdr *)p->payload;
    switch((signed int)iphdr->_proto)
    {
      case 6:
      {
        tcpdump__1__tcphdr = (struct tcp_hdr *)((char *)iphdr + (signed long int)20);
        pbuf_header(p, (signed short int)-20);
        return_value_inet_chksum_pseudo_1=inet_chksum_pseudo(p, (unsigned char)6, p->tot_len, (struct ip_addr *)&iphdr->src, (struct ip_addr *)&iphdr->dest);
        if(!((signed int)return_value_inet_chksum_pseudo_1 == 0))
        {
          while((_Bool)0)
            ;
          fprintf(file, "!chksum ");
        }

        i = 0;
        return_value_lwip_ntohs_3=lwip_ntohs(tcpdump__1__tcphdr->_hdrlen_rsvd_flags);
        if(!((2u & (unsigned int)return_value_lwip_ntohs_3) == 0u))
        {
          tmp_post_2 = i;
          i = i + 1;
          tcpdump__1__flags[(signed long int)tmp_post_2] = (char)83;
        }

        return_value_lwip_ntohs_5=lwip_ntohs(tcpdump__1__tcphdr->_hdrlen_rsvd_flags);
        if(!((8u & (unsigned int)return_value_lwip_ntohs_5) == 0u))
        {
          tmp_post_4 = i;
          i = i + 1;
          tcpdump__1__flags[(signed long int)tmp_post_4] = (char)80;
        }

        return_value_lwip_ntohs_7=lwip_ntohs(tcpdump__1__tcphdr->_hdrlen_rsvd_flags);
        if(!((1u & (unsigned int)return_value_lwip_ntohs_7) == 0u))
        {
          tmp_post_6 = i;
          i = i + 1;
          tcpdump__1__flags[(signed long int)tmp_post_6] = (char)70;
        }

        return_value_lwip_ntohs_9=lwip_ntohs(tcpdump__1__tcphdr->_hdrlen_rsvd_flags);
        if(!((4u & (unsigned int)return_value_lwip_ntohs_9) == 0u))
        {
          tmp_post_8 = i;
          i = i + 1;
          tcpdump__1__flags[(signed long int)tmp_post_8] = (char)82;
        }

        if(i == 0)
        {
          tmp_post_10 = i;
          i = i + 1;
          tcpdump__1__flags[(signed long int)tmp_post_10] = (char)46;
        }

        tmp_post_11 = i;
        i = i + 1;
        tcpdump__1__flags[(signed long int)tmp_post_11] = (char)0;
        return_value_lwip_ntohl_12=lwip_ntohl(iphdr->src.addr);
        return_value_lwip_ntohl_13=lwip_ntohl(iphdr->src.addr);
        return_value_lwip_ntohl_14=lwip_ntohl(iphdr->src.addr);
        return_value_lwip_ntohl_15=lwip_ntohl(iphdr->src.addr);
        return_value_lwip_ntohs_16=lwip_ntohs(tcpdump__1__tcphdr->src);
        return_value_lwip_ntohl_17=lwip_ntohl(iphdr->dest.addr);
        return_value_lwip_ntohl_18=lwip_ntohl(iphdr->dest.addr);
        return_value_lwip_ntohl_19=lwip_ntohl(iphdr->dest.addr);
        return_value_lwip_ntohl_20=lwip_ntohl(iphdr->dest.addr);
        return_value_lwip_ntohs_21=lwip_ntohs(tcpdump__1__tcphdr->dest);
        fprintf(file, "%d.%d.%d.%d.%u > %d.%d.%d.%d.%u: ", (signed int)(return_value_lwip_ntohl_12 >> 24) & 0xff, (signed int)(return_value_lwip_ntohl_13 >> 16) & 0xff, (signed int)(return_value_lwip_ntohl_14 >> 8) & 0xff, (signed int)(return_value_lwip_ntohl_15 >> 0) & 0xff, return_value_lwip_ntohs_16, (signed int)(return_value_lwip_ntohl_17 >> 24) & 0xff, (signed int)(return_value_lwip_ntohl_18 >> 16) & 0xff, (signed int)(return_value_lwip_ntohl_19 >> 8) & 0xff, (signed int)(return_value_lwip_ntohl_20 >> 0) & 0xff, return_value_lwip_ntohs_21);
        return_value_lwip_ntohs_22=lwip_ntohs(tcpdump__1__tcphdr->_hdrlen_rsvd_flags);
        offset = (signed int)return_value_lwip_ntohs_22 >> 12;
        return_value_lwip_ntohs_23=lwip_ntohs(iphdr->_len);
        len = ((signed int)return_value_lwip_ntohs_23 - offset * 4) - 20;
        if(!(len == 0))
          tmp_if_expr_26 = (_Bool)1;

        else
          tmp_if_expr_26 = (signed int)tcpdump__1__flags[(signed long int)0] != 46 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_26)
        {
          unsigned int return_value_lwip_ntohl_24;
          return_value_lwip_ntohl_24=lwip_ntohl(tcpdump__1__tcphdr->seqno);
          unsigned int return_value_lwip_ntohl_25;
          return_value_lwip_ntohl_25=lwip_ntohl(tcpdump__1__tcphdr->seqno);
          fprintf(file, "%s %u:%u(%u) ", (const void *)tcpdump__1__flags, return_value_lwip_ntohl_24, return_value_lwip_ntohl_25 + (unsigned int)len, len);
        }

        return_value_lwip_ntohs_28=lwip_ntohs(tcpdump__1__tcphdr->_hdrlen_rsvd_flags);
        if(!((16u & (unsigned int)return_value_lwip_ntohs_28) == 0u))
        {
          unsigned int return_value_lwip_ntohl_27;
          return_value_lwip_ntohl_27=lwip_ntohl(tcpdump__1__tcphdr->ackno);
          fprintf(file, "ack %u ", return_value_lwip_ntohl_27);
        }

        return_value_lwip_ntohs_29=lwip_ntohs(tcpdump__1__tcphdr->wnd);
        fprintf(file, "wnd %u\n", return_value_lwip_ntohs_29);
        fflush(file);
        pbuf_header(p, (signed short int)20);
        break;
      }
      case 17:
      {
        udphdr = (struct udp_hdr *)((char *)iphdr + (signed long int)20);
        pbuf_header(p, (signed short int)-20);
        return_value_inet_chksum_pseudo_30=inet_chksum_pseudo(p, (unsigned char)17, p->tot_len, (struct ip_addr *)&iphdr->src, (struct ip_addr *)&iphdr->dest);
        if(!((signed int)return_value_inet_chksum_pseudo_30 == 0))
        {
          while((_Bool)0)
            ;
          fprintf(file, "!chksum ");
        }

        return_value_lwip_ntohl_31=lwip_ntohl(iphdr->src.addr);
        return_value_lwip_ntohl_32=lwip_ntohl(iphdr->src.addr);
        return_value_lwip_ntohl_33=lwip_ntohl(iphdr->src.addr);
        return_value_lwip_ntohl_34=lwip_ntohl(iphdr->src.addr);
        return_value_lwip_ntohs_35=lwip_ntohs(udphdr->src);
        return_value_lwip_ntohl_36=lwip_ntohl(iphdr->dest.addr);
        return_value_lwip_ntohl_37=lwip_ntohl(iphdr->dest.addr);
        return_value_lwip_ntohl_38=lwip_ntohl(iphdr->dest.addr);
        return_value_lwip_ntohl_39=lwip_ntohl(iphdr->dest.addr);
        return_value_lwip_ntohs_40=lwip_ntohs(udphdr->dest);
        fprintf(file, "%d.%d.%d.%d.%u > %d.%d.%d.%d.%u: ", (signed int)(return_value_lwip_ntohl_31 >> 24) & 0xff, (signed int)(return_value_lwip_ntohl_32 >> 16) & 0xff, (signed int)(return_value_lwip_ntohl_33 >> 8) & 0xff, (signed int)(return_value_lwip_ntohl_34 >> 0) & 0xff, return_value_lwip_ntohs_35, (signed int)(return_value_lwip_ntohl_36 >> 24) & 0xff, (signed int)(return_value_lwip_ntohl_37 >> 16) & 0xff, (signed int)(return_value_lwip_ntohl_38 >> 8) & 0xff, (signed int)(return_value_lwip_ntohl_39 >> 0) & 0xff, return_value_lwip_ntohs_40);
        fprintf(file, "U ");
        return_value_lwip_ntohs_41=lwip_ntohs(iphdr->_len);
        len = (signed int)(((unsigned long int)return_value_lwip_ntohs_41 - sizeof(struct udp_hdr) /*8ul*/ ) - (unsigned long int)20);
        fprintf(file, " %d\n", len);
        fflush(file);
        pbuf_header(p, (signed short int)20);
        break;
      }
      default:
        while((_Bool)0)
          ;
    }
  }

}

// tcpdump_init
// file contrib/ports/unix/netif/tcpdump.c line 50
void tcpdump_init(void)
{
  file=fopen("/tmp/tcpdump", "w");
  if(file == ((struct _IO_FILE *)NULL))
    perror("tcpdump_init: cannot open \"/tmp/tcpdump\" for writing");

  while((_Bool)0)
    ;
}

// tcpip_callback_with_block
// file ./lwip/src/include/lwip/tcpip.h line 154
signed char tcpip_callback_with_block(void (*function)(void *), void *ctx, unsigned char block)
{
  struct tcpip_msg *msg;
  if(!(mbox == ((struct sys_mbox *)NULL)))
  {
    void *return_value_mem_malloc_1;
    return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)6]);
    msg = (struct tcpip_msg *)return_value_mem_malloc_1;
    if(msg == ((struct tcpip_msg *)NULL))
      return (signed char)-1;

    msg->type = (enum tcpip_msg_type)TCPIP_MSG_CALLBACK;
    msg->msg.cb.function = function;
    msg->msg.cb.ctx = ctx;
    if(!(block == 0))
      sys_mbox_post(&mbox, (void *)msg);

    else
    {
      signed char return_value_sys_mbox_trypost_2;
      return_value_sys_mbox_trypost_2=sys_mbox_trypost(&mbox, (void *)msg);
      if(!((signed int)return_value_sys_mbox_trypost_2 == 0))
      {
        mem_free((void *)msg);
        return (signed char)-1;
      }

    }
    return (signed char)0;
  }

  return (signed char)-6;
}

// tcpip_callbackmsg_delete
// file lwip/src/api/tcpip.c line 480
void tcpip_callbackmsg_delete(struct tcpip_callback_msg *msg)
{
  mem_free((void *)msg);
}

// tcpip_callbackmsg_new
// file lwip/src/api/tcpip.c line 463
struct tcpip_callback_msg * tcpip_callbackmsg_new(void (*function)(void *), void *ctx)
{
  struct tcpip_msg *msg;
  void *return_value_mem_malloc_1;
  return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)6]);
  msg = (struct tcpip_msg *)return_value_mem_malloc_1;
  if(msg == ((struct tcpip_msg *)NULL))
    return (struct tcpip_callback_msg *)(void *)0;

  else
  {
    msg->type = (enum tcpip_msg_type)TCPIP_MSG_CALLBACK_STATIC;
    msg->msg.cb.function = function;
    msg->msg.cb.ctx = ctx;
    return (struct tcpip_callback_msg *)msg;
  }
}

// tcpip_init
// file lwip/src/api/tcpip.c line 510
void tcpip_init(void (*initfunc)(void *), void *arg)
{
  lwip_init();
  tcpip_init_done = initfunc;
  tcpip_init_done_arg = arg;
  signed char return_value_sys_mbox_new_1;
  return_value_sys_mbox_new_1=sys_mbox_new(&mbox, 0);
  if(!((signed int)return_value_sys_mbox_new_1 == 0))
    do
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"failed to create tcpip_thread mbox", 517, (const void *)"lwip/src/api/tcpip.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
    while((_Bool)0);

  signed char return_value_sys_sem_new_2;
  return_value_sys_sem_new_2=sys_sem_new(&lock_tcpip_core, (unsigned char)1);
  if(!((signed int)return_value_sys_sem_new_2 == 0))
    do
      do
      {
        printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"failed to create lock_tcpip_core", 521, (const void *)"lwip/src/api/tcpip.c");
        fflush((struct _IO_FILE *)(void *)0);
        abort();
      }
      while((_Bool)0);
    while((_Bool)0);

  sys_thread_new("tcpip_thread", tcpip_thread, (void *)0, 0, 1);
}

// tcpip_input
// file lwip/src/api/tcpip.c line 184
signed char tcpip_input(struct pbuf *p, struct netif *inp)
{
  struct tcpip_msg *msg;
  if(mbox == ((struct sys_mbox *)NULL))
    return (signed char)-6;

  else
  {
    void *return_value_mem_malloc_1;
    return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)7]);
    msg = (struct tcpip_msg *)return_value_mem_malloc_1;
    if(msg == ((struct tcpip_msg *)NULL))
      return (signed char)-1;

    else
    {
      msg->type = (enum tcpip_msg_type)TCPIP_MSG_INPKT;
      msg->msg.inp.p = p;
      msg->msg.inp.netif = inp;
      signed char return_value_sys_mbox_trypost_2;
      return_value_sys_mbox_trypost_2=sys_mbox_trypost(&mbox, (void *)msg);
      if(!((signed int)return_value_sys_mbox_trypost_2 == 0))
      {
        mem_free((void *)msg);
        return (signed char)-1;
      }

      else
        return (signed char)0;
    }
  }
}

// tcpip_tcp_timer
// file lwip/src/core/timers.c line 81
static void tcpip_tcp_timer(void *arg)
{
  (void)arg;
  tcp_tmr();
  if(!(tcp_active_pcbs == ((struct tcp_pcb *)NULL)) || !(tcp_tw_pcbs == ((struct tcp_pcb *)NULL)))
    sys_timeout((unsigned int)250, tcpip_tcp_timer, (void *)0);

  else
    tcpip_tcp_timer_active = 0;
}

// tcpip_thread
// file lwip/src/api/tcpip.c line 80
static void tcpip_thread(void *arg)
{
  struct tcpip_msg *msg;
  (void)arg;
  if(!(tcpip_init_done == ((void (*)(void *))NULL)))
    tcpip_init_done(tcpip_init_done_arg);

  sys_arch_sem_wait(&lock_tcpip_core, (unsigned int)0);
  while((_Bool)1)
  {
    sys_sem_signal(&lock_tcpip_core);
    sys_timeouts_mbox_fetch(&mbox, (void **)&msg);
    sys_arch_sem_wait(&lock_tcpip_core, (unsigned int)0);
    if(msg == ((struct tcpip_msg *)NULL))
    {
      while((_Bool)0)
        ;
      do
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcpip_thread: invalid message", 98, (const void *)"lwip/src/api/tcpip.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);
      while((_Bool)0);
    }

    else
      switch((signed int)msg->type)
      {
        case TCPIP_MSG_INPKT:
        {
          while((_Bool)0)
            ;
          ip_input(msg->msg.inp.p, msg->msg.inp.netif);
          mem_free((void *)msg);
          break;
        }
        case TCPIP_MSG_TIMEOUT:
        {
          while((_Bool)0)
            ;
          sys_timeout(msg->msg.tmo.msecs, msg->msg.tmo.h, msg->msg.tmo.arg);
          mem_free((void *)msg);
          break;
        }
        case TCPIP_MSG_UNTIMEOUT:
        {
          while((_Bool)0)
            ;
          sys_untimeout(msg->msg.tmo.h, msg->msg.tmo.arg);
          mem_free((void *)msg);
          break;
        }
        case TCPIP_MSG_CALLBACK:
        {
          while((_Bool)0)
            ;
          msg->msg.cb.function(msg->msg.cb.ctx);
        }
        case TCPIP_MSG_CALLBACK_STATIC:
        {
          while((_Bool)0)
            ;
          msg->msg.cb.function(msg->msg.cb.ctx);
        }
        default:
        {
          while((_Bool)0)
            ;
          do
            do
            {
              printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"tcpip_thread: invalid message", 169, (const void *)"lwip/src/api/tcpip.c");
              fflush((struct _IO_FILE *)(void *)0);
              abort();
            }
            while((_Bool)0);
          while((_Bool)0);
        }
      }
  }
}

// tcpip_timeout
// file lwip/src/api/tcpip.c line 270
signed char tcpip_timeout(unsigned int msecs, void (*h)(void *), void *arg)
{
  struct tcpip_msg *msg;
  if(!(mbox == ((struct sys_mbox *)NULL)))
  {
    void *return_value_mem_malloc_1;
    return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)6]);
    msg = (struct tcpip_msg *)return_value_mem_malloc_1;
    if(msg == ((struct tcpip_msg *)NULL))
      return (signed char)-1;

    msg->type = (enum tcpip_msg_type)TCPIP_MSG_TIMEOUT;
    msg->msg.tmo.msecs = msecs;
    msg->msg.tmo.h = h;
    msg->msg.tmo.arg = arg;
    sys_mbox_post(&mbox, (void *)msg);
    return (signed char)0;
  }

  return (signed char)-6;
}

// tcpip_trycallback
// file lwip/src/api/tcpip.c line 493
signed char tcpip_trycallback(struct tcpip_callback_msg *msg)
{
  if(mbox == ((struct sys_mbox *)NULL))
    return (signed char)-6;

  else
  {
    signed char return_value_sys_mbox_trypost_1;
    return_value_sys_mbox_trypost_1=sys_mbox_trypost(&mbox, (void *)msg);
    return return_value_sys_mbox_trypost_1;
  }
}

// tcpip_untimeout
// file lwip/src/api/tcpip.c line 299
signed char tcpip_untimeout(void (*h)(void *), void *arg)
{
  struct tcpip_msg *msg;
  if(!(mbox == ((struct sys_mbox *)NULL)))
  {
    void *return_value_mem_malloc_1;
    return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)6]);
    msg = (struct tcpip_msg *)return_value_mem_malloc_1;
    if(msg == ((struct tcpip_msg *)NULL))
      return (signed char)-1;

    msg->type = (enum tcpip_msg_type)TCPIP_MSG_UNTIMEOUT;
    msg->msg.tmo.h = h;
    msg->msg.tmo.arg = arg;
    sys_mbox_post(&mbox, (void *)msg);
    return (signed char)0;
  }

  return (signed char)-6;
}

// udp_bind
// file ./lwip/src/include/lwip/udp.h line 149
signed char udp_bind(struct udp_pcb *pcb, struct ip_addr *ipaddr, unsigned short int port)
{
  struct udp_pcb *ipcb;
  unsigned char rebind;
  while((_Bool)0)
    ;
  signed int tmp_if_expr_1;
  signed int tmp_if_expr_2;
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_4;
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  rebind = (unsigned char)0;
  ipcb = udp_pcbs;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_7;
  for( ; !(ipcb == ((struct udp_pcb *)NULL)); ipcb = ipcb->next)
    if(pcb == ipcb)
    {
      do
        if(!((signed int)rebind == 0))
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"rebind == 0", 902, (const void *)"lwip/src/core/udp.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);

      while((_Bool)0);
      rebind = (unsigned char)1;
    }

    else
      if(ipcb->local_port == port)
      {
        if(ipcb->local_ip.addr == 0u)
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          if(ipaddr == ((struct ip_addr *)NULL))
            tmp_if_expr_5 = (_Bool)1;

          else
            tmp_if_expr_5 = ipaddr->addr == (unsigned int)0x00000000UL ? (_Bool)1 : (_Bool)0;
          tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
          tmp_if_expr_7 = (_Bool)1;

        else
          tmp_if_expr_7 = (&ipcb->local_ip)->addr == ipaddr->addr ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_7)
        {
          while((_Bool)0)
            ;
          return (signed char)-8;
        }

      }

  unsigned int tmp_if_expr_8;
  if(ipaddr == ((struct ip_addr *)NULL))
    tmp_if_expr_8 = (unsigned int)0;

  else
    tmp_if_expr_8 = ipaddr->addr;
  (&pcb->local_ip)->addr = tmp_if_expr_8;
  if((signed int)port == 0)
  {
    port=udp_new_port();
    if(!((signed int)port == 0))
      goto __CPROVER_DUMP_L44;

    while((_Bool)0)
      ;
    return (signed char)-8;
  }

  else
  {

  __CPROVER_DUMP_L44:
    ;
    pcb->local_port = port;
    if((signed int)rebind == 0)
    {
      pcb->next = udp_pcbs;
      udp_pcbs = pcb;
    }

    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    return (signed char)0;
  }
}

// udp_connect
// file ./lwip/src/include/lwip/udp.h line 151
signed char udp_connect(struct udp_pcb *pcb, struct ip_addr *ipaddr, unsigned short int port)
{
  struct udp_pcb *ipcb;
  if((signed int)pcb->local_port == 0)
  {
    signed char err;
    err=udp_bind(pcb, &pcb->local_ip, pcb->local_port);
    if(!((signed int)err == 0))
      return err;

  }

  unsigned int tmp_if_expr_1;
  if(ipaddr == ((struct ip_addr *)NULL))
    tmp_if_expr_1 = (unsigned int)0;

  else
    tmp_if_expr_1 = ipaddr->addr;
  (&pcb->remote_ip)->addr = tmp_if_expr_1;
  pcb->remote_port = port;
  pcb->flags = pcb->flags | (unsigned char)0x04U;
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  ipcb = udp_pcbs;
  for( ; !(ipcb == ((struct udp_pcb *)NULL)); ipcb = ipcb->next)
    if(pcb == ipcb)
      return (signed char)0;

  pcb->next = udp_pcbs;
  udp_pcbs = pcb;
  return (signed char)0;
}

// udp_disconnect
// file lwip/src/core/udp.c line 1036
void udp_disconnect(struct udp_pcb *pcb)
{
  (&pcb->remote_ip)->addr = (unsigned int)0x00000000UL;
  pcb->remote_port = (unsigned short int)0;
  pcb->flags = pcb->flags & (unsigned char)~0x04U;
}

// udp_init
// file ./lwip/src/include/lwip/udp.h line 187
void udp_init(void)
{
  ;
}

// udp_input
// file lwip/src/core/udp.c line 155
void udp_input(struct pbuf *p, struct netif *inp)
{
  struct udp_hdr *udphdr;
  struct udp_pcb *pcb;
  struct udp_pcb *prev;
  struct udp_pcb *uncon_pcb;
  unsigned short int src;
  unsigned short int dest;
  unsigned char local_match;
  unsigned char broadcast;
  unsigned char for_us;
  lwip_stats.udp.recv = lwip_stats.udp.recv + 1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_8;
  if(!((signed int)p->len >= 8))
  {
    while((_Bool)0)
      ;
    lwip_stats.udp.lenerr = lwip_stats.udp.lenerr + 1;
    lwip_stats.udp.drop = lwip_stats.udp.drop + 1;
    pbuf_free(p);
  }

  else
  {
    udphdr = (struct udp_hdr *)p->payload;
    broadcast=ip4_addr_isbroadcast((&ip_data.current_iphdr_dest)->addr, inp);
    while((_Bool)0)
      ;
    src=lwip_ntohs(udphdr->src);
    dest=lwip_ntohs(udphdr->dest);
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    prev = (struct udp_pcb *)(void *)0;
    local_match = (unsigned char)0;
    uncon_pcb = (struct udp_pcb *)(void *)0;
    pcb = udp_pcbs;
    for( ; !(pcb == ((struct udp_pcb *)NULL)); pcb = pcb->next)
    {
      local_match = (unsigned char)0;
      while((_Bool)0)
        ;
      while((_Bool)0)
        ;
      while((_Bool)0)
        ;
      while((_Bool)0)
        ;
      while((_Bool)0)
        ;
      if(pcb->local_port == dest)
      {
        if(broadcast == 0)
          tmp_if_expr_3 = ((&pcb->local_ip)->addr == (unsigned int)0x00000000UL ? (_Bool)1 : (_Bool)0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = (&pcb->local_ip)->addr == (&ip_data.current_iphdr_dest)->addr ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
          tmp_if_expr_7 = (_Bool)1;

        else
        {
          if(!(broadcast == 0))
          {
            if(pcb->local_ip.addr == 0u)
              tmp_if_expr_5 = (_Bool)1;

            else
              tmp_if_expr_5 = ((&pcb->local_ip)->addr & (&inp->netmask)->addr) == ((&ip_data.current_iphdr_dest)->addr & (&inp->netmask)->addr) ? (_Bool)1 : (_Bool)0;
            tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_6 = (_Bool)0;
          tmp_if_expr_7 = tmp_if_expr_6 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_7)
        {
          local_match = (unsigned char)1;
          if(uncon_pcb == ((struct udp_pcb *)NULL))
          {
            if((0x04U & (unsigned int)pcb->flags) == 0u)
              uncon_pcb = pcb;

          }

        }

      }

      if(!((signed int)local_match == 0))
      {
        if(pcb->remote_port == src)
        {
          if(pcb->remote_ip.addr == 0u)
            tmp_if_expr_8 = (_Bool)1;

          else
            tmp_if_expr_8 = (&pcb->remote_ip)->addr == (&ip_data.current_iphdr_src)->addr ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_8)
          {
            if(!(prev == ((struct udp_pcb *)NULL)))
            {
              prev->next = pcb->next;
              pcb->next = udp_pcbs;
              udp_pcbs = pcb;
            }

            else
              lwip_stats.udp.cachehit = lwip_stats.udp.cachehit + 1;
            break;
          }

        }

      }

      prev = pcb;
    }
    if(pcb == ((struct udp_pcb *)NULL))
      pcb = uncon_pcb;

    if(!(pcb == ((struct udp_pcb *)NULL)))
      for_us = (unsigned char)1;

    else
      for_us = (unsigned char)((&inp->ip_addr)->addr == (&ip_data.current_iphdr_dest)->addr);
    if(!(for_us == 0))
    {
      while((_Bool)0)
        ;
      if(!((signed int)udphdr->chksum == 0))
      {
        unsigned short int return_value_inet_chksum_pseudo_9;
        return_value_inet_chksum_pseudo_9=inet_chksum_pseudo(p, (unsigned char)17, p->tot_len, &ip_data.current_iphdr_src, &ip_data.current_iphdr_dest);
        if(!((signed int)return_value_inet_chksum_pseudo_9 == 0))
          goto chkerr;

      }

      unsigned char return_value_pbuf_header_10;
      return_value_pbuf_header_10=pbuf_header(p, (signed short int)-8);
      if(!(return_value_pbuf_header_10 == 0))
      {
        do
          do
          {
            printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"pbuf_header failed\n", 354, (const void *)"lwip/src/core/udp.c");
            fflush((struct _IO_FILE *)(void *)0);
            abort();
          }
          while((_Bool)0);
        while((_Bool)0);
        lwip_stats.udp.drop = lwip_stats.udp.drop + 1;
        pbuf_free(p);
        goto end;
      }

      if(!(pcb == ((struct udp_pcb *)NULL)))
      {
        if(!(pcb->recv.ip4 == ((void (*)(void *, struct udp_pcb *, struct pbuf *, struct ip_addr *, unsigned short int))NULL)))
          pcb->recv.ip4(pcb->recv_arg, pcb, p, &ip_data.current_iphdr_src, src);

        else
        {
          pbuf_free(p);
          goto end;
        }
      }

      else
      {
        while((_Bool)0)
          ;
        if(broadcast == 0)
        {
          if(!((240ul & (unsigned long int)ip_data.current_iphdr_dest.addr) == 224ul))
          {
            pbuf_header(p, (signed short int)((signed int)ip_data.current_ip_header_tot_len + 8));
            icmp_dest_unreach(p, (enum icmp_dur_type)ICMP_DUR_PORT);
          }

        }

        lwip_stats.udp.proterr = lwip_stats.udp.proterr + 1;
        lwip_stats.udp.drop = lwip_stats.udp.drop + 1;
        pbuf_free(p);
      }
    }

    else
      pbuf_free(p);
  }

end:
  ;
  goto __CPROVER_DUMP_L94;

chkerr:
  ;
  while((_Bool)0)
    ;
  lwip_stats.udp.chkerr = lwip_stats.udp.chkerr + 1;
  lwip_stats.udp.drop = lwip_stats.udp.drop + 1;
  pbuf_free(p);

__CPROVER_DUMP_L94:
  ;
}

// udp_new
// file ./lwip/src/include/lwip/udp.h line 147
struct udp_pcb * udp_new(void)
{
  struct udp_pcb *pcb;
  void *return_value_mem_malloc_1;
  return_value_mem_malloc_1=mem_malloc((unsigned int)memp_sizes[(signed long int)0]);
  pcb = (struct udp_pcb *)return_value_mem_malloc_1;
  if(!(pcb == ((struct udp_pcb *)NULL)))
  {
    memset((void *)pcb, 0, sizeof(struct udp_pcb) /*48ul*/ );
    pcb->ttl = (unsigned char)255;
  }

  return pcb;
}

// udp_new_port
// file lwip/src/core/udp.c line 103
static unsigned short int udp_new_port(void)
{
  unsigned short int n = (unsigned short int)0;
  struct udp_pcb *pcb;
  unsigned short int tmp_post_1;
  do
  {

  again:
    ;
    tmp_post_1 = udp_port;
    udp_port = udp_port + 1;
    if((signed int)tmp_post_1 == 0xffff)
      udp_port = (unsigned short int)0xc000;

    pcb = udp_pcbs;

  __CPROVER_DUMP_L3:
    ;
    if(pcb == ((struct udp_pcb *)NULL))
      goto __CPROVER_DUMP_L6;

    if(!(pcb->local_port == udp_port))
      break;

    n = n + 1;
    if((signed int)n >= 16384)
      return (unsigned short int)0;

  }
  while((_Bool)1);
  pcb = pcb->next;
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L6:
  ;
  return udp_port;
}

// udp_recv
// file ./lwip/src/include/lwip/udp.h line 154
void udp_recv(struct udp_pcb *pcb, void (*recv)(void *, struct udp_pcb *, struct pbuf *, struct ip_addr *, unsigned short int), void *recv_arg)
{
  pcb->recv.ip4 = recv;
  pcb->recv_arg = recv_arg;
}

// udp_remove
// file lwip/src/core/udp.c line 1071
void udp_remove(struct udp_pcb *pcb)
{
  struct udp_pcb *pcb2;
  if(udp_pcbs == pcb)
    udp_pcbs = udp_pcbs->next;

  else
  {
    pcb2 = udp_pcbs;
    for( ; !(pcb2 == ((struct udp_pcb *)NULL)); pcb2 = pcb2->next)
      if(!(pcb2->next == ((struct udp_pcb *)NULL)))
      {
        if(pcb2->next == pcb)
          pcb2->next = pcb->next;

      }

  }
  mem_free((void *)pcb);
}

// udp_send
// file lwip/src/core/udp.c line 506
signed char udp_send(struct udp_pcb *pcb, struct pbuf *p)
{
  signed char return_value_udp_sendto_1;
  return_value_udp_sendto_1=udp_sendto(pcb, p, &pcb->remote_ip, pcb->remote_port);
  return return_value_udp_sendto_1;
}

// udp_sendto
// file ./lwip/src/include/lwip/udp.h line 162
signed char udp_sendto(struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *dst_ip, unsigned short int dst_port)
{
  struct netif *netif;
  struct ip_addr *dst_ip_route = dst_ip;
  while((_Bool)0)
    ;
  netif=ip_route(dst_ip_route);
  signed int tmp_if_expr_1;
  signed int tmp_if_expr_2;
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_4;
  if(netif == ((struct netif *)NULL))
  {
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    lwip_stats.udp.rterr = lwip_stats.udp.rterr + 1;
    return (signed char)-4;
  }

  else
  {
    signed char return_value_udp_sendto_if_5;
    return_value_udp_sendto_if_5=udp_sendto_if(pcb, p, dst_ip, dst_port, netif);
    return return_value_udp_sendto_if_5;
  }
}

// udp_sendto_if
// file lwip/src/core/udp.c line 615
signed char udp_sendto_if(struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *dst_ip, unsigned short int dst_port, struct netif *netif)
{
  struct ip_addr *src_ip;
  if(pcb->local_ip.addr == 0u)
    src_ip = &netif->ip_addr;

  else
  {
    if(!(pcb->local_ip.addr == netif->ip_addr.addr))
      return (signed char)-6;

    src_ip = &pcb->local_ip;
  }
  signed char return_value_udp_sendto_if_src_1;
  return_value_udp_sendto_if_src_1=udp_sendto_if_src(pcb, p, dst_ip, dst_port, netif, src_ip);
  return return_value_udp_sendto_if_src_1;
}

// udp_sendto_if_src
// file lwip/src/core/udp.c line 673
signed char udp_sendto_if_src(struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *dst_ip, unsigned short int dst_port, struct netif *netif, struct ip_addr *src_ip)
{
  struct udp_hdr *udphdr;
  signed char err;
  struct pbuf *q;
  unsigned char ip_proto;
  if((signed int)pcb->local_port == 0)
  {
    while((_Bool)0)
      ;
    err=udp_bind(pcb, &pcb->local_ip, pcb->local_port);
    if((signed int)err == 0)
      goto __CPROVER_DUMP_L9;

    while((_Bool)0)
      ;
    return err;
  }

  else
  {

  __CPROVER_DUMP_L9:
    ;
    unsigned char return_value_pbuf_header_1;
    return_value_pbuf_header_1=pbuf_header(p, (signed short int)8);
    if(!(return_value_pbuf_header_1 == 0))
    {
      q=pbuf_alloc((enum anonymous)PBUF_IP, (unsigned short int)8, (enum anonymous_0)PBUF_RAM);
      if(q == ((struct pbuf *)NULL))
      {
        while((_Bool)0)
          ;
        return (signed char)-1;
      }

      if(!((signed int)p->tot_len == 0))
        pbuf_chain(q, p);

      while((_Bool)0)
        ;
    }

    else
    {
      q = p;
      while((_Bool)0)
        ;
    }
    do
      if(!((unsigned long int)q->len >= sizeof(struct udp_hdr) /*8ul*/ ))
        do
        {
          printf("Assertion \"%s\" failed at line %d in %s\n", (const void *)"check that first pbuf can hold struct udp_hdr", 738, (const void *)"lwip/src/core/udp.c");
          fflush((struct _IO_FILE *)(void *)0);
          abort();
        }
        while((_Bool)0);

    while((_Bool)0);
    udphdr = (struct udp_hdr *)q->payload;
    udphdr->src=lwip_htons(pcb->local_port);
    udphdr->dest=lwip_htons(dst_port);
    udphdr->chksum = (unsigned short int)0x0000;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    udphdr->len=lwip_htons(q->tot_len);
    if((0x01U & (unsigned int)pcb->flags) == 0u)
    {
      unsigned short int udpchksum;
      udpchksum=inet_chksum_pseudo(q, (unsigned char)17, q->tot_len, src_ip, dst_ip);
      if((signed int)udpchksum == 0x0000)
        udpchksum = (unsigned short int)0xffff;

      udphdr->chksum = udpchksum;
    }

    ip_proto = (unsigned char)17;
    while((_Bool)0)
      ;
    while((_Bool)0)
      ;
    err=ip_output_if_src(q, src_ip, dst_ip, pcb->ttl, pcb->tos, ip_proto, netif);
    if(!(q == p))
    {
      pbuf_free(q);
      q = (struct pbuf *)(void *)0;
    }

    lwip_stats.udp.xmit = lwip_stats.udp.xmit + 1;
    return err;
  }
}

// vpn_conn_down
// file src/ocproxy.c line 653
static void vpn_conn_down(void)
{
  printf("ocproxy: VPN connection has terminated\n");
  event_base_loopbreak(event_base);
}

// warn
// file src/ocproxy.c line 202
static void warn(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fflush(stdout);
  fprintf(stderr, "warning: ");
  vfprintf(stderr, fmt, ap);
  ap = ((void **)NULL);
}

// xstrdup
// file src/ocproxy.c line 213
static char * xstrdup(const char *s)
{
  char *ret;
  ret=strdup(s);
  if(ret == ((char *)NULL))
    die("out of memory\n");

  return ret;
}

