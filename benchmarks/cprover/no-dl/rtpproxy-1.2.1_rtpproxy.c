// #anon_enum_RTP_PARSER_OK=0_RTP_PARSER_PTOOSHRT=-1_RTP_PARSER_IHDRVER=-2_RTP_PARSER_PTOOSHRTXS=-3_RTP_PARSER_PTOOSHRTXH=-4_RTP_PARSER_PTOOSHRTPS=-5_RTP_PARSER_PTOOSHRTP=-6_RTP_PARSER_IPS=-7
// file rtp.h line 120
enum anonymous_13 { RTP_PARSER_OK=0, RTP_PARSER_PTOOSHRT=-1, RTP_PARSER_IHDRVER=-2, RTP_PARSER_PTOOSHRTXS=-3, RTP_PARSER_PTOOSHRTXH=-4, RTP_PARSER_PTOOSHRTPS=-5, RTP_PARSER_PTOOSHRTP=-6, RTP_PARSER_IPS=-7 };

// #anon_enum_RTP_PCMU=0_RTP_GSM=3_RTP_G723=4_RTP_PCMA=8_RTP_CN=13_RTP_G729=18_RTP_TSE=100_RTP_TSE_CISCO=101
// file rtp.h line 40
enum anonymous_20 { RTP_PCMU=0, RTP_GSM=3, RTP_G723=4, RTP_PCMA=8, RTP_CN=13, RTP_G729=18, RTP_TSE=100, RTP_TSE_CISCO=101 };

// #anon_enum_SYSLOG_ITEM_ASYNC_WRITE=0_SYSLOG_ITEM_ASYNC_EXIT=1
// file rtpp_syslog_async.c line 40
enum anonymous_23 { SYSLOG_ITEM_ASYNC_WRITE=0, SYSLOG_ITEM_ASYNC_EXIT=1 };

// #anon_enum_TTL_UNIFIED=0_TTL_INDEPENDENT=1
// file rtpp_defines.h line 73
enum anonymous_30 { TTL_UNIFIED=0, TTL_INDEPENDENT=1 };

// tag-#anon#ST[*{SYM#tag-rtp_packet#}_SYM#tag-rtp_packet#_'first'|*{SYM#tag-rtp_packet#}_SYM#tag-rtp_packet#_'last']
// file rtp_resizer.h line 47
struct anonymous_0;

// tag-#anon#ST[*{V}_V_'_call_addr'|S32'_syscall'|U32'_arch']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 126
struct anonymous_11;

// tag-#anon#ST[*{V}_V_'_lower'|*{V}_V_'_upper']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 111
struct anonymous_8;

// tag-#anon#ST[*{V}_V_'si_addr'|S16'si_addr_lsb'|U48'_pad0'|SYM#tag-#anon#ST[*{V}_V_'_lower'|*{V}_V_'_upper']#'si_addr_bnd']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_9;

// tag-#anon#ST[*{cS8}_cS8_'str_fac'|S32'int_fac'|U32'_pad0']
// file rtpp_log.c line 185
struct anonymous_19;

// tag-#anon#ST[ARR16{U64}_U64_'__val']
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous;

// tag-#anon#ST[BF{U32}_U32_'cc'|BF{U32}_U32_'x'|BF{U32}_U32_'p'|BF{U32}_U32_'version'|BF{U32}_U32_'pt'|BF{U32}_U32_'m'|BF{U32}_U32_'seq'|U32'ts'|U32'ssrc'|ARR0{U32}_U32_'csrc']
// file rtp.h line 56
struct anonymous_28;

// tag-#anon#ST[S32'__lock'|U32'__futex'|U64'__total_seq'|U64'__wakeup_seq'|U64'__woken_seq'|*{V}_V_'__mutex'|U32'__nwaiters'|U32'__broadcast_seq']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_21;

// tag-#anon#ST[S32'si_pid'|U32'si_uid']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_4;

// tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'_pad0'|S64'si_utime'|S64'si_stime']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_7;

// tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_6;

// tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'_pad0'|SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'_pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}_V_'si_addr'|S16'si_addr_lsb'|U48'_pad0'|SYM#tag-#anon#ST[*{V}_V_'_lower'|*{V}_V_'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'_pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}_V_'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_3;

// tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_5;

// tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'_pad0']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 119
struct anonymous_10;

// tag-#anon#ST[U16'profile'|U16'length'|ARR0{U32}_U32_'extension']
// file rtp.h line 78
struct anonymous_14;

// tag-#anon#ST[U16'source'|U16'dest'|U16'len'|U16'check']
// file /usr/include/netinet/udp.h line 67
struct anonymous_17;

// tag-#anon#ST[U16'uh_sport'|U16'uh_dport'|U16'uh_ulen'|U16'uh_sum']
// file /usr/include/netinet/udp.h line 60
struct anonymous_16;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'|*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'_pad0'|SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'_pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}_V_'si_addr'|S16'si_addr_lsb'|U48'_pad0'|SYM#tag-#anon#ST[*{V}_V_'_lower'|*{V}_V_'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'_pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}_V_'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']#}_SYM#tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'_pad0'|SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'_pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}_V_'si_addr'|S16'si_addr_lsb'|U48'_pad0'|SYM#tag-#anon#ST[*{V}_V_'_lower'|*{V}_V_'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'_pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}_V_'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'_pad0'|SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'_pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}_V_'si_addr'|S16'si_addr_lsb'|U48'_pad0'|SYM#tag-#anon#ST[*{V}_V_'_lower'|*{V}_V_'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'_pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}_V_'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']#}_SYM#tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'_pad0'|SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'_pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}_V_'si_addr'|S16'si_addr_lsb'|U48'_pad0'|SYM#tag-#anon#ST[*{V}_V_'_lower'|*{V}_V_'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'_pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}_V_'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']#_|*{V}_V_)->V_'sa_sigaction']
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_2;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'|ARR8{U16}_U16_'__u6_addr16'|ARR4{U32}_U32_'__u6_addr32']
// file /usr/include/netinet/in.h line 211
union anonymous_29;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'_pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}_V_'si_addr'|S16'si_addr_lsb'|U48'_pad0'|SYM#tag-#anon#ST[*{V}_V_'_lower'|*{V}_V_'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'_pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}_V_'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_12;

// tag-#anon#UN[ARR4{S8}_S8_'__size'|S32'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_26;

// tag-#anon#UN[SYM#tag-#anon#ST[BF{U32}_U32_'cc'|BF{U32}_U32_'x'|BF{U32}_U32_'p'|BF{U32}_U32_'version'|BF{U32}_U32_'pt'|BF{U32}_U32_'m'|BF{U32}_U32_'seq'|U32'ts'|U32'ssrc'|ARR0{U32}_U32_'csrc']#'header'|ARR8192{U8}_U8_'buf']
// file rtp.h line 108
union anonymous_27;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'|U32'__futex'|U64'__total_seq'|U64'__wakeup_seq'|U64'__woken_seq'|*{V}_V_'__mutex'|U32'__nwaiters'|U32'__broadcast_seq']#'__data'|ARR48{S8}_S8_'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_22;

// tag-#anon#UN[SYM#tag-#anon#ST[U16'uh_sport'|U16'uh_dport'|U16'uh_ulen'|U16'uh_sum']#'_anon0'|SYM#tag-#anon#ST[U16'source'|U16'dest'|U16'len'|U16'check']#'_anon1']
// file /usr/include/netinet/udp.h line 58
union anonymous_18;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'|ARR40{S8}_S8_'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_24;

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

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-cfg
// file rtpp_log.h line 60
struct cfg;

// tag-group
// file /usr/include/grp.h line 42
struct group;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-ip
// file /usr/include/netinet/ip.h line 107
struct ip;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pcap_hdr_s
// file rtpp_record.h line 58
struct pcap_hdr_s;

// tag-pcaprec_hdr_s
// file rtpp_record.h line 69
struct pcaprec_hdr_s;

// tag-pkt_hdr_adhoc
// file rtpp_record.h line 86
struct pkt_hdr_adhoc;

// tag-pkt_hdr_pcap
// file rtpp_record.h line 79
struct pkt_hdr_pcap;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-proto_cap
// file rtpp_command.h line 36
struct proto_cap;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-record_mode
// file rtpp_record.c line 49
enum record_mode { MODE_LOCAL_PKT=0, MODE_REMOTE_RTP=1, MODE_LOCAL_PCAP=2 };

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

// tag-rtp_packet
// file rtp.h line 84
struct rtp_packet;

// tag-rtp_packet_chunk
// file rtp.h line 114
struct rtp_packet_chunk;

// tag-rtp_resizer
// file rtp_resizer.h line 33
struct rtp_resizer;

// tag-rtp_server
// file rtpp_session.h line 75
struct rtp_server;

// tag-rtpp_record_channel
// file rtpp_record.c line 51
struct rtpp_record_channel;

// tag-rtpp_session
// file rtpp_defines.h line 92
struct rtpp_session;

// tag-rtpp_timeout_data
// file rtpp_session.h line 41
struct rtpp_timeout_data;

// tag-rtpp_timeout_handler
// file rtpp_defines.h line 78
struct rtpp_timeout_handler;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 153
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_in4_s
// file rtpp_util.h line 73
struct sockaddr_in4_s;

// tag-sockaddr_in6
// file /usr/include/netinet/in.h line 252
struct sockaddr_in6;

// tag-sockaddr_in6_s
// file rtpp_util.h line 79
struct sockaddr_in6_s;

// tag-sockaddr_in_s
// file rtpp_util.h line 85
union sockaddr_in_s;

// tag-sockaddr_storage
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 166
struct sockaddr_storage;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/un.h line 29
struct sockaddr_un;

