// #anon_enum_HASH_STATUS_OK=0_HASH_STATUS_MEM_EXHAUSTED=1_HASH_STATUS_KEY_NOT_FOUND=2
// file hash.h line 10
enum anonymous_3 { HASH_STATUS_OK=0, HASH_STATUS_MEM_EXHAUSTED=1, HASH_STATUS_KEY_NOT_FOUND=2 };

// #anon_enum_OPTION_LINEDISPLAY_TWO_LINE=0_OPTION_LINEDISPLAY_ONE_LINE_BOTH=1_OPTION_LINEDISPLAY_ONE_LINE_RECV=2_OPTION_LINEDISPLAY_ONE_LINE_SENT=3
// file options.h line 30
enum anonymous_8 { OPTION_LINEDISPLAY_TWO_LINE=0, OPTION_LINEDISPLAY_ONE_LINE_BOTH=1, OPTION_LINEDISPLAY_ONE_LINE_RECV=2, OPTION_LINEDISPLAY_ONE_LINE_SENT=3 };

// #anon_enum_OPTION_PORTS_OFF=0_OPTION_PORTS_SRC=1_OPTION_PORTS_DEST=2_OPTION_PORTS_ON=3
// file options.h line 15
enum anonymous_33 { OPTION_PORTS_OFF=0, OPTION_PORTS_SRC=1, OPTION_PORTS_DEST=2, OPTION_PORTS_ON=3 };

// #anon_enum_OPTION_SORT_DIV1=0_OPTION_SORT_DIV2=1_OPTION_SORT_DIV3=2_OPTION_SORT_SRC=3_OPTION_SORT_DEST=4
// file options.h line 22
enum anonymous_34 { OPTION_SORT_DIV1=0, OPTION_SORT_DIV2=1, OPTION_SORT_DIV3=2, OPTION_SORT_SRC=3, OPTION_SORT_DEST=4 };

// tag-#anon#ST[*{S32(*{V}_V_|*{V}_V_)->S32}_S32(*{V}_V_|*{V}_V_)->S32_'compare'||*{S32(*{V}_V_)->S32}_S32(*{V}_V_)->S32_'hash'||*{*{V}_V_(*{V}_V_)->*{V}_V_}_*{V}_V_(*{V}_V_)->*{V}_V__'copy_key'||*{V(*{V}_V_)->V}_V(*{V}_V_)->V_'delete_key'||*{*{SYM#tag-node_tag#}_SYM#tag-node_tag#_}_*{SYM#tag-node_tag#}_SYM#tag-node_tag#__'table'||S32'size'||U32'_pad0'|]
// file hash.h line 22
struct anonymous_9;

// tag-#anon#ST[*{S8}_S8_'interface'||S32'dnsresolution'||S32'portresolution'||*{S8}_S8_'filtercode'||S32'showbars'||EN#anon_enum_OPTION_PORTS_OFF=0_OPTION_PORTS_SRC=1_OPTION_PORTS_DEST=2_OPTION_PORTS_ON=3#{U32}_U32_'showports'||S32'promiscuous'||S32'promiscuous_but_choosy'||S32'aggregate_src'||S32'aggregate_dest'||S32'paused'||S32'showhelp'||S32'timed_output'||S32'no_curses'||S32'num_lines'||S32'bandwidth_in_bytes'||EN#anon_enum_OPTION_SORT_DIV1=0_OPTION_SORT_DIV2=1_OPTION_SORT_DIV3=2_OPTION_SORT_SRC=3_OPTION_SORT_DEST=4#{U32}_U32_'sort'||S32'bar_interval'||*{S8}_S8_'screenfilter'||S32'freezeorder'||S32'screen_offset'||EN#anon_enum_OPTION_LINEDISPLAY_TWO_LINE=0_OPTION_LINEDISPLAY_ONE_LINE_BOTH=1_OPTION_LINEDISPLAY_ONE_LINE_RECV=2_OPTION_LINEDISPLAY_ONE_LINE_SENT=3#{U32}_U32_'linedisplay'||S32'show_totals'||S64'max_bandwidth'||S32'log_scale'||S32'netfilter'||SYM#tag-in_addr#'netfilternet'||SYM#tag-in_addr#'netfiltermask'||S32'netfilter6'||SYM#tag-in6_addr#'netfilter6net'||SYM#tag-in6_addr#'netfilter6mask'||S32'link_local'||*{S8}_S8_'config_file'||S32'config_file_specified'||U32'_pad0'|]
// file options.h line 41
struct anonymous_35;

// tag-#anon#ST[*{S8}_S8_'name'||S32'value'||U32'_pad0'|]
// file cfgfile.h line 11
struct anonymous;

// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_17;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_14;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_26;

// tag-#anon#ST[ARR20{S64}_S64_'recv'||ARR20{S64}_S64_'sent'||F128'total_sent'||F128'total_recv'||S32'last_write'||U96'_pad0'|]
// file iftop.h line 26
struct anonymous_7;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_11;

// tag-#anon#ST[S32'af'||U16'protocol'||U16'src_port'||SYM#tag-#anon#UN[SYM#tag-in_addr#'src'||SYM#tag-in6_addr#'src6'|]#'_anon0'||U16'dst_port'||U16'_pad0'||SYM#tag-#anon#UN[SYM#tag-in_addr#'dst'||SYM#tag-in6_addr#'dst6'|]#'_anon1'|]
// file addr_hash.h line 14
struct anonymous_5;

// tag-#anon#ST[S32'max'||S32'interval'|]
// file ui.c line 73
struct anonymous_4;

// tag-#anon#ST[S32'port'||S32'protocol'|]
// file serv_hash.h line 15
struct anonymous_27;

// tag-#anon#ST[S32'rm_so'||S32'rm_eo'|]
// file /usr/include/regex.h line 452
struct anonymous_24;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_19;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_13;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_21;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_23;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_20;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_16;

// tag-#anon#ST[SYM#tag-sorted_list_node_tag#'root'||*{S32(*{V}_V_|*{V}_V_)->S32}_S32(*{V}_V_|*{V}_V_)->S32_'compare'|]
// file sorted_list.h line 14
struct anonymous_6;

// tag-#anon#ST[U8'snap_ui'||ARR3{U8}_U8_'snap_orgcode'||ARR2{U8}_U8_'snap_ethertype'|]
// file llc.h line 44
struct anonymous_30;

// tag-#anon#ST[U8'snap_ui'||ARR5{U8}_U8_'snap_pi'|]
// file llc.h line 40
struct anonymous_29;

// tag-#anon#UN[*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'ifu_broadaddr'||*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'ifu_dstaddr'|]
// file /usr/include/ifaddrs.h line 38
union anonymous_37;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_25;

// tag-#anon#UN[ARR16{S8}_S8_'ifrn_name'|]
// file /usr/include/net/if.h line 130
union anonymous_39;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous_2;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_22;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_18;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_12;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_36;

// tag-#anon#UN[SYM#tag-in_addr#'addr4'||SYM#tag-in6_addr#'addr6'|]
// file resolver.c line 31
union anonymous_10;

// tag-#anon#UN[SYM#tag-in_addr#'dst'||SYM#tag-in6_addr#'dst6'|]
// file addr_hash.h line 23
union anonymous_1;

// tag-#anon#UN[SYM#tag-in_addr#'src'||SYM#tag-in6_addr#'src6'|]
// file addr_hash.h line 18
union anonymous_0;

// tag-#anon#UN[SYM#tag-ip6_hdrctl#'ip6_un1'||U8'ip6_un2_vfc'|]
// file /usr/include/netinet/ip6.h line 26
union anonymous_32;

// tag-#anon#UN[SYM#tag-sockaddr#'ifru_addr'||SYM#tag-sockaddr#'ifru_dstaddr'||SYM#tag-sockaddr#'ifru_broadaddr'||SYM#tag-sockaddr#'ifru_netmask'||SYM#tag-sockaddr#'ifru_hwaddr'||S16'ifru_flags'||S32'ifru_ivalue'||S32'ifru_mtu'||SYM#tag-ifmap#'ifru_map'||ARR16{S8}_S8_'ifru_slave'||ARR16{S8}_S8_'ifru_newname'||*{S8}_S8_'ifru_data'|]
// file /usr/include/net/if.h line 135
union anonymous_40;

// tag-#anon#UN[U8'u_ctl'||U16'is_ctl'||SYM#tag-#anon#ST[U8'snap_ui'||ARR5{U8}_U8_'snap_pi'|]#'snap'||SYM#tag-#anon#ST[U8'snap_ui'||ARR3{U8}_U8_'snap_orgcode'||ARR2{U8}_U8_'snap_ethertype'|]#'snap_ether'|]
// file llc.h line 37
union anonymous_31;

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

// tag-_item
// file vector.h line 14
union _item;

// tag-_stringmap
// file stringmap.h line 16
struct _stringmap;

// tag-_vector
// file vector.h line 24
struct _vector;

// tag-_win_st
// file /usr/include/curses.h line 365
struct _win_st;

// tag-addr_storage
// file resolver.c line 28
struct addr_storage;

// tag-bpf_insn
// file /usr/include/pcap/bpf.h line 108
struct bpf_insn;

// tag-bpf_program
// file /usr/include/pcap/bpf.h line 106
struct bpf_program;

// tag-ether_header
// file ether.h line 11
struct ether_header;

// tag-host_pair_line_tag
// file ui_common.h line 26
struct host_pair_line_tag;

// tag-if_nameindex
// file /usr/include/net/if.h line 33
struct if_nameindex;

// tag-ifaddrs
// file /usr/include/ifaddrs.h line 29
struct ifaddrs;

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

// tag-ip
// file ip.h line 50
struct ip;

// tag-ip6_hdr
// file /usr/include/netinet/ip6.h line 24
struct ip6_hdr;

// tag-ip6_hdrctl
// file /usr/include/netinet/ip6.h line 28
struct ip6_hdrctl;

// tag-itimerval
// file /usr/include/x86_64-linux-gnu/sys/time.h line 107
struct itimerval;

// tag-ldat
// file /usr/include/curses.h line 412
struct ldat;

// tag-llc
// file llc.h line 34
struct llc;

// tag-node_tag
// file hash.h line 16
struct node_tag;

// tag-pcap
// file /usr/include/pcap/pcap.h line 79
struct pcap;

// tag-pcap_pkthdr
// file /usr/include/pcap/pcap.h line 160
struct pcap_pkthdr;

// tag-pdat
// file /usr/include/curses.h line 452
struct pdat;

// tag-pfloghdr
// file iftop.h line 45
struct pfloghdr;

// tag-protoent
// file /usr/include/netdb.h line 326
struct protoent;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-radiotap_header
// file ether.h line 26
struct radiotap_header;

// tag-re_pattern_buffer
// file /usr/include/regex.h line 357
struct re_pattern_buffer;

// tag-servent
// file /usr/include/netdb.h line 257
struct servent;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-sll_header
// file sll.h line 82
struct sll_header;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/netinet/in.h line 252
struct sockaddr_in6;

// tag-sorted_list_node_tag
// file sorted_list.h line 9
struct sorted_list_node_tag;

// tag-tcphdr
// file tcp.h line 42
struct tcphdr;

// tag-termios
// file /usr/include/x86_64-linux-gnu/bits/termios.h line 28
struct termios;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-token_header
// file token.h line 45
struct token_header;

// tag-vlan_8021q_header
// file ether.h line 18
struct vlan_8021q_header;

// tag-wrapper_s
// file threadprof.c line 11
struct wrapper_s;

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
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// addr_hash_create
// file addr_hash.c line 89
struct anonymous_9 * addr_hash_create(void);
// analyse_data
// file ui_common.h line 43
void analyse_data(void);
// assign_addr_pair
// file iftop.c line 192
void assign_addr_pair(struct anonymous_5 *ap, struct ip *iptr, signed int flip);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// beep
// file /usr/include/curses.h line 588
extern signed int beep(void);
// calculate_totals
// file ui_common.c line 176
void calculate_totals();
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cbreak
// file /usr/include/curses.h line 594
extern signed int cbreak(void);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// compare
// file addr_hash.c line 12
signed int compare(void *a, void *b);
// config_get_bool
// file cfgfile.h line 19
signed int config_get_bool(const char *directive);
// config_get_enum
// file cfgfile.h line 24
signed int config_get_enum(const char *directive, struct anonymous *enumeration, signed int *value);
// config_get_float
// file cfgfile.c line 171
signed int config_get_float(const char *directive, float *value);
// config_get_int
// file cfgfile.h line 20
signed int config_get_int(const char *directive, signed int *value);
// config_get_string
// file cfgfile.h line 18
char * config_get_string(const char *directive);
// config_init
// file cfgfile.h line 22
signed int config_init();
// config_set_string
// file cfgfile.h line 23
void config_set_string(const char *directive, const char *s);
// copy_key
// file addr_hash.c line 75
void * copy_key(void *orig);
// curs_set
// file /usr/include/curses.h line 604
extern signed int curs_set(signed int);
// delete_key
// file addr_hash.c line 82
void delete_key(void *key);
// do_resolve
// file resolver.c line 69
char * do_resolve(struct addr_storage *addr);
// draw_bar
// file ui.c line 204
void draw_bar(float n, signed int y);
// draw_bar_scale
// file ui.c line 129
static void draw_bar_scale(signed int *y);
// draw_line_total
// file ui.c line 180
void draw_line_total(float sent, float recv, signed int y, signed int x, enum anonymous_8 linedisplay, signed int bytes);
// draw_line_totals
// file ui.c line 212
void draw_line_totals(signed int y, struct host_pair_line_tag *line, enum anonymous_8 linedisplay);
// draw_totals
// file ui.c line 240
void draw_totals(struct host_pair_line_tag *totals);
// edline
// file edline.c line 22
char * edline(signed int linenum, const char *prompt, const char *initial);
// endprotoent
// file /usr/include/netdb.h line 344
extern void endprotoent(void);
// endwin
// file /usr/include/curses.h line 618
extern signed int endwin(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// finish
// file iftop.c line 82
static void finish(signed int sig);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeifaddrs
// file /usr/include/ifaddrs.h line 69
extern void freeifaddrs(struct ifaddrs *);
// get_addrs_ioctl
// file addrs_ioctl.h line 10
signed int get_addrs_ioctl(char *interface, char *if_hw_addr, struct in_addr *if_ip_addr, struct in6_addr *if_ip6_addr);
// get_bar_interval
// file ui.c line 88
static signed int get_bar_interval(float bandwidth);
// get_bar_length
// file ui.c line 108
static signed int get_bar_length(const signed int rate);
// get_first_interface
// file options.c line 88
static char * get_first_interface(void);
// get_max_bandwidth
// file ui.c line 96
static float get_max_bandwidth();
// getchar
// file /usr/include/stdio.h line 538
extern signed int getchar(void);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getifaddrs
// file /usr/include/ifaddrs.h line 66
extern signed int getifaddrs(struct ifaddrs **);
// getitimer
// file /usr/include/x86_64-linux-gnu/sys/time.h line 125
extern signed int getitimer(signed int, struct itimerval *);
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getprotobyname
// file /usr/include/netdb.h line 357
extern struct protoent * getprotobyname(const char *);
// getservent
// file /usr/include/netdb.h line 283
extern struct servent * getservent(void);
// gprof_pthread_create
// file threadprof.c line 27
signed int gprof_pthread_create(unsigned long int *thread, union pthread_attr_t *attr, void * (*start_routine)(void *), void *arg);
// gprof_pthread_create::start_routine_object
//
void * start_routine_object(void *);
// halfdelay
// file /usr/include/curses.h line 628
extern signed int halfdelay(signed int);
// handle_cooked_packet
// file iftop.c line 574
static void handle_cooked_packet(unsigned char *args, struct pcap_pkthdr *thdr, const unsigned char *packet);
// handle_eth_packet
// file iftop.c line 595
static void handle_eth_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet);
// handle_ip_packet
// file iftop.c line 252
static void handle_ip_packet(struct ip *iptr, signed int hw_dir);
// handle_llc_packet
// file iftop.c line 494
static void handle_llc_packet(struct llc *llc, signed int dir);
// handle_null_packet
// file iftop.c line 489
static void handle_null_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet);
// handle_pflog_packet
// file iftop.c line 475
static void handle_pflog_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet);
// handle_ppp_packet
// file iftop.c line 547
static void handle_ppp_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet);
// handle_radiotap_packet
// file iftop.c line 642
static void handle_radiotap_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet);
// handle_raw_packet
// file iftop.c line 469
static void handle_raw_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet);
// handle_tokenring_packet
// file iftop.c line 521
static void handle_tokenring_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet);
// hash
// file addr_hash.c line 42
signed int hash(void *key);
// hash_delete
// file hash.c line 28
enum anonymous_3 hash_delete(struct anonymous_9 *hash_table, void *key);
// hash_delete_all
// file hash.c line 106
void hash_delete_all(struct anonymous_9 *hash_table);
// hash_destroy
// file hash.c line 135
enum anonymous_3 hash_destroy(struct anonymous_9 *hash_table);
// hash_find
// file hash.c line 61
enum anonymous_3 hash_find(struct anonymous_9 *hash_table, void *key, void **rec);
// hash_initialise
// file hash.h line 32
enum anonymous_3 hash_initialise(struct anonymous_9 *hash_table);
// hash_insert
// file hash.c line 8
enum anonymous_3 hash_insert(struct anonymous_9 *hash_table, void *key, void *rec);
// hash_next_item
// file hash.c line 77
enum anonymous_3 hash_next_item(struct anonymous_9 *hash_table, struct node_tag **ppnode);
// hash_uint32
// file addr_hash.c line 35
static inline signed int hash_uint32(unsigned int n);
// hash_uint32_link1
// file ns_hash.c line 23
static inline signed int hash_uint32_link1(unsigned int n_link1);
// history_create
// file iftop.c line 104
struct anonymous_7 * history_create();
// history_length
// file ui_common.c line 152
signed int history_length(const signed int d);
// history_rotate
// file iftop.c line 110
void history_rotate();
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// if_freenameindex
// file /usr/include/net/if.h line 200
extern void if_freenameindex(struct if_nameindex *);
// if_nameindex
// file /usr/include/net/if.h line 197
extern struct if_nameindex * if_nameindex(void);
// in_filter_net
// file iftop.c line 174
signed int in_filter_net(struct in_addr addr);
// inet_aton
// file /usr/include/arpa/inet.h line 73
extern signed int inet_aton(const char *, struct in_addr *);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// init_history
// file iftop.c line 98
void init_history();
// initscr
// file /usr/include/curses.h line 639
extern struct _win_st * initscr(void);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// ip6_addr_match
// file iftop.c line 184
static inline signed int ip6_addr_match(struct in6_addr *addr);
// ip_addr_match
// file iftop.c line 180
static inline signed int ip_addr_match(struct in_addr addr);
// is_bad_interface_name
// file options.c line 78
static signed int is_bad_interface_name(char *i);
// is_cfgdirective_valid
// file cfgfile.c line 53
signed int is_cfgdirective_valid(const char *s);
// item_ptr
// file vector.h line 22
static inline union _item item_ptr(void * const v);
// keypad
// file /usr/include/curses.h line 654
extern signed int keypad(struct _win_st *, _Bool);
// log
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 109
extern double log(double);
// make_screen_list
// file ui_common.c line 207
void make_screen_list();
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
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
// min
// file edline.c line 15
static signed int min(const signed int a, const signed int b);
// noecho
// file /usr/include/curses.h line 718
extern signed int noecho(void);
// nonl
// file /usr/include/curses.h line 719
extern signed int nonl(void);
// ns_hash_compare
// file ns_hash.c line 17
signed int ns_hash_compare(void *a, void *b);
// ns_hash_copy_key
// file ns_hash.c line 42
void * ns_hash_copy_key(void *orig);
// ns_hash_create
// file ns_hash.c line 58
struct anonymous_9 * ns_hash_create(void);
// ns_hash_delete_key
// file ns_hash.c line 51
void ns_hash_delete_key(void *key);
// ns_hash_hash
// file ns_hash.c line 30
signed int ns_hash_hash(void *key);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// options_config_get_bool
// file options.c line 333
signed int options_config_get_bool(const char *name, signed int *value);
// options_config_get_bw_rate
// file options.c line 373
signed int options_config_get_bw_rate(char *directive, signed long long int *result);
// options_config_get_enum
// file options.c line 349
signed int options_config_get_enum(char *name, struct anonymous *enumeration, signed int *result);
// options_config_get_int
// file options.c line 341
signed int options_config_get_int(const char *name, signed int *value);
// options_config_get_net_filter
// file options.c line 416
signed int options_config_get_net_filter();
// options_config_get_net_filter6
// file options.c line 475
signed int options_config_get_net_filter6();
// options_config_get_promiscuous
// file options.c line 360
signed int options_config_get_promiscuous();
// options_config_get_string
// file options.c line 323
signed int options_config_get_string(const char *name, char **value);
// options_make
// file options.h line 100
void options_make();
// options_read_args
// file options.h line 99
void options_read_args(signed int argc, char **argv);
// options_set_defaults
// file options.h line 97
void options_set_defaults();
// packet_handler_object
//
void packet_handler_object(unsigned char *, struct pcap_pkthdr *, const unsigned char *);
// packet_init
// file iftop.c line 680
void packet_init();
// packet_loop
// file iftop.c line 784
void packet_loop(void *ptr);
// pcap_compile
// file /usr/include/pcap/pcap.h line 389
signed int pcap_compile(struct pcap *, struct bpf_program *, const char *, signed int, unsigned int);
// pcap_datalink
// file /usr/include/pcap/pcap.h line 396
signed int pcap_datalink(struct pcap *);
// pcap_geterr
// file /usr/include/pcap/pcap.h line 387
char * pcap_geterr(struct pcap *);
// pcap_loop
// file /usr/include/pcap/pcap.h line 372
signed int pcap_loop(struct pcap *, signed int, void (*)(unsigned char *, struct pcap_pkthdr *, const unsigned char *), unsigned char *);
// pcap_open_live
// file /usr/include/pcap/pcap.h line 349
struct pcap * pcap_open_live(const char *, signed int, signed int, signed int, char *);
// pcap_setfilter
// file /usr/include/pcap/pcap.h line 379
signed int pcap_setfilter(struct pcap *, struct bpf_program *);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_12 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_12 *, const union anonymous_18 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_12 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_12 *, union anonymous_36 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_36 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_36 *, const union anonymous_18 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_36 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_36 *);
// read_config
// file cfgfile.c line 247
signed int read_config(char *file, signed int whinge_on_error);
// read_config_file
// file cfgfile.c line 70
signed int read_config_file(const char *f, signed int whinge);
// readable_size
// file ui_common.c line 124
void readable_size(float n, char *buf, signed int bsize, signed int ksize, signed int bytes);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// regcomp
// file /usr/include/regex.h line 562
extern signed int regcomp(struct re_pattern_buffer *, const char *, signed int);
// regexec
// file /usr/include/regex.h line 566
extern signed int regexec(const struct re_pattern_buffer *, const char *, unsigned long int, struct anonymous_24 *, signed int);
// regfree
// file /usr/include/regex.h line 574
extern void regfree(struct re_pattern_buffer *);
// resolve
// file resolver.c line 471
void resolve(signed int af, void *addr, char *result, signed int buflen);
// resolver_initialise
// file resolver.h line 15
void resolver_initialise();
// resolver_worker
// file resolver.c line 408
void resolver_worker(void *ptr);
// screen_filter_match
// file screenfilter.c line 46
signed int screen_filter_match(char *s);
// screen_filter_set
// file screenfilter.c line 25
signed int screen_filter_set(char *s);
// screen_hash_clear
// file ui_common.c line 229
void screen_hash_clear();
// screen_line_bandwidth_compare
// file ui_common.c line 35
signed int screen_line_bandwidth_compare(struct host_pair_line_tag *aa, struct host_pair_line_tag *bb, signed int start_div);
// screen_line_compare
// file ui_common.c line 99
signed int screen_line_compare(void *a, void *b);
// screen_line_host_compare
// file ui_common.c line 69
signed int screen_line_host_compare(void *a, void *b, struct host_pair_line_tag *aa, struct host_pair_line_tag *bb);
// screen_list_clear
// file ui_common.c line 164
void screen_list_clear();
// screen_list_init
// file ui_common.c line 159
void screen_list_init(void);
// serv_hash_compare
// file serv_hash.c line 13
signed int serv_hash_compare(void *a, void *b);
// serv_hash_copy_key
// file serv_hash.c line 25
void * serv_hash_copy_key(void *orig);
// serv_hash_create
// file serv_hash.c line 39
struct anonymous_9 * serv_hash_create(void);
// serv_hash_delete_key
// file serv_hash.c line 32
void serv_hash_delete_key(void *key);
// serv_hash_hash
// file serv_hash.c line 20
signed int serv_hash_hash(void *key);
// serv_hash_initialise
// file serv_hash.c line 51
void serv_hash_initialise(struct anonymous_9 *sh);
// set_filter_code
// file iftop.c line 655
char * set_filter_code(const char *filter);
// sethostent
// file /usr/include/netdb.h line 117
extern void sethostent(signed int);
// setitimer
// file /usr/include/x86_64-linux-gnu/sys/time.h line 131
extern signed int setitimer(signed int, struct itimerval *, struct itimerval *);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// setprotoent
// file /usr/include/netdb.h line 338
extern void setprotoent(signed int);
// showhelp
// file ui.c line 441
void showhelp(const char *s);
// showportstatus
// file ui.c line 468
void showportstatus();
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sorted_list_destroy
// file sorted_list.c line 38
void sorted_list_destroy(struct anonymous_6 *list);
// sorted_list_initialise
// file sorted_list.c line 51
void sorted_list_initialise(struct anonymous_6 *list);
// sorted_list_insert
// file sorted_list.c line 12
void sorted_list_insert(struct anonymous_6 *list, void *item);
// sorted_list_next_item
// file sorted_list.c line 29
struct sorted_list_node_tag * sorted_list_next_item(struct anonymous_6 *list, struct sorted_list_node_tag *prev);
// sprint_host
// file ui_common.c line 322
void sprint_host(char *line, signed int af, struct in6_addr *addr, unsigned int port, unsigned int protocol, signed int L, signed int unspecified_as_star);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strcspn
// file /usr/include/string.h line 284
extern unsigned long int strcspn(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// stringmap_delete
// file stringmap.c line 33
void stringmap_delete(struct _stringmap *S);
// stringmap_delete_free
// file stringmap.c line 45
void stringmap_delete_free(struct _stringmap *S);
// stringmap_find
// file stringmap.c line 96
struct _stringmap * stringmap_find(struct _stringmap * const S, const char *k);
// stringmap_insert
// file stringmap.c line 59
union _item * stringmap_insert(struct _stringmap *S, const char *k, const union _item d);
// stringmap_new
// file stringmap.c line 23
struct _stringmap * stringmap_new(void);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strpbrk
// file /usr/include/string.h line 314
extern char * strpbrk(const char *, const char *);
// strspn
// file /usr/include/string.h line 288
extern unsigned long int strspn(const char *, const char *);
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// tcgetattr
// file /usr/include/termios.h line 66
extern signed int tcgetattr(signed int, struct termios *);
// tcsetattr
// file /usr/include/termios.h line 70
extern signed int tcsetattr(signed int, signed int, struct termios *);
// tick
// file iftop.c line 140
void tick(signed int print);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tui_init
// file tui.h line 11
void tui_init();
// tui_loop
// file tui.h line 12
void tui_loop();
// tui_print
// file tui.h line 10
void tui_print();
// tui_tick
// file tui.h line 13
void tui_tick(signed int print);
// ui_curses_init
// file ui.c line 431
void ui_curses_init();
// ui_finish
// file ui.h line 12
void ui_finish();
// ui_init
// file ui.h line 15
void ui_init();
// ui_loop
// file ui.h line 11
void ui_loop();
// ui_print
// file ui.h line 10
void ui_print();
// ui_tick
// file ui.h line 13
void ui_tick(signed int print);
// usage
// file options.c line 178
static void usage(struct _IO_FILE *fp);
// vector_back
// file vector.c line 59
union _item vector_back(struct _vector *v);
// vector_delete
// file vector.c line 33
void vector_delete(struct _vector *v);
// vector_delete_free
// file vector.c line 38
void vector_delete_free(struct _vector *v);
// vector_new
// file vector.c line 21
struct _vector * vector_new(void);
// vector_pop_back
// file vector.c line 52
void vector_pop_back(struct _vector *v);
// vector_push_back
// file vector.c line 47
void vector_push_back(struct _vector *v, const union _item t);
// vector_reallocate
// file vector.c line 76
void vector_reallocate(struct _vector *v, const unsigned long int n);
// vector_remove
// file vector.c line 63
union _item * vector_remove(struct _vector *v, union _item *t);
// waddch
// file /usr/include/curses.h line 792
extern signed int waddch(struct _win_st *, const unsigned long int);
// waddnstr
// file /usr/include/curses.h line 795
extern signed int waddnstr(struct _win_st *, const char *, signed int);
// wchgat
// file /usr/include/curses.h line 807
extern signed int wchgat(struct _win_st *, signed int, unsigned long int, signed short int, const void *);
// wclrtoeol
// file /usr/include/curses.h line 810
extern signed int wclrtoeol(struct _win_st *);
// werase
// file /usr/include/curses.h line 816
extern signed int werase(struct _win_st *);
// wgetch
// file /usr/include/curses.h line 817
extern signed int wgetch(struct _win_st *);
// whline
// file /usr/include/curses.h line 820
extern signed int whline(struct _win_st *, unsigned long int, signed int);
// wmove
// file /usr/include/curses.h line 831
extern signed int wmove(struct _win_st *, signed int, signed int);
// wrapper_routine
// file threadprof.c line 60
static void * wrapper_routine(void *data);
// wrapper_routine::1::start_routine_object
//
void * start_routine_object(void *);
// wrefresh
// file /usr/include/curses.h line 836
extern signed int wrefresh(struct _win_st *);
// xcalloc
// file iftop.h line 37
void * xcalloc(unsigned long int n, unsigned long int m);
// xfree
// file iftop.h line 40
void xfree(void *v);
// xmalloc
// file iftop.h line 36
void * xmalloc(unsigned long int n);
// xrealloc
// file iftop.h line 38
void * xrealloc(void *w, unsigned long int n);
// xstrdup
// file iftop.h line 39
char * xstrdup(const char *s);

struct anonymous_9
{
  // compare
  signed int (*compare)(void *, void *);
  // hash
  signed int (*hash)(void *);
  // copy_key
  void * (*copy_key)(void *);
  // delete_key
  void (*delete_key)(void *);
  // table
  struct node_tag **table;
  // size
  signed int size;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

union anonymous_2
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

struct in6_addr
{
  // __in6_u
  union anonymous_2 __in6_u;
};

struct anonymous_35
{
  // interface
  char *interface;
  // dnsresolution
  signed int dnsresolution;
  // portresolution
  signed int portresolution;
  // filtercode
  char *filtercode;
  // showbars
  signed int showbars;
  // showports
  enum anonymous_33 showports;
  // promiscuous
  signed int promiscuous;
  // promiscuous_but_choosy
  signed int promiscuous_but_choosy;
  // aggregate_src
  signed int aggregate_src;
  // aggregate_dest
  signed int aggregate_dest;
  // paused
  signed int paused;
  // showhelp
  signed int showhelp;
  // timed_output
  signed int timed_output;
  // no_curses
  signed int no_curses;
  // num_lines
  signed int num_lines;
  // bandwidth_in_bytes
  signed int bandwidth_in_bytes;
  // sort
  enum anonymous_34 sort;
  // bar_interval
  signed int bar_interval;
  // screenfilter
  char *screenfilter;
  // freezeorder
  signed int freezeorder;
  // screen_offset
  signed int screen_offset;
  // linedisplay
  enum anonymous_8 linedisplay;
  // show_totals
  signed int show_totals;
  // max_bandwidth
  signed long long int max_bandwidth;
  // log_scale
  signed int log_scale;
  // netfilter
  signed int netfilter;
  // netfilternet
  struct in_addr netfilternet;
  // netfiltermask
  struct in_addr netfiltermask;
  // netfilter6
  signed int netfilter6;
  // netfilter6net
  struct in6_addr netfilter6net;
  // netfilter6mask
  struct in6_addr netfilter6mask;
  // link_local
  signed int link_local;
  // config_file
  char *config_file;
  // config_file_specified
  signed int config_file_specified;
};

struct anonymous
{
  // name
  char *name;
  // value
  signed int value;
};

struct anonymous_17
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

struct anonymous_26
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_7
{
  // recv
  signed long int recv[20l];
  // sent
  signed long int sent[20l];
  // total_sent
  long double total_sent;
  // total_recv
  long double total_recv;
  // last_write
  signed int last_write;
};

struct anonymous_11
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

union anonymous_0
{
  // src
  struct in_addr src;
  // src6
  struct in6_addr src6;
};

union anonymous_1
{
  // dst
  struct in_addr dst;
  // dst6
  struct in6_addr dst6;
};

struct anonymous_5
{
  // af
  signed int af;
  // protocol
  unsigned short int protocol;
  // src_port
  unsigned short int src_port;
  // _anon0
  union anonymous_0 _anon0;
  // dst_port
  unsigned short int dst_port;
  // _anon1
  union anonymous_1 _anon1;
};

struct anonymous_4
{
  // max
  signed int max;
  // interval
  signed int interval;
};

struct anonymous_27
{
  // port
  signed int port;
  // protocol
  signed int protocol;
};

struct anonymous_24
{
  // rm_so
  signed int rm_so;
  // rm_eo
  signed int rm_eo;
};

struct anonymous_19
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

struct anonymous_21
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_20
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_16
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_22
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_19 _kill;
  // _timer
  struct anonymous_20 _timer;
  // _rt
  struct anonymous_21 _rt;
  // _sigchld
  struct anonymous_13 _sigchld;
  // _sigfault
  struct anonymous_14 _sigfault;
  // _sigpoll
  struct anonymous_16 _sigpoll;
  // _sigsys
  struct anonymous_17 _sigsys;
};

struct anonymous_23
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_22 _sifields;
};

