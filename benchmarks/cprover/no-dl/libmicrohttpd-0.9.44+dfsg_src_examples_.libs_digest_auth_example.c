// #anon_enum_GNUTLS_CERT_IGNORE=0_GNUTLS_CERT_REQUEST=1_GNUTLS_CERT_REQUIRE=2
// file /usr/include/gnutls/gnutls.h line 529
enum anonymous_12 { GNUTLS_CERT_IGNORE=0, GNUTLS_CERT_REQUEST=1, GNUTLS_CERT_REQUIRE=2 };

// #anon_enum_GNUTLS_CRD_CERTIFICATE=1_GNUTLS_CRD_ANON=2_GNUTLS_CRD_SRP=3_GNUTLS_CRD_PSK=4_GNUTLS_CRD_IA=5
// file /usr/include/gnutls/gnutls.h line 222
enum anonymous_0 { GNUTLS_CRD_CERTIFICATE=1, GNUTLS_CRD_ANON=2, GNUTLS_CRD_SRP=3, GNUTLS_CRD_PSK=4, GNUTLS_CRD_IA=5 };

// #anon_enum_GNUTLS_CRT_UNKNOWN=0_GNUTLS_CRT_X509=1_GNUTLS_CRT_OPENPGP=2_GNUTLS_CRT_RAW=3
// file /usr/include/gnutls/gnutls.h line 599
enum anonymous_4 { GNUTLS_CRT_UNKNOWN=0, GNUTLS_CRT_X509=1, GNUTLS_CRT_OPENPGP=2, GNUTLS_CRT_RAW=3 };

// #anon_enum_GNUTLS_PK_UNKNOWN=0_GNUTLS_PK_RSA=1_GNUTLS_PK_DSA=2_GNUTLS_PK_DH=3_GNUTLS_PK_EC=4
// file /usr/include/gnutls/gnutls.h line 647
enum anonymous_9 { GNUTLS_PK_UNKNOWN=0, GNUTLS_PK_RSA=1, GNUTLS_PK_DSA=2, GNUTLS_PK_DH=3, GNUTLS_PK_EC=4 };

// #anon_enum_GNUTLS_SHUT_RDWR=0_GNUTLS_SHUT_WR=1
// file /usr/include/gnutls/gnutls.h line 554
enum anonymous_10 { GNUTLS_SHUT_RDWR=0, GNUTLS_SHUT_WR=1 };

// #anon_enum_GNUTLS_SSL3=1_GNUTLS_TLS1_0=2_GNUTLS_TLS1=2_GNUTLS_TLS1_1=3_GNUTLS_TLS1_2=4_GNUTLS_DTLS0_9=200_GNUTLS_DTLS1_0=201_GNUTLS_DTLS1_2=202_GNUTLS_DTLS_VERSION_MIN=200_GNUTLS_DTLS_VERSION_MAX=202_GNUTLS_TLS_VERSION_MAX=4_GNUTLS_VERSION_UNKNOWN=255
// file /usr/include/gnutls/gnutls.h line 574
enum anonymous_8 { GNUTLS_SSL3=1, GNUTLS_TLS1_0=2, GNUTLS_TLS1=2, GNUTLS_TLS1_1=3, GNUTLS_TLS1_2=4, GNUTLS_DTLS0_9=200, GNUTLS_DTLS1_0=201, GNUTLS_DTLS1_2=202, GNUTLS_DTLS_VERSION_MIN=200, GNUTLS_DTLS_VERSION_MAX=202, GNUTLS_TLS_VERSION_MAX=4, GNUTLS_VERSION_UNKNOWN=255 };

// #anon_enum_GNUTLS_X509_FMT_DER=0_GNUTLS_X509_FMT_PEM=1
// file /usr/include/gnutls/gnutls.h line 613
enum anonymous_1 { GNUTLS_X509_FMT_DER=0, GNUTLS_X509_FMT_PEM=1 };

// tag-#anon#ST[*{U8}_U8_'data'||U32'size'||U32'_pad0'|]
// file /usr/include/gnutls/gnutls.h line 795
struct anonymous_2;

// tag-#anon#ST[ARR16{S64}_S64_'fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_3;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_5;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_6;

// tag-#anon#UN[SYM#tag-in_addr#'ipv4'||SYM#tag-in6_addr#'ipv6'|]
// file daemon.c line 191
union anonymous_7;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_11;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]_transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_13;

// tag-MD5Context
// file md5.h line 27
struct MD5Context;

// tag-MHD_CONNECTION_OPTION
// file ../../src/include/microhttpd.h line 2574
enum MHD_CONNECTION_OPTION { MHD_CONNECTION_OPTION_TIMEOUT=0 };

// tag-MHD_CONNECTION_STATE
// file internal.h line 346
enum MHD_CONNECTION_STATE { MHD_CONNECTION_INIT=0, MHD_CONNECTION_URL_RECEIVED=1, MHD_CONNECTION_HEADER_PART_RECEIVED=2, MHD_CONNECTION_HEADERS_RECEIVED=3, MHD_CONNECTION_HEADERS_PROCESSED=4, MHD_CONNECTION_CONTINUE_SENDING=5, MHD_CONNECTION_CONTINUE_SENT=6, MHD_CONNECTION_BODY_RECEIVED=7, MHD_CONNECTION_FOOTER_PART_RECEIVED=8, MHD_CONNECTION_FOOTERS_RECEIVED=9, MHD_CONNECTION_HEADERS_SENDING=10, MHD_CONNECTION_HEADERS_SENT=11, MHD_CONNECTION_NORMAL_BODY_READY=12, MHD_CONNECTION_NORMAL_BODY_UNREADY=13, MHD_CONNECTION_CHUNKED_BODY_READY=14, MHD_CONNECTION_CHUNKED_BODY_UNREADY=15, MHD_CONNECTION_BODY_SENT=16, MHD_CONNECTION_FOOTERS_SENDING=17, MHD_CONNECTION_FOOTERS_SENT=18, MHD_CONNECTION_CLOSED=19, MHD_CONNECTION_IN_CLEANUP=20, MHD_TLS_CONNECTION_INIT=21 };

// tag-MHD_Connection
// file ../../src/include/microhttpd.h line 476
struct MHD_Connection;

// tag-MHD_ConnectionEventLoopInfo
// file internal.h line 149
enum MHD_ConnectionEventLoopInfo { MHD_EVENT_LOOP_INFO_READ=0, MHD_EVENT_LOOP_INFO_WRITE=1, MHD_EVENT_LOOP_INFO_BLOCK=2, MHD_EVENT_LOOP_INFO_CLEANUP=3 };

// tag-MHD_ConnectionInfo
// file ../../src/include/microhttpd.h line 1111
union MHD_ConnectionInfo;

// tag-MHD_ConnectionInfoType
// file ../../src/include/microhttpd.h line 1163
enum MHD_ConnectionInfoType { MHD_CONNECTION_INFO_CIPHER_ALGO=0, MHD_CONNECTION_INFO_PROTOCOL=1, MHD_CONNECTION_INFO_CLIENT_ADDRESS=2, MHD_CONNECTION_INFO_GNUTLS_SESSION=3, MHD_CONNECTION_INFO_GNUTLS_CLIENT_CERT=4, MHD_CONNECTION_INFO_DAEMON=5, MHD_CONNECTION_INFO_CONNECTION_FD=6, MHD_CONNECTION_INFO_SOCKET_CONTEXT=7 };

// tag-MHD_ConnectionNotificationCode
// file ../../src/include/microhttpd.h line 1090
enum MHD_ConnectionNotificationCode { MHD_CONNECTION_NOTIFY_STARTED=0, MHD_CONNECTION_NOTIFY_CLOSED=1 };

// tag-MHD_Daemon
// file ../../src/include/microhttpd.h line 466
struct MHD_Daemon;

// tag-MHD_DaemonInfo
// file ../../src/include/microhttpd.h line 2605
union MHD_DaemonInfo;

// tag-MHD_DaemonInfoType
// file ../../src/include/microhttpd.h line 1232
enum MHD_DaemonInfoType { MHD_DAEMON_INFO_KEY_SIZE=0, MHD_DAEMON_INFO_MAC_KEY_SIZE=1, MHD_DAEMON_INFO_LISTEN_FD=2, MHD_DAEMON_INFO_EPOLL_FD_LINUX_ONLY=3, MHD_DAEMON_INFO_CURRENT_CONNECTIONS=4 };

// tag-MHD_EpollState
// file internal.h line 108
enum MHD_EpollState { MHD_EPOLL_STATE_UNREADY=0, MHD_EPOLL_STATE_READ_READY=1, MHD_EPOLL_STATE_WRITE_READY=2, MHD_EPOLL_STATE_IN_EREADY_EDLL=4, MHD_EPOLL_STATE_IN_EPOLL_SET=8, MHD_EPOLL_STATE_SUSPENDED=16 };

// tag-MHD_FEATURE
// file ../../src/include/microhttpd.h line 2663
enum MHD_FEATURE { MHD_FEATURE_MESSGES=1, MHD_FEATURE_SSL=2, MHD_FEATURE_HTTPS_CERT_CALLBACK=3, MHD_FEATURE_IPv6=4, MHD_FEATURE_IPv6_ONLY=5, MHD_FEATURE_POLL=6, MHD_FEATURE_EPOLL=7, MHD_FEATURE_SHUTDOWN_LISTEN_SOCKET=8, MHD_FEATURE_SOCKETPAIR=9, MHD_FEATURE_TCP_FASTOPEN=10, MHD_FEATURE_BASIC_AUTH=11, MHD_FEATURE_DIGEST_AUTH=12, MHD_FEATURE_POSTPROCESSOR=13, MHD_FEATURE_HTTPS_KEY_PASSWORD=14, MHD_FEATURE_LARGE_FILE=15 };

// tag-MHD_FLAG
// file ../../src/include/microhttpd.h line 502
enum MHD_FLAG { MHD_NO_FLAG=0, MHD_USE_DEBUG=1, MHD_USE_SSL=2, MHD_USE_THREAD_PER_CONNECTION=4, MHD_USE_SELECT_INTERNALLY=8, MHD_USE_IPv6=16, MHD_USE_PEDANTIC_CHECKS=32, MHD_USE_POLL=64, MHD_USE_POLL_INTERNALLY=72, MHD_SUPPRESS_DATE_NO_CLOCK=128, MHD_USE_NO_LISTEN_SOCKET=256, MHD_USE_EPOLL_LINUX_ONLY=512, MHD_USE_EPOLL_INTERNALLY_LINUX_ONLY=520, MHD_USE_PIPE_FOR_SHUTDOWN=1024, MHD_USE_DUAL_STACK=2064, MHD_USE_EPOLL_TURBO=4096, MHD_USE_SUSPEND_RESUME=9216, MHD_USE_TCP_FASTOPEN=16384 };

// tag-MHD_HTTP_Header
// file internal.h line 216
struct MHD_HTTP_Header;

// tag-MHD_IPCount
// file daemon.c line 181
struct MHD_IPCount;

// tag-MHD_NonceNc
// file internal.h line 186
struct MHD_NonceNc;

// tag-MHD_OPTION
// file ../../src/include/microhttpd.h line 660
enum MHD_OPTION { MHD_OPTION_END=0, MHD_OPTION_CONNECTION_MEMORY_LIMIT=1, MHD_OPTION_CONNECTION_LIMIT=2, MHD_OPTION_CONNECTION_TIMEOUT=3, MHD_OPTION_NOTIFY_COMPLETED=4, MHD_OPTION_PER_IP_CONNECTION_LIMIT=5, MHD_OPTION_SOCK_ADDR=6, MHD_OPTION_URI_LOG_CALLBACK=7, MHD_OPTION_HTTPS_MEM_KEY=8, MHD_OPTION_HTTPS_MEM_CERT=9, MHD_OPTION_HTTPS_CRED_TYPE=10, MHD_OPTION_HTTPS_PRIORITIES=11, MHD_OPTION_LISTEN_SOCKET=12, MHD_OPTION_EXTERNAL_LOGGER=13, MHD_OPTION_THREAD_POOL_SIZE=14, MHD_OPTION_ARRAY=15, MHD_OPTION_UNESCAPE_CALLBACK=16, MHD_OPTION_DIGEST_AUTH_RANDOM=17, MHD_OPTION_NONCE_NC_SIZE=18, MHD_OPTION_THREAD_STACK_SIZE=19, MHD_OPTION_HTTPS_MEM_TRUST=20, MHD_OPTION_CONNECTION_MEMORY_INCREMENT=21, MHD_OPTION_HTTPS_CERT_CALLBACK=22, MHD_OPTION_TCP_FASTOPEN_QUEUE_SIZE=23, MHD_OPTION_HTTPS_MEM_DHPARAMS=24, MHD_OPTION_LISTENING_ADDRESS_REUSE=25, MHD_OPTION_HTTPS_KEY_PASSWORD=26, MHD_OPTION_NOTIFY_CONNECTION=27 };

// tag-MHD_OptionItem
// file ../../src/include/microhttpd.h line 958
struct MHD_OptionItem;

// tag-MHD_PostProcessor
// file ../../src/include/microhttpd.h line 488
struct MHD_PostProcessor;

// tag-MHD_Reason_Block
// file reason_phrase.c line 133
struct MHD_Reason_Block;

// tag-MHD_RequestTerminationCode
// file ../../src/include/microhttpd.h line 1032
enum MHD_RequestTerminationCode { MHD_REQUEST_TERMINATED_COMPLETED_OK=0, MHD_REQUEST_TERMINATED_WITH_ERROR=1, MHD_REQUEST_TERMINATED_TIMEOUT_REACHED=2, MHD_REQUEST_TERMINATED_DAEMON_SHUTDOWN=3, MHD_REQUEST_TERMINATED_READ_ERROR=4, MHD_REQUEST_TERMINATED_CLIENT_ABORT=5 };

// tag-MHD_Response
// file ../../src/include/microhttpd.h line 482
struct MHD_Response;

// tag-MHD_ResponseFlags
// file ../../src/include/microhttpd.h line 1940
enum MHD_ResponseFlags { MHD_RF_NONE=0, MHD_RF_HTTP_VERSION_1_0_ONLY=1 };

// tag-MHD_ResponseMemoryMode
// file ../../src/include/microhttpd.h line 2033
enum MHD_ResponseMemoryMode { MHD_RESPMEM_PERSISTENT=0, MHD_RESPMEM_MUST_FREE=1, MHD_RESPMEM_MUST_COPY=2 };

// tag-MHD_ResponseOptions
// file ../../src/include/microhttpd.h line 1960
enum MHD_ResponseOptions { MHD_RO_END=0 };

// tag-MHD_ValueKind
// file ../../src/include/microhttpd.h line 986
enum MHD_ValueKind { MHD_RESPONSE_HEADER_KIND=0, MHD_HEADER_KIND=1, MHD_COOKIE_KIND=2, MHD_POSTDATA_KIND=4, MHD_GET_ARGUMENT_KIND=8, MHD_FOOTER_KIND=16 };

// tag-MemoryPool
// file internal.h line 584
struct MemoryPool;

// tag-NE_State
// file postprocessor.c line 103
enum NE_State { NE_none=0, NE_content_name=1, NE_content_type=2, NE_content_filename=4, NE_content_transfer_encoding=8 };

// tag-PP_State
// file postprocessor.c line 38
enum PP_State { PP_Error=0, PP_Done=1, PP_Init=2, PP_NextBoundary=3, PP_ProcessValue=4, PP_ExpectNewLine=5, PP_ProcessEntryHeaders=6, PP_PerformCheckMultipart=7, PP_ProcessValueToBoundary=8, PP_PerformCleanup=9, PP_Nested_Init=10, PP_Nested_PerformMarking=11, PP_Nested_ProcessEntryHeaders=12, PP_Nested_ProcessValueToBoundary=13, PP_Nested_PerformCleanup=14 };

// tag-RN_State
// file postprocessor.c line 66
enum RN_State { RN_Inactive=0, RN_OptN=1, RN_Full=2, RN_Dash=3, RN_Dash2=4 };

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_MHD_mono_clock_source
// file mhd_mono_clock.c line 69
enum _MHD_mono_clock_source { _MHD_CLOCK_NO_SOURCE=0, _MHD_CLOCK_GETTIME=1, _MHD_CLOCK_GET_TIME=2, _MHD_CLOCK_GETHRTIME=3, _MHD_CLOCK_GETTICKCOUNT64=4, _MHD_CLOCK_PERFCOUNTER=5 };

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-epoll_data
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 79
union epoll_data;

// tag-epoll_event
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 87
struct epoll_event;

// tag-gnutls_certificate_credentials_st
// file /usr/include/gnutls/gnutls.h line 1399
struct gnutls_certificate_credentials_st;

// tag-gnutls_cipher_algorithm
// file /usr/include/gnutls/gnutls.h line 119
enum gnutls_cipher_algorithm { GNUTLS_CIPHER_UNKNOWN=0, GNUTLS_CIPHER_NULL=1, GNUTLS_CIPHER_ARCFOUR_128=2, GNUTLS_CIPHER_3DES_CBC=3, GNUTLS_CIPHER_AES_128_CBC=4, GNUTLS_CIPHER_AES_256_CBC=5, GNUTLS_CIPHER_ARCFOUR_40=6, GNUTLS_CIPHER_CAMELLIA_128_CBC=7, GNUTLS_CIPHER_CAMELLIA_256_CBC=8, GNUTLS_CIPHER_AES_192_CBC=9, GNUTLS_CIPHER_AES_128_GCM=10, GNUTLS_CIPHER_AES_256_GCM=11, GNUTLS_CIPHER_CAMELLIA_192_CBC=12, GNUTLS_CIPHER_SALSA20_256=13, GNUTLS_CIPHER_ESTREAM_SALSA20_256=14, GNUTLS_CIPHER_CAMELLIA_128_GCM=15, GNUTLS_CIPHER_CAMELLIA_256_GCM=16, GNUTLS_CIPHER_RC2_40_CBC=17, GNUTLS_CIPHER_DES_CBC=18, GNUTLS_CIPHER_AES_128_CCM=19, GNUTLS_CIPHER_AES_256_CCM=20, GNUTLS_CIPHER_AES_128_CCM_8=21, GNUTLS_CIPHER_AES_256_CCM_8=22, GNUTLS_CIPHER_CHACHA20_POLY1305=23, GNUTLS_CIPHER_IDEA_PGP_CFB=200, GNUTLS_CIPHER_3DES_PGP_CFB=201, GNUTLS_CIPHER_CAST5_PGP_CFB=202, GNUTLS_CIPHER_BLOWFISH_PGP_CFB=203, GNUTLS_CIPHER_SAFER_SK128_PGP_CFB=204, GNUTLS_CIPHER_AES128_PGP_CFB=205, GNUTLS_CIPHER_AES192_PGP_CFB=206, GNUTLS_CIPHER_AES256_PGP_CFB=207, GNUTLS_CIPHER_TWOFISH_PGP_CFB=208 };

// tag-gnutls_dh_params_int
// file /usr/include/gnutls/gnutls.h line 785
struct gnutls_dh_params_int;

// tag-gnutls_pcert_st
// file /usr/include/gnutls/abstract.h line 450
struct gnutls_pcert_st;

// tag-gnutls_priority_st
// file /usr/include/gnutls/gnutls.h line 792
struct gnutls_priority_st;

// tag-gnutls_privkey_st
// file /usr/include/gnutls/gnutls.h line 1378
struct gnutls_privkey_st;

// tag-gnutls_pubkey_st
// file /usr/include/gnutls/gnutls.h line 1375
struct gnutls_pubkey_st;

// tag-gnutls_session_int
// file /usr/include/gnutls/gnutls.h line 782
struct gnutls_session_int;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_at
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_at;

// tag-sockaddr_ax25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ax25;

// tag-sockaddr_dl
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_dl;

// tag-sockaddr_eon
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_eon;

// tag-sockaddr_in
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in6;

// tag-sockaddr_inarp
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_inarp;

// tag-sockaddr_ipx
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ipx;

// tag-sockaddr_iso
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_iso;

// tag-sockaddr_ns
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ns;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_un;

// tag-sockaddr_x25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_x25;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// BASE64Decode
// file base64.h line 15
char * BASE64Decode(const char *src);
// MD5Final
// file md5.h line 55
void MD5Final(unsigned char *digest, struct MD5Context *ctx);
// MD5Init
// file md5.h line 38
void MD5Init(struct MD5Context *ctx);
// MD5Pad
// file md5.c line 111
void MD5Pad(struct MD5Context *ctx);
// MD5Transform
// file md5.c line 168
void MD5Transform(unsigned int *state, const unsigned char *block);
// MD5Update
// file md5.h line 44
void MD5Update(struct MD5Context *ctx, const unsigned char *input, unsigned long int len);
// MHD_DLOG
// file internal.h line 208
void MHD_DLOG(struct MHD_Daemon *daemon, const char *format, ...);
// MHD_TLS_init
// file daemon.c line 597
static signed int MHD_TLS_init(struct MHD_Daemon *daemon);
// MHD_accept_connection
// file daemon.c line 1945
static signed int MHD_accept_connection(struct MHD_Daemon *daemon);
// MHD_add_connection
// file daemon.c line 1918
extern signed int MHD_add_connection(struct MHD_Daemon *daemon, signed int client_socket, struct sockaddr *addr, unsigned int addrlen);
// MHD_add_response_footer
// file response.c line 123
extern signed int MHD_add_response_footer(struct MHD_Response *response, const char *footer, const char *content);
// MHD_add_response_header
// file response.c line 103
extern signed int MHD_add_response_header(struct MHD_Response *response, const char *header, const char *content);
// MHD_basic_auth_get_username_password
// file basicauth.c line 46
extern char * MHD_basic_auth_get_username_password(struct MHD_Connection *connection, char **password);
// MHD_cleanup_connections
// file daemon.c line 2022
static void MHD_cleanup_connections(struct MHD_Daemon *daemon);
// MHD_connection_close
// file connection.c line 267
void MHD_connection_close(struct MHD_Connection *connection, enum MHD_RequestTerminationCode termination_code);
// MHD_connection_epoll_update_
// file connection.c line 2724
signed int MHD_connection_epoll_update_(struct MHD_Connection *connection);
// MHD_connection_handle_idle
// file connection.c line 2278
signed int MHD_connection_handle_idle(struct MHD_Connection *connection);
// MHD_connection_handle_read
// file connection.c line 2001
signed int MHD_connection_handle_read(struct MHD_Connection *connection);
// MHD_connection_handle_write
// file connection.c line 2064
signed int MHD_connection_handle_write(struct MHD_Connection *connection);
// MHD_connection_update_event_loop_info
// file connection.c line 979
static void MHD_connection_update_event_loop_info(struct MHD_Connection *connection);
// MHD_create_post_processor
// file postprocessor.c line 272
extern struct MHD_PostProcessor * MHD_create_post_processor(struct MHD_Connection *connection, unsigned long int buffer_size, signed int (*iter)(void *, enum MHD_ValueKind, const char *, const char *, const char *, const char *, const char *, unsigned long int, unsigned long int), void *iter_cls);
// MHD_create_post_processor::iter_object
//
signed int iter_object(void *, enum MHD_ValueKind, const char *, const char *, const char *, const char *, const char *, unsigned long int, unsigned long int);
// MHD_create_response_from_buffer
// file ../../src/include/microhttpd.h line 2075
extern struct MHD_Response * MHD_create_response_from_buffer(unsigned long int size, void *buffer, enum MHD_ResponseMemoryMode mode);
// MHD_create_response_from_callback
// file response.c line 244
extern struct MHD_Response * MHD_create_response_from_callback(unsigned long int size, unsigned long int block_size, signed long int (*crc)(void *, unsigned long int, char *, unsigned long int), void *crc_cls, void (*crfc)(void *));
// MHD_create_response_from_callback::crc_object
//
signed long int crc_object(void *, unsigned long int, char *, unsigned long int);
// MHD_create_response_from_callback::crfc_object
//
void crfc_object(void *);
// MHD_create_response_from_data
// file response.c line 502
extern struct MHD_Response * MHD_create_response_from_data(unsigned long int size, void *data, signed int must_free, signed int must_copy);
// MHD_create_response_from_fd
// file response.c line 459
extern struct MHD_Response * MHD_create_response_from_fd(unsigned long int size, signed int fd);
// MHD_create_response_from_fd64
// file response.c line 480
extern struct MHD_Response * MHD_create_response_from_fd64(unsigned long int size, signed int fd);
// MHD_create_response_from_fd_at_offset
// file response.c line 396
extern struct MHD_Response * MHD_create_response_from_fd_at_offset(unsigned long int size, signed int fd, signed long int offset);
// MHD_create_response_from_fd_at_offset64
// file response.c line 421
extern struct MHD_Response * MHD_create_response_from_fd_at_offset64(unsigned long int size, signed int fd, unsigned long int offset);
// MHD_del_response_header
// file response.c line 143
extern signed int MHD_del_response_header(struct MHD_Response *response, const char *header, const char *content);
// MHD_destroy_post_processor
// file postprocessor.c line 1161
extern signed int MHD_destroy_post_processor(struct MHD_PostProcessor *pp);
// MHD_destroy_response
// file ../../src/include/microhttpd.h line 2312
extern void MHD_destroy_response(struct MHD_Response *response);
// MHD_digest_auth_check
// file ../../src/include/microhttpd.h line 2491
extern signed int MHD_digest_auth_check(struct MHD_Connection *connection, const char *realm, const char *username, const char *password, unsigned int nonce_timeout);
// MHD_digest_auth_get_username
// file ../../src/include/microhttpd.h line 2474
extern char * MHD_digest_auth_get_username(struct MHD_Connection *connection);
// MHD_epoll
// file daemon.c line 2691
static signed int MHD_epoll(struct MHD_Daemon *daemon, signed int may_block);
// MHD_fini
// file daemon.c line 4898
void MHD_fini(void);
// MHD_get_connection_info
// file connection.c line 2790
extern union MHD_ConnectionInfo * MHD_get_connection_info(struct MHD_Connection *connection, enum MHD_ConnectionInfoType info_type, ...);
// MHD_get_connection_values
// file connection.c line 127
extern signed int MHD_get_connection_values(struct MHD_Connection *connection, enum MHD_ValueKind kind, signed int (*iterator)(void *, enum MHD_ValueKind, const char *, const char *), void *iterator_cls);
// MHD_get_connection_values::iterator_object
//
signed int iterator_object(void *, enum MHD_ValueKind, const char *, const char *);
// MHD_get_daemon_info
// file daemon.c line 4625
extern union MHD_DaemonInfo * MHD_get_daemon_info(struct MHD_Daemon *daemon, enum MHD_DaemonInfoType info_type, ...);
// MHD_get_fdset
// file daemon.c line 678
extern signed int MHD_get_fdset(struct MHD_Daemon *daemon, struct anonymous_3 *read_fd_set, struct anonymous_3 *write_fd_set, struct anonymous_3 *except_fd_set, signed int *max_fd);
// MHD_get_fdset2
// file daemon.c line 711
extern signed int MHD_get_fdset2(struct MHD_Daemon *daemon, struct anonymous_3 *read_fd_set, struct anonymous_3 *write_fd_set, struct anonymous_3 *except_fd_set, signed int *max_fd, unsigned int fd_setsize);
// MHD_get_master
// file daemon.c line 170
static struct MHD_Daemon * MHD_get_master(struct MHD_Daemon *daemon);
// MHD_get_reason_phrase_for
// file ../../src/include/microhttpd.h line 350
const char * MHD_get_reason_phrase_for(unsigned int code);
// MHD_get_response_header
// file ../../src/include/microhttpd.h line 2385
extern const char * MHD_get_response_header(struct MHD_Response *response, const char *key);
// MHD_get_response_headers
// file response.c line 186
extern signed int MHD_get_response_headers(struct MHD_Response *response, signed int (*iterator)(void *, enum MHD_ValueKind, const char *, const char *), void *iterator_cls);
// MHD_get_response_headers::iterator_object
//
signed int iterator_object(void *, enum MHD_ValueKind, const char *, const char *);
// MHD_get_timeout
// file daemon.c line 2118
extern signed int MHD_get_timeout(struct MHD_Daemon *daemon, unsigned long long int *timeout);
// MHD_get_version
// file daemon.c line 4693
extern const char * MHD_get_version(void);
// MHD_handle_connection
// file daemon.c line 785
static void * MHD_handle_connection(void *data);
// MHD_http_unescape
// file ../../src/include/microhttpd.h line 1855
extern unsigned long int MHD_http_unescape(char *val);
// MHD_increment_response_rc
// file response.h line 35
void MHD_increment_response_rc(struct MHD_Response *response);
// MHD_init
// file daemon.c line 4865
void MHD_init(void);
// MHD_init_daemon_certificate
// file daemon.c line 508
static signed int MHD_init_daemon_certificate(struct MHD_Daemon *daemon);
// MHD_ip_addr_compare
// file daemon.c line 252
static signed int MHD_ip_addr_compare(const void *a1, const void *a2);
// MHD_ip_addr_to_key
// file daemon.c line 267
static signed int MHD_ip_addr_to_key(struct sockaddr *addr, unsigned int addrlen, struct MHD_IPCount *key);
// MHD_ip_count_lock
// file daemon.c line 218
static void MHD_ip_count_lock(struct MHD_Daemon *daemon);
// MHD_ip_count_unlock
// file daemon.c line 233
static void MHD_ip_count_unlock(struct MHD_Daemon *daemon);
// MHD_ip_limit_add
// file daemon.c line 308
static signed int MHD_ip_limit_add(struct MHD_Daemon *daemon, struct sockaddr *addr, unsigned int addrlen);
// MHD_ip_limit_del
// file daemon.c line 372
static void MHD_ip_limit_del(struct MHD_Daemon *daemon, struct sockaddr *addr, unsigned int addrlen);
// MHD_is_feature_supported
// file daemon.c line 4725
extern signed int MHD_is_feature_supported(enum MHD_FEATURE feature);
// MHD_lookup_connection_value
// file connection.c line 216
extern const char * MHD_lookup_connection_value(struct MHD_Connection *connection, enum MHD_ValueKind kind, const char *key);
// MHD_monotonic_sec_counter
// file mhd_mono_clock.h line 52
signed long int MHD_monotonic_sec_counter(void);
// MHD_monotonic_sec_counter_finish
// file mhd_mono_clock.h line 41
void MHD_monotonic_sec_counter_finish(void);
// MHD_monotonic_sec_counter_init
// file mhd_mono_clock.h line 34
void MHD_monotonic_sec_counter_init(void);
// MHD_poll
// file daemon.c line 2653
static signed int MHD_poll(struct MHD_Daemon *daemon, signed int may_block);
// MHD_poll_all
// file daemon.c line 2409
static signed int MHD_poll_all(struct MHD_Daemon *daemon, signed int may_block);
// MHD_poll_listen_socket
// file daemon.c line 2591
static signed int MHD_poll_listen_socket(struct MHD_Daemon *daemon, signed int may_block);
// MHD_pool_allocate
// file memorypool.h line 72
void * MHD_pool_allocate(struct MemoryPool *pool, unsigned long int size, signed int from_end);
// MHD_pool_create
// file memorypool.h line 48
struct MemoryPool * MHD_pool_create(unsigned long int max);
// MHD_pool_destroy
// file memorypool.h line 57
void MHD_pool_destroy(struct MemoryPool *pool);
// MHD_pool_reallocate
// file memorypool.h line 94
void * MHD_pool_reallocate(struct MemoryPool *pool, void *old, unsigned long int old_size, unsigned long int new_size);
// MHD_pool_reset
// file memorypool.h line 110
void * MHD_pool_reset(struct MemoryPool *pool, void *keep, unsigned long int size);
// MHD_post_process
// file postprocessor.c line 1132
extern signed int MHD_post_process(struct MHD_PostProcessor *pp, const char *post_data, unsigned long int post_data_len);
// MHD_queue_auth_fail_response
// file ../../src/include/microhttpd.h line 2513
extern signed int MHD_queue_auth_fail_response(struct MHD_Connection *connection, const char *realm, const char *opaque, struct MHD_Response *response, signed int signal_stale);
// MHD_queue_basic_auth_fail_response
// file basicauth.c line 116
extern signed int MHD_queue_basic_auth_fail_response(struct MHD_Connection *connection, const char *realm, struct MHD_Response *response);
// MHD_queue_response
// file ../../src/include/microhttpd.h line 1886
extern signed int MHD_queue_response(struct MHD_Connection *connection, unsigned int status_code, struct MHD_Response *response);
// MHD_quiesce_daemon
// file daemon.c line 3032
extern signed int MHD_quiesce_daemon(struct MHD_Daemon *daemon);
// MHD_resume_connection
// file daemon.c line 1740
extern void MHD_resume_connection(struct MHD_Connection *connection);
// MHD_run
// file daemon.c line 2904
extern signed int MHD_run(struct MHD_Daemon *daemon);
// MHD_run_from_select
// file daemon.c line 2215
extern signed int MHD_run_from_select(struct MHD_Daemon *daemon, const struct anonymous_3 *read_fd_set, const struct anonymous_3 *write_fd_set, const struct anonymous_3 *except_fd_set);
// MHD_select
// file daemon.c line 2306
static signed int MHD_select(struct MHD_Daemon *daemon, signed int may_block);
// MHD_select_thread
// file daemon.c line 2939
static void * MHD_select_thread(void *cls);
// MHD_set_connection_option
// file connection.c line 2835
extern signed int MHD_set_connection_option(struct MHD_Connection *connection, enum MHD_CONNECTION_OPTION option, ...);
// MHD_set_connection_value
// file connection.c line 176
extern signed int MHD_set_connection_value(struct MHD_Connection *connection, enum MHD_ValueKind kind, const char *key, const char *value);
// MHD_set_http_callbacks_
// file connection.c line 2771
void MHD_set_http_callbacks_(struct MHD_Connection *connection);
// MHD_set_https_callbacks
// file connection_https.h line 39
void MHD_set_https_callbacks(struct MHD_Connection *connection);
// MHD_set_panic_func
// file daemon.c line 4679
extern void MHD_set_panic_func(void (*cb)(void *, const char *, unsigned int, const char *), void *cls);

//

// MHD_set_response_options
// file response.c line 283
extern signed int MHD_set_response_options(struct MHD_Response *response, enum MHD_ResponseFlags flags, ...);
// MHD_start_daemon
// file ../../src/include/microhttpd.h line 1548
extern struct MHD_Daemon * MHD_start_daemon(unsigned int flags, unsigned short int port, signed int (*apc)(void *, struct sockaddr *, unsigned int), void *apc_cls, signed int (*dh)(void *, struct MHD_Connection *, const char *, const char *, const char *, const char *, unsigned long int *, void **), void *dh_cls, ...);
// MHD_start_daemon::apc_object
//
signed int apc_object(void *, struct sockaddr *, unsigned int);
// MHD_start_daemon::dh_object
//
signed int dh_object(void *, struct MHD_Connection *, const char *, const char *, const char *, const char *, unsigned long int *, void **);
// MHD_start_daemon_va
// file daemon.c line 3613
extern struct MHD_Daemon * MHD_start_daemon_va(unsigned int flags, unsigned short int port, signed int (*apc)(void *, struct sockaddr *, unsigned int), void *apc_cls, signed int (*dh)(void *, struct MHD_Connection *, const char *, const char *, const char *, const char *, unsigned long int *, void **), void *dh_cls, void **ap);
// MHD_start_daemon_va::apc_object
//
signed int apc_object(void *, struct sockaddr *, unsigned int);
// MHD_start_daemon_va::dh_object
//
signed int dh_object(void *, struct MHD_Connection *, const char *, const char *, const char *, const char *, unsigned long int *, void **);
// MHD_stop_daemon
// file ../../src/include/microhttpd.h line 1585
extern void MHD_stop_daemon(struct MHD_Daemon *daemon);
// MHD_suspend_connection
// file daemon.c line 1678
extern void MHD_suspend_connection(struct MHD_Connection *connection);
// MHD_tls_connection_handle_idle
// file connection_https.c line 133
static signed int MHD_tls_connection_handle_idle(struct MHD_Connection *connection);
// MHD_tls_connection_handle_read
// file connection_https.c line 97
static signed int MHD_tls_connection_handle_read(struct MHD_Connection *connection);
// MHD_tls_connection_handle_write
// file connection_https.c line 114
static signed int MHD_tls_connection_handle_write(struct MHD_Connection *connection);
// MHD_unescape_plus
// file internal.h line 1447
void MHD_unescape_plus(char *arg);
// _GNUC_deinit_helper_MHD_fini
// file daemon.c line 4910
void _GNUC_deinit_helper_MHD_fini(void);
// _GNUC_init_helper_MHD_init
// file daemon.c line 4910
void _GNUC_init_helper_MHD_init(void);
// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// accept4
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 251
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// add_response_entry
// file response.c line 54
static signed int add_response_entry(struct MHD_Response *response, enum MHD_ValueKind kind, const char *header, const char *content);
// add_to_fd_set
// file daemon.c line 629
static signed int add_to_fd_set(signed int fd, struct anonymous_3 *set, signed int *max_fd, unsigned int fd_setsize);
// ahc_echo
// file digest_auth_example.c line 36
static signed int ahc_echo(void *cls, struct MHD_Connection *connection, const char *url, const char *method, const char *version, const char *upload_data, unsigned long int *upload_data_size, void **ptr);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// build_header_response
// file connection.c line 642
static signed int build_header_response(struct MHD_Connection *connection);
// calculate_nonce
// file digestauth.c line 404
static void calculate_nonce(unsigned int nonce_time, const char *method, const char *rnd, unsigned long int rnd_size, const char *uri, const char *realm, char *nonce);
// call_connection_handler
// file connection.c line 1444
static void call_connection_handler(struct MHD_Connection *connection);
// check_argument_match
// file digestauth.c line 486
static signed int check_argument_match(struct MHD_Connection *connection, const char *args);
// check_nonce_nc
// file digestauth.c line 308
static signed int check_nonce_nc(struct MHD_Connection *connection, const char *nonce, unsigned long int nc);
// check_write_done
// file connection.c line 1748
static signed int check_write_done(struct MHD_Connection *connection, enum MHD_CONNECTION_STATE next_state);
// cleanup_connection
// file connection.c line 2229
static void cleanup_connection(struct MHD_Connection *connection);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// close_all_connections
// file daemon.c line 4392
static void close_all_connections(struct MHD_Daemon *daemon);
// close_connection
// file daemon.c line 4358
static void close_connection(struct MHD_Connection *pos);
// connection_add_header
// file connection.c line 1178
static signed int connection_add_header(struct MHD_Connection *connection, char *key, char *value, enum MHD_ValueKind kind);
// connection_close_error
// file connection.c line 296
static void connection_close_error(struct MHD_Connection *connection, const char *emsg);
// create_socket
// file daemon.c line 3488
static signed int create_socket(struct MHD_Daemon *daemon, signed int domain, signed int type, signed int protocol);
// create_thread
// file daemon.c line 1197
static signed int create_thread(unsigned long int *thread, struct MHD_Daemon *daemon, void * (*start_routine)(void *), void *arg);
// create_thread::start_routine_object
//
void * start_routine_object(void *);
// cvthex
// file digestauth.c line 75
static void cvthex(const unsigned char *bin, unsigned long int len, char *hex);
// digest_calc_ha1
// file digestauth.c line 106
static void digest_calc_ha1(const char *alg, const char *username, const char *realm, const char *password, const char *nonce, const char *cnonce, char *sessionkey);
// digest_calc_response
// file digestauth.c line 152
static void digest_calc_response(const char *ha1, const char *nonce, const char *noncecount, const char *cnonce, const char *qop, const char *method, const char *uri, const char *hentity, char *response);
// do_read
// file connection.c line 1659
static signed int do_read(struct MHD_Connection *connection);
// do_write
// file connection.c line 1706
static signed int do_write(struct MHD_Connection *connection);
// epoll_create1
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 104
extern signed int epoll_create1(signed int);
// epoll_ctl
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 113
extern signed int epoll_ctl(signed int, signed int, signed int, struct epoll_event *);
// epoll_shutdown
// file daemon.c line 4441
static void epoll_shutdown(struct MHD_Daemon *daemon);
// epoll_wait
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 127
extern signed int epoll_wait(signed int, struct epoll_event *, signed int, signed int);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// file_reader
// file response.c line 319
static signed long int file_reader(void *cls, unsigned long int pos, char *buf, unsigned long int max);
// find_boundary
// file postprocessor.c line 530
static signed int find_boundary(struct MHD_PostProcessor *pp, const char *boundary, unsigned long int blen, unsigned long int *ioffptr, enum PP_State next_state, enum PP_State next_dash_state);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_callback
// file response.c line 369
static void free_callback(void *cls);
// free_unmarked
// file postprocessor.c line 792
static void free_unmarked(struct MHD_PostProcessor *pp);
// gcry_check_version
// file /usr/include/gcrypt.h line 258
const char * gcry_check_version(const char *);
// get_date_string
// file connection.c line 554
static void get_date_string(char *date);
// get_next_header_line
// file connection.c line 1127
static char * get_next_header_line(struct MHD_Connection *connection);
// gmtime_r
// file /usr/include/time.h line 249
extern struct tm * gmtime_r(const signed long int *, struct tm *);
// gnutls_bye
// file /usr/include/gnutls/gnutls.h line 819
signed int gnutls_bye(struct gnutls_session_int *, enum anonymous_10);
// gnutls_certificate_allocate_credentials
// file /usr/include/gnutls/gnutls.h line 1437
signed int gnutls_certificate_allocate_credentials(struct gnutls_certificate_credentials_st **);
// gnutls_certificate_free_credentials
// file /usr/include/gnutls/gnutls.h line 1435
void gnutls_certificate_free_credentials(struct gnutls_certificate_credentials_st *);
// gnutls_certificate_server_set_request
// file /usr/include/gnutls/gnutls.h line 2079
void gnutls_certificate_server_set_request(struct gnutls_session_int *, enum anonymous_12);
// gnutls_certificate_set_dh_params
// file /usr/include/gnutls/gnutls.h line 1466
void gnutls_certificate_set_dh_params(struct gnutls_certificate_credentials_st *, struct gnutls_dh_params_int *);
// gnutls_certificate_set_retrieve_function2
// file /usr/include/gnutls/abstract.h line 513
void gnutls_certificate_set_retrieve_function2(struct gnutls_certificate_credentials_st *, signed int (*)(struct gnutls_session_int *, const struct anonymous_2 *, signed int, const enum anonymous_9 *, signed int, struct gnutls_pcert_st **, unsigned int *, struct gnutls_privkey_st **));
// gnutls_certificate_set_x509_key_mem
// file /usr/include/gnutls/gnutls.h line 1532
signed int gnutls_certificate_set_x509_key_mem(struct gnutls_certificate_credentials_st *, const struct anonymous_2 *, const struct anonymous_2 *, enum anonymous_1);
// gnutls_certificate_set_x509_key_mem2
// file /usr/include/gnutls/gnutls.h line 1537
signed int gnutls_certificate_set_x509_key_mem2(struct gnutls_certificate_credentials_st *, const struct anonymous_2 *, const struct anonymous_2 *, enum anonymous_1, const char *, unsigned int);
// gnutls_certificate_set_x509_trust_mem
// file /usr/include/gnutls/gnutls.h line 1506
signed int gnutls_certificate_set_x509_trust_mem(struct gnutls_certificate_credentials_st *, const struct anonymous_2 *, enum anonymous_1);
// gnutls_cipher_get
// file /usr/include/gnutls/gnutls.h line 852
enum gnutls_cipher_algorithm gnutls_cipher_get(struct gnutls_session_int *);
// gnutls_credentials_set
// file /usr/include/gnutls/gnutls.h line 1367
signed int gnutls_credentials_set(struct gnutls_session_int *, enum anonymous_0, void *);
// gnutls_deinit
// file /usr/include/gnutls/gnutls.h line 816
void gnutls_deinit(struct gnutls_session_int *);
// gnutls_dh_params_deinit
// file /usr/include/gnutls/gnutls.h line 1662
void gnutls_dh_params_deinit(struct gnutls_dh_params_int *);
// gnutls_dh_params_import_pkcs3
// file /usr/include/gnutls/gnutls.h line 1670
signed int gnutls_dh_params_import_pkcs3(struct gnutls_dh_params_int *, const struct anonymous_2 *, enum anonymous_1);
// gnutls_dh_params_init
// file /usr/include/gnutls/gnutls.h line 1661
signed int gnutls_dh_params_init(struct gnutls_dh_params_int **);
// gnutls_global_deinit
// file /usr/include/gnutls/gnutls.h line 1608
void gnutls_global_deinit(void);
// gnutls_global_init
// file /usr/include/gnutls/gnutls.h line 1607
signed int gnutls_global_init(void);
// gnutls_handshake
// file /usr/include/gnutls/gnutls.h line 821
signed int gnutls_handshake(struct gnutls_session_int *);
// gnutls_init
// file /usr/include/gnutls/gnutls.h line 815
signed int gnutls_init(struct gnutls_session_int **, unsigned int);
// gnutls_priority_deinit
// file /usr/include/gnutls/gnutls.h line 1164
void gnutls_priority_deinit(struct gnutls_priority_st *);
// gnutls_priority_init
// file /usr/include/gnutls/gnutls.h line 1162
signed int gnutls_priority_init(struct gnutls_priority_st **, const char *, const char **);
// gnutls_priority_set
// file /usr/include/gnutls/gnutls.h line 1174
signed int gnutls_priority_set(struct gnutls_session_int *, struct gnutls_priority_st *);
// gnutls_protocol_get_version
// file /usr/include/gnutls/gnutls.h line 1211
enum anonymous_8 gnutls_protocol_get_version(struct gnutls_session_int *);
// gnutls_record_check_pending
// file /usr/include/gnutls/gnutls.h line 1032
unsigned long int gnutls_record_check_pending(struct gnutls_session_int *);
// gnutls_record_get_direction
// file /usr/include/gnutls/gnutls.h line 1027
signed int gnutls_record_get_direction(struct gnutls_session_int *);
// gnutls_record_recv
// file /usr/include/gnutls/gnutls.h line 997
signed long int gnutls_record_recv(struct gnutls_session_int *, void *, unsigned long int);
// gnutls_record_send
// file /usr/include/gnutls/gnutls.h line 992
signed long int gnutls_record_send(struct gnutls_session_int *, const void *, unsigned long int);
// gnutls_strerror
// file /usr/include/gnutls/gnutls.h line 939
const char * gnutls_strerror(signed int);
// gnutls_transport_set_ptr
// file /usr/include/gnutls/gnutls.h line 1722
void gnutls_transport_set_ptr(struct gnutls_session_int *, void *);
// gnutls_transport_set_pull_function
// file /usr/include/gnutls/gnutls.h line 1737
void gnutls_transport_set_pull_function(struct gnutls_session_int *, signed long int (*)(void *, void *, unsigned long int));
// gnutls_transport_set_push_function
// file /usr/include/gnutls/gnutls.h line 1735
void gnutls_transport_set_push_function(struct gnutls_session_int *, signed long int (*)(void *, const void *, unsigned long int));
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// internal_add_connection
// file daemon.c line 1278
static signed int internal_add_connection(struct MHD_Daemon *daemon, signed int client_socket, struct sockaddr *addr, unsigned int addrlen, signed int external_add);
// keepalive_possible
// file connection.c line 512
static signed int keepalive_possible(struct MHD_Connection *connection);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// lookup_sub_value
// file digestauth.c line 219
static unsigned long int lookup_sub_value(char *dest, unsigned long int size, const char *data, const char *key);
// lseek64
// file /usr/include/unistd.h line 345
extern signed long int lseek64(signed int, signed long int, signed int);
// make_nonblocking_noninheritable
// file daemon.c line 1839
static void make_nonblocking_noninheritable(struct MHD_Daemon *daemon, signed int sock);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memchr
// file /usr/include/string.h line 96
extern void * memchr(const void *, signed int, unsigned long int);
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
// mhd_panic_object
//
void mhd_panic_object(void *, const char *, unsigned int, const char *);
// mhd_panic_std
// file daemon.c line 132
static void mhd_panic_std(void *cls, const char *file, unsigned int line, const char *reason);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 57
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// need_100_continue
// file connection.c line 242
static signed int need_100_continue(struct MHD_Connection *connection);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// parse_arguments
// file connection.c line 1207
static signed int parse_arguments(enum MHD_ValueKind kind, struct MHD_Connection *connection, char *args);
// parse_connection_headers
// file connection.c line 1889
static void parse_connection_headers(struct MHD_Connection *connection);
// parse_cookie_header
// file connection.c line 1293
static signed int parse_cookie_header(struct MHD_Connection *connection);
// parse_initial_message_line
// file connection.c line 1392
static signed int parse_initial_message_line(struct MHD_Connection *connection, char *line);
// parse_options
// file daemon.c line 3121
static signed int parse_options(struct MHD_Daemon *daemon, struct sockaddr **servaddr, ...);
// parse_options_va
// file daemon.c line 3144
static signed int parse_options_va(struct MHD_Daemon *daemon, struct sockaddr **servaddr, __builtin_va_list ap);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// post_process_multipart
// file postprocessor.c line 828
static signed int post_process_multipart(struct MHD_PostProcessor *pp, const char *post_data, unsigned long int post_data_len);
// post_process_urlencoded
// file postprocessor.c line 342
static signed int post_process_urlencoded(struct MHD_PostProcessor *pp, const char *post_data, unsigned long int post_data_len);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_broken_line
// file connection.c line 1816
static signed int process_broken_line(struct MHD_Connection *connection, char *line, enum MHD_ValueKind kind);
// process_header_line
// file connection.c line 1776
static signed int process_header_line(struct MHD_Connection *connection, char *line);
// process_multipart_headers
// file postprocessor.c line 637
static signed int process_multipart_headers(struct MHD_PostProcessor *pp, unsigned long int *ioffptr, enum PP_State next_state);
// process_request_body
// file connection.c line 1478
static void process_request_body(struct MHD_Connection *connection);
// process_value_to_boundary
// file postprocessor.c line 701
static signed int process_value_to_boundary(struct MHD_PostProcessor *pp, unsigned long int *ioffptr, const char *boundary, unsigned long int blen, enum PP_State next_state, enum PP_State next_dash_state);
// pthread_attr_destroy
// file /usr/include/pthread.h line 292
extern signed int pthread_attr_destroy(union pthread_attr_t *);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setstacksize
// file /usr/include/pthread.h line 377
extern signed int pthread_attr_setstacksize(union pthread_attr_t *, unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_6 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_6 *, const union anonymous_5 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_6 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_6 *);
// pthread_setname_np
// file /usr/include/pthread.h line 453
extern signed int pthread_setname_np(unsigned long int, const char *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// recv_param_adapter
// file daemon.c line 1042
static signed long int recv_param_adapter(struct MHD_Connection *connection, void *other, unsigned long int i);
// recv_tls_adapter
// file daemon.c line 428
static signed long int recv_tls_adapter(struct MHD_Connection *connection, void *other, unsigned long int i);
// resume_suspended_connections
// file daemon.c line 1774
static signed int resume_suspended_connections(struct MHD_Daemon *daemon);
// run_tls_handshake
// file connection_https.c line 47
static signed int run_tls_handshake(struct MHD_Connection *connection);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_3 *, struct anonymous_3 *, struct anonymous_3 *, struct timeval *);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// send_param_adapter
// file daemon.c line 1086
static signed long int send_param_adapter(struct MHD_Connection *connection, const void *other, unsigned long int i);
// send_tls_adapter
// file daemon.c line 473
static signed long int send_tls_adapter(struct MHD_Connection *connection, const void *other, unsigned long int i);
// sendfile64
// file /usr/include/x86_64-linux-gnu/sys/sendfile.h line 45
extern signed long int sendfile64(signed int, signed int, signed long int *, unsigned long int);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// setup_epoll_to_listen
// file daemon.c line 3519
static signed int setup_epoll_to_listen(struct MHD_Daemon *daemon);
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
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
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// tdelete
// file /usr/include/search.h line 138
extern void * tdelete(const void *, void ** restrict , signed int (*)(const void *, const void *));
// test_header
// file digestauth.c line 450
static signed int test_header(struct MHD_Connection *connection, const char *key, const char *value);
// tfind
// file /usr/include/search.h line 134
extern void * tfind(const void *, void * const *, signed int (*)(const void *, const void *));
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// transmit_error_response
// file connection.c line 931
static void transmit_error_response(struct MHD_Connection *connection, unsigned int status_code, const char *message);
// try_get_value
// file postprocessor.c line 584
static void try_get_value(const char *buf, const char *key, char **destination);
// try_grow_read_buffer
// file connection.c line 610
static signed int try_grow_read_buffer(struct MHD_Connection *connection);
// try_match_header
// file postprocessor.c line 499
static signed int try_match_header(const char *prefix, char *line, char **suffix);
// try_ready_chunked_body
// file connection.c line 401
static signed int try_ready_chunked_body(struct MHD_Connection *connection);
// try_ready_normal_body
// file connection.c line 332
static signed int try_ready_normal_body(struct MHD_Connection *connection);
// tsearch
// file /usr/include/search.h line 129
extern void * tsearch(const void *, void **, signed int (*)(const void *, const void *));
// unescape_wrapper
// file daemon.c line 2971
static unsigned long int unescape_wrapper(void *cls, struct MHD_Connection *connection, char *val);
// update_last_activity
// file connection.c line 1968
static void update_last_activity(struct MHD_Connection *connection);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous_2
{
  // data
  unsigned char *data;
  // size
  unsigned int size;
};

struct anonymous_3
{
  // fds_bits
  signed long int fds_bits[16l];
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

union anonymous_5
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

union anonymous_6
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct in6_addr
{
  // __in6_u
  union anonymous __in6_u;
};

union anonymous_7
{
  // ipv4
  struct in_addr ipv4;
  // ipv6
  struct in6_addr ipv6;
};

union anonymous_11
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
};

union anonymous_13
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
} __attribute__ ((__transparent_union__));

struct MD5Context
{
  // state
  unsigned int state[4l];
  // count
  unsigned long int count;
  // buffer
  unsigned char buffer[64l];
};

struct MHD_Connection
{
  // nextE
  struct MHD_Connection *nextE;
  // prevE
  struct MHD_Connection *prevE;
  // next
  struct MHD_Connection *next;
  // prev
  struct MHD_Connection *prev;
  // nextX
  struct MHD_Connection *nextX;
  // prevX
  struct MHD_Connection *prevX;
  // daemon
  struct MHD_Daemon *daemon;
  // headers_received
  struct MHD_HTTP_Header *headers_received;
  // headers_received_tail
  struct MHD_HTTP_Header *headers_received_tail;
  // response
  struct MHD_Response *response;
  // pool
  struct MemoryPool *pool;
  // client_context
  void *client_context;
  // socket_context
  void *socket_context;
  // method
  char *method;
  // url
  char *url;
  // version
  char *version;
  // read_buffer
  char *read_buffer;
  // write_buffer
  char *write_buffer;
  // last
  char *last;
  // colon
  char *colon;
  // addr
  struct sockaddr *addr;
  // pid
  unsigned long int pid;
  // read_buffer_size
  unsigned long int read_buffer_size;
  // read_buffer_offset
  unsigned long int read_buffer_offset;
  // write_buffer_size
  unsigned long int write_buffer_size;
  // write_buffer_send_offset
  unsigned long int write_buffer_send_offset;
  // write_buffer_append_offset
  unsigned long int write_buffer_append_offset;
  // remaining_upload_size
  unsigned long int remaining_upload_size;
  // response_write_position
  unsigned long int response_write_position;
  // continue_message_write_offset
  unsigned long int continue_message_write_offset;
  // addr_len
  unsigned int addr_len;
  // last_activity
  signed long int last_activity;
  // connection_timeout
  unsigned int connection_timeout;
  // client_aware
  signed int client_aware;
  // socket_fd
  signed int socket_fd;
  // read_closed
  signed int read_closed;
  // thread_joined
  signed int thread_joined;
  // in_idle
  signed int in_idle;
  // epoll_state
  enum MHD_EpollState epoll_state;
  // state
  enum MHD_CONNECTION_STATE state;
  // event_loop_info
  enum MHD_ConnectionEventLoopInfo event_loop_info;
  // responseCode
  unsigned int responseCode;
  // response_unready
  signed int response_unready;
  // have_chunked_upload
  signed int have_chunked_upload;
  // current_chunk_size
  unsigned long int current_chunk_size;
  // current_chunk_offset
  unsigned long int current_chunk_offset;
  // read_handler
  signed int (*read_handler)(struct MHD_Connection *);
  // write_handler
  signed int (*write_handler)(struct MHD_Connection *);
  // idle_handler
  signed int (*idle_handler)(struct MHD_Connection *);
  // recv_cls
  signed long int (*recv_cls)(struct MHD_Connection *, void *, unsigned long int);
  // send_cls
  signed long int (*send_cls)(struct MHD_Connection *, const void *, unsigned long int);
  // tls_session
  struct gnutls_session_int *tls_session;
  // protocol
  signed int protocol;
  // cipher
  signed int cipher;
  // tls_read_ready
  signed int tls_read_ready;
  // suspended
  signed int suspended;
  // resuming
  signed int resuming;
};

union MHD_ConnectionInfo
{
  // cipher_algorithm
  signed int cipher_algorithm;
  // protocol
  signed int protocol;
  // connect_fd
  signed int connect_fd;
  // tls_session
  void *tls_session;
  // client_cert
  void *client_cert;
  // client_addr
  struct sockaddr *client_addr;
  // daemon
  struct MHD_Daemon *daemon;
  // socket_context
  void **socket_context;
};

struct MHD_Daemon
{
  // default_handler
  signed int (*default_handler)(void *, struct MHD_Connection *, const char *, const char *, const char *, const char *, unsigned long int *, void **);
  // default_handler_cls
  void *default_handler_cls;
  // connections_head
  struct MHD_Connection *connections_head;
  // connections_tail
  struct MHD_Connection *connections_tail;
  // suspended_connections_head
  struct MHD_Connection *suspended_connections_head;
  // suspended_connections_tail
  struct MHD_Connection *suspended_connections_tail;
  // cleanup_head
  struct MHD_Connection *cleanup_head;
  // cleanup_tail
  struct MHD_Connection *cleanup_tail;
  // eready_head
  struct MHD_Connection *eready_head;
  // eready_tail
  struct MHD_Connection *eready_tail;
  // normal_timeout_head
  struct MHD_Connection *normal_timeout_head;
  // normal_timeout_tail
  struct MHD_Connection *normal_timeout_tail;
  // manual_timeout_head
  struct MHD_Connection *manual_timeout_head;
  // manual_timeout_tail
  struct MHD_Connection *manual_timeout_tail;
  // apc
  signed int (*apc)(void *, struct sockaddr *, unsigned int);
  // apc_cls
  void *apc_cls;
  // notify_completed
  void (*notify_completed)(void *, struct MHD_Connection *, void **, enum MHD_RequestTerminationCode);
  // notify_completed_cls
  void *notify_completed_cls;
  // notify_connection
  void (*notify_connection)(void *, struct MHD_Connection *, void **, enum MHD_ConnectionNotificationCode);
  // notify_connection_cls
  void *notify_connection_cls;
  // uri_log_callback
  void * (*uri_log_callback)(void *, const char *, struct MHD_Connection *);
  // uri_log_callback_cls
  void *uri_log_callback_cls;
  // unescape_callback
  unsigned long int (*unescape_callback)(void *, struct MHD_Connection *, char *);
  // unescape_callback_cls
  void *unescape_callback_cls;
  // custom_error_log
  void (*custom_error_log)(void *, const char *, void **);
  // custom_error_log_cls
  void *custom_error_log_cls;
  // master
  struct MHD_Daemon *master;
  // worker_pool
  struct MHD_Daemon *worker_pool;
  // per_ip_connection_count
  void *per_ip_connection_count;
  // pool_size
  unsigned long int pool_size;
  // pool_increment
  unsigned long int pool_increment;
  // thread_stack_size
  unsigned long int thread_stack_size;
  // worker_pool_size
  unsigned int worker_pool_size;
  // pid
  unsigned long int pid;
  // per_ip_connection_mutex
  union anonymous_6 per_ip_connection_mutex;
  // cleanup_connection_mutex
  union anonymous_6 cleanup_connection_mutex;
  // socket_fd
  signed int socket_fd;
  // listening_address_reuse
  signed int listening_address_reuse;
  // epoll_fd
  signed int epoll_fd;
  // listen_socket_in_epoll
  signed int listen_socket_in_epoll;
  // wpipe
  signed int wpipe[2l];
  // shutdown
  signed int shutdown;
  // resuming
  signed int resuming;
  // connections
  unsigned int connections;
  // connection_limit
  unsigned int connection_limit;
  // connection_timeout
  unsigned int connection_timeout;
  // per_ip_connection_limit
  unsigned int per_ip_connection_limit;
  // options
  enum MHD_FLAG options;
  // port
  unsigned short int port;
  // priority_cache
  struct gnutls_priority_st *priority_cache;
  // cred_type
  enum anonymous_0 cred_type;
  // x509_cred
  struct gnutls_certificate_credentials_st *x509_cred;
  // dh_params
  struct gnutls_dh_params_int *dh_params;
  // cert_callback
  signed int (*cert_callback)(struct gnutls_session_int *, const struct anonymous_2 *, signed int, const enum anonymous_9 *, signed int, struct gnutls_pcert_st **, unsigned int *, struct gnutls_privkey_st **);
  // https_mem_key
  const char *https_mem_key;
  // https_mem_cert
  const char *https_mem_cert;
  // https_key_password
  const char *https_key_password;
  // https_mem_trust
  const char *https_mem_trust;
  // https_mem_dhparams
  struct gnutls_dh_params_int *https_mem_dhparams;
  // have_dhparams
  signed int have_dhparams;
  // num_tls_read_ready
  unsigned int num_tls_read_ready;
  // digest_auth_random
  const char *digest_auth_random;
  // nnc
  struct MHD_NonceNc *nnc;
  // nnc_lock
  union anonymous_6 nnc_lock;
  // digest_auth_rand_size
  unsigned long int digest_auth_rand_size;
  // nonce_nc_size
  unsigned int nonce_nc_size;
  // fastopen_queue_size
  unsigned int fastopen_queue_size;
};

union MHD_DaemonInfo
{
  // key_size
  unsigned long int key_size;
  // mac_key_size
  unsigned long int mac_key_size;
  // listen_fd
  signed int listen_fd;
  // num_connections
  unsigned int num_connections;
};

struct MHD_HTTP_Header
{
  // next
  struct MHD_HTTP_Header *next;
  // header
  char *header;
  // value
  char *value;
  // kind
  enum MHD_ValueKind kind;
};

struct MHD_IPCount
{
  // family
  signed int family;
  // addr
  union anonymous_7 addr;
  // count
  unsigned int count;
};

struct MHD_NonceNc
{
  // nc
  unsigned long int nc;
  // nonce
  char nonce[129l];
};

struct MHD_OptionItem
{
  // option
  enum MHD_OPTION option;
  // value
  signed long int value;
  // ptr_value
  void *ptr_value;
};

struct MHD_PostProcessor
{
  // connection
  struct MHD_Connection *connection;
  // ikvi
  signed int (*ikvi)(void *, enum MHD_ValueKind, const char *, const char *, const char *, const char *, const char *, unsigned long int, unsigned long int);
  // cls
  void *cls;
  // encoding
  const char *encoding;
  // boundary
  const char *boundary;
  // nested_boundary
  char *nested_boundary;
  // content_name
  char *content_name;
  // content_type
  char *content_type;
  // content_filename
  char *content_filename;
  // content_transfer_encoding
  char *content_transfer_encoding;
  // xbuf
  char xbuf[8l];
  // buffer_size
  unsigned long int buffer_size;
  // buffer_pos
  unsigned long int buffer_pos;
  // xbuf_pos
  unsigned long int xbuf_pos;
  // value_offset
  unsigned long int value_offset;
  // blen
  unsigned long int blen;
  // nlen
  unsigned long int nlen;
  // must_ikvi
  signed int must_ikvi;
  // state
  enum PP_State state;
  // skip_rn
  enum RN_State skip_rn;
  // dash_state
  enum PP_State dash_state;
  // have
  enum NE_State have;
};

struct MHD_Reason_Block
{
  // max
  unsigned int max;
  // data
  const char * const *data;
};

struct MHD_Response
{
  // first_header
  struct MHD_HTTP_Header *first_header;
  // data
  char *data;
  // crc_cls
  void *crc_cls;
  // crc
  signed long int (*crc)(void *, unsigned long int, char *, unsigned long int);
  // crfc
  void (*crfc)(void *);
  // mutex
  union anonymous_6 mutex;
  // total_size
  unsigned long int total_size;
  // data_start
  unsigned long int data_start;
  // fd_off
  unsigned long int fd_off;
  // data_size
  unsigned long int data_size;
  // data_buffer_size
  unsigned long int data_buffer_size;
  // reference_count
  unsigned int reference_count;
  // fd
  signed int fd;
  // flags
  enum MHD_ResponseFlags flags;
};

struct MemoryPool
{
  // memory
  char *memory;
  // size
  unsigned long int size;
  // pos
  unsigned long int pos;
  // end
  unsigned long int end;
  // is_mmap
  signed int is_mmap;
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

union epoll_data
{
  // ptr
  void *ptr;
  // fd
  signed int fd;
  // u32
  unsigned int u32;
  // u64
  unsigned long int u64;
};

struct epoll_event
{
  // events
  unsigned int events;
  // data
  union epoll_data data;
} __attribute__ ((__packed__));

struct gnutls_pcert_st
{
  // pubkey
  struct gnutls_pubkey_st *pubkey;
  // cert
  struct anonymous_2 cert;
  // type
  enum anonymous_4 type;
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


// PADDING
// file md5.c line 39
static unsigned char PADDING[64l] = { (unsigned char)0x80, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 };
// base64_digits
// file base64.c line 14
static const char base64_digits[255l] = { (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)62, (const char)0, (const char)0, (const char)0, (const char)63, (const char)52, (const char)53, (const char)54, (const char)55, (const char)56, (const char)57, (const char)58, (const char)59, (const char)60, (const char)61, (const char)0, (const char)0, (const char)0, (const char)-1, (const char)0, (const char)0, (const char)0, (const char)0, (const char)1, (const char)2, (const char)3, (const char)4, (const char)5, (const char)6, (const char)7, (const char)8, (const char)9, (const char)10, (const char)11, (const char)12, (const char)13, (const char)14, (const char)15, (const char)16, (const char)17, (const char)18, (const char)19, (const char)20, (const char)21, (const char)22, (const char)23, (const char)24, (const char)25, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)26, (const char)27, (const char)28, (const char)29, (const char)30, (const char)31, (const char)32, (const char)33, (const char)34, (const char)35, (const char)36, (const char)37, (const char)38, (const char)39, (const char)40, (const char)41, (const char)42, (const char)43, (const char)44, (const char)45, (const char)46, (const char)47, (const char)48, (const char)49, (const char)50, (const char)51, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0 };
// five_hundred
// file reason_phrase.c line 118
static const char * const five_hundred[11l] = { "Internal Server Error", "Not Implemented", "Bad Gateway", "Service Unavailable", "Gateway Time-out", "HTTP Version not supported", "Variant Also Negotiates", "Insufficient Storage", "Unknown", "Bandwidth Limit Exceeded", "Not Extended" };
// four_hundred
// file reason_phrase.c line 63
static const char * const four_hundred[52l] = { "Bad Request", "Unauthorized", "Payment Required", "Forbidden", "Not Found", "Method Not Allowed", "Not Acceptable", "Proxy Authentication Required", "Request Time-out", "Conflict", "Gone", "Length Required", "Precondition Failed", "Request Entity Too Large", "Request-URI Too Large", "Unsupported Media Type", "Requested Range Not Satisfiable", "Expectation Failed", "Unknown", "Unknown", "Unknown", "Unknown", "Unprocessable Entity", "Locked", "Failed Dependency", "Unordered Collection", "Upgrade Required", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "Unknown", "No Response", "Unknown", "Unknown", "Unknown", "Unknown", "Retry With", "Blocked by Windows Parental Controls", "Unavailable For Legal Reasons" };
// invalid_hundred
// file reason_phrase.c line 33
static const char *invalid_hundred[1l] = { (const char *)(void *)0 };
// mhd_panic
// file daemon.c line 148
void (*mhd_panic)(void *, const char *, unsigned int, const char *);
// mhd_panic_cls
// file daemon.c line 153
void *mhd_panic_cls;
// mono_clock_id
// file mhd_mono_clock.c line 46
static signed int mono_clock_id = 0;
// mono_clock_start
// file mhd_mono_clock.c line 50
static signed long int mono_clock_start;
// one_hundred
// file reason_phrase.c line 35
static const char * const one_hundred[3l] = { "Continue", "Switching Protocols", "Processing" };
// reasons
// file reason_phrase.c line 141
static struct MHD_Reason_Block reasons[6l];
// three_hundred
// file reason_phrase.c line 52
static const char * const three_hundred[8l] = { "Multiple Choices", "Moved Permanently", "Moved Temporarily", "See Other", "Not Modified", "Use Proxy", "Switch Proxy", "Temporary Redirect" };
// two_hundred
// file reason_phrase.c line 41
static const char * const two_hundred[8l] = { "OK", "Created", "Accepted", "Non-Authoritative Information", "No Content", "Reset Content", "Partial Content", "Multi Status" };
// reasons
// file reason_phrase.c line 141
static struct MHD_Reason_Block reasons[6l] = { { .max=(unsigned int)(sizeof(const char *[1l]) /*8ul*/  / sizeof(char *) /*8ul*/ ), .data=invalid_hundred },
    { .max=(unsigned int)(sizeof(const char * const [3l]) /*24ul*/  / sizeof(char *) /*8ul*/ ), .data=one_hundred },
    { .max=(unsigned int)(sizeof(const char * const [8l]) /*64ul*/  / sizeof(char *) /*8ul*/ ), .data=two_hundred },
    { .max=(unsigned int)(sizeof(const char * const [8l]) /*64ul*/  / sizeof(char *) /*8ul*/ ), .data=three_hundred },
    { .max=(unsigned int)(sizeof(const char * const [52l]) /*416ul*/  / sizeof(char *) /*8ul*/ ), .data=four_hundred },
    { .max=(unsigned int)(sizeof(const char * const [11l]) /*88ul*/  / sizeof(char *) /*8ul*/ ), .data=five_hundred } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// sys_clock_start
// file mhd_mono_clock.c line 51
static signed long int sys_clock_start;

// BASE64Decode
// file base64.h line 15
char * BASE64Decode(const char *src)
{
  unsigned long int in_len;
  in_len=strlen(src);
  char *dest;
  char *result;
  const char *tmp_post_2;
  const char *tmp_post_3;
  const char *tmp_post_4;
  const char *tmp_post_5;
  char *tmp_post_6;
  char *tmp_post_7;
  char *tmp_post_8;
  if(!(in_len % 4ul == 0ul))
    return (char *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((in_len / (unsigned long int)4) * (unsigned long int)3 + (unsigned long int)1);
    dest = (char *)return_value_malloc_1;
    result = dest;
    if(result == ((char *)NULL))
      return (char *)(void *)0;

    else
    {
      while(!(*src == 0))
      {
        char a;
        tmp_post_2 = src;
        src = src + 1l;
        a = base64_digits[(signed long int)(unsigned char)*tmp_post_2];
        char b;
        tmp_post_3 = src;
        src = src + 1l;
        b = base64_digits[(signed long int)(unsigned char)*tmp_post_3];
        char c;
        tmp_post_4 = src;
        src = src + 1l;
        c = base64_digits[(signed long int)(unsigned char)*tmp_post_4];
        char d;
        tmp_post_5 = src;
        src = src + 1l;
        d = base64_digits[(signed long int)(unsigned char)*tmp_post_5];
        tmp_post_6 = dest;
        dest = dest + 1l;
        *tmp_post_6 = (char)((signed int)a << 2 | ((signed int)b & 0x30) >> 4);
        if(c == -1)
          break;

        tmp_post_7 = dest;
        dest = dest + 1l;
        *tmp_post_7 = (char)(((signed int)b & 0x0f) << 4 | ((signed int)c & 0x3c) >> 2);
        if(d == -1)
          break;

        tmp_post_8 = dest;
        dest = dest + 1l;
        *tmp_post_8 = (char)(((signed int)c & 0x03) << 6 | (signed int)d);
      }
      *dest = (char)0;
      return result;
    }
  }
}

// MD5Final
// file md5.h line 55
void MD5Final(unsigned char *digest, struct MD5Context *ctx)
{
  signed int i;
  if(!(ctx == ((struct MD5Context *)NULL)) && !(digest == ((unsigned char *)NULL)))
  {
    MD5Pad(ctx);
    i = 0;
    for( ; !(i >= 4); i = i + 1)
      do
      {
        (digest + (signed long int)(i * 4))[(signed long int)3] = (unsigned char)(ctx->state[(signed long int)i] >> 24);
        (digest + (signed long int)(i * 4))[(signed long int)2] = (unsigned char)(ctx->state[(signed long int)i] >> 16);
        (digest + (signed long int)(i * 4))[(signed long int)1] = (unsigned char)(ctx->state[(signed long int)i] >> 8);
        (digest + (signed long int)(i * 4))[(signed long int)0] = (unsigned char)ctx->state[(signed long int)i];
      }
      while((_Bool)0);
    memset((void *)ctx, 0, sizeof(struct MD5Context) /*88ul*/ );
  }

}

// MD5Init
// file md5.h line 38
void MD5Init(struct MD5Context *ctx)
{
  if(!(ctx == ((struct MD5Context *)NULL)))
  {
    ctx->count = (unsigned long int)0;
    ctx->state[(signed long int)0] = (unsigned int)0x67452301;
    ctx->state[(signed long int)1] = 0xefcdab89;
    ctx->state[(signed long int)2] = 0x98badcfe;
    ctx->state[(signed long int)3] = (unsigned int)0x10325476;
  }

}

// MD5Pad
// file md5.c line 111
void MD5Pad(struct MD5Context *ctx)
{
  unsigned char count[8l];
  unsigned long int padlen;
  if(!(ctx == ((struct MD5Context *)NULL)))
  {
    do
    {
      count[(signed long int)7] = (unsigned char)(ctx->count >> 56);
      count[(signed long int)6] = (unsigned char)(ctx->count >> 48);
      count[(signed long int)5] = (unsigned char)(ctx->count >> 40);
      count[(signed long int)4] = (unsigned char)(ctx->count >> 32);
      count[(signed long int)3] = (unsigned char)(ctx->count >> 24);
      count[(signed long int)2] = (unsigned char)(ctx->count >> 16);
      count[(signed long int)1] = (unsigned char)(ctx->count >> 8);
      count[(signed long int)0] = (unsigned char)ctx->count;
    }
    while((_Bool)0);
    padlen = (unsigned long int)64 - (ctx->count >> 3 & (unsigned long int)(64 - 1));
    if(!(padlen >= 9ul))
      padlen = padlen + (unsigned long int)64;

    MD5Update(ctx, PADDING, padlen - (unsigned long int)8);
    MD5Update(ctx, count, (unsigned long int)8);
  }

}

// MD5Transform
// file md5.c line 168
void MD5Transform(unsigned int *state, const unsigned char *block)
{
  unsigned int a;
  unsigned int b;
  unsigned int c;
  unsigned int d;
  unsigned int in[16l];
  memcpy((void *)in, (const void *)block, sizeof(unsigned int [16l]) /*64ul*/ );
  a = state[(signed long int)0];
  b = state[(signed long int)1];
  c = state[(signed long int)2];
  d = state[(signed long int)3];
  a = a + (d ^ b & (c ^ d)) + in[(signed long int)0] + 0xd76aa478;
  a = a << 7 | a >> 32 - 7;
  a = a + b;
  d = d + (c ^ a & (b ^ c)) + in[(signed long int)1] + 0xe8c7b756;
  d = d << 12 | d >> 32 - 12;
  d = d + a;
  c = c + (b ^ d & (a ^ b)) + in[(signed long int)2] + (unsigned int)0x242070db;
  c = c << 17 | c >> 32 - 17;
  c = c + d;
  b = b + (a ^ c & (d ^ a)) + in[(signed long int)3] + 0xc1bdceee;
  b = b << 22 | b >> 32 - 22;
  b = b + c;
  a = a + (d ^ b & (c ^ d)) + in[(signed long int)4] + 0xf57c0faf;
  a = a << 7 | a >> 32 - 7;
  a = a + b;
  d = d + (c ^ a & (b ^ c)) + in[(signed long int)5] + (unsigned int)0x4787c62a;
  d = d << 12 | d >> 32 - 12;
  d = d + a;
  c = c + (b ^ d & (a ^ b)) + in[(signed long int)6] + 0xa8304613;
  c = c << 17 | c >> 32 - 17;
  c = c + d;
  b = b + (a ^ c & (d ^ a)) + in[(signed long int)7] + 0xfd469501;
  b = b << 22 | b >> 32 - 22;
  b = b + c;
  a = a + (d ^ b & (c ^ d)) + in[(signed long int)8] + (unsigned int)0x698098d8;
  a = a << 7 | a >> 32 - 7;
  a = a + b;
  d = d + (c ^ a & (b ^ c)) + in[(signed long int)9] + 0x8b44f7af;
  d = d << 12 | d >> 32 - 12;
  d = d + a;
  c = c + (b ^ d & (a ^ b)) + in[(signed long int)10] + 0xffff5bb1;
  c = c << 17 | c >> 32 - 17;
  c = c + d;
  b = b + (a ^ c & (d ^ a)) + in[(signed long int)11] + 0x895cd7be;
  b = b << 22 | b >> 32 - 22;
  b = b + c;
  a = a + (d ^ b & (c ^ d)) + in[(signed long int)12] + (unsigned int)0x6b901122;
  a = a << 7 | a >> 32 - 7;
  a = a + b;
  d = d + (c ^ a & (b ^ c)) + in[(signed long int)13] + 0xfd987193;
  d = d << 12 | d >> 32 - 12;
  d = d + a;
  c = c + (b ^ d & (a ^ b)) + in[(signed long int)14] + 0xa679438e;
  c = c << 17 | c >> 32 - 17;
  c = c + d;
  b = b + (a ^ c & (d ^ a)) + in[(signed long int)15] + (unsigned int)0x49b40821;
  b = b << 22 | b >> 32 - 22;
  b = b + c;
  a = a + (c ^ d & (b ^ c)) + in[(signed long int)1] + 0xf61e2562;
  a = a << 5 | a >> 32 - 5;
  a = a + b;
  d = d + (b ^ c & (a ^ b)) + in[(signed long int)6] + 0xc040b340;
  d = d << 9 | d >> 32 - 9;
  d = d + a;
  c = c + (a ^ b & (d ^ a)) + in[(signed long int)11] + (unsigned int)0x265e5a51;
  c = c << 14 | c >> 32 - 14;
  c = c + d;
  b = b + (d ^ a & (c ^ d)) + in[(signed long int)0] + 0xe9b6c7aa;
  b = b << 20 | b >> 32 - 20;
  b = b + c;
  a = a + (c ^ d & (b ^ c)) + in[(signed long int)5] + 0xd62f105d;
  a = a << 5 | a >> 32 - 5;
  a = a + b;
  d = d + (b ^ c & (a ^ b)) + in[(signed long int)10] + (unsigned int)0x02441453;
  d = d << 9 | d >> 32 - 9;
  d = d + a;
  c = c + (a ^ b & (d ^ a)) + in[(signed long int)15] + 0xd8a1e681;
  c = c << 14 | c >> 32 - 14;
  c = c + d;
  b = b + (d ^ a & (c ^ d)) + in[(signed long int)4] + 0xe7d3fbc8;
  b = b << 20 | b >> 32 - 20;
  b = b + c;
  a = a + (c ^ d & (b ^ c)) + in[(signed long int)9] + (unsigned int)0x21e1cde6;
  a = a << 5 | a >> 32 - 5;
  a = a + b;
  d = d + (b ^ c & (a ^ b)) + in[(signed long int)14] + 0xc33707d6;
  d = d << 9 | d >> 32 - 9;
  d = d + a;
  c = c + (a ^ b & (d ^ a)) + in[(signed long int)3] + 0xf4d50d87;
  c = c << 14 | c >> 32 - 14;
  c = c + d;
  b = b + (d ^ a & (c ^ d)) + in[(signed long int)8] + (unsigned int)0x455a14ed;
  b = b << 20 | b >> 32 - 20;
  b = b + c;
  a = a + (c ^ d & (b ^ c)) + in[(signed long int)13] + 0xa9e3e905;
  a = a << 5 | a >> 32 - 5;
  a = a + b;
  d = d + (b ^ c & (a ^ b)) + in[(signed long int)2] + 0xfcefa3f8;
  d = d << 9 | d >> 32 - 9;
  d = d + a;
  c = c + (a ^ b & (d ^ a)) + in[(signed long int)7] + (unsigned int)0x676f02d9;
  c = c << 14 | c >> 32 - 14;
  c = c + d;
  b = b + (d ^ a & (c ^ d)) + in[(signed long int)12] + 0x8d2a4c8a;
  b = b << 20 | b >> 32 - 20;
  b = b + c;
  a = a + (b ^ c ^ d) + in[(signed long int)5] + 0xfffa3942;
  a = a << 4 | a >> 32 - 4;
  a = a + b;
  d = d + (a ^ b ^ c) + in[(signed long int)8] + 0x8771f681;
  d = d << 11 | d >> 32 - 11;
  d = d + a;
  c = c + (d ^ a ^ b) + in[(signed long int)11] + (unsigned int)0x6d9d6122;
  c = c << 16 | c >> 32 - 16;
  c = c + d;
  b = b + (c ^ d ^ a) + in[(signed long int)14] + 0xfde5380c;
  b = b << 23 | b >> 32 - 23;
  b = b + c;
  a = a + (b ^ c ^ d) + in[(signed long int)1] + 0xa4beea44;
  a = a << 4 | a >> 32 - 4;
  a = a + b;
  d = d + (a ^ b ^ c) + in[(signed long int)4] + (unsigned int)0x4bdecfa9;
  d = d << 11 | d >> 32 - 11;
  d = d + a;
  c = c + (d ^ a ^ b) + in[(signed long int)7] + 0xf6bb4b60;
  c = c << 16 | c >> 32 - 16;
  c = c + d;
  b = b + (c ^ d ^ a) + in[(signed long int)10] + 0xbebfbc70;
  b = b << 23 | b >> 32 - 23;
  b = b + c;
  a = a + (b ^ c ^ d) + in[(signed long int)13] + (unsigned int)0x289b7ec6;
  a = a << 4 | a >> 32 - 4;
  a = a + b;
  d = d + (a ^ b ^ c) + in[(signed long int)0] + 0xeaa127fa;
  d = d << 11 | d >> 32 - 11;
  d = d + a;
  c = c + (d ^ a ^ b) + in[(signed long int)3] + 0xd4ef3085;
  c = c << 16 | c >> 32 - 16;
  c = c + d;
  b = b + (c ^ d ^ a) + in[(signed long int)6] + (unsigned int)0x04881d05;
  b = b << 23 | b >> 32 - 23;
  b = b + c;
  a = a + (b ^ c ^ d) + in[(signed long int)9] + 0xd9d4d039;
  a = a << 4 | a >> 32 - 4;
  a = a + b;
  d = d + (a ^ b ^ c) + in[(signed long int)12] + 0xe6db99e5;
  d = d << 11 | d >> 32 - 11;
  d = d + a;
  c = c + (d ^ a ^ b) + in[(signed long int)15] + (unsigned int)0x1fa27cf8;
  c = c << 16 | c >> 32 - 16;
  c = c + d;
  b = b + (c ^ d ^ a) + in[(signed long int)2] + 0xc4ac5665;
  b = b << 23 | b >> 32 - 23;
  b = b + c;
  a = a + (c ^ (b | ~d)) + in[(signed long int)0] + 0xf4292244;
  a = a << 6 | a >> 32 - 6;
  a = a + b;
  d = d + (b ^ (a | ~c)) + in[(signed long int)7] + (unsigned int)0x432aff97;
  d = d << 10 | d >> 32 - 10;
  d = d + a;
  c = c + (a ^ (d | ~b)) + in[(signed long int)14] + 0xab9423a7;
  c = c << 15 | c >> 32 - 15;
  c = c + d;
  b = b + (d ^ (c | ~a)) + in[(signed long int)5] + 0xfc93a039;
  b = b << 21 | b >> 32 - 21;
  b = b + c;
  a = a + (c ^ (b | ~d)) + in[(signed long int)12] + (unsigned int)0x655b59c3;
  a = a << 6 | a >> 32 - 6;
  a = a + b;
  d = d + (b ^ (a | ~c)) + in[(signed long int)3] + 0x8f0ccc92;
  d = d << 10 | d >> 32 - 10;
  d = d + a;
  c = c + (a ^ (d | ~b)) + in[(signed long int)10] + 0xffeff47d;
  c = c << 15 | c >> 32 - 15;
  c = c + d;
  b = b + (d ^ (c | ~a)) + in[(signed long int)1] + 0x85845dd1;
  b = b << 21 | b >> 32 - 21;
  b = b + c;
  a = a + (c ^ (b | ~d)) + in[(signed long int)8] + (unsigned int)0x6fa87e4f;
  a = a << 6 | a >> 32 - 6;
  a = a + b;
  d = d + (b ^ (a | ~c)) + in[(signed long int)15] + 0xfe2ce6e0;
  d = d << 10 | d >> 32 - 10;
  d = d + a;
  c = c + (a ^ (d | ~b)) + in[(signed long int)6] + 0xa3014314;
  c = c << 15 | c >> 32 - 15;
  c = c + d;
  b = b + (d ^ (c | ~a)) + in[(signed long int)13] + (unsigned int)0x4e0811a1;
  b = b << 21 | b >> 32 - 21;
  b = b + c;
  a = a + (c ^ (b | ~d)) + in[(signed long int)4] + 0xf7537e82;
  a = a << 6 | a >> 32 - 6;
  a = a + b;
  d = d + (b ^ (a | ~c)) + in[(signed long int)11] + 0xbd3af235;
  d = d << 10 | d >> 32 - 10;
  d = d + a;
  c = c + (a ^ (d | ~b)) + in[(signed long int)2] + (unsigned int)0x2ad7d2bb;
  c = c << 15 | c >> 32 - 15;
  c = c + d;
  b = b + (d ^ (c | ~a)) + in[(signed long int)9] + 0xeb86d391;
  b = b << 21 | b >> 32 - 21;
  b = b + c;
  state[(signed long int)0] = state[(signed long int)0] + a;
  state[(signed long int)1] = state[(signed long int)1] + b;
  state[(signed long int)2] = state[(signed long int)2] + c;
  state[(signed long int)3] = state[(signed long int)3] + d;
}

// MD5Update
// file md5.h line 44
void MD5Update(struct MD5Context *ctx, const unsigned char *input, unsigned long int len)
{
  unsigned long int have;
  unsigned long int need;
  if(!(ctx == ((struct MD5Context *)NULL)) && !(input == ((const unsigned char *)NULL)))
  {
    have = (unsigned long int)(ctx->count >> 3 & (unsigned long int)(64 - 1));
    need = (unsigned long int)64 - have;
    ctx->count = ctx->count + ((unsigned long int)len << 3);
    if(len >= need)
    {
      if(!(have == 0ul))
      {
        memcpy((void *)(ctx->buffer + (signed long int)have), (const void *)input, need);
        MD5Transform(ctx->state, ctx->buffer);
        input = input + (signed long int)need;
        len = len - need;
        have = (unsigned long int)0;
      }

      for( ; len >= 64ul; len = len - (unsigned long int)64)
      {
        MD5Transform(ctx->state, input);
        input = input + (signed long int)64;
      }
    }

    if(!(len == 0ul))
      memcpy((void *)(ctx->buffer + (signed long int)have), (const void *)input, len);

  }

}

// MHD_DLOG
// file internal.h line 208
void MHD_DLOG(struct MHD_Daemon *daemon, const char *format, ...)
{
  void **va;
  if(!((MHD_USE_DEBUG & (signed int)daemon->options) == 0))
  {
    va = (void **)&format;
    daemon->custom_error_log(daemon->custom_error_log_cls, format, va);
    va = ((void **)NULL);
  }

}

// MHD_TLS_init
// file daemon.c line 597
static signed int MHD_TLS_init(struct MHD_Daemon *daemon)
{
  signed int return_value_gnutls_certificate_allocate_credentials_1;
  signed int return_value_MHD_init_daemon_certificate_2;
  if((signed int)daemon->cred_type == GNUTLS_CRD_CERTIFICATE)
  {
    return_value_gnutls_certificate_allocate_credentials_1=gnutls_certificate_allocate_credentials(&daemon->x509_cred);
    if(!(return_value_gnutls_certificate_allocate_credentials_1 == 0))
      return -25;

    return_value_MHD_init_daemon_certificate_2=MHD_init_daemon_certificate(daemon);
    return return_value_MHD_init_daemon_certificate_2;
  }

  MHD_DLOG(daemon, "Error: invalid credentials type %d specified.\n", daemon->cred_type);
  return -1;
}

// MHD_accept_connection
// file daemon.c line 1945
static signed int MHD_accept_connection(struct MHD_Daemon *daemon)
{
  struct sockaddr_in6 addrstorage;
  struct sockaddr *addr = (struct sockaddr *)&addrstorage;
  unsigned int addrlen;
  signed int s;
  signed int fd;
  signed int nonblock;
  addrlen = (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ ;
  memset((void *)addr, 0, sizeof(struct sockaddr_in6) /*28ul*/ );
  fd = daemon->socket_fd;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  _Bool tmp_if_expr_6;
  signed int *return_value___errno_location_5;
  if(fd == -1)
    return 0;

  else
  {
    nonblock = 2048;
    s=accept4(fd, addr, &addrlen, 524288 | nonblock);
    if(s == -1 || !(addrlen >= 1u))
    {
      signed int err;
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      err = *return_value___errno_location_1;
      if(err == 22)
      {
        if(daemon->socket_fd == -1)
          return 0;

      }

      if(!(err == 11))
      {
        return_value___errno_location_2=__errno_location();
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        MHD_DLOG(daemon, "Error accepting connection: %s\n", return_value_strerror_3);
      }

      if(!(s == -1))
      {
        signed int return_value_close_4;
        return_value_close_4=close(s);
        if(!(return_value_close_4 == 0))
        {
          return_value___errno_location_5=__errno_location();
          tmp_if_expr_6 = 9 == *return_value___errno_location_5 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
          mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1992, "close failed\n");

      }

      return 0;
    }

    make_nonblocking_noninheritable(daemon, s);
    internal_add_connection(daemon, s, addr, addrlen, 0);
    return 1;
  }
}

// MHD_add_connection
// file daemon.c line 1918
extern signed int MHD_add_connection(struct MHD_Daemon *daemon, signed int client_socket, struct sockaddr *addr, unsigned int addrlen)
{
  make_nonblocking_noninheritable(daemon, client_socket);
  signed int return_value_internal_add_connection_1;
  return_value_internal_add_connection_1=internal_add_connection(daemon, client_socket, addr, addrlen, 1);
  return return_value_internal_add_connection_1;
}

// MHD_add_response_footer
// file response.c line 123
extern signed int MHD_add_response_footer(struct MHD_Response *response, const char *footer, const char *content)
{
  signed int return_value_add_response_entry_1;
  return_value_add_response_entry_1=add_response_entry(response, (enum MHD_ValueKind)MHD_FOOTER_KIND, footer, content);
  return return_value_add_response_entry_1;
}

// MHD_add_response_header
// file response.c line 103
extern signed int MHD_add_response_header(struct MHD_Response *response, const char *header, const char *content)
{
  signed int return_value_add_response_entry_1;
  return_value_add_response_entry_1=add_response_entry(response, (enum MHD_ValueKind)MHD_HEADER_KIND, header, content);
  return return_value_add_response_entry_1;
}

// MHD_basic_auth_get_username_password
// file basicauth.c line 46
extern char * MHD_basic_auth_get_username_password(struct MHD_Connection *connection, char **password)
{
  const char *header;
  char *decode;
  const char *separator;
  char *user;
  header=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Authorization");
  _Bool tmp_if_expr_3;
  unsigned long int return_value_strlen_1;
  signed int return_value_strncmp_2;
  if(header == ((const char *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_strlen_1=strlen("Basic ");
    return_value_strncmp_2=strncmp(header, "Basic ", return_value_strlen_1);
    tmp_if_expr_3 = 0 != return_value_strncmp_2 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen("Basic ");
    header = header + (signed long int)return_value_strlen_4;
    decode=BASE64Decode(header);
    if(decode == ((char *)NULL))
    {
      MHD_DLOG(connection->daemon, "Error decoding basic authentication\n");
      return (char *)(void *)0;
    }

    else
    {
      separator=strchr(decode, 58);
      if(separator == ((const char *)NULL))
      {
        MHD_DLOG(connection->daemon, "Basic authentication doesn't contain ':' separator\n");
        free((void *)decode);
        return (char *)(void *)0;
      }

      else
      {
        user=strdup(decode);
        if(user == ((char *)NULL))
        {
          free((void *)decode);
          return (char *)(void *)0;
        }

        else
        {
          user[separator - decode] = (char)0;
          if(!(password == ((char **)NULL)))
          {
            *password=strdup(separator + (signed long int)1);
            if(!(*password == ((char *)NULL)))
              goto __CPROVER_DUMP_L7;

            MHD_DLOG(connection->daemon, "Failed to allocate memory for password\n");
            free((void *)decode);
            free((void *)user);
            return (char *)(void *)0;
          }

          else
          {

          __CPROVER_DUMP_L7:
            ;
            free((void *)decode);
            return user;
          }
        }
      }
    }
  }
}

// MHD_cleanup_connections
// file daemon.c line 2022
static void MHD_cleanup_connections(struct MHD_Daemon *daemon)
{
  struct MHD_Connection *pos;
  signed int return_value_pthread_mutex_lock_1;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_lock_1 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)2028, "Failed to acquire cleanup mutex\n");

  }

  _Bool tmp_if_expr_6;
  signed int *return_value___errno_location_5;
  do
  {
    pos = daemon->cleanup_head;
    if(pos == ((struct MHD_Connection *)NULL))
      break;

    do
    {
      if(pos->prev == ((struct MHD_Connection *)NULL))
        daemon->cleanup_head = pos->next;

      else
        pos->prev->next = pos->next;
      if(pos->next == ((struct MHD_Connection *)NULL))
        daemon->cleanup_tail = pos->prev;

      else
        pos->next->prev = pos->prev;
      pos->next = (struct MHD_Connection *)(void *)0;
      pos->prev = (struct MHD_Connection *)(void *)0;
    }
    while((_Bool)0);
    if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
    {
      if(pos->thread_joined == 0)
      {
        signed int return_value_pthread_join_2;
        return_value_pthread_join_2=pthread_join(pos->pid, (void **)(void *)0);
        if(!(return_value_pthread_join_2 == 0))
          mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)2039, "Failed to join a thread\n");

      }

    }

    MHD_pool_destroy(pos->pool);
    if(!(pos->tls_session == ((struct gnutls_session_int *)NULL)))
      gnutls_deinit(pos->tls_session);

    daemon->connections = daemon->connections - 1u;
    if(!(daemon->notify_connection == ((void (*)(void *, struct MHD_Connection *, void **, enum MHD_ConnectionNotificationCode))NULL)))
      daemon->notify_connection(daemon->notify_connection_cls, pos, &pos->socket_context, (enum MHD_ConnectionNotificationCode)MHD_CONNECTION_NOTIFY_CLOSED);

    MHD_ip_limit_del(daemon, pos->addr, pos->addr_len);
    if(!((MHD_EPOLL_STATE_IN_EREADY_EDLL & (signed int)pos->epoll_state) == 0))
    {
      do
      {
        if(pos->prevE == ((struct MHD_Connection *)NULL))
          daemon->eready_head = pos->nextE;

        else
          pos->prevE->nextE = pos->nextE;
        if(pos->nextE == ((struct MHD_Connection *)NULL))
          daemon->eready_tail = pos->prevE;

        else
          pos->nextE->prevE = pos->prevE;
        pos->nextE = (struct MHD_Connection *)(void *)0;
        pos->prevE = (struct MHD_Connection *)(void *)0;
      }
      while((_Bool)0);
      pos->epoll_state = pos->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_IN_EREADY_EDLL;
    }

    if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
    {
      if(!(daemon->epoll_fd == -1))
      {
        if(!((MHD_EPOLL_STATE_IN_EPOLL_SET & (signed int)pos->epoll_state) == 0))
        {
          signed int return_value_epoll_ctl_3;
          return_value_epoll_ctl_3=epoll_ctl(daemon->epoll_fd, 2, pos->socket_fd, (struct epoll_event *)(void *)0);
          if(!(return_value_epoll_ctl_3 == 0))
            mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)2076, "Failed to remove FD from epoll set\n");

          pos->epoll_state = pos->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_IN_EPOLL_SET;
        }

      }

    }

    if(!(pos->response == ((struct MHD_Response *)NULL)))
    {
      MHD_destroy_response(pos->response);
      pos->response = (struct MHD_Response *)(void *)0;
    }

    if(!(pos->socket_fd == -1))
    {
      signed int return_value_close_4;
      return_value_close_4=close(pos->socket_fd);
      if(!(return_value_close_4 == 0))
      {
        return_value___errno_location_5=__errno_location();
        tmp_if_expr_6 = 9 == *return_value___errno_location_5 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_6 = (_Bool)0;
      if(tmp_if_expr_6)
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)2091, "close failed\n");

    }

    if(!(pos->addr == ((struct sockaddr *)NULL)))
      free((void *)pos->addr);

    free((void *)pos);
  }
  while((_Bool)1);
  signed int return_value_pthread_mutex_unlock_7;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_unlock_7=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_unlock_7 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)2099, "Failed to release cleanup mutex\n");

  }

}

// MHD_connection_close
// file connection.c line 267
void MHD_connection_close(struct MHD_Connection *connection, enum MHD_RequestTerminationCode termination_code)
{
  struct MHD_Daemon *daemon = connection->daemon;
  if((MHD_USE_EPOLL_TURBO & (signed int)connection->daemon->options) == 0)
    shutdown(connection->socket_fd, 1 == connection->read_closed ? 1 : 2);

  connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_CLOSED;
  connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_CLEANUP;
  if(!(daemon->notify_completed == ((void (*)(void *, struct MHD_Connection *, void **, enum MHD_RequestTerminationCode))NULL)))
  {
    if(connection->client_aware == 1)
      daemon->notify_completed(daemon->notify_completed_cls, connection, &connection->client_context, termination_code);

  }

  connection->client_aware = 0;
}

// MHD_connection_epoll_update_
// file connection.c line 2724
signed int MHD_connection_epoll_update_(struct MHD_Connection *connection)
{
  struct MHD_Daemon *daemon = connection->daemon;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_6;
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
  {
    if((MHD_EPOLL_STATE_IN_EPOLL_SET & (signed int)connection->epoll_state) == 0)
    {
      if((MHD_EPOLL_STATE_SUSPENDED & (signed int)connection->epoll_state) == 0)
      {
        if((MHD_EPOLL_STATE_WRITE_READY & (signed int)connection->epoll_state) == 0)
          tmp_if_expr_7 = (_Bool)1;

        else
        {
          if((MHD_EPOLL_STATE_READ_READY & (signed int)connection->epoll_state) == 0)
          {
            if((signed int)connection->event_loop_info == MHD_EVENT_LOOP_INFO_READ)
              tmp_if_expr_4 = (_Bool)1;

            else
              tmp_if_expr_4 = connection->read_buffer_size > connection->read_buffer_offset ? (_Bool)1 : (_Bool)0;
            tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_5 = (_Bool)0;
          if(tmp_if_expr_5)
            tmp_if_expr_6 = 0 == connection->read_closed ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_6 = (_Bool)0;
          tmp_if_expr_7 = tmp_if_expr_6 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_7)
        {
          struct epoll_event event;
          event.events = (unsigned int)(1 | 4 | -2147483648);
          event.data.ptr = (void *)connection;
          signed int return_value_epoll_ctl_3;
          return_value_epoll_ctl_3=epoll_ctl(daemon->epoll_fd, 1, connection->socket_fd, &event);
          if(!(return_value_epoll_ctl_3 == 0))
          {
            if(!((MHD_USE_DEBUG & (signed int)daemon->options) == 0))
            {
              return_value___errno_location_1=__errno_location();
              return_value_strerror_2=strerror(*return_value___errno_location_1);
              MHD_DLOG(daemon, "Call to epoll_ctl failed: %s\n", return_value_strerror_2);
            }

            connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_CLOSED;
            cleanup_connection(connection);
            return 0;
          }

          connection->epoll_state = connection->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_IN_EPOLL_SET;
        }

      }

    }

  }

  connection->in_idle = 0;
  return 1;
}

// MHD_connection_handle_idle
// file connection.c line 2278
signed int MHD_connection_handle_idle(struct MHD_Connection *connection)
{
  struct MHD_Daemon *daemon = connection->daemon;
  unsigned int timeout;
  const char *end;
  char *line;
  signed int client_close;
  connection->in_idle = 1;
  signed int return_value_parse_initial_message_line_1;
  unsigned long int return_value_strlen_2;
  signed int return_value_process_header_line_3;
  signed int return_value_process_broken_line_4;
  unsigned long int return_value_strlen_5;
  signed int return_value_need_100_continue_6;
  signed int return_value_strcasecmp_7;
  _Bool tmp_if_expr_9;
  signed int return_value_strcasecmp_8;
  unsigned long int return_value_strlen_10;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_11;
  unsigned long int return_value_strlen_15;
  signed int return_value_process_header_line_16;
  signed int return_value_process_broken_line_17;
  unsigned long int return_value_strlen_18;
  signed int return_value_build_header_response_19;
  signed int return_value_pthread_mutex_lock_20;
  signed int return_value_pthread_mutex_unlock_21;
  signed int return_value_try_ready_normal_body_23;
  signed int return_value_pthread_mutex_unlock_22;
  signed int return_value_pthread_mutex_lock_24;
  _Bool tmp_if_expr_26;
  signed int return_value_pthread_mutex_unlock_25;
  signed int return_value_try_ready_chunked_body_28;
  signed int return_value_pthread_mutex_unlock_27;
  signed int return_value_pthread_mutex_unlock_29;
  signed int return_value_build_header_response_30;
  _Bool tmp_if_expr_31;
  _Bool tmp_if_expr_33;
  signed int return_value_strcasecmp_32;
  _Bool tmp_if_expr_36;
  _Bool tmp_if_expr_35;
  signed int return_value_strcasecmp_34;
  _Bool tmp_if_expr_38;
  _Bool tmp_if_expr_40;
  signed int return_value_keepalive_possible_39;
  while((_Bool)1)
  {
    switch((signed int)connection->state)
    {
      case MHD_CONNECTION_INIT:
      {
        line=get_next_header_line(connection);
        if(line == ((char *)NULL))
        {
          if(!((signed int)connection->state == MHD_CONNECTION_INIT))
            goto __CPROVER_DUMP_L104;

          if(connection->read_closed == 1)
          {
            connection_close_error(connection, (const char *)(void *)0);
            goto __CPROVER_DUMP_L104;
          }

          break;
        }

        return_value_parse_initial_message_line_1=parse_initial_message_line(connection, line);
        if(return_value_parse_initial_message_line_1 == 0)
          connection_close_error(connection, (const char *)(void *)0);

        else
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_URL_RECEIVED;
        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_URL_RECEIVED:
      {
        line=get_next_header_line(connection);
        if(line == ((char *)NULL))
        {
          if(!((signed int)connection->state == MHD_CONNECTION_URL_RECEIVED))
            goto __CPROVER_DUMP_L104;

          if(connection->read_closed == 1)
          {
            connection_close_error(connection, (const char *)(void *)0);
            goto __CPROVER_DUMP_L104;
          }

          break;
        }

        return_value_strlen_2=strlen(line);
        if(return_value_strlen_2 == 0ul)
        {
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_HEADERS_RECEIVED;
          goto __CPROVER_DUMP_L104;
        }

        return_value_process_header_line_3=process_header_line(connection, line);
        if(return_value_process_header_line_3 == 0)
        {
          transmit_error_response(connection, (unsigned int)400, "<html><head><title>Request malformed</title></head><body>Your HTTP request was syntactically incorrect.</body></html>");
          break;
        }

        connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_HEADER_PART_RECEIVED;
        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_HEADER_PART_RECEIVED:
      {
        line=get_next_header_line(connection);
        if(line == ((char *)NULL))
        {
          if(!((signed int)connection->state == MHD_CONNECTION_HEADER_PART_RECEIVED))
            goto __CPROVER_DUMP_L104;

          if(connection->read_closed == 1)
          {
            connection_close_error(connection, (const char *)(void *)0);
            goto __CPROVER_DUMP_L104;
          }

          break;
        }

        return_value_process_broken_line_4=process_broken_line(connection, line, (enum MHD_ValueKind)MHD_HEADER_KIND);
        if(return_value_process_broken_line_4 == 0)
          goto __CPROVER_DUMP_L104;

        return_value_strlen_5=strlen(line);
        if(return_value_strlen_5 == 0ul)
        {
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_HEADERS_RECEIVED;
          goto __CPROVER_DUMP_L104;
        }

        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_HEADERS_RECEIVED:
      {
        parse_connection_headers(connection);
        if((signed int)connection->state == MHD_CONNECTION_CLOSED)
          goto __CPROVER_DUMP_L104;

        connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_HEADERS_PROCESSED;
        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_HEADERS_PROCESSED:
      {
        call_connection_handler(connection);
        if((signed int)connection->state == MHD_CONNECTION_CLOSED)
          goto __CPROVER_DUMP_L104;

        return_value_need_100_continue_6=need_100_continue(connection);
        if(!(return_value_need_100_continue_6 == 0))
        {
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_CONTINUE_SENDING;
          break;
        }

        if(!(connection->response == ((struct MHD_Response *)NULL)))
        {
          return_value_strcasecmp_7=strcasecmp(connection->method, "POST");
          if(return_value_strcasecmp_7 == 0)
            tmp_if_expr_9 = (_Bool)1;

          else
          {
            return_value_strcasecmp_8=strcasecmp(connection->method, "PUT");
            tmp_if_expr_9 = 0 == return_value_strcasecmp_8 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_9)
          {
            connection->remaining_upload_size = (unsigned long int)0;
            connection->read_closed = 1;
          }

        }

        connection->state = (enum MHD_CONNECTION_STATE)((unsigned long int)0 == connection->remaining_upload_size ? MHD_CONNECTION_FOOTERS_RECEIVED : MHD_CONNECTION_CONTINUE_SENT);
        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_CONTINUE_SENDING:
      {
        return_value_strlen_10=strlen("HTTP/1.1 100 Continue\r\n\r\n");
        if(connection->continue_message_write_offset == return_value_strlen_10)
        {
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_CONTINUE_SENT;
          goto __CPROVER_DUMP_L104;
        }

        break;
      }
      case MHD_CONNECTION_CONTINUE_SENT:
      {
        if(!(connection->read_buffer_offset == 0ul))
        {
          process_request_body(connection);
          if((signed int)connection->state == MHD_CONNECTION_CLOSED)
            goto __CPROVER_DUMP_L104;

        }

        if(connection->remaining_upload_size == 0ul)
          tmp_if_expr_14 = (_Bool)1;

        else
        {
          if(connection->remaining_upload_size == 18446744073709551615UL)
            tmp_if_expr_12 = (unsigned long int)0 == connection->read_buffer_offset ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_12 = (_Bool)0;
          if(tmp_if_expr_12)
            tmp_if_expr_13 = 1 == connection->read_closed ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_13 = (_Bool)0;
          tmp_if_expr_14 = tmp_if_expr_13 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_14)
        {
          if(connection->have_chunked_upload == 1)
            tmp_if_expr_11 = 0 == connection->read_closed ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_11 = (_Bool)0;
          if(tmp_if_expr_11)
            connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_BODY_RECEIVED;

          else
            connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_RECEIVED;
          goto __CPROVER_DUMP_L104;
        }

        break;
      }
      case MHD_CONNECTION_BODY_RECEIVED:
      {
        line=get_next_header_line(connection);
        if(line == ((char *)NULL))
        {
          if(!((signed int)connection->state == MHD_CONNECTION_BODY_RECEIVED))
            goto __CPROVER_DUMP_L104;

          if(connection->read_closed == 1)
          {
            connection_close_error(connection, (const char *)(void *)0);
            goto __CPROVER_DUMP_L104;
          }

          break;
        }

        return_value_strlen_15=strlen(line);
        if(return_value_strlen_15 == 0ul)
        {
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_RECEIVED;
          goto __CPROVER_DUMP_L104;
        }

        return_value_process_header_line_16=process_header_line(connection, line);
        if(return_value_process_header_line_16 == 0)
        {
          transmit_error_response(connection, (unsigned int)400, "<html><head><title>Request malformed</title></head><body>Your HTTP request was syntactically incorrect.</body></html>");
          break;
        }

        connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTER_PART_RECEIVED;
        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_FOOTER_PART_RECEIVED:
      {
        line=get_next_header_line(connection);
        if(line == ((char *)NULL))
        {
          if(!((signed int)connection->state == MHD_CONNECTION_FOOTER_PART_RECEIVED))
            goto __CPROVER_DUMP_L104;

          if(connection->read_closed == 1)
          {
            connection_close_error(connection, (const char *)(void *)0);
            goto __CPROVER_DUMP_L104;
          }

          break;
        }

        return_value_process_broken_line_17=process_broken_line(connection, line, (enum MHD_ValueKind)MHD_FOOTER_KIND);
        if(return_value_process_broken_line_17 == 0)
          goto __CPROVER_DUMP_L104;

        return_value_strlen_18=strlen(line);
        if(return_value_strlen_18 == 0ul)
        {
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_RECEIVED;
          goto __CPROVER_DUMP_L104;
        }

        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_FOOTERS_RECEIVED:
      {
        call_connection_handler(connection);
        if((signed int)connection->state == MHD_CONNECTION_CLOSED)
          goto __CPROVER_DUMP_L104;

        if(connection->response == ((struct MHD_Response *)NULL))
          break;

        return_value_build_header_response_19=build_header_response(connection);
        if(return_value_build_header_response_19 == 0)
        {
          connection_close_error(connection, "Closing connection (failed to create response header)\n");
          goto __CPROVER_DUMP_L104;
        }

        connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_HEADERS_SENDING;
        const signed int val = 1;
        setsockopt(connection->socket_fd, 6, 3, (const void *)&val, (unsigned int)sizeof(const signed int) /*4ul*/ );
        break;
      }
      case MHD_CONNECTION_HEADERS_SENDING:
        break;
      case MHD_CONNECTION_HEADERS_SENT:
      {
        if(!(connection->have_chunked_upload == 0))
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_CHUNKED_BODY_UNREADY;

        else
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_NORMAL_BODY_UNREADY;
        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_NORMAL_BODY_READY:
        break;
      case MHD_CONNECTION_NORMAL_BODY_UNREADY:
      {
        if(!(connection->response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
        {
          return_value_pthread_mutex_lock_20=pthread_mutex_lock(&connection->response->mutex);
          (void)(0 == return_value_pthread_mutex_lock_20 ? 1 : 0);
        }

        if(connection->response->total_size == 0ul)
        {
          if(!(connection->response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
          {
            return_value_pthread_mutex_unlock_21=pthread_mutex_unlock(&connection->response->mutex);
            (void)(0 == return_value_pthread_mutex_unlock_21 ? 1 : 0);
          }

          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_BODY_SENT;
          goto __CPROVER_DUMP_L104;
        }

        return_value_try_ready_normal_body_23=try_ready_normal_body(connection);
        if(return_value_try_ready_normal_body_23 == 1)
        {
          if(!(connection->response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
          {
            return_value_pthread_mutex_unlock_22=pthread_mutex_unlock(&connection->response->mutex);
            (void)(0 == return_value_pthread_mutex_unlock_22 ? 1 : 0);
          }

          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_NORMAL_BODY_READY;
          break;
        }

        break;
      }
      case MHD_CONNECTION_CHUNKED_BODY_READY:
        break;
      case MHD_CONNECTION_CHUNKED_BODY_UNREADY:
      {
        if(!(connection->response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
        {
          return_value_pthread_mutex_lock_24=pthread_mutex_lock(&connection->response->mutex);
          (void)(0 == return_value_pthread_mutex_lock_24 ? 1 : 0);
        }

        if(connection->response->total_size == 0ul)
          tmp_if_expr_26 = (_Bool)1;

        else
          tmp_if_expr_26 = connection->response_write_position == connection->response->total_size ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_26)
        {
          if(!(connection->response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
          {
            return_value_pthread_mutex_unlock_25=pthread_mutex_unlock(&connection->response->mutex);
            (void)(0 == return_value_pthread_mutex_unlock_25 ? 1 : 0);
          }

          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_BODY_SENT;
          goto __CPROVER_DUMP_L104;
        }

        return_value_try_ready_chunked_body_28=try_ready_chunked_body(connection);
        if(return_value_try_ready_chunked_body_28 == 1)
        {
          if(!(connection->response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
          {
            return_value_pthread_mutex_unlock_27=pthread_mutex_unlock(&connection->response->mutex);
            (void)(0 == return_value_pthread_mutex_unlock_27 ? 1 : 0);
          }

          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_CHUNKED_BODY_READY;
          goto __CPROVER_DUMP_L104;
        }

        if(!(connection->response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
        {
          return_value_pthread_mutex_unlock_29=pthread_mutex_unlock(&connection->response->mutex);
          (void)(0 == return_value_pthread_mutex_unlock_29 ? 1 : 0);
        }

        break;
      }
      case MHD_CONNECTION_BODY_SENT:
      {
        return_value_build_header_response_30=build_header_response(connection);
        if(return_value_build_header_response_30 == 0)
        {
          connection_close_error(connection, "Closing connection (failed to create response header)\n");
          goto __CPROVER_DUMP_L104;
        }

        if(connection->have_chunked_upload == 0)
          tmp_if_expr_31 = (_Bool)1;

        else
          tmp_if_expr_31 = connection->write_buffer_send_offset == connection->write_buffer_append_offset ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_31)
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_SENT;

        else
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_SENDING;
        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_FOOTERS_SENDING:
        break;
      case MHD_CONNECTION_FOOTERS_SENT:
      {
        const signed int MHD_connection_handle_idle__1__1__1__24__val = 0;
        setsockopt(connection->socket_fd, 6, 3, (const void *)&MHD_connection_handle_idle__1__1__1__24__val, (unsigned int)sizeof(const signed int) /*4ul*/ );
        end=MHD_get_response_header(connection->response, "Connection");
        if(!(end == ((const char *)NULL)))
        {
          return_value_strcasecmp_32=strcasecmp(end, "close");
          tmp_if_expr_33 = 0 == return_value_strcasecmp_32 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_33 = (_Bool)0;
        client_close = (signed int)tmp_if_expr_33;
        MHD_destroy_response(connection->response);
        connection->response = (struct MHD_Response *)(void *)0;
        if(!(daemon->notify_completed == ((void (*)(void *, struct MHD_Connection *, void **, enum MHD_RequestTerminationCode))NULL)))
        {
          if(connection->client_aware == 1)
          {
            daemon->notify_completed(daemon->notify_completed_cls, connection, &connection->client_context, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_COMPLETED_OK);
            connection->client_aware = 0;
          }

        }

        end=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Connection");
        if(connection->read_closed == 1 || !(client_close == 0))
          tmp_if_expr_36 = (_Bool)1;

        else
        {
          if(!(end == ((const char *)NULL)))
          {
            return_value_strcasecmp_34=strcasecmp(end, "close");
            tmp_if_expr_35 = 0 == return_value_strcasecmp_34 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_35 = (_Bool)0;
          tmp_if_expr_36 = tmp_if_expr_35 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_36)
        {
          connection->read_closed = 1;
          connection->read_buffer_offset = (unsigned long int)0;
        }

        if(connection->read_closed == 1)
          tmp_if_expr_38 = (unsigned long int)0 == connection->read_buffer_offset ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_38 = (_Bool)0;
        if(tmp_if_expr_38)
          tmp_if_expr_40 = (_Bool)1;

        else
        {
          return_value_keepalive_possible_39=keepalive_possible(connection);
          tmp_if_expr_40 = 0 == return_value_keepalive_possible_39 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_40)
        {
          MHD_connection_close(connection, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_COMPLETED_OK);
          MHD_pool_destroy(connection->pool);
          connection->pool = (struct MemoryPool *)(void *)0;
          connection->read_buffer = (char *)(void *)0;
          connection->read_buffer_size = (unsigned long int)0;
          connection->read_buffer_offset = (unsigned long int)0;
        }

        else
        {
          connection->version = (char *)(void *)0;
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_INIT;
          void *return_value_MHD_pool_reset_37;
          return_value_MHD_pool_reset_37=MHD_pool_reset(connection->pool, (void *)connection->read_buffer, connection->read_buffer_size);
          connection->read_buffer = (char *)return_value_MHD_pool_reset_37;
        }
        connection->client_aware = 0;
        connection->client_context = (void *)0;
        connection->continue_message_write_offset = (unsigned long int)0;
        connection->responseCode = (unsigned int)0;
        connection->headers_received = (struct MHD_HTTP_Header *)(void *)0;
        connection->headers_received_tail = (struct MHD_HTTP_Header *)(void *)0;
        connection->response_write_position = (unsigned long int)0;
        connection->have_chunked_upload = 0;
        connection->method = (char *)(void *)0;
        connection->url = (char *)(void *)0;
        connection->write_buffer = (char *)(void *)0;
        connection->write_buffer_size = (unsigned long int)0;
        connection->write_buffer_send_offset = (unsigned long int)0;
        connection->write_buffer_append_offset = (unsigned long int)0;
        goto __CPROVER_DUMP_L104;
      }
      case MHD_CONNECTION_CLOSED:
      {
        cleanup_connection(connection);
        return 0;
      }
      default:
        ;
    }
    break;

  __CPROVER_DUMP_L104:
    ;
  }
  timeout = connection->connection_timeout;
  signed long int return_value_MHD_monotonic_sec_counter_41;
  signed int return_value_MHD_connection_epoll_update__42;
  if(!(timeout == 0u))
  {
    return_value_MHD_monotonic_sec_counter_41=MHD_monotonic_sec_counter();
    if(!(return_value_MHD_monotonic_sec_counter_41 + -connection->last_activity >= (signed long int)timeout))
      goto __CPROVER_DUMP_L106;

    MHD_connection_close(connection, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_TIMEOUT_REACHED);
    connection->in_idle = 0;
    return 1;
  }

  else
  {

  __CPROVER_DUMP_L106:
    ;
    MHD_connection_update_event_loop_info(connection);
    switch((signed int)connection->event_loop_info)
    {
      case MHD_EVENT_LOOP_INFO_READ:
      {
        if(!((MHD_EPOLL_STATE_READ_READY & (signed int)connection->epoll_state) == 0))
        {
          if((MHD_EPOLL_STATE_SUSPENDED & (signed int)connection->epoll_state) == 0)
          {
            if((MHD_EPOLL_STATE_IN_EREADY_EDLL & (signed int)connection->epoll_state) == 0)
            {
              do
              {
                connection->nextE = daemon->eready_head;
                connection->prevE = (struct MHD_Connection *)(void *)0;
                if(daemon->eready_tail == ((struct MHD_Connection *)NULL))
                  daemon->eready_tail = connection;

                else
                  daemon->eready_head->prevE = connection;
                daemon->eready_head = connection;
              }
              while((_Bool)0);
              connection->epoll_state = connection->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_IN_EREADY_EDLL;
            }

          }

        }

        goto __CPROVER_DUMP_L121;
      }
      case MHD_EVENT_LOOP_INFO_WRITE:
      {
        if(!((MHD_EPOLL_STATE_WRITE_READY & (signed int)connection->epoll_state) == 0))
        {
          if((MHD_EPOLL_STATE_SUSPENDED & (signed int)connection->epoll_state) == 0)
          {
            if((MHD_EPOLL_STATE_IN_EREADY_EDLL & (signed int)connection->epoll_state) == 0)
            {
              do
              {
                connection->nextE = daemon->eready_head;
                connection->prevE = (struct MHD_Connection *)(void *)0;
                if(daemon->eready_tail == ((struct MHD_Connection *)NULL))
                  daemon->eready_tail = connection;

                else
                  daemon->eready_head->prevE = connection;
                daemon->eready_head = connection;
              }
              while((_Bool)0);
              connection->epoll_state = connection->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_IN_EREADY_EDLL;
            }

          }

        }

        goto __CPROVER_DUMP_L121;
      }
      case MHD_EVENT_LOOP_INFO_BLOCK:
        if((MHD_EPOLL_STATE_IN_EREADY_EDLL & (signed int)connection->epoll_state) == 0)
        {
          if((MHD_EPOLL_STATE_SUSPENDED & (signed int)connection->epoll_state) == 0)
          {
            do
            {
              connection->nextE = daemon->eready_head;
              connection->prevE = (struct MHD_Connection *)(void *)0;
              if(daemon->eready_tail == ((struct MHD_Connection *)NULL))
                daemon->eready_tail = connection;

              else
                daemon->eready_head->prevE = connection;
              daemon->eready_head = connection;
            }
            while((_Bool)0);
            connection->epoll_state = connection->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_IN_EREADY_EDLL;
          }

        }

      case MHD_EVENT_LOOP_INFO_CLEANUP:

      default:
      {

      __CPROVER_DUMP_L121:
        ;
        return_value_MHD_connection_epoll_update__42=MHD_connection_epoll_update_(connection);
        return return_value_MHD_connection_epoll_update__42;
      }
    }
  }
}

// MHD_connection_handle_read
// file connection.c line 2001
signed int MHD_connection_handle_read(struct MHD_Connection *connection)
{
  update_last_activity(connection);
  if((signed int)connection->state == MHD_CONNECTION_CLOSED)
    return 1;

  else
  {
    if(!(connection->read_buffer_size >= connection->daemon->pool_increment + connection->read_buffer_offset))
      try_grow_read_buffer(connection);

    signed int return_value_do_read_1;
    return_value_do_read_1=do_read(connection);
    if(return_value_do_read_1 == 0)
      return 1;

    else
    {
      while((_Bool)1)
      {
        switch((signed int)connection->state)
        {
          case MHD_CONNECTION_INIT:

          case MHD_CONNECTION_URL_RECEIVED:

          case MHD_CONNECTION_HEADER_PART_RECEIVED:

          case MHD_CONNECTION_HEADERS_RECEIVED:

          case MHD_CONNECTION_HEADERS_PROCESSED:

          case MHD_CONNECTION_CONTINUE_SENDING:

          case MHD_CONNECTION_CONTINUE_SENT:

          case MHD_CONNECTION_BODY_RECEIVED:

          case MHD_CONNECTION_FOOTER_PART_RECEIVED:
          {
            if(connection->read_closed == 1)
            {
              MHD_connection_close(connection, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_READ_ERROR);
              goto __CPROVER_DUMP_L9;
            }

            break;
          }
          case MHD_CONNECTION_CLOSED:
            return 1;
          default:
            MHD_pool_reallocate(connection->pool, (void *)connection->read_buffer, connection->read_buffer_size + (unsigned long int)1, connection->read_buffer_offset);
        }
        break;

      __CPROVER_DUMP_L9:
        ;
      }
      return 1;
    }
  }
}

// MHD_connection_handle_write
// file connection.c line 2064
signed int MHD_connection_handle_write(struct MHD_Connection *connection)
{
  struct MHD_Response *response;
  signed long int ret;
  update_last_activity(connection);
  unsigned long int return_value_strlen_1;
  signed int return_value_pthread_mutex_lock_5;
  signed int return_value_pthread_mutex_unlock_8;
  switch((signed int)connection->state)
  {
    case MHD_CONNECTION_INIT:

    case MHD_CONNECTION_URL_RECEIVED:

    case MHD_CONNECTION_HEADER_PART_RECEIVED:

    case MHD_CONNECTION_HEADERS_RECEIVED:
      break;
    case MHD_CONNECTION_HEADERS_PROCESSED:
      break;
    case MHD_CONNECTION_CONTINUE_SENDING:
    {
      return_value_strlen_1=strlen("HTTP/1.1 100 Continue\r\n\r\n");
      ret=connection->send_cls(connection, (const void *)&"HTTP/1.1 100 Continue\r\n\r\n"[(signed long int)connection->continue_message_write_offset], return_value_strlen_1 - connection->continue_message_write_offset);
    }
    case MHD_CONNECTION_CONTINUE_SENT:

    case MHD_CONNECTION_BODY_RECEIVED:

    case MHD_CONNECTION_FOOTER_PART_RECEIVED:

    case MHD_CONNECTION_FOOTERS_RECEIVED:
      break;
    case MHD_CONNECTION_HEADERS_SENDING:
    {
      do_write(connection);
      if(!((signed int)connection->state == MHD_CONNECTION_HEADERS_SENDING))
        break;

      check_write_done(connection, (enum MHD_CONNECTION_STATE)MHD_CONNECTION_HEADERS_SENT);
      break;
    }
    case MHD_CONNECTION_HEADERS_SENT:
      break;
    case MHD_CONNECTION_NORMAL_BODY_READY:
    {
      response = connection->response;
      if(!(connection->response_write_position >= connection->response->total_size))
      {
        signed int err;
        unsigned long int data_write_offset;
        if(!(response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
        {
          return_value_pthread_mutex_lock_5=pthread_mutex_lock(&response->mutex);
          (void)(0 == return_value_pthread_mutex_lock_5 ? 1 : 0);
        }

        signed int return_value_try_ready_normal_body_6;
        return_value_try_ready_normal_body_6=try_ready_normal_body(connection);
        if(!(return_value_try_ready_normal_body_6 == 1))
          break;

        data_write_offset = connection->response_write_position - response->data_start;
        ret=connection->send_cls(connection, (const void *)&response->data[(signed long int)(unsigned long int)data_write_offset], response->data_size - (unsigned long int)data_write_offset);
        signed int *return_value___errno_location_7;
        return_value___errno_location_7=__errno_location();
        err = *return_value___errno_location_7;
        if(!(response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
        {
          return_value_pthread_mutex_unlock_8=pthread_mutex_unlock(&response->mutex);
          (void)(0 == return_value_pthread_mutex_unlock_8 ? 1 : 0);
        }

        if(!(ret >= 0l))
        {
          if(err == 4 || err == 11)
            return 1;

          signed int *return_value___errno_location_9;
          return_value___errno_location_9=__errno_location();
          char *return_value_strerror_10;
          return_value_strerror_10=strerror(*return_value___errno_location_9);
          MHD_DLOG(connection->daemon, "Failed to send data: %s\n", return_value_strerror_10);
          connection_close_error(connection, (const char *)(void *)0);
          return 1;
        }

        connection->response_write_position = connection->response_write_position + (unsigned long int)ret;
      }

      if(connection->response_write_position == connection->response->total_size)
        connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_SENT;

      break;
    }
    case MHD_CONNECTION_NORMAL_BODY_UNREADY:
      break;
    case MHD_CONNECTION_CHUNKED_BODY_READY:
    {
      do_write(connection);
      if(!((signed int)connection->state == MHD_CONNECTION_CHUNKED_BODY_READY))
        break;

      check_write_done(connection, (enum MHD_CONNECTION_STATE)(connection->response->total_size == connection->response_write_position ? MHD_CONNECTION_BODY_SENT : MHD_CONNECTION_CHUNKED_BODY_UNREADY));
      break;
    }
    case MHD_CONNECTION_CHUNKED_BODY_UNREADY:

    case MHD_CONNECTION_BODY_SENT:
      break;
    case MHD_CONNECTION_FOOTERS_SENDING:
    {
      do_write(connection);
      if(!((signed int)connection->state == MHD_CONNECTION_FOOTERS_SENDING))
        break;

      check_write_done(connection, (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_SENT);
      break;
    }
    case MHD_CONNECTION_FOOTERS_SENT:
      break;
    case MHD_CONNECTION_CLOSED:
      return 1;
    case MHD_TLS_CONNECTION_INIT:
      break;
    default:
    {
      connection_close_error(connection, "Internal error\n");
      return 1;
    }
  }
  goto __CPROVER_DUMP_L30;

__CPROVER_DUMP_L30:
  ;
  return 1;
}

// MHD_connection_update_event_loop_info
// file connection.c line 979
static void MHD_connection_update_event_loop_info(struct MHD_Connection *connection)
{
  signed int return_value_gnutls_record_get_direction_1;
  signed int return_value_try_grow_read_buffer_2;
  _Bool tmp_if_expr_4;
  while((_Bool)1)
  {
    switch((signed int)connection->state)
    {
      case MHD_TLS_CONNECTION_INIT:
      {
        return_value_gnutls_record_get_direction_1=gnutls_record_get_direction(connection->tls_session);
        if(return_value_gnutls_record_get_direction_1 == 0)
          connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_READ;

        else
          connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_WRITE;
        break;
      }
      case MHD_CONNECTION_INIT:

      case MHD_CONNECTION_URL_RECEIVED:

      case MHD_CONNECTION_HEADER_PART_RECEIVED:
      {
        if(connection->read_buffer_offset == connection->read_buffer_size)
        {
          return_value_try_grow_read_buffer_2=try_grow_read_buffer(connection);
          if(return_value_try_grow_read_buffer_2 == 0)
          {
            transmit_error_response(connection, (unsigned int)(connection->url != (char *)(void *)0 ? 413 : 414), "<html><head><title>Request too big</title></head><body>Your HTTP header was too big for the memory constraints of this webserver.</body></html>");
            goto __CPROVER_DUMP_L34;
          }

        }

        if(connection->read_closed == 0)
          connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_READ;

        else
          connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_BLOCK;
        break;
      }
      case MHD_CONNECTION_HEADERS_RECEIVED:
        break;
      case MHD_CONNECTION_HEADERS_PROCESSED:
        break;
      case MHD_CONNECTION_CONTINUE_SENDING:
      {
        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_WRITE;
        break;
      }
      case MHD_CONNECTION_CONTINUE_SENT:
      {
        if(connection->read_buffer_offset == connection->read_buffer_size)
        {
          signed int return_value_try_grow_read_buffer_3;
          return_value_try_grow_read_buffer_3=try_grow_read_buffer(connection);
          if(!(return_value_try_grow_read_buffer_3 == 1))
          {
            if(!((12 & (signed int)connection->daemon->options) == 0))
            {
              transmit_error_response(connection, (unsigned int)500, "<html><head><title>Internal server error</title></head><body>Some programmer needs to study the manual more carefully.</body></html>");
              goto __CPROVER_DUMP_L34;
            }

          }

        }

        if(!(connection->read_buffer_offset >= connection->read_buffer_size))
          tmp_if_expr_4 = 0 == connection->read_closed ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_READ;

        else
          connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_BLOCK;
        break;
      }
      case MHD_CONNECTION_BODY_RECEIVED:

      case MHD_CONNECTION_FOOTER_PART_RECEIVED:
      {
        if(connection->read_closed == 1)
        {
          connection_close_error(connection, (const char *)(void *)0);
          goto __CPROVER_DUMP_L34;
        }

        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_READ;
        break;
      }
      case MHD_CONNECTION_FOOTERS_RECEIVED:
      {
        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_BLOCK;
        break;
      }
      case MHD_CONNECTION_HEADERS_SENDING:
      {
        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_WRITE;
        break;
      }
      case MHD_CONNECTION_HEADERS_SENT:
        break;
      case MHD_CONNECTION_NORMAL_BODY_READY:
      {
        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_WRITE;
        break;
      }
      case MHD_CONNECTION_NORMAL_BODY_UNREADY:
      {
        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_BLOCK;
        break;
      }
      case MHD_CONNECTION_CHUNKED_BODY_READY:
      {
        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_WRITE;
        break;
      }
      case MHD_CONNECTION_CHUNKED_BODY_UNREADY:
      {
        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_BLOCK;
        break;
      }
      case MHD_CONNECTION_BODY_SENT:
        break;
      case MHD_CONNECTION_FOOTERS_SENDING:
      {
        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_WRITE;
        break;
      }
      case MHD_CONNECTION_FOOTERS_SENT:
        break;
      case MHD_CONNECTION_CLOSED:
      {
        connection->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_CLEANUP;
        goto __CPROVER_DUMP_L35;
      }
      default:
        ;
    }
    break;

  __CPROVER_DUMP_L34:
    ;
  }

__CPROVER_DUMP_L35:
  ;
}

// MHD_create_post_processor
// file postprocessor.c line 272
extern struct MHD_PostProcessor * MHD_create_post_processor(struct MHD_Connection *connection, unsigned long int buffer_size, signed int (*iter)(void *, enum MHD_ValueKind, const char *, const char *, const char *, const char *, const char *, unsigned long int, unsigned long int), void *iter_cls)
{
  struct MHD_PostProcessor *ret;
  const char *encoding;
  const char *boundary;
  unsigned long int blen;
  if(iter == ((signed int (*)(void *, enum MHD_ValueKind, const char *, const char *, const char *, const char *, const char *, unsigned long int, unsigned long int))NULL) || connection == ((struct MHD_Connection *)NULL) || !(buffer_size >= 256ul))
    mhd_panic(mhd_panic_cls, "postprocessor.c", (unsigned int)282, (const char *)(void *)0);

  encoding=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Content-Type");
  if(encoding == ((const char *)NULL))
    return (struct MHD_PostProcessor *)(void *)0;

  else
  {
    boundary = (const char *)(void *)0;
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen("application/x-www-form-urlencoded");
    signed int return_value_strncasecmp_6;
    return_value_strncasecmp_6=strncasecmp("application/x-www-form-urlencoded", encoding, return_value_strlen_5);
    if(!(return_value_strncasecmp_6 == 0))
    {
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen("multipart/form-data");
      signed int return_value_strncasecmp_2;
      return_value_strncasecmp_2=strncasecmp("multipart/form-data", encoding, return_value_strlen_1);
      if(!(return_value_strncasecmp_2 == 0))
        return (struct MHD_PostProcessor *)(void *)0;

      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen("multipart/form-data");
      boundary = &encoding[(signed long int)return_value_strlen_3];
      boundary=strstr(boundary, "boundary=");
      if(boundary == ((const char *)NULL))
        return (struct MHD_PostProcessor *)(void *)0;

      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen("boundary=");
      boundary = boundary + (signed long int)return_value_strlen_4;
      blen=strlen(boundary);
      if(blen == 0ul || !(buffer_size >= 2ul * blen + 2ul))
        return (struct MHD_PostProcessor *)(void *)0;

      if((signed int)*boundary == 34)
      {
        if((signed int)boundary[-1l + (signed long int)blen] == 34)
        {
          boundary = boundary + 1l;
          blen = blen - (unsigned long int)2;
        }

      }

    }

    else
      blen = (unsigned long int)0;
    buffer_size = buffer_size + (unsigned long int)4;
    void *return_value_malloc_7;
    return_value_malloc_7=malloc(sizeof(struct MHD_PostProcessor) /*160ul*/  + buffer_size + (unsigned long int)1);
    ret = (struct MHD_PostProcessor *)return_value_malloc_7;
    if(ret == ((struct MHD_PostProcessor *)NULL))
      return (struct MHD_PostProcessor *)(void *)0;

    else
    {
      memset((void *)ret, 0, sizeof(struct MHD_PostProcessor) /*160ul*/  + buffer_size + (unsigned long int)1);
      ret->connection = connection;
      ret->ikvi = iter;
      ret->cls = iter_cls;
      ret->encoding = encoding;
      ret->buffer_size = buffer_size;
      ret->state = (enum PP_State)PP_Init;
      ret->blen = blen;
      ret->boundary = boundary;
      ret->skip_rn = (enum RN_State)RN_Inactive;
      return ret;
    }
  }
}

// MHD_create_response_from_buffer
// file ../../src/include/microhttpd.h line 2075
extern struct MHD_Response * MHD_create_response_from_buffer(unsigned long int size, void *buffer, enum MHD_ResponseMemoryMode mode)
{
  struct MHD_Response *return_value_MHD_create_response_from_data_1;
  return_value_MHD_create_response_from_data_1=MHD_create_response_from_data(size, buffer, (signed int)((signed int)mode == MHD_RESPMEM_MUST_FREE), (signed int)((signed int)mode == MHD_RESPMEM_MUST_COPY));
  return return_value_MHD_create_response_from_data_1;
}

// MHD_create_response_from_callback
// file response.c line 244
extern struct MHD_Response * MHD_create_response_from_callback(unsigned long int size, unsigned long int block_size, signed long int (*crc)(void *, unsigned long int, char *, unsigned long int), void *crc_cls, void (*crfc)(void *))
{
  struct MHD_Response *response;
  if(crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL) || block_size == 0ul)
    return (struct MHD_Response *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct MHD_Response) /*136ul*/  + block_size);
    response = (struct MHD_Response *)return_value_malloc_1;
    if(response == ((struct MHD_Response *)NULL))
      return (struct MHD_Response *)(void *)0;

    else
    {
      memset((void *)response, 0, sizeof(struct MHD_Response) /*136ul*/ );
      response->fd = -1;
      response->data = (char *)(void *)&response[(signed long int)1];
      response->data_buffer_size = block_size;
      signed int return_value_pthread_mutex_init_2;
      return_value_pthread_mutex_init_2=pthread_mutex_init(&response->mutex, (const union anonymous_5 *)(void *)0);
      if(!(return_value_pthread_mutex_init_2 == 0))
      {
        free((void *)response);
        return (struct MHD_Response *)(void *)0;
      }

      else
      {
        response->crc = crc;
        response->crfc = crfc;
        response->crc_cls = crc_cls;
        response->reference_count = (unsigned int)1;
        response->total_size = size;
        return response;
      }
    }
  }
}

// MHD_create_response_from_data
// file response.c line 502
extern struct MHD_Response * MHD_create_response_from_data(unsigned long int size, void *data, signed int must_free, signed int must_copy)
{
  struct MHD_Response *response;
  void *tmp;
  if(data == NULL && size >= 1ul)
    return (struct MHD_Response *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct MHD_Response) /*136ul*/ );
    response = (struct MHD_Response *)return_value_malloc_1;
    if(response == ((struct MHD_Response *)NULL))
      return (struct MHD_Response *)(void *)0;

    else
    {
      memset((void *)response, 0, sizeof(struct MHD_Response) /*136ul*/ );
      response->fd = -1;
      signed int return_value_pthread_mutex_init_2;
      return_value_pthread_mutex_init_2=pthread_mutex_init(&response->mutex, (const union anonymous_5 *)(void *)0);
      if(!(return_value_pthread_mutex_init_2 == 0))
      {
        free((void *)response);
        return (struct MHD_Response *)(void *)0;
      }

      else
      {
        if(size >= 1ul && !(must_copy == 0))
        {
          tmp=malloc(size);
          if(tmp == NULL)
          {
            signed int return_value_pthread_mutex_destroy_3;
            return_value_pthread_mutex_destroy_3=pthread_mutex_destroy(&response->mutex);
            (void)(0 == return_value_pthread_mutex_destroy_3 ? 1 : 0);
            free((void *)response);
            return (struct MHD_Response *)(void *)0;
          }

          memcpy(tmp, data, size);
          must_free = 1;
          data = tmp;
        }

        response->crc = (signed long int (*)(void *, unsigned long int, char *, unsigned long int))(void *)0;
        response->crfc = must_free != 0 ? free : (void (*)(void *))(void *)0;
        response->crc_cls = must_free != 0 ? data : (void *)0;
        response->reference_count = (unsigned int)1;
        response->total_size = size;
        response->data = (char *)data;
        response->data_size = size;
        return response;
      }
    }
  }
}

// MHD_create_response_from_fd
// file response.c line 459
extern struct MHD_Response * MHD_create_response_from_fd(unsigned long int size, signed int fd)
{
  struct MHD_Response *return_value_MHD_create_response_from_fd_at_offset64_1;
  return_value_MHD_create_response_from_fd_at_offset64_1=MHD_create_response_from_fd_at_offset64(size, fd, (unsigned long int)0);
  return return_value_MHD_create_response_from_fd_at_offset64_1;
}

// MHD_create_response_from_fd64
// file response.c line 480
extern struct MHD_Response * MHD_create_response_from_fd64(unsigned long int size, signed int fd)
{
  struct MHD_Response *return_value_MHD_create_response_from_fd_at_offset64_1;
  return_value_MHD_create_response_from_fd_at_offset64_1=MHD_create_response_from_fd_at_offset64(size, fd, (unsigned long int)0);
  return return_value_MHD_create_response_from_fd_at_offset64_1;
}

// MHD_create_response_from_fd_at_offset
// file response.c line 396
extern struct MHD_Response * MHD_create_response_from_fd_at_offset(unsigned long int size, signed int fd, signed long int offset)
{
  struct MHD_Response *return_value_MHD_create_response_from_fd_at_offset64_1;
  return_value_MHD_create_response_from_fd_at_offset64_1=MHD_create_response_from_fd_at_offset64(size, fd, (unsigned long int)offset);
  return return_value_MHD_create_response_from_fd_at_offset64_1;
}

// MHD_create_response_from_fd_at_offset64
// file response.c line 421
extern struct MHD_Response * MHD_create_response_from_fd_at_offset64(unsigned long int size, signed int fd, unsigned long int offset)
{
  struct MHD_Response *response;
  if(!((signed long int)offset + (signed long int)size >= 0l) || !((signed long int)offset >= 0l) || !((signed long int)size >= 0l))
    return (struct MHD_Response *)(void *)0;

  else
  {
    response=MHD_create_response_from_callback(size, (unsigned long int)(4 * 1024), file_reader, (void *)0, free_callback);
    if(response == ((struct MHD_Response *)NULL))
      return (struct MHD_Response *)(void *)0;

    else
    {
      response->fd = fd;
      response->fd_off = offset;
      response->crc_cls = (void *)response;
      return response;
    }
  }
}

// MHD_del_response_header
// file response.c line 143
extern signed int MHD_del_response_header(struct MHD_Response *response, const char *header, const char *content)
{
  struct MHD_HTTP_Header *pos;
  struct MHD_HTTP_Header *prev;
  signed int return_value_strcmp_1;
  if(content == ((const char *)NULL) || header == ((const char *)NULL))
    return 0;

  else
  {
    prev = (struct MHD_HTTP_Header *)(void *)0;
    pos = response->first_header;
    while(!(pos == ((struct MHD_HTTP_Header *)NULL)))
    {
      signed int return_value_strcmp_2;
      return_value_strcmp_2=strcmp(header, pos->header);
      if(return_value_strcmp_2 == 0)
      {
        return_value_strcmp_1=strcmp(content, pos->value);
        if(return_value_strcmp_1 == 0)
        {
          free((void *)pos->header);
          free((void *)pos->value);
          if(prev == ((struct MHD_HTTP_Header *)NULL))
            response->first_header = pos->next;

          else
            prev->next = pos->next;
          free((void *)pos);
          return 1;
        }

      }

      prev = pos;
      pos = pos->next;
    }
    return 0;
  }
}

// MHD_destroy_post_processor
// file postprocessor.c line 1161
extern signed int MHD_destroy_post_processor(struct MHD_PostProcessor *pp)
{
  signed int ret;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(pp == ((struct MHD_PostProcessor *)NULL))
    return 1;

  else
  {
    if((signed int)pp->state == PP_ProcessValue)
      post_process_urlencoded(pp, "\n", (unsigned long int)1);

    if(pp->xbuf_pos >= 1ul)
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      if(!((signed int)pp->state == PP_Done))
        tmp_if_expr_1 = (signed int)pp->state != PP_ExpectNewLine ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
      ret = 0;

    else
      ret = 1;
    pp->have = (enum NE_State)NE_none;
    free_unmarked(pp);
    if(!(pp->nested_boundary == ((char *)NULL)))
      free((void *)pp->nested_boundary);

    free((void *)pp);
    return ret;
  }
}

// MHD_destroy_response
// file ../../src/include/microhttpd.h line 2312
extern void MHD_destroy_response(struct MHD_Response *response)
{
  struct MHD_HTTP_Header *pos;
  if(!(response == ((struct MHD_Response *)NULL)))
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&response->mutex);
    (void)(0 == return_value_pthread_mutex_lock_1 ? 1 : 0);
    response->reference_count = response->reference_count - 1u;
    if(!(response->reference_count == 0u))
    {
      signed int return_value_pthread_mutex_unlock_2;
      return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&response->mutex);
      (void)(0 == return_value_pthread_mutex_unlock_2 ? 1 : 0);
      goto __CPROVER_DUMP_L5;
    }

    signed int return_value_pthread_mutex_unlock_3;
    return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&response->mutex);
    (void)(0 == return_value_pthread_mutex_unlock_3 ? 1 : 0);
    signed int return_value_pthread_mutex_destroy_4;
    return_value_pthread_mutex_destroy_4=pthread_mutex_destroy(&response->mutex);
    (void)(0 == return_value_pthread_mutex_destroy_4 ? 1 : 0);
    if(!(response->crfc == ((void (*)(void *))NULL)))
      response->crfc(response->crc_cls);

    while(!(response->first_header == ((struct MHD_HTTP_Header *)NULL)))
    {
      pos = response->first_header;
      response->first_header = pos->next;
      free((void *)pos->header);
      free((void *)pos->value);
      free((void *)pos);
    }
    free((void *)response);
  }


__CPROVER_DUMP_L5:
  ;
}

// MHD_digest_auth_check
// file ../../src/include/microhttpd.h line 2491
extern signed int MHD_digest_auth_check(struct MHD_Connection *connection, const char *realm, const char *username, const char *password, unsigned int nonce_timeout)
{
  unsigned long int len;
  const char *header;
  char *end;
  char nonce[129l];
  char cnonce[129l];
  char qop[15l];
  char nc[20l];
  char response[128l];
  const char *hentity = (const char *)(void *)0;
  char ha1[33l];
  char respexp[33l];
  char noncehashexp[41l];
  unsigned int nonce_time;
  unsigned int t;
  unsigned long int left;
  unsigned long int nci;
  header=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Authorization");
  _Bool tmp_if_expr_5;
  signed int return_value_strcmp_4;
  _Bool tmp_if_expr_8;
  signed int return_value_strcmp_7;
  _Bool tmp_if_expr_16;
  unsigned long int return_value_lookup_sub_value_15;
  _Bool tmp_if_expr_20;
  signed int return_value_strcmp_17;
  _Bool tmp_if_expr_19;
  signed int return_value_strcmp_18;
  _Bool tmp_if_expr_22;
  unsigned long int return_value_lookup_sub_value_21;
  _Bool tmp_if_expr_24;
  unsigned long int return_value_lookup_sub_value_23;
  _Bool tmp_if_expr_27;
  _Bool tmp_if_expr_26;
  signed int *return_value___errno_location_25;
  if(header == ((const char *)NULL))
    return 0;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen("Digest ");
    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp(header, "Digest ", return_value_strlen_1);
    if(!(return_value_strncmp_2 == 0))
      return 0;

    else
    {
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen("Digest ");
      header = header + (signed long int)return_value_strlen_3;
      left=strlen(header);
      char un[128l];
      len=lookup_sub_value(un, sizeof(char [128l]) /*128ul*/ , header, "username");
      if(len == 0ul)
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_strcmp_4=strcmp(username, un);
        tmp_if_expr_5 = 0 != return_value_strcmp_4 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        return 0;

      else
      {
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen("username");
        left = left - (return_value_strlen_6 + len);
        char r[256l];
        len=lookup_sub_value(r, sizeof(char [256l]) /*256ul*/ , header, "realm");
        if(len == 0ul)
          tmp_if_expr_8 = (_Bool)1;

        else
        {
          return_value_strcmp_7=strcmp(realm, r);
          tmp_if_expr_8 = 0 != return_value_strcmp_7 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_8)
          return 0;

        else
        {
          unsigned long int return_value_strlen_9;
          return_value_strlen_9=strlen("realm");
          left = left - (return_value_strlen_9 + len);
          len=lookup_sub_value(nonce, sizeof(char [129l]) /*129ul*/ , header, "nonce");
          if(len == 0ul)
            return 0;

          else
          {
            unsigned long int return_value_strlen_10;
            return_value_strlen_10=strlen("nonce");
            left = left - (return_value_strlen_10 + len);
            if(left >= 32769ul)
              return 0;

            else
            {
              unsigned long int return_value_strtoul_11;
              return_value_strtoul_11=strtoul((nonce + (signed long int)len) - (signed long int)(2 * 4), (char **)(void *)0, 16);
              nonce_time = (unsigned int)return_value_strtoul_11;
              signed long int return_value_MHD_monotonic_sec_counter_12;
              return_value_MHD_monotonic_sec_counter_12=MHD_monotonic_sec_counter();
              t = (unsigned int)return_value_MHD_monotonic_sec_counter_12;
              if(!(nonce_time + nonce_timeout >= nonce_time) || !(nonce_time + nonce_timeout >= t))
                return -1;

              else
              {
                calculate_nonce(nonce_time, connection->method, connection->daemon->digest_auth_random, connection->daemon->digest_auth_rand_size, connection->url, realm, noncehashexp);
                signed int return_value_strcmp_13;
                return_value_strcmp_13=strcmp(nonce, noncehashexp);
                if(!(return_value_strcmp_13 == 0))
                  return -1;

                else
                {
                  unsigned long int return_value_lookup_sub_value_14;
                  return_value_lookup_sub_value_14=lookup_sub_value(cnonce, sizeof(char [129l]) /*129ul*/ , header, "cnonce");
                  if(return_value_lookup_sub_value_14 == 0ul)
                    tmp_if_expr_16 = (_Bool)1;

                  else
                  {
                    return_value_lookup_sub_value_15=lookup_sub_value(qop, sizeof(char [15l]) /*15ul*/ , header, "qop");
                    tmp_if_expr_16 = (unsigned long int)0 == return_value_lookup_sub_value_15 ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_16)
                    tmp_if_expr_20 = (_Bool)1;

                  else
                  {
                    return_value_strcmp_17=strcmp(qop, "auth");
                    if(!(return_value_strcmp_17 == 0))
                    {
                      return_value_strcmp_18=strcmp(qop, "");
                      tmp_if_expr_19 = 0 != return_value_strcmp_18 ? (_Bool)1 : (_Bool)0;
                    }

                    else
                      tmp_if_expr_19 = (_Bool)0;
                    tmp_if_expr_20 = tmp_if_expr_19 ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_20)
                    tmp_if_expr_22 = (_Bool)1;

                  else
                  {
                    return_value_lookup_sub_value_21=lookup_sub_value(nc, sizeof(char [20l]) /*20ul*/ , header, "nc");
                    tmp_if_expr_22 = (unsigned long int)0 == return_value_lookup_sub_value_21 ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_22)
                    tmp_if_expr_24 = (_Bool)1;

                  else
                  {
                    return_value_lookup_sub_value_23=lookup_sub_value(response, sizeof(char [128l]) /*128ul*/ , header, "response");
                    tmp_if_expr_24 = (unsigned long int)0 == return_value_lookup_sub_value_23 ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_24)
                  {
                    MHD_DLOG(connection->daemon, "Authentication failed, invalid format.\n");
                    return 0;
                  }

                  else
                  {
                    nci=strtoul(nc, &end, 16);
                    if(!((signed int)*end == 0))
                      tmp_if_expr_27 = (_Bool)1;

                    else
                    {
                      if(nci == 9223372036854775807ul)
                      {
                        return_value___errno_location_25=__errno_location();
                        tmp_if_expr_26 = 34 == *return_value___errno_location_25 ? (_Bool)1 : (_Bool)0;
                      }

                      else
                        tmp_if_expr_26 = (_Bool)0;
                      tmp_if_expr_27 = tmp_if_expr_26 ? (_Bool)1 : (_Bool)0;
                    }
                    if(tmp_if_expr_27)
                    {
                      MHD_DLOG(connection->daemon, "Authentication failed, invalid format.\n");
                      return 0;
                    }

                    else
                    {
                      signed int return_value_check_nonce_nc_28;
                      return_value_check_nonce_nc_28=check_nonce_nc(connection, nonce, nci);
                      if(!(return_value_check_nonce_nc_28 == 1))
                        return 0;

                      else
                      {
                        char *uri;
                        void *return_value_malloc_29;
                        return_value_malloc_29=malloc(left + (unsigned long int)1);
                        uri = (char *)return_value_malloc_29;
                        if(uri == ((char *)NULL))
                        {
                          MHD_DLOG(connection->daemon, "Failed to allocate memory for auth header processing\n");
                          return 0;
                        }

                        else
                        {
                          unsigned long int return_value_lookup_sub_value_30;
                          return_value_lookup_sub_value_30=lookup_sub_value(uri, left + (unsigned long int)1, header, "uri");
                          if(return_value_lookup_sub_value_30 == 0ul)
                          {
                            free((void *)uri);
                            return 0;
                          }

                          else
                          {
                            digest_calc_ha1("md5", username, realm, password, nonce, cnonce, ha1);
                            digest_calc_response(ha1, nonce, nc, cnonce, qop, connection->method, uri, hentity, respexp);
                            connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, uri);
                            unsigned long int return_value_strlen_31;
                            return_value_strlen_31=strlen(connection->url);
                            signed int return_value_strncmp_32;
                            return_value_strncmp_32=strncmp(uri, connection->url, return_value_strlen_31);
                            if(!(return_value_strncmp_32 == 0))
                            {
                              MHD_DLOG(connection->daemon, "Authentication failed, URI does not match.\n");
                              free((void *)uri);
                              return 0;
                            }

                            else
                            {
                              const char *args;
                              args=strchr(uri, 63);
                              if(args == ((const char *)NULL))
                                args = "";

                              else
                                args = args + 1l;
                              signed int return_value_check_argument_match_33;
                              return_value_check_argument_match_33=check_argument_match(connection, args);
                              if(!(return_value_check_argument_match_33 == 1))
                              {
                                MHD_DLOG(connection->daemon, "Authentication failed, arguments do not match.\n");
                                free((void *)uri);
                                return 0;
                              }

                              else
                              {
                                free((void *)uri);
                                signed int return_value_strcmp_34;
                                return_value_strcmp_34=strcmp(response, respexp);
                                return 0 == return_value_strcmp_34 ? 1 : 0;
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

// MHD_digest_auth_get_username
// file ../../src/include/microhttpd.h line 2474
extern char * MHD_digest_auth_get_username(struct MHD_Connection *connection)
{
  unsigned long int len;
  char user[128l];
  const char *header;
  header=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Authorization");
  if(header == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen("Digest ");
    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp(header, "Digest ", return_value_strlen_1);
    if(!(return_value_strncmp_2 == 0))
      return (char *)(void *)0;

    else
    {
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen("Digest ");
      header = header + (signed long int)return_value_strlen_3;
      len=lookup_sub_value(user, sizeof(char [128l]) /*128ul*/ , header, "username");
      if(len == 0ul)
        return (char *)(void *)0;

      else
      {
        char *return_value_strdup_4;
        return_value_strdup_4=strdup(user);
        return return_value_strdup_4;
      }
    }
  }
}

// MHD_epoll
// file daemon.c line 2691
static signed int MHD_epoll(struct MHD_Daemon *daemon, signed int may_block)
{
  struct MHD_Connection *pos;
  struct MHD_Connection *next;
  struct epoll_event events[128l];
  struct epoll_event event;
  signed int timeout_ms;
  unsigned long long int timeout_ll;
  signed int num_events;
  unsigned int i;
  unsigned int series_length;
  char tmp;
  _Bool tmp_if_expr_9;
  signed int return_value_MHD_accept_connection_10;
  signed int return_value_resume_suspended_connections_11;
  if(daemon->epoll_fd == -1)
    return 0;

  else
    if(daemon->shutdown == 1)
      return 0;

    else
    {
      if(!(daemon->socket_fd == -1))
      {
        if(!(daemon->connections >= daemon->connection_limit))
        {
          if(daemon->listen_socket_in_epoll == 0)
          {
            event.events = (unsigned int)1;
            event.data.ptr = (void *)daemon;
            signed int return_value_epoll_ctl_3;
            return_value_epoll_ctl_3=epoll_ctl(daemon->epoll_fd, 1, daemon->socket_fd, &event);
            if(!(return_value_epoll_ctl_3 == 0))
            {
              signed int *return_value___errno_location_1;
              return_value___errno_location_1=__errno_location();
              char *return_value_strerror_2;
              return_value_strerror_2=strerror(*return_value___errno_location_1);
              MHD_DLOG(daemon, "Call to epoll_ctl failed: %s\n", return_value_strerror_2);
              return 0;
            }

            daemon->listen_socket_in_epoll = 1;
          }

        }

      }

      if(daemon->listen_socket_in_epoll == 1)
      {
        if(daemon->connections == daemon->connection_limit)
        {
          signed int return_value_epoll_ctl_4;
          return_value_epoll_ctl_4=epoll_ctl(daemon->epoll_fd, 2, daemon->socket_fd, (struct epoll_event *)(void *)0);
          if(!(return_value_epoll_ctl_4 == 0))
            mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)2738, "Failed to remove listen FD from epoll set\n");

          daemon->listen_socket_in_epoll = 0;
        }

      }

      if(may_block == 1)
      {
        signed int return_value_MHD_get_timeout_5;
        return_value_MHD_get_timeout_5=MHD_get_timeout(daemon, &timeout_ll);
        if(return_value_MHD_get_timeout_5 == 1)
        {
          if(timeout_ll >= 2147483647ull)
            timeout_ms = 0x7fffffff;

          else
            timeout_ms = (signed int)timeout_ll;
        }

        else
          timeout_ms = -1;
      }

      else
        timeout_ms = 0;
      num_events = 128;
      while(num_events == 128)
      {
        num_events=epoll_wait(daemon->epoll_fd, events, 128, timeout_ms);
        if(num_events == -1)
        {
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          if(*return_value___errno_location_6 == 4)
            return 1;

          signed int *return_value___errno_location_7;
          return_value___errno_location_7=__errno_location();
          char *return_value_strerror_8;
          return_value_strerror_8=strerror(*return_value___errno_location_7);
          MHD_DLOG(daemon, "Call to epoll_wait failed: %s\n", return_value_strerror_8);
          return 0;
        }

        i = (unsigned int)0;
        for( ; !(i >= (unsigned int)num_events); i = i + 1u)
          if(!(events[(signed long int)i].data.ptr == NULL))
          {
            if(!(daemon->wpipe[0l] == -1))
            {
              if(!(daemon->wpipe[0l] == events[(signed long int)i].data.fd))
                goto __CPROVER_DUMP_L18;

              read(daemon->wpipe[(signed long int)0], (void *)&tmp, sizeof(char) /*1ul*/ );
            }

            else
            {

            __CPROVER_DUMP_L18:
              ;
              if(!(daemon == (struct MHD_Daemon *)events[(signed long int)i].data.ptr))
              {
                pos = (struct MHD_Connection *)events[(signed long int)i].data.ptr;
                if(!((1u & events[(signed long int)i].events) == 0u))
                {
                  pos->epoll_state = pos->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_READ_READY;
                  if((signed int)pos->event_loop_info == MHD_EVENT_LOOP_INFO_READ)
                    tmp_if_expr_9 = (_Bool)1;

                  else
                    tmp_if_expr_9 = pos->read_buffer_size > pos->read_buffer_offset ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr_9)
                  {
                    if((MHD_EPOLL_STATE_IN_EREADY_EDLL & (signed int)pos->epoll_state) == 0)
                    {
                      do
                      {
                        pos->nextE = daemon->eready_head;
                        pos->prevE = (struct MHD_Connection *)(void *)0;
                        if(daemon->eready_tail == ((struct MHD_Connection *)NULL))
                          daemon->eready_tail = pos;

                        else
                          daemon->eready_head->prevE = pos;
                        daemon->eready_head = pos;
                      }
                      while((_Bool)0);
                      pos->epoll_state = pos->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_IN_EREADY_EDLL;
                    }

                  }

                }

                if(!((4u & events[(signed long int)i].events) == 0u))
                {
                  pos->epoll_state = pos->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_WRITE_READY;
                  if((signed int)pos->event_loop_info == MHD_EVENT_LOOP_INFO_WRITE)
                  {
                    if((MHD_EPOLL_STATE_IN_EREADY_EDLL & (signed int)pos->epoll_state) == 0)
                    {
                      do
                      {
                        pos->nextE = daemon->eready_head;
                        pos->prevE = (struct MHD_Connection *)(void *)0;
                        if(daemon->eready_tail == ((struct MHD_Connection *)NULL))
                          daemon->eready_tail = pos;

                        else
                          daemon->eready_head->prevE = pos;
                        daemon->eready_head = pos;
                      }
                      while((_Bool)0);
                      pos->epoll_state = pos->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_IN_EREADY_EDLL;
                    }

                  }

                }

              }

              else
              {
                series_length = (unsigned int)0;
                do
                {
                  return_value_MHD_accept_connection_10=MHD_accept_connection(daemon);
                  if(!(return_value_MHD_accept_connection_10 == 1))
                    break;

                  if(daemon->connections >= daemon->connection_limit)
                    break;

                  if(series_length >= 128u)
                    break;

                  series_length = series_length + 1u;
                }
                while((_Bool)1);
              }
            }
          }

      }
      if((MHD_USE_SUSPEND_RESUME & (signed int)daemon->options) == MHD_USE_SUSPEND_RESUME)
      {
        return_value_resume_suspended_connections_11=resume_suspended_connections(daemon);
        if(return_value_resume_suspended_connections_11 == 1)
          may_block = 0;

      }

      pos = daemon->eready_tail;
      if(!(pos == ((struct MHD_Connection *)NULL)))
      {
        do
        {
          if(pos->prevE == ((struct MHD_Connection *)NULL))
            daemon->eready_head = pos->nextE;

          else
            pos->prevE->nextE = pos->nextE;
          if(pos->nextE == ((struct MHD_Connection *)NULL))
            daemon->eready_tail = pos->prevE;

          else
            pos->nextE->prevE = pos->prevE;
          pos->nextE = (struct MHD_Connection *)(void *)0;
          pos->prevE = (struct MHD_Connection *)(void *)0;
        }
        while((_Bool)0);
        pos->epoll_state = pos->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_IN_EREADY_EDLL;
        if((signed int)pos->event_loop_info == MHD_EVENT_LOOP_INFO_READ)
          pos->read_handler(pos);

        if((signed int)pos->event_loop_info == MHD_EVENT_LOOP_INFO_WRITE)
          pos->write_handler(pos);

        pos->idle_handler(pos);
      }

      next = daemon->manual_timeout_head;
      pos = next;
      if(!(pos == ((struct MHD_Connection *)NULL)))
      {
        next = pos->nextX;
        pos->idle_handler(pos);
      }

      next = daemon->normal_timeout_tail;
      pos = next;
      if(!(pos == ((struct MHD_Connection *)NULL)))
      {
        next = pos->prevX;
        pos->idle_handler(pos);
      }

      return 1;
    }
}

// MHD_fini
// file daemon.c line 4898
void MHD_fini(void)
{
  gnutls_global_deinit();
  MHD_monotonic_sec_counter_finish();
}

// MHD_get_connection_info
// file connection.c line 2790
extern union MHD_ConnectionInfo * MHD_get_connection_info(struct MHD_Connection *connection, enum MHD_ConnectionInfoType info_type, ...)
{
  enum gnutls_cipher_algorithm return_value_gnutls_cipher_get_1;
  enum anonymous_8 return_value_gnutls_protocol_get_version_2;
  switch((signed int)info_type)
  {
    case MHD_CONNECTION_INFO_CIPHER_ALGO:
    {
      if(connection->tls_session == ((struct gnutls_session_int *)NULL))
        return (union MHD_ConnectionInfo *)(void *)0;

      return_value_gnutls_cipher_get_1=gnutls_cipher_get(connection->tls_session);
      connection->cipher = (signed int)return_value_gnutls_cipher_get_1;
      return (union MHD_ConnectionInfo *)&connection->cipher;
    }
    case MHD_CONNECTION_INFO_PROTOCOL:
    {
      if(connection->tls_session == ((struct gnutls_session_int *)NULL))
        return (union MHD_ConnectionInfo *)(void *)0;

      return_value_gnutls_protocol_get_version_2=gnutls_protocol_get_version(connection->tls_session);
      connection->protocol = (signed int)return_value_gnutls_protocol_get_version_2;
      return (union MHD_ConnectionInfo *)&connection->protocol;
    }
    case MHD_CONNECTION_INFO_GNUTLS_SESSION:
    {
      if(connection->tls_session == ((struct gnutls_session_int *)NULL))
        return (union MHD_ConnectionInfo *)(void *)0;

      return (union MHD_ConnectionInfo *)&connection->tls_session;
    }
    case MHD_CONNECTION_INFO_CLIENT_ADDRESS:
      return (union MHD_ConnectionInfo *)&connection->addr;
    case MHD_CONNECTION_INFO_DAEMON:
      return (union MHD_ConnectionInfo *)&connection->daemon;
    case MHD_CONNECTION_INFO_CONNECTION_FD:
      return (union MHD_ConnectionInfo *)&connection->socket_fd;
    case MHD_CONNECTION_INFO_SOCKET_CONTEXT:
      return (union MHD_ConnectionInfo *)&connection->socket_context;
    default:
      return (union MHD_ConnectionInfo *)(void *)0;
  }
}

// MHD_get_connection_values
// file connection.c line 127
extern signed int MHD_get_connection_values(struct MHD_Connection *connection, enum MHD_ValueKind kind, signed int (*iterator)(void *, enum MHD_ValueKind, const char *, const char *), void *iterator_cls)
{
  signed int ret;
  struct MHD_HTTP_Header *pos;
  signed int return_value;
  if(connection == ((struct MHD_Connection *)NULL))
    return -1;

  else
  {
    ret = 0;
    pos = connection->headers_received;
    for( ; !(pos == ((struct MHD_HTTP_Header *)NULL)); pos = pos->next)
      if(!(((signed int)pos->kind & (signed int)kind) == 0))
      {
        ret = ret + 1;
        if(!(iterator == ((signed int (*)(void *, enum MHD_ValueKind, const char *, const char *))NULL)))
        {
          return_value=iterator(iterator_cls, kind, pos->header, pos->value);
          if(!(return_value == 1))
            return ret;

        }

      }

    return ret;
  }
}

// MHD_get_daemon_info
// file daemon.c line 4625
extern union MHD_DaemonInfo * MHD_get_daemon_info(struct MHD_Daemon *daemon, enum MHD_DaemonInfoType info_type, ...)
{
  switch((signed int)info_type)
  {
    case MHD_DAEMON_INFO_KEY_SIZE:
      return (union MHD_DaemonInfo *)(void *)0;
    case MHD_DAEMON_INFO_MAC_KEY_SIZE:
      return (union MHD_DaemonInfo *)(void *)0;
    case MHD_DAEMON_INFO_LISTEN_FD:
      return (union MHD_DaemonInfo *)&daemon->socket_fd;
    case MHD_DAEMON_INFO_EPOLL_FD_LINUX_ONLY:
      return (union MHD_DaemonInfo *)&daemon->epoll_fd;
    case MHD_DAEMON_INFO_CURRENT_CONNECTIONS:
    {
      MHD_cleanup_connections(daemon);
      if(!(daemon->worker_pool == ((struct MHD_Daemon *)NULL)))
      {
        unsigned int i;
        daemon->connections = (unsigned int)0;
        i = (unsigned int)0;
        for( ; !(i >= daemon->worker_pool_size); i = i + 1u)
        {
          MHD_cleanup_connections(&daemon->worker_pool[(signed long int)i]);
          daemon->connections = daemon->connections + (daemon->worker_pool + (signed long int)i)->connections;
        }
      }

      return (union MHD_DaemonInfo *)&daemon->connections;
    }
    default:
      return (union MHD_DaemonInfo *)(void *)0;
  }
}

// MHD_get_fdset
// file daemon.c line 678
extern signed int MHD_get_fdset(struct MHD_Daemon *daemon, struct anonymous_3 *read_fd_set, struct anonymous_3 *write_fd_set, struct anonymous_3 *except_fd_set, signed int *max_fd)
{
  signed int return_value_MHD_get_fdset2_1;
  return_value_MHD_get_fdset2_1=MHD_get_fdset2(daemon, read_fd_set, write_fd_set, except_fd_set, max_fd, (unsigned int)1024);
  return return_value_MHD_get_fdset2_1;
}

// MHD_get_fdset2
// file daemon.c line 711
extern signed int MHD_get_fdset2(struct MHD_Daemon *daemon, struct anonymous_3 *read_fd_set, struct anonymous_3 *write_fd_set, struct anonymous_3 *except_fd_set, signed int *max_fd, unsigned int fd_setsize)
{
  struct MHD_Connection *pos;
  _Bool tmp_if_expr_1;
  if(read_fd_set == ((struct anonymous_3 *)NULL) || write_fd_set == ((struct anonymous_3 *)NULL) || daemon == ((struct MHD_Daemon *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = 1 == daemon->shutdown ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = 0 != ((signed int)daemon->options & MHD_USE_THREAD_PER_CONNECTION) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = 0 != ((signed int)daemon->options & MHD_USE_POLL) ? (_Bool)1 : (_Bool)0;
  signed int return_value_add_to_fd_set_5;
  signed int return_value_add_to_fd_set_6;
  signed int return_value_add_to_fd_set_7;
  signed int return_value_add_to_fd_set_8;
  signed int return_value_add_to_fd_set_9;
  if(tmp_if_expr_3)
    return 0;

  else
  {
    if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
    {
      signed int return_value_add_to_fd_set_4;
      return_value_add_to_fd_set_4=add_to_fd_set(daemon->epoll_fd, read_fd_set, max_fd, fd_setsize);
      return return_value_add_to_fd_set_4;
    }

    if(!(daemon->socket_fd == -1))
    {
      return_value_add_to_fd_set_5=add_to_fd_set(daemon->socket_fd, read_fd_set, max_fd, fd_setsize);
      if(return_value_add_to_fd_set_5 == 1)
        goto __CPROVER_DUMP_L9;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L9:
      ;
      pos = daemon->connections_head;
      for( ; !(pos == ((struct MHD_Connection *)NULL)); pos = pos->next)
        switch((signed int)pos->event_loop_info)
        {
          case MHD_EVENT_LOOP_INFO_READ:
          {
            return_value_add_to_fd_set_6=add_to_fd_set(pos->socket_fd, read_fd_set, max_fd, fd_setsize);
            if(!(return_value_add_to_fd_set_6 == 1))
              return 0;

            break;
          }
          case MHD_EVENT_LOOP_INFO_WRITE:
          {
            return_value_add_to_fd_set_7=add_to_fd_set(pos->socket_fd, write_fd_set, max_fd, fd_setsize);
            if(!(return_value_add_to_fd_set_7 == 1))
              return 0;

            if(!(pos->read_buffer_offset >= pos->read_buffer_size))
            {
              return_value_add_to_fd_set_8=add_to_fd_set(pos->socket_fd, read_fd_set, max_fd, fd_setsize);
              if(!(return_value_add_to_fd_set_8 == 1))
                return 0;

            }

            break;
          }
          case MHD_EVENT_LOOP_INFO_BLOCK:
          {
            if(!(pos->read_buffer_offset >= pos->read_buffer_size))
            {
              return_value_add_to_fd_set_9=add_to_fd_set(pos->socket_fd, read_fd_set, max_fd, fd_setsize);
              if(!(return_value_add_to_fd_set_9 == 1))
                return 0;

            }

            break;
          }
          case MHD_EVENT_LOOP_INFO_CLEANUP:
            ;
        }
      return 1;
    }
  }
}

// MHD_get_master
// file daemon.c line 170
static struct MHD_Daemon * MHD_get_master(struct MHD_Daemon *daemon)
{
  for( ; !(daemon->master == ((struct MHD_Daemon *)NULL)); daemon = daemon->master)
    ;
  return daemon;
}

// MHD_get_reason_phrase_for
// file ../../src/include/microhttpd.h line 350
const char * MHD_get_reason_phrase_for(unsigned int code)
{
  if(code >= 100u && !(code >= 600u))
  {
    if(code % 100u >= reasons[(signed long int)(code / 100u)].max)
      goto __CPROVER_DUMP_L1;

    return reasons[(signed long int)(code / (unsigned int)100)].data[(signed long int)(code % (unsigned int)100)];
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return "Unknown";
  }
}

// MHD_get_response_header
// file ../../src/include/microhttpd.h line 2385
extern const char * MHD_get_response_header(struct MHD_Response *response, const char *key)
{
  struct MHD_HTTP_Header *pos;
  signed int return_value_strcmp_1;
  if(key == ((const char *)NULL))
    return (const char *)(void *)0;

  else
  {
    pos = response->first_header;
    for( ; !(pos == ((struct MHD_HTTP_Header *)NULL)); pos = pos->next)
    {
      return_value_strcmp_1=strcmp(key, pos->header);
      if(return_value_strcmp_1 == 0)
        return pos->value;

    }
    return (const char *)(void *)0;
  }
}

// MHD_get_response_headers
// file response.c line 186
extern signed int MHD_get_response_headers(struct MHD_Response *response, signed int (*iterator)(void *, enum MHD_ValueKind, const char *, const char *), void *iterator_cls)
{
  struct MHD_HTTP_Header *pos;
  signed int numHeaders = 0;
  pos = response->first_header;
  signed int return_value;
  for( ; !(pos == ((struct MHD_HTTP_Header *)NULL)); pos = pos->next)
  {
    numHeaders = numHeaders + 1;
    if(!(iterator == ((signed int (*)(void *, enum MHD_ValueKind, const char *, const char *))NULL)))
    {
      return_value=iterator(iterator_cls, pos->kind, pos->header, pos->value);
      if(!(return_value == 1))
        break;

    }

  }
  return numHeaders;
}

// MHD_get_timeout
// file daemon.c line 2118
extern signed int MHD_get_timeout(struct MHD_Daemon *daemon, unsigned long long int *timeout)
{
  signed long int earliest_deadline;
  signed long int now;
  struct MHD_Connection *pos;
  signed int have_timeout;
  _Bool tmp_if_expr_1;
  unsigned long int return_value_gnutls_record_check_pending_2;
  _Bool tmp_if_expr_3;
  unsigned long int return_value_gnutls_record_check_pending_4;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    MHD_DLOG(daemon, "Illegal call to MHD_get_timeout\n");
    return 0;
  }

  else
    if(!(daemon->num_tls_read_ready == 0u))
    {
      *timeout = (unsigned long long int)0;
      return 1;
    }

    else
    {
      have_timeout = 0;
      earliest_deadline = (signed long int)0;
      pos = daemon->manual_timeout_head;
      for( ; !(pos == ((struct MHD_Connection *)NULL)); pos = pos->nextX)
        if(!(pos->connection_timeout == 0u))
        {
          if(have_timeout == 0)
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = earliest_deadline > pos->last_activity + (signed long int)pos->connection_timeout ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_1)
            earliest_deadline = pos->last_activity + (signed long int)pos->connection_timeout;

          if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
          {
            return_value_gnutls_record_check_pending_2=gnutls_record_check_pending(pos->tls_session);
            if(!(return_value_gnutls_record_check_pending_2 == 0ul))
              earliest_deadline = (signed long int)0;

          }

          have_timeout = 1;
        }

      pos = daemon->normal_timeout_head;
      if(!(pos == ((struct MHD_Connection *)NULL)))
      {
        if(!(pos->connection_timeout == 0u))
        {
          if(have_timeout == 0)
            tmp_if_expr_3 = (_Bool)1;

          else
            tmp_if_expr_3 = earliest_deadline > pos->last_activity + (signed long int)pos->connection_timeout ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_3)
            earliest_deadline = pos->last_activity + (signed long int)pos->connection_timeout;

          if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
          {
            return_value_gnutls_record_check_pending_4=gnutls_record_check_pending(pos->tls_session);
            if(!(return_value_gnutls_record_check_pending_4 == 0ul))
              earliest_deadline = (signed long int)0;

          }

          have_timeout = 1;
        }

      }

      if(have_timeout == 0)
        return 0;

      else
      {
        now=MHD_monotonic_sec_counter();
        if(!(earliest_deadline >= now))
          *timeout = (unsigned long long int)0;

        else
        {
          const signed long int second_left = earliest_deadline - now;
          if((unsigned long int)second_left >= 18446744073709552ul)
            *timeout = (unsigned long int)0x7fffffffffffffffLL * 2ULL + 1ULL;

          else
            *timeout = (unsigned long long int)((signed long int)1000 * second_left);
        }
        return 1;
      }
    }
}

// MHD_get_version
// file daemon.c line 4693
extern const char * MHD_get_version(void)
{
  return "0.9.44";
}

// MHD_handle_connection
// file daemon.c line 785
static void * MHD_handle_connection(void *data)
{
  struct MHD_Connection *con = (struct MHD_Connection *)data;
  signed int num_ready;
  struct anonymous_3 rs;
  struct anonymous_3 ws;
  signed int max;
  struct timeval tv;
  struct timeval *tvp;
  unsigned int timeout;
  signed long int now;
  struct pollfd p[1l];
  timeout = con->daemon->connection_timeout;
  signed int return_value_add_to_fd_set_1;
  signed int return_value_add_to_fd_set_2;
  signed int return_value_add_to_fd_set_3;
  signed int return_value_add_to_fd_set_4;
  _Bool tmp_if_expr_9;
  signed int return_value;
  signed int return_value_poll_13;
  _Bool tmp_if_expr_14;
  signed int return_value_1;
  while(!(con->daemon->shutdown == 1))
  {
    if((signed int)con->state == MHD_CONNECTION_CLOSED)
      break;

    tvp = (struct timeval *)(void *)0;
    if(con->tls_read_ready == 1)
    {
      tv.tv_sec = (signed long int)0;
      tv.tv_usec = (signed long int)0;
      tvp = &tv;
    }

    if(tvp == ((struct timeval *)NULL) && timeout >= 1u)
    {
      now=MHD_monotonic_sec_counter();
      if(!((signed long int)timeout >= now + -con->last_activity))
        tv.tv_sec = (signed long int)0;

      else
      {
        const signed long int seconds_left = (signed long int)timeout - (now - con->last_activity);
        tv.tv_sec = seconds_left;
      }
      tv.tv_usec = (signed long int)0;
      tvp = &tv;
    }

    if((MHD_USE_POLL & (signed int)con->daemon->options) == 0)
    {
      signed int err_state = 0;
      do
      {
        signed int MHD_handle_connection__1__1__3__1____d0;
        signed int MHD_handle_connection__1__1__3__1____d1;
        asm("cld; rep; stosq" : "=c"(MHD_handle_connection__1__1__3__1____d0), "=D"(MHD_handle_connection__1__1__3__1____d1) : "a"(0), "0"(sizeof(struct anonymous_3) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rs)->fds_bits[(signed long int)0]) : "memory");
      }
      while((_Bool)0);
      do
      {
        signed int __d0;
        signed int __d1;
        asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_3) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&ws)->fds_bits[(signed long int)0]) : "memory");
      }
      while((_Bool)0);
      max = 0;
      switch((signed int)con->event_loop_info)
      {
        case MHD_EVENT_LOOP_INFO_READ:
        {
          return_value_add_to_fd_set_1=add_to_fd_set(con->socket_fd, &rs, &max, (unsigned int)1024);
          if(!(return_value_add_to_fd_set_1 == 1))
            err_state = 1;

          goto __CPROVER_DUMP_L16;
        }
        case MHD_EVENT_LOOP_INFO_WRITE:
        {
          return_value_add_to_fd_set_2=add_to_fd_set(con->socket_fd, &ws, &max, (unsigned int)1024);
          if(!(return_value_add_to_fd_set_2 == 1))
            err_state = 1;

          if(!(con->read_buffer_offset >= con->read_buffer_size))
          {
            return_value_add_to_fd_set_3=add_to_fd_set(con->socket_fd, &rs, &max, (unsigned int)1024);
            if(!(return_value_add_to_fd_set_3 == 1))
              err_state = 1;

          }

          goto __CPROVER_DUMP_L16;
        }
        case MHD_EVENT_LOOP_INFO_BLOCK:
        {
          if(!(con->read_buffer_offset >= con->read_buffer_size))
          {
            return_value_add_to_fd_set_4=add_to_fd_set(con->socket_fd, &rs, &max, (unsigned int)1024);
            if(!(return_value_add_to_fd_set_4 == 1))
              err_state = 1;

          }

          tv.tv_sec = (signed long int)0;
          tv.tv_usec = (signed long int)0;
          tvp = &tv;
          goto __CPROVER_DUMP_L16;
        }
        case MHD_EVENT_LOOP_INFO_CLEANUP:
          goto exit;
        default:
        {

        __CPROVER_DUMP_L16:
          ;
          if(!(err_state == 0))
          {
            MHD_DLOG(con->daemon, "Can't add FD to fd_set\n");
            goto exit;
          }

          num_ready=select(max + 1, &rs, &ws, (struct anonymous_3 *)(void *)0, tvp);
          if(!(num_ready >= 0))
          {
            signed int *return_value___errno_location_5;
            return_value___errno_location_5=__errno_location();
            if(*return_value___errno_location_5 == 4)
              goto __CPROVER_DUMP_L37;

            signed int *return_value___errno_location_6;
            return_value___errno_location_6=__errno_location();
            signed int *return_value___errno_location_7;
            return_value___errno_location_7=__errno_location();
            char *return_value_strerror_8;
            return_value_strerror_8=strerror(*return_value___errno_location_7);
            MHD_DLOG(con->daemon, "Error during select (%d): `%s'\n", *return_value___errno_location_6, return_value_strerror_8);
            goto __CPROVER_DUMP_L38;
          }

          if(!((rs.fds_bits[(signed long int)(con->socket_fd / 8)] & (signed long int)(1UL << con->socket_fd % 8)) == 0l))
            tmp_if_expr_9 = (_Bool)1;

          else
            tmp_if_expr_9 = 1 == con->tls_read_ready ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_9)
            con->read_handler(con);

          if(!((ws.fds_bits[(signed long int)(con->socket_fd / 8)] & (signed long int)(1UL << con->socket_fd % 8)) == 0l))
            con->write_handler(con);

          return_value=con->idle_handler(con);
        }
      }
    }

    else
    {
      memset((void *)&p, 0, sizeof(struct pollfd [1l]) /*8ul*/ );
      p[(signed long int)0].fd = con->socket_fd;
      switch((signed int)con->event_loop_info)
      {
        case MHD_EVENT_LOOP_INFO_READ:
        {
          p[(signed long int)0].events = p[(signed long int)0].events | (signed short int)0x001;
          goto __CPROVER_DUMP_L30;
        }
        case MHD_EVENT_LOOP_INFO_WRITE:
        {
          p[(signed long int)0].events = p[(signed long int)0].events | (signed short int)0x004;
          if(!(con->read_buffer_offset >= con->read_buffer_size))
            p[(signed long int)0].events = p[(signed long int)0].events | (signed short int)0x001;

          goto __CPROVER_DUMP_L30;
        }
        case MHD_EVENT_LOOP_INFO_BLOCK:
        {
          if(!(con->read_buffer_offset >= con->read_buffer_size))
            p[(signed long int)0].events = p[(signed long int)0].events | (signed short int)0x001;

          tv.tv_sec = (signed long int)0;
          tv.tv_usec = (signed long int)0;
          tvp = &tv;
          goto __CPROVER_DUMP_L30;
        }
        case MHD_EVENT_LOOP_INFO_CLEANUP:
          goto exit;
        default:
        {

        __CPROVER_DUMP_L30:
          ;
          return_value_poll_13=poll(p, (unsigned long int)1, (signed int)((struct timeval *)(void *)0 == tvp ? (signed long int)-1 : tv.tv_sec * (signed long int)1000));
          if(!(return_value_poll_13 >= 0))
          {
            signed int *return_value___errno_location_10;
            return_value___errno_location_10=__errno_location();
            if(*return_value___errno_location_10 == 4)
              break;

            signed int *return_value___errno_location_11;
            return_value___errno_location_11=__errno_location();
            char *return_value_strerror_12;
            return_value_strerror_12=strerror(*return_value___errno_location_11);
            MHD_DLOG(con->daemon, "Error during poll: `%s'\n", return_value_strerror_12);
            goto __CPROVER_DUMP_L38;
          }

          if(!((0x001 & (signed int)p[0l].revents) == 0))
            tmp_if_expr_14 = (_Bool)1;

          else
            tmp_if_expr_14 = 1 == con->tls_read_ready ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_14)
            con->read_handler(con);

          if(!((0x004 & (signed int)p[0l].revents) == 0))
            con->write_handler(con);

          if(!((24 & (signed int)p[0l].revents) == 0))
            MHD_connection_close(con, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_WITH_ERROR);

          return_value_1=con->idle_handler(con);
        }
      }
    }

  __CPROVER_DUMP_L37:
    ;
  }

__CPROVER_DUMP_L38:
  ;
  if(!((signed int)con->state == MHD_CONNECTION_IN_CLEANUP))
  {
    if(!((signed int)con->state == MHD_CONNECTION_CLOSED))
      MHD_connection_close(con, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_DAEMON_SHUTDOWN);

    con->idle_handler(con);
  }


exit:
  ;
  if(!(con->response == ((struct MHD_Response *)NULL)))
  {
    MHD_destroy_response(con->response);
    con->response = (struct MHD_Response *)(void *)0;
  }

  if(!(con->daemon->notify_connection == ((void (*)(void *, struct MHD_Connection *, void **, enum MHD_ConnectionNotificationCode))NULL)))
    con->daemon->notify_connection(con->daemon->notify_connection_cls, con, &con->socket_context, (enum MHD_ConnectionNotificationCode)MHD_CONNECTION_NOTIFY_CLOSED);

  return (void *)0;
}

// MHD_http_unescape
// file ../../src/include/microhttpd.h line 1855
extern unsigned long int MHD_http_unescape(char *val)
{
  char *rpos = val;
  char *wpos = val;
  char *end;
  unsigned int num;
  char buf3[3l];
  _Bool tmp_if_expr_1;
  unsigned long int return_value_strtoul_2;
  while(!((signed int)*rpos == 0))
  {
    if((signed int)*rpos == 37)
    {
      if((signed int)rpos[1l] == 0)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = 0 == (signed int)rpos[(signed long int)2] ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        *wpos = (char)0;
        return (unsigned long int)(wpos - val);
      }

      buf3[(signed long int)0] = rpos[(signed long int)1];
      buf3[(signed long int)1] = rpos[(signed long int)2];
      buf3[(signed long int)2] = (char)0;
      return_value_strtoul_2=strtoul(buf3, &end, 16);
      num = (unsigned int)return_value_strtoul_2;
      if((signed int)*end == 0)
      {
        *wpos = (char)(unsigned char)num;
        wpos = wpos + 1l;
        rpos = rpos + (signed long int)3;
        continue;
      }

    }

    *wpos = *rpos;
    wpos = wpos + 1l;
    rpos = rpos + 1l;
  }
  *wpos = (char)0;
  return (unsigned long int)(wpos - val);
}

// MHD_increment_response_rc
// file response.h line 35
void MHD_increment_response_rc(struct MHD_Response *response)
{
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(&response->mutex);
  (void)(0 == return_value_pthread_mutex_lock_1 ? 1 : 0);
  response->reference_count = response->reference_count + 1u;
  signed int return_value_pthread_mutex_unlock_2;
  return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&response->mutex);
  (void)(0 == return_value_pthread_mutex_unlock_2 ? 1 : 0);
}

// MHD_init
// file daemon.c line 4865
void MHD_init(void)
{
  mhd_panic = mhd_panic_std;
  mhd_panic_cls = (void *)0;
  const char *return_value_gcry_check_version_1;
  return_value_gcry_check_version_1=gcry_check_version("1.6.0");
  if(return_value_gcry_check_version_1 == ((const char *)NULL))
    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4890, "libgcrypt is too old. MHD was compiled for libgcrypt 1.6.0 or newer\n");

  gnutls_global_init();
  MHD_monotonic_sec_counter_init();
}

// MHD_init_daemon_certificate
// file daemon.c line 508
static signed int MHD_init_daemon_certificate(struct MHD_Daemon *daemon)
{
  struct anonymous_2 key;
  struct anonymous_2 cert;
  signed int ret;
  if(!(daemon->cert_callback == ((signed int (*)(struct gnutls_session_int *, const struct anonymous_2 *, signed int, const enum anonymous_9 *, signed int, struct gnutls_pcert_st **, unsigned int *, struct gnutls_privkey_st **))NULL)))
    gnutls_certificate_set_retrieve_function2(daemon->x509_cred, daemon->cert_callback);

  if(!(daemon->https_mem_trust == ((const char *)NULL)))
  {
    cert.data = (unsigned char *)daemon->https_mem_trust;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(daemon->https_mem_trust);
    cert.size = (unsigned int)return_value_strlen_1;
    signed int return_value_gnutls_certificate_set_x509_trust_mem_2;
    return_value_gnutls_certificate_set_x509_trust_mem_2=gnutls_certificate_set_x509_trust_mem(daemon->x509_cred, &cert, (enum anonymous_1)GNUTLS_X509_FMT_PEM);
    if(!(return_value_gnutls_certificate_set_x509_trust_mem_2 >= 0))
    {
      MHD_DLOG(daemon, "Bad trust certificate format\n");
      return -1;
    }

  }

  if(daemon->have_dhparams == 1)
    gnutls_certificate_set_dh_params(daemon->x509_cred, daemon->https_mem_dhparams);

  const char *return_value_gnutls_strerror_5;
  if(!(daemon->https_mem_cert == ((const char *)NULL)))
  {
    if(!(daemon->https_mem_key == ((const char *)NULL)))
    {
      key.data = (unsigned char *)daemon->https_mem_key;
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(daemon->https_mem_key);
      key.size = (unsigned int)return_value_strlen_3;
      cert.data = (unsigned char *)daemon->https_mem_cert;
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(daemon->https_mem_cert);
      cert.size = (unsigned int)return_value_strlen_4;
      if(!(daemon->https_key_password == ((const char *)NULL)))
        ret=gnutls_certificate_set_x509_key_mem2(daemon->x509_cred, &cert, &key, (enum anonymous_1)GNUTLS_X509_FMT_PEM, daemon->https_key_password, (unsigned int)0);

      else
        ret=gnutls_certificate_set_x509_key_mem(daemon->x509_cred, &cert, &key, (enum anonymous_1)GNUTLS_X509_FMT_PEM);
      if(!(ret == 0))
      {
        return_value_gnutls_strerror_5=gnutls_strerror(ret);
        MHD_DLOG(daemon, "GnuTLS failed to setup x509 certificate/key: %s\n", return_value_gnutls_strerror_5);
      }

      return ret;
    }

  }

  if(!(daemon->cert_callback == ((signed int (*)(struct gnutls_session_int *, const struct anonymous_2 *, signed int, const enum anonymous_9 *, signed int, struct gnutls_pcert_st **, unsigned int *, struct gnutls_privkey_st **))NULL)))
    return 0;

  else
  {
    MHD_DLOG(daemon, "You need to specify a certificate and key location\n");
    return -1;
  }
}

// MHD_ip_addr_compare
// file daemon.c line 252
static signed int MHD_ip_addr_compare(const void *a1, const void *a2)
{
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp(a1, a2, 20ul);
  return return_value_memcmp_1;
}

// MHD_ip_addr_to_key
// file daemon.c line 267
static signed int MHD_ip_addr_to_key(struct sockaddr *addr, unsigned int addrlen, struct MHD_IPCount *key)
{
  memset((void *)key, 0, sizeof(struct MHD_IPCount) /*24ul*/ );
  if((unsigned long int)addrlen == sizeof(struct sockaddr_in) /*16ul*/ )
  {
    struct sockaddr_in *addr4 = (struct sockaddr_in *)addr;
    key->family = 2;
    memcpy((void *)&key->addr.ipv4, (const void *)&addr4->sin_addr, sizeof(struct in_addr) /*4ul*/ );
    return 1;
  }

  if((unsigned long int)addrlen == sizeof(struct sockaddr_in6) /*28ul*/ )
  {
    struct sockaddr_in6 *addr6 = (struct sockaddr_in6 *)addr;
    key->family = 10;
    memcpy((void *)&key->addr.ipv6, (const void *)&addr6->sin6_addr, sizeof(struct in6_addr) /*16ul*/ );
    return 1;
  }

  return 0;
}

// MHD_ip_count_lock
// file daemon.c line 218
static void MHD_ip_count_lock(struct MHD_Daemon *daemon)
{
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(&daemon->per_ip_connection_mutex);
  if(!(return_value_pthread_mutex_lock_1 == 0))
    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)222, "Failed to acquire IP connection limit mutex\n");

}

// MHD_ip_count_unlock
// file daemon.c line 233
static void MHD_ip_count_unlock(struct MHD_Daemon *daemon)
{
  signed int return_value_pthread_mutex_unlock_1;
  return_value_pthread_mutex_unlock_1=pthread_mutex_unlock(&daemon->per_ip_connection_mutex);
  if(!(return_value_pthread_mutex_unlock_1 == 0))
    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)237, "Failed to release IP connection limit mutex\n");

}

// MHD_ip_limit_add
// file daemon.c line 308
static signed int MHD_ip_limit_add(struct MHD_Daemon *daemon, struct sockaddr *addr, unsigned int addrlen)
{
  struct MHD_IPCount *key;
  void **nodep;
  void *node;
  signed int result;
  daemon=MHD_get_master(daemon);
  if(daemon->per_ip_connection_limit == 0u)
    return 1;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct MHD_IPCount) /*24ul*/ );
    key = (struct MHD_IPCount *)return_value_malloc_1;
    if(key == ((struct MHD_IPCount *)NULL))
      return 0;

    else
    {
      signed int return_value_MHD_ip_addr_to_key_2;
      return_value_MHD_ip_addr_to_key_2=MHD_ip_addr_to_key(addr, addrlen, key);
      if(return_value_MHD_ip_addr_to_key_2 == 0)
      {
        free((void *)key);
        return 1;
      }

      else
      {
        MHD_ip_count_lock(daemon);
        void *return_value_tsearch_3;
        return_value_tsearch_3=tsearch((const void *)key, &daemon->per_ip_connection_count, MHD_ip_addr_compare);
        nodep = (void **)return_value_tsearch_3;
        if(nodep == ((void **)NULL))
        {
          MHD_DLOG(daemon, "Failed to add IP connection count node\n");
          MHD_ip_count_unlock(daemon);
          free((void *)key);
          return 0;
        }

        else
        {
          node = *nodep;
          if(!((struct MHD_IPCount *)node == key))
            free((void *)key);

          key = (struct MHD_IPCount *)node;
          result = key->count < daemon->per_ip_connection_limit ? 1 : 0;
          if(result == 1)
            key->count = key->count + 1u;

          MHD_ip_count_unlock(daemon);
          return result;
        }
      }
    }
  }
}

// MHD_ip_limit_del
// file daemon.c line 372
static void MHD_ip_limit_del(struct MHD_Daemon *daemon, struct sockaddr *addr, unsigned int addrlen)
{
  struct MHD_IPCount search_key;
  struct MHD_IPCount *found_key;
  void **nodep;
  daemon=MHD_get_master(daemon);
  if(!(daemon->per_ip_connection_limit == 0u))
  {
    signed int return_value_MHD_ip_addr_to_key_1;
    return_value_MHD_ip_addr_to_key_1=MHD_ip_addr_to_key(addr, addrlen, &search_key);
    if(!(return_value_MHD_ip_addr_to_key_1 == 0))
    {
      MHD_ip_count_lock(daemon);
      void *return_value_tfind_2;
      return_value_tfind_2=tfind((const void *)&search_key, &daemon->per_ip_connection_count, MHD_ip_addr_compare);
      nodep = (void **)return_value_tfind_2;
      if(nodep == ((void **)NULL))
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)397, "Failed to find previously-added IP address\n");

      found_key = (struct MHD_IPCount *)*nodep;
      if(found_key->count == 0u)
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)403, "Previously-added IP address had 0 count\n");

      found_key->count = found_key->count - 1u;
      if(found_key->count == 0u)
      {
        tdelete((const void *)found_key, &daemon->per_ip_connection_count, MHD_ip_addr_compare);
        free((void *)found_key);
      }

      MHD_ip_count_unlock(daemon);
    }

  }

}

// MHD_is_feature_supported
// file daemon.c line 4725
extern signed int MHD_is_feature_supported(enum MHD_FEATURE feature)
{
  switch((signed int)feature)
  {
    case MHD_FEATURE_MESSGES:
      return 1;
    case MHD_FEATURE_SSL:
      return 1;
    case MHD_FEATURE_HTTPS_CERT_CALLBACK:
      return 1;
    case MHD_FEATURE_IPv6:
      return 1;
    case MHD_FEATURE_IPv6_ONLY:
      return 1;
    case MHD_FEATURE_POLL:
      return 1;
    case MHD_FEATURE_EPOLL:
      return 1;
    case MHD_FEATURE_SHUTDOWN_LISTEN_SOCKET:
      return 1;
    case MHD_FEATURE_SOCKETPAIR:
      return 0;
    case MHD_FEATURE_TCP_FASTOPEN:
      return 1;
    case MHD_FEATURE_BASIC_AUTH:
      return 1;
    case MHD_FEATURE_DIGEST_AUTH:
      return 1;
    case MHD_FEATURE_POSTPROCESSOR:
      return 1;
    case MHD_FEATURE_HTTPS_KEY_PASSWORD:
      return 1;
    case MHD_FEATURE_LARGE_FILE:
      return 1;
    default:
      return 0;
  }
}

// MHD_lookup_connection_value
// file connection.c line 216
extern const char * MHD_lookup_connection_value(struct MHD_Connection *connection, enum MHD_ValueKind kind, const char *key)
{
  struct MHD_HTTP_Header *pos;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  signed int return_value_strcasecmp_1;
  if(connection == ((struct MHD_Connection *)NULL))
    return (const char *)(void *)0;

  else
  {
    pos = connection->headers_received;
    for( ; !(pos == ((struct MHD_HTTP_Header *)NULL)); pos = pos->next)
      if(!(((signed int)pos->kind & (signed int)kind) == 0))
      {
        if(key == pos->header)
          tmp_if_expr_3 = (_Bool)1;

        else
        {
          if(!(pos->header == ((char *)NULL)) && !(key == ((const char *)NULL)))
          {
            return_value_strcasecmp_1=strcasecmp(key, pos->header);
            tmp_if_expr_2 = 0 == return_value_strcasecmp_1 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_2 = (_Bool)0;
          tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_3)
          return pos->value;

      }

    return (const char *)(void *)0;
  }
}

// MHD_monotonic_sec_counter
// file mhd_mono_clock.h line 52
signed long int MHD_monotonic_sec_counter(void)
{
  struct timespec ts;
  signed int return_value_clock_gettime_1;
  if(!(mono_clock_id == 0))
  {
    return_value_clock_gettime_1=clock_gettime(mono_clock_id, &ts);
    if(!(return_value_clock_gettime_1 == 0))
      goto __CPROVER_DUMP_L1;

    return ts.tv_sec - mono_clock_start;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    signed long int return_value_time_2;
    return_value_time_2=time((signed long int *)(void *)0);
    return return_value_time_2 - sys_clock_start;
  }
}

// MHD_monotonic_sec_counter_finish
// file mhd_mono_clock.h line 41
void MHD_monotonic_sec_counter_finish(void)
{
  ;
}

// MHD_monotonic_sec_counter_init
// file mhd_mono_clock.h line 34
void MHD_monotonic_sec_counter_init(void)
{
  enum _MHD_mono_clock_source mono_clock_source = (enum _MHD_mono_clock_source)_MHD_CLOCK_NO_SOURCE;
  struct timespec ts;
  mono_clock_id = 0;
  signed int return_value_clock_gettime_4;
  signed int return_value_clock_gettime_3;
  signed int return_value_clock_gettime_2;
  signed int return_value_clock_gettime_1;
  return_value_clock_gettime_4=clock_gettime(6, &ts);
  if(return_value_clock_gettime_4 == 0)
  {
    mono_clock_id = 6;
    mono_clock_start = ts.tv_sec;
    mono_clock_source = (enum _MHD_mono_clock_source)_MHD_CLOCK_GETTIME;
  }

  else
  {
    return_value_clock_gettime_3=clock_gettime(4, &ts);
    if(return_value_clock_gettime_3 == 0)
    {
      mono_clock_id = 4;
      mono_clock_start = ts.tv_sec;
      mono_clock_source = (enum _MHD_mono_clock_source)_MHD_CLOCK_GETTIME;
    }

    else
    {
      return_value_clock_gettime_2=clock_gettime(7, &ts);
      if(return_value_clock_gettime_2 == 0)
      {
        mono_clock_id = 7;
        mono_clock_start = ts.tv_sec;
        mono_clock_source = (enum _MHD_mono_clock_source)_MHD_CLOCK_GETTIME;
      }

      else
      {
        return_value_clock_gettime_1=clock_gettime(1, &ts);
        if(return_value_clock_gettime_1 == 0)
        {
          mono_clock_id = 1;
          mono_clock_start = ts.tv_sec;
          mono_clock_source = (enum _MHD_mono_clock_source)_MHD_CLOCK_GETTIME;
        }

        else
          mono_clock_source = (enum _MHD_mono_clock_source)_MHD_CLOCK_NO_SOURCE;
      }
    }
  }
  (void)mono_clock_source;
  sys_clock_start=time((signed long int *)(void *)0);
}

// MHD_poll
// file daemon.c line 2653
static signed int MHD_poll(struct MHD_Daemon *daemon, signed int may_block)
{
  signed int return_value_MHD_poll_all_1;
  signed int return_value_MHD_poll_listen_socket_2;
  if(daemon->shutdown == 1)
    return 0;

  else
    if((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0)
    {
      return_value_MHD_poll_all_1=MHD_poll_all(daemon, may_block);
      return return_value_MHD_poll_all_1;
    }

    else
    {
      return_value_MHD_poll_listen_socket_2=MHD_poll_listen_socket(daemon, may_block);
      return return_value_MHD_poll_listen_socket_2;
    }
}

// MHD_poll_all
// file daemon.c line 2409
static signed int MHD_poll_all(struct MHD_Daemon *daemon, signed int may_block)
{
  unsigned int num_connections;
  struct MHD_Connection *pos;
  struct MHD_Connection *next;
  signed int return_value_resume_suspended_connections_1;
  if((MHD_USE_SUSPEND_RESUME & (signed int)daemon->options) == MHD_USE_SUSPEND_RESUME)
  {
    return_value_resume_suspended_connections_1=resume_suspended_connections(daemon);
    if(return_value_resume_suspended_connections_1 == 1)
      may_block = 0;

  }

  num_connections = (unsigned int)0;
  pos = daemon->connections_head;
  for( ; !(pos == ((struct MHD_Connection *)NULL)); pos = pos->next)
    num_connections = num_connections + 1u;
  unsigned long long int ltimeout;
  unsigned int i;
  signed int timeout;
  unsigned int poll_server;
  signed int poll_listen;
  signed int poll_pipe;
  char tmp;
  struct pollfd *p;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct pollfd) /*8ul*/  * (unsigned long int)((unsigned int)2 + num_connections));
  p = (struct pollfd *)return_value_malloc_2;
  if(p == ((struct pollfd *)NULL))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    char *return_value_strerror_4;
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    MHD_DLOG(daemon, "Error allocating memory: %s\n", return_value_strerror_4);
    return 0;
  }

  memset((void *)p, 0, sizeof(struct pollfd) /*8ul*/  * (unsigned long int)((unsigned int)2 + num_connections));
  poll_server = (unsigned int)0;
  poll_listen = -1;
  if(!(daemon->socket_fd == -1))
  {
    if(!(daemon->connections >= daemon->connection_limit))
    {
      (p + (signed long int)poll_server)->fd = daemon->socket_fd;
      (p + (signed long int)poll_server)->events = (signed short int)0x001;
      (p + (signed long int)poll_server)->revents = (signed short int)0;
      poll_listen = (signed int)poll_server;
      poll_server = poll_server + 1u;
    }

  }

  poll_pipe = -1;
  if(!(daemon->wpipe[0l] == -1))
  {
    (p + (signed long int)poll_server)->fd = daemon->wpipe[(signed long int)0];
    (p + (signed long int)poll_server)->events = (signed short int)0x001;
    (p + (signed long int)poll_server)->revents = (signed short int)0;
    poll_pipe = (signed int)poll_server;
    poll_server = poll_server + 1u;
  }

  _Bool tmp_if_expr_6;
  signed int return_value_MHD_get_timeout_5;
  if(may_block == 0)
    timeout = 0;

  else
  {
    if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_MHD_get_timeout_5=MHD_get_timeout(daemon, &ltimeout);
      tmp_if_expr_6 = 1 != return_value_MHD_get_timeout_5 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
      timeout = -1;

    else
      timeout = ltimeout > (unsigned long int)0x7fffffff ? 0x7fffffff : (signed int)ltimeout;
  }
  i = (unsigned int)0;
  pos = daemon->connections_head;
  for( ; !(pos == ((struct MHD_Connection *)NULL)); pos = pos->next)
  {
    (p + (signed long int)(poll_server + i))->fd = pos->socket_fd;
    switch((signed int)pos->event_loop_info)
    {
      case MHD_EVENT_LOOP_INFO_READ:
      {
        (p + (signed long int)(poll_server + i))->events = (p + (signed long int)(poll_server + i))->events | (signed short int)0x001;
        break;
      }
      case MHD_EVENT_LOOP_INFO_WRITE:
      {
        (p + (signed long int)(poll_server + i))->events = (p + (signed long int)(poll_server + i))->events | (signed short int)0x004;
        if(!(pos->read_buffer_offset >= pos->read_buffer_size))
          (p + (signed long int)(poll_server + i))->events = (p + (signed long int)(poll_server + i))->events | (signed short int)0x001;

        break;
      }
      case MHD_EVENT_LOOP_INFO_BLOCK:
      {
        if(!(pos->read_buffer_offset >= pos->read_buffer_size))
          (p + (signed long int)(poll_server + i))->events = (p + (signed long int)(poll_server + i))->events | (signed short int)0x001;

        break;
      }
      case MHD_EVENT_LOOP_INFO_CLEANUP:
        timeout = 0;
    }
    i = i + 1u;
  }
  if(poll_server + num_connections == 0u)
  {
    free((void *)p);
    return 1;
  }

  else
  {
    signed int return_value_poll_10;
    return_value_poll_10=poll(p, (unsigned long int)(poll_server + num_connections), timeout);
    if(!(return_value_poll_10 >= 0))
    {
      signed int *return_value___errno_location_7;
      return_value___errno_location_7=__errno_location();
      if(*return_value___errno_location_7 == 4)
      {
        free((void *)p);
        return 1;
      }

      signed int *return_value___errno_location_8;
      return_value___errno_location_8=__errno_location();
      char *return_value_strerror_9;
      return_value_strerror_9=strerror(*return_value___errno_location_8);
      MHD_DLOG(daemon, "poll failed: %s\n", return_value_strerror_9);
      free((void *)p);
      return 0;
    }

    if(daemon->shutdown == 1)
    {
      free((void *)p);
      return 0;
    }

    else
    {
      i = (unsigned int)0;
      next = daemon->connections_head;
      do
      {
        pos = next;
        if(pos == ((struct MHD_Connection *)NULL))
          break;

        next = pos->next;
        switch((signed int)pos->event_loop_info)
        {
          case MHD_EVENT_LOOP_INFO_READ:
          {
            if(i >= num_connections)
              break;

            if(!((p + (signed long int)(i + poll_server))->fd == pos->socket_fd))
              break;

            if(!((0x001 & (signed int)(p + (signed long int)(i + poll_server))->revents) == 0))
              pos->read_handler(pos);

            pos->idle_handler(pos);
          }
          case MHD_EVENT_LOOP_INFO_WRITE:
          {
            if(i >= num_connections)
              break;

            if(!((p + (signed long int)(i + poll_server))->fd == pos->socket_fd))
              break;

            if(!((0x001 & (signed int)(p + (signed long int)(i + poll_server))->revents) == 0))
              pos->read_handler(pos);

            if(!((0x004 & (signed int)(p + (signed long int)(i + poll_server))->revents) == 0))
              pos->write_handler(pos);

            pos->idle_handler(pos);
          }
          case MHD_EVENT_LOOP_INFO_BLOCK:
          {
            if(!((0x001 & (signed int)(p + (signed long int)(i + poll_server))->revents) == 0))
              pos->read_handler(pos);

            pos->idle_handler(pos);
          }
          case MHD_EVENT_LOOP_INFO_CLEANUP:
            pos->idle_handler(pos);
        }
      }
      while((_Bool)1);
      if(!(poll_listen == -1))
      {
        if(!((0x001 & (signed int)(p + (signed long int)poll_listen)->revents) == 0))
          MHD_accept_connection(daemon);

      }

      if(!(poll_pipe == -1))
      {
        if(!((0x001 & (signed int)(p + (signed long int)poll_pipe)->revents) == 0))
          read(daemon->wpipe[(signed long int)0], (void *)&tmp, sizeof(char) /*1ul*/ );

      }

      free((void *)p);
      return 1;
    }
  }
}

// MHD_poll_listen_socket
// file daemon.c line 2591
static signed int MHD_poll_listen_socket(struct MHD_Daemon *daemon, signed int may_block)
{
  struct pollfd p[2l];
  signed int timeout;
  unsigned int poll_count;
  signed int poll_listen;
  memset((void *)&p, 0, sizeof(struct pollfd [2l]) /*16ul*/ );
  poll_count = (unsigned int)0;
  poll_listen = -1;
  if(!(daemon->socket_fd == -1))
  {
    p[(signed long int)poll_count].fd = daemon->socket_fd;
    p[(signed long int)poll_count].events = (signed short int)0x001;
    p[(signed long int)poll_count].revents = (signed short int)0;
    poll_listen = (signed int)poll_count;
    poll_count = poll_count + 1u;
  }

  if(!(daemon->wpipe[0l] == -1))
  {
    p[(signed long int)poll_count].fd = daemon->wpipe[(signed long int)0];
    p[(signed long int)poll_count].events = (signed short int)0x001;
    p[(signed long int)poll_count].revents = (signed short int)0;
    poll_count = poll_count + 1u;
  }

  if(may_block == 0)
    timeout = 0;

  else
    timeout = -1;
  if(poll_count == 0u)
    return 1;

  else
  {
    signed int return_value_poll_4;
    return_value_poll_4=poll(p, (unsigned long int)poll_count, timeout);
    if(!(return_value_poll_4 >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      if(*return_value___errno_location_1 == 4)
        return 1;

      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(*return_value___errno_location_2);
      MHD_DLOG(daemon, "poll failed: %s\n", return_value_strerror_3);
      return 0;
    }

    if(daemon->shutdown == 1)
      return 0;

    else
    {
      if(!(poll_listen == -1))
      {
        if(!((0x001 & (signed int)p[(signed long int)poll_listen].revents) == 0))
          MHD_accept_connection(daemon);

      }

      return 1;
    }
  }
}

// MHD_pool_allocate
// file memorypool.h line 72
void * MHD_pool_allocate(struct MemoryPool *pool, unsigned long int size, signed int from_end)
{
  void *ret;
  unsigned long int asize = size + ((unsigned long int)2 * sizeof(void *) /*8ul*/  - (unsigned long int)1) & ~((unsigned long int)2 * sizeof(void *) /*8ul*/  - (unsigned long int)1);
  _Bool tmp_if_expr_1;
  if(asize == 0ul && !(size == 0ul))
    return (void *)0;

  else
  {
    if(!(pool->end >= pool->pos + asize))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = pool->pos + asize < pool->pos ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      return (void *)0;

    else
    {
      if(from_end == 1)
      {
        ret = (void *)&pool->memory[(signed long int)(pool->end - asize)];
        pool->end = pool->end - asize;
      }

      else
      {
        ret = (void *)&pool->memory[(signed long int)pool->pos];
        pool->pos = pool->pos + asize;
      }
      return ret;
    }
  }
}

// MHD_pool_create
// file memorypool.h line 48
struct MemoryPool * MHD_pool_create(unsigned long int max)
{
  struct MemoryPool *pool;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct MemoryPool) /*40ul*/ );
  pool = (struct MemoryPool *)return_value_malloc_1;
  void *return_value_mmap_2;
  _Bool tmp_if_expr_4;
  if(pool == ((struct MemoryPool *)NULL))
    return (struct MemoryPool *)(void *)0;

  else
  {
    if(!(max >= 32769ul))
      pool->memory = (char *)(void *)-1;

    else
    {
      return_value_mmap_2=mmap((void *)0, max, 0x1 | 0x2, 0x02 | 0x20, -1, (signed long int)0);
      pool->memory = (char *)return_value_mmap_2;
    }
    if(pool->memory == (char *)-1)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = pool->memory == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
    {
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(max);
      pool->memory = (char *)return_value_malloc_3;
      if(pool->memory == ((char *)NULL))
      {
        free((void *)pool);
        return (struct MemoryPool *)(void *)0;
      }

      pool->is_mmap = 0;
    }

    else
      pool->is_mmap = 1;
    pool->pos = (unsigned long int)0;
    pool->end = max;
    pool->size = max;
    return pool;
  }
}

// MHD_pool_destroy
// file memorypool.h line 57
void MHD_pool_destroy(struct MemoryPool *pool)
{
  if(!(pool == ((struct MemoryPool *)NULL)))
  {
    if(pool->is_mmap == 0)
      free((void *)pool->memory);

    else
      munmap((void *)pool->memory, pool->size);
    free((void *)pool);
  }

}

// MHD_pool_reallocate
// file memorypool.h line 94
void * MHD_pool_reallocate(struct MemoryPool *pool, void *old, unsigned long int old_size, unsigned long int new_size)
{
  void *ret;
  unsigned long int asize = new_size + ((unsigned long int)2 * sizeof(void *) /*8ul*/  - (unsigned long int)1) & ~((unsigned long int)2 * sizeof(void *) /*8ul*/  - (unsigned long int)1);
  _Bool tmp_if_expr_1;
  if(asize == 0ul && !(new_size == 0ul))
    return (void *)0;

  else
  {
    if(!(pool->end >= old_size))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = pool->end < asize ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      return (void *)0;

    else
      if(pool->pos >= old_size)
      {
        if(!(pool->memory + (signed long int)pool->pos + -((signed long int)old_size) == (char *)old))
          goto __CPROVER_DUMP_L7;

        if(pool->end >= pool->pos + asize + -old_size)
        {
          pool->pos = pool->pos + (asize - old_size);
          if(!(asize >= old_size))
            memset((void *)&pool->memory[(signed long int)pool->pos], 0, old_size - asize);

          return old;
        }

        return (void *)0;
      }

      else
      {

      __CPROVER_DUMP_L7:
        ;
        if(old_size >= asize)
          return old;

        else
          if(pool->pos + asize >= pool->pos)
          {
            if(!(pool->end >= pool->pos + asize))
              goto __CPROVER_DUMP_L9;

            ret = (void *)&pool->memory[(signed long int)pool->pos];
            memcpy(ret, old, old_size);
            pool->pos = pool->pos + asize;
            return ret;
          }

          else
          {

          __CPROVER_DUMP_L9:
            ;
            return (void *)0;
          }
      }
  }
}

// MHD_pool_reset
// file memorypool.h line 110
void * MHD_pool_reset(struct MemoryPool *pool, void *keep, unsigned long int size)
{
  if(!(keep == NULL))
  {
    if(!((char *)keep == pool->memory))
    {
      memmove((void *)pool->memory, keep, size);
      keep = (void *)pool->memory;
    }

  }

  pool->end = pool->size;
  memset((void *)&pool->memory[(signed long int)size], 0, pool->size - size);
  if(!(keep == NULL))
    pool->pos = size + ((unsigned long int)2 * sizeof(void *) /*8ul*/  - (unsigned long int)1) & ~((unsigned long int)2 * sizeof(void *) /*8ul*/  - (unsigned long int)1);

  return keep;
}

// MHD_post_process
// file postprocessor.c line 1132
extern signed int MHD_post_process(struct MHD_PostProcessor *pp, const char *post_data, unsigned long int post_data_len)
{
  signed int return_value_post_process_urlencoded_1;
  signed int return_value_post_process_multipart_4;
  if(post_data_len == 0ul)
    return 1;

  else
    if(pp == ((struct MHD_PostProcessor *)NULL))
      return 0;

    else
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen("application/x-www-form-urlencoded");
      signed int return_value_strncasecmp_3;
      return_value_strncasecmp_3=strncasecmp("application/x-www-form-urlencoded", pp->encoding, return_value_strlen_2);
      if(return_value_strncasecmp_3 == 0)
      {
        return_value_post_process_urlencoded_1=post_process_urlencoded(pp, post_data, post_data_len);
        return return_value_post_process_urlencoded_1;
      }

      else
      {
        unsigned long int return_value_strlen_5;
        return_value_strlen_5=strlen("multipart/form-data");
        signed int return_value_strncasecmp_6;
        return_value_strncasecmp_6=strncasecmp("multipart/form-data", pp->encoding, return_value_strlen_5);
        if(return_value_strncasecmp_6 == 0)
        {
          return_value_post_process_multipart_4=post_process_multipart(pp, post_data, post_data_len);
          return return_value_post_process_multipart_4;
        }

        else
          return 0;
      }
    }
}

// MHD_queue_auth_fail_response
// file ../../src/include/microhttpd.h line 2513
extern signed int MHD_queue_auth_fail_response(struct MHD_Connection *connection, const char *realm, const char *opaque, struct MHD_Response *response, signed int signal_stale)
{
  signed int ret;
  unsigned long int hlen;
  char nonce[41l];
  signed long int return_value_MHD_monotonic_sec_counter_1;
  return_value_MHD_monotonic_sec_counter_1=MHD_monotonic_sec_counter();
  calculate_nonce((unsigned int)return_value_MHD_monotonic_sec_counter_1, connection->method, connection->daemon->digest_auth_random, connection->daemon->digest_auth_rand_size, connection->url, realm, nonce);
  signed int return_value_check_nonce_nc_2;
  return_value_check_nonce_nc_2=check_nonce_nc(connection, nonce, (unsigned long int)0);
  if(!(return_value_check_nonce_nc_2 == 1))
  {
    MHD_DLOG(connection->daemon, "Could not register nonce (is the nonce array size zero?).\n");
    return 0;
  }

  else
  {
    signed int return_value_snprintf_3;
    return_value_snprintf_3=snprintf((char *)(void *)0, (unsigned long int)0, "Digest realm=\"%s\",qop=\"auth\",nonce=\"%s\",opaque=\"%s\"%s", realm, (const void *)nonce, opaque, signal_stale != 0 ? ",stale=\"true\"" : "");
    hlen = (unsigned long int)return_value_snprintf_3;
    char *header;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(hlen + (unsigned long int)1);
    header = (char *)return_value_malloc_4;
    if(header == ((char *)NULL))
    {
      MHD_DLOG(connection->daemon, "Failed to allocate memory for auth response header\n");
      return 0;
    }

    else
    {
      snprintf(header, hlen + (unsigned long int)1, "Digest realm=\"%s\",qop=\"auth\",nonce=\"%s\",opaque=\"%s\"%s", realm, (const void *)nonce, opaque, signal_stale != 0 ? ",stale=\"true\"" : "");
      ret=MHD_add_response_header(response, "WWW-Authenticate", header);
      free((void *)header);
      if(ret == 1)
        ret=MHD_queue_response(connection, (unsigned int)401, response);

      return ret;
    }
  }
}

// MHD_queue_basic_auth_fail_response
// file basicauth.c line 116
extern signed int MHD_queue_basic_auth_fail_response(struct MHD_Connection *connection, const char *realm, struct MHD_Response *response)
{
  signed int ret;
  unsigned long int hlen;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(realm);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen("Basic realm=\"\"");
  hlen = return_value_strlen_1 + return_value_strlen_2 + (unsigned long int)1;
  char *header;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(hlen);
  header = (char *)return_value_malloc_3;
  if(header == ((char *)NULL))
  {
    MHD_DLOG(connection->daemon, "Failed to allocate memory for auth header\n");
    return 0;
  }

  else
  {
    snprintf(header, hlen, "Basic realm=\"%s\"", realm);
    ret=MHD_add_response_header(response, "WWW-Authenticate", header);
    free((void *)header);
    if(ret == 1)
      ret=MHD_queue_response(connection, (unsigned int)401, response);

    return ret;
  }
}

// MHD_queue_response
// file ../../src/include/microhttpd.h line 1886
extern signed int MHD_queue_response(struct MHD_Connection *connection, unsigned int status_code, struct MHD_Response *response)
{
  _Bool tmp_if_expr_1;
  if(connection == ((struct MHD_Connection *)NULL) || response == ((struct MHD_Response *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (struct MHD_Response *)(void *)0 != connection->response ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    if(!((signed int)connection->state == MHD_CONNECTION_HEADERS_PROCESSED))
      tmp_if_expr_2 = MHD_CONNECTION_FOOTERS_RECEIVED != (signed int)connection->state ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_strcasecmp_4;
  signed int return_value_strcasecmp_5;
  _Bool tmp_if_expr_7;
  signed int return_value_strcasecmp_6;
  if(tmp_if_expr_3)
    return 0;

  else
  {
    MHD_increment_response_rc(response);
    connection->response = response;
    connection->responseCode = status_code;
    if(!(connection->method == ((char *)NULL)))
    {
      return_value_strcasecmp_4=strcasecmp(connection->method, "HEAD");
      if(return_value_strcasecmp_4 == 0)
        connection->response_write_position = response->total_size;

    }

    if((signed int)connection->state == MHD_CONNECTION_HEADERS_PROCESSED)
    {
      if(!(connection->method == ((char *)NULL)))
      {
        return_value_strcasecmp_5=strcasecmp(connection->method, "POST");
        if(return_value_strcasecmp_5 == 0)
          tmp_if_expr_7 = (_Bool)1;

        else
        {
          return_value_strcasecmp_6=strcasecmp(connection->method, "PUT");
          tmp_if_expr_7 = 0 == return_value_strcasecmp_6 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_7)
        {
          connection->read_closed = 1;
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_RECEIVED;
        }

      }

    }

    if(connection->in_idle == 0)
      MHD_connection_handle_idle(connection);

    return 1;
  }
}

// MHD_quiesce_daemon
// file daemon.c line 3032
extern signed int MHD_quiesce_daemon(struct MHD_Daemon *daemon)
{
  unsigned int i;
  signed int ret = daemon->socket_fd;
  if(ret == -1)
    return -1;

  else
    if(daemon->wpipe[1l] == -1)
    {
      if((12 & (signed int)daemon->options) == 0)
        goto __CPROVER_DUMP_L2;

      MHD_DLOG(daemon, "Using MHD_quiesce_daemon in this mode requires MHD_USE_PIPE_FOR_SHUTDOWN\n");
      return -1;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(!(daemon->worker_pool == ((struct MHD_Daemon *)NULL)))
      {
        i = (unsigned int)0;
        for( ; !(i >= daemon->worker_pool_size); i = i + 1u)
        {
          (daemon->worker_pool + (signed long int)i)->socket_fd = -1;
          if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
          {
            if(!((daemon->worker_pool + (signed long int)i)->epoll_fd == -1))
            {
              if((daemon->worker_pool + (signed long int)i)->listen_socket_in_epoll == 1)
              {
                signed int return_value_epoll_ctl_1;
                return_value_epoll_ctl_1=epoll_ctl((daemon->worker_pool + (signed long int)i)->epoll_fd, 2, ret, (struct epoll_event *)(void *)0);
                if(!(return_value_epoll_ctl_1 == 0))
                  mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)3063, "Failed to remove listen FD from epoll set\n");

                (daemon->worker_pool + (signed long int)i)->listen_socket_in_epoll = 0;
              }

            }

          }

        }
      }

      daemon->socket_fd = -1;
      if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
      {
        if(!(daemon->epoll_fd == -1))
        {
          if(daemon->listen_socket_in_epoll == 1)
          {
            signed int return_value_epoll_ctl_2;
            return_value_epoll_ctl_2=epoll_ctl(daemon->epoll_fd, 2, ret, (struct epoll_event *)(void *)0);
            if(!(return_value_epoll_ctl_2 == 0))
              mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)3078, "Failed to remove listen FD from epoll set\n");

            daemon->listen_socket_in_epoll = 0;
          }

        }

      }

      return ret;
    }
}

// MHD_resume_connection
// file daemon.c line 1740
extern void MHD_resume_connection(struct MHD_Connection *connection)
{
  struct MHD_Daemon *daemon = connection->daemon;
  if(!((MHD_USE_SUSPEND_RESUME & (signed int)daemon->options) == MHD_USE_SUSPEND_RESUME))
    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1746, "Cannot resume connections without enabling MHD_USE_SUSPEND_RESUME!\n");

  signed int return_value_pthread_mutex_lock_1;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_lock_1 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1749, "Failed to acquire cleanup mutex\n");

  }

  connection->resuming = 1;
  daemon->resuming = 1;
  signed long int return_value_write_2;
  if(!(daemon->wpipe[1l] == -1))
  {
    return_value_write_2=write(daemon->wpipe[(signed long int)1], (const void *)"r", (unsigned long int)1);
    if(!(return_value_write_2 == 1l))
      MHD_DLOG(daemon, "failed to signal resume via pipe");

  }

  signed int return_value_pthread_mutex_unlock_3;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_unlock_3 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1762, "Failed to release cleanup mutex\n");

  }

}

// MHD_run
// file daemon.c line 2904
extern signed int MHD_run(struct MHD_Daemon *daemon)
{
  _Bool tmp_if_expr_1;
  if(daemon->shutdown == 1)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = 0 != ((signed int)daemon->options & MHD_USE_THREAD_PER_CONNECTION) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = 0 != ((signed int)daemon->options & MHD_USE_SELECT_INTERNALLY) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return 0;

  else
  {
    if(!((MHD_USE_POLL & (signed int)daemon->options) == 0))
    {
      MHD_poll(daemon, 0);
      MHD_cleanup_connections(daemon);
    }

    else
      if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
      {
        MHD_epoll(daemon, 0);
        MHD_cleanup_connections(daemon);
      }

      else
        MHD_select(daemon, 0);
    return 1;
  }
}

// MHD_run_from_select
// file daemon.c line 2215
extern signed int MHD_run_from_select(struct MHD_Daemon *daemon, const struct anonymous_3 *read_fd_set, const struct anonymous_3 *write_fd_set, const struct anonymous_3 *except_fd_set)
{
  signed int ds;
  char tmp;
  struct MHD_Connection *pos;
  struct MHD_Connection *next;
  unsigned int mask = (unsigned int)(MHD_USE_SUSPEND_RESUME | MHD_USE_EPOLL_INTERNALLY_LINUX_ONLY | MHD_USE_SELECT_INTERNALLY | MHD_USE_POLL_INTERNALLY | MHD_USE_THREAD_PER_CONNECTION);
  if((mask & (unsigned int)daemon->options) == 9216u)
    resume_suspended_connections(daemon);

  signed int return_value_MHD_run_1;
  if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
  {
    if(daemon->epoll_fd >= 1024)
      return 0;

    if(!((read_fd_set->fds_bits[(signed long int)(daemon->epoll_fd / 8)] & (signed long int)(1UL << daemon->epoll_fd % 8)) == 0l))
    {
      return_value_MHD_run_1=MHD_run(daemon);
      return return_value_MHD_run_1;
    }

    return 1;
  }

  ds = daemon->socket_fd;
  if(!(ds == -1))
  {
    if(!((read_fd_set->fds_bits[(signed long int)(ds / 8)] & (signed long int)(1UL << ds % 8)) == 0l))
      MHD_accept_connection(daemon);

  }

  if(!(daemon->wpipe[0l] == -1))
  {
    if(!((read_fd_set->fds_bits[(signed long int)(daemon->wpipe[0l] / 8)] & (signed long int)(1UL << daemon->wpipe[0l] % 8)) == 0l))
      read(daemon->wpipe[(signed long int)0], (void *)&tmp, sizeof(char) /*1ul*/ );

  }

  _Bool tmp_if_expr_2;
  if((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0)
  {
    next = daemon->connections_head;
    do
    {
      pos = next;
      if(pos == ((struct MHD_Connection *)NULL))
        break;

      next = pos->next;
      ds = pos->socket_fd;
      if(!(ds == -1))
        switch((signed int)pos->event_loop_info)
        {
          case MHD_EVENT_LOOP_INFO_READ:
          {
            if(!((read_fd_set->fds_bits[(signed long int)(ds / 8)] & (signed long int)(1UL << ds % 8)) == 0l))
              tmp_if_expr_2 = (_Bool)1;

            else
              tmp_if_expr_2 = 1 == pos->tls_read_ready ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_2)
              pos->read_handler(pos);

            goto __CPROVER_DUMP_L16;
          }
          case MHD_EVENT_LOOP_INFO_WRITE:
          {
            if(!((read_fd_set->fds_bits[(signed long int)(ds / 8)] & (signed long int)(1UL << ds % 8)) == 0l))
            {
              if(!(pos->read_buffer_offset >= pos->read_buffer_size))
                pos->read_handler(pos);

            }

            if(!((write_fd_set->fds_bits[(signed long int)(ds / 8)] & (signed long int)(1UL << ds % 8)) == 0l))
              pos->write_handler(pos);

            goto __CPROVER_DUMP_L16;
          }
          case MHD_EVENT_LOOP_INFO_BLOCK:
            if(!((read_fd_set->fds_bits[(signed long int)(ds / 8)] & (signed long int)(1UL << ds % 8)) == 0l))
            {
              if(!(pos->read_buffer_offset >= pos->read_buffer_size))
                pos->read_handler(pos);

            }

          case MHD_EVENT_LOOP_INFO_CLEANUP:

          default:
          {

          __CPROVER_DUMP_L16:
            ;
            pos->idle_handler(pos);
          }
        }

    }
    while((_Bool)1);
  }

  MHD_cleanup_connections(daemon);
  return 1;
}

// MHD_select
// file daemon.c line 2306
static signed int MHD_select(struct MHD_Daemon *daemon, signed int may_block)
{
  signed int num_ready;
  struct anonymous_3 rs;
  struct anonymous_3 ws;
  struct anonymous_3 es;
  signed int max;
  struct timeval timeout;
  struct timeval *tv;
  unsigned long long int ltimeout;
  timeout.tv_sec = (signed long int)0;
  timeout.tv_usec = (signed long int)0;
  signed int return_value_resume_suspended_connections_1;
  signed int return_value_add_to_fd_set_3;
  signed int return_value_add_to_fd_set_4;
  signed int return_value_MHD_get_timeout_5;
  if(daemon->shutdown == 1)
    return 0;

  else
  {
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_3) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rs)->fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    do
    {
      signed int MHD_select__1__2____d0;
      signed int MHD_select__1__2____d1;
      asm("cld; rep; stosq" : "=c"(MHD_select__1__2____d0), "=D"(MHD_select__1__2____d1) : "a"(0), "0"(sizeof(struct anonymous_3) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&ws)->fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    do
    {
      signed int MHD_select__1__3____d0;
      signed int MHD_select__1__3____d1;
      asm("cld; rep; stosq" : "=c"(MHD_select__1__3____d0), "=D"(MHD_select__1__3____d1) : "a"(0), "0"(sizeof(struct anonymous_3) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&es)->fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    max = -1;
    if((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0)
    {
      if((MHD_USE_SUSPEND_RESUME & (signed int)daemon->options) == MHD_USE_SUSPEND_RESUME)
      {
        return_value_resume_suspended_connections_1=resume_suspended_connections(daemon);
        if(return_value_resume_suspended_connections_1 == 1)
          may_block = 0;

      }

      signed int return_value_MHD_get_fdset2_2;
      return_value_MHD_get_fdset2_2=MHD_get_fdset2(daemon, &rs, &ws, &es, &max, (unsigned int)1024);
      if(return_value_MHD_get_fdset2_2 == 0)
        return 0;

      if(!(daemon->socket_fd == -1))
      {
        if(daemon->connections == daemon->connection_limit)
        {
          if(!((MHD_USE_PIPE_FOR_SHUTDOWN & (signed int)daemon->options) == 0))
            (&rs)->fds_bits[(signed long int)(daemon->socket_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rs)->fds_bits[(signed long int)(daemon->socket_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & ~((signed long int)(1UL << daemon->socket_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ )));

        }

      }

    }

    else
      if(!(daemon->socket_fd == -1))
      {
        return_value_add_to_fd_set_3=add_to_fd_set(daemon->socket_fd, &rs, &max, (unsigned int)1024);
        if(!(return_value_add_to_fd_set_3 == 1))
          return 0;

      }

    if(!(daemon->wpipe[0l] == -1))
    {
      return_value_add_to_fd_set_4=add_to_fd_set(daemon->wpipe[(signed long int)0], &rs, &max, (unsigned int)1024);
      if(return_value_add_to_fd_set_4 == 1)
        goto __CPROVER_DUMP_L10;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L10:
      ;
      tv = (struct timeval *)(void *)0;
      if(may_block == 0)
      {
        timeout.tv_usec = (signed long int)0;
        timeout.tv_sec = (signed long int)0;
        tv = &timeout;
      }

      else
        if((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0)
        {
          return_value_MHD_get_timeout_5=MHD_get_timeout(daemon, &ltimeout);
          if(return_value_MHD_get_timeout_5 == 1)
          {
            timeout.tv_usec = (signed long int)((ltimeout % (unsigned long int)1000) * (unsigned long int)1000);
            if(ltimeout / 1000ul >= 9223372036854775808ul)
              timeout.tv_sec = (signed long int)~((unsigned long int)1 << (unsigned long int)8 * sizeof(signed long int) /*8ul*/  - (unsigned long int)1);

            else
              timeout.tv_sec = (signed long int)(ltimeout / (unsigned long int)1000);
            tv = &timeout;
          }

        }

      num_ready=select(max + 1, &rs, &ws, &es, tv);
      if(daemon->shutdown == 1)
        return 0;

      else
      {
        if(!(num_ready >= 0))
        {
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          if(*return_value___errno_location_6 == 4)
            return 1;

          signed int *return_value___errno_location_7;
          return_value___errno_location_7=__errno_location();
          char *return_value_strerror_8;
          return_value_strerror_8=strerror(*return_value___errno_location_7);
          MHD_DLOG(daemon, "select failed: %s\n", return_value_strerror_8);
          return 0;
        }

        signed int return_value_MHD_run_from_select_9;
        return_value_MHD_run_from_select_9=MHD_run_from_select(daemon, &rs, &ws, &es);
        return return_value_MHD_run_from_select_9;
      }
    }
  }
}

// MHD_select_thread
// file daemon.c line 2939
static void * MHD_select_thread(void *cls)
{
  struct MHD_Daemon *daemon = (struct MHD_Daemon *)cls;
  while(!(daemon->shutdown == 1))
  {
    if(!((MHD_USE_POLL & (signed int)daemon->options) == 0))
      MHD_poll(daemon, 1);

    else
      if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
        MHD_epoll(daemon, 1);

      else
        MHD_select(daemon, 1);
    MHD_cleanup_connections(daemon);
  }
  return (void *)0;
}

// MHD_set_connection_option
// file connection.c line 2835
extern signed int MHD_set_connection_option(struct MHD_Connection *connection, enum MHD_CONNECTION_OPTION option, ...)
{
  __builtin_va_list ap;
  struct MHD_Daemon *daemon = connection->daemon;
  signed int return_value_pthread_mutex_lock_1;
  signed int return_value_pthread_mutex_unlock_2;
  if((signed int)option == MHD_CONNECTION_OPTION_TIMEOUT)
  {
    if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
    {
      return_value_pthread_mutex_lock_1=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
      if(!(return_value_pthread_mutex_lock_1 == 0))
        mhd_panic(mhd_panic_cls, "connection.c", (unsigned int)2848, "Failed to acquire cleanup mutex\n");

    }

    if(!(connection->suspended == 1))
    {
      if(connection->connection_timeout == daemon->connection_timeout)
        do
        {
          if(connection->prevX == ((struct MHD_Connection *)NULL))
            daemon->normal_timeout_head = connection->nextX;

          else
            connection->prevX->nextX = connection->nextX;
          if(connection->nextX == ((struct MHD_Connection *)NULL))
            daemon->normal_timeout_tail = connection->prevX;

          else
            connection->nextX->prevX = connection->prevX;
          connection->nextX = (struct MHD_Connection *)(void *)0;
          connection->prevX = (struct MHD_Connection *)(void *)0;
        }
        while((_Bool)0);

      else
        do
        {
          if(connection->prevX == ((struct MHD_Connection *)NULL))
            daemon->manual_timeout_head = connection->nextX;

          else
            connection->prevX->nextX = connection->nextX;
          if(connection->nextX == ((struct MHD_Connection *)NULL))
            daemon->manual_timeout_tail = connection->prevX;

          else
            connection->nextX->prevX = connection->prevX;
          connection->nextX = (struct MHD_Connection *)(void *)0;
          connection->prevX = (struct MHD_Connection *)(void *)0;
        }
        while((_Bool)0);
    }

    va_start(ap, option);
    connection->connection_timeout=va_arg(ap, __typeof__(connection->connection_timeout));
    va_end(ap);
    if(!(connection->suspended == 1))
    {
      if(connection->connection_timeout == daemon->connection_timeout)
        do
        {
          connection->nextX = daemon->normal_timeout_head;
          connection->prevX = (struct MHD_Connection *)(void *)0;
          if(daemon->normal_timeout_tail == ((struct MHD_Connection *)NULL))
            daemon->normal_timeout_tail = connection;

          else
            daemon->normal_timeout_head->prevX = connection;
          daemon->normal_timeout_head = connection;
        }
        while((_Bool)0);

      else
        do
        {
          connection->nextX = daemon->manual_timeout_head;
          connection->prevX = (struct MHD_Connection *)(void *)0;
          if(daemon->manual_timeout_tail == ((struct MHD_Connection *)NULL))
            daemon->manual_timeout_tail = connection;

          else
            daemon->manual_timeout_head->prevX = connection;
          daemon->manual_timeout_head = connection;
        }
        while((_Bool)0);
    }

    if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
    {
      return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
      if(!(return_value_pthread_mutex_unlock_2 == 0))
        mhd_panic(mhd_panic_cls, "connection.c", (unsigned int)2876, "Failed to release cleanup mutex\n");

    }

    return 1;
  }

  return 0;
}

// MHD_set_connection_value
// file connection.c line 176
extern signed int MHD_set_connection_value(struct MHD_Connection *connection, enum MHD_ValueKind kind, const char *key, const char *value)
{
  struct MHD_HTTP_Header *pos;
  void *return_value_MHD_pool_allocate_1;
  return_value_MHD_pool_allocate_1=MHD_pool_allocate(connection->pool, sizeof(struct MHD_HTTP_Header) /*32ul*/ , 1);
  pos = (struct MHD_HTTP_Header *)return_value_MHD_pool_allocate_1;
  if(pos == ((struct MHD_HTTP_Header *)NULL))
    return 0;

  else
  {
    pos->header = (char *)key;
    pos->value = (char *)value;
    pos->kind = kind;
    pos->next = (struct MHD_HTTP_Header *)(void *)0;
    if(connection->headers_received_tail == ((struct MHD_HTTP_Header *)NULL))
    {
      connection->headers_received = pos;
      connection->headers_received_tail = pos;
    }

    else
    {
      connection->headers_received_tail->next = pos;
      connection->headers_received_tail = pos;
    }
    return 1;
  }
}

// MHD_set_http_callbacks_
// file connection.c line 2771
void MHD_set_http_callbacks_(struct MHD_Connection *connection)
{
  connection->read_handler = MHD_connection_handle_read;
  connection->write_handler = MHD_connection_handle_write;
  connection->idle_handler = MHD_connection_handle_idle;
}

// MHD_set_https_callbacks
// file connection_https.h line 39
void MHD_set_https_callbacks(struct MHD_Connection *connection)
{
  connection->read_handler = MHD_tls_connection_handle_read;
  connection->write_handler = MHD_tls_connection_handle_write;
  connection->idle_handler = MHD_tls_connection_handle_idle;
}

// MHD_set_panic_func
// file daemon.c line 4679
extern void MHD_set_panic_func(void (*cb)(void *, const char *, unsigned int, const char *), void *cls)
{
  mhd_panic = cb;
  mhd_panic_cls = cls;
}

// MHD_set_response_options
// file response.c line 283
extern signed int MHD_set_response_options(struct MHD_Response *response, enum MHD_ResponseFlags flags, ...)
{
  __builtin_va_list ap;
  signed int ret;
  enum MHD_ResponseOptions ro;
  ret = 1;
  response->flags = flags;
  va_start(ap, flags);
  do
  {
    ro=va_arg(ap, __typeof__(ro));
    if((signed int)ro == MHD_RO_END)
      break;

    ret = 0;
  }
  while((_Bool)1);
  va_end(ap);
  return ret;
}

// MHD_start_daemon
// file ../../src/include/microhttpd.h line 1548
extern struct MHD_Daemon * MHD_start_daemon(unsigned int flags, unsigned short int port, signed int (*apc)(void *, struct sockaddr *, unsigned int), void *apc_cls, signed int (*dh)(void *, struct MHD_Connection *, const char *, const char *, const char *, const char *, unsigned long int *, void **), void *dh_cls, ...)
{
  struct MHD_Daemon *daemon;
  void **ap = (void **)&dh_cls;
  daemon=MHD_start_daemon_va(flags, port, apc, apc_cls, dh, dh_cls, ap);
  ap = ((void **)NULL);
  return daemon;
}

// MHD_start_daemon_va
// file daemon.c line 3613
extern struct MHD_Daemon * MHD_start_daemon_va(unsigned int flags, unsigned short int port, signed int (*apc)(void *, struct sockaddr *, unsigned int), void *apc_cls, signed int (*dh)(void *, struct MHD_Connection *, const char *, const char *, const char *, const char *, unsigned long int *, void **), void *dh_cls, void **ap)
{
  const signed int on = 1;
  struct MHD_Daemon *daemon;
  signed int socket_fd;
  struct sockaddr_in servaddr4;
  struct sockaddr_in6 servaddr6;
  struct sockaddr *servaddr = (struct sockaddr *)(void *)0;
  unsigned int addrlen;
  unsigned int i;
  signed int res_thread_create;
  signed int use_pipe;
  signed int return_value_pipe_4;
  _Bool tmp_if_expr_44;
  _Bool tmp_if_expr_27;
  signed int *return_value___errno_location_26;
  _Bool tmp_if_expr_36;
  signed int *return_value___errno_location_35;
  _Bool tmp_if_expr_42;
  signed int *return_value___errno_location_41;
  _Bool tmp_if_expr_47;
  signed int *return_value___errno_location_46;
  signed int return_value_pthread_mutex_init_52;
  signed int return_value_close_49;
  _Bool tmp_if_expr_51;
  signed int *return_value___errno_location_50;
  signed int return_value_pthread_mutex_init_57;
  signed int return_value_close_54;
  _Bool tmp_if_expr_56;
  signed int *return_value___errno_location_55;
  signed int return_value_MHD_TLS_init_63;
  signed int return_value_close_58;
  _Bool tmp_if_expr_60;
  signed int *return_value___errno_location_59;
  _Bool tmp_if_expr_71;
  _Bool tmp_if_expr_70;
  signed int return_value_close_67;
  _Bool tmp_if_expr_69;
  signed int *return_value___errno_location_68;
  signed int return_value_pipe_76;
  signed int return_value_setup_epoll_to_listen_79;
  signed int return_value_close_83;
  _Bool tmp_if_expr_85;
  signed int *return_value___errno_location_84;
  if(dh == ((signed int (*)(void *, struct MHD_Connection *, const char *, const char *, const char *, const char *, unsigned long int *, void **))NULL))
    return (struct MHD_Daemon *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct MHD_Daemon) /*568ul*/ );
    daemon = (struct MHD_Daemon *)return_value_malloc_1;
    if(daemon == ((struct MHD_Daemon *)NULL))
      return (struct MHD_Daemon *)(void *)0;

    else
    {
      memset((void *)daemon, 0, sizeof(struct MHD_Daemon) /*568ul*/ );
      daemon->epoll_fd = -1;
      if(!((2u & flags) == 0u))
        gnutls_priority_init(&daemon->priority_cache, "NORMAL", (const char **)(void *)0);

      daemon->socket_fd = -1;
      daemon->listening_address_reuse = 0;
      daemon->options = (enum MHD_FLAG)flags;
      daemon->port = port;
      daemon->apc = apc;
      daemon->apc_cls = apc_cls;
      daemon->default_handler = dh;
      daemon->default_handler_cls = dh_cls;
      daemon->connections = (unsigned int)0;
      daemon->connection_limit = (unsigned int)(1024 - 4);
      daemon->pool_size = (unsigned long int)(32 * 1024);
      daemon->pool_increment = (unsigned long int)1024;
      daemon->unescape_callback = unescape_wrapper;
      daemon->connection_timeout = (unsigned int)0;
      daemon->wpipe[(signed long int)0] = -1;
      daemon->wpipe[(signed long int)1] = -1;
      daemon->custom_error_log = (void (*)(void *, const char *, void **))vfprintf;
      daemon->custom_error_log_cls = (void *)stderr;
      use_pipe = (signed int)(0 != ((signed int)daemon->options & (MHD_USE_NO_LISTEN_SOCKET | MHD_USE_PIPE_FOR_SHUTDOWN)));
      if((12u & flags) == 0u)
        use_pipe = 0;

      if(!(use_pipe == 0))
      {
        return_value_pipe_4=pipe(daemon->wpipe);
        if(!(return_value_pipe_4 == 0))
        {
          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          char *return_value_strerror_3;
          return_value_strerror_3=strerror(*return_value___errno_location_2);
          MHD_DLOG(daemon, "Failed to create control pipe: %s\n", return_value_strerror_3);
          free((void *)daemon);
          return (struct MHD_Daemon *)(void *)0;
        }

      }

      if((576u & flags) == 0u && use_pipe == 1)
      {
        if(daemon->wpipe[0l] >= 1024)
        {
          MHD_DLOG(daemon, "file descriptor for control pipe exceeds maximum value\n");
          signed int return_value_close_5;
          return_value_close_5=close(daemon->wpipe[(signed long int)0]);
          if(!(return_value_close_5 == 0))
            mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)3722, "close failed\n");

          signed int return_value_close_6;
          return_value_close_6=close(daemon->wpipe[(signed long int)1]);
          if(!(return_value_close_6 == 0))
            mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)3724, "close failed\n");

          free((void *)daemon);
          return (struct MHD_Daemon *)(void *)0;
        }

      }

      daemon->digest_auth_rand_size = (unsigned long int)0;
      daemon->digest_auth_random = (const char *)(void *)0;
      daemon->nonce_nc_size = (unsigned int)4;
      if(!((2u & flags) == 0u))
        daemon->cred_type = (enum anonymous_0)GNUTLS_CRD_CERTIFICATE;

      signed int return_value_parse_options_va_7;
      return_value_parse_options_va_7=parse_options_va(daemon, &servaddr, ap);
      if(!(return_value_parse_options_va_7 == 1))
      {
        if(!((2u & flags) == 0u))
        {
          if(!(daemon->priority_cache == ((struct gnutls_priority_st *)NULL)))
            gnutls_priority_deinit(daemon->priority_cache);

        }

        free((void *)daemon);
        return (struct MHD_Daemon *)(void *)0;
      }

      else
      {
        if(daemon->nonce_nc_size >= 1u)
        {
          if(!((sizeof(struct MHD_NonceNc) /*144ul*/  * (unsigned long int)daemon->nonce_nc_size) / sizeof(struct MHD_NonceNc) /*144ul*/  == (unsigned long int)daemon->nonce_nc_size))
          {
            MHD_DLOG(daemon, "Specified value for NC_SIZE too large\n");
            if(!((2u & flags) == 0u))
              gnutls_priority_deinit(daemon->priority_cache);

            free((void *)daemon);
            return (struct MHD_Daemon *)(void *)0;
          }

          void *return_value_malloc_8;
          return_value_malloc_8=malloc((unsigned long int)daemon->nonce_nc_size * sizeof(struct MHD_NonceNc) /*144ul*/ );
          daemon->nnc = (struct MHD_NonceNc *)return_value_malloc_8;
          if(daemon->nnc == ((struct MHD_NonceNc *)NULL))
          {
            signed int *return_value___errno_location_9;
            return_value___errno_location_9=__errno_location();
            char *return_value_strerror_10;
            return_value_strerror_10=strerror(*return_value___errno_location_9);
            MHD_DLOG(daemon, "Failed to allocate memory for nonce-nc map: %s\n", return_value_strerror_10);
            if(!((2u & flags) == 0u))
              gnutls_priority_deinit(daemon->priority_cache);

            free((void *)daemon);
            return (struct MHD_Daemon *)(void *)0;
          }

        }

        signed int return_value_pthread_mutex_init_11;
        return_value_pthread_mutex_init_11=pthread_mutex_init(&daemon->nnc_lock, (const union anonymous_5 *)(void *)0);
        if(!(return_value_pthread_mutex_init_11 == 0))
        {
          MHD_DLOG(daemon, "MHD failed to initialize nonce-nc mutex\n");
          if(!((2u & flags) == 0u))
            gnutls_priority_deinit(daemon->priority_cache);

          free((void *)daemon->nnc);
          free((void *)daemon);
          return (struct MHD_Daemon *)(void *)0;
        }

        else
        {
          if((8u & flags) == 0u)
          {
            if(!(daemon->worker_pool_size >= 1u))
              goto __CPROVER_DUMP_L21;

            MHD_DLOG(daemon, "MHD thread pooling only works with MHD_USE_SELECT_INTERNALLY\n");
          }

          else
          {

          __CPROVER_DUMP_L21:
            ;
            if((9216u & flags) == 9216u && !((4u & flags) == 0u))
              MHD_DLOG(daemon, "Combining MHD_USE_THREAD_PER_CONNECTION and MHD_USE_SUSPEND_RESUME is not supported.\n");

            else
            {
              if(daemon->socket_fd == -1)
                tmp_if_expr_44 = 0 == ((signed int)daemon->options & MHD_USE_NO_LISTEN_SOCKET) ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_44 = (_Bool)0;
              if(tmp_if_expr_44)
              {
                if(!((16u & flags) == 0u))
                  socket_fd=create_socket(daemon, 10, 1, 0);

                else
                  socket_fd=create_socket(daemon, 2, 1, 0);
                if(socket_fd == -1)
                {
                  signed int *return_value___errno_location_12;
                  return_value___errno_location_12=__errno_location();
                  char *return_value_strerror_13;
                  return_value_strerror_13=strerror(*return_value___errno_location_12);
                  MHD_DLOG(daemon, "Call to socket failed: %s\n", return_value_strerror_13);
                  goto free_and_fail;
                }

                if(daemon->listening_address_reuse == 0)
                {
                  signed int return_value_setsockopt_16;
                  return_value_setsockopt_16=setsockopt(socket_fd, 1, 2, (void *)&on, (unsigned int)sizeof(const signed int) /*4ul*/ );
                  if(!(return_value_setsockopt_16 >= 0))
                  {
                    signed int *return_value___errno_location_14;
                    return_value___errno_location_14=__errno_location();
                    char *return_value_strerror_15;
                    return_value_strerror_15=strerror(*return_value___errno_location_14);
                    MHD_DLOG(daemon, "setsockopt failed: %s\n", return_value_strerror_15);
                  }

                }

                else
                  if(daemon->listening_address_reuse >= 1)
                  {
                    signed int return_value_setsockopt_19;
                    return_value_setsockopt_19=setsockopt(socket_fd, 1, 15, (void *)&on, (unsigned int)sizeof(const signed int) /*4ul*/ );
                    if(!(return_value_setsockopt_19 >= 0))
                    {
                      signed int *return_value___errno_location_17;
                      return_value___errno_location_17=__errno_location();
                      char *return_value_strerror_18;
                      return_value_strerror_18=strerror(*return_value___errno_location_17);
                      MHD_DLOG(daemon, "setsockopt failed: %s\n", return_value_strerror_18);
                      goto free_and_fail;
                    }

                  }

                if(!((16u & flags) == 0u))
                  addrlen = (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ ;

                else
                  addrlen = (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ ;
                if(servaddr == ((struct sockaddr *)NULL))
                {
                  if(!((16u & flags) == 0u))
                  {
                    memset((void *)&servaddr6, 0, sizeof(struct sockaddr_in6) /*28ul*/ );
                    servaddr6.sin6_family = (unsigned short int)10;
                    servaddr6.sin6_port=htons(port);
                    servaddr = (struct sockaddr *)&servaddr6;
                  }

                  else
                  {
                    memset((void *)&servaddr4, 0, sizeof(struct sockaddr_in) /*16ul*/ );
                    servaddr4.sin_family = (unsigned short int)2;
                    servaddr4.sin_port=htons(port);
                    servaddr = (struct sockaddr *)&servaddr4;
                  }
                }

                daemon->socket_fd = socket_fd;
                if(!((16u & flags) == 0u))
                {
                  const signed int v6_only = (const signed int)((unsigned int)MHD_USE_DUAL_STACK != (flags & (unsigned int)MHD_USE_DUAL_STACK));
                  signed int return_value_setsockopt_22;
                  return_value_setsockopt_22=setsockopt(socket_fd, 41, 26, (const void *)&v6_only, (unsigned int)sizeof(const signed int) /*4ul*/ );
                  if(!(return_value_setsockopt_22 >= 0))
                  {
                    signed int *return_value___errno_location_20;
                    return_value___errno_location_20=__errno_location();
                    char *return_value_strerror_21;
                    return_value_strerror_21=strerror(*return_value___errno_location_20);
                    MHD_DLOG(daemon, "setsockopt failed: %s\n", return_value_strerror_21);
                  }

                }

                signed int return_value_bind_28;
                return_value_bind_28=bind(socket_fd, servaddr, addrlen);
                if(return_value_bind_28 == -1)
                {
                  signed int *return_value___errno_location_23;
                  return_value___errno_location_23=__errno_location();
                  char *return_value_strerror_24;
                  return_value_strerror_24=strerror(*return_value___errno_location_23);
                  MHD_DLOG(daemon, "Failed to bind to port %u: %s\n", (unsigned int)port, return_value_strerror_24);
                  signed int return_value_close_25;
                  return_value_close_25=close(socket_fd);
                  if(!(return_value_close_25 == 0))
                  {
                    return_value___errno_location_26=__errno_location();
                    tmp_if_expr_27 = 9 == *return_value___errno_location_26 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr_27 = (_Bool)0;
                  if(tmp_if_expr_27)
                    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4024, "close failed\n");

                  goto free_and_fail;
                }

                if(!((16384u & flags) == 0u))
                {
                  if(daemon->fastopen_queue_size == 0u)
                    daemon->fastopen_queue_size = (unsigned int)10;

                  signed int return_value_setsockopt_31;
                  return_value_setsockopt_31=setsockopt(socket_fd, 6, 23, (const void *)&daemon->fastopen_queue_size, (unsigned int)sizeof(unsigned int) /*4ul*/ );
                  if(!(return_value_setsockopt_31 == 0))
                  {
                    signed int *return_value___errno_location_29;
                    return_value___errno_location_29=__errno_location();
                    char *return_value_strerror_30;
                    return_value_strerror_30=strerror(*return_value___errno_location_29);
                    MHD_DLOG(daemon, "setsockopt failed: %s\n", return_value_strerror_30);
                  }

                }

                if(!((512u & flags) == 0u))
                {
                  signed int sk_flags;
                  sk_flags=fcntl(socket_fd, 3);
                  signed int return_value_fcntl_37;
                  return_value_fcntl_37=fcntl(socket_fd, 4, sk_flags | 04000);
                  if(!(return_value_fcntl_37 == 0))
                  {
                    signed int *return_value___errno_location_32;
                    return_value___errno_location_32=__errno_location();
                    char *return_value_strerror_33;
                    return_value_strerror_33=strerror(*return_value___errno_location_32);
                    MHD_DLOG(daemon, "Failed to make listen socket non-blocking: %s\n", return_value_strerror_33);
                    signed int return_value_close_34;
                    return_value_close_34=close(socket_fd);
                    if(!(return_value_close_34 == 0))
                    {
                      return_value___errno_location_35=__errno_location();
                      tmp_if_expr_36 = 9 == *return_value___errno_location_35 ? (_Bool)1 : (_Bool)0;
                    }

                    else
                      tmp_if_expr_36 = (_Bool)0;
                    if(tmp_if_expr_36)
                      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4057, "close failed\n");

                    goto free_and_fail;
                  }

                }

                signed int return_value_listen_43;
                return_value_listen_43=listen(socket_fd, 32);
                if(!(return_value_listen_43 >= 0))
                {
                  signed int *return_value___errno_location_38;
                  return_value___errno_location_38=__errno_location();
                  char *return_value_strerror_39;
                  return_value_strerror_39=strerror(*return_value___errno_location_38);
                  MHD_DLOG(daemon, "Failed to listen for connections: %s\n", return_value_strerror_39);
                  signed int return_value_close_40;
                  return_value_close_40=close(socket_fd);
                  if(!(return_value_close_40 == 0))
                  {
                    return_value___errno_location_41=__errno_location();
                    tmp_if_expr_42 = 9 == *return_value___errno_location_41 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr_42 = (_Bool)0;
                  if(tmp_if_expr_42)
                    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4070, "close failed\n");

                  goto free_and_fail;
                }

              }

              else
                socket_fd = daemon->socket_fd;
              if((576u & flags) == 0u && socket_fd >= 1024)
              {
                MHD_DLOG(daemon, "Socket descriptor larger than FD_SETSIZE: %d > %d\n", socket_fd, 1024);
                signed int return_value_close_45;
                return_value_close_45=close(socket_fd);
                if(!(return_value_close_45 == 0))
                {
                  return_value___errno_location_46=__errno_location();
                  tmp_if_expr_47 = 9 == *return_value___errno_location_46 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr_47 = (_Bool)0;
                if(tmp_if_expr_47)
                  mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4089, "close failed\n");

                goto free_and_fail;
              }

              if(!((512u & flags) == 0u))
              {
                if(daemon->worker_pool_size == 0u)
                {
                  if((MHD_USE_NO_LISTEN_SOCKET & (signed int)daemon->options) == 0)
                  {
                    if(!((4u & flags) == 0u))
                    {
                      MHD_DLOG(daemon, "Combining MHD_USE_THREAD_PER_CONNECTION and MHD_USE_EPOLL_LINUX_ONLY is not supported.\n");
                      goto free_and_fail;
                    }

                    signed int return_value_setup_epoll_to_listen_48;
                    return_value_setup_epoll_to_listen_48=setup_epoll_to_listen(daemon);
                    if(!(return_value_setup_epoll_to_listen_48 == 1))
                      goto free_and_fail;

                  }

                }

              }

              return_value_pthread_mutex_init_52=pthread_mutex_init(&daemon->per_ip_connection_mutex, (const union anonymous_5 *)(void *)0);
              if(!(return_value_pthread_mutex_init_52 == 0))
              {
                MHD_DLOG(daemon, "MHD failed to initialize IP connection limit mutex\n");
                if(!(socket_fd == -1))
                {
                  return_value_close_49=close(socket_fd);
                  if(!(return_value_close_49 == 0))
                  {
                    return_value___errno_location_50=__errno_location();
                    tmp_if_expr_51 = 9 == *return_value___errno_location_50 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr_51 = (_Bool)0;
                  if(tmp_if_expr_51)
                    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4129, "close failed\n");

                }

                goto free_and_fail;
              }

              return_value_pthread_mutex_init_57=pthread_mutex_init(&daemon->cleanup_connection_mutex, (const union anonymous_5 *)(void *)0);
              if(!(return_value_pthread_mutex_init_57 == 0))
              {
                MHD_DLOG(daemon, "MHD failed to initialize IP connection limit mutex\n");
                signed int return_value_pthread_mutex_destroy_53;
                return_value_pthread_mutex_destroy_53=pthread_mutex_destroy(&daemon->cleanup_connection_mutex);
                (void)(0 == return_value_pthread_mutex_destroy_53 ? 1 : 0);
                if(!(socket_fd == -1))
                {
                  return_value_close_54=close(socket_fd);
                  if(!(return_value_close_54 == 0))
                  {
                    return_value___errno_location_55=__errno_location();
                    tmp_if_expr_56 = 9 == *return_value___errno_location_55 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr_56 = (_Bool)0;
                  if(tmp_if_expr_56)
                    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4141, "close failed\n");

                }

                goto free_and_fail;
              }

              if(!((2u & flags) == 0u))
              {
                return_value_MHD_TLS_init_63=MHD_TLS_init(daemon);
                if(!(return_value_MHD_TLS_init_63 == 0))
                {
                  MHD_DLOG(daemon, "Failed to initialize TLS support\n");
                  if(!(socket_fd == -1))
                  {
                    return_value_close_58=close(socket_fd);
                    if(!(return_value_close_58 == 0))
                    {
                      return_value___errno_location_59=__errno_location();
                      tmp_if_expr_60 = 9 == *return_value___errno_location_59 ? (_Bool)1 : (_Bool)0;
                    }

                    else
                      tmp_if_expr_60 = (_Bool)0;
                    if(tmp_if_expr_60)
                      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4155, "close failed\n");

                  }

                  signed int return_value_pthread_mutex_destroy_61;
                  return_value_pthread_mutex_destroy_61=pthread_mutex_destroy(&daemon->cleanup_connection_mutex);
                  (void)(0 == return_value_pthread_mutex_destroy_61 ? 1 : 0);
                  signed int return_value_pthread_mutex_destroy_62;
                  return_value_pthread_mutex_destroy_62=pthread_mutex_destroy(&daemon->per_ip_connection_mutex);
                  (void)(0 == return_value_pthread_mutex_destroy_62 ? 1 : 0);
                  goto free_and_fail;
                }

              }

              if(!((4u & flags) == 0u))
                tmp_if_expr_71 = (_Bool)1;

              else
              {
                if(!((8u & flags) == 0u))
                  tmp_if_expr_70 = (unsigned int)0 == daemon->worker_pool_size ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_70 = (_Bool)0;
                tmp_if_expr_71 = tmp_if_expr_70 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_71)
              {
                if((MHD_USE_NO_LISTEN_SOCKET & (signed int)daemon->options) == 0)
                {
                  res_thread_create=create_thread(&daemon->pid, daemon, MHD_select_thread, (void *)daemon);
                  if(!(res_thread_create == 0))
                  {
                    char *return_value_strerror_64;
                    return_value_strerror_64=strerror(res_thread_create);
                    MHD_DLOG(daemon, "Failed to create listen thread: %s\n", return_value_strerror_64);
                    signed int return_value_pthread_mutex_destroy_65;
                    return_value_pthread_mutex_destroy_65=pthread_mutex_destroy(&daemon->cleanup_connection_mutex);
                    (void)(0 == return_value_pthread_mutex_destroy_65 ? 1 : 0);
                    signed int return_value_pthread_mutex_destroy_66;
                    return_value_pthread_mutex_destroy_66=pthread_mutex_destroy(&daemon->per_ip_connection_mutex);
                    (void)(0 == return_value_pthread_mutex_destroy_66 ? 1 : 0);
                    if(!(socket_fd == -1))
                    {
                      return_value_close_67=close(socket_fd);
                      if(!(return_value_close_67 == 0))
                      {
                        return_value___errno_location_68=__errno_location();
                        tmp_if_expr_69 = 9 == *return_value___errno_location_68 ? (_Bool)1 : (_Bool)0;
                      }

                      else
                        tmp_if_expr_69 = (_Bool)0;
                      if(tmp_if_expr_69)
                        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4177, "close failed\n");

                    }

                    goto free_and_fail;
                  }

                }

              }

              if(daemon->worker_pool_size >= 1u)
              {
                if((MHD_USE_NO_LISTEN_SOCKET & (signed int)daemon->options) == 0)
                {
                  signed int MHD_start_daemon_va__1__18__sk_flags;
                  unsigned int conns_per_thread = daemon->connection_limit / daemon->worker_pool_size;
                  unsigned int leftover_conns = daemon->connection_limit % daemon->worker_pool_size;
                  i = (unsigned int)0;
                  MHD_start_daemon_va__1__18__sk_flags=fcntl(socket_fd, 3);
                  if(!(MHD_start_daemon_va__1__18__sk_flags >= 0))
                    goto thread_failed;

                  signed int return_value_fcntl_72;
                  return_value_fcntl_72=fcntl(socket_fd, 4, MHD_start_daemon_va__1__18__sk_flags | 04000);
                  if(!(return_value_fcntl_72 == 0))
                    goto thread_failed;

                  void *return_value_malloc_73;
                  return_value_malloc_73=malloc(sizeof(struct MHD_Daemon) /*568ul*/  * (unsigned long int)daemon->worker_pool_size);
                  daemon->worker_pool = (struct MHD_Daemon *)return_value_malloc_73;
                  if(daemon->worker_pool == ((struct MHD_Daemon *)NULL))
                    goto thread_failed;

                  i = (unsigned int)0;
                  for( ; !(i >= daemon->worker_pool_size); i = i + 1u)
                  {
                    struct MHD_Daemon *d = &daemon->worker_pool[(signed long int)i];
                    memcpy((void *)d, (const void *)daemon, sizeof(struct MHD_Daemon) /*568ul*/ );
                    d->master = daemon;
                    d->worker_pool_size = (unsigned int)0;
                    d->worker_pool = (struct MHD_Daemon *)(void *)0;
                    if((9216u & flags) == 9216u)
                    {
                      return_value_pipe_76=pipe(d->wpipe);
                      if(!(return_value_pipe_76 == 0))
                      {
                        signed int *return_value___errno_location_74;
                        return_value___errno_location_74=__errno_location();
                        char *return_value_strerror_75;
                        return_value_strerror_75=strerror(*return_value___errno_location_74);
                        MHD_DLOG(daemon, "Failed to create worker control pipe: %s\n", return_value_strerror_75);
                        goto thread_failed;
                      }

                    }

                    if((576u & flags) == 0u && (9216u & flags) == 9216u)
                    {
                      if(d->wpipe[0l] >= 1024)
                      {
                        MHD_DLOG(daemon, "File descriptor for worker control pipe exceeds maximum value\n");
                        signed int return_value_close_77;
                        return_value_close_77=close(d->wpipe[(signed long int)0]);
                        if(!(return_value_close_77 == 0))
                          mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4254, "close failed\n");

                        signed int return_value_close_78;
                        return_value_close_78=close(d->wpipe[(signed long int)1]);
                        if(!(return_value_close_78 == 0))
                          mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4256, "close failed\n");

                        goto thread_failed;
                      }

                    }

                    d->connection_limit = conns_per_thread;
                    if(!(i >= leftover_conns))
                      d->connection_limit = d->connection_limit + 1u;

                    if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
                    {
                      return_value_setup_epoll_to_listen_79=setup_epoll_to_listen(d);
                      if(!(return_value_setup_epoll_to_listen_79 == 1))
                        goto thread_failed;

                    }

                    signed int return_value_pthread_mutex_init_80;
                    return_value_pthread_mutex_init_80=pthread_mutex_init(&d->cleanup_connection_mutex, (const union anonymous_5 *)(void *)0);
                    if(!(return_value_pthread_mutex_init_80 == 0))
                    {
                      MHD_DLOG(daemon, "MHD failed to initialize cleanup connection mutex for thread worker %d\n", i);
                      goto thread_failed;
                    }

                    res_thread_create=create_thread(&d->pid, daemon, MHD_select_thread, (void *)d);
                    if(!(res_thread_create == 0))
                    {
                      char *return_value_strerror_81;
                      return_value_strerror_81=strerror(res_thread_create);
                      MHD_DLOG(daemon, "Failed to create pool thread: %s\n", return_value_strerror_81);
                      signed int return_value_pthread_mutex_destroy_82;
                      return_value_pthread_mutex_destroy_82=pthread_mutex_destroy(&d->cleanup_connection_mutex);
                      (void)(0 == return_value_pthread_mutex_destroy_82 ? 1 : 0);
                      goto thread_failed;
                    }

                  }
                }

              }

              daemon->https_key_password = (const char *)(void *)0;
              return daemon;

            thread_failed:
              ;
              if(i == 0u)
              {
                if(!(socket_fd == -1))
                {
                  return_value_close_83=close(socket_fd);
                  if(!(return_value_close_83 == 0))
                  {
                    return_value___errno_location_84=__errno_location();
                    tmp_if_expr_85 = 9 == *return_value___errno_location_84 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr_85 = (_Bool)0;
                  if(tmp_if_expr_85)
                    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4315, "close failed\n");

                }

                signed int return_value_pthread_mutex_destroy_86;
                return_value_pthread_mutex_destroy_86=pthread_mutex_destroy(&daemon->cleanup_connection_mutex);
                (void)(0 == return_value_pthread_mutex_destroy_86 ? 1 : 0);
                signed int return_value_pthread_mutex_destroy_87;
                return_value_pthread_mutex_destroy_87=pthread_mutex_destroy(&daemon->per_ip_connection_mutex);
                (void)(0 == return_value_pthread_mutex_destroy_87 ? 1 : 0);
                if(!(daemon->worker_pool == ((struct MHD_Daemon *)NULL)))
                  free((void *)daemon->worker_pool);

                goto free_and_fail;
              }

              daemon->worker_pool_size = i;
              MHD_stop_daemon(daemon);
              return (struct MHD_Daemon *)(void *)0;
            }
          }

        free_and_fail:
          ;
          if(!(daemon->epoll_fd == -1))
            close(daemon->epoll_fd);

          free((void *)daemon->nnc);
          signed int return_value_pthread_mutex_destroy_88;
          return_value_pthread_mutex_destroy_88=pthread_mutex_destroy(&daemon->nnc_lock);
          (void)(0 == return_value_pthread_mutex_destroy_88 ? 1 : 0);
          if(!((2u & flags) == 0u))
            gnutls_priority_deinit(daemon->priority_cache);

          free((void *)daemon);
          return (struct MHD_Daemon *)(void *)0;
        }
      }
    }
  }
}

// MHD_stop_daemon
// file ../../src/include/microhttpd.h line 1585
extern void MHD_stop_daemon(struct MHD_Daemon *daemon)
{
  signed int fd;
  unsigned int i;
  signed int return_value_close_5;
  _Bool tmp_if_expr_7;
  signed int *return_value___errno_location_6;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_11;
  signed int return_value_close_13;
  _Bool tmp_if_expr_15;
  signed int *return_value___errno_location_14;
  signed int return_value_close_16;
  _Bool tmp_if_expr_18;
  signed int *return_value___errno_location_17;
  if(!(daemon == ((struct MHD_Daemon *)NULL)))
  {
    daemon->shutdown = 1;
    fd = daemon->socket_fd;
    daemon->socket_fd = -1;
    if(!(daemon->worker_pool == ((struct MHD_Daemon *)NULL)))
    {
      i = (unsigned int)0;
      for( ; !(i >= daemon->worker_pool_size); i = i + 1u)
      {
        (daemon->worker_pool + (signed long int)i)->shutdown = 1;
        (daemon->worker_pool + (signed long int)i)->socket_fd = -1;
        if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
        {
          if(!((daemon->worker_pool + (signed long int)i)->epoll_fd == -1))
          {
            if(fd == -1)
              epoll_shutdown(&daemon->worker_pool[(signed long int)i]);

          }

        }

      }
    }

    if(!(daemon->wpipe[1l] == -1))
    {
      signed long int return_value_write_1;
      return_value_write_1=write(daemon->wpipe[(signed long int)1], (const void *)"e", (unsigned long int)1);
      if(!(return_value_write_1 == 1l))
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4497, "failed to signal shutdown via pipe");

    }

    else
      if(!(fd == -1))
      {
        if((MHD_USE_PIPE_FOR_SHUTDOWN & (signed int)daemon->options) == 0)
          shutdown(fd, 2);

      }

    if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
    {
      if(!(daemon->epoll_fd == -1))
      {
        if(fd == -1)
          epoll_shutdown(daemon);

      }

    }

    if(!(daemon->worker_pool == ((struct MHD_Daemon *)NULL)))
    {
      i = (unsigned int)0;
      for( ; !(i >= daemon->worker_pool_size); i = i + 1u)
      {
        if(!((daemon->worker_pool + (signed long int)i)->wpipe[1l] == -1))
        {
          signed long int return_value_write_2;
          return_value_write_2=write((daemon->worker_pool + (signed long int)i)->wpipe[(signed long int)1], (const void *)"e", (unsigned long int)1);
          if(!(return_value_write_2 == 1l))
            mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4532, "failed to signal shutdown via pipe");

        }

        signed int return_value_pthread_join_3;
        return_value_pthread_join_3=pthread_join((daemon->worker_pool + (signed long int)i)->pid, (void **)(void *)0);
        if(!(return_value_pthread_join_3 == 0))
          mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4535, "Failed to join a thread\n");

        close_all_connections(&daemon->worker_pool[(signed long int)i]);
        signed int return_value_pthread_mutex_destroy_4;
        return_value_pthread_mutex_destroy_4=pthread_mutex_destroy(&(daemon->worker_pool + (signed long int)i)->cleanup_connection_mutex);
        (void)(0 == return_value_pthread_mutex_destroy_4 ? 1 : 0);
        if(!((daemon->worker_pool + (signed long int)i)->epoll_fd == -1))
        {
          return_value_close_5=close((daemon->worker_pool + (signed long int)i)->epoll_fd);
          if(!(return_value_close_5 == 0))
          {
            return_value___errno_location_6=__errno_location();
            tmp_if_expr_7 = 9 == *return_value___errno_location_6 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_7 = (_Bool)0;
          if(tmp_if_expr_7)
            mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4541, "close failed\n");

        }

        if((MHD_USE_SUSPEND_RESUME & (signed int)daemon->options) == MHD_USE_SUSPEND_RESUME)
        {
          if(!((daemon->worker_pool + (signed long int)i)->wpipe[1l] == -1))
          {
            signed int return_value_close_8;
            return_value_close_8=close((daemon->worker_pool + (signed long int)i)->wpipe[(signed long int)0]);
            if(!(return_value_close_8 == 0))
              mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4548, "close failed\n");

            signed int return_value_close_9;
            return_value_close_9=close((daemon->worker_pool + (signed long int)i)->wpipe[(signed long int)1]);
            if(!(return_value_close_9 == 0))
              mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4550, "close failed\n");

          }

        }

      }
      free((void *)daemon->worker_pool);
    }

    else
    {
      if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
        tmp_if_expr_12 = (_Bool)1;

      else
      {
        if(!((MHD_USE_SELECT_INTERNALLY & (signed int)daemon->options) == 0))
          tmp_if_expr_11 = (unsigned int)0 == daemon->worker_pool_size ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_11 = (_Bool)0;
        tmp_if_expr_12 = tmp_if_expr_11 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_12)
      {
        signed int return_value_pthread_join_10;
        return_value_pthread_join_10=pthread_join(daemon->pid, (void **)(void *)0);
        if(!(return_value_pthread_join_10 == 0))
          mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4565, "Failed to join a thread\n");

      }

    }
    close_all_connections(daemon);
    if(!(fd == -1))
    {
      return_value_close_13=close(fd);
      if(!(return_value_close_13 == 0))
      {
        return_value___errno_location_14=__errno_location();
        tmp_if_expr_15 = 9 == *return_value___errno_location_14 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_15 = (_Bool)0;
      if(tmp_if_expr_15)
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4572, "close failed\n");

    }

    if(daemon->have_dhparams == 1)
    {
      gnutls_dh_params_deinit(daemon->https_mem_dhparams);
      daemon->have_dhparams = 0;
    }

    if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
    {
      gnutls_priority_deinit(daemon->priority_cache);
      if(!(daemon->x509_cred == ((struct gnutls_certificate_credentials_st *)NULL)))
        gnutls_certificate_free_credentials(daemon->x509_cred);

    }

    if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
    {
      if(!(daemon->epoll_fd == -1))
      {
        return_value_close_16=close(daemon->epoll_fd);
        if(!(return_value_close_16 == 0))
        {
          return_value___errno_location_17=__errno_location();
          tmp_if_expr_18 = 9 == *return_value___errno_location_17 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_18 = (_Bool)0;
        if(tmp_if_expr_18)
          mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4592, "close failed\n");

      }

    }

    free((void *)daemon->nnc);
    signed int return_value_pthread_mutex_destroy_19;
    return_value_pthread_mutex_destroy_19=pthread_mutex_destroy(&daemon->nnc_lock);
    (void)(0 == return_value_pthread_mutex_destroy_19 ? 1 : 0);
    signed int return_value_pthread_mutex_destroy_20;
    return_value_pthread_mutex_destroy_20=pthread_mutex_destroy(&daemon->per_ip_connection_mutex);
    (void)(0 == return_value_pthread_mutex_destroy_20 ? 1 : 0);
    signed int return_value_pthread_mutex_destroy_21;
    return_value_pthread_mutex_destroy_21=pthread_mutex_destroy(&daemon->cleanup_connection_mutex);
    (void)(0 == return_value_pthread_mutex_destroy_21 ? 1 : 0);
    if(!(daemon->wpipe[1l] == -1))
    {
      signed int return_value_close_22;
      return_value_close_22=close(daemon->wpipe[(signed long int)0]);
      if(!(return_value_close_22 == 0))
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4605, "close failed\n");

      signed int return_value_close_23;
      return_value_close_23=close(daemon->wpipe[(signed long int)1]);
      if(!(return_value_close_23 == 0))
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4607, "close failed\n");

    }

    free((void *)daemon);
  }

}

// MHD_suspend_connection
// file daemon.c line 1678
extern void MHD_suspend_connection(struct MHD_Connection *connection)
{
  struct MHD_Daemon *daemon = connection->daemon;
  if(!((MHD_USE_SUSPEND_RESUME & (signed int)daemon->options) == MHD_USE_SUSPEND_RESUME))
    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1684, "Cannot suspend connections without enabling MHD_USE_SUSPEND_RESUME!\n");

  signed int return_value_pthread_mutex_lock_1;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_lock_1 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1687, "Failed to acquire cleanup mutex\n");

  }

  do
  {
    if(connection->prev == ((struct MHD_Connection *)NULL))
      daemon->connections_head = connection->next;

    else
      connection->prev->next = connection->next;
    if(connection->next == ((struct MHD_Connection *)NULL))
      daemon->connections_tail = connection->prev;

    else
      connection->next->prev = connection->prev;
    connection->next = (struct MHD_Connection *)(void *)0;
    connection->prev = (struct MHD_Connection *)(void *)0;
  }
  while((_Bool)0);
  do
  {
    connection->next = daemon->suspended_connections_head;
    connection->prev = (struct MHD_Connection *)(void *)0;
    if(daemon->suspended_connections_tail == ((struct MHD_Connection *)NULL))
      daemon->suspended_connections_tail = connection;

    else
      daemon->suspended_connections_head->prev = connection;
    daemon->suspended_connections_head = connection;
  }
  while((_Bool)0);
  if(connection->connection_timeout == daemon->connection_timeout)
    do
    {
      if(connection->prevX == ((struct MHD_Connection *)NULL))
        daemon->normal_timeout_head = connection->nextX;

      else
        connection->prevX->nextX = connection->nextX;
      if(connection->nextX == ((struct MHD_Connection *)NULL))
        daemon->normal_timeout_tail = connection->prevX;

      else
        connection->nextX->prevX = connection->prevX;
      connection->nextX = (struct MHD_Connection *)(void *)0;
      connection->prevX = (struct MHD_Connection *)(void *)0;
    }
    while((_Bool)0);

  else
    do
    {
      if(connection->prevX == ((struct MHD_Connection *)NULL))
        daemon->manual_timeout_head = connection->nextX;

      else
        connection->prevX->nextX = connection->nextX;
      if(connection->nextX == ((struct MHD_Connection *)NULL))
        daemon->manual_timeout_tail = connection->prevX;

      else
        connection->nextX->prevX = connection->prevX;
      connection->nextX = (struct MHD_Connection *)(void *)0;
      connection->prevX = (struct MHD_Connection *)(void *)0;
    }
    while((_Bool)0);
  if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
  {
    if(!((MHD_EPOLL_STATE_IN_EREADY_EDLL & (signed int)connection->epoll_state) == 0))
    {
      do
      {
        if(connection->prevE == ((struct MHD_Connection *)NULL))
          daemon->eready_head = connection->nextE;

        else
          connection->prevE->nextE = connection->nextE;
        if(connection->nextE == ((struct MHD_Connection *)NULL))
          daemon->eready_tail = connection->prevE;

        else
          connection->nextE->prevE = connection->prevE;
        connection->nextE = (struct MHD_Connection *)(void *)0;
        connection->prevE = (struct MHD_Connection *)(void *)0;
      }
      while((_Bool)0);
      connection->epoll_state = connection->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_IN_EREADY_EDLL;
    }

    if(!((MHD_EPOLL_STATE_IN_EPOLL_SET & (signed int)connection->epoll_state) == 0))
    {
      signed int return_value_epoll_ctl_2;
      return_value_epoll_ctl_2=epoll_ctl(daemon->epoll_fd, 2, connection->socket_fd, (struct epoll_event *)(void *)0);
      if(!(return_value_epoll_ctl_2 == 0))
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1718, "Failed to remove FD from epoll set\n");

      connection->epoll_state = connection->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_IN_EPOLL_SET;
    }

    connection->epoll_state = connection->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_SUSPENDED;
  }

  connection->suspended = 1;
  signed int return_value_pthread_mutex_unlock_3;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_unlock_3 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1727, "Failed to release cleanup mutex\n");

  }

}

// MHD_tls_connection_handle_idle
// file connection_https.c line 133
static signed int MHD_tls_connection_handle_idle(struct MHD_Connection *connection)
{
  unsigned int timeout = connection->connection_timeout;
  signed long int return_value_MHD_monotonic_sec_counter_1;
  if(!(timeout == 0u))
  {
    return_value_MHD_monotonic_sec_counter_1=MHD_monotonic_sec_counter();
    if(return_value_MHD_monotonic_sec_counter_1 + -connection->last_activity >= (signed long int)timeout)
      MHD_connection_close(connection, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_TIMEOUT_REACHED);

  }

  signed int return_value_MHD_connection_handle_idle_2;
  unsigned long int return_value_gnutls_record_check_pending_4;
  signed int return_value_MHD_tls_connection_handle_read_3;
  signed int return_value_MHD_connection_handle_idle_5;
  switch((signed int)connection->state)
  {
    case MHD_TLS_CONNECTION_INIT:
      break;
    case MHD_CONNECTION_CLOSED:
    {
      gnutls_bye(connection->tls_session, (enum anonymous_10)GNUTLS_SHUT_RDWR);
      return_value_MHD_connection_handle_idle_2=MHD_connection_handle_idle(connection);
      return return_value_MHD_connection_handle_idle_2;
    }
    default:
    {
      return_value_gnutls_record_check_pending_4=gnutls_record_check_pending(connection->tls_session);
      if(!(return_value_gnutls_record_check_pending_4 == 0ul))
      {
        return_value_MHD_tls_connection_handle_read_3=MHD_tls_connection_handle_read(connection);
        if(!(return_value_MHD_tls_connection_handle_read_3 == 1))
          return 1;

      }

      return_value_MHD_connection_handle_idle_5=MHD_connection_handle_idle(connection);
      return return_value_MHD_connection_handle_idle_5;
    }
  }
  signed int return_value_MHD_connection_epoll_update__6;
  return_value_MHD_connection_epoll_update__6=MHD_connection_epoll_update_(connection);
  return return_value_MHD_connection_epoll_update__6;
}

// MHD_tls_connection_handle_read
// file connection_https.c line 97
static signed int MHD_tls_connection_handle_read(struct MHD_Connection *connection)
{
  signed int return_value_run_tls_handshake_1;
  return_value_run_tls_handshake_1=run_tls_handshake(connection);
  if(return_value_run_tls_handshake_1 == 1)
    return 1;

  else
  {
    signed int return_value_MHD_connection_handle_read_2;
    return_value_MHD_connection_handle_read_2=MHD_connection_handle_read(connection);
    return return_value_MHD_connection_handle_read_2;
  }
}

// MHD_tls_connection_handle_write
// file connection_https.c line 114
static signed int MHD_tls_connection_handle_write(struct MHD_Connection *connection)
{
  signed int return_value_run_tls_handshake_1;
  return_value_run_tls_handshake_1=run_tls_handshake(connection);
  if(return_value_run_tls_handshake_1 == 1)
    return 1;

  else
  {
    signed int return_value_MHD_connection_handle_write_2;
    return_value_MHD_connection_handle_write_2=MHD_connection_handle_write(connection);
    return return_value_MHD_connection_handle_write_2;
  }
}

// MHD_unescape_plus
// file internal.h line 1447
void MHD_unescape_plus(char *arg)
{
  char *p;
  p=strchr(arg, 43);
  while(!(p == ((char *)NULL)))
  {
    *p = (char)32;
    p=strchr(p + (signed long int)1, 43);
  }
}

// _GNUC_deinit_helper_MHD_fini
// file daemon.c line 4910
void _GNUC_deinit_helper_MHD_fini(void)
{
  MHD_fini();
}

// _GNUC_init_helper_MHD_init
// file daemon.c line 4910
void _GNUC_init_helper_MHD_init(void)
{
  MHD_init();
}

// add_response_entry
// file response.c line 54
static signed int add_response_entry(struct MHD_Response *response, enum MHD_ValueKind kind, const char *header, const char *content)
{
  struct MHD_HTTP_Header *hdr;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(content == ((const char *)NULL) || header == ((const char *)NULL) || response == ((struct MHD_Response *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_strlen_1=strlen(header);
    tmp_if_expr_2 = (unsigned long int)0 == return_value_strlen_1 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_4;
  unsigned long int return_value_strlen_3;
  if(tmp_if_expr_2)
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_strlen_3=strlen(content);
    tmp_if_expr_4 = (unsigned long int)0 == return_value_strlen_3 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_6;
  char *return_value_strchr_5;
  if(tmp_if_expr_4)
    tmp_if_expr_6 = (_Bool)1;

  else
  {
    return_value_strchr_5=strchr(header, 9);
    tmp_if_expr_6 = (char *)(void *)0 != return_value_strchr_5 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_8;
  char *return_value_strchr_7;
  if(tmp_if_expr_6)
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    return_value_strchr_7=strchr(header, 13);
    tmp_if_expr_8 = (char *)(void *)0 != return_value_strchr_7 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_10;
  char *return_value_strchr_9;
  if(tmp_if_expr_8)
    tmp_if_expr_10 = (_Bool)1;

  else
  {
    return_value_strchr_9=strchr(header, 10);
    tmp_if_expr_10 = (char *)(void *)0 != return_value_strchr_9 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_12;
  char *return_value_strchr_11;
  if(tmp_if_expr_10)
    tmp_if_expr_12 = (_Bool)1;

  else
  {
    return_value_strchr_11=strchr(content, 9);
    tmp_if_expr_12 = (char *)(void *)0 != return_value_strchr_11 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_14;
  char *return_value_strchr_13;
  if(tmp_if_expr_12)
    tmp_if_expr_14 = (_Bool)1;

  else
  {
    return_value_strchr_13=strchr(content, 13);
    tmp_if_expr_14 = (char *)(void *)0 != return_value_strchr_13 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_16;
  char *return_value_strchr_15;
  if(tmp_if_expr_14)
    tmp_if_expr_16 = (_Bool)1;

  else
  {
    return_value_strchr_15=strchr(content, 10);
    tmp_if_expr_16 = (char *)(void *)0 != return_value_strchr_15 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_16)
    return 0;

  else
  {
    void *return_value_malloc_17;
    return_value_malloc_17=malloc(sizeof(struct MHD_HTTP_Header) /*32ul*/ );
    hdr = (struct MHD_HTTP_Header *)return_value_malloc_17;
    if(hdr == ((struct MHD_HTTP_Header *)NULL))
      return 0;

    else
    {
      hdr->header=strdup(header);
      if(hdr->header == ((char *)NULL))
      {
        free((void *)hdr);
        return 0;
      }

      else
      {
        hdr->value=strdup(content);
        if(hdr->value == ((char *)NULL))
        {
          free((void *)hdr->header);
          free((void *)hdr);
          return 0;
        }

        else
        {
          hdr->kind = kind;
          hdr->next = response->first_header;
          response->first_header = hdr;
          return 1;
        }
      }
    }
  }
}

// add_to_fd_set
// file daemon.c line 629
static signed int add_to_fd_set(signed int fd, struct anonymous_3 *set, signed int *max_fd, unsigned int fd_setsize)
{
  _Bool tmp_if_expr_1;
  if(set == ((struct anonymous_3 *)NULL))
    return 0;

  else
    if(fd >= (signed int)fd_setsize)
      return 0;

    else
    {
      set->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = set->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      if(!(max_fd == ((signed int *)NULL)) && !(fd == -1))
      {
        if(!(*max_fd >= fd))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = -1 == *max_fd ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          *max_fd = fd;

      }

      return 1;
    }
}

// ahc_echo
// file digest_auth_example.c line 36
static signed int ahc_echo(void *cls, struct MHD_Connection *connection, const char *url, const char *method, const char *version, const char *upload_data, unsigned long int *upload_data_size, void **ptr)
{
  struct MHD_Response *response;
  char *username;
  const char *password = "testpass";
  const char *realm = "test@example.com";
  signed int ret;
  username=MHD_digest_auth_get_username(connection);
  if(username == ((char *)NULL))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen("<html><head><title>libmicrohttpd demo</title></head><body>Access denied</body></html>");
    response=MHD_create_response_from_buffer(return_value_strlen_1, (void *)"<html><head><title>libmicrohttpd demo</title></head><body>Access denied</body></html>", (enum MHD_ResponseMemoryMode)MHD_RESPMEM_PERSISTENT);
    ret=MHD_queue_auth_fail_response(connection, realm, "11733b200778ce33060f31c9af70a870ba96ddd4", response, 0);
    MHD_destroy_response(response);
    return ret;
  }

  ret=MHD_digest_auth_check(connection, realm, username, password, (unsigned int)300);
  free((void *)username);
  if(ret == 0 || ret == -1)
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen("<html><head><title>libmicrohttpd demo</title></head><body>Access denied</body></html>");
    response=MHD_create_response_from_buffer(return_value_strlen_2, (void *)"<html><head><title>libmicrohttpd demo</title></head><body>Access denied</body></html>", (enum MHD_ResponseMemoryMode)MHD_RESPMEM_PERSISTENT);
    if(response == ((struct MHD_Response *)NULL))
      return 0;

    ret=MHD_queue_auth_fail_response(connection, realm, "11733b200778ce33060f31c9af70a870ba96ddd4", response, ret == -1 ? 1 : 0);
    MHD_destroy_response(response);
    return ret;
  }

  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen("<html><head><title>libmicrohttpd demo</title></head><body>Access granted</body></html>");
  response=MHD_create_response_from_buffer(return_value_strlen_3, (void *)"<html><head><title>libmicrohttpd demo</title></head><body>Access granted</body></html>", (enum MHD_ResponseMemoryMode)MHD_RESPMEM_PERSISTENT);
  ret=MHD_queue_response(connection, (unsigned int)200, response);
  MHD_destroy_response(response);
  return ret;
}

// build_header_response
// file connection.c line 642
static signed int build_header_response(struct MHD_Connection *connection)
{
  unsigned long int size;
  unsigned long int off;
  struct MHD_HTTP_Header *pos;
  char code[256l];
  char date[128l];
  char content_length_buf[128l];
  unsigned long int content_length_len;
  char *data;
  enum MHD_ValueKind kind;
  const char *reason_phrase;
  unsigned int rc;
  const char *client_requested_close;
  const char *response_has_close;
  const char *response_has_keepalive;
  const char *have_encoding;
  const char *have_content_length;
  signed int must_add_close;
  signed int must_add_chunked_encoding;
  signed int must_add_keep_alive;
  signed int must_add_content_length;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(connection->version);
  if(return_value_strlen_2 == 0ul)
  {
    void *return_value_MHD_pool_allocate_1;
    return_value_MHD_pool_allocate_1=MHD_pool_allocate(connection->pool, (unsigned long int)0, 1);
    data = (char *)return_value_MHD_pool_allocate_1;
    connection->write_buffer = data;
    connection->write_buffer_append_offset = (unsigned long int)0;
    connection->write_buffer_send_offset = (unsigned long int)0;
    connection->write_buffer_size = (unsigned long int)0;
    return 1;
  }

  char *tmp_if_expr_4;
  signed int return_value_strcasecmp_3;
  _Bool tmp_if_expr_6;
  const char *return_value_MHD_get_response_header_5;
  if((signed int)connection->state == MHD_CONNECTION_FOOTERS_RECEIVED)
  {
    rc = connection->responseCode & ~((unsigned int)((unsigned int)1 << 31));
    reason_phrase=MHD_get_reason_phrase_for(rc);
    if(!((2147483648u & connection->responseCode) == 0u))
      tmp_if_expr_4 = "ICY";

    else
    {
      return_value_strcasecmp_3=strcasecmp("HTTP/1.0", connection->version);
      tmp_if_expr_4 = 0 == return_value_strcasecmp_3 ? "HTTP/1.0" : "HTTP/1.1";
    }
    sprintf(code, "%s %u %s\r\n", tmp_if_expr_4, rc, reason_phrase);
    off=strlen(code);
    size = off + (unsigned long int)2;
    kind = (enum MHD_ValueKind)MHD_HEADER_KIND;
    if((MHD_SUPPRESS_DATE_NO_CLOCK & (signed int)connection->daemon->options) == 0)
    {
      return_value_MHD_get_response_header_5=MHD_get_response_header(connection->response, "Date");
      tmp_if_expr_6 = (const char *)(void *)0 == return_value_MHD_get_response_header_5 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_6 = (_Bool)0;
    if(tmp_if_expr_6)
      get_date_string(date);

    else
      date[(signed long int)0] = (char)0;
    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(date);
    size = size + return_value_strlen_7;
  }

  else
  {
    size = (unsigned long int)2;
    kind = (enum MHD_ValueKind)MHD_FOOTER_KIND;
    off = (unsigned long int)0;
  }
  must_add_close = 0;
  must_add_chunked_encoding = 0;
  must_add_keep_alive = 0;
  must_add_content_length = 0;
  signed int return_value_strcasecmp_8;
  signed int return_value_strcasecmp_9;
  signed int return_value_strcasecmp_10;
  _Bool tmp_if_expr_14;
  signed int return_value_strcasecmp_13;
  signed int return_value_strcasecmp_11;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_18;
  signed int return_value_strcasecmp_17;
  signed int return_value_keepalive_possible_19;
  switch((signed int)connection->state)
  {
    case MHD_CONNECTION_FOOTERS_RECEIVED:
    {
      response_has_close=MHD_get_response_header(connection->response, "Connection");
      response_has_keepalive = response_has_close;
      if(!(response_has_close == ((const char *)NULL)))
      {
        return_value_strcasecmp_8=strcasecmp(response_has_close, "close");
        if(!(return_value_strcasecmp_8 == 0))
          response_has_close = (const char *)(void *)0;

      }

      if(!(response_has_keepalive == ((const char *)NULL)))
      {
        return_value_strcasecmp_9=strcasecmp(response_has_keepalive, "Keep-Alive");
        if(!(return_value_strcasecmp_9 == 0))
          response_has_keepalive = (const char *)(void *)0;

      }

      client_requested_close=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Connection");
      if(!(client_requested_close == ((const char *)NULL)))
      {
        return_value_strcasecmp_10=strcasecmp(client_requested_close, "close");
        if(!(return_value_strcasecmp_10 == 0))
          client_requested_close = (const char *)(void *)0;

      }

      connection->have_chunked_upload = 0;
      if(connection->response->total_size == 18446744073709551615UL)
      {
        if(response_has_close == ((const char *)NULL))
        {
          if(client_requested_close == ((const char *)NULL))
          {
            signed int return_value_keepalive_possible_12;
            return_value_keepalive_possible_12=keepalive_possible(connection);
            if(return_value_keepalive_possible_12 == 1)
            {
              return_value_strcasecmp_13=strcasecmp("HTTP/1.1", connection->version);
              tmp_if_expr_14 = 0 == return_value_strcasecmp_13 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_14 = (_Bool)0;
            if(tmp_if_expr_14)
            {
              have_encoding=MHD_get_response_header(connection->response, "Transfer-Encoding");
              if(have_encoding == ((const char *)NULL))
              {
                must_add_chunked_encoding = 1;
                connection->have_chunked_upload = 1;
              }

              else
              {
                return_value_strcasecmp_11=strcasecmp(have_encoding, "identity");
                if(return_value_strcasecmp_11 == 0)
                  must_add_close = 1;

                else
                  connection->have_chunked_upload = 1;
              }
            }

            else
              if(response_has_close == ((const char *)NULL))
                must_add_close = 1;

          }

        }

      }

      if(!(client_requested_close == ((const char *)NULL)))
        tmp_if_expr_15 = (_Bool)1;

      else
        tmp_if_expr_15 = 1 == connection->read_closed ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_15)
      {
        if(response_has_close == ((const char *)NULL))
        {
          if((MHD_RF_HTTP_VERSION_1_0_ONLY & (signed int)connection->response->flags) == 0)
            must_add_close = 1;

        }

      }

      have_content_length=MHD_get_response_header(connection->response, "Content-Length");
      if(!(connection->response->total_size == 18446744073709551615UL))
      {
        if(have_content_length == ((const char *)NULL))
        {
          if(connection->method == ((char *)NULL))
            tmp_if_expr_18 = (_Bool)1;

          else
          {
            return_value_strcasecmp_17=strcasecmp(connection->method, "CONNECT");
            tmp_if_expr_18 = !(0 == return_value_strcasecmp_17) ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_18)
          {
            signed int return_value_sprintf_16;
            return_value_sprintf_16=sprintf(content_length_buf, "Content-Length: %llu\r\n", (unsigned long long int)connection->response->total_size);
            content_length_len = (unsigned long int)return_value_sprintf_16;
            must_add_content_length = 1;
          }

        }

      }

      if(response_has_close == ((const char *)NULL) && response_has_keepalive == ((const char *)NULL) && must_add_close == 0)
      {
        if((MHD_RF_HTTP_VERSION_1_0_ONLY & (signed int)connection->response->flags) == 0)
        {
          return_value_keepalive_possible_19=keepalive_possible(connection);
          if(return_value_keepalive_possible_19 == 1)
            must_add_keep_alive = 1;

        }

      }

      break;
    }
    case MHD_CONNECTION_BODY_SENT:
      break;
    default:
      ;
  }
  unsigned long int return_value_strlen_20;
  if(!(must_add_close == 0))
  {
    return_value_strlen_20=strlen("Connection: close\r\n");
    size = size + return_value_strlen_20;
  }

  unsigned long int return_value_strlen_21;
  if(!(must_add_keep_alive == 0))
  {
    return_value_strlen_21=strlen("Connection: Keep-Alive\r\n");
    size = size + return_value_strlen_21;
  }

  unsigned long int return_value_strlen_22;
  if(!(must_add_chunked_encoding == 0))
  {
    return_value_strlen_22=strlen("Transfer-Encoding: chunked\r\n");
    size = size + return_value_strlen_22;
  }

  if(!(must_add_content_length == 0))
    size = size + content_length_len;

  pos = connection->response->first_header;
  _Bool tmp_if_expr_25;
  _Bool tmp_if_expr_27;
  signed int return_value_strcasecmp_26;
  unsigned long int return_value_strlen_23;
  unsigned long int return_value_strlen_24;
  for( ; !(pos == ((struct MHD_HTTP_Header *)NULL)); pos = pos->next)
    if(pos->kind == kind)
    {
      if(must_add_close == 1)
        tmp_if_expr_25 = pos->value == response_has_keepalive ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_25 = (_Bool)0;
      if(tmp_if_expr_25)
      {
        return_value_strcasecmp_26=strcasecmp(pos->header, "Connection");
        tmp_if_expr_27 = 0 == return_value_strcasecmp_26 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_27 = (_Bool)0;
      if(!tmp_if_expr_27)
      {
        return_value_strlen_23=strlen(pos->header);
        return_value_strlen_24=strlen(pos->value);
        size = size + return_value_strlen_23 + return_value_strlen_24 + (unsigned long int)4;
      }

    }

  void *return_value_MHD_pool_allocate_28;
  return_value_MHD_pool_allocate_28=MHD_pool_allocate(connection->pool, size + (unsigned long int)1, 0);
  data = (char *)return_value_MHD_pool_allocate_28;
  _Bool tmp_if_expr_37;
  signed int return_value_strcasecmp_36;
  signed int return_value_sprintf_35;
  if(data == ((char *)NULL))
  {
    MHD_DLOG(connection->daemon, "Not enough memory for write!\n");
    return 0;
  }

  else
  {
    if((signed int)connection->state == MHD_CONNECTION_FOOTERS_RECEIVED)
      memcpy((void *)data, (const void *)code, off);

    if(!(must_add_close == 0))
    {
      unsigned long int return_value_strlen_29;
      return_value_strlen_29=strlen("Connection: close\r\n");
      memcpy((void *)&data[(signed long int)off], (const void *)"Connection: close\r\n", return_value_strlen_29);
      unsigned long int return_value_strlen_30;
      return_value_strlen_30=strlen("Connection: close\r\n");
      off = off + return_value_strlen_30;
    }

    if(!(must_add_keep_alive == 0))
    {
      unsigned long int return_value_strlen_31;
      return_value_strlen_31=strlen("Connection: Keep-Alive\r\n");
      memcpy((void *)&data[(signed long int)off], (const void *)"Connection: Keep-Alive\r\n", return_value_strlen_31);
      unsigned long int return_value_strlen_32;
      return_value_strlen_32=strlen("Connection: Keep-Alive\r\n");
      off = off + return_value_strlen_32;
    }

    if(!(must_add_chunked_encoding == 0))
    {
      unsigned long int return_value_strlen_33;
      return_value_strlen_33=strlen("Transfer-Encoding: chunked\r\n");
      memcpy((void *)&data[(signed long int)off], (const void *)"Transfer-Encoding: chunked\r\n", return_value_strlen_33);
      unsigned long int return_value_strlen_34;
      return_value_strlen_34=strlen("Transfer-Encoding: chunked\r\n");
      off = off + return_value_strlen_34;
    }

    if(!(must_add_content_length == 0))
    {
      memcpy((void *)&data[(signed long int)off], (const void *)content_length_buf, content_length_len);
      off = off + content_length_len;
    }

    pos = connection->response->first_header;
    for( ; !(pos == ((struct MHD_HTTP_Header *)NULL)); pos = pos->next)
      if(pos->kind == kind)
      {
        if(pos->value == response_has_keepalive && must_add_close == 1)
        {
          return_value_strcasecmp_36=strcasecmp(pos->header, "Connection");
          tmp_if_expr_37 = 0 == return_value_strcasecmp_36 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_37 = (_Bool)0;
        if(!tmp_if_expr_37)
        {
          return_value_sprintf_35=sprintf(&data[(signed long int)off], "%s: %s\r\n", pos->header, pos->value);
          off = off + (unsigned long int)return_value_sprintf_35;
        }

      }

    if((signed int)connection->state == MHD_CONNECTION_FOOTERS_RECEIVED)
    {
      strcpy(&data[(signed long int)off], date);
      unsigned long int return_value_strlen_38;
      return_value_strlen_38=strlen(date);
      off = off + return_value_strlen_38;
    }

    memcpy((void *)&data[(signed long int)off], (const void *)"\r\n", (unsigned long int)2);
    off = off + (unsigned long int)2;
    if(!(off == size))
      mhd_panic(mhd_panic_cls, "connection.c", (unsigned int)912, (const char *)(void *)0);

    connection->write_buffer = data;
    connection->write_buffer_append_offset = size;
    connection->write_buffer_send_offset = (unsigned long int)0;
    connection->write_buffer_size = size + (unsigned long int)1;
    return 1;
  }
}

// calculate_nonce
// file digestauth.c line 404
static void calculate_nonce(unsigned int nonce_time, const char *method, const char *rnd, unsigned long int rnd_size, const char *uri, const char *realm, char *nonce)
{
  struct MD5Context md5;
  unsigned char timestamp[4l];
  unsigned char tmpnonce[16l];
  char timestamphex[9l];
  MD5Init(&md5);
  timestamp[(signed long int)0] = (unsigned char)((nonce_time & 0xff000000) >> 0x18);
  timestamp[(signed long int)1] = (unsigned char)((nonce_time & (unsigned int)0x00ff0000) >> 0x10);
  timestamp[(signed long int)2] = (unsigned char)((nonce_time & (unsigned int)0x0000ff00) >> 0x08);
  timestamp[(signed long int)3] = (unsigned char)(nonce_time & (unsigned int)0x000000ff);
  MD5Update(&md5, timestamp, sizeof(unsigned char [4l]) /*4ul*/ );
  MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(method);
  MD5Update(&md5, (const unsigned char *)method, return_value_strlen_1);
  MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  if(rnd_size >= 1ul)
    MD5Update(&md5, (const unsigned char *)rnd, rnd_size);

  MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(uri);
  MD5Update(&md5, (const unsigned char *)uri, return_value_strlen_2);
  MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(realm);
  MD5Update(&md5, (const unsigned char *)realm, return_value_strlen_3);
  MD5Final(tmpnonce, &md5);
  cvthex(tmpnonce, sizeof(unsigned char [16l]) /*16ul*/ , nonce);
  cvthex(timestamp, sizeof(unsigned char [4l]) /*4ul*/ , timestamphex);
  strncat(nonce, timestamphex, (unsigned long int)8);
}

// call_connection_handler
// file connection.c line 1444
static void call_connection_handler(struct MHD_Connection *connection)
{
  unsigned long int processed;
  if(connection->response == ((struct MHD_Response *)NULL))
  {
    processed = (unsigned long int)0;
    connection->client_aware = 1;
    signed int return_value;
    return_value=connection->daemon->default_handler(connection->daemon->default_handler_cls, connection, connection->url, connection->method, connection->version, (const char *)(void *)0, &processed, &connection->client_context);
    if(return_value == 0)
      connection_close_error(connection, "Internal application error, closing connection.\n");

  }

}

// check_argument_match
// file digestauth.c line 486
static signed int check_argument_match(struct MHD_Connection *connection, const char *args)
{
  struct MHD_HTTP_Header *pos;
  char *argb;
  char *argp;
  char *equals;
  char *amper;
  unsigned int num_headers;
  argb=strdup(args);
  if(argb == ((char *)NULL))
  {
    MHD_DLOG(connection->daemon, "Failed to allocate memory for copy of URI arguments\n");
    return 0;
  }

  else
  {
    num_headers = (unsigned int)0;
    argp = argb;
    if(!(argp == ((char *)NULL)))
    {
      if(!((signed int)*argp == 0))
      {
        equals=strchr(argp, 61);
        amper=strchr(argp, 38);
        if(amper == ((char *)NULL))
        {
          if(equals == ((char *)NULL))
          {
            MHD_unescape_plus(argp);
            signed int return_value_test_header_1;
            return_value_test_header_1=test_header(connection, argp, (const char *)(void *)0);
            if(!(return_value_test_header_1 == 1))
            {
              free((void *)argb);
              return 0;
            }

            num_headers = num_headers + 1u;
            goto __CPROVER_DUMP_L11;
          }

          equals[(signed long int)0] = (char)0;
          equals = equals + 1l;
          MHD_unescape_plus(argp);
          connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, argp);
          MHD_unescape_plus(equals);
          connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, equals);
          signed int return_value_test_header_2;
          return_value_test_header_2=test_header(connection, argp, equals);
          if(!(return_value_test_header_2 == 1))
          {
            free((void *)argb);
            return 0;
          }

          num_headers = num_headers + 1u;
        }

        amper[(signed long int)0] = (char)0;
        amper = amper + 1l;
        if(equals == ((char *)NULL) || equals >= amper)
        {
          MHD_unescape_plus(argp);
          connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, argp);
          signed int return_value_test_header_3;
          return_value_test_header_3=test_header(connection, argp, (const char *)(void *)0);
          if(!(return_value_test_header_3 == 1))
          {
            free((void *)argb);
            return 0;
          }

          num_headers = num_headers + 1u;
          args = amper;
        }

        equals[(signed long int)0] = (char)0;
        equals = equals + 1l;
        MHD_unescape_plus(argp);
        connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, argp);
        MHD_unescape_plus(equals);
        connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, equals);
        signed int return_value_test_header_4;
        return_value_test_header_4=test_header(connection, argp, equals);
        if(!(return_value_test_header_4 == 1))
        {
          free((void *)argb);
          return 0;
        }

        num_headers = num_headers + 1u;
        argp = amper;
      }

    }


  __CPROVER_DUMP_L11:
    ;
    free((void *)argb);
    pos = connection->headers_received;
    for( ; !(pos == ((struct MHD_HTTP_Header *)NULL)); pos = pos->next)
      if((signed int)pos->kind == MHD_GET_ARGUMENT_KIND)
        num_headers = num_headers - 1u;

    if(!(num_headers == 0u))
      return 0;

    else
      return 1;
  }
}

// check_nonce_nc
// file digestauth.c line 308
static signed int check_nonce_nc(struct MHD_Connection *connection, const char *nonce, unsigned long int nc)
{
  unsigned int off;
  unsigned int mod;
  const char *np;
  mod = connection->daemon->nonce_nc_size;
  _Bool tmp_if_expr_5;
  signed int return_value_strcmp_4;
  if(mod == 0u)
    return 0;

  else
  {
    off = (unsigned int)0;
    np = nonce;
    for( ; !((signed int)*np == 0); np = np + 1l)
      off = off << 8 | (unsigned int)*np ^ off >> 24;
    off = off % mod;
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&connection->daemon->nnc_lock);
    (void)(0 == return_value_pthread_mutex_lock_1 ? 1 : 0);
    if(nc == 0ul)
    {
      strcpy((connection->daemon->nnc + (signed long int)off)->nonce, nonce);
      (connection->daemon->nnc + (signed long int)off)->nc = (unsigned long int)0;
      signed int return_value_pthread_mutex_unlock_2;
      return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&connection->daemon->nnc_lock);
      (void)(0 == return_value_pthread_mutex_unlock_2 ? 1 : 0);
      return 1;
    }

    if((connection->daemon->nnc + (signed long int)off)->nc >= nc)
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_strcmp_4=strcmp((connection->daemon->nnc + (signed long int)off)->nonce, nonce);
      tmp_if_expr_5 = 0 != return_value_strcmp_4 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_5)
    {
      signed int return_value_pthread_mutex_unlock_3;
      return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&connection->daemon->nnc_lock);
      (void)(0 == return_value_pthread_mutex_unlock_3 ? 1 : 0);
      MHD_DLOG(connection->daemon, "Stale nonce received.  If this happens a lot, you should probably increase the size of the nonce array.\n");
      return 0;
    }

    (connection->daemon->nnc + (signed long int)off)->nc = nc;
    signed int return_value_pthread_mutex_unlock_6;
    return_value_pthread_mutex_unlock_6=pthread_mutex_unlock(&connection->daemon->nnc_lock);
    (void)(0 == return_value_pthread_mutex_unlock_6 ? 1 : 0);
    return 1;
  }
}

// check_write_done
// file connection.c line 1748
static signed int check_write_done(struct MHD_Connection *connection, enum MHD_CONNECTION_STATE next_state)
{
  if(!(connection->write_buffer_append_offset == connection->write_buffer_send_offset))
    return 0;

  else
  {
    connection->write_buffer_append_offset = (unsigned long int)0;
    connection->write_buffer_send_offset = (unsigned long int)0;
    connection->state = next_state;
    MHD_pool_reallocate(connection->pool, (void *)connection->write_buffer, connection->write_buffer_size, (unsigned long int)0);
    connection->write_buffer = (char *)(void *)0;
    connection->write_buffer_size = (unsigned long int)0;
    return 1;
  }
}

// cleanup_connection
// file connection.c line 2229
static void cleanup_connection(struct MHD_Connection *connection)
{
  struct MHD_Daemon *daemon = connection->daemon;
  if(!(connection->response == ((struct MHD_Response *)NULL)))
  {
    MHD_destroy_response(connection->response);
    connection->response = (struct MHD_Response *)(void *)0;
  }

  signed int return_value_pthread_mutex_lock_1;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_lock_1 == 0))
      mhd_panic(mhd_panic_cls, "connection.c", (unsigned int)2240, "Failed to acquire cleanup mutex\n");

  }

  if(connection->connection_timeout == daemon->connection_timeout)
    do
    {
      if(connection->prevX == ((struct MHD_Connection *)NULL))
        daemon->normal_timeout_head = connection->nextX;

      else
        connection->prevX->nextX = connection->nextX;
      if(connection->nextX == ((struct MHD_Connection *)NULL))
        daemon->normal_timeout_tail = connection->prevX;

      else
        connection->nextX->prevX = connection->prevX;
      connection->nextX = (struct MHD_Connection *)(void *)0;
      connection->prevX = (struct MHD_Connection *)(void *)0;
    }
    while((_Bool)0);

  else
    do
    {
      if(connection->prevX == ((struct MHD_Connection *)NULL))
        daemon->manual_timeout_head = connection->nextX;

      else
        connection->prevX->nextX = connection->nextX;
      if(connection->nextX == ((struct MHD_Connection *)NULL))
        daemon->manual_timeout_tail = connection->prevX;

      else
        connection->nextX->prevX = connection->prevX;
      connection->nextX = (struct MHD_Connection *)(void *)0;
      connection->prevX = (struct MHD_Connection *)(void *)0;
    }
    while((_Bool)0);
  if(connection->suspended == 1)
    do
    {
      if(connection->prev == ((struct MHD_Connection *)NULL))
        daemon->suspended_connections_head = connection->next;

      else
        connection->prev->next = connection->next;
      if(connection->next == ((struct MHD_Connection *)NULL))
        daemon->suspended_connections_tail = connection->prev;

      else
        connection->next->prev = connection->prev;
      connection->next = (struct MHD_Connection *)(void *)0;
      connection->prev = (struct MHD_Connection *)(void *)0;
    }
    while((_Bool)0);

  else
    do
    {
      if(connection->prev == ((struct MHD_Connection *)NULL))
        daemon->connections_head = connection->next;

      else
        connection->prev->next = connection->next;
      if(connection->next == ((struct MHD_Connection *)NULL))
        daemon->connections_tail = connection->prev;

      else
        connection->next->prev = connection->prev;
      connection->next = (struct MHD_Connection *)(void *)0;
      connection->prev = (struct MHD_Connection *)(void *)0;
    }
    while((_Bool)0);
  do
  {
    connection->next = daemon->cleanup_head;
    connection->prev = (struct MHD_Connection *)(void *)0;
    if(daemon->cleanup_tail == ((struct MHD_Connection *)NULL))
      daemon->cleanup_tail = connection;

    else
      daemon->cleanup_head->prev = connection;
    daemon->cleanup_head = connection;
  }
  while((_Bool)0);
  connection->suspended = 0;
  connection->resuming = 0;
  connection->in_idle = 0;
  signed int return_value_pthread_mutex_unlock_2;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_unlock_2 == 0))
      mhd_panic(mhd_panic_cls, "connection.c", (unsigned int)2265, "Failed to release cleanup mutex\n");

  }

}

// close_all_connections
// file daemon.c line 4392
static void close_all_connections(struct MHD_Daemon *daemon)
{
  struct MHD_Connection *pos;
  signed int return_value_pthread_mutex_lock_1;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_lock_1 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4400, "Failed to acquire cleanup mutex\n");

  }

  pos = daemon->connections_head;
  for( ; !(pos == ((struct MHD_Connection *)NULL)); pos = pos->next)
    shutdown(pos->socket_fd, pos->read_closed == 1 ? 1 : 2);
  signed int return_value_pthread_mutex_unlock_2;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_unlock_2 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4414, "Failed to release cleanup mutex\n");

  }

  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    pos = daemon->connections_head;
    for( ; !(pos == ((struct MHD_Connection *)NULL)); pos = pos->next)
    {
      signed int return_value_pthread_join_3;
      return_value_pthread_join_3=pthread_join(pos->pid, (void **)(void *)0);
      if(!(return_value_pthread_join_3 == 0))
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4422, "Failed to join a thread\n");

      pos->thread_joined = 1;
    }
  }

  do
  {
    pos = daemon->connections_head;
    if(pos == ((struct MHD_Connection *)NULL))
      break;

    close_connection(pos);
  }
  while((_Bool)1);
  MHD_cleanup_connections(daemon);
}

// close_connection
// file daemon.c line 4358
static void close_connection(struct MHD_Connection *pos)
{
  struct MHD_Daemon *daemon = pos->daemon;
  MHD_connection_close(pos, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_DAEMON_SHUTDOWN);
  if((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0)
  {
    if(pos->connection_timeout == pos->daemon->connection_timeout)
      do
      {
        if(pos->prevX == ((struct MHD_Connection *)NULL))
          daemon->normal_timeout_head = pos->nextX;

        else
          pos->prevX->nextX = pos->nextX;
        if(pos->nextX == ((struct MHD_Connection *)NULL))
          daemon->normal_timeout_tail = pos->prevX;

        else
          pos->nextX->prevX = pos->prevX;
        pos->nextX = (struct MHD_Connection *)(void *)0;
        pos->prevX = (struct MHD_Connection *)(void *)0;
      }
      while((_Bool)0);

    else
      do
      {
        if(pos->prevX == ((struct MHD_Connection *)NULL))
          daemon->manual_timeout_head = pos->nextX;

        else
          pos->prevX->nextX = pos->nextX;
        if(pos->nextX == ((struct MHD_Connection *)NULL))
          daemon->manual_timeout_tail = pos->prevX;

        else
          pos->nextX->prevX = pos->prevX;
        pos->nextX = (struct MHD_Connection *)(void *)0;
        pos->prevX = (struct MHD_Connection *)(void *)0;
      }
      while((_Bool)0);
    do
    {
      if(pos->prev == ((struct MHD_Connection *)NULL))
        daemon->connections_head = pos->next;

      else
        pos->prev->next = pos->next;
      if(pos->next == ((struct MHD_Connection *)NULL))
        daemon->connections_tail = pos->prev;

      else
        pos->next->prev = pos->prev;
      pos->next = (struct MHD_Connection *)(void *)0;
      pos->prev = (struct MHD_Connection *)(void *)0;
    }
    while((_Bool)0);
    pos->event_loop_info = (enum MHD_ConnectionEventLoopInfo)MHD_EVENT_LOOP_INFO_CLEANUP;
    do
    {
      pos->next = daemon->cleanup_head;
      pos->prev = (struct MHD_Connection *)(void *)0;
      if(daemon->cleanup_tail == ((struct MHD_Connection *)NULL))
        daemon->cleanup_tail = pos;

      else
        daemon->cleanup_head->prev = pos;
      daemon->cleanup_head = pos;
    }
    while((_Bool)0);
  }

}

// connection_add_header
// file connection.c line 1178
static signed int connection_add_header(struct MHD_Connection *connection, char *key, char *value, enum MHD_ValueKind kind)
{
  signed int return_value_MHD_set_connection_value_1;
  return_value_MHD_set_connection_value_1=MHD_set_connection_value(connection, kind, key, value);
  if(return_value_MHD_set_connection_value_1 == 0)
  {
    MHD_DLOG(connection->daemon, "Not enough memory to allocate header record!\n");
    transmit_error_response(connection, (unsigned int)413, "<html><head><title>Request too big</title></head><body>Your HTTP header was too big for the memory constraints of this webserver.</body></html>");
    return 0;
  }

  else
    return 1;
}

// connection_close_error
// file connection.c line 296
static void connection_close_error(struct MHD_Connection *connection, const char *emsg)
{
  if(!(emsg == ((const char *)NULL)))
    MHD_DLOG(connection->daemon, emsg);

  MHD_connection_close(connection, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_WITH_ERROR);
}

// create_socket
// file daemon.c line 3488
static signed int create_socket(struct MHD_Daemon *daemon, signed int domain, signed int type, signed int protocol)
{
  signed int ctype = type | 524288;
  signed int fd;
  fd=socket(domain, ctype, protocol);
  signed int *return_value___errno_location_1;
  if(fd == -1)
  {
    return_value___errno_location_1=__errno_location();
    if(*return_value___errno_location_1 == 22)
    {
      ctype = type;
      fd=socket(domain, type, protocol);
    }

  }

  if(fd == -1)
    return -1;

  else
  {
    if(type == ctype)
      make_nonblocking_noninheritable(daemon, fd);

    return fd;
  }
}

// create_thread
// file daemon.c line 1197
static signed int create_thread(unsigned long int *thread, struct MHD_Daemon *daemon, void * (*start_routine)(void *), void *arg)
{
  union pthread_attr_t attr;
  union pthread_attr_t *pattr;
  signed int ret;
  if(!(daemon->thread_stack_size == 0ul))
  {
    ret=pthread_attr_init(&attr);
    if(!(ret == 0))
      goto ERR;

    ret=pthread_attr_setstacksize(&attr, daemon->thread_stack_size);
    if(!(ret == 0))
    {
      pthread_attr_destroy(&attr);
      goto ERR;
    }

    pattr = &attr;
  }

  else
    pattr = (union pthread_attr_t *)(void *)0;
  ret=pthread_create(thread, pattr, start_routine, arg);
  pthread_setname_np(*thread, "libmicrohttpd");
  if(!(daemon->thread_stack_size == 0ul))
    pthread_attr_destroy(&attr);

  return ret;

ERR:
  ;
  MHD_DLOG(daemon, "Failed to set thread stack size\n");
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  *return_value___errno_location_1 = 22;
  return ret;
}

// cvthex
// file digestauth.c line 75
static void cvthex(const unsigned char *bin, unsigned long int len, char *hex)
{
  unsigned long int i;
  unsigned int j;
  i = (unsigned long int)0;
  for( ; !(i >= len); i = i + 1ul)
  {
    j = (unsigned int)((signed int)bin[(signed long int)i] >> 4 & 0x0f);
    hex[(signed long int)(i * (unsigned long int)2)] = (char)(j <= (unsigned int)9 ? j + (unsigned int)48 : (j - (unsigned int)10) + (unsigned int)97);
    j = (unsigned int)((signed int)bin[(signed long int)i] & 0x0f);
    hex[(signed long int)(i * (unsigned long int)2 + (unsigned long int)1)] = (char)(j <= (unsigned int)9 ? j + (unsigned int)48 : (j - (unsigned int)10) + (unsigned int)97);
  }
  hex[(signed long int)(len * (unsigned long int)2)] = (char)0;
}

// digest_calc_ha1
// file digestauth.c line 106
static void digest_calc_ha1(const char *alg, const char *username, const char *realm, const char *password, const char *nonce, const char *cnonce, char *sessionkey)
{
  struct MD5Context md5;
  unsigned char ha1[16l];
  MD5Init(&md5);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(username);
  MD5Update(&md5, (const unsigned char *)username, return_value_strlen_1);
  MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(realm);
  MD5Update(&md5, (const unsigned char *)realm, return_value_strlen_2);
  MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(password);
  MD5Update(&md5, (const unsigned char *)password, return_value_strlen_3);
  MD5Final(ha1, &md5);
  signed int return_value_strcasecmp_6;
  return_value_strcasecmp_6=strcasecmp(alg, "md5-sess");
  if(return_value_strcasecmp_6 == 0)
  {
    MD5Init(&md5);
    MD5Update(&md5, (const unsigned char *)ha1, sizeof(unsigned char [16l]) /*16ul*/ );
    MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(nonce);
    MD5Update(&md5, (const unsigned char *)nonce, return_value_strlen_4);
    MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(cnonce);
    MD5Update(&md5, (const unsigned char *)cnonce, return_value_strlen_5);
    MD5Final(ha1, &md5);
  }

  cvthex(ha1, sizeof(unsigned char [16l]) /*16ul*/ , sessionkey);
}

// digest_calc_response
// file digestauth.c line 152
static void digest_calc_response(const char *ha1, const char *nonce, const char *noncecount, const char *cnonce, const char *qop, const char *method, const char *uri, const char *hentity, char *response)
{
  struct MD5Context md5;
  unsigned char ha2[16l];
  unsigned char resphash[16l];
  char ha2hex[33l];
  MD5Init(&md5);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(method);
  MD5Update(&md5, (const unsigned char *)method, return_value_strlen_1);
  MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(uri);
  MD5Update(&md5, (const unsigned char *)uri, return_value_strlen_2);
  MD5Final(ha2, &md5);
  cvthex(ha2, (unsigned long int)16, ha2hex);
  MD5Init(&md5);
  MD5Update(&md5, (const unsigned char *)ha1, (unsigned long int)(2 * 16));
  MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(nonce);
  MD5Update(&md5, (const unsigned char *)nonce, return_value_strlen_3);
  MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  if(!((signed int)*qop == 0))
  {
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(noncecount);
    MD5Update(&md5, (const unsigned char *)noncecount, return_value_strlen_4);
    MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(cnonce);
    MD5Update(&md5, (const unsigned char *)cnonce, return_value_strlen_5);
    MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(qop);
    MD5Update(&md5, (const unsigned char *)qop, return_value_strlen_6);
    MD5Update(&md5, (const unsigned char *)":", (unsigned long int)1);
  }

  MD5Update(&md5, (const unsigned char *)ha2hex, (unsigned long int)(2 * 16));
  MD5Final(resphash, &md5);
  cvthex(resphash, sizeof(unsigned char [16l]) /*16ul*/ , response);
}

// do_read
// file connection.c line 1659
static signed int do_read(struct MHD_Connection *connection)
{
  signed long int bytes_read;
  if(connection->read_buffer_size == connection->read_buffer_offset)
    return 0;

  else
  {
    bytes_read=connection->recv_cls(connection, (void *)&connection->read_buffer[(signed long int)connection->read_buffer_offset], connection->read_buffer_size - connection->read_buffer_offset);
    if(!(bytes_read >= 0l))
    {
      signed int err;
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      err = *return_value___errno_location_1;
      if(err == 4 || err == 11)
        return 0;

      if(err == 104)
      {
        connection_close_error(connection, (const char *)(void *)0);
        return 0;
      }

      connection_close_error(connection, (const char *)(void *)0);
      return 1;
    }

    if(bytes_read == 0l)
    {
      connection->read_closed = 1;
      MHD_connection_close(connection, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_CLIENT_ABORT);
      return 1;
    }

    else
    {
      connection->read_buffer_offset = connection->read_buffer_offset + (unsigned long int)bytes_read;
      return 1;
    }
  }
}

// do_write
// file connection.c line 1706
static signed int do_write(struct MHD_Connection *connection)
{
  signed long int ret;
  unsigned long int max = connection->write_buffer_append_offset - connection->write_buffer_send_offset;
  ret=connection->send_cls(connection, (const void *)&connection->write_buffer[(signed long int)connection->write_buffer_send_offset], max);
  if(!(ret >= 0l))
  {
    signed int err;
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    err = *return_value___errno_location_1;
    if(err == 4 || err == 11)
      return 0;

    connection_close_error(connection, (const char *)(void *)0);
    return 1;
  }

  if(!(max == 0ul))
    connection->write_buffer_send_offset = connection->write_buffer_send_offset + (unsigned long int)ret;

  return 1;
}

// epoll_shutdown
// file daemon.c line 4441
static void epoll_shutdown(struct MHD_Daemon *daemon)
{
  struct epoll_event event;
  if(daemon->wpipe[1l] == -1)
    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4448, "Internal error\n");

  event.events = (unsigned int)4;
  event.data.ptr = (void *)0;
  signed int return_value_epoll_ctl_1;
  return_value_epoll_ctl_1=epoll_ctl(daemon->epoll_fd, 1, daemon->wpipe[(signed long int)1], &event);
  if(!(return_value_epoll_ctl_1 == 0))
    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)4456, "Failed to add wpipe to epoll set to signal termination\n");

}

// file_reader
// file response.c line 319
static signed long int file_reader(void *cls, unsigned long int pos, char *buf, unsigned long int max)
{
  struct MHD_Response *response = (struct MHD_Response *)cls;
  signed long int n;
  const signed long int offset64 = (signed long int)(pos + response->fd_off);
  if(!(offset64 >= 0l))
    return (signed long int)(18446744073709551615UL - (unsigned long int)1);

  else
  {
    signed long int return_value_lseek64_1;
    return_value_lseek64_1=lseek64(response->fd, offset64, 0);
    if(!(return_value_lseek64_1 == offset64))
      return (signed long int)(18446744073709551615UL - (unsigned long int)1);

    else
    {
      if(max >= 9223372036854775808ul)
        max = (unsigned long int)0x7fffffffffffffffL;

      n=read(response->fd, (void *)buf, max);
      if(n == 0l)
        return (signed long int)18446744073709551615UL;

      else
        if(!(n >= 0l))
          return (signed long int)(18446744073709551615UL - (unsigned long int)1);

        else
          return n;
    }
  }
}

// find_boundary
// file postprocessor.c line 530
static signed int find_boundary(struct MHD_PostProcessor *pp, const char *boundary, unsigned long int blen, unsigned long int *ioffptr, enum PP_State next_state, enum PP_State next_dash_state)
{
  char *buf = (char *)&pp[(signed long int)1];
  const char *dash;
  _Bool tmp_if_expr_4;
  signed int return_value_memcmp_3;
  if(!(pp->buffer_pos >= 2ul + blen))
  {
    if(pp->buffer_pos == pp->buffer_size)
      pp->state = (enum PP_State)PP_Error;

    return 0;
  }

  else
  {
    signed int return_value_memcmp_2;
    return_value_memcmp_2=memcmp((const void *)"--", (const void *)buf, (unsigned long int)2);
    if(!(return_value_memcmp_2 == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_memcmp_3=memcmp((const void *)&buf[(signed long int)2], (const void *)boundary, blen);
      tmp_if_expr_4 = 0 != return_value_memcmp_3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
    {
      if(!((signed int)pp->state == PP_Init))
        pp->state = (enum PP_State)PP_Error;

      else
      {
        void *return_value_memchr_1;
        return_value_memchr_1=memchr((const void *)buf, 45, pp->buffer_pos);
        dash = (const char *)return_value_memchr_1;
        if(dash == ((const char *)NULL))
          *ioffptr = *ioffptr + pp->buffer_pos;

        else
          if(dash == buf)
            *ioffptr = *ioffptr + 1ul;

          else
            *ioffptr = *ioffptr + (unsigned long int)(dash - buf);
      }
      return 0;
    }

    else
    {
      *ioffptr = *ioffptr + (unsigned long int)2 + blen;
      pp->skip_rn = (enum RN_State)RN_Dash;
      pp->state = next_state;
      pp->dash_state = next_dash_state;
      return 1;
    }
  }
}

// free_callback
// file response.c line 369
static void free_callback(void *cls)
{
  struct MHD_Response *response = (struct MHD_Response *)cls;
  close(response->fd);
  response->fd = -1;
}

// free_unmarked
// file postprocessor.c line 792
static void free_unmarked(struct MHD_PostProcessor *pp)
{
  if(!(pp->content_name == ((char *)NULL)))
  {
    if((NE_content_name & (signed int)pp->have) == 0)
    {
      free((void *)pp->content_name);
      pp->content_name = (char *)(void *)0;
    }

  }

  if(!(pp->content_type == ((char *)NULL)))
  {
    if((NE_content_type & (signed int)pp->have) == 0)
    {
      free((void *)pp->content_type);
      pp->content_type = (char *)(void *)0;
    }

  }

  if(!(pp->content_filename == ((char *)NULL)))
  {
    if((NE_content_filename & (signed int)pp->have) == 0)
    {
      free((void *)pp->content_filename);
      pp->content_filename = (char *)(void *)0;
    }

  }

  if(!(pp->content_transfer_encoding == ((char *)NULL)))
  {
    if((NE_content_transfer_encoding & (signed int)pp->have) == 0)
    {
      free((void *)pp->content_transfer_encoding);
      pp->content_transfer_encoding = (char *)(void *)0;
    }

  }

}

// get_date_string
// file connection.c line 554
static void get_date_string(char *date)
{
  struct tm now;
  signed long int t;
  date[(signed long int)0] = (char)0;
  time(&t);
  struct tm *return_value_gmtime_r_1;
  return_value_gmtime_r_1=gmtime_r(&t, &now);
  static const char * const mons[12l] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
  static const char * const days[7l] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
  if(!(return_value_gmtime_r_1 == ((struct tm *)NULL)))
    sprintf(date, "Date: %3s, %02u %3s %04u %02u:%02u:%02u GMT\r\n", days[(signed long int)(now.tm_wday % 7)], (unsigned int)now.tm_mday, mons[(signed long int)(now.tm_mon % 12)], (unsigned int)(1900 + now.tm_year), (unsigned int)now.tm_hour, (unsigned int)now.tm_min, (unsigned int)now.tm_sec);

}

// get_next_header_line
// file connection.c line 1127
static char * get_next_header_line(struct MHD_Connection *connection)
{
  char *rbuf;
  unsigned long int pos;
  signed int return_value_try_grow_read_buffer_1;
  unsigned long int tmp_post_2;
  unsigned long int tmp_post_3;
  if(connection->read_buffer_offset == 0ul)
    return (char *)(void *)0;

  else
  {
    pos = (unsigned long int)0;
    rbuf = connection->read_buffer;
    for( ; !(pos >= connection->read_buffer_offset + 18446744073709551615ul); pos = pos + 1ul)
    {
      if((signed int)rbuf[(signed long int)pos] == 13)
        break;

      if((signed int)rbuf[(signed long int)pos] == 10)
        break;

    }
    if(pos == connection->read_buffer_offset + 18446744073709551615ul)
    {
      if(!((signed int)rbuf[(signed long int)pos] == 10))
      {
        if(connection->read_buffer_offset == connection->read_buffer_size)
        {
          return_value_try_grow_read_buffer_1=try_grow_read_buffer(connection);
          if(return_value_try_grow_read_buffer_1 == 0)
            transmit_error_response(connection, (unsigned int)((char *)(void *)0 != connection->url ? 413 : 414), "<html><head><title>Request too big</title></head><body>Your HTTP header was too big for the memory constraints of this webserver.</body></html>");

        }

        return (char *)(void *)0;
      }

    }

    if((signed int)rbuf[(signed long int)pos] == 13)
    {
      if((signed int)rbuf[1l + (signed long int)pos] == 10)
      {
        tmp_post_2 = pos;
        pos = pos + 1ul;
        rbuf[(signed long int)tmp_post_2] = (char)0;
      }

    }

    tmp_post_3 = pos;
    pos = pos + 1ul;
    rbuf[(signed long int)tmp_post_3] = (char)0;
    connection->read_buffer = connection->read_buffer + (signed long int)pos;
    connection->read_buffer_size = connection->read_buffer_size - pos;
    connection->read_buffer_offset = connection->read_buffer_offset - pos;
    return rbuf;
  }
}

// internal_add_connection
// file daemon.c line 1278
static signed int internal_add_connection(struct MHD_Daemon *daemon, signed int client_socket, struct sockaddr *addr, unsigned int addrlen, signed int external_add)
{
  struct MHD_Connection *connection;
  signed int res_thread_create;
  unsigned int i;
  signed int eno;
  struct MHD_Daemon *worker;
  signed int return_value_internal_add_connection_1;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  if(!(daemon->worker_pool == ((struct MHD_Daemon *)NULL)))
  {
    i = (unsigned int)0;
    for( ; !(i >= daemon->worker_pool_size); i = i + 1u)
    {
      worker = &daemon->worker_pool[(signed long int)((i + (unsigned int)client_socket) % daemon->worker_pool_size)];
      if(!(worker->connections >= worker->connection_limit))
      {
        return_value_internal_add_connection_1=internal_add_connection(worker, client_socket, addr, addrlen, external_add);
        return return_value_internal_add_connection_1;
      }

    }
    signed int return_value_close_2;
    return_value_close_2=close(client_socket);
    if(!(return_value_close_2 == 0))
    {
      return_value___errno_location_3=__errno_location();
      tmp_if_expr_4 = 9 == *return_value___errno_location_3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1309, "close failed\n");

    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    *return_value___errno_location_5 = 23;
    return 0;
  }

  _Bool tmp_if_expr_8;
  signed int *return_value___errno_location_7;
  if(client_socket >= 1024)
  {
    if((576 & (signed int)daemon->options) == 0)
    {
      MHD_DLOG(daemon, "Socket descriptor larger than FD_SETSIZE: %d > %d\n", client_socket, 1024);
      signed int return_value_close_6;
      return_value_close_6=close(client_socket);
      if(!(return_value_close_6 == 0))
      {
        return_value___errno_location_7=__errno_location();
        tmp_if_expr_8 = 9 == *return_value___errno_location_7 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1327, "close failed\n");

      signed int *return_value___errno_location_9;
      return_value___errno_location_9=__errno_location();
      *return_value___errno_location_9 = 22;
      return 0;
    }

  }

  _Bool tmp_if_expr_15;
  signed int return_value_MHD_ip_limit_add_14;
  if(daemon->connections == daemon->connection_limit)
    tmp_if_expr_15 = (_Bool)1;

  else
  {
    return_value_MHD_ip_limit_add_14=MHD_ip_limit_add(daemon, addr, addrlen);
    tmp_if_expr_15 = 0 == return_value_MHD_ip_limit_add_14 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_12;
  signed int *return_value___errno_location_11;
  if(tmp_if_expr_15)
  {
    MHD_DLOG(daemon, "Server reached connection limit (closing inbound connection)\n");
    signed int return_value_close_10;
    return_value_close_10=close(client_socket);
    if(!(return_value_close_10 == 0))
    {
      return_value___errno_location_11=__errno_location();
      tmp_if_expr_12 = 9 == *return_value___errno_location_11 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_12 = (_Bool)0;
    if(tmp_if_expr_12)
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1352, "close failed\n");

    signed int *return_value___errno_location_13;
    return_value___errno_location_13=__errno_location();
    *return_value___errno_location_13 = 23;
    return 0;
  }

  signed int return_value;
  _Bool tmp_if_expr_18;
  signed int *return_value___errno_location_17;
  if(!(daemon->apc == ((signed int (*)(void *, struct sockaddr *, unsigned int))NULL)))
  {
    return_value=daemon->apc(daemon->apc_cls, addr, addrlen);
    if(return_value == 0)
    {
      signed int return_value_close_16;
      return_value_close_16=close(client_socket);
      if(!(return_value_close_16 == 0))
      {
        return_value___errno_location_17=__errno_location();
        tmp_if_expr_18 = 9 == *return_value___errno_location_17 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_18 = (_Bool)0;
      if(tmp_if_expr_18)
        mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1371, "close failed\n");

      MHD_ip_limit_del(daemon, addr, addrlen);
      return 0;
    }

  }

  void *return_value_malloc_26;
  return_value_malloc_26=malloc(sizeof(struct MHD_Connection) /*392ul*/ );
  connection = (struct MHD_Connection *)return_value_malloc_26;
  _Bool tmp_if_expr_24;
  signed int *return_value___errno_location_23;
  if(connection == ((struct MHD_Connection *)NULL))
  {
    signed int *return_value___errno_location_19;
    return_value___errno_location_19=__errno_location();
    eno = *return_value___errno_location_19;
    signed int *return_value___errno_location_20;
    return_value___errno_location_20=__errno_location();
    char *return_value_strerror_21;
    return_value_strerror_21=strerror(*return_value___errno_location_20);
    MHD_DLOG(daemon, "Error allocating memory: %s\n", return_value_strerror_21);
    signed int return_value_close_22;
    return_value_close_22=close(client_socket);
    if(!(return_value_close_22 == 0))
    {
      return_value___errno_location_23=__errno_location();
      tmp_if_expr_24 = 9 == *return_value___errno_location_23 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_24 = (_Bool)0;
    if(tmp_if_expr_24)
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1398, "close failed\n");

    MHD_ip_limit_del(daemon, addr, addrlen);
    signed int *return_value___errno_location_25;
    return_value___errno_location_25=__errno_location();
    *return_value___errno_location_25 = eno;
    return 0;
  }

  memset((void *)connection, 0, sizeof(struct MHD_Connection) /*392ul*/ );
  connection->pool=MHD_pool_create(daemon->pool_size);
  _Bool tmp_if_expr_31;
  signed int *return_value___errno_location_30;
  if(connection->pool == ((struct MemoryPool *)NULL))
  {
    signed int *return_value___errno_location_27;
    return_value___errno_location_27=__errno_location();
    char *return_value_strerror_28;
    return_value_strerror_28=strerror(*return_value___errno_location_27);
    MHD_DLOG(daemon, "Error allocating memory: %s\n", return_value_strerror_28);
    signed int return_value_close_29;
    return_value_close_29=close(client_socket);
    if(!(return_value_close_29 == 0))
    {
      return_value___errno_location_30=__errno_location();
      tmp_if_expr_31 = 9 == *return_value___errno_location_30 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_31 = (_Bool)0;
    if(tmp_if_expr_31)
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1415, "close failed\n");

    MHD_ip_limit_del(daemon, addr, addrlen);
    free((void *)connection);
    signed int *return_value___errno_location_32;
    return_value___errno_location_32=__errno_location();
    *return_value___errno_location_32 = 12;
    return 0;
  }

  connection->connection_timeout = daemon->connection_timeout;
  void *return_value_malloc_40;
  return_value_malloc_40=malloc((unsigned long int)addrlen);
  connection->addr = (struct sockaddr *)return_value_malloc_40;
  _Bool tmp_if_expr_38;
  signed int *return_value___errno_location_37;
  if(connection->addr == ((struct sockaddr *)NULL))
  {
    signed int *return_value___errno_location_33;
    return_value___errno_location_33=__errno_location();
    eno = *return_value___errno_location_33;
    signed int *return_value___errno_location_34;
    return_value___errno_location_34=__errno_location();
    char *return_value_strerror_35;
    return_value_strerror_35=strerror(*return_value___errno_location_34);
    MHD_DLOG(daemon, "Error allocating memory: %s\n", return_value_strerror_35);
    signed int return_value_close_36;
    return_value_close_36=close(client_socket);
    if(!(return_value_close_36 == 0))
    {
      return_value___errno_location_37=__errno_location();
      tmp_if_expr_38 = 9 == *return_value___errno_location_37 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_38 = (_Bool)0;
    if(tmp_if_expr_38)
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1434, "close failed\n");

    MHD_ip_limit_del(daemon, addr, addrlen);
    MHD_pool_destroy(connection->pool);
    free((void *)connection);
    signed int *return_value___errno_location_39;
    return_value___errno_location_39=__errno_location();
    *return_value___errno_location_39 = eno;
    return 0;
  }

  memcpy((void *)connection->addr, (const void *)addr, (unsigned long int)addrlen);
  connection->addr_len = addrlen;
  connection->socket_fd = client_socket;
  connection->daemon = daemon;
  connection->last_activity=MHD_monotonic_sec_counter();
  MHD_set_http_callbacks_(connection);
  connection->recv_cls = recv_param_adapter;
  connection->send_cls = send_param_adapter;
  _Bool tmp_if_expr_44;
  signed int return_value_fcntl_43;
  if((MHD_USE_EPOLL_TURBO & (signed int)connection->daemon->options) == 0)
  {
    signed int flags;
    flags=fcntl(connection->socket_fd, 3);
    if(flags == -1)
      tmp_if_expr_44 = (_Bool)1;

    else
    {
      return_value_fcntl_43=fcntl(connection->socket_fd, 4, flags | 04000);
      tmp_if_expr_44 = 0 != return_value_fcntl_43 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_44)
    {
      signed int *return_value___errno_location_41;
      return_value___errno_location_41=__errno_location();
      char *return_value_strerror_42;
      return_value_strerror_42=strerror(*return_value___errno_location_41);
      MHD_DLOG(daemon, "Failed to make socket non-blocking: %s\n", return_value_strerror_42);
    }

  }

  _Bool tmp_if_expr_47;
  signed int *return_value___errno_location_46;
  if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
  {
    connection->recv_cls = recv_tls_adapter;
    connection->send_cls = send_tls_adapter;
    connection->state = (enum MHD_CONNECTION_STATE)MHD_TLS_CONNECTION_INIT;
    MHD_set_https_callbacks(connection);
    gnutls_init(&connection->tls_session, (unsigned int)1);
    gnutls_priority_set(connection->tls_session, daemon->priority_cache);
    if((signed int)daemon->cred_type == GNUTLS_CRD_CERTIFICATE)
    {
      gnutls_credentials_set(connection->tls_session, (enum anonymous_0)GNUTLS_CRD_CERTIFICATE, (void *)daemon->x509_cred);
      goto __CPROVER_DUMP_L52;
    }

    MHD_DLOG(connection->daemon, "Failed to setup TLS credentials: unknown credential type %d\n", daemon->cred_type);
    signed int return_value_close_45;
    return_value_close_45=close(client_socket);
    if(!(return_value_close_45 == 0))
    {
      return_value___errno_location_46=__errno_location();
      tmp_if_expr_47 = 9 == *return_value___errno_location_46 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_47 = (_Bool)0;
    if(tmp_if_expr_47)
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1513, "close failed\n");

    MHD_ip_limit_del(daemon, addr, addrlen);
    free((void *)connection->addr);
    free((void *)connection);
    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1517, "Unknown credential type");
    signed int *return_value___errno_location_48;
    return_value___errno_location_48=__errno_location();
    *return_value___errno_location_48 = 22;
    return 0;

  __CPROVER_DUMP_L52:
    ;
    gnutls_transport_set_ptr(connection->tls_session, (void *)connection);
    gnutls_transport_set_pull_function(connection->tls_session, (signed long int (*)(void *, void *, unsigned long int))recv_param_adapter);
    gnutls_transport_set_push_function(connection->tls_session, (signed long int (*)(void *, const void *, unsigned long int))send_param_adapter);
    if(!(daemon->https_mem_trust == ((const char *)NULL)))
      gnutls_certificate_server_set_request(connection->tls_session, (enum anonymous_12)GNUTLS_CERT_REQUEST);

  }

  signed int return_value_pthread_mutex_lock_49;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_lock_49=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_lock_49 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1538, "Failed to acquire cleanup mutex\n");

  }

  do
  {
    connection->nextX = daemon->normal_timeout_head;
    connection->prevX = (struct MHD_Connection *)(void *)0;
    if(daemon->normal_timeout_tail == ((struct MHD_Connection *)NULL))
      daemon->normal_timeout_tail = connection;

    else
      daemon->normal_timeout_head->prevX = connection;
    daemon->normal_timeout_head = connection;
  }
  while((_Bool)0);
  do
  {
    connection->next = daemon->connections_head;
    connection->prev = (struct MHD_Connection *)(void *)0;
    if(daemon->connections_tail == ((struct MHD_Connection *)NULL))
      daemon->connections_tail = connection;

    else
      daemon->connections_head->prev = connection;
    daemon->connections_head = connection;
  }
  while((_Bool)0);
  signed int return_value_pthread_mutex_unlock_50;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_unlock_50=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_unlock_50 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1547, "Failed to release cleanup mutex\n");

  }

  if(!(daemon->notify_connection == ((void (*)(void *, struct MHD_Connection *, void **, enum MHD_ConnectionNotificationCode))NULL)))
    daemon->notify_connection(daemon->notify_connection_cls, connection, &connection->socket_context, (enum MHD_ConnectionNotificationCode)MHD_CONNECTION_NOTIFY_STARTED);

  signed long int return_value_write_53;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    res_thread_create=create_thread(&connection->pid, daemon, MHD_handle_connection, (void *)connection);
    if(!(res_thread_create == 0))
    {
      signed int *return_value___errno_location_51;
      return_value___errno_location_51=__errno_location();
      eno = *return_value___errno_location_51;
      char *return_value_strerror_52;
      return_value_strerror_52=strerror(res_thread_create);
      MHD_DLOG(daemon, "Failed to create a thread: %s\n", return_value_strerror_52);
      goto cleanup;
    }

  }

  else
    if(external_add == 1)
    {
      if(!(daemon->wpipe[1l] == -1))
      {
        return_value_write_53=write(daemon->wpipe[(signed long int)1], (const void *)"n", (unsigned long int)1);
        if(!(return_value_write_53 == 1l))
          MHD_DLOG(daemon, "failed to signal new connection via pipe");

      }

    }

  if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
  {
    if((MHD_USE_EPOLL_TURBO & (signed int)daemon->options) == 0)
    {
      struct epoll_event event;
      event.events = (unsigned int)(1 | 4 | -2147483648);
      event.data.ptr = (void *)connection;
      signed int return_value_epoll_ctl_57;
      return_value_epoll_ctl_57=epoll_ctl(daemon->epoll_fd, 1, client_socket, &event);
      if(!(return_value_epoll_ctl_57 == 0))
      {
        signed int *return_value___errno_location_54;
        return_value___errno_location_54=__errno_location();
        eno = *return_value___errno_location_54;
        signed int *return_value___errno_location_55;
        return_value___errno_location_55=__errno_location();
        char *return_value_strerror_56;
        return_value_strerror_56=strerror(*return_value___errno_location_55);
        MHD_DLOG(daemon, "Call to epoll_ctl failed: %s\n", return_value_strerror_56);
        goto cleanup;
      }

      connection->epoll_state = connection->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_IN_EPOLL_SET;
    }

    else
    {
      connection->epoll_state = connection->epoll_state | (enum MHD_EpollState)(MHD_EPOLL_STATE_READ_READY | MHD_EPOLL_STATE_WRITE_READY | MHD_EPOLL_STATE_IN_EREADY_EDLL);
      do
      {
        connection->nextE = daemon->eready_head;
        connection->prevE = (struct MHD_Connection *)(void *)0;
        if(daemon->eready_tail == ((struct MHD_Connection *)NULL))
          daemon->eready_tail = connection;

        else
          daemon->eready_head->prevE = connection;
        daemon->eready_head = connection;
      }
      while((_Bool)0);
    }
  }

  daemon->connections = daemon->connections + 1u;
  return 1;

cleanup:
  ;
  if(!(daemon->notify_connection == ((void (*)(void *, struct MHD_Connection *, void **, enum MHD_ConnectionNotificationCode))NULL)))
    daemon->notify_connection(daemon->notify_connection_cls, connection, &connection->socket_context, (enum MHD_ConnectionNotificationCode)MHD_CONNECTION_NOTIFY_CLOSED);

  signed int return_value_close_58;
  return_value_close_58=close(client_socket);
  _Bool tmp_if_expr_60;
  signed int *return_value___errno_location_59;
  if(!(return_value_close_58 == 0))
  {
    return_value___errno_location_59=__errno_location();
    tmp_if_expr_60 = 9 == *return_value___errno_location_59 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_60 = (_Bool)0;
  if(tmp_if_expr_60)
    mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1626, "close failed\n");

  MHD_ip_limit_del(daemon, addr, addrlen);
  signed int return_value_pthread_mutex_lock_61;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_lock_61=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_lock_61 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1630, "Failed to acquire cleanup mutex\n");

  }

  do
  {
    if(connection->prev == ((struct MHD_Connection *)NULL))
      daemon->connections_head = connection->next;

    else
      connection->prev->next = connection->next;
    if(connection->next == ((struct MHD_Connection *)NULL))
      daemon->connections_tail = connection->prev;

    else
      connection->next->prev = connection->prev;
    connection->next = (struct MHD_Connection *)(void *)0;
    connection->prev = (struct MHD_Connection *)(void *)0;
  }
  while((_Bool)0);
  do
  {
    if(connection->prevX == ((struct MHD_Connection *)NULL))
      daemon->normal_timeout_head = connection->nextX;

    else
      connection->prevX->nextX = connection->nextX;
    if(connection->nextX == ((struct MHD_Connection *)NULL))
      daemon->normal_timeout_tail = connection->prevX;

    else
      connection->nextX->prevX = connection->prevX;
    connection->nextX = (struct MHD_Connection *)(void *)0;
    connection->prevX = (struct MHD_Connection *)(void *)0;
  }
  while((_Bool)0);
  signed int return_value_pthread_mutex_unlock_62;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_unlock_62=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_unlock_62 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1639, "Failed to release cleanup mutex\n");

  }

  MHD_pool_destroy(connection->pool);
  free((void *)connection->addr);
  free((void *)connection);
  signed int *return_value___errno_location_63;
  return_value___errno_location_63=__errno_location();
  *return_value___errno_location_63 = eno;
  return 0;
}

// keepalive_possible
// file connection.c line 512
static signed int keepalive_possible(struct MHD_Connection *connection)
{
  const char *end;
  _Bool tmp_if_expr_3;
  signed int return_value_strcasecmp_2;
  if(connection->version == ((char *)NULL))
    return 0;

  else
    if(!(connection->response == ((struct MHD_Response *)NULL)))
    {
      if((MHD_RF_HTTP_VERSION_1_0_ONLY & (signed int)connection->response->flags) == 0)
        goto __CPROVER_DUMP_L2;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      end=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Connection");
      signed int return_value_strcasecmp_4;
      return_value_strcasecmp_4=strcasecmp(connection->version, "HTTP/1.1");
      if(return_value_strcasecmp_4 == 0)
      {
        if(end == ((const char *)NULL))
          return 1;

        signed int return_value_strcasecmp_1;
        return_value_strcasecmp_1=strcasecmp(end, "close");
        if(return_value_strcasecmp_1 == 0)
          tmp_if_expr_3 = (_Bool)1;

        else
        {
          return_value_strcasecmp_2=strcasecmp(end, "upgrade");
          tmp_if_expr_3 = 0 == return_value_strcasecmp_2 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_3)
          return 0;

        return 1;
      }

      signed int return_value_strcasecmp_6;
      return_value_strcasecmp_6=strcasecmp(connection->version, "HTTP/1.0");
      if(return_value_strcasecmp_6 == 0)
      {
        if(end == ((const char *)NULL))
          return 0;

        signed int return_value_strcasecmp_5;
        return_value_strcasecmp_5=strcasecmp(end, "Keep-Alive");
        if(return_value_strcasecmp_5 == 0)
          return 1;

        return 0;
      }

      return 0;
    }
}

// lookup_sub_value
// file digestauth.c line 219
static unsigned long int lookup_sub_value(char *dest, unsigned long int size, const char *data, const char *key)
{
  unsigned long int keylen;
  unsigned long int len;
  const char *ptr;
  const char *eq;
  const char *q1;
  const char *q2;
  const char *qn;
  if(size == 0ul)
    return (unsigned long int)0;

  else
  {
    keylen=strlen(key);
    ptr = data;
    while(!((signed int)*ptr == 0))
    {
      eq=strchr(ptr, 61);
      if(eq == ((const char *)NULL))
        return (unsigned long int)0;

      q1 = eq + (signed long int)1;
      for( ; (signed int)*q1 == 32; q1 = q1 + 1l)
        ;
      if(!((signed int)*q1 == 34))
      {
        q2=strchr(q1, 44);
        qn = q2;
      }

      else
      {
        q1 = q1 + 1l;
        q2=strchr(q1, 34);
        if(q2 == ((const char *)NULL))
          return (unsigned long int)0;

        qn = q2 + (signed long int)1;
      }
      signed int return_value_strncasecmp_2;
      return_value_strncasecmp_2=strncasecmp(ptr, key, keylen);
      if(return_value_strncasecmp_2 == 0)
      {
        if(eq == ptr + (signed long int)keylen)
        {
          if(q2 == ((const char *)NULL))
          {
            unsigned long int return_value_strlen_1;
            return_value_strlen_1=strlen(q1);
            len = return_value_strlen_1 + (unsigned long int)1;
            if(!(len >= size))
              size = len;

            size = size - 1ul;
            strncpy(dest, q1, size);
            dest[(signed long int)size] = (char)0;
            return size;
          }

          else
          {
            if(!(1ul + (unsigned long int)(q2 - q1) >= size))
              size = (unsigned long int)((q2 - q1) + (signed long int)1);

            size = size - 1ul;
            memcpy((void *)dest, (const void *)q1, size);
            dest[(signed long int)size] = (char)0;
            return size;
          }
        }

      }

      if(qn == ((const char *)NULL))
        return (unsigned long int)0;

      ptr=strchr(qn, 44);
      if(ptr == ((const char *)NULL))
        return (unsigned long int)0;

      ptr = ptr + 1l;
      for( ; (signed int)*ptr == 32; ptr = ptr + 1l)
        ;
    }
    return (unsigned long int)0;
  }
}

// main
// file digest_auth_example.c line 90
signed int main(signed int argc, char * const *argv)
{
  signed int fd;
  char rnd[8l];
  signed long int len;
  unsigned long int off;
  struct MHD_Daemon *d;
  if(!(argc == 2))
  {
    printf("%s PORT\n", argv[(signed long int)0]);
    return 1;
  }

  else
  {
    fd=open("/dev/urandom", 00);
    if(fd == -1)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      fprintf(stderr, "Failed to open `%s': %s\n", (const void *)"/dev/urandom", return_value_strerror_2);
      return 1;
    }

    off = (unsigned long int)0;
    for( ; !(off >= 8ul); off = off + (unsigned long int)len)
    {
      len=read(fd, (void *)rnd, (unsigned long int)8);
      if(len == -1l)
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        char *return_value_strerror_4;
        return_value_strerror_4=strerror(*return_value___errno_location_3);
        fprintf(stderr, "Failed to read `%s': %s\n", (const void *)"/dev/urandom", return_value_strerror_4);
        close(fd);
        return 1;
      }

    }
    close(fd);
    signed int return_value_atoi_5;
    return_value_atoi_5=atoi(argv[(signed long int)1]);
    d=MHD_start_daemon((unsigned int)(MHD_USE_THREAD_PER_CONNECTION | MHD_USE_DEBUG), (unsigned short int)return_value_atoi_5, (signed int (*)(void *, struct sockaddr *, unsigned int))(void *)0, (void *)0, ahc_echo, (void *)"<html><head><title>libmicrohttpd demo</title></head><body>Access granted</body></html>", MHD_OPTION_DIGEST_AUTH_RANDOM, sizeof(char [8l]) /*8ul*/ , (const void *)rnd, MHD_OPTION_NONCE_NC_SIZE, 300, MHD_OPTION_CONNECTION_TIMEOUT, (unsigned int)120, MHD_OPTION_END);
    if(d == ((struct MHD_Daemon *)NULL))
      return 1;

    else
    {
      _IO_getc(stdin);
      MHD_stop_daemon(d);
      return 0;
    }
  }
}

// make_nonblocking_noninheritable
// file daemon.c line 1839
static void make_nonblocking_noninheritable(struct MHD_Daemon *daemon, signed int sock)
{
  signed int flags;
  signed int nonblock = 04000;
  flags=fcntl(sock, 1);
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  signed int return_value_fcntl_3;
  if(flags == -1)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    if(!(flags == (1 | flags)))
    {
      return_value_fcntl_3=fcntl(sock, 2, flags | nonblock | 1);
      tmp_if_expr_4 = 0 != return_value_fcntl_3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
    tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_5)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    MHD_DLOG(daemon, "Failed to make socket non-inheritable: %s\n", return_value_strerror_2);
  }

}

// mhd_panic_std
// file daemon.c line 132
static void mhd_panic_std(void *cls, const char *file, unsigned int line, const char *reason)
{
  fprintf(stderr, "Fatal error in GNU libmicrohttpd %s:%u: %s\n", file, line, reason);
  abort();
}

// need_100_continue
// file connection.c line 242
static signed int need_100_continue(struct MHD_Connection *connection)
{
  const char *expect;
  _Bool tmp_if_expr_1;
  if(connection->response == ((struct MHD_Response *)NULL))
    tmp_if_expr_1 = (char *)(void *)0 != connection->version ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  _Bool tmp_if_expr_3;
  signed int return_value_strcasecmp_2;
  if(tmp_if_expr_1)
  {
    return_value_strcasecmp_2=strcasecmp(connection->version, "HTTP/1.1");
    tmp_if_expr_3 = 0 == return_value_strcasecmp_2 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
  {
    expect=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Expect");
    tmp_if_expr_4 = (const char *)(void *)0 != expect ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_6;
  signed int return_value_strcasecmp_5;
  if(tmp_if_expr_4)
  {
    return_value_strcasecmp_5=strcasecmp(expect, "100-continue");
    tmp_if_expr_6 = 0 == return_value_strcasecmp_5 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_6 = (_Bool)0;
  _Bool tmp_if_expr_8;
  unsigned long int return_value_strlen_7;
  if(tmp_if_expr_6)
  {
    return_value_strlen_7=strlen("HTTP/1.1 100 Continue\r\n\r\n");
    tmp_if_expr_8 = connection->continue_message_write_offset < return_value_strlen_7 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_8 = (_Bool)0;
  return (signed int)tmp_if_expr_8;
}

// parse_arguments
// file connection.c line 1207
static signed int parse_arguments(enum MHD_ValueKind kind, struct MHD_Connection *connection, char *args)
{
  char *equals;
  char *amper;
  if(!(args == ((char *)NULL)))
  {
    equals=strchr(args, 61);
    amper=strchr(args, 38);
    if(amper == ((char *)NULL))
    {
      if(equals == ((char *)NULL))
      {
        MHD_unescape_plus(args);
        connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, args);
        signed int return_value_connection_add_header_1;
        return_value_connection_add_header_1=connection_add_header(connection, args, (char *)(void *)0, kind);
        return return_value_connection_add_header_1;
      }

      equals[(signed long int)0] = (char)0;
      equals = equals + 1l;
      MHD_unescape_plus(args);
      connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, args);
      MHD_unescape_plus(equals);
      connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, equals);
      signed int return_value_connection_add_header_2;
      return_value_connection_add_header_2=connection_add_header(connection, args, equals, kind);
      return return_value_connection_add_header_2;
    }

    amper[(signed long int)0] = (char)0;
    amper = amper + 1l;
    if(equals == ((char *)NULL) || equals >= amper)
    {
      MHD_unescape_plus(args);
      connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, args);
      signed int return_value_connection_add_header_3;
      return_value_connection_add_header_3=connection_add_header(connection, args, (char *)(void *)0, kind);
      if(return_value_connection_add_header_3 == 0)
        return 0;

      args = amper;
    }

    equals[(signed long int)0] = (char)0;
    equals = equals + 1l;
    MHD_unescape_plus(args);
    connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, args);
    MHD_unescape_plus(equals);
    connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, equals);
    signed int return_value_connection_add_header_4;
    return_value_connection_add_header_4=connection_add_header(connection, args, equals, kind);
    if(return_value_connection_add_header_4 == 0)
      return 0;

    args = amper;
  }

  return 1;
}

// parse_connection_headers
// file connection.c line 1889
static void parse_connection_headers(struct MHD_Connection *connection)
{
  const char *clen;
  unsigned long long int cval;
  struct MHD_Response *response;
  const char *enc;
  char *end;
  parse_cookie_header(connection);
  signed int return_value_strcasecmp_3;
  const char *return_value_MHD_lookup_connection_value_2;
  if(!((MHD_USE_PEDANTIC_CHECKS & (signed int)connection->daemon->options) == 0))
  {
    if(!(connection->version == ((char *)NULL)))
    {
      return_value_strcasecmp_3=strcasecmp("HTTP/1.1", connection->version);
      if(return_value_strcasecmp_3 == 0)
      {
        return_value_MHD_lookup_connection_value_2=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Host");
        if(return_value_MHD_lookup_connection_value_2 == ((const char *)NULL))
        {
          connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_RECEIVED;
          connection->read_closed = 1;
          MHD_DLOG(connection->daemon, "Received `%s' request without `%s' header.\n", (const void *)"HTTP/1.1", (const void *)"Host");
          unsigned long int return_value_strlen_1;
          return_value_strlen_1=strlen("<html><head><title>&quot;Host:&quot; header required</title></head><body>In HTTP 1.1, requests must include a &quot;Host:&quot; header, and your HTTP 1.1 request lacked such a header.</body></html>");
          response=MHD_create_response_from_buffer(return_value_strlen_1, (void *)"<html><head><title>&quot;Host:&quot; header required</title></head><body>In HTTP 1.1, requests must include a &quot;Host:&quot; header, and your HTTP 1.1 request lacked such a header.</body></html>", (enum MHD_ResponseMemoryMode)MHD_RESPMEM_PERSISTENT);
          MHD_queue_response(connection, (unsigned int)400, response);
          MHD_destroy_response(response);
          goto __CPROVER_DUMP_L10;
        }

      }

    }

  }

  connection->remaining_upload_size = (unsigned long int)0;
  enc=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Transfer-Encoding");
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_6;
  signed int *return_value___errno_location_5;
  if(!(enc == ((const char *)NULL)))
  {
    connection->remaining_upload_size = 18446744073709551615UL;
    signed int return_value_strcasecmp_4;
    return_value_strcasecmp_4=strcasecmp(enc, "chunked");
    if(return_value_strcasecmp_4 == 0)
      connection->have_chunked_upload = 1;

  }

  else
  {
    clen=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Content-Length");
    if(!(clen == ((const char *)NULL)))
    {
      cval=strtoul(clen, &end, 10);
      if(!((signed int)*end == 0))
        tmp_if_expr_7 = (_Bool)1;

      else
      {
        if(cval == 9223372036854775807ul)
        {
          return_value___errno_location_5=__errno_location();
          tmp_if_expr_6 = *return_value___errno_location_5 == 34 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_6 = (_Bool)0;
        tmp_if_expr_7 = tmp_if_expr_6 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_7)
      {
        MHD_DLOG(connection->daemon, "Failed to parse `%s' header `%s', closing connection.\n", (const void *)"Content-Length", clen);
        connection_close_error(connection, (const char *)(void *)0);
        goto __CPROVER_DUMP_L10;
      }

      connection->remaining_upload_size = cval;
    }

  }

__CPROVER_DUMP_L10:
  ;
}

// parse_cookie_header
// file connection.c line 1293
static signed int parse_cookie_header(struct MHD_Connection *connection)
{
  const char *hdr;
  char *cpy;
  char *pos;
  char *sce;
  char *semicolon;
  char *equals;
  char *ekill;
  char old;
  signed int quotes;
  hdr=MHD_lookup_connection_value(connection, (enum MHD_ValueKind)MHD_HEADER_KIND, "Cookie");
  char *tmp_post_4;
  unsigned long int return_value_strlen_7;
  if(hdr == ((const char *)NULL))
    return 1;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(hdr);
    void *return_value_MHD_pool_allocate_2;
    return_value_MHD_pool_allocate_2=MHD_pool_allocate(connection->pool, return_value_strlen_1 + (unsigned long int)1, 1);
    cpy = (char *)return_value_MHD_pool_allocate_2;
    if(cpy == ((char *)NULL))
    {
      MHD_DLOG(connection->daemon, "Not enough memory to parse cookies!\n");
      transmit_error_response(connection, (unsigned int)413, "<html><head><title>Request too big</title></head><body>Your HTTP header was too big for the memory constraints of this webserver.</body></html>");
      return 0;
    }

    else
    {
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(hdr);
      memcpy((void *)cpy, (const void *)hdr, return_value_strlen_3 + (unsigned long int)1);
      pos = cpy;
      while(!(pos == ((char *)NULL)))
      {
        for( ; (signed int)*pos == 32; pos = pos + 1l)
          ;
        sce = pos;
        for( ; !((signed int)*sce == 0); sce = sce + 1l)
        {
          if((signed int)*sce == 44)
            break;

          if((signed int)*sce == 59)
            break;

          if((signed int)*sce == 61)
            break;

        }
        ekill = sce - (signed long int)1;
        for( ; (signed int)*ekill == 32; *tmp_post_4 = (char)0)
        {
          if(!(ekill >= pos))
            break;

          tmp_post_4 = ekill;
          ekill = ekill - 1l;
        }
        old = *sce;
        *sce = (char)0;
        if(!((signed int)old == 61))
        {
          signed int return_value_connection_add_header_5;
          return_value_connection_add_header_5=connection_add_header(connection, pos, "", (enum MHD_ValueKind)MHD_COOKIE_KIND);
          if(return_value_connection_add_header_5 == 0)
            return 0;

          if((signed int)old == 0)
            break;

          pos = sce + (signed long int)1;
          continue;
        }

        equals = sce + (signed long int)1;
        quotes = 0;
        semicolon = equals;
        for( ; !((signed int)*semicolon == 0); semicolon = semicolon + 1l)
        {
          if(quotes == 0)
          {
            if(!((signed int)*semicolon == 59))
            {
              if((signed int)*semicolon == 44)
                goto __CPROVER_DUMP_L14;

            }

            else
            {

            __CPROVER_DUMP_L14:
              ;
              break;
            }
          }

          if((signed int)*semicolon == 34)
            quotes = quotes + 1 & 1;

        }
        if((signed int)*semicolon == 0)
          semicolon = (char *)(void *)0;

        if(!(semicolon == ((char *)NULL)))
        {
          semicolon[(signed long int)0] = (char)0;
          semicolon = semicolon + 1l;
        }

        if((signed int)*equals == 34)
        {
          return_value_strlen_7=strlen(equals);
          if((signed int)equals[-1l + (signed long int)return_value_strlen_7] == 34)
          {
            unsigned long int return_value_strlen_6;
            return_value_strlen_6=strlen(equals);
            equals[(signed long int)(return_value_strlen_6 - (unsigned long int)1)] = (char)0;
            equals = equals + 1l;
          }

        }

        signed int return_value_connection_add_header_8;
        return_value_connection_add_header_8=connection_add_header(connection, pos, equals, (enum MHD_ValueKind)MHD_COOKIE_KIND);
        if(return_value_connection_add_header_8 == 0)
          return 0;

        pos = semicolon;
      }
      return 1;
    }
  }
}

// parse_initial_message_line
// file connection.c line 1392
static signed int parse_initial_message_line(struct MHD_Connection *connection, char *line)
{
  char *uri;
  char *http_version;
  char *args;
  uri=strchr(line, 32);
  if(uri == ((char *)NULL))
    return 0;

  else
  {
    uri[(signed long int)0] = (char)0;
    connection->method = line;
    uri = uri + 1l;
    for( ; (signed int)*uri == 32; uri = uri + 1l)
      ;
    http_version=strchr(uri, 32);
    if(!(http_version == ((char *)NULL)))
    {
      http_version[(signed long int)0] = (char)0;
      http_version = http_version + 1l;
    }

    if(!(connection->daemon->uri_log_callback == ((void * (*)(void *, const char *, struct MHD_Connection *))NULL)))
      connection->client_context=connection->daemon->uri_log_callback(connection->daemon->uri_log_callback_cls, uri, connection);

    args=strchr(uri, 63);
    if(!(args == ((char *)NULL)))
    {
      args[(signed long int)0] = (char)0;
      args = args + 1l;
      parse_arguments((enum MHD_ValueKind)MHD_GET_ARGUMENT_KIND, connection, args);
    }

    connection->daemon->unescape_callback(connection->daemon->unescape_callback_cls, connection, uri);
    connection->url = uri;
    if(http_version == ((char *)NULL))
      connection->version = "";

    else
      connection->version = http_version;
    return 1;
  }
}

// parse_options
// file daemon.c line 3121
static signed int parse_options(struct MHD_Daemon *daemon, struct sockaddr **servaddr, ...)
{
  void **ap;
  signed int ret;
  ap = (void **)&servaddr;
  ret=parse_options_va(daemon, servaddr, ap);
  ap = ((void **)NULL);
  return ret;
}

// parse_options_va
// file daemon.c line 3144
static signed int parse_options_va(struct MHD_Daemon *daemon, struct sockaddr **servaddr, __builtin_va_list ap)
{
  enum MHD_OPTION opt;
  struct MHD_OptionItem *oa;
  unsigned int i;
  signed int ret;
  const char *pstr;
  signed int return_value_gcc_builtin_va_arg_1;
  signed int return_value_gcc_builtin_va_arg_2;
  unsigned int return_value_gcc_builtin_va_arg_7;
  signed int return_value_parse_options_8;
  signed int return_value_parse_options_9;
  signed int return_value_parse_options_10;
  signed int return_value_parse_options_11;
  signed int return_value_parse_options_12;
  signed int return_value_parse_options_13;
  signed int return_value_parse_options_14;
  do
  {
    return_value_gcc_builtin_va_arg_1=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg_1));
    opt = (enum MHD_OPTION)return_value_gcc_builtin_va_arg_1;
    if((signed int)opt == MHD_OPTION_END)
      break;

    switch((signed int)opt)
    {
      case MHD_OPTION_CONNECTION_MEMORY_LIMIT:
      {
        daemon->pool_size=va_arg(ap, __typeof__(daemon->pool_size));
        break;
      }
      case MHD_OPTION_CONNECTION_MEMORY_INCREMENT:
      {
        daemon->pool_increment=va_arg(ap, __typeof__(daemon->pool_increment));
        break;
      }
      case MHD_OPTION_CONNECTION_LIMIT:
      {
        daemon->connection_limit=va_arg(ap, __typeof__(daemon->connection_limit));
        break;
      }
      case MHD_OPTION_CONNECTION_TIMEOUT:
      {
        daemon->connection_timeout=va_arg(ap, __typeof__(daemon->connection_timeout));
        break;
      }
      case MHD_OPTION_NOTIFY_COMPLETED:
      {
        daemon->notify_completed=va_arg(ap, __typeof__(daemon->notify_completed));
        daemon->notify_completed_cls=va_arg(ap, __typeof__(daemon->notify_completed_cls));
        break;
      }
      case MHD_OPTION_NOTIFY_CONNECTION:
      {
        daemon->notify_connection=va_arg(ap, __typeof__(daemon->notify_connection));
        daemon->notify_connection_cls=va_arg(ap, __typeof__(daemon->notify_connection_cls));
        break;
      }
      case MHD_OPTION_PER_IP_CONNECTION_LIMIT:
      {
        daemon->per_ip_connection_limit=va_arg(ap, __typeof__(daemon->per_ip_connection_limit));
        break;
      }
      case MHD_OPTION_SOCK_ADDR:
      {
        *servaddr=va_arg(ap, __typeof__(*servaddr));
        break;
      }
      case MHD_OPTION_URI_LOG_CALLBACK:
      {
        daemon->uri_log_callback=va_arg(ap, __typeof__(daemon->uri_log_callback));
        daemon->uri_log_callback_cls=va_arg(ap, __typeof__(daemon->uri_log_callback_cls));
        break;
      }
      case MHD_OPTION_THREAD_POOL_SIZE:
      {
        daemon->worker_pool_size=va_arg(ap, __typeof__(daemon->worker_pool_size));
        if((unsigned long int)daemon->worker_pool_size >= 32476662101601323ul)
        {
          MHD_DLOG(daemon, "Specified thread pool size (%u) too big\n", daemon->worker_pool_size);
          return 0;
        }

        break;
      }
      case MHD_OPTION_HTTPS_MEM_KEY:
      {
        if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
          daemon->https_mem_key=va_arg(ap, __typeof__(daemon->https_mem_key));

        else
          MHD_DLOG(daemon, "MHD HTTPS option %d passed to MHD but MHD_USE_SSL not set\n", opt);
        break;
      }
      case MHD_OPTION_HTTPS_KEY_PASSWORD:
      {
        if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
          daemon->https_key_password=va_arg(ap, __typeof__(daemon->https_key_password));

        else
          MHD_DLOG(daemon, "MHD HTTPS option %d passed to MHD but MHD_USE_SSL not set\n", opt);
        break;
      }
      case MHD_OPTION_HTTPS_MEM_CERT:
      {
        if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
          daemon->https_mem_cert=va_arg(ap, __typeof__(daemon->https_mem_cert));

        else
          MHD_DLOG(daemon, "MHD HTTPS option %d passed to MHD but MHD_USE_SSL not set\n", opt);
        break;
      }
      case MHD_OPTION_HTTPS_MEM_TRUST:
      {
        if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
          daemon->https_mem_trust=va_arg(ap, __typeof__(daemon->https_mem_trust));

        else
          MHD_DLOG(daemon, "MHD HTTPS option %d passed to MHD but MHD_USE_SSL not set\n", opt);
        break;
      }
      case MHD_OPTION_HTTPS_CRED_TYPE:
      {
        return_value_gcc_builtin_va_arg_2=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg_2));
        daemon->cred_type = (enum anonymous_0)return_value_gcc_builtin_va_arg_2;
        break;
      }
      case MHD_OPTION_HTTPS_MEM_DHPARAMS:
      {
        if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
        {
          const char *arg;
          arg=va_arg(ap, __typeof__(arg));
          struct anonymous_2 dhpar;
          signed int return_value_gnutls_dh_params_init_3;
          return_value_gnutls_dh_params_init_3=gnutls_dh_params_init(&daemon->https_mem_dhparams);
          if(!(return_value_gnutls_dh_params_init_3 >= 0))
          {
            MHD_DLOG(daemon, "Error initializing DH parameters\n");
            return 0;
          }

          dhpar.data = (unsigned char *)arg;
          unsigned long int return_value_strlen_4;
          return_value_strlen_4=strlen(arg);
          dhpar.size = (unsigned int)return_value_strlen_4;
          signed int return_value_gnutls_dh_params_import_pkcs3_5;
          return_value_gnutls_dh_params_import_pkcs3_5=gnutls_dh_params_import_pkcs3(daemon->https_mem_dhparams, &dhpar, (enum anonymous_1)GNUTLS_X509_FMT_PEM);
          if(!(return_value_gnutls_dh_params_import_pkcs3_5 >= 0))
          {
            MHD_DLOG(daemon, "Bad Diffie-Hellman parameters format\n");
            gnutls_dh_params_deinit(daemon->https_mem_dhparams);
            return 0;
          }

          daemon->have_dhparams = 1;
        }

        else
        {
          MHD_DLOG(daemon, "MHD HTTPS option %d passed to MHD but MHD_USE_SSL not set\n", opt);
          return 0;
        }
        break;
      }
      case MHD_OPTION_HTTPS_PRIORITIES:
      {
        if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
        {
          gnutls_priority_deinit(daemon->priority_cache);
          pstr=va_arg(ap, __typeof__(pstr));
          ret=gnutls_priority_init(&daemon->priority_cache, pstr, (const char **)(void *)0);
          if(!(ret == 0))
          {
            const char *return_value_gnutls_strerror_6;
            return_value_gnutls_strerror_6=gnutls_strerror(ret);
            MHD_DLOG(daemon, "Setting priorities to `%s' failed: %s\n", pstr, return_value_gnutls_strerror_6);
            daemon->priority_cache = (struct gnutls_priority_st *)(void *)0;
            return 0;
          }

        }

        break;
      }
      case MHD_OPTION_HTTPS_CERT_CALLBACK:
      {
        if(!((MHD_USE_SSL & (signed int)daemon->options) == 0))
          daemon->cert_callback=va_arg(ap, __typeof__(daemon->cert_callback));

        break;
      }
      case MHD_OPTION_DIGEST_AUTH_RANDOM:
      {
        daemon->digest_auth_rand_size=va_arg(ap, __typeof__(daemon->digest_auth_rand_size));
        daemon->digest_auth_random=va_arg(ap, __typeof__(daemon->digest_auth_random));
        break;
      }
      case MHD_OPTION_NONCE_NC_SIZE:
      {
        daemon->nonce_nc_size=va_arg(ap, __typeof__(daemon->nonce_nc_size));
        break;
      }
      case MHD_OPTION_LISTEN_SOCKET:
      {
        daemon->socket_fd=va_arg(ap, __typeof__(daemon->socket_fd));
        break;
      }
      case MHD_OPTION_EXTERNAL_LOGGER:
      {
        daemon->custom_error_log=va_arg(ap, __typeof__(daemon->custom_error_log));
        daemon->custom_error_log_cls=va_arg(ap, __typeof__(daemon->custom_error_log_cls));
        break;
      }
      case MHD_OPTION_THREAD_STACK_SIZE:
      {
        daemon->thread_stack_size=va_arg(ap, __typeof__(daemon->thread_stack_size));
        break;
      }
      case MHD_OPTION_TCP_FASTOPEN_QUEUE_SIZE:
      {
        daemon->fastopen_queue_size=va_arg(ap, __typeof__(daemon->fastopen_queue_size));
        break;
      }
      case MHD_OPTION_LISTENING_ADDRESS_REUSE:
      {
        return_value_gcc_builtin_va_arg_7=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg_7));
        daemon->listening_address_reuse = return_value_gcc_builtin_va_arg_7 != 0u ? 1 : -1;
        break;
      }
      case MHD_OPTION_ARRAY:
      {
        oa=va_arg(ap, __typeof__(oa));
        i = (unsigned int)0;
        do
        {
          opt = (oa + (signed long int)i)->option;
          if((signed int)opt == MHD_OPTION_END)
            break;

          switch((signed int)opt)
          {
            case MHD_OPTION_CONNECTION_MEMORY_LIMIT:

            case MHD_OPTION_CONNECTION_MEMORY_INCREMENT:

            case MHD_OPTION_THREAD_STACK_SIZE:
            {
              return_value_parse_options_8=parse_options(daemon, servaddr, opt, (unsigned long int)(oa + (signed long int)i)->value, MHD_OPTION_END);
              if(!(return_value_parse_options_8 == 1))
                return 0;

              break;
            }
            case MHD_OPTION_NONCE_NC_SIZE:

            case MHD_OPTION_CONNECTION_LIMIT:

            case MHD_OPTION_CONNECTION_TIMEOUT:

            case MHD_OPTION_PER_IP_CONNECTION_LIMIT:

            case MHD_OPTION_THREAD_POOL_SIZE:

            case MHD_OPTION_TCP_FASTOPEN_QUEUE_SIZE:

            case MHD_OPTION_LISTENING_ADDRESS_REUSE:
            {
              return_value_parse_options_9=parse_options(daemon, servaddr, opt, (unsigned int)(oa + (signed long int)i)->value, MHD_OPTION_END);
              if(!(return_value_parse_options_9 == 1))
                return 0;

              break;
            }
            case MHD_OPTION_HTTPS_CRED_TYPE:
            {
              return_value_parse_options_10=parse_options(daemon, servaddr, opt, (signed int)(oa + (signed long int)i)->value, MHD_OPTION_END);
              if(!(return_value_parse_options_10 == 1))
                return 0;

              break;
            }
            case MHD_OPTION_LISTEN_SOCKET:
            {
              return_value_parse_options_11=parse_options(daemon, servaddr, opt, (signed int)(oa + (signed long int)i)->value, MHD_OPTION_END);
              if(!(return_value_parse_options_11 == 1))
                return 0;

              break;
            }
            case MHD_OPTION_SOCK_ADDR:

            case MHD_OPTION_HTTPS_MEM_KEY:

            case MHD_OPTION_HTTPS_KEY_PASSWORD:

            case MHD_OPTION_HTTPS_MEM_CERT:

            case MHD_OPTION_HTTPS_MEM_TRUST:

            case MHD_OPTION_HTTPS_MEM_DHPARAMS:

            case MHD_OPTION_HTTPS_PRIORITIES:

            case MHD_OPTION_ARRAY:

            case MHD_OPTION_HTTPS_CERT_CALLBACK:
            {
              return_value_parse_options_12=parse_options(daemon, servaddr, opt, (oa + (signed long int)i)->ptr_value, MHD_OPTION_END);
              if(!(return_value_parse_options_12 == 1))
                return 0;

              break;
            }
            case MHD_OPTION_NOTIFY_COMPLETED:

            case MHD_OPTION_NOTIFY_CONNECTION:

            case MHD_OPTION_URI_LOG_CALLBACK:

            case MHD_OPTION_EXTERNAL_LOGGER:

            case MHD_OPTION_UNESCAPE_CALLBACK:
            {
              return_value_parse_options_13=parse_options(daemon, servaddr, opt, (void *)(oa + (signed long int)i)->value, (oa + (signed long int)i)->ptr_value, MHD_OPTION_END);
              if(!(return_value_parse_options_13 == 1))
                return 0;

              break;
            }
            case MHD_OPTION_DIGEST_AUTH_RANDOM:
            {
              return_value_parse_options_14=parse_options(daemon, servaddr, opt, (unsigned long int)(oa + (signed long int)i)->value, (oa + (signed long int)i)->ptr_value, MHD_OPTION_END);
              if(!(return_value_parse_options_14 == 1))
                return 0;

              break;
            }
            default:
              return 0;
          }
          i = i + 1u;
        }
        while((_Bool)1);
        break;
      }
      case MHD_OPTION_UNESCAPE_CALLBACK:
      {
        daemon->unescape_callback=va_arg(ap, __typeof__(daemon->unescape_callback));
        daemon->unescape_callback_cls=va_arg(ap, __typeof__(daemon->unescape_callback_cls));
        break;
      }
      default:
      {
        if((signed int)opt == MHD_OPTION_HTTPS_MEM_TRUST || (signed int)opt >= MHD_OPTION_HTTPS_MEM_KEY && !((signed int)opt >= 12))
          MHD_DLOG(daemon, "MHD HTTPS option %d passed to MHD compiled without HTTPS support\n", opt);

        else
          MHD_DLOG(daemon, "Invalid option %d! (Did you terminate the list with MHD_OPTION_END?)\n", opt);
        return 0;
      }
    }
  }
  while((_Bool)1);
  return 1;
}

// post_process_multipart
// file postprocessor.c line 828
static signed int post_process_multipart(struct MHD_PostProcessor *pp, const char *post_data, unsigned long int post_data_len)
{
  char *buf;
  unsigned long int max;
  unsigned long int ioff;
  unsigned long int poff;
  signed int state_changed;
  buf = (char *)&pp[(signed long int)1];
  ioff = (unsigned long int)0;
  poff = (unsigned long int)0;
  state_changed = 1;
  _Bool tmp_if_expr_1;
  signed int return_value_find_boundary_2;
  signed int return_value_process_multipart_headers_3;
  unsigned long int return_value_strlen_5;
  signed int return_value_strncasecmp_6;
  signed int return_value_process_value_to_boundary_7;
  signed int return_value_find_boundary_8;
  signed int return_value_process_multipart_headers_9;
  signed int return_value_process_value_to_boundary_10;
  while((_Bool)1)
  {
    if(poff >= post_data_len)
    {
      if(pp->buffer_pos >= 1ul)
      {
        if(state_changed == 0)
          goto __CPROVER_DUMP_L2;

      }

      else
      {

      __CPROVER_DUMP_L2:
        ;
        goto END;
      }
    }

    max = pp->buffer_size - pp->buffer_pos;
    if(!(post_data_len + -poff >= max))
      max = post_data_len - poff;

    memcpy((void *)&buf[(signed long int)pp->buffer_pos], (const void *)&post_data[(signed long int)poff], max);
    poff = poff + max;
    pp->buffer_pos = pp->buffer_pos + max;
    if(state_changed == 0 && max == 0ul && !(poff >= post_data_len))
    {
      pp->state = (enum PP_State)PP_Error;
      return 0;
    }

    state_changed = 0;
    switch((signed int)pp->skip_rn)
    {
      case RN_Inactive:
        goto __CPROVER_DUMP_L19;
      case RN_OptN:
        if((signed int)*buf == 10)
        {
          ioff = ioff + 1ul;
          pp->skip_rn = (enum RN_State)RN_Inactive;
          break;
        }

      case RN_Dash:
      {
        if((signed int)*buf == 45)
        {
          ioff = ioff + 1ul;
          pp->skip_rn = (enum RN_State)RN_Dash2;
          break;
        }

        pp->skip_rn = (enum RN_State)RN_Full;
      }
      case RN_Full:
      {
        if((signed int)*buf == 13)
        {
          if(pp->buffer_pos >= 2ul)
            tmp_if_expr_1 = (signed int)buf[(signed long int)1] == 10 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_1 = (_Bool)0;
          if(tmp_if_expr_1)
          {
            pp->skip_rn = (enum RN_State)RN_Inactive;
            ioff = ioff + (unsigned long int)2;
          }

          else
          {
            pp->skip_rn = (enum RN_State)RN_OptN;
            ioff = ioff + 1ul;
          }
          break;
        }

        if((signed int)*buf == 10)
        {
          ioff = ioff + 1ul;
          pp->skip_rn = (enum RN_State)RN_Inactive;
          break;
        }

        pp->skip_rn = (enum RN_State)RN_Inactive;
        pp->state = (enum PP_State)PP_Error;
        return 0;
      }
      case RN_Dash2:
      {
        if((signed int)*buf == 45)
        {
          ioff = ioff + 1ul;
          pp->skip_rn = (enum RN_State)RN_Full;
          pp->state = pp->dash_state;
          break;
        }

        pp->state = (enum PP_State)PP_Error;
      }
      default:
      {

      __CPROVER_DUMP_L19:
        ;
        switch((signed int)pp->state)
        {
          case PP_Error:
            return 0;
          case PP_Done:
          {
            pp->state = (enum PP_State)PP_Error;
            return 0;
          }
          case PP_Init:
          {
            find_boundary(pp, pp->boundary, pp->blen, &ioff, (enum PP_State)PP_ProcessEntryHeaders, (enum PP_State)PP_Done);
            break;
          }
          case PP_NextBoundary:
          {
            return_value_find_boundary_2=find_boundary(pp, pp->boundary, pp->blen, &ioff, (enum PP_State)PP_ProcessEntryHeaders, (enum PP_State)PP_Done);
            if(return_value_find_boundary_2 == 0)
            {
              if((signed int)pp->state == PP_Error)
                return 0;

              goto END;
            }

            break;
          }
          case PP_ProcessEntryHeaders:
          {
            pp->must_ikvi = 1;
            return_value_process_multipart_headers_3=process_multipart_headers(pp, &ioff, (enum PP_State)PP_PerformCheckMultipart);
            if(return_value_process_multipart_headers_3 == 0)
            {
              if((signed int)pp->state == PP_Error)
                return 0;

              else
                goto END;
            }

            state_changed = 1;
            break;
          }
          case PP_PerformCheckMultipart:
          {
            if(!(pp->content_type == ((char *)NULL)))
            {
              return_value_strlen_5=strlen("multipart/mixed");
              return_value_strncasecmp_6=strncasecmp(pp->content_type, "multipart/mixed", return_value_strlen_5);
              if(return_value_strncasecmp_6 == 0)
              {
                pp->nested_boundary=strstr(pp->content_type, "boundary=");
                if(pp->nested_boundary == ((char *)NULL))
                {
                  pp->state = (enum PP_State)PP_Error;
                  return 0;
                }

                unsigned long int return_value_strlen_4;
                return_value_strlen_4=strlen("boundary=");
                pp->nested_boundary=strdup(&pp->nested_boundary[(signed long int)return_value_strlen_4]);
                if(pp->nested_boundary == ((char *)NULL))
                {
                  pp->state = (enum PP_State)PP_Error;
                  return 0;
                }

                free((void *)pp->content_type);
                pp->content_type = (char *)(void *)0;
                pp->nlen=strlen(pp->nested_boundary);
                pp->state = (enum PP_State)PP_Nested_Init;
                state_changed = 1;
                break;
              }

            }

            pp->state = (enum PP_State)PP_ProcessValueToBoundary;
            pp->value_offset = (unsigned long int)0;
            state_changed = 1;
            break;
          }
          case PP_ProcessValueToBoundary:
          {
            return_value_process_value_to_boundary_7=process_value_to_boundary(pp, &ioff, pp->boundary, pp->blen, (enum PP_State)PP_PerformCleanup, (enum PP_State)PP_Done);
            if(return_value_process_value_to_boundary_7 == 0)
            {
              if((signed int)pp->state == PP_Error)
                return 0;

              break;
            }

            break;
          }
          case PP_PerformCleanup:
          {
            pp->have = (enum NE_State)NE_none;
            free_unmarked(pp);
            if(!(pp->nested_boundary == ((char *)NULL)))
            {
              free((void *)pp->nested_boundary);
              pp->nested_boundary = (char *)(void *)0;
            }

            pp->state = (enum PP_State)PP_ProcessEntryHeaders;
            state_changed = 1;
            break;
          }
          case PP_Nested_Init:
          {
            if(pp->nested_boundary == ((char *)NULL))
            {
              pp->state = (enum PP_State)PP_Error;
              return 0;
            }

            return_value_find_boundary_8=find_boundary(pp, pp->nested_boundary, pp->nlen, &ioff, (enum PP_State)PP_Nested_PerformMarking, (enum PP_State)PP_NextBoundary);
            if(return_value_find_boundary_8 == 0)
            {
              if((signed int)pp->state == PP_Error)
                return 0;

              goto END;
            }

            break;
          }
          case PP_Nested_PerformMarking:
          {
            pp->have = (enum NE_State)NE_none;
            if(!(pp->content_name == ((char *)NULL)))
              pp->have = pp->have | (enum NE_State)NE_content_name;

            if(!(pp->content_type == ((char *)NULL)))
              pp->have = pp->have | (enum NE_State)NE_content_type;

            if(!(pp->content_filename == ((char *)NULL)))
              pp->have = pp->have | (enum NE_State)NE_content_filename;

            if(!(pp->content_transfer_encoding == ((char *)NULL)))
              pp->have = pp->have | (enum NE_State)NE_content_transfer_encoding;

            pp->state = (enum PP_State)PP_Nested_ProcessEntryHeaders;
            state_changed = 1;
            break;
          }
          case PP_Nested_ProcessEntryHeaders:
          {
            pp->value_offset = (unsigned long int)0;
            return_value_process_multipart_headers_9=process_multipart_headers(pp, &ioff, (enum PP_State)PP_Nested_ProcessValueToBoundary);
            if(return_value_process_multipart_headers_9 == 0)
            {
              if((signed int)pp->state == PP_Error)
                return 0;

              else
                goto END;
            }

            state_changed = 1;
            break;
          }
          case PP_Nested_ProcessValueToBoundary:
          {
            return_value_process_value_to_boundary_10=process_value_to_boundary(pp, &ioff, pp->nested_boundary, pp->nlen, (enum PP_State)PP_Nested_PerformCleanup, (enum PP_State)PP_NextBoundary);
            if(return_value_process_value_to_boundary_10 == 0)
            {
              if((signed int)pp->state == PP_Error)
                return 0;

              break;
            }

            break;
          }
          case PP_Nested_PerformCleanup:
          {
            free_unmarked(pp);
            pp->state = (enum PP_State)PP_Nested_ProcessEntryHeaders;
            state_changed = 1;
            break;
          }
          default:
            mhd_panic(mhd_panic_cls, "postprocessor.c", (unsigned int)1092, (const char *)(void *)0);
        }
      }
    }

  AGAIN:
    ;
    if(ioff >= 1ul)
    {
      memmove((void *)buf, (const void *)&buf[(signed long int)ioff], pp->buffer_pos - ioff);
      pp->buffer_pos = pp->buffer_pos - ioff;
      ioff = (unsigned long int)0;
      state_changed = 1;
    }

  }

END:
  ;
  if(!(ioff == 0ul))
  {
    memmove((void *)buf, (const void *)&buf[(signed long int)ioff], pp->buffer_pos - ioff);
    pp->buffer_pos = pp->buffer_pos - ioff;
  }

  if(!(poff >= post_data_len))
  {
    pp->state = (enum PP_State)PP_Error;
    return 0;
  }

  else
    return 1;
}

// post_process_urlencoded
// file postprocessor.c line 342
static signed int post_process_urlencoded(struct MHD_PostProcessor *pp, const char *post_data, unsigned long int post_data_len)
{
  unsigned long int equals;
  unsigned long int amper;
  unsigned long int poff;
  unsigned long int xoff;
  unsigned long int delta;
  signed int end_of_value_found;
  char *buf;
  char xbuf[513l];
  buf = (char *)&pp[(signed long int)1];
  poff = (unsigned long int)0;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  signed int return_value;
  _Bool tmp_if_expr_6;
  while(!(poff >= post_data_len))
    switch((signed int)pp->state)
    {
      case PP_Error:
        return 0;
      case PP_Done:
      {
        pp->state = (enum PP_State)PP_Error;
        return 0;
      }
      case PP_Init:
      {
        equals = (unsigned long int)0;
        for( ; !(equals + poff >= post_data_len); equals = equals + 1ul)
          if((signed int)post_data[(signed long int)equals + (signed long int)poff] == 61)
            break;

        if(!(pp->buffer_size >= pp->buffer_pos + equals))
        {
          pp->state = (enum PP_State)PP_Error;
          return 0;
        }

        memcpy((void *)&buf[(signed long int)pp->buffer_pos], (const void *)&post_data[(signed long int)poff], equals);
        pp->buffer_pos = pp->buffer_pos + equals;
        if(equals + poff == post_data_len)
          return 1;

        buf[(signed long int)pp->buffer_pos] = (char)0;
        pp->buffer_pos = (unsigned long int)0;
        MHD_unescape_plus(buf);
        MHD_http_unescape(buf);
        poff = poff + equals + (unsigned long int)1;
        pp->state = (enum PP_State)PP_ProcessValue;
        pp->value_offset = (unsigned long int)0;
        break;
      }
      case PP_ProcessValue:
      {
        memcpy((void *)xbuf, (const void *)pp->xbuf, pp->xbuf_pos);
        xoff = pp->xbuf_pos;
        pp->xbuf_pos = (unsigned long int)0;
        amper = (unsigned long int)0;
        for( ; !(amper + poff >= post_data_len); amper = amper + 1ul)
        {
          if(amper >= 512ul)
            break;

          if((signed int)post_data[(signed long int)amper + (signed long int)poff] == 38)
            break;

          if((signed int)post_data[(signed long int)amper + (signed long int)poff] == 10)
            break;

          if((signed int)post_data[(signed long int)amper + (signed long int)poff] == 13)
            break;

        }
        if(!(amper + poff >= post_data_len))
        {
          if((signed int)post_data[(signed long int)amper + (signed long int)poff] == 38)
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = (signed int)post_data[(signed long int)(amper + poff)] == 10 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_1)
            tmp_if_expr_2 = (_Bool)1;

          else
            tmp_if_expr_2 = (signed int)post_data[(signed long int)(amper + poff)] == 13 ? (_Bool)1 : (_Bool)0;
          tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_3 = (_Bool)0;
        end_of_value_found = (signed int)tmp_if_expr_3;
        delta = amper;
        if(!(512ul + -xoff >= delta))
          delta = (unsigned long int)512 - xoff;

        memcpy((void *)&xbuf[(signed long int)xoff], (const void *)&post_data[(signed long int)poff], delta);
        xoff = xoff + delta;
        poff = poff + delta;
        delta = xoff;
        if(delta >= 1ul)
          tmp_if_expr_4 = (signed int)xbuf[(signed long int)(delta - (unsigned long int)1)] == 37 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          delta = delta - 1ul;

        else
          if(delta >= 2ul)
          {
            if((signed int)xbuf[-2l + (signed long int)delta] == 37)
              delta = delta - (unsigned long int)2;

          }

        if(!(delta >= xoff))
        {
          memcpy((void *)pp->xbuf, (const void *)&xbuf[(signed long int)delta], xoff - delta);
          pp->xbuf_pos = xoff - delta;
          xoff = delta;
        }

        if(poff == post_data_len && xoff == 0ul)
          break;

        xbuf[(signed long int)xoff] = (char)0;
        MHD_unescape_plus(xbuf);
        xoff=MHD_http_unescape(xbuf);
        pp->must_ikvi = 0;
        return_value=pp->ikvi(pp->cls, (enum MHD_ValueKind)MHD_POSTDATA_KIND, (const char *)&pp[(signed long int)1], (const char *)(void *)0, (const char *)(void *)0, (const char *)(void *)0, xbuf, pp->value_offset, xoff);
      }
      case PP_ExpectNewLine:
      {
        if((signed int)post_data[(signed long int)poff] == 10)
          tmp_if_expr_6 = (_Bool)1;

        else
          tmp_if_expr_6 = (signed int)post_data[(signed long int)poff] == 13 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_6)
        {
          poff = poff + 1ul;
          pp->state = (enum PP_State)PP_Done;
          return 1;
        }

        return 0;
      }
      default:
        mhd_panic(mhd_panic_cls, "postprocessor.c", (unsigned int)482, (const char *)(void *)0);
    }
  return 1;
}

// process_broken_line
// file connection.c line 1816
static signed int process_broken_line(struct MHD_Connection *connection, char *line, enum MHD_ValueKind kind)
{
  char *last;
  char *tmp;
  unsigned long int last_len;
  unsigned long int tmp_len;
  last = connection->last;
  _Bool tmp_if_expr_2;
  if((signed int)*line == 32)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)line[(signed long int)0] == 9 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    last_len=strlen(last);
    tmp = line;
    for( ; (_Bool)1; tmp = tmp + 1l)
      if(!((signed int)*tmp == 32))
      {
        if(!((signed int)*tmp == 9))
          goto __CPROVER_DUMP_L5;

      }


  __CPROVER_DUMP_L5:
    ;
    tmp_len=strlen(tmp);
    void *return_value_MHD_pool_reallocate_1;
    return_value_MHD_pool_reallocate_1=MHD_pool_reallocate(connection->pool, (void *)last, last_len + (unsigned long int)1, last_len + tmp_len + (unsigned long int)1);
    last = (char *)return_value_MHD_pool_reallocate_1;
    if(last == ((char *)NULL))
    {
      transmit_error_response(connection, (unsigned int)413, "<html><head><title>Request too big</title></head><body>Your HTTP header was too big for the memory constraints of this webserver.</body></html>");
      return 0;
    }

    memcpy((void *)&last[(signed long int)last_len], (const void *)tmp, tmp_len + (unsigned long int)1);
    connection->last = last;
    return 1;
  }

  signed int return_value_connection_add_header_3;
  return_value_connection_add_header_3=connection_add_header(connection, last, connection->colon, kind);
  if(return_value_connection_add_header_3 == 0)
  {
    transmit_error_response(connection, (unsigned int)413, "<html><head><title>Request too big</title></head><body>Your HTTP header was too big for the memory constraints of this webserver.</body></html>");
    return 0;
  }

  else
  {
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(line);
    if(!(return_value_strlen_5 == 0ul))
    {
      signed int return_value_process_header_line_4;
      return_value_process_header_line_4=process_header_line(connection, line);
      if(return_value_process_header_line_4 == 0)
      {
        transmit_error_response(connection, (unsigned int)400, "<html><head><title>Request malformed</title></head><body>Your HTTP request was syntactically incorrect.</body></html>");
        return 0;
      }

    }

    return 1;
  }
}

// process_header_line
// file connection.c line 1776
static signed int process_header_line(struct MHD_Connection *connection, char *line)
{
  char *colon;
  colon=strchr(line, 58);
  if(colon == ((char *)NULL))
  {
    connection_close_error(connection, "Received malformed line (no colon), closing connection.\n");
    return 0;
  }

  else
  {
    colon[(signed long int)0] = (char)0;
    colon = colon + 1l;
    for( ; !((signed int)*colon == 0); colon = colon + 1l)
      if(!((signed int)*colon == 32))
      {
        if(!((signed int)*colon == 9))
          break;

      }

    connection->last = line;
    connection->colon = colon;
    return 1;
  }
}

// process_multipart_headers
// file postprocessor.c line 637
static signed int process_multipart_headers(struct MHD_PostProcessor *pp, unsigned long int *ioffptr, enum PP_State next_state)
{
  char *buf = (char *)&pp[(signed long int)1];
  unsigned long int newline = (unsigned long int)0;
  for( ; !(newline >= pp->buffer_pos); newline = newline + 1ul)
  {
    if((signed int)buf[(signed long int)newline] == 13)
      break;

    if((signed int)buf[(signed long int)newline] == 10)
      break;

  }
  if(newline == pp->buffer_size)
  {
    pp->state = (enum PP_State)PP_Error;
    return 0;
  }

  else
    if(newline == pp->buffer_pos)
      return 0;

    else
      if(newline == 0ul)
      {
        pp->skip_rn = (enum RN_State)RN_Full;
        pp->state = next_state;
        return 1;
      }

      else
      {
        if((signed int)buf[(signed long int)newline] == 13)
          pp->skip_rn = (enum RN_State)RN_OptN;

        buf[(signed long int)newline] = (char)0;
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen("Content-disposition: ");
        signed int return_value_strncasecmp_4;
        return_value_strncasecmp_4=strncasecmp("Content-disposition: ", buf, return_value_strlen_3);
        if(return_value_strncasecmp_4 == 0)
        {
          unsigned long int return_value_strlen_1;
          return_value_strlen_1=strlen("Content-disposition: ");
          try_get_value(&buf[(signed long int)return_value_strlen_1], "name", &pp->content_name);
          unsigned long int return_value_strlen_2;
          return_value_strlen_2=strlen("Content-disposition: ");
          try_get_value(&buf[(signed long int)return_value_strlen_2], "filename", &pp->content_filename);
        }

        else
        {
          try_match_header("Content-type: ", buf, &pp->content_type);
          try_match_header("Content-Transfer-Encoding: ", buf, &pp->content_transfer_encoding);
        }
        *ioffptr = *ioffptr + newline + (unsigned long int)1;
        return 1;
      }
}

// process_request_body
// file connection.c line 1478
static void process_request_body(struct MHD_Connection *connection)
{
  unsigned long int processed;
  unsigned long int available;
  unsigned long int used;
  unsigned long int i;
  signed int instant_retry;
  signed int malformed;
  char *buffer_head;
  char *end;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  if(connection->response == ((struct MHD_Response *)NULL))
  {
    buffer_head = connection->read_buffer;
    available = connection->read_buffer_offset;
    do
    {
      instant_retry = 0;
      if(connection->have_chunked_upload == 1)
        tmp_if_expr_8 = 18446744073709551615UL == connection->remaining_upload_size ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
      {
        if(connection->current_chunk_offset == connection->current_chunk_size)
        {
          if(!(connection->current_chunk_offset == 0ul))
          {
            if(available >= 2ul)
            {
              i = (unsigned long int)0;
              if((signed int)buffer_head[(signed long int)i] == 13)
                tmp_if_expr_1 = (_Bool)1;

              else
                tmp_if_expr_1 = (signed int)buffer_head[(signed long int)i] == 10 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_1)
                i = i + 1ul;

              if((signed int)buffer_head[(signed long int)i] == 13)
                tmp_if_expr_2 = (_Bool)1;

              else
                tmp_if_expr_2 = (signed int)buffer_head[(signed long int)i] == 10 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_2)
                i = i + 1ul;

              if(i == 0ul)
              {
                connection_close_error(connection, "Received malformed HTTP request (bad chunked encoding), closing connection.\n");
                goto __CPROVER_DUMP_L46;
              }

              available = available - i;
              buffer_head = buffer_head + (signed long int)i;
              connection->current_chunk_offset = (unsigned long int)0;
              connection->current_chunk_size = (unsigned long int)0;
            }

          }

        }

        if(!(connection->current_chunk_offset >= connection->current_chunk_size))
        {
          processed = connection->current_chunk_size - connection->current_chunk_offset;
          if(!(available >= processed))
            processed = available;

          if(!(processed >= available))
            instant_retry = 1;

        }

        else
        {
          i = (unsigned long int)0;
          while(!(i >= available))
          {
            if((signed int)buffer_head[(signed long int)i] == 13)
              tmp_if_expr_3 = (_Bool)1;

            else
              tmp_if_expr_3 = (signed int)buffer_head[(signed long int)i] == 10 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_3)
              break;

            i = i + 1ul;
            if(i >= 6ul)
              break;

          }
          if(1ul + i >= available)
          {
            if(available == 2ul && i == 1ul)
              tmp_if_expr_4 = (signed int)buffer_head[(signed long int)0] == 48 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_4 = (_Bool)0;
            if(!tmp_if_expr_4)
              break;

          }

          malformed = (signed int)(i >= (unsigned long int)6);
          if(malformed == 0)
          {
            buffer_head[(signed long int)i] = (char)0;
            connection->current_chunk_size=strtoul(buffer_head, &end, 16);
            malformed = (signed int)(0 != (signed int)*end);
          }

          if(!(malformed == 0))
          {
            connection_close_error(connection, "Received malformed HTTP request (bad chunked encoding), closing connection.\n");
            goto __CPROVER_DUMP_L46;
          }

          i = i + 1ul;
          if(!(i >= available))
          {
            if((signed int)buffer_head[(signed long int)i] == 13)
              tmp_if_expr_5 = (_Bool)1;

            else
              tmp_if_expr_5 = (signed int)buffer_head[(signed long int)i] == 10 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_5)
              i = i + 1ul;

          }

          buffer_head = buffer_head + (signed long int)i;
          available = available - i;
          connection->current_chunk_offset = (unsigned long int)0;
          if(available >= 1ul)
            instant_retry = 1;

          if(connection->current_chunk_size == 0ul)
          {
            connection->remaining_upload_size = (unsigned long int)0;
            break;
          }

          continue;
        }
      }

      else
      {
        if(!(connection->remaining_upload_size == 0ul))
          tmp_if_expr_6 = 18446744073709551615UL != connection->remaining_upload_size ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
          tmp_if_expr_7 = connection->remaining_upload_size < available ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_7 = (_Bool)0;
        if(tmp_if_expr_7)
          processed = (unsigned long int)connection->remaining_upload_size;

        else
          processed = available;
      }
      used = processed;
      connection->client_aware = 1;
      signed int return_value;
      return_value=connection->daemon->default_handler(connection->daemon->default_handler_cls, connection, connection->url, connection->method, connection->version, buffer_head, &processed, &connection->client_context);
      if(return_value == 0)
        connection_close_error(connection, "Internal application error, closing connection.\n");

      if(!(used >= processed))
        mhd_panic(mhd_panic_cls, "connection.c", (unsigned int)1624, "API violation");

      if(!(processed == 0ul))
        instant_retry = 0;

      used = used - processed;
      if(connection->have_chunked_upload == 1)
        connection->current_chunk_offset = connection->current_chunk_offset + used;

      buffer_head = buffer_head + (signed long int)used;
      available = available - used;
      if(!(connection->remaining_upload_size == 18446744073709551615UL))
        connection->remaining_upload_size = connection->remaining_upload_size - used;

    }
    while(instant_retry == 1);
    if(available >= 1ul)
      memmove((void *)connection->read_buffer, (const void *)buffer_head, available);

    connection->read_buffer_offset = available;
  }


__CPROVER_DUMP_L46:
  ;
}

// process_value_to_boundary
// file postprocessor.c line 701
static signed int process_value_to_boundary(struct MHD_PostProcessor *pp, unsigned long int *ioffptr, const char *boundary, unsigned long int blen, enum PP_State next_state, enum PP_State next_dash_state)
{
  char *buf = (char *)&pp[(signed long int)1];
  unsigned long int newline;
  const char *r;
  newline = (unsigned long int)0;
  while((_Bool)1)
  {
    while(!(4ul + newline >= pp->buffer_pos))
    {
      void *return_value_memchr_1;
      return_value_memchr_1=memchr((const void *)&buf[(signed long int)newline], 13, (pp->buffer_pos - newline) - (unsigned long int)4);
      r = (const char *)return_value_memchr_1;
      if(r == ((const char *)NULL))
      {
        newline = pp->buffer_pos - (unsigned long int)4;
        break;
      }

      newline = (unsigned long int)(r - buf);
      signed int return_value_memcmp_2;
      return_value_memcmp_2=memcmp((const void *)"\r\n--", (const void *)&buf[(signed long int)newline], (unsigned long int)4);
      if(return_value_memcmp_2 == 0)
        break;

      newline = newline + 1ul;
    }
    if(pp->buffer_pos >= 4ul + pp->blen + newline)
    {
      signed int return_value_memcmp_3;
      return_value_memcmp_3=memcmp((const void *)&buf[(signed long int)(newline + (unsigned long int)4)], (const void *)boundary, pp->blen);
      if(!(return_value_memcmp_3 == 0))
      {
        newline = newline + (unsigned long int)4;
        continue;
      }

      else
      {
        pp->skip_rn = (enum RN_State)RN_Dash;
        pp->state = next_state;
        pp->dash_state = next_dash_state;
        *ioffptr = *ioffptr + pp->blen + (unsigned long int)4;
        buf[(signed long int)newline] = (char)0;
        break;
      }
    }

    else
    {
      if(newline == 0ul)
      {
        if(pp->buffer_pos == pp->buffer_size)
        {
          pp->state = (enum PP_State)PP_Error;
          return 0;
        }

      }

      break;
    }
  }
  signed int return_value;
  if(pp->must_ikvi == 1 || !(newline == 0ul))
  {
    return_value=pp->ikvi(pp->cls, (enum MHD_ValueKind)MHD_POSTDATA_KIND, pp->content_name, pp->content_filename, pp->content_type, pp->content_transfer_encoding, buf, pp->value_offset, newline);
    pp->state = (enum PP_State)PP_Error;
    return 0;
  }

  else
  {
    pp->must_ikvi = 0;
    pp->value_offset = pp->value_offset + newline;
    *ioffptr = *ioffptr + newline;
    return 1;
  }
}

// recv_param_adapter
// file daemon.c line 1042
static signed long int recv_param_adapter(struct MHD_Connection *connection, void *other, unsigned long int i)
{
  signed long int ret;
  const unsigned long int requested_size = i;
  _Bool tmp_if_expr_2;
  if(connection->socket_fd == -1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = MHD_CONNECTION_CLOSED == (signed int)connection->state ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 107;
    return (signed long int)-1;
  }

  if(i >= 9223372036854775808ul)
    i = (unsigned long int)0x7fffffffffffffffL;

  signed long int return_value_recv_3;
  return_value_recv_3=recv(connection->socket_fd, other, (unsigned long int)i, 16384);
  ret = (signed long int)return_value_recv_3;
  if(!(ret >= 0l) || !((unsigned long int)ret >= requested_size))
    connection->epoll_state = connection->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_READ_READY;

  return ret;
}

// recv_tls_adapter
// file daemon.c line 428
static signed long int recv_tls_adapter(struct MHD_Connection *connection, void *other, unsigned long int i)
{
  signed long int res;
  if(connection->tls_read_ready == 1)
  {
    connection->daemon->num_tls_read_ready = connection->daemon->num_tls_read_ready - 1u;
    connection->tls_read_ready = 0;
  }

  res=gnutls_record_recv(connection->tls_session, other, i);
  if(res == -52l || res == -28l)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 4;
    connection->epoll_state = connection->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_READ_READY;
    return (signed long int)-1;
  }

  if(!(res >= 0l))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 104;
    return res;
  }

  if((unsigned long int)res == i)
  {
    connection->tls_read_ready = 1;
    connection->daemon->num_tls_read_ready = connection->daemon->num_tls_read_ready + 1u;
  }

  return res;
}

// resume_suspended_connections
// file daemon.c line 1774
static signed int resume_suspended_connections(struct MHD_Daemon *daemon)
{
  struct MHD_Connection *pos;
  struct MHD_Connection *next = (struct MHD_Connection *)(void *)0;
  signed int ret = 0;
  signed int return_value_pthread_mutex_lock_1;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_lock_1 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1783, "Failed to acquire cleanup mutex\n");

  }

  if(daemon->resuming == 1)
    next = daemon->suspended_connections_head;

  do
  {
    pos = next;
    if(pos == ((struct MHD_Connection *)NULL))
      break;

    next = pos->next;
    if(!(pos->resuming == 0))
    {
      ret = 1;
      do
      {
        if(pos->prev == ((struct MHD_Connection *)NULL))
          daemon->suspended_connections_head = pos->next;

        else
          pos->prev->next = pos->next;
        if(pos->next == ((struct MHD_Connection *)NULL))
          daemon->suspended_connections_tail = pos->prev;

        else
          pos->next->prev = pos->prev;
        pos->next = (struct MHD_Connection *)(void *)0;
        pos->prev = (struct MHD_Connection *)(void *)0;
      }
      while((_Bool)0);
      do
      {
        pos->next = daemon->connections_head;
        pos->prev = (struct MHD_Connection *)(void *)0;
        if(daemon->connections_tail == ((struct MHD_Connection *)NULL))
          daemon->connections_tail = pos;

        else
          daemon->connections_head->prev = pos;
        daemon->connections_head = pos;
      }
      while((_Bool)0);
      if(pos->connection_timeout == daemon->connection_timeout)
        do
        {
          pos->nextX = daemon->normal_timeout_head;
          pos->prevX = (struct MHD_Connection *)(void *)0;
          if(daemon->normal_timeout_tail == ((struct MHD_Connection *)NULL))
            daemon->normal_timeout_tail = pos;

          else
            daemon->normal_timeout_head->prevX = pos;
          daemon->normal_timeout_head = pos;
        }
        while((_Bool)0);

      else
        do
        {
          pos->nextX = daemon->manual_timeout_head;
          pos->prevX = (struct MHD_Connection *)(void *)0;
          if(daemon->manual_timeout_tail == ((struct MHD_Connection *)NULL))
            daemon->manual_timeout_tail = pos;

          else
            daemon->manual_timeout_head->prevX = pos;
          daemon->manual_timeout_head = pos;
        }
        while((_Bool)0);
      if(!((MHD_USE_EPOLL_LINUX_ONLY & (signed int)daemon->options) == 0))
      {
        if(!((MHD_EPOLL_STATE_IN_EREADY_EDLL & (signed int)pos->epoll_state) == 0))
          mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1811, "Resumed connection was already in EREADY set\n");

        do
        {
          pos->nextE = daemon->eready_head;
          pos->prevE = (struct MHD_Connection *)(void *)0;
          if(daemon->eready_tail == ((struct MHD_Connection *)NULL))
            daemon->eready_tail = pos;

          else
            daemon->eready_head->prevE = pos;
          daemon->eready_head = pos;
        }
        while((_Bool)0);
        pos->epoll_state = pos->epoll_state | (enum MHD_EpollState)MHD_EPOLL_STATE_IN_EREADY_EDLL;
        pos->epoll_state = pos->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_SUSPENDED;
      }

      pos->suspended = 0;
      pos->resuming = 0;
    }

  }
  while((_Bool)1);
  daemon->resuming = 0;
  signed int return_value_pthread_mutex_unlock_2;
  if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
  {
    return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
    if(!(return_value_pthread_mutex_unlock_2 == 0))
      mhd_panic(mhd_panic_cls, "daemon.c", (unsigned int)1827, "Failed to release cleanup mutex\n");

  }

  return ret;
}

// run_tls_handshake
// file connection_https.c line 47
static signed int run_tls_handshake(struct MHD_Connection *connection)
{
  signed int ret;
  connection->last_activity=MHD_monotonic_sec_counter();
  if((signed int)connection->state == MHD_TLS_CONNECTION_INIT)
  {
    ret=gnutls_handshake(connection->tls_session);
    if(ret == 0)
    {
      connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_INIT;
      return 1;
    }

    if(ret == -52 || ret == -28)
      return 1;

    MHD_DLOG(connection->daemon, "Error: received handshake message out of context\n");
    MHD_connection_close(connection, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_WITH_ERROR);
    return 1;
  }

  else
    return 0;
}

// send_param_adapter
// file daemon.c line 1086
static signed long int send_param_adapter(struct MHD_Connection *connection, const void *other, unsigned long int i)
{
  signed long int ret;
  const unsigned long int requested_size = i;
  signed int fd;
  _Bool tmp_if_expr_2;
  if(connection->socket_fd == -1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = MHD_CONNECTION_CLOSED == (signed int)connection->state ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 107;
    return (signed long int)-1;
  }

  if(i >= 9223372036854775808ul)
    i = (unsigned long int)0x7fffffffffffffffL;

  signed long int return_value_send_3;
  signed int *return_value___errno_location_7;
  signed int *return_value___errno_location_6;
  if(!((MHD_USE_SSL & (signed int)connection->daemon->options) == 0))
  {
    return_value_send_3=send(connection->socket_fd, other, (unsigned long int)i, 16384);
    return (signed long int)return_value_send_3;
  }

  else
  {
    if(connection->write_buffer_append_offset == connection->write_buffer_send_offset)
    {
      if(!(connection->response == ((struct MHD_Response *)NULL)))
      {
        fd = connection->response->fd;
        if(!(fd == -1))
        {
          unsigned long int left;
          unsigned long int offsetu64;
          signed int err;
          signed long int offset;
          offsetu64 = connection->response_write_position + connection->response->fd_off;
          left = connection->response->total_size - connection->response_write_position;
          offset = (signed long int)offsetu64;
          if(!(offsetu64 >= 9223372036854775808ul))
          {
            ret=sendfile64(connection->socket_fd, fd, &offset, left);
            if(ret >= 1l)
            {
              if(!((unsigned long int)ret >= requested_size))
                connection->epoll_state = connection->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_WRITE_READY;

              return ret;
            }

          }

          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          err = *return_value___errno_location_4;
          if(err == 4 || err == 11)
            return (signed long int)0;

          if(err == 9 || err == 22)
            return (signed long int)-1;

        }

      }

    }

    signed long int return_value_send_5;
    return_value_send_5=send(connection->socket_fd, other, (unsigned long int)i, 16384);
    ret = (signed long int)return_value_send_5;
    if(!(ret >= 0l) || !((unsigned long int)ret >= requested_size))
      connection->epoll_state = connection->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_WRITE_READY;

    if(!(ret >= 0l))
    {
      return_value___errno_location_7=__errno_location();
      if(*return_value___errno_location_7 == 0)
      {
        return_value___errno_location_6=__errno_location();
        *return_value___errno_location_6 = 104;
      }

    }

    return ret;
  }
}

// send_tls_adapter
// file daemon.c line 473
static signed long int send_tls_adapter(struct MHD_Connection *connection, const void *other, unsigned long int i)
{
  signed int res;
  signed long int return_value_gnutls_record_send_1;
  return_value_gnutls_record_send_1=gnutls_record_send(connection->tls_session, other, i);
  res = (signed int)return_value_gnutls_record_send_1;
  if(res == -52 || res == -28)
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 4;
    connection->epoll_state = connection->epoll_state & (enum MHD_EpollState)~MHD_EPOLL_STATE_WRITE_READY;
    return (signed long int)-1;
  }

  if(!(res >= 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 104;
    return (signed long int)-1;
  }

  return (signed long int)res;
}

// setup_epoll_to_listen
// file daemon.c line 3519
static signed int setup_epoll_to_listen(struct MHD_Daemon *daemon)
{
  struct epoll_event event;
  daemon->epoll_fd=epoll_create1(524288);
  if(daemon->epoll_fd == -1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    MHD_DLOG(daemon, "Call to epoll_create1 failed: %s\n", return_value_strerror_2);
    return 0;
  }

  if(daemon->socket_fd == -1)
    return 1;

  else
  {
    event.events = (unsigned int)1;
    event.data.ptr = (void *)daemon;
    signed int return_value_epoll_ctl_5;
    return_value_epoll_ctl_5=epoll_ctl(daemon->epoll_fd, 1, daemon->socket_fd, &event);
    if(!(return_value_epoll_ctl_5 == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(*return_value___errno_location_3);
      MHD_DLOG(daemon, "Call to epoll_ctl failed: %s\n", return_value_strerror_4);
      return 0;
    }

    if(!(daemon->wpipe[0l] == -1))
    {
      if((MHD_USE_SUSPEND_RESUME & (signed int)daemon->options) == MHD_USE_SUSPEND_RESUME)
      {
        event.events = (unsigned int)(1 | -2147483648);
        event.data.ptr = (void *)0;
        event.data.fd = daemon->wpipe[(signed long int)0];
        signed int return_value_epoll_ctl_8;
        return_value_epoll_ctl_8=epoll_ctl(daemon->epoll_fd, 1, daemon->wpipe[(signed long int)0], &event);
        if(!(return_value_epoll_ctl_8 == 0))
        {
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          char *return_value_strerror_7;
          return_value_strerror_7=strerror(*return_value___errno_location_6);
          MHD_DLOG(daemon, "Call to epoll_ctl failed: %s\n", return_value_strerror_7);
          return 0;
        }

      }

    }

    daemon->listen_socket_in_epoll = 1;
    return 1;
  }
}

// test_header
// file digestauth.c line 450
static signed int test_header(struct MHD_Connection *connection, const char *key, const char *value)
{
  struct MHD_HTTP_Header *pos = connection->headers_received;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  for( ; !(pos == ((struct MHD_HTTP_Header *)NULL)); pos = pos->next)
    if((signed int)pos->kind == MHD_GET_ARGUMENT_KIND)
    {
      signed int return_value_strcmp_1;
      return_value_strcmp_1=strcmp(key, pos->header);
      if(return_value_strcmp_1 == 0)
      {
        if(value == ((const char *)NULL))
        {
          if(pos->value == ((char *)NULL))
            return 1;

        }

        if(value == ((const char *)NULL))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = (char *)(void *)0 == pos->value ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
          tmp_if_expr_4 = (_Bool)1;

        else
        {
          return_value_strcmp_3=strcmp(value, pos->value);
          tmp_if_expr_4 = 0 != return_value_strcmp_3 ? (_Bool)1 : (_Bool)0;
        }
        if(!tmp_if_expr_4)
          return 1;

      }

    }

  return 0;
}

// transmit_error_response
// file connection.c line 931
static void transmit_error_response(struct MHD_Connection *connection, unsigned int status_code, const char *message)
{
  struct MHD_Response *response;
  if(connection->version == ((char *)NULL))
    connection->version = "HTTP/1.0";

  connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_FOOTERS_RECEIVED;
  connection->read_closed = 1;
  MHD_DLOG(connection->daemon, "Error %u (`%s') processing request, closing connection.\n", status_code, message);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(message);
  response=MHD_create_response_from_buffer(return_value_strlen_1, (void *)message, (enum MHD_ResponseMemoryMode)MHD_RESPMEM_PERSISTENT);
  MHD_queue_response(connection, status_code, response);
  MHD_destroy_response(response);
  signed int return_value_build_header_response_2;
  return_value_build_header_response_2=build_header_response(connection);
  if(return_value_build_header_response_2 == 0)
    connection_close_error(connection, "Closing connection (failed to create response header)\n");

  else
    connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_HEADERS_SENDING;
}

// try_get_value
// file postprocessor.c line 584
static void try_get_value(const char *buf, const char *key, char **destination)
{
  const char *spos;
  const char *bpos;
  const char *endv;
  unsigned long int klen;
  unsigned long int vlen;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(*destination == ((char *)NULL))
  {
    bpos = buf;
    klen=strlen(key);
    do
    {
      spos=strstr(bpos, key);
      if(spos == ((const char *)NULL))
        break;

      if(!((signed int)spos[(signed long int)klen] == 61))
        tmp_if_expr_2 = (_Bool)1;

      else
      {
        if(!(spos == buf))
          tmp_if_expr_1 = (signed int)spos[(signed long int)-1] != 32 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_2)
        bpos = spos + (signed long int)1;

      else
      {
        if(!((signed int)spos[1l + (signed long int)klen] == 34))
          goto __CPROVER_DUMP_L13;

        endv=strchr(&spos[(signed long int)(klen + (unsigned long int)2)], 34);
        if(endv == ((const char *)NULL))
          goto __CPROVER_DUMP_L13;

        vlen = ((unsigned long int)(endv - spos) - klen) - (unsigned long int)1;
        void *return_value_malloc_3;
        return_value_malloc_3=malloc(vlen);
        *destination = (char *)return_value_malloc_3;
        if(*destination == ((char *)NULL))
          goto __CPROVER_DUMP_L13;

        (*destination)[(signed long int)(vlen - (unsigned long int)1)] = (char)0;
        memcpy((void *)*destination, (const void *)&spos[(signed long int)(klen + (unsigned long int)2)], vlen - (unsigned long int)1);
        goto __CPROVER_DUMP_L13;
      }
    }
    while((_Bool)1);
  }


__CPROVER_DUMP_L13:
  ;
}

// try_grow_read_buffer
// file connection.c line 610
static signed int try_grow_read_buffer(struct MHD_Connection *connection)
{
  void *buf;
  unsigned long int new_size;
  if(connection->read_buffer_size == 0ul)
    new_size = connection->daemon->pool_size / (unsigned long int)2;

  else
    new_size = connection->read_buffer_size + (unsigned long int)1024;
  buf=MHD_pool_reallocate(connection->pool, (void *)connection->read_buffer, connection->read_buffer_size, new_size);
  if(buf == NULL)
    return 0;

  else
  {
    connection->read_buffer = (char *)buf;
    connection->read_buffer_size = new_size;
    return 1;
  }
}

// try_match_header
// file postprocessor.c line 499
static signed int try_match_header(const char *prefix, char *line, char **suffix)
{
  if(!(*suffix == ((char *)NULL)))
    return 0;

  else
  {
    while(!((signed int)*line == 0))
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(prefix);
      signed int return_value_strncasecmp_3;
      return_value_strncasecmp_3=strncasecmp(prefix, line, return_value_strlen_2);
      if(return_value_strncasecmp_3 == 0)
      {
        unsigned long int return_value_strlen_1;
        return_value_strlen_1=strlen(prefix);
        *suffix=strdup(&line[(signed long int)return_value_strlen_1]);
        return 1;
      }

      line = line + 1l;
    }
    return 0;
  }
}

// try_ready_chunked_body
// file connection.c line 401
static signed int try_ready_chunked_body(struct MHD_Connection *connection)
{
  signed long int ret;
  char *buf;
  struct MHD_Response *response;
  unsigned long int size;
  char cbuf[10l];
  signed int cblen;
  response = connection->response;
  unsigned long int tmp_if_expr_1;
  if(connection->write_buffer_size == 0ul)
  {
    if(!(connection->daemon->pool_size >= 33554454ul))
      tmp_if_expr_1 = connection->daemon->pool_size;

    else
      tmp_if_expr_1 = (unsigned long int)2 * ((unsigned long int)0xFFFFFF + sizeof(char [10l]) /*10ul*/  + (unsigned long int)2);
    size = tmp_if_expr_1;
    do
    {
      size = size / (unsigned long int)2;
      if(!(size >= 128ul))
      {
        connection_close_error(connection, "Closing connection (out of memory)\n");
        return 0;
      }

      void *return_value_MHD_pool_allocate_2;
      return_value_MHD_pool_allocate_2=MHD_pool_allocate(connection->pool, size, 0);
      buf = (char *)return_value_MHD_pool_allocate_2;
    }
    while(buf == ((char *)NULL));
    connection->write_buffer_size = size;
    connection->write_buffer = buf;
  }

  _Bool tmp_if_expr_3;
  if(response->total_size == 0ul)
    ret = (signed long int)0;

  else
  {
    if(connection->response_write_position >= response->data_start)
      tmp_if_expr_3 = response->data_start + response->data_size > connection->response_write_position ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
    {
      const unsigned long int data_write_offset = (unsigned long int)(connection->response_write_position - response->data_start);
      ret = (signed long int)(response->data_size - data_write_offset);
      if(!(connection->write_buffer_size + 18446744073709551606ul + 18446744073709551614ul >= (unsigned long int)ret))
        ret = (signed long int)((connection->write_buffer_size - sizeof(char [10l]) /*10ul*/ ) - (unsigned long int)2);

      memcpy((void *)&connection->write_buffer[(signed long int)sizeof(char [10l]) /*10ul*/ ], (const void *)&response->data[(signed long int)data_write_offset], (unsigned long int)ret);
    }

    else
      ret=response->crc(response->crc_cls, connection->response_write_position, &connection->write_buffer[(signed long int)sizeof(char [10l]) /*10ul*/ ], (connection->write_buffer_size - sizeof(char [10l]) /*10ul*/ ) - (unsigned long int)2);
  }
  _Bool tmp_if_expr_4;
  if(ret == -2l)
  {
    response->total_size = connection->response_write_position;
    connection_close_error(connection, "Closing connection (error generating response)\n");
    return 0;
  }

  else
  {
    if(ret == -1l)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (unsigned long int)0 == response->total_size ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
    {
      strcpy(connection->write_buffer, "0\r\n");
      connection->write_buffer_append_offset = (unsigned long int)3;
      connection->write_buffer_send_offset = (unsigned long int)0;
      response->total_size = connection->response_write_position;
      return 1;
    }

    else
      if(ret == 0l)
      {
        connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_CHUNKED_BODY_UNREADY;
        return 0;
      }

      else
      {
        if(ret >= 16777216l)
          ret = (signed long int)0xFFFFFF;

        cblen=snprintf(cbuf, sizeof(char [10l]) /*10ul*/ , "%X\r\n", (unsigned int)ret);
        memcpy((void *)&connection->write_buffer[(signed long int)(sizeof(char [10l]) /*10ul*/  - (unsigned long int)cblen)], (const void *)cbuf, (unsigned long int)cblen);
        memcpy((void *)&connection->write_buffer[(signed long int)(sizeof(char [10l]) /*10ul*/  + (unsigned long int)ret)], (const void *)"\r\n", (unsigned long int)2);
        connection->response_write_position = connection->response_write_position + (unsigned long int)ret;
        connection->write_buffer_send_offset = sizeof(char [10l]) /*10ul*/  - (unsigned long int)cblen;
        connection->write_buffer_append_offset = sizeof(char [10l]) /*10ul*/  + (unsigned long int)ret + (unsigned long int)2;
        return 1;
      }
  }
}

// try_ready_normal_body
// file connection.c line 332
static signed int try_ready_normal_body(struct MHD_Connection *connection)
{
  signed long int ret;
  struct MHD_Response *response = connection->response;
  _Bool tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  signed int return_value_pthread_mutex_unlock_3;
  signed int return_value_pthread_mutex_unlock_4;
  if(response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL))
    return 1;

  else
  {
    if(response->total_size == 0ul)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = connection->response_write_position == response->total_size ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      return 1;

    else
      if(connection->response_write_position >= response->data_start)
      {
        if(connection->response_write_position >= response->data_size + response->data_start)
          goto __CPROVER_DUMP_L5;

        return 1;
      }

      else
      {

      __CPROVER_DUMP_L5:
        ;
        if(!(response->fd == -1))
        {
          if(!((MHD_USE_SSL & (signed int)connection->daemon->options) == 0))
            goto __CPROVER_DUMP_L6;

          return 1;
        }

        else
        {

        __CPROVER_DUMP_L6:
          ;
          if(!(response->data_buffer_size >= response->total_size + -connection->response_write_position))
            tmp_if_expr_2 = (unsigned long int)response->data_buffer_size;

          else
            tmp_if_expr_2 = response->total_size - connection->response_write_position;
          ret=response->crc(response->crc_cls, connection->response_write_position, response->data, (unsigned long int)tmp_if_expr_2);
          if(ret == -2l || ret == -1l)
          {
            response->total_size = connection->response_write_position;
            if(!(response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
            {
              return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&response->mutex);
              (void)(0 == return_value_pthread_mutex_unlock_3 ? 1 : 0);
            }

            if(ret == -1l)
              MHD_connection_close(connection, (enum MHD_RequestTerminationCode)MHD_REQUEST_TERMINATED_COMPLETED_OK);

            else
              connection_close_error(connection, "Closing connection (stream error)\n");
            return 0;
          }

          response->data_start = connection->response_write_position;
          response->data_size = (unsigned long int)ret;
          if(ret == 0l)
          {
            connection->state = (enum MHD_CONNECTION_STATE)MHD_CONNECTION_NORMAL_BODY_UNREADY;
            if(!(response->crc == ((signed long int (*)(void *, unsigned long int, char *, unsigned long int))NULL)))
            {
              return_value_pthread_mutex_unlock_4=pthread_mutex_unlock(&response->mutex);
              (void)(0 == return_value_pthread_mutex_unlock_4 ? 1 : 0);
            }

            return 0;
          }

          return 1;
        }
      }
  }
}

// unescape_wrapper
// file daemon.c line 2971
static unsigned long int unescape_wrapper(void *cls, struct MHD_Connection *connection, char *val)
{
  unsigned long int return_value_MHD_http_unescape_1;
  return_value_MHD_http_unescape_1=MHD_http_unescape(val);
  return return_value_MHD_http_unescape_1;
}

// update_last_activity
// file connection.c line 1968
static void update_last_activity(struct MHD_Connection *connection)
{
  struct MHD_Daemon *daemon = connection->daemon;
  connection->last_activity=MHD_monotonic_sec_counter();
  signed int return_value_pthread_mutex_lock_1;
  signed int return_value_pthread_mutex_unlock_2;
  if(connection->connection_timeout == daemon->connection_timeout)
  {
    if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
    {
      return_value_pthread_mutex_lock_1=pthread_mutex_lock(&daemon->cleanup_connection_mutex);
      if(!(return_value_pthread_mutex_lock_1 == 0))
        mhd_panic(mhd_panic_cls, "connection.c", (unsigned int)1979, "Failed to acquire cleanup mutex\n");

    }

    do
    {
      if(connection->prevX == ((struct MHD_Connection *)NULL))
        daemon->normal_timeout_head = connection->nextX;

      else
        connection->prevX->nextX = connection->nextX;
      if(connection->nextX == ((struct MHD_Connection *)NULL))
        daemon->normal_timeout_tail = connection->prevX;

      else
        connection->nextX->prevX = connection->prevX;
      connection->nextX = (struct MHD_Connection *)(void *)0;
      connection->prevX = (struct MHD_Connection *)(void *)0;
    }
    while((_Bool)0);
    do
    {
      connection->nextX = daemon->normal_timeout_head;
      connection->prevX = (struct MHD_Connection *)(void *)0;
      if(daemon->normal_timeout_tail == ((struct MHD_Connection *)NULL))
        daemon->normal_timeout_tail = connection;

      else
        daemon->normal_timeout_head->prevX = connection;
      daemon->normal_timeout_head = connection;
    }
    while((_Bool)0);
    if(!((MHD_USE_THREAD_PER_CONNECTION & (signed int)daemon->options) == 0))
    {
      return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&daemon->cleanup_connection_mutex);
      if(!(return_value_pthread_mutex_unlock_2 == 0))
        mhd_panic(mhd_panic_cls, "connection.c", (unsigned int)1988, "Failed to release cleanup mutex\n");

    }

  }

}