// tag-syslog_wi
// file rtpp_syslog_async.c line 45
struct syslog_wi;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-udphdr
// file /usr/include/netinet/udp.h line 56
struct udphdr;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// _exit
// file /usr/include/unistd.h line 606
extern void _exit(signed int);
// _rtpp_log_close
// file rtpp_log.h line 65
void _rtpp_log_close(void);
// _rtpp_log_ewrite
// file rtpp_log.h line 63
void _rtpp_log_ewrite(struct cfg *cf, signed int level, const char *function, const char *format, ...);
// _rtpp_log_open
// file rtpp_log.h line 64
struct cfg * _rtpp_log_open(struct cfg *cf, const char *app);
// _rtpp_log_write
// file rtpp_log.h line 62
void _rtpp_log_write(struct cfg *cf, signed int level, const char *function, const char *format, ...);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// addr2char
// file rtpp_util.h line 60
const char * addr2char(struct sockaddr *ia);
// addr2char_r
// file rtpp_util.c line 99
char * addr2char_r(struct sockaddr *ia, char *buf, signed int size);
// append_chunk
// file rtp_resizer.c line 164
static void append_chunk(struct rtp_packet *dst, struct rtp_packet *src, struct rtp_packet_chunk *chunk);
// append_packet
// file rtp_resizer.c line 152
static void append_packet(struct rtp_packet *dst, struct rtp_packet *src);
// append_server
// file rtp_server.c line 161
void append_server(struct cfg *cf, struct rtpp_session *sp);
// append_session
// file rtpp_session.c line 144
void append_session(struct cfg *cf, struct rtpp_session *sp, signed int index);
// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// chdir
// file /usr/include/unistd.h line 500
extern signed int chdir(const char *);
// check_level
// file rtpp_log.c line 117
static signed int check_level(struct cfg *cf, signed int cf_level, signed int level);
// chown
// file /usr/include/unistd.h line 476
extern signed int chown(const char *, unsigned int, unsigned int);
// close
// file /usr/include/unistd.h line 356
extern signed int close(signed int);
// compare_session_tags
// file rtpp_session.c line 226
signed int compare_session_tags(char *tag1, char *tag0, unsigned int *medianum_p);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// create_listener
// file rtpp_command.c line 130
static signed int create_listener(struct cfg *cf, struct sockaddr *ia, signed int *port, signed int *fds);
// create_twinlistener
// file rtpp_command.c line 85
static signed int create_twinlistener(struct cfg *cf, struct sockaddr *ia, signed int port, signed int *fds);
// detach_queue_head
// file rtp_resizer.c line 141
static void detach_queue_head(struct rtp_resizer *this);
// do_timeout_notification
// file rtpp_session.h line 100
void do_timeout_notification(struct rtpp_session *sp, signed int retries);
// doreply
// file rtpp_command.c line 152
static void doreply(struct cfg *cf, signed int fd, char *buf, signed int len, struct sockaddr_storage *raddr, unsigned int rlen);
// drop_privileges
// file rtpp_util.h line 65
signed int drop_privileges(struct cfg *cf);
// dtime2ts
// file rtpp_util.h line 62
void dtime2ts(double dtime, unsigned int *ts_sec, unsigned int *ts_usec);
// dup2
// file /usr/include/unistd.h line 537
extern signed int dup2(signed int, signed int);
// ehandler
// file main.c line 114
static void ehandler(void);
// err
// file /usr/include/err.h line 46
extern void err(signed int, const char *, ...);
// errx
// file /usr/include/err.h line 50
extern void errx(signed int, const char *, ...);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fatsignal
// file main.c line 106
static void fatsignal(signed int sig);
// fcntl
// file /usr/include/fcntl.h line 146
extern signed int fcntl(signed int, signed int, ...);
// find_stream
// file rtpp_session.c line 244
signed int find_stream(struct cfg *cf, char *call_id, char *from_tag, char *to_tag, struct rtpp_session **spp);
// flush_rbuf
// file rtpp_record.c line 205
static signed int flush_rbuf(struct rtpp_session *sp, void *rrc);
// fork
// file /usr/include/unistd.h line 759
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// g723_len
// file rtp.c line 43
static signed int g723_len(unsigned char ch);
// g723_samples
// file rtp.c line 65
static signed int g723_samples(const unsigned char *buf, signed int maxlen);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// get_ttl
// file rtpp_session.h line 101
signed int get_ttl(struct rtpp_session *sp);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// getdtime
// file rtpp_util.h line 61
double getdtime(void);
// getgrnam
// file /usr/include/grp.h line 108
extern struct group * getgrnam(const char *);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpid
// file /usr/include/unistd.h line 631
extern signed int getpid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 50
extern signed int getrlimit(signed int, struct rlimit *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 678
extern unsigned int getuid(void);
// handle_command
// file rtpp_command.h line 43
signed int handle_command(struct cfg *cf, signed int controlfd, double dtime);
// handle_copy
// file rtpp_command.c line 1107
static void handle_copy(struct cfg *cf, struct rtpp_session *spa, signed int idx, char *rname);
// handle_delete
// file rtpp_command.c line 1001
static signed int handle_delete(struct cfg *cf, char *call_id, char *from_tag, char *to_tag, signed int weak);
// handle_nomem
// file rtpp_command.c line 225
static void handle_nomem(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, signed int ecode, struct sockaddr **ia, signed int *fds, struct rtpp_session *spa, struct rtpp_session *spb);
// handle_noplay
// file rtpp_command.c line 1063
static void handle_noplay(struct cfg *cf, struct rtpp_session *spa, signed int idx);
// handle_play
// file rtpp_command.c line 1080
static signed int handle_play(struct cfg *cf, struct rtpp_session *spa, signed int idx, char *codecs, char *pname, signed int playcount);
// handle_query
// file rtpp_command.c line 1147
static void handle_query(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, struct rtpp_session *spa, signed int idx);
// handle_record
// file rtpp_command.c line 1123
static signed int handle_record(struct cfg *cf, char *call_id, char *from_tag, char *to_tag);
// hash_string
// file rtpp_session.c line 58
static unsigned char hash_string(struct cfg *cf, char *bp, char *ep);
// hash_table_append
// file rtpp_session.c line 69
void hash_table_append(struct cfg *cf, struct rtpp_session *sp);
// hash_table_remove
// file rtpp_session.c line 93
static void hash_table_remove(struct cfg *cf, struct rtpp_session *sp);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// init_config
// file main.c line 124
static void init_config(struct cfg *cf, signed int argc, char **argv);
// init_controlfd
// file main.c line 417
static signed int init_controlfd(struct cfg *cf);
// init_hash_table
// file rtpp_session.h line 92
void init_hash_table(struct cfg *cf);
// init_port_table
// file rtpp_util.h line 67
void init_port_table(struct cfg *cf);
// ishostnull
// file rtpp_util.c line 76
signed int ishostnull(struct sockaddr *ia);
// ishostseq
// file rtpp_util.h line 57
signed int ishostseq(struct sockaddr *ia1, struct sockaddr *ia2);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// lseek
// file /usr/include/unistd.h line 337
extern signed long int lseek(signed int, signed long int, signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// max_nsamples
// file rtp_resizer.c line 41
static signed int max_nsamples(signed int codec_id);
// memchr
// file /usr/include/string.h line 92
extern void * memchr(const void *, signed int, unsigned long int);
// memcmp
// file /usr/include/string.h line 65
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 42
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 46
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 62
extern void * memset(void *, signed int, unsigned long int);
// move_chunk
// file rtp_resizer.c line 184
static void move_chunk(struct rtp_packet *dst, struct rtp_packet *src, struct rtp_packet_chunk *chunk);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// open
// file /usr/include/fcntl.h line 156
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// prepare_pkt_hdr_adhoc
// file rtpp_record.c line 224
static signed int prepare_pkt_hdr_adhoc(struct rtpp_session *sp, struct rtp_packet *packet, struct pkt_hdr_adhoc *hdrp);
// prepare_pkt_hdr_pcap
// file rtpp_record.c line 257
static signed int prepare_pkt_hdr_pcap(struct rtpp_session *sp, struct rtp_packet *packet, struct pkt_hdr_pcap *hdrp);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_commands
// file main.c line 730
static void process_commands(struct cfg *cf, double dtime);
// process_rtp
// file main.c line 667
static void process_rtp(struct cfg *cf, double dtime, signed int alarm_tick);
// process_rtp_servers
// file main.c line 467
static void process_rtp_servers(struct cfg *cf, double dtime);
// pthread_cond_init
// file /usr/include/pthread.h line 968
extern signed int pthread_cond_init(union anonymous_22 *, const union anonymous_26 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 977
extern signed int pthread_cond_signal(union anonymous_22 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 989
extern signed int pthread_cond_wait(union anonymous_22 *, union anonymous_24 *);
// pthread_create
// file /usr/include/pthread.h line 233
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 250
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 749
extern signed int pthread_mutex_init(union anonymous_24 *, const union anonymous_26 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 762
extern signed int pthread_mutex_lock(union anonymous_24 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 773
extern signed int pthread_mutex_unlock(union anonymous_24 *);
// random
// file /usr/include/stdlib.h line 321
extern signed long int random(void);
// rclose
// file rtpp_record.c line 360
void rclose(struct rtpp_session *sp, void *rrc, signed int keep);
// read
// file /usr/include/unistd.h line 363
extern signed long int read(signed int, void *, unsigned long int);
// reconnect_timeout_handler
// file rtpp_session.c line 278
static void reconnect_timeout_handler(struct rtpp_session *sp, struct rtpp_timeout_handler *th);
// recvfrom
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 174
extern signed long int recvfrom(signed int, void *, unsigned long int, signed int, struct sockaddr *, unsigned int *);
// remove_session
// file rtpp_session.h line 97
void remove_session(struct cfg *cf, struct rtpp_session *sp);
// rename
// file /usr/include/stdio.h line 180
extern signed int rename(const char *, const char *);
// reply_error
// file rtpp_command.c line 211
static void reply_error(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, signed int ecode);
// reply_number
// file rtpp_command.c line 167
static void reply_number(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, signed int number);
// reply_ok
// file rtpp_command.c line 182
static void reply_ok(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie);
// reply_port
// file rtpp_command.c line 190
static void reply_port(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, signed int lport, struct sockaddr **lia);
// resolve
// file rtpp_util.h line 63
signed int resolve(struct sockaddr *ia, signed int pf, const char *host, const char *servname, signed int flags);
// ropen
// file rtpp_record.c line 64
void * ropen(struct cfg *cf, struct rtpp_session *sp, char *rname, signed int orig);
// round
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 309
extern double round(double);
// rtp_calc_samples
// file rtp.c line 79
static signed int rtp_calc_samples(signed int codec_id, unsigned long int nbytes, const unsigned char *data);
// rtp_packet_alloc
// file rtp.c line 303
struct rtp_packet * rtp_packet_alloc();
// rtp_packet_chunk_find_g711
// file rtp.c line 102
static void rtp_packet_chunk_find_g711(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples);
// rtp_packet_chunk_find_g723
// file rtp.c line 142
static void rtp_packet_chunk_find_g723(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples);
// rtp_packet_chunk_find_g729
// file rtp.c line 110
static void rtp_packet_chunk_find_g729(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples);
// rtp_packet_chunk_find_gsm
// file rtp.c line 126
static void rtp_packet_chunk_find_gsm(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples);
// rtp_packet_first_chunk_find
// file rtp.c line 175
void rtp_packet_first_chunk_find(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples);
// rtp_packet_free
// file rtp.h line 138
void rtp_packet_free(struct rtp_packet *pkt);
// rtp_packet_parse
// file rtp.c line 242
enum anonymous_13 rtp_packet_parse(struct rtp_packet *pkt);
// rtp_packet_parse_errstr
// file rtp.c line 206
const char * rtp_packet_parse_errstr(enum anonymous_13 ecode);
// rtp_packet_set_seq
// file rtp.c line 347
void rtp_packet_set_seq(struct rtp_packet *p, unsigned short int seq);
// rtp_packet_set_ts
// file rtp.c line 355
void rtp_packet_set_ts(struct rtp_packet *p, unsigned int ts);
// rtp_recv
// file rtp.h line 135
struct rtp_packet * rtp_recv(signed int fd);
// rtp_resizer_enqueue
// file rtp_resizer.h line 53
void rtp_resizer_enqueue(struct rtp_resizer *this, struct rtp_packet **pkt);
// rtp_resizer_free
// file rtp_resizer.c line 54
void rtp_resizer_free(struct rtp_resizer *this);
// rtp_resizer_get
// file rtp_resizer.h line 54
struct rtp_packet * rtp_resizer_get(struct rtp_resizer *this, double dtime);
// rtp_server_free
// file rtp_server.h line 62
void rtp_server_free(struct rtp_server *rp);
// rtp_server_get
// file rtp_server.h line 63
signed int rtp_server_get(struct rtp_server *rp, double dtime);
// rtp_server_new
// file rtp_server.c line 48
struct rtp_server * rtp_server_new(const char *name, enum anonymous_20 codec, signed int loop);
// rtpp_daemon
// file rtpp_util.h line 69
signed int rtpp_daemon(signed int nochdir, signed int noclose);
// rtpp_in_cksum
// file rtpp_util.h line 66
unsigned short int rtpp_in_cksum(void *addr, signed int len);
// rtpp_log_str2fac
// file rtpp_log.h line 67
signed int rtpp_log_str2fac(const char *s);
// rtpp_log_str2lvl
// file rtpp_log.h line 66
signed int rtpp_log_str2lvl(const char *strl);
// rtpp_strsep
// file rtpp_util.c line 276
char * rtpp_strsep(char **stringp, const char *delim);
// rwrite
// file rtpp_record.h line 54
void rwrite(struct rtpp_session *sp, void *rrc, struct rtp_packet *packet);
// rwrite::1::prepare_pkt_hdr_object
//
signed int prepare_pkt_hdr_object(struct rtpp_session *, struct rtp_packet *, void *);
// rxmit_packets
// file main.c line 508
static void rxmit_packets(struct cfg *cf, struct rtpp_session *sp, signed int ridx, double dtime);
// sched_yield
// file /usr/include/sched.h line 65
extern signed int sched_yield(void);
// seedrandom
// file rtpp_util.h line 64
void seedrandom(void);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// send_packet
// file main.c line 638
static void send_packet(struct cfg *cf, struct rtpp_session *sp, signed int ridx, struct rtp_packet *packet);
// sendto
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 163
extern signed long int sendto(signed int, const void *, unsigned long int, signed int, struct sockaddr *, unsigned int);
// session_findfirst
// file rtpp_session.c line 116
struct rtpp_session * session_findfirst(struct cfg *cf, char *call_id);
// session_findnext
// file rtpp_session.c line 131
struct rtpp_session * session_findnext(struct rtpp_session *psp);
// setbindhost
// file main.c line 78
static void setbindhost(struct sockaddr *ia, signed int pf, const char *bindhost, const char *servname);
// setgid
// file /usr/include/unistd.h line 720
extern signed int setgid(unsigned int);
// setrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 69
extern signed int setrlimit(signed int, struct rlimit *);
// setsid
// file /usr/include/unistd.h line 670
extern signed int setsid(void);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// setuid
// file /usr/include/unistd.h line 703
extern signed int setuid(unsigned int);
// sigaction
// file /usr/include/signal.h line 257
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigemptyset
// file /usr/include/signal.h line 213
extern signed int sigemptyset(struct anonymous *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// srandom
// file /usr/include/stdlib.h line 324
extern void srandom(unsigned int);
// strcasecmp
// file /usr/include/string.h line 529
extern signed int strcasecmp(const char *, const char *);
// strchr
// file /usr/include/string.h line 231
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 140
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 125
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 171
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 408
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 394
extern unsigned long int strlen(const char *);
// strlvl
// file rtpp_log.c line 66
static const char * strlvl(signed int level);
// strncmp
// file /usr/include/string.h line 143
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 128
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 258
extern char * strrchr(const char *, signed int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// syslog_async_atexit
// file rtpp_syslog_async.c line 184
static void syslog_async_atexit(void);
// syslog_async_init
// file rtpp_syslog_async.h line 35
signed int syslog_async_init(const char *app, signed int facility);
// syslog_queue_get_free_item
// file rtpp_syslog_async.c line 138
static struct syslog_wi * syslog_queue_get_free_item(signed int wait);
// syslog_queue_init
// file rtpp_syslog_async.c line 110
static signed int syslog_queue_init(void);
// syslog_queue_put_item
// file rtpp_syslog_async.c line 163
static void syslog_queue_put_item(struct syslog_wi *wi);
// syslog_queue_run
// file rtpp_syslog_async.c line 72
static void syslog_queue_run(void);
// trunc
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 313
extern double trunc(double);
// unlink
// file /usr/include/unistd.h line 829
extern signed int unlink(const char *);
// url_unquote
// file rtpp_util.c line 367
signed int url_unquote(unsigned char *buf, signed int len);
// usage
// file main.c line 95
static void usage(void);
// usleep
// file /usr/include/unistd.h line 463
extern signed int usleep(unsigned int);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// vsyslog_async
// file rtpp_syslog_async.h line 36
void vsyslog_async(signed int priority, const char *format, void **ap);
// warnx
// file /usr/include/err.h line 40
extern void warnx(const char *, ...);
// write
// file /usr/include/unistd.h line 369
extern signed long int write(signed int, const void *, unsigned long int);
// writev
// file /usr/include/x86_64-linux-gnu/sys/uio.h line 50
extern signed long int writev(signed int, struct iovec *, signed int);

struct anonymous_0
{
  // first
  struct rtp_packet *first;
  // last
  struct rtp_packet *last;
};

struct anonymous_11
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_8
{
  // _lower
  void *_lower;
  // _upper
  void *_upper;
};

struct anonymous_9
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
  // si_addr_bnd
  struct anonymous_8 si_addr_bnd;
};

struct anonymous_19
{
  // str_fac
  const char *str_fac;
  // int_fac
  signed int int_fac;
};

struct anonymous
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_28
{
  // cc
  unsigned int cc : 4;
  // x
  unsigned int x : 1;
  // p
  unsigned int p : 1;
  // version
  unsigned int version : 2;
  // pt
  unsigned int pt : 7;
  // m
  unsigned int m : 1;
  // seq
  unsigned int seq : 16;
  // ts
  unsigned int ts;
  // ssrc
  unsigned int ssrc;
  // csrc
  unsigned int csrc[0l];
};

struct anonymous_21
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

struct anonymous_4
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_7
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

struct anonymous_6
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_5
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_10
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_12
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_4 _kill;
  // _timer
  struct anonymous_5 _timer;
  // _rt
  struct anonymous_6 _rt;
  // _sigchld
  struct anonymous_7 _sigchld;
  // _sigfault
  struct anonymous_9 _sigfault;
  // _sigpoll
  struct anonymous_10 _sigpoll;
  // _sigsys
  struct anonymous_11 _sigsys;
};

struct anonymous_3
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_12 _sifields;
};

struct anonymous_14
{
  // profile
  unsigned short int profile;
  // length
  unsigned short int length;
  // extension
  unsigned int extension[0l];
};

struct anonymous_17
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

struct anonymous_16
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

union anonymous_2
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_3 *, void *);
};

union anonymous_29
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous_26
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_27
{
  // header
  struct anonymous_28 header;
  // buf
  unsigned char buf[8192l];
};

union anonymous_22
{
  // __data
  struct anonymous_21 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous_18
{
  // _anon0
  struct anonymous_16 _anon0;
  // _anon1
  struct anonymous_17 _anon1;
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

union anonymous_24
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

struct sockaddr
{
  // sa_family
  unsigned short int sa_family;
  // sa_data
  char sa_data[14l];
};

struct rlimit
{
  // rlim_cur
  unsigned long int rlim_cur;
  // rlim_max
  unsigned long int rlim_max;
};

struct rtp_server
{
  // btime
  double btime;
  // buf
  unsigned char buf[1024l];
  // rtp
  struct anonymous_28 *rtp;
  // pload
  unsigned char *pload;
  // fd
  signed int fd;
  // loop
  signed int loop;
};

struct rtp_resizer
{
  // nsamples_total
  signed int nsamples_total;
  // seq_initialized
  signed int seq_initialized;
  // seq
  unsigned short int seq;
  // last_sent_ts_inited
  signed int last_sent_ts_inited;
  // last_sent_ts
  unsigned int last_sent_ts;
  // tsdelta_inited
  signed int tsdelta_inited;
  // tsdelta
  unsigned int tsdelta;
  // output_nsamples
  signed int output_nsamples;
  // queue
  struct anonymous_0 queue;
};

struct rtpp_timeout_data
{
  // notify_tag
  char *notify_tag;
  // handler
  struct rtpp_timeout_handler *handler;
};

struct rtpp_session
{
  // ttl
  signed int ttl[2l];
  // ttl_mode
  enum anonymous_30 ttl_mode;
  // pcount
  unsigned long int pcount[4l];
  // call_id
  char *call_id;
  // tag
  char *tag;
  // log
  struct cfg *log;
  // rtcp
  struct rtpp_session *rtcp;
  // rtp
  struct rtpp_session *rtp;
  // addr
  struct sockaddr *addr[2l];
  // prev_addr
  struct sockaddr *prev_addr[2l];
  // canupdate
  signed int canupdate[2l];
  // laddr
  struct sockaddr *laddr[2l];
  // ports
  signed int ports[2l];
  // fds
  signed int fds[2l];
  // complete
  signed int complete;
  // asymmetric
  signed int asymmetric[2l];
  // strong
  signed int strong;
  // weak
  signed int weak[2l];
  // rrcs
  void *rrcs[2l];
  // rtps
  struct rtp_server *rtps[2l];
  // sidx
  signed int sidx[2l];
  // sridx
  signed int sridx;
  // untrusted_addr
  signed int untrusted_addr[2l];
  // resizers
  struct rtp_resizer resizers[2l];
  // prev
  struct rtpp_session *prev;
  // next
  struct rtpp_session *next;
  // timeout_data
  struct rtpp_timeout_data timeout_data;
  // last_update
  double last_update[2l];
  // codecs
  char *codecs[2l];
};

struct rtpp_timeout_handler
{
  // socket_name
  char *socket_name;
  // fd
  signed int fd;
  // connected
  signed int connected;
  // notify_buf
  char notify_buf[64l];
};

struct cfg
{
  // nodaemon
  signed int nodaemon;
  // dmode
  signed int dmode;
  // bmode
  signed int bmode;
  // umode
  signed int umode;
  // port_min
  signed int port_min;
  // port_max
  signed int port_max;
  // sessions
  struct rtpp_session **sessions;
  // rtp_servers
  struct rtpp_session **rtp_servers;
  // pfds
  struct pollfd *pfds;
  // nsessions
  signed int nsessions;
  // rtp_nsessions
  signed int rtp_nsessions;
  // sessions_created
  unsigned long long int sessions_created;
  // sessions_active
  signed int sessions_active;
  // max_ttl
  signed int max_ttl;
  // bindaddr
  struct sockaddr *bindaddr[2l];
  // tos
  signed int tos;
  // rdir
  const char *rdir;
  // sdir
  const char *sdir;
  // record_pcap
  signed int record_pcap;
  // record_all
  signed int record_all;
  // rrtcp
  signed int rrtcp;
  // glog
  struct cfg *glog;
  // nofile_limit
  struct rlimit nofile_limit;
  // nofile_limit_warned
  signed int nofile_limit_warned;
  // rand_table
  unsigned char rand_table[256l];
  // hash_table
  struct rtpp_session *hash_table[256l];
  // run_uname
  char *run_uname;
  // run_gname
  char *run_gname;
  // no_check
  signed int no_check;
  // ttl_mode
  enum anonymous_30 ttl_mode;
  // timeout_handler
  struct rtpp_timeout_handler timeout_handler;
  // run_uid
  unsigned int run_uid;
  // run_gid
  unsigned int run_gid;
  // port_table
  unsigned short int port_table[65536l];
  // port_table_len
  signed int port_table_len;
  // port_table_idx
  signed int port_table_idx;
  // log_level
  signed int log_level;
  // log_facility
  signed int log_facility;
};

struct group
{
  // gr_name
  char *gr_name;
  // gr_passwd
  char *gr_passwd;
  // gr_gid
  unsigned int gr_gid;
  // gr_mem
  char **gr_mem;
};

struct in6_addr
{
  // __in6_u
  union anonymous_29 __in6_u;
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

struct pcap_hdr_s
{
  // magic_number
  unsigned int magic_number;
  // version_major
  unsigned short int version_major;
  // version_minor
  unsigned short int version_minor;
  // thiszone
  signed int thiszone;
  // sigfigs
  unsigned int sigfigs;
  // snaplen
  unsigned int snaplen;
  // network
  unsigned int network;
};

struct pcaprec_hdr_s
{
  // ts_sec
  unsigned int ts_sec;
  // ts_usec
  unsigned int ts_usec;
  // incl_len
  unsigned int incl_len;
  // orig_len
  unsigned int orig_len;
};

struct sockaddr_in4_s
{
  // sin_family
  unsigned short int sin_family;
  // sin_port
  unsigned short int sin_port;
  // sin_addr
  struct in_addr sin_addr;
};

struct sockaddr_in6_s
{
  // sin_family
  unsigned short int sin_family;
  // sin_port
  unsigned short int sin_port;
  // sin_addr
  struct in6_addr sin_addr;
};

union sockaddr_in_s
{
  // in4
  struct sockaddr_in4_s in4;
  // in6
  struct sockaddr_in6_s in6;
};

struct pkt_hdr_adhoc
{
  // addr
  union sockaddr_in_s addr;
  // time
  double time;
  // plen
  unsigned short int plen;
};

struct udphdr
{
  // _anon0
  union anonymous_18 _anon0;
};

struct pkt_hdr_pcap
{
  // pcaprec_hdr
  struct pcaprec_hdr_s pcaprec_hdr;
  // family
  unsigned int family;
  // iphdr
  struct ip iphdr;
  // udphdr
  struct udphdr udphdr;
};

struct pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
  // revents
  signed short int revents;
};

struct proto_cap
{
  // pc_id
  const char *pc_id;
  // pc_description
  const char *pc_description;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
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

struct rtp_packet
{
  // size
  unsigned long int size;
  // raddr
  struct sockaddr_storage raddr;
  // laddr
  struct sockaddr *laddr;
  // rlen
  unsigned int rlen;
  // data_size
  unsigned long int data_size;
  // data_offset
  signed int data_offset;
  // nsamples
  signed int nsamples;
  // ts
  unsigned int ts;
  // seq
  unsigned short int seq;
  // appendable
  signed int appendable;
  // rtime
  double rtime;
  // rport
  signed int rport;
  // next
  struct rtp_packet *next;
  // prev
  struct rtp_packet *prev;
  // data
  union anonymous_27 data;
};

struct rtp_packet_chunk
{
  // bytes
  signed int bytes;
  // nsamples
  signed int nsamples;
  // whole_packet_matched
  signed int whole_packet_matched;
};

struct rtpp_record_channel
{
  // spath
  char spath[4097l];
  // rpath
  char rpath[4097l];
  // fd
  signed int fd;
  // needspool
  signed int needspool;
  // rbuf
  char rbuf[4096l];
  // rbuf_len
  signed int rbuf_len;
  // mode
  enum record_mode mode;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous_2 __sigaction_handler;
  // sa_mask
  struct anonymous sa_mask;
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

struct sockaddr_un
{
  // sun_family
  unsigned short int sun_family;
  // sun_path
  char sun_path[108l];
};

struct syslog_wi
{
  // item_type
  enum anonymous_23 item_type;
  // data
  char data[2048l];
  // len
  signed int len;
  // priority
  signed int priority;
  // next
  struct syslog_wi *next;
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


// __packed
// file rtpp_record.h line 84
struct pkt_hdr_pcap __packed;
// cmd_sock
// file main.c line 68
static const char *cmd_sock = "/var/run/rtpproxy.sock";
// glog
// file main.c line 70
static struct cfg *glog;
// hex2char
// file rtpp_util.c line 355
static signed char hex2char[128l] = { (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)0, (signed char)1, (signed char)2, (signed char)3, (signed char)4, (signed char)5, (signed char)6, (signed char)7, (signed char)8, (signed char)9, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)0xA, (signed char)0xB, (signed char)0xC, (signed char)0xD, (signed char)0xE, (signed char)0xF, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)0xa, (signed char)0xb, (signed char)0xc, (signed char)0xd, (signed char)0xe, (signed char)0xf, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1, (signed char)-1 };
// ip_id
// file rtpp_record.c line 254
static unsigned short int ip_id = (unsigned short int)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// pid_file
// file main.c line 69
static const char *pid_file = "/var/run/rtpproxy.pid";
// proto_caps
// file rtpp_command.c line 58
struct proto_cap proto_caps[9l] = { { .pc_id="20040107", .pc_description="Basic RTP proxy functionality" },
    { .pc_id="20050322", .pc_description="Support for multiple RTP streams and MOH" },
    { .pc_id="20060704", .pc_description="Support for extra parameter in the V command" },
    { .pc_id="20071116", .pc_description="Support for RTP re-packetization" },
    { .pc_id="20071218", .pc_description="Support for forking (copying) RTP stream" },
    { .pc_id="20080403", .pc_description="Support for RTP statistics querying" },
    { .pc_id="20081102", .pc_description="Support for setting codecs in the update/lookup command" },
    { .pc_id="20081224", .pc_description="Support for session timeout notifications" },
    { .pc_id=(const char *)(void *)0, .pc_description=(const char *)(void *)0 } };
// rtp_packet_pool
// file rtp.c line 40
static struct rtp_packet *rtp_packet_pool = (struct rtp_packet *)(void *)0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// str2fac
// file rtpp_log.c line 188
static struct anonymous_19 str2fac[21l] = { { .str_fac="LOG_AUTH", .int_fac=4 << 3 },
    { .str_fac="LOG_CRON", .int_fac=9 << 3 },
    { .str_fac="LOG_DAEMON", .int_fac=3 << 3 },
    { .str_fac="LOG_KERN", .int_fac=0 << 3 },
    { .str_fac="LOG_LOCAL0", .int_fac=16 << 3 },
    { .str_fac="LOG_LOCAL1", .int_fac=17 << 3 },
    { .str_fac="LOG_LOCAL2", .int_fac=18 << 3 },
    { .str_fac="LOG_LOCAL3", .int_fac=19 << 3 },
    { .str_fac="LOG_LOCAL4", .int_fac=20 << 3 },
    { .str_fac="LOG_LOCAL5", .int_fac=21 << 3 },
    { .str_fac="LOG_LOCAL6", .int_fac=22 << 3 },
    { .str_fac="LOG_LOCAL7", .int_fac=23 << 3 },
    { .str_fac="LOG_LPR", .int_fac=6 << 3 },
    { .str_fac="LOG_MAIL", .int_fac=2 << 3 },
    { .str_fac="LOG_NEWS", .int_fac=7 << 3 },
    { .str_fac="LOG_USER", .int_fac=1 << 3 },
    { .str_fac="LOG_UUCP", .int_fac=8 << 3 },
    { .str_fac="LOG_AUTHPRIV", .int_fac=10 << 3 },
    { .str_fac="LOG_FTP", .int_fac=11 << 3 },
    { .str_fac="LOG_SYSLOG", .int_fac=5 << 3 },
    { .str_fac=(const char *)(void *)0, .int_fac=0 } };
// syslog_async_opened
// file rtpp_log.c line 41
static signed int syslog_async_opened = 0;
// syslog_dropped_items
// file rtpp_syslog_async.c line 65
static signed int syslog_dropped_items;
// syslog_init_mutex
// file rtpp_syslog_async.c line 57
static union anonymous_24 syslog_init_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// syslog_queue
// file rtpp_syslog_async.c line 59
static unsigned long int syslog_queue;
// syslog_queue_cond
// file rtpp_syslog_async.c line 60
static union anonymous_22 syslog_queue_cond;
// syslog_queue_inited
// file rtpp_syslog_async.c line 58
static signed int syslog_queue_inited = 0;
// syslog_queue_mutex
// file rtpp_syslog_async.c line 61
static union anonymous_24 syslog_queue_mutex;
// syslog_wi_free
// file rtpp_syslog_async.c line 68
static struct syslog_wi *syslog_wi_free;
// syslog_wi_free_cond
// file rtpp_syslog_async.c line 62
static union anonymous_22 syslog_wi_free_cond;
// syslog_wi_free_mutex
// file rtpp_syslog_async.c line 63
static union anonymous_24 syslog_wi_free_mutex;
// syslog_wi_pool
// file rtpp_syslog_async.c line 67
static struct syslog_wi syslog_wi_pool[64l];
// syslog_wi_queue
// file rtpp_syslog_async.c line 69
static struct syslog_wi *syslog_wi_queue;
// syslog_wi_queue_tail
// file rtpp_syslog_async.c line 69
static struct syslog_wi *syslog_wi_queue_tail;

// _rtpp_log_close
// file rtpp_log.h line 65
void _rtpp_log_close(void)
{
  ;
}

// _rtpp_log_ewrite
// file rtpp_log.h line 63
void _rtpp_log_ewrite(struct cfg *cf, signed int level, const char *function, const char *format, ...)
{
  void **ap;
  char rtpp_log_buff[2048l];
  char *fmt;
  signed int return_value_check_level_1;
  return_value_check_level_1=check_level(cf, cf->log_level, level);
  if(!(return_value_check_level_1 == 0))
  {
    ap = (void **)&format;
    if(!(cf->nodaemon == 0))
      fmt = "%s:%s: %s: %s\n";

    else
      fmt = "%s:%s: %s: %s";
    const char *return_value_strlvl_2;
    return_value_strlvl_2=strlvl(level);
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    char *return_value_strerror_4;
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    snprintf(rtpp_log_buff, sizeof(char [2048l]) /*2048ul*/ , fmt, return_value_strlvl_2, function, format, return_value_strerror_4);
    if(!(cf->nodaemon == 0))
      vfprintf(stderr, rtpp_log_buff, ap);

    else
      vsyslog_async(level, rtpp_log_buff, ap);
    ap = ((void **)NULL);
  }

}

// _rtpp_log_open
// file rtpp_log.h line 64
struct cfg * _rtpp_log_open(struct cfg *cf, const char *app)
{
  signed int facility = cf->log_facility;
  if(facility == -1)
    facility = 3 << 3;

  if(cf->nodaemon == 0)
  {
    if(syslog_async_opened == 0)
    {
      signed int return_value_syslog_async_init_1;
      return_value_syslog_async_init_1=syslog_async_init(app, facility);
      if(return_value_syslog_async_init_1 == 0)
        syslog_async_opened = 1;

    }

  }

  return cf;
}

// _rtpp_log_write
// file rtpp_log.h line 62
void _rtpp_log_write(struct cfg *cf, signed int level, const char *function, const char *format, ...)
{
  void **ap;
  char rtpp_log_buff[2048l];
  char *fmt;
  signed int return_value_check_level_1;
  return_value_check_level_1=check_level(cf, cf->log_level, level);
  if(!(return_value_check_level_1 == 0))
  {
    ap = (void **)&format;
    if(!(cf->nodaemon == 0))
      fmt = "%s:%s: %s\n";

    else
      fmt = "%s:%s: %s";
    const char *return_value_strlvl_2;
    return_value_strlvl_2=strlvl(level);
    snprintf(rtpp_log_buff, sizeof(char [2048l]) /*2048ul*/ , fmt, return_value_strlvl_2, function, format);
    if(!(cf->nodaemon == 0))
      vfprintf(stderr, rtpp_log_buff, ap);

    else
      vsyslog_async(level, rtpp_log_buff, ap);
    ap = ((void **)NULL);
  }

}

// addr2char
// file rtpp_util.h line 60
const char * addr2char(struct sockaddr *ia)
{
  char *return_value_addr2char_r_1;
  static char buf[256l];
  return_value_addr2char_r_1=addr2char_r(ia, buf, (signed int)sizeof(char [256l]) /*256ul*/ );
  return return_value_addr2char_r_1;
}

// addr2char_r
// file rtpp_util.c line 99
char * addr2char_r(struct sockaddr *ia, char *buf, signed int size)
{
  void *addr;
  switch((signed int)ia->sa_family)
  {
    case 2:
    {
      addr = (void *)&((struct sockaddr_in *)ia)->sin_addr;
      break;
    }
    case 10:
    {
      addr = (void *)&((struct sockaddr_in6 *)ia)->sin6_addr;
      break;
    }
    default:
      abort();
  }
  const char *return_value_inet_ntop_1;
  return_value_inet_ntop_1=inet_ntop((signed int)ia->sa_family, addr, buf, (unsigned int)size);
  return (char *)(void *)return_value_inet_ntop_1;
}

// append_chunk
// file rtp_resizer.c line 164
static void append_chunk(struct rtp_packet *dst, struct rtp_packet *src, struct rtp_packet_chunk *chunk)
{
  memcpy((void *)&dst->data.buf[(signed long int)((unsigned long int)dst->data_offset + dst->data_size)], (const void *)&src->data.buf[(signed long int)src->data_offset], (unsigned long int)chunk->bytes);
  dst->nsamples = dst->nsamples + chunk->nsamples;
  dst->data_size = dst->data_size + (unsigned long int)chunk->bytes;
  dst->size = dst->size + (unsigned long int)chunk->bytes;
  src->nsamples = src->nsamples - chunk->nsamples;
  rtp_packet_set_ts(src, src->ts + (unsigned int)chunk->nsamples);
  src->data_size = src->data_size - (unsigned long int)chunk->bytes;
  src->size = src->size - (unsigned long int)chunk->bytes;
  memmove((void *)&src->data.buf[(signed long int)src->data_offset], (const void *)&src->data.buf[(signed long int)(src->data_offset + chunk->bytes)], src->data_size);
}

// append_packet
// file rtp_resizer.c line 152
static void append_packet(struct rtp_packet *dst, struct rtp_packet *src)
{
  memcpy((void *)&dst->data.buf[(signed long int)((unsigned long int)dst->data_offset + dst->data_size)], (const void *)&src->data.buf[(signed long int)src->data_offset], src->data_size);
  dst->nsamples = dst->nsamples + src->nsamples;
  dst->data_size = dst->data_size + src->data_size;
  dst->size = dst->size + src->data_size;
  dst->appendable = src->appendable;
}

// append_server
// file rtp_server.c line 161
void append_server(struct cfg *cf, struct rtpp_session *sp)
{
  _Bool tmp_if_expr_1;
  if(!(sp->rtps[0l] == ((struct rtp_server *)NULL)))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = sp->rtps[(signed long int)1] != (struct rtp_server *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
  {
    if(sp->sridx == -1)
    {
      cf->rtp_servers[(signed long int)cf->rtp_nsessions] = sp;
      sp->sridx = cf->rtp_nsessions;
      cf->rtp_nsessions = cf->rtp_nsessions + 1;
    }

  }

  else
    sp->sridx = -1;
}

// append_session
// file rtpp_session.c line 144
void append_session(struct cfg *cf, struct rtpp_session *sp, signed int index)
{
  if(!(sp->fds[(signed long int)index] == -1))
  {
    cf->sessions[(signed long int)cf->nsessions] = sp;
    (cf->pfds + (signed long int)cf->nsessions)->fd = sp->fds[(signed long int)index];
    (cf->pfds + (signed long int)cf->nsessions)->events = (signed short int)0x001;
    (cf->pfds + (signed long int)cf->nsessions)->revents = (signed short int)0;
    sp->sidx[(signed long int)index] = cf->nsessions;
    cf->nsessions = cf->nsessions + 1;
  }

  else
    sp->sidx[(signed long int)index] = -1;
}

// check_level
// file rtpp_log.c line 117
static signed int check_level(struct cfg *cf, signed int cf_level, signed int level)
{
  if(cf_level == -1)
    cf_level = cf->nodaemon != 0 ? 7 : 4;

  return (signed int)(level <= cf_level);
}

// compare_session_tags
// file rtpp_session.c line 226
signed int compare_session_tags(char *tag1, char *tag0, unsigned int *medianum_p)
{
  unsigned long int len0;
  len0=strlen(tag0);
  signed int return_value_strncmp_2;
  return_value_strncmp_2=strncmp(tag1, tag0, len0);
  unsigned long int return_value_strtoul_1;
  if(return_value_strncmp_2 == 0)
  {
    if((signed int)tag1[(signed long int)len0] == 59)
    {
      if(!(medianum_p == ((unsigned int *)NULL)))
      {
        return_value_strtoul_1=strtoul(tag1 + (signed long int)len0 + (signed long int)1, (char ** restrict )(void *)0, 10);
        *medianum_p = (unsigned int)return_value_strtoul_1;
      }

      return 2;
    }

    if((signed int)tag1[(signed long int)len0] == 0)
      return 1;

    return 0;
  }

  else
    return 0;
}

// create_listener
// file rtpp_command.c line 130
static signed int create_listener(struct cfg *cf, struct sockaddr *ia, signed int *port, signed int *fds)
{
  signed int i;
  signed int idx;
  signed int rval;
  i = 0;
  for( ; !(i >= 2); i = i + 1)
    fds[(signed long int)i] = -1;
  i = 1;
  for( ; !(i >= cf->port_table_len); i = i + 1)
  {
    idx = (cf->port_table_idx + i) % cf->port_table_len;
    *port = (signed int)cf->port_table[(signed long int)idx];
    rval=create_twinlistener(cf, ia, *port, fds);
    if(rval == 0)
    {
      cf->port_table_idx = idx;
      return 0;
    }

    if(rval == -1)
      break;

  }
  return -1;
}

// create_twinlistener
// file rtpp_command.c line 85
static signed int create_twinlistener(struct cfg *cf, struct sockaddr *ia, signed int port, signed int *fds)
{
  struct sockaddr_storage iac;
  signed int rval;
  signed int i;
  signed int flags;
  fds[(signed long int)1] = -1;
  fds[(signed long int)0] = fds[(signed long int)1];
  rval = -1;
  i = 0;
  signed int *return_value___errno_location_2;
  signed int return_value_setsockopt_5;
  for( ; !(i >= 2); i = i + 1)
  {
    fds[(signed long int)i]=socket((signed int)ia->sa_family, 2, 0);
    if(fds[(signed long int)i] == -1)
    {
      if(cf->glog->log_level >= 3)
        _rtpp_log_ewrite(cf->glog, 3, "create_twinlistener", "can't create %s socket", (signed int)ia->sa_family == 2 ? "IPv4" : "IPv6");

      goto failure;
    }

    memcpy((void *)&iac, (const void *)ia, (signed int)ia->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ );
    ((struct sockaddr_in *)&iac)->sin_port=htons((unsigned short int)port);
    signed int return_value_bind_4;
    return_value_bind_4=bind(fds[(signed long int)i], (struct sockaddr *)&iac, (unsigned int)((signed int)ia->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ ));
    if(!(return_value_bind_4 == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      _Bool tmp_if_expr_3;
      if(!(*return_value___errno_location_1 == 98))
      {
        return_value___errno_location_2=__errno_location();
        tmp_if_expr_3 = *return_value___errno_location_2 != 13 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
      {
        if(cf->glog->log_level >= 3)
          _rtpp_log_ewrite(cf->glog, 3, "create_twinlistener", "can't bind to the %s port %d", (signed int)ia->sa_family == 2 ? "IPv4" : "IPv6", port);

      }

      else
        rval = -2;
      goto failure;
    }

    port = port + 1;
    if((signed int)ia->sa_family == 2)
    {
      if(cf->tos >= 0)
      {
        return_value_setsockopt_5=setsockopt(fds[(signed long int)i], 0, 1, (const void *)&cf->tos, (unsigned int)sizeof(signed int) /*4ul*/ );
        if(return_value_setsockopt_5 == -1)
        {
          if(cf->glog->log_level >= 3)
            _rtpp_log_ewrite(cf->glog, 3, "create_twinlistener", "unable to set TOS to %d", cf->tos);

        }

      }

    }

    flags=fcntl(fds[(signed long int)i], 3);
    fcntl(fds[(signed long int)i], 4, flags | 04000);
  }
  return 0;

failure:
  ;
  i = 0;
  for( ; !(i >= 2); i = i + 1)
    if(!(fds[(signed long int)i] == -1))
    {
      close(fds[(signed long int)i]);
      fds[(signed long int)i] = -1;
    }

  return rval;
}

// detach_queue_head
// file rtp_resizer.c line 141
static void detach_queue_head(struct rtp_resizer *this)
{
  this->queue.first = this->queue.first->next;
  if(this->queue.first == ((struct rtp_packet *)NULL))
    this->queue.last = (struct rtp_packet *)(void *)0;

  else
    this->queue.first->prev = (struct rtp_packet *)(void *)0;
}

// do_timeout_notification
// file rtpp_session.h line 100
void do_timeout_notification(struct rtpp_session *sp, signed int retries)
{
  signed int result;
  signed int len;
  struct rtpp_timeout_handler *th = sp->timeout_data.handler;
  _Bool tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  if(!(th == ((struct rtpp_timeout_handler *)NULL)))
  {
    if(th->connected == 0)
    {
      reconnect_timeout_handler(sp, th);
      if(!(th->connected == 0))
        goto __CPROVER_DUMP_L3;

      if(sp->log->log_level >= 3)
        _rtpp_log_write(sp->log, 3, "do_timeout_notification", "unable to send timeout notification");

    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      if(sp->timeout_data.notify_tag == ((char *)NULL))
        len=snprintf(th->notify_buf, sizeof(char [64l]) /*64ul*/ , "%d %d\n", sp->ports[(signed long int)0], sp->ports[(signed long int)1]);

      else
        len=snprintf(th->notify_buf, sizeof(char [64l]) /*64ul*/ , "%s\n", sp->timeout_data.notify_tag);
      /* assertion len < sizeof(th->notify_buf) */
      assert((unsigned long int)len < sizeof(char [64l]) /*64ul*/ );
      do
      {
        signed long int return_value_send_3;
        return_value_send_3=send(th->fd, (const void *)th->notify_buf, (unsigned long int)len, 0);
        result = (signed int)return_value_send_3;
        if(len == -1)
        {
          return_value___errno_location_1=__errno_location();
          tmp_if_expr_2 = *return_value___errno_location_1 == 4 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_2 = (_Bool)0;
      }
      while(tmp_if_expr_2);
      if(!(result >= 0))
      {
        th->connected = 0;
        if(sp->log->log_level >= 3)
          _rtpp_log_ewrite(sp->log, 3, "do_timeout_notification", "failed to send timeout notification");

        if(retries >= 1)
          do_timeout_notification(sp, retries - 1);

      }

    }
  }

}

// doreply
// file rtpp_command.c line 152
static void doreply(struct cfg *cf, signed int fd, char *buf, signed int len, struct sockaddr_storage *raddr, unsigned int rlen)
{
  buf[(signed long int)len] = (char)0;
  if(cf->glog->log_level >= 7)
    _rtpp_log_write(cf->glog, 7, "doreply", "sending reply \"%s\"", buf);

  signed long int return_value_sendto_1;
  signed int *return_value___errno_location_2;
  if(cf->umode == 0)
    write(fd, (const void *)buf, (unsigned long int)len);

  else
    do
    {
      return_value_sendto_1=sendto(fd, (const void *)buf, (unsigned long int)len, 0, (struct sockaddr *)raddr, rlen);
      if(!(return_value_sendto_1 == -1l))
        break;

      return_value___errno_location_2=__errno_location();
      if(!(*return_value___errno_location_2 == 105))
        break;

    }
    while((_Bool)1);
}

// drop_privileges
// file rtpp_util.h line 65
signed int drop_privileges(struct cfg *cf)
{
  if(!(cf->run_gname == ((char *)NULL)))
  {
    signed int return_value_setgid_1;
    return_value_setgid_1=setgid(cf->run_gid);
    if(!(return_value_setgid_1 == 0))
    {
      if(cf->glog->log_level >= 3)
        _rtpp_log_ewrite(cf->glog, 3, "drop_privileges", "can't set current group ID: %d", cf->run_gid);

      return -1;
    }

  }

  if(cf->run_uname == ((char *)NULL))
    return 0;

  else
  {
    signed int return_value_setuid_2;
    return_value_setuid_2=setuid(cf->run_uid);
    if(!(return_value_setuid_2 == 0))
    {
      if(cf->glog->log_level >= 3)
        _rtpp_log_ewrite(cf->glog, 3, "drop_privileges", "can't set current user ID: %d", cf->run_uid);

      return -1;
    }

    else
      return 0;
  }
}

// dtime2ts
// file rtpp_util.h line 62
void dtime2ts(double dtime, unsigned int *ts_sec, unsigned int *ts_usec)
{
  double return_value_trunc_1;
  return_value_trunc_1=trunc(dtime);
  *ts_sec = (unsigned int)return_value_trunc_1;
  double return_value_round_2;
  return_value_round_2=round(1000000.0 * (dtime - (double)*ts_sec));
  *ts_usec = (unsigned int)return_value_round_2;
}

// ehandler
// file main.c line 114
static void ehandler(void)
{
  unlink(cmd_sock);
  unlink(pid_file);
  if(glog->log_level >= 6)
    _rtpp_log_write(glog, 6, "ehandler", "rtpproxy ended");

  _rtpp_log_close();
}

// fatsignal
// file main.c line 106
static void fatsignal(signed int sig)
{
  if(glog->log_level >= 6)
    _rtpp_log_write(glog, 6, "fatsignal", "got signal %d", sig);

  exit(0);
}

// find_stream
// file rtpp_session.c line 244
signed int find_stream(struct cfg *cf, char *call_id, char *from_tag, char *to_tag, struct rtpp_session **spp)
{
  char *cp1;
  char *cp2;
  *spp=session_findfirst(cf, call_id);
  signed int return_value_strcmp_2;
  while(!(*spp == ((struct rtpp_session *)NULL)))
  {
    signed int return_value_strcmp_3;
    return_value_strcmp_3=strcmp((*spp)->tag, from_tag);
    if(return_value_strcmp_3 == 0)
      return 0;

    else
      if(!(to_tag == ((char *)NULL)))
      {
        signed int return_value_compare_session_tags_1;
        return_value_compare_session_tags_1=compare_session_tags((*spp)->tag, to_tag, (unsigned int *)(void *)0);
        switch(return_value_compare_session_tags_1)
        {
          case 1:
            return 1;
          case 2:
          {
            cp1=strrchr((*spp)->tag, 59);
            cp2=strrchr(from_tag, 59);
            if(!(cp2 == ((char *)NULL)))
            {
              return_value_strcmp_2=strcmp(cp1, cp2);
              if(return_value_strcmp_2 == 0)
                return 1;

            }

            break;
          }
          default:
            ;
        }
      }

    *spp=session_findnext(*spp);
  }
  return -1;
}

// flush_rbuf
// file rtpp_record.c line 205
static signed int flush_rbuf(struct rtpp_session *sp, void *rrc)
{
  signed int rval;
  signed long int return_value_write_1;
  return_value_write_1=write(((struct rtpp_record_channel *)rrc)->fd, (const void *)((struct rtpp_record_channel *)rrc)->rbuf, (unsigned long int)((struct rtpp_record_channel *)rrc)->rbuf_len);
  rval = (signed int)return_value_write_1;
  if(!(rval == -1))
  {
    ((struct rtpp_record_channel *)rrc)->rbuf_len = 0;
    return 0;
  }

  else
  {
    if(sp->log->log_level >= 3)
      _rtpp_log_ewrite(sp->log, 3, "flush_rbuf", "error while recording session (%s)", sp->rtcp != (struct rtpp_session *)(void *)0 ? "RTP" : "RTCP");

    close(((struct rtpp_record_channel *)rrc)->fd);
    ((struct rtpp_record_channel *)rrc)->fd = -1;
    return -1;
  }
}

// g723_len
// file rtp.c line 43
static signed int g723_len(unsigned char ch)
{
  switch((signed int)ch & 3)
  {
    case 2:
      return 4;
    case 0:
      return 24;
    case 1:
      return 20;
    default:
      return -1;
  }
}

// g723_samples
// file rtp.c line 65
static signed int g723_samples(const unsigned char *buf, signed int maxlen)
{
  signed int pos;
  signed int samples;
  signed int n;
  pos = 0;
  samples = 0;
  for( ; !(pos >= maxlen); pos = pos + n)
  {
    samples = samples + 240;
    n=g723_len(buf[(signed long int)pos]);
    if(n == -1)
      return -1;

  }
  return samples;
}

// get_ttl
// file rtpp_session.h line 101
signed int get_ttl(struct rtpp_session *sp)
{
  signed int tmp_if_expr_1;
  signed int tmp_if_expr_2;
  switch((signed int)sp->ttl_mode)
  {
    case TTL_UNIFIED:
    {
      if(!(sp->ttl[1l] >= sp->ttl[0l]))
        tmp_if_expr_1 = sp->ttl[(signed long int)0];

      else
        tmp_if_expr_1 = sp->ttl[(signed long int)1];
      return tmp_if_expr_1;
    }
    case TTL_INDEPENDENT:
    {
      if(!(sp->ttl[1l] >= sp->ttl[0l]))
        tmp_if_expr_2 = sp->ttl[(signed long int)1];

      else
        tmp_if_expr_2 = sp->ttl[(signed long int)0];
      return tmp_if_expr_2;
    }
    default:
    {
      abort();
      return 0;
    }
  }
}

// getdtime
// file rtpp_util.h line 61
double getdtime(void)
{
  struct timeval timev;
  signed int return_value_gettimeofday_1;
  return_value_gettimeofday_1=gettimeofday(&timev, (struct timezone *)(void *)0);
  if(return_value_gettimeofday_1 == -1)
    return (double)-1;

  else
    return (double)timev.tv_sec + (double)timev.tv_usec / 1000000.0;
}

// handle_command
// file rtpp_command.h line 43
signed int handle_command(struct cfg *cf, signed int controlfd, double dtime)
{
  signed int len;
  signed int argc;
  signed int i;
  signed int j;
  signed int pidx;
  signed int asymmetric;
  signed int external;
  signed int pf;
  signed int lidx;
  signed int playcount;
  signed int weak;
  signed int fds[2l];
  signed int lport;
  signed int n;
  unsigned int rlen;
  char buf[8192l];
  char *cp;
  char *call_id;
  char *from_tag;
  char *to_tag;
  char *addr;
  char *port;
  char *cookie;
  char *pname;
  char *codecs;
  char *recording_name;
  char *t;
  struct rtpp_session *spa;
  struct rtpp_session *spb;
  char **ap;
  char *argv[10l];
  const char *rname;
  struct sockaddr *ia[2l];
  struct sockaddr *lia[2l];
  struct sockaddr_storage raddr;
  signed int requested_nsamples;
  /* #anon_enum_DELETE=0_RECORD=1_PLAY=2_NOPLAY=3_COPY=4_UPDATE=5_LOOKUP=6_QUERY=7 */
enum anonymous_15 { DELETE=0, RECORD=1, PLAY=2, NOPLAY=3, COPY=4, UPDATE=5, LOOKUP=6, QUERY=7 };

/* */
  ;
  enum anonymous_15 op;
  signed int max_argc;
  char *socket_name_u;
  char *notify_tag;
  requested_nsamples = -1;
  ia[(signed long int)1] = (struct sockaddr *)(void *)0;
  ia[(signed long int)0] = ia[(signed long int)1];
  spb = (struct rtpp_session *)(void *)0;
  spa = spb;
  lia[(signed long int)1] = cf->bindaddr[(signed long int)0];
  lia[(signed long int)0] = lia[(signed long int)1];
  lidx = 1;
  fds[(signed long int)1] = -1;
  fds[(signed long int)0] = fds[(signed long int)1];
  recording_name = (char *)(void *)0;
  notify_tag = (char *)(void *)0;
  socket_name_u = notify_tag;
  signed int *return_value___errno_location_2;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  if(cf->umode == 0)
    do
    {
      signed long int return_value_read_1;
      return_value_read_1=read(controlfd, (void *)buf, sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)1);
      len = (signed int)return_value_read_1;
      _Bool tmp_if_expr_5;
      if(!(len == -1))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value___errno_location_2=__errno_location();
        if(!(*return_value___errno_location_2 == 11))
        {
          return_value___errno_location_3=__errno_location();
          tmp_if_expr_4 = *return_value___errno_location_3 != 4 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_4 = (_Bool)0;
        tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        break;

      sched_yield();
    }
    while((_Bool)1);

  else
  {
    rlen = (unsigned int)sizeof(struct sockaddr_storage) /*128ul*/ ;
    signed long int return_value_recvfrom_6;
    return_value_recvfrom_6=recvfrom(controlfd, (void *)buf, sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)1, 0, (struct sockaddr *)&raddr, &rlen);
    len = (signed int)return_value_recvfrom_6;
  }
  signed int *return_value___errno_location_7;
  if(len == -1)
  {
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    if(!(*return_value___errno_location_8 == 11))
    {
      return_value___errno_location_7=__errno_location();
      if(!(*return_value___errno_location_7 == 4))
      {
        if(cf->glog->log_level >= 3)
          _rtpp_log_ewrite(cf->glog, 3, "handle_command", "can't read from control socket");

      }

    }

    return -1;
  }

  buf[(signed long int)len] = (char)0;
  if(cf->glog->log_level >= 7)
    _rtpp_log_write(cf->glog, 7, "handle_command", "received command \"%s\"", (const void *)buf);

  cp = buf;
  argc = 0;
  memset((void *)argv, 0, sizeof(char *[10l]) /*80ul*/ );
  ap = argv;
  do
  {
    *ap=rtpp_strsep(&cp, "\r\n\t ");
    if(*ap == ((char *)NULL))
      break;

    if(!((signed int)*(*ap) == 0))
    {
      argc = argc + 1;
      ap = ap + 1l;
      if(ap >= argv + 10l)
        break;

    }

  }
  while((_Bool)1);
  cookie = (char *)(void *)0;
  _Bool tmp_if_expr_9;
  if(!(argc >= 1))
    tmp_if_expr_9 = (_Bool)1;

  else
    tmp_if_expr_9 = (cf->umode != 0 ? (argc < 2 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
  signed long int return_value_strtol_26;
  void *return_value___builtin_alloca_28;
  unsigned long int return_value_strlen_33;
  signed int return_value_strcmp_34;
  signed int return_value_handle_play_35;
  signed int return_value_memcmp_44;
  signed int return_value_memcmp_47;
  if(tmp_if_expr_9)
  {
    if(cf->glog->log_level >= 3)
      _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

    reply_error(cf, controlfd, &raddr, rlen, cookie, 0);
    return 0;
  }

  else
  {
    if(!(cf->umode == 0))
    {
      cookie = argv[(signed long int)0];
      i = 1;
      for( ; !(i >= argc); i = i + 1)
        argv[(signed long int)(i - 1)] = argv[(signed long int)i];
      argc = argc - 1;
      argv[(signed long int)argc] = (char *)(void *)0;
    }

    else
      cookie = (char *)(void *)0;
    port = (char *)(void *)0;
    addr = port;
    switch((signed int)argv[(signed long int)0][(signed long int)0])
    {
      case 117:

      case 85:
      {
        op = (enum anonymous_15)UPDATE;
        rname = "update/create";
        break;
      }
      case 108:

      case 76:
      {
        op = (enum anonymous_15)LOOKUP;
        rname = "lookup";
        break;
      }
      case 100:

      case 68:
      {
        op = (enum anonymous_15)DELETE;
        rname = "delete";
        break;
      }
      case 112:

      case 80:
      {
        op = (enum anonymous_15)PLAY;
        rname = "play";
        playcount = 1;
        pname = argv[(signed long int)2];
        codecs = argv[(signed long int)3];
        break;
      }
      case 114:

      case 82:
      {
        op = (enum anonymous_15)RECORD;
        rname = "record";
        break;
      }
      case 99:

      case 67:
      {
        op = (enum anonymous_15)COPY;
        rname = "copy";
        break;
      }
      case 115:

      case 83:
      {
        op = (enum anonymous_15)NOPLAY;
        rname = "noplay";
        break;
      }
      case 118:

      case 86:
      {
        _Bool tmp_if_expr_12;
        if((signed int)argv[0l][1l] == 70)
          tmp_if_expr_12 = (_Bool)1;

        else
          tmp_if_expr_12 = (signed int)argv[(signed long int)0][(signed long int)1] == 102 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_12)
        {
          signed int handle_command__1__9__1__i;
          signed int known;
          if(!(argc == 2) && !(argc == 3))
          {
            if(cf->glog->log_level >= 3)
              _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

            reply_error(cf, controlfd, &raddr, rlen, cookie, 2);
            return 0;
          }

          signed int return_value_strcmp_10;
          return_value_strcmp_10=strcmp(argv[(signed long int)1], "20081224");
          if(return_value_strcmp_10 == 0)
          {
            if(cf->timeout_handler.socket_name == ((char *)NULL))
            {
              reply_number(cf, controlfd, &raddr, rlen, cookie, 0);
              return 0;
            }

          }

          handle_command__1__9__1__i = 0;
          known = handle_command__1__9__1__i;
          for( ; !(proto_caps[(signed long int)handle_command__1__9__1__i].pc_id == ((const char *)NULL)); handle_command__1__9__1__i = handle_command__1__9__1__i + 1)
          {
            signed int return_value_strcmp_11;
            return_value_strcmp_11=strcmp(argv[(signed long int)1], proto_caps[(signed long int)handle_command__1__9__1__i].pc_id);
            if(return_value_strcmp_11 == 0)
            {
              known = 1;
              break;
            }

          }
          reply_number(cf, controlfd, &raddr, rlen, cookie, known);
          return 0;
        }

        if(!(argc == 1) && !(argc == 2))
        {
          if(cf->glog->log_level >= 3)
            _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

          reply_error(cf, controlfd, &raddr, rlen, cookie, 2);
          return 0;
        }

        reply_number(cf, controlfd, &raddr, rlen, cookie, 20040107);
        return 0;
      }
      case 105:

      case 73:
      {
        if(cookie == ((char *)NULL))
          len=sprintf(buf, "sessions created: %llu\nactive sessions: %d\nactive streams: %d\n", cf->sessions_created, cf->sessions_active, cf->nsessions / 2);

        else
          len=sprintf(buf, "%s sessions created: %llu\nactive sessions: %d\nactive streams: %d\n", cookie, cf->sessions_created, cf->sessions_active, cf->nsessions / 2);
        i = 1;
        for( ; !(i >= cf->nsessions); i = i + 1)
        {
          char addrs[4l][256l];
          spa = cf->sessions[(signed long int)i];
          _Bool tmp_if_expr_13;
          if(spa == ((struct rtpp_session *)NULL))
            tmp_if_expr_13 = (_Bool)1;

          else
            tmp_if_expr_13 = spa->sidx[(signed long int)0] != i ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_13)
          {
            if(spa->rtcp == ((struct rtpp_session *)NULL))
            {
              spb = spa->rtp;
              signed int tmp_post_14 = len;
              len = len + 1;
              buf[(signed long int)tmp_post_14] = (char)9;
            }

            else
            {
              spb = spa->rtcp;
              signed int tmp_post_15 = len;
              len = len + 1;
              buf[(signed long int)tmp_post_15] = (char)9;
              signed int tmp_post_16 = len;
              len = len + 1;
              buf[(signed long int)tmp_post_16] = (char)67;
              signed int tmp_post_17 = len;
              len = len + 1;
              buf[(signed long int)tmp_post_17] = (char)32;
            }
            addr2char_r(spb->laddr[(signed long int)1], addrs[(signed long int)0], (signed int)sizeof(char [256l]) /*256ul*/ );
            if(spb->addr[1l] == ((struct sockaddr *)NULL))
              strcpy(addrs[(signed long int)1], "NONE");

            else
            {
              const char *return_value_addr2char_18;
              return_value_addr2char_18=addr2char(spb->addr[(signed long int)1]);
              unsigned short int return_value_ntohs_19;
              return_value_ntohs_19=ntohs(((struct sockaddr_in *)spb->addr[(signed long int)1])->sin_port);
              sprintf(addrs[(signed long int)1], "%s:%d", return_value_addr2char_18, return_value_ntohs_19);
            }
            addr2char_r(spb->laddr[(signed long int)0], addrs[(signed long int)2], (signed int)sizeof(char [256l]) /*256ul*/ );
            if(spb->addr[0l] == ((struct sockaddr *)NULL))
              strcpy(addrs[(signed long int)3], "NONE");

            else
            {
              const char *return_value_addr2char_20;
              return_value_addr2char_20=addr2char(spb->addr[(signed long int)0]);
              unsigned short int return_value_ntohs_21;
              return_value_ntohs_21=ntohs(((struct sockaddr_in *)spb->addr[(signed long int)0])->sin_port);
              sprintf(addrs[(signed long int)3], "%s:%d", return_value_addr2char_20, return_value_ntohs_21);
            }
            signed int return_value_sprintf_22;
            return_value_sprintf_22=sprintf(buf + (signed long int)len, "%s/%s: caller = %s:%d/%s, callee = %s:%d/%s, stats = %lu/%lu/%lu/%lu, ttl = %d/%d\n", spb->call_id, spb->tag, (const void *)addrs[(signed long int)0], spb->ports[(signed long int)1], (const void *)addrs[(signed long int)1], (const void *)addrs[(signed long int)2], spb->ports[(signed long int)0], (const void *)addrs[(signed long int)3], spa->pcount[(signed long int)0], spa->pcount[(signed long int)1], spa->pcount[(signed long int)2], spa->pcount[(signed long int)3], spb->ttl[(signed long int)0], spb->ttl[(signed long int)1]);
            len = len + return_value_sprintf_22;
            if((unsigned long int)(512 + len) >= 8193ul)
            {
              doreply(cf, controlfd, buf, len, &raddr, rlen);
              len = 0;
            }

          }

        }
        if(len >= 1)
          doreply(cf, controlfd, buf, len, &raddr, rlen);

        return 0;
      }
      case 113:

      case 81:
      {
        op = (enum anonymous_15)QUERY;
        rname = "query";
        break;
      }
      case 120:

      case 88:
      {
        if(cf->glog->log_level >= 6)
          _rtpp_log_write(cf->glog, 6, "handle_command", "deleting all active sessions");

        i = 1;
        for( ; !(i >= cf->nsessions); i = i + 1)
        {
          spa = cf->sessions[(signed long int)i];
          _Bool tmp_if_expr_23;
          if(spa == ((struct rtpp_session *)NULL))
            tmp_if_expr_23 = (_Bool)1;

          else
            tmp_if_expr_23 = spa->sidx[(signed long int)0] != i ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_23)
          {
            if(!(spa->rtcp == ((struct rtpp_session *)NULL)))
              remove_session(cf, spa);

          }

        }
        reply_ok(cf, controlfd, &raddr, rlen, cookie);
        return 0;
      }
      default:
      {
        if(cf->glog->log_level >= 3)
          _rtpp_log_write(cf->glog, 3, "handle_command", "unknown command");

        reply_error(cf, controlfd, &raddr, rlen, cookie, 3);
        return 0;
      }
    }
    call_id = argv[(signed long int)1];
    if((signed int)op == PLAY || (signed int)op == UPDATE || (signed int)op == LOOKUP)
    {
      max_argc = (signed int)op == UPDATE ? 8 : 6;
      if(!(argc >= 5) || !(max_argc >= argc))
      {
        if(cf->glog->log_level >= 3)
          _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

        reply_error(cf, controlfd, &raddr, rlen, cookie, 4);
        return 0;
      }

      from_tag = argv[(signed long int)4];
      to_tag = argv[(signed long int)5];
      if((signed int)op == PLAY)
      {
        if(!((signed int)argv[0l][1l] == 0))
          playcount=atoi(argv[(signed long int)0] + (signed long int)1);

      }

      if((signed int)op == UPDATE && argc >= 7)
      {
        socket_name_u = argv[(signed long int)6];
        signed int return_value_strncmp_24;
        return_value_strncmp_24=strncmp("unix:", socket_name_u, (unsigned long int)5);
        if(return_value_strncmp_24 == 0)
          socket_name_u = socket_name_u + (signed long int)5;

        if(argc == 8)
        {
          notify_tag = argv[(signed long int)7];
          unsigned long int return_value_strlen_25;
          return_value_strlen_25=strlen(notify_tag);
          len=url_unquote((unsigned char *)notify_tag, (signed int)return_value_strlen_25);
          if(len == -1)
          {
            if(cf->glog->log_level >= 3)
              _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error - invalid URL encoding");

            reply_error(cf, controlfd, &raddr, rlen, cookie, 4);
            return 0;
          }

          notify_tag[(signed long int)len] = (char)0;
        }

      }

    }

    if((signed int)op == COPY)
    {
      if(argc >= 6 || !(argc >= 4))
      {
        if(cf->glog->log_level >= 3)
          _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

        reply_error(cf, controlfd, &raddr, rlen, cookie, 1);
        return 0;
      }

      recording_name = argv[(signed long int)2];
      from_tag = argv[(signed long int)3];
      to_tag = argv[(signed long int)4];
    }

    if((signed int)op == DELETE || (signed int)op == RECORD || (signed int)op == NOPLAY || (signed int)op == QUERY)
    {
      if(argc >= 5 || !(argc >= 3))
      {
        if(cf->glog->log_level >= 3)
          _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

        reply_error(cf, controlfd, &raddr, rlen, cookie, 1);
        return 0;
      }

      from_tag = argv[(signed long int)2];
      to_tag = argv[(signed long int)3];
    }

    if((signed int)op == DELETE || (signed int)op == RECORD || (signed int)op == NOPLAY || (signed int)op == COPY)
    {
      if((signed int)argv[0l][1l] == 0)
        goto __CPROVER_DUMP_L87;

      if(cf->glog->log_level >= 3)
        _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

      reply_error(cf, controlfd, &raddr, rlen, cookie, 1);
      return 0;
    }

    else
    {

    __CPROVER_DUMP_L87:
      ;
      if((signed int)op == DELETE || (signed int)op == UPDATE || (signed int)op == LOOKUP)
      {
        addr = argv[(signed long int)2];
        port = argv[(signed long int)3];
        external = 1;
        asymmetric = cf->bmode != 0 ? 1 : 0;
        pf = 2;
        weak = 0;
        cp = argv[(signed long int)0] + (signed long int)1;
        for( ; !((signed int)*cp == 0); cp = cp + 1l)
          switch((signed int)*cp)
          {
            case 97:

            case 65:
            {
              asymmetric = 1;
              break;
            }
            case 101:

            case 69:
            {
              if(!(lidx >= 0))
              {
                if(cf->glog->log_level >= 3)
                  _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

                reply_error(cf, controlfd, &raddr, rlen, cookie, 1);
                return 0;
              }

              lia[(signed long int)lidx] = cf->bindaddr[(signed long int)1];
              lidx = lidx - 1;
              break;
            }
            case 105:

            case 73:
            {
              if(!(lidx >= 0))
              {
                if(cf->glog->log_level >= 3)
                  _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

                reply_error(cf, controlfd, &raddr, rlen, cookie, 1);
                return 0;
              }

              lia[(signed long int)lidx] = cf->bindaddr[(signed long int)0];
              lidx = lidx - 1;
              break;
            }
            case 54:
            {
              pf = 10;
              break;
            }
            case 115:

            case 83:
            {
              asymmetric = 0;
              break;
            }
            case 119:

            case 87:
            {
              weak = 1;
              break;
            }
            case 122:

            case 90:
            {
              return_value_strtol_26=strtol(cp + (signed long int)1, &cp, 10);
              requested_nsamples = (signed int)((return_value_strtol_26 / (signed long int)10) * (signed long int)80);
              if(!(requested_nsamples >= 1))
              {
                if(cf->glog->log_level >= 3)
                  _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

                reply_error(cf, controlfd, &raddr, rlen, cookie, 1);
                return 0;
              }

              cp = cp - 1l;
              break;
            }
            case 99:

            case 67:
            {
              cp = cp + (signed long int)1;
              t = cp;
              for( ; !((signed int)*cp == 0); cp = cp + 1l)
              {
                const unsigned short int **return_value___ctype_b_loc_27;
                return_value___ctype_b_loc_27=__ctype_b_loc();
                if((2048 & (signed int)(*return_value___ctype_b_loc_27)[(signed long int)(signed int)*cp]) == 0)
                {
                  if(!((signed int)*cp == 44))
                    break;

                }

              }
              if(t == cp)
              {
                if(cf->glog->log_level >= 3)
                  _rtpp_log_write(cf->glog, 3, "handle_command", "command syntax error");

                reply_error(cf, controlfd, &raddr, rlen, cookie, 1);
                return 0;
              }

              return_value___builtin_alloca_28=__builtin_alloca((unsigned long int)((cp - t) + (signed long int)1));
              codecs = (char *)return_value___builtin_alloca_28;
              memcpy((void *)codecs, (const void *)t, (unsigned long int)(cp - t));
              codecs[cp - t] = (char)0;
              cp = cp - 1l;
              break;
            }
            default:
              if(cf->glog->log_level >= 3)
                _rtpp_log_write(cf->glog, 3, "handle_command", "unknown command modifier `%c'", *cp);

          }
        if(!(addr == ((char *)NULL)) && !(port == ((char *)NULL)) && !((signed int)op == DELETE))
        {
          return_value_strlen_33=strlen(addr);
          if(return_value_strlen_33 >= 7ul)
          {
            struct sockaddr_storage tia;
            n=resolve((struct sockaddr *)&tia, pf, addr, port, 0x0004);
            if(n == 0)
            {
              signed int return_value_ishostnull_31;
              return_value_ishostnull_31=ishostnull((struct sockaddr *)&tia);
              if(return_value_ishostnull_31 == 0)
              {
                i = 0;
                for( ; !(i >= 2); i = i + 1)
                {
                  void *return_value_malloc_29;
                  return_value_malloc_29=malloc((signed int)(&tia)->ss_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ );
                  ia[(signed long int)i] = (struct sockaddr *)return_value_malloc_29;
                  if(ia[(signed long int)i] == ((struct sockaddr *)NULL))
                  {
                    handle_nomem(cf, controlfd, &raddr, rlen, cookie, 5, ia, fds, spa, spb);
                    return 0;
                  }

                  memcpy((void *)ia[(signed long int)i], (const void *)&tia, (signed int)(&tia)->ss_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ );
                }
                unsigned short int return_value_ntohs_30;
                return_value_ntohs_30=ntohs(((struct sockaddr_in *)ia[(signed long int)1])->sin_port);
                n = (signed int)return_value_ntohs_30;
                ((struct sockaddr_in *)ia[(signed long int)1])->sin_port=htons((unsigned short int)(n + 1));
              }

            }

            else
              if(cf->glog->log_level >= 3)
              {
                const char *return_value_gai_strerror_32;
                return_value_gai_strerror_32=gai_strerror(n);
                _rtpp_log_write(cf->glog, 3, "handle_command", "getaddrinfo: %s", return_value_gai_strerror_32);
              }

          }

        }

      }

      switch((signed int)op)
      {
        case DELETE:
        {
          i=handle_delete(cf, call_id, from_tag, to_tag, weak);
          break;
        }
        case RECORD:
        {
          i=handle_record(cf, call_id, from_tag, to_tag);
          break;
        }
        default:
        {
          i=find_stream(cf, call_id, from_tag, to_tag, &spa);
          if(!(i == -1) && !((signed int)op == UPDATE))
            i = i == 0 ? 1 : 0;

        }
      }
      if(i == -1 && !((signed int)op == UPDATE))
      {
        if(cf->glog->log_level >= 6)
          _rtpp_log_write(cf->glog, 6, "handle_command", "%s request failed: session %s, tags %s/%s not found", rname, call_id, from_tag, to_tag != (char *)(void *)0 ? to_tag : "NONE");

        if((signed int)op == LOOKUP)
        {
          i = 0;
          for( ; !(i >= 2); i = i + 1)
            if(!(ia[(signed long int)i] == ((struct sockaddr *)NULL)))
              free((void *)ia[(signed long int)i]);

          reply_port(cf, controlfd, &raddr, rlen, cookie, 0, lia);
          return 0;
        }

        reply_error(cf, controlfd, &raddr, rlen, cookie, 8);
        return 0;
      }

      else
      {
        switch((signed int)op)
        {
          case DELETE:

          case RECORD:
          {
            reply_ok(cf, controlfd, &raddr, rlen, cookie);
            return 0;
          }
          case NOPLAY:
          {
            handle_noplay(cf, spa, i);
            reply_ok(cf, controlfd, &raddr, rlen, cookie);
            return 0;
          }
          case PLAY:
          {
            handle_noplay(cf, spa, i);
            return_value_strcmp_34=strcmp(codecs, "session");
            if(return_value_strcmp_34 == 0)
            {
              if(spa->codecs[(signed long int)i] == ((char *)NULL))
              {
                reply_error(cf, controlfd, &raddr, rlen, cookie, 6);
                return 0;
              }

              codecs = spa->codecs[(signed long int)i];
            }

            if(!(playcount == 0))
            {
              return_value_handle_play_35=handle_play(cf, spa, i, codecs, pname, playcount);
              if(!(return_value_handle_play_35 == 0))
              {
                reply_error(cf, controlfd, &raddr, rlen, cookie, 6);
                return 0;
              }

            }

            reply_ok(cf, controlfd, &raddr, rlen, cookie);
            return 0;
          }
          case COPY:
          {
            handle_copy(cf, spa, i, recording_name);
            reply_ok(cf, controlfd, &raddr, rlen, cookie);
            return 0;
          }
          case QUERY:
          {
            handle_query(cf, controlfd, &raddr, rlen, cookie, spa, i);
            return 0;
          }
          case LOOKUP:

          case UPDATE:
            break;
          default:
            abort();
        }
        pidx = 1;
        lport = 0;
        if(!(i == -1))
        {
          /* assertion op == UPDATE || op == LOOKUP */
          assert((signed int)op == UPDATE || (signed int)op == LOOKUP);
          if(spa->fds[(signed long int)i] == -1)
          {
            signed int return_value_ishostseq_36;
            return_value_ishostseq_36=ishostseq(cf->bindaddr[(signed long int)0], spa->laddr[(signed long int)i]);
            j = return_value_ishostseq_36 != 0 ? 0 : 1;
            signed int return_value_create_listener_37;
            return_value_create_listener_37=create_listener(cf, spa->laddr[(signed long int)i], &lport, fds);
            if(return_value_create_listener_37 == -1)
            {
              if(spa->log->log_level >= 3)
                _rtpp_log_write(spa->log, 3, "handle_command", "can't create listener");

              reply_error(cf, controlfd, &raddr, rlen, cookie, 7);
              return 0;
            }

            /* assertion spa->fds[i] == -1 */
            assert(spa->fds[(signed long int)i] == -1);
            spa->fds[(signed long int)i] = fds[(signed long int)0];
            /* assertion spa->rtcp->fds[i] == -1 */
            assert(spa->rtcp->fds[(signed long int)i] == -1);
            spa->rtcp->fds[(signed long int)i] = fds[(signed long int)1];
            spa->ports[(signed long int)i] = lport;
            spa->rtcp->ports[(signed long int)i] = lport + 1;
            spa->rtcp->complete = 1;
            spa->complete = spa->rtcp->complete;
            append_session(cf, spa, i);
            append_session(cf, spa->rtcp, i);
          }

          if(!(weak == 0))
            spa->weak[(signed long int)i] = 1;

          else
            if((signed int)op == UPDATE)
              spa->strong = 1;

          lport = spa->ports[(signed long int)i];
          lia[(signed long int)0] = spa->laddr[(signed long int)i];
          pidx = i == 0 ? 1 : 0;
          spa->ttl_mode = cf->ttl_mode;
          spa->ttl[(signed long int)0] = cf->max_ttl;
          spa->ttl[(signed long int)1] = cf->max_ttl;
          if((signed int)op == UPDATE)
          {
            if(spa->log->log_level >= 6)
              _rtpp_log_write(spa->log, 6, "handle_command", "adding %s flag to existing session, new=%d/%d/%d", weak != 0 ? (i != 0 ? "weak[1]" : "weak[0]") : "strong", spa->strong, spa->weak[(signed long int)0], spa->weak[(signed long int)1]);

          }

          if(spa->log->log_level >= 6)
            _rtpp_log_write(spa->log, 6, "handle_command", "lookup on ports %d/%d, session timer restarted", spa->ports[(signed long int)0], spa->ports[(signed long int)1]);

        }

        else
        {
          /* assertion op == UPDATE */
          assert((signed int)op == UPDATE);
          if(cf->glog->log_level >= 6)
            _rtpp_log_write(cf->glog, 6, "handle_command", "new session %s, tag %s requested, type %s", call_id, from_tag, weak != 0 ? "weak" : "strong");

          signed int return_value_ishostseq_38;
          return_value_ishostseq_38=ishostseq(cf->bindaddr[(signed long int)0], lia[(signed long int)0]);
          j = return_value_ishostseq_38 != 0 ? 0 : 1;
          signed int return_value_create_listener_39;
          return_value_create_listener_39=create_listener(cf, cf->bindaddr[(signed long int)j], &lport, fds);
          if(return_value_create_listener_39 == -1)
          {
            if(cf->glog->log_level >= 3)
              _rtpp_log_write(cf->glog, 3, "handle_command", "can't create listener");

            reply_error(cf, controlfd, &raddr, rlen, cookie, 10);
            return 0;
          }

          void *return_value_malloc_40;
          return_value_malloc_40=malloc(sizeof(struct rtpp_session) /*400ul*/ );
          spa = (struct rtpp_session *)return_value_malloc_40;
          if(spa == ((struct rtpp_session *)NULL))
          {
            handle_nomem(cf, controlfd, &raddr, rlen, cookie, 11, ia, fds, spa, spb);
            return 0;
          }

          void *return_value_malloc_41;
          return_value_malloc_41=malloc(sizeof(struct rtpp_session) /*400ul*/ );
          spb = (struct rtpp_session *)return_value_malloc_41;
          if(spb == ((struct rtpp_session *)NULL))
          {
            handle_nomem(cf, controlfd, &raddr, rlen, cookie, 12, ia, fds, spa, spb);
            return 0;
          }

          memset((void *)spa, 0, sizeof(struct rtpp_session) /*400ul*/ );
          memset((void *)spb, 0, sizeof(struct rtpp_session) /*400ul*/ );
          i = 0;
          for( ; !(i >= 2); i = i + 1)
          {
            spb->fds[(signed long int)i] = -1;
            spa->fds[(signed long int)i] = spb->fds[(signed long int)i];
            spa->last_update[(signed long int)i] = (double)0;
            spb->last_update[(signed long int)i] = (double)0;
          }
          spa->call_id=strdup(call_id);
          if(spa->call_id == ((char *)NULL))
          {
            handle_nomem(cf, controlfd, &raddr, rlen, cookie, 13, ia, fds, spa, spb);
            return 0;
          }

          spb->call_id = spa->call_id;
          spa->tag=strdup(from_tag);
          if(spa->tag == ((char *)NULL))
          {
            handle_nomem(cf, controlfd, &raddr, rlen, cookie, 14, ia, fds, spa, spb);
            return 0;
          }

          spb->tag = spa->tag;
          i = 0;
          for( ; !(i >= 2); i = i + 1)
          {
            spa->rrcs[(signed long int)i] = (void *)0;
            spb->rrcs[(signed long int)i] = (void *)0;
            spa->laddr[(signed long int)i] = lia[(signed long int)i];
            spb->laddr[(signed long int)i] = lia[(signed long int)i];
          }
          spa->weak[(signed long int)1] = 0;
          spa->weak[(signed long int)0] = spa->weak[(signed long int)1];
          spa->strong = spa->weak[(signed long int)0];
          if(!(weak == 0))
            spa->weak[(signed long int)0] = 1;

          else
            spa->strong = 1;
          /* assertion spa->fds[0] == -1 */
          assert(spa->fds[(signed long int)0] == -1);
          spa->fds[(signed long int)0] = fds[(signed long int)0];
          /* assertion spb->fds[0] == -1 */
          assert(spb->fds[(signed long int)0] == -1);
          spb->fds[(signed long int)0] = fds[(signed long int)1];
          spa->ports[(signed long int)0] = lport;
          spb->ports[(signed long int)0] = lport + 1;
          spa->ttl[(signed long int)0] = cf->max_ttl;
          spa->ttl[(signed long int)1] = cf->max_ttl;
          spb->ttl[(signed long int)0] = -1;
          spb->ttl[(signed long int)1] = -1;
          spa->log=_rtpp_log_open(cf, "rtpproxy");
          spb->log = spa->log;
          spa->rtcp = spb;
          spb->rtcp = (struct rtpp_session *)(void *)0;
          spa->rtp = (struct rtpp_session *)(void *)0;
          spb->rtp = spa;
          spb->sridx = -1;
          spa->sridx = spb->sridx;
          append_session(cf, spa, 0);
          append_session(cf, spa, 1);
          append_session(cf, spb, 0);
          append_session(cf, spb, 1);
          hash_table_append(cf, spa);
          cf->sessions_created = cf->sessions_created + 1ull;
          cf->sessions_active = cf->sessions_active + 1;
          if(!((80ul * cf->nofile_limit.rlim_max) / 500ul >= (unsigned long int)cf->sessions_active))
          {
            if(cf->nofile_limit_warned == 0)
            {
              cf->nofile_limit_warned = 1;
              if(cf->glog->log_level >= 4)
                _rtpp_log_write(cf->glog, 4, "handle_command", "passed 80%% threshold on the open file descriptors limit (%d), consider increasing the limit using -L command line option", (signed int)cf->nofile_limit.rlim_max);

            }

          }

          if(spa->log->log_level >= 6)
            _rtpp_log_write(spa->log, 6, "handle_command", "new session on a port %d created, tag %s", lport, from_tag);

          if(!(cf->record_all == 0))
          {
            handle_copy(cf, spa, 0, (char *)(void *)0);
            handle_copy(cf, spa, 1, (char *)(void *)0);
          }

        }
        if((signed int)op == UPDATE)
        {
          if(cf->timeout_handler.socket_name == ((char *)NULL))
          {
            if(!(socket_name_u == ((char *)NULL)))
            {
              if(spa->log->log_level >= 3)
                _rtpp_log_write(spa->log, 3, "handle_command", "must permit notification socket with -n");

            }

          }

          if(!(spa->timeout_data.notify_tag == ((char *)NULL)))
          {
            free((void *)spa->timeout_data.notify_tag);
            spa->timeout_data.notify_tag = (char *)(void *)0;
          }

          if(!(cf->timeout_handler.socket_name == ((char *)NULL)) && !(socket_name_u == ((char *)NULL)))
          {
            signed int return_value_strcmp_42;
            return_value_strcmp_42=strcmp(cf->timeout_handler.socket_name, socket_name_u);
            if(!(return_value_strcmp_42 == 0))
            {
              if(spa->log->log_level >= 3)
                _rtpp_log_write(spa->log, 3, "handle_command", "invalid socket name %s", socket_name_u);

              socket_name_u = (char *)(void *)0;
            }

            else
            {
              if(spa->log->log_level >= 6)
                _rtpp_log_write(spa->log, 6, "handle_command", "setting timeout handler");

              spa->timeout_data.handler = &cf->timeout_handler;
              spa->timeout_data.notify_tag=strdup(notify_tag);
            }
          }

          else
            if(socket_name_u == ((char *)NULL))
            {
              if(!(spa->timeout_data.handler == ((struct rtpp_timeout_handler *)NULL)))
              {
                spa->timeout_data.handler = (struct rtpp_timeout_handler *)(void *)0;
                if(spa->log->log_level >= 6)
                  _rtpp_log_write(spa->log, 6, "handle_command", "disabling timeout handler");

              }

            }

        }

        if(!(ia[0l] == ((struct sockaddr *)NULL)))
        {
          if(!(ia[1l] == ((struct sockaddr *)NULL)))
          {
            if(!(spa->addr[(signed long int)pidx] == ((struct sockaddr *)NULL)))
              spa->last_update[(signed long int)pidx] = dtime;

            if(!(spa->rtcp->addr[(signed long int)pidx] == ((struct sockaddr *)NULL)))
              spa->rtcp->last_update[(signed long int)pidx] = dtime;

            if(spa->untrusted_addr[(signed long int)pidx] == 0)
            {
              _Bool tmp_if_expr_43;
              if(!(spa->addr[(signed long int)pidx] == ((struct sockaddr *)NULL)))
                tmp_if_expr_43 = ((signed int)ia[(signed long int)0]->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ ) == ((signed int)spa->addr[(signed long int)pidx]->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ ) ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_43 = (_Bool)0;
              _Bool tmp_if_expr_45;
              if(tmp_if_expr_43)
              {
                return_value_memcmp_44=memcmp((const void *)ia[(signed long int)0], (const void *)spa->addr[(signed long int)pidx], (signed int)ia[(signed long int)0]->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ );
                tmp_if_expr_45 = return_value_memcmp_44 == 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_45 = (_Bool)0;
              if(!tmp_if_expr_45)
              {
                if(spa->log->log_level >= 6)
                  _rtpp_log_write(spa->log, 6, "handle_command", "pre-filling %s's address with %s:%s", pidx == 0 ? "callee" : "caller", addr, port);

                if(!(spa->addr[(signed long int)pidx] == ((struct sockaddr *)NULL)))
                {
                  if(spa->canupdate[(signed long int)pidx] == 0)
                  {
                    if(!(spa->prev_addr[(signed long int)pidx] == ((struct sockaddr *)NULL)))
                      free((void *)spa->prev_addr[(signed long int)pidx]);

                    spa->prev_addr[(signed long int)pidx] = spa->addr[(signed long int)pidx];
                  }

                  else
                    free((void *)spa->addr[(signed long int)pidx]);
                }

                spa->addr[(signed long int)pidx] = ia[(signed long int)0];
                ia[(signed long int)0] = (struct sockaddr *)(void *)0;
              }

            }

            if(spa->rtcp->untrusted_addr[(signed long int)pidx] == 0)
            {
              _Bool tmp_if_expr_46;
              if(!(spa->rtcp->addr[(signed long int)pidx] == ((struct sockaddr *)NULL)))
                tmp_if_expr_46 = ((signed int)ia[(signed long int)1]->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ ) == ((signed int)spa->rtcp->addr[(signed long int)pidx]->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ ) ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_46 = (_Bool)0;
              _Bool tmp_if_expr_48;
              if(tmp_if_expr_46)
              {
                return_value_memcmp_47=memcmp((const void *)ia[(signed long int)1], (const void *)spa->rtcp->addr[(signed long int)pidx], (signed int)ia[(signed long int)1]->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ );
                tmp_if_expr_48 = return_value_memcmp_47 == 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_48 = (_Bool)0;
              if(!tmp_if_expr_48)
              {
                if(!(spa->rtcp->addr[(signed long int)pidx] == ((struct sockaddr *)NULL)))
                {
                  if(spa->rtcp->canupdate[(signed long int)pidx] == 0)
                  {
                    if(!(spa->rtcp->prev_addr[(signed long int)pidx] == ((struct sockaddr *)NULL)))
                      free((void *)spa->rtcp->prev_addr[(signed long int)pidx]);

                    spa->rtcp->prev_addr[(signed long int)pidx] = spa->rtcp->addr[(signed long int)pidx];
                  }

                  else
                    free((void *)spa->rtcp->addr[(signed long int)pidx]);
                }

                spa->rtcp->addr[(signed long int)pidx] = ia[(signed long int)1];
                ia[(signed long int)1] = (struct sockaddr *)(void *)0;
              }

            }

          }

        }

        spa->rtcp->asymmetric[(signed long int)pidx] = asymmetric;
        spa->asymmetric[(signed long int)pidx] = spa->rtcp->asymmetric[(signed long int)pidx];
        spa->rtcp->canupdate[(signed long int)pidx] = asymmetric == 0 ? 1 : 0;
        spa->canupdate[(signed long int)pidx] = spa->rtcp->canupdate[(signed long int)pidx];
        if(!(spa->codecs[(signed long int)pidx] == ((char *)NULL)))
        {
          free((void *)spa->codecs[(signed long int)pidx]);
          spa->codecs[(signed long int)pidx] = (char *)(void *)0;
        }

        if(!(codecs == ((char *)NULL)))
          spa->codecs[(signed long int)pidx]=strdup(codecs);

        if(requested_nsamples >= 1)
        {
          if(spa->log->log_level >= 6)
            _rtpp_log_write(spa->log, 6, "handle_command", "RTP packets from %s will be resized to %d milliseconds", pidx == 0 ? "callee" : "caller", requested_nsamples / 8);

        }

        else
          if(spa->resizers[(signed long int)pidx].output_nsamples >= 1)
          {
            if(spa->log->log_level >= 6)
              _rtpp_log_write(spa->log, 6, "handle_command", "Resizing of RTP packets from %s has been disabled", pidx == 0 ? "callee" : "caller");

          }

        spa->resizers[(signed long int)pidx].output_nsamples = requested_nsamples;
        i = 0;
        for( ; !(i >= 2); i = i + 1)
          if(!(ia[(signed long int)i] == ((struct sockaddr *)NULL)))
            free((void *)ia[(signed long int)i]);

        /* assertion lport != 0 */
        assert(lport != 0);
        reply_port(cf, controlfd, &raddr, rlen, cookie, lport, lia);
        return 0;
      }
    }
  }
}

// handle_copy
// file rtpp_command.c line 1107
static void handle_copy(struct cfg *cf, struct rtpp_session *spa, signed int idx, char *rname)
{
  if(spa->rrcs[(signed long int)idx] == NULL)
  {
    spa->rrcs[(signed long int)idx]=ropen(cf, spa, rname, idx);
    if(spa->log->log_level >= 6)
      _rtpp_log_write(spa->log, 6, "handle_copy", "starting recording RTP session on port %d", spa->ports[(signed long int)idx]);

  }

  if(spa->rtcp->rrcs[(signed long int)idx] == NULL)
  {
    if(!(cf->rrtcp == 0))
    {
      spa->rtcp->rrcs[(signed long int)idx]=ropen(cf, spa->rtcp, rname, idx);
      if(spa->log->log_level >= 6)
        _rtpp_log_write(spa->log, 6, "handle_copy", "starting recording RTCP session on port %d", spa->rtcp->ports[(signed long int)idx]);

    }

  }

}

// handle_delete
// file rtpp_command.c line 1001
static signed int handle_delete(struct cfg *cf, char *call_id, char *from_tag, char *to_tag, signed int weak)
{
  signed int ndeleted;
  unsigned int medianum;
  struct rtpp_session *spa;
  struct rtpp_session *spb;
  signed int cmpr;
  signed int cmpr1;
  signed int idx;
  ndeleted = 0;
  spa=session_findfirst(cf, call_id);
  while(!(spa == ((struct rtpp_session *)NULL)))
  {
    medianum = (unsigned int)0;
    cmpr1=compare_session_tags(spa->tag, from_tag, &medianum);
    if(!(cmpr1 == 0))
    {
      idx = 1;
      cmpr = cmpr1;
    }

    else
    {
      _Bool tmp_if_expr_1;
      if(!(to_tag == ((char *)NULL)))
      {
        cmpr1=compare_session_tags(spa->tag, to_tag, &medianum);
        tmp_if_expr_1 = cmpr1 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        idx = 0;
        cmpr = cmpr1;
      }

      else
      {
        spa=session_findnext(spa);
        continue;
      }
    }
    if(!(weak == 0))
      spa->weak[(signed long int)idx] = 0;

    else
      spa->strong = 0;
    _Bool tmp_if_expr_2;
    if(!(spa->strong == 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = spa->weak[(signed long int)0] != 0 ? (_Bool)1 : (_Bool)0;
    _Bool tmp_if_expr_3;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = spa->weak[(signed long int)1] != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
    {
      if(spa->log->log_level >= 6)
        _rtpp_log_write(spa->log, 6, "handle_delete", "delete: medianum=%u: removing %s flag, seeing flags to continue session (strong=%d, weak=%d/%d)", medianum, weak != 0 ? (idx != 0 ? "weak[1]" : "weak[0]") : "strong", spa->strong, spa->weak[(signed long int)0], spa->weak[(signed long int)1]);

      ndeleted = ndeleted + 1;
      spa=session_findnext(spa);
    }

    else
    {
      if(spa->log->log_level >= 6)
        _rtpp_log_write(spa->log, 6, "handle_delete", "forcefully deleting session %u on ports %d/%d", medianum, spa->ports[(signed long int)0], spa->ports[(signed long int)1]);

      spb = spa;
      spa=session_findnext(spa);
      remove_session(cf, spb);
      ndeleted = ndeleted + 1;
      if(!(cmpr == 2))
        break;

    }
  }
  if(ndeleted == 0)
    return -1;

  else
    return 0;
}

// handle_nomem
// file rtpp_command.c line 225
static void handle_nomem(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, signed int ecode, struct sockaddr **ia, signed int *fds, struct rtpp_session *spa, struct rtpp_session *spb)
{
  signed int i;
  if(cf->glog->log_level >= 3)
    _rtpp_log_write(cf->glog, 3, "handle_nomem", "can't allocate memory");

  i = 0;
  for( ; !(i >= 2); i = i + 1)
    if(!(ia[(signed long int)i] == ((struct sockaddr *)NULL)))
      free((void *)ia[(signed long int)i]);

  if(!(spa == ((struct rtpp_session *)NULL)))
  {
    if(!(spa->call_id == ((char *)NULL)))
      free((void *)spa->call_id);

    free((void *)spa);
  }

  if(!(spb == ((struct rtpp_session *)NULL)))
    free((void *)spb);

  i = 0;
  for( ; !(i >= 2); i = i + 1)
    if(!(fds[(signed long int)i] == -1))
      close(fds[(signed long int)i]);

  reply_error(cf, fd, raddr, rlen, cookie, ecode);
}

// handle_noplay
// file rtpp_command.c line 1063
static void handle_noplay(struct cfg *cf, struct rtpp_session *spa, signed int idx)
{
  if(!(spa->rtps[(signed long int)idx] == ((struct rtp_server *)NULL)))
  {
    rtp_server_free(spa->rtps[(signed long int)idx]);
    spa->rtps[(signed long int)idx] = (struct rtp_server *)(void *)0;
    if(spa->log->log_level >= 6)
      _rtpp_log_write(spa->log, 6, "handle_noplay", "stopping player at port %d", spa->ports[(signed long int)idx]);

    if(spa->rtps[0l] == ((struct rtp_server *)NULL))
    {
      if(spa->rtps[1l] == ((struct rtp_server *)NULL))
      {
        /* assertion cf->rtp_servers[spa->sridx] == spa */
        assert(cf->rtp_servers[(signed long int)spa->sridx] == spa);
        cf->rtp_servers[(signed long int)spa->sridx] = (struct rtpp_session *)(void *)0;
        spa->sridx = -1;
      }

    }

  }

}

// handle_play
// file rtpp_command.c line 1080
static signed int handle_play(struct cfg *cf, struct rtpp_session *spa, signed int idx, char *codecs, char *pname, signed int playcount)
{
  signed int n;
  char *cp;
  while(!((signed int)*codecs == 0))
  {
    signed long int return_value_strtol_1;
    return_value_strtol_1=strtol(codecs, &cp, 10);
    n = (signed int)return_value_strtol_1;
    if(cp == codecs)
      break;

    codecs = cp;
    if(!((signed int)*codecs == 0))
      codecs = codecs + 1l;

    spa->rtps[(signed long int)idx]=rtp_server_new(pname, (enum anonymous_20)n, playcount);
    if(!(spa->rtps[(signed long int)idx] == ((struct rtp_server *)NULL)))
    {
      if(spa->log->log_level >= 6)
        _rtpp_log_write(spa->log, 6, "handle_play", "%d times playing prompt %s codec %d", playcount, pname, n);

      if(spa->sridx == -1)
        append_server(cf, spa);

      return 0;
    }

  }
  if(spa->log->log_level >= 3)
    _rtpp_log_write(spa->log, 3, "handle_play", "can't create player");

  return -1;
}

// handle_query
// file rtpp_command.c line 1147
static void handle_query(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, struct rtpp_session *spa, signed int idx)
{
  char buf[8192l];
  signed int len;
  if(!(cookie == ((char *)NULL)))
  {
    signed int return_value_get_ttl_1;
    return_value_get_ttl_1=get_ttl(spa);
    len=sprintf(buf, "%s %d %lu %lu %lu %lu\n", cookie, return_value_get_ttl_1, spa->pcount[(signed long int)idx], spa->pcount[(signed long int)(idx == 0 ? 1 : 0)], spa->pcount[(signed long int)2], spa->pcount[(signed long int)3]);
  }

  else
  {
    signed int return_value_get_ttl_2;
    return_value_get_ttl_2=get_ttl(spa);
    len=sprintf(buf, "%d %lu %lu %lu %lu\n", return_value_get_ttl_2, spa->pcount[(signed long int)idx], spa->pcount[(signed long int)(idx == 0 ? 1 : 0)], spa->pcount[(signed long int)2], spa->pcount[(signed long int)3]);
  }
  doreply(cf, fd, buf, len, raddr, rlen);
}

// handle_record
// file rtpp_command.c line 1123
static signed int handle_record(struct cfg *cf, char *call_id, char *from_tag, char *to_tag)
{
  signed int nrecorded;
  signed int idx;
  struct rtpp_session *spa;
  nrecorded = 0;
  spa=session_findfirst(cf, call_id);
  signed int return_value_compare_session_tags_1;
  while(!(spa == ((struct rtpp_session *)NULL)))
  {
    signed int return_value_compare_session_tags_3;
    return_value_compare_session_tags_3=compare_session_tags(spa->tag, from_tag, (unsigned int *)(void *)0);
    if(!(return_value_compare_session_tags_3 == 0))
      idx = 1;

    else
    {
      _Bool tmp_if_expr_2;
      if(!(to_tag == ((char *)NULL)))
      {
        return_value_compare_session_tags_1=compare_session_tags(spa->tag, to_tag, (unsigned int *)(void *)0);
        tmp_if_expr_2 = return_value_compare_session_tags_1 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        idx = 0;

      else
        goto __CPROVER_DUMP_L8;
    }
    nrecorded = nrecorded + 1;
    handle_copy(cf, spa, idx, (char *)(void *)0);
    handle_copy(cf, spa, idx == 0 ? 1 : 0, (char *)(void *)0);

  __CPROVER_DUMP_L8:
    ;
    spa=session_findnext(spa);
  }
  return nrecorded == 0 ? -1 : 0;
}

// hash_string
// file rtpp_session.c line 58
static unsigned char hash_string(struct cfg *cf, char *bp, char *ep)
{
  unsigned char res = cf->rand_table[(signed long int)0];
  for( ; !(bp == ep) && !((signed int)*bp == 0); bp = bp + 1l)
    res = cf->rand_table[(signed long int)((signed int)res ^ (signed int)bp[(signed long int)0])];
  return res;
}

// hash_table_append
// file rtpp_session.c line 69
void hash_table_append(struct cfg *cf, struct rtpp_session *sp)
{
  unsigned char hash;
  struct rtpp_session *tsp;
  /* assertion sp->rtcp != ((void *)0) */
  assert(sp->rtcp != (struct rtpp_session *)(void *)0);
  hash=hash_string(cf, sp->call_id, (char *)(void *)0);
  tsp = cf->hash_table[(signed long int)hash];
  if(tsp == ((struct rtpp_session *)NULL))
  {
    cf->hash_table[(signed long int)hash] = sp;
    sp->next = (struct rtpp_session *)(void *)0;
    sp->prev = sp->next;
  }

  else
  {
    for( ; !(tsp->next == ((struct rtpp_session *)NULL)); tsp = tsp->next)
      ;
    tsp->next = sp;
    sp->prev = tsp;
    sp->next = (struct rtpp_session *)(void *)0;
  }
}

// hash_table_remove
// file rtpp_session.c line 93
static void hash_table_remove(struct cfg *cf, struct rtpp_session *sp)
{
  unsigned char hash;
  /* assertion sp->rtcp != ((void *)0) */
  assert(sp->rtcp != (struct rtpp_session *)(void *)0);
  if(!(sp->prev == ((struct rtpp_session *)NULL)))
  {
    sp->prev->next = sp->next;
    if(!(sp->next == ((struct rtpp_session *)NULL)))
      sp->next->prev = sp->prev;

  }

  else
  {
    hash=hash_string(cf, sp->call_id, (char *)(void *)0);
    /* assertion cf->hash_table[hash] == sp */
    assert(cf->hash_table[(signed long int)hash] == sp);
    cf->hash_table[(signed long int)hash] = sp->next;
    if(!(sp->next == ((struct rtpp_session *)NULL)))
      sp->next->prev = (struct rtpp_session *)(void *)0;

  }
}

// init_config
// file main.c line 124
static void init_config(struct cfg *cf, signed int argc, char **argv)
{
  signed int ch;
  signed int i;
  char *bh[2l];
  char *bh6[2l];
  char *cp;
  struct passwd *pp;
  struct group *gp;
  bh6[(signed long int)1] = (char *)(void *)0;
  bh6[(signed long int)0] = bh6[(signed long int)1];
  bh[(signed long int)1] = bh6[(signed long int)0];
  bh[(signed long int)0] = bh[(signed long int)1];
  cf->port_min = 35000;
  cf->port_max = 65000;
  cf->max_ttl = 60;
  cf->tos = 0xb8;
  cf->rrtcp = 1;
  cf->ttl_mode = (enum anonymous_30)TTL_UNIFIED;
  cf->log_level = -1;
  cf->log_facility = -1;
  cf->timeout_handler.socket_name = (char *)(void *)0;
  cf->timeout_handler.fd = -1;
  cf->timeout_handler.connected = 0;
  signed int return_value_getrlimit_1;
  return_value_getrlimit_1=getrlimit(7, &cf->nofile_limit);
  if(!(return_value_getrlimit_1 == 0))
    err(1, "getrlimit");

  signed int return_value_strncmp_4;
  signed int return_value_strncmp_3;
  signed int return_value_strncmp_2;
  signed int return_value_atoi_5;
  signed int return_value_setrlimit_6;
  signed int return_value_getrlimit_7;
  signed int return_value_atoi_9;
  signed int return_value_atoi_8;
  signed int return_value_strncmp_10;
  unsigned long int return_value_strlen_11;
  unsigned long int return_value_strlen_12;
  void *return_value_malloc_13;
  do
  {
    ch=getopt(argc, argv, "vf2Rl:6:s:S:t:r:p:T:L:m:M:u:Fin:Pad:");
    if(ch == -1)
      break;

    switch(ch)
    {
      case 102:
      {
        cf->nodaemon = 1;
        break;
      }
      case 108:
      {
        bh[(signed long int)0] = optarg;
        bh[(signed long int)1]=strchr(bh[(signed long int)0], 47);
        if(!(bh[1l] == ((char *)NULL)))
        {
          *bh[(signed long int)1] = (char)0;
          bh[(signed long int)1] = bh[(signed long int)1] + 1l;
          cf->bmode = 1;
        }

        break;
      }
      case 54:
      {
        bh6[(signed long int)0] = optarg;
        bh6[(signed long int)1]=strchr(bh6[(signed long int)0], 47);
        if(!(bh6[1l] == ((char *)NULL)))
        {
          *bh6[(signed long int)1] = (char)0;
          bh6[(signed long int)1] = bh6[(signed long int)1] + 1l;
          cf->bmode = 1;
        }

        break;
      }
      case 115:
      {
        return_value_strncmp_4=strncmp("udp:", optarg, (unsigned long int)4);
        if(return_value_strncmp_4 == 0)
        {
          cf->umode = 1;
          optarg = optarg + (signed long int)4;
        }

        else
        {
          return_value_strncmp_3=strncmp("udp6:", optarg, (unsigned long int)5);
          if(return_value_strncmp_3 == 0)
          {
            cf->umode = 6;
            optarg = optarg + (signed long int)5;
          }

          else
          {
            return_value_strncmp_2=strncmp("unix:", optarg, (unsigned long int)5);
            if(return_value_strncmp_2 == 0)
            {
              cf->umode = 0;
              optarg = optarg + (signed long int)5;
            }

          }
        }
        cmd_sock = optarg;
        break;
      }
      case 116:
      {
        cf->tos=atoi(optarg);
        if(cf->tos >= 256)
          errx(1, "%d: TOS is too large", cf->tos);

        break;
      }
      case 50:
      {
        cf->dmode = 1;
        break;
      }
      case 118:
      {
        printf("Basic version: %d\n", 20040107);
        i = 1;
        for( ; !(proto_caps[(signed long int)i].pc_id == ((const char *)NULL)); i = i + 1)
          printf("Extension %s: %s\n", proto_caps[(signed long int)i].pc_id, proto_caps[(signed long int)i].pc_description);
        exit(0);
        break;
      }
      case 114:
      {
        cf->rdir = optarg;
        break;
      }
      case 83:
      {
        cf->sdir = optarg;
        break;
      }
      case 82:
      {
        cf->rrtcp = 0;
        break;
      }
      case 112:
      {
        pid_file = optarg;
        break;
      }
      case 84:
      {
        cf->max_ttl=atoi(optarg);
        break;
      }
      case 76:
      {
        return_value_atoi_5=atoi(optarg);
        cf->nofile_limit.rlim_max = (unsigned long int)return_value_atoi_5;
        cf->nofile_limit.rlim_cur = cf->nofile_limit.rlim_max;
        return_value_setrlimit_6=setrlimit(7, &cf->nofile_limit);
        if(!(return_value_setrlimit_6 == 0))
          err(1, "setrlimit");

        return_value_getrlimit_7=getrlimit(7, &cf->nofile_limit);
        if(!(return_value_getrlimit_7 == 0))
          err(1, "getrlimit");

        return_value_atoi_9=atoi(optarg);
        if(!(cf->nofile_limit.rlim_max >= (unsigned long int)return_value_atoi_9))
        {
          return_value_atoi_8=atoi(optarg);
          warnx("limit allocated by setrlimit (%d) is less than requested (%d)", (signed int)cf->nofile_limit.rlim_max, return_value_atoi_8);
        }

        break;
      }
      case 109:
      {
        cf->port_min=atoi(optarg);
        break;
      }
      case 77:
      {
        cf->port_max=atoi(optarg);
        break;
      }
      case 117:
      {
        cf->run_uname = optarg;
        cp=strchr(optarg, 58);
        if(!(cp == ((char *)NULL)))
        {
          if(cp == optarg)
            cf->run_uname = (char *)(void *)0;

          cp[(signed long int)0] = (char)0;
          cp = cp + 1l;
        }

        cf->run_gname = cp;
        cf->run_uid = (unsigned int)-1;
        cf->run_gid = (unsigned int)-1;
        if(!(cf->run_uname == ((char *)NULL)))
        {
          pp=getpwnam(cf->run_uname);
          if(pp == ((struct passwd *)NULL))
            err(1, "can't find ID for the user: %s", cf->run_uname);

          cf->run_uid = pp->pw_uid;
          if(cf->run_gname == ((char *)NULL))
            cf->run_gid = pp->pw_gid;

        }

        if(!(cf->run_gname == ((char *)NULL)))
        {
          gp=getgrnam(cf->run_gname);
          if(gp == ((struct group *)NULL))
            err(1, "can't find ID for the group: %s", cf->run_gname);

          cf->run_gid = gp->gr_gid;
        }

        break;
      }
      case 70:
      {
        cf->no_check = 1;
        break;
      }
      case 105:
      {
        cf->ttl_mode = (enum anonymous_30)TTL_INDEPENDENT;
        break;
      }
      case 110:
      {
        return_value_strncmp_10=strncmp("unix:", optarg, (unsigned long int)5);
        if(return_value_strncmp_10 == 0)
          optarg = optarg + (signed long int)5;

        return_value_strlen_11=strlen(optarg);
        if(return_value_strlen_11 == 0ul)
          errx(1, "timeout notification socket name too short");

        return_value_strlen_12=strlen(optarg);
        return_value_malloc_13=malloc(return_value_strlen_12 + (unsigned long int)1);
        cf->timeout_handler.socket_name = (char *)return_value_malloc_13;
        if(cf->timeout_handler.socket_name == ((char *)NULL))
          err(1, "can't allocate memory");

        strcpy(cf->timeout_handler.socket_name, optarg);
        break;
      }
      case 80:
      {
        cf->record_pcap = 1;
        break;
      }
      case 97:
      {
        cf->record_all = 1;
        break;
      }
      case 100:
      {
        cp=strchr(optarg, 58);
        if(!(cp == ((char *)NULL)))
        {
          cf->log_facility=rtpp_log_str2fac(cp + (signed long int)1);
          if(cf->log_facility == -1)
            errx(1, "%s: invalid log facility", cp + (signed long int)1);

          *cp = (char)0;
        }

        cf->log_level=rtpp_log_str2lvl(optarg);
        if(cf->log_level == -1)
          errx(1, "%s: invalid log level", optarg);

        break;
      }
      case 63:

      default:
        usage();
    }
  }
  while((_Bool)1);
  if(cf->rdir == ((const char *)NULL))
  {
    if(!(cf->sdir == ((const char *)NULL)))
      errx(1, "-S switch requires -r switch");

  }

  unsigned int return_value_getuid_14;
  if(cf->no_check == 0)
  {
    return_value_getuid_14=getuid();
    if(return_value_getuid_14 == 0u)
    {
      if(cf->run_uname == ((char *)NULL))
      {
        if(!(cf->umode == 0))
          errx(1, "running this program as superuser in a remote control mode is strongly not recommended, as it poses serious security threat to your system. Use -u option to run as an unprivileged user or -F is you want to run as a superuser anyway.");

        else
          warnx("WARNING!!! Running this program as superuser is strongly not recommended, as it may pose serious security threat to your system. Use -u option to run as an unprivileged user or -F to surpress this warning.");
      }

    }

  }

  if(!(cf->port_min % 2 == 0))
    cf->port_min = cf->port_min + 1;

  if(!(cf->port_max % 2 == 0))
    cf->port_max = cf->port_max - 1;

  else
    cf->port_max = cf->port_max - 2;
  _Bool tmp_if_expr_15;
  if(!(cf->port_min >= 1))
    tmp_if_expr_15 = (_Bool)1;

  else
    tmp_if_expr_15 = cf->port_min > 65535 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_15)
    errx(1, "invalid value of the port_min argument, not in the range 1-65535");

  _Bool tmp_if_expr_16;
  if(!(cf->port_max >= 1))
    tmp_if_expr_16 = (_Bool)1;

  else
    tmp_if_expr_16 = cf->port_max > 65535 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_16)
    errx(1, "invalid value of the port_max argument, not in the range 1-65535");

  if(!(cf->port_max >= cf->port_min))
    errx(1, "port_min should be less than port_max");

  void *return_value_malloc_17;
  return_value_malloc_17=malloc(sizeof(struct rtpp_session *) /*8ul*/  * (unsigned long int)(((cf->port_max - cf->port_min) + 1) * 2 + 1));
  cf->sessions = (struct rtpp_session **)return_value_malloc_17;
  void *return_value_malloc_18;
  return_value_malloc_18=malloc(sizeof(struct rtpp_session *) /*8ul*/  * (unsigned long int)(((cf->port_max - cf->port_min) + 1) * 2 + 1));
  cf->rtp_servers = (struct rtpp_session **)return_value_malloc_18;
  void *return_value_malloc_19;
  return_value_malloc_19=malloc(sizeof(struct pollfd) /*8ul*/  * (unsigned long int)(((cf->port_max - cf->port_min) + 1) * 2 + 1));
  cf->pfds = (struct pollfd *)return_value_malloc_19;
  if(bh[0l] == ((char *)NULL))
  {
    if(bh[1l] == ((char *)NULL))
    {
      if(bh6[0l] == ((char *)NULL))
      {
        if(bh6[1l] == ((char *)NULL))
        {
          if(!(cf->umode == 0))
            errx(1, "explicit binding address has to be specified in UDP command mode");

          bh[(signed long int)0] = "*";
        }

      }

    }

  }

  i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    if(!(bh[(signed long int)i] == ((char *)NULL)))
    {
      if((signed int)*bh[(signed long int)i] == 0)
        bh[(signed long int)i] = (char *)(void *)0;

    }

    if(!(bh6[(signed long int)i] == ((char *)NULL)))
    {
      if((signed int)*bh6[(signed long int)i] == 0)
        bh6[(signed long int)i] = (char *)(void *)0;

    }

  }
  i = (bh[(signed long int)0] == (char *)(void *)0 ? 0 : 1) + (bh[(signed long int)1] == (char *)(void *)0 ? 0 : 1) + (bh6[(signed long int)0] == (char *)(void *)0 ? 0 : 1) + (bh6[(signed long int)1] == (char *)(void *)0 ? 0 : 1);
  if(!(cf->bmode == 0))
  {
    if(!(bh[0l] == ((char *)NULL)))
    {
      if(!(bh6[0l] == ((char *)NULL)))
        errx(1, "either IPv4 or IPv6 should be configured for external interface in bridging mode, not both");

    }

    if(!(bh[1l] == ((char *)NULL)))
    {
      if(!(bh6[1l] == ((char *)NULL)))
        errx(1, "either IPv4 or IPv6 should be configured for internal interface in bridging mode, not both");

    }

    if(!(i == 2))
      errx(1, "incomplete configuration of the bridging mode - exactly 2 listen addresses required, %d provided", i);

  }

  else
    if(!(i == 1))
      errx(1, "exactly 1 listen addresses required, %d provided", i);

  i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    cf->bindaddr[(signed long int)i] = (struct sockaddr *)(void *)0;
    if(!(bh[(signed long int)i] == ((char *)NULL)))
    {
      void *return_value_malloc_20;
      return_value_malloc_20=malloc(sizeof(struct sockaddr_storage) /*128ul*/ );
      cf->bindaddr[(signed long int)i] = (struct sockaddr *)return_value_malloc_20;
      setbindhost(cf->bindaddr[(signed long int)i], 2, bh[(signed long int)i], "34999");
      goto __CPROVER_DUMP_L80;
    }

    if(!(bh6[(signed long int)i] == ((char *)NULL)))
    {
      void *return_value_malloc_21;
      return_value_malloc_21=malloc(sizeof(struct sockaddr_storage) /*128ul*/ );
      cf->bindaddr[(signed long int)i] = (struct sockaddr *)return_value_malloc_21;
      setbindhost(cf->bindaddr[(signed long int)i], 10, bh6[(signed long int)i], "34999");
    }


  __CPROVER_DUMP_L80:
    ;
  }
  if(cf->bindaddr[0l] == ((struct sockaddr *)NULL))
  {
    cf->bindaddr[(signed long int)0] = cf->bindaddr[(signed long int)1];
    cf->bindaddr[(signed long int)1] = (struct sockaddr *)(void *)0;
  }

}

// init_controlfd
// file main.c line 417
static signed int init_controlfd(struct cfg *cf)
{
  struct sockaddr_un ifsun;
  struct sockaddr_storage ifsin;
  char *cp;
  signed int i;
  signed int controlfd;
  signed int flags;
  signed int return_value_chown_2;
  if(cf->umode == 0)
  {
    unlink(cmd_sock);
    memset((void *)&ifsun, 0, sizeof(struct sockaddr_un) /*110ul*/ );
    ifsun.sun_family = (unsigned short int)1;
    strcpy(ifsun.sun_path, cmd_sock);
    controlfd=socket(1, 1, 0);
    if(controlfd == -1)
      err(1, "can't create socket");

    setsockopt(controlfd, 1, 2, (const void *)&controlfd, (unsigned int)sizeof(signed int) /*4ul*/ );
    signed int return_value_bind_1;
    return_value_bind_1=bind(controlfd, (struct sockaddr *)&ifsun, (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ );
    if(!(return_value_bind_1 >= 0))
      err(1, "can't bind to a socket");

    _Bool tmp_if_expr_3;
    if(!(cf->run_uname == ((char *)NULL)))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = cf->run_gname != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
    {
      return_value_chown_2=chown(cmd_sock, cf->run_uid, cf->run_gid);
      if(return_value_chown_2 == -1)
        err(1, "can't set owner of the socket");

    }

    signed int return_value_listen_4;
    return_value_listen_4=listen(controlfd, 32);
    if(!(return_value_listen_4 == 0))
      err(1, "can't listen on a socket");

  }

  else
  {
    cp=strrchr(cmd_sock, 58);
    if(!(cp == ((char *)NULL)))
    {
      *cp = (char)0;
      cp = cp + 1l;
    }

    _Bool tmp_if_expr_5;
    if(cp == ((char *)NULL))
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = (signed int)*cp == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_5)
      cp = "22222";

    i = cf->umode == 6 ? 10 : 2;
    setbindhost((struct sockaddr *)&ifsin, i, cmd_sock, cp);
    controlfd=socket(i, 2, 0);
    if(controlfd == -1)
      err(1, "can't create socket");

    signed int return_value_bind_6;
    return_value_bind_6=bind(controlfd, (struct sockaddr *)&ifsin, (unsigned int)((signed int)(&ifsin)->ss_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ ));
    if(!(return_value_bind_6 >= 0))
      err(1, "can't bind to a socket");

  }
  flags=fcntl(controlfd, 3);
  fcntl(controlfd, 4, flags | 04000);
  return controlfd;
}

// init_hash_table
// file rtpp_session.h line 92
void init_hash_table(struct cfg *cf)
{
  signed int i = 0;
  for( ; !(i >= 256); i = i + 1)
  {
    signed long int return_value_random_1;
    return_value_random_1=random();
    cf->rand_table[(signed long int)i] = (unsigned char)return_value_random_1;
  }
}

// init_port_table
// file rtpp_util.h line 67
void init_port_table(struct cfg *cf)
{
  signed int i;
  signed int j;
  unsigned short int portnum;
  cf->port_table_len = (cf->port_max - cf->port_min) / 2 + 1;
  portnum = (unsigned short int)cf->port_min;
  i = 0;
  for( ; !(i >= cf->port_table_len); i = i + 1)
  {
    cf->port_table[(signed long int)i] = portnum;
    portnum = portnum + (unsigned short int)2;
  }
  i = 0;
  for( ; !(i >= cf->port_table_len); i = i + 1)
  {
    signed long int return_value_random_1;
    return_value_random_1=random();
    j = (signed int)(return_value_random_1 % (signed long int)cf->port_table_len);
    portnum = cf->port_table[(signed long int)i];
    cf->port_table[(signed long int)i] = cf->port_table[(signed long int)j];
    cf->port_table[(signed long int)j] = portnum;
  }
  cf->port_table_idx = cf->port_table_len - 1;
}

// ishostnull
// file rtpp_util.c line 76
signed int ishostnull(struct sockaddr *ia)
{
  struct in6_addr *ap;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  switch((signed int)ia->sa_family)
  {
    case 2:
      return (signed int)(((struct sockaddr_in *)ia)->sin_addr.s_addr == (unsigned int)0x00000000);
    case 10:
    {
      ap = &((struct sockaddr_in6 *)ia)->sin6_addr;
      if(*((const unsigned int *)ap->__in6_u.__u6_addr8) == 0u)
        tmp_if_expr_1 = *((const unsigned int *)(const void *)&ap->__in6_u.__u6_addr8[(signed long int)4]) == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = *((const unsigned int *)(const void *)&ap->__in6_u.__u6_addr8[(signed long int)8]) == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = *((const unsigned int *)(const void *)&ap->__in6_u.__u6_addr8[(signed long int)12]) == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      return (signed int)tmp_if_expr_3;
    }
    default:
      abort();
  }
}

// ishostseq
// file rtpp_util.h line 57
signed int ishostseq(struct sockaddr *ia1, struct sockaddr *ia2)
{
  signed int return_value_memcmp_1;
  if(!(ia1->sa_family == ia2->sa_family))
    return 0;

  else
    switch((signed int)ia1->sa_family)
    {
      case 2:
        return (signed int)(((struct sockaddr_in *)ia1)->sin_addr.s_addr == ((struct sockaddr_in *)ia2)->sin_addr.s_addr);
      case 10:
      {
        return_value_memcmp_1=memcmp((const void *)&((struct sockaddr_in6 *)ia1)->sin6_addr.__in6_u.__u6_addr8[(signed long int)0], (const void *)&((struct sockaddr_in6 *)ia2)->sin6_addr.__in6_u.__u6_addr8[(signed long int)0], sizeof(struct in6_addr) /*16ul*/ );
        return (signed int)(return_value_memcmp_1 == 0);
      }
      default:
        abort();
    }
}

// main
// file main.c line 760
signed int main(signed int argc, char **argv)
{
  signed int i;
  signed int len;
  signed int timeout;
  signed int controlfd;
  signed int alarm_tick;
  double sptime;
  double eptime;
  double last_tick_time;
  unsigned long int delay;
  struct cfg cf;
  char buf[256l];
  memset((void *)&cf, 0, sizeof(struct cfg) /*133664ul*/ );
  init_config(&cf, argc, argv);
  seedrandom();
  init_hash_table(&cf);
  init_port_table(&cf);
  controlfd=init_controlfd(&cf);
  if(cf.nodaemon == 0)
  {
    signed int return_value_rtpp_daemon_1;
    return_value_rtpp_daemon_1=rtpp_daemon(0, 0);
    if(return_value_rtpp_daemon_1 == -1)
      err(1, "can't switch into daemon mode");

  }

  cf.glog=_rtpp_log_open(&cf, "rtpproxy");
  glog = cf.glog;
  atexit(ehandler);
  if(cf.glog->log_level >= 6)
  {
    signed int return_value_getpid_2;
    return_value_getpid_2=getpid();
    _rtpp_log_write(cf.glog, 6, "main", "rtpproxy started, pid %d", return_value_getpid_2);
  }

  i=open(pid_file, 01 | 0100 | 01000, 0400 | 0200 | 0400 >> 3 | 0200 >> 3 | (0400 >> 3) >> 3 | (0200 >> 3) >> 3);
  if(i >= 0)
  {
    signed int return_value_getpid_3;
    return_value_getpid_3=getpid();
    len=sprintf(buf, "%u\n", (unsigned int)return_value_getpid_3);
    write(i, (const void *)buf, (unsigned long int)len);
    close(i);
  }

  else
    if(cf.glog->log_level >= 3)
      _rtpp_log_ewrite(cf.glog, 3, "main", "can't open pidfile for writing");

  signal(1, fatsignal);
  signal(2, fatsignal);
  signal(9, fatsignal);
  signal(13, (void (*)(signed int))1);
  signal(15, fatsignal);
  signal(24, fatsignal);
  signal(25, fatsignal);
  signal(26, fatsignal);
  signal(27, fatsignal);
  signal(10, fatsignal);
  signal(12, fatsignal);
  if(!(cf.run_gname == ((char *)NULL)) || !(cf.run_uname == ((char *)NULL)))
  {
    signed int return_value_drop_privileges_4;
    return_value_drop_privileges_4=drop_privileges(&cf);
    if(!(return_value_drop_privileges_4 == 0))
    {
      if(cf.glog->log_level >= 3)
        _rtpp_log_ewrite(cf.glog, 3, "main", "can't switch to requested user/group");

      exit(1);
    }

  }

  (cf.pfds + (signed long int)0)->fd = controlfd;
  (cf.pfds + (signed long int)0)->events = (signed short int)0x001;
  (cf.pfds + (signed long int)0)->revents = (signed short int)0;
  cf.sessions[(signed long int)0] = (struct rtpp_session *)(void *)0;
  cf.nsessions = 1;
  cf.rtp_nsessions = 0;
  sptime = (double)0;
  last_tick_time = (double)0;
  signed int *return_value___errno_location_5;
  while((_Bool)1)
  {
    if(cf.nsessions >= 2 || cf.rtp_nsessions >= 1)
      timeout = 10;

    else
      timeout = (signed int)(1.0 * (double)1000);
    eptime=getdtime();
    delay = (unsigned long int)((eptime - sptime) * 1000000.0);
    if(!(delay >= 5000ul))
    {
      usleep((unsigned int)((unsigned long int)(1000000 / 200) - delay));
      sptime=getdtime();
    }

    else
      sptime = eptime;
    i=poll(cf.pfds, (unsigned long int)cf.nsessions, timeout);
    if(!(i >= 0))
    {
      return_value___errno_location_5=__errno_location();
      if(*return_value___errno_location_5 == 4)
        continue;

    }

    eptime=getdtime();
    if(cf.rtp_nsessions >= 1)
      process_rtp_servers(&cf, eptime);

    if(eptime > last_tick_time + 1.0)
    {
      alarm_tick = 1;
      last_tick_time = eptime;
    }

    else
      alarm_tick = 0;
    process_rtp(&cf, eptime, alarm_tick);
    if(i >= 1)
      process_commands(&cf, eptime);

  }
  exit(0);
}

// max_nsamples
// file rtp_resizer.c line 41
static signed int max_nsamples(signed int codec_id)
{
  if(codec_id == RTP_GSM)
    return 160;

  return 0;
}

// move_chunk
// file rtp_resizer.c line 184
static void move_chunk(struct rtp_packet *dst, struct rtp_packet *src, struct rtp_packet_chunk *chunk)
{
  memcpy((void *)&dst->data.buf[(signed long int)dst->data_offset], (const void *)&src->data.buf[(signed long int)src->data_offset], (unsigned long int)chunk->bytes);
  dst->nsamples = chunk->nsamples;
  dst->data_size = (unsigned long int)chunk->bytes;
  dst->size = dst->data_size + (unsigned long int)dst->data_offset;
  src->nsamples = src->nsamples - chunk->nsamples;
  rtp_packet_set_ts(src, src->ts + (unsigned int)chunk->nsamples);
  src->data_size = src->data_size - (unsigned long int)chunk->bytes;
  src->size = src->size - (unsigned long int)chunk->bytes;
  memmove((void *)&src->data.buf[(signed long int)src->data_offset], (const void *)&src->data.buf[(signed long int)(src->data_offset + chunk->bytes)], src->data_size);
}

// prepare_pkt_hdr_adhoc
// file rtpp_record.c line 224
static signed int prepare_pkt_hdr_adhoc(struct rtpp_session *sp, struct rtp_packet *packet, struct pkt_hdr_adhoc *hdrp)
{
  memset((void *)hdrp, 0, sizeof(struct pkt_hdr_adhoc) /*40ul*/ );
  hdrp->time = packet->rtime;
  if(IEEE_FLOAT_EQUAL(hdrp->time, -1.000000))
  {
    if(sp->log->log_level >= 3)
      _rtpp_log_ewrite(sp->log, 3, "prepare_pkt_hdr_adhoc", "can't get current time");

    return -1;
  }

  else
  {
    switch((signed int)((struct sockaddr *)&packet->raddr)->sa_family)
    {
      case 2:
      {
        hdrp->addr.in4.sin_family = ((struct sockaddr *)&packet->raddr)->sa_family;
        hdrp->addr.in4.sin_port = ((struct sockaddr_in *)&packet->raddr)->sin_port;
        hdrp->addr.in4.sin_addr = ((struct sockaddr_in *)&packet->raddr)->sin_addr;
        break;
      }
      case 10:
      {
        hdrp->addr.in6.sin_family = ((struct sockaddr *)&packet->raddr)->sa_family;
        hdrp->addr.in6.sin_port = ((struct sockaddr_in6 *)&packet->raddr)->sin6_port;
        hdrp->addr.in6.sin_addr = ((struct sockaddr_in6 *)&packet->raddr)->sin6_addr;
        break;
      }
      default:
        abort();
    }
    hdrp->plen = (unsigned short int)packet->size;
    return 0;
  }
}

// prepare_pkt_hdr_pcap
// file rtpp_record.c line 257
static signed int prepare_pkt_hdr_pcap(struct rtpp_session *sp, struct rtp_packet *packet, struct pkt_hdr_pcap *hdrp)
{
  if(IEEE_FLOAT_EQUAL(packet->rtime, -1.000000))
  {
    if(sp->log->log_level >= 3)
      _rtpp_log_ewrite(sp->log, 3, "prepare_pkt_hdr_pcap", "can't get current time");

    return -1;
  }

  else
    if(!((signed int)((struct sockaddr *)&packet->raddr)->sa_family == 2))
    {
      if(sp->log->log_level >= 3)
        _rtpp_log_ewrite(sp->log, 3, "prepare_pkt_hdr_pcap", "only AF_INET pcap format is supported");

      return -1;
    }

    else
    {
      memset((void *)hdrp, 0, sizeof(struct pkt_hdr_pcap) /*48ul*/ );
      dtime2ts(packet->rtime, &hdrp->pcaprec_hdr.ts_sec, &hdrp->pcaprec_hdr.ts_usec);
      hdrp->pcaprec_hdr.incl_len = (unsigned int)((sizeof(struct pkt_hdr_pcap) /*48ul*/  - sizeof(struct pcaprec_hdr_s) /*16ul*/ ) + packet->size);
      hdrp->pcaprec_hdr.orig_len = hdrp->pcaprec_hdr.incl_len;
      hdrp->family = (unsigned int)((struct sockaddr *)&packet->raddr)->sa_family;
      hdrp->iphdr.ip_v = (unsigned int)4;
      hdrp->iphdr.ip_hl = (unsigned int)(sizeof(struct ip) /*20ul*/  >> 2);
      hdrp->iphdr.ip_len=htons((unsigned short int)(sizeof(struct ip) /*20ul*/  + sizeof(struct udphdr) /*8ul*/  + packet->size));
      hdrp->iphdr.ip_src = ((struct sockaddr_in *)&packet->raddr)->sin_addr;
      hdrp->iphdr.ip_dst = ((struct sockaddr_in *)packet->laddr)->sin_addr;
      hdrp->iphdr.ip_p = (unsigned char)17;
      unsigned short int tmp_post_1 = ip_id;
      ip_id = ip_id + 1;
      hdrp->iphdr.ip_id=htons(tmp_post_1);
      hdrp->iphdr.ip_ttl = (unsigned char)127;
      hdrp->iphdr.ip_sum=rtpp_in_cksum((void *)&hdrp->iphdr, (signed int)sizeof(struct ip) /*20ul*/ );
      hdrp->udphdr._anon0._anon0.uh_sport = ((struct sockaddr_in *)&packet->raddr)->sin_port;
      hdrp->udphdr._anon0._anon0.uh_dport=htons((unsigned short int)packet->rport);
      hdrp->udphdr._anon0._anon0.uh_ulen=htons((unsigned short int)(sizeof(struct udphdr) /*8ul*/  + packet->size));
      return 0;
    }
}

// process_commands
// file main.c line 730
static void process_commands(struct cfg *cf, double dtime)
{
  signed int controlfd;
  signed int i;
  unsigned int rlen;
  struct sockaddr_un ifsun;
  if(!((0x001 & (signed int)cf->pfds->revents) == 0))
    while((_Bool)1)
    {
      if(cf->umode == 0)
      {
        rlen = (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ ;
        controlfd=accept((cf->pfds + (signed long int)0)->fd, (struct sockaddr *)&ifsun, &rlen);
        if(controlfd == -1)
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          if(!(*return_value___errno_location_1 == 11))
          {
            if(cf->glog->log_level >= 3)
              _rtpp_log_ewrite(cf->glog, 3, "process_commands", "can't accept connection on control socket");

          }

          goto __CPROVER_DUMP_L7;
        }

      }

      else
        controlfd = (cf->pfds + (signed long int)0)->fd;
      i=handle_command(cf, controlfd, dtime);
      if(cf->umode == 0)
        close(controlfd);

      if(!(i == 0))
        break;

    }


__CPROVER_DUMP_L7:
  ;
}

// process_rtp
// file main.c line 667
static void process_rtp(struct cfg *cf, double dtime, signed int alarm_tick)
{
  signed int readyfd;
  signed int skipfd;
  signed int ridx;
  struct rtpp_session *sp;
  struct rtp_packet *packet;
  skipfd = 0;
  readyfd = 1;
  for( ; !(readyfd >= cf->nsessions); readyfd = readyfd + 1)
  {
    sp = cf->sessions[(signed long int)readyfd];
    if(!(sp == ((struct rtpp_session *)NULL)) && !(alarm_tick == 0))
    {
      if(!(sp->rtcp == ((struct rtpp_session *)NULL)))
      {
        if(sp->sidx[0l] == readyfd)
        {
          signed int return_value_get_ttl_1;
          return_value_get_ttl_1=get_ttl(sp);
          if(return_value_get_ttl_1 == 0)
          {
            if(sp->log->log_level >= 6)
              _rtpp_log_write(sp->log, 6, "process_rtp", "session timeout");

            do_timeout_notification(sp, 1);
            remove_session(cf, sp);
          }

          else
          {
            if(!(sp->ttl[0l] == 0))
              sp->ttl[(signed long int)0] = sp->ttl[(signed long int)0] - 1;

            if(!(sp->ttl[1l] == 0))
              sp->ttl[(signed long int)1] = sp->ttl[(signed long int)1] - 1;

          }
        }

      }

    }

    if((cf->pfds + (signed long int)readyfd)->fd == -1)
      skipfd = skipfd + 1;

    else
    {
      ridx = 0;
      for( ; !(ridx >= 2); ridx = ridx + 1)
        if((cf->pfds + (signed long int)readyfd)->fd == sp->fds[(signed long int)ridx])
          break;

      /* assertion ridx != 2 */
      assert(ridx != 2);
      if(skipfd >= 1)
      {
        cf->pfds[(signed long int)(readyfd - skipfd)] = cf->pfds[(signed long int)readyfd];
        cf->sessions[(signed long int)(readyfd - skipfd)] = cf->sessions[(signed long int)readyfd];
        sp->sidx[(signed long int)ridx] = readyfd - skipfd;
      }

      if(!(sp->complete == 0))
      {
        if(!((0x001 & (signed int)(cf->pfds + (signed long int)readyfd)->revents) == 0))
          rxmit_packets(cf, sp, ridx, dtime);

        if(sp->resizers[(signed long int)ridx].output_nsamples >= 1)
          do
          {
            packet=rtp_resizer_get(&sp->resizers[(signed long int)ridx], dtime);
            if(packet == ((struct rtp_packet *)NULL))
              break;

            send_packet(cf, sp, ridx, packet);
            rtp_packet_free(packet);
          }
          while((_Bool)1);

      }

    }
  }
  cf->nsessions = cf->nsessions - skipfd;
}

// process_rtp_servers
// file main.c line 467
static void process_rtp_servers(struct cfg *cf, double dtime)
{
  signed int j;
  signed int k;
  signed int sidx;
  signed int len;
  signed int skipfd;
  struct rtpp_session *sp;
  skipfd = 0;
  j = 0;
  for( ; !(j >= cf->rtp_nsessions); j = j + 1)
  {
    sp = cf->rtp_servers[(signed long int)j];
    if(sp == ((struct rtpp_session *)NULL))
      skipfd = skipfd + 1;

    else
    {
      if(skipfd >= 1)
      {
        cf->rtp_servers[(signed long int)(j - skipfd)] = cf->rtp_servers[(signed long int)j];
        sp->sridx = j - skipfd;
      }

      sidx = 0;
      for( ; !(sidx >= 2); sidx = sidx + 1)
      {
        _Bool tmp_if_expr_1;
        if(sp->rtps[(signed long int)sidx] == ((struct rtp_server *)NULL))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = sp->addr[(signed long int)sidx] == (struct sockaddr *)(void *)0 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_1)
          do
          {
            len=rtp_server_get(sp->rtps[(signed long int)sidx], dtime);
            if(len == 0)
              break;

            if(len == -1)
            {
              rtp_server_free(sp->rtps[(signed long int)sidx]);
              sp->rtps[(signed long int)sidx] = (struct rtp_server *)(void *)0;
              if(sp->rtps[0l] == ((struct rtp_server *)NULL))
              {
                if(sp->rtps[1l] == ((struct rtp_server *)NULL))
                {
                  /* assertion cf->rtp_servers[sp->sridx] == sp */
                  assert(cf->rtp_servers[(signed long int)sp->sridx] == sp);
                  cf->rtp_servers[(signed long int)sp->sridx] = (struct rtpp_session *)(void *)0;
                  sp->sridx = -1;
                }

              }

              break;
            }

            k = (cf->dmode != 0 ? (len < 128 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? 2 : 1;
            for( ; k >= 1; k = k - 1)
              sendto(sp->fds[(signed long int)sidx], (const void *)sp->rtps[(signed long int)sidx]->buf, (unsigned long int)len, 0, sp->addr[(signed long int)sidx], (unsigned int)((signed int)sp->addr[(signed long int)sidx]->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ ));
          }
          while((_Bool)1);

      }
    }
  }
  cf->rtp_nsessions = cf->rtp_nsessions - skipfd;
}

// rclose
// file rtpp_record.c line 360
void rclose(struct rtpp_session *sp, void *rrc, signed int keep)
{
  if(!((signed int)((struct rtpp_record_channel *)rrc)->mode == MODE_REMOTE_RTP))
  {
    if(((struct rtpp_record_channel *)rrc)->rbuf_len >= 1)
      flush_rbuf(sp, rrc);

  }

  if(!(((struct rtpp_record_channel *)rrc)->fd == -1))
    close(((struct rtpp_record_channel *)rrc)->fd);

  if(!((signed int)((struct rtpp_record_channel *)rrc)->mode == MODE_REMOTE_RTP))
  {
    if(keep == 0)
    {
      signed int return_value_unlink_1;
      return_value_unlink_1=unlink(((struct rtpp_record_channel *)rrc)->spath);
      if(return_value_unlink_1 == -1)
      {
        if(sp->log->log_level >= 3)
          _rtpp_log_ewrite(sp->log, 3, "rclose", "can't remove session record %s", (const void *)((struct rtpp_record_channel *)rrc)->spath);

      }

    }

    else
      if(((struct rtpp_record_channel *)rrc)->needspool == 1)
      {
        signed int return_value_rename_2;
        return_value_rename_2=rename(((struct rtpp_record_channel *)rrc)->spath, ((struct rtpp_record_channel *)rrc)->rpath);
        if(return_value_rename_2 == -1)
        {
          if(sp->log->log_level >= 3)
            _rtpp_log_ewrite(sp->log, 3, "rclose", "can't move session record from spool into permanent storage");

        }

      }

    free(rrc);
  }

}

// reconnect_timeout_handler
// file rtpp_session.c line 278
static void reconnect_timeout_handler(struct rtpp_session *sp, struct rtpp_timeout_handler *th)
{
  struct sockaddr_un remote;
  _Bool tmp_if_expr_1;
  if(!(th->socket_name == ((char *)NULL)))
    tmp_if_expr_1 = th->connected == 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  /* assertion th->socket_name != ((void *)0) && th->connected == 0 */
  assert(tmp_if_expr_1);
  if(th->fd == -1)
  {
    if(sp->log->log_level >= 7)
      _rtpp_log_write(sp->log, 7, "reconnect_timeout_handler", "connecting timeout socket");

  }

  else
  {
    if(sp->log->log_level >= 7)
      _rtpp_log_write(sp->log, 7, "reconnect_timeout_handler", "reconnecting timeout socket");

    close(th->fd);
  }
  th->fd=socket(1, 1, 0);
  if(th->fd == -1)
  {
    if(sp->log->log_level >= 3)
      _rtpp_log_ewrite(sp->log, 3, "reconnect_timeout_handler", "can't create timeout socket");

  }

  else
  {
    memset((void *)&remote, 0, sizeof(struct sockaddr_un) /*110ul*/ );
    remote.sun_family = (unsigned short int)1;
    strncpy(remote.sun_path, th->socket_name, sizeof(char [108l]) /*108ul*/  - (unsigned long int)1);
    signed int return_value_connect_2;
    return_value_connect_2=connect(th->fd, (struct sockaddr *)&remote, (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ );
    if(return_value_connect_2 == -1)
    {
      if(sp->log->log_level >= 3)
        _rtpp_log_ewrite(sp->log, 3, "reconnect_timeout_handler", "can't connect to timeout socket");

    }

    else
      th->connected = 1;
  }
}

// remove_session
// file rtpp_session.h line 97
void remove_session(struct cfg *cf, struct rtpp_session *sp)
{
  signed int i;
  if(sp->log->log_level >= 6)
    _rtpp_log_write(sp->log, 6, "remove_session", "RTP stats: %lu in from callee, %lu in from caller, %lu relayed, %lu dropped", sp->pcount[(signed long int)0], sp->pcount[(signed long int)1], sp->pcount[(signed long int)2], sp->pcount[(signed long int)3]);

  if(sp->log->log_level >= 6)
    _rtpp_log_write(sp->log, 6, "remove_session", "RTCP stats: %lu in from callee, %lu in from caller, %lu relayed, %lu dropped", sp->rtcp->pcount[(signed long int)0], sp->rtcp->pcount[(signed long int)1], sp->rtcp->pcount[(signed long int)2], sp->rtcp->pcount[(signed long int)3]);

  if(sp->log->log_level >= 6)
    _rtpp_log_write(sp->log, 6, "remove_session", "session on ports %d/%d is cleaned up", sp->ports[(signed long int)0], sp->ports[(signed long int)1]);

  i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    if(!(sp->addr[(signed long int)i] == ((struct sockaddr *)NULL)))
      free((void *)sp->addr[(signed long int)i]);

    if(!(sp->prev_addr[(signed long int)i] == ((struct sockaddr *)NULL)))
      free((void *)sp->prev_addr[(signed long int)i]);

    if(!(sp->rtcp->addr[(signed long int)i] == ((struct sockaddr *)NULL)))
      free((void *)sp->rtcp->addr[(signed long int)i]);

    if(!(sp->rtcp->prev_addr[(signed long int)i] == ((struct sockaddr *)NULL)))
      free((void *)sp->rtcp->prev_addr[(signed long int)i]);

    if(!(sp->fds[(signed long int)i] == -1))
    {
      close(sp->fds[(signed long int)i]);
      /* assertion cf->sessions[sp->sidx[i]] == sp */
      assert(cf->sessions[(signed long int)sp->sidx[(signed long int)i]] == sp);
      cf->sessions[(signed long int)sp->sidx[(signed long int)i]] = (struct rtpp_session *)(void *)0;
      /* assertion cf->pfds[sp->sidx[i]].fd == sp->fds[i] */
      assert((cf->pfds + (signed long int)sp->sidx[(signed long int)i])->fd == sp->fds[(signed long int)i]);
      (cf->pfds + (signed long int)sp->sidx[(signed long int)i])->fd = -1;
      (cf->pfds + (signed long int)sp->sidx[(signed long int)i])->events = (signed short int)0;
    }

    if(!(sp->rtcp->fds[(signed long int)i] == -1))
    {
      close(sp->rtcp->fds[(signed long int)i]);
      /* assertion cf->sessions[sp->rtcp->sidx[i]] == sp->rtcp */
      assert(cf->sessions[(signed long int)sp->rtcp->sidx[(signed long int)i]] == sp->rtcp);
      cf->sessions[(signed long int)sp->rtcp->sidx[(signed long int)i]] = (struct rtpp_session *)(void *)0;
      /* assertion cf->pfds[sp->rtcp->sidx[i]].fd == sp->rtcp->fds[i] */
      assert((cf->pfds + (signed long int)sp->rtcp->sidx[(signed long int)i])->fd == sp->rtcp->fds[(signed long int)i]);
      (cf->pfds + (signed long int)sp->rtcp->sidx[(signed long int)i])->fd = -1;
      (cf->pfds + (signed long int)sp->rtcp->sidx[(signed long int)i])->events = (signed short int)0;
    }

    if(!(sp->rrcs[(signed long int)i] == NULL))
      rclose(sp, sp->rrcs[(signed long int)i], 1);

    if(!(sp->rtcp->rrcs[(signed long int)i] == NULL))
      rclose(sp, sp->rtcp->rrcs[(signed long int)i], 1);

    if(!(sp->rtps[(signed long int)i] == ((struct rtp_server *)NULL)))
    {
      cf->rtp_servers[(signed long int)sp->sridx] = (struct rtpp_session *)(void *)0;
      rtp_server_free(sp->rtps[(signed long int)i]);
    }

    if(!(sp->codecs[(signed long int)i] == ((char *)NULL)))
      free((void *)sp->codecs[(signed long int)i]);

    if(!(sp->rtcp->codecs[(signed long int)i] == ((char *)NULL)))
      free((void *)sp->rtcp->codecs[(signed long int)i]);

  }
  if(!(sp->timeout_data.notify_tag == ((char *)NULL)))
    free((void *)sp->timeout_data.notify_tag);

  hash_table_remove(cf, sp);
  if(!(sp->call_id == ((char *)NULL)))
    free((void *)sp->call_id);

  if(!(sp->tag == ((char *)NULL)))
    free((void *)sp->tag);

  _rtpp_log_close();
  free((void *)sp->rtcp);
  rtp_resizer_free(&sp->resizers[(signed long int)0]);
  rtp_resizer_free(&sp->resizers[(signed long int)1]);
  free((void *)sp);
  cf->sessions_active = cf->sessions_active - 1;
}

// reply_error
// file rtpp_command.c line 211
static void reply_error(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, signed int ecode)
{
  signed int len;
  char buf[8192l];
  if(!(cookie == ((char *)NULL)))
    len=sprintf(buf, "%s E%d\n", cookie, ecode);

  else
    len=sprintf(buf, "E%d\n", ecode);
  doreply(cf, fd, buf, len, raddr, rlen);
}

// reply_number
// file rtpp_command.c line 167
static void reply_number(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, signed int number)
{
  signed int len;
  char buf[8192l];
  if(!(cookie == ((char *)NULL)))
    len=sprintf(buf, "%s %d\n", cookie, number);

  else
    len=sprintf(buf, "%d\n", number);
  doreply(cf, fd, buf, len, raddr, rlen);
}

// reply_ok
// file rtpp_command.c line 182
static void reply_ok(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie)
{
  reply_number(cf, fd, raddr, rlen, cookie, 0);
}

// reply_port
// file rtpp_command.c line 190
static void reply_port(struct cfg *cf, signed int fd, struct sockaddr_storage *raddr, unsigned int rlen, char *cookie, signed int lport, struct sockaddr **lia)
{
  signed int len;
  char buf[8192l];
  char *cp = buf;
  len = 0;
  if(!(cookie == ((char *)NULL)))
  {
    len=sprintf(cp, "%s ", cookie);
    cp = cp + (signed long int)len;
  }

  _Bool tmp_if_expr_5;
  signed int return_value_ishostnull_4;
  if(*lia == ((struct sockaddr *)NULL))
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_ishostnull_4=ishostnull(lia[(signed long int)0]);
    tmp_if_expr_5 = return_value_ishostnull_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_sprintf_1;
  const char *return_value_addr2char_2;
  signed int return_value_sprintf_3;
  if(tmp_if_expr_5)
  {
    return_value_sprintf_1=sprintf(cp, "%d\n", lport);
    len = len + return_value_sprintf_1;
  }

  else
  {
    return_value_addr2char_2=addr2char(lia[(signed long int)0]);
    return_value_sprintf_3=sprintf(cp, "%d %s%s\n", lport, return_value_addr2char_2, (signed int)lia[(signed long int)0]->sa_family == 2 ? "" : " 6");
    len = len + return_value_sprintf_3;
  }
  doreply(cf, fd, buf, len, raddr, rlen);
}

// resolve
// file rtpp_util.h line 63
signed int resolve(struct sockaddr *ia, signed int pf, const char *host, const char *servname, signed int flags)
{
  signed int n;
  struct addrinfo hints;
  struct addrinfo *res;
  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_flags = flags;
  hints.ai_family = pf;
  hints.ai_socktype = 2;
  n=getaddrinfo(host, servname, &hints, &res);
  if(n == 0)
  {
    memcpy((void *)ia, (const void *)res->ai_addr, (unsigned long int)res->ai_addrlen);
    freeaddrinfo(res);
  }

  return n;
}

// ropen
// file rtpp_record.c line 64
void * ropen(struct cfg *cf, struct rtpp_session *sp, char *rname, signed int orig)
{
  struct rtpp_record_channel *rrc;
  const char *sdir;
  char *cp;
  char *tmp;
  signed int n;
  signed int port;
  signed int rval;
  struct sockaddr_storage raddr;
  struct pcap_hdr_s pcap_hdr;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct rtpp_record_channel) /*12308ul*/ );
  rrc = (struct rtpp_record_channel *)return_value_malloc_1;
  signed int return_value_strncmp_5;
  if(rrc == ((struct rtpp_record_channel *)NULL))
  {
    if(sp->log->log_level >= 3)
      _rtpp_log_ewrite(sp->log, 3, "ropen", "can't allocate memory");

    return (void *)0;
  }

  else
  {
    memset((void *)rrc, 0, sizeof(struct rtpp_record_channel) /*12308ul*/ );
    if(!(rname == ((char *)NULL)))
    {
      return_value_strncmp_5=strncmp("udp:", rname, (unsigned long int)4);
      if(return_value_strncmp_5 == 0)
      {
        tmp=strdup(rname + (signed long int)4);
        if(tmp == ((char *)NULL))
        {
          if(sp->log->log_level >= 3)
            _rtpp_log_ewrite(sp->log, 3, "ropen", "can't allocate memory");

          return (void *)0;
        }

        rrc->mode = (enum record_mode)MODE_REMOTE_RTP;
        rrc->needspool = 0;
        cp=strrchr(tmp, 58);
        if(cp == ((char *)NULL))
        {
          if(sp->log->log_level >= 3)
            _rtpp_log_write(sp->log, 3, "ropen", "remote recording target specification should include port number");

          free((void *)rrc);
          free((void *)tmp);
          return (void *)0;
        }

        *cp = (char)0;
        cp = cp + 1l;
        if(sp->rtcp == ((struct rtpp_session *)NULL))
        {
          port=atoi(cp);
          _Bool tmp_if_expr_2;
          if(!(port >= 1))
            tmp_if_expr_2 = (_Bool)1;

          else
            tmp_if_expr_2 = port > (sp->rtcp != (struct rtpp_session *)(void *)0 ? 65534 : 65535) ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_2)
          {
            if(sp->log->log_level >= 3)
              _rtpp_log_write(sp->log, 3, "ropen", "invalid port in the remote recording target specification");

            free((void *)rrc);
            free((void *)tmp);
            return (void *)0;
          }

          sprintf(cp, "%d", port + 1);
        }

        n=resolve((struct sockaddr *)&raddr, 2, tmp, cp, 0x0001);
        if(!(n == 0))
        {
          if(sp->log->log_level >= 3)
          {
            const char *return_value_gai_strerror_3;
            return_value_gai_strerror_3=gai_strerror(n);
            _rtpp_log_write(sp->log, 3, "ropen", "ropen: getaddrinfo: %s", return_value_gai_strerror_3);
          }

          free((void *)rrc);
          free((void *)tmp);
          return (void *)0;
        }

        rrc->fd=socket(2, 2, 0);
        if(rrc->fd == -1)
        {
          if(sp->log->log_level >= 3)
            _rtpp_log_ewrite(sp->log, 3, "ropen", "ropen: can't create socket");

          free((void *)rrc);
          free((void *)tmp);
          return (void *)0;
        }

        signed int return_value_connect_4;
        return_value_connect_4=connect(rrc->fd, (struct sockaddr *)&raddr, (unsigned int)((signed int)((struct sockaddr *)&raddr)->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ ));
        if(return_value_connect_4 == -1)
        {
          if(sp->log->log_level >= 3)
            _rtpp_log_ewrite(sp->log, 3, "ropen", "ropen: can't connect socket");

          close(rrc->fd);
          free((void *)rrc);
          free((void *)tmp);
          return (void *)0;
        }

        free((void *)tmp);
        return (void *)rrc;
      }

    }

    if(cf->rdir == ((const char *)NULL))
    {
      if(sp->log->log_level >= 3)
        _rtpp_log_write(sp->log, 3, "ropen", "directory for saving local recordings is not configured");

      free((void *)rrc);
      return (void *)0;
    }

    else
    {
      if(!(cf->record_pcap == 0))
        rrc->mode = (enum record_mode)MODE_LOCAL_PCAP;

      else
        rrc->mode = (enum record_mode)MODE_LOCAL_PKT;
      if(cf->sdir == ((const char *)NULL))
      {
        sdir = cf->rdir;
        rrc->needspool = 0;
      }

      else
      {
        sdir = cf->sdir;
        rrc->needspool = 1;
        if(rname == ((char *)NULL))
          sprintf(rrc->rpath, "%s/%s=%s.%c.%s", cf->rdir, sp->call_id, sp->tag, orig != 0 ? 111 : 97, sp->rtcp != (struct rtpp_session *)(void *)0 ? "rtp" : "rtcp");

        else
          sprintf(rrc->rpath, "%s/%s.%s", cf->rdir, rname, sp->rtcp != (struct rtpp_session *)(void *)0 ? "rtp" : "rtcp");
      }
      if(rname == ((char *)NULL))
        sprintf(rrc->spath, "%s/%s=%s.%c.%s", sdir, sp->call_id, sp->tag, orig != 0 ? 111 : 97, sp->rtcp != (struct rtpp_session *)(void *)0 ? "rtp" : "rtcp");

      else
        sprintf(rrc->spath, "%s/%s.%s", sdir, rname, sp->rtcp != (struct rtpp_session *)(void *)0 ? "rtp" : "rtcp");
      rrc->fd=open(rrc->spath, 01 | 0100 | 01000, 0400 | 0200 | 0400 >> 3 | 0200 >> 3 | (0400 >> 3) >> 3 | (0200 >> 3) >> 3);
      if(rrc->fd == -1)
      {
        if(sp->log->log_level >= 3)
          _rtpp_log_ewrite(sp->log, 3, "ropen", "can't open file %s for writing", (const void *)rrc->spath);

        free((void *)rrc);
        return (void *)0;
      }

      else
      {
        if((signed int)rrc->mode == MODE_LOCAL_PCAP)
        {
          pcap_hdr.magic_number = 0xa1b2c3d4;
          pcap_hdr.version_major = (unsigned short int)2;
          pcap_hdr.version_minor = (unsigned short int)4;
          pcap_hdr.thiszone = 0;
          pcap_hdr.sigfigs = (unsigned int)0;
          pcap_hdr.snaplen = (unsigned int)65535;
          pcap_hdr.network = (unsigned int)0;
          signed long int return_value_write_6;
          return_value_write_6=write(rrc->fd, (const void *)&pcap_hdr, sizeof(struct pcap_hdr_s) /*24ul*/ );
          rval = (signed int)return_value_write_6;
          if(rval == -1)
          {
            close(rrc->fd);
            if(sp->log->log_level >= 3)
              _rtpp_log_ewrite(sp->log, 3, "ropen", "%s: error writing header", (const void *)rrc->spath);

            free((void *)rrc);
            return (void *)0;
          }

          if(!((unsigned long int)rval >= sizeof(struct pcap_hdr_s) /*24ul*/ ))
          {
            close(rrc->fd);
            if(sp->log->log_level >= 3)
              _rtpp_log_write(sp->log, 3, "ropen", "%s: short write writing header", (const void *)rrc->spath);

            free((void *)rrc);
            return (void *)0;
          }

        }

        return (void *)rrc;
      }
    }
  }
}

// rtp_calc_samples
// file rtp.c line 79
static signed int rtp_calc_samples(signed int codec_id, unsigned long int nbytes, const unsigned char *data)
{
  signed int return_value_g723_samples_1;
  switch(codec_id)
  {
    case RTP_PCMU:

    case RTP_PCMA:
      return (signed int)nbytes;
    case RTP_G729:
      return (signed int)((nbytes / (unsigned long int)10) * (unsigned long int)80 + (unsigned long int)(nbytes % (unsigned long int)10 == (unsigned long int)0 ? 0 : 80));
    case RTP_GSM:
      return (signed int)((unsigned long int)160 * (nbytes / (unsigned long int)33));
    case RTP_G723:
    {
      return_value_g723_samples_1=g723_samples(data, (signed int)nbytes);
      return return_value_g723_samples_1;
    }
    default:
      return -1;
  }
}

// rtp_packet_alloc
// file rtp.c line 303
struct rtp_packet * rtp_packet_alloc()
{
  struct rtp_packet *pkt = rtp_packet_pool;
  void *return_value_malloc_1;
  if(!(pkt == ((struct rtp_packet *)NULL)))
    rtp_packet_pool = pkt->next;

  else
  {
    return_value_malloc_1=malloc(sizeof(struct rtp_packet) /*8408ul*/ );
    pkt = (struct rtp_packet *)return_value_malloc_1;
  }
  return pkt;
}

// rtp_packet_chunk_find_g711
// file rtp.c line 102
static void rtp_packet_chunk_find_g711(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples)
{
  ret->nsamples = min_nsamples;
  ret->bytes = min_nsamples;
}

// rtp_packet_chunk_find_g723
// file rtp.c line 142
static void rtp_packet_chunk_find_g723(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples)
{
  signed int frames;
  signed int samples;
  signed int pos;
  signed int found_samples;
  signed int n;
  unsigned char *buf;
  frames = min_nsamples / 240 + (min_nsamples % 240 == 0 ? 0 : 1);
  samples = frames * 240;
  pos = 0;
  found_samples = 0;
  if(samples >= pkt->nsamples)
    ret->whole_packet_matched = 1;

  else
  {
    buf = &pkt->data.buf[(signed long int)pkt->data_offset];
    for( ; !((unsigned long int)pos >= pkt->data_size); pos = pos + n)
    {
      if(found_samples >= samples)
        break;

      found_samples = found_samples + 240;
      n=g723_len(buf[(signed long int)pos]);
      /* assertion n != (-1) */
      assert(n != -1);
    }
    ret->nsamples = found_samples;
    unsigned long int tmp_if_expr_1;
    if(!((unsigned long int)pos >= pkt->data_size))
      tmp_if_expr_1 = (unsigned long int)pos;

    else
      tmp_if_expr_1 = pkt->data_size;
    ret->bytes = (signed int)tmp_if_expr_1;
  }
}

// rtp_packet_chunk_find_g729
// file rtp.c line 110
static void rtp_packet_chunk_find_g729(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples)
{
  signed int frames;
  signed int samples;
  frames = min_nsamples / 80 + (min_nsamples % 80 == 0 ? 0 : 1);
  samples = frames * 80;
  if(samples >= pkt->nsamples)
    ret->whole_packet_matched = 1;

  else
  {
    ret->nsamples = samples;
    ret->bytes = frames * 10;
  }
}

// rtp_packet_chunk_find_gsm
// file rtp.c line 126
static void rtp_packet_chunk_find_gsm(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples)
{
  signed int frames;
  signed int samples;
  frames = min_nsamples / 160 + (min_nsamples % 160 == 0 ? 0 : 1);
  samples = frames * 160;
  if(samples >= pkt->nsamples)
    ret->whole_packet_matched = 1;

  else
  {
    ret->nsamples = samples;
    ret->bytes = frames * 33;
  }
}

// rtp_packet_first_chunk_find
// file rtp.c line 175
void rtp_packet_first_chunk_find(struct rtp_packet *pkt, struct rtp_packet_chunk *ret, signed int min_nsamples)
{
  /* assertion pkt->nsamples > min_nsamples */
  assert(pkt->nsamples > min_nsamples);
  ret->whole_packet_matched = 0;
  switch((signed int)pkt->data.header.pt)
  {
    case RTP_PCMU:

    case RTP_PCMA:
    {
      rtp_packet_chunk_find_g711(pkt, ret, min_nsamples);
      break;
    }
    case RTP_G729:
    {
      rtp_packet_chunk_find_g729(pkt, ret, min_nsamples);
      break;
    }
    case RTP_GSM:
    {
      rtp_packet_chunk_find_gsm(pkt, ret, min_nsamples);
      break;
    }
    case RTP_G723:
    {
      rtp_packet_chunk_find_g723(pkt, ret, min_nsamples);
      break;
    }
    default:
      ret->whole_packet_matched = 1;
  }
}

// rtp_packet_free
// file rtp.h line 138
void rtp_packet_free(struct rtp_packet *pkt)
{
  pkt->next = rtp_packet_pool;
  pkt->prev = (struct rtp_packet *)(void *)0;
  rtp_packet_pool = pkt;
}

// rtp_packet_parse
// file rtp.c line 242
enum anonymous_13 rtp_packet_parse(struct rtp_packet *pkt)
{
  signed int padding_size;
  struct anonymous_14 *hdr_ext_ptr;
  padding_size = 0;
  pkt->data_size = (unsigned long int)0;
  pkt->data_offset = 0;
  pkt->appendable = 1;
  pkt->nsamples = -1;
  if(!(pkt->size >= sizeof(struct anonymous_28) /*12ul*/ ))
    return (enum anonymous_13)RTP_PARSER_PTOOSHRT;

  else
    if(!((signed int)pkt->data.header.version == 2))
      return (enum anonymous_13)RTP_PARSER_IHDRVER;

    else
    {
      pkt->data_offset = (signed int)(sizeof(struct anonymous_28) /*12ul*/  + (unsigned long int)(&pkt->data.header)->cc * sizeof(unsigned int) /*4ul*/ );
      if(!((signed int)pkt->data.header.x == 0))
      {
        if(!(pkt->size >= sizeof(struct anonymous_14) /*4ul*/  + (unsigned long int)pkt->data_offset))
          return (enum anonymous_13)RTP_PARSER_PTOOSHRTXS;

        hdr_ext_ptr = (struct anonymous_14 *)&pkt->data.buf[(signed long int)pkt->data_offset];
        unsigned short int return_value_ntohs_1;
        return_value_ntohs_1=ntohs(hdr_ext_ptr->length);
        pkt->data_offset = pkt->data_offset + (signed int)(sizeof(struct anonymous_14) /*4ul*/  + (unsigned long int)return_value_ntohs_1 * sizeof(unsigned int) /*4ul*/ );
      }

      if(!(pkt->size >= (unsigned long int)pkt->data_offset))
        return (enum anonymous_13)RTP_PARSER_PTOOSHRTXH;

      else
        if(!((signed int)pkt->data.header.p == 0))
        {
          if((unsigned long int)pkt->data_offset == pkt->size)
            return (enum anonymous_13)RTP_PARSER_PTOOSHRTPS;

          padding_size = (signed int)pkt->data.buf[(signed long int)(pkt->size - (unsigned long int)1)];
          if(!(padding_size == 0))
            goto __CPROVER_DUMP_L7;

          return (enum anonymous_13)RTP_PARSER_IPS;
        }

        else
        {

        __CPROVER_DUMP_L7:
          ;
          if(!(pkt->size >= (unsigned long int)(pkt->data_offset + padding_size)))
            return (enum anonymous_13)RTP_PARSER_PTOOSHRTP;

          else
          {
            pkt->data_size = (pkt->size - (unsigned long int)pkt->data_offset) - (unsigned long int)padding_size;
            pkt->ts=ntohl(pkt->data.header.ts);
            pkt->seq=ntohs((unsigned short int)pkt->data.header.seq);
            if(pkt->data_size == 0ul)
              return (enum anonymous_13)RTP_PARSER_OK;

            else
            {
              pkt->nsamples=rtp_calc_samples((signed int)pkt->data.header.pt, pkt->data_size, &pkt->data.buf[(signed long int)pkt->data_offset]);
              if((signed int)pkt->data.header.pt == RTP_G729)
              {
                if(!(pkt->data_size % 10ul == 0ul))
                  pkt->appendable = 0;

              }

              return (enum anonymous_13)RTP_PARSER_OK;
            }
          }
        }
    }
}

// rtp_packet_parse_errstr
// file rtp.c line 206
const char * rtp_packet_parse_errstr(enum anonymous_13 ecode)
{
  switch((signed int)ecode)
  {
    case RTP_PARSER_OK:
      return "no error";
    case RTP_PARSER_PTOOSHRT:
      return "packet is too short for RTP header";
    case RTP_PARSER_IHDRVER:
      return "incorrect RTP header version";
    case RTP_PARSER_PTOOSHRTXS:
      return "packet is too short for extended RTP header size";
    case RTP_PARSER_PTOOSHRTXH:
      return "packet is too short for extended RTP header";
    case RTP_PARSER_PTOOSHRTPS:
      return "packet is too short for RTP padding size";
    case RTP_PARSER_PTOOSHRTP:
      return "packet is too short for RTP padding";
    case RTP_PARSER_IPS:
      return "invalid RTP padding size";
    default:
    {
      abort();
      return (const char *)(void *)0;
    }
  }
}

// rtp_packet_set_seq
// file rtp.c line 347
void rtp_packet_set_seq(struct rtp_packet *p, unsigned short int seq)
{
  p->seq = seq;
  unsigned short int return_value_htons_1;
  return_value_htons_1=htons(seq);
  p->data.header.seq = (unsigned int)return_value_htons_1;
}

// rtp_packet_set_ts
// file rtp.c line 355
void rtp_packet_set_ts(struct rtp_packet *p, unsigned int ts)
{
  p->ts = ts;
  p->data.header.ts=htonl(ts);
}

// rtp_recv
// file rtp.h line 135
struct rtp_packet * rtp_recv(signed int fd)
{
  struct rtp_packet *pkt;
  pkt=rtp_packet_alloc();
  if(pkt == ((struct rtp_packet *)NULL))
    return (struct rtp_packet *)(void *)0;

  else
  {
    pkt->rlen = (unsigned int)sizeof(struct sockaddr_storage) /*128ul*/ ;
    signed long int return_value_recvfrom_1;
    return_value_recvfrom_1=recvfrom(fd, (void *)pkt->data.buf, sizeof(unsigned char [8192l]) /*8192ul*/ , 0, (struct sockaddr *)&pkt->raddr, &pkt->rlen);
    pkt->size = (unsigned long int)return_value_recvfrom_1;
    if(pkt->size == 18446744073709551615ul)
    {
      rtp_packet_free(pkt);
      return (struct rtp_packet *)(void *)0;
    }

    else
      return pkt;
  }
}

// rtp_resizer_enqueue
// file rtp_resizer.h line 53
void rtp_resizer_enqueue(struct rtp_resizer *this, struct rtp_packet **pkt)
{
  struct rtp_packet *p;
  unsigned int ref_ts;
  unsigned int internal_ts;
  signed int delta;
  enum anonymous_13 return_value_rtp_packet_parse_1;
  return_value_rtp_packet_parse_1=rtp_packet_parse(*pkt);
  if((signed int)return_value_rtp_packet_parse_1 == RTP_PARSER_OK)
  {
    if(!((*pkt)->nsamples == -1))
    {
      if(!(this->last_sent_ts_inited == 0))
      {
        if(!((*pkt)->ts + -this->last_sent_ts >= 2147483649u))
          goto __CPROVER_DUMP_L3;

        rtp_packet_free(*pkt);
        *pkt = (struct rtp_packet *)(void *)0;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        internal_ts = (unsigned int)((*pkt)->rtime * 8000.0);
        if(this->tsdelta_inited == 0)
        {
          this->tsdelta = ((*pkt)->ts - internal_ts) + (unsigned int)40;
          this->tsdelta_inited = 1;
        }

        else
        {
          ref_ts = internal_ts + this->tsdelta;
          if(ref_ts + -(*pkt)->ts >= 2147483649u)
            this->tsdelta = ((*pkt)->ts - internal_ts) + (unsigned int)40;

          else
            if(160u + (*pkt)->ts + (unsigned int)this->output_nsamples + -ref_ts >= 2147483649u)
            {
              delta = (signed int)((ref_ts - ((*pkt)->ts + (unsigned int)this->output_nsamples + (unsigned int)160)) / (unsigned int)2);
              this->tsdelta = this->tsdelta - (unsigned int)delta;
            }

        }
        if(!(this->queue.last == ((struct rtp_packet *)NULL)))
        {
          p = this->queue.last;
          for( ; !(p == ((struct rtp_packet *)NULL)); p = p->prev)
            if(!((*pkt)->ts + -p->ts >= 2147483649u))
              break;

          if(p == ((struct rtp_packet *)NULL))
          {
            (*pkt)->next = this->queue.first;
            (*pkt)->prev = (struct rtp_packet *)(void *)0;
            this->queue.first->prev = *pkt;
            this->queue.first = *pkt;
          }

          else
            if(p == this->queue.last)
            {
              (*pkt)->prev = this->queue.last;
              (*pkt)->next = (struct rtp_packet *)(void *)0;
              this->queue.last->next = *pkt;
              this->queue.last = *pkt;
            }

            else
            {
              (*pkt)->next = p->next;
              (*pkt)->prev = p;
              (*pkt)->prev->next = *pkt;
              (*pkt)->next->prev = (*pkt)->prev->next;
            }
        }

        else
        {
          this->queue.last = *pkt;
          this->queue.first = this->queue.last;
          (*pkt)->prev = (struct rtp_packet *)(void *)0;
          (*pkt)->next = (struct rtp_packet *)(void *)0;
        }
        this->nsamples_total = this->nsamples_total + (*pkt)->nsamples;
        *pkt = (struct rtp_packet *)(void *)0;
      }
    }

  }

}

// rtp_resizer_free
// file rtp_resizer.c line 54
void rtp_resizer_free(struct rtp_resizer *this)
{
  struct rtp_packet *p;
  struct rtp_packet *p1;
  p = this->queue.first;
  while(!(p == ((struct rtp_packet *)NULL)))
  {
    p1 = p;
    p = p->next;
    rtp_packet_free(p1);
  }
}

// rtp_resizer_get
// file rtp_resizer.h line 54
struct rtp_packet * rtp_resizer_get(struct rtp_resizer *this, double dtime)
{
  struct rtp_packet *ret = (struct rtp_packet *)(void *)0;
  struct rtp_packet *p;
  unsigned int ref_ts;
  signed int count = 0;
  signed int split = 0;
  signed int nsamples_left;
  signed int output_nsamples;
  signed int max;
  struct rtp_packet_chunk chunk;
  if(this->queue.first == ((struct rtp_packet *)NULL))
    return (struct rtp_packet *)(void *)0;

  else
  {
    ref_ts = (unsigned int)(dtime * 8000.0 + (double)this->tsdelta);
    if(!(this->nsamples_total >= this->output_nsamples))
    {
      if(!(ref_ts + -(160u + this->queue.first->ts + (unsigned int)this->output_nsamples) >= 2147483649u))
        goto __CPROVER_DUMP_L2;

      return (struct rtp_packet *)(void *)0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      output_nsamples = this->output_nsamples;
      max=max_nsamples((signed int)this->queue.first->data.header.pt);
      if(max >= 1 && !(max >= output_nsamples))
        output_nsamples = max;

      while((_Bool)1)
      {
        if(!(ret == ((struct rtp_packet *)NULL)))
        {
          if(ret->nsamples >= output_nsamples)
            goto __CPROVER_DUMP_L19;

        }

        if(this->queue.first == ((struct rtp_packet *)NULL))
          break;

        p = this->queue.first;
        if(ret == ((struct rtp_packet *)NULL))
        {
          if(!(output_nsamples >= p->nsamples))
          {
            rtp_packet_first_chunk_find(p, &chunk, output_nsamples);
            if(!(chunk.whole_packet_matched == 0))
            {
              ret = p;
              detach_queue_head(this);
            }

            else
            {
              ret=rtp_packet_alloc();
              if(ret == ((struct rtp_packet *)NULL))
                break;

              memcpy((void *)ret, (const void *)p, 216ul);
              move_chunk(ret, p, &chunk);
              split = split + 1;
            }
            if(this->seq_initialized == 0)
            {
              this->seq = ret->seq;
              this->seq_initialized = 1;
            }

            count = count + 1;
            break;
          }

        }

        else
        {
          _Bool tmp_if_expr_1;
          if(!(ret->ts + (unsigned int)ret->nsamples == p->ts))
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = ret->data.header.pt != p->data.header.pt ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_1)
            break;

          nsamples_left = output_nsamples - ret->nsamples;
          if(nsamples_left >= 1)
          {
            if(!(nsamples_left >= p->nsamples))
            {
              rtp_packet_first_chunk_find(p, &chunk, nsamples_left);
              if(!(chunk.whole_packet_matched == 0))
              {
                if(p->data_size + ret->size >= 8193ul)
                  break;

                append_packet(ret, p);
                detach_queue_head(this);
                rtp_packet_free(p);
              }

              else
              {
                if(ret->size + (unsigned long int)chunk.bytes >= 8193ul)
                  break;

                append_chunk(ret, p, &chunk);
                split = split + 1;
              }
              count = count + 1;
              break;
            }

          }

        }
        count = count + 1;
        if(!(ret == ((struct rtp_packet *)NULL)))
        {
          if(p->data_size + ret->size >= 8193ul)
            break;

        }

        detach_queue_head(this);
        if(ret == ((struct rtp_packet *)NULL))
        {
          ret = p;
          if(this->seq_initialized == 0)
          {
            this->seq = p->seq;
            this->seq_initialized = 1;
          }

        }

        else
        {
          append_packet(ret, p);
          rtp_packet_free(p);
        }
        if(ret->appendable == 0)
          break;

      }

    __CPROVER_DUMP_L19:
      ;
      if(!(ret == ((struct rtp_packet *)NULL)))
      {
        this->nsamples_total = this->nsamples_total - ret->nsamples;
        rtp_packet_set_seq(ret, this->seq);
        this->seq = this->seq + 1;
        this->last_sent_ts_inited = 1;
        this->last_sent_ts = ret->ts + (unsigned int)ret->nsamples;
      }

      return ret;
    }
  }
}

// rtp_server_free
// file rtp_server.h line 62
void rtp_server_free(struct rtp_server *rp)
{
  close(rp->fd);
  free((void *)rp);
}

// rtp_server_get
// file rtp_server.h line 63
signed int rtp_server_get(struct rtp_server *rp, double dtime)
{
  unsigned int ts;
  signed int rlen;
  signed int rticks;
  signed int bytes_per_frame;
  signed int ticks_per_frame;
  signed int number_of_frames;
  if(IEEE_FLOAT_EQUAL(rp->btime, -1.000000))
    rp->btime = dtime;

  ts=ntohl(rp->rtp->ts);
  signed long int return_value_lseek_1;
  signed long int return_value_read_3;
  unsigned short int return_value_ntohs_6;
  if(rp->btime + (double)ts / 8000.000000 > dtime)
    return 0;

  else
  {
    switch((signed int)rp->rtp->pt)
    {
      case RTP_PCMU:

      case RTP_PCMA:
      {
        bytes_per_frame = 8;
        ticks_per_frame = 1;
        break;
      }
      case RTP_G729:
      {
        bytes_per_frame = 10;
        ticks_per_frame = 10;
        break;
      }
      case RTP_G723:
      {
        bytes_per_frame = 24;
        ticks_per_frame = 30;
        break;
      }
      case RTP_GSM:
      {
        bytes_per_frame = 33;
        ticks_per_frame = 20;
        break;
      }
      default:
        return -2;
    }
    number_of_frames = 10 / ticks_per_frame;
    if(!(10 % ticks_per_frame == 0))
      number_of_frames = number_of_frames + 1;

    rlen = bytes_per_frame * number_of_frames;
    rticks = ticks_per_frame * number_of_frames;
    signed long int return_value_read_5;
    return_value_read_5=read(rp->fd, (void *)rp->pload, (unsigned long int)rlen);
    if(!(return_value_read_5 == (signed long int)rlen))
    {
      _Bool tmp_if_expr_2;
      if(rp->loop == 0)
        tmp_if_expr_2 = (_Bool)1;

      else
      {
        return_value_lseek_1=lseek(rp->fd, (signed long int)0, 0);
        tmp_if_expr_2 = return_value_lseek_1 == (signed long int)-1 ? (_Bool)1 : (_Bool)0;
      }
      _Bool tmp_if_expr_4;
      if(tmp_if_expr_2)
        tmp_if_expr_4 = (_Bool)1;

      else
      {
        return_value_read_3=read(rp->fd, (void *)rp->pload, (unsigned long int)rlen);
        tmp_if_expr_4 = return_value_read_3 != (signed long int)rlen ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_4)
        return -1;

      if(!(rp->loop == -1))
        rp->loop = rp->loop - 1;

    }

    if(!((signed int)rp->rtp->m == 0))
    {
      return_value_ntohs_6=ntohs((unsigned short int)rp->rtp->seq);
      if(!((signed int)return_value_ntohs_6 == 0))
        rp->rtp->m = (unsigned int)0;

    }

    rp->rtp->ts=htonl(ts + (unsigned int)((8000 * rticks) / 1000));
    unsigned short int return_value_ntohs_7;
    return_value_ntohs_7=ntohs((unsigned short int)rp->rtp->seq);
    unsigned short int return_value_htons_8;
    return_value_htons_8=htons((unsigned short int)((signed int)return_value_ntohs_7 + 1));
    rp->rtp->seq = (unsigned int)return_value_htons_8;
    return (signed int)((rp->pload - rp->buf) + (signed long int)rlen);
  }
}

// rtp_server_new
// file rtp_server.c line 48
struct rtp_server * rtp_server_new(const char *name, enum anonymous_20 codec, signed int loop)
{
  struct rtp_server *rp;
  signed int fd;
  char path[4097l];
  sprintf(path, "%s.%d", name, codec);
  fd=open(path, 00);
  if(fd == -1)
    return (struct rtp_server *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct rtp_server) /*1056ul*/ );
    rp = (struct rtp_server *)return_value_malloc_1;
    if(rp == ((struct rtp_server *)NULL))
      return (struct rtp_server *)(void *)0;

    else
    {
      memset((void *)rp, 0, sizeof(struct rtp_server) /*1056ul*/ );
      rp->btime = (double)-1;
      rp->fd = fd;
      rp->loop = loop > 0 ? loop - 1 : loop;
      rp->rtp = (struct anonymous_28 *)rp->buf;
      rp->rtp->version = (unsigned int)2;
      rp->rtp->p = (unsigned int)0;
      rp->rtp->x = (unsigned int)0;
      rp->rtp->cc = (unsigned int)0;
      rp->rtp->m = (unsigned int)1;
      rp->rtp->pt = (unsigned int)codec;
      rp->rtp->ts = (unsigned int)0;
      rp->rtp->seq = (unsigned int)0;
      signed long int return_value_random_2;
      return_value_random_2=random();
      rp->rtp->ssrc = (unsigned int)return_value_random_2;
      rp->pload = rp->buf + (signed long int)(sizeof(struct anonymous_28) /*12ul*/  + (unsigned long int)rp->rtp->cc * sizeof(unsigned int) /*4ul*/ );
      return rp;
    }
  }
}

// rtpp_daemon
// file rtpp_util.h line 69
signed int rtpp_daemon(signed int nochdir, signed int noclose)
{
  struct sigaction osa;
  struct sigaction sa;
  signed int fd;
  signed int newgrp;
  signed int oerrno;
  signed int osa_ok;
  sigemptyset(&sa.sa_mask);
  sa.__sigaction_handler.sa_handler = (void (*)(signed int))1;
  sa.sa_flags = 0;
  osa_ok=sigaction(1, &sa, &osa);
  signed int return_value_fork_1;
  return_value_fork_1=fork();
  if(!(return_value_fork_1 == -1))
  {
    if(return_value_fork_1 == 0)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    return -1;

  __CPROVER_DUMP_L2:
    ;
    goto __CPROVER_DUMP_L4;
  }
  _exit(0);

__CPROVER_DUMP_L4:
  ;
  newgrp=setsid();
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  oerrno = *return_value___errno_location_2;
  if(!(osa_ok == -1))
    sigaction(1, &osa, (struct sigaction *)(void *)0);

  if(newgrp == -1)
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = oerrno;
    return -1;
  }

  if(nochdir == 0)
    chdir("/");

  if(noclose == 0)
  {
    fd=open("/dev/null", 02, 0);
    if(!(fd == -1))
    {
      dup2(fd, 0);
      dup2(fd, 1);
      dup2(fd, 2);
      if(fd >= 3)
        close(fd);

    }

  }

  return 0;
}

// rtpp_in_cksum
// file rtpp_util.h line 66
unsigned short int rtpp_in_cksum(void *addr, signed int len)
{
  signed int nleft;
  signed int sum;
  unsigned short int *w;
  /* tag-#anon#lUN[U16'us'|lARR2{U16}_U16_'uc'] */
union anonymous_1
{
  // us
  unsigned short int us;
  // uc
  unsigned short int uc[2l];
};

/* */
  ;
  union anonymous_1 last;
  unsigned short int answer;
  nleft = len;
  sum = 0;
  w = (unsigned short int *)addr;
  for( ; nleft >= 2; nleft = nleft - 2)
  {
    unsigned short int *tmp_post_1 = w;
    w = w + 1l;
    sum = sum + (signed int)*tmp_post_1;
  }
  if(nleft == 1)
  {
    last.uc[(signed long int)0] = (unsigned short int)*((unsigned char *)w);
    last.uc[(signed long int)1] = (unsigned short int)0;
    sum = sum + (signed int)last.us;
  }

  sum = (sum >> 16) + (sum & 0xffff);
  sum = sum + (sum >> 16);
  answer = (unsigned short int)~sum;
  return answer;
}

// rtpp_log_str2fac
// file rtpp_log.h line 67
signed int rtpp_log_str2fac(const char *s)
{
  signed int i = 0;
  signed int return_value_strcasecmp_2;
  for( ; !(str2fac[(signed long int)i].str_fac == ((const char *)NULL)); i = i + 1)
  {
    signed int return_value_strcasecmp_1;
    return_value_strcasecmp_1=strcasecmp(s, str2fac[(signed long int)i].str_fac);
    _Bool tmp_if_expr_3;
    if(return_value_strcasecmp_1 == 0)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value_strcasecmp_2=strcasecmp(s, str2fac[(signed long int)i].str_fac + (signed long int)4);
      tmp_if_expr_3 = return_value_strcasecmp_2 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      return str2fac[(signed long int)i].int_fac;

  }
  return -1;
}

// rtpp_log_str2lvl
// file rtpp_log.h line 66
signed int rtpp_log_str2lvl(const char *strl)
{
  signed int return_value_strcasecmp_1;
  return_value_strcasecmp_1=strcasecmp(strl, "DBUG");
  if(return_value_strcasecmp_1 == 0)
    return 7;

  else
  {
    signed int return_value_strcasecmp_2;
    return_value_strcasecmp_2=strcasecmp(strl, "INFO");
    if(return_value_strcasecmp_2 == 0)
      return 6;

    else
    {
      signed int return_value_strcasecmp_3;
      return_value_strcasecmp_3=strcasecmp(strl, "WARN");
      if(return_value_strcasecmp_3 == 0)
        return 4;

      else
      {
        signed int return_value_strcasecmp_4;
        return_value_strcasecmp_4=strcasecmp(strl, "ERR");
        if(return_value_strcasecmp_4 == 0)
          return 3;

        else
        {
          signed int return_value_strcasecmp_5;
          return_value_strcasecmp_5=strcasecmp(strl, "CRIT");
          if(return_value_strcasecmp_5 == 0)
            return 2;

          else
            return -1;
        }
      }
    }
  }
}

// rtpp_strsep
// file rtpp_util.c line 276
char * rtpp_strsep(char **stringp, const char *delim)
{
  char *s;
  const char *spanp;
  signed int c;
  signed int sc;
  char *tok;
  s = *stringp;
  if(s == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    tok = s;
    do
    {
      char *tmp_post_1 = s;
      s = s + 1l;
      c = (signed int)*tmp_post_1;
      spanp = delim;
      do
      {
        const char *tmp_post_2 = spanp;
        spanp = spanp + 1l;
        sc = (signed int)*tmp_post_2;
        if(sc == c)
        {
          if(c == 0)
            s = (char *)(void *)0;

          else
            s[(signed long int)-1] = (char)0;
          *stringp = s;
          return tok;
        }

      }
      while(!(sc == 0));
    }
    while((_Bool)1);
  }
}

// rwrite
// file rtpp_record.h line 54
void rwrite(struct rtpp_session *sp, void *rrc, struct rtp_packet *packet)
{
  struct iovec v[2l];
  /* tag-#anon#lUN[lSYM#tag-pkt_hdr_pcap#'pcap'|lSYM#tag-pkt_hdr_adhoc#'adhoc'] */
union anonymous_25
{
  // pcap
  struct pkt_hdr_pcap pcap;
  // adhoc
  struct pkt_hdr_adhoc adhoc;
};

/* */
  ;
  union anonymous_25 hdr;
  signed int rval;
  signed int hdr_size;
  signed int (*prepare_pkt_hdr)(struct rtpp_session *, struct rtp_packet *, void *);
  signed int return_value_flush_rbuf_1;
  signed int return_value_1;
  if(!(((struct rtpp_record_channel *)rrc)->fd == -1))
  {
    switch((signed int)((struct rtpp_record_channel *)rrc)->mode)
    {
      case MODE_REMOTE_RTP:
      {
        send(((struct rtpp_record_channel *)rrc)->fd, (const void *)packet->data.buf, packet->size, 0);
        break;
      }
      case MODE_LOCAL_PKT:
      {
        hdr_size = (signed int)sizeof(struct pkt_hdr_adhoc) /*40ul*/ ;
        prepare_pkt_hdr = (signed int (*)(struct rtpp_session *, struct rtp_packet *, void *))(void *)prepare_pkt_hdr_adhoc;
        goto __CPROVER_DUMP_L5;
      }
      case MODE_LOCAL_PCAP:
      {
        hdr_size = (signed int)sizeof(struct pkt_hdr_pcap) /*48ul*/ ;
        prepare_pkt_hdr = (signed int (*)(struct rtpp_session *, struct rtp_packet *, void *))(void *)prepare_pkt_hdr_pcap;
      }
      default:
      {

      __CPROVER_DUMP_L5:
        ;
        if(packet->size + (unsigned long int)(((struct rtpp_record_channel *)rrc)->rbuf_len + hdr_size) >= 4097ul)
        {
          if(((struct rtpp_record_channel *)rrc)->rbuf_len >= 1)
          {
            return_value_flush_rbuf_1=flush_rbuf(sp, rrc);
            if(!(return_value_flush_rbuf_1 == 0))
              break;

          }

        }

        if(packet->size + (unsigned long int)(((struct rtpp_record_channel *)rrc)->rbuf_len + hdr_size) >= 4097ul)
        {
          signed int return_value;
          return_value=prepare_pkt_hdr(sp, packet, (void *)&hdr);
          if(!(return_value == 0))
            break;

          v[(signed long int)0].iov_base = (void *)&hdr;
          v[(signed long int)0].iov_len = (unsigned long int)hdr_size;
          v[(signed long int)1].iov_base = (void *)packet->data.buf;
          v[(signed long int)1].iov_len = packet->size;
          signed long int return_value_writev_2;
          return_value_writev_2=writev(((struct rtpp_record_channel *)rrc)->fd, v, 2);
          rval = (signed int)return_value_writev_2;
          if(!(rval == -1))
            break;

          if(sp->log->log_level >= 3)
            _rtpp_log_ewrite(sp->log, 3, "rwrite", "error while recording session (%s)", sp->rtcp != (struct rtpp_session *)(void *)0 ? "RTP" : "RTCP");

          close(((struct rtpp_record_channel *)rrc)->fd);
          ((struct rtpp_record_channel *)rrc)->fd = -1;
          break;
        }

        return_value_1=prepare_pkt_hdr(sp, packet, (void *)(((struct rtpp_record_channel *)rrc)->rbuf + (signed long int)((struct rtpp_record_channel *)rrc)->rbuf_len));
      }
    }
    if(return_value_1 == 0)
    {
      ((struct rtpp_record_channel *)rrc)->rbuf_len = ((struct rtpp_record_channel *)rrc)->rbuf_len + hdr_size;
      memcpy((void *)(((struct rtpp_record_channel *)rrc)->rbuf + (signed long int)((struct rtpp_record_channel *)rrc)->rbuf_len), (const void *)packet->data.buf, packet->size);
      ((struct rtpp_record_channel *)rrc)->rbuf_len = ((struct rtpp_record_channel *)rrc)->rbuf_len + (signed int)packet->size;
    }

  }

}

// rxmit_packets
// file main.c line 508
static void rxmit_packets(struct cfg *cf, struct rtpp_session *sp, signed int ridx, double dtime)
{
  signed int ndrain;
  signed int i;
  signed int port;
  struct rtp_packet *packet = (struct rtp_packet *)(void *)0;
  ndrain = 0;
  signed int return_value_memcmp_5;
  signed int return_value_ishostseq_10;
  for( ; !(ndrain >= 5); ndrain = ndrain + 1)
  {
    if(!(packet == ((struct rtp_packet *)NULL)))
      rtp_packet_free(packet);

    packet=rtp_recv(sp->fds[(signed long int)ridx]);
    if(packet == ((struct rtp_packet *)NULL))
      break;

    packet->laddr = sp->laddr[(signed long int)ridx];
    packet->rport = sp->ports[(signed long int)ridx];
    packet->rtime = dtime;
    i = 0;
    if(!(sp->addr[(signed long int)ridx] == ((struct sockaddr *)NULL)))
    {
      if(sp->asymmetric[(signed long int)ridx] == 0)
      {
        signed int return_value_memcmp_1;
        return_value_memcmp_1=memcmp((const void *)sp->addr[(signed long int)ridx], (const void *)&packet->raddr, (unsigned long int)packet->rlen);
        if(!(return_value_memcmp_1 == 0))
        {
          if(sp->canupdate[(signed long int)ridx] == 0)
            goto __CPROVER_DUMP_L26;

          i = 1;
        }

        else
          if(!(sp->canupdate[(signed long int)ridx] == 0))
          {
            if(IEEE_FLOAT_NOTEQUAL(sp->last_update[(signed long int)ridx], 0.000000))
            {
              if(dtime + -sp->last_update[(signed long int)ridx] > 10.0)
                sp->canupdate[(signed long int)ridx] = 0;

            }

          }

      }

      else
      {
        signed int return_value_ishostseq_2;
        return_value_ishostseq_2=ishostseq(sp->addr[(signed long int)ridx], (struct sockaddr *)&packet->raddr);
        if(return_value_ishostseq_2 == 0)
          goto __CPROVER_DUMP_L26;

      }
      sp->pcount[(signed long int)ridx] = sp->pcount[(signed long int)ridx] + 1ul;
    }

    else
    {
      sp->pcount[(signed long int)ridx] = sp->pcount[(signed long int)ridx] + 1ul;
      void *return_value_malloc_3;
      return_value_malloc_3=malloc((unsigned long int)packet->rlen);
      sp->addr[(signed long int)ridx] = (struct sockaddr *)return_value_malloc_3;
      if(sp->addr[(signed long int)ridx] == ((struct sockaddr *)NULL))
      {
        sp->pcount[(signed long int)3] = sp->pcount[(signed long int)3] + 1ul;
        if(sp->log->log_level >= 3)
          _rtpp_log_write(sp->log, 3, "rxmit_packets", "can't allocate memory for remote address - removing session");

        struct rtpp_session *tmp_if_expr_4;
        if(!(sp->rtp == ((struct rtpp_session *)NULL)))
          tmp_if_expr_4 = sp->rtp;

        else
          tmp_if_expr_4 = sp;
        remove_session(cf, tmp_if_expr_4);
        break;
      }

      i = 1;
    }
    if(!(i == 0))
    {
      sp->untrusted_addr[(signed long int)ridx] = 1;
      memcpy((void *)sp->addr[(signed long int)ridx], (const void *)&packet->raddr, (unsigned long int)packet->rlen);
      _Bool tmp_if_expr_6;
      if(sp->prev_addr[(signed long int)ridx] == ((struct sockaddr *)NULL))
        tmp_if_expr_6 = (_Bool)1;

      else
      {
        return_value_memcmp_5=memcmp((const void *)sp->prev_addr[(signed long int)ridx], (const void *)&packet->raddr, (unsigned long int)packet->rlen);
        tmp_if_expr_6 = return_value_memcmp_5 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_6)
        sp->canupdate[(signed long int)ridx] = 0;

      unsigned short int return_value_ntohs_7;
      return_value_ntohs_7=ntohs(((struct sockaddr_in *)&packet->raddr)->sin_port);
      port = (signed int)return_value_ntohs_7;
      if(sp->log->log_level >= 6)
      {
        const char *return_value_addr2char_8;
        return_value_addr2char_8=addr2char((struct sockaddr *)&packet->raddr);
        _rtpp_log_write(sp->log, 6, "rxmit_packets", "%s's address filled in: %s:%d (%s)", ridx == 0 ? "callee" : "caller", return_value_addr2char_8, port, sp->rtp == (struct rtpp_session *)(void *)0 ? "RTP" : "RTCP");
      }

      if(!(sp->rtcp == ((struct rtpp_session *)NULL)))
      {
        _Bool tmp_if_expr_11;
        if(sp->rtcp->addr[(signed long int)ridx] == ((struct sockaddr *)NULL))
          tmp_if_expr_11 = (_Bool)1;

        else
        {
          return_value_ishostseq_10=ishostseq(sp->rtcp->addr[(signed long int)ridx], (struct sockaddr *)&packet->raddr);
          tmp_if_expr_11 = !(return_value_ishostseq_10 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_11)
        {
          if(sp->rtcp->addr[(signed long int)ridx] == ((struct sockaddr *)NULL))
          {
            void *return_value_malloc_9;
            return_value_malloc_9=malloc((unsigned long int)packet->rlen);
            sp->rtcp->addr[(signed long int)ridx] = (struct sockaddr *)return_value_malloc_9;
            if(sp->rtcp->addr[(signed long int)ridx] == ((struct sockaddr *)NULL))
            {
              sp->pcount[(signed long int)3] = sp->pcount[(signed long int)3] + 1ul;
              if(sp->log->log_level >= 3)
                _rtpp_log_write(sp->log, 3, "rxmit_packets", "can't allocate memory for remote address - removing session");

              remove_session(cf, sp);
              break;
            }

          }

          memcpy((void *)sp->rtcp->addr[(signed long int)ridx], (const void *)&packet->raddr, (unsigned long int)packet->rlen);
          ((struct sockaddr_in *)sp->rtcp->addr[(signed long int)ridx])->sin_port=htons((unsigned short int)(port + 1));
          sp->rtcp->canupdate[(signed long int)ridx] = sp->rtcp->asymmetric[(signed long int)ridx] == 0 ? 1 : 0;
          if(sp->log->log_level >= 6)
            _rtpp_log_write(sp->log, 6, "rxmit_packets", "guessing RTCP port for %s to be %d", ridx == 0 ? "callee" : "caller", port + 1);

        }

      }

    }

    if(sp->resizers[(signed long int)ridx].output_nsamples >= 1)
      rtp_resizer_enqueue(&sp->resizers[(signed long int)ridx], &packet);

    if(!(packet == ((struct rtp_packet *)NULL)))
      send_packet(cf, sp, ridx, packet);


  __CPROVER_DUMP_L26:
    ;
  }
  if(!(packet == ((struct rtp_packet *)NULL)))
    rtp_packet_free(packet);

}

// seedrandom
// file rtpp_util.h line 64
void seedrandom(void)
{
  signed int fd;
  unsigned long int junk;
  struct timeval tv;
  fd=open("/dev/random", 00, 0);
  if(fd >= 0)
  {
    read(fd, (void *)&junk, sizeof(unsigned long int) /*8ul*/ );
    close(fd);
  }

  gettimeofday(&tv, (struct timezone *)(void *)0);
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  srandom((unsigned int)((unsigned long int)((signed long int)(return_value_getpid_1 << 16) ^ tv.tv_sec ^ tv.tv_usec) ^ junk));
}

// send_packet
// file main.c line 638
static void send_packet(struct cfg *cf, struct rtpp_session *sp, signed int ridx, struct rtp_packet *packet)
{
  signed int i;
  signed int sidx;
  struct rtpp_session *tmp_if_expr_1;
  if(!(sp->rtp == ((struct rtpp_session *)NULL)))
    tmp_if_expr_1 = sp->rtp;

  else
    tmp_if_expr_1 = sp;
  tmp_if_expr_1->ttl[(signed long int)ridx] = cf->max_ttl;
  sidx = ridx == 0 ? 1 : 0;
  _Bool tmp_if_expr_4;
  struct rtpp_session *tmp_if_expr_3;
  if(sp->addr[(signed long int)sidx] == ((struct sockaddr *)NULL))
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    if(!(sp->rtp == ((struct rtpp_session *)NULL)))
      tmp_if_expr_3 = sp->rtp;

    else
      tmp_if_expr_3 = sp;
    tmp_if_expr_4 = tmp_if_expr_3->rtps[(signed long int)sidx] != (struct rtp_server *)(void *)0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_4)
    sp->pcount[(signed long int)3] = sp->pcount[(signed long int)3] + 1ul;

  else
  {
    sp->pcount[(signed long int)2] = sp->pcount[(signed long int)2] + 1ul;
    _Bool tmp_if_expr_2;
    if(!(cf->dmode == 0))
      tmp_if_expr_2 = packet->size < (unsigned long int)128 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    i = tmp_if_expr_2 ? 2 : 1;
    for( ; i >= 1; i = i - 1)
      sendto(sp->fds[(signed long int)sidx], (const void *)packet->data.buf, packet->size, 0, sp->addr[(signed long int)sidx], (unsigned int)((signed int)sp->addr[(signed long int)sidx]->sa_family == 2 ? sizeof(struct sockaddr_in) /*16ul*/  : sizeof(struct sockaddr_in6) /*28ul*/ ));
  }
  if(!(sp->rrcs[(signed long int)ridx] == NULL))
  {
    struct rtpp_session *tmp_if_expr_5;
    if(!(sp->rtp == ((struct rtpp_session *)NULL)))
      tmp_if_expr_5 = sp->rtp;

    else
      tmp_if_expr_5 = sp;
    if(tmp_if_expr_5->rtps[(signed long int)ridx] == ((struct rtp_server *)NULL))
      rwrite(sp, sp->rrcs[(signed long int)ridx], packet);

  }

}

// session_findfirst
// file rtpp_session.c line 116
struct rtpp_session * session_findfirst(struct cfg *cf, char *call_id)
{
  unsigned char hash;
  struct rtpp_session *sp;
  hash=hash_string(cf, call_id, (char *)(void *)0);
  sp = cf->hash_table[(signed long int)hash];
  for( ; !(sp == ((struct rtpp_session *)NULL)); sp = sp->next)
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(sp->call_id, call_id);
    if(return_value_strcmp_1 == 0)
      break;

  }
  return sp;
}

// session_findnext
// file rtpp_session.c line 131
struct rtpp_session * session_findnext(struct rtpp_session *psp)
{
  struct rtpp_session *sp = psp->next;
  for( ; !(sp == ((struct rtpp_session *)NULL)); sp = sp->next)
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(sp->call_id, psp->call_id);
    if(return_value_strcmp_1 == 0)
      break;

  }
  return sp;
}

// setbindhost
// file main.c line 78
static void setbindhost(struct sockaddr *ia, signed int pf, const char *bindhost, const char *servname)
{
  signed int n;
  signed int return_value_strcmp_1;
  if(!(bindhost == ((const char *)NULL)))
  {
    return_value_strcmp_1=strcmp(bindhost, "*");
    if(return_value_strcmp_1 == 0)
      bindhost = (const char *)(void *)0;

  }

  n=resolve(ia, pf, bindhost, servname, 0x0001);
  const char *return_value_gai_strerror_2;
  if(!(n == 0))
  {
    return_value_gai_strerror_2=gai_strerror(n);
    errx(1, "setbindhost: %s", return_value_gai_strerror_2);
  }

}

// strlvl
// file rtpp_log.c line 66
static const char * strlvl(signed int level)
{
  switch(level)
  {
    case 7:
      return "DBUG";
    case 6:
      return "INFO";
    case 4:
      return "WARN";
    case 3:
      return "ERR";
    case 2:
      return "CRIT";
    default:
    {
      abort();
      return (const char *)(void *)0;
    }
  }
}

// syslog_async_atexit
// file rtpp_syslog_async.c line 184
static void syslog_async_atexit(void)
{
  struct syslog_wi *wi;
  if(!(syslog_queue_inited == 0))
  {
    wi=syslog_queue_get_free_item(1);
    wi->item_type = (enum anonymous_23)SYSLOG_ITEM_ASYNC_EXIT;
    syslog_queue_put_item(wi);
    pthread_join(syslog_queue, (void **)(void *)0);
  }

}

// syslog_async_init
// file rtpp_syslog_async.h line 35
signed int syslog_async_init(const char *app, signed int facility)
{
  pthread_mutex_lock(&syslog_init_mutex);
  if(syslog_queue_inited == 0)
  {
    signed int return_value_syslog_queue_init_1;
    return_value_syslog_queue_init_1=syslog_queue_init();
    if(!(return_value_syslog_queue_init_1 == 0))
    {
      pthread_mutex_unlock(&syslog_init_mutex);
      return -1;
    }

  }

  syslog_queue_inited = 1;
  pthread_mutex_unlock(&syslog_init_mutex);
  openlog(app, 0x01 | 0x02, facility);
  atexit(syslog_async_atexit);
  return 0;
}

// syslog_queue_get_free_item
// file rtpp_syslog_async.c line 138
static struct syslog_wi * syslog_queue_get_free_item(signed int wait)
{
  struct syslog_wi *wi;
  pthread_mutex_lock(&syslog_wi_free_mutex);
  while(syslog_wi_free == ((struct syslog_wi *)NULL))
  {
    if(wait == 0)
    {
      syslog_dropped_items = syslog_dropped_items + 1;
      pthread_mutex_unlock(&syslog_wi_free_mutex);
      return (struct syslog_wi *)(void *)0;
    }

    pthread_cond_wait(&syslog_wi_free_cond, &syslog_wi_free_mutex);
  }
  wi = syslog_wi_free;
  syslog_wi_free = syslog_wi_free->next;
  pthread_mutex_unlock(&syslog_wi_free_mutex);
  return wi;
}

// syslog_queue_init
// file rtpp_syslog_async.c line 110
static signed int syslog_queue_init(void)
{
  signed int i;
  memset((void *)syslog_wi_pool, 0, sizeof(struct syslog_wi [64l]) /*132608ul*/ );
  i = 0;
  for( ; !(i >= 64); i = i + 1)
    syslog_wi_pool[(signed long int)i].next = &syslog_wi_pool[(signed long int)(i + 1)];
  syslog_wi_pool[(signed long int)(64 - 1)].next = (struct syslog_wi *)(void *)0;
  syslog_wi_free = syslog_wi_pool;
  syslog_wi_queue = (struct syslog_wi *)(void *)0;
  syslog_wi_queue_tail = (struct syslog_wi *)(void *)0;
  syslog_dropped_items = 0;
  pthread_cond_init(&syslog_queue_cond, (const union anonymous_26 *)(void *)0);
  pthread_mutex_init(&syslog_queue_mutex, (const union anonymous_26 *)(void *)0);
  pthread_cond_init(&syslog_wi_free_cond, (const union anonymous_26 *)(void *)0);
  pthread_mutex_init(&syslog_wi_free_mutex, (const union anonymous_26 *)(void *)0);
  signed int return_value_pthread_create_1;
  return_value_pthread_create_1=pthread_create(&syslog_queue, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))syslog_queue_run, (void *)0);
  if(!(return_value_pthread_create_1 == 0))
    return -1;

  else
    return 0;
}