struct sorted_list_node_tag
{
  // next
  struct sorted_list_node_tag *next;
  // data
  void *data;
};

struct anonymous_6
{
  // root
  struct sorted_list_node_tag root;
  // compare
  signed int (*compare)(void *, void *);
};

struct anonymous_30
{
  // snap_ui
  unsigned char snap_ui;
  // snap_orgcode
  unsigned char snap_orgcode[3l];
  // snap_ethertype
  unsigned char snap_ethertype[2l];
};

struct anonymous_29
{
  // snap_ui
  unsigned char snap_ui;
  // snap_pi
  unsigned char snap_pi[5l];
};

union anonymous_37
{
  // ifu_broadaddr
  struct sockaddr *ifu_broadaddr;
  // ifu_dstaddr
  struct sockaddr *ifu_dstaddr;
};

union anonymous_25
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_23 *, void *);
};

union anonymous_39
{
  // ifrn_name
  char ifrn_name[16l];
};

union anonymous_18
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_12
{
  // __data
  struct anonymous_11 __data;
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

union anonymous_36
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous_10
{
  // addr4
  struct in_addr addr4;
  // addr6
  struct in6_addr addr6;
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

union anonymous_32
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

union anonymous_40
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

union anonymous_31
{
  // u_ctl
  unsigned char u_ctl;
  // is_ctl
  unsigned short int is_ctl;
  // snap
  struct anonymous_29 snap;
  // snap_ether
  struct anonymous_30 snap_ether;
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

union _item
{
  // v
  void *v;
  // l
  signed long int l;
};

struct _stringmap
{
  // key
  char *key;
  // d
  union _item d;
  // l
  struct _stringmap *l;
  // g
  struct _stringmap *g;
};

struct _vector
{
  // ary
  union _item *ary;
  // n
  unsigned long int n;
  // n_used
  unsigned long int n_used;
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

struct addr_storage
{
  // af
  signed int af;
  // len
  signed int len;
  // addr
  union anonymous_10 addr;
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

struct ether_header
{
  // ether_dhost
  unsigned char ether_dhost[6l];
  // ether_shost
  unsigned char ether_shost[6l];
  // ether_type
  unsigned short int ether_type;
} __attribute__ ((__packed__));

struct host_pair_line_tag
{
  // ap
  struct anonymous_5 ap;
  // total_recv
  long double total_recv;
  // total_sent
  long double total_sent;
  // recv
  long double recv[3l];
  // sent
  long double sent[3l];
};

struct if_nameindex
{
  // if_index
  unsigned int if_index;
  // if_name
  char *if_name;
};

struct ifaddrs
{
  // ifa_next
  struct ifaddrs *ifa_next;
  // ifa_name
  char *ifa_name;
  // ifa_flags
  unsigned int ifa_flags;
  // ifa_addr
  struct sockaddr *ifa_addr;
  // ifa_netmask
  struct sockaddr *ifa_netmask;
  // ifa_ifu
  union anonymous_37 ifa_ifu;
  // ifa_data
  void *ifa_data;
};

struct ifreq
{
  // ifr_ifrn
  union anonymous_39 ifr_ifrn;
  // ifr_ifru
  union anonymous_40 ifr_ifru;
};

struct ip
{
  // ip_vhl
  unsigned char ip_vhl;
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

struct ip6_hdr
{
  // ip6_ctlun
  union anonymous_32 ip6_ctlun;
  // ip6_src
  struct in6_addr ip6_src;
  // ip6_dst
  struct in6_addr ip6_dst;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct itimerval
{
  // it_interval
  struct timeval it_interval;
  // it_value
  struct timeval it_value;
};

struct llc
{
  // dsap
  unsigned char dsap;
  // ssap
  unsigned char ssap;
  // ctl
  union anonymous_31 ctl;
};

struct node_tag
{
  // next
  struct node_tag *next;
  // key
  void *key;
  // rec
  void *rec;
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

struct pfloghdr
{
  // length
  unsigned char length;
  // af
  unsigned char af;
  // action
  unsigned char action;
  // reason
  unsigned char reason;
  // ifname
  char ifname[16l];
  // ruleset
  char ruleset[16l];
  // rulenr
  unsigned int rulenr;
  // subrulenr
  unsigned int subrulenr;
  // dir
  unsigned char dir;
  // pad
  unsigned char pad[3l];
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

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct radiotap_header
{
  // it_version
  unsigned char it_version;
  // it_pad
  unsigned char it_pad;
  // it_len
  unsigned short int it_len;
  // it_present
  unsigned int it_present;
} __attribute__ ((__packed__));

struct re_pattern_buffer
{
  // __buffer
  unsigned char *__buffer;
  // __allocated
  unsigned long int __allocated;
  // __used
  unsigned long int __used;
  // __syntax
  unsigned long int __syntax;
  // __fastmap
  char *__fastmap;
  // __translate
  unsigned char *__translate;
  // re_nsub
  unsigned long int re_nsub;
  // __can_be_null
  unsigned int __can_be_null : 1;
  // __regs_allocated
  unsigned int __regs_allocated : 2;
  // __fastmap_accurate
  unsigned int __fastmap_accurate : 1;
  // __no_sub
  unsigned int __no_sub : 1;
  // __not_bol
  unsigned int __not_bol : 1;
  // __not_eol
  unsigned int __not_eol : 1;
  // __newline_anchor
  unsigned int __newline_anchor : 1;
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

struct sigaction
{
  // __sigaction_handler
  union anonymous_25 __sigaction_handler;
  // sa_mask
  struct anonymous_26 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
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

struct tcphdr
{
  // th_sport
  unsigned short int th_sport;
  // th_dport
  unsigned short int th_dport;
  // th_seq
  unsigned int th_seq;
  // th_ack
  unsigned int th_ack;
  // th_offx2
  unsigned char th_offx2;
  // th_flags
  unsigned char th_flags;
  // th_win
  unsigned short int th_win;
  // th_sum
  unsigned short int th_sum;
  // th_urp
  unsigned short int th_urp;
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

struct token_header
{
  // token_ac
  unsigned char token_ac;
  // token_fc
  unsigned char token_fc;
  // token_dhost
  unsigned char token_dhost[6l];
  // token_shost
  unsigned char token_shost[6l];
  // token_rcf
  unsigned short int token_rcf;
  // token_rseg
  unsigned short int token_rseg[16l];
};

struct vlan_8021q_header
{
  // priority_cfi_vid
  unsigned short int priority_cfi_vid;
  // ether_type
  unsigned short int ether_type;
};

struct wrapper_s
{
  // start_routine
  void * (*start_routine)(void *);
  // arg
  void *arg;
  // lock
  union anonymous_36 lock;
  // wait
  union anonymous_12 wait;
  // itimer
  struct itimerval itimer;
};


// COLS
// file /usr/include/curses.h line 1399
extern signed int COLS;
// LINES
// file /usr/include/curses.h line 1401
extern signed int LINES;
// acs_map
// file /usr/include/curses.h line 274
extern unsigned long int acs_map[];
// bad_interface_names
// file options.c line 42
static char *bad_interface_names[8l] = { "lo:", "lo", "stf", "gif", "dummy", "vmnet", "wmaster", (char *)(void *)0 };
// config
// file cfgfile.c line 49
struct _stringmap *config;
// config_directives
// file cfgfile.c line 24
char *config_directives[22l] = { "interface", "dns-resolution", "port-resolution", "filter-code", "show-bars", "promiscuous", "hide-source", "hide-destination", "use-bytes", "sort", "line-display", "show-totals", "log-scale", "max-bandwidth", "net-filter", "net-filter6", "link-local", "port-display", "timed-output", "no-curses", "num-lines", (char *)(void *)0 };
// curscr
// file /usr/include/curses.h line 1393
extern struct _win_st *curscr;
// dontshowdisplay
// file ui.c line 70
signed int dontshowdisplay = 0;
// first_timestamp
// file iftop.c line 71
signed long int first_timestamp;
// foad
// file iftop.c line 80
signed int foad;
// have_hw_addr
// file iftop.c line 57
signed int have_hw_addr = 0;
// have_ip6_addr
// file iftop.c line 62
signed int have_ip6_addr = 0;
// have_ip_addr
// file iftop.c line 61
signed int have_ip_addr = 0;
// head
// file resolver.c line 46
signed int head;
// helpmsg
// file ui.c line 69
char helpmsg[80l];
// helptimer
// file ui.c line 68
signed long int helptimer = (signed long int)0;
// history
// file iftop.c line 68
struct anonymous_9 *history;
// history_divs
// file ui_common.c line 21
signed int history_divs[3l] = { 1, 5, 20 };
// history_len
// file iftop.c line 73
signed int history_len = 1;
// history_pos
// file iftop.c line 72
signed int history_pos = 0;
// history_totals
// file iftop.c line 69
struct anonymous_7 history_totals;
// if_hw_addr
// file iftop.c line 58
char if_hw_addr[6l];
// if_ip6_addr
// file iftop.c line 64
struct in6_addr if_ip6_addr;
// if_ip_addr
// file iftop.c line 63
struct in_addr if_ip_addr;
// last_timestamp
// file iftop.c line 70
signed long int last_timestamp;
// linedisplay_enumeration
// file options.c line 62
struct anonymous linedisplay_enumeration[5l] = { { .name="two-line", .value=OPTION_LINEDISPLAY_TWO_LINE },
    { .name="one-line-both", .value=OPTION_LINEDISPLAY_ONE_LINE_BOTH },
    { .name="one-line-sent", .value=OPTION_LINEDISPLAY_ONE_LINE_SENT },
    { .name="one-line-received", .value=OPTION_LINEDISPLAY_ONE_LINE_RECV },
    { .name=(char *)(void *)0, .value=-1 } };
// ns_hash
// file resolver.c line 44
struct anonymous_9 *ns_hash;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opterr
// file /usr/include/getopt.h line 76
extern signed int opterr;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// options
// file options.c line 31
struct anonymous_35 options;
// optopt
// file /usr/include/getopt.h line 80
extern signed int optopt;
// optstr
// file options.c line 33
char optstr[29l] = { '+', 'i', ':', 'f', ':', 'n', 'N', 'F', ':', 'G', ':', 'l', 'h', 'p', 'b', 'B', 'P', 'm', ':', 'c', ':', 's', ':', 't', 'L', ':', 'o', ':', 0 };
// packet_handler
// file iftop.c line 78
void (*packet_handler)(unsigned char *, struct pcap_pkthdr *, const unsigned char *);
// pcap_filter
// file iftop.c line 77
struct bpf_program pcap_filter;
// pd
// file iftop.c line 76
struct pcap *pd;
// peakrecv
// file ui_common.h line 38
signed int peakrecv;
// peaksent
// file ui_common.h line 38
signed int peaksent;
// peaktotal
// file ui_common.h line 38
signed int peaktotal;
// persistenthelp
// file ui.c line 67
signed int persistenthelp = 0;
// preg
// file screenfilter.c line 23
struct re_pattern_buffer preg;
// rateidx
// file ui.c line 84
static signed int rateidx = 0;
// rateidx_init
// file ui.c line 86
static signed int rateidx_init = 0;
// resolve_queue
// file resolver.c line 39
struct addr_storage resolve_queue[20l];
// resolver_queue_cond
// file resolver.c line 41
union anonymous_12 resolver_queue_cond;
// resolver_queue_mutex
// file resolver.c line 42
union anonymous_36 resolver_queue_mutex;
// scale
// file ui.c line 75
static struct anonymous_4 scale[7l] = { { .max=64000, .interval=10 }, { .max=128000, .interval=10 }, { .max=256000, .interval=10 }, { .max=1000000, .interval=10 }, { .max=10000000, .interval=10 }, { .max=100000000, .interval=100 }, { .max=1000000000, .interval=100 } };
// screen_hash
// file ui_common.h line 40
struct anonymous_9 *screen_hash;
// screen_list
// file ui_common.h line 36
struct anonymous_6 screen_list;
// service_hash
// file ui_common.h line 41
struct anonymous_9 *service_hash;
// showhelphint
// file ui.c line 66
signed int showhelphint = 0;
// showports_enumeration
// file options.c line 70
struct anonymous showports_enumeration[5l] = { { .name="off", .value=OPTION_PORTS_OFF },
    { .name="source-only", .value=OPTION_PORTS_SRC },
    { .name="destination-only", .value=OPTION_PORTS_DEST },
    { .name="on", .value=OPTION_PORTS_ON }, { .name=(char *)(void *)0, .value=-1 } };
// sort_enumeration
// file options.c line 53
struct anonymous sort_enumeration[6l] = { { .name="2s", .value=OPTION_SORT_DIV1 },
    { .name="10s", .value=OPTION_SORT_DIV2 },
    { .name="40s", .value=OPTION_SORT_DIV3 },
    { .name="source", .value=OPTION_SORT_SRC },
    { .name="destination", .value=OPTION_SORT_DEST },
    { .name=(char *)(void *)0, .value=-1 } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// stdscr
// file /usr/include/curses.h line 1395
extern struct _win_st *stdscr;
// tail
// file resolver.c line 47
signed int tail;
// tick_mutex
// file iftop.c line 74
union anonymous_36 tick_mutex;
// totals
// file ui_common.h line 37
struct host_pair_line_tag totals;
// unit_bits
// file ui_common.c line 24
char *unit_bits[4l] = { "b", "Kb", "Mb", "Gb" };
// unit_bytes
// file ui_common.c line 25
char *unit_bytes[4l] = { "B", "KB", "MB", "GB" };
// wantbiggerrate
// file ui.c line 84
static signed int wantbiggerrate;

// addr_hash_create
// file addr_hash.c line 89
struct anonymous_9 * addr_hash_create(void)
{
  struct anonymous_9 *hash_table;
  void *return_value_xcalloc_1;
  return_value_xcalloc_1=xcalloc((unsigned long int)256, sizeof(struct anonymous_9) /*48ul*/ );
  hash_table = (struct anonymous_9 *)return_value_xcalloc_1;
  hash_table->size = 256;
  hash_table->compare = compare;
  hash_table->hash = hash;
  hash_table->delete_key = delete_key;
  hash_table->copy_key = copy_key;
  hash_initialise(hash_table);
  return hash_table;
}

// analyse_data
// file ui_common.h line 43
void analyse_data(void)
{
  struct node_tag *n = (struct node_tag *)(void *)0;
  enum anonymous_3 return_value_hash_next_item_1;
  if(!(options.paused == 1))
  {
    memset((void *)&totals, 0, sizeof(struct host_pair_line_tag) /*176ul*/ );
    if(!(options.freezeorder == 0))
      screen_hash_clear();

    else
    {
      screen_list_clear();
      hash_delete_all(screen_hash);
    }
    do
    {
      return_value_hash_next_item_1=hash_next_item(history, &n);
      if(!((signed int)return_value_hash_next_item_1 == HASH_STATUS_OK))
        break;

      struct anonymous_7 *d = (struct anonymous_7 *)n->rec;
      struct host_pair_line_tag *screen_line;
      /* tag-#anon#lUN[l*{l*{SYM#tag-host_pair_line_tag#}_SYM#tag-host_pair_line_tag#_}_l*{SYM#tag-host_pair_line_tag#}_SYM#tag-host_pair_line_tag#__'h_p_l_pp'||l*{l*{lV}_lV_}_l*{lV}_lV__'void_pp'|] */
union anonymous_38
{
  // h_p_l_pp
  struct host_pair_line_tag **h_p_l_pp;
  // void_pp
  void **void_pp;
};

/* */
      ;
      union anonymous_38 u_screen_line = { .h_p_l_pp=&screen_line };
      struct anonymous_5 ap;
      signed int i;
      signed int tsent;
      signed int trecv = 0;
      tsent = trecv;
      ap = *((struct anonymous_5 *)n->key);
      if(!(options.aggregate_src == 0))
        memset((void *)&ap._anon0.src6, 0, sizeof(struct in6_addr) /*16ul*/ );

      if(!(options.aggregate_dest == 0))
        memset((void *)&ap._anon1.dst6, 0, sizeof(struct in6_addr) /*16ul*/ );

      if((signed int)options.showports == OPTION_PORTS_OFF || (signed int)options.showports == OPTION_PORTS_DEST)
        ap.src_port = (unsigned short int)0;

      if((signed int)options.showports == OPTION_PORTS_OFF || (signed int)options.showports == OPTION_PORTS_SRC)
        ap.dst_port = (unsigned short int)0;

      if((signed int)options.showports == OPTION_PORTS_OFF)
        ap.protocol = (unsigned short int)0;

      enum anonymous_3 return_value_hash_find_3;
      return_value_hash_find_3=hash_find(screen_hash, (void *)&ap, u_screen_line.void_pp);
      if((signed int)return_value_hash_find_3 == HASH_STATUS_KEY_NOT_FOUND)
      {
        void *return_value_xcalloc_2;
        return_value_xcalloc_2=xcalloc((unsigned long int)1, sizeof(struct host_pair_line_tag) /*176ul*/ );
        screen_line = (struct host_pair_line_tag *)return_value_xcalloc_2;
        hash_insert(screen_hash, (void *)&ap, (void *)screen_line);
        screen_line->ap = ap;
      }

      screen_line->total_sent = screen_line->total_sent + d->total_sent;
      screen_line->total_recv = screen_line->total_recv + d->total_recv;
      i = 0;
      for( ; !(i >= 20); i = i + 1)
      {
        signed int j;
        signed int ii = ((20 + history_pos) - i) % 20;
        j = 0;
        for( ; !(j >= 3); j = j + 1)
          if(!(i >= history_divs[(signed long int)j]))
          {
            screen_line->recv[(signed long int)j] = screen_line->recv[(signed long int)j] + (long double)d->recv[(signed long int)ii];
            screen_line->sent[(signed long int)j] = screen_line->sent[(signed long int)j] + (long double)d->sent[(signed long int)ii];
          }

      }
    }
    while((_Bool)1);
    make_screen_list();
    calculate_totals();
  }

}

// assign_addr_pair
// file iftop.c line 192
void assign_addr_pair(struct anonymous_5 *ap, struct ip *iptr, signed int flip)
{
  unsigned short int src_port = (unsigned short int)0;
  unsigned short int dst_port = (unsigned short int)0;
  memset((void *)ap, 0, sizeof(struct anonymous_5) /*44ul*/ );
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 4)
  {
    ap->af = 2;
    if((signed int)iptr->ip_p == 6)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)iptr->ip_p == 17 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      struct tcphdr *assign_addr_pair__1__1__1__thdr = (struct tcphdr *)((void *)iptr + (signed long int)(((signed int)iptr->ip_vhl & 0x0f) * 4));
      src_port=ntohs(assign_addr_pair__1__1__1__thdr->th_sport);
      dst_port=ntohs(assign_addr_pair__1__1__1__thdr->th_dport);
    }

    if(flip == 0)
    {
      ap->_anon0.src = iptr->ip_src;
      ap->src_port = src_port;
      ap->_anon1.dst = iptr->ip_dst;
      ap->dst_port = dst_port;
    }

    else
    {
      ap->_anon0.src = iptr->ip_dst;
      ap->src_port = dst_port;
      ap->_anon1.dst = iptr->ip_src;
      ap->dst_port = src_port;
    }
  }

  else
    if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 6)
    {
      struct ip6_hdr *ip6tr = (struct ip6_hdr *)iptr;
      ap->af = 10;
      if((signed int)ip6tr->ip6_ctlun.ip6_un1.ip6_un1_nxt == 6)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (signed int)ip6tr->ip6_ctlun.ip6_un1.ip6_un1_nxt == 17 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
      {
        struct tcphdr *thdr = (struct tcphdr *)((void *)ip6tr + (signed long int)40);
        src_port=ntohs(thdr->th_sport);
        dst_port=ntohs(thdr->th_dport);
      }

      if(flip == 0)
      {
        memcpy((void *)&ap->_anon0.src6, (const void *)&ip6tr->ip6_src, sizeof(struct in6_addr) /*16ul*/ );
        ap->src_port = src_port;
        memcpy((void *)&ap->_anon1.dst6, (const void *)&ip6tr->ip6_dst, sizeof(struct in6_addr) /*16ul*/ );
        ap->dst_port = dst_port;
      }

      else
      {
        memcpy((void *)&ap->_anon0.src6, (const void *)&ip6tr->ip6_dst, sizeof(struct in6_addr) /*16ul*/ );
        ap->src_port = dst_port;
        memcpy((void *)&ap->_anon1.dst6, (const void *)&ip6tr->ip6_src, sizeof(struct in6_addr) /*16ul*/ );
        ap->dst_port = src_port;
      }
    }

}

// calculate_totals
// file ui_common.c line 176
void calculate_totals()
{
  signed int i = 0;
  for( ; !(i >= 20); i = i + 1)
  {
    signed int j;
    signed int ii = ((20 + history_pos) - i) % 20;
    j = 0;
    for( ; !(j >= 3); j = j + 1)
      if(!(i >= history_divs[(signed long int)j]))
      {
        totals.recv[(signed long int)j] = totals.recv[(signed long int)j] + (long double)history_totals.recv[(signed long int)ii];
        totals.sent[(signed long int)j] = totals.sent[(signed long int)j] + (long double)history_totals.sent[(signed long int)ii];
      }

    if(!((signed long int)peakrecv >= history_totals.recv[(signed long int)i]))
      peakrecv = (signed int)history_totals.recv[(signed long int)i];

    if(!((signed long int)peaksent >= history_totals.sent[(signed long int)i]))
      peaksent = (signed int)history_totals.sent[(signed long int)i];

    if(!((signed long int)peaktotal >= history_totals.recv[(signed long int)i] + history_totals.sent[(signed long int)i]))
      peaktotal = (signed int)(history_totals.recv[(signed long int)i] + history_totals.sent[(signed long int)i]);

  }
  i = 0;
  for( ; !(i >= 3); i = i + 1)
  {
    signed int t;
    t=history_length(i);
    totals.recv[(signed long int)i] = totals.recv[(signed long int)i] / (long double)t;
    totals.sent[(signed long int)i] = totals.sent[(signed long int)i] / (long double)t;
  }
}

// compare
// file addr_hash.c line 12
signed int compare(void *a, void *b)
{
  struct anonymous_5 *aa = (struct anonymous_5 *)a;
  struct anonymous_5 *bb = (struct anonymous_5 *)b;
  _Bool tmp_statement_expression_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_10;
  _Bool tmp_statement_expression_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  if(!(aa->af == bb->af))
    return 0;

  else
    if(aa->af == 10)
    {
      struct in6_addr *compare__1__1__1____a = (struct in6_addr *)&aa->_anon0.src6;
      struct in6_addr *compare__1__1__1____b = (struct in6_addr *)&bb->_anon0.src6;
      if(compare__1__1__1____a->__in6_u.__u6_addr32[0l] == compare__1__1__1____b->__in6_u.__u6_addr32[0l])
        tmp_if_expr_2 = compare__1__1__1____a->__in6_u.__u6_addr32[(signed long int)1] == compare__1__1__1____b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = compare__1__1__1____a->__in6_u.__u6_addr32[(signed long int)2] == compare__1__1__1____b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_4 = compare__1__1__1____a->__in6_u.__u6_addr32[(signed long int)3] == compare__1__1__1____b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_4 = (_Bool)0;
      tmp_statement_expression_1 = tmp_if_expr_4;
      if(tmp_statement_expression_1)
        tmp_if_expr_5 = aa->src_port == bb->src_port ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
      {
        struct in6_addr *__a = (struct in6_addr *)&aa->_anon1.dst6;
        struct in6_addr *__b = (struct in6_addr *)&bb->_anon1.dst6;
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
        tmp_if_expr_10 = tmp_statement_expression_6 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_10 = (_Bool)0;
      if(tmp_if_expr_10)
        tmp_if_expr_11 = aa->dst_port == bb->dst_port ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_11 = (_Bool)0;
      if(tmp_if_expr_11)
        tmp_if_expr_12 = aa->protocol == bb->protocol ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_12 = (_Bool)0;
      return (signed int)tmp_if_expr_12;
    }

    else
    {
      if(aa->_anon0.src.s_addr == bb->_anon0.src.s_addr)
        tmp_if_expr_13 = aa->src_port == bb->src_port ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_13 = (_Bool)0;
      if(tmp_if_expr_13)
        tmp_if_expr_14 = aa->_anon1.dst.s_addr == bb->_anon1.dst.s_addr ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_14 = (_Bool)0;
      if(tmp_if_expr_14)
        tmp_if_expr_15 = aa->dst_port == bb->dst_port ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_15 = (_Bool)0;
      if(tmp_if_expr_15)
        tmp_if_expr_16 = aa->protocol == bb->protocol ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_16 = (_Bool)0;
      return (signed int)tmp_if_expr_16;
    }
}

// config_get_bool
// file cfgfile.h line 19
signed int config_get_bool(const char *directive)
{
  char *s;
  s=config_get_string(directive);
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_1;
  _Bool tmp_if_expr_3;
  signed int return_value_strcmp_2;
  if(!(s == ((char *)NULL)))
  {
    return_value_strcmp_1=strcmp(s, "yes");
    if(return_value_strcmp_1 == 0)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value_strcmp_2=strcmp(s, "true");
      tmp_if_expr_3 = return_value_strcmp_2 == 0 ? (_Bool)1 : (_Bool)0;
    }
    tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  if(tmp_if_expr_4)
    return 1;

  else
    return 0;
}

// config_get_enum
// file cfgfile.h line 24
signed int config_get_enum(const char *directive, struct anonymous *enumeration, signed int *value)
{
  char *s;
  struct anonymous *t;
  s=config_get_string(directive);
  if(!(s == ((char *)NULL)))
  {
    t = enumeration;
    for( ; !(t->name == ((char *)NULL)); t = t + 1l)
    {
      signed int return_value_strcmp_1;
      return_value_strcmp_1=strcmp(s, t->name);
      if(return_value_strcmp_1 == 0)
      {
        *value = t->value;
        return 1;
      }

    }
    fprintf(stderr, "Invalid enumeration value \"%s\" for directive \"%s\"\n", s, directive);
  }

  return 0;
}

// config_get_float
// file cfgfile.c line 171
signed int config_get_float(const char *directive, float *value)
{
  struct _stringmap *S;
  char *s;
  char *t;
  if(value == ((float *)NULL))
    return -1;

  else
  {
    S=stringmap_find(config, directive);
    if(S == ((struct _stringmap *)NULL))
      return 0;

    else
    {
      s = (char *)S->d.v;
      if(*s == 0)
        return -1;

      else
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = 0;
        double return_value_strtod_2;
        return_value_strtod_2=strtod(s, &t);
        *value = (float)return_value_strtod_2;
        if(!(*t == 0))
          return -1;

        else
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          return *return_value___errno_location_3 == 34 ? -1 : 1;
        }
      }
    }
  }
}

// config_get_int
// file cfgfile.h line 20
signed int config_get_int(const char *directive, signed int *value)
{
  struct _stringmap *S;
  char *s;
  char *t;
  if(value == ((signed int *)NULL))
    return -1;

  else
  {
    S=stringmap_find(config, directive);
    if(S == ((struct _stringmap *)NULL))
      return 0;

    else
    {
      s = (char *)S->d.v;
      if(*s == 0)
        return -1;

      else
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = 0;
        signed long int return_value_strtol_2;
        return_value_strtol_2=strtol(s, &t, 10);
        *value = (signed int)return_value_strtol_2;
        if(!(*t == 0))
          return -1;

        else
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          return *return_value___errno_location_3 == 34 ? -1 : 1;
        }
      }
    }
  }
}

// config_get_string
// file cfgfile.h line 18
char * config_get_string(const char *directive)
{
  struct _stringmap *S;
  S=stringmap_find(config, directive);
  if(!(S == ((struct _stringmap *)NULL)))
    return (char *)S->d.v;

  else
    return (char *)(void *)0;
}

// config_init
// file cfgfile.h line 22
signed int config_init()
{
  config=stringmap_new();
  return (signed int)(config != (struct _stringmap *)(void *)0);
}

// config_set_string
// file cfgfile.h line 23
void config_set_string(const char *directive, const char *s)
{
  struct _stringmap *S;
  S=stringmap_find(config, directive);
  if(!(S == ((struct _stringmap *)NULL)))
  {
    xfree(S->d.v);
    char *return_value_xstrdup_1;
    return_value_xstrdup_1=xstrdup(s);
    S->d=item_ptr((void *)return_value_xstrdup_1);
  }

  else
  {
    char *return_value_xstrdup_2;
    return_value_xstrdup_2=xstrdup(s);
    union _item return_value_item_ptr_3;
    return_value_item_ptr_3=item_ptr((void *)return_value_xstrdup_2);
    stringmap_insert(config, directive, return_value_item_ptr_3);
  }
}

// copy_key
// file addr_hash.c line 75
void * copy_key(void *orig)
{
  struct anonymous_5 *copy;
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct anonymous_5) /*44ul*/ );
  copy = (struct anonymous_5 *)return_value_xmalloc_1;
  *copy = *((struct anonymous_5 *)orig);
  return (void *)copy;
}

// delete_key
// file addr_hash.c line 82
void delete_key(void *key)
{
  free(key);
}

// do_resolve
// file resolver.c line 69
char * do_resolve(struct addr_storage *addr)
{
  struct sockaddr_in sin;
  struct sockaddr_in6 sin6;
  char buf[1025l];
  signed int ret;
  switch(addr->af)
  {
    case 2:
    {
      sin.sin_family = (unsigned short int)addr->af;
      sin.sin_port = (unsigned short int)0;
      memcpy((void *)&sin.sin_addr, (const void *)&addr->addr.addr4, (unsigned long int)addr->len);
      ret=getnameinfo((struct sockaddr *)&sin, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ , buf, (unsigned int)sizeof(char [1025l]) /*1025ul*/ , (char *)(void *)0, (unsigned int)0, 8);
      break;
    }
    case 10:
    {
      sin6.sin6_family = (unsigned short int)addr->af;
      sin6.sin6_port = (unsigned short int)0;
      memcpy((void *)&sin6.sin6_addr, (const void *)&addr->addr.addr6, (unsigned long int)addr->len);
      ret=getnameinfo((struct sockaddr *)&sin6, (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ , buf, (unsigned int)sizeof(char [1025l]) /*1025ul*/ , (char *)(void *)0, (unsigned int)0, 8);
      break;
    }
    default:
      return (char *)(void *)0;
  }
  char *return_value_xstrdup_1;
  if(ret == 0)
  {
    return_value_xstrdup_1=xstrdup(buf);
    return return_value_xstrdup_1;
  }

  else
    return (char *)(void *)0;
}

// draw_bar
// file ui.c line 204
void draw_bar(float n, signed int y)
{
  signed int L;
  signed int return_value_wmove_1;
  return_value_wmove_1=wmove(stdscr, y, 0);
  if(return_value_wmove_1 == -1)
    -1;

  else
    wchgat(stdscr, -1, 1UL - 1UL, (signed short int)0, (void *)0);
  L=get_bar_length((const signed int)((float)8 * n));
  signed int return_value_wmove_2;
  if(L >= 1)
  {
    return_value_wmove_2=wmove(stdscr, y, 0);
    if(return_value_wmove_2 == -1)
      -1;

    else
      wchgat(stdscr, L + 1, (unsigned long int)1UL << 10 + 8, (signed short int)0, (void *)0);
  }

}

// draw_bar_scale
// file ui.c line 129
static void draw_bar_scale(signed int *y)
{
  float i;
  float max;
  float interval;
  max=get_max_bandwidth();
  signed int return_value_get_bar_interval_1;
  return_value_get_bar_interval_1=get_bar_interval(max);
  interval = (float)return_value_get_bar_interval_1;
  unsigned long int return_value_strlen_5;
  if(!(options.showbars == 0))
  {
    float stop;
    wmove(stdscr, *y, 0);
    wclrtoeol(stdscr);
    signed int return_value_wmove_2;
    return_value_wmove_2=wmove(stdscr, *y + 1, 0);
    if(return_value_wmove_2 == -1)
      -1;

    else
      whline(stdscr, (unsigned long int)0, COLS);
    if(!(options.log_scale == 0))
    {
      i = (float)1.25;
      stop = max / (float)8;
    }

    else
    {
      i = max / (float)(5 * 8);
      stop = max / (float)8;
    }
    while(i <= stop)
    {
      char s[40l];
      char *p;
      signed int x;
      readable_size(i, s, (signed int)sizeof(char [40l]) /*40ul*/ , options.log_scale != 0 ? 1000 : 1024, options.bandwidth_in_bytes);
      unsigned long int return_value_strspn_3;
      return_value_strspn_3=strspn(s, " ");
      p = s + (signed long int)return_value_strspn_3;
      x=get_bar_length((const signed int)(i * (float)8));
      signed int return_value_wmove_4;
      return_value_wmove_4=wmove(stdscr, *y + 1, x);
      if(return_value_wmove_4 == -1)
        -1;

      else
        waddch(stdscr, acs_map[(signed long int)(unsigned char)118]);
      unsigned long int return_value_strlen_6;
      return_value_strlen_6=strlen(p);
      if(return_value_strlen_6 + (unsigned long int)x >= (unsigned long int)COLS)
      {
        return_value_strlen_5=strlen(p);
        x = (signed int)((unsigned long int)COLS - return_value_strlen_5);
      }

      signed int return_value_wmove_7;
      return_value_wmove_7=wmove(stdscr, *y, x);
      if(return_value_wmove_7 == -1)
        -1;

      else
        waddnstr(stdscr, p, -1);
      if(!(options.log_scale == 0))
        i = i * interval;

      else
        i = i + max / (float)(5 * 8);
    }
    signed int return_value_wmove_8;
    return_value_wmove_8=wmove(stdscr, *y + 1, 0);
    if(return_value_wmove_8 == -1)
      -1;

    else
      waddch(stdscr, acs_map[(signed long int)(unsigned char)109]);
    *y = *y + 2;
  }

  else
  {
    signed int return_value_wmove_9;
    return_value_wmove_9=wmove(stdscr, *y, 0);
    if(return_value_wmove_9 == -1)
      -1;

    else
      whline(stdscr, (unsigned long int)0, COLS);
    *y = *y + 1;
  }
}

// draw_line_total
// file ui.c line 180
void draw_line_total(float sent, float recv, signed int y, signed int x, enum anonymous_8 linedisplay, signed int bytes)
{
  char buf[10l];
  float n = (float)0;
  switch((signed int)linedisplay)
  {
    case OPTION_LINEDISPLAY_TWO_LINE:
    {
      draw_line_total(sent, recv, y, x, (enum anonymous_8)OPTION_LINEDISPLAY_ONE_LINE_SENT, bytes);
      draw_line_total(sent, recv, y + 1, x, (enum anonymous_8)OPTION_LINEDISPLAY_ONE_LINE_RECV, bytes);
      break;
    }
    case OPTION_LINEDISPLAY_ONE_LINE_SENT:
    {
      n = sent;
      break;
    }
    case OPTION_LINEDISPLAY_ONE_LINE_RECV:
    {
      n = recv;
      break;
    }
    case OPTION_LINEDISPLAY_ONE_LINE_BOTH:
      n = recv + sent;
  }
  if(!((signed int)linedisplay == OPTION_LINEDISPLAY_TWO_LINE))
  {
    readable_size(n, buf, 10, 1024, bytes);
    signed int return_value_wmove_1;
    return_value_wmove_1=wmove(stdscr, y, x);
    if(return_value_wmove_1 == -1)
      -1;

    else
      waddnstr(stdscr, buf, -1);
  }

}

// draw_line_totals
// file ui.c line 212
void draw_line_totals(signed int y, struct host_pair_line_tag *line, enum anonymous_8 linedisplay)
{
  signed int j;
  signed int x = COLS - 8 * 3;
  j = 0;
  for( ; !(j >= 3); j = j + 1)
  {
    draw_line_total((float)line->sent[(signed long int)j], (float)line->recv[(signed long int)j], y, x, linedisplay, options.bandwidth_in_bytes);
    x = x + 8;
  }
  if(!(options.showbars == 0))
    switch((signed int)linedisplay)
    {
      case OPTION_LINEDISPLAY_TWO_LINE:
      {
        draw_bar((float)line->sent[(signed long int)options.bar_interval], y);
        draw_bar((float)line->recv[(signed long int)options.bar_interval], y + 1);
        break;
      }
      case OPTION_LINEDISPLAY_ONE_LINE_SENT:
      {
        draw_bar((float)line->sent[(signed long int)options.bar_interval], y);
        break;
      }
      case OPTION_LINEDISPLAY_ONE_LINE_RECV:
      {
        draw_bar((float)line->recv[(signed long int)options.bar_interval], y);
        break;
      }
      case OPTION_LINEDISPLAY_ONE_LINE_BOTH:
        draw_bar((float)(line->recv[(signed long int)options.bar_interval] + line->sent[(signed long int)options.bar_interval]), y);
    }

}

// draw_totals
// file ui.c line 240
void draw_totals(struct host_pair_line_tag *totals)
{
  signed int y = LINES - 4;
  signed int j;
  char buf[10l];
  signed int x = COLS - 8 * 3;
  y = y + 1;
  draw_line_totals(y, totals, (enum anonymous_8)OPTION_LINEDISPLAY_TWO_LINE);
  y = y + 2;
  j = 0;
  for( ; !(j >= 3); j = j + 1)
  {
    readable_size((float)(totals->sent[(signed long int)j] + totals->recv[(signed long int)j]), buf, 10, 1024, options.bandwidth_in_bytes);
    signed int return_value_wmove_1;
    return_value_wmove_1=wmove(stdscr, y, x);
    if(return_value_wmove_1 == -1)
      -1;

    else
      waddnstr(stdscr, buf, -1);
    x = x + 8;
  }
}

// edline
// file edline.c line 22
char * edline(signed int linenum, const char *prompt, const char *initial)
{
  signed int xstart;
  signed int slen;
  signed int off = 0;
  signed int pos;
  signed int i;
  signed int c;
  char *str;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(prompt);
  xstart = (signed int)(return_value_strlen_1 + (unsigned long int)2);
  if(!(initial == ((const char *)NULL)))
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(initial);
    slen = (signed int)(return_value_strlen_2 * (unsigned long int)2 + (unsigned long int)1);
    void *return_value_xmalloc_3;
    return_value_xmalloc_3=xmalloc((unsigned long int)slen);
    str = (char *)return_value_xmalloc_3;
    strcpy(str, initial);
  }

  else
  {
    slen = 256;
    void *return_value_xmalloc_4;
    return_value_xmalloc_4=xmalloc((unsigned long int)slen);
    str = (char *)return_value_xmalloc_4;
    *str = (char)0;
  }
  unsigned long int return_value_strlen_5;
  return_value_strlen_5=strlen(str);
  pos = (signed int)return_value_strlen_5;
  unsigned long int return_value_strlen_7;
  unsigned long int return_value_strlen_8;
  unsigned long int return_value_strlen_10;
  unsigned long int return_value_strlen_9;
  const unsigned short int **return_value___ctype_b_loc_12;
  const unsigned short int **return_value___ctype_b_loc_13;
  void *return_value_xrealloc_15;
  signed int tmp_post_18;
  do
  {
    c=wgetch(stdscr);
    if(!(c == 21) && !(c == 0510))
    {
      if(c == 0404)
        goto __CPROVER_DUMP_L5;

      if(c == 0405)
        goto __CPROVER_DUMP_L7;

      if(c == 1 || c == 0406)
        goto __CPROVER_DUMP_L9;

      if(c == 5 || c == 0550)
        goto __CPROVER_DUMP_L10;

      if(c == 0512)
        goto __CPROVER_DUMP_L11;

      if(c == 0407)
        goto __CPROVER_DUMP_L14;

      if(c == 23)
        goto __CPROVER_DUMP_L17;

      if(c == -1)
        goto __CPROVER_DUMP_L23;

    }

    else
    {
      *str = (char)0;
      pos = 0;
      goto __CPROVER_DUMP_L28;

    __CPROVER_DUMP_L5:
      ;
      pos = pos - 1;
      if(!(pos >= 0))
      {
        beep();
        pos = 0;
      }

      goto __CPROVER_DUMP_L28;

    __CPROVER_DUMP_L7:
      ;
      pos = pos + 1;
      return_value_strlen_7=strlen(str);
      if(!(return_value_strlen_7 >= (unsigned long int)pos))
      {
        beep();
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen(str);
        pos = (signed int)return_value_strlen_6;
      }

      goto __CPROVER_DUMP_L28;

    __CPROVER_DUMP_L9:
      ;
      pos = 0;
      goto __CPROVER_DUMP_L28;

    __CPROVER_DUMP_L10:
      ;
      return_value_strlen_8=strlen(str);
      pos = (signed int)return_value_strlen_8;
      goto __CPROVER_DUMP_L28;

    __CPROVER_DUMP_L11:
      ;
      return_value_strlen_10=strlen(str);
      if((unsigned long int)pos == return_value_strlen_10)
        beep();

      else
      {
        return_value_strlen_9=strlen(str + (signed long int)pos + (signed long int)1);
        memmove((void *)(str + (signed long int)pos), (const void *)(str + (signed long int)pos + (signed long int)1), return_value_strlen_9 + (unsigned long int)1);
      }
      goto __CPROVER_DUMP_L28;

    __CPROVER_DUMP_L14:
      ;
      if(pos == 0)
        beep();

      else
      {
        unsigned long int return_value_strlen_11;
        return_value_strlen_11=strlen(str + (signed long int)pos);
        memmove((void *)((str + (signed long int)pos) - (signed long int)1), (const void *)(str + (signed long int)pos), return_value_strlen_11 + (unsigned long int)1);
        pos = pos - 1;
      }
      goto __CPROVER_DUMP_L28;

    __CPROVER_DUMP_L17:
      ;
      i = pos;
      for( ; i >= 1; i = i - 1)
      {
        return_value___ctype_b_loc_12=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc_12)[(signed long int)(signed int)str[(signed long int)i]]) == 0)
          break;

      }
      for( ; i >= 1; i = i - 1)
      {
        return_value___ctype_b_loc_13=__ctype_b_loc();
        if(!((8192 & (signed int)(*return_value___ctype_b_loc_13)[(signed long int)(signed int)str[(signed long int)i]]) == 0))
          break;

      }
      if(!(i == pos))
      {
        unsigned long int return_value_strlen_14;
        return_value_strlen_14=strlen(str + (signed long int)pos);
        memmove((void *)(str + (signed long int)i), (const void *)(str + (signed long int)pos), return_value_strlen_14 + (unsigned long int)1);
        pos = i;
      }

      goto __CPROVER_DUMP_L28;

    __CPROVER_DUMP_L23:
      ;
      goto __CPROVER_DUMP_L28;
    }
    const unsigned short int **return_value___ctype_b_loc_19;
    return_value___ctype_b_loc_19=__ctype_b_loc();
    if(!((16384 & (signed int)(*return_value___ctype_b_loc_19)[(signed long int)c]) == 0) && !(c == 9))
    {
      unsigned long int return_value_strlen_16;
      return_value_strlen_16=strlen(str);
      if(return_value_strlen_16 == (unsigned long int)(slen + -1))
      {
        slen = slen * 2;
        return_value_xrealloc_15=xrealloc((void *)str, (unsigned long int)slen);
        str = (char *)return_value_xrealloc_15;
      }

      unsigned long int return_value_strlen_17;
      return_value_strlen_17=strlen(str + (signed long int)pos);
      memmove((void *)(str + (signed long int)pos + (signed long int)1), (const void *)(str + (signed long int)pos), return_value_strlen_17 + (unsigned long int)1);
      tmp_post_18 = pos;
      pos = pos + 1;
      str[(signed long int)tmp_post_18] = (char)c;
    }

    else
      beep();

  __CPROVER_DUMP_L28:
    ;
    off = 0;
    if(!(COLS + -xstart + -1 >= pos))
      off = pos - ((COLS - xstart) - 1);

    signed int return_value_wmove_20;
    return_value_wmove_20=wmove(stdscr, linenum, 0);
    if(return_value_wmove_20 == -1)
      -1;

    else
      waddnstr(stdscr, prompt, -1);
    waddnstr(stdscr, "> ", -1);
    unsigned long int return_value_strlen_21;
    return_value_strlen_21=strlen(str + (signed long int)off);
    signed int return_value_min_22;
    return_value_min_22=min((const signed int)return_value_strlen_21, (COLS - xstart) - 1);
    waddnstr(stdscr, str + (signed long int)off, return_value_min_22);
    wclrtoeol(stdscr);
    wmove(stdscr, linenum, (xstart + pos) - off);
    wrefresh(stdscr);
  }
  while(!(c == 7) && !(c == 13) && !(c == 27) && !(c == 0527));
  if(c == 13 || c == 0527)
    return str;

  else
  {
    xfree((void *)str);
    return (char *)(void *)0;
  }
}

// finish
// file iftop.c line 82
static void finish(signed int sig)
{
  foad = sig;
}

// get_addrs_ioctl
// file addrs_ioctl.h line 10
signed int get_addrs_ioctl(char *interface, char *if_hw_addr, struct in_addr *if_ip_addr, struct in6_addr *if_ip6_addr)
{
  signed int s;
  struct ifreq ifr = { .ifr_ifrn={ .ifrn_name={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }, .ifr_ifru={ .ifru_map={ .mem_start=0ul, .mem_end=0ul, .base_addr=0, .irq=0,
    .dma=0, .port=0 } } };
  signed int got_hw_addr = 0;
  signed int got_ip_addr = 0;
  signed int got_ip6_addr = 0;
  struct ifaddrs *ifa;
  struct ifaddrs *ifas;
  s=socket(2, 2, 0);
  _Bool tmp_statement_expression_3;
  _Bool tmp_if_expr_9;
  _Bool tmp_statement_expression_6;
  if(s == -1)
  {
    perror("socket");
    return -1;
  }

  else
  {
    fprintf(stderr, "interface: %s\n", interface);
    memset((void *)if_hw_addr, 0, (unsigned long int)6);
    strncpy(ifr.ifr_ifrn.ifrn_name, interface, (unsigned long int)16);
    signed int return_value_ioctl_1;
    return_value_ioctl_1=ioctl(s, (unsigned long int)0x8927, &ifr);
    if(!(return_value_ioctl_1 >= 0))
    {
      fprintf(stderr, "Error getting hardware address for interface: %s\n", interface);
      perror("ioctl(SIOCGIFHWADDR)");
    }

    else
    {
      memcpy((void *)if_hw_addr, (const void *)ifr.ifr_ifru.ifru_hwaddr.sa_data, (unsigned long int)6);
      got_hw_addr = 1;
    }
    signed int return_value_getifaddrs_10;
    return_value_getifaddrs_10=getifaddrs(&ifas);
    if(return_value_getifaddrs_10 == -1)
    {
      fprintf(stderr, "Unable to get IP address for interface: %s\n", interface);
      perror("getifaddrs()");
    }

    else
    {
      ifa = ifas;
      for( ; !(ifa == ((struct ifaddrs *)NULL)); ifa = ifa->ifa_next)
      {
        if(!(got_ip6_addr == 0) && !(got_ip_addr == 0))
          break;

        signed int return_value_strcmp_2;
        return_value_strcmp_2=strcmp(ifa->ifa_name, interface);
        if(return_value_strcmp_2 == 0)
        {
          if(!(ifa->ifa_addr == ((struct sockaddr *)NULL)))
          {
            if(!((signed int)ifa->ifa_addr->sa_family == 2))
            {
              if((signed int)ifa->ifa_addr->sa_family == 10)
                goto __CPROVER_DUMP_L7;

            }

            else
            {

            __CPROVER_DUMP_L7:
              ;
              if((signed int)ifa->ifa_addr->sa_family == 2)
              {
                if(!(got_ip_addr == 0))
                  goto __CPROVER_DUMP_L8;

                got_ip_addr = 2;
                memcpy((void *)if_ip_addr, (const void *)&((struct sockaddr_in *)ifa->ifa_addr)->sin_addr, sizeof(struct in_addr) /*4ul*/ );
              }

              else
              {

              __CPROVER_DUMP_L8:
                ;
                struct sockaddr_in6 *sa6 = (struct sockaddr_in6 *)ifa->ifa_addr;
                struct in6_addr *__a = (struct in6_addr *)&sa6->sin6_addr;
                unsigned int return_value_htonl_4;
                return_value_htonl_4=htonl(0xffc00000);
                unsigned int return_value_htonl_5;
                return_value_htonl_5=htonl(0xfe800000);
                tmp_statement_expression_3 = (__a->__in6_u.__u6_addr32[(signed long int)0] & return_value_htonl_4) == return_value_htonl_5;
                if(tmp_statement_expression_3)
                  tmp_if_expr_9 = (_Bool)1;

                else
                {
                  struct in6_addr *get_addrs_ioctl__1__5__1__1__3____a = (struct in6_addr *)&sa6->sin6_addr;
                  unsigned int return_value_htonl_7;
                  return_value_htonl_7=htonl(0xffc00000);
                  unsigned int return_value_htonl_8;
                  return_value_htonl_8=htonl(0xfec00000);
                  tmp_statement_expression_6 = (get_addrs_ioctl__1__5__1__1__3____a->__in6_u.__u6_addr32[(signed long int)0] & return_value_htonl_7) == return_value_htonl_8;
                  tmp_if_expr_9 = tmp_statement_expression_6 ? (_Bool)1 : (_Bool)0;
                }
                if(!tmp_if_expr_9)
                {
                  memcpy((void *)if_ip6_addr, (const void *)&sa6->sin6_addr, sizeof(struct in6_addr) /*16ul*/ );
                  got_ip6_addr = 4;
                }

              }
            }
          }

        }

      }
      freeifaddrs(ifas);
    }
    close(s);
    return got_hw_addr + got_ip_addr + got_ip6_addr;
  }
}

// get_bar_interval
// file ui.c line 88
static signed int get_bar_interval(float bandwidth)
{
  signed int i = 10;
  if(bandwidth > 1.000000e+8f)
    i = 100;

  return i;
}

// get_bar_length
// file ui.c line 108
static signed int get_bar_length(const signed int rate)
{
  float l;
  signed int tmp_post_1;
  if(!(rate >= 1))
    return 0;

  else
  {
    if(!(scale[(signed long int)rateidx].max >= rate))
    {
      wantbiggerrate = 1;
      if(rateidx_init == 0)
      {
        do
        {
          tmp_post_1 = rateidx_init;
          rateidx_init = rateidx_init + 1;
          if(scale[(signed long int)tmp_post_1].max >= rate)
            break;

        }
        while((_Bool)1);
        rateidx = rateidx_init;
      }

    }

    if(!(options.log_scale == 0))
    {
      double return_value_log_2;
      return_value_log_2=log((double)rate);
      float return_value_get_max_bandwidth_3;
      return_value_get_max_bandwidth_3=get_max_bandwidth();
      double return_value_log_4;
      return_value_log_4=log((double)return_value_get_max_bandwidth_3);
      l = (float)(return_value_log_2 / return_value_log_4);
    }

    else
    {
      float return_value_get_max_bandwidth_5;
      return_value_get_max_bandwidth_5=get_max_bandwidth();
      l = (float)rate / return_value_get_max_bandwidth_5;
    }
    return (signed int)(l * (float)COLS);
  }
}

// get_first_interface
// file options.c line 88
static char * get_first_interface(void)
{
  struct if_nameindex *nameindex;
  struct ifreq ifr;
  char *i = (char *)(void *)0;
  signed int j = 0;
  signed int s;
  nameindex=if_nameindex();
  signed int return_value_is_bad_interface_name_3;
  _Bool tmp_if_expr_2;
  signed int return_value_ioctl_1;
  if(nameindex == ((struct if_nameindex *)NULL))
    return (char *)(void *)0;

  else
  {
    s=socket(2, 2, 0);
    while(!((nameindex + (signed long int)j)->if_index == 0u))
    {
      signed int return_value_strcmp_4;
      return_value_strcmp_4=strcmp((nameindex + (signed long int)j)->if_name, "lo");
      if(!(return_value_strcmp_4 == 0))
      {
        return_value_is_bad_interface_name_3=is_bad_interface_name((nameindex + (signed long int)j)->if_name);
        if(return_value_is_bad_interface_name_3 == 0)
        {
          strncpy(ifr.ifr_ifrn.ifrn_name, (nameindex + (signed long int)j)->if_name, sizeof(char [16l]) /*16ul*/ );
          if(s == -1)
            tmp_if_expr_2 = (_Bool)1;

          else
          {
            return_value_ioctl_1=ioctl(s, (unsigned long int)0x8913, &ifr);
            tmp_if_expr_2 = return_value_ioctl_1 == -1 ? (_Bool)1 : (_Bool)0;
          }
          if(!((1 & (signed int)ifr.ifr_ifru.ifru_flags) == 0) || tmp_if_expr_2)
          {
            i=xstrdup((nameindex + (signed long int)j)->if_name);
            break;
          }

        }

      }

      j = j + 1;
    }
    if_freenameindex(nameindex);
    return i;
  }
}

// get_max_bandwidth
// file ui.c line 96
static float get_max_bandwidth()
{
  float max;
  if(options.max_bandwidth >= 1l)
    max = (float)options.max_bandwidth;

  else
    max = (float)scale[(signed long int)rateidx].max;
  return max;
}

// gprof_pthread_create
// file threadprof.c line 27
signed int gprof_pthread_create(unsigned long int *thread, union pthread_attr_t *attr, void * (*start_routine)(void *), void *arg)
{
  struct wrapper_s wrapper_data;
  signed int i_return;
  wrapper_data.start_routine = start_routine;
  wrapper_data.arg = arg;
  getitimer(2, &wrapper_data.itimer);
  pthread_cond_init(&wrapper_data.wait, (const union anonymous_18 *)(void *)0);
  pthread_mutex_init(&wrapper_data.lock, (const union anonymous_18 *)(void *)0);
  pthread_mutex_lock(&wrapper_data.lock);
  i_return=pthread_create(thread, attr, wrapper_routine, (void *)&wrapper_data);
  if(i_return == 0)
    pthread_cond_wait(&wrapper_data.wait, &wrapper_data.lock);

  pthread_mutex_unlock(&wrapper_data.lock);
  pthread_mutex_destroy(&wrapper_data.lock);
  pthread_cond_destroy(&wrapper_data.wait);
  return i_return;
}

// handle_cooked_packet
// file iftop.c line 574
static void handle_cooked_packet(unsigned char *args, struct pcap_pkthdr *thdr, const unsigned char *packet)
{
  struct sll_header *sptr;
  signed int dir = -1;
  sptr = (struct sll_header *)packet;
  unsigned short int return_value_ntohs_1;
  return_value_ntohs_1=ntohs(sptr->sll_pkttype);
  switch((signed int)return_value_ntohs_1)
  {
    case 0:
    {
      dir = 0;
      break;
    }
    case 4:
      dir = 1;
  }
  handle_ip_packet((struct ip *)(packet + (signed long int)16), dir);
}

// handle_eth_packet
// file iftop.c line 595
static void handle_eth_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet)
{
  struct ether_header *eptr;
  signed int ether_type;
  const unsigned char *payload;
  eptr = (struct ether_header *)packet;
  unsigned short int return_value_ntohs_1;
  return_value_ntohs_1=ntohs(eptr->ether_type);
  ether_type = (signed int)return_value_ntohs_1;
  payload = packet + (signed long int)sizeof(struct ether_header) /*14ul*/ ;
  if(ether_type == 0x8100)
  {
    struct vlan_8021q_header *vptr = (struct vlan_8021q_header *)payload;
    unsigned short int return_value_ntohs_2;
    return_value_ntohs_2=ntohs(vptr->ether_type);
    ether_type = (signed int)return_value_ntohs_2;
    payload = payload + (signed long int)sizeof(struct vlan_8021q_header) /*4ul*/ ;
  }

  _Bool tmp_if_expr_7;
  signed int return_value_memcmp_6;
  _Bool tmp_if_expr_5;
  signed int return_value_memcmp_4;
  signed int return_value_memcmp_3;
  if(ether_type == 0x0800 || ether_type == 0x86dd)
  {
    struct ip *iptr;
    signed int dir = -1;
    if(!(have_hw_addr == 0))
    {
      return_value_memcmp_6=memcmp((const void *)eptr->ether_shost, (const void *)if_hw_addr, (unsigned long int)6);
      tmp_if_expr_7 = return_value_memcmp_6 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
      dir = 1;

    else
    {
      if(!(have_hw_addr == 0))
      {
        return_value_memcmp_4=memcmp((const void *)eptr->ether_dhost, (const void *)if_hw_addr, (unsigned long int)6);
        tmp_if_expr_5 = return_value_memcmp_4 == 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
        dir = 0;

      else
      {
        return_value_memcmp_3=memcmp((const void *)"ÿÿÿÿÿÿ", (const void *)eptr->ether_dhost, (unsigned long int)6);
        if(return_value_memcmp_3 == 0)
          dir = 0;

      }
    }
    iptr = (struct ip *)payload;
    handle_ip_packet(iptr, dir);
  }

}

// handle_ip_packet
// file iftop.c line 252
static void handle_ip_packet(struct ip *iptr, signed int hw_dir)
{
  signed int direction = 0;
  struct anonymous_7 *ht;
  /* tag-#anon#lUN[l*{l*{SYM#tag-#anon#ST[ARR20{S64}_S64_'recv'||ARR20{S64}_S64_'sent'||F128'total_sent'||F128'total_recv'||S32'last_write'||U96'_pad0'|]#}_SYM#tag-#anon#ST[ARR20{S64}_S64_'recv'||ARR20{S64}_S64_'sent'||F128'total_sent'||F128'total_recv'||S32'last_write'||U96'_pad0'|]#_}_l*{SYM#tag-#anon#ST[ARR20{S64}_S64_'recv'||ARR20{S64}_S64_'sent'||F128'total_sent'||F128'total_recv'||S32'last_write'||U96'_pad0'|]#}_SYM#tag-#anon#ST[ARR20{S64}_S64_'recv'||ARR20{S64}_S64_'sent'||F128'total_sent'||F128'total_recv'||S32'last_write'||U96'_pad0'|]#__'ht_pp'||l*{l*{lV}_lV_}_l*{lV}_lV__'void_pp'|] */
union anonymous_28
{
  // ht_pp
  struct anonymous_7 **ht_pp;
  // void_pp
  void **void_pp;
};

/* */
  ;
  union anonymous_28 u_ht = { .ht_pp=&ht };
  struct anonymous_5 ap;
  unsigned int len = (unsigned int)0;
  struct in6_addr scribdst;
  struct in6_addr scribsrc;
  struct ip6_hdr *ip6tr = (struct ip6_hdr *)iptr;
  memset((void *)&ap, 0, sizeof(struct anonymous_5) /*44ul*/ );
  tick(0);
  _Bool tmp_if_expr_12;
  if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 4 && options.netfilter == 0)
    tmp_if_expr_12 = (_Bool)1;

  else
    tmp_if_expr_12 = (((signed int)iptr->ip_vhl & 0xf0) >> 4 == 6 ? (options.netfilter6 == 0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_11;
  signed int return_value_ip_addr_match_10;
  _Bool tmp_if_expr_9;
  signed int return_value_ip_addr_match_8;
  _Bool tmp_if_expr_7;
  signed int return_value_ip6_addr_match_6;
  _Bool tmp_if_expr_5;
  signed int return_value_ip6_addr_match_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(tmp_if_expr_12)
  {
    if(hw_dir == 1)
    {
      assign_addr_pair(&ap, iptr, 0);
      direction = 1;
    }

    else
      if(hw_dir == 0)
      {
        assign_addr_pair(&ap, iptr, 1);
        direction = 0;
      }

      else
      {
        if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 4 && !(have_ip_addr == 0))
        {
          return_value_ip_addr_match_10=ip_addr_match(iptr->ip_src);
          tmp_if_expr_11 = return_value_ip_addr_match_10 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_11 = (_Bool)0;
        if(tmp_if_expr_11)
        {
          assign_addr_pair(&ap, iptr, 0);
          direction = 1;
        }

        else
        {
          if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 4 && !(have_ip_addr == 0))
          {
            return_value_ip_addr_match_8=ip_addr_match(iptr->ip_dst);
            tmp_if_expr_9 = return_value_ip_addr_match_8 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_9 = (_Bool)0;
          if(tmp_if_expr_9)
          {
            assign_addr_pair(&ap, iptr, 1);
            direction = 0;
          }

          else
          {
            if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 6 && !(have_ip6_addr == 0))
            {
              return_value_ip6_addr_match_6=ip6_addr_match(&ip6tr->ip6_src);
              tmp_if_expr_7 = return_value_ip6_addr_match_6 != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_7 = (_Bool)0;
            if(tmp_if_expr_7)
            {
              assign_addr_pair(&ap, iptr, 0);
              direction = 1;
            }

            else
            {
              if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 6 && !(have_ip6_addr == 0))
              {
                return_value_ip6_addr_match_4=ip6_addr_match(&ip6tr->ip6_dst);
                tmp_if_expr_5 = return_value_ip6_addr_match_4 != 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_5 = (_Bool)0;
              if(tmp_if_expr_5)
              {
                assign_addr_pair(&ap, iptr, 1);
                direction = 0;
              }

              else
              {
                if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 4)
                  tmp_if_expr_3 = ((unsigned int)iptr->ip_dst.s_addr & 0xf0000000) == 0xe0000000 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_3 = (_Bool)0;
                if(tmp_if_expr_3)
                {
                  assign_addr_pair(&ap, iptr, 1);
                  direction = 0;
                }

                else
                {
                  if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 6)
                    tmp_if_expr_2 = (signed int)((const unsigned char *)&ip6tr->ip6_dst)[(signed long int)0] == 0xff ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr_2 = (_Bool)0;
                  if(tmp_if_expr_2)
                  {
                    assign_addr_pair(&ap, iptr, 1);
                    direction = 0;
                  }

                  else
                    if(!(options.promiscuous_but_choosy == 0))
                      goto __CPROVER_DUMP_L93;

                    else
                    {
                      if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 4)
                        tmp_if_expr_1 = iptr->ip_src.s_addr < iptr->ip_dst.s_addr ? (_Bool)1 : (_Bool)0;

                      else
                        tmp_if_expr_1 = (_Bool)0;
                      if(tmp_if_expr_1)
                      {
                        assign_addr_pair(&ap, iptr, 1);
                        direction = 0;
                      }

                      else
                        if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 4)
                        {
                          assign_addr_pair(&ap, iptr, 0);
                          direction = 0;
                        }

                        else
                          goto __CPROVER_DUMP_L93;
                    }
                }
              }
            }
          }
        }
      }
  }

  _Bool tmp_if_expr_18;
  signed int return_value_in_filter_net_17;
  signed int return_value_in_filter_net_13;
  _Bool tmp_if_expr_15;
  signed int return_value_in_filter_net_14;
  if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 4)
  {
    if(!(options.netfilter == 0))
    {
      signed int return_value_in_filter_net_16;
      return_value_in_filter_net_16=in_filter_net(iptr->ip_src);
      if(!(return_value_in_filter_net_16 == 0))
      {
        return_value_in_filter_net_17=in_filter_net(iptr->ip_dst);
        tmp_if_expr_18 = !(return_value_in_filter_net_17 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_18 = (_Bool)0;
      if(tmp_if_expr_18)
      {
        assign_addr_pair(&ap, iptr, 0);
        direction = 1;
      }

      else
      {
        return_value_in_filter_net_13=in_filter_net(iptr->ip_dst);
        if(!(return_value_in_filter_net_13 == 0))
        {
          return_value_in_filter_net_14=in_filter_net(iptr->ip_src);
          tmp_if_expr_15 = !(return_value_in_filter_net_14 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_15 = (_Bool)0;
        if(tmp_if_expr_15)
        {
          assign_addr_pair(&ap, iptr, 1);
          direction = 0;
        }

        else
          goto __CPROVER_DUMP_L93;
      }
    }

  }

  _Bool tmp_statement_expression_28;
  _Bool tmp_if_expr_29;
  _Bool tmp_if_expr_30;
  _Bool tmp_if_expr_31;
  _Bool tmp_if_expr_36;
  _Bool tmp_statement_expression_32;
  _Bool tmp_if_expr_33;
  _Bool tmp_if_expr_34;
  _Bool tmp_if_expr_35;
  _Bool tmp_statement_expression_19;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_21;
  _Bool tmp_if_expr_22;
  _Bool tmp_if_expr_27;
  _Bool tmp_statement_expression_23;
  _Bool tmp_if_expr_24;
  _Bool tmp_if_expr_25;
  _Bool tmp_if_expr_26;
  if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 6)
  {
    if(!(options.netfilter6 == 0))
    {
      signed int j = 0;
      for( ; !(j >= 16); j = j + 1)
      {
        scribdst.__in6_u.__u6_addr8[(signed long int)j] = (unsigned char)((signed int)ip6tr->ip6_dst.__in6_u.__u6_addr8[(signed long int)j] & (signed int)options.netfilter6mask.__in6_u.__u6_addr8[(signed long int)j]);
        scribsrc.__in6_u.__u6_addr8[(signed long int)j] = (unsigned char)((signed int)ip6tr->ip6_src.__in6_u.__u6_addr8[(signed long int)j] & (signed int)options.netfilter6mask.__in6_u.__u6_addr8[(signed long int)j]);
      }
      struct in6_addr *handle_ip_packet__1__3__2____a = (struct in6_addr *)&scribsrc;
      struct in6_addr *handle_ip_packet__1__3__2____b = (struct in6_addr *)&options.netfilter6net;
      if(handle_ip_packet__1__3__2____a->__in6_u.__u6_addr32[0l] == handle_ip_packet__1__3__2____b->__in6_u.__u6_addr32[0l])
        tmp_if_expr_29 = handle_ip_packet__1__3__2____a->__in6_u.__u6_addr32[(signed long int)1] == handle_ip_packet__1__3__2____b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_29 = (_Bool)0;
      if(tmp_if_expr_29)
        tmp_if_expr_30 = handle_ip_packet__1__3__2____a->__in6_u.__u6_addr32[(signed long int)2] == handle_ip_packet__1__3__2____b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_30 = (_Bool)0;
      if(tmp_if_expr_30)
        tmp_if_expr_31 = handle_ip_packet__1__3__2____a->__in6_u.__u6_addr32[(signed long int)3] == handle_ip_packet__1__3__2____b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_31 = (_Bool)0;
      tmp_statement_expression_28 = tmp_if_expr_31;
      if(tmp_statement_expression_28)
      {
        struct in6_addr *__a = (struct in6_addr *)&scribdst;
        struct in6_addr *__b = (struct in6_addr *)&options.netfilter6net;
        if(__a->__in6_u.__u6_addr32[0l] == __b->__in6_u.__u6_addr32[0l])
          tmp_if_expr_33 = __a->__in6_u.__u6_addr32[(signed long int)1] == __b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_33 = (_Bool)0;
        if(tmp_if_expr_33)
          tmp_if_expr_34 = __a->__in6_u.__u6_addr32[(signed long int)2] == __b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_34 = (_Bool)0;
        if(tmp_if_expr_34)
          tmp_if_expr_35 = __a->__in6_u.__u6_addr32[(signed long int)3] == __b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_35 = (_Bool)0;
        tmp_statement_expression_32 = tmp_if_expr_35;
        tmp_if_expr_36 = !tmp_statement_expression_32 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_36 = (_Bool)0;
      if(tmp_if_expr_36)
      {
        assign_addr_pair(&ap, iptr, 0);
        direction = 1;
      }

      else
      {
        struct in6_addr *handle_ip_packet__1__3__5____a = (struct in6_addr *)&scribsrc;
        struct in6_addr *handle_ip_packet__1__3__5____b = (struct in6_addr *)&options.netfilter6net;
        if(handle_ip_packet__1__3__5____a->__in6_u.__u6_addr32[0l] == handle_ip_packet__1__3__5____b->__in6_u.__u6_addr32[0l])
          tmp_if_expr_20 = handle_ip_packet__1__3__5____a->__in6_u.__u6_addr32[(signed long int)1] == handle_ip_packet__1__3__5____b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_20 = (_Bool)0;
        if(tmp_if_expr_20)
          tmp_if_expr_21 = handle_ip_packet__1__3__5____a->__in6_u.__u6_addr32[(signed long int)2] == handle_ip_packet__1__3__5____b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_21 = (_Bool)0;
        if(tmp_if_expr_21)
          tmp_if_expr_22 = handle_ip_packet__1__3__5____a->__in6_u.__u6_addr32[(signed long int)3] == handle_ip_packet__1__3__5____b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_22 = (_Bool)0;
        tmp_statement_expression_19 = tmp_if_expr_22;
        if(!tmp_statement_expression_19)
        {
          struct in6_addr *handle_ip_packet__1__3__6____a = (struct in6_addr *)&scribdst;
          struct in6_addr *handle_ip_packet__1__3__6____b = (struct in6_addr *)&options.netfilter6net;
          if(handle_ip_packet__1__3__6____a->__in6_u.__u6_addr32[0l] == handle_ip_packet__1__3__6____b->__in6_u.__u6_addr32[0l])
            tmp_if_expr_24 = handle_ip_packet__1__3__6____a->__in6_u.__u6_addr32[(signed long int)1] == handle_ip_packet__1__3__6____b->__in6_u.__u6_addr32[(signed long int)1] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_24 = (_Bool)0;
          if(tmp_if_expr_24)
            tmp_if_expr_25 = handle_ip_packet__1__3__6____a->__in6_u.__u6_addr32[(signed long int)2] == handle_ip_packet__1__3__6____b->__in6_u.__u6_addr32[(signed long int)2] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_25 = (_Bool)0;
          if(tmp_if_expr_25)
            tmp_if_expr_26 = handle_ip_packet__1__3__6____a->__in6_u.__u6_addr32[(signed long int)3] == handle_ip_packet__1__3__6____b->__in6_u.__u6_addr32[(signed long int)3] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_26 = (_Bool)0;
          tmp_statement_expression_23 = tmp_if_expr_26;
          tmp_if_expr_27 = tmp_statement_expression_23 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_27 = (_Bool)0;
        if(tmp_if_expr_27)
        {
          assign_addr_pair(&ap, iptr, 1);
          direction = 0;
        }

        else
          goto __CPROVER_DUMP_L93;
      }
    }

  }

  _Bool tmp_statement_expression_37;
  _Bool tmp_if_expr_43;
  _Bool tmp_statement_expression_40;
  unsigned short int return_value_ntohs_45;
  unsigned short int return_value_ntohs_46;
  _Bool tmp_if_expr_47;
  _Bool tmp_if_expr_50;
  _Bool tmp_if_expr_49;
  signed int return_value_memcmp_48;
  if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 6)
  {
    if(!(options.link_local == 0))
      goto __CPROVER_DUMP_L74;

    struct in6_addr *handle_ip_packet__1__4____a = (struct in6_addr *)&ip6tr->ip6_dst;
    unsigned int return_value_htonl_38;
    return_value_htonl_38=htonl(0xffc00000);
    unsigned int return_value_htonl_39;
    return_value_htonl_39=htonl(0xfe800000);
    tmp_statement_expression_37 = (handle_ip_packet__1__4____a->__in6_u.__u6_addr32[(signed long int)0] & return_value_htonl_38) == return_value_htonl_39;
    if(tmp_statement_expression_37)
      tmp_if_expr_43 = (_Bool)1;

    else
    {
      struct in6_addr *handle_ip_packet__1__5____a = (struct in6_addr *)&ip6tr->ip6_src;
      unsigned int return_value_htonl_41;
      return_value_htonl_41=htonl(0xffc00000);
      unsigned int return_value_htonl_42;
      return_value_htonl_42=htonl(0xfe800000);
      tmp_statement_expression_40 = (handle_ip_packet__1__5____a->__in6_u.__u6_addr32[(signed long int)0] & return_value_htonl_41) == return_value_htonl_42;
      tmp_if_expr_43 = tmp_statement_expression_40 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_43)
      goto __CPROVER_DUMP_L74;

  }

  else
  {

  __CPROVER_DUMP_L74:
    ;
    switch(((signed int)iptr->ip_vhl & 0xf0) >> 4)
    {
      case 4:
      {
        ap.protocol = (unsigned short int)iptr->ip_p;
        memset((void *)&scribdst, 0, sizeof(struct in6_addr) /*16ul*/ );
        memcpy((void *)&scribdst, (const void *)&iptr->ip_dst, sizeof(struct in_addr) /*4ul*/ );
        resolve(ap.af, &scribdst, (char *)(void *)0, 0);
        memset((void *)&scribsrc, 0, sizeof(struct in6_addr) /*16ul*/ );
        memcpy((void *)&scribsrc, (const void *)&iptr->ip_src, sizeof(struct in_addr) /*4ul*/ );
        resolve(ap.af, &scribsrc, (char *)(void *)0, 0);
        break;
      }
      case 6:
      {
        ap.protocol = (unsigned short int)ip6tr->ip6_ctlun.ip6_un1.ip6_un1_nxt;
        resolve(ap.af, &ip6tr->ip6_dst, (char *)(void *)0, 0);
        resolve(ap.af, &ip6tr->ip6_src, (char *)(void *)0, 0);
      }
    }
    enum anonymous_3 return_value_hash_find_44;
    return_value_hash_find_44=hash_find(history, (void *)&ap, u_ht.void_pp);
    if((signed int)return_value_hash_find_44 == HASH_STATUS_KEY_NOT_FOUND)
    {
      ht=history_create();
      hash_insert(history, (void *)&ap, (void *)ht);
    }

    switch(((signed int)iptr->ip_vhl & 0xf0) >> 4)
    {
      case 4:
      {
        return_value_ntohs_45=ntohs(iptr->ip_len);
        len = (unsigned int)return_value_ntohs_45;
        break;
      }
      case 6:
      {
        return_value_ntohs_46=ntohs(ip6tr->ip6_ctlun.ip6_un1.ip6_un1_plen);
        len = (unsigned int)((signed int)return_value_ntohs_46 + 40);
      }
      default:
        ;
    }
    ht->last_write = history_pos;
    if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 4)
      tmp_if_expr_47 = iptr->ip_src.s_addr == ap._anon0.src.s_addr ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_47 = (_Bool)0;
    if(tmp_if_expr_47)
      tmp_if_expr_50 = (_Bool)1;

    else
    {
      if((0xf0 & (signed int)iptr->ip_vhl) >> 4 == 6)
      {
        return_value_memcmp_48=memcmp((const void *)&ip6tr->ip6_src, (const void *)&ap._anon0.src6, sizeof(struct in6_addr) /*16ul*/ );
        tmp_if_expr_49 = !(return_value_memcmp_48 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_49 = (_Bool)0;
      tmp_if_expr_50 = tmp_if_expr_49 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_50)
    {
      ht->sent[(signed long int)history_pos] = ht->sent[(signed long int)history_pos] + (signed long int)len;
      ht->total_sent = ht->total_sent + (long double)len;
    }

    else
    {
      ht->recv[(signed long int)history_pos] = ht->recv[(signed long int)history_pos] + (signed long int)len;
      ht->total_recv = ht->total_recv + (long double)len;
    }
    if(direction == 0)
    {
      history_totals.recv[(signed long int)history_pos] = history_totals.recv[(signed long int)history_pos] + (signed long int)len;
      history_totals.total_recv = history_totals.total_recv + (long double)len;
    }

    else
    {
      history_totals.sent[(signed long int)history_pos] = history_totals.sent[(signed long int)history_pos] + (signed long int)len;
      history_totals.total_sent = history_totals.total_sent + (long double)len;
    }
  }

__CPROVER_DUMP_L93:
  ;
}

// handle_llc_packet
// file iftop.c line 494
static void handle_llc_packet(struct llc *llc, signed int dir)
{
  struct ip *ip = (struct ip *)((void *)llc + (signed long int)sizeof(struct llc) /*8ul*/ );
  if((signed int)llc->ssap == 0xaa)
  {
    if((signed int)llc->dsap == 0xaa)
    {
      if((signed int)llc->ctl.snap.snap_ui == 0x03)
      {
        unsigned int orgcode;
        unsigned short int et;
        orgcode = (unsigned int)((const unsigned char *)&llc->ctl.snap_ether.snap_orgcode[(signed long int)0])[(signed long int)0] << 16 | (unsigned int)((const unsigned char *)&llc->ctl.snap_ether.snap_orgcode[(signed long int)0])[(signed long int)1] << 8 | (unsigned int)((const unsigned char *)&llc->ctl.snap_ether.snap_orgcode[(signed long int)0])[(signed long int)2];
        et = (unsigned short int)(((signed int)llc->ctl.snap_ether.snap_ethertype[(signed long int)0] << 8) + (signed int)llc->ctl.snap_ether.snap_ethertype[(signed long int)1]);
        switch(orgcode)
        {
          case (unsigned int)0x000000:

          case (unsigned int)0x0000f8:
          {
            handle_ip_packet(ip, dir);
            break;
          }
          case (unsigned int)0x080007:
            if((signed int)et == 0x809b)
              handle_ip_packet(ip, dir);

        }
      }

    }

  }

}

// handle_null_packet
// file iftop.c line 489
static void handle_null_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet)
{
  handle_ip_packet((struct ip *)(packet + (signed long int)4), -1);
}

// handle_pflog_packet
// file iftop.c line 475
static void handle_pflog_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet)
{
  unsigned int length = pkthdr->len;
  unsigned int hdrlen;
  struct pfloghdr *hdr = (struct pfloghdr *)packet;
  hdrlen = (unsigned int)((unsigned long int)hdr->length + (sizeof(signed int) /*4ul*/  - (unsigned long int)1) & ~(sizeof(signed int) /*4ul*/  - (unsigned long int)1));
  length = length - hdrlen;
  packet = packet + (signed long int)hdrlen;
  handle_ip_packet((struct ip *)packet, -1);
}

// handle_ppp_packet
// file iftop.c line 547
static void handle_ppp_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet)
{
  unsigned int length = pkthdr->len;
  unsigned int caplen = pkthdr->caplen;
  unsigned int proto;
  if(caplen >= 2u)
  {
    if((signed int)*packet == 0xff)
    {
      if(!(caplen >= 4u))
        goto __CPROVER_DUMP_L5;

      packet = packet + (signed long int)2;
      length = length - (unsigned int)2;
      unsigned short int return_value_ntohs_1;
      return_value_ntohs_1=ntohs(*((const unsigned short int *)packet));
      proto = (unsigned int)(unsigned short int)return_value_ntohs_1;
      packet = packet + (signed long int)2;
      length = length - (unsigned int)2;
      if(proto == 33u || proto == 2048u || proto == 34525u)
        handle_ip_packet((struct ip *)packet, -1);

    }

  }


__CPROVER_DUMP_L5:
  ;
}

// handle_radiotap_packet
// file iftop.c line 642
static void handle_radiotap_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet)
{
  handle_ip_packet((struct ip *)(packet + (signed long int)((struct radiotap_header *)packet)->it_len + (signed long int)34), -1);
}

