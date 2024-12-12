// #anon_enum_Interfaces=0_NetStat=1_FlowDump=2_HelpPage=3
// file trafshow.h line 36
enum anonymous_13 { Interfaces=0, NetStat=1, FlowDump=2, HelpPage=3 };

// #anon_enum_IpAddress=0_DomainName=1_MailExchanger=2
// file domain_resolver.c line 53
enum anonymous_14 { IpAddress=0, DomainName=1, MailExchanger=2 };

// #anon_enum_PlainFile=0_TextStream=1_DataSequence=2
// file session.h line 24
enum anonymous_6 { PlainFile=0, TextStream=1, DataSequence=2 };

// #anon_enum_Size=0_Data=1_Packets=2
// file show_stat.h line 18
enum anonymous { Size=0, Data=1, Packets=2 };

// tag-#anon#ST[ARR16{S64}_S64_'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_11;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_29;

// tag-#anon#ST[BF{U32}_U32_'id'||BF{U32}_U32_'rd'||BF{U32}_U32_'tc'||BF{U32}_U32_'aa'||BF{U32}_U32_'opcode'||BF{U32}_U32_'qr'||BF{U32}_U32_'rcode'||BF{U32}_U32_'cd'||BF{U32}_U32_'ad'||BF{U32}_U32_'unused'||BF{U32}_U32_'ra'||BF{U32}_U32_'qdcount'||BF{U32}_U32_'ancount'||BF{U32}_U32_'nscount'||BF{U32}_U32_'arcount'|]
// file /usr/include/arpa/nameser_compat.h line 48
struct anonymous_15;

// tag-#anon#ST[SYM#tag-ip#'idi_ip'|]
// file /usr/include/netinet/ip_icmp.h line 185
struct anonymous_9;

// tag-#anon#ST[U16'encoding'||U16'parity'|]
// file /usr/include/linux/hdlc/ioctl.h line 52
struct anonymous_19;

// tag-#anon#ST[U16'source'||U16'dest'||U16'len'||U16'check'|]
// file /usr/include/netinet/udp.h line 67
struct anonymous_0;

// tag-#anon#ST[U16'source'||U16'dest'||U32'seq'||U32'ack_seq'||BF{U16}_U16_'res1'||BF{U16}_U16_'doff'||BF{U16}_U16_'fin'||BF{U16}_U16_'syn'||BF{U16}_U16_'rst'||BF{U16}_U16_'psh'||BF{U16}_U16_'ack'||BF{U16}_U16_'urg'||BF{U16}_U16_'res2'||U16'window'||U16'check'||U16'urg_ptr'|]
// file /usr/include/netinet/tcp.h line 103
struct anonymous_4;

// tag-#anon#ST[U16'th_sport'||U16'th_dport'||U32'th_seq'||U32'th_ack'||BF{U8}_U8_'th_x2'||BF{U8}_U8_'th_off'||U8'th_flags'||U16'th_win'||U16'th_sum'||U16'th_urp'|]
// file /usr/include/netinet/tcp.h line 78
struct anonymous_3;

// tag-#anon#ST[U16'uh_sport'||U16'uh_dport'||U16'uh_ulen'||U16'uh_sum'|]
// file /usr/include/netinet/udp.h line 60
struct anonymous_1;

// tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'_pad0'|]
// file /usr/include/linux/hdlc/ioctl.h line 39
struct anonymous_24;

// tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'_pad0'||U32'slot_map'|]
// file /usr/include/linux/hdlc/ioctl.h line 45
struct anonymous_25;

// tag-#anon#ST[U32'dlci'|]
// file /usr/include/linux/hdlc/ioctl.h line 67
struct anonymous_22;

// tag-#anon#ST[U32'dlci'||ARR16{S8}_S8_'master'|]
// file /usr/include/linux/hdlc/ioctl.h line 71
struct anonymous_23;

// tag-#anon#ST[U32'interval'||U32'timeout'|]
// file /usr/include/linux/hdlc/ioctl.h line 76
struct anonymous_20;

// tag-#anon#ST[U32'its_otime'||U32'its_rtime'||U32'its_ttime'|]
// file /usr/include/netinet/ip_icmp.h line 179
struct anonymous_8;

// tag-#anon#ST[U32't391'||U32't392'||U32'n391'||U32'n392'||U32'n393'||U16'lmi'||U16'dce'|]
// file /usr/include/linux/hdlc/ioctl.h line 57
struct anonymous_21;

// tag-#anon#ST[U8'ssap'||U8'dsap'|]
// file netstat.h line 79
struct anonymous_17;

// tag-#anon#UN[*{SYM#tag-#anon#ST[U16'encoding'||U16'parity'|]#}_SYM#tag-#anon#ST[U16'encoding'||U16'parity'|]#_'raw_hdlc'||*{SYM#tag-#anon#ST[U32'interval'||U32'timeout'|]#}_SYM#tag-#anon#ST[U32'interval'||U32'timeout'|]#_'cisco'||*{SYM#tag-#anon#ST[U32't391'||U32't392'||U32'n391'||U32'n392'||U32'n393'||U16'lmi'||U16'dce'|]#}_SYM#tag-#anon#ST[U32't391'||U32't392'||U32'n391'||U32'n392'||U32'n393'||U16'lmi'||U16'dce'|]#_'fr'||*{SYM#tag-#anon#ST[U32'dlci'|]#}_SYM#tag-#anon#ST[U32'dlci'|]#_'fr_pvc'||*{SYM#tag-#anon#ST[U32'dlci'||ARR16{S8}_S8_'master'|]#}_SYM#tag-#anon#ST[U32'dlci'||ARR16{S8}_S8_'master'|]#_'fr_pvc_info'||*{SYM#tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'_pad0'|]#}_SYM#tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'_pad0'|]#_'sync'||*{SYM#tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'_pad0'||U32'slot_map'|]#}_SYM#tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'_pad0'||U32'slot_map'|]#_'te1'|]
// file /usr/include/linux/if.h line 182
union anonymous_26;

// tag-#anon#UN[ARR16{S8}_S8_'ifrn_name'|]
// file /usr/include/linux/if.h line 205
union anonymous_27;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_30;

// tag-#anon#UN[SYM#tag-#anon#ST[U16'th_sport'||U16'th_dport'||U32'th_seq'||U32'th_ack'||BF{U8}_U8_'th_x2'||BF{U8}_U8_'th_off'||U8'th_flags'||U16'th_win'||U16'th_sum'||U16'th_urp'|]#'_anon0'||SYM#tag-#anon#ST[U16'source'||U16'dest'||U32'seq'||U32'ack_seq'||BF{U16}_U16_'res1'||BF{U16}_U16_'doff'||BF{U16}_U16_'fin'||BF{U16}_U16_'syn'||BF{U16}_U16_'rst'||BF{U16}_U16_'psh'||BF{U16}_U16_'ack'||BF{U16}_U16_'urg'||BF{U16}_U16_'res2'||U16'window'||U16'check'||U16'urg_ptr'|]#'_anon1'|]
// file /usr/include/netinet/tcp.h line 76
union anonymous_5;

// tag-#anon#UN[SYM#tag-#anon#ST[U16'uh_sport'||U16'uh_dport'||U16'uh_ulen'||U16'uh_sum'|]#'_anon0'||SYM#tag-#anon#ST[U16'source'||U16'dest'||U16'len'||U16'check'|]#'_anon1'|]
// file /usr/include/netinet/udp.h line 58
union anonymous_2;

// tag-#anon#UN[SYM#tag-#anon#ST[U32'its_otime'||U32'its_rtime'||U32'its_ttime'|]#'id_ts'||SYM#tag-#anon#ST[SYM#tag-ip#'idi_ip'|]#'id_ip'||SYM#tag-icmp_ra_addr#'id_radv'||U32'id_mask'||ARR1{U8}_U8_'id_data'|]
// file /usr/include/netinet/ip_icmp.h line 177
union anonymous_10;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_12;

// tag-#anon#UN[SYM#tag-in_addr#'ipa4'|]
// file netstat.h line 38
union anonymous_16;

// tag-#anon#UN[SYM#tag-sockaddr#'ifru_addr'||SYM#tag-sockaddr#'ifru_dstaddr'||SYM#tag-sockaddr#'ifru_broadaddr'||SYM#tag-sockaddr#'ifru_netmask'||SYM#tag-sockaddr#'ifru_hwaddr'||S16'ifru_flags'||S32'ifru_ivalue'||S32'ifru_mtu'||SYM#tag-ifmap#'ifru_map'||ARR16{S8}_S8_'ifru_slave'||ARR16{S8}_S8_'ifru_newname'||*{V}_V_'ifru_data'||SYM#tag-if_settings#'ifru_settings'|]
// file /usr/include/linux/if.h line 210
union anonymous_28;

// tag-#anon#UN[U16'tag'||SYM#tag-#anon#ST[U8'ssap'||U8'dsap'|]#'llc'|]
// file netstat.h line 77
union anonymous_18;

// tag-#anon#UN[U8'ih_pptr'||SYM#tag-in_addr#'ih_gwaddr'||SYM#tag-ih_idseq#'ih_idseq'||U32'ih_void'||SYM#tag-ih_pmtu#'ih_pmtu'||SYM#tag-ih_rtradv#'ih_rtradv'|]
// file /usr/include/netinet/ip_icmp.h line 142
union anonymous_7;

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

// tag-_win_st
// file /usr/include/curses.h line 365
struct _win_st;

// tag-bpf_insn
// file /usr/include/pcap/bpf.h line 108
struct bpf_insn;

// tag-bpf_program
// file /usr/include/pcap/bpf.h line 106
struct bpf_program;

// tag-cm_entry
// file colormask.c line 45
struct cm_entry;

// tag-cnf_data_v1
// file cisco_netflow.h line 35
struct cnf_data_v1;

// tag-cnf_data_v5
// file cisco_netflow.h line 87
struct cnf_data_v5;

// tag-cnf_data_v7
// file cisco_netflow.h line 126
struct cnf_data_v7;

// tag-cnf_hdr_v1
// file cisco_netflow.h line 24
struct cnf_hdr_v1;

// tag-cnf_hdr_v5
// file cisco_netflow.h line 60
struct cnf_hdr_v5;

// tag-cnf_hdr_v7
// file cisco_netflow.h line 113
struct cnf_hdr_v7;

// tag-domain_data_ent
// file domain_resolver.h line 23
struct domain_data_ent;

// tag-domain_transact_ent
// file domain_resolver.c line 61
struct domain_transact_ent;

// tag-enamemem
// file addrtoname.c line 122
struct enamemem;

// tag-ether_addr
// file /usr/include/net/ethernet.h line 32
struct ether_addr;

// tag-ether_dot1q_header
// file parse_dl.c line 38
struct ether_dot1q_header;

// tag-ether_header
// file /usr/include/net/ethernet.h line 38
struct ether_header;

// tag-etherlist
// file addrtoname.c line 839
struct etherlist;

// tag-ethernet_header
// file netstat.h line 73
struct ethernet_header;

// tag-event_ent
// file events.h line 20
struct event_ent;

// tag-help_page_entry
// file help_page.c line 32
struct help_page_entry;

// tag-hitem
// file hashtab.h line 40
struct hitem;

// tag-hnamemem
// file addrtoname.h line 45
struct hnamemem;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-htab
// file hashtab.h line 51
struct htab;

// tag-icmp
// file /usr/include/netinet/ip_icmp.h line 137
struct icmp;

// tag-icmp_ra_addr
// file /usr/include/netinet/ip_icmp.h line 131
struct icmp_ra_addr;

// tag-if_settings
// file /usr/include/linux/if.h line 179
struct if_settings;

// tag-ifmap
// file /usr/include/linux/if.h line 169
struct ifmap;

// tag-ifreq
// file /usr/include/linux/if.h line 203
struct ifreq;

// tag-ih_idseq
// file /usr/include/netinet/ip_icmp.h line 146
struct ih_idseq;

// tag-ih_pmtu
// file /usr/include/netinet/ip_icmp.h line 154
struct ih_pmtu;

// tag-ih_rtradv
// file /usr/include/netinet/ip_icmp.h line 160
struct ih_rtradv;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-internet_header
// file netstat.h line 55
struct internet_header;

// tag-ip
// file /usr/include/netinet/ip.h line 107
struct ip;

// tag-ip_address
// file netstat.h line 37
struct ip_address;

// tag-ldat
// file /usr/include/curses.h line 412
struct ldat;

// tag-netstat
// file trafshow.h line 124
struct netstat;

// tag-netstat_header
// file trafshow.h line 81
struct netstat_header;

// tag-pcap
// file /usr/include/pcap/pcap.h line 79
struct pcap;

// tag-pcap_addr
// file /usr/include/pcap/pcap.h line 82
struct pcap_addr;

// tag-pcap_dumper
// file /usr/include/pcap/pcap.h line 80
struct pcap_dumper;

// tag-pcap_etherent
// file /usr/include/pcap/namedb.h line 48
struct pcap_etherent;

// tag-pcap_handler
// file trafshow.h line 85
struct pcap_handler;

// tag-pcap_if
// file /usr/include/pcap/pcap.h line 81
struct pcap_if;

// tag-pcap_pkthdr
// file /usr/include/pcap/pcap.h line 160
struct pcap_pkthdr;

// tag-pdat
// file /usr/include/curses.h line 452
struct pdat;

// tag-protoent
// file /usr/include/netdb.h line 326
struct protoent;

// tag-protoidlist
// file addrtoname.c line 794
struct protoidlist;

// tag-protoidmem
// file addrtoname.c line 136
struct protoidmem;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-recycle
// file recycle.h line 26
struct recycle;

// tag-reroot
// file hashtab.h line 59
struct reroot;

// tag-selector
// file trafshow.h line 83
struct selector;

// tag-servent
// file /usr/include/netdb.h line 257
struct servent;

// tag-session_binder_ent
// file session.h line 30
struct session_binder_ent;

// tag-session_ent
// file session.h line 53
struct session_ent;

// tag-sll_header
// file sll.h line 85
struct sll_header;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_storage
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 162
struct sockaddr_storage;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-tcphdr
// file /usr/include/netinet/tcp.h line 74
struct tcphdr;

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

// tag-tok
// file addrtoname.c line 78
struct tok;

// tag-udphdr
// file /usr/include/netinet/udp.h line 56
struct udphdr;

// tag-winsize
// file /usr/include/x86_64-linux-gnu/bits/ioctl-types.h line 27
struct winsize;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __dn_comp
// file /usr/include/resolv.h line 355
signed int __dn_comp(const char *, unsigned char *, signed int, unsigned char **, unsigned char **);
// __dn_expand
// file /usr/include/resolv.h line 357
signed int __dn_expand(const unsigned char *, const unsigned char *, const unsigned char *, char *, signed int);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// _exit
// file /usr/include/unistd.h line 603
extern void _exit(signed int);
// add_colormask
// file colormask.c line 109
static signed int add_colormask(const char *s, struct cm_entry *m);
// add_event
// file events.h line 62
signed int add_event(struct timeval *tvp, void (*func)(void *), void *arg);

//

// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// beep
// file /usr/include/curses.h line 588
extern signed int beep(void);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// build_filter_expr
// file show_dump.c line 407
static char * build_filter_expr(char *dst, signed int size, const struct netstat *ns);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// catch_signals
// file trafshow.c line 269
static void * catch_signals(void *arg);
// cbreak
// file /usr/include/curses.h line 594
extern signed int cbreak(void);
// change_event
// file events.c line 264
signed int change_event(void (*func)(void *), void *arg, void *new_arg);

//

// checksum
// file lookupa.c line 170
void checksum(unsigned char *k, unsigned long int len, unsigned long int *state);
// cisco_netflow_init
// file cisco_netflow.h line 151
signed int cisco_netflow_init(struct pcap_handler **ph_list, signed int port);
// cleanup
// file trafshow.c line 261
static void cleanup(void);
// clearerr
// file /usr/include/stdio.h line 826
extern void clearerr(struct _IO_FILE *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// colormask
// file colormask.c line 540
signed int colormask(struct netstat_header *nh);
// compare_data_len
// file show_stat.c line 55
static signed int compare_data_len(const struct netstat **p1, const struct netstat **p2);
// compare_pkt_cnt
// file show_stat.c line 64
static signed int compare_pkt_cnt(const struct netstat **p1, const struct netstat **p2);
// compare_pkt_len
// file show_stat.c line 46
static signed int compare_pkt_len(const struct netstat **p1, const struct netstat **p2);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// copy_argv
// file util.h line 15
char * copy_argv(char **av);
// discard_request
// file domain_resolver.c line 267
static void discard_request(void *arg);
// domain_data_add
// file domain_resolver.c line 347
struct domain_data_ent * domain_data_add(struct domain_data_ent **list, const char *name, signed int pref);
// domain_data_find
// file domain_resolver.c line 410
struct domain_data_ent * domain_data_find(struct domain_data_ent **list, const char *name);
// domain_data_free
// file domain_resolver.h line 67
void domain_data_free(struct domain_data_ent **list, const char *name);
// domain_resolve_addr
// file domain_resolver.c line 187
signed int domain_resolve_addr(const char *domain, struct session_ent *sd, void (*notify)(struct session_ent *, struct domain_data_ent *));
// domain_resolve_addr::notify_object
//
void notify_object(struct session_ent *, struct domain_data_ent *);
// domain_resolve_mxlist
// file domain_resolver.c line 196
signed int domain_resolve_mxlist(const char *domain, struct session_ent *sd, void (*notify)(struct session_ent *, struct domain_data_ent *));
// domain_resolve_mxlist::notify_object
//
void notify_object(struct session_ent *, struct domain_data_ent *);
// domain_resolve_name
// file domain_resolver.h line 58
signed int domain_resolve_name(unsigned int ipaddr, struct session_ent *sd, void (*notify)(struct session_ent *, struct domain_data_ent *));
// domain_resolve_name::notify_object
//
void notify_object(struct session_ent *, struct domain_data_ent *);
// domain_resolver_init
// file domain_resolver.c line 133
signed int domain_resolver_init();
// dump_netflow_v1
// file cisco_netflow.c line 411
static void dump_netflow_v1(const struct cnf_data_v1 *dp);
// dump_netflow_v5
// file cisco_netflow.c line 447
static void dump_netflow_v5(const struct cnf_data_v5 *dp);
// dump_netflow_v7
// file cisco_netflow.c line 488
static void dump_netflow_v7(const struct cnf_data_v7 *dp);
// edit_string
// file getkey.c line 536
static signed int edit_string(signed int ch);
// endprotoent
// file /usr/include/netdb.h line 344
extern void endprotoent(void);
// endservent
// file /usr/include/netdb.h line 276
extern void endservent(void);
// endwin
// file /usr/include/curses.h line 618
extern signed int endwin(void);
// etheraddr_string
// file addrtoname.h line 30
const char * etheraddr_string(const unsigned char *ep);
// ethertype_string
// file addrtoname.h line 31
const char * ethertype_string(unsigned short int type);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fd_size
// file util.h line 16
signed long int fd_size(signed int fd);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// file_pcap_parse
// file show_dump.c line 352
static void file_pcap_parse(unsigned char *a, struct pcap_pkthdr *h, const unsigned char *p);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// find_backflow
// file show_stat.c line 73
static signed int find_backflow(struct netstat **list, signed int items, struct netstat *at);
// find_event
// file events.c line 281
struct event_ent * find_event(void (*func)(void *), void *arg);

//

// find_transact
// file domain_resolver.c line 303
static struct domain_transact_ent * find_transact(unsigned short int reqid);
// findpair
// file colormask.c line 86
static signed short int findpair(signed short int f, signed short int b, signed int a);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprint_tcpflags
// file cisco_netflow.c line 369
static void fprint_tcpflags(struct _IO_FILE *fp, signed int flags);
// fprint_tos
// file cisco_netflow.c line 386
static void fprint_tos(struct _IO_FILE *fp, signed int tos);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_events
// file events.c line 295
void free_events();
// free_transact
// file domain_resolver.c line 315
static void free_transact(struct domain_transact_ent *dt);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 213
extern signed int fstat(signed int, struct stat *);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// get_colors
// file selector.c line 65
static void get_colors(const struct selector *sp, signed int *fore, signed int *curs);
// get_name
// file cisco_netflow.c line 134
static char * get_name(struct sockaddr *sa, char *dst, signed int size);
// get_selector
// file getkey.c line 83
static struct selector * get_selector(struct pcap_handler *ph_list);
// get_size
// file selector.c line 40
static void get_size(const struct selector *sp, signed int *lines, signed int *cols);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// gethostbyaddr
// file /usr/include/netdb.h line 137
extern struct hostent * gethostbyaddr(const void *, unsigned int, signed int);
// gethostbyname
// file /usr/include/netdb.h line 144
extern struct hostent * gethostbyname(const char *);
// gethostname
// file /usr/include/unistd.h line 879
extern signed int gethostname(char *, unsigned long int);
// getkey_init
// file getkey.h line 52
void getkey_init(struct pcap_handler *ph);
// getname
// file addrtoname.h line 35
const char * getname(const unsigned char *ap);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpeername
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 141
extern signed int getpeername(signed int, struct sockaddr *, unsigned int *);
// getprotobyname
// file /usr/include/netdb.h line 357
extern struct protoent * getprotobyname(const char *);
// getprotobynumber
// file /usr/include/netdb.h line 363
extern struct protoent * getprotobynumber(signed int);
// getprotoent
// file /usr/include/netdb.h line 351
extern struct protoent * getprotoent(void);
// getservbyname
// file /usr/include/netdb.h line 290
extern struct servent * getservbyname(const char *, const char *);
// getservent
// file /usr/include/netdb.h line 283
extern struct servent * getservent(void);
// getsockname
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 127
extern signed int getsockname(signed int, struct sockaddr *, unsigned int *);
// getsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 219
extern signed int getsockopt(signed int, signed int, signed int, void *, unsigned int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// hadd
// file hashtab.h line 133
signed int hadd(struct htab *t, unsigned char *key, unsigned long int keyl, void *stuff);
// has_colors
// file /usr/include/curses.h line 629
extern _Bool has_colors(void);
// hcreate
// file hashtab.h line 76
struct htab * hcreate(signed int logsize);
// hdel
// file hashtab.h line 152
signed int hdel(struct htab *t);
// hdestroy
// file hashtab.h line 87
void hdestroy(struct htab *t);
// hdr2str
// file show_stat.c line 214
void hdr2str(struct netstat_header *nh, char *src_buf, signed int src_len, char *dst_buf, signed int dst_len, char *proto_buf, signed int proto_len);
// help_page_footer
// file help_page.c line 130
static signed int help_page_footer(char *dst, signed int size, const char *topic);
// help_page_header
// file help_page.c line 88
static signed int help_page_header(char *dst, signed int size, const void *unused);
// help_page_key
// file help_page.h line 20
signed int help_page_key(signed int idx);
// help_page_line
// file help_page.c line 109
static signed int help_page_line(char *dst, signed int size, struct help_page_entry *hp, signed int idx);
// help_page_list
// file help_page.h line 18
struct selector * help_page_list(enum anonymous_13 mode);
// help_page_mode
// file help_page.h line 19
enum anonymous_13 help_page_mode();
// help_page_selector
// file help_page.h line 17
struct selector * help_page_selector();
// hfind
// file hashtab.h line 120
signed int hfind(struct htab *t, unsigned char *key, unsigned long int keyl);
// hfirst
// file hashtab.h line 162
signed int hfirst(struct htab *t);
// hgrow
// file hashtab.c line 86
static void hgrow(struct htab *t);
// hnbucket
// file hashtab.h line 192
signed int hnbucket(struct htab *t);
// hstat
// file hashtab.c line 314
void hstat(struct _IO_FILE *fp, struct htab *t);
// htab_insert
// file netstat.c line 106
static signed int htab_insert(struct htab *ht, const struct netstat *ns);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// icmp_string
// file addrtoname.h line 58
const char * icmp_string(unsigned short int code);
// inet_addr
// file /usr/include/arpa/inet.h line 34
extern unsigned int inet_addr(const char *);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// init_addrtoname
// file addrtoname.h line 44
void init_addrtoname(void);
// init_colormask
// file colormask.h line 26
signed int init_colormask(void);
// init_edit_string
// file getkey.c line 495
static void init_edit_string(const char *prompter, const char *charset, signed int size);
// init_etherarray
// file addrtoname.c line 863
static void init_etherarray(void);
// init_etypearray
// file addrtoname.c line 778
static void init_etypearray(void);
// init_icmparray
// file addrtoname.c line 1264
static void init_icmparray(void);
// init_iprotoarray
// file addrtoname.c line 1205
static void init_iprotoarray(void);
// init_ipxsaparray
// file addrtoname.c line 1169
static void init_ipxsaparray(void);
// init_llcsaparray
// file addrtoname.c line 936
static void init_llcsaparray(void);
// init_pair
// file /usr/include/curses.h line 641
extern signed int init_pair(signed short int, signed short int, signed short int);
// init_protoidarray
// file addrtoname.c line 811
static void init_protoidarray(void);
// init_servarray
// file addrtoname.c line 710
static void init_servarray(void);
// initscr
// file /usr/include/curses.h line 639
extern struct _win_st * initscr(void);
// intoa
// file addrtoname.h line 41
const char * intoa(unsigned int addr);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// ip_print
// file show_stat.c line 117
static char * ip_print(signed int ver, signed int proto, struct ip_address *addr, char *dst, signed int size);
// ipproto_string
// file addrtoname.h line 36
const char * ipproto_string(unsigned char proto);
// ipxsap_string
// file addrtoname.c line 684
const char * ipxsap_string(unsigned short int port);
// is_any
// file colormask.c line 196
static signed int is_any(const char *s);
// is_number
// file colormask.c line 203
static signed int is_number(const char *s);
// is_parse_dl
// file parse_dl.h line 13
signed int is_parse_dl(signed int type);
// isonsap_string
// file addrtoname.c line 608
const char * isonsap_string(const unsigned char *nsap);
// isservport
// file addrtoname.h line 34
signed int isservport(unsigned short int port);
// linkaddr_string
// file addrtoname.h line 29
const char * linkaddr_string(const unsigned char *ep, const unsigned int len);
// live_pcap_dump
// file show_dump.c line 234
static void * live_pcap_dump();
// live_pcap_parse
// file show_dump.c line 249
static void live_pcap_parse(unsigned char *a, struct pcap_pkthdr *h, const unsigned char *p);
// llcsap_string
// file addrtoname.h line 56
const char * llcsap_string(unsigned char sap);
// load_file
// file util.h line 17
char * load_file(const char *name);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// lookup
// file lookupa.h line 21
unsigned long int lookup(unsigned char *k, unsigned long int length, unsigned long int level);
// lookup_bytestring
// file addrtoname.c line 358
static inline struct enamemem * lookup_bytestring(const unsigned char *bs, const unsigned int nlen);
// lookup_emem
// file addrtoname.c line 325
static inline struct enamemem * lookup_emem(const unsigned char *ep);
// lookup_nsap
// file addrtoname.c line 400
static inline struct enamemem * lookup_nsap(const unsigned char *nsap);
// lookup_protoid
// file addrtoname.c line 443
static inline struct protoidmem * lookup_protoid(const unsigned char *pi);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// maskit
// file netstat.c line 45
static void maskit(unsigned char *bp, signed int len, signed int bits);
// match_feeder
// file cisco_netflow.c line 98
static struct pcap_handler * match_feeder(struct pcap_handler *ph, struct sockaddr *sa);
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
// mkstemp
// file /usr/include/stdlib.h line 619
extern signed int mkstemp(char *);
// mvprintw
// file /usr/include/curses.h line 681
extern signed int mvprintw(signed int, signed int, const char *, ...);
// name_resolved
// file addrtoname.c line 216
static void name_resolved(void *unused, struct domain_data_ent *dd);
// nameserver_close
// file domain_resolver.c line 242
static void nameserver_close(struct session_ent *sd);
// nameserver_error
// file domain_resolver.c line 218
static void nameserver_error(struct session_ent *sd, signed int error);
// nameserver_reply
// file domain_resolver.c line 589
static void nameserver_reply(struct session_ent *sd, const unsigned char *data, signed int len);
// nameserver_request
// file domain_resolver.c line 459
static signed int nameserver_request(const char *domain, enum anonymous_14 type, struct session_ent *org, void (*notify)(struct session_ent *, struct domain_data_ent *));
// nameserver_request::notify_object
//
void notify_object(struct session_ent *, struct domain_data_ent *);
// nameserver_send
// file domain_resolver.c line 538
static signed int nameserver_send(struct session_ent *sd);
// netmask
// file colormask.c line 528
static unsigned int netmask(signed int bits);
// netstat_aggregate
// file netstat.h line 132
void netstat_aggregate(struct netstat_header *nh, signed int bits);
// netstat_bidir
// file netstat.h line 139
signed int netstat_bidir(const struct netstat *p1, const struct netstat *p2);
// netstat_count
// file netstat.h line 133
signed int netstat_count(const struct pcap_handler *ph);
// netstat_fetch
// file netstat.h line 140
signed int netstat_fetch(struct netstat ***list, struct pcap_handler *ph);
// netstat_find
// file netstat.c line 207
signed int netstat_find(struct pcap_handler *ph, struct netstat *ns);
// netstat_free
// file netstat.h line 137
void netstat_free(struct pcap_handler *ph);
// netstat_insert
// file netstat.h line 134
signed int netstat_insert(struct pcap_handler *ph, const struct netstat *ns);
// netstat_match
// file netstat.h line 138
signed int netstat_match(const struct netstat *p1, const struct netstat *p2);
// netstat_purge
// file netstat.h line 136
signed int netstat_purge(struct pcap_handler *ph, struct timeval *at);
// new_transact
// file domain_resolver.c line 286
static struct domain_transact_ent * new_transact();
// newhnamemem
// file addrtoname.c line 1413
struct hnamemem * newhnamemem(void);
// noecho
// file /usr/include/curses.h line 718
extern signed int noecho(void);
// nonl
// file /usr/include/curses.h line 719
extern signed int nonl(void);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// pair_content
// file /usr/include/curses.h line 725
extern signed int pair_content(signed short int, signed short int *, signed short int *);
// parse_dl
// file parse_dl.h line 17
signed int parse_dl(struct netstat *ns, signed int dlt, signed int caplen, signed int pktlen, const unsigned char *pkt);
// parse_dl_name
// file parse_dl.h line 14
const char * parse_dl_name(signed int type);
// parse_feed
// file trafshow.c line 599
static void parse_feed(unsigned char *a, struct pcap_pkthdr *h, const unsigned char *p);
// parse_ip
// file parse_ip.h line 15
signed int parse_ip(struct netstat *ns, signed int caplen, struct ip *ip);
// parse_key
// file getkey.c line 102
static void parse_key(signed int key, struct pcap_handler *ph_list);
// parse_netflow
// file cisco_netflow.c line 233
static void parse_netflow(struct pcap_handler *ph, const unsigned char *data, signed int len);
// parse_packet
// file domain_resolver.c line 657
static struct domain_transact_ent * parse_packet(const unsigned char *data, signed int len);
// pcap_clear
// file trafshow.c line 724
void pcap_clear(void *arg);
// pcap_close
// file /usr/include/pcap/pcap.h line 371
void pcap_close(struct pcap *);
// pcap_compile
// file /usr/include/pcap/pcap.h line 389
signed int pcap_compile(struct pcap *, struct bpf_program *, const char *, signed int, unsigned int);
// pcap_datalink
// file /usr/include/pcap/pcap.h line 396
signed int pcap_datalink(struct pcap *);
// pcap_dispatch
// file /usr/include/pcap/pcap.h line 373
signed int pcap_dispatch(struct pcap *, signed int, void (*)(unsigned char *, struct pcap_pkthdr *, const unsigned char *), unsigned char *);
// pcap_dump
// file /usr/include/pcap/pcap.h line 420
void pcap_dump(unsigned char *, struct pcap_pkthdr *, const unsigned char *);
// pcap_dump_close
// file /usr/include/pcap/pcap.h line 419
void pcap_dump_close(struct pcap_dumper *);
// pcap_dump_flush
// file /usr/include/pcap/pcap.h line 418
signed int pcap_dump_flush(struct pcap_dumper *);
// pcap_dump_open
// file /usr/include/pcap/pcap.h line 413
struct pcap_dumper * pcap_dump_open(struct pcap *, const char *);
// pcap_feed
// file trafshow.c line 512
static void * pcap_feed(void *arg);
// pcap_feed2
// file trafshow.c line 543
static void * pcap_feed2(void *arg);
// pcap_file
// file /usr/include/pcap/pcap.h line 410
struct _IO_FILE * pcap_file(struct pcap *);
// pcap_findalldevs
// file /usr/include/pcap/pcap.h line 422
signed int pcap_findalldevs(struct pcap_if **, char *);
// pcap_freecode
// file /usr/include/pcap/pcap.h line 393
void pcap_freecode(struct bpf_program *);
// pcap_get_selectable_fd
// file /usr/include/pcap/pcap.h line 477
signed int pcap_get_selectable_fd(struct pcap *);
// pcap_get_selected
// file trafshow.c line 737
struct pcap_handler * pcap_get_selected(struct pcap_handler *ph);
// pcap_geterr
// file /usr/include/pcap/pcap.h line 387
char * pcap_geterr(struct pcap *);
// pcap_init
// file trafshow.c line 304
static signed int pcap_init(struct pcap_handler **ph_list, struct pcap_if *dp);
// pcap_lookupnet
// file /usr/include/pcap/pcap.h line 275
signed int pcap_lookupnet(const char *, unsigned int *, unsigned int *, char *);
// pcap_matchdev
// file trafshow.c line 287
static struct pcap_if * pcap_matchdev(struct pcap_if *dp, const char *name);
// pcap_next_etherent
// file /usr/include/pcap/namedb.h line 55
struct pcap_etherent * pcap_next_etherent(struct _IO_FILE *);
// pcap_open_live
// file /usr/include/pcap/pcap.h line 349
struct pcap * pcap_open_live(const char *, signed int, signed int, signed int, char *);
// pcap_open_offline
// file /usr/include/pcap/pcap.h line 353
struct pcap * pcap_open_offline(const char *, char *);
// pcap_purge
// file trafshow.c line 703
void pcap_purge(void *arg);
// pcap_save
// file trafshow.c line 621
void pcap_save(struct pcap_handler *ph, const struct netstat *ns);
// pcap_set_selected
// file trafshow.c line 750
struct pcap_handler * pcap_set_selected(struct pcap_handler *ph, signed int idx);
// pcap_setexpr
// file trafshow.c line 477
char * pcap_setexpr(struct pcap_handler *ph, const char *expr);
// pcap_setfilter
// file /usr/include/pcap/pcap.h line 379
signed int pcap_setfilter(struct pcap *, struct bpf_program *);
// pcap_setnonblock
// file /usr/include/pcap/pcap.h line 382
signed int pcap_setnonblock(struct pcap *, signed int, char *);
// pcap_show
// file trafshow.c line 657
void pcap_show(void *arg);
// pcaph_close
// file trafshow.c line 451
void pcaph_close(struct pcap_handler *ph);
// pcaph_create
// file trafshow.c line 414
struct pcap_handler * pcaph_create(struct pcap_handler *top, struct netstat_header *nh);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// print_mode
// file show_dump.c line 67
static void print_mode(void);
// printw
// file /usr/include/curses.h line 730
extern signed int printw(const char *, ...);
// protoid_string
// file addrtoname.c line 562
const char * protoid_string(const unsigned char *pi);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_12 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_12 *, const union anonymous_30 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_12 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_12 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// random
// file /usr/include/stdlib.h line 321
extern signed long int random(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// read_key
// file getkey.c line 69
static void read_key(struct session_ent *sd, const unsigned char *data, signed int len);
// read_netflow
// file cisco_netflow.c line 167
static void read_netflow(struct session_ent *sd, const unsigned char *data, signed int len);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recvfrom
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 174
extern signed long int recvfrom(signed int, void *, unsigned long int, signed int,  struct sockaddr *, unsigned int *);
// refree
// file recycle.h line 46
void refree(struct reroot *r);
// remkroot
// file recycle.h line 43
struct reroot * remkroot(unsigned long int size);
// remove_event
// file events.h line 69
signed int remove_event(void (*func)(void *), void *arg);

//

// renewx
// file recycle.h line 52
char * renewx(struct reroot *r);
// resizeterm
// file /usr/include/curses.h line 903
extern signed int resizeterm(signed int, signed int);
// sap_print
// file show_stat.c line 189
static char * sap_print(const unsigned char *addr, unsigned char sap, char *dst, signed int size);
// satoa
// file addrtoname.h line 42
char * satoa(struct sockaddr *sa, char *dst, signed int size);
// scale_size
// file show_if.c line 29
static void scale_size(signed int *name, signed int *addr, signed int *descr);
// scale_size_link1
// file show_stat.c line 36
static void scale_size_link1(signed int *addr_link1, signed int *prot, signed int *data, signed int *rate);
// scale_size_link2
// file help_page.c line 80
static void scale_size_link2(signed int *name_link1, signed int *descr_link1);
// scan_key
// file getkey.c line 416
static signed int scan_key(const unsigned char *buf, signed int len);
// screen_clear
// file screen.c line 146
void screen_clear(void);
// screen_close
// file screen.h line 22
void screen_close(void);
// screen_dock_cursor
// file screen.c line 163
void screen_dock_cursor(signed int y, signed int x);
// screen_open
// file screen.h line 21
signed int screen_open(signed int resize);
// screen_status
// file screen.h line 23
void screen_status(const char *fmt, ...);
// screen_update
// file screen.c line 156
void screen_update(void);
// scrollok
// file /usr/include/curses.h line 748
extern signed int scrollok(struct _win_st *, _Bool);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_11 *, struct anonymous_11 *, struct anonymous_11 *, struct timeval *);
// select_event
// file events.h line 56
signed int select_event(struct timeval *tvp);

//

// selector_get
// file selector.c line 249
signed int selector_get(struct selector *sp);
// selector_init
// file selector.c line 85
struct selector * selector_init();
// selector_move
// file selector.h line 42
signed int selector_move(signed int ch, struct selector *sp);
// selector_redraw
// file selector.h line 38
void selector_redraw(struct selector *sp);
// selector_set
// file selector.h line 41
void selector_set(signed int new_index, struct selector *sp);
// selector_withdraw
// file selector.h line 39
void selector_withdraw(struct selector *sp);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// session_bind
// file session.c line 253
signed int session_bind(struct session_ent *sd, void (*notify)(void *), void *arg);
// session_bind::notify_object
//
void notify_object(void *);
// session_cookie
// file session.h line 90
const void * session_cookie(struct session_ent *sd);
// session_find
// file session.c line 350
struct session_ent * session_find(struct sockaddr *peer, enum anonymous_6 type);
// session_free
// file session.c line 313
void session_free(struct session_ent *free_sd);
// session_from
// file session.c line 692
struct sockaddr * session_from(struct session_ent *sd);
// session_idle
// file session.c line 245
signed int session_idle(struct session_ent *sd);
// session_open
// file session.h line 79
struct session_ent * session_open(signed int sock, struct sockaddr *peer, enum anonymous_6 type);
// session_operate
// file session.h line 95
void session_operate(struct anonymous_11 *readfds, struct anonymous_11 *writefds);
// session_peer
// file session.c line 682
struct sockaddr * session_peer(struct session_ent *sd);
// session_read
// file session.c line 451
static signed int session_read(struct session_ent *sd);
// session_select
// file session.h line 93
signed int session_select(signed int *nfds, struct anonymous_11 *readfds, struct anonymous_11 *writefds, struct timeval *timeout, signed int *block);
// session_send
// file session.c line 387
signed int session_send(struct session_ent *sd, const unsigned char *data, signed int len);
// session_setcallback
// file session.h line 85
void session_setcallback(struct session_ent *sd, void (*connected)(struct session_ent *), void (*read_error)(struct session_ent *, signed int), void (*read_data)(struct session_ent *, const unsigned char *, signed int));
// session_setcallback::connected_object
//
void connected_object(struct session_ent *);
// session_setcallback::read_data_object
//
void read_data_object(struct session_ent *, const unsigned char *, signed int);
// session_setcallback::read_error_object
//
void read_error_object(struct session_ent *, signed int);
// session_setcookie
// file session.h line 89
void session_setcookie(struct session_ent *sd, const void *cookie);
// session_settimeout
// file session.c line 177
unsigned int session_settimeout(struct session_ent *sd, unsigned int timeout);
// session_sock
// file session.c line 170
signed int session_sock(struct session_ent *sd);
// session_start
// file session.c line 104
signed int session_start(struct session_ent *sd);
// session_stop
// file session.c line 228
void session_stop(struct session_ent *sd);
// session_timeout
// file session.h line 96
void session_timeout();
// session_unbind
// file session.c line 282
void session_unbind(struct session_ent *sd, void (*notify)(void *), void *arg);
// session_unbind::notify_object
//
void notify_object(void *);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// show_ascii_dump
// file show_dump.c line 479
static void show_ascii_dump(const unsigned char *cp, signed int length);
// show_dump_close
// file show_dump.h line 20
void show_dump_close(void);
// show_dump_input
// file show_dump.h line 21
void show_dump_input(signed int ch);
// show_dump_open
// file show_dump.h line 18
signed int show_dump_open(const struct pcap_handler *ph, const struct netstat *ns);
// show_dump_print
// file show_dump.h line 19
void show_dump_print(struct pcap_handler *ph);
// show_header_dump
// file show_dump.c line 453
static void show_header_dump(struct pcap_handler *ph, const struct netstat *ns);
// show_hex_dump
// file show_dump.c line 512
static void show_hex_dump(const unsigned char *cp, signed int length);
// show_if_footer
// file show_if.c line 131
static signed int show_if_footer(char *dst, signed int size, const void *unused);
// show_if_header
// file show_if.c line 38
static signed int show_if_header(char *dst, signed int size, const void *unused);
// show_if_line
// file show_if.c line 103
static signed int show_if_line(char *dst, signed int size, const struct pcap_handler *ph, signed int idx);
// show_if_list
// file show_if.h line 19
struct selector * show_if_list(struct pcap_handler *ph);
// show_if_search
// file show_if.h line 21
signed int show_if_search(struct pcap_handler *ph, const char *str);
// show_if_selector
// file show_if.h line 20
struct selector * show_if_selector();
// show_stat_footer
// file show_stat.c line 414
static signed int show_stat_footer(char *dst, signed int size, const struct pcap_handler *ph);
// show_stat_get
// file show_stat.h line 29
struct netstat * show_stat_get(struct pcap_handler *ph, signed int idx);
// show_stat_header
// file show_stat.c line 300
static signed int show_stat_header(char *dst, signed int size, const struct pcap_handler *ph);
// show_stat_input
// file show_stat.h line 27
signed int show_stat_input(struct pcap_handler *ph, signed int ch);
// show_stat_line
// file show_stat.c line 348
static signed int show_stat_line(char *dst, signed int size, const struct netstat **ns_list, signed int idx);
// show_stat_list
// file show_stat.h line 26
struct selector * show_stat_list(struct pcap_handler *ph);
// show_stat_search
// file show_stat.h line 30
signed int show_stat_search(struct pcap_handler *ph, const char *str);
// show_stat_selector
// file show_stat.h line 28
struct selector * show_stat_selector(struct pcap_handler *ph);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous_29 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous_29 *);
// sigprocmask
// file /usr/include/signal.h line 248
extern signed int sigprocmask(signed int, const struct anonymous_29 *, struct anonymous_29 *);
// sigwait
// file /usr/include/signal.h line 270
extern signed int sigwait(const struct anonymous_29 *, signed int *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// socket_error
// file session.c line 738
signed int socket_error(signed int sock);
// socket_keepalive
// file session.c line 788
signed int socket_keepalive(signed int sock, signed int on);
// socket_name
// file session.c line 720
signed int socket_name(struct sockaddr *name, signed int sock);
// socket_nonblock
// file session.c line 766
signed int socket_nonblock(signed int sock, signed int on);
// socket_peer
// file session.c line 702
signed int socket_peer(struct sockaddr *peer, signed int sock);
// sort_backflow
// file show_stat.c line 93
static void sort_backflow(struct netstat **list, signed int items);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// start_color
// file /usr/include/curses.h line 771
extern signed int start_color(void);
// str2addr
// file colormask.c line 269
static signed int str2addr(const char *str, const char *proto, struct ip_address *addr, signed int *mask);
// str2port
// file colormask.c line 243
static signed int str2port(const char *str, const char *proto);
// str2proto
// file colormask.c line 213
static char * str2proto(const char *str, signed int *proto);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strip_blanks
// file util.c line 35
char * strip_blanks(char *str);
// strip_path
// file util.h line 13
char * strip_path(const char *path);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strpbrk
// file /usr/include/string.h line 314
extern char * strpbrk(const char *, const char *);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// tcpport_string
// file addrtoname.h line 32
const char * tcpport_string(unsigned short int port);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// traf_show
// file trafshow.c line 767
static void * traf_show(void *arg);
// tv_add
// file events.c line 54
void tv_add(struct timeval *out, struct timeval *in);
// tv_diff
// file events.c line 83
unsigned long int tv_diff(struct timeval *tvp1, struct timeval *tvp2);
// tv_round
// file events.c line 70
unsigned long int tv_round(struct timeval *in);
// tv_sharp
// file events.c line 105
void tv_sharp(struct timeval *tvp, signed int period);
// tv_sub
// file events.c line 30
void tv_sub(struct timeval *out, struct timeval *in);
// udpport_string
// file addrtoname.h line 33
const char * udpport_string(unsigned short int port);
// unique_reqid
// file domain_resolver.c line 278
static unsigned short int unique_reqid();
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usage
// file trafshow.c line 857
static void usage();
// use_default_colors
// file /usr/include/curses.h line 906
extern signed int use_default_colors(void);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// vers
// file trafshow.c line 812
static void vers();
// vsprintf
// file /usr/include/stdio.h line 379
extern signed int vsprintf(char *, const char *, void **);
// waddch
// file /usr/include/curses.h line 792
extern signed int waddch(struct _win_st *, const unsigned long int);
// waddnstr
// file /usr/include/curses.h line 795
extern signed int waddnstr(struct _win_st *, const char *, signed int);
// wbkgd
// file /usr/include/curses.h line 804
extern signed int wbkgd(struct _win_st *, unsigned long int);
// wclear
// file /usr/include/curses.h line 808
extern signed int wclear(struct _win_st *);
// wclrtoeol
// file /usr/include/curses.h line 810
extern signed int wclrtoeol(struct _win_st *);
// wmove
// file /usr/include/curses.h line 831
extern signed int wmove(struct _win_st *, signed int, signed int);
// wredrawln
// file /usr/include/curses.h line 835
extern signed int wredrawln(struct _win_st *, signed int, signed int);
// wrefresh
// file /usr/include/curses.h line 836
extern signed int wrefresh(struct _win_st *);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous_11
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous_29
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_15
{
  // id
  unsigned int id : 16;
  // rd
  unsigned int rd : 1;
  // tc
  unsigned int tc : 1;
  // aa
  unsigned int aa : 1;
  // opcode
  unsigned int opcode : 4;
  // qr
  unsigned int qr : 1;
  // rcode
  unsigned int rcode : 4;
  // cd
  unsigned int cd : 1;
  // ad
  unsigned int ad : 1;
  // unused
  unsigned int unused : 1;
  // ra
  unsigned int ra : 1;
  // qdcount
  unsigned int qdcount : 16;
  // ancount
  unsigned int ancount : 16;
  // nscount
  unsigned int nscount : 16;
  // arcount
  unsigned int arcount : 16;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct ip
{
  // ip_hl
  unsigned int ip_hl : 4;
  // ip_v
  unsigned int ip_v : 4;
  // ip_tos
  unsigned char ip_tos;
  // ip_len
  unsigned short int ip_len;
  // ip_id
  unsigned short int ip_id;
  // ip_off
  unsigned short int ip_off;
  // ip_ttl
  unsigned char ip_ttl;
  // ip_p
  unsigned char ip_p;
  // ip_sum
  unsigned short int ip_sum;
  // ip_src
  struct in_addr ip_src;
  // ip_dst
  struct in_addr ip_dst;
};

struct anonymous_9
{
  // idi_ip
  struct ip idi_ip;
};

struct anonymous_19
{
  // encoding
  unsigned short int encoding;
  // parity
  unsigned short int parity;
};

struct anonymous_0
{
  // source
  unsigned short int source;
  // dest
  unsigned short int dest;
  // len
  unsigned short int len;
  // check
  unsigned short int check;
};

struct anonymous_4
{
  // source
  unsigned short int source;
  // dest
  unsigned short int dest;
  // seq
  unsigned int seq;
  // ack_seq
  unsigned int ack_seq;
  // res1
  unsigned short int res1 : 4;
  // doff
  unsigned short int doff : 4;
  // fin
  unsigned short int fin : 1;
  // syn
  unsigned short int syn : 1;
  // rst
  unsigned short int rst : 1;
  // psh
  unsigned short int psh : 1;
  // ack
  unsigned short int ack : 1;
  // urg
  unsigned short int urg : 1;
  // res2
  unsigned short int res2 : 2;
  // window
  unsigned short int window;
  // check
  unsigned short int check;
  // urg_ptr
  unsigned short int urg_ptr;
};

struct anonymous_3
{
  // th_sport
  unsigned short int th_sport;
  // th_dport
  unsigned short int th_dport;
  // th_seq
  unsigned int th_seq;
  // th_ack
  unsigned int th_ack;
  // th_x2
  unsigned char th_x2 : 4;
  // th_off
  unsigned char th_off : 4;
  // th_flags
  unsigned char th_flags;
  // th_win
  unsigned short int th_win;
  // th_sum
  unsigned short int th_sum;
  // th_urp
  unsigned short int th_urp;
};

struct anonymous_1
{
  // uh_sport
  unsigned short int uh_sport;
  // uh_dport
  unsigned short int uh_dport;
  // uh_ulen
  unsigned short int uh_ulen;
  // uh_sum
  unsigned short int uh_sum;
};

struct anonymous_24
{
  // clock_rate
  unsigned int clock_rate;
  // clock_type
  unsigned int clock_type;
  // loopback
  unsigned short int loopback;
};

struct anonymous_25
{
  // clock_rate
  unsigned int clock_rate;
  // clock_type
  unsigned int clock_type;
  // loopback
  unsigned short int loopback;
  // slot_map
  unsigned int slot_map;
};

struct anonymous_22
{
  // dlci
  unsigned int dlci;
};

struct anonymous_23
{
  // dlci
  unsigned int dlci;
  // master
  char master[16l];
};

struct anonymous_20
{
  // interval
  unsigned int interval;
  // timeout
  unsigned int timeout;
};

struct anonymous_8
{
  // its_otime
  unsigned int its_otime;
  // its_rtime
  unsigned int its_rtime;
  // its_ttime
  unsigned int its_ttime;
};

struct anonymous_21
{
  // t391
  unsigned int t391;
  // t392
  unsigned int t392;
  // n391
  unsigned int n391;
  // n392
  unsigned int n392;
  // n393
  unsigned int n393;
  // lmi
  unsigned short int lmi;
  // dce
  unsigned short int dce;
};

struct anonymous_17
{
  // ssap
  unsigned char ssap;
  // dsap
  unsigned char dsap;
};

union anonymous_26
{
  // raw_hdlc
  struct anonymous_19 *raw_hdlc;
  // cisco
  struct anonymous_20 *cisco;
  // fr
  struct anonymous_21 *fr;
  // fr_pvc
  struct anonymous_22 *fr_pvc;
  // fr_pvc_info
  struct anonymous_23 *fr_pvc_info;
  // sync
  struct anonymous_24 *sync;
  // te1
  struct anonymous_25 *te1;
};

union anonymous_27
{
  // ifrn_name
  char ifrn_name[16l];
};

union anonymous_30
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_5
{
  // _anon0
  struct anonymous_3 _anon0;
  // _anon1
  struct anonymous_4 _anon1;
};

union anonymous_2
{
  // _anon0
  struct anonymous_1 _anon0;
  // _anon1
  struct anonymous_0 _anon1;
};

struct icmp_ra_addr
{
  // ira_addr
  unsigned int ira_addr;
  // ira_preference
  unsigned int ira_preference;
};

union anonymous_10
{
  // id_ts
  struct anonymous_8 id_ts;
  // id_ip
  struct anonymous_9 id_ip;
  // id_radv
  struct icmp_ra_addr id_radv;
  // id_mask
  unsigned int id_mask;
  // id_data
  unsigned char id_data[1l];
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

union anonymous_12
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous_16
{
  // ipa4
  struct in_addr ipa4;
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

struct if_settings
{
  // type
  unsigned int type;
  // size
  unsigned int size;
  // ifs_ifsu
  union anonymous_26 ifs_ifsu;
};

union anonymous_28
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
  void *ifru_data;
  // ifru_settings
  struct if_settings ifru_settings;
};

union anonymous_18
{
  // tag
  unsigned short int tag;
  // llc
  struct anonymous_17 llc;
};

struct ih_idseq
{
  // icd_id
  unsigned short int icd_id;
  // icd_seq
  unsigned short int icd_seq;
};

struct ih_pmtu
{
  // ipm_void
  unsigned short int ipm_void;
  // ipm_nextmtu
  unsigned short int ipm_nextmtu;
};

struct ih_rtradv
{
  // irt_num_addrs
  unsigned char irt_num_addrs;
  // irt_wpa
  unsigned char irt_wpa;
  // irt_lifetime
  unsigned short int irt_lifetime;
};

union anonymous_7
{
  // ih_pptr
  unsigned char ih_pptr;
  // ih_gwaddr
  struct in_addr ih_gwaddr;
  // ih_idseq
  struct ih_idseq ih_idseq;
  // ih_void
  unsigned int ih_void;
  // ih_pmtu
  struct ih_pmtu ih_pmtu;
  // ih_rtradv
  struct ih_rtradv ih_rtradv;
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
};

struct bpf_insn
{
  // code
  unsigned short int code;
  // jt
  unsigned char jt;
  // jf
  unsigned char jf;
  // k
  unsigned int k;
};

struct bpf_program
{
  // bf_len
  unsigned int bf_len;
  // bf_insns
  struct bpf_insn *bf_insns;
};

struct ip_address
{
  // ipaddr
  union anonymous_16 ipaddr;
  // ip_port
  unsigned short int ip_port;
};

struct internet_header
{
  // ver
  unsigned char ver;
  // proto
  unsigned char proto;
  // src
  struct ip_address src;
  // dst
  struct ip_address dst;
};

struct cm_entry
{
  // in_hdr
  struct internet_header in_hdr;
  // src_mask
  signed int src_mask;
  // dst_mask
  signed int dst_mask;
  // pair
  signed short int pair;
  // attr
  signed int attr;
};

struct cnf_data_v1
{
  // src_addr
  unsigned int src_addr;
  // dst_addr
  unsigned int dst_addr;
  // nexthop
  unsigned int nexthop;
  // ifin
  unsigned short int ifin;
  // ifout
  unsigned short int ifout;
  // dpkts
  unsigned int dpkts;
  // doctets
  unsigned int doctets;
  // firsttime
  unsigned int firsttime;
  // lasttime
  unsigned int lasttime;
  // src_port
  unsigned short int src_port;
  // dst_port
  unsigned short int dst_port;
  // pad1
  unsigned short int pad1;
  // proto
  unsigned char proto;
  // tos
  unsigned char tos;
  // flags
  unsigned char flags;
  // tcp_retx_cnt
  unsigned char tcp_retx_cnt;
  // tcp_retx_secs
  unsigned char tcp_retx_secs;
  // tcp_misseq_cnt
  unsigned char tcp_misseq_cnt;
  // reserved
  unsigned char reserved[4l];
};

struct cnf_data_v5
{
  // src_addr
  unsigned int src_addr;
  // dst_addr
  unsigned int dst_addr;
  // nexthop
  unsigned int nexthop;
  // ifin
  unsigned short int ifin;
  // ifout
  unsigned short int ifout;
  // dpkts
  unsigned int dpkts;
  // doctets
  unsigned int doctets;
  // firsttime
  unsigned int firsttime;
  // lasttime
  unsigned int lasttime;
  // src_port
  unsigned short int src_port;
  // dst_port
  unsigned short int dst_port;
  // pad1
  unsigned char pad1;
  // flags
  unsigned char flags;
  // proto
  unsigned char proto;
  // tos
  unsigned char tos;
  // src_as
  unsigned short int src_as;
  // dst_as
  unsigned short int dst_as;
  // src_mask
  unsigned char src_mask;
  // dst_mask
  unsigned char dst_mask;
  // pad2
  unsigned short int pad2;
};

struct cnf_data_v7
{
  // src_addr
  unsigned int src_addr;
  // dst_addr
  unsigned int dst_addr;
  // nexthop
  unsigned int nexthop;
  // ifin
  unsigned short int ifin;
  // ifout
  unsigned short int ifout;
  // dpkts
  unsigned int dpkts;
  // doctets
  unsigned int doctets;
  // firsttime
  unsigned int firsttime;
  // lasttime
  unsigned int lasttime;
  // src_port
  unsigned short int src_port;
  // dst_port
  unsigned short int dst_port;
  // pad1
  unsigned char pad1;
  // flags
  unsigned char flags;
  // proto
  unsigned char proto;
  // tos
  unsigned char tos;
  // src_as
  unsigned int src_as;
  // dst_as
  unsigned int dst_as;
  // src_mask
  unsigned char src_mask;
  // dst_mask
  unsigned char dst_mask;
  // pad2
  unsigned short int pad2;
  // router_sc
  unsigned int router_sc;
};

struct cnf_hdr_v1
{
  // version
  unsigned short int version;
  // counter
  unsigned short int counter;
  // sysuptime
  unsigned int sysuptime;
  // unix_secs
  unsigned int unix_secs;
  // unix_nsecs
  unsigned int unix_nsecs;
};

struct cnf_hdr_v5
{
  // version
  unsigned short int version;
  // counter
  unsigned short int counter;
  // sysuptime
  unsigned int sysuptime;
  // unix_secs
  unsigned int unix_secs;
  // unix_nsecs
  unsigned int unix_nsecs;
  // sequence
  unsigned int sequence;
  // engine_type
  unsigned char engine_type;
  // engine_id
  unsigned char engine_id;
  // sampling_interval
  unsigned short int sampling_interval;
};

struct cnf_hdr_v7
{
  // version
  unsigned short int version;
  // counter
  unsigned short int counter;
  // sysuptime
  unsigned int sysuptime;
  // unix_secs
  unsigned int unix_secs;
  // unix_nsecs
  unsigned int unix_nsecs;
  // sequence
  unsigned int sequence;
  // reserved
  unsigned int reserved;
};

struct domain_data_ent
{
  // ttl
  unsigned int ttl;
  // pref
  unsigned int pref;
  // name
  char *name;
  // addr
  unsigned int addr;
  // next
  struct domain_data_ent *next;
};

struct domain_transact_ent
{
  // name
  char *name;
  // sd
  struct session_ent *sd;
  // callback
  void (*callback)(struct session_ent *, struct domain_data_ent *);
  // reqid
  unsigned short int reqid;
  // expand
  unsigned short int expand;
  // retry
  signed int retry;
  // domain
  char *domain;
  // type
  enum anonymous_14 type;
  // rcode
  signed int rcode;
  // data
  struct domain_data_ent *data;
  // next
  struct domain_transact_ent *next;
};

struct enamemem
{
  // e_addr0
  unsigned short int e_addr0;
  // e_addr1
  unsigned short int e_addr1;
  // e_addr2
  unsigned short int e_addr2;
  // e_name
  const char *e_name;
  // e_nsap
  unsigned char *e_nsap;
  // e_nxt
  struct enamemem *e_nxt;
};

struct ether_addr
{
  // ether_addr_octet
  unsigned char ether_addr_octet[6l];
} __attribute__ ((__packed__));

struct ether_dot1q_header
{
  // dhost
  unsigned char dhost[6l];
  // shost
  unsigned char shost[6l];
  // encap_proto
  unsigned short int encap_proto;
  // tag
  unsigned short int tag;
  // proto
  unsigned short int proto;
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

struct etherlist
{
  // addr
  const unsigned char addr[6l];
  // name
  const char *name;
};

struct ethernet_header
{
  // src
  unsigned char src[6l];
  // dst
  unsigned char dst[6l];
  // type
  unsigned short int type;
  // param
  union anonymous_18 param;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct event_ent
{
  // tv
  struct timeval tv;
  // func
  void (*func)(void *);
  // arg
  void *arg;
  // next
  struct event_ent *next;
};

struct help_page_entry
{
  // key
  signed int key;
  // name
  const char *name;
  // descr
  const char *descr;
};

struct hitem
{
  // key
  unsigned char *key;
  // keyl
  unsigned long int keyl;
  // stuff
  void *stuff;
  // hval
  unsigned long int hval;
  // next
  struct hitem *next;
};

struct hnamemem
{
  // resolving
  signed int resolving;
  // addr
  unsigned int addr;
  // name
  const char *name;
  // nxt
  struct hnamemem *nxt;
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

struct htab
{
  // table
  struct hitem **table;
  // logsize
  signed int logsize;
  // mask
  unsigned long int mask;
  // count
  unsigned long int count;
  // apos
  unsigned long int apos;
  // ipos
  struct hitem *ipos;
  // space
  struct reroot *space;
  // bcount
  unsigned long int bcount;
};

struct icmp
{
  // icmp_type
  unsigned char icmp_type;
  // icmp_code
  unsigned char icmp_code;
  // icmp_cksum
  unsigned short int icmp_cksum;
  // icmp_hun
  union anonymous_7 icmp_hun;
  // icmp_dun
  union anonymous_10 icmp_dun;
};

struct ifreq
{
  // ifr_ifrn
  union anonymous_27 ifr_ifrn;
  // ifr_ifru
  union anonymous_28 ifr_ifru;
};

struct netstat_header
{
  // en_hdr
  struct ethernet_header en_hdr;
  // in_hdr
  struct internet_header in_hdr;
};

struct netstat
{
  // ns_hdr
  struct netstat_header ns_hdr;
  // mtime
  struct timeval mtime;
  // pkt_cnt
  unsigned int pkt_cnt;
  // pkt_len
  unsigned int pkt_len;
  // data_len
  unsigned int data_len;
  // gain_pkt_cnt
  unsigned int gain_pkt_cnt;
  // gain_pkt_len
  unsigned int gain_pkt_len;
  // gain_data_len
  unsigned int gain_data_len;
  // pkt_cnt_rate
  unsigned int pkt_cnt_rate;
  // pkt_len_rate
  unsigned int pkt_len_rate;
  // data_len_rate
  unsigned int data_len_rate;
  // attr
  signed int attr;
};

struct pcap_addr
{
  // next
  struct pcap_addr *next;
  // addr
  struct sockaddr *addr;
  // netmask
  struct sockaddr *netmask;
  // broadaddr
  struct sockaddr *broadaddr;
  // dstaddr
  struct sockaddr *dstaddr;
};

struct pcap_etherent
{
  // addr
  unsigned char addr[6l];
  // name
  char name[122l];
};

struct pcap_handler
{
  // prev
  struct pcap_handler *prev;
  // next
  struct pcap_handler *next;
  // top
  struct pcap_handler *top;
  // deep
  struct pcap_handler *deep;
  // name
  const char *name;
  // descr
  const char *descr;
  // addrstr
  const char *addrstr;
  // pcap
  struct pcap *pcap;
  // addr
  struct pcap_addr *addr;
  // masklen
  signed int masklen;
  // maskhdr
  struct netstat_header *maskhdr;
  // ns_mutex
  union anonymous_12 *ns_mutex;
  // ns_hash
  struct htab *ns_hash;
  // selector
  struct selector *selector;
  // selected
  signed int selected;
  // pkt_cnt
  unsigned long int pkt_cnt;
  // pkt_len
  unsigned long int pkt_len;
  // data_len
  unsigned long int data_len;
  // pkt_cnt_rate
  unsigned long int pkt_cnt_rate;
  // pkt_len_rate
  unsigned long int pkt_len_rate;
  // data_len_rate
  unsigned long int data_len_rate;
};

struct pcap_if
{
  // next
  struct pcap_if *next;
  // name
  char *name;
  // description
  char *description;
  // addresses
  struct pcap_addr *addresses;
  // flags
  unsigned int flags;
};

struct pcap_pkthdr
{
  // ts
  struct timeval ts;
  // caplen
  unsigned int caplen;
  // len
  unsigned int len;
};

struct protoent
{
  // p_name
  char *p_name;
  // p_aliases
  char **p_aliases;
  // p_proto
  signed int p_proto;
};

struct protoidlist
{
  // protoid
  const unsigned char protoid[5l];
  // name
  const char *name;
};

struct protoidmem
{
  // p_oui
  unsigned int p_oui;
  // p_proto
  unsigned short int p_proto;
  // p_name
  const char *p_name;
  // p_nxt
  struct protoidmem *p_nxt;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct recycle
{
  // next
  struct recycle *next;
};

struct reroot
{
  // list
  struct recycle *list;
  // trash
  struct recycle *trash;
  // size
  unsigned long int size;
  // logsize
  unsigned long int logsize;
  // numleft
  signed int numleft;
};

struct selector
{
  // window_color
  signed int window_color;
  // cursor_color
  signed int cursor_color;
  // LINE
  signed int LINE;
  // COL
  signed int COL;
  // LINES
  signed int LINES;
  // COLS
  signed int COLS;
  // items
  signed int items;
  // get_header
  signed int (*get_header)(char *, signed int, const void *);
  // header
  void *header;
  // get_line
  signed int (*get_line)(char *, signed int, const void *, signed int);
  // list
  void *list;
  // get_footer
  signed int (*get_footer)(char *, signed int, const void *);
  // footer
  void *footer;
  // index
  signed int index;
  // fline
  signed int fline;
  // cline
  signed int cline;
};

struct servent
{
  // s_name
  char *s_name;
  // s_aliases
  char **s_aliases;
  // s_port
  signed int s_port;
  // s_proto
  char *s_proto;
};

struct session_binder_ent
{
  // notify
  void (*notify)(void *);
  // arg
  void *arg;
  // next
  struct session_binder_ent *next;
};

struct sockaddr_storage
{
  // ss_family
  unsigned short int ss_family;
  // __ss_align
  unsigned long int __ss_align;
  // __ss_padding
  char __ss_padding[112l];
};

struct session_ent
{
  // sid
  unsigned long int sid;
  // sock
  signed int sock;
  // peer
  struct sockaddr_storage peer;
  // from
  struct sockaddr_storage from;
  // type
  enum anonymous_6 type;
  // timeout
  unsigned int timeout;
  // expire
  struct timeval expire;
  // buf
  char *buf;
  // connected
  void (*connected)(struct session_ent *);
  // read_error
  void (*read_error)(struct session_ent *, signed int);
  // read_data
  void (*read_data)(struct session_ent *, const unsigned char *, signed int);
  // cookie
  const void *cookie;
  // sb
  struct session_binder_ent *sb;
  // next
  struct session_ent *next;
};

struct sll_header
{
  // sll_pkttype
  unsigned short int sll_pkttype;
  // sll_hatype
  unsigned short int sll_hatype;
  // sll_halen
  unsigned short int sll_halen;
  // sll_addr
  unsigned char sll_addr[8l];
  // sll_protocol
  unsigned short int sll_protocol;
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

struct tcphdr
{
  // _anon0
  union anonymous_5 _anon0;
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

struct tok
{
  // v
  signed int v;
  // s
  const char *s;
};

struct udphdr
{
  // _anon0
  union anonymous_2 _anon0;
};

struct winsize
{
  // ws_row
  unsigned short int ws_row;
  // ws_col
  unsigned short int ws_col;
  // ws_xpixel
  unsigned short int ws_xpixel;
  // ws_ypixel
  unsigned short int ws_ypixel;
};


// COLORS
// file /usr/include/curses.h line 1397
extern signed int COLORS;
// COLOR_PAIRS
// file /usr/include/curses.h line 1398
extern signed int COLOR_PAIRS;
// COLS
// file /usr/include/curses.h line 1399
extern signed int COLS;
// Interfaces_help
// file help_page.c line 38
static struct help_page_entry Interfaces_help[12l] = { { .key=113, .name="   Esc", .descr="Quit the program" },
    { .key=13, .name="  Enter", .descr="Use Arrow-Keys to select Interface to show" },
    { .key=76 & 0x1f, .name="  Ctrl-L", .descr="Refresh screen from scratch" },
    { .key=114, .name="    R", .descr="Set the screen refresh-period.." },
    { .key=112, .name="    P", .descr="Set the expired data purge-period.." },
    { .key=102, .name="    F", .descr="Set the filter expression (empty to reset).." },
    { .key=47, .name="    /", .descr="To search & follow for string in the list.." },
    { .key=95 & 0x1f, .name="  Ctrl-/", .descr="Turn off search & follow mode" },
    { .key=97, .name="    A", .descr="To aggregate/summarize flows totally.." },
    { .key=82 & 0x1f, .name="  Ctrl-R", .descr="Reset all flow cache totally" },
    { .key=110, .name="    N", .descr="Toggle numeric values to names conversion" },
    { .key=0, .name=((const char *)NULL), .descr=((const char *)NULL) } };
// LINES
// file /usr/include/curses.h line 1401
extern signed int LINES;
// NetStat_help
// file help_page.c line 54
static struct help_page_entry NetStat_help[15l] = { { .key=113, .name="   Esc", .descr="Return to previous page" },
    { .key=13, .name="  Enter", .descr="Use Arrow-Keys to select Flow for detail" },
    { .key=0x0400, .name="   Left", .descr="Rotate show mode left" },
    { .key=0x0500, .name="  Right", .descr="Rotate show mode right" },
    { .key=9, .name="   Tab", .descr="Move cursor to backflow if any" },
    { .key=76 & 0x1f, .name="  Ctrl-L", .descr="Refresh screen from scratch" },
    { .key=114, .name="    R", .descr="Set the screen refresh-period.." },
    { .key=112, .name="    P", .descr="Set the expired data purge-period.." },
    { .key=102, .name="    F", .descr="Set the filter expression (empty to reset).." },
    { .key=47, .name="    /", .descr="To search & follow for string in the list.." },
    { .key=95 & 0x1f, .name="  Ctrl-/", .descr="Turn off search & follow mode" },
    { .key=97, .name="    A", .descr="To aggregate/summarize flows in the list.." },
    { .key=82 & 0x1f, .name="  Ctrl-R", .descr="Reset flow cache on the Interface" },
    { .key=110, .name="    N", .descr="Toggle numeric values to names conversion" },
    { .key=0, .name=((const char *)NULL), .descr=((const char *)NULL) } };
// Oflag
// file trafshow.c line 85
signed int Oflag = 1;
// acs_map
// file /usr/include/curses.h line 274
extern unsigned long int acs_map[];
// aggregate
// file trafshow.c line 78
signed int aggregate = -1;
// barlen
// file getkey.c line 50
static signed int barlen;
// bartop
// file getkey.c line 50
static signed int bartop;
// buf_size
// file getkey.c line 50
static signed int buf_size;
// bytestringtable
// file addrtoname.c line 134
struct enamemem bytestringtable[4096l];
// char_set
// file getkey.c line 49
static const char *char_set;
// cisco_netflow_dump
// file show_dump.c line 48
const char *cisco_netflow_dump = ((const char *)NULL);
// color_conf
// file trafshow.c line 75
const char *color_conf = ((const char *)NULL);
// color_mask
// file colormask.c line 54
static struct cm_entry *color_mask = (struct cm_entry *)(void *)0;
// compiled
// file version.c line 4
char compiled[178l] = { 'g', 'c', 'c', ' ', '-', 'W', 'd', 'a', 't', 'e', '-', 't', 'i', 'm', 'e', ' ', ' ', '-', 'g', ' ', '-', 'O', '0', ' ', '-', 'f', 's', 't', 'a', 'c', 'k', '-', 'p', 'r', 'o', 't', 'e', 'c', 't', 'o', 'r', '-', 's', 't', 'r', 'o', 'n', 'g', ' ', '-', 'W', 'f', 'o', 'r', 'm', 'a', 't', ' ', '-', 'W', 'e', 'r', 'r', 'o', 'r', '=', 'f', 'o', 'r', 'm', 'a', 't', '-', 's', 'e', 'c', 'u', 'r', 'i', 't', 'y', ' ', ' ', '-', 'O', '0', ' ', '-', 'W', 'l', ',', '-', 'z', ',', 'r', 'e', 'l', 'r', 'o', ' ', '-', 'W', 'a', 'l', 'l', ' ', '-', 'I', '.', ' ', '-', 'D', 'H', 'A', 'V', 'E', '_', 'C', 'O', 'N', 'F', 'I', 'G', '_', 'H', ' ', '-', 'p', 't', 'h', 'r', 'e', 'a', 'd', ' ', '-', 'l', 'n', 'c', 'u', 'r', 's', 'e', 's', ' ', '-', 'l', 't', 'e', 'r', 'm', 'c', 'a', 'p', ' ', '-', 'l', 'p', 'c', 'a', 'p', ' ', '-', 'l', 'n', 's', 'l', ' ', '-', 'l', 'r', 'e', 's', 'o', 'l', 'v', ' ', 0 };
// copyright
// file trafshow.c line 56
char copyright[57l] = { 'C', 'o', 'p', 'y', 'r', 'i', 'g', 'h', 't', ' ', '(', 'c', ')', ' ', '1', '9', '9', '3', '-', '2', '0', '0', '6', ' ', 'R', 'i', 'n', 'e', 't', ' ', 'C', 'o', 'r', 'p', '.', ',', ' ', 'N', 'o', 'v', 'o', 's', 'i', 'b', 'i', 'r', 's', 'k', ',', ' ', 'R', 'u', 's', 's', 'i', 'a', 0 };
// cur
// file getkey.c line 50
static signed int cur;
// curs_dock_x
// file screen.c line 153
static signed int curs_dock_x = 0;
// curs_dock_y
// file screen.c line 153
static signed int curs_dock_y = 0;
// cut_buf
// file getkey.c line 48
static char cut_buf[512l];
// dnaddrtable
// file addrtoname.c line 104
struct hnamemem dnaddrtable[4096l];
// dump_file
// file show_dump.c line 49
const char *dump_file = ((const char *)NULL);
// dump_match
// file show_dump.c line 47
struct netstat *dump_match = ((struct netstat *)NULL);
// enametable
// file addrtoname.c line 132
struct enamemem enametable[4096l];
// etherlist
// file addrtoname.c line 842
static struct etherlist etherlist[3l] = { { .addr={ (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00 }, .name="ethernet" },
    { .addr={ (const unsigned char)0xff, (const unsigned char)0xff, (const unsigned char)0xff, (const unsigned char)0xff, (const unsigned char)0xff, (const unsigned char)0xff }, .name="broadcast" },
    { .addr={ (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00 }, .name=(const char *)(void *)0 } };
// ethertype_db
// file addrtoname.c line 743
static struct tok ethertype_db[31l] = { { .v=0x0800, .s="ip" }, { .v=0x8847, .s="mpls" }, { .v=0x8848, .s="mpls-mc" }, { .v=0x86dd, .s="ipv6" }, { .v=0x8100, .s="dot1q" }, { .v=0x9100, .s="vman" }, { .v=0x0200, .s="pup" }, { .v=0x0806, .s="arp" }, { .v=0x8035, .s="rarp" }, { .v=0x0600, .s="ns" }, { .v=0x0500, .s="sprite" }, { .v=0x1000, .s="trail" }, { .v=0x2000, .s="cdp" }, { .v=0x6001, .s="mop-dl" }, { .v=0x6002, .s="mop-rc" }, { .v=0x6003, .s="dn" }, { .v=0x6004, .s="lat" }, { .v=0x6007, .s="sca" }, { .v=0x8038, .s="lanbridge" }, { .v=0x803c, .s="dec-dns" }, { .v=0x803e, .s="dec-dts" }, { .v=0x805b, .s="vexp" }, { .v=0x805c, .s="vprod" }, { .v=0x809b, .s="atalk" }, { .v=0x80F3, .s="atalk-arp" }, { .v=0x8137, .s="ipx" }, { .v=0x880b, .s="ppp" }, { .v=0x8863, .s="pppoe-d" }, { .v=0x8864, .s="pppoe-s" }, { .v=0x9000, .s="loopback" }, { .v=0, .s=(const char *)(void *)0 } };
// etypetable
// file addrtoname.c line 103
struct hnamemem etypetable[4096l];
// expression
// file trafshow.c line 76
char *expression = ((char *)NULL);
// file_netflow
// file show_dump.c line 63
static struct _IO_FILE *file_netflow = ((struct _IO_FILE *)NULL);
// file_pcap
// file show_dump.c line 62
static struct pcap *file_pcap = ((struct pcap *)NULL);
// first_event
// file events.c line 24
static struct event_ent *first_event = ((struct event_ent *)NULL);
// first_session
// file session.c line 49
static struct session_ent *first_session = ((struct session_ent *)NULL);
// first_transact
// file domain_resolver.c line 83
static struct domain_transact_ent *first_transact = ((struct domain_transact_ent *)NULL);
// help_mode
// file help_page.c line 30
static enum anonymous_13 help_mode = (enum anonymous_13)HelpPage;
// hex
// file addrtoname.c line 319
static char hex[17l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 0 };
// hnametable
// file addrtoname.c line 98
struct hnamemem hnametable[4096l];
// hostname
// file trafshow.c line 74
const char *hostname;
// icmp_db
// file addrtoname.c line 1223
static struct tok icmp_db[37l] = { { .v=0x0000, .s="echo-reply" }, { .v=0x0300, .s="unrch-net" }, { .v=0x0301, .s="unrch-host" }, { .v=0x0302, .s="unrch-proto" }, { .v=0x0303, .s="unrch-port" }, { .v=0x0304, .s="need-frag" }, { .v=0x0305, .s="src-fail" }, { .v=0x0306, .s="bad-net" }, { .v=0x0307, .s="bad-host" }, { .v=0x0308, .s="isolated" }, { .v=0x0309, .s="net-prhbt" }, { .v=0x030a, .s="host-prhbt" }, { .v=0x030b, .s="bad-ntos" }, { .v=0x030c, .s="bad-htos" }, { .v=0x030d, .s="filtered" }, { .v=0x030e, .s="no-prec" }, { .v=0x030f, .s="prec-cut" }, { .v=0x0400, .s="quench" }, { .v=0x0500, .s="redir-net" }, { .v=0x0501, .s="redir-hst" }, { .v=0x0502, .s="redir-ntos" }, { .v=0x0503, .s="redir-htos" }, { .v=0x0800, .s="echo-reqst" }, { .v=0x0900, .s="advert" }, { .v=0x0a00, .s="solicit" }, { .v=0x0b00, .s="ttl-exceed" }, { .v=0x0b01, .s="frg-exceed" }, { .v=0x0c00, .s="err-atptr" }, { .v=0x0c01, .s="optabsent" }, { .v=0x0c02, .s="bad-len" }, { .v=0x0d00, .s="time-reqst" }, { .v=0x0e00, .s="time-reply" }, { .v=0x0f00, .s="info-reqst" }, { .v=0x1000, .s="info-reply" }, { .v=0x1100, .s="mask-reqst" }, { .v=0x1200, .s="mask-reply" }, { .v=0, .s=(const char *)(void *)0 } };
// icmptable
// file addrtoname.c line 107
struct hnamemem icmptable[4096l];
// iprototable
// file addrtoname.c line 102
struct hnamemem iprototable[4096l];
// ipxsap_db
// file addrtoname.c line 951
static struct tok ipxsap_db[214l] = { { .v=0x0000, .s="Unknown" }, { .v=0x0001, .s="User" }, { .v=0x0002, .s="User Group" }, { .v=0x0003, .s="PrintQueue" }, { .v=0x0004, .s="FileServer" }, { .v=0x0005, .s="JobServer" }, { .v=0x0006, .s="Gateway" }, { .v=0x0007, .s="PrintServer" }, { .v=0x0008, .s="ArchiveQueue" }, { .v=0x0009, .s="ArchiveServer" }, { .v=0x000a, .s="JobQueue" }, { .v=0x000b, .s="Administration" }, { .v=0x000F, .s="Novell TI-RPC" }, { .v=0x0017, .s="Diagnostics" }, { .v=0x0020, .s="NetBIOS" }, { .v=0x0021, .s="NAS SNA Gateway" }, { .v=0x0023, .s="NACS AsyncGateway" }, { .v=0x0024, .s="RemoteBridge/RoutingService" },
    { .v=0x0026, .s="BridgeServer" }, { .v=0x0027, .s="TCP/IP Gateway" }, { .v=0x0028, .s="Point-to-point X.25 BridgeServer" },
    { .v=0x0029, .s="3270 Gateway" }, { .v=0x002a, .s="CHI Corp" }, { .v=0x002c, .s="PC Chalkboard" }, { .v=0x002d, .s="TimeSynchServer" }, { .v=0x002e, .s="ARCserve5.0/PalindromeBackup" },
    { .v=0x0045, .s="DI3270 Gateway" }, { .v=0x0047, .s="AdvertisingPrintServer" },
    { .v=0x004a, .s="NetBlazerModems" }, { .v=0x004b, .s="BtrieveVAP" }, { .v=0x004c, .s="NetwareSQL" }, { .v=0x004d, .s="XtreeNetwork" }, { .v=0x0050, .s="BtrieveVAP4.11" }, { .v=0x0052, .s="QuickLink" }, { .v=0x0053, .s="PrintQueueUser" }, { .v=0x0058, .s="Multipoint X.25 Router" },
    { .v=0x0060, .s="STLB/NLM" }, { .v=0x0064, .s="ARCserve" }, { .v=0x0066, .s="ARCserve3.0" }, { .v=0x0072, .s="WAN CopyUtility" }, { .v=0x007a, .s="TES-NetwareVMS" }, { .v=0x0092, .s="WATCOM Debugger/EmeraldTapeBackupServer" },
    { .v=0x0095, .s="DDA OBGYN" }, { .v=0x0098, .s="NetwareAccessServer" },
    { .v=0x009a, .s="Netware for VMS II/NamedPipeServer" },
    { .v=0x009b, .s="NetwareAccessServer" },
    { .v=0x009e, .s="PortableNetwareServer/SunLinkNVT" },
    { .v=0x00a1, .s="PowerchuteAPC UPS" }, { .v=0x00aa, .s="LAWserve" }, { .v=0x00ac, .s="CompaqIDA StatusMonitor" },
    { .v=0x0100, .s="PIPE STAIL" }, { .v=0x0102, .s="LAN ProtectBindery" }, { .v=0x0103, .s="OracleDataBaseServer" },
    { .v=0x0107, .s="Netware386/RSPX RemoteConsole" },
    { .v=0x010f, .s="NovellSNA Gateway" }, { .v=0x0111, .s="TestServer" }, { .v=0x0112, .s="HP PrintServer" }, { .v=0x0114, .s="CSA MUX" }, { .v=0x0115, .s="CSA LCA" }, { .v=0x0116, .s="CSA CM" }, { .v=0x0117, .s="CSA SMA" }, { .v=0x0118, .s="CSA DBA" }, { .v=0x0119, .s="CSA NMA" }, { .v=0x011a, .s="CSA SSA" }, { .v=0x011b, .s="CSA STATUS" }, { .v=0x011e, .s="CSA APPC" }, { .v=0x0126, .s="SNA TEST SSA Profile" },
    { .v=0x012a, .s="CSA TRACE" }, { .v=0x012b, .s="NetwareSAA" }, { .v=0x012e, .s="IKARUS VirusScan" }, { .v=0x0130, .s="CommunicationsExecutive" },
    { .v=0x0133, .s="NNS DomainServer/NetwareNamingServicesDomain" },
    { .v=0x0135, .s="NetwareNamingServicesProfile" },
    { .v=0x0137, .s="Netware386 PrintQueue/NNS PrintQueue" },
    { .v=0x0141, .s="LAN SpoolServer" }, { .v=0x0152, .s="IRMALAN Gateway" }, { .v=0x0154, .s="NamedPipeServer" }, { .v=0x0166, .s="NetWareManagement" }, { .v=0x0168, .s="Intel PICKIT CommServer/Intel CAS TalkServer" },
    { .v=0x0173, .s="Compaq" }, { .v=0x0174, .s="Compaq SNMP Agent" }, { .v=0x0175, .s="Compaq" }, { .v=0x0180, .s="XTreeServer/XTreeTools" },
    { .v=0x018A, .s="NASI ServicesBroadcastServer" },
    { .v=0x01b0, .s="GARP Gateway" }, { .v=0x01b1, .s="Binfview" }, { .v=0x01bf, .s="IntelLanDeskManager" },
    { .v=0x01ca, .s="AXTEC" }, { .v=0x01cb, .s="ShivaNetModem/E" }, { .v=0x01cc, .s="ShivaLanRover/E" }, { .v=0x01cd, .s="ShivaLanRover/T" }, { .v=0x01ce, .s="ShivaUniversal" }, { .v=0x01d8, .s="CastelleFAXPressServer" },
    { .v=0x01da, .s="CastelleLANPressPrintServer" },
    { .v=0x01dc, .s="CastelleFAX/Xerox7033 FaxServer/ExcelLanFax" },
    { .v=0x01f0, .s="LEGATO" }, { .v=0x01f5, .s="LEGATO" }, { .v=0x0233, .s="NMS Agent/NetwareManagementAgent" },
    { .v=0x0237, .s="NMS IPX Discovery/LANternReadWriteChannel" },
    { .v=0x0238, .s="NMS IP Discovery/LANternTrapAlarmChannel" },
    { .v=0x023a, .s="LANtern" }, { .v=0x023c, .s="MAVERICK" }, { .v=0x023f, .s="NovellSMDR" }, { .v=0x024e, .s="NetwareConnect" }, { .v=0x024f, .s="NASI ServerBroadcast Cisco" },
    { .v=0x026a, .s="NMS ServiceConsole" }, { .v=0x026b, .s="TimeSynchronizationServer Netware 4.x" },
    { .v=0x0278, .s="DirectoryServer Netware 4.x" },
    { .v=0x027b, .s="NetwareManagementAgent" },
    { .v=0x0280, .s="Novell File and Printer Sharing Service for PC" },
    { .v=0x0304, .s="NovellSAA Gateway" }, { .v=0x0308, .s="COM/VERMED" }, { .v=0x030a, .s="GalacticommWorldgroupServer" },
    { .v=0x030c, .s="IntelNetport2/HP JetDirect/HP Quicksilver" },
    { .v=0x0320, .s="AttachmateGateway" }, { .v=0x0327, .s="MicrosoftDiagnostiocs" },
    { .v=0x0328, .s="WATCOM SQL Server" }, { .v=0x0335, .s="MultiTechSystems MultisynchCommServer" },
    { .v=0x0343, .s="Xylogics RemoteAccessServer/LANModem" },
    { .v=0x0355, .s="ArcadaBackupExec" }, { .v=0x0358, .s="MSLCD1" }, { .v=0x0361, .s="NETINELO" }, { .v=0x037e, .s="Powerchute UPS Monitoring" },
    { .v=0x037f, .s="ViruSafeNotify" }, { .v=0x0386, .s="HP Bridge" }, { .v=0x0387, .s="HP Hub" }, { .v=0x0394, .s="NetWare SAA Gateway" },
    { .v=0x039b, .s="LotusNotes" }, { .v=0x03b7, .s="CertusAntiVirus" }, { .v=0x03c4, .s="ARCserve4.0" }, { .v=0x03c7, .s="LANspool3.5" }, { .v=0x03d7, .s="LexmarkPrinterServer" },
    { .v=0x03d8, .s="LexmarkXLE PrinterServer" },
    { .v=0x03dd, .s="BanyanENS NetwareClient" },
    { .v=0x03de, .s="GuptaSequelBaseServer/NetWareSQL" },
    { .v=0x03e1, .s="UnivelUnixware" }, { .v=0x03e4, .s="UnivelUnixware" }, { .v=0x03fc, .s="IntelNetport" }, { .v=0x03fd, .s="PrintServerQueue" }, { .v=0x040A, .s="ipnServer" }, { .v=0x040D, .s="LVERRMAN" }, { .v=0x040E, .s="LVLIC" }, { .v=0x0414, .s="NET Silicon (DPI)/Kyocera" },
    { .v=0x0429, .s="SiteLockVirus" }, { .v=0x0432, .s="UFHELPR???" }, { .v=0x0433, .s="Synoptics281xAdvancedSNMPAgent" },
    { .v=0x0444, .s="MicrosoftNT SNA Server" },
    { .v=0x0448, .s="Oracle" }, { .v=0x044c, .s="ARCserve5.01" }, { .v=0x0457, .s="CanonGP55" }, { .v=0x045a, .s="QMS Printers" }, { .v=0x045b, .s="DellSCSI Array" }, { .v=0x0491, .s="NetBlazerModems" }, { .v=0x04ac, .s="OnTimeScheduler" }, { .v=0x04b0, .s="CD-Net" }, { .v=0x0513, .s="EmulexNQA" }, { .v=0x0520, .s="SiteLockChecks" }, { .v=0x0529, .s="SiteLockChecks" }, { .v=0x052d, .s="CitrixOS2 AppServer" },
    { .v=0x0535, .s="Tektronix" }, { .v=0x0536, .s="Milan" }, { .v=0x055d, .s="Attachmate SNA gateway" },
    { .v=0x056b, .s="IBM8235 ModemServer" },
    { .v=0x056c, .s="ShivaLanRover/E PLUS" },
    { .v=0x056d, .s="ShivaLanRover/T PLUS" },
    { .v=0x0580, .s="McAfeeNetShield" }, { .v=0x05B8, .s="NLM to workstation communication (Revelation Software)" },
    { .v=0x05BA, .s="CompatibleSystemsRouters" },
    { .v=0x05BE, .s="CheyenneHierarchicalStorageManager" },
    { .v=0x0606, .s="JCWatermarkImaging" }, { .v=0x060c, .s="AXISNetworkPrinter" }, { .v=0x0610, .s="AdaptecSCSIManagement" },
    { .v=0x0621, .s="IBM AntiVirus" }, { .v=0x0640, .s="Windows95 RemoteRegistryService" },
    { .v=0x064e, .s="MicrosoftIIS" }, { .v=0x067b, .s="Microsoft Win95/98 File and Print Sharing for NetWare" },
    { .v=0x067c, .s="Microsoft Win95/98 File and Print Sharing for NetWare" },
    { .v=0x076C, .s="Xerox" }, { .v=0x079b, .s="ShivaLanRover/E 115" },
    { .v=0x079c, .s="ShivaLanRover/T 115" },
    { .v=0x07B4, .s="CubixWorldDesk" }, { .v=0x07c2, .s="Quarterdeck IWare Connect V2.x NLM" },
    { .v=0x07c1, .s="Quarterdeck IWare Connect V3.x NLM" },
    { .v=0x0810, .s="ELAN License Server Demo" },
    { .v=0x0824, .s="ShivaLanRoverAccessSwitch/E" },
    { .v=0x086a, .s="ISSC Collector" }, { .v=0x087f, .s="ISSC DAS AgentAIX" }, { .v=0x0880, .s="Intel Netport PRO" }, { .v=0x0881, .s="Intel Netport PRO" }, { .v=0x0b29, .s="SiteLock" }, { .v=0x0c29, .s="SiteLockApplications" },
    { .v=0x0c2c, .s="LicensingServer" }, { .v=0x2101, .s="PerformanceTechnologyInstantInternet" },
    { .v=0x2380, .s="LAI SiteLock" }, { .v=0x238c, .s="MeetingMaker" }, { .v=0x4808, .s="SiteLockServer/SiteLockMetering" },
    { .v=0x5555, .s="SiteLockUser" }, { .v=0x6312, .s="Tapeware" }, { .v=0x6f00, .s="RabbitGateway" }, { .v=0x7703, .s="MODEM" }, { .v=0x8002, .s="NetPortPrinters" }, { .v=0x8008, .s="WordPerfectNetworkVersion" },
    { .v=0x85BE, .s="Cisco EIGRP" }, { .v=0x8888, .s="WordPerfectNetworkVersion/QuickNetworkManagement" },
    { .v=0x9000, .s="McAfeeNetShield" }, { .v=0x9604, .s="CSA-NT_MON" }, { .v=0xb6a8, .s="OceanIsleReachoutRemoteControl" },
    { .v=0xf11f, .s="SiteLockMetering" }, { .v=0xf1ff, .s="SiteLock" }, { .v=0xf503, .s="Microsoft SQL Server" },
    { .v=0xF905, .s="IBM TimeAndPlace" }, { .v=0xfbfb, .s="TopCallIII FaxServer" },
    { .v=0xffff, .s="AnyService/Wildcard" },
    { .v=0, .s=(char *)0 } };
// ipxsaptable
// file addrtoname.c line 106
struct hnamemem ipxsaptable[4096l];
// line_factor
// file screen.c line 42
double line_factor = (double)1;
// live_dump
// file show_dump.c line 60
static struct pcap_dumper *live_dump = ((struct pcap_dumper *)NULL);
// live_pcap
// file show_dump.c line 59
static struct pcap *live_pcap = ((struct pcap *)NULL);
// live_pcap_thr
// file show_dump.c line 61
static unsigned long int *live_pcap_thr = ((unsigned long int *)NULL);
// llcsap_db
// file addrtoname.c line 902
static struct tok llcsap_db[28l] = { { .v=0x00, .s="null" }, { .v=0x02, .s="isap" }, { .v=0x03, .s="gsap" }, { .v=0x06, .s="ip-sap" }, { .v=0x0e, .s="proway-nm" }, { .v=0x42, .s="stp" }, { .v=0x4e, .s="rs511" }, { .v=0x5e, .s="isi-ip" }, { .v=0x7e, .s="x25-plp" }, { .v=0x80, .s="3com" }, { .v=0x8e, .s="proway" }, { .v=0xaa, .s="snap" }, { .v=0xbc, .s="banyan" }, { .v=0xe0, .s="ipx" }, { .v=0xf0, .s="netbeui" }, { .v=0xf4, .s="lanman" }, { .v=0xfe, .s="iso-clns" }, { .v=0xff, .s="raw-ipx" }, { .v=0x04, .s="isna" }, { .v=0x05, .s="gsna" }, { .v=0xd4, .s="resource" }, { .v=0xdc, .s="dyn-arp" }, { .v=0xf0, .s="netbios" }, { .v=0xf8, .s="irpl" }, { .v=0xf4, .s="ilan" }, { .v=0xf5, .s="glan" }, { .v=0xfc, .s="discovery" }, { .v=0, .s=(const char *)(void *)0 } };
// llcsaptable
// file addrtoname.c line 105
struct hnamemem llcsaptable[4096l];
// n_masks
// file colormask.c line 55
static signed int n_masks = 0;
// n_pairs
// file colormask.c line 56
static signed int n_pairs = 0;
// nb
// file getkey.c line 50
static signed int nb;
// nflag
// file trafshow.c line 86
signed int nflag = 0;
// nsaptable
// file addrtoname.c line 133
struct enamemem nsaptable[4096l];
// numbers
// file getkey.c line 46
static const char *numbers = "1234567890";
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opterr
// file /usr/include/getopt.h line 76
extern signed int opterr;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// package
// file version.c line 1
char package[9l] = { 't', 'r', 'a', 'f', 's', 'h', 'o', 'w', 0 };
// pcap_version
// file trafshow.c line 814 function vers
extern char pcap_version[];
// popbackflow
// file trafshow.c line 79
signed int popbackflow = 0;
// primary
// file domain_resolver.c line 50
static struct sockaddr_in *primary = ((struct sockaddr_in *)NULL);
// progname
// file trafshow.c line 73
const char *progname;
// promisc
// file trafshow.c line 84
signed int promisc = 1;
// prompt_buf
// file getkey.c line 48
static char prompt_buf[512l];
// prompt_mode
// file screen.c line 41
signed int prompt_mode = 0;
// protoidlist
// file addrtoname.c line 797
static struct protoidlist protoidlist[6l] = { { .protoid={ (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x0c, (const unsigned char)0x01, (const unsigned char)0x07 }, .name="CiscoMLS" },
    { .protoid={ (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x0c, (const unsigned char)0x20, (const unsigned char)0x00 }, .name="CiscoCDP" },
    { .protoid={ (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x0c, (const unsigned char)0x20, (const unsigned char)0x01 }, .name="CiscoCGMP" },
    { .protoid={ (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x0c, (const unsigned char)0x20, (const unsigned char)0x03 }, .name="CiscoVTP" },
    { .protoid={ (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0x2b, (const unsigned char)0x00, (const unsigned char)0xbb }, .name="ExtremeEDP" },
    { .protoid={ (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00 }, .name=(const char *)(void *)0 } };
// protoidtable
// file addrtoname.c line 143
struct protoidmem protoidtable[4096l];
// purge_time
// file trafshow.c line 81
signed int purge_time = 10;
// rc_file
// file colormask.c line 57
static const char *rc_file = ((const char *)NULL);
// rc_line
// file colormask.c line 58
static signed int rc_line;
// redraw_lines
// file show_dump.c line 64
static signed int redraw_lines = 0;
// refresh_time
// file trafshow.c line 80
signed int refresh_time = 2;
// resize_pending
// file trafshow.c line 71
static signed int resize_pending = 0;
// scr
// file getkey.c line 50
static signed int scr;
// search
// file trafshow.c line 77
char *search = ((char *)NULL);
// secondary
// file domain_resolver.c line 50
static struct sockaddr_in *secondary = ((struct sockaddr_in *)NULL);
// servtable
// file addrtoname.c line 101
struct hnamemem servtable[4096l];
// show_mode
// file trafshow.c line 82
enum anonymous_13 show_mode = (enum anonymous_13)Interfaces;
// show_stat_mode
// file show_stat.c line 31
enum anonymous show_stat_mode = (enum anonymous)Size;
// show_win
// file getkey.c line 50
static signed int show_win;
// spaces
// file getkey.c line 47
static const char *spaces = " ,.;@/\\";
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdscr
// file /usr/include/curses.h line 1395
extern struct _win_st *stdscr;
// target
// file version.c line 3
char target[20l] = { 'x', '8', '6', '_', '6', '4', '-', 'p', 'c', '-', 'l', 'i', 'n', 'u', 'x', '-', 'g', 'n', 'u', 0 };
// touch
// file getkey.c line 50
static signed int touch;
// tporttable
// file addrtoname.c line 99
struct hnamemem tporttable[4096l];
// uporttable
// file addrtoname.c line 100
struct hnamemem uporttable[4096l];
// use_colors
// file screen.c line 40
signed int use_colors = 0;
// version
// file version.c line 2
char version[6l] = { '5', '.', '2', '.', '3', 0 };
// win
// file getkey.c line 50
static signed int win;

// add_colormask
// file colormask.c line 109
static signed int add_colormask(const char *s, struct cm_entry *m)
{
  signed int i;
  signed int attr = 0;
  signed short int fc;
  signed short int bc;
  char f[100l];
  char *b;
  char *return_value_strcpy_2;
  return_value_strcpy_2=strcpy(f, s);
  b=strchr(return_value_strcpy_2, 58);
  char *tmp_post_1;
  if(!(b == ((char *)NULL)))
  {
    tmp_post_1 = b;
    b = b + 1l;
    *tmp_post_1 = (char)0;
  }

  signed int return_value_strcasecmp_3;
  static signed short int fc_def = (signed short int)-1;
  static char *ctab[8l] = { "black", "red", "green", "yellow", "blue", "magenta", "cyan", "white" };
  if(!(f[0l] == 0))
  {
    i = 0;
    for( ; !(i >= 8); i = i + 1)
    {
      return_value_strcasecmp_3=strcasecmp(ctab[(signed long int)i], f);
      if(return_value_strcasecmp_3 == 0)
        break;

    }
    if(!(i >= 8))
      fc = (signed short int)i;

    else
    {
      signed int return_value_atoi_4;
      return_value_atoi_4=atoi(f);
      fc = (signed short int)return_value_atoi_4;
      if(!(COLORS >= (signed int)fc) || !((signed int)fc >= 1))
      {
        fprintf(stderr, "%s: line %d: Unknown color `%s'\n", rc_file, rc_line, (const void *)f);
        return -1;
      }

    }
    const unsigned short int **return_value___ctype_b_loc_5;
    return_value___ctype_b_loc_5=__ctype_b_loc();
    if(!((256 & (signed int)(*return_value___ctype_b_loc_5)[(signed long int)(signed int)f[0l]]) == 0))
      attr = attr | (signed int)((unsigned long int)1UL << 13 + 8);

  }

  else
    fc = fc_def;
  _Bool tmp_if_expr_9;
  if(!(b == ((char *)NULL)))
    tmp_if_expr_9 = *b != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_9 = (_Bool)0;
  signed int return_value_strcasecmp_6;
  static signed short int bc_def = (signed short int)-1;
  if(tmp_if_expr_9)
  {
    i = 0;
    for( ; !(i >= 8); i = i + 1)
    {
      return_value_strcasecmp_6=strcasecmp(ctab[(signed long int)i], b);
      if(return_value_strcasecmp_6 == 0)
        break;

    }
    if(!(i >= 8))
      bc = (signed short int)i;

    else
    {
      signed int return_value_atoi_7;
      return_value_atoi_7=atoi(b);
      bc = (signed short int)return_value_atoi_7;
      if(!(COLORS >= (signed int)bc) || !((signed int)bc >= 1))
      {
        fprintf(stderr, "%s: line %d: Unknown color `%s'\n", rc_file, rc_line, b);
        return -1;
      }

    }
    const unsigned short int **return_value___ctype_b_loc_8;
    return_value___ctype_b_loc_8=__ctype_b_loc();
    if(!((256 & (signed int)(*return_value___ctype_b_loc_8)[(signed long int)(signed int)*b]) == 0))
      attr = attr | (signed int)((unsigned long int)1UL << 11 + 8);

  }

  else
    bc = bc_def;
  if(!(m == ((struct cm_entry *)NULL)))
  {
    n_masks = n_masks + 1;
    void *return_value_realloc_10;
    return_value_realloc_10=realloc((void *)color_mask, (unsigned long int)n_masks * sizeof(struct cm_entry) /*36ul*/ );
    color_mask = (struct cm_entry *)return_value_realloc_10;
    if(color_mask == ((struct cm_entry *)NULL))
    {
      fprintf(stderr, "add_colormask: realloc: Out of memory?\n");
      return -1;
    }

    m->pair=findpair(fc, bc, attr);
    if((signed int)m->pair == 0)
    {
      n_pairs = n_pairs + 1;
      if(!(n_pairs >= COLOR_PAIRS + -1))
        init_pair((signed short int)n_pairs, fc, bc);

      else
      {
        fprintf(stderr, "%s: line %d: Max %d color-pairs can be used\n", rc_file, rc_line, COLOR_PAIRS - 1);
        return -1;
      }
      m->pair = (signed short int)n_pairs;
    }

    m->attr = attr;
    memcpy((void *)(color_mask + (signed long int)(n_masks - 1)), (const void *)m, sizeof(struct cm_entry) /*36ul*/ );
  }

  else
  {
    init_pair((signed short int)(COLOR_PAIRS - 1), fc, bc);
    wbkgd(stdscr, (unsigned long int)(COLOR_PAIRS - 1) << 0 + 8 | (unsigned long int)attr);
    fc_def = fc;
    bc_def = bc;
  }
  return 0;
}

// add_event
// file events.h line 62
signed int add_event(struct timeval *tvp, void (*func)(void *), void *arg)
{
  struct event_ent *ep;
  struct event_ent *prev = ((struct event_ent *)NULL);
  struct event_ent *next = ((struct event_ent *)NULL);
  struct timeval now;
  struct timeval gap;
  if(tvp == ((struct timeval *)NULL))
  {
    gettimeofday(&now, ((struct timezone *)NULL));
    gap.tv_sec = (signed long int)0;
    gap.tv_usec = 250000L;
    tv_add(&gap, &now);
    tvp = &gap;
  }

  ep = first_event;
  for( ; !(ep == ((struct event_ent *)NULL)); ep = ep->next)
    if(ep->func == func)
    {
      if(ep->arg == arg)
      {
        ep->tv = *tvp;
        return 0;
      }

    }

  ep = first_event;
  for( ; !(ep == ((struct event_ent *)NULL)); ep = ep->next)
  {
    if(ep->func == ((void (*)(void *))NULL))
    {
      next = ep->next;
      break;
    }

    prev = ep;
  }
  void *return_value_malloc_1;
  if(ep == ((struct event_ent *)NULL))
  {
    return_value_malloc_1=malloc(sizeof(struct event_ent) /*40ul*/ );
    ep = (struct event_ent *)return_value_malloc_1;
    if(!(ep == ((struct event_ent *)NULL)))
      goto __CPROVER_DUMP_L8;

    return -1;
  }

  else
  {

  __CPROVER_DUMP_L8:
    ;
    memset((void *)ep, 0, sizeof(struct event_ent) /*40ul*/ );
    ep->tv = *tvp;
    ep->func = func;
    ep->arg = arg;
    if(!(next == ((struct event_ent *)NULL)))
      ep->next = next;

    else
      if(!(prev == ((struct event_ent *)NULL)))
        prev->next = ep;

    if(first_event == ((struct event_ent *)NULL))
      first_event = ep;

    return 0;
  }
}

// build_filter_expr
// file show_dump.c line 407
static char * build_filter_expr(char *dst, signed int size, const struct netstat *ns)
{
  char src_addr[100l];
  char dst_addr[100l];
  src_addr[(signed long int)0] = (char)0;
  dst_addr[(signed long int)0] = (char)0;
  if((signed int)ns->ns_hdr.in_hdr.ver == 4)
  {
    const char *return_value_intoa_1;
    return_value_intoa_1=intoa(ns->ns_hdr.in_hdr.src.ipaddr.ipa4.s_addr);
    strcpy(src_addr, return_value_intoa_1);
    const char *return_value_intoa_2;
    return_value_intoa_2=intoa(ns->ns_hdr.in_hdr.dst.ipaddr.ipa4.s_addr);
    strcpy(dst_addr, return_value_intoa_2);
  }

  else
    if(!(ns->ns_hdr.en_hdr.type == 0))
    {
      const char *return_value_etheraddr_string_3;
      return_value_etheraddr_string_3=etheraddr_string(ns->ns_hdr.en_hdr.src);
      strcpy(src_addr, return_value_etheraddr_string_3);
      const char *return_value_etheraddr_string_4;
      return_value_etheraddr_string_4=etheraddr_string(ns->ns_hdr.en_hdr.dst);
      strcpy(dst_addr, return_value_etheraddr_string_4);
    }

  _Bool tmp_if_expr_5;
  if((signed int)src_addr[0l] == 0)
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = (signed int)dst_addr[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
  signed int return_value_strcmp_6;
  _Bool tmp_if_expr_8;
  signed int return_value_strcmp_7;
  if(tmp_if_expr_5)
    return ((char *)NULL);

  else
  {
    if(!(ns->ns_hdr.in_hdr.ver == 0))
      snprintf(dst, (unsigned long int)size, "src %s and dst %s", (const void *)src_addr, (const void *)dst_addr);

    else
    {
      return_value_strcmp_6=strcmp(dst_addr, "broadcast");
      if(return_value_strcmp_6 == 0)
        tmp_if_expr_8 = (_Bool)1;

      else
      {
        return_value_strcmp_7=strcmp(dst_addr, "multicast");
        tmp_if_expr_8 = !(return_value_strcmp_7 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_8)
        snprintf(dst, (unsigned long int)size, "ether src %s and ether %s", (const void *)src_addr, (const void *)dst_addr);

      else
        snprintf(dst, (unsigned long int)size, "ether src %s and ether dst %s", (const void *)src_addr, (const void *)dst_addr);
    }
    return dst;
  }
}

// catch_signals
// file trafshow.c line 269
static void * catch_signals(void *arg)
{
  struct anonymous_29 sigset;
  signed int sig;
  do
  {
    sigset = *((struct anonymous_29 *)arg);
    signed int return_value_sigwait_1;
    return_value_sigwait_1=sigwait(&sigset, &sig);
    if(!(return_value_sigwait_1 == 0))
      break;

    if(sig == 28)
      resize_pending = resize_pending + 1;

  }
  while((_Bool)1);
  return NULL;
}

// change_event
// file events.c line 264
signed int change_event(void (*func)(void *), void *arg, void *new_arg)
{
  signed int found = 0;
  struct event_ent *ep = first_event;
  _Bool tmp_if_expr_1;
  for( ; !(ep == ((struct event_ent *)NULL)); ep = ep->next)
  {
    if(func == ((void (*)(void *))NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = ep->func == func ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      if(ep->arg == arg)
      {
        ep->arg = new_arg;
        found = found + 1;
      }

    }

  }
  return found;
}

// checksum
// file lookupa.c line 170
void checksum(unsigned char *k, unsigned long int len, unsigned long int *state)
{
  unsigned long int a;
  unsigned long int b;
  unsigned long int c;
  unsigned long int d;
  unsigned long int e;
  unsigned long int f;
  unsigned long int g;
  unsigned long int h;
  unsigned long int length = len;
  a = state[(signed long int)0];
  b = state[(signed long int)1];
  c = state[(signed long int)2];
  d = state[(signed long int)3];
  e = state[(signed long int)4];
  f = state[(signed long int)5];
  g = state[(signed long int)6];
  h = state[(signed long int)7];
  for( ; len >= 32ul; len = len - (unsigned long int)32)
  {
    a = a + (unsigned long int)((signed int)k[(signed long int)0] + ((signed int)k[(signed long int)1] << 8) + ((signed int)k[(signed long int)2] << 16) + ((signed int)k[(signed long int)3] << 24));
    b = b + (unsigned long int)((signed int)k[(signed long int)4] + ((signed int)k[(signed long int)5] << 8) + ((signed int)k[(signed long int)6] << 16) + ((signed int)k[(signed long int)7] << 24));
    c = c + (unsigned long int)((signed int)k[(signed long int)8] + ((signed int)k[(signed long int)9] << 8) + ((signed int)k[(signed long int)10] << 16) + ((signed int)k[(signed long int)11] << 24));
    d = d + (unsigned long int)((signed int)k[(signed long int)12] + ((signed int)k[(signed long int)13] << 8) + ((signed int)k[(signed long int)14] << 16) + ((signed int)k[(signed long int)15] << 24));
    e = e + (unsigned long int)((signed int)k[(signed long int)16] + ((signed int)k[(signed long int)17] << 8) + ((signed int)k[(signed long int)18] << 16) + ((signed int)k[(signed long int)19] << 24));
    f = f + (unsigned long int)((signed int)k[(signed long int)20] + ((signed int)k[(signed long int)21] << 8) + ((signed int)k[(signed long int)22] << 16) + ((signed int)k[(signed long int)23] << 24));
    g = g + (unsigned long int)((signed int)k[(signed long int)24] + ((signed int)k[(signed long int)25] << 8) + ((signed int)k[(signed long int)26] << 16) + ((signed int)k[(signed long int)27] << 24));
    h = h + (unsigned long int)((signed int)k[(signed long int)28] + ((signed int)k[(signed long int)29] << 8) + ((signed int)k[(signed long int)30] << 16) + ((signed int)k[(signed long int)31] << 24));
    a = a ^ b << 11;
    d = d + a;
    b = b + c;
    b = b ^ c >> 2;
    e = e + b;
    c = c + d;
    c = c ^ d << 8;
    f = f + c;
    d = d + e;
    d = d ^ e >> 16;
    g = g + d;
    e = e + f;
    e = e ^ f << 10;
    h = h + e;
    f = f + g;
    f = f ^ g >> 4;
    a = a + f;
    g = g + h;
    g = g ^ h << 8;
    b = b + g;
    h = h + a;
    h = h ^ a >> 9;
    c = c + h;
    a = a + b;
    a = a ^ b << 11;
    d = d + a;
    b = b + c;
    b = b ^ c >> 2;
    e = e + b;
    c = c + d;
    c = c ^ d << 8;
    f = f + c;
    d = d + e;
    d = d ^ e >> 16;
    g = g + d;
    e = e + f;
    e = e ^ f << 10;
    h = h + e;
    f = f + g;
    f = f ^ g >> 4;
    a = a + f;
    g = g + h;
    g = g ^ h << 8;
    b = b + g;
    h = h + a;
    h = h ^ a >> 9;
    c = c + h;
    a = a + b;
    a = a ^ b << 11;
    d = d + a;
    b = b + c;
    b = b ^ c >> 2;
    e = e + b;
    c = c + d;
    c = c ^ d << 8;
    f = f + c;
    d = d + e;
    d = d ^ e >> 16;
    g = g + d;
    e = e + f;
    e = e ^ f << 10;
    h = h + e;
    f = f + g;
    f = f ^ g >> 4;
    a = a + f;
    g = g + h;
    g = g ^ h << 8;
    b = b + g;
    h = h + a;
    h = h ^ a >> 9;
    c = c + h;
    a = a + b;
    a = a ^ b << 11;
    d = d + a;
    b = b + c;
    b = b ^ c >> 2;
    e = e + b;
    c = c + d;
    c = c ^ d << 8;
    f = f + c;
    d = d + e;
    d = d ^ e >> 16;
    g = g + d;
    e = e + f;
    e = e ^ f << 10;
    h = h + e;
    f = f + g;
    f = f ^ g >> 4;
    a = a + f;
    g = g + h;
    g = g ^ h << 8;
    b = b + g;
    h = h + a;
    h = h ^ a >> 9;
    c = c + h;
    a = a + b;
    k = k + (signed long int)32;
  }
  h = h + length;
  switch(len)
  {
    case (unsigned long int)31:
      h = h + (unsigned long int)((signed int)k[(signed long int)30] << 24);
    case (unsigned long int)30:
      h = h + (unsigned long int)((signed int)k[(signed long int)29] << 16);
    case (unsigned long int)29:
      h = h + (unsigned long int)((signed int)k[(signed long int)28] << 8);
    case (unsigned long int)28:
      g = g + (unsigned long int)((signed int)k[(signed long int)27] << 24);
    case (unsigned long int)27:
      g = g + (unsigned long int)((signed int)k[(signed long int)26] << 16);
    case (unsigned long int)26:
      g = g + (unsigned long int)((signed int)k[(signed long int)25] << 8);
    case (unsigned long int)25:
      g = g + (unsigned long int)k[(signed long int)24];
    case (unsigned long int)24:
      f = f + (unsigned long int)((signed int)k[(signed long int)23] << 24);
    case (unsigned long int)23:
      f = f + (unsigned long int)((signed int)k[(signed long int)22] << 16);
    case (unsigned long int)22:
      f = f + (unsigned long int)((signed int)k[(signed long int)21] << 8);
    case (unsigned long int)21:
      f = f + (unsigned long int)k[(signed long int)20];
    case (unsigned long int)20:
      e = e + (unsigned long int)((signed int)k[(signed long int)19] << 24);
    case (unsigned long int)19:
      e = e + (unsigned long int)((signed int)k[(signed long int)18] << 16);
    case (unsigned long int)18:
      e = e + (unsigned long int)((signed int)k[(signed long int)17] << 8);
    case (unsigned long int)17:
      e = e + (unsigned long int)k[(signed long int)16];
    case (unsigned long int)16:
      d = d + (unsigned long int)((signed int)k[(signed long int)15] << 24);
    case (unsigned long int)15:
      d = d + (unsigned long int)((signed int)k[(signed long int)14] << 16);
    case (unsigned long int)14:
      d = d + (unsigned long int)((signed int)k[(signed long int)13] << 8);
    case (unsigned long int)13:
      d = d + (unsigned long int)k[(signed long int)12];
    case (unsigned long int)12:
      c = c + (unsigned long int)((signed int)k[(signed long int)11] << 24);
    case (unsigned long int)11:
      c = c + (unsigned long int)((signed int)k[(signed long int)10] << 16);
    case (unsigned long int)10:
      c = c + (unsigned long int)((signed int)k[(signed long int)9] << 8);
    case (unsigned long int)9:
      c = c + (unsigned long int)k[(signed long int)8];
    case (unsigned long int)8:
      b = b + (unsigned long int)((signed int)k[(signed long int)7] << 24);
    case (unsigned long int)7:
      b = b + (unsigned long int)((signed int)k[(signed long int)6] << 16);
    case (unsigned long int)6:
      b = b + (unsigned long int)((signed int)k[(signed long int)5] << 8);
    case (unsigned long int)5:
      b = b + (unsigned long int)k[(signed long int)4];
    case (unsigned long int)4:
      a = a + (unsigned long int)((signed int)k[(signed long int)3] << 24);
    case (unsigned long int)3:
      a = a + (unsigned long int)((signed int)k[(signed long int)2] << 16);
    case (unsigned long int)2:
      a = a + (unsigned long int)((signed int)k[(signed long int)1] << 8);
    case (unsigned long int)1:
      a = a + (unsigned long int)k[(signed long int)0];
  }
  a = a ^ b << 11;
  d = d + a;
  b = b + c;
  b = b ^ c >> 2;
  e = e + b;
  c = c + d;
  c = c ^ d << 8;
  f = f + c;
  d = d + e;
  d = d ^ e >> 16;
  g = g + d;
  e = e + f;
  e = e ^ f << 10;
  h = h + e;
  f = f + g;
  f = f ^ g >> 4;
  a = a + f;
  g = g + h;
  g = g ^ h << 8;
  b = b + g;
  h = h + a;
  h = h ^ a >> 9;
  c = c + h;
  a = a + b;
  a = a ^ b << 11;
  d = d + a;
  b = b + c;
  b = b ^ c >> 2;
  e = e + b;
  c = c + d;
  c = c ^ d << 8;
  f = f + c;
  d = d + e;
  d = d ^ e >> 16;
  g = g + d;
  e = e + f;
  e = e ^ f << 10;
  h = h + e;
  f = f + g;
  f = f ^ g >> 4;
  a = a + f;
  g = g + h;
  g = g ^ h << 8;
  b = b + g;
  h = h + a;
  h = h ^ a >> 9;
  c = c + h;
  a = a + b;
  a = a ^ b << 11;
  d = d + a;
  b = b + c;
  b = b ^ c >> 2;
  e = e + b;
  c = c + d;
  c = c ^ d << 8;
  f = f + c;
  d = d + e;
  d = d ^ e >> 16;
  g = g + d;
  e = e + f;
  e = e ^ f << 10;
  h = h + e;
  f = f + g;
  f = f ^ g >> 4;
  a = a + f;
  g = g + h;
  g = g ^ h << 8;
  b = b + g;
  h = h + a;
  h = h ^ a >> 9;
  c = c + h;
  a = a + b;
  a = a ^ b << 11;
  d = d + a;
  b = b + c;
  b = b ^ c >> 2;
  e = e + b;
  c = c + d;
  c = c ^ d << 8;
  f = f + c;
  d = d + e;
  d = d ^ e >> 16;
  g = g + d;
  e = e + f;
  e = e ^ f << 10;
  h = h + e;
  f = f + g;
  f = f ^ g >> 4;
  a = a + f;
  g = g + h;
  g = g ^ h << 8;
  b = b + g;
  h = h + a;
  h = h ^ a >> 9;
  c = c + h;
  a = a + b;
  state[(signed long int)0] = a;
  state[(signed long int)1] = b;
  state[(signed long int)2] = c;
  state[(signed long int)3] = d;
  state[(signed long int)4] = e;
  state[(signed long int)5] = f;
  state[(signed long int)6] = g;
  state[(signed long int)7] = h;
}

// cisco_netflow_init
// file cisco_netflow.h line 151
signed int cisco_netflow_init(struct pcap_handler **ph_list, signed int port)
{
  struct session_ent *sd;
  signed int sock;
  signed int on = 1;
  unsigned int slen;
  if(ph_list == ((struct pcap_handler **)NULL))
    return -1;

  else
  {
    static struct sockaddr_in sin;
    memset((void *)&sin, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    sin.sin_family = (unsigned short int)2;
    sin.sin_port=htons((unsigned short int)port);
    sd=session_open(-1, ((struct sockaddr *)NULL), (enum anonymous_6)DataSequence);
    if(sd == ((struct session_ent *)NULL))
    {
      perror("session_open");
      return -1;
    }

    else
    {
      sock=session_sock(sd);
      slen = (unsigned int)sizeof(signed int) /*4ul*/ ;
      signed int return_value_setsockopt_1;
      return_value_setsockopt_1=setsockopt(sock, 1, 15, (const void *)&on, slen);
      if(!(return_value_setsockopt_1 >= 0))
      {
        perror("setsockopt SO_REUSEPORT");
        return -1;
      }

      else
      {
        slen = (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ ;
        signed int return_value_bind_2;
        return_value_bind_2=bind(sock, (struct sockaddr *)&sin, slen);
        if(!(return_value_bind_2 >= 0))
        {
          perror("bind");
          return -1;
        }

        else
        {
          session_setcallback(sd, ((void (*)(struct session_ent *))NULL), ((void (*)(struct session_ent *, signed int))NULL), read_netflow);
          session_setcookie(sd, (const void *)ph_list);
          return 0;
        }
      }
    }
  }
}

// cleanup
// file trafshow.c line 261
static void cleanup(void)
{
  if(!(dump_file == ((const char *)NULL)))
    unlink(dump_file);

  screen_close();
  _exit(0);
}

// colormask
// file colormask.c line 540
signed int colormask(struct netstat_header *nh)
{
  if(nh == ((struct netstat_header *)NULL))
    return (signed int)(1UL - 1UL);

  else
  {
    if(!(nh->in_hdr.ver == 0))
    {
      struct cm_entry *cm;
      signed int i;
      cm = color_mask;
      i = 0;
      for( ; !(cm == ((struct cm_entry *)NULL)) && !(i >= n_masks); i = i + 1)
      {
        if(!(cm->in_hdr.ver == 0))
        {
          if(!(nh->in_hdr.ver == cm->in_hdr.ver))
            goto __CPROVER_DUMP_L13;

        }

        if(!(cm->in_hdr.proto == 0))
        {
          if(!(nh->in_hdr.proto == cm->in_hdr.proto))
            goto __CPROVER_DUMP_L13;

        }

        if(!(cm->in_hdr.src.ipaddr.ipa4.s_addr == 0u))
        {
          if(!(cm->src_mask == 0))
          {
            unsigned int mask;
            mask=netmask(cm->src_mask);
            if(!((cm->in_hdr.src.ipaddr.ipa4.s_addr & mask ^ nh->in_hdr.src.ipaddr.ipa4.s_addr & mask) == 0u))
              goto __CPROVER_DUMP_L13;

          }

          else
            if(!(nh->in_hdr.src.ipaddr.ipa4.s_addr == cm->in_hdr.src.ipaddr.ipa4.s_addr))
              goto __CPROVER_DUMP_L13;

        }

        if(!(cm->in_hdr.src.ip_port == 0))
        {
          if(!(nh->in_hdr.src.ip_port == cm->in_hdr.src.ip_port))
            goto __CPROVER_DUMP_L13;

        }

        if(!(cm->in_hdr.dst.ipaddr.ipa4.s_addr == 0u))
        {
          if(!(cm->dst_mask == 0))
          {
            unsigned int colormask__1__1__1__1__5__1__mask;
            colormask__1__1__1__1__5__1__mask=netmask(cm->dst_mask);
            if(!((cm->in_hdr.dst.ipaddr.ipa4.s_addr & colormask__1__1__1__1__5__1__mask ^ nh->in_hdr.dst.ipaddr.ipa4.s_addr & colormask__1__1__1__1__5__1__mask) == 0u))
              goto __CPROVER_DUMP_L13;

          }

          else
            if(!(nh->in_hdr.dst.ipaddr.ipa4.s_addr == cm->in_hdr.dst.ipaddr.ipa4.s_addr))
              goto __CPROVER_DUMP_L13;

        }

        if(!(cm->in_hdr.dst.ip_port == 0))
        {
          if(!(nh->in_hdr.dst.ip_port == cm->in_hdr.dst.ip_port))
            goto __CPROVER_DUMP_L13;

        }

        return (signed int)((unsigned long int)cm->pair << 0 + 8 | (unsigned long int)cm->attr);

      __CPROVER_DUMP_L13:
        ;
        cm = cm + 1l;
      }
    }

    return (signed int)(1UL - 1UL);
  }
}

// compare_data_len
// file show_stat.c line 55
static signed int compare_data_len(const struct netstat **p1, const struct netstat **p2)
{
  if(!((*p2)->data_len >= (*p1)->data_len))
    return -1;

  else
    if(!((*p1)->data_len >= (*p2)->data_len))
      return 1;

    else
      return 0;
}

// compare_pkt_cnt
// file show_stat.c line 64
static signed int compare_pkt_cnt(const struct netstat **p1, const struct netstat **p2)
{
  if(!((*p2)->pkt_cnt >= (*p1)->pkt_cnt))
    return -1;

  else
    if(!((*p1)->pkt_cnt >= (*p2)->pkt_cnt))
      return 1;

    else
      return 0;
}

// compare_pkt_len
// file show_stat.c line 46
static signed int compare_pkt_len(const struct netstat **p1, const struct netstat **p2)
{
  if(!((*p2)->pkt_len >= (*p1)->pkt_len))
    return -1;

  else
    if(!((*p1)->pkt_len >= (*p2)->pkt_len))
      return 1;

    else
      return 0;
}

// copy_argv
// file util.h line 15
char * copy_argv(char **av)
{
  unsigned int len = (unsigned int)0;
  char **p;
  char *buf;
  char *src;
  char *dst;
  p = av;
  char **tmp_post_1;
  unsigned long int return_value_strlen_2;
  char **tmp_post_4;
  char *tmp_post_5;
  char *tmp_post_6;
  if(*p == ((char *)NULL))
    return ((char *)NULL);

  else
  {
    for( ; !(*p == ((char *)NULL)); len = len + (unsigned int)(return_value_strlen_2 + (unsigned long int)1))
    {
      tmp_post_1 = p;
      p = p + 1l;
      return_value_strlen_2=strlen(*tmp_post_1);
    }
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)len);
    buf = (char *)return_value_malloc_3;
    if(buf == ((char *)NULL))
    {
      perror("malloc");
      return ((char *)NULL);
    }

    else
    {
      p = av;
      dst = buf;
      do
      {
        tmp_post_4 = p;
        p = p + 1l;
        src = *tmp_post_4;
        if(src == ((char *)NULL))
          break;

        do
        {
          tmp_post_5 = dst;
          dst = dst + 1l;
          tmp_post_6 = src;
          src = src + 1l;
          *tmp_post_5 = *tmp_post_6;
          if((signed int)*tmp_post_5 == 0)
            break;

        }
        while((_Bool)1);
        dst[(signed long int)-1] = (char)32;
      }
      while((_Bool)1);
      dst[(signed long int)-1] = (char)0;
      return buf;
    }
  }
}

// discard_request
// file domain_resolver.c line 267
static void discard_request(void *arg)
{
  struct domain_transact_ent *dt = (struct domain_transact_ent *)arg;
  if(!(dt == ((struct domain_transact_ent *)NULL)))
  {
    dt->sd = ((struct session_ent *)NULL);
    dt->callback = ((void (*)(struct session_ent *, struct domain_data_ent *))NULL);
  }

}

// domain_data_add
// file domain_resolver.c line 347
struct domain_data_ent * domain_data_add(struct domain_data_ent **list, const char *name, signed int pref)
{
  struct domain_data_ent *curr;
  struct domain_data_ent *last;
  struct domain_data_ent *prev;
  signed int insert;
  char *cp;
  _Bool tmp_if_expr_2;
  if(list == ((struct domain_data_ent **)NULL) || name == ((const char *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(*name != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return ((struct domain_data_ent *)NULL);
  }

  prev = ((struct domain_data_ent *)NULL);
  last = prev;
  insert = 0;
  curr = *list;
  signed int return_value_strcasecmp_3;
  for( ; !(curr == ((struct domain_data_ent *)NULL)); curr = curr->next)
  {
    if(!(curr->name == ((char *)NULL)))
    {
      return_value_strcasecmp_3=strcasecmp(curr->name, name);
      if(return_value_strcasecmp_3 == 0)
        return curr;

    }

    if(insert == 0)
    {
      if(!((unsigned int)pref >= curr->pref))
      {
        insert = insert + 1;
        prev = last;
      }

    }

    last = curr;
  }
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(sizeof(struct domain_data_ent) /*32ul*/ );
  curr = (struct domain_data_ent *)return_value_malloc_4;
  if(curr == ((struct domain_data_ent *)NULL))
    return ((struct domain_data_ent *)NULL);

  else
  {
    memset((void *)curr, 0, sizeof(struct domain_data_ent) /*32ul*/ );
    curr->name=strdup(name);
    if(curr->name == ((char *)NULL))
    {
      signed int save_errno;
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      save_errno = *return_value___errno_location_5;
      free((void *)curr);
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      save_errno = *return_value___errno_location_6;
      return ((struct domain_data_ent *)NULL);
    }

    cp = curr->name;
    for( ; !(*cp == 0); cp = cp + 1l)
      if((signed int)*cp >= 65)
      {
        if(!((signed int)*cp >= 91))
          *cp = (char)((signed int)*cp + 32);

      }

    curr->pref = (unsigned int)pref;
    if(!(insert == 0))
    {
      if(!(prev == ((struct domain_data_ent *)NULL)))
      {
        curr->next = prev->next;
        prev->next = curr;
      }

      else
      {
        curr->next = *list;
        *list = curr;
      }
    }

    else
      if(!(last == ((struct domain_data_ent *)NULL)))
        last->next = curr;

      else
        *list = curr;
    return curr;
  }
}

// domain_data_find
// file domain_resolver.c line 410
struct domain_data_ent * domain_data_find(struct domain_data_ent **list, const char *name)
{
  struct domain_data_ent *curr;
  _Bool tmp_if_expr_1;
  if(list == ((struct domain_data_ent **)NULL) || name == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(*name != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return ((struct domain_data_ent *)NULL);

  else
  {
    curr = *list;
    for( ; !(curr == ((struct domain_data_ent *)NULL)); curr = curr->next)
    {
      signed int return_value_strcasecmp_2;
      return_value_strcasecmp_2=strcasecmp(curr->name, name);
      if(return_value_strcasecmp_2 == 0)
        return curr;

    }
    return ((struct domain_data_ent *)NULL);
  }
}

// domain_data_free
// file domain_resolver.h line 67
void domain_data_free(struct domain_data_ent **list, const char *name)
{
  struct domain_data_ent *curr;
  struct domain_data_ent *prev;
  struct domain_data_ent *next;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  signed int return_value_strcasecmp_4;
  if(!(list == ((struct domain_data_ent **)NULL)))
  {
    curr = *list;
    prev = ((struct domain_data_ent *)NULL);
    while(!(curr == ((struct domain_data_ent *)NULL)))
    {
      if(name == ((const char *)NULL))
        tmp_if_expr_2 = (_Bool)1;

      else
      {
        if((signed int)*name == 0)
          tmp_if_expr_1 = curr->addr == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_2)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = curr->name == name ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_strcasecmp_4=strcasecmp(curr->name, name);
        tmp_if_expr_5 = !(return_value_strcasecmp_4 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
      {
        next = curr->next;
        if(!(prev == ((struct domain_data_ent *)NULL)))
          prev->next = next;

        else
          *list = next;
        if(!(curr->name == ((char *)NULL)))
          free((void *)curr->name);

        free((void *)curr);
        curr = next;
      }

      else
      {
        prev = curr;
        curr = curr->next;
      }
    }
  }

}

// domain_resolve_addr
// file domain_resolver.c line 187
signed int domain_resolve_addr(const char *domain, struct session_ent *sd, void (*notify)(struct session_ent *, struct domain_data_ent *))
{
  signed int return_value_nameserver_request_1;
  return_value_nameserver_request_1=nameserver_request(domain, (enum anonymous_14)IpAddress, sd, notify);
  return return_value_nameserver_request_1;
}

// domain_resolve_mxlist
// file domain_resolver.c line 196
signed int domain_resolve_mxlist(const char *domain, struct session_ent *sd, void (*notify)(struct session_ent *, struct domain_data_ent *))
{
  signed int return_value_nameserver_request_1;
  return_value_nameserver_request_1=nameserver_request(domain, (enum anonymous_14)MailExchanger, sd, notify);
  return return_value_nameserver_request_1;
}

// domain_resolve_name
// file domain_resolver.h line 58
signed int domain_resolve_name(unsigned int ipaddr, struct session_ent *sd, void (*notify)(struct session_ent *, struct domain_data_ent *))
{
  signed int return_value_nameserver_request_1;
  return_value_nameserver_request_1=nameserver_request((char *)&ipaddr, (enum anonymous_14)DomainName, sd, notify);
  return return_value_nameserver_request_1;
}

// domain_resolver_init
// file domain_resolver.c line 133
signed int domain_resolver_init()
{
  struct _IO_FILE *fp;
  signed int ns_cnt = 0;
  char *cp;
  char buf[1024l];
  if(primary == ((struct sockaddr_in *)NULL))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct sockaddr_in) /*16ul*/ );
    primary = (struct sockaddr_in *)return_value_malloc_1;
    if(primary == ((struct sockaddr_in *)NULL))
      return -1;

  }

  memset((void *)primary, 0, sizeof(struct sockaddr_in) /*16ul*/ );
  primary->sin_family = (unsigned short int)2;
  primary->sin_port=htons((unsigned short int)53);
  primary->sin_addr.s_addr=htonl((unsigned int)0x7f000001);
  if(!(secondary == ((struct sockaddr_in *)NULL)))
  {
    free((void *)secondary);
    secondary = ((struct sockaddr_in *)NULL);
  }

  fp=fopen("/etc/resolv.conf", "r");
  char *return_value_fgets_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  signed int tmp_post_6;
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    do
    {
      return_value_fgets_2=fgets(buf, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
      if(return_value_fgets_2 == ((char *)NULL))
        break;

      buf[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
      cp = buf;
      for( ; !(*cp == 0); cp = cp + 1l)
      {
        if((signed int)*cp == 35)
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = (signed int)*cp == 13 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = (signed int)*cp == 10 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
        {
          *cp = (char)0;
          break;
        }

        if(!((signed int)*cp >= 32))
          *cp = (char)32;

      }
      if(!((signed int)buf[0l] == 0))
      {
        signed int return_value_strncasecmp_7;
        return_value_strncasecmp_7=strncasecmp(buf, "nameserver", sizeof(char [11l]) /*11ul*/  - (unsigned long int)1);
        if(return_value_strncasecmp_7 == 0)
        {
          cp=strip_blanks((buf + (signed long int)sizeof(char [11l]) /*11ul*/ ) - (signed long int)1);
          tmp_post_6 = ns_cnt;
          ns_cnt = ns_cnt + 1;
          if(tmp_post_6 == 0)
            primary->sin_addr.s_addr=inet_addr(cp);

          else
            if(secondary == ((struct sockaddr_in *)NULL))
            {
              void *return_value_malloc_5;
              return_value_malloc_5=malloc(sizeof(struct sockaddr_in) /*16ul*/ );
              secondary = (struct sockaddr_in *)return_value_malloc_5;
              if(!(secondary == ((struct sockaddr_in *)NULL)))
              {
                memset((void *)secondary, 0, sizeof(struct sockaddr_in) /*16ul*/ );
                secondary->sin_family = (unsigned short int)2;
                secondary->sin_port=htons((unsigned short int)53);
                secondary->sin_addr.s_addr=inet_addr(cp);
              }

            }

        }

      }

    }
    while((_Bool)1);
    fclose(fp);
  }

  return ns_cnt;
}

// dump_netflow_v1
// file cisco_netflow.c line 411
static void dump_netflow_v1(const struct cnf_data_v1 *dp)
{
  struct _IO_FILE *fp;
  _Bool tmp_if_expr_1;
  if(dump_file == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
  {
    fp=fopen(dump_file, "a");
    tmp_if_expr_1 = fp == ((struct _IO_FILE *)NULL) ? (_Bool)1 : (_Bool)0;
  }
  if(!tmp_if_expr_1)
  {
    fprintf(fp, "\nNetflow:  V1\n");
    const char *return_value_intoa_2;
    return_value_intoa_2=intoa(dp->src_addr);
    fprintf(fp, "SrcAddr:  %s\n", return_value_intoa_2);
    const char *return_value_intoa_3;
    return_value_intoa_3=intoa(dp->dst_addr);
    fprintf(fp, "DstAddr:  %s\n", return_value_intoa_3);
    const char *return_value_intoa_4;
    return_value_intoa_4=intoa(dp->nexthop);
    fprintf(fp, "NextHop:  %s\n", return_value_intoa_4);
    unsigned short int return_value_ntohs_5;
    return_value_ntohs_5=ntohs(dp->ifin);
    fprintf(fp, "InputIf:  %d\n", (signed int)return_value_ntohs_5);
    unsigned short int return_value_ntohs_6;
    return_value_ntohs_6=ntohs(dp->ifout);
    fprintf(fp, "OutputIf: %d\n", (signed int)return_value_ntohs_6);
    unsigned int return_value_ntohl_7;
    return_value_ntohl_7=ntohl(dp->dpkts);
    fprintf(fp, "Packets:  %u\n", (unsigned int)return_value_ntohl_7);
    unsigned int return_value_ntohl_8;
    return_value_ntohl_8=ntohl(dp->doctets);
    fprintf(fp, "Octets:   %u\n", (unsigned int)return_value_ntohl_8);
    unsigned int return_value_ntohl_9;
    return_value_ntohl_9=ntohl(dp->firsttime);
    fprintf(fp, "First:    %u\n", (unsigned int)return_value_ntohl_9);
    unsigned int return_value_ntohl_10;
    return_value_ntohl_10=ntohl(dp->lasttime);
    fprintf(fp, "Last:     %u\n", (unsigned int)return_value_ntohl_10);
    if((signed int)dp->proto == 6)
    {
      unsigned short int return_value_ntohs_11;
      return_value_ntohs_11=ntohs(dp->src_port);
      const char *return_value_tcpport_string_12;
      return_value_tcpport_string_12=tcpport_string(return_value_ntohs_11);
      fprintf(fp, "SrcPort:  %s\n", return_value_tcpport_string_12);
      unsigned short int return_value_ntohs_13;
      return_value_ntohs_13=ntohs(dp->dst_port);
      const char *return_value_tcpport_string_14;
      return_value_tcpport_string_14=tcpport_string(return_value_ntohs_13);
      fprintf(fp, "DstPort:  %s\n", return_value_tcpport_string_14);
    }

    else
      if((signed int)dp->proto == 17)
      {
        unsigned short int return_value_ntohs_15;
        return_value_ntohs_15=ntohs(dp->src_port);
        const char *return_value_udpport_string_16;
        return_value_udpport_string_16=udpport_string(return_value_ntohs_15);
        fprintf(fp, "SrcPort:  %s\n", return_value_udpport_string_16);
        unsigned short int return_value_ntohs_17;
        return_value_ntohs_17=ntohs(dp->dst_port);
        const char *return_value_udpport_string_18;
        return_value_udpport_string_18=udpport_string(return_value_ntohs_17);
        fprintf(fp, "DstPort:  %s\n", return_value_udpport_string_18);
      }

      else
      {
        unsigned short int return_value_ntohs_19;
        return_value_ntohs_19=ntohs(dp->src_port);
        fprintf(fp, "SrcPort:  %d\n", (signed int)return_value_ntohs_19);
        unsigned short int return_value_ntohs_20;
        return_value_ntohs_20=ntohs(dp->dst_port);
        fprintf(fp, "DstPort:  %d\n", (signed int)return_value_ntohs_20);
      }
    const char *return_value_ipproto_string_21;
    return_value_ipproto_string_21=ipproto_string(dp->proto);
    fprintf(fp, "Protocol: %s\n", return_value_ipproto_string_21);
    fprint_tos(fp, (signed int)dp->tos);
    fprint_tcpflags(fp, (signed int)dp->flags);
    fclose(fp);
  }

}

// dump_netflow_v5
// file cisco_netflow.c line 447
static void dump_netflow_v5(const struct cnf_data_v5 *dp)
{
  struct _IO_FILE *fp;
  _Bool tmp_if_expr_1;
  if(dump_file == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
  {
    fp=fopen(dump_file, "a");
    tmp_if_expr_1 = fp == ((struct _IO_FILE *)NULL) ? (_Bool)1 : (_Bool)0;
  }
  if(!tmp_if_expr_1)
  {
    fprintf(fp, "\nNetflow:  V5\n");
    const char *return_value_intoa_2;
    return_value_intoa_2=intoa(dp->src_addr);
    fprintf(fp, "SrcAddr:  %s\n", return_value_intoa_2);
    const char *return_value_intoa_3;
    return_value_intoa_3=intoa(dp->dst_addr);
    fprintf(fp, "DstAddr:  %s\n", return_value_intoa_3);
    const char *return_value_intoa_4;
    return_value_intoa_4=intoa(dp->nexthop);
    fprintf(fp, "NextHop:  %s\n", return_value_intoa_4);
    unsigned short int return_value_ntohs_5;
    return_value_ntohs_5=ntohs(dp->ifin);
    fprintf(fp, "InputIf:  %d\n", (signed int)return_value_ntohs_5);
    unsigned short int return_value_ntohs_6;
    return_value_ntohs_6=ntohs(dp->ifout);
    fprintf(fp, "OutputIf: %d\n", (signed int)return_value_ntohs_6);
    unsigned int return_value_ntohl_7;
    return_value_ntohl_7=ntohl(dp->dpkts);
    fprintf(fp, "Packets:  %u\n", (unsigned int)return_value_ntohl_7);
    unsigned int return_value_ntohl_8;
    return_value_ntohl_8=ntohl(dp->doctets);
    fprintf(fp, "Octets:   %u\n", (unsigned int)return_value_ntohl_8);
    unsigned int return_value_ntohl_9;
    return_value_ntohl_9=ntohl(dp->firsttime);
    fprintf(fp, "First:    %u\n", (unsigned int)return_value_ntohl_9);
    unsigned int return_value_ntohl_10;
    return_value_ntohl_10=ntohl(dp->lasttime);
    fprintf(fp, "Last:     %u\n", (unsigned int)return_value_ntohl_10);
    if((signed int)dp->proto == 6)
    {
      unsigned short int return_value_ntohs_11;
      return_value_ntohs_11=ntohs(dp->src_port);
      const char *return_value_tcpport_string_12;
      return_value_tcpport_string_12=tcpport_string(return_value_ntohs_11);
      fprintf(fp, "SrcPort:  %s\n", return_value_tcpport_string_12);
      unsigned short int return_value_ntohs_13;
      return_value_ntohs_13=ntohs(dp->dst_port);
      const char *return_value_tcpport_string_14;
      return_value_tcpport_string_14=tcpport_string(return_value_ntohs_13);
      fprintf(fp, "DstPort:  %s\n", return_value_tcpport_string_14);
    }

    else
      if((signed int)dp->proto == 17)
      {
        unsigned short int return_value_ntohs_15;
        return_value_ntohs_15=ntohs(dp->src_port);
        const char *return_value_udpport_string_16;
        return_value_udpport_string_16=udpport_string(return_value_ntohs_15);
        fprintf(fp, "SrcPort:  %s\n", return_value_udpport_string_16);
        unsigned short int return_value_ntohs_17;
        return_value_ntohs_17=ntohs(dp->dst_port);
        const char *return_value_udpport_string_18;
        return_value_udpport_string_18=udpport_string(return_value_ntohs_17);
        fprintf(fp, "DstPort:  %s\n", return_value_udpport_string_18);
      }

      else
      {
        unsigned short int return_value_ntohs_19;
        return_value_ntohs_19=ntohs(dp->src_port);
        fprintf(fp, "SrcPort:  %d\n", (signed int)return_value_ntohs_19);
        unsigned short int return_value_ntohs_20;
        return_value_ntohs_20=ntohs(dp->dst_port);
        fprintf(fp, "DstPort:  %d\n", (signed int)return_value_ntohs_20);
      }
    fprint_tcpflags(fp, (signed int)dp->flags);
    const char *return_value_ipproto_string_21;
    return_value_ipproto_string_21=ipproto_string(dp->proto);
    fprintf(fp, "Protocol: %s\n", return_value_ipproto_string_21);
    fprint_tos(fp, (signed int)dp->tos);
    unsigned short int return_value_ntohs_22;
    return_value_ntohs_22=ntohs(dp->src_as);
    fprintf(fp, "SrcASN:   %d\n", (signed int)return_value_ntohs_22);
    unsigned short int return_value_ntohs_23;
    return_value_ntohs_23=ntohs(dp->dst_as);
    fprintf(fp, "DstASN:   %d\n", (signed int)return_value_ntohs_23);
    fprintf(fp, "SrcMask:  %d\n", (signed int)dp->src_mask);
    fprintf(fp, "DstMask:  %d\n", (signed int)dp->dst_mask);
    fclose(fp);
  }

}

// dump_netflow_v7
// file cisco_netflow.c line 488
static void dump_netflow_v7(const struct cnf_data_v7 *dp)
{
  struct _IO_FILE *fp;
  _Bool tmp_if_expr_1;
  if(dump_file == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
  {
    fp=fopen(dump_file, "a");
    tmp_if_expr_1 = fp == ((struct _IO_FILE *)NULL) ? (_Bool)1 : (_Bool)0;
  }
  if(!tmp_if_expr_1)
  {
    fprintf(fp, "\nNetflow:  V7\n");
    const char *return_value_intoa_2;
    return_value_intoa_2=intoa(dp->src_addr);
    fprintf(fp, "SrcAddr:  %s\n", return_value_intoa_2);
    const char *return_value_intoa_3;
    return_value_intoa_3=intoa(dp->dst_addr);
    fprintf(fp, "DstAddr:  %s\n", return_value_intoa_3);
    const char *return_value_intoa_4;
    return_value_intoa_4=intoa(dp->nexthop);
    fprintf(fp, "NextHop:  %s\n", return_value_intoa_4);
    unsigned short int return_value_ntohs_5;
    return_value_ntohs_5=ntohs(dp->ifin);
    fprintf(fp, "InputIf:  %d\n", (signed int)return_value_ntohs_5);
    unsigned short int return_value_ntohs_6;
    return_value_ntohs_6=ntohs(dp->ifout);
    fprintf(fp, "OutputIf: %d\n", (signed int)return_value_ntohs_6);
    unsigned int return_value_ntohl_7;
    return_value_ntohl_7=ntohl(dp->dpkts);
    fprintf(fp, "Packets:  %u\n", (unsigned int)return_value_ntohl_7);
    unsigned int return_value_ntohl_8;
    return_value_ntohl_8=ntohl(dp->doctets);
    fprintf(fp, "Octets:   %u\n", (unsigned int)return_value_ntohl_8);
    unsigned int return_value_ntohl_9;
    return_value_ntohl_9=ntohl(dp->firsttime);
    fprintf(fp, "First:    %u\n", (unsigned int)return_value_ntohl_9);
    unsigned int return_value_ntohl_10;
    return_value_ntohl_10=ntohl(dp->lasttime);
    fprintf(fp, "Last:     %u\n", (unsigned int)return_value_ntohl_10);
    if((signed int)dp->proto == 6)
    {
      unsigned short int return_value_ntohs_11;
      return_value_ntohs_11=ntohs(dp->src_port);
      const char *return_value_tcpport_string_12;
      return_value_tcpport_string_12=tcpport_string(return_value_ntohs_11);
      fprintf(fp, "SrcPort:  %s\n", return_value_tcpport_string_12);
      unsigned short int return_value_ntohs_13;
      return_value_ntohs_13=ntohs(dp->dst_port);
      const char *return_value_tcpport_string_14;
      return_value_tcpport_string_14=tcpport_string(return_value_ntohs_13);
      fprintf(fp, "DstPort:  %s\n", return_value_tcpport_string_14);
    }

    else
      if((signed int)dp->proto == 17)
      {
        unsigned short int return_value_ntohs_15;
        return_value_ntohs_15=ntohs(dp->src_port);
        const char *return_value_udpport_string_16;
        return_value_udpport_string_16=udpport_string(return_value_ntohs_15);
        fprintf(fp, "SrcPort:  %s\n", return_value_udpport_string_16);
        unsigned short int return_value_ntohs_17;
        return_value_ntohs_17=ntohs(dp->dst_port);
        const char *return_value_udpport_string_18;
        return_value_udpport_string_18=udpport_string(return_value_ntohs_17);
        fprintf(fp, "DstPort:  %s\n", return_value_udpport_string_18);
      }

      else
      {
        unsigned short int return_value_ntohs_19;
        return_value_ntohs_19=ntohs(dp->src_port);
        fprintf(fp, "SrcPort:  %d\n", (signed int)return_value_ntohs_19);
        unsigned short int return_value_ntohs_20;
        return_value_ntohs_20=ntohs(dp->dst_port);
        fprintf(fp, "DstPort:  %d\n", (signed int)return_value_ntohs_20);
      }
    fprint_tcpflags(fp, (signed int)dp->flags);
    const char *return_value_ipproto_string_21;
    return_value_ipproto_string_21=ipproto_string(dp->proto);
    fprintf(fp, "Protocol: %s\n", return_value_ipproto_string_21);
    fprint_tos(fp, (signed int)dp->tos);
    unsigned int return_value_ntohl_22;
    return_value_ntohl_22=ntohl(dp->src_as);
    fprintf(fp, "SrcASN:   %d\n", (signed int)return_value_ntohl_22);
    unsigned int return_value_ntohl_23;
    return_value_ntohl_23=ntohl(dp->dst_as);
    fprintf(fp, "DstASN:   %d\n", (signed int)return_value_ntohl_23);
    fprintf(fp, "SrcMask:  %d\n", (signed int)dp->src_mask);
    fprintf(fp, "DstMask:  %d\n", (signed int)dp->dst_mask);
    const char *return_value_intoa_24;
    return_value_intoa_24=intoa(dp->router_sc);
    fprintf(fp, "RouterSc: %s\n", return_value_intoa_24);
    fclose(fp);
  }

}

// edit_string
// file getkey.c line 536
static signed int edit_string(signed int ch)
{
  signed int i;
  unsigned long int return_value_strlen_1;
  char *return_value_strchr_3;
  char *return_value_strchr_5;
  char *return_value_strchr_7;
  unsigned long int return_value_strlen_8;
  unsigned long int return_value_strlen_9;
  if(!(ch == 10) && !(ch == 13) && !(ch == 0x0100))
  {
    if(ch == 0x0600)
      goto __CPROVER_DUMP_L4;

    if(ch == 0x0700)
      goto __CPROVER_DUMP_L5;

    if(ch == 16 || ch == 0x0200)
      goto __CPROVER_DUMP_L8;

    if(ch == 14 || ch == 0x0300)
      goto __CPROVER_DUMP_L14;

    if(ch == 1 || ch == 0x0800)
      goto __CPROVER_DUMP_L20;

    if(ch == 5 || ch == 0x0900)
      goto __CPROVER_DUMP_L21;

    if(ch == 2 || ch == 0x0400)
      goto __CPROVER_DUMP_L22;

    if(ch == 6 || ch == 0x0500)
      goto __CPROVER_DUMP_L24;

    if(ch == 8)
      goto __CPROVER_DUMP_L26;

    if(ch == 4 || ch == 0x7f)
      goto __CPROVER_DUMP_L28;

    if(ch == 21)
      goto __CPROVER_DUMP_L30;

    if(ch == 23)
      goto __CPROVER_DUMP_L31;

    if(ch == 11)
      goto __CPROVER_DUMP_L38;

    if(ch == 9)
      goto __CPROVER_DUMP_L40;

  }

  else
  {
    prompt_buf[(signed long int)nb] = (char)0;
    if(!(stdscr == ((struct _win_st *)NULL)))
    {
      stdscr->_attrs = (unsigned long int)(1UL - 1UL);
      0;
    }

    else
      -1;
    wmove(stdscr, LINES - 1, 0);
    wclrtoeol(stdscr);
    screen_dock_cursor(0, 0);
    return ch == 0x0100 ? -1 : 1;

  __CPROVER_DUMP_L4:
    ;
    cur = cur - cur % barlen;
    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L5:
    ;
    return_value_strlen_1=strlen(&prompt_buf[(signed long int)cur]);
    if(!(return_value_strlen_1 >= (unsigned long int)barlen))
      cur = nb;

    else
      cur = cur + ((barlen - cur % barlen) - 1);
    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L8:
    ;
    ch = 0;
    i = cur;
    for( ; i >= 1; i = i - 1)
      if(ch == 0)
      {
        char *return_value_strchr_2;
        return_value_strchr_2=strchr(spaces, (signed int)prompt_buf[(signed long int)(i - 1)]);
        if(!(return_value_strchr_2 == ((char *)NULL)))
          ch = ch + 1;

      }

      else
      {
        return_value_strchr_3=strchr(spaces, (signed int)prompt_buf[(signed long int)(i - 1)]);
        if(return_value_strchr_3 == ((char *)NULL))
          break;

      }
    cur = i;
    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L14:
    ;
    ch = 0;
    i = cur;
    for( ; !(i >= nb); i = i + 1)
      if(ch == 0)
      {
        char *return_value_strchr_4;
        return_value_strchr_4=strchr(spaces, (signed int)prompt_buf[(signed long int)i]);
        if(!(return_value_strchr_4 == ((char *)NULL)))
          ch = ch + 1;

      }

      else
      {
        return_value_strchr_5=strchr(spaces, (signed int)prompt_buf[(signed long int)i]);
        if(return_value_strchr_5 == ((char *)NULL))
          break;

      }
    cur = i;
    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L20:
    ;
    cur = 0;
    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L21:
    ;
    cur = nb;
    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L22:
    ;
    if(cur >= 1)
      cur = cur - 1;

    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L24:
    ;
    if(!(cur >= nb))
      cur = cur + 1;

    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L26:
    ;
    if(!(cur == 0) && !(nb == 0))
    {
      memmove((void *)&prompt_buf[(signed long int)(cur - 1)], (const void *)&prompt_buf[(signed long int)cur], (unsigned long int)(nb - cur));
      cur = cur - 1;
      nb = nb - 1;
    }

    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L28:
    ;
    if(!(nb == 0) && !(cur >= nb))
    {
      memmove((void *)&prompt_buf[(signed long int)cur], (const void *)&prompt_buf[(signed long int)(cur + 1)], (unsigned long int)(nb - cur));
      nb = nb - 1;
    }

    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L30:
    ;
    strcpy(cut_buf, prompt_buf);
    nb = 0;
    cur = 0;
    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L31:
    ;
    ch = 0;
    i = cur;
    for( ; i >= 1; i = i - 1)
      if(ch == 0)
      {
        char *return_value_strchr_6;
        return_value_strchr_6=strchr(spaces, (signed int)prompt_buf[(signed long int)(i - 1)]);
        if(!(return_value_strchr_6 == ((char *)NULL)))
          ch = ch + 1;

      }

      else
      {
        return_value_strchr_7=strchr(spaces, (signed int)prompt_buf[(signed long int)(i - 1)]);
        if(return_value_strchr_7 == ((char *)NULL))
          break;

      }
    if(!(i >= cur))
    {
      memcpy((void *)cut_buf, (const void *)&prompt_buf[(signed long int)i], (unsigned long int)(cur - i));
      cut_buf[(signed long int)(cur - i)] = (char)0;
      memmove((void *)&prompt_buf[(signed long int)i], (const void *)&prompt_buf[(signed long int)cur], (unsigned long int)(cur - i));
      nb = nb - (cur - i);
      cur = i;
    }

    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L38:
    ;
    if(!((signed int)prompt_buf[(signed long int)cur] == 0))
      strcpy(cut_buf, &prompt_buf[(signed long int)cur]);

    nb = cur;
    goto __CPROVER_DUMP_L48;

  __CPROVER_DUMP_L40:
    ;
    return_value_strlen_8=strlen(cut_buf);
    i = (signed int)return_value_strlen_8;
    if(!(i == 0))
    {
      return_value_strlen_9=strlen(prompt_buf);
      if((unsigned long int)(buf_size + -1) + -return_value_strlen_9 >= (unsigned long int)i)
      {
        memmove((void *)&prompt_buf[(signed long int)(cur + i)], (const void *)&prompt_buf[(signed long int)cur], (unsigned long int)(nb - cur));
        memmove((void *)&prompt_buf[(signed long int)cur], (const void *)cut_buf, (unsigned long int)i);
        nb = nb + i;
        cur = cur + i;
      }

    }

    goto __CPROVER_DUMP_L48;
  }
  char *return_value_strchr_10;
  signed int tmp_post_11;
  if(ch >= 127 || !(ch >= 32))
    return 0;

  else
    if(!(char_set == ((const char *)NULL)))
    {
      return_value_strchr_10=strchr(char_set, ch);
      if(!(return_value_strchr_10 == ((char *)NULL)))
        goto __CPROVER_DUMP_L44;

      beep();
      return 0;
    }

    else
    {

    __CPROVER_DUMP_L44:
      ;
      if(touch == 0)
      {
        nb = 0;
        cur = 0;
      }

      if(nb >= buf_size + -1)
      {
        beep();
        return 0;
      }

      else
      {
        if(!(cur >= nb))
          memmove((void *)&prompt_buf[(signed long int)(cur + 1)], (const void *)&prompt_buf[(signed long int)cur], (unsigned long int)(nb - cur));

        tmp_post_11 = cur;
        cur = cur + 1;
        prompt_buf[(signed long int)tmp_post_11] = (char)ch;
        nb = nb + 1;

      __CPROVER_DUMP_L48:
        ;
        touch = 1;
        prompt_buf[(signed long int)nb] = (char)0;
        win = cur / barlen;
        scr = cur % barlen;
        if(!(stdscr == ((struct _win_st *)NULL)))
        {
          stdscr->_attrs = (unsigned long int)((unsigned long int)1UL << 8 + 8);
          0;
        }

        else
          -1;
        mvprintw(LINES - 1, bartop, "%-*.*s", barlen, barlen, &prompt_buf[(signed long int)(win * barlen)]);
        if(!(show_win == 0))
        {
          if(!(stdscr == ((struct _win_st *)NULL)))
          {
            stdscr->_attrs = (unsigned long int)(1UL - 1UL);
            0;
          }

          else
            -1;
          mvprintw(LINES - 1, COLS - 2, "%-2d", win + 1);
        }

        screen_dock_cursor(LINES - 1, bartop + scr);
        screen_update();
        return 0;
      }
    }
}

// etheraddr_string
// file addrtoname.h line 30
const char * etheraddr_string(const unsigned char *ep)
{
  unsigned int i;
  char *cp;
  struct enamemem *tp;
  char buf[(signed long int)sizeof(char [18l]) /*18l*/ ];
  tp=lookup_emem(ep);
  char *tmp_post_1;
  char *tmp_post_2;
  const unsigned char *tmp_post_3;
  char *tmp_post_4;
  char *tmp_post_5;
  char *tmp_post_6;
  const unsigned char *tmp_post_7;
  if(!(tp->e_name == ((const char *)NULL)))
    return tp->e_name;

  else
  {
    cp = buf;
    tmp_post_1 = cp;
    cp = cp + 1l;
    *tmp_post_1 = hex[(signed long int)((signed int)*ep >> 4)];
    tmp_post_2 = cp;
    cp = cp + 1l;
    tmp_post_3 = ep;
    ep = ep + 1l;
    *tmp_post_2 = hex[(signed long int)((signed int)*tmp_post_3 & 0xf)];
    i = (unsigned int)5;
    do
    {
      i = i - 1u;
      if(!((signed int)i >= 0))
        break;

      tmp_post_4 = cp;
      cp = cp + 1l;
      *tmp_post_4 = (char)58;
      tmp_post_5 = cp;
      cp = cp + 1l;
      *tmp_post_5 = hex[(signed long int)((signed int)*ep >> 4)];
      tmp_post_6 = cp;
      cp = cp + 1l;
      tmp_post_7 = ep;
      ep = ep + 1l;
      *tmp_post_6 = hex[(signed long int)((signed int)*tmp_post_7 & 0xf)];
    }
    while((_Bool)1);
    *cp = (char)0;
    tp->e_name=strdup(buf);
    return tp->e_name;
  }
}

// ethertype_string
// file addrtoname.h line 31
const char * ethertype_string(unsigned short int type)
{
  char *cp;
  struct hnamemem *tp;
  unsigned int i = (unsigned int)type;
  char buf[(signed long int)sizeof(char [5l]) /*5l*/ ];
  tp = &etypetable[(signed long int)(i & (unsigned int)(4096 - 1))];
  for( ; !(tp->nxt == ((struct hnamemem *)NULL)); tp = tp->nxt)
    if(tp->addr == i)
      return tp->name;

  tp->addr = i;
  tp->nxt=newhnamemem();
  cp = buf;
  type=ntohs(type);
  char *tmp_post_1 = cp;
  cp = cp + 1l;
  signed int return_value_toupper_2;
  return_value_toupper_2=toupper((signed int)hex[(signed long int)((signed int)type >> 12 & 0xf)]);
  *tmp_post_1 = (char)return_value_toupper_2;
  char *tmp_post_3 = cp;
  cp = cp + 1l;
  signed int return_value_toupper_4;
  return_value_toupper_4=toupper((signed int)hex[(signed long int)((signed int)type >> 8 & 0xf)]);
  *tmp_post_3 = (char)return_value_toupper_4;
  char *tmp_post_5 = cp;
  cp = cp + 1l;
  signed int return_value_toupper_6;
  return_value_toupper_6=toupper((signed int)hex[(signed long int)((signed int)type >> 4 & 0xf)]);
  *tmp_post_5 = (char)return_value_toupper_6;
  char *tmp_post_7 = cp;
  cp = cp + 1l;
  signed int return_value_toupper_8;
  return_value_toupper_8=toupper((signed int)hex[(signed long int)((signed int)type & 0xf)]);
  *tmp_post_7 = (char)return_value_toupper_8;
  char *tmp_post_9 = cp;
  cp = cp + 1l;
  *tmp_post_9 = (char)0;
  tp->name=strdup(buf);
  return tp->name;
}

// fd_size
// file util.h line 16
signed long int fd_size(signed int fd)
{
  struct stat st;
  signed int return_value_fstat_1;
  return_value_fstat_1=fstat(fd, &st);
  if(!(return_value_fstat_1 >= 0))
    return (signed long int)-1;

  else
    return (signed long int)st.st_size;
}

// file_pcap_parse
// file show_dump.c line 352
static void file_pcap_parse(unsigned char *a, struct pcap_pkthdr *h, const unsigned char *p)
{
  struct pcap_handler *ph = (struct pcap_handler *)a;
  struct _IO_FILE *fp;
  signed long int sz;
  signed int hdrlen;
  struct netstat ns;
  _Bool tmp_if_expr_2;
  signed int return_value_fileno_1;
  _Bool tmp_if_expr_5;
  if(!(file_pcap == ((struct pcap *)NULL)))
  {
    fp=pcap_file(file_pcap);
    if(fp == ((struct _IO_FILE *)NULL))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      return_value_fileno_1=fileno(fp);
      sz=fd_size(return_value_fileno_1);
      tmp_if_expr_2 = sz < (signed long int)0 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_2)
    {
      signed long int return_value_ftell_3;
      return_value_ftell_3=ftell(fp);
      if((signed long int)(1536 * LINES) >= sz + -return_value_ftell_3)
      {
        memset((void *)&ns, 0, sizeof(struct netstat) /*96ul*/ );
        signed int return_value_pcap_datalink_4;
        return_value_pcap_datalink_4=pcap_datalink(file_pcap);
        hdrlen=parse_dl(&ns, return_value_pcap_datalink_4, (signed int)h->caplen, (signed int)h->len, p);
        if(!(hdrlen >= 0))
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = (unsigned int)hdrlen > h->caplen ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_5)
        {
          signed int return_value_netstat_match_6;
          return_value_netstat_match_6=netstat_match(&ns, dump_match);
          if(!(return_value_netstat_match_6 == 0))
          {
            ns.mtime = h->ts;
            switch((signed int)show_stat_mode)
            {
              case Size:
              {
                show_hex_dump(p + (signed long int)hdrlen, (signed int)(h->caplen - (unsigned int)hdrlen));
                break;
              }
              case Data:
              {
                show_ascii_dump(p + (signed long int)hdrlen, (signed int)(h->caplen - (unsigned int)hdrlen));
                break;
              }
              case Packets:
                show_header_dump(ph, &ns);
            }
          }

        }

      }

    }

  }

}

// find_backflow
// file show_stat.c line 73
static signed int find_backflow(struct netstat **list, signed int items, struct netstat *at)
{
  signed int i;
  if(list == ((struct netstat **)NULL) || at == ((struct netstat *)NULL) || !(items >= 1))
    return -1;

  else
  {
    i = 0;
    for( ; !(i >= items); i = i + 1)
    {
      signed int return_value_netstat_bidir_1;
      return_value_netstat_bidir_1=netstat_bidir(at, list[(signed long int)i]);
      if(!(return_value_netstat_bidir_1 == 0))
        return i;

    }
    return -1;
  }
}

// find_event
// file events.c line 281
struct event_ent * find_event(void (*func)(void *), void *arg)
{
  struct event_ent *ep = first_event;
  for( ; !(ep == ((struct event_ent *)NULL)); ep = ep->next)
    if(ep->func == func)
    {
      if(ep->arg == arg)
        return ep;

    }

  return ((struct event_ent *)NULL);
}

// find_transact
// file domain_resolver.c line 303
static struct domain_transact_ent * find_transact(unsigned short int reqid)
{
  struct domain_transact_ent *curr = first_transact;
  for( ; !(curr == ((struct domain_transact_ent *)NULL)); curr = curr->next)
    if(!(curr->reqid == 0))
    {
      if(curr->reqid == reqid)
        return curr;

    }

  return ((struct domain_transact_ent *)NULL);
}

// findpair
// file colormask.c line 86
static signed short int findpair(signed short int f, signed short int b, signed int a)
{
  signed int i;
  signed short int f1 = (signed short int)-1;
  signed short int b1 = (signed short int)-1;
  struct cm_entry *cm = color_mask;
  i = 0;
  for( ; !(cm == ((struct cm_entry *)NULL)) && !(i >= n_masks + -1); i = i + 1)
  {
    pair_content(cm->pair, &f1, &b1);
    if((signed int)f1 >= COLORS)
      f1 = (signed short int)-1;

    if((signed int)b1 >= COLORS)
      b1 = (signed short int)-1;

    if(b == b1 && f == f1)
      return cm->pair;

    cm = cm + 1l;
  }
  return (signed short int)0;
}

// fprint_tcpflags
// file cisco_netflow.c line 369
static void fprint_tcpflags(struct _IO_FILE *fp, signed int flags)
{
  fprintf(fp, "TCPflags: %02x", flags);
  if(!((0x01 & flags) == 0))
    fprintf(fp, " FIN");

  if(!((0x02 & flags) == 0))
    fprintf(fp, " SYN");

  if(!((0x04 & flags) == 0))
    fprintf(fp, " RST");

  if(!((0x08 & flags) == 0))
    fprintf(fp, " PUSH");

  if(!((0x10 & flags) == 0))
    fprintf(fp, " ACK");

  if(!((0x20 & flags) == 0))
    fprintf(fp, " URG");

  fprintf(fp, "\n");
}

// fprint_tos
// file cisco_netflow.c line 386
static void fprint_tos(struct _IO_FILE *fp, signed int tos)
{
  fprintf(fp, "TOS:      %02x", tos);
  switch(tos & 0xe0)
  {
    case 0xe0:
    {
      fprintf(fp, " NETCONTROL");
      break;
    }
    case 0xc0:
    {
      fprintf(fp, " INTERNETCONTROL");
      break;
    }
    case 0xa0:
    {
      fprintf(fp, " CRITIC_ECP");
      break;
    }
    case 0x80:
    {
      fprintf(fp, " FLASHOVERRIDE");
      break;
    }
    case 0x60:
    {
      fprintf(fp, " FLASH");
      break;
    }
    case 0x40:
    {
      fprintf(fp, " IMMEDIATE");
      break;
    }
    case 0x20:
      fprintf(fp, " PRIORITY");
  }
  tos = tos & 0x1e;
  if(!((0x10 & tos) == 0))
    fprintf(fp, " LOWDELAY");

  if(!((0x08 & tos) == 0))
    fprintf(fp, " THROUGHPUT");

  if(!((0x04 & tos) == 0))
    fprintf(fp, " RELIABILITY");

  if(!((0x02 & tos) == 0))
    fprintf(fp, " LOWCOST");

  fprintf(fp, "\n");
}

// free_events
// file events.c line 295
void free_events()
{
  struct event_ent *ep;
  struct event_ent *next;
  ep = first_event;
  for( ; !(ep == ((struct event_ent *)NULL)); ep = next)
  {
    next = ep->next;
    free((void *)ep);
  }
  first_event = ((struct event_ent *)NULL);
}

// free_transact
// file domain_resolver.c line 315
static void free_transact(struct domain_transact_ent *dt)
{
  struct domain_transact_ent *curr;
  struct domain_transact_ent *prev;
  struct domain_transact_ent *next;
  curr = first_transact;
  prev = ((struct domain_transact_ent *)NULL);
  while(!(curr == ((struct domain_transact_ent *)NULL)))
    if(curr == dt || dt == ((struct domain_transact_ent *)NULL))
    {
      next = curr->next;
      if(!(prev == ((struct domain_transact_ent *)NULL)))
        prev->next = next;

      else
        first_transact = next;
      if(!(curr->sd == ((struct session_ent *)NULL)))
        session_unbind(curr->sd, discard_request, (void *)curr);

      if(!(curr->name == ((char *)NULL)))
        free((void *)curr->name);

      if(!(curr->domain == ((char *)NULL)))
        free((void *)curr->domain);

      domain_data_free(&curr->data, ((const char *)NULL));
      free((void *)curr);
      curr = next;
    }

    else
    {
      prev = curr;
      curr = curr->next;
    }
}

// get_colors
// file selector.c line 65
static void get_colors(const struct selector *sp, signed int *fore, signed int *curs)
{
  signed int fg = (signed int)(1UL - 1UL);
  signed int cr = (signed int)((unsigned long int)1UL << 10 + 8);
  if(!(sp == ((const struct selector *)NULL)) && !(use_colors == 0))
  {
    if(!(sp->window_color == -1))
      fg = sp->window_color;

    if(!(sp->cursor_color == -1))
      cr = sp->cursor_color;

  }

  if(!(prompt_mode == 0))
    cr = fg;

  if(!(fore == ((signed int *)NULL)))
    *fore = fg;

  if(!(curs == ((signed int *)NULL)))
    *curs = cr;

}

// get_name
// file cisco_netflow.c line 134
static char * get_name(struct sockaddr *sa, char *dst, signed int size)
{
  struct hostent *hp = ((struct hostent *)NULL);
  _Bool tmp_if_expr_1;
  if(sa == ((struct sockaddr *)NULL))
    return ((char *)NULL);

  else
  {
    if((signed int)sa->sa_family == 2)
      hp=gethostbyaddr((const void *)(char *)&((struct sockaddr_in *)sa)->sin_addr, (unsigned int)sizeof(struct in_addr) /*4ul*/ , 2);

    if(!(hp == ((struct hostent *)NULL)))
    {
      signed int i = 0;
      for( ; !(i >= size + -1); i = i + 1)
      {
        if((signed int)hp->h_name[(signed long int)i] == 0)
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = (signed int)hp->h_name[(signed long int)i] == 46 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          break;

        dst[(signed long int)i] = hp->h_name[(signed long int)i];
      }
      dst[(signed long int)i] = (char)0;
      return dst;
    }

    return ((char *)NULL);
  }
}

// get_selector
// file getkey.c line 83
static struct selector * get_selector(struct pcap_handler *ph_list)
{
  struct selector *return_value_show_if_selector_1;
  struct pcap_handler *return_value_pcap_get_selected_2;
  struct selector *return_value_show_stat_selector_3;
  struct selector *return_value_help_page_selector_4;
  switch((signed int)show_mode)
  {
    case Interfaces:
    {
      return_value_show_if_selector_1=show_if_selector();
      return return_value_show_if_selector_1;
    }
    case NetStat:
    {
      return_value_pcap_get_selected_2=pcap_get_selected(ph_list);
      return_value_show_stat_selector_3=show_stat_selector(return_value_pcap_get_selected_2);
      return return_value_show_stat_selector_3;
    }
    case FlowDump:
      goto __CPROVER_DUMP_L5;
    case HelpPage:
    {
      return_value_help_page_selector_4=help_page_selector();
      return return_value_help_page_selector_4;
    }
    default:
    {

    __CPROVER_DUMP_L5:
      ;
      return ((struct selector *)NULL);
    }
  }
}

// get_size
// file selector.c line 40
static void get_size(const struct selector *sp, signed int *lines, signed int *cols)
{
  signed int ln = LINES;
  signed int cl = COLS;
  if(!(sp == ((const struct selector *)NULL)))
  {
    if(sp->LINES >= 1)
    {
      if(!(sp->LINES >= LINES))
        ln = sp->LINES;

    }

    if(!(sp->get_header == ((signed int (*)(char *, signed int, const void *))NULL)))
      ln = ln - 2;

    if(!(sp->get_footer == ((signed int (*)(char *, signed int, const void *))NULL)))
      ln = ln - 2;

    if(!(ln >= 1))
      ln = 1;

    if(sp->COLS >= 1)
    {
      if(!(sp->COLS >= COLS))
        cl = sp->COLS;

    }

    if(!(cl >= 1))
      cl = 1;

  }

  if(!(lines == ((signed int *)NULL)))
    *lines = ln;

  if(!(cols == ((signed int *)NULL)))
    *cols = cl;

}

// getkey_init
// file getkey.h line 52
void getkey_init(struct pcap_handler *ph)
{
  struct session_ent *sd;
  sd=session_open(0, ((struct sockaddr *)NULL), (enum anonymous_6)PlainFile);
  if(sd == ((struct session_ent *)NULL))
  {
    perror("session_open 0");
    exit(1);
  }

  session_setcallback(sd, ((void (*)(struct session_ent *))NULL), ((void (*)(struct session_ent *, signed int))NULL), read_key);
  session_setcookie(sd, (const void *)ph);
  prompt_mode = 0;
}

// getname
// file addrtoname.h line 35
const char * getname(const unsigned char *ap)
{
  unsigned int addr;
  struct hnamemem *p;
  signed int found;
  memcpy((void *)&addr, (const void *)ap, sizeof(unsigned int) /*4ul*/ );
  const char *return_value_intoa_1;
  if(!(nflag == 0))
  {
    return_value_intoa_1=intoa(addr);
    return return_value_intoa_1;
  }

  else
  {
    found = 0;
    p = &hnametable[(signed long int)(addr & (unsigned int)(4096 - 1))];
    for( ; !(p->nxt == ((struct hnamemem *)NULL)); p = p->nxt)
      if(p->addr == addr)
      {
        found = found + 1;
        break;
      }

    if(found == 0)
    {
      p->addr = addr;
      p->nxt=newhnamemem();
      const char *return_value_intoa_2;
      return_value_intoa_2=intoa(addr);
      p->name=strdup(return_value_intoa_2);
    }

    if(p->resolving == 0)
    {
      signed int return_value_domain_resolve_name_3;
      return_value_domain_resolve_name_3=domain_resolve_name(addr, ((struct session_ent *)NULL), (void (*)(struct session_ent *, struct domain_data_ent *))name_resolved);
      if(!(return_value_domain_resolve_name_3 >= 0))
        p->resolving = -1;

      else
        p->resolving = 1;
    }

    return p->name;
  }
}

// hadd
// file hashtab.h line 133
signed int hadd(struct htab *t, unsigned char *key, unsigned long int keyl, void *stuff)
{
  struct hitem *h;
  struct hitem **hp;
  unsigned long int y;
  unsigned long int x;
  x=lookup(key, keyl, (unsigned long int)0);
  y = x & t->mask;
  h = t->table[(signed long int)y];
  signed int return_value_memcmp_1;
  for( ; !(h == ((struct hitem *)NULL)); h = h->next)
    if(x == h->hval)
    {
      if(keyl == h->keyl)
      {
        return_value_memcmp_1=memcmp((const void *)key, (const void *)h->key, keyl);
        if(return_value_memcmp_1 == 0)
        {
          t->apos = y;
          t->ipos = h;
          return 0;
        }

      }

    }

  char *tmp_if_expr_3;
  char *return_value_renewx_2;
  if(!(t->space->numleft == 0))
  {
    t->space->numleft = t->space->numleft - (signed int)t->space->size;
    tmp_if_expr_3 = (char *)(t->space->list + (signed long int)1) + (signed long int)t->space->numleft;
  }

  else
  {
    return_value_renewx_2=renewx(t->space);
    tmp_if_expr_3 = return_value_renewx_2;
  }
  h = (struct hitem *)tmp_if_expr_3;
  if(h == ((struct hitem *)NULL))
    return -1;

  else
  {
    t->count = t->count + 1ul;
    if(!(1ul << t->logsize >= t->count))
    {
      hgrow(t);
      y = x & t->mask;
    }

    h->key = key;
    h->keyl = keyl;
    h->stuff = stuff;
    h->hval = x;
    hp = &t->table[(signed long int)y];
    h->next = *hp;
    *hp = h;
    t->ipos = h;
    t->apos = y;
    return 1;
  }
}

// hcreate
// file hashtab.h line 76
struct htab * hcreate(signed int logsize)
{
  unsigned long int i;
  unsigned long int len;
  struct htab *t;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct htab) /*64ul*/ );
  t = (struct htab *)return_value_malloc_1;
  if(t == ((struct htab *)NULL))
    return ((struct htab *)NULL);

  else
  {
    len = (unsigned long int)1 << logsize;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct hitem *) /*8ul*/  * (unsigned long int)len);
    t->table = (struct hitem **)return_value_malloc_2;
    if(t->table == ((struct hitem **)NULL))
      return ((struct htab *)NULL);

    else
    {
      i = (unsigned long int)0;
      for( ; !(i >= len); i = i + 1ul)
        t->table[(signed long int)i] = (struct hitem *)0;
      t->logsize = logsize;
      t->mask = len - (unsigned long int)1;
      t->count = (unsigned long int)0;
      t->apos = (unsigned long int)0;
      t->ipos = (struct hitem *)0;
      t->space=remkroot(sizeof(struct hitem) /*40ul*/ );
      if(t->space == ((struct reroot *)NULL))
        return ((struct htab *)NULL);

      else
      {
        t->bcount = (unsigned long int)0;
        return t;
      }
    }
  }
}

// hdel
// file hashtab.h line 152
signed int hdel(struct htab *t)
{
  struct hitem *h;
  struct hitem **ip;
  h = t->ipos;
  if(h == ((struct hitem *)NULL))
    return 0;

  else
  {
    ip = &t->table[(signed long int)t->apos];
    for( ; !(*ip == h); ip = &(*ip)->next)
      ;
    *ip = (*ip)->next;
    t->count = t->count - 1ul;
    t->ipos = h->next;
    if(t->ipos == ((struct hitem *)NULL))
      hnbucket(t);

    ((struct recycle *)h)->next = t->space->trash;
    t->space->trash = (struct recycle *)h;
    return 1;
  }
}

// hdestroy
// file hashtab.h line 87
void hdestroy(struct htab *t)
{
  refree(t->space);
  free((void *)(char *)t->table);
  free((void *)(char *)t);
}

// hdr2str
// file show_stat.c line 214
void hdr2str(struct netstat_header *nh, char *src_buf, signed int src_len, char *dst_buf, signed int dst_len, char *proto_buf, signed int proto_len)
{
  const struct netstat *ns;
  if(!(src_buf == ((char *)NULL)))
    *src_buf = (char)0;

  if(!(dst_buf == ((char *)NULL)))
    *dst_buf = (char)0;

  if(!(proto_buf == ((char *)NULL)))
    *proto_buf = (char)0;

  const char *return_value_ipproto_string_1;
  unsigned short int return_value_ntohs_9;
  unsigned short int return_value_ntohs_4;
  const char *return_value_ethertype_string_5;
  const char *return_value_llcsap_string_8;
  if(!(nh == ((struct netstat_header *)NULL)))
  {
    ns = (struct netstat *)nh;
    if(!(ns->ns_hdr.in_hdr.ver == 0))
    {
      if(src_len >= 2 && !(src_buf == ((char *)NULL)))
        ip_print((signed int)ns->ns_hdr.in_hdr.ver, (signed int)ns->ns_hdr.in_hdr.proto, &ns->ns_hdr.in_hdr.src, src_buf, src_len);

      if(dst_len >= 2 && !(dst_buf == ((char *)NULL)))
        ip_print((signed int)ns->ns_hdr.in_hdr.ver, (signed int)ns->ns_hdr.in_hdr.proto, &ns->ns_hdr.in_hdr.dst, dst_buf, dst_len);

      if(proto_len >= 2 && !(proto_buf == ((char *)NULL)))
      {
        if(!(nflag == 0))
          snprintf(proto_buf, (unsigned long int)proto_len, "%d", (signed int)ns->ns_hdr.in_hdr.proto);

        else
        {
          return_value_ipproto_string_1=ipproto_string(ns->ns_hdr.in_hdr.proto);
          strncpy(proto_buf, return_value_ipproto_string_1, (unsigned long int)proto_len);
        }
        proto_buf[(signed long int)(proto_len - 1)] = (char)0;
      }

    }

    else
    {
      return_value_ntohs_9=ntohs(ns->ns_hdr.en_hdr.type);
      if((signed int)return_value_ntohs_9 >= 1501)
      {
        if(src_len >= 2 && !(src_buf == ((char *)NULL)))
        {
          const char *return_value_etheraddr_string_2;
          return_value_etheraddr_string_2=etheraddr_string(ns->ns_hdr.en_hdr.src);
          strncpy(src_buf, return_value_etheraddr_string_2, (unsigned long int)src_len);
          src_buf[(signed long int)(src_len - 1)] = (char)0;
        }

        if(dst_len >= 2 && !(dst_buf == ((char *)NULL)))
        {
          const char *return_value_etheraddr_string_3;
          return_value_etheraddr_string_3=etheraddr_string(ns->ns_hdr.en_hdr.dst);
          strncpy(dst_buf, return_value_etheraddr_string_3, (unsigned long int)dst_len);
          dst_buf[(signed long int)(dst_len - 1)] = (char)0;
        }

        if(proto_len >= 2 && !(proto_buf == ((char *)NULL)))
        {
          if(!(nflag == 0))
          {
            return_value_ntohs_4=ntohs(ns->ns_hdr.en_hdr.type);
            snprintf(proto_buf, (unsigned long int)proto_len, "%04x", return_value_ntohs_4);
          }

          else
          {
            return_value_ethertype_string_5=ethertype_string(ns->ns_hdr.en_hdr.type);
            strncpy(proto_buf, return_value_ethertype_string_5, (unsigned long int)proto_len);
          }
          proto_buf[(signed long int)(proto_len - 1)] = (char)0;
        }

      }

      else
        if(ns->ns_hdr.en_hdr.param.llc.ssap == ns->ns_hdr.en_hdr.param.llc.dsap)
        {
          if(src_len >= 2 && !(src_buf == ((char *)NULL)))
          {
            const char *return_value_etheraddr_string_6;
            return_value_etheraddr_string_6=etheraddr_string(ns->ns_hdr.en_hdr.src);
            strncpy(src_buf, return_value_etheraddr_string_6, (unsigned long int)src_len);
            src_buf[(signed long int)(src_len - 1)] = (char)0;
          }

          if(dst_len >= 2 && !(dst_buf == ((char *)NULL)))
          {
            const char *return_value_etheraddr_string_7;
            return_value_etheraddr_string_7=etheraddr_string(ns->ns_hdr.en_hdr.dst);
            strncpy(dst_buf, return_value_etheraddr_string_7, (unsigned long int)dst_len);
            dst_buf[(signed long int)(dst_len - 1)] = (char)0;
          }

          if(proto_len >= 2 && !(proto_buf == ((char *)NULL)))
          {
            if(!(nflag == 0))
              snprintf(proto_buf, (unsigned long int)proto_len, "sap-%02x", (signed int)((signed int)ns->ns_hdr.en_hdr.param.llc.ssap & 0xff));

            else
            {
              return_value_llcsap_string_8=llcsap_string(ns->ns_hdr.en_hdr.param.llc.ssap);
              strncpy(proto_buf, return_value_llcsap_string_8, (unsigned long int)proto_len);
            }
            proto_buf[(signed long int)(proto_len - 1)] = (char)0;
          }

        }

        else
        {
          if(src_len >= 2 && !(src_buf == ((char *)NULL)))
            sap_print(ns->ns_hdr.en_hdr.src, ns->ns_hdr.en_hdr.param.llc.ssap, src_buf, src_len);

          if(dst_len >= 2 && !(dst_buf == ((char *)NULL)))
            sap_print(ns->ns_hdr.en_hdr.dst, ns->ns_hdr.en_hdr.param.llc.dsap, dst_buf, dst_len);

          if(proto_len >= 2 && !(proto_buf == ((char *)NULL)))
          {
            strncpy(proto_buf, "802.3", (unsigned long int)proto_len);
            proto_buf[(signed long int)(proto_len - 1)] = (char)0;
          }

        }
    }
  }

}

// help_page_footer
// file help_page.c line 130
static signed int help_page_footer(char *dst, signed int size, const char *topic)
{
  signed int i;
  signed int len;
  struct selector *sp;
  sp=help_page_selector();
  signed int tmp_post_2;
  if(dst == ((char *)NULL) || topic == ((const char *)NULL) || sp == ((struct selector *)NULL) || !(size >= 1))
    return 0;

  else
  {
    i = 0;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(topic);
    len = (signed int)return_value_strlen_1;
    if(len >= 1)
    {
      if(!(len >= sp->COLS))
      {
        len = sp->COLS / 2 - len / 2;
        for( ; !(i >= len); dst[(signed long int)tmp_post_2] = (char)32)
        {
          tmp_post_2 = i;
          i = i + 1;
        }
      }

    }

    strncpy(dst + (signed long int)i, topic, (unsigned long int)(size - i));
    dst[(signed long int)(size - 1)] = (char)0;
    return 0;
  }
}

// help_page_header
// file help_page.c line 88
static signed int help_page_header(char *dst, signed int size, const void *unused)
{
  signed int name_sz;
  signed int desc_sz;
  if(dst == ((char *)NULL) || !(unused == NULL) || !(size >= 1))
    return 0;

  else
  {
    scale_size_link2(&name_sz, &desc_sz);
    snprintf(dst, (unsigned long int)size, "%-*.*s %-*.*s", name_sz, name_sz, (const void *)" KeyPress", desc_sz, desc_sz, (const void *)"Action");
    return 0;
  }
}

// help_page_key
// file help_page.h line 20
signed int help_page_key(signed int idx)
{
  signed int i;
  struct selector *sp;
  struct help_page_entry *hp;
  sp=help_page_selector();
  signed int tmp_post_1;
  signed int tmp_if_expr_2;
  if(sp == ((struct selector *)NULL))
    return -1;

  else
  {
    hp = (struct help_page_entry *)sp->list;
    i = 0;
    for( ; !(hp == ((struct help_page_entry *)NULL)); hp = hp + 1l)
    {
      tmp_post_1 = i;
      i = i + 1;
      if(tmp_post_1 == idx)
        break;

    }
    if(!(hp == ((struct help_page_entry *)NULL)))
      tmp_if_expr_2 = hp->key;

    else
      tmp_if_expr_2 = -1;
    return tmp_if_expr_2;
  }
}

// help_page_line
// file help_page.c line 109
static signed int help_page_line(char *dst, signed int size, struct help_page_entry *hp, signed int idx)
{
  signed int name_sz;
  signed int desc_sz;
  if(dst == ((char *)NULL) || hp == ((struct help_page_entry *)NULL) || !(size >= 1))
    return 0;

  else
  {
    scale_size_link2(&name_sz, &desc_sz);
    snprintf(dst, (unsigned long int)size, "%-*.*s %-*.*s", name_sz, name_sz, (hp + (signed long int)idx)->name, desc_sz, desc_sz, (hp + (signed long int)idx)->descr);
    return 0;
  }
}

// help_page_list
// file help_page.h line 18
struct selector * help_page_list(enum anonymous_13 mode)
{
  struct help_page_entry *hp = ((struct help_page_entry *)NULL);
  char *topic = ((char *)NULL);
  struct selector *sp;
  _Bool tmp_if_expr_1;
  switch((signed int)mode)
  {
    case Interfaces:
    {
      hp = Interfaces_help;
      topic = "Interface selection Help";
      goto __CPROVER_DUMP_L4;
    }
    case NetStat:
    {
      hp = NetStat_help;
      topic = "Network Flow selection Help";
      goto __CPROVER_DUMP_L4;
    }
    case FlowDump:

    case HelpPage:
      return ((struct selector *)NULL);
    default:
    {

    __CPROVER_DUMP_L4:
      ;
      sp=help_page_selector();
      if(!(sp == ((struct selector *)NULL)))
      {
        help_mode = mode;
        sp->header = NULL;
        sp->footer = (void *)topic;
        sp->list = (void *)hp;
        sp->items = 0;
        do
        {
          if(!(hp == ((struct help_page_entry *)NULL)))
            tmp_if_expr_1 = hp->name != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_1 = (_Bool)0;
          if(!tmp_if_expr_1)
            break;

          sp->items = sp->items + 1;
          hp = hp + 1l;
        }
        while((_Bool)1);
      }

      return sp;
    }
  }
}

// help_page_mode
// file help_page.h line 19
enum anonymous_13 help_page_mode()
{
  return help_mode;
}

// help_page_selector
// file help_page.h line 17
struct selector * help_page_selector()
{
  signed int tmp_if_expr_1;
  static struct selector *sp = ((struct selector *)NULL);
  if(sp == ((struct selector *)NULL))
  {
    sp=selector_init();
    if(!(sp == ((struct selector *)NULL)))
    {
      signed int name_sz;
      signed int desc_sz;
      scale_size_link2(&name_sz, &desc_sz);
      sp->window_color = (signed int)((unsigned long int)1UL << 10 + 8);
      sp->cursor_color = (signed int)(1UL - 1UL);
      sp->COLS = name_sz + desc_sz < COLS ? name_sz + desc_sz : COLS;
      if(!(sp->COLS / 3 >= LINES))
        tmp_if_expr_1 = sp->COLS / 3;

      else
        tmp_if_expr_1 = LINES;
      sp->LINES = tmp_if_expr_1;
      sp->COL = COLS / 2 - sp->COLS / 2;
      sp->LINE = LINES / 2 - sp->LINES / 2;
      sp->get_header = help_page_header;
      sp->get_line = (signed int (*)(char *, signed int, const void *, signed int))help_page_line;
      sp->get_footer = (signed int (*)(char *, signed int, const void *))help_page_footer;
    }

  }

  return sp;
}

// hfind
// file hashtab.h line 120
signed int hfind(struct htab *t, unsigned char *key, unsigned long int keyl)
{
  struct hitem *h;
  unsigned long int x;
  x=lookup(key, keyl, (unsigned long int)0);
  unsigned long int y = x & t->mask;
  h = t->table[(signed long int)y];
  signed int return_value_memcmp_1;
  for( ; !(h == ((struct hitem *)NULL)); h = h->next)
    if(x == h->hval)
    {
      if(keyl == h->keyl)
      {
        return_value_memcmp_1=memcmp((const void *)key, (const void *)h->key, keyl);
        if(return_value_memcmp_1 == 0)
        {
          t->apos = y;
          t->ipos = h;
          return 1;
        }

      }

    }

  return 0;
}

// hfirst
// file hashtab.h line 162
signed int hfirst(struct htab *t)
{
  t->apos = t->mask;
  hnbucket(t);
  return (signed int)(t->ipos != (struct hitem *)0);
}

// hgrow
// file hashtab.c line 86
static void hgrow(struct htab *t)
{
  unsigned long int newsize;
  t->logsize = t->logsize + 1;
  newsize = (unsigned long int)1 << t->logsize;
  unsigned long int newmask = newsize - (unsigned long int)1;
  unsigned long int i;
  struct hitem **oldtab = t->table;
  struct hitem **newtab;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(newsize * sizeof(struct hitem *) /*8ul*/ );
  newtab = (struct hitem **)return_value_malloc_1;
  unsigned long int tmp_post_2;
  if(!(newtab == ((struct hitem **)NULL)))
  {
    i = (unsigned long int)0;
    for( ; !(i >= newsize); i = i + 1ul)
      newtab[(signed long int)i] = (struct hitem *)0;
    t->table = newtab;
    t->mask = newmask;
    i = newsize >> 1;
    do
    {
      tmp_post_2 = i;
      i = i - 1ul;
      if(tmp_post_2 == 0ul)
        break;

      struct hitem *this;
      struct hitem *that;
      struct hitem **newplace;
      this = oldtab[(signed long int)i];
      for( ; !(this == ((struct hitem *)NULL)); *newplace = that)
      {
        that = this;
        this = this->next;
        newplace = &newtab[(signed long int)(that->hval & newmask)];
        that->next = *newplace;
      }
    }
    while((_Bool)1);
    hfirst(t);
    free((void *)(char *)oldtab);
  }

}

// hnbucket
// file hashtab.h line 192
signed int hnbucket(struct htab *t)
{
  unsigned long int oldapos = t->apos;
  unsigned long int end = (unsigned long int)1 << t->logsize;
  unsigned long int i = oldapos + (unsigned long int)1;
  for( ; !(i >= end); i = i + 1ul)
    if(!(t->table[(signed long int)t->mask & (signed long int)i] == ((struct hitem *)NULL)))
    {
      t->apos = i;
      t->ipos = t->table[(signed long int)i];
      return 1;
    }

  i = (unsigned long int)0;
  for( ; oldapos >= i; i = i + 1ul)
    if(!(t->table[(signed long int)i] == ((struct hitem *)NULL)))
    {
      t->apos = i;
      t->ipos = t->table[(signed long int)i];
      return 0;
    }

  return 0;
}

// hstat
// file hashtab.c line 314
void hstat(struct _IO_FILE *fp, struct htab *t)
{
  unsigned long int i;
  unsigned long int j;
  double total = 0.0;
  struct hitem *h;
  struct hitem *walk;
  struct hitem *walk2;
  struct hitem *stat = (struct hitem *)0;
  i = (unsigned long int)0;
  _Bool tmp_if_expr_1;
  char *tmp_if_expr_3;
  char *return_value_renewx_2;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  for( ; t->mask >= i; i = i + 1ul)
  {
    h = t->table[(signed long int)i];
    j = (unsigned long int)0;
    for( ; !(h == ((struct hitem *)NULL)); h = h->next)
      j = j + 1ul;
    walk = stat;
    do
    {
      if(!(walk == ((struct hitem *)NULL)))
        tmp_if_expr_1 = walk->keyl != j ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      walk = walk->next;
    }
    while((_Bool)1);
    if(!(walk == ((struct hitem *)NULL)))
      walk->hval = walk->hval + 1ul;

    else
    {
      if(!(t->space->numleft == 0))
      {
        t->space->numleft = t->space->numleft - (signed int)t->space->size;
        tmp_if_expr_3 = (char *)(t->space->list + (signed long int)1) + (signed long int)t->space->numleft;
      }

      else
      {
        return_value_renewx_2=renewx(t->space);
        tmp_if_expr_3 = return_value_renewx_2;
      }
      walk = (struct hitem *)tmp_if_expr_3;
      if(walk == ((struct hitem *)NULL))
      {
        fprintf(fp, "renew: Can't allocate memory?\n");
        goto __CPROVER_DUMP_L30;
      }

      walk->keyl = j;
      walk->hval = (unsigned long int)1;
      if(stat == ((struct hitem *)NULL))
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = stat->keyl > j ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
      {
        walk->next = stat;
        stat = walk;
      }

      else
      {
        walk2 = stat;
        do
        {
          if(!(walk2->next == ((struct hitem *)NULL)))
            tmp_if_expr_4 = walk2->next->keyl < j ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_4 = (_Bool)0;
          if(!tmp_if_expr_4)
            break;

          walk2 = walk2->next;
        }
        while((_Bool)1);
        walk->next = walk2->next;
        walk2->next = walk;
      }
    }
  }
  walk = stat;
  for( ; !(walk == ((struct hitem *)NULL)); walk = walk->next)
    total = total + (double)walk->hval * (double)walk->keyl * (double)walk->keyl;
  if(!(t->count == 0ul))
    total = total / (double)t->count;

  else
    total = (double)0;
  fprintf(fp, "\n");
  walk = stat;
  for( ; !(walk == ((struct hitem *)NULL)); walk = walk->next)
    fprintf(fp, "items %ld:  %ld buckets\n", walk->keyl, walk->hval);
  fprintf(fp, "\nbuckets: %ld  items: %ld  existing: %g\n\n", (unsigned long int)1 << t->logsize, t->count, total);
  for( ; !(stat == ((struct hitem *)NULL)); stat = walk)
  {
    walk = stat->next;
    ((struct recycle *)stat)->next = t->space->trash;
    t->space->trash = (struct recycle *)stat;
  }

__CPROVER_DUMP_L30:
  ;
}

// htab_insert
// file netstat.c line 106
static signed int htab_insert(struct htab *ht, const struct netstat *ns)
{
  unsigned char *key;
  unsigned long int keyl;
  signed int op;
  struct netstat *dp;
  key = (unsigned char *)&ns->ns_hdr;
  keyl = sizeof(struct netstat_header) /*36ul*/ ;
  op=hadd(ht, key, keyl, NULL);
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  unsigned long int return_value_tv_diff_2;
  if(!(op >= 0))
    return -1;

  else
  {
    if(!(op == 0))
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct netstat) /*96ul*/ );
      dp = (struct netstat *)return_value_malloc_1;
      if(dp == ((struct netstat *)NULL))
      {
        hdel(ht);
        return -1;
      }

      memcpy((void *)dp, (const void *)ns, sizeof(struct netstat) /*96ul*/ );
      dp->gain_pkt_cnt = ns->pkt_cnt;
      dp->gain_pkt_len = ns->pkt_len;
      dp->gain_data_len = ns->data_len;
      dp->attr=colormask(&dp->ns_hdr);
      ht->ipos->key = (unsigned char *)&dp->ns_hdr;
      ht->ipos->stuff = (void *)dp;
      return 1;
    }

    dp = (struct netstat *)ht->ipos->stuff;
    if(dp == ((struct netstat *)NULL))
      return 0;

    else
    {
      dp->pkt_cnt = dp->pkt_cnt + ns->pkt_cnt;
      dp->pkt_len = dp->pkt_len + ns->pkt_len;
      dp->data_len = dp->data_len + ns->data_len;
      dp->gain_pkt_cnt = dp->gain_pkt_cnt + ns->pkt_cnt;
      dp->gain_pkt_len = dp->gain_pkt_len + ns->pkt_len;
      dp->gain_data_len = dp->gain_data_len + ns->data_len;
      if(!(ns->pkt_cnt_rate == 0u))
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = ns->pkt_len_rate != 0u ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = ns->data_len_rate != 0u ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
      {
        dp->mtime = ns->mtime;
        dp->pkt_cnt_rate = ns->pkt_cnt_rate;
        dp->pkt_len_rate = ns->pkt_len_rate;
        dp->data_len_rate = ns->data_len_rate;
      }

      else
      {
        return_value_tv_diff_2=tv_diff(&dp->mtime, &ns->mtime);
        op = (signed int)return_value_tv_diff_2;
        if(op >= 1000)
        {
          dp->mtime = ns->mtime;
          dp->gain_pkt_cnt = (dp->gain_pkt_cnt * (unsigned int)1000) / (unsigned int)op;
          if(!(dp->gain_pkt_cnt == 0u))
          {
            dp->pkt_cnt_rate = dp->gain_pkt_cnt;
            dp->gain_pkt_cnt = (unsigned int)0;
          }

          dp->gain_pkt_len = (dp->gain_pkt_len * (unsigned int)1000) / (unsigned int)op;
          if(!(dp->gain_pkt_len == 0u))
          {
            dp->pkt_len_rate = dp->gain_pkt_len;
            dp->gain_pkt_len = (unsigned int)0;
          }

          dp->gain_data_len = (dp->gain_data_len * (unsigned int)1000) / (unsigned int)op;
          if(!(dp->gain_data_len == 0u))
          {
            dp->data_len_rate = dp->gain_data_len;
            dp->gain_data_len = (unsigned int)0;
          }

        }

      }
      return 0;
    }
  }
}

// icmp_string
// file addrtoname.h line 58
const char * icmp_string(unsigned short int code)
{
  struct hnamemem *tp;
  unsigned int i = (unsigned int)code;
  char buf[(signed long int)sizeof(char [5l]) /*5l*/ ];
  tp = &icmptable[(signed long int)(i & (unsigned int)(4096 - 1))];
  for( ; !(tp->nxt == ((struct hnamemem *)NULL)); tp = tp->nxt)
    if(tp->addr == i)
      return tp->name;

  tp->addr = i;
  tp->nxt=newhnamemem();
  snprintf(buf, sizeof(char [5l]) /*5ul*/ , "%04x", code);
  tp->name=strdup(buf);
  return tp->name;
}

// init_addrtoname
// file addrtoname.h line 44
void init_addrtoname(void)
{
  init_etherarray();
  init_servarray();
  init_etypearray();
  init_llcsaparray();
  init_protoidarray();
  init_ipxsaparray();
  init_iprotoarray();
  init_icmparray();
}

// init_colormask
// file colormask.h line 26
signed int init_colormask(void)
{
  struct _IO_FILE *fp;
  signed int num;
  struct cm_entry me;
  struct cm_entry *cm;
  char *cp;
  char buf[1024l];
  char s1[256l];
  char s2[256l];
  char s3[256l];
  char s4[256l];
  if(!(rc_file == ((const char *)NULL)))
  {
    free((void *)(char *)rc_file);
    rc_file = ((const char *)NULL);
  }

  if(color_conf == ((const char *)NULL))
  {
    cp=getenv("HOME");
    if(!(cp == ((char *)NULL)))
    {
      strcpy(buf, cp);
      strcat(buf, "/");
    }

    else
      buf[(signed long int)0] = (char)0;
    strcat(buf, ".");
    strcat(buf, progname);
    fp=fopen(buf, "r");
    if(fp == ((struct _IO_FILE *)NULL))
    {
      strcpy(buf, "/etc/");
      strcat(buf, progname);
      fp=fopen(buf, "r");
      if(fp == ((struct _IO_FILE *)NULL))
        return 0;

    }

    rc_file=strdup(buf);
  }

  else
  {
    fp=fopen(color_conf, "r");
    if(fp == ((struct _IO_FILE *)NULL))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      fprintf(stderr, "%s: %s\n", color_conf, return_value_strerror_2);
      return -1;
    }

    rc_file=strdup(color_conf);
  }
  char *return_value_fgets_3;
  _Bool tmp_if_expr_4;
  char *tmp_post_5;
  char *tmp_post_6;
  signed int return_value_add_colormask_9;
  if(rc_file == ((const char *)NULL))
  {
    fprintf(stderr, "init_colormask: strdup: Out of memory?\n");
    fclose(fp);
    return -1;
  }

  else
  {
    rc_line = 0;
    cm = &me;
    use_default_colors();
    do
    {
      return_value_fgets_3=fgets(buf, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
      if(return_value_fgets_3 == ((char *)NULL))
        break;

      rc_line = rc_line + 1;
      if((signed int)buf[0l] == 10)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)buf[(signed long int)0] == 35 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_4)
      {
        cp=strchr(buf, 35);
        if(!(cp == ((char *)NULL)))
        {
          tmp_post_5 = cp;
          cp = cp + 1l;
          *tmp_post_5 = (char)10;
          *cp = (char)0;
        }

        memset((void *)cm, 0, sizeof(struct cm_entry) /*36ul*/ );
        num=sscanf(buf, "%s %s %s %s\n", (const void *)s1, (const void *)s2, (const void *)s3, (const void *)s4);
        if(num == 2)
        {
          signed int return_value_strcasecmp_10;
          return_value_strcasecmp_10=strcasecmp(s1, "default");
          if(!(return_value_strcasecmp_10 == 0))
          {
            cp=strchr(s1, 47);
            if(!(cp == ((char *)NULL)))
            {
              tmp_post_6 = cp;
              cp = cp + 1l;
              *tmp_post_6 = (char)0;
              cp=str2proto(cp, &num);
              if(cp == ((char *)NULL))
              {
                fclose(fp);
                return -1;
              }

              cm->in_hdr.proto = (unsigned char)num;
            }

            num=str2port(s1, cp);
            if(num == -1)
            {
              fclose(fp);
              return -1;
            }

            cm->in_hdr.src.ip_port = (unsigned short int)num;
            cm->in_hdr.dst.ip_port = (unsigned short int)0;
            signed int return_value_add_colormask_7;
            return_value_add_colormask_7=add_colormask(s2, cm);
            if(!(return_value_add_colormask_7 >= 0))
            {
              fclose(fp);
              return -1;
            }

            cm->in_hdr.src.ip_port = (unsigned short int)0;
            cm->in_hdr.dst.ip_port = (unsigned short int)num;
            signed int return_value_add_colormask_8;
            return_value_add_colormask_8=add_colormask(s2, cm);
            if(!(return_value_add_colormask_8 >= 0))
            {
              fclose(fp);
              return -1;
            }

          }

          else
          {
            return_value_add_colormask_9=add_colormask(s2, ((struct cm_entry *)NULL));
            if(!(return_value_add_colormask_9 >= 0))
            {
              fclose(fp);
              return -1;
            }

          }
        }

        else
          if(num == 3)
          {
            num=str2addr(s1, ((const char *)NULL), &cm->in_hdr.src, &cm->src_mask);
            if(num == -1)
            {
              fclose(fp);
              return -1;
            }

            cm->in_hdr.ver = (unsigned char)num;
            num=str2addr(s2, ((const char *)NULL), &cm->in_hdr.dst, &cm->dst_mask);
            if(num == -1)
            {
              fclose(fp);
              return -1;
            }

            if(cm->in_hdr.ver == 0)
              cm->in_hdr.ver = (unsigned char)num;

            else
              if(!(num == 0))
              {
                if(!(num == (signed int)cm->in_hdr.ver))
                {
                  fprintf(stderr, "%s: line %d: Addresses family mismatch\n", rc_file, rc_line);
                  fclose(fp);
                  return -1;
                }

              }

            signed int return_value_add_colormask_11;
            return_value_add_colormask_11=add_colormask(s3, cm);
            if(!(return_value_add_colormask_11 >= 0))
            {
              fclose(fp);
              return -1;
            }

          }

          else
            if(num == 4)
            {
              cp=str2proto(s1, &num);
              if(cp == ((char *)NULL))
              {
                fclose(fp);
                return -1;
              }

              cm->in_hdr.proto = (unsigned char)num;
              num=str2addr(s2, cp, &cm->in_hdr.src, &cm->src_mask);
              if(num == -1)
              {
                fclose(fp);
                return -1;
              }

              cm->in_hdr.ver = (unsigned char)num;
              num=str2addr(s3, cp, &cm->in_hdr.dst, &cm->dst_mask);
              if(num == -1)
              {
                fclose(fp);
                return -1;
              }

              if(cm->in_hdr.ver == 0)
                cm->in_hdr.ver = (unsigned char)num;

              else
                if(!(num == 0))
                {
                  if(!(num == (signed int)cm->in_hdr.ver))
                  {
                    fprintf(stderr, "%s: line %d: Addresses family mismatch\n", rc_file, rc_line);
                    fclose(fp);
                    return -1;
                  }

                }

              signed int return_value_add_colormask_12;
              return_value_add_colormask_12=add_colormask(s4, cm);
              if(!(return_value_add_colormask_12 >= 0))
              {
                fclose(fp);
                return -1;
              }

            }

            else
            {
              fprintf(stderr, "%s: line %d: Bad format\n", rc_file, rc_line);
              fclose(fp);
              return -1;
            }
      }

    }
    while((_Bool)1);
    fclose(fp);
    return n_masks;
  }
}

// init_edit_string
// file getkey.c line 495
static void init_edit_string(const char *prompter, const char *charset, signed int size)
{
  signed int i;
  char_set = charset;
  touch = 0;
  show_win = 0;
  cut_buf[0l] = (char)0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(prompter);
  bartop = (signed int)return_value_strlen_1;
  i = COLS - (bartop + 3);
  buf_size = size;
  barlen = buf_size;
  if(!(barlen >= 1) || !(i >= barlen))
  {
    barlen = i;
    show_win = 1;
  }

  if(!(stdscr == ((struct _win_st *)NULL)))
  {
    stdscr->_attrs = (unsigned long int)(1UL - 1UL);
    0;
  }

  else
    -1;
  wmove(stdscr, LINES - 1, 0);
  wclrtoeol(stdscr);
  waddnstr(stdscr, prompter, -1);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(prompt_buf);
  nb = (signed int)return_value_strlen_2;
  if(nb >= buf_size)
    nb = buf_size - 1;

  prompt_buf[(signed long int)nb] = (char)0;
  cur = nb;
  win = cur / barlen;
  scr = cur % barlen;
  if(!(show_win == 0))
    mvprintw(LINES - 1, COLS - 2, "%-2d", win + 1);

  if(!(stdscr == ((struct _win_st *)NULL)))
  {
    stdscr->_attrs = (unsigned long int)((unsigned long int)1UL << 8 + 8);
    0;
  }

  else
    -1;
  mvprintw(LINES - 1, bartop, "%-*.*s", barlen, barlen, &prompt_buf[(signed long int)(win * barlen)]);
  screen_dock_cursor(LINES - 1, bartop + scr);
}

// init_etherarray
// file addrtoname.c line 863
static void init_etherarray(void)
{
  struct etherlist *el;
  struct enamemem *tp;
  struct pcap_etherent *ep;
  struct _IO_FILE *fp;
  fp=fopen("/etc/ethers", "r");
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    do
    {
      ep=pcap_next_etherent(fp);
      if(ep == ((struct pcap_etherent *)NULL))
        break;

      tp=lookup_emem(ep->addr);
      tp->e_name=strdup(ep->name);
    }
    while((_Bool)1);
    fclose(fp);
  }

  el = etherlist;
  for( ; !(el->name == ((const char *)NULL)); el = el + 1l)
  {
    tp=lookup_emem(el->addr);
    if(tp->e_name == ((const char *)NULL))
      tp->e_name = el->name;

  }
}

// init_etypearray
// file addrtoname.c line 778
static void init_etypearray(void)
{
  signed int i;
  struct hnamemem *table;
  i = 0;
  for( ; !(ethertype_db[(signed long int)i].s == ((const char *)NULL)); i = i + 1)
  {
    signed int j;
    unsigned short int return_value_htons_1;
    return_value_htons_1=htons((unsigned short int)ethertype_db[(signed long int)i].v);
    j = (signed int)return_value_htons_1 & 4096 - 1;
    table = &etypetable[(signed long int)j];
    for( ; !(table->name == ((const char *)NULL)); table = table->nxt)
      ;
    table->name = ethertype_db[(signed long int)i].s;
    unsigned short int return_value_htons_2;
    return_value_htons_2=htons((unsigned short int)ethertype_db[(signed long int)i].v);
    table->addr = (unsigned int)return_value_htons_2;
    table->nxt=newhnamemem();
  }
}

// init_icmparray
// file addrtoname.c line 1264
static void init_icmparray(void)
{
  signed int i;
  struct hnamemem *table;
  i = 0;
  for( ; !(icmp_db[(signed long int)i].s == ((const char *)NULL)); i = i + 1)
  {
    table = &icmptable[(signed long int)(icmp_db[(signed long int)i].v & 4096 - 1)];
    for( ; !(table->name == ((const char *)NULL)); table = table->nxt)
      ;
    table->name = icmp_db[(signed long int)i].s;
    table->addr = (unsigned int)icmp_db[(signed long int)i].v;
    table->nxt=newhnamemem();
  }
}

// init_iprotoarray
// file addrtoname.c line 1205
static void init_iprotoarray(void)
{
  struct protoent *pe;
  struct hnamemem *tp;
  unsigned int i;
  do
  {
    pe=getprotoent();
    if(pe == ((struct protoent *)NULL))
      break;

    i = (unsigned int)pe->p_proto;
    tp = &iprototable[(signed long int)(i & (unsigned int)(4096 - 1))];
    for( ; !(tp->name == ((const char *)NULL)); tp = tp->nxt)
      ;
    tp->name=strdup(pe->p_name);
    tp->addr = i;
    tp->nxt=newhnamemem();
  }
  while((_Bool)1);
  endprotoent();
}

// init_ipxsaparray
// file addrtoname.c line 1169
static void init_ipxsaparray(void)
{
  signed int i;
  struct hnamemem *table;
  i = 0;
  for( ; !(ipxsap_db[(signed long int)i].s == ((const char *)NULL)); i = i + 1)
  {
    signed int j;
    unsigned short int return_value_htons_1;
    return_value_htons_1=htons((unsigned short int)ipxsap_db[(signed long int)i].v);
    j = (signed int)return_value_htons_1 & 4096 - 1;
    table = &ipxsaptable[(signed long int)j];
    for( ; !(table->name == ((const char *)NULL)); table = table->nxt)
      ;
    table->name = ipxsap_db[(signed long int)i].s;
    unsigned short int return_value_htons_2;
    return_value_htons_2=htons((unsigned short int)ipxsap_db[(signed long int)i].v);
    table->addr = (unsigned int)return_value_htons_2;
    table->nxt=newhnamemem();
  }
}

// init_llcsaparray
// file addrtoname.c line 936
static void init_llcsaparray(void)
{
  signed int i;
  struct hnamemem *table;
  i = 0;
  for( ; !(llcsap_db[(signed long int)i].s == ((const char *)NULL)); i = i + 1)
  {
    table = &llcsaptable[(signed long int)llcsap_db[(signed long int)i].v];
    for( ; !(table->name == ((const char *)NULL)); table = table->nxt)
      ;
    table->name = llcsap_db[(signed long int)i].s;
    table->addr = (unsigned int)llcsap_db[(signed long int)i].v;
    table->nxt=newhnamemem();
  }
}

// init_protoidarray
// file addrtoname.c line 811
static void init_protoidarray(void)
{
  signed int i;
  struct protoidmem *tp;
  struct protoidlist *pl;
  unsigned char protoid[5l];
  protoid[(signed long int)0] = (unsigned char)0;
  protoid[(signed long int)1] = (unsigned char)0;
  protoid[(signed long int)2] = (unsigned char)0;
  i = 0;
  for( ; !(ethertype_db[(signed long int)i].s == ((const char *)NULL)); i = i + 1)
  {
    unsigned short int etype;
    etype=htons((unsigned short int)ethertype_db[(signed long int)i].v);
    memcpy((void *)(char *)&protoid[(signed long int)3], (const void *)(char *)&etype, (unsigned long int)2);
    tp=lookup_protoid(protoid);
    tp->p_name=strdup(ethertype_db[(signed long int)i].s);
  }
  pl = protoidlist;
  for( ; !(pl->name == ((const char *)NULL)); pl = pl + 1l)
  {
    tp=lookup_protoid(pl->protoid);
    if(tp->p_name == ((const char *)NULL))
      tp->p_name = pl->name;

  }
}

// init_servarray
// file addrtoname.c line 710
static void init_servarray(void)
{
  struct servent *sv;
  struct hnamemem *table;
  signed int i;
  signed int return_value_strcmp_2;
  do
  {
    sv=getservent();
    if(sv == ((struct servent *)NULL))
      break;

    signed int port;
    unsigned short int return_value_ntohs_1;
    return_value_ntohs_1=ntohs((unsigned short int)sv->s_port);
    port = (signed int)return_value_ntohs_1;
    i = port & 4096 - 1;
    table = &servtable[(signed long int)i];
    if(!(table->addr == (unsigned int)port))
    {
      for( ; !(table->addr == 0u); table = table->nxt)
        ;
      table->addr = (unsigned int)port;
      table->nxt=newhnamemem();
    }

    signed int return_value_strcmp_3;
    return_value_strcmp_3=strcmp(sv->s_proto, "tcp");
    if(return_value_strcmp_3 == 0)
      table = &tporttable[(signed long int)i];

    else
    {
      return_value_strcmp_2=strcmp(sv->s_proto, "udp");
      if(return_value_strcmp_2 == 0)
        table = &uporttable[(signed long int)i];

      else
        continue;
    }
    for( ; !(table->name == ((const char *)NULL)); table = table->nxt)
      ;
    table->name=strdup(sv->s_name);
    table->addr = (unsigned int)port;
    table->nxt=newhnamemem();
  }
  while((_Bool)1);
  endservent();
}

// intoa
// file addrtoname.h line 41
const char * intoa(unsigned int addr)
{
  char *cp;
  unsigned int byte;
  signed int n;
  addr=ntohl(addr);
  static char buf[(signed long int)sizeof(char [17l]) /*17l*/ ];
  cp = &buf[(signed long int)sizeof(char [17l]) /*17ul*/ ];
  cp = cp - 1l;
  *cp = (char)0;
  n = 4;
  do
  {
    byte = addr & (unsigned int)0xff;
    cp = cp - 1l;
    *cp = (char)(byte % (unsigned int)10 + (unsigned int)48);
    byte = byte / (unsigned int)10;
    if(byte >= 1u)
    {
      cp = cp - 1l;
      *cp = (char)(byte % (unsigned int)10 + (unsigned int)48);
      byte = byte / (unsigned int)10;
      if(byte >= 1u)
      {
        cp = cp - 1l;
        *cp = (char)(byte + (unsigned int)48);
      }

    }

    cp = cp - 1l;
    *cp = (char)46;
    addr = addr >> 8;
    n = n - 1;
  }
  while(n >= 1);
  return cp + (signed long int)1;
}

// ip_print
// file show_stat.c line 117
static char * ip_print(signed int ver, signed int proto, struct ip_address *addr, char *dst, signed int size)
{
  const char *cp = ((const char *)NULL);
  char buf[100l];
  if(ver == 4)
  {
    if(!(addr->ipaddr.ipa4.s_addr == 0u))
      cp=getname((const unsigned char *)&addr->ipaddr.ipa4);

  }

  if(!(cp == ((const char *)NULL)))
  {
    strncpy(dst, cp, (unsigned long int)size);
    dst[(signed long int)(size - 1)] = (char)0;
  }

  else
    snprintf(dst, (unsigned long int)size, "IPv%d", ver);
  unsigned short int return_value_ntohs_2;
  unsigned short int return_value_ntohs_4;
  if(!(addr->ip_port == 0))
  {
    char pb[20l];
    signed int len;
    switch(proto)
    {
      case 6:
      {
        if(!(nflag == 0))
        {
          unsigned short int return_value_ntohs_1;
          return_value_ntohs_1=ntohs(addr->ip_port);
          sprintf(pb, "%d", return_value_ntohs_1);
          cp = pb;
        }

        else
        {
          return_value_ntohs_2=ntohs(addr->ip_port);
          cp=tcpport_string(return_value_ntohs_2);
        }
        break;
      }
      case 17:
      {
        if(!(nflag == 0))
        {
          unsigned short int return_value_ntohs_3;
          return_value_ntohs_3=ntohs(addr->ip_port);
          sprintf(pb, "%d", return_value_ntohs_3);
          cp = pb;
        }

        else
        {
          return_value_ntohs_4=ntohs(addr->ip_port);
          cp=udpport_string(return_value_ntohs_4);
        }
        break;
      }
      case 1:
      {
        if(!(nflag == 0))
        {
          sprintf(pb, "%04x", (signed int)addr->ip_port - 1);
          cp = pb;
        }

        else
          cp=icmp_string((unsigned short int)((signed int)addr->ip_port - 1));
        break;
      }
      default:
      {
        unsigned short int return_value_ntohs_5;
        return_value_ntohs_5=ntohs(addr->ip_port);
        sprintf(pb, "%d", return_value_ntohs_5);
        cp = pb;
      }
    }
    buf[(signed long int)0] = (char)44;
    strncpy(&buf[(signed long int)1], cp, (unsigned long int)10);
    buf[(signed long int)11] = (char)0;
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(buf);
    len = (signed int)return_value_strlen_6;
    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(dst);
    if(!(return_value_strlen_7 + (unsigned long int)len >= (unsigned long int)size))
      strcat(dst, buf);

    else
      strcpy(&dst[(signed long int)((size - len) - 1)], buf);
  }

  return dst;
}

// ipproto_string
// file addrtoname.h line 36
const char * ipproto_string(unsigned char proto)
{
  struct hnamemem *tp;
  unsigned int i = (unsigned int)proto;
  char buf[(signed long int)sizeof(char [6l]) /*6l*/ ];
  tp = &iprototable[(signed long int)(i & (unsigned int)(4096 - 1))];
  for( ; !(tp->nxt == ((struct hnamemem *)NULL)); tp = tp->nxt)
    if(tp->addr == i)
      return tp->name;

  tp->addr = i;
  tp->nxt=newhnamemem();
  snprintf(buf, sizeof(char [6l]) /*6ul*/ , "%u", i);
  tp->name=strdup(buf);
  return tp->name;
}

// ipxsap_string
// file addrtoname.c line 684
const char * ipxsap_string(unsigned short int port)
{
  char *cp;
  struct hnamemem *tp;
  unsigned int i = (unsigned int)port;
  char buf[(signed long int)sizeof(char [5l]) /*5l*/ ];
  tp = &ipxsaptable[(signed long int)(i & (unsigned int)(4096 - 1))];
  for( ; !(tp->nxt == ((struct hnamemem *)NULL)); tp = tp->nxt)
    if(tp->addr == i)
      return tp->name;

  tp->addr = i;
  tp->nxt=newhnamemem();
  cp = buf;
  port=ntohs(port);
  char *tmp_post_1 = cp;
  cp = cp + 1l;
  signed int return_value_toupper_2;
  return_value_toupper_2=toupper((signed int)hex[(signed long int)((signed int)port >> 12 & 0xf)]);
  *tmp_post_1 = (char)return_value_toupper_2;
  char *tmp_post_3 = cp;
  cp = cp + 1l;
  signed int return_value_toupper_4;
  return_value_toupper_4=toupper((signed int)hex[(signed long int)((signed int)port >> 8 & 0xf)]);
  *tmp_post_3 = (char)return_value_toupper_4;
  char *tmp_post_5 = cp;
  cp = cp + 1l;
  signed int return_value_toupper_6;
  return_value_toupper_6=toupper((signed int)hex[(signed long int)((signed int)port >> 4 & 0xf)]);
  *tmp_post_5 = (char)return_value_toupper_6;
  char *tmp_post_7 = cp;
  cp = cp + 1l;
  signed int return_value_toupper_8;
  return_value_toupper_8=toupper((signed int)hex[(signed long int)((signed int)port & 0xf)]);
  *tmp_post_7 = (char)return_value_toupper_8;
  char *tmp_post_9 = cp;
  cp = cp + 1l;
  *tmp_post_9 = (char)0;
  tp->name=strdup(buf);
  return tp->name;
}

// is_any
// file colormask.c line 196
static signed int is_any(const char *s)
{
  _Bool tmp_if_expr_1;
  if(s == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(*s != 0) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  signed int return_value_strcasecmp_3;
  _Bool tmp_if_expr_6;
  signed int return_value_strcasecmp_5;
  if(tmp_if_expr_1)
    return 0;

  else
  {
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(s, "*");
    if(return_value_strcmp_2 == 0)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_strcasecmp_3=strcasecmp(s, "any");
      tmp_if_expr_4 = !(return_value_strcasecmp_3 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_strcasecmp_5=strcasecmp(s, "all");
      tmp_if_expr_6 = !(return_value_strcasecmp_5 != 0) ? (_Bool)1 : (_Bool)0;
    }
    return (signed int)tmp_if_expr_6;
  }
}

// is_number
// file colormask.c line 203
static signed int is_number(const char *s)
{
  _Bool tmp_if_expr_1;
  if(s == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(*s != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return 0;

  else
  {
    for( ; !(*s == 0); s = s + 1l)
    {
      const unsigned short int **return_value___ctype_b_loc_2;
      return_value___ctype_b_loc_2=__ctype_b_loc();
      if((2048 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*s]) == 0)
        return 0;

    }
    return 1;
  }
}

// is_parse_dl
// file parse_dl.h line 13
signed int is_parse_dl(signed int type)
{
  return (signed int)(type == 0 || type == 108 || type == 1 || type == 8 || type == 51 || type == 9 || type == 12 || type == 104 || type == 50 || type == 113);
}

// isonsap_string
// file addrtoname.c line 608
const char * isonsap_string(const unsigned char *nsap)
{
  unsigned int i;
  unsigned int nlen = (unsigned int)nsap[(signed long int)0];
  char *cp;
  struct enamemem *tp;
  tp=lookup_nsap(nsap);
  char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  const unsigned char *tmp_post_5;
  if(!(tp->e_name == ((const char *)NULL)))
    return tp->e_name;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)(nlen * (unsigned int)2 + (unsigned int)2));
    cp = (char *)return_value_malloc_1;
    tp->e_name = cp;
    if(cp == ((char *)NULL))
    {
      perror("isonsap_string: malloc");
      exit(1);
    }

    nsap = nsap + 1l;
    tmp_post_2 = cp;
    cp = cp + 1l;
    *tmp_post_2 = (char)47;
    i = nlen;
    do
    {
      i = i - 1u;
      if(!((signed int)i >= 0))
        break;

      tmp_post_3 = cp;
      cp = cp + 1l;
      *tmp_post_3 = hex[(signed long int)((signed int)*nsap >> 4)];
      tmp_post_4 = cp;
      cp = cp + 1l;
      tmp_post_5 = nsap;
      nsap = nsap + 1l;
      *tmp_post_4 = hex[(signed long int)((signed int)*tmp_post_5 & 0xf)];
    }
    while((_Bool)1);
    *cp = (char)0;
    return tp->e_name;
  }
}

// isservport
// file addrtoname.h line 34
signed int isservport(unsigned short int port)
{
  struct hnamemem *tp;
  unsigned int i = (unsigned int)port;
  tp = &servtable[(signed long int)(i & (unsigned int)(4096 - 1))];
  for( ; !(tp->nxt == ((struct hnamemem *)NULL)); tp = tp->nxt)
    if(tp->addr == i)
      return 1;

  return 0;
}

// linkaddr_string
// file addrtoname.h line 29
const char * linkaddr_string(const unsigned char *ep, const unsigned int len)
{
  unsigned int i;
  unsigned int j;
  char *cp;
  struct enamemem *tp;
  char *tmp_post_2;
  char *tmp_post_3;
  const unsigned char *tmp_post_4;
  char *tmp_post_5;
  char *tmp_post_6;
  char *tmp_post_7;
  const unsigned char *tmp_post_8;
  if(ep == ((const unsigned char *)NULL) || !(len >= 1u))
    return "";

  else
  {
    tp=lookup_bytestring(ep, len);
    if(!(tp->e_name == ((const char *)NULL)))
      return tp->e_name;

    else
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)(len * (unsigned int)3));
      cp = (char *)return_value_malloc_1;
      tp->e_name = cp;
      if(tp->e_name == ((const char *)NULL))
      {
        perror("linkaddr_string: malloc");
        exit(1);
      }

      j = (unsigned int)((signed int)*ep >> 4);
      if(!(j == 0u))
      {
        tmp_post_2 = cp;
        cp = cp + 1l;
        *tmp_post_2 = hex[(signed long int)j];
      }

      tmp_post_3 = cp;
      cp = cp + 1l;
      tmp_post_4 = ep;
      ep = ep + 1l;
      *tmp_post_3 = hex[(signed long int)((signed int)*tmp_post_4 & 0xf)];
      i = len - (unsigned int)1;
      for( ; i >= 1u; i = i - 1u)
      {
        tmp_post_5 = cp;
        cp = cp + 1l;
        *tmp_post_5 = (char)58;
        j = (unsigned int)((signed int)*ep >> 4);
        if(!(j == 0u))
        {
          tmp_post_6 = cp;
          cp = cp + 1l;
          *tmp_post_6 = hex[(signed long int)j];
        }

        tmp_post_7 = cp;
        cp = cp + 1l;
        tmp_post_8 = ep;
        ep = ep + 1l;
        *tmp_post_7 = hex[(signed long int)((signed int)*tmp_post_8 & 0xf)];
      }
      *cp = (char)0;
      return tp->e_name;
    }
  }
}

// live_pcap_dump
// file show_dump.c line 234
static void * live_pcap_dump()
{
  signed int op;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  while(!(live_pcap == ((struct pcap *)NULL)) && !(live_dump == ((struct pcap_dumper *)NULL)))
  {
    op=pcap_dispatch(live_pcap, -1, live_pcap_parse, (unsigned char *)live_dump);
    if(op == -2)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(op == -1)
      {
        return_value___errno_location_1=__errno_location();
        tmp_if_expr_2 = *return_value___errno_location_1 != 11 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      break;

    if(!(op >= 1))
      usleep((unsigned int)1000);

  }
  return NULL;
}

// live_pcap_parse
// file show_dump.c line 249
static void live_pcap_parse(unsigned char *a, struct pcap_pkthdr *h, const unsigned char *p)
{
  struct netstat ns;
  if(!(live_pcap == ((struct pcap *)NULL)) && !(a == ((unsigned char *)NULL)))
  {
    memset((void *)&ns, 0, sizeof(struct netstat) /*96ul*/ );
    signed int return_value_pcap_datalink_1;
    return_value_pcap_datalink_1=pcap_datalink(live_pcap);
    signed int return_value_parse_dl_2;
    return_value_parse_dl_2=parse_dl(&ns, return_value_pcap_datalink_1, (signed int)h->caplen, (signed int)h->len, p);
    if(return_value_parse_dl_2 >= 0)
    {
      signed int return_value_netstat_match_3;
      return_value_netstat_match_3=netstat_match(&ns, dump_match);
      if(!(return_value_netstat_match_3 == 0))
      {
        pcap_dump(a, h, p);
        pcap_dump_flush((struct pcap_dumper *)a);
      }

    }

  }

}

// llcsap_string
// file addrtoname.h line 56
const char * llcsap_string(unsigned char sap)
{
  struct hnamemem *tp;
  unsigned int i = (unsigned int)sap;
  char buf[(signed long int)sizeof(char [7l]) /*7l*/ ];
  tp = &llcsaptable[(signed long int)(i & (unsigned int)(4096 - 1))];
  for( ; !(tp->nxt == ((struct hnamemem *)NULL)); tp = tp->nxt)
    if(tp->addr == i)
      return tp->name;

  tp->addr = i;
  tp->nxt=newhnamemem();
  snprintf(buf, sizeof(char [7l]) /*7ul*/ , "sap-%02x", (signed int)sap & 0xff);
  tp->name=strdup(buf);
  return tp->name;
}

// load_file
// file util.h line 17
char * load_file(const char *name)
{
  signed int fd;
  signed long int sz;
  char *cp;
  fd=open(name, 00);
  if(!(fd >= 0))
  {
    perror(name);
    return ((char *)NULL);
  }

  else
  {
    sz=fd_size(fd);
    if(!(sz >= 0l))
    {
      perror(name);
      close(fd);
      return ((char *)NULL);
    }

    else
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)(sz + (signed long int)1));
      cp = (char *)return_value_malloc_1;
      if(cp == ((char *)NULL))
      {
        perror(name);
        close(fd);
        return ((char *)NULL);
      }

      else
      {
        sz=read(fd, (void *)cp, (unsigned long int)sz);
        if(!(sz >= 0l))
        {
          perror(name);
          close(fd);
          free((void *)cp);
          return ((char *)NULL);
        }

        else
        {
          close(fd);
          cp[sz] = (char)0;
          return cp;
        }
      }
    }
  }
}

// lookup
// file lookupa.h line 21
unsigned long int lookup(unsigned char *k, unsigned long int length, unsigned long int level)
{
  unsigned long int a;
  unsigned long int b;
  unsigned long int c;
  unsigned long int len = length;
  b = (unsigned long int)0x9e3779b9;
  a = b;
  c = level;
  for( ; len >= 12ul; len = len - (unsigned long int)12)
  {
    a = a + (unsigned long int)k[(signed long int)0] + ((unsigned long int)k[(signed long int)1] << 8) + ((unsigned long int)k[(signed long int)2] << 16) + ((unsigned long int)k[(signed long int)3] << 24);
    b = b + (unsigned long int)k[(signed long int)4] + ((unsigned long int)k[(signed long int)5] << 8) + ((unsigned long int)k[(signed long int)6] << 16) + ((unsigned long int)k[(signed long int)7] << 24);
    c = c + (unsigned long int)k[(signed long int)8] + ((unsigned long int)k[(signed long int)9] << 8) + ((unsigned long int)k[(signed long int)10] << 16) + ((unsigned long int)k[(signed long int)11] << 24);
    a = a - b;
    a = a - c;
    a = a ^ c >> 13;
    b = b - c;
    b = b - a;
    b = b ^ a << 8;
    c = c - a;
    c = c - b;
    c = c ^ b >> 13;
    a = a - b;
    a = a - c;
    a = a ^ c >> 12;
    b = b - c;
    b = b - a;
    b = b ^ a << 16;
    c = c - a;
    c = c - b;
    c = c ^ b >> 5;
    a = a - b;
    a = a - c;
    a = a ^ c >> 3;
    b = b - c;
    b = b - a;
    b = b ^ a << 10;
    c = c - a;
    c = c - b;
    c = c ^ b >> 15;
    k = k + (signed long int)12;
  }
  c = c + length;
  switch(len)
  {
    case (unsigned long int)11:
      c = c + ((unsigned long int)k[(signed long int)10] << 24);
    case (unsigned long int)10:
      c = c + ((unsigned long int)k[(signed long int)9] << 16);
    case (unsigned long int)9:
      c = c + ((unsigned long int)k[(signed long int)8] << 8);
    case (unsigned long int)8:
      b = b + ((unsigned long int)k[(signed long int)7] << 24);
    case (unsigned long int)7:
      b = b + ((unsigned long int)k[(signed long int)6] << 16);
    case (unsigned long int)6:
      b = b + ((unsigned long int)k[(signed long int)5] << 8);
    case (unsigned long int)5:
      b = b + (unsigned long int)k[(signed long int)4];
    case (unsigned long int)4:
      a = a + ((unsigned long int)k[(signed long int)3] << 24);
    case (unsigned long int)3:
      a = a + ((unsigned long int)k[(signed long int)2] << 16);
    case (unsigned long int)2:
      a = a + ((unsigned long int)k[(signed long int)1] << 8);
    case (unsigned long int)1:
      a = a + (unsigned long int)k[(signed long int)0];
  }
  a = a - b;
  a = a - c;
  a = a ^ c >> 13;
  b = b - c;
  b = b - a;
  b = b ^ a << 8;
  c = c - a;
  c = c - b;
  c = c ^ b >> 13;
  a = a - b;
  a = a - c;
  a = a ^ c >> 12;
  b = b - c;
  b = b - a;
  b = b ^ a << 16;
  c = c - a;
  c = c - b;
  c = c ^ b >> 5;
  a = a - b;
  a = a - c;
  a = a ^ c >> 3;
  b = b - c;
  b = b - a;
  b = b ^ a << 10;
  c = c - a;
  c = c - b;
  c = c ^ b >> 15;
  return c;
}

// lookup_bytestring
// file addrtoname.c line 358
static inline struct enamemem * lookup_bytestring(const unsigned char *bs, const unsigned int nlen)
{
  struct enamemem *tp;
  unsigned int i;
  unsigned int j;
  unsigned int k;
  if(nlen >= 6u)
  {
    k = (unsigned int)((signed int)bs[(signed long int)0] << 8 | (signed int)bs[(signed long int)1]);
    j = (unsigned int)((signed int)bs[(signed long int)2] << 8 | (signed int)bs[(signed long int)3]);
    i = (unsigned int)((signed int)bs[(signed long int)4] << 8 | (signed int)bs[(signed long int)5]);
  }

  else
    if(nlen >= 4u)
    {
      k = (unsigned int)((signed int)bs[(signed long int)0] << 8 | (signed int)bs[(signed long int)1]);
      j = (unsigned int)((signed int)bs[(signed long int)2] << 8 | (signed int)bs[(signed long int)3]);
      i = (unsigned int)0;
    }

    else
    {
      k = (unsigned int)0;
      j = k;
      i = j;
    }
  tp = &bytestringtable[(signed long int)((i ^ j) & (unsigned int)(4096 - 1))];
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  signed int return_value_memcmp_3;
  while(!(tp->e_nxt == ((struct enamemem *)NULL)))
  {
    if((unsigned int)tp->e_addr0 == i)
      tmp_if_expr_1 = (unsigned int)tp->e_addr1 == j ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (unsigned int)tp->e_addr2 == k ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      return_value_memcmp_3=memcmp((const void *)(const char *)bs, (const void *)(const char *)tp->e_nsap, (unsigned long int)nlen);
      tmp_if_expr_4 = return_value_memcmp_3 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      return tp;

    else
      tp = tp->e_nxt;
  }
  tp->e_addr0 = (unsigned short int)i;
  tp->e_addr1 = (unsigned short int)j;
  tp->e_addr2 = (unsigned short int)k;
  void *return_value_calloc_5;
  return_value_calloc_5=calloc((unsigned long int)1, (unsigned long int)(nlen + (unsigned int)1));
  tp->e_nsap = (unsigned char *)return_value_calloc_5;
  memcpy((void *)tp->e_nsap, (const void *)bs, (unsigned long int)nlen);
  void *return_value_calloc_6;
  return_value_calloc_6=calloc((unsigned long int)1, sizeof(struct enamemem) /*32ul*/ );
  tp->e_nxt = (struct enamemem *)return_value_calloc_6;
  if(tp->e_nxt == ((struct enamemem *)NULL))
  {
    perror("lookup_bytestring: calloc");
    exit(1);
  }

  return tp;
}

// lookup_emem
// file addrtoname.c line 325
static inline struct enamemem * lookup_emem(const unsigned char *ep)
{
  unsigned int i;
  unsigned int j;
  unsigned int k;
  struct enamemem *tp;
  k = (unsigned int)((signed int)ep[(signed long int)0] << 8 | (signed int)ep[(signed long int)1]);
  j = (unsigned int)((signed int)ep[(signed long int)2] << 8 | (signed int)ep[(signed long int)3]);
  i = (unsigned int)((signed int)ep[(signed long int)4] << 8 | (signed int)ep[(signed long int)5]);
  tp = &enametable[(signed long int)((i ^ j) & (unsigned int)(4096 - 1))];
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  while(!(tp->e_nxt == ((struct enamemem *)NULL)))
  {
    if((unsigned int)tp->e_addr0 == i)
      tmp_if_expr_1 = (unsigned int)tp->e_addr1 == j ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (unsigned int)tp->e_addr2 == k ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      return tp;

    else
      tp = tp->e_nxt;
  }
  tp->e_addr0 = (unsigned short int)i;
  tp->e_addr1 = (unsigned short int)j;
  tp->e_addr2 = (unsigned short int)k;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct enamemem) /*32ul*/ );
  tp->e_nxt = (struct enamemem *)return_value_calloc_3;
  if(tp->e_nxt == ((struct enamemem *)NULL))
  {
    perror("lookup_emem: calloc");
    exit(1);
  }

  return tp;
}

// lookup_nsap
// file addrtoname.c line 400
static inline struct enamemem * lookup_nsap(const unsigned char *nsap)
{
  unsigned int i;
  unsigned int j;
  unsigned int k;
  unsigned int nlen = (unsigned int)*nsap;
  struct enamemem *tp;
  const unsigned char *ensap = (nsap + (signed long int)nlen) - (signed long int)6;
  if(nlen >= 7u)
  {
    k = (unsigned int)((signed int)ensap[(signed long int)0] << 8 | (signed int)ensap[(signed long int)1]);
    j = (unsigned int)((signed int)ensap[(signed long int)2] << 8 | (signed int)ensap[(signed long int)3]);
    i = (unsigned int)((signed int)ensap[(signed long int)4] << 8 | (signed int)ensap[(signed long int)5]);
  }

  else
  {
    k = (unsigned int)0;
    j = k;
    i = j;
  }
  tp = &nsaptable[(signed long int)((i ^ j) & (unsigned int)(4096 - 1))];
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  signed int return_value_memcmp_4;
  while(!(tp->e_nxt == ((struct enamemem *)NULL)))
  {
    if((unsigned int)tp->e_addr0 == i)
      tmp_if_expr_1 = (unsigned int)tp->e_addr1 == j ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (unsigned int)tp->e_addr2 == k ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (unsigned int)tp->e_nsap[(signed long int)0] == nlen ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
    {
      return_value_memcmp_4=memcmp((const void *)(const char *)&nsap[(signed long int)1], (const void *)(char *)&tp->e_nsap[(signed long int)1], (unsigned long int)nlen);
      tmp_if_expr_5 = return_value_memcmp_4 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
      return tp;

    else
      tp = tp->e_nxt;
  }
  tp->e_addr0 = (unsigned short int)i;
  tp->e_addr1 = (unsigned short int)j;
  tp->e_addr2 = (unsigned short int)k;
  void *return_value_malloc_6;
  return_value_malloc_6=malloc((unsigned long int)(nlen + (unsigned int)1));
  tp->e_nsap = (unsigned char *)return_value_malloc_6;
  if(tp->e_nsap == ((unsigned char *)NULL))
  {
    perror("lookup_nsap: malloc");
    exit(1);
  }

  memcpy((void *)(char *)tp->e_nsap, (const void *)(const char *)nsap, (unsigned long int)(nlen + (unsigned int)1));
  void *return_value_calloc_7;
  return_value_calloc_7=calloc((unsigned long int)1, sizeof(struct enamemem) /*32ul*/ );
  tp->e_nxt = (struct enamemem *)return_value_calloc_7;
  if(tp->e_nxt == ((struct enamemem *)NULL))
  {
    perror("lookup_nsap: calloc");
    exit(1);
  }

  return tp;
}

// lookup_protoid
// file addrtoname.c line 443
static inline struct protoidmem * lookup_protoid(const unsigned char *pi)
{
  unsigned int i;
  unsigned int j;
  struct protoidmem *tp;
  i = (unsigned int)((((signed int)pi[(signed long int)0] << 8) + (signed int)pi[(signed long int)1] << 8) + (signed int)pi[(signed long int)2]);
  j = (unsigned int)(((signed int)pi[(signed long int)3] << 8) + (signed int)pi[(signed long int)4]);
  tp = &protoidtable[(signed long int)((i ^ j) & (unsigned int)(4096 - 1))];
  _Bool tmp_if_expr_1;
  while(!(tp->p_nxt == ((struct protoidmem *)NULL)))
  {
    if(tp->p_oui == i)
      tmp_if_expr_1 = (unsigned int)tp->p_proto == j ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      return tp;

    else
      tp = tp->p_nxt;
  }
  tp->p_oui = i;
  tp->p_proto = (unsigned short int)j;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct protoidmem) /*24ul*/ );
  tp->p_nxt = (struct protoidmem *)return_value_calloc_2;
  if(tp->p_nxt == ((struct protoidmem *)NULL))
  {
    perror("lookup_protoid: calloc");
    exit(1);
  }

  return tp;
}

// main
// file trafshow.c line 89
signed int main(signed int argc, char **argv)
{
  char buf[256l];
  char *dev_name = ((char *)NULL);
  char *filter = ((char *)NULL);
  struct pcap_if *dev_list = ((struct pcap_if *)NULL);
  struct pcap_handler *ph_list = ((struct pcap_handler *)NULL);
  signed int op;
  signed int udp_port = 9995;
  struct anonymous_29 sigset;
  unsigned long int show_thr;
  unsigned long int sig_thr;
  unsigned long int pcap_thr;
  char *return_value_strip_path_1;
  return_value_strip_path_1=strip_path(argv[(signed long int)0]);
  progname=strdup(return_value_strip_path_1);
  signed int return_value_gethostname_2;
  return_value_gethostname_2=gethostname(buf, sizeof(char [256l]) /*256ul*/ );
  if(!(return_value_gethostname_2 >= 0))
    strcpy(buf, "localhost");

  hostname=strdup(buf);
  signed int return_value_pcap_findalldevs_3;
  return_value_pcap_findalldevs_3=pcap_findalldevs(&dev_list, buf);
  if(!(return_value_pcap_findalldevs_3 >= 0))
  {
    fprintf(stderr, "pcap_findalldevs: %s\n", (const void *)buf);
    exit(1);
  }

  opterr = 0;
  do
  {
    op=getopt(argc, argv, "a:bc:i:ns:u:pF:R:P:vh?");
    if(op == -1)
      break;

    switch(op)
    {
      case 97:
      {
        aggregate=atoi(optarg);
        if(aggregate >= 33 || !(aggregate >= 0))
          usage();

        break;
      }
      case 98:
      {
        popbackflow = 1;
        break;
      }
      case 99:
      {
        color_conf = optarg;
        break;
      }
      case 105:
      {
        dev_name = optarg;
        break;
      }
      case 110:
      {
        nflag = 1;
        break;
      }
      case 115:
      {
        search=strdup(optarg);
        break;
      }
      case 117:
      {
        udp_port=atoi(optarg);
        break;
      }
      case 112:
      {
        promisc = 0;
        break;
      }
      case 70:
      {
        filter = optarg;
        break;
      }
      case 82:
      {
        refresh_time=atoi(optarg);
        if(!(refresh_time >= 1))
          usage();

        break;
      }
      case 80:
      {
        purge_time=atoi(optarg);
        if(!(purge_time >= 1))
          usage();

        break;
      }
      case 118:
        vers();
      case 104:

      case 63:

      default:
        usage();
    }
  }
  while((_Bool)1);
  if(!(dev_name == ((char *)NULL)))
  {
    dev_list=pcap_matchdev(dev_list, dev_name);
    if(dev_list == ((struct pcap_if *)NULL))
    {
      fprintf(stderr, "Interface %s not found\n", dev_name);
      exit(1);
    }

  }

  if(refresh_time >= purge_time)
  {
    fprintf(stderr, "Refresh Time (%d sec) must be less than Purge Time (%d sec)\n", refresh_time, purge_time);
    exit(1);
  }

  op=pcap_init(&ph_list, dev_list);
  if(!(op >= 1))
  {
    fprintf(stderr, "No packet capture device available (no permission?)\n");
    exit(1);
  }

  signed int return_value_cisco_netflow_init_4;
  if(udp_port >= 2)
  {
    return_value_cisco_netflow_init_4=cisco_netflow_init(&ph_list, udp_port);
    if(!(return_value_cisco_netflow_init_4 >= 0))
    {
      fprintf(stderr, "Can't start cisco-netflow collector at UDP port %d\n", udp_port);
      exit(1);
    }

  }

  if(op == 1 && !(ph_list == ((struct pcap_handler *)NULL)))
  {
    ph_list->selected = 1;
    show_mode = (enum anonymous_13)NetStat;
  }

  unsigned int return_value_getuid_5;
  return_value_getuid_5=getuid();
  setuid(return_value_getuid_5);
  if(!(ph_list == ((struct pcap_handler *)NULL)))
  {
    if(!(argv[(signed long int)optind] == ((char *)NULL)) || !(filter == ((char *)NULL)))
    {
      if(!(filter == ((char *)NULL)))
        expression=load_file(filter);

      else
        expression=copy_argv(&argv[(signed long int)optind]);
      if(expression == ((char *)NULL))
        exit(1);

      filter=pcap_setexpr(ph_list, expression);
      if(!(filter == ((char *)NULL)))
      {
        fprintf(stderr, "%s\n", filter);
        exit(1);
      }

    }

  }

  init_addrtoname();
  signed int return_value_screen_open_6;
  return_value_screen_open_6=screen_open(0);
  if(!(return_value_screen_open_6 >= 0))
  {
    screen_close();
    exit(1);
  }

  atexit(cleanup);
  show_thr=pthread_self();
  sigemptyset(&sigset);
  sigaddset(&sigset, 28);
  sigprocmask(0, &sigset, ((struct anonymous_29 *)NULL));
  signed int return_value_pthread_create_7;
  return_value_pthread_create_7=pthread_create(&sig_thr, ((const union pthread_attr_t *)NULL), catch_signals, (void *)&sigset);
  if(!(return_value_pthread_create_7 == 0))
  {
    perror("pthread_create(catch_signals)");
    exit(1);
  }

  signed int return_value_pthread_create_10;
  if(!(ph_list == ((struct pcap_handler *)NULL)))
  {
    struct pcap_handler *ph = ph_list;
    for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
    {
      signed int return_value_pcap_get_selectable_fd_8;
      return_value_pcap_get_selectable_fd_8=pcap_get_selectable_fd(ph->pcap);
      if(!(return_value_pcap_get_selectable_fd_8 >= 0))
        break;

    }
    if(ph == ((struct pcap_handler *)NULL))
    {
      signed int return_value_pthread_create_9;
      return_value_pthread_create_9=pthread_create(&pcap_thr, ((const union pthread_attr_t *)NULL), pcap_feed2, (void *)ph_list);
      if(!(return_value_pthread_create_9 == 0))
      {
        perror("pthread_create(pcap_feed2)");
        exit(1);
      }

    }

    else
    {
      return_value_pthread_create_10=pthread_create(&pcap_thr, ((const union pthread_attr_t *)NULL), pcap_feed, (void *)ph_list);
      if(!(return_value_pthread_create_10 == 0))
      {
        perror("pthread_create(pcap_feed)");
        exit(1);
      }

    }
  }

  traf_show((void *)ph_list);
  exit(0);
}

// maskit
// file netstat.c line 45
static void maskit(unsigned char *bp, signed int len, signed int bits)
{
  unsigned char mask;
  signed int i;
  signed int j;
  i = 0;
  for( ; !(i >= len); i = i + 1)
  {
    mask = (unsigned char)0;
    j = 0;
    for( ; bits >= 1 && !(j >= 8); bits = bits - 1)
    {
      mask = mask >> 1;
      mask = mask | (unsigned char)0x80;
      j = j + 1;
    }
    bp[(signed long int)i] = bp[(signed long int)i] & mask;
  }
}

// match_feeder
// file cisco_netflow.c line 98
static struct pcap_handler * match_feeder(struct pcap_handler *ph, struct sockaddr *sa)
{
  const struct pcap_addr *ap;
  _Bool tmp_if_expr_1;
  if(sa == ((struct sockaddr *)NULL))
    return ((struct pcap_handler *)NULL);

  else
  {
    for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
      if(ph->pcap == ((struct pcap *)NULL))
      {
        ap = ph->addr;
        for( ; !(ap == ((const struct pcap_addr *)NULL)); ap = ap->next)
        {
          if(ap->addr == ((struct sockaddr *)NULL))
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = ap->addr->sa_family != sa->sa_family ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_1)
          {
            if((signed int)ap->addr->sa_family == 2)
            {
              signed int return_value_memcmp_2;
              return_value_memcmp_2=memcmp((const void *)&((struct sockaddr_in *)ap->addr)->sin_addr, (const void *)&((struct sockaddr_in *)sa)->sin_addr, sizeof(struct in_addr) /*4ul*/ );
              if(return_value_memcmp_2 == 0)
                return ph;

            }

          }

        }
      }

    return ((struct pcap_handler *)NULL);
  }
}

// name_resolved
// file addrtoname.c line 216
static void name_resolved(void *unused, struct domain_data_ent *dd)
{
  struct hnamemem *p;
  if(!(dd == ((struct domain_data_ent *)NULL)) && unused == NULL)
  {
    p = &hnametable[(signed long int)(dd->addr & (unsigned int)(4096 - 1))];
    for( ; !(p->nxt == ((struct hnamemem *)NULL)); p = p->nxt)
      if(p->addr == dd->addr)
      {
        if(!(p->name == ((const char *)NULL)))
          free((void *)(char *)p->name);

        p->name=strdup(dd->name);
        p->resolving = 2;
        break;
      }

    domain_data_free(&dd, ((const char *)NULL));
  }

}

// nameserver_close
// file domain_resolver.c line 242
static void nameserver_close(struct session_ent *sd)
{
  struct domain_transact_ent *dt;
  const void *return_value_session_cookie_1;
  return_value_session_cookie_1=session_cookie(sd);
  dt = (struct domain_transact_ent *)return_value_session_cookie_1;
  session_free(sd);
  _Bool tmp_if_expr_2;
  if(!(dt == ((struct domain_transact_ent *)NULL)))
  {
    if(!(dt->data == ((struct domain_data_ent *)NULL)))
    {
      if(!((signed int)dt->type == DomainName))
        domain_data_free(&dt->data, "");

      else
      {
        if(dt->data->addr == 0u)
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = dt->data->addr == (unsigned int)-1 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
          memcpy((void *)&dt->data->addr, (const void *)dt->name, sizeof(unsigned int) /*4ul*/ );

      }
    }

    if(!(dt->callback == ((void (*)(struct session_ent *, struct domain_data_ent *))NULL)))
    {
      dt->callback(dt->sd, dt->data);
      dt->data = ((struct domain_data_ent *)NULL);
    }

    free_transact(dt);
  }

}

// nameserver_error
// file domain_resolver.c line 218
static void nameserver_error(struct session_ent *sd, signed int error)
{
  struct domain_transact_ent *dt;
  const void *return_value_session_cookie_1;
  return_value_session_cookie_1=session_cookie(sd);
  dt = (struct domain_transact_ent *)return_value_session_cookie_1;
  if(!(dt == ((struct domain_transact_ent *)NULL)) && !(sd == ((struct session_ent *)NULL)))
  {
    if(!(error == 110))
      goto __CPROVER_DUMP_L1;

    dt->retry = dt->retry + 1;
    if(dt->retry >= 3)
      goto __CPROVER_DUMP_L1;

    nameserver_send(sd);
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    nameserver_close(sd);
  }
}

// nameserver_reply
// file domain_resolver.c line 589
static void nameserver_reply(struct session_ent *sd, const unsigned char *data, signed int len)
{
  struct domain_transact_ent *dt;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if(!(sd == ((struct session_ent *)NULL)))
  {
    dt=parse_packet(data, len);
    if(!(dt == ((struct domain_transact_ent *)NULL)))
    {
      if(dt->rcode >= 0)
      {
        if(dt->rcode == 0)
        {
          if((signed int)dt->type == MailExchanger)
            tmp_if_expr_5 = (_Bool)1;

          else
          {
            if((signed int)dt->type == IpAddress)
              tmp_if_expr_3 = dt->expand != 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_3 = (_Bool)0;
            if(tmp_if_expr_3)
              tmp_if_expr_4 = (signed int)dt->expand < 3 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_4 = (_Bool)0;
            tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_5)
          {
            struct domain_data_ent *dd = dt->data;
            for( ; !(dd == ((struct domain_data_ent *)NULL)); dd = dd->next)
              if(!(dd->name == ((char *)NULL)))
              {
                if(dd->addr == 0u)
                {
                  if(!(dt->domain == ((char *)NULL)))
                  {
                    signed int return_value_strcasecmp_1;
                    return_value_strcasecmp_1=strcasecmp(dd->name, dt->domain);
                    if(return_value_strcasecmp_1 == 0)
                      break;

                    free((void *)dt->domain);
                  }

                  dt->domain=strdup(dd->name);
                  if(dt->domain == ((char *)NULL))
                    break;

                  dt->reqid=unique_reqid();
                  dt->expand = dt->expand + 1;
                  dt->retry = 0;
                  dt->type = (enum anonymous_14)IpAddress;
                  signed int return_value_nameserver_send_2;
                  return_value_nameserver_send_2=nameserver_send(sd);
                  if(!(return_value_nameserver_send_2 >= 0))
                    break;

                  goto __CPROVER_DUMP_L15;
                }

              }

          }

        }

        nameserver_close(sd);
      }

    }

  }


__CPROVER_DUMP_L15:
  ;
}

// nameserver_request
// file domain_resolver.c line 459
static signed int nameserver_request(const char *domain, enum anonymous_14 type, struct session_ent *org, void (*notify)(struct session_ent *, struct domain_data_ent *))
{
  struct session_ent *sd;
  struct domain_transact_ent *dt;
  char buf[1025l];
  const unsigned char *cp;
  _Bool tmp_if_expr_2;
  if(domain == ((const char *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(*domain != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  signed int return_value_domain_resolver_init_3;
  void *return_value_malloc_6;
  _Bool tmp_if_expr_9;
  signed int return_value_session_bind_13;
  if(primary == ((struct sockaddr_in *)NULL))
  {
    return_value_domain_resolver_init_3=domain_resolver_init();
    if(return_value_domain_resolver_init_3 >= 0)
      goto __CPROVER_DUMP_L4;

    return -1;
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    sd=session_open(-1, (struct sockaddr *)primary, (enum anonymous_6)DataSequence);
    if(sd == ((struct session_ent *)NULL))
      return -1;

    else
    {
      dt=new_transact();
      if(dt == ((struct domain_transact_ent *)NULL))
      {
        signed int save_errno;
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        save_errno = *return_value___errno_location_4;
        session_free(sd);
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        *return_value___errno_location_5 = save_errno;
        return -1;
      }

      switch((signed int)type)
      {
        case IpAddress:

        case MailExchanger:
        {
          dt->name=strdup(domain);
          strncpy(buf, domain, sizeof(char [1025l]) /*1025ul*/ );
          buf[(signed long int)(sizeof(char [1025l]) /*1025ul*/  - (unsigned long int)1)] = (char)0;
          dt->domain=strdup(buf);
          break;
        }
        case DomainName:
        {
          return_value_malloc_6=malloc(sizeof(unsigned int) /*4ul*/ );
          dt->name = (char *)return_value_malloc_6;
          if(dt->name == ((char *)NULL))
            break;

          memcpy((void *)dt->name, (const void *)domain, sizeof(unsigned int) /*4ul*/ );
          cp = (unsigned char *)domain;
          snprintf(buf, sizeof(char [1025l]) /*1025ul*/ , "%d.%d.%d.%d.in-addr.arpa", cp[(signed long int)3], cp[(signed long int)2], cp[(signed long int)1], cp[(signed long int)0]);
          dt->domain=strdup(buf);
        }
      }
      if(dt->name == ((char *)NULL))
        tmp_if_expr_9 = (_Bool)1;

      else
        tmp_if_expr_9 = !(dt->domain != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_9)
      {
        signed int nameserver_request__1__4__save_errno;
        signed int *return_value___errno_location_7;
        return_value___errno_location_7=__errno_location();
        nameserver_request__1__4__save_errno = *return_value___errno_location_7;
        session_free(sd);
        free_transact(dt);
        signed int *return_value___errno_location_8;
        return_value___errno_location_8=__errno_location();
        *return_value___errno_location_8 = nameserver_request__1__4__save_errno;
        return -1;
      }

      dt->reqid=unique_reqid();
      dt->type = type;
      session_setcallback(sd, ((void (*)(struct session_ent *))NULL), nameserver_error, nameserver_reply);
      session_setcookie(sd, (const void *)dt);
      session_settimeout(sd, (unsigned int)10);
      signed int return_value_nameserver_send_12;
      return_value_nameserver_send_12=nameserver_send(sd);
      if(!(return_value_nameserver_send_12 >= 0))
      {
        signed int nameserver_request__1__5__save_errno;
        signed int *return_value___errno_location_10;
        return_value___errno_location_10=__errno_location();
        nameserver_request__1__5__save_errno = *return_value___errno_location_10;
        session_free(sd);
        free_transact(dt);
        signed int *return_value___errno_location_11;
        return_value___errno_location_11=__errno_location();
        *return_value___errno_location_11 = nameserver_request__1__5__save_errno;
        return -1;
      }

      if(!(org == ((struct session_ent *)NULL)))
      {
        return_value_session_bind_13=session_bind(org, discard_request, (void *)dt);
        if(!(return_value_session_bind_13 == -1))
          dt->sd = org;

      }

      dt->callback = notify;
      return 0;
    }
  }
}

// nameserver_send
// file domain_resolver.c line 538
static signed int nameserver_send(struct session_ent *sd)
{
  struct domain_transact_ent *dt;
  const void *return_value_session_cookie_1;
  return_value_session_cookie_1=session_cookie(sd);
  dt = (struct domain_transact_ent *)return_value_session_cookie_1;
  unsigned char buf[512l];
  struct anonymous_15 *hp = (struct anonymous_15 *)buf;
  signed int len;
  unsigned char *cp;
  unsigned char *dnptrs[50l];
  unsigned char **dpp;
  unsigned char **lastdnptr;
  if(dt == ((struct domain_transact_ent *)NULL))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 22;
    return -1;
  }

  memset((void *)hp, 0, (unsigned long int)12);
  unsigned short int return_value_htons_3;
  return_value_htons_3=htons(dt->reqid);
  hp->id = (unsigned int)return_value_htons_3;
  hp->rd = (unsigned int)1;
  unsigned short int return_value_htons_4;
  return_value_htons_4=htons((unsigned short int)1);
  hp->qdcount = (unsigned int)return_value_htons_4;
  cp = buf + (signed long int)12;
  len = 512 - (12 + 4);
  dpp = dnptrs;
  unsigned char **tmp_post_5 = dpp;
  dpp = dpp + 1l;
  *tmp_post_5 = buf;
  *dpp = ((unsigned char *)NULL);
  lastdnptr = dnptrs + (signed long int)(sizeof(unsigned char *[50l]) /*400ul*/  / sizeof(unsigned char *) /*8ul*/ );
  len=__dn_comp(dt->domain, cp, len, dnptrs, lastdnptr);
  unsigned char *tmp_post_6;
  unsigned char *tmp_post_7;
  unsigned char *tmp_post_8;
  unsigned char *tmp_post_9;
  signed int return_value_session_send_10;
  if(!(len >= 0))
    return -1;

  else
  {
    cp = cp + (signed long int)len;
    switch((signed int)dt->type)
    {
      case IpAddress:
      {
        do
        {
          unsigned short int nameserver_send__1__2__1__t_s = (unsigned short int)1;
          unsigned char *nameserver_send__1__2__1__t_cp = (unsigned char *)cp;
          tmp_post_6 = nameserver_send__1__2__1__t_cp;
          nameserver_send__1__2__1__t_cp = nameserver_send__1__2__1__t_cp + 1l;
          *tmp_post_6 = (unsigned char)((signed int)nameserver_send__1__2__1__t_s >> 8);
          *nameserver_send__1__2__1__t_cp = (unsigned char)nameserver_send__1__2__1__t_s;
          cp = cp + (signed long int)2;
        }
        while((_Bool)0);
        goto __CPROVER_DUMP_L6;
      }
      case DomainName:
      {
        do
        {
          unsigned short int nameserver_send__1__2__2__t_s = (unsigned short int)12;
          unsigned char *t_cp = (unsigned char *)cp;
          tmp_post_7 = t_cp;
          t_cp = t_cp + 1l;
          *tmp_post_7 = (unsigned char)((signed int)nameserver_send__1__2__2__t_s >> 8);
          *t_cp = (unsigned char)nameserver_send__1__2__2__t_s;
          cp = cp + (signed long int)2;
        }
        while((_Bool)0);
        goto __CPROVER_DUMP_L6;
      }
      case MailExchanger:
        do
        {
          unsigned short int t_s = (unsigned short int)15;
          unsigned char *nameserver_send__1__2__3__t_cp = (unsigned char *)cp;
          tmp_post_8 = nameserver_send__1__2__3__t_cp;
          nameserver_send__1__2__3__t_cp = nameserver_send__1__2__3__t_cp + 1l;
          *tmp_post_8 = (unsigned char)((signed int)t_s >> 8);
          *nameserver_send__1__2__3__t_cp = (unsigned char)t_s;
          cp = cp + (signed long int)2;
        }
        while((_Bool)0);
      default:
      {
        do
        {

        __CPROVER_DUMP_L6:
          ;
          unsigned short int nameserver_send__1__3__t_s = (unsigned short int)1;
          unsigned char *nameserver_send__1__3__t_cp = (unsigned char *)cp;
          tmp_post_9 = nameserver_send__1__3__t_cp;
          nameserver_send__1__3__t_cp = nameserver_send__1__3__t_cp + 1l;
          *tmp_post_9 = (unsigned char)((signed int)nameserver_send__1__3__t_s >> 8);
          *nameserver_send__1__3__t_cp = (unsigned char)nameserver_send__1__3__t_s;
          cp = cp + (signed long int)2;
        }
        while((_Bool)0);
        len = (signed int)(cp - buf);
        return_value_session_send_10=session_send(sd, buf, len);
        return return_value_session_send_10;
      }
    }
  }
}

// netmask
// file colormask.c line 528
static unsigned int netmask(signed int bits)
{
  unsigned int mask = (unsigned int)0;
  signed int i = 0;
  for( ; !(i >= bits); i = i + 1)
  {
    mask = mask >> 1;
    mask = mask | (unsigned int)0x80000000L;
  }
  unsigned int return_value_htonl_1;
  return_value_htonl_1=htonl(mask);
  return (unsigned int)return_value_htonl_1;
}

// netstat_aggregate
// file netstat.h line 132
void netstat_aggregate(struct netstat_header *nh, signed int bits)
{
  signed int return_value_isservport_1;
  if(!(nh == ((struct netstat_header *)NULL)) && bits >= 0)
  {
    memset((void *)&nh->en_hdr.src, 0, sizeof(unsigned char [6l]) /*6ul*/ );
    memset((void *)&nh->en_hdr.dst, 0, sizeof(unsigned char [6l]) /*6ul*/ );
    if(!(nh->in_hdr.ver == 0))
    {
      struct ip_address *src = &nh->in_hdr.src;
      struct ip_address *dst = &nh->in_hdr.dst;
      maskit((unsigned char *)&src->ipaddr, (signed int)sizeof(union anonymous_16) /*4ul*/ , bits);
      maskit((unsigned char *)&dst->ipaddr, (signed int)sizeof(union anonymous_16) /*4ul*/ , bits);
      if(!(src->ip_port == 0))
      {
        if(!(dst->ip_port == 0))
        {
          unsigned short int sport;
          sport=ntohs(src->ip_port);
          unsigned short int dport;
          dport=ntohs(dst->ip_port);
          signed int return_value_isservport_2;
          return_value_isservport_2=isservport(sport);
          if(!(return_value_isservport_2 == 0))
            dst->ip_port = (unsigned short int)0;

          else
          {
            return_value_isservport_1=isservport(dport);
            if(!(return_value_isservport_1 == 0))
              src->ip_port = (unsigned short int)0;

            else
              if(!((signed int)sport >= 1024))
                dst->ip_port = (unsigned short int)0;

              else
                if(!((signed int)dport >= 1024))
                  src->ip_port = (unsigned short int)0;

                else
                  if((signed int)sport >= 49152)
                    src->ip_port = (unsigned short int)0;

                  else
                    if((signed int)dport >= 49152)
                      dst->ip_port = (unsigned short int)0;

                    else
                      if(!((signed int)dport >= (signed int)sport))
                        src->ip_port = (unsigned short int)0;

                      else
                        dst->ip_port = (unsigned short int)0;
          }
        }

      }

    }

  }

}

// netstat_bidir
// file netstat.h line 139
signed int netstat_bidir(const struct netstat *p1, const struct netstat *p2)
{
  signed int return_value_memcmp_2;
  signed int return_value_memcmp_1;
  signed int return_value_memcmp_4;
  signed int return_value_memcmp_3;
  if(p1 == ((const struct netstat *)NULL) || p2 == ((const struct netstat *)NULL))
    return 0;

  else
  {
    if(!(p1->ns_hdr.in_hdr.ver == 0))
    {
      if(p1->ns_hdr.in_hdr.ver == p2->ns_hdr.in_hdr.ver)
      {
        if(p1->ns_hdr.in_hdr.proto == p2->ns_hdr.in_hdr.proto)
        {
          return_value_memcmp_2=memcmp((const void *)&p1->ns_hdr.in_hdr.src, (const void *)&p2->ns_hdr.in_hdr.dst, sizeof(struct ip_address) /*8ul*/ );
          if(return_value_memcmp_2 == 0)
          {
            return_value_memcmp_1=memcmp((const void *)&p2->ns_hdr.in_hdr.src, (const void *)&p1->ns_hdr.in_hdr.dst, sizeof(struct ip_address) /*8ul*/ );
            if(return_value_memcmp_1 == 0)
              return 1;

          }

        }

      }

    }

    else
      if(p2->ns_hdr.in_hdr.ver == 0)
      {
        if(p1->ns_hdr.en_hdr.type == p2->ns_hdr.en_hdr.type)
        {
          return_value_memcmp_4=memcmp((const void *)p1->ns_hdr.en_hdr.src, (const void *)p2->ns_hdr.en_hdr.dst, (unsigned long int)6);
          if(return_value_memcmp_4 == 0)
          {
            return_value_memcmp_3=memcmp((const void *)p2->ns_hdr.en_hdr.src, (const void *)p1->ns_hdr.en_hdr.dst, (unsigned long int)6);
            if(return_value_memcmp_3 == 0)
              return 1;

          }

        }

      }

    return 0;
  }
}

// netstat_count
// file netstat.h line 133
signed int netstat_count(const struct pcap_handler *ph)
{
  _Bool tmp_if_expr_1;
  if(ph == ((const struct pcap_handler *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(ph->ns_hash != ((struct htab *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return 0;

  else
    return (signed int)ph->ns_hash->count;
}

// netstat_fetch
// file netstat.h line 140
signed int netstat_fetch(struct netstat ***list, struct pcap_handler *ph)
{
  struct htab *ht;
  signed int op;
  signed int cnt;
  signed int i;
  struct netstat *ns;
  struct netstat **array;
  if(list == ((struct netstat ***)NULL) || ph == ((struct pcap_handler *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  cnt=netstat_count(ph);
  signed int tmp_post_3;
  signed int tmp_if_expr_6;
  signed int tmp_if_expr_5;
  signed int return_value_hnbucket_4;
  if(!(cnt >= 1))
  {
    if(!(*list == ((struct netstat **)NULL)))
      free((void *)*list);

    *list = ((struct netstat **)NULL);
    return 0;
  }

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)cnt * sizeof(struct netstat *) /*8ul*/ );
    array = (struct netstat **)return_value_malloc_2;
    if(array == ((struct netstat **)NULL))
      return -1;

    else
    {
      if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
        pthread_mutex_lock(ph->ns_mutex);

      ht = ph->ns_hash;
      ph->pkt_cnt = (unsigned long int)0;
      ph->pkt_len = (unsigned long int)0;
      ph->data_len = (unsigned long int)0;
      ph->pkt_cnt_rate = (unsigned long int)0;
      ph->pkt_len_rate = (unsigned long int)0;
      ph->data_len_rate = (unsigned long int)0;
      op=hfirst(ht);
      i = 0;
      while(!(op == 0) && !(i >= cnt))
      {
        ns = (struct netstat *)ht->ipos->stuff;
        if(!(ns == ((struct netstat *)NULL)))
        {
          tmp_post_3 = i;
          i = i + 1;
          array[(signed long int)tmp_post_3] = ns;
          ph->pkt_cnt = ph->pkt_cnt + (unsigned long int)ns->pkt_cnt;
          ph->pkt_len = ph->pkt_len + (unsigned long int)ns->pkt_len;
          ph->data_len = ph->data_len + (unsigned long int)ns->data_len;
          ph->pkt_cnt_rate = ph->pkt_cnt_rate + (unsigned long int)ns->pkt_cnt_rate;
          ph->pkt_len_rate = ph->pkt_len_rate + (unsigned long int)ns->pkt_len_rate;
          ph->data_len_rate = ph->data_len_rate + (unsigned long int)ns->data_len_rate;
        }

        if(ht->ipos == ((struct hitem *)NULL))
          tmp_if_expr_6 = 0;

        else
        {
          ht->ipos = ht->ipos->next;
          if(!(ht->ipos == ((struct hitem *)NULL)))
            tmp_if_expr_5 = 1;

          else
          {
            return_value_hnbucket_4=hnbucket(ht);
            tmp_if_expr_5 = return_value_hnbucket_4;
          }
          tmp_if_expr_6 = tmp_if_expr_5;
        }
        op = tmp_if_expr_6;
      }
      if(!(*list == ((struct netstat **)NULL)))
        free((void *)*list);

      *list = array;
      if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
        pthread_mutex_unlock(ph->ns_mutex);

      return i;
    }
  }
}

// netstat_find
// file netstat.c line 207
signed int netstat_find(struct pcap_handler *ph, struct netstat *ns)
{
  struct htab *ht;
  unsigned char *key;
  unsigned long int keyl;
  struct netstat *found;
  signed int ok = 0;
  _Bool tmp_if_expr_2;
  signed int return_value_netstat_count_1;
  if(ns == ((struct netstat *)NULL) || ph == ((struct pcap_handler *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_netstat_count_1=netstat_count(ph);
    tmp_if_expr_2 = return_value_netstat_count_1 < 1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return 0;

  else
  {
    if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
      pthread_mutex_lock(ph->ns_mutex);

    ht = ph->ns_hash;
    key = (unsigned char *)&ns->ns_hdr;
    keyl = sizeof(struct netstat_header) /*36ul*/ ;
    signed int return_value_hfind_3;
    return_value_hfind_3=hfind(ht, key, keyl);
    if(!(return_value_hfind_3 == 0))
    {
      found = (struct netstat *)ht->ipos->stuff;
      if(!(found == ((struct netstat *)NULL)))
      {
        ok = 1;
        *ns = *found;
      }

    }

    if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
      pthread_mutex_unlock(ph->ns_mutex);

    return ok;
  }
}

// netstat_free
// file netstat.h line 137
void netstat_free(struct pcap_handler *ph)
{
  struct htab *ht;
  if(!(ph == ((struct pcap_handler *)NULL)))
  {
    netstat_purge(ph, ((struct timeval *)NULL));
    if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
      pthread_mutex_lock(ph->ns_mutex);

    ht = ph->ns_hash;
    ph->ns_hash = ((struct htab *)NULL);
    if(!(ht == ((struct htab *)NULL)))
      hdestroy(ht);

    if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
      pthread_mutex_unlock(ph->ns_mutex);

  }

}

// netstat_insert
// file netstat.h line 134
signed int netstat_insert(struct pcap_handler *ph, const struct netstat *ns)
{
  signed int op;
  struct netstat ns_buf;
  if(ns == ((const struct netstat *)NULL) || ph == ((struct pcap_handler *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  if(ph->ns_hash == ((struct htab *)NULL))
  {
    ph->ns_hash=hcreate(65536);
    if(!(ph->ns_hash == ((struct htab *)NULL)))
      goto __CPROVER_DUMP_L2;

    return -1;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    if(ph->masklen >= 0)
    {
      memcpy((void *)&ns_buf, (const void *)ns, sizeof(struct netstat) /*96ul*/ );
      netstat_aggregate(&ns_buf.ns_hdr, ph->masklen);
      ns = &ns_buf;
    }

    if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
      pthread_mutex_lock(ph->ns_mutex);

    op=htab_insert(ph->ns_hash, ns);
    if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
      pthread_mutex_unlock(ph->ns_mutex);

    return op;
  }
}

// netstat_match
// file netstat.h line 138
signed int netstat_match(const struct netstat *p1, const struct netstat *p2)
{
  if(p1 == ((const struct netstat *)NULL) || p2 == ((const struct netstat *)NULL))
    return 0;

  else
  {
    signed int return_value_memcmp_1;
    return_value_memcmp_1=memcmp((const void *)&p1->ns_hdr, (const void *)&p2->ns_hdr, sizeof(struct netstat_header) /*36ul*/ );
    return (signed int)!(return_value_memcmp_1 != 0);
  }
}

// netstat_purge
// file netstat.h line 136
signed int netstat_purge(struct pcap_handler *ph, struct timeval *at)
{
  struct htab *ht;
  signed int op;
  signed int cnt = 0;
  struct netstat *ns;
  if(ph == ((struct pcap_handler *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  signed int return_value_netstat_count_2;
  return_value_netstat_count_2=netstat_count(ph);
  _Bool tmp_if_expr_7;
  signed int tmp_if_expr_6;
  signed int tmp_if_expr_5;
  signed int tmp_if_expr_4;
  signed int return_value_hnbucket_3;
  if(!(return_value_netstat_count_2 >= 1))
    return 0;

  else
  {
    if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
      pthread_mutex_lock(ph->ns_mutex);

    ht = ph->ns_hash;
    op=hfirst(ht);
    while(!(op == 0))
    {
      if(!(ht->count >= 1ul))
        break;

      ns = (struct netstat *)ht->ipos->stuff;
      if(ns == ((struct netstat *)NULL))
        op=hdel(ht);

      else
      {
        if(at == ((struct timeval *)NULL))
          tmp_if_expr_7 = (_Bool)1;

        else
        {
          if(ns->mtime.tv_sec == at->tv_sec)
            tmp_if_expr_6 = (signed int)((&ns->mtime)->tv_usec < at->tv_usec);

          else
            tmp_if_expr_6 = (signed int)((&ns->mtime)->tv_sec < at->tv_sec);
          tmp_if_expr_7 = tmp_if_expr_6 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_7)
        {
          free((void *)ns);
          op=hdel(ht);
          cnt = cnt + 1;
        }

        else
        {
          if(ht->ipos == ((struct hitem *)NULL))
            tmp_if_expr_5 = 0;

          else
          {
            ht->ipos = ht->ipos->next;
            if(!(ht->ipos == ((struct hitem *)NULL)))
              tmp_if_expr_4 = 1;

            else
            {
              return_value_hnbucket_3=hnbucket(ht);
              tmp_if_expr_4 = return_value_hnbucket_3;
            }
            tmp_if_expr_5 = tmp_if_expr_4;
          }
          op = tmp_if_expr_5;
        }
      }
    }
    if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
      pthread_mutex_unlock(ph->ns_mutex);

    return cnt;
  }
}

// new_transact
// file domain_resolver.c line 286
static struct domain_transact_ent * new_transact()
{
  struct domain_transact_ent *curr;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct domain_transact_ent) /*64ul*/ );
  curr = (struct domain_transact_ent *)return_value_malloc_1;
  if(curr == ((struct domain_transact_ent *)NULL))
    return ((struct domain_transact_ent *)NULL);

  else
  {
    memset((void *)curr, 0, sizeof(struct domain_transact_ent) /*64ul*/ );
    if(!(first_transact == ((struct domain_transact_ent *)NULL)))
    {
      struct domain_transact_ent *prev = first_transact;
      for( ; !(prev->next == ((struct domain_transact_ent *)NULL)); prev = prev->next)
        ;
      prev->next = curr;
    }

    else
      first_transact = curr;
    return curr;
  }
}

// newhnamemem
// file addrtoname.c line 1413
struct hnamemem * newhnamemem(void)
{
  struct hnamemem *p;
  static struct hnamemem *ptr = (struct hnamemem *)(void *)0;
  static unsigned int num = (unsigned int)0;
  if(!(num >= 1u))
  {
    num = (unsigned int)64;
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)num, sizeof(struct hnamemem) /*24ul*/ );
    ptr = (struct hnamemem *)return_value_calloc_1;
    if(ptr == ((struct hnamemem *)NULL))
    {
      perror("newhnamemem: calloc");
      exit(1);
    }

  }

  num = num - 1u;
  struct hnamemem *tmp_post_2 = ptr;
  ptr = ptr + 1l;
  p = tmp_post_2;
  return p;
}

// parse_dl
// file parse_dl.h line 17
signed int parse_dl(struct netstat *ns, signed int dlt, signed int caplen, signed int pktlen, const unsigned char *pkt)
{
  struct ether_header *ether = ((struct ether_header *)NULL);
  struct ip *ip = ((struct ip *)NULL);
  const unsigned char *p = pkt;
  unsigned int length = (unsigned int)pktlen;
  unsigned int type;
  unsigned int hdrlen;
  unsigned char dsap;
  unsigned char ssap;
  unsigned short int return_value_ntohs_1;
  _Bool tmp_if_expr_4;
  const unsigned char *tmp_post_5;
  unsigned short int return_value_ntohs_7;
  unsigned short int return_value_ntohs_9;
  unsigned short int return_value_ntohs_10;
  if(pkt == ((const unsigned char *)NULL))
    return -1;

  else
  {
    switch(dlt)
    {
      case 0:

      case 108:
      {
        if(!(caplen >= 4))
          return -1;

        memcpy((void *)(unsigned char *)&type, (const void *)p, sizeof(unsigned int) /*4ul*/ );
        if(!((0xffff0000 & type) == 0u))
          type = (type & (unsigned int)0xff) << 24 | (type & (unsigned int)0xff00) << 8 | (type & (unsigned int)0xff0000) >> 8 | type >> 24 & (unsigned int)0xff;

        if(!(type == 2u) && !(type == 10u))
          return -1;

        p = p + (signed long int)4;
        ip = (struct ip *)p;
        caplen = caplen - 4;
        length = length - (unsigned int)4;
        break;
      }
      case 1:
      {
        hdrlen = (unsigned int)sizeof(struct ether_header) /*14ul*/ ;
        if(!((unsigned int)caplen >= hdrlen))
          return -1;

        ether = (struct ether_header *)p;
        if(!(ns == ((struct netstat *)NULL)))
        {
          memcpy((void *)ns->ns_hdr.en_hdr.src, (const void *)&ether->ether_shost, sizeof(struct ether_addr) /*6ul*/ );
          memcpy((void *)ns->ns_hdr.en_hdr.dst, (const void *)&ether->ether_dhost, sizeof(struct ether_addr) /*6ul*/ );
          ns->ns_hdr.en_hdr.type = ether->ether_type;
        }

        return_value_ntohs_1=ntohs(ether->ether_type);
        type = (unsigned int)return_value_ntohs_1;
        if(!(type >= 1501u))
        {
          if(!((unsigned int)caplen >= 3u + hdrlen))
            return -1;

          dsap = p[(signed long int)hdrlen];
          ssap = p[(signed long int)(hdrlen + (unsigned int)1)];
          if(!(ns == ((struct netstat *)NULL)))
          {
            ns->ns_hdr.en_hdr.param.llc.dsap = dsap;
            ns->ns_hdr.en_hdr.param.llc.ssap = ssap;
            ns->data_len = type;
          }

          type = (unsigned int)0;
          hdrlen = hdrlen + (unsigned int)3;
          if((signed int)dsap == 0x06 && (signed int)ssap == 0x06)
            type = (unsigned int)0x0800;

          else
            if((signed int)dsap == 0xAA && (signed int)ssap == 0xAA)
            {
              if(!((unsigned int)caplen >= 5u + hdrlen))
                return -1;

              type = (unsigned int)*((unsigned short int *)(p + (signed long int)hdrlen + (signed long int)3));
              if(!(ns == ((struct netstat *)NULL)))
                ns->ns_hdr.en_hdr.type = (unsigned short int)type;

              unsigned short int return_value_ntohs_2;
              return_value_ntohs_2=ntohs((unsigned short int)type);
              type = (unsigned int)return_value_ntohs_2;
              hdrlen = hdrlen + (unsigned int)5;
            }

        }

        else
          if(type == 33024u)
          {
            hdrlen = (unsigned int)sizeof(struct ether_dot1q_header) /*18ul*/ ;
            if(!((unsigned int)caplen >= hdrlen))
              return -1;

            if(!(ns == ((struct netstat *)NULL)))
              ns->ns_hdr.en_hdr.param.tag = ((struct ether_dot1q_header *)p)->tag;

            unsigned short int return_value_ntohs_3;
            return_value_ntohs_3=ntohs(((struct ether_dot1q_header *)p)->proto);
            type = (unsigned int)return_value_ntohs_3;
          }

        p = p + (signed long int)hdrlen;
        if(type == 2048u || type == 34525u)
          ip = (struct ip *)p;

        caplen = caplen - (signed int)hdrlen;
        length = length - hdrlen;
        break;
      }
      case 8:
      {
        if(!(caplen >= 16))
          return -1;

        p = p + (signed long int)16;
        ip = (struct ip *)p;
        caplen = caplen - 16;
        length = length - (unsigned int)16;
        break;
      }
      case 51:
      {
        if(!(caplen >= 6))
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = p[(signed long int)1] != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
          return -1;

        p = p + (signed long int)6;
        caplen = caplen - 6;
        length = length - (unsigned int)6;
      }
      case 9:
      {
        if(!(caplen >= 4))
          return -1;

        hdrlen = (unsigned int)0;
        if((signed int)*p == 0xff)
        {
          if((signed int)p[1l] == 0x03)
          {
            p = p + (signed long int)2;
            hdrlen = hdrlen + (unsigned int)2;
          }

        }

        if(!((01 & (signed int)*p) == 0))
        {
          tmp_post_5 = p;
          p = p + 1l;
          type = (unsigned int)*tmp_post_5;
          hdrlen = hdrlen + 1u;
        }

        else
        {
          unsigned short int return_value_ntohs_6;
          return_value_ntohs_6=ntohs(*((unsigned short int *)p));
          type = (unsigned int)return_value_ntohs_6;
          p = p + (signed long int)2;
          hdrlen = hdrlen + (unsigned int)2;
        }
        if(!(type == 33u) && !(type == 87u) && !(type == 2048u) && !(type == 34525u))
          return -1;

        ip = (struct ip *)p;
        caplen = caplen - (signed int)hdrlen;
        length = length - hdrlen;
        break;
      }
      case 12:
      {
        ip = (struct ip *)p;
        break;
      }
      case 104:

      case 50:
      {
        if(!(caplen >= 4))
          return -1;

        if(!((signed int)*p == 0x0f))
        {
          if(!((signed int)*p == 0x8f))
            return -1;

        }

        return_value_ntohs_7=ntohs(*((unsigned short int *)&p[(signed long int)2]));
        type = (unsigned int)return_value_ntohs_7;
        if(!(type == 2048u) && !(type == 34525u))
          return -1;

        p = p + (signed long int)4;
        ip = (struct ip *)p;
        caplen = caplen - 4;
        length = length - (unsigned int)4;
        break;
      }
      case 113:
      {
        if(!(caplen >= 16))
          return -1;

        return_value_ntohs_9=ntohs(((struct sll_header *)p)->sll_halen);
        if((signed int)return_value_ntohs_9 == 6)
        {
          if(!(ns == ((struct netstat *)NULL)))
          {
            memcpy((void *)ns->ns_hdr.en_hdr.src, (const void *)((struct sll_header *)p)->sll_addr, (unsigned long int)6);
            memset((void *)ns->ns_hdr.en_hdr.dst, 0, (unsigned long int)6);
            unsigned short int return_value_ntohs_8;
            return_value_ntohs_8=ntohs(((struct sll_header *)p)->sll_pkttype);
            type = (unsigned int)return_value_ntohs_8;
            if(!(type == 4u))
            {
              if(type == 1u)
                memset((void *)ns->ns_hdr.en_hdr.dst, 0xff, (unsigned long int)6);

              else
                if(type == 2u)
                  ns->ns_hdr.en_hdr.dst[(signed long int)0] = (unsigned char)1;

                else
                  ns->ns_hdr.en_hdr.dst[(signed long int)(6 - 1)] = (unsigned char)1;
            }

            ns->ns_hdr.en_hdr.type = ((struct sll_header *)p)->sll_protocol;
          }

          ether = (struct ether_header *)p;
        }

        return_value_ntohs_10=ntohs(((struct sll_header *)p)->sll_protocol);
        type = (unsigned int)return_value_ntohs_10;
        p = p + (signed long int)16;
        caplen = caplen - 16;
        length = length - (unsigned int)16;
        if(type == 2048u || type == 34525u)
          ip = (struct ip *)p;

        break;
      }
      default:
        return -1;
    }
    if(ether == ((struct ether_header *)NULL) && ip == ((struct ip *)NULL))
      return -1;

    else
    {
      if(!(length >= (unsigned int)caplen))
        caplen = (signed int)length;

      if(!(ns == ((struct netstat *)NULL)))
      {
        if(ns->pkt_cnt == 0u)
          ns->pkt_cnt = (unsigned int)1;

        if(ns->pkt_len == 0u)
          ns->pkt_len = (unsigned int)pktlen;

        if(ns->data_len == 0u)
          ns->data_len = length;

      }

      hdrlen = (unsigned int)((char *)p - (char *)pkt);
      if((unsigned long int)caplen >= sizeof(struct ip) /*20ul*/  && !(ip == ((struct ip *)NULL)))
      {
        signed int hlen;
        hlen=parse_ip(ns, caplen, ip);
        if(hlen >= 1)
          hdrlen = hdrlen + (unsigned int)hlen;

      }

      return (signed int)hdrlen;
    }
  }
}

// parse_dl_name
// file parse_dl.h line 14
const char * parse_dl_name(signed int type)
{
  switch(type)
  {
    case 0:

    case 108:
      return "Loopback";
    case 1:
      return "Ethernet";
    case 8:
      return "SLIP";
    case 51:
      return "PPP over Ethernet";
    case 9:
      return "Async PPP";
    case 12:
      return "raw IP";
    case 104:
      return "Cisco HDLC";
    case 50:
      return "Sync PPP";
    case 113:
      return "Linux cooked socket";
    default:
      return "Unknown";
  }
}

// parse_feed
// file trafshow.c line 599
static void parse_feed(unsigned char *a, struct pcap_pkthdr *h, const unsigned char *p)
{
  struct pcap_handler *ph = (struct pcap_handler *)a;
  struct netstat ns;
  _Bool tmp_if_expr_1;
  if(ph == ((struct pcap_handler *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(ph->pcap != ((struct pcap *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr_1)
  {
    memset((void *)&ns, 0, sizeof(struct netstat) /*96ul*/ );
    signed int return_value_pcap_datalink_2;
    return_value_pcap_datalink_2=pcap_datalink(ph->pcap);
    signed int return_value_parse_dl_3;
    return_value_parse_dl_3=parse_dl(&ns, return_value_pcap_datalink_2, (signed int)h->caplen, (signed int)h->len, p);
    if(return_value_parse_dl_3 >= 0)
    {
      ns.mtime = h->ts;
      pcap_save(ph, &ns);
    }

  }

}

// parse_ip
// file parse_ip.h line 15
signed int parse_ip(struct netstat *ns, signed int caplen, struct ip *ip)
{
  signed int hdrlen = 0;
  signed int len;
  const unsigned char *p;
  if(ip == ((struct ip *)NULL))
    return -1;

  else
  {
    if(!(ns == ((struct netstat *)NULL)))
      ns->ns_hdr.in_hdr.ver = (unsigned char)ip->ip_v;

    if((signed int)ip->ip_v == 4)
    {
      struct ip_address *src = ((struct ip_address *)NULL);
      struct ip_address *dst = ((struct ip_address *)NULL);
      if(!(ns == ((struct netstat *)NULL)))
      {
        src = &ns->ns_hdr.in_hdr.src;
        dst = &ns->ns_hdr.in_hdr.dst;
        ns->ns_hdr.in_hdr.proto = ip->ip_p;
        src->ipaddr.ipa4 = ip->ip_src;
        dst->ipaddr.ipa4 = ip->ip_dst;
        unsigned short int return_value_ntohs_1;
        return_value_ntohs_1=ntohs(ip->ip_len);
        ns->pkt_len = (unsigned int)return_value_ntohs_1;
      }

      hdrlen = (signed int)ip->ip_hl << 2;
      caplen = caplen - hdrlen;
      unsigned short int return_value_ntohs_2;
      return_value_ntohs_2=ntohs(ip->ip_off);
      if((0x1fff & (signed int)return_value_ntohs_2) == 0)
      {
        p = (const unsigned char *)ip + (signed long int)hdrlen;
        switch((signed int)ip->ip_p)
        {
          case 6:
          {
            len = (signed int)((struct tcphdr *)p)->_anon0._anon1.doff << 2;
            hdrlen = hdrlen + len;
            caplen = caplen - len;
            if(caplen >= 0 && !(dst == ((struct ip_address *)NULL)) && !(src == ((struct ip_address *)NULL)))
            {
              src->ip_port = ((struct tcphdr *)p)->_anon0._anon1.source;
              dst->ip_port = ((struct tcphdr *)p)->_anon0._anon1.dest;
            }

            break;
          }
          case 17:
          {
            len = (signed int)sizeof(struct udphdr) /*8ul*/ ;
            hdrlen = hdrlen + len;
            caplen = caplen - len;
            if(caplen >= 0 && !(dst == ((struct ip_address *)NULL)) && !(src == ((struct ip_address *)NULL)))
            {
              src->ip_port = ((struct udphdr *)p)->_anon0._anon1.source;
              dst->ip_port = ((struct udphdr *)p)->_anon0._anon1.dest;
            }

            break;
          }
          case 1:
          {
            len = (signed int)((unsigned char *)((struct icmp *)p)->icmp_dun.id_data - p);
            hdrlen = hdrlen + len;
            caplen = caplen - len;
            if(caplen >= 0 && !(src == ((struct ip_address *)NULL)))
              src->ip_port = (unsigned short int)(((signed int)((struct icmp *)p)->icmp_type << 8 | (signed int)((struct icmp *)p)->icmp_code) + 1);

          }
        }
      }

    }

    else
      return -1;
    if(!(ns == ((struct netstat *)NULL)))
    {
      ns->pkt_cnt = (unsigned int)1;
      if(ns->pkt_len >= (unsigned int)hdrlen)
        ns->data_len = ns->pkt_len - (unsigned int)hdrlen;

    }

    return hdrlen;
  }
}

// parse_key
// file getkey.c line 102
static void parse_key(signed int key, struct pcap_handler *ph_list)
{
  signed int ch = key;
  struct pcap_handler *ph = ((struct pcap_handler *)NULL);
  struct selector *sp = ((struct selector *)NULL);
  struct timeval now;
  _Bool tmp_if_expr_2;
  signed int return_value_strcmp_1;
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  _Bool tmp_if_expr_5;
  if(!(prompt_mode == 0))
  {
    const char *txt = ((const char *)NULL);
    signed int redraw = 1;
    ch=edit_string(ch);
    if(ch == 0)
      goto __CPROVER_DUMP_L95;

    if(ch >= 1)
      switch(prompt_mode)
      {
        case 114:

        case 82:
        {
          ch=atoi(prompt_buf);
          if(ch >= 1 && !(ch == refresh_time))
          {
            if(!(ch >= purge_time))
              refresh_time = ch;

            else
              txt = "Refresh Time must be less than Purge Time";
          }

          break;
        }
        case 112:

        case 80:
        {
          ch=atoi(prompt_buf);
          if(ch >= 1 && !(ch == purge_time))
          {
            if(!(refresh_time >= ch))
            {
              purge_time = ch;
              add_event(((struct timeval *)NULL), pcap_purge, (void *)ph_list);
              redraw = 0;
            }

            else
              txt = "Purge Time must be bigger than Refresh Time";
          }

          break;
        }
        case 102:

        case 70:
        {
          if(expression == ((char *)NULL))
            tmp_if_expr_2 = (_Bool)1;

          else
          {
            return_value_strcmp_1=strcmp(prompt_buf, expression);
            tmp_if_expr_2 = return_value_strcmp_1 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_2)
          {
            if(!(expression == ((char *)NULL)))
              free((void *)expression);

            expression=strdup(prompt_buf);
            txt=pcap_setexpr(ph_list, expression);
            if(txt == ((const char *)NULL))
            {
              if(prompt_mode == 70)
              {
                add_event(((struct timeval *)NULL), pcap_clear, (void *)ph_list);
                redraw = 0;
              }

            }

          }

          break;
        }
        case 47:
        {
          if((signed int)prompt_buf[0l] == 0)
          {
            if(!(search == ((char *)NULL)))
            {
              free((void *)search);
              search = ((char *)NULL);
              txt = "Search mode turned Off";
            }

          }

          else
          {
            if(search == ((char *)NULL))
              tmp_if_expr_4 = (_Bool)1;

            else
            {
              return_value_strcmp_3=strcmp(prompt_buf, search);
              tmp_if_expr_4 = return_value_strcmp_3 != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_4)
            {
              if(!(search == ((char *)NULL)))
                free((void *)search);

              search=strdup(prompt_buf);
            }

          }
          break;
        }
        case 97:

        case 65:
        {
          if(!(prompt_buf[0l] == 0))
          {
            ch=atoi(prompt_buf);
            if(ch >= 33 || !(ch >= 0))
            {
              txt = "Wrong netmask length";
              break;
            }

          }

          else
            ch = -1;
          if((signed int)show_mode == NetStat)
          {
            ph=pcap_get_selected(ph_list);
            tmp_if_expr_5 = ph != ((struct pcap_handler *)NULL) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_5 = (_Bool)0;
          if(tmp_if_expr_5)
          {
            if(!(ph->masklen == ch))
            {
              ph->masklen = ch;
              if(prompt_mode == 65)
                netstat_purge(ph, ((struct timeval *)NULL));

            }

          }

          else
          {
            aggregate = ch;
            ph = ph_list;
            for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
              if(!(ph->masklen == aggregate))
              {
                ph->masklen = aggregate;
                if(prompt_mode == 65)
                  netstat_purge(ph, ((struct timeval *)NULL));

              }

          }
        }
        default:
          ;
      }

    prompt_mode = 0;
    if(!(redraw == 0))
      add_event(((struct timeval *)NULL), pcap_show, (void *)ph_list);

    if(!(txt == ((const char *)NULL)))
      screen_status(txt);

    else
      screen_update();
    goto __CPROVER_DUMP_L95;
  }

  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_12;
  if(!(ch == 81) && !(ch == 113) && !(ch == 0x0100))
  {
    if(ch == 12)
      goto __CPROVER_DUMP_L46;

    if(ch == 63 || ch == 72 || ch == 104 || ch == 0x1000)
      goto __CPROVER_DUMP_L47;

    if(ch == 82 || ch == 114)
      goto __CPROVER_DUMP_L49;

    if(ch == 80 || ch == 112)
      goto __CPROVER_DUMP_L51;

    if(ch == 70 || ch == 102)
      goto __CPROVER_DUMP_L53;

    if(ch == 47)
      goto __CPROVER_DUMP_L56;

    if(ch == 31)
      goto __CPROVER_DUMP_L59;

    if(ch == 65 || ch == 97)
      goto __CPROVER_DUMP_L62;

    if(ch == 18)
      goto __CPROVER_DUMP_L70;

    if(ch == 78 || ch == 110)
      goto __CPROVER_DUMP_L72;

  }

  else
  {
    switch((signed int)show_mode)
    {
      case Interfaces:
        exit(0);
      case NetStat:
      {
        ph=pcap_get_selected(ph_list);
        if(!(ph == ((struct pcap_handler *)NULL)))
          tmp_if_expr_6 = ph->top != ((struct pcap_handler *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
          pcaph_close(ph);

        else
          show_mode = (enum anonymous_13)Interfaces;
        pcap_show((void *)ph_list);
        goto __CPROVER_DUMP_L95;
      }
      case FlowDump:
      {
        show_dump_close();
        show_mode = (enum anonymous_13)NetStat;
        pcap_show((void *)ph_list);
        goto __CPROVER_DUMP_L95;
      }
      case HelpPage:
      {
        show_mode=help_page_mode();
        pcap_show((void *)ph_list);
        goto __CPROVER_DUMP_L95;
      }
      default:
        goto __CPROVER_DUMP_L76;
    }

  __CPROVER_DUMP_L46:
    ;
    wclear(stdscr);
    wrefresh(stdscr);
    pcap_show((void *)ph_list);
    goto __CPROVER_DUMP_L95;

  __CPROVER_DUMP_L47:
    ;
    struct selector *return_value_help_page_list_7;
    return_value_help_page_list_7=help_page_list(show_mode);
    if(!(return_value_help_page_list_7 == ((struct selector *)NULL)))
    {
      show_mode = (enum anonymous_13)HelpPage;
      pcap_show((void *)ph_list);
      goto __CPROVER_DUMP_L95;
    }

    goto __CPROVER_DUMP_L76;

  __CPROVER_DUMP_L49:
    ;
    if(!((signed int)show_mode == FlowDump))
    {
      prompt_mode = ch;
      snprintf(prompt_buf, sizeof(char [512l]) /*512ul*/ , "%d", refresh_time);
      init_edit_string("Refresh seconds: ", numbers, 5);
      struct selector *return_value_get_selector_8;
      return_value_get_selector_8=get_selector(ph_list);
      selector_withdraw(return_value_get_selector_8);
      screen_update();
      goto __CPROVER_DUMP_L95;
    }

    goto __CPROVER_DUMP_L76;

  __CPROVER_DUMP_L51:
    ;
    if(!((signed int)show_mode == FlowDump))
    {
      prompt_mode = ch;
      snprintf(prompt_buf, sizeof(char [512l]) /*512ul*/ , "%d", purge_time);
      init_edit_string("Purge seconds: ", numbers, 5);
      struct selector *return_value_get_selector_9;
      return_value_get_selector_9=get_selector(ph_list);
      selector_withdraw(return_value_get_selector_9);
      screen_update();
      goto __CPROVER_DUMP_L95;
    }

    goto __CPROVER_DUMP_L76;

  __CPROVER_DUMP_L53:
    ;
    if(!((signed int)show_mode == FlowDump))
    {
      prompt_mode = ch;
      prompt_buf[(signed long int)0] = (char)0;
      if(!(expression == ((char *)NULL)))
      {
        strncpy(prompt_buf, expression, sizeof(char [512l]) /*512ul*/ );
        prompt_buf[(signed long int)(sizeof(char [512l]) /*512ul*/  - (unsigned long int)1)] = (char)0;
      }

      init_edit_string("Filter expression: ", ((const char *)NULL), (signed int)sizeof(char [512l]) /*512ul*/ );
      struct selector *return_value_get_selector_10;
      return_value_get_selector_10=get_selector(ph_list);
      selector_withdraw(return_value_get_selector_10);
      screen_update();
      goto __CPROVER_DUMP_L95;
    }

    goto __CPROVER_DUMP_L76;

  __CPROVER_DUMP_L56:
    ;
    if(!((signed int)show_mode == FlowDump))
    {
      prompt_mode = ch;
      prompt_buf[(signed long int)0] = (char)0;
      if(!(search == ((char *)NULL)))
      {
        strncpy(prompt_buf, search, sizeof(char [512l]) /*512ul*/ );
        prompt_buf[(signed long int)(sizeof(char [512l]) /*512ul*/  - (unsigned long int)1)] = (char)0;
      }

      init_edit_string("Search string: ", ((const char *)NULL), (signed int)sizeof(char [512l]) /*512ul*/ );
      struct selector *return_value_get_selector_11;
      return_value_get_selector_11=get_selector(ph_list);
      selector_withdraw(return_value_get_selector_11);
      screen_update();
      goto __CPROVER_DUMP_L95;
    }

    goto __CPROVER_DUMP_L76;

  __CPROVER_DUMP_L59:
    ;
    if(!((signed int)show_mode == FlowDump))
    {
      if(!(search == ((char *)NULL)))
      {
        free((void *)search);
        search = ((char *)NULL);
        screen_status("Search mode turned Off");
      }

      goto __CPROVER_DUMP_L95;
    }

    goto __CPROVER_DUMP_L76;

  __CPROVER_DUMP_L62:
    ;
    if(!((signed int)show_mode == FlowDump))
    {
      char buf[100l];
      prompt_mode = ch;
      prompt_buf[(signed long int)0] = (char)0;
      if((signed int)show_mode == NetStat)
      {
        ph=pcap_get_selected(ph_list);
        tmp_if_expr_12 = ph != ((struct pcap_handler *)NULL) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_12 = (_Bool)0;
      if(tmp_if_expr_12)
      {
        if(ph->masklen >= 0)
          snprintf(prompt_buf, sizeof(char [512l]) /*512ul*/ , "%d", ph->masklen);

        snprintf(buf, sizeof(char [100l]) /*100ul*/ , "%s aggregation netmask length: ", ph->name);
      }

      else
      {
        if(aggregate >= 0)
          snprintf(prompt_buf, sizeof(char [512l]) /*512ul*/ , "%d", aggregate);

        strcpy(buf, "Aggregation netmask length: ");
      }
      init_edit_string(buf, numbers, 5);
      struct selector *return_value_get_selector_13;
      return_value_get_selector_13=get_selector(ph_list);
      selector_withdraw(return_value_get_selector_13);
      screen_update();
      goto __CPROVER_DUMP_L95;
    }

    goto __CPROVER_DUMP_L76;

  __CPROVER_DUMP_L70:
    ;
    if((signed int)show_mode == Interfaces)
    {
      add_event(((struct timeval *)NULL), pcap_clear, (void *)ph_list);
      screen_status("Resetting all flows");
      goto __CPROVER_DUMP_L95;
    }

    goto __CPROVER_DUMP_L76;

  __CPROVER_DUMP_L72:
    ;
    if(!((signed int)show_mode == FlowDump))
    {
      nflag = nflag ^ 1;
      if(ch == 78)
        add_event(((struct timeval *)NULL), pcap_show, (void *)ph_list);

      else
        screen_status("Numeric values turned %s", nflag != 0 ? "On" : "Off");
      goto __CPROVER_DUMP_L95;
    }

    goto __CPROVER_DUMP_L76;
  }

__CPROVER_DUMP_L76:
  ;
  gettimeofday(&now, ((struct timezone *)NULL));
  now.tv_sec = now.tv_sec + (signed long int)refresh_time;
  add_event(&now, pcap_show, (void *)ph_list);
  signed int return_value_show_stat_input_14;
  struct netstat *return_value_show_stat_get_17;
  struct pcap_handler *return_value_pcaph_create_18;
  switch((signed int)show_mode)
  {
    case Interfaces:
    {
      sp=show_if_selector();
      goto __CPROVER_DUMP_L83;
    }
    case NetStat:
    {
      ph=pcap_get_selected(ph_list);
      if(ph == ((struct pcap_handler *)NULL))
        break;

      sp=show_stat_selector(ph);
      return_value_show_stat_input_14=show_stat_input(ph, ch);
      if(!(return_value_show_stat_input_14 == 0))
      {
        selector_redraw(sp);
        break;
      }

      goto __CPROVER_DUMP_L83;
    }
    case FlowDump:
    {
      show_dump_input(ch);
      break;
    }
    case HelpPage:
      sp=help_page_selector();
    default:
    {

    __CPROVER_DUMP_L83:
      ;
      ch=selector_move(ch, sp);
      if(!(ch >= 0))
        selector_redraw(sp);

      else
        switch((signed int)show_mode)
        {
          case Interfaces:
          {
            ph=pcap_set_selected(ph_list, ch);
            if(ph == ((struct pcap_handler *)NULL))
              break;

            show_mode = (enum anonymous_13)NetStat;
            pcap_show((void *)ph_list);
            break;
          }
          case NetStat:
          {
            if(ph->masklen == -1)
            {
              struct netstat *return_value_show_stat_get_15;
              return_value_show_stat_get_15=show_stat_get(ph, ch);
              signed int return_value_show_dump_open_16;
              return_value_show_dump_open_16=show_dump_open(ph, return_value_show_stat_get_15);
              if(return_value_show_dump_open_16 == 0)
                show_mode = (enum anonymous_13)FlowDump;

            }

            else
            {
              return_value_show_stat_get_17=show_stat_get(ph, ch);
              return_value_pcaph_create_18=pcaph_create(ph, (struct netstat_header *)return_value_show_stat_get_17);
              if(!(return_value_pcaph_create_18 == ((struct pcap_handler *)NULL)))
                pcap_show((void *)ph_list);

            }
            break;
          }
          case FlowDump:
            break;
          case HelpPage:
          {
            key=help_page_key(ch);
            if(!(key == 0) && !(key == -1))
            {
              show_mode=help_page_mode();
              pcap_show((void *)ph_list);
              parse_key(key, ph_list);
            }

            break;
          }
          default:
            ;
        }
    }
  }

__CPROVER_DUMP_L95:
  ;
}

// parse_netflow
// file cisco_netflow.c line 233
static void parse_netflow(struct pcap_handler *ph, const unsigned char *data, signed int len)
{
  struct timeval now;
  signed int parse_netflow__1__version;
  signed int counter;
  signed int msec;
  signed int hdrlen;
  signed int dump_it;
  struct cnf_hdr_v1 *v1h;
  struct cnf_hdr_v5 *v5h;
  struct cnf_hdr_v7 *v7h;
  struct cnf_data_v1 *v1d = ((struct cnf_data_v1 *)NULL);
  struct cnf_data_v5 *v5d = ((struct cnf_data_v5 *)NULL);
  struct cnf_data_v7 *v7d = ((struct cnf_data_v7 *)NULL);
  struct netstat ns;
  v1h = (struct cnf_hdr_v1 *)data;
  signed int tmp_post_3;
  signed int tmp_post_4;
  signed int return_value_strcmp_12;
  signed int return_value_netstat_match_11;
  if(!(v1h == ((struct cnf_hdr_v1 *)NULL)) && (unsigned long int)len >= sizeof(struct cnf_hdr_v1) /*16ul*/ )
  {
    unsigned short int return_value_ntohs_1;
    return_value_ntohs_1=ntohs(v1h->version);
    parse_netflow__1__version = (signed int)return_value_ntohs_1;
    unsigned short int return_value_ntohs_2;
    return_value_ntohs_2=ntohs(v1h->counter);
    counter = (signed int)return_value_ntohs_2;
    if(parse_netflow__1__version == 1)
    {
      v1d = (struct cnf_data_v1 *)(data + (signed long int)sizeof(struct cnf_hdr_v1) /*16ul*/ );
      len = len - (signed int)sizeof(unsigned long int) /*8ul*/ ;
      len = len / (signed int)sizeof(struct cnf_data_v1) /*48ul*/ ;
    }

    else
      if(parse_netflow__1__version == 5)
      {
        v5h = (struct cnf_hdr_v5 *)data;
        v5d = (struct cnf_data_v5 *)(data + (signed long int)sizeof(struct cnf_hdr_v5) /*24ul*/ );
        len = len - (signed int)sizeof(unsigned long int) /*8ul*/ ;
        len = len / (signed int)sizeof(struct cnf_data_v5) /*48ul*/ ;
      }

      else
        if(parse_netflow__1__version == 7)
        {
          v7h = (struct cnf_hdr_v7 *)data;
          v7d = (struct cnf_data_v7 *)(data + (signed long int)sizeof(struct cnf_hdr_v7) /*24ul*/ );
          len = len - (signed int)sizeof(unsigned long int) /*8ul*/ ;
          len = len / (signed int)sizeof(struct cnf_data_v7) /*56ul*/ ;
        }

        else
          goto __CPROVER_DUMP_L24;
    gettimeofday(&now, ((struct timezone *)NULL));
    do
    {
      tmp_post_3 = counter;
      counter = counter - 1;
      if(!(tmp_post_3 >= 1))
        break;

      tmp_post_4 = len;
      len = len - 1;
      if(!(tmp_post_4 >= 1))
        break;

      struct ip_address *src = &ns.ns_hdr.in_hdr.src;
      struct ip_address *dst = &ns.ns_hdr.in_hdr.dst;
      memset((void *)&ns, 0, sizeof(struct netstat) /*96ul*/ );
      ns.ns_hdr.in_hdr.ver = (unsigned char)4;
      ns.mtime = now;
      msec = 0;
      dump_it = 0;
      if(parse_netflow__1__version == 1 && !(v1d == ((struct cnf_data_v1 *)NULL)))
      {
        ns.ns_hdr.in_hdr.proto = v1d->proto;
        src->ipaddr.ipa4.s_addr = v1d->src_addr;
        src->ip_port = v1d->src_port;
        dst->ipaddr.ipa4.s_addr = v1d->dst_addr;
        dst->ip_port = v1d->dst_port;
        ns.pkt_cnt=ntohl(v1d->dpkts);
        ns.pkt_len=ntohl(v1d->doctets);
        unsigned int return_value_ntohl_5;
        return_value_ntohl_5=ntohl(v1d->lasttime);
        unsigned int return_value_ntohl_6;
        return_value_ntohl_6=ntohl(v1d->firsttime);
        msec = (signed int)(return_value_ntohl_5 - return_value_ntohl_6);
      }

      else
        if(parse_netflow__1__version == 5 && !(v5d == ((struct cnf_data_v5 *)NULL)))
        {
          ns.ns_hdr.in_hdr.proto = v5d->proto;
          src->ipaddr.ipa4.s_addr = v5d->src_addr;
          src->ip_port = v5d->src_port;
          dst->ipaddr.ipa4.s_addr = v5d->dst_addr;
          dst->ip_port = v5d->dst_port;
          ns.pkt_cnt=ntohl(v5d->dpkts);
          ns.pkt_len=ntohl(v5d->doctets);
          unsigned int return_value_ntohl_7;
          return_value_ntohl_7=ntohl(v5d->lasttime);
          unsigned int return_value_ntohl_8;
          return_value_ntohl_8=ntohl(v5d->firsttime);
          msec = (signed int)(return_value_ntohl_7 - return_value_ntohl_8);
        }

        else
          if(parse_netflow__1__version == 7 && !(v7d == ((struct cnf_data_v7 *)NULL)))
          {
            ns.ns_hdr.in_hdr.proto = v7d->proto;
            src->ipaddr.ipa4.s_addr = v7d->src_addr;
            src->ip_port = v7d->src_port;
            dst->ipaddr.ipa4.s_addr = v7d->dst_addr;
            dst->ip_port = v7d->dst_port;
            ns.pkt_cnt=ntohl(v7d->dpkts);
            ns.pkt_len=ntohl(v7d->doctets);
            unsigned int return_value_ntohl_9;
            return_value_ntohl_9=ntohl(v7d->lasttime);
            unsigned int return_value_ntohl_10;
            return_value_ntohl_10=ntohl(v7d->firsttime);
            msec = (signed int)(return_value_ntohl_9 - return_value_ntohl_10);
          }

      hdrlen = (signed int)sizeof(struct ip) /*20ul*/ ;
      switch((signed int)ns.ns_hdr.in_hdr.proto)
      {
        case 6:
        {
          hdrlen = hdrlen + (signed int)sizeof(struct tcphdr) /*20ul*/ ;
          break;
        }
        case 17:
        {
          hdrlen = hdrlen + (signed int)sizeof(struct udphdr) /*8ul*/ ;
          break;
        }
        case 1:
          hdrlen = hdrlen + (signed int)sizeof(struct icmp) /*28ul*/ ;
      }
      hdrlen = hdrlen * (signed int)ns.pkt_cnt;
      if(ns.pkt_len >= (unsigned int)hdrlen)
        ns.data_len = ns.pkt_len - (unsigned int)hdrlen;

      if(msec >= 1)
      {
        ns.pkt_cnt_rate = (ns.pkt_cnt * (unsigned int)1000) / (unsigned int)msec;
        ns.pkt_len_rate = (ns.pkt_len * (unsigned int)1000) / (unsigned int)msec;
        ns.data_len_rate = (ns.data_len * (unsigned int)1000) / (unsigned int)msec;
      }

      pcap_save(ph, &ns);
      if(!(cisco_netflow_dump == ((const char *)NULL)))
      {
        if(!(ph->name == ((const char *)NULL)))
        {
          return_value_strcmp_12=strcmp(cisco_netflow_dump, ph->name);
          if(return_value_strcmp_12 == 0)
          {
            return_value_netstat_match_11=netstat_match(&ns, dump_match);
            if(!(return_value_netstat_match_11 == 0))
              dump_it = dump_it + 1;

          }

        }

      }

      if(parse_netflow__1__version == 1 && !(v1d == ((struct cnf_data_v1 *)NULL)))
      {
        if(!(dump_it == 0))
          dump_netflow_v1(v1d);

        v1d = v1d + 1l;
      }

      else
        if(parse_netflow__1__version == 5 && !(v5d == ((struct cnf_data_v5 *)NULL)))
        {
          if(!(dump_it == 0))
            dump_netflow_v5(v5d);

          v5d = v5d + 1l;
        }

        else
          if(parse_netflow__1__version == 7 && !(v7d == ((struct cnf_data_v7 *)NULL)))
          {
            if(!(dump_it == 0))
              dump_netflow_v7(v7d);

            v7d = v7d + 1l;
          }

    }
    while((_Bool)1);
  }


__CPROVER_DUMP_L24:
  ;
}

// parse_packet
// file domain_resolver.c line 657
static struct domain_transact_ent * parse_packet(const unsigned char *data, signed int len)
{
  const unsigned char *pkt = data;
  struct anonymous_15 *hp = (struct anonymous_15 *)pkt;
  const unsigned char *cp = pkt + (signed long int)12;
  signed int qdcount;
  signed int ancount;
  signed int nscount;
  signed int arcount;
  signed int parse_packet__1__nb;
  struct domain_transact_ent *dt;
  struct domain_data_ent *dd;
  unsigned short int type;
  unsigned short int class;
  unsigned short int rdlen;
  unsigned short int pref;
  unsigned int ttl;
  char name[1026l];
  _Bool tmp_if_expr_1;
  signed int tmp_post_7;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_12;
  signed int tmp_post_14;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  _Bool tmp_if_expr_17;
  _Bool tmp_if_expr_18;
  signed int tmp_post_19;
  signed int tmp_post_20;
  _Bool tmp_if_expr_21;
  _Bool tmp_if_expr_22;
  if(hp == ((struct anonymous_15 *)NULL) || !(len >= 12))
    return ((struct domain_transact_ent *)NULL);

  else
    if(hp->qr == 0u)
      return ((struct domain_transact_ent *)NULL);

    else
      if(!(hp->opcode == 0u))
        return ((struct domain_transact_ent *)NULL);

      else
      {
        if(!((signed int)hp->rcode >= 0))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = (signed int)hp->rcode > 5 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          return ((struct domain_transact_ent *)NULL);

        else
        {
          unsigned short int return_value_ntohs_2;
          return_value_ntohs_2=ntohs((unsigned short int)hp->id);
          dt=find_transact(return_value_ntohs_2);
          if(dt == ((struct domain_transact_ent *)NULL))
            return ((struct domain_transact_ent *)NULL);

          else
          {
            dt->rcode = (signed int)hp->rcode;
            unsigned short int return_value_ntohs_3;
            return_value_ntohs_3=ntohs((unsigned short int)hp->qdcount);
            qdcount = (signed int)return_value_ntohs_3;
            unsigned short int return_value_ntohs_4;
            return_value_ntohs_4=ntohs((unsigned short int)hp->ancount);
            ancount = (signed int)return_value_ntohs_4;
            unsigned short int return_value_ntohs_5;
            return_value_ntohs_5=ntohs((unsigned short int)hp->nscount);
            nscount = (signed int)return_value_ntohs_5;
            unsigned short int return_value_ntohs_6;
            return_value_ntohs_6=ntohs((unsigned short int)hp->arcount);
            arcount = (signed int)return_value_ntohs_6;
            do
            {
              tmp_post_7 = qdcount;
              qdcount = qdcount - 1;
              if(!(tmp_post_7 >= 1))
                break;

              parse_packet__1__nb=__dn_expand(pkt, pkt + (signed long int)len, cp, name, (signed int)sizeof(char [1026l]) /*1026ul*/ );
              if(!(parse_packet__1__nb >= 0))
              {
                dt->rcode = -1;
                return dt;
              }

              signed int return_value_strcasecmp_8;
              return_value_strcasecmp_8=strcasecmp(name, dt->domain);
              if(!(return_value_strcasecmp_8 == 0))
              {
                dt->rcode = -2;
                return dt;
              }

              cp = cp + (signed long int)parse_packet__1__nb;
              if(!(pkt + (signed long int)len >= cp + 4l))
              {
                dt->rcode = -3;
                return dt;
              }

              do
              {
                const unsigned char *t_cp = (const unsigned char *)cp;
                type = (unsigned short int)((signed int)(unsigned short int)t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)t_cp[(signed long int)1]);
                cp = cp + (signed long int)2;
              }
              while((_Bool)0);
              do
              {
                const unsigned char *parse_packet__1__6__5__t_cp = (const unsigned char *)cp;
                class = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__6__5__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__6__5__t_cp[(signed long int)1]);
                cp = cp + (signed long int)2;
              }
              while((_Bool)0);
              if(!((signed int)class == 1))
              {
                dt->rcode = -4;
                return dt;
              }

              if((signed int)type == 1)
                tmp_if_expr_9 = (signed int)dt->type == IpAddress ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_9 = (_Bool)0;
              if(tmp_if_expr_9)
                tmp_if_expr_11 = (_Bool)1;

              else
              {
                if((signed int)type == 12)
                  tmp_if_expr_10 = (signed int)dt->type == DomainName ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_10 = (_Bool)0;
                tmp_if_expr_11 = tmp_if_expr_10 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_11)
                tmp_if_expr_13 = (_Bool)1;

              else
              {
                if((signed int)type == 15)
                  tmp_if_expr_12 = (signed int)dt->type == MailExchanger ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_12 = (_Bool)0;
                tmp_if_expr_13 = tmp_if_expr_12 ? (_Bool)1 : (_Bool)0;
              }
              if(!tmp_if_expr_13)
              {
                dt->rcode = -5;
                return dt;
              }

            }
            while((_Bool)1);
            do
            {
              tmp_post_14 = ancount;
              ancount = ancount - 1;
              if(!(tmp_post_14 >= 1))
                break;

              parse_packet__1__nb=__dn_expand(pkt, pkt + (signed long int)len, cp, name, (signed int)sizeof(char [1026l]) /*1026ul*/ );
              if(!(parse_packet__1__nb >= 0))
              {
                dt->rcode = -10;
                return dt;
              }

              cp = cp + (signed long int)parse_packet__1__nb;
              if(!(pkt + (signed long int)len >= cp + 10l))
              {
                dt->rcode = -11;
                return dt;
              }

              do
              {
                const unsigned char *parse_packet__1__7__3__t_cp = (const unsigned char *)cp;
                type = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__7__3__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__7__3__t_cp[(signed long int)1]);
                cp = cp + (signed long int)2;
              }
              while((_Bool)0);
              do
              {
                const unsigned char *parse_packet__1__7__4__t_cp = (const unsigned char *)cp;
                class = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__7__4__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__7__4__t_cp[(signed long int)1]);
                cp = cp + (signed long int)2;
              }
              while((_Bool)0);
              do
              {
                const unsigned char *parse_packet__1__7__5__t_cp = (const unsigned char *)cp;
                ttl = (unsigned int)parse_packet__1__7__5__t_cp[(signed long int)0] << 24 | (unsigned int)parse_packet__1__7__5__t_cp[(signed long int)1] << 16 | (unsigned int)parse_packet__1__7__5__t_cp[(signed long int)2] << 8 | (unsigned int)parse_packet__1__7__5__t_cp[(signed long int)3];
                cp = cp + (signed long int)4;
              }
              while((_Bool)0);
              do
              {
                const unsigned char *parse_packet__1__7__6__t_cp = (const unsigned char *)cp;
                rdlen = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__7__6__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__7__6__t_cp[(signed long int)1]);
                cp = cp + (signed long int)2;
              }
              while((_Bool)0);
              if(!(pkt + (signed long int)len >= cp + (signed long int)rdlen))
              {
                dt->rcode = -12;
                return dt;
              }

              if(!((signed int)class == 1))
              {
                dt->rcode = -13;
                return dt;
              }

              if((signed int)type == 1)
              {
                if(!((signed int)dt->type == IpAddress))
                  goto __CPROVER_DUMP_L41;

                if(!((unsigned long int)rdlen % sizeof(unsigned int) /*4ul*/  == 0ul))
                {
                  dt->rcode = -14;
                  return dt;
                }

                for( ; (signed int)rdlen >= 1; rdlen = rdlen - (unsigned short int)sizeof(unsigned int) /*4ul*/ )
                {
                  dd=domain_data_add(&dt->data, name, 0);
                  if(!(dd == ((struct domain_data_ent *)NULL)))
                  {
                    if(dd->ttl == 0u || ttl == 0u)
                      tmp_if_expr_15 = (_Bool)1;

                    else
                      tmp_if_expr_15 = dd->ttl > ttl ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr_15)
                      dd->ttl = ttl;

                    if(dd->addr == 0u)
                      tmp_if_expr_16 = (_Bool)1;

                    else
                      tmp_if_expr_16 = dd->addr == (unsigned int)-1 ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr_16)
                      dd->addr = *((unsigned int *)cp);

                  }

                  cp = cp + (signed long int)sizeof(unsigned int) /*4ul*/ ;
                }
              }

              else
              {

              __CPROVER_DUMP_L41:
                ;
                if((signed int)type == 15)
                {
                  if(!((signed int)dt->type == MailExchanger))
                    goto __CPROVER_DUMP_L49;

                  if(!((signed int)rdlen >= 2))
                  {
                    dt->rcode = -15;
                    return dt;
                  }

                  do
                  {
                    const unsigned char *parse_packet__1__7__10__2__t_cp = (const unsigned char *)cp;
                    pref = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__7__10__2__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__7__10__2__t_cp[(signed long int)1]);
                    cp = cp + (signed long int)2;
                  }
                  while((_Bool)0);
                  rdlen = rdlen - (unsigned short int)2;
                  for( ; (signed int)rdlen >= 1; rdlen = rdlen - (unsigned short int)parse_packet__1__nb)
                  {
                    parse_packet__1__nb=__dn_expand(pkt, pkt + (signed long int)len, cp, name, (signed int)sizeof(char [1026l]) /*1026ul*/ );
                    if(!(parse_packet__1__nb >= 0))
                    {
                      dt->rcode = -16;
                      return dt;
                    }

                    dd=domain_data_add(&dt->data, name, (signed int)pref);
                    if(!(dd == ((struct domain_data_ent *)NULL)))
                    {
                      if(dd->ttl == 0u || ttl == 0u)
                        tmp_if_expr_17 = (_Bool)1;

                      else
                        tmp_if_expr_17 = dd->ttl > ttl ? (_Bool)1 : (_Bool)0;
                      if(tmp_if_expr_17)
                        dd->ttl = ttl;

                    }

                    cp = cp + (signed long int)parse_packet__1__nb;
                  }
                }

                else
                {

                __CPROVER_DUMP_L49:
                  ;
                  if((signed int)type == 12)
                  {
                    if(!((signed int)dt->type == DomainName))
                      goto __CPROVER_DUMP_L56;

                    for( ; (signed int)rdlen >= 1; rdlen = rdlen - (unsigned short int)parse_packet__1__nb)
                    {
                      parse_packet__1__nb=__dn_expand(pkt, pkt + (signed long int)len, cp, name, (signed int)sizeof(char [1026l]) /*1026ul*/ );
                      if(!(parse_packet__1__nb >= 0))
                      {
                        dt->rcode = -17;
                        return dt;
                      }

                      dd=domain_data_add(&dt->data, name, 0);
                      if(!(dd == ((struct domain_data_ent *)NULL)))
                      {
                        if(dd->ttl == 0u || ttl == 0u)
                          tmp_if_expr_18 = (_Bool)1;

                        else
                          tmp_if_expr_18 = dd->ttl > ttl ? (_Bool)1 : (_Bool)0;
                        if(tmp_if_expr_18)
                          dd->ttl = ttl;

                      }

                      cp = cp + (signed long int)parse_packet__1__nb;
                    }
                  }

                  else
                  {

                  __CPROVER_DUMP_L56:
                    ;
                    if((signed int)type == 5)
                    {
                      domain_data_free(&dt->data, name);
                      cp = cp + (signed long int)rdlen;
                    }

                    else
                      cp = cp + (signed long int)rdlen;
                  }
                }
              }
            }
            while((_Bool)1);
            if(!((signed int)dt->type == MailExchanger))
              return dt;

            else
            {
              do
              {
                tmp_post_19 = nscount;
                nscount = nscount - 1;
                if(!(tmp_post_19 >= 1))
                  break;

                parse_packet__1__nb=__dn_expand(pkt, pkt + (signed long int)len, cp, name, (signed int)sizeof(char [1026l]) /*1026ul*/ );
                if(!(parse_packet__1__nb >= 0))
                {
                  dt->rcode = -20;
                  return dt;
                }

                cp = cp + (signed long int)parse_packet__1__nb;
                if(!(pkt + (signed long int)len >= cp + 10l))
                {
                  dt->rcode = -21;
                  return dt;
                }

                do
                {
                  const unsigned char *parse_packet__1__8__3__t_cp = (const unsigned char *)cp;
                  type = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__8__3__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__8__3__t_cp[(signed long int)1]);
                  cp = cp + (signed long int)2;
                }
                while((_Bool)0);
                do
                {
                  const unsigned char *parse_packet__1__8__4__t_cp = (const unsigned char *)cp;
                  class = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__8__4__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__8__4__t_cp[(signed long int)1]);
                  cp = cp + (signed long int)2;
                }
                while((_Bool)0);
                do
                {
                  const unsigned char *parse_packet__1__8__5__t_cp = (const unsigned char *)cp;
                  ttl = (unsigned int)parse_packet__1__8__5__t_cp[(signed long int)0] << 24 | (unsigned int)parse_packet__1__8__5__t_cp[(signed long int)1] << 16 | (unsigned int)parse_packet__1__8__5__t_cp[(signed long int)2] << 8 | (unsigned int)parse_packet__1__8__5__t_cp[(signed long int)3];
                  cp = cp + (signed long int)4;
                }
                while((_Bool)0);
                do
                {
                  const unsigned char *parse_packet__1__8__6__t_cp = (const unsigned char *)cp;
                  rdlen = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__8__6__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__8__6__t_cp[(signed long int)1]);
                  cp = cp + (signed long int)2;
                }
                while((_Bool)0);
                if(!(pkt + (signed long int)len >= cp + (signed long int)rdlen))
                {
                  dt->rcode = -22;
                  return dt;
                }

                cp = cp + (signed long int)rdlen;
              }
              while((_Bool)1);
              do
              {
                tmp_post_20 = arcount;
                arcount = arcount - 1;
                if(!(tmp_post_20 >= 1))
                  break;

                parse_packet__1__nb=__dn_expand(pkt, pkt + (signed long int)len, cp, name, (signed int)sizeof(char [1026l]) /*1026ul*/ );
                if(!(parse_packet__1__nb >= 0))
                {
                  dt->rcode = -30;
                  return dt;
                }

                cp = cp + (signed long int)parse_packet__1__nb;
                if(!(pkt + (signed long int)len >= cp + 10l))
                {
                  dt->rcode = -31;
                  return dt;
                }

                do
                {
                  const unsigned char *parse_packet__1__9__3__t_cp = (const unsigned char *)cp;
                  type = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__9__3__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__9__3__t_cp[(signed long int)1]);
                  cp = cp + (signed long int)2;
                }
                while((_Bool)0);
                do
                {
                  const unsigned char *parse_packet__1__9__4__t_cp = (const unsigned char *)cp;
                  class = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__9__4__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__9__4__t_cp[(signed long int)1]);
                  cp = cp + (signed long int)2;
                }
                while((_Bool)0);
                do
                {
                  const unsigned char *parse_packet__1__9__5__t_cp = (const unsigned char *)cp;
                  ttl = (unsigned int)parse_packet__1__9__5__t_cp[(signed long int)0] << 24 | (unsigned int)parse_packet__1__9__5__t_cp[(signed long int)1] << 16 | (unsigned int)parse_packet__1__9__5__t_cp[(signed long int)2] << 8 | (unsigned int)parse_packet__1__9__5__t_cp[(signed long int)3];
                  cp = cp + (signed long int)4;
                }
                while((_Bool)0);
                do
                {
                  const unsigned char *parse_packet__1__9__6__t_cp = (const unsigned char *)cp;
                  rdlen = (unsigned short int)((signed int)(unsigned short int)parse_packet__1__9__6__t_cp[(signed long int)0] << 8 | (signed int)(unsigned short int)parse_packet__1__9__6__t_cp[(signed long int)1]);
                  cp = cp + (signed long int)2;
                }
                while((_Bool)0);
                if(!(pkt + (signed long int)len >= cp + (signed long int)rdlen))
                {
                  dt->rcode = -32;
                  return dt;
                }

                if((signed int)class == 1 && (signed int)type == 1)
                {
                  if(!((unsigned long int)rdlen % sizeof(unsigned int) /*4ul*/  == 0ul))
                  {
                    dt->rcode = -33;
                    return dt;
                  }

                  for( ; (signed int)rdlen >= 1; rdlen = rdlen - (unsigned short int)sizeof(unsigned int) /*4ul*/ )
                  {
                    dd=domain_data_find(&dt->data, name);
                    if(!(dd == ((struct domain_data_ent *)NULL)))
                    {
                      if(dd->ttl == 0u || ttl == 0u)
                        tmp_if_expr_21 = (_Bool)1;

                      else
                        tmp_if_expr_21 = dd->ttl > ttl ? (_Bool)1 : (_Bool)0;
                      if(tmp_if_expr_21)
                        dd->ttl = ttl;

                      if(dd->addr == 0u)
                        tmp_if_expr_22 = (_Bool)1;

                      else
                        tmp_if_expr_22 = dd->addr == (unsigned int)-1 ? (_Bool)1 : (_Bool)0;
                      if(tmp_if_expr_22)
                        dd->addr = *((unsigned int *)cp);

                    }

                    cp = cp + (signed long int)sizeof(unsigned int) /*4ul*/ ;
                  }
                }

                else
                  cp = cp + (signed long int)rdlen;
              }
              while((_Bool)1);
              return dt;
            }
          }
        }
      }
}

// pcap_clear
// file trafshow.c line 724
void pcap_clear(void *arg)
{
  struct pcap_handler *ph = (struct pcap_handler *)arg;
  struct pcap_handler *p;
  for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
  {
    p = ph;
    for( ; !(p == ((struct pcap_handler *)NULL)); p = p->deep)
      netstat_purge(p, ((struct timeval *)NULL));
  }
  pcap_show(arg);
}

// pcap_feed
// file trafshow.c line 512
static void * pcap_feed(void *arg)
{
  struct pcap_handler *ph;
  struct pcap_handler *ph_list = (struct pcap_handler *)arg;
  signed int npkt = -1;
  signed int ndev;
  signed int op;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  while((_Bool)1)
  {
    if(npkt == 0)
      usleep((unsigned int)1000);

    npkt = 0;
    ndev = 0;
    ph = ph_list;
    for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
    {
      if(!(ph->pcap == ((struct pcap *)NULL)))
      {
        op=pcap_dispatch(ph->pcap, -1, parse_feed, (unsigned char *)ph);
        if(op >= 1)
          npkt = npkt + op;

        else
        {
          if(op == -2)
            tmp_if_expr_3 = (_Bool)1;

          else
          {
            if(op == -1)
            {
              return_value___errno_location_1=__errno_location();
              tmp_if_expr_2 = *return_value___errno_location_1 != 11 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_2 = (_Bool)0;
            tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_3)
          {
            pcap_close(ph->pcap);
            ph->pcap = ((struct pcap *)NULL);
            goto __CPROVER_DUMP_L10;
          }

        }
        ndev = ndev + 1;
      }


    __CPROVER_DUMP_L10:
      ;
    }
    if(ndev == 0)
      break;

  }
  return NULL;
}

// pcap_feed2
// file trafshow.c line 543
static void * pcap_feed2(void *arg)
{
  struct pcap_handler *ph;
  struct pcap_handler *ph_list = (struct pcap_handler *)arg;
  signed int npkt = -1;
  signed int ndev;
  signed int op;
  struct anonymous_11 readfds;
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_2;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  do
  {
    npkt = 0;
    ndev = 0;
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_11) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readfds)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    ph = ph_list;
    for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
      if(!(ph->pcap == ((struct pcap *)NULL)))
      {
        op=pcap_get_selectable_fd(ph->pcap);
        if(op >= 0)
        {
          if(!(ndev >= 1 + op))
            ndev = op + 1;

          (&readfds)->__fds_bits[(signed long int)(op / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfds)->__fds_bits[(signed long int)(op / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << op % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
        }

      }

    if(!(ndev >= 1))
      break;

    op=select(ndev, &readfds, ((struct anonymous_11 *)NULL), ((struct anonymous_11 *)NULL), ((struct timeval *)NULL));
    if(!(op >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      if(*return_value___errno_location_1 == 4)
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value___errno_location_2=__errno_location();
        tmp_if_expr_3 = *return_value___errno_location_2 == 11 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_3)
        continue;

      break;
    }

    if(!(op == 0))
    {
      ph = ph_list;
      for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
        if(!(ph->pcap == ((struct pcap *)NULL)))
        {
          op=pcap_dispatch(ph->pcap, -1, parse_feed, (unsigned char *)ph);
          if(op >= 1)
            npkt = npkt + op;

          else
          {
            if(op == -2)
              tmp_if_expr_6 = (_Bool)1;

            else
            {
              if(op == -1)
              {
                return_value___errno_location_4=__errno_location();
                tmp_if_expr_5 = *return_value___errno_location_4 != 11 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_5 = (_Bool)0;
              tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_6)
            {
              pcap_close(ph->pcap);
              ph->pcap = ((struct pcap *)NULL);
            }

          }
        }

    }

  }
  while((_Bool)1);
  return NULL;
}

// pcap_get_selected
// file trafshow.c line 737
struct pcap_handler * pcap_get_selected(struct pcap_handler *ph)
{
  for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
    if(!(ph->selected == 0))
    {
      for( ; !(ph->deep == ((struct pcap_handler *)NULL)); ph = ph->deep)
        ;
      return ph;
    }

  return ((struct pcap_handler *)NULL);
}

// pcap_init
// file trafshow.c line 304
static signed int pcap_init(struct pcap_handler **ph_list, struct pcap_if *dp)
{
  signed int cnt = 0;
  signed int err = 0;
  signed int type;
  struct pcap *pd;
  const struct pcap_addr *ap;
  struct pcap_handler *ph;
  struct pcap_handler *ph_prev = ((struct pcap_handler *)NULL);
  char *cp;
  char buf[256l];
  _Bool tmp_if_expr_6;
  const char *return_value_parse_dl_name_5;
  unsigned long int tmp_if_expr_9;
  unsigned long int return_value_strlen_8;
  _Bool tmp_if_expr_13;
  char *tmp_post_14;
  unsigned long int return_value_strlen_15;
  if(ph_list == ((struct pcap_handler **)NULL))
    return -1;

  else
  {
    for( ; !(dp == ((struct pcap_if *)NULL)); dp = dp->next)
    {
      signed int return_value_strcasecmp_1;
      return_value_strcasecmp_1=strcasecmp(dp->name, "any");
      if(!(return_value_strcasecmp_1 == 0))
      {
        buf[(signed long int)0] = (char)0;
        pd=pcap_open_live(dp->name, 68, promisc, 1, buf);
        if(pd == ((struct pcap *)NULL))
        {
          fprintf(stderr, "%s: %s\n", dp->name, (const void *)buf);
          err = err + 1;
        }

        else
        {
          type=pcap_datalink(pd);
          signed int return_value_is_parse_dl_2;
          return_value_is_parse_dl_2=is_parse_dl(type);
          if(return_value_is_parse_dl_2 == 0)
          {
            fprintf(stderr, "%s: datalink type %d is not supported\n", dp->name, type);
            pcap_close(pd);
            err = err + 1;
          }

          else
          {
            if(!((signed int)buf[0l] == 0))
            {
              fprintf(stderr, "%s: %s\n", dp->name, (const void *)buf);
              err = err + 1;
            }

            signed int return_value_pcap_setnonblock_3;
            return_value_pcap_setnonblock_3=pcap_setnonblock(pd, 1, buf);
            if(!(return_value_pcap_setnonblock_3 >= 0))
            {
              fprintf(stderr, "%s: %s\n", dp->name, (const void *)buf);
              pcap_close(pd);
              err = err + 1;
            }

            else
            {
              void *return_value_malloc_4;
              return_value_malloc_4=malloc(sizeof(struct pcap_handler) /*168ul*/ );
              ph = (struct pcap_handler *)return_value_malloc_4;
              if(ph == ((struct pcap_handler *)NULL))
              {
                perror("malloc");
                exit(1);
              }

              memset((void *)ph, 0, sizeof(struct pcap_handler) /*168ul*/ );
              ph->masklen = aggregate;
              ph->name=strdup(dp->name);
              if(!(dp->description == ((char *)NULL)))
                tmp_if_expr_6 = *dp->description != 0 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_6 = (_Bool)0;
              if(tmp_if_expr_6)
                ph->descr=strdup(dp->description);

              else
                if(!((1u & dp->flags) == 0u))
                  ph->descr=strdup("Loopback");

                else
                {
                  return_value_parse_dl_name_5=parse_dl_name(type);
                  ph->descr=strdup(return_value_parse_dl_name_5);
                }
              ph->pcap = pd;
              ph->addr = dp->addresses;
              buf[(signed long int)0] = (char)0;
              cp = buf;
              if(type == 1)
              {
                if((1u & dp->flags) == 0u)
                {
                  signed int sfd;
                  sfd=socket(2, 2, 0);
                  if(!(sfd == -1))
                  {
                    struct ifreq ifr;
                    memset((void *)&ifr, 0, sizeof(struct ifreq) /*40ul*/ );
                    unsigned long int return_value_strlen_7;
                    return_value_strlen_7=strlen(dp->name);
                    if(!(return_value_strlen_7 >= 15ul))
                    {
                      return_value_strlen_8=strlen(dp->name);
                      tmp_if_expr_9 = return_value_strlen_8;
                    }

                    else
                      tmp_if_expr_9 = sizeof(char [16l]) /*16ul*/  - (unsigned long int)1;
                    memcpy((void *)ifr.ifr_ifrn.ifrn_name, (const void *)dp->name, tmp_if_expr_9);
                    signed int return_value_ioctl_12;
                    return_value_ioctl_12=ioctl(sfd, (unsigned long int)0x8927, &ifr);
                    if(!(return_value_ioctl_12 == -1))
                    {
                      const char *return_value_linkaddr_string_10;
                      return_value_linkaddr_string_10=linkaddr_string((unsigned char *)ifr.ifr_ifru.ifru_hwaddr.sa_data, (const unsigned int)6);
                      strcpy(cp, return_value_linkaddr_string_10);
                      unsigned long int return_value_strlen_11;
                      return_value_strlen_11=strlen(cp);
                      cp = cp + (signed long int)return_value_strlen_11;
                    }

                    close(sfd);
                  }

                }

              }

              ap = dp->addresses;
              do
              {
                if(!(ap == ((const struct pcap_addr *)NULL)))
                  tmp_if_expr_13 = cp < (buf + (signed long int)sizeof(char [256l]) /*256ul*/ ) - (signed long int)1 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_13 = (_Bool)0;
                if(!tmp_if_expr_13)
                  break;

                if(!(buf[0l] == 0))
                {
                  tmp_post_14 = cp;
                  cp = cp + 1l;
                  *tmp_post_14 = (char)32;
                  *cp = (char)0;
                }

                char *return_value_satoa_16;
                return_value_satoa_16=satoa(ap->addr, cp, (signed int)((buf + (signed long int)sizeof(char [256l]) /*256ul*/ ) - cp));
                if(!(return_value_satoa_16 == ((char *)NULL)))
                {
                  return_value_strlen_15=strlen(cp);
                  cp = cp + (signed long int)return_value_strlen_15;
                }

                ap = ap->next;
              }
              while((_Bool)1);
              *cp = (char)0;
              ph->addrstr=strdup(buf);
              void *return_value_malloc_17;
              return_value_malloc_17=malloc(sizeof(union anonymous_12) /*40ul*/ );
              ph->ns_mutex = (union anonymous_12 *)return_value_malloc_17;
              if(ph->ns_mutex == ((union anonymous_12 *)NULL))
              {
                perror("malloc");
                exit(1);
              }

              pthread_mutex_init(ph->ns_mutex, ((const union anonymous_30 *)NULL));
              ph->prev = ph_prev;
              if(!(ph_prev == ((struct pcap_handler *)NULL)))
                ph_prev->next = ph;

              else
                *ph_list = ph;
              ph_prev = ph;
              cnt = cnt + 1;
            }
          }
        }
      }

    }
    if(!(cnt == 0) && !(err == 0))
    {
      fflush(stderr);
      sleep((unsigned int)1);
    }

    return cnt;
  }
}

// pcap_matchdev
// file trafshow.c line 287
static struct pcap_if * pcap_matchdev(struct pcap_if *dp, const char *name)
{
  for( ; !(dp == ((struct pcap_if *)NULL)); dp = dp->next)
  {
    signed int return_value_strcasecmp_1;
    return_value_strcasecmp_1=strcasecmp(dp->name, "any");
    if(!(return_value_strcasecmp_1 == 0))
    {
      signed int return_value_strcasecmp_2;
      return_value_strcasecmp_2=strcasecmp(dp->name, name);
      if(return_value_strcasecmp_2 == 0)
      {
        dp->next = ((struct pcap_if *)NULL);
        return dp;
      }

    }

  }
  return ((struct pcap_if *)NULL);
}

// pcap_purge
// file trafshow.c line 703
void pcap_purge(void *arg)
{
  struct pcap_handler *ph = (struct pcap_handler *)arg;
  struct pcap_handler *p;
  struct timeval now;
  gettimeofday(&now, ((struct timezone *)NULL));
  now.tv_sec = now.tv_sec - (signed long int)purge_time;
  for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
  {
    p = ph;
    for( ; !(p == ((struct pcap_handler *)NULL)); p = p->deep)
      netstat_purge(p, &now);
  }
  now.tv_sec = now.tv_sec + (signed long int)(purge_time * 2);
  add_event(&now, pcap_purge, arg);
  pcap_show(arg);
}

// pcap_save
// file trafshow.c line 621
void pcap_save(struct pcap_handler *ph, const struct netstat *ns)
{
  signed int num;
  struct netstat_header nh;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  if(!(ns == ((const struct netstat *)NULL)) && !(ph == ((struct pcap_handler *)NULL)))
  {
    signed int return_value_netstat_insert_3;
    return_value_netstat_insert_3=netstat_insert(ph, ns);
    if(!(return_value_netstat_insert_3 == 0))
    {
      if(!(aggregate >= 0))
      {
        num=netstat_count(ph);
        if(num >= 5001)
        {
          if(!(ph->masklen == 0))
            ph->masklen = 0;

        }

        else
          if(num >= 1001)
          {
            if(!(ph->masklen >= 0))
              tmp_if_expr_1 = (_Bool)1;

            else
              tmp_if_expr_1 = ph->masklen > 16 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_1)
              ph->masklen = 16;

          }

          else
            if(num >= 251)
            {
              if(!(ph->masklen >= 0))
                tmp_if_expr_2 = (_Bool)1;

              else
                tmp_if_expr_2 = ph->masklen > 24 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_2)
                ph->masklen = 24;

            }

      }

    }

    while(!(ph->deep == ((struct pcap_handler *)NULL)))
    {
      num = ph->masklen;
      ph = ph->deep;
      if(!(ph->maskhdr == ((struct netstat_header *)NULL)))
      {
        memcpy((void *)&nh, (const void *)&ns->ns_hdr, sizeof(struct netstat_header) /*36ul*/ );
        netstat_aggregate(&nh, num);
        signed int return_value_memcmp_4;
        return_value_memcmp_4=memcmp((const void *)&nh, (const void *)ph->maskhdr, sizeof(struct netstat_header) /*36ul*/ );
        if(return_value_memcmp_4 == 0)
          netstat_insert(ph, ns);

      }

    }
  }

}

// pcap_set_selected
// file trafshow.c line 750
struct pcap_handler * pcap_set_selected(struct pcap_handler *ph, signed int idx)
{
  struct pcap_handler *sel = ((struct pcap_handler *)NULL);
  signed int i = 0;
  signed int tmp_post_1;
  for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
  {
    tmp_post_1 = i;
    i = i + 1;
    if(tmp_post_1 == idx)
    {
      sel = ph;
      ph->selected = 1;
    }

    else
      ph->selected = 0;
  }
  return sel;
}

// pcap_setexpr
// file trafshow.c line 477
char * pcap_setexpr(struct pcap_handler *ph, const char *expr)
{
  signed int op;
  struct bpf_program filter;
  unsigned int net;
  unsigned int mask;
  char name[100l];
  char buf[256l];
  char *return_value_pcap_geterr_3;
  char *return_value_pcap_geterr_5;
  if(expr == ((const char *)NULL))
    return ((char *)NULL);

  else
  {
    for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
      if(!(ph->pcap == ((struct pcap *)NULL)))
      {
        char *return_value_strcpy_1;
        return_value_strcpy_1=strcpy(name, ph->name);
        signed int return_value_pcap_lookupnet_2;
        return_value_pcap_lookupnet_2=pcap_lookupnet(return_value_strcpy_1, &net, &mask, buf);
        if(!(return_value_pcap_lookupnet_2 >= 0))
        {
          net = (unsigned int)0;
          mask = (unsigned int)0;
        }

        strncpy(buf, expr, sizeof(char [256l]) /*256ul*/ );
        buf[(signed long int)(sizeof(char [256l]) /*256ul*/  - (unsigned long int)1)] = (char)0;
        signed int return_value_pcap_compile_4;
        return_value_pcap_compile_4=pcap_compile(ph->pcap, &filter, buf, Oflag, mask);
        if(!(return_value_pcap_compile_4 >= 0))
        {
          return_value_pcap_geterr_3=pcap_geterr(ph->pcap);
          return return_value_pcap_geterr_3;
        }

        op=pcap_setfilter(ph->pcap, &filter);
        pcap_freecode(&filter);
        if(!(op >= 0))
        {
          return_value_pcap_geterr_5=pcap_geterr(ph->pcap);
          return return_value_pcap_geterr_5;
        }

      }

    return ((char *)NULL);
  }
}

// pcap_show
// file trafshow.c line 657
void pcap_show(void *arg)
{
  struct pcap_handler *ph = (struct pcap_handler *)arg;
  struct selector *sp;
  signed int idx;
  struct timeval now;
  gettimeofday(&now, ((struct timezone *)NULL));
  struct pcap_handler *return_value_pcap_get_selected_1;
  struct selector *return_value_help_page_selector_2;
  switch((signed int)show_mode)
  {
    case Interfaces:
    {
      sp=show_if_list(ph);
      if(!(search == ((char *)NULL)))
      {
        idx=show_if_search(ph, search);
        if(!(idx == -1))
          selector_set(idx, sp);

      }

      selector_redraw(sp);
      break;
    }
    case NetStat:
    {
      ph=pcap_get_selected(ph);
      sp=show_stat_list(ph);
      if(!(search == ((char *)NULL)))
      {
        idx=show_stat_search(ph, search);
        if(!(idx == -1))
          selector_set(idx, sp);

      }

      selector_redraw(sp);
      break;
    }
    case FlowDump:
    {
      return_value_pcap_get_selected_1=pcap_get_selected(ph);
      show_dump_print(return_value_pcap_get_selected_1);
      break;
    }
    case HelpPage:
    {
      return_value_help_page_selector_2=help_page_selector();
      selector_redraw(return_value_help_page_selector_2);
    }
  }
  now.tv_sec = now.tv_sec + (signed long int)refresh_time;
  add_event(&now, pcap_show, arg);
}

// pcaph_close
// file trafshow.c line 451
void pcaph_close(struct pcap_handler *ph)
{
  _Bool tmp_if_expr_1;
  if(ph == ((struct pcap_handler *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(ph->top != ((struct pcap_handler *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr_1)
  {
    ph->top->deep = ((struct pcap_handler *)NULL);
    if(!(ph->deep == ((struct pcap_handler *)NULL)))
      pcaph_close(ph->deep);

    netstat_free(ph);
    if(!(ph->ns_mutex == ((union anonymous_12 *)NULL)))
    {
      pthread_mutex_destroy(ph->ns_mutex);
      free((void *)ph->ns_mutex);
      ph->ns_mutex = ((union anonymous_12 *)NULL);
    }

    remove_event(((void (*)(void *))NULL), (void *)ph);
    if(!(ph->maskhdr == ((struct netstat_header *)NULL)))
      free((void *)ph->maskhdr);

    if(!(ph->selector == ((struct selector *)NULL)))
    {
      if(!(ph->selector->list == NULL))
        free(ph->selector->list);

      free((void *)ph->selector);
    }

    free((void *)ph);
  }

}

// pcaph_create
// file trafshow.c line 414
struct pcap_handler * pcaph_create(struct pcap_handler *top, struct netstat_header *nh)
{
  struct pcap_handler *ph;
  _Bool tmp_if_expr_1;
  if(top == ((struct pcap_handler *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = top->masklen < 0 ? (_Bool)1 : (_Bool)0;
  if(nh == ((struct netstat_header *)NULL) || tmp_if_expr_1)
    return ((struct pcap_handler *)NULL);

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct pcap_handler) /*168ul*/ );
    ph = (struct pcap_handler *)return_value_malloc_2;
    if(ph == ((struct pcap_handler *)NULL))
      return ((struct pcap_handler *)NULL);

    else
    {
      memset((void *)ph, 0, sizeof(struct pcap_handler) /*168ul*/ );
      ph->masklen = -1;
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(sizeof(struct netstat_header) /*36ul*/ );
      ph->maskhdr = (struct netstat_header *)return_value_malloc_3;
      if(ph->maskhdr == ((struct netstat_header *)NULL))
        return ((struct pcap_handler *)NULL);

      else
      {
        memcpy((void *)ph->maskhdr, (const void *)nh, sizeof(struct netstat_header) /*36ul*/ );
        netstat_aggregate(ph->maskhdr, top->masklen);
        void *return_value_malloc_4;
        return_value_malloc_4=malloc(sizeof(union anonymous_12) /*40ul*/ );
        ph->ns_mutex = (union anonymous_12 *)return_value_malloc_4;
        if(ph->ns_mutex == ((union anonymous_12 *)NULL))
        {
          free((void *)ph->maskhdr);
          return ((struct pcap_handler *)NULL);
        }

        else
        {
          pthread_mutex_init(ph->ns_mutex, ((const union anonymous_30 *)NULL));
          ph->name = top->name;
          ph->descr = top->descr;
          ph->pcap = top->pcap;
          ph->selected = 1;
          ph->top = top;
          top->deep = ph;
          return ph;
        }
      }
    }
  }
}

// print_mode
// file show_dump.c line 67
static void print_mode(void)
{
  const char *cp = cisco_netflow_dump;
  char src_buf[100l];
  char dst_buf[100l];
  char proto_buf[20l];
  if(!(dump_match == ((struct netstat *)NULL)))
  {
    hdr2str(&dump_match->ns_hdr, src_buf, (signed int)sizeof(char [100l]) /*100ul*/ , dst_buf, (signed int)sizeof(char [100l]) /*100ul*/ , proto_buf, (signed int)sizeof(char [20l]) /*20ul*/ );
    if(cisco_netflow_dump == ((const char *)NULL))
      switch((signed int)show_stat_mode)
      {
        case Size:
        {
          cp = "HexData";
          break;
        }
        case Data:
        {
          cp = "AsciiData";
          break;
        }
        case Packets:
          cp = "Packets";
      }

    if(!(stdscr == ((struct _win_st *)NULL)))
    {
      stdscr->_attrs = (unsigned long int)((unsigned long int)1UL << 8 + 8);
      0;
    }

    else
      -1;
    printw("\n--- %s %s > %s %s flow ---", (const void *)proto_buf, (const void *)src_buf, (const void *)dst_buf, cp);
    if(!(stdscr == ((struct _win_st *)NULL)))
    {
      stdscr->_attrs = (unsigned long int)(1UL - 1UL);
      0;
    }

    else
      -1;
    wredrawln(stdscr, 0, LINES);
    wrefresh(stdscr);
  }

}

// protoid_string
// file addrtoname.c line 562
const char * protoid_string(const unsigned char *pi)
{
  unsigned int i;
  unsigned int j;
  char *cp;
  struct protoidmem *tp;
  char buf[(signed long int)sizeof(char [15l]) /*15l*/ ];
  tp=lookup_protoid(pi);
  char *tmp_post_1;
  char *tmp_post_2;
  const unsigned char *tmp_post_3;
  char *tmp_post_4;
  char *tmp_post_5;
  char *tmp_post_6;
  const unsigned char *tmp_post_7;
  if(!(tp->p_name == ((const char *)NULL)))
    return tp->p_name;

  else
  {
    cp = buf;
    j = (unsigned int)((signed int)*pi >> 4);
    if(!(j == 0u))
    {
      tmp_post_1 = cp;
      cp = cp + 1l;
      *tmp_post_1 = hex[(signed long int)j];
    }

    tmp_post_2 = cp;
    cp = cp + 1l;
    tmp_post_3 = pi;
    pi = pi + 1l;
    *tmp_post_2 = hex[(signed long int)((signed int)*tmp_post_3 & 0xf)];
    i = (unsigned int)4;
    do
    {
      i = i - 1u;
      if(!((signed int)i >= 0))
        break;

      tmp_post_4 = cp;
      cp = cp + 1l;
      *tmp_post_4 = (char)58;
      j = (unsigned int)((signed int)*pi >> 4);
      if(!(j == 0u))
      {
        tmp_post_5 = cp;
        cp = cp + 1l;
        *tmp_post_5 = hex[(signed long int)j];
      }

      tmp_post_6 = cp;
      cp = cp + 1l;
      tmp_post_7 = pi;
      pi = pi + 1l;
      *tmp_post_6 = hex[(signed long int)((signed int)*tmp_post_7 & 0xf)];
    }
    while((_Bool)1);
    *cp = (char)0;
    tp->p_name=strdup(buf);
    return tp->p_name;
  }
}

// read_key
// file getkey.c line 69
static void read_key(struct session_ent *sd, const unsigned char *data, signed int len)
{
  const void *return_value_session_cookie_1;
  if(len >= 1 && !(sd == ((struct session_ent *)NULL)) && !(data == ((const unsigned char *)NULL)))
  {
    signed int key;
    key=scan_key(data, len);
    if(!(key == -1))
    {
      return_value_session_cookie_1=session_cookie(sd);
      parse_key(key, (struct pcap_handler *)return_value_session_cookie_1);
    }

  }

}

// read_netflow
// file cisco_netflow.c line 167
static void read_netflow(struct session_ent *sd, const unsigned char *data, signed int len)
{
  struct sockaddr *from;
  struct pcap_handler *ph;
  struct pcap_handler **ph_list;
  const void *return_value_session_cookie_1;
  return_value_session_cookie_1=session_cookie(sd);
  ph_list = (struct pcap_handler **)return_value_session_cookie_1;
  if(!(ph_list == ((struct pcap_handler **)NULL)) && !(data == ((const unsigned char *)NULL)) && (unsigned long int)len >= sizeof(struct cnf_hdr_v1) /*16ul*/ )
  {
    from=session_from(sd);
    if(!(from == ((struct sockaddr *)NULL)))
    {
      ph=match_feeder(*ph_list, from);
      if(ph == ((struct pcap_handler *)NULL))
      {
        signed int cnt = 0;
        struct pcap_handler *ph_prev = ((struct pcap_handler *)NULL);
        char buf[256l];
        struct pcap_addr *ap;
        ph = *ph_list;
        for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
        {
          if(ph->pcap == ((struct pcap *)NULL))
            cnt = cnt + 1;

          ph_prev = ph;
        }
        void *return_value_malloc_2;
        return_value_malloc_2=malloc(sizeof(struct pcap_handler) /*168ul*/ );
        ph = (struct pcap_handler *)return_value_malloc_2;
        if(ph == ((struct pcap_handler *)NULL))
        {
          perror("malloc");
          goto __CPROVER_DUMP_L14;
        }

        memset((void *)ph, 0, sizeof(struct pcap_handler) /*168ul*/ );
        ph->masklen = aggregate;
        char *return_value_get_name_3;
        return_value_get_name_3=get_name(from, buf, (signed int)sizeof(char [256l]) /*256ul*/ );
        if(return_value_get_name_3 == ((char *)NULL))
          sprintf(buf, "netflow%d", cnt);

        ph->name=strdup(buf);
        unsigned short int return_value_ntohs_4;
        return_value_ntohs_4=ntohs(((struct cnf_hdr_v1 *)data)->version);
        sprintf(buf, "Netflow V%d", return_value_ntohs_4);
        ph->descr=strdup(buf);
        void *return_value_malloc_6;
        return_value_malloc_6=malloc(sizeof(struct pcap_addr) /*40ul*/ );
        ap = (struct pcap_addr *)return_value_malloc_6;
        if(!(ap == ((struct pcap_addr *)NULL)))
        {
          memset((void *)ap, 0, sizeof(struct pcap_addr) /*40ul*/ );
          void *return_value_malloc_5;
          return_value_malloc_5=malloc(sizeof(struct sockaddr) /*16ul*/ );
          ap->addr = (struct sockaddr *)return_value_malloc_5;
          if(ap->addr == ((struct sockaddr *)NULL))
          {
            perror("malloc");
            goto __CPROVER_DUMP_L14;
          }

          memcpy((void *)ap->addr, (const void *)from, sizeof(struct sockaddr) /*16ul*/ );
        }

        ph->addr = ap;
        void *return_value_malloc_7;
        return_value_malloc_7=malloc(sizeof(union anonymous_12) /*40ul*/ );
        ph->ns_mutex = (union anonymous_12 *)return_value_malloc_7;
        if(ph->ns_mutex == ((union anonymous_12 *)NULL))
        {
          perror("malloc");
          goto __CPROVER_DUMP_L14;
        }

        pthread_mutex_init(ph->ns_mutex, ((const union anonymous_30 *)NULL));
        ph->prev = ph_prev;
        if(!(ph_prev == ((struct pcap_handler *)NULL)))
          ph_prev->next = ph;

        else
          *ph_list = ph;
      }

      parse_netflow(ph, data, len);
    }

  }


__CPROVER_DUMP_L14:
  ;
}

// refree
// file recycle.h line 46
void refree(struct reroot *r)
{
  struct recycle *temp = r->list;
  if(!(temp == ((struct recycle *)NULL)))
    for( ; !(r->list == ((struct recycle *)NULL)); r->list = temp)
    {
      temp = r->list->next;
      free((void *)(char *)r->list);
    }

  free((void *)(char *)r);
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// remkroot
// file recycle.h line 43
struct reroot * remkroot(unsigned long int size)
{
  struct reroot *r;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct reroot) /*40ul*/ );
  r = (struct reroot *)return_value_malloc_1;
  if(!(r == ((struct reroot *)NULL)))
  {
    r->list = (struct recycle *)0;
    r->trash = (struct recycle *)0;
    r->size = (unsigned long int)size + (sizeof(void *) /*8ul*/  - (unsigned long int)1) & ~(sizeof(void *) /*8ul*/  - (unsigned long int)1);
    r->logsize = (unsigned long int)0;
    r->numleft = 0;
  }

  return r;
}

// remove_event
// file events.h line 69
signed int remove_event(void (*func)(void *), void *arg)
{
  signed int found = 0;
  struct event_ent *ep = first_event;
  _Bool tmp_if_expr_1;
  for( ; !(ep == ((struct event_ent *)NULL)); ep = ep->next)
  {
    if(func == ((void (*)(void *))NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = ep->func == func ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      if(ep->arg == arg)
      {
        ep->func = ((void (*)(void *))NULL);
        found = found + 1;
      }

    }

  }
  return found;
}

// renewx
// file recycle.h line 52
char * renewx(struct reroot *r)
{
  struct recycle *temp;
  if(!(r->trash == ((struct recycle *)NULL)))
  {
    temp = r->trash;
    r->trash = temp->next;
    memset((void *)temp, 0, r->size);
  }

  else
  {
    r->numleft = (signed int)(r->size * ((unsigned long int)1 << r->logsize));
    if(!(r->numleft >= 32000))
      r->logsize = r->logsize + 1ul;

    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct recycle) /*8ul*/  + (unsigned long int)r->numleft);
    temp = (struct recycle *)return_value_malloc_1;
    if(temp == ((struct recycle *)NULL))
      return ((char *)NULL);

    temp->next = r->list;
    r->list = temp;
    r->numleft = r->numleft - (signed int)r->size;
    temp = (struct recycle *)((char *)(r->list + (signed long int)1) + (signed long int)r->numleft);
  }
  return (char *)temp;
}

// sap_print
// file show_stat.c line 189
static char * sap_print(const unsigned char *addr, unsigned char sap, char *dst, signed int size)
{
  char buf[20l];
  signed int len;
  const char *return_value_etheraddr_string_1;
  return_value_etheraddr_string_1=etheraddr_string(addr);
  strncpy(dst, return_value_etheraddr_string_1, (unsigned long int)size);
  dst[(signed long int)(size - 1)] = (char)0;
  buf[(signed long int)0] = (char)47;
  const char *return_value_llcsap_string_2;
  if(!(nflag == 0))
    sprintf(&buf[(signed long int)1], "sap-%02x", (signed int)sap & 0xff);

  else
  {
    return_value_llcsap_string_2=llcsap_string(sap);
    strncpy(&buf[(signed long int)1], return_value_llcsap_string_2, (unsigned long int)10);
  }
  buf[(signed long int)11] = (char)0;
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(buf);
  len = (signed int)return_value_strlen_3;
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(dst);
  if(!(return_value_strlen_4 + (unsigned long int)len >= (unsigned long int)size))
    strcat(dst, buf);

  else
    strcpy(&dst[(signed long int)((size - len) - 1)], buf);
  return dst;
}

// satoa
// file addrtoname.h line 42
char * satoa(struct sockaddr *sa, char *dst, signed int size)
{
  const char *cp = ((const char *)NULL);
  if(dst == ((char *)NULL) || sa == ((struct sockaddr *)NULL) || !(size >= 1))
    return ((char *)NULL);

  else
  {
    if((signed int)sa->sa_family == 2)
      cp=intoa(((struct sockaddr_in *)sa)->sin_addr.s_addr);

    if(cp == ((const char *)NULL))
      return ((char *)NULL);

    else
    {
      strncpy(dst, cp, (unsigned long int)size);
      dst[(signed long int)(size - 1)] = (char)0;
      return dst;
    }
  }
}

// scale_size
// file show_if.c line 29
static void scale_size(signed int *name, signed int *addr, signed int *descr)
{
  *name = (signed int)(line_factor * (double)15);
  *addr = (signed int)(line_factor * (double)45);
  *descr = (signed int)(line_factor * (double)20);
}

// scale_size_link1
// file show_stat.c line 36
static void scale_size_link1(signed int *addr_link1, signed int *prot, signed int *data, signed int *rate)
{
  *addr_link1 = (signed int)(line_factor * (double)25);
  *prot = (signed int)(line_factor * (double)10);
  *data = (signed int)(line_factor * (double)10);
  *rate = (signed int)(line_factor * (double)10);
}

// scale_size_link2
// file help_page.c line 80
static void scale_size_link2(signed int *name_link1, signed int *descr_link1)
{
  *name_link1 = (signed int)(line_factor * (double)10);
  *descr_link1 = (signed int)(line_factor * (double)50);
}

// scan_key
// file getkey.c line 416
static signed int scan_key(const unsigned char *buf, signed int len)
{
  signed int i;
  _Bool tmp_if_expr_1;
  if(!((signed int)*buf == 27))
    return (signed int)buf[(signed long int)0];

  else
    if(len == 1)
      return 0x0100;

    else
    {
      i = 1;
      if((signed int)buf[(signed long int)i] == 91)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)buf[(signed long int)i] == 79 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        i = i + 1;
        if(!(i >= len))
          goto __CPROVER_DUMP_L5;

        return -1;
      }

      else
      {

      __CPROVER_DUMP_L5:
        ;
        switch((signed int)buf[(signed long int)i])
        {
          case 0:
            return 0x0800;
          case 65:

          case 105:
            return 0x0200;
          case 66:
            return 0x0300;
          case 68:
            return 0x0400;
          case 67:
            return 0x0500;
          case 73:

          case 86:

          case 83:

          case 118:
            return 0x0600;
          case 71:

          case 85:

          case 84:
            return 0x0700;
          case 72:
            return 0x0800;
          case 70:

          case 89:
            return 0x0900;
          case 53:
            return 0x0600;
          case 54:
            return 0x0700;
          case 49:
          {
            i = i + 1;
            if(i >= len)
              return -1;

            switch((signed int)buf[(signed long int)i])
            {
              case 49:
                return 0x1000;
              case 50:
                return 0x2000;
              case 51:
                return 0x3000;
              case 52:
                return 0x4000;
              case 53:
              {
                i = i + 1;
                if(i >= len)
                  return -1;

                if((signed int)buf[(signed long int)i] == 48)
                  return 0x0600;

                if((signed int)buf[(signed long int)i] == 52)
                  return 0x0700;

              }
              default:
                return 0x0800;
            }
          }
          case 52:
            return 0x0900;
          case 50:

          case 76:
            return 0x0a00;
          case 77:
            return 0x1000;
          case 78:
            return 0x2000;
          case 79:
            return 0x3000;
          case 80:
            return 0x4000;
          default:
            return -1;
        }
      }
    }
}

// screen_clear
// file screen.c line 146
void screen_clear(void)
{
  if(!(stdscr == ((struct _win_st *)NULL)))
  {
    stdscr->_attrs = (unsigned long int)(1UL - 1UL);
    0;
  }

  else
    -1;
  wclear(stdscr);
  wrefresh(stdscr);
}

// screen_close
// file screen.h line 22
void screen_close(void)
{
  if(!(stdscr == ((struct _win_st *)NULL)))
  {
    stdscr->_attrs = (unsigned long int)(1UL - 1UL);
    0;
  }

  else
    -1;
  wmove(stdscr, LINES - 1, 0);
  wclrtoeol(stdscr);
  wrefresh(stdscr);
  endwin();
}

// screen_dock_cursor
// file screen.c line 163
void screen_dock_cursor(signed int y, signed int x)
{
  curs_dock_x = x != 0 ? x : COLS - 1;
  curs_dock_y = y != 0 ? y : LINES - 1;
}

// screen_open
// file screen.h line 21
signed int screen_open(signed int resize)
{
  if(resize == 0)
  {
    struct _win_st *return_value_initscr_1;
    return_value_initscr_1=initscr();
    if(return_value_initscr_1 == (struct _win_st *)-1)
    {
      fprintf(stderr, "Can't initialize terminal -- unknown terminal type?\n");
      return -1;
    }

    _Bool return_value_has_colors_2;
    return_value_has_colors_2=has_colors();
    use_colors = (signed int)return_value_has_colors_2;
    if(!(use_colors == 0))
    {
      start_color();
      signed int return_value_init_colormask_3;
      return_value_init_colormask_3=init_colormask();
      if(!(return_value_init_colormask_3 >= 0))
      {
        endwin();
        return -1;
      }

    }

    cbreak();
    noecho();
    nonl();
  }

  else
  {
    signed int fd;
    signed int new_rows = 0;
    signed int new_cols = 0;
    struct winsize ws;
    char *cp;
    fd=open("/dev/tty", 0);
    if(!(fd == -1))
    {
      signed int return_value_ioctl_4;
      return_value_ioctl_4=ioctl(fd, (unsigned long int)0x5413, &ws);
      if(!(return_value_ioctl_4 == -1))
      {
        new_rows = (signed int)ws.ws_row;
        new_cols = (signed int)ws.ws_col;
      }

      close(fd);
    }

    if(new_rows == 0)
    {
      cp=getenv("LINES");
      if(!(cp == ((char *)NULL)))
        new_rows=atoi(cp);

      else
        new_rows = 24;
    }

    if(new_cols == 0)
    {
      cp=getenv("COLUMNS");
      if(!(cp == ((char *)NULL)))
        new_cols=atoi(cp);

      else
        new_cols = 80;
    }

    resizeterm(new_rows, new_cols);
  }
  wclear(stdscr);
  prompt_mode = 0;
  screen_dock_cursor(LINES - 1, COLS - 1);
  if(!(LINES >= 20))
  {
    screen_status("Too small LINES (%d) on screen", LINES);
    return -1;
  }

  else
    if(!(COLS >= 2))
    {
      screen_status("Too small COLUMNS (%d) on screen", COLS);
      return -1;
    }

    else
    {
      line_factor = (double)COLS / (double)80;
      return 0;
    }
}

// screen_status
// file screen.h line 23
void screen_status(const char *fmt, ...)
{
  void **ap;
  char buf[1024l];
  ap = (void **)&fmt;
  strcpy(buf, "[ ");
  vsprintf(buf + (signed long int)2, fmt, ap);
  buf[(signed long int)(COLS - 4)] = (char)0;
  strcat(buf, " ]");
  if(!(stdscr == ((struct _win_st *)NULL)))
  {
    stdscr->_attrs = (unsigned long int)((unsigned long int)1UL << 8 + 8);
    0;
  }

  else
    -1;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(buf);
  signed int return_value_wmove_2;
  return_value_wmove_2=wmove(stdscr, LINES - 2, (signed int)((unsigned long int)(COLS / 2) - return_value_strlen_1 / (unsigned long int)2));
  if(return_value_wmove_2 == -1)
    -1;

  else
    waddnstr(stdscr, buf, -1);
  if(!(stdscr == ((struct _win_st *)NULL)))
  {
    stdscr->_attrs = (unsigned long int)(1UL - 1UL);
    0;
  }

  else
    -1;
  screen_update();
  sleep((unsigned int)1);
}

// screen_update
// file screen.c line 156
void screen_update(void)
{
  wmove(stdscr, curs_dock_y, curs_dock_x);
  wrefresh(stdscr);
}

// select_event
// file events.h line 56
signed int select_event(struct timeval *tvp)
{
  struct event_ent *ep;
  struct event_ent *next_event;
  struct timeval now;
  struct timeval gap;
  struct timeval earliest;
  gettimeofday(&now, ((struct timezone *)NULL));
  gap.tv_sec = (signed long int)0;
  gap.tv_usec = 1000L;
  tv_add(&gap, &now);

again:
  ;
  next_event = ((struct event_ent *)NULL);
  (&earliest)->tv_usec = (signed long int)0;
  (&earliest)->tv_sec = (&earliest)->tv_usec;
  ep = first_event;
  signed int tmp_if_expr_4;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  signed int tmp_if_expr_2;
  for( ; !(ep == ((struct event_ent *)NULL)); ep = ep->next)
    if(!(ep->func == ((void (*)(void *))NULL)))
    {
      if(gap.tv_sec == ep->tv.tv_sec)
        tmp_if_expr_4 = (signed int)((&gap)->tv_usec > (&ep->tv)->tv_usec);

      else
        tmp_if_expr_4 = (signed int)((&gap)->tv_sec > (&ep->tv)->tv_sec);
      if(!(tmp_if_expr_4 == 0))
      {
        void (*func)() = (void (*)())ep->func;
        ep->func = ((void (*)(void *))NULL);
        func(ep->arg);
      }

      else
      {
        if(!(earliest.tv_sec == 0l))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = (&earliest)->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_1)
          tmp_if_expr_3 = (_Bool)1;

        else
        {
          if(ep->tv.tv_sec == earliest.tv_sec)
            tmp_if_expr_2 = (signed int)((&ep->tv)->tv_usec < (&earliest)->tv_usec);

          else
            tmp_if_expr_2 = (signed int)((&ep->tv)->tv_sec < (&earliest)->tv_sec);
          tmp_if_expr_3 = tmp_if_expr_2 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_3)
        {
          earliest = ep->tv;
          next_event = ep;
        }

      }
    }

  if(next_event == ((struct event_ent *)NULL))
    return 1;

  else
  {
    if(!(tvp == ((struct timeval *)NULL)))
    {
      tv_sub(&earliest, &now);
      *tvp = earliest;
    }

    return 0;
  }
}

// selector_get
// file selector.c line 249
signed int selector_get(struct selector *sp)
{
  _Bool tmp_if_expr_1;
  if(sp == ((struct selector *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(sp->list != NULL) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = sp->items < 1 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = sp->index < 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = (_Bool)1;

  else
    tmp_if_expr_4 = sp->index >= sp->items ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_4)
    return -1;

  else
    return sp->index;
}

// selector_init
// file selector.c line 85
struct selector * selector_init()
{
  struct selector *sp;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct selector) /*96ul*/ );
  sp = (struct selector *)return_value_malloc_1;
  if(!(sp == ((struct selector *)NULL)))
  {
    memset((void *)sp, 0, sizeof(struct selector) /*96ul*/ );
    sp->window_color = -1;
    sp->cursor_color = -1;
  }

  return sp;
}

// selector_move
// file selector.h line 42
signed int selector_move(signed int ch, struct selector *sp)
{
  signed int lines;
  _Bool tmp_if_expr_1;
  if(sp == ((struct selector *)NULL))
    return -1;

  else
  {
    get_size(sp, &lines, ((signed int *)NULL));
    if(!(ch == 16) && !(ch == 107) && !(ch == 0x0200))
    {
      if(ch == 14 || ch == 106 || ch == 0x0300)
        goto __CPROVER_DUMP_L4;

      if(ch == 2 || ch == 8 || ch == 21 || ch == 0x0600)
        goto __CPROVER_DUMP_L6;

      if(ch == 4 || ch == 6 || ch == 32 || ch == 0x0700)
        goto __CPROVER_DUMP_L11;

      if(ch == 1 || ch == 0x0800)
        goto __CPROVER_DUMP_L17;

      if(ch == 5 || ch == 0x0900)
        goto __CPROVER_DUMP_L18;

      if(ch == 10 || ch == 13)
        goto __CPROVER_DUMP_L21;

      if(ch == 7)
        goto __CPROVER_DUMP_L22;

    }

    else
      if(sp->index + -1 >= 0)
      {
        sp->index = sp->index - 1;
        sp->cline = sp->cline - 1;
        if(!(sp->cline >= 0))
        {
          if(!(sp->fline == 0))
          {
            sp->cline = 0;
            sp->fline = sp->fline - 1;
            if(!(sp->fline >= 0))
              sp->fline = 0;

          }

        }

        goto __CPROVER_DUMP_L23;

      __CPROVER_DUMP_L4:
        ;
        if(!(1 + sp->index >= sp->items))
        {
          sp->index = sp->index + 1;
          sp->cline = sp->cline + 1;
          if(sp->cline >= lines)
          {
            sp->cline = sp->cline - 1;
            sp->fline = sp->index - sp->cline;
          }

          goto __CPROVER_DUMP_L23;

        __CPROVER_DUMP_L6:
          ;
          if(sp->cline >= 1)
            sp->index = sp->index - sp->cline;

          else
          {
            sp->index = sp->index - lines;
            sp->fline = sp->fline - lines;
            if(!(sp->index >= 0))
              tmp_if_expr_1 = (_Bool)1;

            else
              tmp_if_expr_1 = sp->fline < 0 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_1)
            {
              sp->fline = 0;
              sp->index = sp->fline;
            }

          }
          sp->cline = 0;
          goto __CPROVER_DUMP_L23;

        __CPROVER_DUMP_L11:
          ;
          if(lines >= sp->items)
          {
            sp->cline = sp->items - 1;
            sp->index = sp->cline;
          }

          else
          {
            if(!(sp->cline >= lines + -1))
              sp->index = sp->index + ((lines - sp->cline) - 1);

            else
            {
              sp->index = sp->index + lines;
              sp->fline = (sp->index - lines) + 1;
            }
            if(sp->index >= sp->items)
            {
              sp->index = sp->items - 1;
              sp->fline = sp->items - lines;
            }

            sp->cline = lines - 1;
          }
          goto __CPROVER_DUMP_L23;

        __CPROVER_DUMP_L17:
          ;
          sp->index = 0;
          sp->fline = 0;
          sp->cline = 0;
          goto __CPROVER_DUMP_L23;

        __CPROVER_DUMP_L18:
          ;
          if(lines >= sp->items)
          {
            sp->cline = sp->items - 1;
            sp->index = sp->cline;
          }

          else
          {
            sp->index = sp->items - 1;
            sp->fline = sp->items - lines;
            sp->cline = lines - 1;
          }
          goto __CPROVER_DUMP_L23;

        __CPROVER_DUMP_L21:
          ;
          return sp->index;

        __CPROVER_DUMP_L22:
          ;
          mvprintw(LINES - 1, 0, "items=%d index=%d fline=%d cline=%d LINE=%d COL=%d LINES=%d func=%p", sp->items, sp->index, sp->fline, sp->cline, sp->LINE, sp->COL, lines, sp->get_line);
          wclrtoeol(stdscr);
        }

      }


  __CPROVER_DUMP_L23:
    ;
    return -1;
  }
}

// selector_redraw
// file selector.h line 38
void selector_redraw(struct selector *sp)
{
  signed int i;
  signed int l;
  signed int r;
  signed int lines;
  signed int cols;
  signed int first_line;
  signed int first_col;
  signed int fg_color;
  signed int cr_color;
  signed int attr;
  char *cp;
  char buf[1024l];
  _Bool tmp_if_expr_2;
  signed int tmp_post_1;
  signed int tmp_post_3;
  signed int tmp_post_4;
  _Bool tmp_if_expr_6;
  signed int tmp_post_5;
  signed int tmp_post_7;
  signed int tmp_post_8;
  signed int tmp_post_9;
  _Bool tmp_if_expr_11;
  signed int tmp_post_10;
  signed int tmp_post_12;
  if(!(sp == ((struct selector *)NULL)))
  {
    if(sp->index >= sp->items)
      selector_set(sp->items - 1, sp);

    get_size(sp, &lines, &cols);
    get_colors(sp, &fg_color, &cr_color);
    first_line = sp->LINE;
    first_col = sp->COL;
    if(!(stdscr == ((struct _win_st *)NULL)))
    {
      stdscr->_attrs = (unsigned long int)(1UL - 1UL);
      0;
    }

    else
      -1;
    wredrawln(stdscr, first_line, lines + 2);
    if(!(sp->get_header == ((signed int (*)(char *, signed int, const void *))NULL)))
    {
      attr = fg_color;
      signed int return_value;
      return_value=sp->get_header(buf, (signed int)sizeof(char [1024l]) /*1024ul*/ , sp->header);
      attr = attr | return_value;
      wmove(stdscr, first_line, first_col);
      r = cols;
      cp = buf;
      if(!(*cp == 0))
      {
        tmp_post_1 = r;
        r = r - 1;
        tmp_if_expr_2 = tmp_post_1 > 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
      {
        if((signed int)*cp >= 33)
          waddch(stdscr, (const unsigned long int)((signed int)*cp | attr));

        else
          waddch(stdscr, (const unsigned long int)(32 | attr));
        cp = cp + 1l;
      }

      tmp_post_3 = r;
      r = r - 1;
      if(tmp_post_3 >= 1)
        waddch(stdscr, (const unsigned long int)(32 | attr));

      wmove(stdscr, first_line + 1, first_col);
      r = cols;
      tmp_post_4 = r;
      r = r - 1;
      if(tmp_post_4 >= 1)
        waddch(stdscr, acs_map[(signed long int)(unsigned char)113] | (unsigned long int)attr);

      first_line = first_line + 2;
    }

    i = sp->fline;
    l = 0;
    for( ; !(l >= lines); l = l + 1)
    {
      attr = fg_color;
      wmove(stdscr, first_line + l, first_col);
      r = cols;
      if(!(i >= sp->items))
      {
        if(!(sp->get_line == ((signed int (*)(char *, signed int, const void *, signed int))NULL)))
        {
          signed int return_value_1;
          return_value_1=sp->get_line(buf, (signed int)sizeof(char [1024l]) /*1024ul*/ , sp->list, i);
          attr = attr | return_value_1;
          if(i == sp->index)
            attr = cr_color;

          cp = buf;
          if(!(*cp == 0))
          {
            tmp_post_5 = r;
            r = r - 1;
            tmp_if_expr_6 = tmp_post_5 > 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_6 = (_Bool)0;
          if(tmp_if_expr_6)
          {
            if((signed int)*cp >= 33)
              waddch(stdscr, (const unsigned long int)((signed int)*cp | attr));

            else
              waddch(stdscr, (const unsigned long int)(32 | attr));
            if(r == 1)
            {
              if(i == sp->items + -1)
                attr = fg_color;

            }

            cp = cp + 1l;
          }

        }

      }

      do
      {
        tmp_post_7 = r;
        r = r - 1;
        if(!(tmp_post_7 >= 1))
          break;

        waddch(stdscr, (const unsigned long int)(32 | attr));
      }
      while((_Bool)1);
      i = i + 1;
    }
    if(!(sp->get_footer == ((signed int (*)(char *, signed int, const void *))NULL)))
    {
      attr = fg_color;
      signed int return_value_2;
      return_value_2=sp->get_footer(buf, (signed int)sizeof(char [1024l]) /*1024ul*/ , sp->footer);
      attr = attr | return_value_2;
      first_line = first_line + l;
      tmp_post_8 = first_line;
      first_line = first_line + 1;
      wmove(stdscr, tmp_post_8, first_col);
      r = cols;
      tmp_post_9 = r;
      r = r - 1;
      if(tmp_post_9 >= 1)
        waddch(stdscr, acs_map[(signed long int)(unsigned char)113] | (unsigned long int)attr);

      if(prompt_mode == 0 || !(first_line == LINES + -1))
      {
        wmove(stdscr, first_line, first_col);
        r = cols;
        cp = buf;
        if(!(*cp == 0))
        {
          tmp_post_10 = r;
          r = r - 1;
          tmp_if_expr_11 = tmp_post_10 > 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_11 = (_Bool)0;
        if(tmp_if_expr_11)
        {
          if((signed int)*cp >= 33)
            waddch(stdscr, (const unsigned long int)((signed int)*cp | attr));

          else
            waddch(stdscr, (const unsigned long int)(32 | attr));
          cp = cp + 1l;
        }

        tmp_post_12 = r;
        r = r - 1;
        if(tmp_post_12 >= 1)
          waddch(stdscr, (const unsigned long int)(32 | attr));

      }

    }

    screen_update();
  }

}

// selector_set
// file selector.h line 41
void selector_set(signed int new_index, struct selector *sp)
{
  signed int lines;
  if(!(sp == ((struct selector *)NULL)))
  {
    if(!(sp->items >= 1))
    {
      sp->index = 0;
      sp->fline = 0;
      sp->cline = 0;
    }

    else
    {
      get_size(sp, &lines, ((signed int *)NULL));
      if(new_index >= sp->items)
        new_index = sp->items - 1;

      sp->fline = (new_index / lines) * lines;
      sp->cline = new_index % lines;
      if(sp->fline + lines >= sp->items)
      {
        sp->fline = sp->items - lines;
        if(!(sp->fline >= 0))
          sp->fline = 0;

        sp->cline = new_index - sp->fline;
      }

      sp->index = new_index;
    }
  }

}

// selector_withdraw
// file selector.h line 39
void selector_withdraw(struct selector *sp)
{
  signed int i;
  signed int l;
  signed int r;
  signed int lines;
  signed int cols;
  signed int first_line;
  signed int first_col;
  signed int fg_color;
  signed int attr;
  char *cp;
  char buf[1024l];
  _Bool tmp_if_expr_1;
  if(sp == ((struct selector *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(sp->get_line != ((signed int (*)(char *, signed int, const void *, signed int))NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  signed int tmp_post_2;
  signed int tmp_post_4;
  if(!tmp_if_expr_1)
  {
    get_size(sp, &lines, &cols);
    get_colors(sp, &fg_color, ((signed int *)NULL));
    first_line = sp->LINE;
    first_col = sp->COL;
    if(!(stdscr == ((struct _win_st *)NULL)))
    {
      stdscr->_attrs = (unsigned long int)(1UL - 1UL);
      0;
    }

    else
      -1;
    if(!(sp->get_header == ((signed int (*)(char *, signed int, const void *))NULL)))
      first_line = first_line + 2;

    wredrawln(stdscr, first_line, lines);
    i = sp->fline;
    l = 0;
    for( ; !(l >= lines); l = l + 1)
    {
      if(i == sp->index)
      {
        attr = fg_color;
        wmove(stdscr, first_line + l, first_col);
        r = cols;
        if(!(i >= sp->items))
        {
          if(!(sp->get_line == ((signed int (*)(char *, signed int, const void *, signed int))NULL)))
          {
            signed int return_value;
            return_value=sp->get_line(buf, (signed int)sizeof(char [1024l]) /*1024ul*/ , sp->list, i);
            attr = attr | return_value;
            cp = buf;
            if(!(*cp == 0))
            {
              tmp_post_2 = r;
              r = r - 1;
              tmp_if_expr_3 = tmp_post_2 > 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_3 = (_Bool)0;
            if(tmp_if_expr_3)
            {
              if((signed int)*cp >= 33)
                waddch(stdscr, (const unsigned long int)((signed int)*cp | attr));

              else
                waddch(stdscr, (const unsigned long int)(32 | attr));
              if(r == 1)
              {
                if(i == sp->items + -1)
                  attr = fg_color;

              }

              cp = cp + 1l;
            }

            tmp_post_4 = r;
            r = r - 1;
            if(tmp_post_4 >= 1)
              waddch(stdscr, (const unsigned long int)(32 | attr));

          }

        }

        break;
      }

      i = i + 1;
    }
  }

}

// session_bind
// file session.c line 253
signed int session_bind(struct session_ent *sd, void (*notify)(void *), void *arg)
{
  struct session_binder_ent *curr;
  struct session_binder_ent *last = ((struct session_binder_ent *)NULL);
  if(notify == ((void (*)(void *))NULL) || arg == NULL || sd == ((struct session_ent *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  curr = sd->sb;
  for( ; !(curr == ((struct session_binder_ent *)NULL)); curr = curr->next)
  {
    if(curr->notify == notify)
    {
      if(curr->arg == arg)
        return 0;

    }

    last = curr;
  }
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct session_binder_ent) /*24ul*/ );
  curr = (struct session_binder_ent *)return_value_malloc_2;
  if(curr == ((struct session_binder_ent *)NULL))
    return -1;

  else
  {
    curr->notify = notify;
    curr->arg = arg;
    curr->next = ((struct session_binder_ent *)NULL);
    if(!(last == ((struct session_binder_ent *)NULL)))
      last->next = curr;

    else
      sd->sb = curr;
    return 0;
  }
}

// session_cookie
// file session.h line 90
const void * session_cookie(struct session_ent *sd)
{
  _Bool tmp_if_expr_1;
  if(!(sd == ((struct session_ent *)NULL)))
    tmp_if_expr_1 = sd->sid != 0ul ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  const void *tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = sd->cookie;

  else
    tmp_if_expr_2 = NULL;
  return tmp_if_expr_2;
}

// session_find
// file session.c line 350
struct session_ent * session_find(struct sockaddr *peer, enum anonymous_6 type)
{
  struct session_ent *sd;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  signed int return_value_memcmp_3;
  if(peer == ((struct sockaddr *)NULL))
    return ((struct session_ent *)NULL);

  else
  {
    sd = first_session;
    for( ; !(sd == ((struct session_ent *)NULL)); sd = sd->next)
    {
      if(sd->sid == 0ul)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = sd->type != type ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = sd->peer.ss_family != peer->sa_family ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_2)
      {
        if((signed int)peer->sa_family == 2)
        {
          struct sockaddr_in *sin = (struct sockaddr_in *)&sd->peer;
          if(sin->sin_port == ((struct sockaddr_in *)peer)->sin_port)
          {
            return_value_memcmp_3=memcmp((const void *)&sin->sin_addr, (const void *)&((struct sockaddr_in *)peer)->sin_addr, sizeof(struct in_addr) /*4ul*/ );
            if(return_value_memcmp_3 == 0)
              return sd;

          }

        }

      }

    }
    return ((struct session_ent *)NULL);
  }
}

// session_free
// file session.c line 313
void session_free(struct session_ent *free_sd)
{
  struct session_ent *sd;
  struct session_ent *prev;
  struct session_ent *next;
  struct session_binder_ent *sb;
  sd = first_session;
  next = ((struct session_ent *)NULL);
  prev = next;
  while(!(sd == ((struct session_ent *)NULL)))
  {
    if(sd == free_sd || free_sd == ((struct session_ent *)NULL))
    {
      if(free_sd == ((struct session_ent *)NULL))
      {
        next = sd->next;
        if(!(prev == ((struct session_ent *)NULL)))
          prev->next = next;

        else
          first_session = next;
      }

      sb = sd->sb;
      for( ; !(sb == ((struct session_binder_ent *)NULL)); sb = sb->next)
        if(!(sb->notify == ((void (*)(void *))NULL)))
        {
          if(!(sb->arg == NULL))
            sb->notify(sb->arg);

        }

      session_stop(sd);
      session_unbind(sd, ((void (*)(void *))NULL), NULL);
      if(free_sd == ((struct session_ent *)NULL))
      {
        free((void *)sd);
        sd = next;
        continue;
      }

      sd->sid = (unsigned long int)0;
    }

    prev = sd;
    sd = sd->next;
  }
}

// session_from
// file session.c line 692
struct sockaddr * session_from(struct session_ent *sd)
{
  _Bool tmp_if_expr_1;
  if(!(sd == ((struct session_ent *)NULL)))
    tmp_if_expr_1 = sd->from.ss_family != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  struct sockaddr *tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (struct sockaddr *)&sd->from;

  else
    tmp_if_expr_2 = ((struct sockaddr *)NULL);
  return tmp_if_expr_2;
}

// session_idle
// file session.c line 245
signed int session_idle(struct session_ent *sd)
{
  _Bool tmp_if_expr_1;
  if(sd == ((struct session_ent *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(sd->sid != 0ul) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return -1;

  else
    return sd->sock != -1 ? 0 : 1;
}

// session_open
// file session.h line 79
struct session_ent * session_open(signed int sock, struct sockaddr *peer, enum anonymous_6 type)
{
  struct session_ent *sd;
  struct session_ent *prev = ((struct session_ent *)NULL);
  struct session_ent *next = ((struct session_ent *)NULL);
  sd = first_session;
  for( ; !(sd == ((struct session_ent *)NULL)); sd = sd->next)
  {
    if(sd->sid == 0ul)
    {
      next = sd->next;
      break;
    }

    prev = sd;
  }
  void *return_value_malloc_1;
  if(sd == ((struct session_ent *)NULL))
  {
    return_value_malloc_1=malloc(sizeof(struct session_ent) /*352ul*/ );
    sd = (struct session_ent *)return_value_malloc_1;
    if(!(sd == ((struct session_ent *)NULL)))
      goto __CPROVER_DUMP_L4;

    return ((struct session_ent *)NULL);
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    memset((void *)sd, 0, sizeof(struct session_ent) /*352ul*/ );
    static unsigned long int sid = (unsigned long int)0;
    sid = sid + 1ul;
    if(sid == 0ul)
      sid = sid + 1ul;

    sd->sid = sid;
    sd->sock = sock;
    if(!(peer == ((struct sockaddr *)NULL)))
      memcpy((void *)&sd->peer, (const void *)peer, sizeof(struct sockaddr) /*16ul*/ );

    else
      memset((void *)&sd->peer, 0, sizeof(struct sockaddr_storage) /*128ul*/ );
    memset((void *)&sd->from, 0, sizeof(struct sockaddr_storage) /*128ul*/ );
    sd->type = type;
    if(!(next == ((struct session_ent *)NULL)))
      sd->next = next;

    else
      if(!(prev == ((struct session_ent *)NULL)))
        prev->next = sd;

    if(first_session == ((struct session_ent *)NULL))
      first_session = sd;

    signed int return_value_session_start_2;
    return_value_session_start_2=session_start(sd);
    if(!(return_value_session_start_2 >= 0))
    {
      sd->sid = (unsigned long int)0;
      sd = ((struct session_ent *)NULL);
    }

    return sd;
  }
}

// session_operate
// file session.h line 95
void session_operate(struct anonymous_11 *readfds, struct anonymous_11 *writefds)
{
  struct session_ent *sd;
  signed int try_conn;
  signed int error;
  sd = first_session;
  _Bool tmp_if_expr_1;
  signed int return_value_session_read_3;
  signed int *return_value___errno_location_2;
  for( ; !(sd == ((struct session_ent *)NULL)); sd = sd->next)
  {
    if(sd->sid == 0ul)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = sd->sock == -1 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
    {
      try_conn = (signed int)(sd->connected != ((void (*)(struct session_ent *))NULL));
      if(try_conn == 0)
      {
        if(!((readfds->__fds_bits[(signed long int)(sd->sock / 8)] & (signed long int)(1UL << sd->sock % 8)) == 0l))
        {
          if((signed int)sd->type == PlainFile)
            error = 0;

          else
            error=socket_error(sd->sock);
          if(error == 0)
          {
            return_value_session_read_3=session_read(sd);
            if(!(return_value_session_read_3 >= 0))
            {
              return_value___errno_location_2=__errno_location();
              error = *return_value___errno_location_2;
            }

          }

          if(!(error == 0))
          {
            if(!(sd->sid == 0ul))
            {
              if(!(sd->read_error == ((void (*)(struct session_ent *, signed int))NULL)))
                sd->read_error(sd, error);

            }

          }

        }

      }

      if(!(try_conn == 0))
      {
        if(!((writefds->__fds_bits[(signed long int)(sd->sock / 8)] & (signed long int)(1UL << sd->sock % 8)) == 0l))
        {
          error=socket_error(sd->sock);
          if(error == 0)
          {
            socket_peer((struct sockaddr *)&sd->peer, sd->sock);
            socket_nonblock(sd->sock, 0);
            if((signed int)sd->type == TextStream)
              socket_keepalive(sd->sock, 1);

            if(!(sd->sid == 0ul))
            {
              if(!(sd->connected == ((void (*)(struct session_ent *))NULL)))
                sd->connected(sd);

            }

            sd->connected = ((void (*)(struct session_ent *))NULL);
          }

          else
            if(!(sd->sid == 0ul))
            {
              if(!(sd->read_error == ((void (*)(struct session_ent *, signed int))NULL)))
                sd->read_error(sd, error);

            }

        }

      }

    }

  }
}

// session_peer
// file session.c line 682
struct sockaddr * session_peer(struct session_ent *sd)
{
  _Bool tmp_if_expr_1;
  if(!(sd == ((struct session_ent *)NULL)))
    tmp_if_expr_1 = sd->peer.ss_family != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  struct sockaddr *tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (struct sockaddr *)&sd->peer;

  else
    tmp_if_expr_2 = ((struct sockaddr *)NULL);
  return tmp_if_expr_2;
}

// session_read
// file session.c line 451
static signed int session_read(struct session_ent *sd)
{
  signed int rlen = 0;
  signed int rest = 0;
  char *cp;
  char *line;
  char buf[8192l];
  if(sd == ((struct session_ent *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  _Bool tmp_if_expr_3;
  if(sd->sid == 0ul)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = sd->sock == -1 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 107;
    return -1;
  }

  buf[(signed long int)0] = (char)0;
  if((signed int)sd->type == PlainFile)
  {
    signed long int return_value_read_4;
    return_value_read_4=read(sd->sock, (void *)buf, sizeof(char [8192l]) /*8192ul*/ );
    rlen = (signed int)return_value_read_4;
  }

  else
    if((signed int)sd->type == TextStream)
    {
      if(!(sd->buf == ((char *)NULL)))
      {
        char *return_value_strcpy_5;
        return_value_strcpy_5=strcpy(buf, sd->buf);
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen(return_value_strcpy_5);
        rest = (signed int)return_value_strlen_6;
        free((void *)sd->buf);
        sd->buf = ((char *)NULL);
      }

      signed long int return_value_read_7;
      return_value_read_7=read(sd->sock, (void *)&buf[(signed long int)rest], (sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)1) - (unsigned long int)rest);
      rlen = (signed int)return_value_read_7;
    }

    else
      if((signed int)sd->type == DataSequence)
      {
        struct sockaddr from;
        unsigned int slen = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
        signed long int return_value_recvfrom_8;
        return_value_recvfrom_8=recvfrom(sd->sock, (void *)buf, sizeof(char [8192l]) /*8192ul*/ , 0, &from, &slen);
        rlen = (signed int)return_value_recvfrom_8;
        if(!(rlen == -1))
        {
          if((unsigned long int)slen >= 17ul || !((unsigned long int)slen >= sizeof(struct sockaddr_in) /*16ul*/ ))
            return 0;

          if(!(sd->peer.ss_family == 0))
          {
            if(!(sd->peer.ss_family == from.sa_family))
              return 0;

          }

          memcpy((void *)&sd->from, (const void *)&from, (unsigned long int)slen);
        }

        else
          memset((void *)&sd->from, 0, sizeof(struct sockaddr_storage) /*128ul*/ );
      }

      else
      {
        signed int *return_value___errno_location_9;
        return_value___errno_location_9=__errno_location();
        *return_value___errno_location_9 = 94;
        return -1;
      }
  _Bool tmp_if_expr_12;
  signed int *return_value___errno_location_11;
  signed int *return_value___errno_location_10;
  if(!(rlen >= 1))
  {
    if(rlen == 0)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value___errno_location_11=__errno_location();
      tmp_if_expr_12 = !(*return_value___errno_location_11 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_12)
    {
      return_value___errno_location_10=__errno_location();
      *return_value___errno_location_10 = 104;
    }

    return -1;
  }

  _Bool tmp_if_expr_20;
  if((signed int)sd->type == PlainFile)
    tmp_if_expr_20 = (_Bool)1;

  else
    tmp_if_expr_20 = (signed int)sd->type == DataSequence ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_13;
  char *tmp_post_14;
  _Bool tmp_if_expr_15;
  if(tmp_if_expr_20)
  {
    if(sd->sid == 0ul)
      tmp_if_expr_13 = (_Bool)1;

    else
      tmp_if_expr_13 = sd->sock == -1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_13)
      return 0;

    if(!(sd->read_data == ((void (*)(struct session_ent *, const unsigned char *, signed int))NULL)))
      sd->read_data(sd, (unsigned char *)buf, rlen);

  }

  else
  {
    buf[(signed long int)(rest + rlen)] = (char)0;
    cp = buf;
    do
    {
      line=strchr(cp, 10);
      if(line == ((char *)NULL))
        break;

      if(!(cp >= line))
      {
        if((signed int)line[-1l] == 13)
          line[(signed long int)-1] = (char)0;

      }

      tmp_post_14 = line;
      line = line + 1l;
      *tmp_post_14 = (char)0;
      if(sd->sid == 0ul)
        tmp_if_expr_15 = (_Bool)1;

      else
        tmp_if_expr_15 = sd->sock == -1 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_15)
        return 0;

      if(!(sd->read_data == ((void (*)(struct session_ent *, const unsigned char *, signed int))NULL)))
      {
        unsigned long int return_value_strlen_16;
        return_value_strlen_16=strlen(cp);
        rest = (signed int)return_value_strlen_16;
        if(rest >= 1501)
        {
          signed int *return_value___errno_location_17;
          return_value___errno_location_17=__errno_location();
          *return_value___errno_location_17 = 90;
          return -1;
        }

        sd->read_data(sd, (unsigned char *)cp, rest);
      }

      cp = line;
    }
    while((_Bool)1);
    if(!(cp == ((char *)NULL)))
    {
      if(!(*cp == 0))
      {
        unsigned long int return_value_strlen_19;
        return_value_strlen_19=strlen(cp);
        if(return_value_strlen_19 >= 1501ul)
        {
          signed int *return_value___errno_location_18;
          return_value___errno_location_18=__errno_location();
          *return_value___errno_location_18 = 90;
          return -1;
        }

        sd->buf=strdup(cp);
      }

    }

  }
  return rlen;
}

// session_select
// file session.h line 93
signed int session_select(signed int *nfds, struct anonymous_11 *readfds, struct anonymous_11 *writefds, struct timeval *timeout, signed int *block)
{
  struct session_ent *sd;
  struct timeval earliest;
  struct timeval now;
  signed int active = 0;
  signed int pending = 0;
  (&earliest)->tv_usec = (signed long int)0;
  (&earliest)->tv_sec = (&earliest)->tv_usec;
  sd = first_session;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  signed int tmp_if_expr_3;
  for( ; !(sd == ((struct session_ent *)NULL)); sd = sd->next)
  {
    if(sd->sid == 0ul)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = sd->sock == -1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      if(!(sd->sock == -1))
        session_stop(sd);

    }

    else
    {
      active = active + 1;
      if(!(*nfds >= 1 + sd->sock))
        *nfds = sd->sock + 1;

      if(sd->connected == ((void (*)(struct session_ent *))NULL))
        readfds->__fds_bits[(signed long int)(sd->sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = readfds->__fds_bits[(signed long int)(sd->sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << sd->sock % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));

      else
        writefds->__fds_bits[(signed long int)(sd->sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = writefds->__fds_bits[(signed long int)(sd->sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << sd->sock % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      if(!(sd->expire.tv_sec == 0l))
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = (&sd->expire)->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
      {
        pending = pending + 1;
        if(!(earliest.tv_sec == 0l))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = (&earliest)->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_2)
          tmp_if_expr_4 = (_Bool)1;

        else
        {
          if(sd->expire.tv_sec == earliest.tv_sec)
            tmp_if_expr_3 = (signed int)((&sd->expire)->tv_usec < (&earliest)->tv_usec);

          else
            tmp_if_expr_3 = (signed int)((&sd->expire)->tv_sec < (&earliest)->tv_sec);
          tmp_if_expr_4 = tmp_if_expr_3 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_4)
          earliest = sd->expire;

      }

    }
  }
  _Bool tmp_if_expr_7;
  signed int tmp_if_expr_6;
  if(pending == 0)
    return active;

  else
  {
    gettimeofday(&now, ((struct timezone *)NULL));
    tv_sub(&earliest, &now);
    if(!(*block == 0))
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      if(earliest.tv_sec == timeout->tv_sec)
        tmp_if_expr_6 = (signed int)((&earliest)->tv_usec < timeout->tv_usec);

      else
        tmp_if_expr_6 = (signed int)((&earliest)->tv_sec < timeout->tv_sec);
      tmp_if_expr_7 = tmp_if_expr_6 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
    {
      *timeout = earliest;
      *block = 0;
    }

    return active;
  }
}

// session_send
// file session.c line 387
signed int session_send(struct session_ent *sd, const unsigned char *data, signed int len)
{
  signed int wlen = 0;
  if(sd == ((struct session_ent *)NULL) || !(len >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  _Bool tmp_if_expr_3;
  if(sd->sid == 0ul)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = sd->sock == -1 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 107;
    return -1;
  }

  signed long int return_value_write_4;
  _Bool tmp_if_expr_8;
  signed int tmp_post_6;
  signed int tmp_post_7;
  signed long int return_value_send_11;
  if(!(data == ((const unsigned char *)NULL)))
  {
    if((signed int)sd->type == PlainFile)
    {
      if(!(len == 0))
      {
        return_value_write_4=write(sd->sock, (const void *)data, (unsigned long int)len);
        wlen = (signed int)return_value_write_4;
      }

    }

    else
      if((signed int)sd->type == TextStream)
      {
        char buf[8192l];
        if(sd->peer.ss_family == 0)
        {
          signed int *return_value___errno_location_5;
          return_value___errno_location_5=__errno_location();
          *return_value___errno_location_5 = 107;
          return -1;
        }

        if((unsigned long int)len >= 8191ul)
          len = (signed int)(sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)2);

        if(!(len == 0))
          memcpy((void *)buf, (const void *)data, (unsigned long int)len);

        if(len == 0)
          tmp_if_expr_8 = (_Bool)1;

        else
          tmp_if_expr_8 = (signed int)buf[(signed long int)(len - 1)] != 10 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_8)
        {
          tmp_post_6 = len;
          len = len + 1;
          buf[(signed long int)tmp_post_6] = (char)13;
          tmp_post_7 = len;
          len = len + 1;
          buf[(signed long int)tmp_post_7] = (char)10;
        }

        signed long int return_value_write_9;
        return_value_write_9=write(sd->sock, (const void *)buf, (unsigned long int)len);
        wlen = (signed int)return_value_write_9;
      }

      else
        if((signed int)sd->type == DataSequence)
        {
          if(sd->peer.ss_family == 0)
          {
            signed int *return_value___errno_location_10;
            return_value___errno_location_10=__errno_location();
            *return_value___errno_location_10 = 107;
            return -1;
          }

          if(!(len == 0))
          {
            return_value_send_11=send(sd->sock, (const void *)data, (unsigned long int)len, 0);
            wlen = (signed int)return_value_send_11;
          }

        }

        else
        {
          wlen = -1;
          signed int *return_value___errno_location_12;
          return_value___errno_location_12=__errno_location();
          *return_value___errno_location_12 = 94;
        }
  }

  _Bool tmp_if_expr_17;
  signed int *return_value___errno_location_16;
  if(wlen == -1)
  {
    signed int *return_value___errno_location_15;
    return_value___errno_location_15=__errno_location();
    if(*return_value___errno_location_15 == 11)
      tmp_if_expr_17 = (_Bool)1;

    else
    {
      return_value___errno_location_16=__errno_location();
      tmp_if_expr_17 = *return_value___errno_location_16 == 115 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_17)
    {
      signed int *return_value___errno_location_13;
      return_value___errno_location_13=__errno_location();
      *return_value___errno_location_13 = 0;
      wlen = 0;
    }

    else
      if(!(sd->read_error == ((void (*)(struct session_ent *, signed int))NULL)))
      {
        signed int *return_value___errno_location_14;
        return_value___errno_location_14=__errno_location();
        sd->read_error(sd, *return_value___errno_location_14);
        return wlen;
      }

  }

  if(sd->timeout >= 1u)
  {
    gettimeofday(&sd->expire, ((struct timezone *)NULL));
    sd->expire.tv_sec = sd->expire.tv_sec + (signed long int)sd->timeout;
  }

  return wlen;
}

// session_setcallback
// file session.h line 85
void session_setcallback(struct session_ent *sd, void (*connected)(struct session_ent *), void (*read_error)(struct session_ent *, signed int), void (*read_data)(struct session_ent *, const unsigned char *, signed int))
{
  if(!(sd == ((struct session_ent *)NULL)))
  {
    if(!(sd->sid == 0ul))
    {
      if(!(connected == ((void (*)(struct session_ent *))NULL)))
      {
        if((signed int)sd->type == TextStream)
          sd->connected = connected;

      }

      if(!(read_error == ((void (*)(struct session_ent *, signed int))NULL)))
        sd->read_error = read_error;

      if(!(read_data == ((void (*)(struct session_ent *, const unsigned char *, signed int))NULL)))
        sd->read_data = read_data;

    }

  }

}

// session_setcookie
// file session.h line 89
void session_setcookie(struct session_ent *sd, const void *cookie)
{
  if(!(sd == ((struct session_ent *)NULL)))
  {
    if(!(sd->sid == 0ul))
      sd->cookie = cookie;

  }

}

// session_settimeout
// file session.c line 177
unsigned int session_settimeout(struct session_ent *sd, unsigned int timeout)
{
  unsigned int prev;
  _Bool tmp_if_expr_1;
  if(sd == ((struct session_ent *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(sd->sid != 0ul) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (unsigned int)0;

  else
  {
    prev = sd->timeout;
    sd->timeout = timeout;
    if(!(sd->timeout >= 1u))
    {
      (&sd->expire)->tv_usec = (signed long int)0;
      (&sd->expire)->tv_sec = (&sd->expire)->tv_usec;
    }

    return prev;
  }
}

// session_sock
// file session.c line 170
signed int session_sock(struct session_ent *sd)
{
  signed int tmp_if_expr_1;
  if(!(sd == ((struct session_ent *)NULL)))
    tmp_if_expr_1 = sd->sock;

  else
    tmp_if_expr_1 = -1;
  return tmp_if_expr_1;
}

// session_start
// file session.c line 104
signed int session_start(struct session_ent *sd)
{
  signed int af;
  if(sd == ((struct session_ent *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  *return_value___errno_location_2 = 9;
  _Bool tmp_if_expr_4;
  signed int return_value_socket_peer_3;
  _Bool tmp_if_expr_9;
  signed int *return_value___errno_location_8;
  signed int *return_value___errno_location_5;
  _Bool tmp_if_expr_13;
  signed int *return_value___errno_location_12;
  if(!(sd->sock == -1))
  {
    if((signed int)sd->type == PlainFile)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_socket_peer_3=socket_peer((struct sockaddr *)&sd->peer, sd->sock);
      tmp_if_expr_4 = return_value_socket_peer_3 != -1 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_4)
      goto __CPROVER_DUMP_L5;

    socket_nonblock(sd->sock, 0);
    if((signed int)sd->type == TextStream)
      socket_keepalive(sd->sock, 1);

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    af = (signed int)sd->peer.ss_family;
    if(af == 0)
      af = 2;

    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    if(*return_value___errno_location_7 == 9)
      tmp_if_expr_9 = (_Bool)1;

    else
    {
      return_value___errno_location_8=__errno_location();
      tmp_if_expr_9 = *return_value___errno_location_8 == 88 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_9)
    {
      switch((signed int)sd->type)
      {
        case PlainFile:
        {
          sd->sock = -1;
          return_value___errno_location_5=__errno_location();
          *return_value___errno_location_5 = 22;
          break;
        }
        case TextStream:
        {
          sd->sock=socket(af, 1, 0);
          break;
        }
        case DataSequence:
          sd->sock=socket(af, 2, 0);
      }
      if(sd->sock == -1)
        return -1;

      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      *return_value___errno_location_6 = 107;
    }

    signed int *return_value___errno_location_14;
    return_value___errno_location_14=__errno_location();
    if(*return_value___errno_location_14 == 107)
    {
      socket_nonblock(sd->sock, 1);
      if(sd->peer.ss_family == 0)
      {
        signed int *return_value___errno_location_10;
        return_value___errno_location_10=__errno_location();
        *return_value___errno_location_10 = 0;
        return 0;
      }

      signed int return_value_connect_11;
      return_value_connect_11=connect(sd->sock, (struct sockaddr *)&sd->peer, (unsigned int)sizeof(struct sockaddr) /*16ul*/ );
      if(!(return_value_connect_11 == -1))
        tmp_if_expr_13 = (_Bool)1;

      else
      {
        return_value___errno_location_12=__errno_location();
        tmp_if_expr_13 = *return_value___errno_location_12 == 115 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_13)
        return 0;

    }

    session_stop(sd);
    return -1;
  }
}

// session_stop
// file session.c line 228
void session_stop(struct session_ent *sd)
{
  if(!(sd == ((struct session_ent *)NULL)))
  {
    if(!(sd->sock == -1))
    {
      close(sd->sock);
      sd->sock = -1;
    }

    if(!(sd->buf == ((char *)NULL)))
    {
      free((void *)sd->buf);
      sd->buf = ((char *)NULL);
    }

    (&sd->expire)->tv_usec = (signed long int)0;
    (&sd->expire)->tv_sec = (&sd->expire)->tv_usec;
  }

}

// session_timeout
// file session.h line 96
void session_timeout()
{
  struct session_ent *sd;
  struct timeval now;
  gettimeofday(&now, ((struct timezone *)NULL));
  sd = first_session;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  signed int tmp_if_expr_2;
  for( ; !(sd == ((struct session_ent *)NULL)); sd = sd->next)
  {
    if(sd->sid == 0ul)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = sd->sock == -1 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
    {
      if(!(sd->expire.tv_sec == 0l))
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (&sd->expire)->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
      {
        if(sd->expire.tv_sec == now.tv_sec)
          tmp_if_expr_2 = (signed int)((&sd->expire)->tv_usec < (&now)->tv_usec);

        else
          tmp_if_expr_2 = (signed int)((&sd->expire)->tv_sec < (&now)->tv_sec);
        if(!(tmp_if_expr_2 == 0))
        {
          if(!(sd->read_error == ((void (*)(struct session_ent *, signed int))NULL)))
            sd->read_error(sd, 110);

        }

      }

    }

  }
}

// session_unbind
// file session.c line 282
void session_unbind(struct session_ent *sd, void (*notify)(void *), void *arg)
{
  struct session_binder_ent *curr;
  struct session_binder_ent *prev;
  struct session_binder_ent *next;
  struct session_binder_ent *tmp_if_expr_1;
  if(!(sd == ((struct session_ent *)NULL)))
    tmp_if_expr_1 = sd->sb;

  else
    tmp_if_expr_1 = ((struct session_binder_ent *)NULL);
  curr = tmp_if_expr_1;
  prev = ((struct session_binder_ent *)NULL);
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  while(!(curr == ((struct session_binder_ent *)NULL)))
  {
    if(notify == ((void (*)(void *))NULL) && arg == NULL)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(curr->notify == notify)
        tmp_if_expr_2 = curr->arg == arg ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
    {
      next = curr->next;
      if(!(prev == ((struct session_binder_ent *)NULL)))
        prev->next = next;

      else
        sd->sb = next;
      free((void *)curr);
      curr = next;
    }

    else
    {
      prev = curr;
      curr = curr->next;
    }
  }
}

// show_ascii_dump
// file show_dump.c line 479
static void show_ascii_dump(const unsigned char *cp, signed int length)
{
  if(!(cp == ((const unsigned char *)NULL)) && length >= 1)
  {
    if(redraw_lines == 0)
      waddch(stdscr, (const unsigned long int)10);

    do
    {
      length = length - 1;
      if(!(length >= 0))
        break;

      if(!((signed int)*cp == 13))
      {
        if(!((signed int)*cp == 8))
          waddch(stdscr, (const unsigned long int)*cp);

      }

      cp = cp + 1l;
    }
    while((_Bool)1);
    redraw_lines = redraw_lines + 1;
  }

}

// show_dump_close
// file show_dump.h line 20
void show_dump_close(void)
{
  if(!(cisco_netflow_dump == ((const char *)NULL)))
  {
    free((void *)(char *)cisco_netflow_dump);
    cisco_netflow_dump = ((const char *)NULL);
  }

  if(!(file_netflow == ((struct _IO_FILE *)NULL)))
  {
    fclose(file_netflow);
    file_netflow = ((struct _IO_FILE *)NULL);
  }

  if(!(live_pcap_thr == ((unsigned long int *)NULL)))
  {
    pthread_cancel(*live_pcap_thr);
    free((void *)live_pcap_thr);
    live_pcap_thr = ((unsigned long int *)NULL);
  }

  if(!(live_dump == ((struct pcap_dumper *)NULL)))
  {
    pcap_dump_close(live_dump);
    live_dump = ((struct pcap_dumper *)NULL);
  }

  if(!(live_pcap == ((struct pcap *)NULL)))
  {
    pcap_close(live_pcap);
    live_pcap = ((struct pcap *)NULL);
  }

  if(!(file_pcap == ((struct pcap *)NULL)))
  {
    pcap_close(file_pcap);
    file_pcap = ((struct pcap *)NULL);
  }

  if(!(dump_file == ((const char *)NULL)))
  {
    unlink(dump_file);
    free((void *)(char *)dump_file);
    dump_file = ((const char *)NULL);
  }

  scrollok(stdscr, (_Bool)0);
}

// show_dump_input
// file show_dump.h line 21
void show_dump_input(signed int ch)
{
  signed int return_value_show_stat_input_1;
  if(ch == 18 || ch == 67 || ch == 99)
    screen_clear();

  else
  {
    return_value_show_stat_input_1=show_stat_input(((struct pcap_handler *)NULL), ch);
    if(!(return_value_show_stat_input_1 == 0))
      print_mode();

  }
}

// show_dump_open
// file show_dump.h line 18
signed int show_dump_open(const struct pcap_handler *ph, const struct netstat *ns)
{
  signed int op;
  struct bpf_program filter;
  unsigned int net;
  unsigned int mask;
  char name[100l];
  char buf[256l];
  void *return_value_malloc_1;
  if(ns == ((const struct netstat *)NULL) || ph == ((const struct pcap_handler *)NULL))
    return -1;

  else
  {
    show_dump_close();
    if(dump_match == ((struct netstat *)NULL))
    {
      return_value_malloc_1=malloc(sizeof(struct netstat) /*96ul*/ );
      dump_match = (struct netstat *)return_value_malloc_1;
      if(!(dump_match == ((struct netstat *)NULL)))
        goto __CPROVER_DUMP_L2;

      screen_status("%s: malloc: Out of memory?", ph->name);
      show_dump_close();
      return -1;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      memcpy((void *)dump_match, (const void *)ns, sizeof(struct netstat) /*96ul*/ );
      if(!(ph->pcap == ((struct pcap *)NULL)))
      {
        buf[(signed long int)0] = (char)0;
        char *return_value_strcpy_2;
        return_value_strcpy_2=strcpy(name, ph->name);
        live_pcap=pcap_open_live(return_value_strcpy_2, 1536, promisc, 1, buf);
        if(!((signed int)buf[0l] == 0))
          screen_status("%s: %s", ph->name, (const void *)buf);

        if(live_pcap == ((struct pcap *)NULL))
          return -1;

        char *return_value_strcpy_3;
        return_value_strcpy_3=strcpy(name, ph->name);
        signed int return_value_pcap_lookupnet_4;
        return_value_pcap_lookupnet_4=pcap_lookupnet(return_value_strcpy_3, &net, &mask, buf);
        if(!(return_value_pcap_lookupnet_4 >= 0))
        {
          net = (unsigned int)0;
          mask = (unsigned int)0;
        }

        char *return_value_build_filter_expr_5;
        return_value_build_filter_expr_5=build_filter_expr(buf, (signed int)sizeof(char [256l]) /*256ul*/ , ns);
        if(return_value_build_filter_expr_5 == ((char *)NULL))
        {
          screen_status("%s: Can't build filter expression", ph->name);
          show_dump_close();
          return -1;
        }

        signed int return_value_pcap_compile_7;
        return_value_pcap_compile_7=pcap_compile(live_pcap, &filter, buf, Oflag, mask);
        if(!(return_value_pcap_compile_7 >= 0))
        {
          char *return_value_pcap_geterr_6;
          return_value_pcap_geterr_6=pcap_geterr(live_pcap);
          screen_status("%s: %s", ph->name, return_value_pcap_geterr_6);
          show_dump_close();
          return -1;
        }

        op=pcap_setfilter(live_pcap, &filter);
        pcap_freecode(&filter);
        if(!(op >= 0))
        {
          char *return_value_pcap_geterr_8;
          return_value_pcap_geterr_8=pcap_geterr(live_pcap);
          screen_status("%s: %s", ph->name, return_value_pcap_geterr_8);
          show_dump_close();
          return -1;
        }

      }

      else
      {
        cisco_netflow_dump=strdup(ph->name);
        if(cisco_netflow_dump == ((const char *)NULL))
        {
          screen_status("%s: strdup: Out of memory?", ph->name);
          show_dump_close();
          return -1;
        }

      }
      snprintf(buf, sizeof(char [256l]) /*256ul*/ , "%s/%s.XXXXXX", (const void *)"/tmp", progname);
      op=mkstemp(buf);
      if(!(op >= 0))
      {
        signed int *return_value___errno_location_9;
        return_value___errno_location_9=__errno_location();
        char *return_value_strerror_10;
        return_value_strerror_10=strerror(*return_value___errno_location_9);
        screen_status("%s: %s: %s", ph->name, (const void *)buf, return_value_strerror_10);
        show_dump_close();
        return -1;
      }

      close(op);
      dump_file=strdup(buf);
      if(dump_file == ((const char *)NULL))
      {
        screen_status("%s: strdup: Out of memory?", ph->name);
        show_dump_close();
        return -1;
      }

      else
      {
        if(cisco_netflow_dump == ((const char *)NULL))
        {
          live_dump=pcap_dump_open(live_pcap, dump_file);
          if(live_dump == ((struct pcap_dumper *)NULL))
          {
            char *return_value_pcap_geterr_11;
            return_value_pcap_geterr_11=pcap_geterr(live_pcap);
            screen_status("%s: %s", ph->name, return_value_pcap_geterr_11);
            show_dump_close();
            return -1;
          }

          pcap_dump_flush(live_dump);
          void *return_value_malloc_12;
          return_value_malloc_12=malloc(sizeof(unsigned long int) /*8ul*/ );
          live_pcap_thr = (unsigned long int *)return_value_malloc_12;
          if(live_pcap_thr == ((unsigned long int *)NULL))
          {
            screen_status("%s: malloc: Out of memory?", ph->name);
            show_dump_close();
            return -1;
          }

          signed int return_value_pthread_create_13;
          return_value_pthread_create_13=pthread_create(live_pcap_thr, ((const union pthread_attr_t *)NULL), (void * (*)(void *))live_pcap_dump, NULL);
          if(!(return_value_pthread_create_13 == 0))
          {
            screen_status("%s: pthread_create: Out of resources?", ph->name);
            show_dump_close();
            return -1;
          }

          file_pcap=pcap_open_offline(dump_file, buf);
          if(file_pcap == ((struct pcap *)NULL))
          {
            screen_status("%s: %s", ph->name, (const void *)buf);
            show_dump_close();
            return -1;
          }

        }

        else
        {
          file_netflow=fopen(dump_file, "r");
          if(file_netflow == ((struct _IO_FILE *)NULL))
          {
            signed int *return_value___errno_location_14;
            return_value___errno_location_14=__errno_location();
            char *return_value_strerror_15;
            return_value_strerror_15=strerror(*return_value___errno_location_14);
            screen_status("%s: %s: %s", ph->name, dump_file, return_value_strerror_15);
            show_dump_close();
            return -1;
          }

        }
        scrollok(stdscr, (_Bool)1);
        screen_clear();
        print_mode();
        return 0;
      }
    }
  }
}

// show_dump_print
// file show_dump.h line 19
void show_dump_print(struct pcap_handler *ph)
{
  char *return_value_pcap_geterr_2;
  char *return_value_fgets_3;
  if(cisco_netflow_dump == ((const char *)NULL))
  {
    signed int op;
    if(file_pcap == ((struct pcap *)NULL))
      goto __CPROVER_DUMP_L12;

    struct _IO_FILE *return_value_pcap_file_1;
    return_value_pcap_file_1=pcap_file(file_pcap);
    clearerr(return_value_pcap_file_1);
    do
    {
      op=pcap_dispatch(file_pcap, -1, file_pcap_parse, (unsigned char *)ph);
      if(!(op >= 1))
        break;

    }
    while((_Bool)1);
    if(!(op >= 0))
    {
      if(op == -1)
      {
        return_value_pcap_geterr_2=pcap_geterr(file_pcap);
        screen_status(return_value_pcap_geterr_2);
      }

      goto __CPROVER_DUMP_L12;
    }

  }

  else
  {
    char *cp;
    char buf[256l];
    if(file_netflow == ((struct _IO_FILE *)NULL))
      goto __CPROVER_DUMP_L12;

    clearerr(file_netflow);
    do
    {
      return_value_fgets_3=fgets(buf, (signed int)sizeof(char [256l]) /*256ul*/ , file_netflow);
      if(return_value_fgets_3 == ((char *)NULL))
        break;

      buf[(signed long int)(sizeof(char [256l]) /*256ul*/  - (unsigned long int)1)] = (char)0;
      cp=strpbrk(buf, "\r\n");
      if(!(cp == ((char *)NULL)))
        *cp = (char)0;

      printw("%s\n", (const void *)buf);
      redraw_lines = redraw_lines + 1;
    }
    while((_Bool)1);
  }
  if(!(redraw_lines == 0))
  {
    wredrawln(stdscr, 0, LINES);
    wrefresh(stdscr);
    redraw_lines = 0;
  }


__CPROVER_DUMP_L12:
  ;
}

// show_header_dump
// file show_dump.c line 453
static void show_header_dump(struct pcap_handler *ph, const struct netstat *ns)
{
  char time_buf[100l];
  char src_buf[100l];
  char dst_buf[100l];
  char proto_buf[20l];
  struct tm *return_value_localtime_1;
  return_value_localtime_1=localtime((signed long int *)&ns->mtime.tv_sec);
  strftime(time_buf, sizeof(char [100l]) /*100ul*/ , "%T", return_value_localtime_1);
  hdr2str(&ns->ns_hdr, src_buf, (signed int)sizeof(char [100l]) /*100ul*/ , dst_buf, (signed int)sizeof(char [100l]) /*100ul*/ , proto_buf, (signed int)sizeof(char [20l]) /*20ul*/ );
  printw("\n%s.%03d %s %s > %s %d/%d bytes", (const void *)time_buf, (signed int)(ns->mtime.tv_usec / (signed long int)1000), (const void *)proto_buf, (const void *)src_buf, (const void *)dst_buf, (signed int)ns->pkt_len, (signed int)ns->data_len);
  redraw_lines = redraw_lines + 1;
}

// show_hex_dump
// file show_dump.c line 512
static void show_hex_dump(const unsigned char *cp, signed int length)
{
  signed int oset = 0;
  unsigned int i;
  signed int s1;
  signed int s2;
  signed int nshorts;
  char hexstuff[41l];
  char *hsp;
  char asciistuff[100l];
  char *asp;
  unsigned int maxlength = (unsigned int)(16 / 2);
  const unsigned char *tmp_post_1;
  const unsigned char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_5;
  const unsigned char *tmp_post_7;
  char *tmp_post_8;
  if(!(cp == ((const unsigned char *)NULL)) && length >= 1)
  {
    nshorts = (signed int)((unsigned long int)length / sizeof(unsigned short int) /*2ul*/ );
    i = (unsigned int)0;
    hsp = hexstuff;
    asp = asciistuff;
    do
    {
      nshorts = nshorts - 1;
      if(!(nshorts >= 0))
        break;

      tmp_post_1 = cp;
      cp = cp + 1l;
      s1 = (signed int)*tmp_post_1;
      tmp_post_2 = cp;
      cp = cp + 1l;
      s2 = (signed int)*tmp_post_2;
      snprintf(hsp, sizeof(char [41l]) /*41ul*/  - (unsigned long int)(hsp - hexstuff), " %02x%02x", s1, s2);
      hsp = hsp + (signed long int)5;
      tmp_post_3 = asp;
      asp = asp + 1l;
      const unsigned short int **return_value___ctype_b_loc_4;
      return_value___ctype_b_loc_4=__ctype_b_loc();
      *tmp_post_3 = (char)(((signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)s1] & (signed int)(unsigned short int)32768) != 0 ? s1 : 46);
      tmp_post_5 = asp;
      asp = asp + 1l;
      const unsigned short int **return_value___ctype_b_loc_6;
      return_value___ctype_b_loc_6=__ctype_b_loc();
      *tmp_post_5 = (char)(((signed int)(*return_value___ctype_b_loc_6)[(signed long int)(signed int)s2] & (signed int)(unsigned short int)32768) != 0 ? s2 : 46);
      i = i + 1u;
      if(i >= maxlength)
      {
        i = (unsigned int)0;
        *asp = (char)0;
        *hsp = *asp;
        printw("\n0x%04X ", oset);
        waddch(stdscr, acs_map[(signed long int)(unsigned char)120]);
        printw("%-*s ", 5 * (16 / 2), (const void *)hexstuff);
        waddch(stdscr, acs_map[(signed long int)(unsigned char)120]);
        waddch(stdscr, (const unsigned long int)32);
        waddnstr(stdscr, asciistuff, -1);
        hsp = hexstuff;
        asp = asciistuff;
        oset = oset + 16;
        redraw_lines = redraw_lines + 1;
      }

    }
    while((_Bool)1);
    if(!((1 & length) == 0))
    {
      tmp_post_7 = cp;
      cp = cp + 1l;
      s1 = (signed int)*tmp_post_7;
      snprintf(hsp, sizeof(char [41l]) /*41ul*/  - (unsigned long int)(hsp - hexstuff), " %02x", s1);
      hsp = hsp + (signed long int)3;
      tmp_post_8 = asp;
      asp = asp + 1l;
      const unsigned short int **return_value___ctype_b_loc_9;
      return_value___ctype_b_loc_9=__ctype_b_loc();
      *tmp_post_8 = (char)(((signed int)(*return_value___ctype_b_loc_9)[(signed long int)(signed int)s1] & (signed int)(unsigned short int)32768) != 0 ? s1 : 46);
      i = i + 1u;
    }

    if(i >= 1u)
    {
      *asp = (char)0;
      *hsp = *asp;
      printw("\n0x%04X ", oset);
      waddch(stdscr, acs_map[(signed long int)(unsigned char)120]);
      printw("%-*s ", 5 * (16 / 2), (const void *)hexstuff);
      waddch(stdscr, acs_map[(signed long int)(unsigned char)120]);
      waddch(stdscr, (const unsigned long int)32);
      waddnstr(stdscr, asciistuff, -1);
      redraw_lines = redraw_lines + 1;
    }

  }

}

// show_if_footer
// file show_if.c line 131
static signed int show_if_footer(char *dst, signed int size, const void *unused)
{
  if(dst == ((char *)NULL) || !(unused == NULL) || !(size >= 1))
    return 0;

  else
  {
    strncpy(dst, hostname, (unsigned long int)size);
    dst[(signed long int)(size - 1)] = (char)0;
    return 0;
  }
}

// show_if_header
// file show_if.c line 38
static signed int show_if_header(char *dst, signed int size, const void *unused)
{
  signed int name_sz;
  signed int addr_sz;
  signed int desc_sz;
  if(dst == ((char *)NULL) || !(unused == NULL) || !(size >= 1))
    return 0;

  else
  {
    scale_size(&name_sz, &addr_sz, &desc_sz);
    snprintf(dst, (unsigned long int)size, "%-*.*s %-*.*s %-*.*s", name_sz, name_sz, (const void *)"Interface", addr_sz, addr_sz, (const void *)"Address", desc_sz, desc_sz, (const void *)"Description");
    return 0;
  }
}

// show_if_line
// file show_if.c line 103
static signed int show_if_line(char *dst, signed int size, const struct pcap_handler *ph, signed int idx)
{
  signed int i;
  signed int name_sz;
  signed int addr_sz;
  signed int desc_sz;
  signed int tmp_post_1;
  const char *tmp_if_expr_2;
  if(dst == ((char *)NULL) || !(size >= 1))
    return 0;

  else
  {
    *dst = (char)0;
    i = 0;
    for( ; !(ph == ((const struct pcap_handler *)NULL)); ph = ph->next)
    {
      tmp_post_1 = i;
      i = i + 1;
      if(tmp_post_1 == idx)
        break;

    }
    if(ph == ((const struct pcap_handler *)NULL))
      return 0;

    else
    {
      scale_size(&name_sz, &addr_sz, &desc_sz);
      if(!(ph->descr == ((const char *)NULL)))
        tmp_if_expr_2 = ph->descr;

      else
        tmp_if_expr_2 = "";
      snprintf(dst, (unsigned long int)size, "%-*.*s %-*.*s %-*.*s", name_sz, name_sz, ph->name, addr_sz, addr_sz, ph->addrstr, desc_sz, desc_sz, tmp_if_expr_2);
      return 0;
    }
  }
}

// show_if_list
// file show_if.h line 19
struct selector * show_if_list(struct pcap_handler *ph)
{
  struct selector *sp;
  _Bool tmp_if_expr_1;
  if(ph == ((struct pcap_handler *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
  {
    sp=show_if_selector();
    tmp_if_expr_1 = sp == ((struct selector *)NULL) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_1)
    return ((struct selector *)NULL);

  else
  {
    sp->header = NULL;
    sp->footer = NULL;
    sp->list = (void *)ph;
    sp->items = 0;
    for( ; !(ph == ((struct pcap_handler *)NULL)); ph = ph->next)
      sp->items = sp->items + 1;
    return sp;
  }
}

// show_if_search
// file show_if.h line 21
signed int show_if_search(struct pcap_handler *ph, const char *str)
{
  signed int idx;
  _Bool tmp_if_expr_1;
  if(str == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return -1;

  else
  {
    idx = 0;
    for( ; !(ph == ((struct pcap_handler *)NULL)); idx = idx + 1)
    {
      char *return_value_strstr_2;
      return_value_strstr_2=strstr(ph->name, str);
      if(!(return_value_strstr_2 == ((char *)NULL)))
        return idx;

      char *return_value_strstr_3;
      return_value_strstr_3=strstr(ph->addrstr, str);
      if(!(return_value_strstr_3 == ((char *)NULL)))
        return idx;

      ph = ph->next;
    }
    return -1;
  }
}

// show_if_selector
// file show_if.h line 20
struct selector * show_if_selector()
{
  static struct selector *sp = ((struct selector *)NULL);
  if(sp == ((struct selector *)NULL))
  {
    sp=selector_init();
    if(!(sp == ((struct selector *)NULL)))
    {
      sp->get_header = show_if_header;
      sp->get_line = (signed int (*)(char *, signed int, const void *, signed int))show_if_line;
      sp->get_footer = show_if_footer;
    }

  }

  return sp;
}

// show_stat_footer
// file show_stat.c line 414
static signed int show_stat_footer(char *dst, signed int size, const struct pcap_handler *ph)
{
  const struct pcap_handler *top;
  signed int addr_sz;
  signed int prot_sz;
  signed int data_sz;
  signed int rate_sz;
  signed int depth;
  unsigned long int total = (unsigned long int)0;
  unsigned long int rate = (unsigned long int)0;
  char stat_buf[50l];
  char data_buf[20l];
  char rate_buf[20l];
  if(dst == ((char *)NULL) || ph == ((const struct pcap_handler *)NULL) || !(size >= 1))
    return 0;

  else
  {
    scale_size_link1(&addr_sz, &prot_sz, &data_sz, &rate_sz);
    depth = 0;
    top = ph->top;
    for( ; !(top == ((const struct pcap_handler *)NULL)); top = top->top)
      depth = depth + 1;
    if(!(depth == 0))
    {
      signed int return_value_netstat_count_1;
      return_value_netstat_count_1=netstat_count(ph);
      snprintf(stat_buf, sizeof(char [50l]) /*50ul*/ , "%d Flows (depth %d)", return_value_netstat_count_1, depth);
    }

    else
    {
      signed int return_value_netstat_count_2;
      return_value_netstat_count_2=netstat_count(ph);
      snprintf(stat_buf, sizeof(char [50l]) /*50ul*/ , "%d Flows", return_value_netstat_count_2);
    }
    switch((signed int)show_stat_mode)
    {
      case Size:
      {
        total = ph->pkt_len;
        rate = ph->pkt_len_rate;
        break;
      }
      case Data:
      {
        total = ph->data_len;
        rate = ph->data_len_rate;
        break;
      }
      case Packets:
      {
        total = ph->pkt_cnt;
        rate = ph->pkt_cnt_rate;
      }
    }
    if(total >= 10000000ul)
      snprintf(data_buf, sizeof(char [20l]) /*20ul*/ , "%uM", (unsigned int)(total / (unsigned long int)(1024 * 1024)));

    else
      if(total >= 10000ul)
        snprintf(data_buf, sizeof(char [20l]) /*20ul*/ , "%uK", (unsigned int)(total / (unsigned long int)1024));

      else
        snprintf(data_buf, sizeof(char [20l]) /*20ul*/ , "%u", (unsigned int)total);
    if(rate >= 10000000ul)
      snprintf(rate_buf, sizeof(char [20l]) /*20ul*/ , "%uM", (unsigned int)(rate / (unsigned long int)(1024 * 1024)));

    else
      if(rate >= 10000ul)
        snprintf(rate_buf, sizeof(char [20l]) /*20ul*/ , "%uK", (unsigned int)(rate / (unsigned long int)1024));

      else
        snprintf(rate_buf, sizeof(char [20l]) /*20ul*/ , "%u", (unsigned int)rate);
    snprintf(dst, (unsigned long int)size, "%-*.*s %-*.*s %-*.*s %-*.*s %-*.*s", addr_sz, addr_sz, ph->name, addr_sz, addr_sz, (const void *)stat_buf, prot_sz, prot_sz, (const void *)"Total:", data_sz, data_sz, (const void *)data_buf, rate_sz, rate_sz, (const void *)rate_buf);
    return 0;
  }
}

// show_stat_get
// file show_stat.h line 29
struct netstat * show_stat_get(struct pcap_handler *ph, signed int idx)
{
  struct selector *sp;
  struct netstat **ns_list;
  _Bool tmp_if_expr_1;
  if(ph == ((struct pcap_handler *)NULL) || !(idx >= 0))
    tmp_if_expr_1 = (_Bool)1;

  else
  {
    sp=show_stat_selector(ph);
    tmp_if_expr_1 = sp == ((struct selector *)NULL) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = idx >= sp->items ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return ((struct netstat *)NULL);

  else
  {
    ns_list = (struct netstat **)sp->list;
    return ns_list[(signed long int)idx];
  }
}

// show_stat_header
// file show_stat.c line 300
static signed int show_stat_header(char *dst, signed int size, const struct pcap_handler *ph)
{
  signed int addr_sz;
  signed int prot_sz;
  signed int data_sz;
  signed int rate_sz;
  char src_buf[100l];
  char dst_buf[100l];
  const char *data_ptr;
  const char *rate_ptr;
  if(dst == ((char *)NULL) || ph == ((const struct pcap_handler *)NULL) || !(size >= 1))
    return 0;

  else
  {
    scale_size_link1(&addr_sz, &prot_sz, &data_sz, &rate_sz);
    strcpy(src_buf, "Source");
    strcpy(dst_buf, "Destination");
    if(ph->masklen >= 0)
    {
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(src_buf);
      sprintf(src_buf + (signed long int)return_value_strlen_1, "/%d", ph->masklen);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(dst_buf);
      sprintf(dst_buf + (signed long int)return_value_strlen_2, "/%d", ph->masklen);
    }

    rate_ptr = "?";
    data_ptr = rate_ptr;
    switch((signed int)show_stat_mode)
    {
      case Size:
      {
        data_ptr = "Size";
        rate_ptr = "CPS";
        break;
      }
      case Data:
      {
        data_ptr = "Data";
        rate_ptr = "CPS";
        break;
      }
      case Packets:
      {
        data_ptr = "Packets";
        rate_ptr = "PPS";
      }
    }
    snprintf(dst, (unsigned long int)size, "%-*.*s %-*.*s %-*.*s %-*.*s %-*.*s", addr_sz, addr_sz, (const void *)src_buf, addr_sz, addr_sz, (const void *)dst_buf, prot_sz, prot_sz, (const void *)"Protocol", data_sz, data_sz, data_ptr, rate_sz, rate_sz, rate_ptr);
    return 0;
  }
}

// show_stat_input
// file show_stat.h line 27
signed int show_stat_input(struct pcap_handler *ph, signed int ch)
{
  if(!(ch == 91) && !(ch == 0x0400))
  {
    if(ch == 93 || ch == 0x0500)
      goto __CPROVER_DUMP_L4;

    if(ch == 18)
      goto __CPROVER_DUMP_L7;

    if(ch == 9)
      goto __CPROVER_DUMP_L9;

  }

  else
  {
    if((signed int)show_stat_mode == Size)
      show_stat_mode = (enum anonymous)Packets;

    else
      show_stat_mode = (enum anonymous)((signed int)show_stat_mode - 1);
    return 1;

  __CPROVER_DUMP_L4:
    ;
    if((signed int)show_stat_mode == Packets)
      show_stat_mode = (enum anonymous)Size;

    else
      show_stat_mode = (enum anonymous)((signed int)show_stat_mode + 1);
    return 1;

  __CPROVER_DUMP_L7:
    ;
    if(!(ph == ((struct pcap_handler *)NULL)))
    {
      netstat_purge(ph, ((struct timeval *)NULL));
      show_stat_list(ph);
      return 1;
    }

    goto __CPROVER_DUMP_L14;

  __CPROVER_DUMP_L9:
    ;
    if(!(ph == ((struct pcap_handler *)NULL)))
    {
      struct selector *sp;
      sp=show_stat_selector(ph);
      signed int idx;
      idx=selector_get(sp);
      if(idx >= 0)
      {
        struct netstat **ns_list = (struct netstat **)sp->list;
        const struct netstat *ns = ns_list[(signed long int)idx];
        idx = 0;
        for( ; !(idx >= sp->items); idx = idx + 1)
        {
          signed int return_value_netstat_bidir_1;
          return_value_netstat_bidir_1=netstat_bidir(ns, ns_list[(signed long int)idx]);
          if(!(return_value_netstat_bidir_1 == 0))
          {
            selector_set(idx, sp);
            return 1;
          }

        }
      }

    }

  }

__CPROVER_DUMP_L14:
  ;
  return 0;
}

// show_stat_line
// file show_stat.c line 348
static signed int show_stat_line(char *dst, signed int size, const struct netstat **ns_list, signed int idx)
{
  signed int addr_sz;
  signed int prot_sz;
  signed int data_sz;
  signed int rate_sz;
  const struct netstat *ns;
  char src_buf[100l];
  char dst_buf[100l];
  char proto_buf[20l];
  char data_buf[20l];
  char rate_buf[20l];
  if(ns_list == ((const struct netstat **)NULL) || dst == ((char *)NULL) || !(size >= 1))
    return 0;

  else
  {
    ns = ns_list[(signed long int)idx];
    scale_size_link1(&addr_sz, &prot_sz, &data_sz, &rate_sz);
    hdr2str(&ns->ns_hdr, src_buf, (signed int)(sizeof(char [100l]) /*100ul*/  < (unsigned long int)(addr_sz + 1) ? sizeof(char [100l]) /*100ul*/  : (unsigned long int)(addr_sz + 1)), dst_buf, (signed int)(sizeof(char [100l]) /*100ul*/  < (unsigned long int)(addr_sz + 1) ? sizeof(char [100l]) /*100ul*/  : (unsigned long int)(addr_sz + 1)), proto_buf, (signed int)(sizeof(char [20l]) /*20ul*/  < (unsigned long int)(prot_sz + 1) ? sizeof(char [20l]) /*20ul*/  : (unsigned long int)(prot_sz + 1)));
    data_buf[(signed long int)0] = (char)0;
    rate_buf[(signed long int)0] = (char)0;
    switch((signed int)show_stat_mode)
    {
      case Size:
      {
        if(ns->pkt_len >= 10000u)
          snprintf(data_buf, sizeof(char [20l]) /*20ul*/ , "%uK", ns->pkt_len / (unsigned int)1024);

        else
          snprintf(data_buf, sizeof(char [20l]) /*20ul*/ , "%u", ns->pkt_len);
        if(ns->pkt_len_rate >= 10000u)
          snprintf(rate_buf, sizeof(char [20l]) /*20ul*/ , "%uK", ns->pkt_len_rate / (unsigned int)1024);

        else
          if(ns->pkt_len_rate >= 1u)
            snprintf(rate_buf, sizeof(char [20l]) /*20ul*/ , "%u", ns->pkt_len_rate);

        break;
      }
      case Data:
      {
        if(ns->data_len >= 10000u)
          snprintf(data_buf, sizeof(char [20l]) /*20ul*/ , "%uK", ns->data_len / (unsigned int)1024);

        else
          snprintf(data_buf, sizeof(char [20l]) /*20ul*/ , "%u", ns->data_len);
        if(ns->data_len_rate >= 10000u)
          snprintf(rate_buf, sizeof(char [20l]) /*20ul*/ , "%uK", ns->data_len_rate / (unsigned int)1024);

        else
          if(ns->data_len_rate >= 1u)
            snprintf(rate_buf, sizeof(char [20l]) /*20ul*/ , "%u", ns->data_len_rate);

        break;
      }
      case Packets:
      {
        snprintf(data_buf, sizeof(char [20l]) /*20ul*/ , "%u", ns->pkt_cnt);
        if(ns->pkt_cnt_rate >= 1u)
          snprintf(rate_buf, sizeof(char [20l]) /*20ul*/ , "%u", ns->pkt_cnt_rate);

      }
    }
    snprintf(dst, (unsigned long int)size, "%-*.*s %-*.*s %-*.*s %-*.*s %-*.*s", addr_sz, addr_sz, (const void *)src_buf, addr_sz, addr_sz, (const void *)dst_buf, prot_sz, prot_sz, (const void *)proto_buf, data_sz, data_sz, (const void *)data_buf, rate_sz, rate_sz, (const void *)rate_buf);
    return ns->attr;
  }
}

// show_stat_list
// file show_stat.h line 26
struct selector * show_stat_list(struct pcap_handler *ph)
{
  struct selector *sp;
  signed int cnt;
  _Bool tmp_if_expr_1;
  if(ph == ((struct pcap_handler *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
  {
    sp=show_stat_selector(ph);
    tmp_if_expr_1 = sp == ((struct selector *)NULL) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_1)
    return ((struct selector *)NULL);

  else
  {
    sp->header = (void *)ph;
    sp->footer = (void *)ph;
    cnt=netstat_fetch((struct netstat ***)&sp->list, ph);
    if(!(cnt >= 0))
      return sp;

    else
    {
      sp->items = cnt;
      if(!(cnt >= 2))
        return sp;

      else
      {
        switch((signed int)show_stat_mode)
        {
          case Size:
          {
            qsort(sp->list, (unsigned long int)sp->items, sizeof(struct netstat *) /*8ul*/ , (signed int (*)(const void *, const void *))compare_pkt_len);
            break;
          }
          case Data:
          {
            qsort(sp->list, (unsigned long int)sp->items, sizeof(struct netstat *) /*8ul*/ , (signed int (*)(const void *, const void *))compare_data_len);
            break;
          }
          case Packets:
            qsort(sp->list, (unsigned long int)sp->items, sizeof(struct netstat *) /*8ul*/ , (signed int (*)(const void *, const void *))compare_pkt_cnt);
        }
        if(!(popbackflow == 0))
          sort_backflow((struct netstat **)sp->list, sp->items);

        return sp;
      }
    }
  }
}

// show_stat_search
// file show_stat.h line 30
signed int show_stat_search(struct pcap_handler *ph, const char *str)
{
  struct selector *sp;
  struct netstat **ns_list;
  const struct netstat *ns;
  signed int idx;
  char src_buf[100l];
  char dst_buf[100l];
  char proto_buf[20l];
  _Bool tmp_if_expr_1;
  if(str == ((const char *)NULL) || ph == ((struct pcap_handler *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    sp=show_stat_selector(ph);
    tmp_if_expr_2 = sp == ((struct selector *)NULL) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  char *return_value_strstr_4;
  _Bool tmp_if_expr_7;
  char *return_value_strstr_6;
  if(tmp_if_expr_2)
    return -1;

  else
  {
    ns_list = (struct netstat **)sp->list;
    idx = 0;
    for( ; !(idx >= sp->items); idx = idx + 1)
    {
      ns = ns_list[(signed long int)idx];
      hdr2str(&ns->ns_hdr, src_buf, (signed int)sizeof(char [100l]) /*100ul*/ , dst_buf, (signed int)sizeof(char [100l]) /*100ul*/ , proto_buf, (signed int)sizeof(char [20l]) /*20ul*/ );
      char *return_value_strstr_3;
      return_value_strstr_3=strstr(src_buf, str);
      if(!(return_value_strstr_3 == ((char *)NULL)))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_strstr_4=strstr(dst_buf, str);
        tmp_if_expr_5 = return_value_strstr_4 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        tmp_if_expr_7 = (_Bool)1;

      else
      {
        return_value_strstr_6=strstr(proto_buf, str);
        tmp_if_expr_7 = return_value_strstr_6 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_7)
        return idx;

    }
    return -1;
  }
}

// show_stat_selector
// file show_stat.h line 28
struct selector * show_stat_selector(struct pcap_handler *ph)
{
  if(ph == ((struct pcap_handler *)NULL))
    return ((struct selector *)NULL);

  else
  {
    if(ph->selector == ((struct selector *)NULL))
    {
      ph->selector=selector_init();
      if(!(ph->selector == ((struct selector *)NULL)))
      {
        ph->selector->get_header = (signed int (*)(char *, signed int, const void *))show_stat_header;
        ph->selector->get_line = (signed int (*)(char *, signed int, const void *, signed int))show_stat_line;
        ph->selector->get_footer = (signed int (*)(char *, signed int, const void *))show_stat_footer;
      }

    }

    return ph->selector;
  }
}

// socket_error
// file session.c line 738
signed int socket_error(signed int sock)
{
  signed int argbuf;
  unsigned int arglen;
  struct sockaddr peer;
  arglen = (unsigned int)sizeof(signed int) /*4ul*/ ;
  signed int return_value_getsockopt_2;
  return_value_getsockopt_2=getsockopt(sock, 1, 4, (void *)&argbuf, &arglen);
  signed int *return_value___errno_location_1;
  signed int *return_value___errno_location_3;
  signed int *return_value___errno_location_5;
  if(!(return_value_getsockopt_2 >= 0))
  {
    return_value___errno_location_1=__errno_location();
    return *return_value___errno_location_1;
  }

  else
    if(!(argbuf == 0))
      return argbuf;

    else
    {
      arglen = (unsigned int)sizeof(signed int) /*4ul*/ ;
      signed int return_value_getsockopt_4;
      return_value_getsockopt_4=getsockopt(sock, 1, 3, (void *)&argbuf, &arglen);
      if(!(return_value_getsockopt_4 >= 0))
      {
        return_value___errno_location_3=__errno_location();
        return *return_value___errno_location_3;
      }

      else
      {
        if(argbuf == 1)
        {
          arglen = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
          signed int return_value_getpeername_6;
          return_value_getpeername_6=getpeername(sock, &peer, &arglen);
          if(!(return_value_getpeername_6 >= 0))
          {
            return_value___errno_location_5=__errno_location();
            return *return_value___errno_location_5;
          }

        }

        return 0;
      }
    }
}

// socket_keepalive
// file session.c line 788
signed int socket_keepalive(signed int sock, signed int on)
{
  signed int curr = 0;
  unsigned int slen = (unsigned int)sizeof(signed int) /*4ul*/ ;
  signed int return_value_getsockopt_1;
  return_value_getsockopt_1=getsockopt(sock, 1, 9, (void *)&curr, &slen);
  if(!(return_value_getsockopt_1 >= 0))
    return -1;

  else
  {
    curr = (signed int)(curr != 0);
    if(!(on == curr))
    {
      signed int return_value_setsockopt_2;
      return_value_setsockopt_2=setsockopt(sock, 1, 9, (const void *)&on, (unsigned int)sizeof(signed int) /*4ul*/ );
      if(!(return_value_setsockopt_2 >= 0))
        return -1;

    }

    return 0;
  }
}

// socket_name
// file session.c line 720
signed int socket_name(struct sockaddr *name, signed int sock)
{
  unsigned int arglen;
  if(name == ((struct sockaddr *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  arglen = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
  signed int return_value_getsockname_2;
  return_value_getsockname_2=getsockname(sock, name, &arglen);
  return return_value_getsockname_2;
}

// socket_nonblock
// file session.c line 766
signed int socket_nonblock(signed int sock, signed int on)
{
  signed int mode;
  signed int prev;
  mode=fcntl(sock, 3, 0);
  if(!(mode >= 0))
    return -1;

  else
  {
    prev = (signed int)((mode & 04000) != 0);
    if(!(on == prev))
    {
      if(!(on == 0))
        mode = mode | 04000;

      else
        mode = mode & ~04000;
      signed int return_value_fcntl_1;
      return_value_fcntl_1=fcntl(sock, 4, mode);
      if(!(return_value_fcntl_1 == 0))
        return -1;

    }

    return prev;
  }
}

// socket_peer
// file session.c line 702
signed int socket_peer(struct sockaddr *peer, signed int sock)
{
  unsigned int arglen;
  if(peer == ((struct sockaddr *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  arglen = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
  signed int return_value_getpeername_2;
  return_value_getpeername_2=getpeername(sock, peer, &arglen);
  return return_value_getpeername_2;
}

// sort_backflow
// file show_stat.c line 93
static void sort_backflow(struct netstat **list, signed int items)
{
  signed int i = 0;
  signed int at;
  struct netstat *ns;
  signed int tmp_post_1;
  while(!(i >= items + -1))
  {
    tmp_post_1 = i;
    i = i + 1;
    ns = list[(signed long int)tmp_post_1];
    at=find_backflow(&list[(signed long int)i], items - i, ns);
    if(at >= 0)
    {
      if(!(at == 0))
      {
        ns = list[(signed long int)(i + at)];
        memmove((void *)&list[(signed long int)(i + 1)], (const void *)&list[(signed long int)i], (unsigned long int)at * sizeof(struct netstat *) /*8ul*/ );
        list[(signed long int)i] = ns;
      }

      i = i + 1;
    }

  }
}

// str2addr
// file colormask.c line 269
static signed int str2addr(const char *str, const char *proto, struct ip_address *addr, signed int *mask)
{
  signed int op;
  signed int ver = 0;
  char buf[256l];
  char *cp;
  char *mp;
  char *pp;
  signed int return_value_strcasecmp_1;
  char *tmp_post_2;
  char *tmp_post_3;
  signed int return_value_is_number_4;
  unsigned long int tmp_if_expr_7;
  if(!(proto == ((const char *)NULL)))
  {
    return_value_strcasecmp_1=strcasecmp(proto, "IPv6");
    if(!(return_value_strcasecmp_1 == 0))
      goto __CPROVER_DUMP_L1;

    fprintf(stderr, "%s: line %d: IPv6 is unsupported at this system\n", rc_file, rc_line);
    return -1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    cp=strcpy(buf, str);
    mp=strchr(cp, 47);
    if(!(mp == ((char *)NULL)))
    {
      tmp_post_2 = mp;
      mp = mp + 1l;
      *tmp_post_2 = (char)0;
      cp = mp;
    }

    pp=strchr(cp, 44);
    if(!(pp == ((char *)NULL)))
    {
      tmp_post_3 = pp;
      pp = pp + 1l;
      *tmp_post_3 = (char)0;
    }

    if(!(mp == ((char *)NULL)))
    {
      return_value_is_number_4=is_number(mp);
      if(!(return_value_is_number_4 == 0))
        goto __CPROVER_DUMP_L4;

      fprintf(stderr, "%s: line %d: %s: Mask must be number of bits\n", rc_file, rc_line, mp);
      return -1;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      signed int return_value_is_any_8;
      return_value_is_any_8=is_any(buf);
      if(return_value_is_any_8 == 0)
      {
        op = 0;
        if(op == 0)
        {
          ver = 4;
          op=inet_pton(2, buf, (void *)&addr->ipaddr.ipa4);
          if(!(op >= 0))
          {
            signed int *return_value___errno_location_5;
            return_value___errno_location_5=__errno_location();
            char *return_value_strerror_6;
            return_value_strerror_6=strerror(*return_value___errno_location_5);
            fprintf(stderr, "%s: line %d: %s: %s\n", rc_file, rc_line, (const void *)buf, return_value_strerror_6);
            return -1;
          }

        }

        if(op == 0)
        {
          struct hostent *he;
          he=gethostbyname(buf);
          if(he == ((struct hostent *)NULL))
          {
            fprintf(stderr, "%s: line %d: %s: Unknown host\n", rc_file, rc_line, (const void *)buf);
            return -1;
          }

          if(he->h_addrtype == 2)
          {
            ver = 4;
            if((unsigned long int)he->h_length >= 5ul)
              tmp_if_expr_7 = sizeof(struct in_addr) /*4ul*/ ;

            else
              tmp_if_expr_7 = (unsigned long int)he->h_length;
            memcpy((void *)&addr->ipaddr.ipa4, (const void *)he->h_addr_list[(signed long int)0], tmp_if_expr_7);
          }

          else
          {
            fprintf(stderr, "%s: line %d: %s: Unknown address family\n", rc_file, rc_line, (const void *)buf);
            return -1;
          }
        }

      }

      if(!(pp == ((char *)NULL)))
      {
        op=str2port(pp, proto);
        if(op == -1)
          return -1;

        addr->ip_port = (unsigned short int)op;
      }

      if(!(mask == ((signed int *)NULL)))
      {
        if(!(mp == ((char *)NULL)))
        {
          op=atoi(mp);
          if(op >= 129 || !(op >= 8))
          {
            fprintf(stderr, "%s: line %d: %d: Wrong mask\n", rc_file, rc_line, op);
            return -1;
          }

          *mask = op;
        }

        else
          *mask = 0;
      }

      return ver;
    }
  }
}

// str2port
// file colormask.c line 243
static signed int str2port(const char *str, const char *proto)
{
  signed int num;
  struct servent *se;
  signed int return_value_is_any_1;
  return_value_is_any_1=is_any(str);
  unsigned short int return_value_htons_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if(!(return_value_is_any_1 == 0))
    return 0;

  else
  {
    num=atoi(str);
    if(num >= 1 && !(num >= 65536))
    {
      return_value_htons_2=htons((unsigned short int)num);
      return (signed int)return_value_htons_2;
    }

    else
    {
      if(!(proto == ((const char *)NULL)))
        tmp_if_expr_3 = *proto != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      se=getservbyname(str, tmp_if_expr_3 ? proto : ((const char *)NULL));
      if(!(se == ((struct servent *)NULL)))
        return se->s_port;

      else
      {
        if(!(proto == ((const char *)NULL)))
          tmp_if_expr_4 = *proto != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          fprintf(stderr, "%s: line %d: Unknown port `%s' at protocol `%s'\n", rc_file, rc_line, str, proto);

        else
          fprintf(stderr, "%s: line %d: Unknown port `%s'\n", rc_file, rc_line, str);
        return -1;
      }
    }
  }
}

// str2proto
// file colormask.c line 213
static char * str2proto(const char *str, signed int *proto)
{
  signed int num;
  struct protoent *pe;
  signed int return_value_is_any_1;
  return_value_is_any_1=is_any(str);
  if(!(return_value_is_any_1 == 0))
  {
    *proto = 0;
    return "";
  }

  else
  {
    signed int return_value_is_number_2;
    return_value_is_number_2=is_number(str);
    if(!(return_value_is_number_2 == 0))
    {
      num=atoi(str);
      if(!(num >= 1) || num >= 256)
        goto __CPROVER_DUMP_L3;

      pe=getprotobynumber(num);
      if(!(pe == ((struct protoent *)NULL)))
      {
        *proto = pe->p_proto;
        return pe->p_name;
      }

      *proto = num;
      return "";
    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      pe=getprotobyname(str);
      if(!(pe == ((struct protoent *)NULL)))
      {
        *proto = pe->p_proto;
        return pe->p_name;
      }

      else
      {
        fprintf(stderr, "%s: line %d: Unknown protocol `%s'\n", rc_file, rc_line, str);
        return ((char *)NULL);
      }
    }
  }
}

// strip_blanks
// file util.c line 35
char * strip_blanks(char *str)
{
  char *bp;
  char *ep;
  _Bool tmp_if_expr_1;
  if(str == ((char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(*str != 0) ? (_Bool)1 : (_Bool)0;
  char *tmp_post_3;
  if(tmp_if_expr_1)
    return str;

  else
  {
    bp = str;
    for( ; (_Bool)1; bp = bp + 1l)
      if(!((signed int)*bp == 32))
      {
        if(!((signed int)*bp == 9))
          goto __CPROVER_DUMP_L6;

      }


  __CPROVER_DUMP_L6:
    ;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(bp);
    ep = bp + (signed long int)(return_value_strlen_2 - (unsigned long int)1);
    for( ; ep >= bp; *tmp_post_3 = (char)0)
    {
      if(!((signed int)*ep == 32))
      {
        if(!((signed int)*ep == 9))
        {
          if(!((signed int)*ep == 13))
          {
            if(!((signed int)*ep == 10))
              break;

          }

        }

      }

      tmp_post_3 = ep;
      ep = ep - 1l;
    }
    return bp;
  }
}

// strip_path
// file util.h line 13
char * strip_path(const char *path)
{
  char *cp;
  if(!(path == ((const char *)NULL)))
  {
    cp=strrchr(path, 47);
    if(cp == ((char *)NULL))
      goto __CPROVER_DUMP_L1;

    cp = cp + 1l;
    return cp;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return (char *)path;
  }
}

// tcpport_string
// file addrtoname.h line 32
const char * tcpport_string(unsigned short int port)
{
  struct hnamemem *tp;
  unsigned int i = (unsigned int)port;
  char buf[(signed long int)sizeof(char [6l]) /*6l*/ ];
  tp = &tporttable[(signed long int)(i & (unsigned int)(4096 - 1))];
  for( ; !(tp->nxt == ((struct hnamemem *)NULL)); tp = tp->nxt)
    if(tp->addr == i)
      return tp->name;

  tp->addr = i;
  tp->nxt=newhnamemem();
  snprintf(buf, sizeof(char [6l]) /*6ul*/ , "%u", i);
  tp->name=strdup(buf);
  return tp->name;
}

// traf_show
// file trafshow.c line 767
static void * traf_show(void *arg)
{
  struct pcap_handler *ph_list = (struct pcap_handler *)arg;
  signed int op;
  signed int nfds;
  struct anonymous_11 readfds;
  struct anonymous_11 writefds;
  struct timeval timeout;
  pcap_purge((void *)ph_list);
  getkey_init(ph_list);
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  while((_Bool)1)
  {
    if(!(resize_pending == 0))
    {
      signed int return_value_screen_open_1;
      return_value_screen_open_1=screen_open(resize_pending);
      if(!(return_value_screen_open_1 >= 0))
        return NULL;

      add_event(((struct timeval *)NULL), pcap_show, (void *)ph_list);
      resize_pending = 0;
    }

    nfds = 0;
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_11) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readfds)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    do
    {
      signed int traf_show__1__1__1__3____d0;
      signed int traf_show__1__1__1__3____d1;
      asm("cld; rep; stosq" : "=c"(traf_show__1__1__1__3____d0), "=D"(traf_show__1__1__1__3____d1) : "a"(0), "0"(sizeof(struct anonymous_11) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&writefds)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    op=select_event(&timeout);
    signed int return_value_session_select_2;
    return_value_session_select_2=session_select(&nfds, &readfds, &writefds, &timeout, &op);
    if(return_value_session_select_2 == 0)
      return NULL;

    op=select(nfds, &readfds, &writefds, ((struct anonymous_11 *)NULL), op != 0 ? ((struct timeval *)NULL) : &timeout);
    if(!(op >= 1))
    {
      if(!(op >= 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        if(*return_value___errno_location_3 == 4)
          tmp_if_expr_5 = (_Bool)1;

        else
        {
          return_value___errno_location_4=__errno_location();
          tmp_if_expr_5 = *return_value___errno_location_4 == 11 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_5)
          continue;

        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        char *return_value_strerror_7;
        return_value_strerror_7=strerror(*return_value___errno_location_6);
        screen_status("select: %s", return_value_strerror_7);
        return NULL;
      }

      else
        session_timeout();
    }

    else
      session_operate(&readfds, &writefds);
  }
  return NULL;
}

// tv_add
// file events.c line 54
void tv_add(struct timeval *out, struct timeval *in)
{
  out->tv_sec = out->tv_sec + in->tv_sec;
  out->tv_usec = out->tv_usec + in->tv_usec;
  if(out->tv_usec >= 1000000L)
  {
    out->tv_sec = out->tv_sec + 1l;
    out->tv_usec = out->tv_usec - 1000000L;
  }

}

// tv_diff
// file events.c line 83
unsigned long int tv_diff(struct timeval *tvp1, struct timeval *tvp2)
{
  struct timeval diff;
  _Bool tmp_if_expr_1;
  if(!(tvp1->tv_sec == 0l))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = tvp1->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(!tmp_if_expr_1)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    if(!(tvp2->tv_sec == 0l))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = tvp2->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
    tmp_if_expr_3 = !tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
  }
  signed int tmp_if_expr_4;
  if(tmp_if_expr_3)
    return (unsigned long int)0;

  else
  {
    if(tvp1->tv_sec == tvp2->tv_sec)
      tmp_if_expr_4 = (signed int)(tvp1->tv_usec > tvp2->tv_usec);

    else
      tmp_if_expr_4 = (signed int)(tvp1->tv_sec > tvp2->tv_sec);
    if(!(tmp_if_expr_4 == 0))
    {
      diff = *tvp1;
      tv_sub(&diff, tvp2);
    }

    else
    {
      diff = *tvp2;
      tv_sub(&diff, tvp1);
    }
    return (unsigned long int)(diff.tv_sec * (signed long int)1000 + diff.tv_usec / (signed long int)1000);
  }
}

// tv_round
// file events.c line 70
unsigned long int tv_round(struct timeval *in)
{
  unsigned long int sec = (unsigned long int)in->tv_sec;
  if(in->tv_usec >= 500000L)
    sec = sec + 1ul;

  return sec;
}

// tv_sharp
// file events.c line 105
void tv_sharp(struct timeval *tvp, signed int period)
{
  signed long int defect;
  struct tm *tm;
  if(!(tvp == ((struct timeval *)NULL)))
  {
    tm=localtime((signed long int *)&tvp->tv_sec);
    defect = (signed long int)(tm->tm_sec + 60 * tm->tm_min + 3600 * tm->tm_hour);
    defect = defect % (signed long int)period;
    period = period - (signed int)defect;
    if(!(period >= 1))
      period = 1;

    tvp->tv_sec = tvp->tv_sec + (signed long int)period;
    signed long int return_value_random_1;
    return_value_random_1=random();
    tvp->tv_usec = (signed long int)return_value_random_1 % 1000000L;
  }

}

// tv_sub
// file events.c line 30
void tv_sub(struct timeval *out, struct timeval *in)
{
  if(!(in->tv_sec >= out->tv_sec))
  {
    out->tv_sec = out->tv_sec - in->tv_sec;
    if(out->tv_usec >= in->tv_usec)
      out->tv_usec = out->tv_usec - in->tv_usec;

    else
    {
      out->tv_sec = out->tv_sec - 1l;
      out->tv_usec = out->tv_usec + (1000000L - in->tv_usec);
    }
  }

  else
    if(out->tv_sec == in->tv_sec)
    {
      out->tv_sec = 0L;
      out->tv_usec = out->tv_usec - in->tv_usec;
      if(!(out->tv_usec >= 1l))
        out->tv_usec = 100L;

    }

    else
    {
      out->tv_sec = 0L;
      out->tv_usec = 100L;
    }
}

// udpport_string
// file addrtoname.h line 33
const char * udpport_string(unsigned short int port)
{
  struct hnamemem *tp;
  unsigned int i = (unsigned int)port;
  char buf[(signed long int)sizeof(char [6l]) /*6l*/ ];
  tp = &uporttable[(signed long int)(i & (unsigned int)(4096 - 1))];
  for( ; !(tp->nxt == ((struct hnamemem *)NULL)); tp = tp->nxt)
    if(tp->addr == i)
      return tp->name;

  tp->addr = i;
  tp->nxt=newhnamemem();
  snprintf(buf, sizeof(char [6l]) /*6ul*/ , "%u", i);
  tp->name=strdup(buf);
  return tp->name;
}

// unique_reqid
// file domain_resolver.c line 278
static unsigned short int unique_reqid()
{
  static unsigned short int reqid = (unsigned short int)0;
  reqid = reqid + 1;
  if((signed int)reqid == 0)
    reqid = reqid + 1;

  return reqid;
}

// usage
// file trafshow.c line 857
static void usage()
{
  fprintf(stderr, "Usage:\n %s [-vpnb] [-a len] [-c conf] [-i ifname] [-s str] [-u port] [-R refresh] [-P purge] [-F file | expr]\nWhere:\n -v         Print version number, compile-time definitions, and exit\n -p         Don't put the interface(s) into promiscuous mode\n -n         Don't convert numeric values to names\n -b         To place a backflow near to the main stream\n -a len     To aggregate IP addresses using the prefix length\n -c conf    Color config file instead of default /etc/trafshow\n -i ifname  Network interface name; all by default\n -s str     To search & follow for string in the list show\n -u port    UDP port number to listen for Cisco Netflow; default %d\n -R refresh Set the refresh-period of data show to seconds; default %d sec\n -P purge   Set the expired data purge-period to seconds; default %d sec\n -F file    Use file as input for the filter expression\n expr       Filter expression; see tcpdump(1) for syntax\n\t\t\n", progname, 9995, 2, 10);
  exit(1);
}

// vers
// file trafshow.c line 812
static void vers()
{
  signed int hc = 0;
  initscr();
  _Bool return_value_has_colors_1;
  return_value_has_colors_1=has_colors();
  hc = (signed int)return_value_has_colors_1;
  endwin();
  fprintf(stderr, "\n%s Version %s\ncompiled for %s with\n %s\n", progname, (const void *)version, (const void *)target, (const void *)compiled);
  fprintf(stderr, "\tlibpcap version %s\n", (const void *)pcap_version);
  fprintf(stderr, "\tncurses version %s\n", (const void *)"6.0");
  fprintf(stderr, "\tcolors support\n");
  if(!(hc == 0))
    fprintf(stderr, "\tyour current terminal has color capability\n");

  else
    fprintf(stderr, "\tyour current terminal has no color capability\n");
  fprintf(stderr, "\n%s\n", (const void *)copyright);
  fprintf(stderr, "For bug report please email to trafshow@risp.ru (include this page)\n\n");
  exit(1);
}