// syslog_queue_put_item
// file rtpp_syslog_async.c line 163
static void syslog_queue_put_item(struct syslog_wi *wi)
{
  pthread_mutex_lock(&syslog_queue_mutex);
  wi->next = (struct syslog_wi *)(void *)0;
  if(syslog_wi_queue == ((struct syslog_wi *)NULL))
  {
    syslog_wi_queue = wi;
    syslog_wi_queue_tail = wi;
  }

  else
  {
    syslog_wi_queue_tail->next = wi;
    syslog_wi_queue_tail = wi;
  }
  pthread_cond_signal(&syslog_queue_cond);
  pthread_mutex_unlock(&syslog_queue_mutex);
}

// syslog_queue_run
// file rtpp_syslog_async.c line 72
static void syslog_queue_run(void)
{
  struct syslog_wi *wi;
  do
  {
    pthread_mutex_lock(&syslog_queue_mutex);
    while(syslog_wi_queue == ((struct syslog_wi *)NULL))
      pthread_cond_wait(&syslog_queue_cond, &syslog_queue_mutex);
    wi = syslog_wi_queue;
    syslog_wi_queue = wi->next;
    pthread_mutex_unlock(&syslog_queue_mutex);
    switch((signed int)wi->item_type)
    {
      case SYSLOG_ITEM_ASYNC_WRITE:
      {
        syslog(wi->priority, "%s", (const void *)wi->data);
        goto __CPROVER_DUMP_L6;
      }
      case SYSLOG_ITEM_ASYNC_EXIT:
        goto __CPROVER_DUMP_L7;
      default:
      {

      __CPROVER_DUMP_L6:
        ;
        pthread_mutex_lock(&syslog_wi_free_mutex);
        wi->next = syslog_wi_free;
        syslog_wi_free = wi;
        pthread_cond_signal(&syslog_wi_free_cond);
        pthread_mutex_unlock(&syslog_wi_free_mutex);
      }
    }
  }
  while((_Bool)1);

__CPROVER_DUMP_L7:
  ;
}