// handle_raw_packet
// file iftop.c line 469
static void handle_raw_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet)
{
  handle_ip_packet((struct ip *)packet, -1);
}

// handle_tokenring_packet
// file iftop.c line 521
static void handle_tokenring_packet(unsigned char *args, struct pcap_pkthdr *pkthdr, const unsigned char *packet)
{
  struct token_header *trp;
  signed int dir = -1;
  trp = (struct token_header *)packet;
  if(!((0x80 & (signed int)trp->token_shost[0l]) == 0))
  {
    unsigned short int return_value_ntohs_1;
    return_value_ntohs_1=ntohs(trp->token_rcf);
    packet = packet + (signed long int)(((signed int)return_value_ntohs_1 & 0x1f00) >> 8);
  }

  packet = packet + (signed long int)14;
  signed int return_value_memcmp_5;
  return_value_memcmp_5=memcmp((const void *)trp->token_shost, (const void *)if_hw_addr, (unsigned long int)6);
  signed int return_value_memcmp_2;
  _Bool tmp_if_expr_4;
  signed int return_value_memcmp_3;
  if(return_value_memcmp_5 == 0)
    dir = 1;

  else
  {
    return_value_memcmp_2=memcmp((const void *)trp->token_dhost, (const void *)if_hw_addr, (unsigned long int)6);
    if(return_value_memcmp_2 == 0)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_memcmp_3=memcmp((const void *)"ÿÿÿÿÿÿ", (const void *)trp->token_dhost, (unsigned long int)6);
      tmp_if_expr_4 = return_value_memcmp_3 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      dir = 0;

  }
  if((0xC0 & (signed int)trp->token_fc) >> 6 == 1)
    handle_llc_packet((struct llc *)packet, dir);

}