// url_unquote
// file rtpp_util.c line 367
signed int url_unquote(unsigned char *buf, signed int len)
{
  signed int outlen;
  unsigned char *cp;
  outlen = len;
  while(len >= 1)
  {
    void *return_value_memchr_1;
    return_value_memchr_1=memchr((const void *)buf, 37, (unsigned long int)len);
    cp = (unsigned char *)return_value_memchr_1;
    if(cp == ((unsigned char *)NULL))
      return outlen;

    if(!((signed long int)len >= (cp - buf) + 2l))
      return -1;

    _Bool tmp_if_expr_2;
    if((signed int)cp[1l] >= 128)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)cp[(signed long int)2] > 127 ? (_Bool)1 : (_Bool)0;
    _Bool tmp_if_expr_3;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)hex2char[(signed long int)cp[(signed long int)1]] == -1 ? (_Bool)1 : (_Bool)0;
    _Bool tmp_if_expr_4;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (signed int)hex2char[(signed long int)cp[(signed long int)2]] == -1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      return -1;

    cp[(signed long int)0] = (unsigned char)((signed int)hex2char[(signed long int)cp[(signed long int)1]] << 4 | (signed int)hex2char[(signed long int)cp[(signed long int)2]]);
    len = len - (signed int)((cp - buf) + (signed long int)3);
    if(len >= 1)
      memmove((void *)(cp + (signed long int)1), (const void *)(cp + (signed long int)3), (unsigned long int)len);

    buf = cp + (signed long int)1;
    outlen = outlen - 2;
  }
  return outlen;
}