// hash
// file addr_hash.c line 42
signed int hash(void *key)
{
  signed int hash__1__hash;
  struct anonymous_5 *ap = (struct anonymous_5 *)key;
  if(ap->af == 10)
  {
    unsigned int *addr6 = (unsigned int *)ap->_anon0.src6.__in6_u.__u6_addr8;
    signed int return_value_hash_uint32_1;
    return_value_hash_uint32_1=hash_uint32(addr6[(signed long int)0]);
    signed int return_value_hash_uint32_2;
    return_value_hash_uint32_2=hash_uint32(addr6[(signed long int)1]);
    signed int return_value_hash_uint32_3;
    return_value_hash_uint32_3=hash_uint32(addr6[(signed long int)2]);
    signed int return_value_hash_uint32_4;
    return_value_hash_uint32_4=hash_uint32(addr6[(signed long int)3]);
    hash__1__hash = (return_value_hash_uint32_1 + return_value_hash_uint32_2 + return_value_hash_uint32_3 + return_value_hash_uint32_4 + (signed int)ap->src_port) % 0xFF;
    addr6 = (unsigned int *)ap->_anon1.dst6.__in6_u.__u6_addr8;
    signed int return_value_hash_uint32_5;
    return_value_hash_uint32_5=hash_uint32(addr6[(signed long int)0]);
    signed int return_value_hash_uint32_6;
    return_value_hash_uint32_6=hash_uint32(addr6[(signed long int)1]);
    signed int return_value_hash_uint32_7;
    return_value_hash_uint32_7=hash_uint32(addr6[(signed long int)2]);
    signed int return_value_hash_uint32_8;
    return_value_hash_uint32_8=hash_uint32(addr6[(signed long int)3]);
    hash__1__hash = (hash__1__hash + return_value_hash_uint32_5 + return_value_hash_uint32_6 + return_value_hash_uint32_7 + return_value_hash_uint32_8 + (signed int)ap->dst_port) % 0xFF;
  }

  else
  {
    unsigned int addr = ap->_anon0.src.s_addr;
    signed int return_value_hash_uint32_9;
    return_value_hash_uint32_9=hash_uint32(addr);
    hash__1__hash = (return_value_hash_uint32_9 + (signed int)ap->src_port) % 0xFF;
    addr = ap->_anon1.dst.s_addr;
    signed int return_value_hash_uint32_10;
    return_value_hash_uint32_10=hash_uint32(addr);
    hash__1__hash = (hash__1__hash + return_value_hash_uint32_10 + (signed int)ap->dst_port) % 0xFF;
  }
  return hash__1__hash;
}

// hash_delete
// file hash.c line 28
enum anonymous_3 hash_delete(struct anonymous_9 *hash_table, void *key)
{
  struct node_tag *p0;
  struct node_tag *p;
  signed int bucket;
  p0 = ((struct node_tag *)NULL);
  bucket=hash_table->hash(key);
  p = hash_table->table[(signed long int)bucket];
  signed int return_value;
  if(!(p == ((struct node_tag *)NULL)))
  {
    return_value=hash_table->compare(p->key, key);
    if(return_value == 0)
    {
      p0 = p;
      p = p->next;
    }

  }

  if(p == ((struct node_tag *)NULL))
    return (enum anonymous_3)HASH_STATUS_KEY_NOT_FOUND;

  else
  {
    if(!(p0 == ((struct node_tag *)NULL)))
      p0->next = p->next;

    else
      hash_table->table[(signed long int)bucket] = p->next;
    hash_table->delete_key(p->key);
    free((void *)p);
    return (enum anonymous_3)HASH_STATUS_OK;
  }
}

// hash_delete_all
// file hash.c line 106
void hash_delete_all(struct anonymous_9 *hash_table)
{
  signed int i;
  struct node_tag *n;
  struct node_tag *nn;
  if(!(hash_table == ((struct anonymous_9 *)NULL)))
  {
    i = 0;
    for( ; !(i >= hash_table->size); i = i + 1)
    {
      n = hash_table->table[(signed long int)i];
      if(!(n == ((struct node_tag *)NULL)))
      {
        nn = n->next;
        hash_table->delete_key(n->key);
        free((void *)n);
        n = nn;
      }

      hash_table->table[(signed long int)i] = (struct node_tag *)(void *)0;
    }
  }

}

// hash_destroy
// file hash.c line 135
enum anonymous_3 hash_destroy(struct anonymous_9 *hash_table)
{
  free((void *)hash_table->table);
  return (enum anonymous_3)HASH_STATUS_OK;
}

// hash_find
// file hash.c line 61
enum anonymous_3 hash_find(struct anonymous_9 *hash_table, void *key, void **rec)
{
  struct node_tag *p;
  signed int return_value;
  return_value=hash_table->hash(key);
  p = hash_table->table[(signed long int)return_value];
  signed int return_value_1;
  if(!(p == ((struct node_tag *)NULL)))
  {
    return_value_1=hash_table->compare(p->key, key);
    if(return_value_1 == 0)
      p = p->next;

  }

  if(p == ((struct node_tag *)NULL))
    return (enum anonymous_3)HASH_STATUS_KEY_NOT_FOUND;

  else
  {
    *rec = p->rec;
    return (enum anonymous_3)HASH_STATUS_OK;
  }
}

// hash_initialise
// file hash.h line 32
enum anonymous_3 hash_initialise(struct anonymous_9 *hash_table)
{
  void *return_value_xcalloc_1;
  return_value_xcalloc_1=xcalloc((unsigned long int)hash_table->size, sizeof(struct node_tag *) /*8ul*/ );
  hash_table->table = (struct node_tag **)return_value_xcalloc_1;
  return (enum anonymous_3)HASH_STATUS_OK;
}

// hash_insert
// file hash.c line 8
enum anonymous_3 hash_insert(struct anonymous_9 *hash_table, void *key, void *rec)
{
  struct node_tag *p;
  struct node_tag *p0;
  signed int bucket;
  bucket=hash_table->hash(key);
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct node_tag) /*24ul*/ );
  p = (struct node_tag *)return_value_xmalloc_1;
  p0 = hash_table->table[(signed long int)bucket];
  hash_table->table[(signed long int)bucket] = p;
  p->next = p0;
  p->key=hash_table->copy_key(key);
  p->rec = rec;
  return (enum anonymous_3)HASH_STATUS_OK;
}

// hash_next_item
// file hash.c line 77
enum anonymous_3 hash_next_item(struct anonymous_9 *hash_table, struct node_tag **ppnode)
{
  signed int i;
  if(hash_table == ((struct anonymous_9 *)NULL))
    return (enum anonymous_3)HASH_STATUS_KEY_NOT_FOUND;

  else
  {
    if(!(*ppnode == ((struct node_tag *)NULL)))
    {
      if(!((*ppnode)->next == ((struct node_tag *)NULL)))
      {
        *ppnode = (*ppnode)->next;
        return (enum anonymous_3)HASH_STATUS_OK;
      }

      signed int return_value;
      return_value=hash_table->hash((*ppnode)->key);
      i = return_value + 1;
    }

    else
      i = 0;
    for( ; !(i >= hash_table->size); i = i + 1)
      if(!(hash_table->table[(signed long int)i] == ((struct node_tag *)NULL)))
        break;

    if(i == hash_table->size)
    {
      *ppnode = (struct node_tag *)(void *)0;
      return (enum anonymous_3)HASH_STATUS_KEY_NOT_FOUND;
    }

    else
    {
      *ppnode = hash_table->table[(signed long int)i];
      return (enum anonymous_3)HASH_STATUS_OK;
    }
  }
}

// hash_uint32
// file addr_hash.c line 35
static inline signed int hash_uint32(unsigned int n)
{
  return (signed int)((n & (unsigned int)0x000000FF) + ((n & (unsigned int)0x0000FF00) >> 8) + ((n & (unsigned int)0x00FF0000) >> 16) + ((n & 0xFF000000) >> 24));
}

// hash_uint32_link1
// file ns_hash.c line 23
static inline signed int hash_uint32_link1(unsigned int n_link1)
{
  return (signed int)((n_link1 & (unsigned int)0x000000FF) + ((n_link1 & (unsigned int)0x0000FF00) >> 8) + ((n_link1 & (unsigned int)0x00FF0000) >> 16) + ((n_link1 & 0xFF000000) >> 24));
}

// history_create
// file iftop.c line 104
struct anonymous_7 * history_create()
{
  struct anonymous_7 *h;
  void *return_value_xcalloc_1;
  return_value_xcalloc_1=xcalloc((unsigned long int)1, sizeof(struct anonymous_7) /*368ul*/ );
  h = (struct anonymous_7 *)return_value_xcalloc_1;
  return h;
}

// history_length
// file ui_common.c line 152
signed int history_length(const signed int d)
{
  if(!(history_len >= history_divs[(signed long int)d]))
    return history_len * 2;

  else
    return history_divs[(signed long int)d] * 2;
}

// history_rotate
// file iftop.c line 110
void history_rotate()
{
  struct node_tag *n = (struct node_tag *)(void *)0;
  history_pos = (history_pos + 1) % 20;
  hash_next_item(history, &n);
  while(!(n == ((struct node_tag *)NULL)))
  {
    struct node_tag *next = n;
    struct anonymous_7 *d = (struct anonymous_7 *)n->rec;
    hash_next_item(history, &next);
    if(d->last_write == history_pos)
    {
      struct anonymous_5 key = *((struct anonymous_5 *)n->key);
      hash_delete(history, (void *)&key);
      free((void *)d);
    }

    else
    {
      d->recv[(signed long int)history_pos] = (signed long int)0;
      d->sent[(signed long int)history_pos] = (signed long int)0;
    }
    n = next;
  }
  history_totals.sent[(signed long int)history_pos] = (signed long int)0;
  history_totals.recv[(signed long int)history_pos] = (signed long int)0;
  if(!(history_len >= 20))
    history_len = history_len + 1;

}

// in_filter_net
// file iftop.c line 174
signed int in_filter_net(struct in_addr addr)
{
  signed int ret = (signed int)((addr.s_addr & options.netfiltermask.s_addr) == options.netfilternet.s_addr);
  return ret;
}

// init_history
// file iftop.c line 98
void init_history()
{
  history=addr_hash_create();
  last_timestamp=time((signed long int *)(void *)0);
  memset((void *)&history_totals, 0, sizeof(struct anonymous_7) /*368ul*/ );
}

// ip6_addr_match
// file iftop.c line 184
static inline signed int ip6_addr_match(struct in6_addr *addr)
{
  _Bool tmp_statement_expression_1;
  struct in6_addr *__a = (struct in6_addr *)addr;
  struct in6_addr *__b = (struct in6_addr *)&if_ip6_addr;
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
  return (signed int)tmp_statement_expression_1;
}

// ip_addr_match
// file iftop.c line 180
static inline signed int ip_addr_match(struct in_addr addr)
{
  return (signed int)(addr.s_addr == if_ip_addr.s_addr);
}

// is_bad_interface_name
// file options.c line 78
static signed int is_bad_interface_name(char *i)
{
  char **p = bad_interface_names;
  unsigned long int return_value_strlen_1;
  signed int return_value_strncmp_2;
  for( ; !(*p == ((char *)NULL)); p = p + 1l)
  {
    return_value_strlen_1=strlen(*p);
    return_value_strncmp_2=strncmp(i, *p, return_value_strlen_1);
    if(return_value_strncmp_2 == 0)
      return 1;

  }
  return 0;
}

// is_cfgdirective_valid
// file cfgfile.c line 53
signed int is_cfgdirective_valid(const char *s)
{
  signed int t = 0;
  signed int return_value_strcmp_1;
  for( ; !(config_directives[(signed long int)t] == ((char *)NULL)); t = t + 1)
  {
    return_value_strcmp_1=strcmp(s, config_directives[(signed long int)t]);
    if(return_value_strcmp_1 == 0)
      return 1;

  }
  return 0;
}

// item_ptr
// file vector.h line 22
static inline union _item item_ptr(void * const v)
{
  union _item u;
  u.v = v;
  return u;
}

// main
// file iftop.c line 791
signed int main(signed int argc, char **argv)
{
  unsigned long int thread;
  struct sigaction sa = { .__sigaction_handler={ .sa_handler=((void (*)(signed int))NULL) }, .sa_mask={ .__val={ 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul } },
    .sa_flags=0,
    .sa_restorer=((void (*)(void))NULL) };
  setlocale(6, "");
  config_init();
  options_set_defaults();
  options_read_args(argc, argv);
  read_config(options.config_file, options.config_file_specified);
  options_make();
  sa.__sigaction_handler.sa_handler = finish;
  sigaction(2, &sa, (struct sigaction *)(void *)0);
  pthread_mutex_init(&tick_mutex, (const union anonymous_18 *)(void *)0);
  packet_init();
  init_history();
  if(!(options.no_curses == 0))
    tui_init();

  else
    ui_init();
  pthread_create(&thread, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)packet_loop, (void *)0);
  first_timestamp=time((signed long int *)(void *)0);
  if(!(options.no_curses == 0))
  {
    if(!(options.timed_output == 0))
      while(foad == 0)
        sleep((unsigned int)1);

    else
      tui_loop();
  }

  else
    ui_loop();
  pthread_cancel(thread);
  ui_finish();
  return 0;
}

// make_screen_list
// file ui_common.c line 207
void make_screen_list()
{
  struct node_tag *n = (struct node_tag *)(void *)0;
  enum anonymous_3 return_value_hash_next_item_1;
  do
  {
    return_value_hash_next_item_1=hash_next_item(screen_hash, &n);
    if(!((signed int)return_value_hash_next_item_1 == HASH_STATUS_OK))
      break;

    struct host_pair_line_tag *line = (struct host_pair_line_tag *)n->rec;
    signed int i = 0;
    for( ; !(i >= 3); i = i + 1)
    {
      signed int return_value_history_length_2;
      return_value_history_length_2=history_length(i);
      line->recv[(signed long int)i] = line->recv[(signed long int)i] / (long double)return_value_history_length_2;
      signed int return_value_history_length_3;
      return_value_history_length_3=history_length(i);
      line->sent[(signed long int)i] = line->sent[(signed long int)i] / (long double)return_value_history_length_3;
    }
    if(options.freezeorder == 0)
      sorted_list_insert(&screen_list, (void *)line);

  }
  while((_Bool)1);
}

// min
// file edline.c line 15
static signed int min(const signed int a, const signed int b)
{
  return a < b ? a : b;
}

// ns_hash_compare
// file ns_hash.c line 17
signed int ns_hash_compare(void *a, void *b)
{
  struct in6_addr *aa = (struct in6_addr *)a;
  struct in6_addr *bb = (struct in6_addr *)b;
  _Bool tmp_statement_expression_1;
  struct in6_addr *__a = (struct in6_addr *)aa;
  struct in6_addr *__b = (struct in6_addr *)bb;
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
  return (signed int)tmp_statement_expression_1;
}

// ns_hash_copy_key
// file ns_hash.c line 42
void * ns_hash_copy_key(void *orig)
{
  struct in6_addr *copy;
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct in6_addr) /*16ul*/ );
  copy = (struct in6_addr *)return_value_xmalloc_1;
  memcpy((void *)copy, orig, sizeof(struct in6_addr) /*16ul*/ );
  return (void *)copy;
}

// ns_hash_create
// file ns_hash.c line 58
struct anonymous_9 * ns_hash_create(void)
{
  struct anonymous_9 *hash_table;
  void *return_value_xcalloc_1;
  return_value_xcalloc_1=xcalloc((unsigned long int)256, sizeof(struct anonymous_9) /*48ul*/ );
  hash_table = (struct anonymous_9 *)return_value_xcalloc_1;
  hash_table->size = 256;
  hash_table->compare = ns_hash_compare;
  hash_table->hash = ns_hash_hash;
  hash_table->delete_key = ns_hash_delete_key;
  hash_table->copy_key = ns_hash_copy_key;
  hash_initialise(hash_table);
  return hash_table;
}

// ns_hash_delete_key
// file ns_hash.c line 51
void ns_hash_delete_key(void *key)
{
  free(key);
}

// ns_hash_hash
// file ns_hash.c line 30
signed int ns_hash_hash(void *key)
{
  signed int ns_hash_hash__1__hash;
  unsigned int *addr6 = (unsigned int *)((struct in6_addr *)key)->__in6_u.__u6_addr8;
  signed int return_value_hash_uint32_1;
  return_value_hash_uint32_1=hash_uint32_link1(addr6[(signed long int)0]);
  signed int return_value_hash_uint32_2;
  return_value_hash_uint32_2=hash_uint32_link1(addr6[(signed long int)1]);
  signed int return_value_hash_uint32_3;
  return_value_hash_uint32_3=hash_uint32_link1(addr6[(signed long int)2]);
  signed int return_value_hash_uint32_4;
  return_value_hash_uint32_4=hash_uint32_link1(addr6[(signed long int)3]);
  ns_hash_hash__1__hash = (return_value_hash_uint32_1 + return_value_hash_uint32_2 + return_value_hash_uint32_3 + return_value_hash_uint32_4) % 0xFF;
  return ns_hash_hash__1__hash;
}

// options_config_get_bool
// file options.c line 333
signed int options_config_get_bool(const char *name, signed int *value)
{
  char *return_value_config_get_string_1;
  return_value_config_get_string_1=config_get_string(name);
  if(!(return_value_config_get_string_1 == ((char *)NULL)))
  {
    *value=config_get_bool(name);
    return 1;
  }

  else
    return 0;
}

// options_config_get_bw_rate
// file options.c line 373
signed int options_config_get_bw_rate(char *directive, signed long long int *result)
{
  char *units;
  signed long long int mult = (signed long long int)1;
  signed long long int value;
  char *s;
  s=config_get_string(directive);
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  if(!(s == ((char *)NULL)))
  {
    unsigned long int return_value_strspn_1;
    return_value_strspn_1=strspn(s, "0123456789");
    units = s + (signed long int)return_value_strspn_1;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(units);
    if(return_value_strlen_2 >= 2ul)
    {
      fprintf(stderr, "Invalid units in value: %s\n", s);
      return 0;
    }

    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(units);
    if(return_value_strlen_7 == 1ul)
    {
      if((signed int)*units == 107)
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = (signed int)*units == 75 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_6)
        mult = (signed long long int)1024;

      else
      {
        if((signed int)*units == 109)
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = (signed int)*units == 77 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_5)
          mult = (signed long long int)(1024 * 1024);

        else
        {
          if((signed int)*units == 103)
            tmp_if_expr_4 = (_Bool)1;

          else
            tmp_if_expr_4 = (signed int)*units == 71 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_4)
            mult = (signed long long int)(1024 * 1024 * 1024);

          else
          {
            if((signed int)*units == 98)
              tmp_if_expr_3 = (_Bool)1;

            else
              tmp_if_expr_3 = (signed int)*units == 66 ? (_Bool)1 : (_Bool)0;
            if(!tmp_if_expr_3)
            {
              fprintf(stderr, "Invalid units in value: %s\n", s);
              return 0;
            }

          }
        }
      }
    }

    *units = (char)0;
    signed int return_value_sscanf_8;
    return_value_sscanf_8=sscanf(s, "%lld", &value);
    if(!(return_value_sscanf_8 == 1))
      fprintf(stderr, "Error reading rate: %s\n", s);

    options.max_bandwidth = value * mult;
    return 1;
  }

  return 0;
}

// options_config_get_enum
// file options.c line 349
signed int options_config_get_enum(char *name, struct anonymous *enumeration, signed int *result)
{
  signed int i;
  char *return_value_config_get_string_2;
  return_value_config_get_string_2=config_get_string(name);
  if(!(return_value_config_get_string_2 == ((char *)NULL)))
  {
    signed int return_value_config_get_enum_1;
    return_value_config_get_enum_1=config_get_enum(name, enumeration, &i);
    if(!(return_value_config_get_enum_1 == 0))
    {
      *result = i;
      return 1;
    }

  }

  return 0;
}

// options_config_get_int
// file options.c line 341
signed int options_config_get_int(const char *name, signed int *value)
{
  char *return_value_config_get_string_1;
  return_value_config_get_string_1=config_get_string(name);
  if(!(return_value_config_get_string_1 == ((char *)NULL)))
  {
    config_get_int(name, value);
    return 1;
  }

  else
    return 0;
}

// options_config_get_net_filter
// file options.c line 416
signed int options_config_get_net_filter()
{
  char *s;
  s=config_get_string("net-filter");
  if(!(s == ((char *)NULL)))
  {
    char *mask;
    options.netfilter = 0;
    mask=strchr(s, 47);
    if(mask == ((char *)NULL))
    {
      fprintf(stderr, "Could not parse net/mask: %s\n", s);
      return 0;
    }

    *mask = (char)0;
    mask = mask + 1l;
    signed int return_value_inet_aton_1;
    return_value_inet_aton_1=inet_aton(s, &options.netfilternet);
    if(return_value_inet_aton_1 == 0)
    {
      fprintf(stderr, "Invalid network address: %s\n", s);
      return 0;
    }

    unsigned long int return_value_strspn_3;
    return_value_strspn_3=strspn(mask, "0123456789");
    if((signed int)mask[(signed long int)return_value_strspn_3] == 0)
    {
      signed int n;
      n=atoi(mask);
      if(n >= 33)
        fprintf(stderr, "Invalid netmask length: %s\n", mask);

      else
        if(n == 32)
          options.netfiltermask.s_addr=htonl((unsigned int)0xffffffffl);

        else
        {
          unsigned int mm = (unsigned int)0xffffffffl;
          mm = mm >> n;
          options.netfiltermask.s_addr=htonl(~mm);
        }
      options.netfilter = 1;
    }

    else
    {
      signed int return_value_inet_aton_2;
      return_value_inet_aton_2=inet_aton(mask, &options.netfiltermask);
      if(!(return_value_inet_aton_2 == 0))
        options.netfilter = 1;

      else
      {
        fprintf(stderr, "Invalid netmask: %s\n", s);
        return 0;
      }
    }
    options.netfilternet.s_addr = options.netfilternet.s_addr & options.netfiltermask.s_addr;
    return 1;
  }

  return 0;
}

// options_config_get_net_filter6
// file options.c line 475
signed int options_config_get_net_filter6()
{
  char *s;
  signed int j;
  s=config_get_string("net-filter6");
  if(!(s == ((char *)NULL)))
  {
    char *mask;
    options.netfilter6 = 0;
    mask=strchr(s, 47);
    if(mask == ((char *)NULL))
    {
      fprintf(stderr, "Could not parse IPv6 net/prefix: %s\n", s);
      return 0;
    }

    *mask = (char)0;
    mask = mask + 1l;
    signed int return_value_inet_pton_1;
    return_value_inet_pton_1=inet_pton(10, s, (void *)&options.netfilter6net);
    if(return_value_inet_pton_1 == 0)
    {
      fprintf(stderr, "Invalid IPv6 network address: %s\n", s);
      return 0;
    }

    unsigned long int return_value_strspn_4;
    return_value_strspn_4=strspn(mask, "0123456789");
    if((signed int)mask[(signed long int)return_value_strspn_4] == 0)
    {
      unsigned int n;
      signed int return_value_atoi_2;
      return_value_atoi_2=atoi(mask);
      n = (unsigned int)return_value_atoi_2;
      if(n >= 129u || !(n >= 1u))
        fprintf(stderr, "Invalid IPv6 prefix length: %s\n", mask);

      else
      {
        signed int bl;
        signed int rem;
        const unsigned char mm = (const unsigned char)0xff;
        unsigned char part = mm;
        bl = (signed int)(n / (unsigned int)8);
        rem = (signed int)(n % (unsigned int)8);
        part = part << 8 - rem;
        j = 0;
        for( ; !(j >= bl); j = j + 1)
          options.netfilter6mask.__in6_u.__u6_addr8[(signed long int)j] = mm;
        if(rem >= 1)
          options.netfilter6mask.__in6_u.__u6_addr8[(signed long int)bl] = part;

        options.netfilter6 = 1;
      }
    }

    else
    {
      signed int return_value_inet_pton_3;
      return_value_inet_pton_3=inet_pton(10, mask, (void *)&options.netfilter6mask);
      if(!(return_value_inet_pton_3 == 0))
        options.netfilter6 = 1;

      else
      {
        fprintf(stderr, "Invalid IPv6 netmask: %s\n", s);
        return 0;
      }
    }
    j = 0;
    for( ; !(j >= 16); j = j + 1)
      options.netfilter6net.__in6_u.__u6_addr8[(signed long int)j] = options.netfilter6net.__in6_u.__u6_addr8[(signed long int)j] & options.netfilter6mask.__in6_u.__u6_addr8[(signed long int)j];
    return 1;
  }

  return 0;
}