// usage
// file main.c line 95
static void usage(void)
{
  fprintf(stderr, "usage: rtpproxy [-2fvFiPa] [-l addr1[/addr2]] [-6 addr1[/addr2]] [-s path]\n\t[-t tos] [-r rdir [-S sdir]] [-T ttl] [-L nfiles] [-m port_min]\n\t[-M port_max] [-u uname[:gname]] [-n timeout_socket] [-d log_level[:log_facility]]\n");
  exit(1);
}

// vsyslog_async
// file rtpp_syslog_async.h line 36
void vsyslog_async(signed int priority, const char *format, void **ap)
{
  struct syslog_wi *wi;
  char *p;
  signed int s1;
  signed int s2;
  wi=syslog_queue_get_free_item(0);
  if(!(wi == ((struct syslog_wi *)NULL)))
  {
    p = wi->data;
    s1 = (signed int)sizeof(char [2048l]) /*2048ul*/ ;
    s2=vsnprintf(p, (unsigned long int)s1, format, ap);
    if(s2 >= s1)
    {
      s2 = s1 - 1;
      p[(signed long int)s2] = (char)0;
    }

    wi->len = s2;
    wi->priority = priority;
    wi->item_type = (enum anonymous_23)SYSLOG_ITEM_ASYNC_WRITE;
    syslog_queue_put_item(wi);
  }

}