// options_config_get_promiscuous
// file options.c line 360
signed int options_config_get_promiscuous()
{
  char *return_value_config_get_string_1;
  return_value_config_get_string_1=config_get_string("promiscuous");
  if(!(return_value_config_get_string_1 == ((char *)NULL)))
  {
    options.promiscuous=config_get_bool("promiscuous");
    if(!(options.promiscuous == 0))
      options.promiscuous_but_choosy = 0;

    return 1;
  }

  else
    return 0;
}

// options_config_get_string
// file options.c line 323
signed int options_config_get_string(const char *name, char **value)
{
  char *s;
  s=config_get_string(name);
  if(!(s == ((char *)NULL)))
  {
    *value=xstrdup(s);
    return 1;
  }

  else
    return 0;
}

// options_make
// file options.h line 100
void options_make()
{
  options_config_get_string("interface", &options.interface);
  options_config_get_bool("dns-resolution", &options.dnsresolution);
  options_config_get_bool("port-resolution", &options.portresolution);
  options_config_get_string("filter-code", &options.filtercode);
  options_config_get_bool("show-bars", &options.showbars);
  options_config_get_promiscuous();
  options_config_get_bool("hide-source", &options.aggregate_src);
  options_config_get_bool("hide-destination", &options.aggregate_dest);
  options_config_get_bool("use-bytes", &options.bandwidth_in_bytes);
  options_config_get_enum("sort", sort_enumeration, (signed int *)&options.sort);
  options_config_get_enum("line-display", linedisplay_enumeration, (signed int *)&options.linedisplay);
  options_config_get_bool("show-totals", &options.show_totals);
  options_config_get_bool("log-scale", &options.log_scale);
  options_config_get_bw_rate("max-bandwidth", &options.max_bandwidth);
  options_config_get_enum("port-display", showports_enumeration, (signed int *)&options.showports);
  options_config_get_string("screen-filter", &options.screenfilter);
  options_config_get_bool("link-local", &options.link_local);
  options_config_get_int("timed-output", &options.timed_output);
  options_config_get_bool("no-curses", &options.no_curses);
  options_config_get_int("num-lines", &options.num_lines);
  options_config_get_net_filter();
  options_config_get_net_filter6();
}

// options_read_args
// file options.h line 99
void options_read_args(signed int argc, char **argv)
{
  signed int opt;
  opterr = 0;
  do
  {
    opt=getopt(argc, argv, optstr);
    if(opt == -1)
      break;

    switch(opt)
    {
      case 104:
      {
        usage(stdout);
        exit(0);
      }
      case 110:
      {
        config_set_string("dns-resolution", "false");
        break;
      }
      case 78:
      {
        config_set_string("port-resolution", "false");
        break;
      }
      case 105:
      {
        config_set_string("interface", optarg);
        break;
      }
      case 102:
      {
        config_set_string("filter-code", optarg);
        break;
      }
      case 108:
      {
        config_set_string("link-local", "true");
        break;
      }
      case 112:
      {
        config_set_string("promiscuous", "true");
        break;
      }
      case 80:
      {
        config_set_string("port-display", "on");
        break;
      }
      case 70:
      {
        config_set_string("net-filter", optarg);
        break;
      }
      case 71:
      {
        config_set_string("net-filter6", optarg);
        break;
      }
      case 109:
      {
        config_set_string("max-bandwidth", optarg);
        break;
      }
      case 98:
      {
        config_set_string("show-bars", "false");
        break;
      }
      case 66:
      {
        config_set_string("use-bytes", "true");
        break;
      }
      case 115:
      {
        config_set_string("timed-output", optarg);
        break;
      }
      case 116:
      {
        config_set_string("no-curses", "true");
        break;
      }
      case 76:
      {
        config_set_string("num-lines", optarg);
        break;
      }
      case 111:
      {
        config_set_string("sort", optarg);
        break;
      }
      case 99:
      {
        xfree((void *)options.config_file);
        options.config_file=xstrdup(optarg);
        options.config_file_specified = 1;
        break;
      }
      case 63:
      {
        fprintf(stderr, "iftop: unknown option -%c\n", optopt);
        usage(stderr);
        exit(1);
      }
      case 58:
      {
        fprintf(stderr, "iftop: option -%c requires an argument\n", optopt);
        usage(stderr);
        exit(1);
      }
    }
  }
  while((_Bool)1);
  if(!(optind == argc))
  {
    fprintf(stderr, "iftop: found arguments following options\n");
    fprintf(stderr, "*** some options have changed names since v0.9 ***\n");
    usage(stderr);
    exit(1);
  }

}

// options_set_defaults
// file options.h line 97
void options_set_defaults()
{
  char *s;
  options.interface=get_first_interface();
  if(options.interface == ((char *)NULL))
    options.interface = "eth0";

  options.filtercode = (char *)(void *)0;
  options.netfilter = 0;
  inet_aton("10.0.1.0", &options.netfilternet);
  inet_aton("255.255.255.0", &options.netfiltermask);
  options.netfilter6 = 0;
  inet_pton(10, "fe80::", (void *)&options.netfilter6net);
  inet_pton(10, "ffff::", (void *)&options.netfilter6mask);
  options.link_local = 0;
  options.dnsresolution = 1;
  options.portresolution = 1;
  options.promiscuous = 0;
  options.promiscuous_but_choosy = 0;
  options.showbars = 1;
  options.showports = (enum anonymous_33)OPTION_PORTS_OFF;
  options.aggregate_src = 0;
  options.aggregate_dest = 0;
  options.paused = 0;
  options.showhelp = 0;
  options.bandwidth_in_bytes = 0;
  options.sort = (enum anonymous_34)OPTION_SORT_DIV2;
  options.screenfilter = (char *)(void *)0;
  options.freezeorder = 0;
  options.linedisplay = (enum anonymous_8)OPTION_LINEDISPLAY_TWO_LINE;
  options.screen_offset = 0;
  options.show_totals = 0;
  options.max_bandwidth = (signed long long int)0;
  options.log_scale = 0;
  options.bar_interval = 1;
  options.timed_output = 0;
  options.no_curses = 0;
  options.num_lines = 10;
  s=getenv("HOME");
  if(!(s == ((char *)NULL)))
  {
    signed int i;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(s);
    i = (signed int)(return_value_strlen_1 + (unsigned long int)9 + (unsigned long int)1);
    void *return_value_xmalloc_2;
    return_value_xmalloc_2=xmalloc((unsigned long int)i);
    options.config_file = (char *)return_value_xmalloc_2;
    snprintf(options.config_file, (unsigned long int)i, "%s/.iftoprc", s);
  }

  else
    options.config_file=xstrdup("iftoprc");
  options.config_file_specified = 0;
}

// packet_init
// file iftop.c line 680
void packet_init()
{
  char errbuf[256l];
  char *m;
  signed int i;
  signed int dlt;
  signed int result;
  result=get_addrs_ioctl(options.interface, if_hw_addr, &if_ip_addr, &if_ip6_addr);
  if(!(result >= 0))
    exit(1);

  have_hw_addr = result & 0x01;
  have_ip_addr = result & 0x02;
  have_ip6_addr = result & 0x04;
  if(!(have_ip_addr == 0))
  {
    char *return_value_inet_ntoa_1;
    return_value_inet_ntoa_1=inet_ntoa(if_ip_addr);
    fprintf(stderr, "IP address is: %s\n", return_value_inet_ntoa_1);
  }

  if(!(have_ip6_addr == 0))
  {
    char ip6str[46l];
    ip6str[(signed long int)0] = (char)0;
    inet_ntop(10, (const void *)&if_ip6_addr, ip6str, (unsigned int)sizeof(char [46l]) /*46ul*/ );
    fprintf(stderr, "IPv6 address is: %s\n", (const void *)ip6str);
  }

  if(!(have_hw_addr == 0))
  {
    fprintf(stderr, "MAC address is:");
    i = 0;
    for( ; !(i >= 6); i = i + 1)
      fprintf(stderr, "%c%02x", i != 0 ? 58 : 32, (unsigned char)if_hw_addr[(signed long int)i]);
    fprintf(stderr, "\n");
  }

  resolver_initialise();
  pd=pcap_open_live(options.interface, 256, options.promiscuous, 1000, errbuf);
  if(pd == ((struct pcap *)NULL))
  {
    fprintf(stderr, "pcap_open_live(%s): %s\n", options.interface, (const void *)errbuf);
    exit(1);
  }

  dlt=pcap_datalink(pd);
  if(dlt == 1)
    packet_handler = handle_eth_packet;

  else
    if(dlt == 117)
      packet_handler = handle_pflog_packet;

    else
      if(dlt == 12)
        packet_handler = handle_raw_packet;

      else
        if(dlt == 0)
          packet_handler = handle_null_packet;

        else
          if(dlt == 108)
            packet_handler = handle_null_packet;

          else
            if(dlt == 127)
              packet_handler = handle_radiotap_packet;

            else
              if(dlt == 6)
                packet_handler = handle_tokenring_packet;

              else
                if(dlt == 9)
                  packet_handler = handle_ppp_packet;

                else
                  if(dlt == 113)
                    packet_handler = handle_cooked_packet;

                  else
                  {
                    fprintf(stderr, "Unsupported datalink type: %d\nPlease email pdw@ex-parrot.com, quoting the datalink type and what you were\ntrying to do at the time\n.", dlt);
                    exit(1);
                  }
  m=set_filter_code(options.filtercode);
  if(!(m == ((char *)NULL)))
  {
    fprintf(stderr, "set_filter_code: %s\n", m);
    exit(1);
  }

}

// packet_loop
// file iftop.c line 784
void packet_loop(void *ptr)
{
  pcap_loop(pd, -1, (void (*)(unsigned char *, struct pcap_pkthdr *, const unsigned char *))packet_handler, (unsigned char *)(void *)0);
}

// read_config
// file cfgfile.c line 247
signed int read_config(char *file, signed int whinge_on_error)
{
  signed int return_value_read_config_file_1;
  return_value_read_config_file_1=read_config_file(file, whinge_on_error);
  return return_value_read_config_file_1;
}

// read_config_file
// file cfgfile.c line 70
signed int read_config_file(const char *f, signed int whinge)
{
  signed int ret = 0;
  struct _IO_FILE *fp;
  char *line;
  signed int i = 1;
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc((unsigned long int)2048);
  line = (char *)return_value_xmalloc_1;
  fp=fopen(f, "rt");
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    if(!(whinge == 0))
    {
      return_value___errno_location_2=__errno_location();
      return_value_strerror_3=strerror(*return_value___errno_location_2);
      fprintf(stderr, "%s: %s\n", f, return_value_strerror_3);
    }

    goto fail;
  }

  char *return_value_fgets_4;
  _Bool tmp_if_expr_6;
  char *tmp_post_7;
  unsigned long int return_value_strlen_8;
  _Bool tmp_if_expr_13;
  char *tmp_post_14;
  char *return_value_strchr_19;
  char *return_value_xstrdup_20;
  union _item return_value_item_ptr_21;
  do
  {
    return_value_fgets_4=fgets(line, 2048, fp);
    if(return_value_fgets_4 == ((char *)NULL))
      break;

    char *key;
    char *value;
    char *r;
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(line);
    r = (line + (signed long int)return_value_strlen_5) - (signed long int)1;
    do
    {
      if(!(line >= r))
        tmp_if_expr_6 = (signed int)*r == 10 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      if(!tmp_if_expr_6)
        break;

      tmp_post_7 = r;
      r = r - 1l;
      *tmp_post_7 = (char)0;
    }
    while((_Bool)1);
    do
    {
      return_value_strlen_8=strlen(line);
      if(!((signed int)line[(signed long int)return_value_strlen_8 + -1l] == 92))
        break;

      unsigned long int return_value_strlen_9;
      return_value_strlen_9=strlen(line);
      unsigned long int return_value_strlen_10;
      return_value_strlen_10=strlen(line);
      char *return_value_fgets_11;
      return_value_fgets_11=fgets((line + (signed long int)return_value_strlen_9) - (signed long int)1, (signed int)((unsigned long int)2048 - return_value_strlen_10), fp);
      if(return_value_fgets_11 == ((char *)NULL))
        break;

      unsigned long int return_value_strlen_12;
      return_value_strlen_12=strlen(line);
      r = (line + (signed long int)return_value_strlen_12) - (signed long int)1;
      do
      {
        if(!(line >= r))
          tmp_if_expr_13 = (signed int)*r == 10 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_13 = (_Bool)0;
        if(!tmp_if_expr_13)
          break;

        tmp_post_14 = r;
        r = r - 1l;
        *tmp_post_14 = (char)0;
      }
      while((_Bool)1);
    }
    while((_Bool)1);
    key=strpbrk(line, "#\n");
    if(!(key == ((char *)NULL)))
      *key = (char)0;

    unsigned long int return_value_strspn_15;
    return_value_strspn_15=strspn(line, " \t");
    key = line + (signed long int)return_value_strspn_15;
    value=strchr(line, 58);
    if(!(value == ((char *)NULL)))
    {
      value = value + 1l;
      unsigned long int return_value_strcspn_16;
      return_value_strcspn_16=strcspn(key, " \t:");
      r = key + (signed long int)return_value_strcspn_16;
      if(!(r == key))
      {
        union _item *I;
        *r = (char)0;
        unsigned long int return_value_strspn_17;
        return_value_strspn_17=strspn(value, " \t");
        value = value + (signed long int)return_value_strspn_17;
        unsigned long int return_value_strlen_18;
        return_value_strlen_18=strlen(value);
        r = (value + (signed long int)return_value_strlen_18) - (signed long int)1;
        do
        {
          return_value_strchr_19=strchr(" \t", (signed int)*r);
          if(return_value_strchr_19 == ((char *)NULL))
            break;

          if(value >= r)
            break;

          r = r - 1l;
        }
        while((_Bool)1);
        r[(signed long int)1] = (char)0;
        signed int return_value_is_cfgdirective_valid_22;
        return_value_is_cfgdirective_valid_22=is_cfgdirective_valid(key);
        if(return_value_is_cfgdirective_valid_22 == 0)
          fprintf(stderr, "%s:%d: warning: unknown directive \"%s\"\n", f, i, key);

        else
        {
          return_value_xstrdup_20=xstrdup(value);
          return_value_item_ptr_21=item_ptr((void *)return_value_xstrdup_20);
          I=stringmap_insert(config, key, return_value_item_ptr_21);
          if(!(I == ((union _item *)NULL)))
            fprintf(stderr, "%s:%d: warning: repeated directive \"%s\"\n", f, i, key);

        }
      }

    }

    memset((void *)line, 0, (unsigned long int)2048);
    i = i + 1;
  }
  while((_Bool)1);
  ret = 1;

fail:
  ;
  if(!(fp == ((struct _IO_FILE *)NULL)))
    fclose(fp);

  if(!(line == ((char *)NULL)))
    xfree((void *)line);

  return ret;
}

// readable_size
// file ui_common.c line 124
void readable_size(float n, char *buf, signed int bsize, signed int ksize, signed int bytes)
{
  signed int i = 0;
  float size = (float)1;
  if(bytes == 0)
    n = n * (float)8;

  char *tmp_if_expr_1;
  char *tmp_if_expr_2;
  char *tmp_if_expr_3;
  while((_Bool)1)
  {
    if(n < size * 1000.000000f || i >= 4)
    {
      if(!(bytes == 0))
        tmp_if_expr_1 = unit_bytes[(signed long int)i];

      else
        tmp_if_expr_1 = unit_bits[(signed long int)i];
      snprintf(buf, (unsigned long int)bsize, " %4.0f%s", n / size, tmp_if_expr_1);
      break;
    }

    i = i + 1;
    size = size * (float)ksize;
    if(n < size * 10.000000f)
    {
      if(!(bytes == 0))
        tmp_if_expr_2 = unit_bytes[(signed long int)i];

      else
        tmp_if_expr_2 = unit_bits[(signed long int)i];
      snprintf(buf, (unsigned long int)bsize, " %4.2f%s", n / size, tmp_if_expr_2);
      break;
    }

    else
      if(n < size * 100.000000f)
      {
        if(!(bytes == 0))
          tmp_if_expr_3 = unit_bytes[(signed long int)i];

        else
          tmp_if_expr_3 = unit_bits[(signed long int)i];
        snprintf(buf, (unsigned long int)bsize, " %4.1f%s", n / size, tmp_if_expr_3);
        break;
      }

  }
}

// resolve
// file resolver.c line 471
void resolve(signed int af, void *addr, char *result, signed int buflen)
{
  char *hostname;
  /* tag-#anon#lUN[l*{l*{S8}_S8_}_l*{S8}_S8__'ch_pp'||l*{l*{lV}_lV_}_l*{lV}_lV__'void_pp'|] */
union anonymous_15
{
  // ch_pp
  char **ch_pp;
  // void_pp
  void **void_pp;
};

/* */
  ;
  union anonymous_15 u_hostname = { .ch_pp=&hostname };
  signed int added = 0;
  struct addr_storage *raddr;
  _Bool tmp_if_expr_10;
  _Bool tmp_statement_expression_3;
  _Bool tmp_if_expr_9;
  _Bool tmp_statement_expression_6;
  if(options.dnsresolution == 1)
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct addr_storage) /*24ul*/ );
    raddr = (struct addr_storage *)return_value_malloc_1;
    memset((void *)raddr, 0, sizeof(struct addr_storage) /*24ul*/ );
    raddr->af = af;
    raddr->len = (signed int)(af == 2 ? sizeof(struct in_addr) /*4ul*/  : sizeof(struct in6_addr) /*16ul*/ );
    memcpy((void *)&raddr->addr, addr, (unsigned long int)raddr->len);
    pthread_mutex_lock(&resolver_queue_mutex);
    enum anonymous_3 return_value_hash_find_11;
    return_value_hash_find_11=hash_find(ns_hash, (void *)raddr, u_hostname.void_pp);
    if((signed int)return_value_hash_find_11 == HASH_STATUS_OK)
      free((void *)raddr);

    else
    {
      void *return_value_xmalloc_2;
      return_value_xmalloc_2=xmalloc((unsigned long int)46);
      hostname = (char *)return_value_xmalloc_2;
      inet_ntop(af, (const void *)&raddr->addr, hostname, (unsigned int)46);
      hash_insert(ns_hash, (void *)raddr, (void *)hostname);
      if(!((1 + head) % 20 == tail))
      {
        if(af == 10)
        {
          struct in6_addr *__a = (struct in6_addr *)&raddr->addr.addr6;
          unsigned int return_value_htonl_4;
          return_value_htonl_4=htonl(0xffc00000);
          unsigned int return_value_htonl_5;
          return_value_htonl_5=htonl(0xfe800000);
          tmp_statement_expression_3 = (__a->__in6_u.__u6_addr32[(signed long int)0] & return_value_htonl_4) == return_value_htonl_5;
          if(tmp_statement_expression_3)
            tmp_if_expr_9 = (_Bool)1;

          else
          {
            struct in6_addr *resolve__1__1__2__3____a = (struct in6_addr *)&raddr->addr.addr6;
            unsigned int return_value_htonl_7;
            return_value_htonl_7=htonl(0xffc00000);
            unsigned int return_value_htonl_8;
            return_value_htonl_8=htonl(0xfec00000);
            tmp_statement_expression_6 = (resolve__1__1__2__3____a->__in6_u.__u6_addr32[(signed long int)0] & return_value_htonl_7) == return_value_htonl_8;
            tmp_if_expr_9 = tmp_statement_expression_6 ? (_Bool)1 : (_Bool)0;
          }
          tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_10 = (_Bool)0;
        if(!tmp_if_expr_10)
        {
          resolve_queue[(signed long int)head] = *raddr;
          head = (head + 1) % 20;
          added = 1;
        }

      }

    }
    pthread_mutex_unlock(&resolver_queue_mutex);
    if(added == 1)
      pthread_cond_signal(&resolver_queue_cond);

    if(buflen >= 2 && !(result == ((char *)NULL)))
    {
      strncpy(result, hostname, (unsigned long int)(buflen - 1));
      result[(signed long int)(buflen - 1)] = (char)0;
    }

  }

}

// resolver_initialise
// file resolver.h line 15
void resolver_initialise()
{
  signed int *n;
  signed int i;
  unsigned long int thread;
  tail = 0;
  head = tail;
  ns_hash=ns_hash_create();
  pthread_mutex_init(&resolver_queue_mutex, (const union anonymous_18 *)(void *)0);
  pthread_cond_init(&resolver_queue_cond, (const union anonymous_18 *)(void *)0);
  i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    void *return_value_xmalloc_1;
    return_value_xmalloc_1=xmalloc(sizeof(signed int) /*4ul*/ );
    n = (signed int *)return_value_xmalloc_1;
    *n = i;
    pthread_create(&thread, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)resolver_worker, (void *)n);
  }
}

// resolver_worker
// file resolver.c line 408
void resolver_worker(void *ptr)
{
  pthread_mutex_lock(&resolver_queue_mutex);
  sethostent(1);
  while((_Bool)1)
  {
    pthread_cond_wait(&resolver_queue_cond, &resolver_queue_mutex);
    while(!(head == tail))
    {
      char *hostname;
      struct addr_storage addr = resolve_queue[(signed long int)tail];
      tail = (tail + 1) % 20;
      pthread_mutex_unlock(&resolver_queue_mutex);
      hostname=do_resolve(&addr);
      pthread_mutex_lock(&resolver_queue_mutex);
      if(!(hostname == ((char *)NULL)))
      {
        char *old;
        /* tag-#anon#lUN[l*{l*{S8}_S8_}_l*{S8}_S8__'ch_pp'||l*{l*{lV}_lV_}_l*{lV}_lV__'void_pp'|] */
union anonymous_15
{
  // ch_pp
  char **ch_pp;
  // void_pp
  void **void_pp;
};

/* */
        ;
        union anonymous_15 u_old = { .ch_pp=&old };
        enum anonymous_3 return_value_hash_find_1;
        return_value_hash_find_1=hash_find(ns_hash, (void *)&addr, u_old.void_pp);
        if((signed int)return_value_hash_find_1 == HASH_STATUS_OK)
        {
          hash_delete(ns_hash, (void *)&addr);
          xfree((void *)old);
        }

        hash_insert(ns_hash, (void *)&addr, (void *)hostname);
      }

    }
  }
}

// screen_filter_match
// file screenfilter.c line 46
signed int screen_filter_match(char *s)
{
  signed int r;
  if(options.screenfilter == ((char *)NULL))
    return 1;

  else
  {
    r=regexec(&preg, s, (unsigned long int)0, (struct anonymous_24 *)(void *)0, 0);
    if(r == 0)
      return 1;

    else
      return 0;
  }
}

// screen_filter_set
// file screenfilter.c line 25
signed int screen_filter_set(char *s)
{
  signed int r;
  if(!(options.screenfilter == ((char *)NULL)))
  {
    xfree((void *)options.screenfilter);
    options.screenfilter = (char *)(void *)0;
    regfree(&preg);
  }

  r=regcomp(&preg, s, 1 << 1 | 1);
  if(r == 0)
  {
    options.screenfilter = s;
    return 1;
  }

  else
  {
    xfree((void *)s);
    return 0;
  }
}

// screen_hash_clear
// file ui_common.c line 229
void screen_hash_clear()
{
  struct node_tag *n = (struct node_tag *)(void *)0;
  enum anonymous_3 return_value_hash_next_item_1;
  do
  {
    return_value_hash_next_item_1=hash_next_item(screen_hash, &n);
    if(!((signed int)return_value_hash_next_item_1 == HASH_STATUS_OK))
      break;

    struct host_pair_line_tag *hpl = (struct host_pair_line_tag *)n->rec;
    hpl->total_sent = (long double)0;
    hpl->total_recv = hpl->total_sent;
    memset((void *)hpl->recv, 0, sizeof(long double [3l]) /*48ul*/ );
    memset((void *)hpl->sent, 0, sizeof(long double [3l]) /*48ul*/ );
  }
  while((_Bool)1);
}

// screen_line_bandwidth_compare
// file ui_common.c line 35
signed int screen_line_bandwidth_compare(struct host_pair_line_tag *aa, struct host_pair_line_tag *bb, signed int start_div)
{
  signed int i;
  switch((signed int)options.linedisplay)
  {
    case OPTION_LINEDISPLAY_ONE_LINE_SENT:
    {
      i = start_div;
      for( ; !(i >= 3); i = i + 1)
        if(IEEE_FLOAT_NOTEQUAL(aa->sent[(signed long int)i], bb->sent[(signed long int)i]))
          return (signed int)(aa->sent[(signed long int)i] < bb->sent[(signed long int)i]);

      goto __CPROVER_DUMP_L8;
    }
    case OPTION_LINEDISPLAY_ONE_LINE_RECV:
    {
      i = start_div;
      for( ; !(i >= 3); i = i + 1)
        if(IEEE_FLOAT_NOTEQUAL(aa->recv[(signed long int)i], bb->recv[(signed long int)i]))
          return (signed int)(aa->recv[(signed long int)i] < bb->recv[(signed long int)i]);

    }
    case OPTION_LINEDISPLAY_TWO_LINE:

    case OPTION_LINEDISPLAY_ONE_LINE_BOTH:

    default:
    {

    __CPROVER_DUMP_L8:
      ;
      i = start_div;
      for( ; !(i >= 3); i = i + 1)
        if(IEEE_FLOAT_NOTEQUAL(aa->recv[(signed long int)i] + aa->sent[(signed long int)i], bb->recv[(signed long int)i] + bb->sent[(signed long int)i]))
          return (signed int)(aa->recv[(signed long int)i] + aa->sent[(signed long int)i] < bb->recv[(signed long int)i] + bb->sent[(signed long int)i]);

      return 1;
    }
  }
}

// screen_line_compare
// file ui_common.c line 99
signed int screen_line_compare(void *a, void *b)
{
  struct host_pair_line_tag *aa = (struct host_pair_line_tag *)a;
  struct host_pair_line_tag *bb = (struct host_pair_line_tag *)b;
  if((signed int)options.sort == OPTION_SORT_DIV1)
  {
    signed int return_value_screen_line_bandwidth_compare_1;
    return_value_screen_line_bandwidth_compare_1=screen_line_bandwidth_compare(aa, bb, 0);
    return return_value_screen_line_bandwidth_compare_1;
  }

  else
    if((signed int)options.sort == OPTION_SORT_DIV2)
    {
      signed int return_value_screen_line_bandwidth_compare_2;
      return_value_screen_line_bandwidth_compare_2=screen_line_bandwidth_compare(aa, bb, 1);
      return return_value_screen_line_bandwidth_compare_2;
    }

    else
      if((signed int)options.sort == OPTION_SORT_DIV3)
      {
        signed int return_value_screen_line_bandwidth_compare_3;
        return_value_screen_line_bandwidth_compare_3=screen_line_bandwidth_compare(aa, bb, 2);
        return return_value_screen_line_bandwidth_compare_3;
      }

      else
        if((signed int)options.sort == OPTION_SORT_SRC)
        {
          signed int return_value_screen_line_host_compare_4;
          return_value_screen_line_host_compare_4=screen_line_host_compare((void *)&aa->ap._anon0.src6, (void *)&bb->ap._anon0.src6, aa, bb);
          return return_value_screen_line_host_compare_4;
        }

        else
          if((signed int)options.sort == OPTION_SORT_DEST)
          {
            signed int return_value_screen_line_host_compare_5;
            return_value_screen_line_host_compare_5=screen_line_host_compare((void *)&aa->ap._anon1.dst6, (void *)&bb->ap._anon1.dst6, aa, bb);
            return return_value_screen_line_host_compare_5;
          }

  return 1;
}

// screen_line_host_compare
// file ui_common.c line 69
signed int screen_line_host_compare(void *a, void *b, struct host_pair_line_tag *aa, struct host_pair_line_tag *bb)
{
  char hosta[256l];
  char hostb[256l];
  signed int r;
  if(!(options.dnsresolution == 0))
  {
    resolve(aa->ap.af, (struct in6_addr *)a, hosta, 256);
    resolve(bb->ap.af, (struct in6_addr *)b, hostb, 256);
  }

  else
  {
    inet_ntop(aa->ap.af, a, hosta, (unsigned int)sizeof(char [256l]) /*256ul*/ );
    inet_ntop(bb->ap.af, b, hostb, (unsigned int)sizeof(char [256l]) /*256ul*/ );
  }
  r=strcmp(hosta, hostb);
  if(r == 0)
  {
    signed int return_value_screen_line_bandwidth_compare_1;
    return_value_screen_line_bandwidth_compare_1=screen_line_bandwidth_compare(aa, bb, 2);
    return return_value_screen_line_bandwidth_compare_1;
  }

  else
    return (signed int)(r > 0);
}

// screen_list_clear
// file ui_common.c line 164
void screen_list_clear()
{
  struct sorted_list_node_tag *nn = (struct sorted_list_node_tag *)(void *)0;
  peaktotal = 0;
  peakrecv = peaktotal;
  peaksent = peakrecv;
  do
  {
    nn=sorted_list_next_item(&screen_list, nn);
    if(nn == ((struct sorted_list_node_tag *)NULL))
      break;

    free(nn->data);
  }
  while((_Bool)1);
  sorted_list_destroy(&screen_list);
}

// screen_list_init
// file ui_common.c line 159
void screen_list_init(void)
{
  screen_list.compare = screen_line_compare;
  sorted_list_initialise(&screen_list);
}

// serv_hash_compare
// file serv_hash.c line 13
signed int serv_hash_compare(void *a, void *b)
{
  struct anonymous_27 *aa = (struct anonymous_27 *)a;
  struct anonymous_27 *bb = (struct anonymous_27 *)b;
  _Bool tmp_if_expr_1;
  if(aa->port == bb->port)
    tmp_if_expr_1 = aa->protocol == bb->protocol ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  return (signed int)tmp_if_expr_1;
}

// serv_hash_copy_key
// file serv_hash.c line 25
void * serv_hash_copy_key(void *orig)
{
  struct anonymous_27 *copy;
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct anonymous_27) /*8ul*/ );
  copy = (struct anonymous_27 *)return_value_xmalloc_1;
  *copy = *((struct anonymous_27 *)orig);
  return (void *)copy;
}

// serv_hash_create
// file serv_hash.c line 39
struct anonymous_9 * serv_hash_create(void)
{
  struct anonymous_9 *hash_table;
  void *return_value_xcalloc_1;
  return_value_xcalloc_1=xcalloc((unsigned long int)123, sizeof(struct anonymous_9) /*48ul*/ );
  hash_table = (struct anonymous_9 *)return_value_xcalloc_1;
  hash_table->size = 123;
  hash_table->compare = serv_hash_compare;
  hash_table->hash = serv_hash_hash;
  hash_table->delete_key = serv_hash_delete_key;
  hash_table->copy_key = serv_hash_copy_key;
  hash_initialise(hash_table);
  return hash_table;
}

// serv_hash_delete_key
// file serv_hash.c line 32
void serv_hash_delete_key(void *key)
{
  free(key);
}

// serv_hash_hash
// file serv_hash.c line 20
signed int serv_hash_hash(void *key)
{
  struct anonymous_27 *serv = (struct anonymous_27 *)key;
  return serv->protocol % 123;
}

// serv_hash_initialise
// file serv_hash.c line 51
void serv_hash_initialise(struct anonymous_9 *sh)
{
  struct servent *ent;
  struct protoent *pent;
  struct anonymous_27 *service;
  setprotoent(1);
  do
  {
    ent=getservent();
    if(ent == ((struct servent *)NULL))
      break;

    pent=getprotobyname(ent->s_proto);
    if(!(pent == ((struct protoent *)NULL)))
    {
      void *return_value_xmalloc_1;
      return_value_xmalloc_1=xmalloc(sizeof(struct anonymous_27) /*8ul*/ );
      service = (struct anonymous_27 *)return_value_xmalloc_1;
      unsigned short int return_value_ntohs_2;
      return_value_ntohs_2=ntohs((unsigned short int)ent->s_port);
      service->port = (signed int)return_value_ntohs_2;
      service->protocol = pent->p_proto;
      char *return_value_xstrdup_3;
      return_value_xstrdup_3=xstrdup(ent->s_name);
      hash_insert(sh, (void *)service, (void *)return_value_xstrdup_3);
    }

  }
  while((_Bool)1);
  endprotoent();
}

// set_filter_code
// file iftop.c line 655
char * set_filter_code(const char *filter)
{
  char *x;
  if(!(filter == ((const char *)NULL)))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(filter);
    void *return_value_xmalloc_2;
    return_value_xmalloc_2=xmalloc(return_value_strlen_1 + sizeof(char [19l]) /*19ul*/ );
    x = (char *)return_value_xmalloc_2;
    sprintf(x, "(%s) and (ip or ip6)", filter);
  }

  else
    x=xstrdup("ip or ip6");
  signed int return_value_pcap_compile_4;
  return_value_pcap_compile_4=pcap_compile(pd, &pcap_filter, x, 1, (unsigned int)0);
  if(return_value_pcap_compile_4 == -1)
  {
    xfree((void *)x);
    char *return_value_pcap_geterr_3;
    return_value_pcap_geterr_3=pcap_geterr(pd);
    return return_value_pcap_geterr_3;
  }

  xfree((void *)x);
  signed int return_value_pcap_setfilter_6;
  return_value_pcap_setfilter_6=pcap_setfilter(pd, &pcap_filter);
  char *return_value_pcap_geterr_5;
  if(return_value_pcap_setfilter_6 == -1)
  {
    return_value_pcap_geterr_5=pcap_geterr(pd);
    return return_value_pcap_geterr_5;
  }

  else
    return (char *)(void *)0;
}

// showhelp
// file ui.c line 441
void showhelp(const char *s)
{
  strncpy(helpmsg, s, (unsigned long int)80);
  showhelphint = 1;
  helptimer=time((signed long int *)(void *)0);
  persistenthelp = 0;
  tick(1);
}

// showportstatus
// file ui.c line 468
void showportstatus()
{
  if((signed int)options.showports == OPTION_PORTS_ON)
    showhelp("Port display ON");

  else
    if((signed int)options.showports == OPTION_PORTS_OFF)
      showhelp("Port display OFF");

    else
      if((signed int)options.showports == OPTION_PORTS_DEST)
        showhelp("Port display DEST");

      else
        if((signed int)options.showports == OPTION_PORTS_SRC)
          showhelp("Port display SOURCE");

}

// sorted_list_destroy
// file sorted_list.c line 38
void sorted_list_destroy(struct anonymous_6 *list)
{
  struct sorted_list_node_tag *p;
  struct sorted_list_node_tag *n;
  p = list->root.next;
  for( ; !(p == ((struct sorted_list_node_tag *)NULL)); p = n)
  {
    n = p->next;
    free((void *)p);
  }
  list->root.next = (struct sorted_list_node_tag *)(void *)0;
}

// sorted_list_initialise
// file sorted_list.c line 51
void sorted_list_initialise(struct anonymous_6 *list)
{
  list->root.next = (struct sorted_list_node_tag *)(void *)0;
}

// sorted_list_insert
// file sorted_list.c line 12
void sorted_list_insert(struct anonymous_6 *list, void *item)
{
  struct sorted_list_node_tag *node;
  struct sorted_list_node_tag *p = &list->root;
  signed int return_value;
  if(!(p->next == ((struct sorted_list_node_tag *)NULL)))
  {
    return_value=list->compare(item, p->next->data);
    if(return_value >= 1)
      p = p->next;

  }

  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct sorted_list_node_tag) /*16ul*/ );
  node = (struct sorted_list_node_tag *)return_value_xmalloc_1;
  node->next = p->next;
  node->data = item;
  p->next = node;
}

// sorted_list_next_item
// file sorted_list.c line 29
struct sorted_list_node_tag * sorted_list_next_item(struct anonymous_6 *list, struct sorted_list_node_tag *prev)
{
  if(prev == ((struct sorted_list_node_tag *)NULL))
    return list->root.next;

  else
    return prev->next;
}

// sprint_host
// file ui_common.c line 322
void sprint_host(char *line, signed int af, struct in6_addr *addr, unsigned int port, unsigned int protocol, signed int L, signed int unspecified_as_star)
{
  char hostname[256l];
  char service[256l];
  char *s_name;
  /* tag-#anon#lUN[l*{l*{S8}_S8_}_l*{S8}_S8__'ch_pp'||l*{l*{lV}_lV_}_l*{lV}_lV__'void_pp'|] */
union anonymous_15
{
  // ch_pp
  char **ch_pp;
  // void_pp
  void **void_pp;
};

/* */
  ;
  union anonymous_15 u_s_name = { .ch_pp=&s_name };
  struct anonymous_27 skey;
  signed int left;
  _Bool tmp_statement_expression_1;
  struct in6_addr *__a = (struct in6_addr *)addr;
  _Bool tmp_if_expr_2;
  if(__a->__in6_u.__u6_addr32[0l] == 0u)
    tmp_if_expr_2 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = __a->__in6_u.__u6_addr32[(signed long int)2] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)3] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_4 = (_Bool)0;
  tmp_statement_expression_1 = tmp_if_expr_4;
  if(!(unspecified_as_star == 0) && tmp_statement_expression_1)
    sprintf(hostname, " * ");

  else
    if(!(options.dnsresolution == 0))
      resolve(af, addr, hostname, L);

    else
      inet_ntop(af, (const void *)addr, hostname, (unsigned int)sizeof(char [256l]) /*256ul*/ );
  unsigned long int return_value_strlen_5;
  return_value_strlen_5=strlen(hostname);
  left = (signed int)return_value_strlen_5;
  _Bool tmp_if_expr_7;
  enum anonymous_3 return_value_hash_find_6;
  if(!(port == 0u))
  {
    skey.port = (signed int)port;
    skey.protocol = (signed int)protocol;
    if(!(options.portresolution == 0))
    {
      return_value_hash_find_6=hash_find(service_hash, (void *)&skey, u_s_name.void_pp);
      tmp_if_expr_7 = (signed int)return_value_hash_find_6 == HASH_STATUS_OK ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
      snprintf(service, (unsigned long int)256, ":%s", s_name);

    else
      snprintf(service, (unsigned long int)256, ":%d", port);
  }

  else
    service[(signed long int)0] = (char)0;
  if(af == 2 || port == 0u || !(L >= 2))
    sprintf(line, "%-*s", L, (const void *)hostname);

  else
  {
    sprintf(line, "[%-.*s]", L - 2, (const void *)hostname);
    left = left + 2;
  }
  unsigned long int return_value_strlen_9;
  return_value_strlen_9=strlen(service);
  if(!((unsigned long int)L + -return_value_strlen_9 >= (unsigned long int)left))
  {
    unsigned long int return_value_strlen_8;
    return_value_strlen_8=strlen(service);
    left = (signed int)((unsigned long int)L - return_value_strlen_8);
    if(!(left >= 0))
      left = 0;

  }

  sprintf(line + (signed long int)left, "%-*s", L - left, (const void *)service);
}

// stringmap_delete
// file stringmap.c line 33
void stringmap_delete(struct _stringmap *S)
{
  if(!(S == ((struct _stringmap *)NULL)))
  {
    if(!(S->l == ((struct _stringmap *)NULL)))
      stringmap_delete(S->l);

    if(!(S->g == ((struct _stringmap *)NULL)))
      stringmap_delete(S->g);

    xfree((void *)S->key);
    xfree((void *)S);
  }

}

// stringmap_delete_free
// file stringmap.c line 45
void stringmap_delete_free(struct _stringmap *S)
{
  if(!(S == ((struct _stringmap *)NULL)))
  {
    if(!(S->l == ((struct _stringmap *)NULL)))
      stringmap_delete_free(S->l);

    if(!(S->g == ((struct _stringmap *)NULL)))
      stringmap_delete_free(S->g);

    xfree((void *)S->key);
    xfree(S->d.v);
    xfree((void *)S);
  }

}

// stringmap_find
// file stringmap.c line 96
struct _stringmap * stringmap_find(struct _stringmap * const S, const char *k)
{
  struct _stringmap *S2;
  signed int i;
  _Bool tmp_if_expr_1;
  if(S == ((struct _stringmap *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = S->key == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return ((struct _stringmap *)NULL);

  else
  {
    S2 = S;
    do
    {
      i=strcmp(k, S2->key);
      if(i == 0)
        return S2;

      else
        if(!(i >= 0))
        {
          if(!(S2->l == ((struct _stringmap *)NULL)))
            S2 = S2->l;

          else
            return (struct _stringmap *)(void *)0;
        }

        else
          if(i >= 1)
          {
            if(!(S2->g == ((struct _stringmap *)NULL)))
              S2 = S2->g;

            else
              return (struct _stringmap *)(void *)0;
          }

    }
    while((_Bool)1);
  }
}

// stringmap_insert
// file stringmap.c line 59
union _item * stringmap_insert(struct _stringmap *S, const char *k, const union _item d)
{
  if(S == ((struct _stringmap *)NULL))
    return (union _item *)(void *)0;

  else
    if(S->key == ((char *)NULL))
    {
      S->key=xstrdup(k);
      S->d = d;
      return (union _item *)(void *)0;
    }

    else
    {
      struct _stringmap *S2 = S;
      do
      {
        signed int i;
        i=strcmp(k, S2->key);
        if(i == 0)
          return &S2->d;

        else
          if(!(i >= 0))
          {
            if(!(S2->l == ((struct _stringmap *)NULL)))
              S2 = S2->l;

            else
            {
              S2->l=stringmap_new();
              if(S2->l == ((struct _stringmap *)NULL))
                return (union _item *)(void *)0;

              S2->l->key=xstrdup(k);
              S2->l->d = d;
              return (union _item *)(void *)0;
            }
          }

          else
            if(i >= 1)
            {
              if(!(S2->g == ((struct _stringmap *)NULL)))
                S2 = S2->g;

              else
              {
                S2->g=stringmap_new();
                if(S2->g == ((struct _stringmap *)NULL))
                  return (union _item *)(void *)0;

                S2->g->key=xstrdup(k);
                S2->g->d = d;
                return (union _item *)(void *)0;
              }
            }

      }
      while((_Bool)1);
    }
}

// stringmap_new
// file stringmap.c line 23
struct _stringmap * stringmap_new(void)
{
  struct _stringmap *S;
  void *return_value_xcalloc_1;
  return_value_xcalloc_1=xcalloc(sizeof(struct _stringmap) /*32ul*/ , (unsigned long int)1);
  S = (struct _stringmap *)return_value_xcalloc_1;
  return S;
}

// tick
// file iftop.c line 140
void tick(signed int print)
{
  signed long int t;
  pthread_mutex_lock(&tick_mutex);
  t=time((signed long int *)(void *)0);
  if(t + -last_timestamp >= 2l)
  {
    analyse_data();
    if(!(options.no_curses == 0))
    {
      if(options.timed_output == 0 || t + -first_timestamp >= (signed long int)options.timed_output && !(options.timed_output == 0))
      {
        tui_print();
        if(!(options.timed_output == 0))
          finish(2);

      }

    }

    else
      ui_print();
    history_rotate();
    last_timestamp = t;
  }

  else
    if(!(options.no_curses == 0))
      tui_tick(print);

    else
      ui_tick(print);
  pthread_mutex_unlock(&tick_mutex);
}

// tui_init
// file tui.h line 11
void tui_init()
{
  screen_list_init();
  screen_hash=addr_hash_create();
  service_hash=serv_hash_create();
  serv_hash_initialise(service_hash);
  printf("Listening on %s\n", options.interface);
}

// tui_loop
// file tui.h line 12
void tui_loop()
{
  signed int i;
  struct termios new_termios;
  struct termios old_termios;
  tcgetattr(0, &old_termios);
  new_termios = old_termios;
  new_termios.c_lflag = new_termios.c_lflag & (unsigned int)~(0000002 | 0000010);
  new_termios.c_cc[(signed long int)6] = (unsigned char)1;
  new_termios.c_cc[(signed long int)5] = (unsigned char)0;
  tcsetattr(0, 0, &new_termios);
  do
  {
    i=getchar();
    if(i == 113)
      break;

    if(!(foad == 0))
      break;

    switch(i)
    {
      case 117:
      {
        tick(1);
        break;
      }
      case 110:
      {
        options.dnsresolution = options.dnsresolution ^ 1;
        printf("DNS resolution is %s.\n\n", options.dnsresolution != 0 ? "ON" : "OFF");
        tick(1);
        break;
      }
      case 78:
      {
        options.portresolution = options.portresolution ^ 1;
        printf("Port resolution is %s.\n\n", options.portresolution != 0 ? "ON" : "OFF");
        tick(1);
        break;
      }
      case 115:
      {
        options.aggregate_src = options.aggregate_src ^ 1;
        printf("%s source host\n\n", options.aggregate_src != 0 ? "Hide" : "Show");
        tick(1);
        break;
      }
      case 100:
      {
        options.aggregate_dest = options.aggregate_dest ^ 1;
        printf("%s destination host\n\n", options.aggregate_dest != 0 ? "Hide" : "Show");
        tick(1);
        break;
      }
      case 83:
      {
        if((signed int)options.showports == OPTION_PORTS_OFF)
          options.showports = (enum anonymous_33)OPTION_PORTS_SRC;

        else
          if((signed int)options.showports == OPTION_PORTS_DEST)
            options.showports = (enum anonymous_33)OPTION_PORTS_ON;

          else
            if((signed int)options.showports == OPTION_PORTS_ON)
              options.showports = (enum anonymous_33)OPTION_PORTS_DEST;

            else
              options.showports = (enum anonymous_33)OPTION_PORTS_OFF;
        printf("Showing ports:%s%s%s%s.\n\n", (signed int)options.showports == OPTION_PORTS_SRC ? " src" : "", (signed int)options.showports == OPTION_PORTS_DEST ? " dest" : "", (signed int)options.showports == OPTION_PORTS_ON ? " both" : "", (signed int)options.showports == OPTION_PORTS_OFF ? " none" : "");
        tick(1);
        break;
      }
      case 68:
      {
        if((signed int)options.showports == OPTION_PORTS_OFF)
          options.showports = (enum anonymous_33)OPTION_PORTS_DEST;

        else
          if((signed int)options.showports == OPTION_PORTS_SRC)
            options.showports = (enum anonymous_33)OPTION_PORTS_ON;

          else
            if((signed int)options.showports == OPTION_PORTS_ON)
              options.showports = (enum anonymous_33)OPTION_PORTS_SRC;

            else
              options.showports = (enum anonymous_33)OPTION_PORTS_OFF;
        printf("Showing ports:%s%s%s%s.\n\n", (signed int)options.showports == OPTION_PORTS_SRC ? " src" : "", (signed int)options.showports == OPTION_PORTS_DEST ? " dest" : "", (signed int)options.showports == OPTION_PORTS_ON ? " both" : "", (signed int)options.showports == OPTION_PORTS_OFF ? " none" : "");
        tick(1);
        break;
      }
      case 112:
      {
        options.showports = (enum anonymous_33)((signed int)options.showports == OPTION_PORTS_OFF ? OPTION_PORTS_ON : OPTION_PORTS_OFF);
        printf("Showing ports:%s%s%s%s.\n\n", (signed int)options.showports == OPTION_PORTS_SRC ? " src" : "", (signed int)options.showports == OPTION_PORTS_DEST ? " dest" : "", (signed int)options.showports == OPTION_PORTS_ON ? " both" : "", (signed int)options.showports == OPTION_PORTS_OFF ? " none" : "");
        tick(1);
        break;
      }
      case 80:
      {
        options.paused = options.paused ^ 1;
        if(!(options.paused == 0))
          printf("Pausing... press 'P' again to continue.\n");

        else
        {
          printf("Continuing.\n\n");
          tick(1);
        }
        break;
      }
      case 111:
      {
        options.freezeorder = options.freezeorder ^ 1;
        printf("Order %s.\n\n", options.freezeorder != 0 ? "frozen" : "unfrozen");
        tick(1);
        break;
      }
      case 49:
      {
        options.sort = (enum anonymous_34)OPTION_SORT_DIV1;
        printf("Sorting by column 1.\n\n");
        tick(1);
        break;
      }
      case 50:
      {
        options.sort = (enum anonymous_34)OPTION_SORT_DIV2;
        printf("Sorting by column 2.\n\n");
        tick(1);
        break;
      }
      case 51:
      {
        options.sort = (enum anonymous_34)OPTION_SORT_DIV3;
        printf("Sorting by column 3.\n\n");
        tick(1);
        break;
      }
      case 60:
      {
        options.sort = (enum anonymous_34)OPTION_SORT_SRC;
        printf("Sorting by column source.\n\n");
        tick(1);
        break;
      }
      case 62:
      {
        options.sort = (enum anonymous_34)OPTION_SORT_DEST;
        printf("Sorting by column destination.\n\n");
        tick(1);
      }
    }
  }
  while((_Bool)1);
  tcsetattr(0, 0, &old_termios);
}

// tui_print
// file tui.h line 10
void tui_print()
{
  struct sorted_list_node_tag *nn = (struct sorted_list_node_tag *)(void *)0;
  char host1[256l];
  char host2[256l];
  char buf0_10[10l];
  char buf1_10[10l];
  char buf2_10[10l];
  signed int j;
  signed int l = 0;
  static char *label;
  if(label == ((char *)NULL))
  {
    xfree((void *)label);
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)(40 + 1), (unsigned long int)1);
    label = (char *)return_value_calloc_1;
  }

  static char *labellong;
  if(labellong == ((char *)NULL))
  {
    xfree((void *)labellong);
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)(40 + 1 + 9), (unsigned long int)1);
    labellong = (char *)return_value_calloc_2;
  }

  if(options.paused == 0)
  {
    snprintf(label, (unsigned long int)40, "%-*s", 40, (const void *)"Host name (port/service if enabled)");
    printf("%s %s     %10s %10s %10s %10s\n", (const void *)"   #", label, (const void *)"last 2s", (const void *)"last 10s", (const void *)"last 40s", (const void *)"cumulative");
    j = 0;
    for( ; !(j >= 40); j = j + 1)
      printf("-");
    printf("\n");
    do
    {
      nn=sorted_list_next_item(&screen_list, nn);
      if(nn == ((struct sorted_list_node_tag *)NULL))
        break;

      if(l >= options.num_lines)
        break;

      l = l + 1;
      struct host_pair_line_tag *screen_line = (struct host_pair_line_tag *)nn->data;
      sprint_host(host1, screen_line->ap.af, &screen_line->ap._anon0.src6, (unsigned int)screen_line->ap.src_port, (unsigned int)screen_line->ap.protocol, 40, options.aggregate_src);
      sprint_host(host2, screen_line->ap.af, &screen_line->ap._anon1.dst6, (unsigned int)screen_line->ap.dst_port, (unsigned int)screen_line->ap.protocol, 40, options.aggregate_dest);
      printf("%4d %s%s", l, (const void *)host1, (const void *)" =>");
      j = 0;
      for( ; !(j >= 3); j = j + 1)
      {
        readable_size((float)screen_line->sent[(signed long int)j], buf0_10, 10, 1024, options.bandwidth_in_bytes);
        printf(" %10s", (const void *)buf0_10);
      }
      readable_size((float)screen_line->total_sent, buf0_10, 10, 1024, 1);
      printf(" %10s\n", (const void *)buf0_10);
      printf("     %s%s", (const void *)host2, (const void *)" <=");
      j = 0;
      for( ; !(j >= 3); j = j + 1)
      {
        readable_size((float)screen_line->recv[(signed long int)j], buf0_10, 10, 1024, options.bandwidth_in_bytes);
        printf(" %10s", (const void *)buf0_10);
      }
      readable_size((float)screen_line->total_recv, buf0_10, 10, 1024, 1);
      printf(" %10s\n", (const void *)buf0_10);
    }
    while((_Bool)1);
    j = 0;
    for( ; !(j >= 40); j = j + 1)
      printf("-");
    printf("\n");
    snprintf(labellong, (unsigned long int)(40 + 9), "%-*s", 40 + 9, (const void *)"Total send rate:");
    printf("%s ", labellong);
    j = 0;
    for( ; !(j >= 3); j = j + 1)
    {
      readable_size((float)((struct host_pair_line_tag *)&totals)->sent[(signed long int)j], buf0_10, 10, 1024, options.bandwidth_in_bytes);
      printf("%10s%c", (const void *)buf0_10, j == 3 - 1 ? 10 : 32);
    }
    snprintf(labellong, (unsigned long int)(40 + 9), "%-*s", 40 + 9, (const void *)"Total receive rate:");
    printf("%s ", labellong);
    j = 0;
    for( ; !(j >= 3); j = j + 1)
    {
      readable_size((float)((struct host_pair_line_tag *)&totals)->recv[(signed long int)j], buf0_10, 10, 1024, options.bandwidth_in_bytes);
      printf("%10s%c", (const void *)buf0_10, j == 3 - 1 ? 10 : 32);
    }
    snprintf(labellong, (unsigned long int)(40 + 9), "%-*s", 40 + 9, (const void *)"Total send and receive rate:");
    printf("%s ", labellong);
    j = 0;
    for( ; !(j >= 3); j = j + 1)
    {
      readable_size((float)(((struct host_pair_line_tag *)&totals)->sent[(signed long int)j] + ((struct host_pair_line_tag *)&totals)->recv[(signed long int)j]), buf0_10, 10, 1024, options.bandwidth_in_bytes);
      printf("%10s%c", (const void *)buf0_10, j == 3 - 1 ? 10 : 32);
    }
    j = 0;
    for( ; !(j >= 40); j = j + 1)
      printf("-");
    printf("\n");
    snprintf(labellong, (unsigned long int)(40 + 9), "%-*s", 40 + 9, (const void *)"Peak rate (sent/received/total):");
    readable_size((float)(peaksent / 2), buf0_10, 10, 1024, options.bandwidth_in_bytes);
    readable_size((float)(peakrecv / 2), buf1_10, 10, 1024, options.bandwidth_in_bytes);
    readable_size((float)(peaktotal / 2), buf2_10, 10, 1024, options.bandwidth_in_bytes);
    printf("%s %10s %10s %10s\n", labellong, (const void *)buf0_10, (const void *)buf1_10, (const void *)buf2_10);
    snprintf(labellong, (unsigned long int)(40 + 9), "%-*s", 40 + 9, (const void *)"Cumulative (sent/received/total):");
    readable_size((float)history_totals.total_sent, buf0_10, 10, 1024, 1);
    readable_size((float)history_totals.total_recv, buf1_10, 10, 1024, 1);
    readable_size((float)(history_totals.total_recv + history_totals.total_sent), buf2_10, 10, 1024, 1);
    printf("%s %10s %10s %10s\n", labellong, (const void *)buf0_10, (const void *)buf1_10, (const void *)buf2_10);
    j = 0;
    for( ; !(j >= 40); j = j + 1)
      printf("=");
    printf("\n\n");
  }

}

// tui_tick
// file tui.h line 13
void tui_tick(signed int print)
{
  if(!(print == 0))
    tui_print();

}

// ui_curses_init
// file ui.c line 431
void ui_curses_init()
{
  initscr();
  keypad(stdscr, (_Bool)1);
  nonl();
  cbreak();
  noecho();
  curs_set(0);
  halfdelay(2);
}

// ui_finish
// file ui.h line 12
void ui_finish()
{
  endwin();
}

// ui_init
// file ui.h line 15
void ui_init()
{
  char msg[20l];
  ui_curses_init();
  werase(stdscr);
  screen_list_init();
  screen_hash=addr_hash_create();
  service_hash=serv_hash_create();
  serv_hash_initialise(service_hash);
  snprintf(msg, (unsigned long int)20, "Listening on %s", options.interface);
  showhelp(msg);
}

// ui_loop
// file ui.h line 11
void ui_loop()
{
  while(foad == 0)
  {
    signed int i;
    i=wgetch(stdscr);
    if(!(i == 113))
    {
      if(i == 110)
        goto __CPROVER_DUMP_L3;

      if(i == 78)
        goto __CPROVER_DUMP_L6;

      if(i == 63 || i == 104)
        goto __CPROVER_DUMP_L9;

      if(i == 98)
        goto __CPROVER_DUMP_L10;

      if(i == 66)
        goto __CPROVER_DUMP_L13;

      if(i == 115)
        goto __CPROVER_DUMP_L17;

      if(i == 100)
        goto __CPROVER_DUMP_L20;

      if(i == 83)
        goto __CPROVER_DUMP_L23;

      if(i == 68)
        goto __CPROVER_DUMP_L28;

      if(i == 112)
        goto __CPROVER_DUMP_L33;

      if(i == 80)
        goto __CPROVER_DUMP_L34;

      if(i == 111)
        goto __CPROVER_DUMP_L37;

      if(i == 49)
        goto __CPROVER_DUMP_L40;

      if(i == 50)
        goto __CPROVER_DUMP_L41;

      if(i == 51)
        goto __CPROVER_DUMP_L42;

      if(i == 60)
        goto __CPROVER_DUMP_L43;

      if(i == 62)
        goto __CPROVER_DUMP_L44;

      if(i == 106)
        goto __CPROVER_DUMP_L45;

      if(i == 107)
        goto __CPROVER_DUMP_L46;

      if(i == 116)
        goto __CPROVER_DUMP_L48;

      if(i == 102)
        goto __CPROVER_DUMP_L54;

      if(i == 108)
        goto __CPROVER_DUMP_L59;

      if(i == 33)
        goto __CPROVER_DUMP_L62;

      if(i == 84)
        goto __CPROVER_DUMP_L63;

      if(i == 76)
        goto __CPROVER_DUMP_L66;

      if(i == 12 || i == 0515)
        goto __CPROVER_DUMP_L67;

      if(i == -1)
        goto __CPROVER_DUMP_L68;

    }

    else
    {
      foad = 1;
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L3:
      ;
      if(!(options.dnsresolution == 0))
      {
        options.dnsresolution = 0;
        showhelp("DNS resolution off");
      }

      else
      {
        options.dnsresolution = 1;
        showhelp("DNS resolution on");
      }
      tick(1);
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L6:
      ;
      if(!(options.portresolution == 0))
      {
        options.portresolution = 0;
        showhelp("Port resolution off");
      }

      else
      {
        options.portresolution = 1;
        showhelp("Port resolution on");
      }
      tick(1);
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L9:
      ;
      options.showhelp = (signed int)!(options.showhelp != 0);
      tick(1);
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L10:
      ;
      if(!(options.showbars == 0))
      {
        options.showbars = 0;
        showhelp("Bars off");
      }

      else
      {
        options.showbars = 1;
        showhelp("Bars on");
      }
      tick(1);
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L13:
      ;
      options.bar_interval = (options.bar_interval + 1) % 3;
      if(options.bar_interval == 0)
        showhelp("Bars show 2s average");

      else
        if(options.bar_interval == 1)
          showhelp("Bars show 10s average");

        else
          showhelp("Bars show 40s average");
      ui_print();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L17:
      ;
      if(!(options.aggregate_src == 0))
      {
        options.aggregate_src = 0;
        showhelp("Show source host");
      }

      else
      {
        options.aggregate_src = 1;
        showhelp("Hide source host");
      }
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L20:
      ;
      if(!(options.aggregate_dest == 0))
      {
        options.aggregate_dest = 0;
        showhelp("Show dest host");
      }

      else
      {
        options.aggregate_dest = 1;
        showhelp("Hide dest host");
      }
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L23:
      ;
      if((signed int)options.showports == OPTION_PORTS_OFF)
        options.showports = (enum anonymous_33)OPTION_PORTS_SRC;

      else
        if((signed int)options.showports == OPTION_PORTS_DEST)
          options.showports = (enum anonymous_33)OPTION_PORTS_ON;

        else
          if((signed int)options.showports == OPTION_PORTS_ON)
            options.showports = (enum anonymous_33)OPTION_PORTS_DEST;

          else
            options.showports = (enum anonymous_33)OPTION_PORTS_OFF;
      showportstatus();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L28:
      ;
      if((signed int)options.showports == OPTION_PORTS_OFF)
        options.showports = (enum anonymous_33)OPTION_PORTS_DEST;

      else
        if((signed int)options.showports == OPTION_PORTS_SRC)
          options.showports = (enum anonymous_33)OPTION_PORTS_ON;

        else
          if((signed int)options.showports == OPTION_PORTS_ON)
            options.showports = (enum anonymous_33)OPTION_PORTS_SRC;

          else
            options.showports = (enum anonymous_33)OPTION_PORTS_OFF;
      showportstatus();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L33:
      ;
      options.showports = (enum anonymous_33)((signed int)options.showports == OPTION_PORTS_OFF ? OPTION_PORTS_ON : OPTION_PORTS_OFF);
      showportstatus();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L34:
      ;
      if(!(options.paused == 0))
      {
        options.paused = 0;
        showhelp("Display unpaused");
      }

      else
      {
        options.paused = 1;
        showhelp("Display paused");
        persistenthelp = 1;
      }
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L37:
      ;
      if(!(options.freezeorder == 0))
      {
        options.freezeorder = 0;
        showhelp("Order unfrozen");
      }

      else
      {
        options.freezeorder = 1;
        showhelp("Order frozen");
        persistenthelp = 1;
      }
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L40:
      ;
      options.sort = (enum anonymous_34)OPTION_SORT_DIV1;
      showhelp("Sort by col 1");
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L41:
      ;
      options.sort = (enum anonymous_34)OPTION_SORT_DIV2;
      showhelp("Sort by col 2");
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L42:
      ;
      options.sort = (enum anonymous_34)OPTION_SORT_DIV3;
      showhelp("Sort by col 3");
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L43:
      ;
      options.sort = (enum anonymous_34)OPTION_SORT_SRC;
      showhelp("Sort by source");
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L44:
      ;
      options.sort = (enum anonymous_34)OPTION_SORT_DEST;
      showhelp("Sort by dest");
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L45:
      ;
      options.screen_offset = options.screen_offset + 1;
      ui_print();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L46:
      ;
      if(options.screen_offset >= 1)
      {
        options.screen_offset = options.screen_offset - 1;
        ui_print();
      }

      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L48:
      ;
      options.linedisplay = (enum anonymous_8)(((signed int)options.linedisplay + 1) % 4);
      switch((signed int)options.linedisplay)
      {
        case OPTION_LINEDISPLAY_TWO_LINE:
        {
          showhelp("Two lines per host");
          break;
        }
        case OPTION_LINEDISPLAY_ONE_LINE_SENT:
        {
          showhelp("Sent traffic only");
          break;
        }
        case OPTION_LINEDISPLAY_ONE_LINE_RECV:
        {
          showhelp("Received traffic only");
          break;
        }
        case OPTION_LINEDISPLAY_ONE_LINE_BOTH:
          showhelp("One line per host");
      }
      ui_print();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L54:
      ;
      char *ui_loop__1__1__1__28__s;
      dontshowdisplay = 1;
      ui_loop__1__1__1__28__s=edline(0, "Net filter", options.filtercode);
      if(!(ui_loop__1__1__1__28__s == ((char *)NULL)))
      {
        char *m;
        unsigned long int return_value_strspn_1;
        return_value_strspn_1=strspn(ui_loop__1__1__1__28__s, " \t");
        if((signed int)ui_loop__1__1__1__28__s[(signed long int)return_value_strspn_1] == 0)
        {
          xfree((void *)ui_loop__1__1__1__28__s);
          ui_loop__1__1__1__28__s = (char *)(void *)0;
        }

        m=set_filter_code(ui_loop__1__1__1__28__s);
        if(m == ((char *)NULL))
        {
          xfree((void *)options.filtercode);
          options.filtercode = ui_loop__1__1__1__28__s;
          wmove(stdscr, COLS - 1, LINES - 1);
          wrefresh(curscr);
          showhelp("Installed new filter");
        }

        else
        {
          showhelp(m);
          xfree((void *)ui_loop__1__1__1__28__s);
        }
      }

      dontshowdisplay = 0;
      ui_print();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L59:
      ;
      char *s;
      dontshowdisplay = 1;
      s=edline(0, "Screen filter", options.screenfilter);
      if(!(s == ((char *)NULL)))
      {
        signed int return_value_screen_filter_set_2;
        return_value_screen_filter_set_2=screen_filter_set(s);
        if(return_value_screen_filter_set_2 == 0)
          showhelp("Invalid regexp");

      }

      dontshowdisplay = 0;
      ui_print();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L62:
      ;
      showhelp("Sorry, subshells have been disabled.");
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L63:
      ;
      options.show_totals = (signed int)!(options.show_totals != 0);
      if(!(options.show_totals == 0))
        showhelp("Show cumulative totals");

      else
        showhelp("Hide cumulative totals");
      ui_print();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L66:
      ;
      options.log_scale = (signed int)!(options.log_scale != 0);
      showhelp(options.log_scale != 0 ? "Logarithmic scale" : "Linear scale");
      ui_print();
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L67:
      ;
      wrefresh(curscr);
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L68:
      ;
      goto __CPROVER_DUMP_L70;
    }
    showhelp("Press H or ? for help");

  __CPROVER_DUMP_L70:
    ;
    tick(0);
  }
}

// ui_print
// file ui.h line 10
void ui_print()
{
  struct sorted_list_node_tag *nn = (struct sorted_list_node_tag *)(void *)0;
  char host1[256l];
  char host2[256l];
  signed int y = 0;
  signed int return_value_screen_filter_match_3;
  signed int return_value_wmove_6;
  signed int return_value_wmove_7;
  signed int return_value_wmove_8;
  signed int return_value_wmove_9;
  signed int return_value_wmove_10;
  unsigned long int return_value_strlen_29;
  if(dontshowdisplay == 0)
  {
    static signed int lcols;
    static char *line;
    if(line == ((char *)NULL) || !(lcols == COLS))
    {
      xfree((void *)line);
      void *return_value_calloc_1;
      return_value_calloc_1=calloc((unsigned long int)(COLS + 1), (unsigned long int)1);
      line = (char *)return_value_calloc_1;
    }

    werase(stdscr);
    draw_bar_scale(&y);
    if(!(options.showhelp == 0))
    {
      signed int return_value_wmove_2;
      return_value_wmove_2=wmove(stdscr, y, 0);
      if(return_value_wmove_2 == -1)
        -1;

      else
        waddnstr(stdscr, "Host display:                          General:\n n - toggle DNS host resolution         P - pause display\n s - toggle show source host            h - toggle this help display\n d - toggle show destination host       b - toggle bar graph display\n t - cycle line display mode            B - cycle bar graph average\n                                        T - toggle cumulative line totals\nPort display:                           j/k - scroll display\n N - toggle service resolution          f - edit filter code\n S - toggle show source port            l - set screen filter\n D - toggle show destination port       L - lin/log scales\n p - toggle port display                ! - shell command\n                                        q - quit\nSorting:\n 1/2/3 - sort by 1st/2nd/3rd column\n < - sort by source name\n > - sort by dest name\n o - freeze current order\n\niftop, version 1.0pre4", -1);
    }

    else
    {
      signed int i = 0;
      for( ; !(i >= options.screen_offset); i = i + 1)
      {
        nn=sorted_list_next_item(&screen_list, nn);
        if(nn == ((struct sorted_list_node_tag *)NULL))
          break;

      }
      if(i == 0 || !(nn == ((struct sorted_list_node_tag *)NULL)))
        while(!(y >= LINES + -5))
        {
          nn=sorted_list_next_item(&screen_list, nn);
          if(nn == ((struct sorted_list_node_tag *)NULL))
            break;

          signed int x = 0;
          signed int L;
          struct host_pair_line_tag *screen_line = (struct host_pair_line_tag *)nn->data;
          if(!(y >= LINES + -5))
          {
            L = ((COLS - 8 * 3) - 4) / 2;
            if(!(options.show_totals == 0))
              L = L - 4;

            if(L >= 257)
              L = 256;

            sprint_host(host1, screen_line->ap.af, &screen_line->ap._anon0.src6, (unsigned int)screen_line->ap.src_port, (unsigned int)screen_line->ap.protocol, L, options.aggregate_src);
            sprint_host(host2, screen_line->ap.af, &screen_line->ap._anon1.dst6, (unsigned int)screen_line->ap.dst_port, (unsigned int)screen_line->ap.protocol, L, options.aggregate_dest);
            signed int return_value_screen_filter_match_4;
            return_value_screen_filter_match_4=screen_filter_match(host1);
            if(return_value_screen_filter_match_4 == 0)
            {
              return_value_screen_filter_match_3=screen_filter_match(host2);
              if(return_value_screen_filter_match_3 == 0)
                continue;

            }

            signed int return_value_wmove_5;
            return_value_wmove_5=wmove(stdscr, y, x);
            if(return_value_wmove_5 == -1)
              -1;

            else
              waddnstr(stdscr, host1, -1);
            x = x + L;
            switch((signed int)options.linedisplay)
            {
              case OPTION_LINEDISPLAY_TWO_LINE:
              {
                return_value_wmove_6=wmove(stdscr, y, x);
                if(return_value_wmove_6 == -1)
                  -1;

                else
                  waddnstr(stdscr, " => ", -1);
                return_value_wmove_7=wmove(stdscr, y + 1, x);
                if(return_value_wmove_7 == -1)
                  -1;

                else
                  waddnstr(stdscr, " <= ", -1);
                break;
              }
              case OPTION_LINEDISPLAY_ONE_LINE_BOTH:
              {
                return_value_wmove_8=wmove(stdscr, y, x);
                if(return_value_wmove_8 == -1)
                  -1;

                else
                  waddnstr(stdscr, "<=> ", -1);
                break;
              }
              case OPTION_LINEDISPLAY_ONE_LINE_SENT:
              {
                return_value_wmove_9=wmove(stdscr, y, x);
                if(return_value_wmove_9 == -1)
                  -1;

                else
                  waddnstr(stdscr, " => ", -1);
                break;
              }
              case OPTION_LINEDISPLAY_ONE_LINE_RECV:
              {
                return_value_wmove_10=wmove(stdscr, y, x);
                if(return_value_wmove_10 == -1)
                  -1;

                else
                  waddnstr(stdscr, " <= ", -1);
              }
            }
            x = x + 4;
            signed int return_value_wmove_11;
            return_value_wmove_11=wmove(stdscr, y, x);
            if(return_value_wmove_11 == -1)
              -1;

            else
              waddnstr(stdscr, host2, -1);
            if(!(options.show_totals == 0))
              draw_line_total((float)screen_line->total_sent, (float)screen_line->total_recv, y, COLS - 8 * (3 + 1), options.linedisplay, 1);

            draw_line_totals(y, screen_line, options.linedisplay);
          }

          if((signed int)options.linedisplay == OPTION_LINEDISPLAY_TWO_LINE)
            y = y + 2;

          else
            y = y + 1;
        }

    }
    y = LINES - 3;
    signed int return_value_wmove_12;
    return_value_wmove_12=wmove(stdscr, y - 1, 0);
    if(return_value_wmove_12 == -1)
      -1;

    else
      whline(stdscr, (unsigned long int)0, COLS);
    signed int return_value_wmove_13;
    return_value_wmove_13=wmove(stdscr, y, 0);
    if(return_value_wmove_13 == -1)
      -1;

    else
      waddnstr(stdscr, "TX: ", -1);
    signed int return_value_wmove_14;
    return_value_wmove_14=wmove(stdscr, y + 1, 0);
    if(return_value_wmove_14 == -1)
      -1;

    else
      waddnstr(stdscr, "RX: ", -1);
    signed int return_value_wmove_15;
    return_value_wmove_15=wmove(stdscr, y + 2, 0);
    if(return_value_wmove_15 == -1)
      -1;

    else
      waddnstr(stdscr, "TOTAL: ", -1);
    signed int return_value_wmove_16;
    return_value_wmove_16=wmove(stdscr, y, 16);
    if(return_value_wmove_16 == -1)
      -1;

    else
      waddnstr(stdscr, "cum: ", -1);
    readable_size((float)history_totals.total_sent, line, 10, 1024, 1);
    signed int return_value_wmove_17;
    return_value_wmove_17=wmove(stdscr, y, 22);
    if(return_value_wmove_17 == -1)
      -1;

    else
      waddnstr(stdscr, line, -1);
    readable_size((float)history_totals.total_recv, line, 10, 1024, 1);
    signed int return_value_wmove_18;
    return_value_wmove_18=wmove(stdscr, y + 1, 22);
    if(return_value_wmove_18 == -1)
      -1;

    else
      waddnstr(stdscr, line, -1);
    readable_size((float)(history_totals.total_recv + history_totals.total_sent), line, 10, 1024, 1);
    signed int return_value_wmove_19;
    return_value_wmove_19=wmove(stdscr, y + 2, 22);
    if(return_value_wmove_19 == -1)
      -1;

    else
      waddnstr(stdscr, line, -1);
    signed int return_value_wmove_20;
    return_value_wmove_20=wmove(stdscr, y, 32);
    if(return_value_wmove_20 == -1)
      -1;

    else
      waddnstr(stdscr, "peak: ", -1);
    readable_size((float)(peaksent / 2), line, 10, 1024, options.bandwidth_in_bytes);
    signed int return_value_wmove_21;
    return_value_wmove_21=wmove(stdscr, y, 39);
    if(return_value_wmove_21 == -1)
      -1;

    else
      waddnstr(stdscr, line, -1);
    readable_size((float)(peakrecv / 2), line, 10, 1024, options.bandwidth_in_bytes);
    signed int return_value_wmove_22;
    return_value_wmove_22=wmove(stdscr, y + 1, 39);
    if(return_value_wmove_22 == -1)
      -1;

    else
      waddnstr(stdscr, line, -1);
    readable_size((float)(peaktotal / 2), line, 10, 1024, options.bandwidth_in_bytes);
    signed int return_value_wmove_23;
    return_value_wmove_23=wmove(stdscr, y + 2, 39);
    if(return_value_wmove_23 == -1)
      -1;

    else
      waddnstr(stdscr, line, -1);
    signed int return_value_wmove_24;
    return_value_wmove_24=wmove(stdscr, y, (COLS - 8 * 3) - 8);
    if(return_value_wmove_24 == -1)
      -1;

    else
      waddnstr(stdscr, "rates:", -1);
    draw_totals(&totals);
    if(!(showhelphint == 0))
    {
      signed int return_value_wmove_25;
      return_value_wmove_25=wmove(stdscr, 0, 0);
      if(return_value_wmove_25 == -1)
        -1;

      else
        waddnstr(stdscr, " ", -1);
      signed int return_value_wmove_26;
      return_value_wmove_26=wmove(stdscr, 0, 1);
      if(return_value_wmove_26 == -1)
        -1;

      else
        waddnstr(stdscr, helpmsg, -1);
      unsigned long int return_value_strlen_27;
      return_value_strlen_27=strlen(helpmsg);
      signed int return_value_wmove_28;
      return_value_wmove_28=wmove(stdscr, 0, (signed int)((unsigned long int)1 + return_value_strlen_27));
      if(return_value_wmove_28 == -1)
        -1;

      else
        waddnstr(stdscr, " ", -1);
      signed int return_value_wmove_30;
      return_value_wmove_30=wmove(stdscr, 0, 0);
      if(return_value_wmove_30 == -1)
        -1;

      else
      {
        return_value_strlen_29=strlen(helpmsg);
        wchgat(stdscr, (signed int)(return_value_strlen_29 + (unsigned long int)2), (unsigned long int)1UL << 10 + 8, (signed short int)0, (void *)0);
      }
    }

    wmove(stdscr, LINES - 1, COLS - 1);
    wrefresh(stdscr);
    if(options.max_bandwidth == 0l && !(wantbiggerrate == 0))
    {
      rateidx = rateidx + 1;
      wantbiggerrate = 0;
    }

  }

}

// ui_tick
// file ui.h line 13
void ui_tick(signed int print)
{
  signed long int return_value_time_1;
  if(!(print == 0))
    ui_print();

  else
    if(!(showhelphint == 0))
    {
      return_value_time_1=time((signed long int *)(void *)0);
      if(return_value_time_1 + -helptimer >= 3l)
      {
        if(persistenthelp == 0)
        {
          showhelphint = 0;
          ui_print();
        }

      }

    }

}

// usage
// file options.c line 178
static void usage(struct _IO_FILE *fp)
{
  fprintf(fp, "iftop: display bandwidth usage on an interface by host\n\nSynopsis: iftop -h | [-npblNBP] [-i interface] [-f filter code]\n                               [-F net/mask] [-G net6/mask6]\n\n   -h                  display this message\n   -n                  don't do hostname lookups\n   -N                  don't convert port numbers to services\n   -p                  run in promiscuous mode (show traffic between other\n                       hosts on the same network segment)\n   -b                  don't display a bar graph of traffic\n   -B                  Display bandwidth in bytes\n   -i interface        listen on named interface\n   -f filter code      use filter code to select packets to count\n                       (default: none, but only IP packets are counted)\n   -F net/mask         show traffic flows in/out of IPv4 network\n   -G net6/mask6       show traffic flows in/out of IPv6 network\n   -l                  display and count link-local IPv6 traffic (default: off)\n   -P                  show ports as well as hosts\n   -m limit            sets the upper limit for the bandwidth scale\n   -c config file      specifies an alternative configuration file\n   -t                  use text interface without ncurses\n\n   Sorting orders:\n   -o 2s                Sort by first column (2s traffic average)\n   -o 10s               Sort by second column (10s traffic average) [default]\n   -o 40s               Sort by third column (40s traffic average)\n   -o source            Sort by source address\n   -o destination       Sort by destination address\n\n   The following options are only available in combination with -t\n   -s num              print one single text output afer num seconds, then quit\n   -L num              number of lines to print\n\niftop, version 1.0pre4\ncopyright (c) 2002 Paul Warren <pdw@ex-parrot.com> and contributors\n");
}

// vector_back
// file vector.c line 59
union _item vector_back(struct _vector *v)
{
  return v->ary[(signed long int)(v->n_used - (unsigned long int)1)];
}

// vector_delete
// file vector.c line 33
void vector_delete(struct _vector *v)
{
  xfree((void *)v->ary);
  xfree((void *)v);
}

// vector_delete_free
// file vector.c line 38
void vector_delete_free(struct _vector *v)
{
  union _item *i = v->ary;
  for( ; !(i >= v->ary + (signed long int)v->n_used); i = i + 1l)
    xfree(i->v);
  xfree((void *)v->ary);
  xfree((void *)v);
}

// vector_new
// file vector.c line 21
struct _vector * vector_new(void)
{
  struct _vector *v;
  void *return_value_xcalloc_1;
  return_value_xcalloc_1=xcalloc((unsigned long int)1, sizeof(struct _vector) /*24ul*/ );
  v = (struct _vector *)return_value_xcalloc_1;
  if(v == ((struct _vector *)NULL))
    return (struct _vector *)(void *)0;

  else
  {
    void *return_value_xcalloc_2;
    return_value_xcalloc_2=xcalloc((unsigned long int)16, sizeof(union _item) /*8ul*/ );
    v->ary = (union _item *)return_value_xcalloc_2;
    v->n = (unsigned long int)16;
    v->n_used = (unsigned long int)0;
    return v;
  }
}

// vector_pop_back
// file vector.c line 52
void vector_pop_back(struct _vector *v)
{
  if(v->n_used >= 1ul)
  {
    v->n_used = v->n_used - 1ul;
    if(!(v->n_used >= v->n / 2ul))
      vector_reallocate(v, v->n / (unsigned long int)2);

  }

}

// vector_push_back
// file vector.c line 47
void vector_push_back(struct _vector *v, const union _item t)
{
  if(v->n_used == v->n)
    vector_reallocate(v, v->n * (unsigned long int)2);

  unsigned long int tmp_post_1 = v->n_used;
  v->n_used = v->n_used + 1ul;
  v->ary[(signed long int)tmp_post_1] = t;
}

// vector_reallocate
// file vector.c line 76
void vector_reallocate(struct _vector *v, const unsigned long int n)
{
  if(n >= 1ul && n >= v->n_used)
  {
    void *return_value_xrealloc_1;
    return_value_xrealloc_1=xrealloc((void *)v->ary, n * sizeof(union _item) /*8ul*/ );
    v->ary = (union _item *)return_value_xrealloc_1;
    memset((void *)(v->ary + (signed long int)v->n_used), 0, (v->n - v->n_used) * sizeof(union _item) /*8ul*/ );
    v->n = n;
  }

}

// vector_remove
// file vector.c line 63
union _item * vector_remove(struct _vector *v, union _item *t)
{
  unsigned long int tmp_post_1;
  if(t >= v->ary + (signed long int)v->n_used)
    return (union _item *)(void *)0;

  else
  {
    if(!(t >= v->ary + (signed long int)v->n_used + -1l))
      memmove((void *)t, (const void *)(t + (signed long int)1), (v->n_used - (unsigned long int)(t - v->ary)) * sizeof(union _item) /*8ul*/ );

    tmp_post_1 = v->n_used;
    v->n_used = v->n_used - 1ul;
    memset((void *)(v->ary + (signed long int)tmp_post_1), 0, sizeof(union _item) /*8ul*/ );
    if(!(v->n_used >= v->n / 2ul))
    {
      if(v->n >= 17ul)
      {
        unsigned long int i = (unsigned long int)(t - v->ary);
        vector_reallocate(v, v->n / (unsigned long int)2);
        t = v->ary + (signed long int)i;
      }

    }

    return t;
  }
}

// wrapper_routine
// file threadprof.c line 60
static void * wrapper_routine(void *data)
{
  void * (*start_routine)(void *) = ((struct wrapper_s *)data)->start_routine;
  void *arg = ((struct wrapper_s *)data)->arg;
  setitimer(2, &((struct wrapper_s *)data)->itimer, (struct itimerval *)(void *)0);
  pthread_mutex_lock(&((struct wrapper_s *)data)->lock);
  pthread_cond_signal(&((struct wrapper_s *)data)->wait);
  pthread_mutex_unlock(&((struct wrapper_s *)data)->lock);
  void *return_value;
  return_value=start_routine(arg);
  return return_value;
}

// xcalloc
// file iftop.h line 37
void * xcalloc(unsigned long int n, unsigned long int m)
{
  void *v;
  v=calloc(n, m);
  if(v == NULL)
    abort();

  return v;
}

// xfree
// file iftop.h line 40
void xfree(void *v)
{
  if(!(v == NULL))
    free(v);

}

// xmalloc
// file iftop.h line 36
void * xmalloc(unsigned long int n)
{
  void *v;
  v=malloc(n);
  if(v == NULL)
    abort();

  return v;
}

// xrealloc
// file iftop.h line 38
void * xrealloc(void *w, unsigned long int n)
{
  void *v;
  v=realloc(w, n);
  if(v == NULL && !(n == 0ul))
    abort();

  return v;
}

// xstrdup
// file iftop.h line 39
char * xstrdup(const char *s)
{
  char *t;
  t=strdup(s);
  if(t == ((char *)NULL))
    abort();

  return t;
}

